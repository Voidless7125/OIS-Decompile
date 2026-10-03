#include "../ois_server.exe.h"


void FUN_00435440(undefined4 *param_1)

{
  basic_string<> *pbVar1;
  int iVar2;
  basic_string<> *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  basic_string<> *pbVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  uint uVar12;
  void *pvVar13;
  basic_string<> *in_stack_ffffff88;
  undefined4 *puVar14;
  basic_string<> *pbVar15;
  char *pcVar16;
  basic_string<> **ppbVar17;
  basic_string<> *local_50;
  undefined4 *local_4c;
  basic_string<> *local_48;
  undefined4 *local_44;
  basic_string<> *local_40;
  basic_string<> *local_3c;
  void *local_38;
  basic_string<> *local_34;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2bfc;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar6 = param_1 + 0xda;
  local_4c = param_1;
  if ((3 < (uint)(param_1[0xdb] - *piVar6)) || (iVar2 = param_1[0x11], iVar2 == 0))
  goto LAB_00436199;
  if (*(int *)(iVar2 + 0x70) == 7) {
    iVar2 = FUN_0051f090(param_1[9]);
    if (iVar2 == 0) goto LAB_00436199;
    pbVar3 = (basic_string<> *)FUN_005adb0f(0xac);
    local_8 = 0;
    local_48 = pbVar3;
    FUN_004024e0(&stack0xffffff88,param_1 + 0x8e);
    uVar12 = 0;
    local_50 = (basic_string<> *)FUN_0049fee0(pbVar3,0,in_stack_ffffff88);
    local_8 = 0xffffffff;
    *(undefined2 *)(local_50 + 0x1c) = 0;
    local_50[0x28] = (basic_string<>)0x1;
    local_48 = local_50;
    local_34 = (basic_string<> *)FUN_005adb0f(0x6c);
    puVar4 = FUN_0049fe60(local_34,0,0);
    local_44 = puVar4;
    uVar5 = rand();
    uVar5 = uVar5 & 0x80000001;
    bVar11 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar11 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar11) {
      pcVar16 = "`7This is the %s authority vessel %s. How can we assist you, civilian?";
    }
    else {
      pcVar16 = "`7This is the %s, representing the %s. Can we be of assistance?";
    }
    piVar6 = (int *)FUN_00591e00((undefined1 *)local_30,pcVar16);
    FUN_00413230(puVar4 + 0xf,piVar6);
    if (0xf < local_1c) {
      pvVar8 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar8 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8)))) goto LAB_00435583;
      FUN_005adb3f(pvVar8);
    }
    pbVar3 = (basic_string<> *)FUN_005adb0f(0x70);
    local_8 = 1;
    pvVar8 = (void *)(uVar12 & 0xffffff00);
    local_34 = pbVar3;
    FUN_00402690(&stack0xffffff84,"I have detected a vessel engaging in piracy.",0x2c);
    pbVar3 = (basic_string<> *)FUN_00430610(pbVar3,0,0,pvVar8);
    local_8 = 0xffffffff;
    local_3c = pbVar3;
    local_34 = pbVar3;
    pbVar7 = (basic_string<> *)FUN_005adb0f(0x40);
    local_8 = 2;
    puVar14 = (undefined4 *)((uint)in_stack_ffffff88 & 0xffffff00);
    local_40 = pbVar7;
    FUN_00402690(&stack0xffffff88,"!PIRATE_REPORTED",0x10);
    uVar5 = 0x435642;
    local_40 = (basic_string<> *)FUN_004a1a40(pbVar7,puVar14);
    local_8 = 0xffffffff;
    FUN_004130e0(pbVar3 + 100,&local_40);
    puVar9 = local_44;
    puVar4 = (undefined4 *)local_44[0x19];
    if ((undefined4 *)local_44[0x1a] == puVar4) {
      FUN_00414080(local_44 + 0x18,puVar4,&local_3c);
    }
    else {
      *puVar4 = local_34;
      local_44[0x19] = local_44[0x19] + 4;
    }
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 3;
    pvVar13 = (void *)(uVar5 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,"I have sensor evidence of a merchant smuggling illegal goods.",
                 0x3d);
    local_40 = (basic_string<> *)FUN_00430610(pvVar8,1,0,pvVar13);
    local_8 = 0xffffffff;
    local_3c = local_40;
    pvVar8 = (void *)FUN_005adb0f(0x24);
    local_8 = 4;
    pbVar15 = (basic_string<> *)((uint)puVar14 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff88,&PTR_005ce008,0);
    local_34 = FUN_004a3a90(pvVar8,0x13,pbVar15);
    local_8 = 0xffffffff;
    FUN_004130e0(local_40 + 0x58,&local_34);
    pvVar8 = (void *)FUN_005adb0f(0x40);
    local_8 = 5;
    puVar14 = (undefined4 *)((uint)pbVar15 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff88,"check=SMUGGLER_DETECTED",0x17);
    uVar5 = 0x435760;
    local_34 = (basic_string<> *)FUN_004a1a40(pvVar8,puVar14);
    pbVar3 = local_40;
    local_8 = 0xffffffff;
    FUN_004130e0(local_40 + 100,&local_34);
    puVar4 = (undefined4 *)puVar9[0x19];
    if ((undefined4 *)puVar9[0x1a] == puVar4) {
      FUN_00414080(puVar9 + 0x18,puVar4,&local_3c);
    }
    else {
      *puVar4 = pbVar3;
      puVar9[0x19] = puVar9[0x19] + 4;
    }
    uVar12 = rand();
    uVar12 = uVar12 & 0x80000001;
    bVar11 = uVar12 == 0;
    if ((int)uVar12 < 0) {
      bVar11 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar11) {
      pvVar8 = (void *)FUN_005adb0f(0x70);
      local_8 = 6;
      uVar12 = 0x58;
      pcVar16 = 
      "Oh. Nothing. Sorry, my finger slipped on the comms panel. Sorry for taking up your time.";
    }
    else {
      pvVar8 = (void *)FUN_005adb0f(0x70);
      local_8 = 7;
      uVar12 = 0x2e;
      pcVar16 = "Never mind. Apologies for taking up your time.";
    }
    pvVar13 = (void *)(uVar5 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,pcVar16,uVar12);
    local_3c = (basic_string<> *)FUN_00430610(pvVar8,2,0,pvVar13);
    local_8 = 0xffffffff;
    puVar4 = (undefined4 *)puVar9[0x19];
    if ((undefined4 *)puVar9[0x1a] == puVar4) {
      FUN_00414080(puVar9 + 0x18,puVar4,&local_3c);
    }
    else {
      *puVar4 = local_3c;
      puVar9[0x19] = puVar9[0x19] + 4;
    }
    pbVar3 = local_50;
    pbVar7 = local_50 + 0xa0;
    puVar4 = *(undefined4 **)(local_50 + 0xa4);
    if (*(undefined4 **)(local_50 + 0xa8) == puVar4) {
      FUN_00414080(pbVar7,puVar4,&local_44);
    }
    else {
      *puVar4 = puVar9;
      *(int *)(local_50 + 0xa4) = *(int *)(local_50 + 0xa4) + 4;
    }
    local_38 = (void *)FUN_005adb0f(0x6c);
    puVar4 = FUN_0049fe60(local_38,0,1);
    local_44 = puVar4;
    uVar5 = rand();
    uVar5 = uVar5 & 0x80000001;
    bVar11 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar11 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar11) {
      uVar5 = 0x37;
      pcVar16 = "`7Can you give us the location of the suspected pirate?";
    }
    else {
      uVar5 = 0x36;
      pcVar16 = "`7In which quadrant did you detect the alleged pirate?";
    }
    FUN_00402690(puVar4 + 0xf,pcVar16,uVar5);
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 8;
    pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,"Quadrant A",10);
    local_40 = (basic_string<> *)FUN_00430610(pvVar8,0,1,pvVar13);
    local_8 = 0xffffffff;
    local_3c = local_40;
    pvVar8 = (void *)FUN_005adb0f(0x24);
    local_8 = 9;
    pbVar15 = (basic_string<> *)((uint)puVar14 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff88,&DAT_005e1d18,1);
    uVar5 = 0;
    local_34 = FUN_004a3a90(pvVar8,0x12,pbVar15);
    pbVar1 = local_40;
    local_8 = 0xffffffff;
    FUN_004130e0(local_40 + 0x58,&local_34);
    puVar9 = (undefined4 *)puVar4[0x19];
    puVar14 = puVar4 + 0x18;
    if ((undefined4 *)puVar4[0x1a] == puVar9) {
      FUN_00414080(puVar14,puVar9,&local_3c);
    }
    else {
      *puVar9 = pbVar1;
      puVar4[0x19] = puVar4[0x19] + 4;
    }
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 10;
    pvVar13 = (void *)(uVar5 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,"Quadrant B",10);
    local_40 = (basic_string<> *)FUN_00430610(pvVar8,1,1,pvVar13);
    local_8 = 0xffffffff;
    local_3c = local_40;
    pvVar8 = (void *)FUN_005adb0f(0x24);
    local_8 = 0xb;
    pbVar15 = (basic_string<> *)((uint)pbVar15 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff88,&DAT_005e1d1c,1);
    uVar5 = 0;
    local_34 = FUN_004a3a90(pvVar8,0x12,pbVar15);
    pbVar1 = local_40;
    local_8 = 0xffffffff;
    FUN_004130e0(local_40 + 0x58,&local_34);
    puVar9 = (undefined4 *)puVar4[0x19];
    if ((undefined4 *)puVar4[0x1a] == puVar9) {
      FUN_00414080(puVar14,puVar9,&local_3c);
    }
    else {
      *puVar9 = pbVar1;
      puVar4[0x19] = puVar4[0x19] + 4;
    }
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 0xc;
    pvVar13 = (void *)(uVar5 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,"Quadrant C",10);
    local_40 = (basic_string<> *)FUN_00430610(pvVar8,2,1,pvVar13);
    local_8 = 0xffffffff;
    local_3c = local_40;
    pvVar8 = (void *)FUN_005adb0f(0x24);
    local_8 = 0xd;
    pbVar15 = (basic_string<> *)((uint)pbVar15 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff88,&DAT_005e1b94,1);
    uVar5 = 0;
    local_34 = FUN_004a3a90(pvVar8,0x12,pbVar15);
    pbVar1 = local_40;
    local_8 = 0xffffffff;
    FUN_004130e0(local_40 + 0x58,&local_34);
    puVar9 = (undefined4 *)puVar4[0x19];
    if ((undefined4 *)puVar4[0x1a] == puVar9) {
      FUN_00414080(puVar14,puVar9,&local_3c);
    }
    else {
      *puVar9 = pbVar1;
      puVar4[0x19] = puVar4[0x19] + 4;
    }
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 0xe;
    pvVar13 = (void *)(uVar5 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,"Quadrant D",10);
    local_40 = (basic_string<> *)FUN_00430610(pvVar8,3,1,pvVar13);
    local_8 = 0xffffffff;
    local_3c = local_40;
    pvVar8 = (void *)FUN_005adb0f(0x24);
    local_8 = 0xf;
    pbVar15 = (basic_string<> *)((uint)pbVar15 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff88,&DAT_005e1d20,1);
    uVar5 = 0;
    local_34 = FUN_004a3a90(pvVar8,0x12,pbVar15);
    pbVar1 = local_40;
    local_8 = 0xffffffff;
    FUN_004130e0(local_40 + 0x58,&local_34);
    puVar9 = (undefined4 *)puVar4[0x19];
    if ((undefined4 *)puVar4[0x1a] == puVar9) {
      FUN_00414080(puVar14,puVar9,&local_3c);
    }
    else {
      *puVar9 = pbVar1;
      puVar4[0x19] = puVar4[0x19] + 4;
    }
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 0x10;
    pvVar13 = (void *)(uVar5 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,"Never mind. Sorry.",0x12);
    local_3c = (basic_string<> *)FUN_00430610(pvVar8,4,1,pvVar13);
    local_8 = 0xffffffff;
    puVar9 = (undefined4 *)puVar4[0x19];
    if ((undefined4 *)puVar4[0x1a] == puVar9) {
      FUN_00414080(puVar14,puVar9,&local_3c);
    }
    else {
      *puVar9 = local_3c;
      puVar4[0x19] = puVar4[0x19] + 4;
    }
    puVar4 = *(undefined4 **)(pbVar3 + 0xa4);
    if (*(undefined4 **)(pbVar3 + 0xa8) == puVar4) {
      FUN_00414080(pbVar7,puVar4,&local_44);
    }
    else {
      *puVar4 = local_44;
      *(int *)(pbVar3 + 0xa4) = *(int *)(pbVar3 + 0xa4) + 4;
    }
    local_38 = (void *)FUN_005adb0f(0x6c);
    puVar4 = FUN_0049fe60(local_38,0,2);
    local_44 = puVar4;
    FUN_00402690(puVar4 + 0xf,
                 "Thank you for this information. We will investigate this and contact you.",0x49);
    uVar5 = rand();
    uVar5 = uVar5 & 0x80000001;
    bVar11 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar11 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar11) {
      pvVar8 = (void *)FUN_005adb0f(0x70);
      local_8 = 0x11;
      uVar5 = 10;
      pcVar16 = "Thank you.";
    }
    else {
      pvVar8 = (void *)FUN_005adb0f(0x70);
      local_8 = 0x12;
      uVar5 = 0xb;
      pcVar16 = "No problem.";
    }
    pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,pcVar16,uVar5);
    FUN_00430610(pvVar8,0,2,pvVar13);
    local_8 = 0xffffffff;
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 0x13;
    pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,"Just doing my civic duty, sir!",0x1e);
    local_3c = (basic_string<> *)FUN_00430610(pvVar8,1,2,pvVar13);
    local_8 = 0xffffffff;
    puVar9 = (undefined4 *)puVar4[0x19];
    if ((undefined4 *)puVar4[0x1a] == puVar9) {
      FUN_00414080(puVar4 + 0x18,puVar9,&local_3c);
    }
    else {
      *puVar9 = local_3c;
      puVar4[0x19] = puVar4[0x19] + 4;
    }
    puVar9 = *(undefined4 **)(pbVar3 + 0xa4);
    if (*(undefined4 **)(pbVar3 + 0xa8) == puVar9) {
      FUN_00414080(pbVar7,puVar9,&local_44);
    }
    else {
      *puVar9 = puVar4;
      *(int *)(pbVar3 + 0xa4) = *(int *)(pbVar3 + 0xa4) + 4;
    }
    local_38 = (void *)FUN_005adb0f(0x6c);
    puVar9 = FUN_0049fe60(local_38,0,3);
    local_44 = puVar9;
    FUN_00402690(puVar9 + 0xf,
                 "Thank you for this information. We will send a patrol vessel to this quadrant as soon as possible."
                 ,0x62);
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 0x14;
    pvVar13 = (void *)((uint)pvVar13 & 0xffffff00);
    local_38 = pvVar8;
    FUN_00402690(&stack0xffffff84,"Thank you.",10);
    local_3c = (basic_string<> *)FUN_00430610(pvVar8,0,3,pvVar13);
    local_8 = 0xffffffff;
    puVar4 = (undefined4 *)puVar9[0x19];
    if ((undefined4 *)puVar9[0x1a] == puVar4) {
      FUN_00414080(puVar9 + 0x18,puVar4,&local_3c);
    }
    else {
      *puVar4 = local_3c;
      puVar9[0x19] = puVar9[0x19] + 4;
    }
    puVar4 = *(undefined4 **)(pbVar3 + 0xa4);
    if (*(undefined4 **)(pbVar3 + 0xa8) == puVar4) {
      FUN_00414080(pbVar7,puVar4,&local_44);
    }
    else {
      *puVar4 = puVar9;
      *(int *)(pbVar3 + 0xa4) = *(int *)(pbVar3 + 0xa4) + 4;
    }
    piVar6 = local_4c + 0xda;
    puVar4 = (undefined4 *)local_4c[0xdb];
    if ((undefined4 *)local_4c[0xdc] != puVar4) {
      *puVar4 = local_50;
      local_4c[0xdb] = local_4c[0xdb] + 4;
      goto LAB_00436199;
    }
    ppbVar17 = &local_48;
    goto LAB_00436193;
  }
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x70) != 1)) goto LAB_00436199;
  pvVar8 = (void *)FUN_005adb0f(0xac);
  local_8 = 0x15;
  local_48 = (basic_string<> *)(param_1 + 0x8e);
  local_38 = pvVar8;
  FUN_004024e0(&stack0xffffff88,(undefined4 *)local_48);
  uVar12 = 0;
  local_50 = (basic_string<> *)FUN_0049fee0(pvVar8,0,in_stack_ffffff88);
  local_8 = 0xffffffff;
  *(undefined2 *)(local_50 + 0x1c) = 0;
  local_50[0x28] = (basic_string<>)0x1;
  local_34 = local_50;
  local_38 = (void *)FUN_005adb0f(0x6c);
  pbVar3 = (basic_string<> *)FUN_0049fe60(local_38,0,0);
  local_3c = pbVar3;
  uVar5 = rand();
  uVar5 = uVar5 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar5) {
  default:
    uVar5 = 0xc;
    pcVar16 = "`7Hey there!";
    break;
  case 1:
    uVar5 = 0x1e;
    pcVar16 = "`7Greetings, fellow traveller.";
    break;
  case 2:
    pcVar16 = "`7%s here.";
    goto LAB_00435f1a;
  case 3:
    pcVar16 = "`7This is the %s.";
LAB_00435f1a:
    piVar10 = (int *)FUN_00591e00((undefined1 *)local_30,pcVar16);
    FUN_00413230(pbVar3 + 0x3c,piVar10);
    if (0xf < local_1c) {
      pvVar8 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar8 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8)))) {
LAB_00435583:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    goto LAB_00435f90;
  }
  FUN_00402690(pbVar3 + 0x3c,pcVar16,uVar5);
LAB_00435f90:
  iVar2 = rand();
  switch(iVar2 % 6) {
  case 0:
    uVar5 = 0x15;
    pcVar16 = " State your business.";
    break;
  case 1:
    uVar5 = 0x11;
    pcVar16 = " Can we help you?";
    break;
  case 2:
    uVar5 = 0x1e;
    pcVar16 = " How\'s your ship treating you?";
    break;
  case 3:
    uVar5 = 0x16;
    pcVar16 = " What\'s the good word?";
    break;
  case 4:
    uVar5 = 0x1d;
    pcVar16 = " How\'re things going for you?";
    break;
  case 5:
    uVar5 = 0xb;
    pcVar16 = " What\'s up?";
    break;
  default:
    goto switchD_00435fa3_default;
  }
  FUN_00403640(pbVar3 + 0x3c,pcVar16,uVar5);
switchD_00435fa3_default:
  pvVar8 = (void *)FUN_005adb0f(0x70);
  local_8 = 0x16;
  pvVar13 = (void *)(uVar12 & 0xffffff00);
  local_38 = pvVar8;
  FUN_00402690(&stack0xffffff84,"Drop your cargo or be fired upon.",0x21);
  puVar9 = FUN_00430610(pvVar8,0,0,pvVar13);
  local_8 = 0xffffffff;
  local_4c = puVar9;
  local_44 = puVar9;
  pvVar8 = (void *)FUN_005adb0f(0x24);
  local_8 = 0x17;
  local_38 = pvVar8;
  FUN_004024e0(&stack0xffffff88,(undefined4 *)local_48);
  uVar5 = 0;
  local_48 = FUN_004a3a90(pvVar8,0x14,in_stack_ffffff88);
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)puVar9[0x17];
  if ((undefined4 *)puVar9[0x18] == puVar4) {
    FUN_004141e0(puVar9 + 0x16,puVar4,&local_48);
  }
  else {
    *puVar4 = local_48;
    puVar9[0x17] = puVar9[0x17] + 4;
  }
  pbVar3 = local_3c;
  puVar4 = *(undefined4 **)(local_3c + 100);
  if (*(undefined4 **)(local_3c + 0x68) == puVar4) {
    FUN_00414080(local_3c + 0x60,puVar4,&local_44);
  }
  else {
    *puVar4 = local_4c;
    *(int *)(local_3c + 100) = *(int *)(local_3c + 100) + 4;
  }
  uVar12 = rand();
  uVar12 = uVar12 & 0x80000001;
  bVar11 = uVar12 == 0;
  if ((int)uVar12 < 0) {
    bVar11 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar11) {
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 0x18;
    uVar12 = 0x58;
    pcVar16 = 
    "Oh. Nothing. Sorry, my finger slipped on the comms panel. Sorry for taking up your time.";
  }
  else {
    pvVar8 = (void *)FUN_005adb0f(0x70);
    local_8 = 0x19;
    uVar12 = 0x2e;
    pcVar16 = "Never mind. Apologies for taking up your time.";
  }
  pvVar13 = (void *)(uVar5 & 0xffffff00);
  local_38 = pvVar8;
  FUN_00402690(&stack0xffffff84,pcVar16,uVar12);
  local_44 = FUN_00430610(pvVar8,2,0,pvVar13);
  local_8 = 0xffffffff;
  puVar4 = *(undefined4 **)(pbVar3 + 100);
  if (*(undefined4 **)(pbVar3 + 0x68) == puVar4) {
    FUN_00414080(pbVar3 + 0x60,puVar4,&local_44);
  }
  else {
    *puVar4 = local_44;
    *(int *)(pbVar3 + 100) = *(int *)(pbVar3 + 100) + 4;
  }
  pbVar3 = local_34;
  puVar4 = *(undefined4 **)(local_34 + 0xa4);
  if (*(undefined4 **)(local_34 + 0xa8) == puVar4) {
    FUN_00414080(local_34 + 0xa0,puVar4,&local_3c);
  }
  else {
    *puVar4 = local_3c;
    *(int *)(local_34 + 0xa4) = *(int *)(local_34 + 0xa4) + 4;
  }
  puVar4 = (undefined4 *)param_1[0xdb];
  if ((undefined4 *)param_1[0xdc] == puVar4) {
    ppbVar17 = &local_50;
LAB_00436193:
    FUN_00414080(piVar6,puVar4,ppbVar17);
  }
  else {
    *puVar4 = pbVar3;
    param_1[0xdb] = param_1[0xdb] + 4;
  }
LAB_00436199:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_004361e0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2c46;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) != puVar1) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    FUN_004024e0(puVar1 + 2,param_1 + 2);
    local_8 = 0;
    FUN_00436e40(puVar1 + 8,param_1 + 8);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00436d00(puVar1 + 0xb,param_1 + 0xb);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x38;
    ExceptionList = local_10;
    return;
  }
  FUN_00436300(this,puVar1,param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00436290(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  if (iVar2 != iVar1) {
    do {
      FUN_004304b0(iVar2);
      iVar2 = iVar2 + 0xa8;
    } while (iVar2 != iVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = iVar2;
  return;
}


void __thiscall FUN_004362d0(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  
  this_00 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) != this_00) {
    FUN_004368f0(this_00,param_1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xa8;
    return;
  }
  FUN_00436570(this,this_00,param_1);
  return;
}


int __thiscall FUN_00436300(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  void *pvVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2c86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar2 = ((int)param_1 - iVar6) / 0x38;
  iVar3 = (*(int *)((int)this + 4) - iVar6) / 0x38;
  if (iVar3 == 0x4924924) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar7 = iVar3 + 1;
  uVar5 = (*(int *)((int)this + 8) - iVar6) / 0x38;
  uVar4 = uVar7;
  if ((uVar5 <= 0x4924924 - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < uVar7)) {
    uVar4 = uVar7;
  }
  uVar7 = uVar4 * 0x38;
  if (uVar4 < 0x4924925) {
    if (0xfff < uVar7) goto LAB_004363cf;
    if (uVar7 == 0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_004363cf:
    uVar5 = uVar7 + 0x23;
    if (uVar5 <= uVar7) {
      uVar5 = 0xffffffff;
    }
    iVar6 = FUN_005adb0f(uVar5);
    if (iVar6 == 0) goto LAB_004363f2;
    puVar12 = (undefined4 *)(iVar6 + 0x23U & 0xffffffe0);
    puVar12[-1] = iVar6;
  }
  local_8 = 0;
  puVar1 = puVar12 + iVar2 * 0xe;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  FUN_004024e0(puVar1 + 2,param_2 + 2);
  local_8._0_1_ = 1;
  FUN_00436e40(puVar1 + 8,param_2 + 8);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00436d00(puVar1 + 0xb,param_2 + 0xb);
  puVar9 = *(undefined4 **)((int)this + 4);
  puVar8 = *(undefined4 **)this;
  puVar13 = puVar12;
  if (param_1 != puVar9) {
    FUN_00436fa0(*(undefined4 **)this,param_1,puVar12);
    puVar9 = *(undefined4 **)((int)this + 4);
    puVar13 = puVar1 + 0xe;
    puVar8 = param_1;
  }
  FUN_00436fa0(puVar8,puVar9,puVar13);
  pvVar10 = *(void **)this;
  if (pvVar10 != (void *)0x0) {
    pvVar11 = *(void **)((int)this + 4);
    if (pvVar10 != pvVar11) {
      do {
        FUN_00430450((int)pvVar10);
        pvVar10 = (void *)((int)pvVar10 + 0x38);
      } while (pvVar10 != pvVar11);
      pvVar10 = *(void **)this;
    }
    pvVar11 = pvVar10;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar10) / 0x38) * 0x38)) &&
       (pvVar11 = *(void **)((int)pvVar10 + -4), 0x1f < (uint)((int)pvVar10 + (-4 - (int)pvVar11))))
    {
LAB_004363f2:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  *(undefined4 **)this = puVar12;
  *(undefined4 **)((int)this + 4) = puVar12 + (iVar3 + 1) * 0xe;
  *(undefined4 **)((int)this + 8) = puVar12 + uVar4 * 0xe;
  ExceptionList = local_10;
  return *(int *)this + iVar2 * 0x38;
}


int __thiscall FUN_00436570(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2cb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)this;
  iVar1 = (*(int *)((int)this + 4) - iVar4) / 0xa8;
  if (iVar1 == 0x1861861) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar5 = iVar1 + 1;
  uVar2 = (*(int *)((int)this + 8) - iVar4) / 0xa8;
  uVar6 = uVar5;
  if ((uVar2 <= 0x1861861 - (uVar2 >> 1)) && (uVar6 = (uVar2 >> 1) + uVar2, uVar6 < uVar5)) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6 * 0xa8;
  if (uVar6 < 0x1861862) {
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_005adb0f(uVar5);
      }
      goto LAB_00436673;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar2 = uVar5 + 0x23;
  if (uVar2 <= uVar5) {
    uVar2 = 0xffffffff;
  }
  iVar3 = FUN_005adb0f(uVar2);
  if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pvVar7 = (void *)(iVar3 + 0x23U & 0xffffffe0);
  *(int *)((int)pvVar7 - 4) = iVar3;
LAB_00436673:
  iVar4 = (((int)param_1 - iVar4) / 0xa8) * 0xa8;
  local_8 = 0;
  this_00 = (void *)(iVar4 + (int)pvVar7);
  FUN_004368f0(this_00,param_2);
  if (param_1 == *(undefined4 **)((int)this + 4)) {
    FUN_00436c00(*(undefined4 **)this,*(undefined4 **)((int)this + 4),pvVar7);
  }
  else {
    FUN_00436c80(*(undefined4 **)this,param_1,pvVar7);
    FUN_00436c80(param_1,*(undefined4 **)((int)this + 4),(void *)((int)this_00 + 0xa8));
  }
  FUN_00436b60(this,(int)pvVar7,iVar1 + 1,uVar6);
  ExceptionList = local_10;
  return *(int *)this + iVar4;
}


int __thiscall FUN_00436730(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2cd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)this;
  iVar1 = (*(int *)((int)this + 4) - iVar4) / 0xa8;
  if (iVar1 == 0x1861861) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar5 = iVar1 + 1;
  uVar2 = (*(int *)((int)this + 8) - iVar4) / 0xa8;
  uVar6 = uVar5;
  if ((uVar2 <= 0x1861861 - (uVar2 >> 1)) && (uVar6 = (uVar2 >> 1) + uVar2, uVar6 < uVar5)) {
    uVar6 = uVar5;
  }
  uVar5 = uVar6 * 0xa8;
  if (uVar6 < 0x1861862) {
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)FUN_005adb0f(uVar5);
      }
      goto LAB_00436833;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar2 = uVar5 + 0x23;
  if (uVar2 <= uVar5) {
    uVar2 = 0xffffffff;
  }
  iVar3 = FUN_005adb0f(uVar2);
  if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  pvVar7 = (void *)(iVar3 + 0x23U & 0xffffffe0);
  *(int *)((int)pvVar7 - 4) = iVar3;
LAB_00436833:
  iVar4 = (((int)param_1 - iVar4) / 0xa8) * 0xa8;
  local_8 = 0;
  this_00 = (void *)(iVar4 + (int)pvVar7);
  FUN_00436a90(this_00,param_2);
  if (param_1 == *(undefined4 **)((int)this + 4)) {
    FUN_00436c00(*(undefined4 **)this,*(undefined4 **)((int)this + 4),pvVar7);
  }
  else {
    FUN_00436c80(*(undefined4 **)this,param_1,pvVar7);
    FUN_00436c80(param_1,*(undefined4 **)((int)this + 4),(void *)((int)this_00 + 0xa8));
  }
  FUN_00436b60(this,(int)pvVar7,iVar1 + 1,uVar6);
  ExceptionList = local_10;
  return *(int *)this + iVar4;
}


undefined4 * __thiscall FUN_004368f0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b2d2c;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar6 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = uVar6;
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x14) = uVar3;
  *(undefined8 *)((int)this + 0x18) = *(undefined8 *)(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar6 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = uVar6;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  *(undefined8 *)((int)this + 0x30) = *(undefined8 *)(param_1 + 0xc);
  param_1[0xc] = 0;
  param_1[0xd] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 100) = 0;
  uStack_7 = 0;
  uVar4 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  piVar1 = (int *)param_1[0x19];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1 + 0x10) {
      uVar6 = (**(code **)(*piVar1 + 4))((int)this + 0x40,uVar5);
      *(undefined4 *)((int)this + 100) = uVar6;
      local_8 = 3;
      piVar1 = (int *)param_1[0x19];
      uVar4 = uStack_7;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x10);
        param_1[0x19] = 0;
        uVar4 = uStack_7;
      }
    }
    else {
      *(int **)((int)this + 100) = piVar1;
      param_1[0x19] = 0;
      uVar4 = uStack_7;
    }
  }
  uStack_7 = uVar4;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  uVar6 = param_1[0x1b];
  uVar2 = param_1[0x1c];
  uVar3 = param_1[0x1d];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = uVar6;
  *(undefined4 *)((int)this + 0x70) = uVar2;
  *(undefined4 *)((int)this + 0x74) = uVar3;
  *(undefined8 *)((int)this + 0x78) = *(undefined8 *)(param_1 + 0x1e);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0xf;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  local_8 = 6;
  piVar1 = (int *)param_1[0x29];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1 + 0x20) {
      uVar6 = (**(code **)(*piVar1 + 4))((int)this + 0x80);
      *(undefined4 *)((int)this + 0xa4) = uVar6;
      _local_8 = CONCAT31(uStack_7,7);
      piVar1 = (int *)param_1[0x29];
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_10;
        return this;
      }
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x20);
    }
    else {
      *(int **)((int)this + 0xa4) = piVar1;
    }
    param_1[0x29] = 0;
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __thiscall FUN_00436a90(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2d8c;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  FUN_004024e0((void *)((int)this + 8),param_1 + 2);
  local_8 = 0;
  FUN_004024e0((void *)((int)this + 0x20),param_1 + 8);
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 100) = 0;
  local_8._0_1_ = 2;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x19])((int)this + 0x40,uVar1);
    *(undefined4 *)((int)this + 100) = uVar2;
  }
  local_8._0_1_ = 3;
  FUN_004024e0((void *)((int)this + 0x68),param_1 + 0x1a);
  *(undefined4 *)((int)this + 0xa4) = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x29])((int)this + 0x80);
    *(undefined4 *)((int)this + 0xa4) = uVar2;
  }
  ExceptionList = local_10;
  return this;
}


void __thiscall FUN_00436b60(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((int)this + 4);
    if (pvVar1 != pvVar2) {
      do {
        FUN_004304b0((int)pvVar1);
        pvVar1 = (void *)((int)pvVar1 + 0xa8);
      } while (pvVar1 != pvVar2);
      pvVar1 = *(void **)this;
    }
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar1) / 0xa8) * 0xa8)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2 * 0xa8 + param_1;
  *(int *)((int)this + 8) = param_3 * 0xa8 + param_1;
  return;
}


void FUN_00436c00(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2db8;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x2a) {
    FUN_00436a90(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0xa8);
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}


void * FUN_00436c80(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2db8;
  local_8 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x2a) {
    FUN_004368f0(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0xa8);
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


uint * __thiscall FUN_00436d00(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *this_00;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2de8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar4 = (param_1[1] - *param_1) / 0xa8;
  if (uVar4 != 0) {
    if (0x1861861 < uVar4) {
                    // WARNING: Subroutine does not return
      FUN_00403b30();
    }
    uVar4 = uVar4 * 0xa8;
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_005adb0f(uVar4);
      }
    }
    else {
      uVar2 = uVar4 + 0x23;
      if (uVar2 <= uVar4) {
        uVar2 = 0xffffffff;
      }
      iVar3 = FUN_005adb0f(uVar2);
      if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = iVar3 + 0x23U & 0xffffffe0;
      *(int *)(uVar2 - 4) = iVar3;
    }
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = *(int *)this + uVar4;
    this_00 = *(void **)this;
    puVar1 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)*param_1;
    local_8 = 1;
    for (; puVar5 != puVar1; puVar5 = puVar5 + 0x2a) {
      FUN_00436a90(this_00,puVar5);
      this_00 = (void *)((int)this_00 + 0xa8);
    }
    *(void **)((int)this + 4) = this_00;
  }
  ExceptionList = local_10;
  return this;
}


uint * __thiscall FUN_00436e40(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b2e23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar4 = param_1[1] - *param_1 >> 6;
  if (uVar4 != 0) {
    if (0x3ffffff < uVar4) {
                    // WARNING: Subroutine does not return
      FUN_00403b30();
    }
    uVar4 = uVar4 * 0x40;
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_005adb0f(uVar4);
      }
    }
    else {
      uVar2 = uVar4 + 0x23;
      if (uVar2 <= uVar4) {
        uVar2 = 0xffffffff;
      }
      iVar3 = FUN_005adb0f(uVar2);
      if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = iVar3 + 0x23U & 0xffffffe0;
      *(int *)(uVar2 - 4) = iVar3;
    }
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = *(int *)this + uVar4;
    puVar6 = *(undefined4 **)this;
    puVar1 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)*param_1;
    local_8._1_3_ = 0;
    for (; local_8._0_1_ = 1, puVar5 != puVar1; puVar5 = puVar5 + 0x10) {
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      FUN_004024e0(puVar6 + 2,puVar5 + 2);
      local_8._0_1_ = 2;
      FUN_004024e0(puVar6 + 8,puVar5 + 8);
      puVar6[0xe] = puVar5[0xe];
      puVar6[0xf] = puVar5[0xf];
      puVar6 = puVar6 + 0x10;
    }
    *(undefined4 **)((int)this + 4) = puVar6;
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __fastcall FUN_00436fa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar8 = param_3;
  if (param_1 != param_2) {
    puVar6 = param_1 + 9;
    puVar7 = param_3 + 10;
    do {
      puVar1 = puVar6 + 0xe;
      *puVar8 = puVar6[-9];
      puVar2 = puVar6 + 5;
      puVar7[-9] = puVar6[-8];
      puVar8 = puVar8 + 0xe;
      puVar7[-4] = 0;
      puVar7[-3] = 0;
      uVar3 = puVar6[-6];
      uVar4 = puVar6[-5];
      uVar5 = puVar6[-4];
      puVar7[-8] = puVar6[-7];
      puVar7[-7] = uVar3;
      puVar7[-6] = uVar4;
      puVar7[-5] = uVar5;
      *(undefined8 *)(puVar7 + -4) = *(undefined8 *)(puVar6 + -3);
      puVar6[-3] = 0;
      puVar6[-2] = 0xf;
      *(undefined1 *)(puVar6 + -7) = 0;
      puVar7[-2] = 0;
      *(undefined4 *)((int)param_3 + (-0x38 - (int)param_1) + (int)puVar1) = 0;
      *puVar7 = 0;
      puVar7[-2] = puVar6[-1];
      *(undefined4 *)((int)param_3 + (-0x38 - (int)param_1) + (int)puVar1) = *puVar6;
      *puVar7 = puVar6[1];
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[1] = puVar6[2];
      puVar7[2] = puVar6[3];
      puVar7[3] = puVar6[4];
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6 = puVar1;
      puVar7 = puVar7 + 0xe;
    } while (puVar2 != param_2);
  }
  return puVar8;
}


void __fastcall FUN_004370a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = *param_1; iVar2 != iVar1; iVar2 = iVar2 + 0xa8) {
    FUN_004304b0(iVar2);
  }
  return;
}


void __fastcall FUN_004370d0(undefined4 *param_1)

{
  void *pvVar1;
  void *this;
  
  pvVar1 = (void *)param_1[1];
  for (this = (void *)*param_1; this != pvVar1; this = (void *)((int)this + 0x40)) {
    FUN_00404000(this,0);
  }
  return;
}


void __fastcall FUN_00437100(float *param_1)

{
  if (*param_1 < (float)*(int *)((int)param_1[1] + 0x10)) {
    return;
  }
  return;
}


int __fastcall FUN_00437150(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x80);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 10) && (iVar1 != 0xb)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


undefined4 __cdecl FUN_00437170(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  uVar6 = 0;
  uVar8 = DAT_0065b4d4 - DAT_0065b4d0 >> 2;
  if (uVar8 != 0) {
    do {
      iVar1 = *(int *)(DAT_0065b4d0 + uVar6 * 4);
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)pbVar2;
      }
      pbVar5 = (byte *)(iVar1 + 0x18);
      if (0xf < *(uint *)(iVar1 + 0x2c)) {
        pbVar5 = *(byte **)(iVar1 + 0x18);
      }
      uVar4 = FUN_004031f0(pbVar5,*(uint *)(iVar1 + 0x28),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        uVar7 = *(undefined4 *)(DAT_0065b4d0 + uVar6 * 4);
        goto LAB_004371c8;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  uVar7 = 0;
LAB_004371c8:
  if (0xf < in_stack_00000018) {
    pbVar5 = pbVar2;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar5 = *(byte **)(pbVar2 + -4);
      if ((byte *)0x1f < pbVar2 + (-4 - (int)pbVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar5);
  }
  return uVar7;
}


int __fastcall FUN_00437210(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 4;
  piVar2 = (int *)(param_1 + 8);
  do {
    iVar1 = iVar4 + 1;
    if (piVar2[-1] == 0) {
      iVar1 = iVar4;
    }
    iVar4 = iVar1 + 1;
    if (*piVar2 == 0) {
      iVar4 = iVar1;
    }
    iVar1 = iVar4 + 1;
    if (piVar2[1] == 0) {
      iVar1 = iVar4;
    }
    iVar3 = iVar1 + 1;
    if (piVar2[2] == 0) {
      iVar3 = iVar1;
    }
    iVar4 = iVar3 + 1;
    if (piVar2[3] == 0) {
      iVar4 = iVar3;
    }
    iVar5 = iVar5 + -1;
    piVar2 = piVar2 + 5;
  } while (iVar5 != 0);
  return iVar4;
}


void __thiscall FUN_00437260(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_8;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  local_8 = 0;
  if (*(int *)(param_1 + 0x20) - iVar6 >> 2 != 0) {
    do {
      iVar1 = local_8 * 4;
      if (-1 < *(int *)(iVar1 + iVar6)) {
        puVar3 = (undefined4 *)FUN_005adb0f(8);
        piVar2 = DAT_0065b5cc;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
        uVar5 = 0;
        *puVar3 = 0x42c80000;
        uVar9 = piVar2[1] - *piVar2 >> 2;
        if (uVar9 != 0) {
          puVar7 = (undefined4 *)*piVar2;
          do {
            if (*(int *)*puVar7 == iVar6) {
              uVar4 = ((undefined4 *)*piVar2)[uVar5];
              goto LAB_004372ef;
            }
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar5 < uVar9);
        }
        uVar4 = 0;
LAB_004372ef:
        puVar3[1] = uVar4;
        *(undefined4 **)((int)this + iVar1 + 4) = puVar3;
      }
      iVar6 = *(int *)(iVar1 + *(int *)(param_1 + 0x28));
      if (0 < iVar6) {
        **(float **)((int)this + iVar1 + 4) = (float)iVar6;
      }
      local_8 = local_8 + 1;
      iVar6 = *(int *)(param_1 + 0x1c);
    } while (local_8 < (uint)(*(int *)(param_1 + 0x20) - iVar6 >> 2));
  }
  uVar5 = 0;
  iVar6 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x38) - iVar6 >> 2 != 0) {
    do {
      if (-1 < *(int *)(iVar6 + uVar5 * 4)) {
        puVar3 = (undefined4 *)FUN_005adb0f(8);
        piVar2 = DAT_0065b5cc;
        iVar6 = *(int *)(*(int *)(param_1 + 0x34) + uVar5 * 4);
        uVar9 = 0;
        *puVar3 = 0x42c80000;
        uVar8 = piVar2[1] - *piVar2 >> 2;
        if (uVar8 != 0) {
          puVar7 = (undefined4 *)*piVar2;
          do {
            if (*(int *)*puVar7 == iVar6) {
              uVar4 = ((undefined4 *)*piVar2)[uVar9];
              goto LAB_00437396;
            }
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar9 < uVar8);
        }
        uVar4 = 0;
LAB_00437396:
        puVar3[1] = uVar4;
        *(undefined4 **)((int)this + uVar5 * 4 + 0x54) = puVar3;
      }
      uVar5 = uVar5 + 1;
      iVar6 = *(int *)(param_1 + 0x34);
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x38) - iVar6 >> 2));
  }
  return;
}


undefined4 __thiscall FUN_004373d0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  
  fVar4 = *(float *)this;
  uVar5 = 0;
  piVar1 = (int *)((int)fVar4 + 0x50);
  uVar6 = *(int *)((int)fVar4 + 0x54) - *piVar1 >> 2;
  if (uVar6 != 0) {
    do {
      this = (void *)((int)this + 4);
      iVar2 = *(int *)(*piVar1 + uVar5 * 4);
      fVar4 = (float)param_1;
      if ((*(int *)(iVar2 + 4) == param_1) &&
         (((pfVar3 = *(float **)this, pfVar3 == (float *)0x0 ||
           (fVar4 = pfVar3[1], *pfVar3 < (float)*(int *)((int)fVar4 + 0x10))) &&
          (*(char *)(iVar2 + 8) == '\0')))) {
        return (uint)fVar4 & 0xffffff00;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return CONCAT31((int3)((uint)fVar4 >> 8),1);
}


int __fastcall FUN_00437440(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  uVar6 = 0;
  iVar1 = *param_1;
  iVar7 = 100;
  iVar2 = *(int *)(iVar1 + 0x50);
  if (*(int *)(iVar1 + 0x54) - iVar2 >> 2 != 0) {
    do {
      if (0x13 < (int)uVar6) {
        FUN_00591070(&DAT_005cdc70,"ERROR: Too many components.");
        return 0;
      }
      iVar3 = *(int *)(iVar2 + uVar6 * 4);
      if ((*(char *)(iVar3 + 8) == '\0') &&
         (pfVar4 = (float *)param_1[uVar6 + 1], pfVar4 != (float *)0x0)) {
        fVar8 = *pfVar4;
        if ((fVar8 < (float)*(int *)((int)pfVar4[1] + 0x10)) ||
           (fVar8 < (float)*(int *)((int)pfVar4[1] + 0x14))) {
          iVar3 = *(int *)(iVar3 + 4);
          if (iVar3 != 0) {
            uVar5 = FUN_004373d0(param_1,iVar3);
            if ((char)uVar5 == '\0') goto LAB_004374ca;
          }
          if (fVar8 < (float)iVar7) {
            iVar7 = (int)fVar8;
          }
        }
      }
LAB_004374ca:
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(iVar1 + 0x54) - iVar2 >> 2));
  }
  return iVar7;
}


void __thiscall FUN_00437510(void *this,int param_1,float param_2,int param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *local_44;
  float *local_40;
  float *local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int *local_28;
  float local_24;
  float *local_20;
  float *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005b2e51;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (float *)0x0;
  local_44 = (float *)0x0;
  local_40 = (float *)0x0;
  local_20 = (float *)0x0;
  local_3c = (float *)0x0;
  local_8 = 0;
  local_18 = this;
  iVar3 = FUN_00437210((int)this);
  if (iVar3 == 0) {
    FUN_00591070("DETAIL","Unable to damage this module.");
  }
  else {
    local_11 = '\0';
    if (param_2 == 1.4013e-45) {
      iVar3 = 0x14;
      do {
        this = (void *)((int)this + 4);
        pfVar6 = *(float **)this;
        if (((pfVar6 != (float *)0x0) && ((float)*(int *)((int)pfVar6[1] + 0x10) <= *pfVar6)) &&
           (*(char *)((int)pfVar6[1] + 0x2d) != '\0')) {
          FUN_00591070(&DAT_005cdc70,"EMP damage is absorbed by buffer \'%s\'");
          local_11 = '\x01';
          **(undefined4 **)this = 0x40a00000;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (0 < param_1) {
      local_2c = -4 - (int)local_18;
      pfVar6 = (float *)0x0;
      do {
        iVar3 = 0;
        if (0 < param_1) {
          iVar3 = rand();
          iVar3 = iVar3 % param_1 + 1;
        }
        local_24 = 9999999.0;
        local_30 = param_1;
        if (9 < param_1) {
          local_30 = iVar3;
        }
        if (0x3c < local_30) {
          local_30 = 0x3c;
        }
        param_1 = param_1 - local_30;
        local_28 = local_18 + 1;
        param_2 = -NAN;
        fVar9 = 0.0;
        fVar7 = -NAN;
        do {
          fVar8 = fVar7;
          fVar2 = local_24;
          if ((*local_28 != 0) &&
             (iVar3 = *(int *)(*(int *)(*local_18 + 0x50) + local_2c + (int)local_28), iVar3 != 0))
          {
            local_38 = (float)param_3;
            local_34 = (float)param_4;
            local_8._0_1_ = 1;
            fVar10 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar3 + 0xc),(Vec2 *)&local_38);
            param_2 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
            local_8 = (uint)local_8._1_3_ << 8;
            fVar10 = (1.5 - fVar10 * 0.5 * param_2 * param_2) * param_2 * fVar10;
            fVar2 = local_24;
            if ((*local_28 != 0) && (fVar10 < local_24)) {
              pfVar4 = local_1c;
              if (local_1c == pfVar6) {
LAB_004376fb:
                fVar8 = fVar9;
                fVar2 = fVar10;
              }
              else {
                do {
                  if (*pfVar4 == fVar9) {
                    fVar8 = fVar7;
                    fVar2 = local_24;
                    if (pfVar4 == pfVar6) goto LAB_004376fb;
                    break;
                  }
                  pfVar4 = pfVar4 + 1;
                  fVar8 = fVar9;
                  fVar2 = fVar10;
                } while (pfVar4 != pfVar6);
              }
            }
          }
          local_24 = fVar2;
          piVar1 = local_18;
          pfVar4 = local_1c;
          fVar9 = (float)((int)fVar9 + 1);
          local_28 = local_28 + 1;
          fVar7 = fVar8;
        } while ((int)fVar9 < 0x14);
        param_2 = fVar8;
        if (fVar8 == -NAN) {
          local_40 = local_1c;
          FUN_00591070("DETAIL",
                       "Run out of components to damage. Resetting damage set and trying again.");
        }
        else {
          if (*(float *)(*(int *)(local_18[(int)fVar8 + 1] + 4) + 0x1c) == 0.0) {
            FUN_00591070("ERROR","ERROR: sturdiness for component \'%s\' is zero.");
            break;
          }
          if (local_20 == pfVar6) {
            FUN_004141e0(&local_44,pfVar6,&param_2);
            local_20 = local_3c;
            local_1c = local_44;
          }
          else {
            *pfVar6 = fVar8;
            local_40 = pfVar6 + 1;
          }
          pfVar4 = local_40;
          fVar7 = param_2;
          pfVar6 = (float *)piVar1[(int)param_2 + 0x15];
          if ((pfVar6 == (float *)0x0) || (*(int *)((int)pfVar6[1] + 0x80) != 0xb)) {
LAB_004377b7:
            param_2 = (float)((uint)param_2 & 0xffffff);
          }
          else {
            param_2 = (float)CONCAT13(1,param_2._0_3_);
            if (*pfVar6 < (float)*(int *)((int)pfVar6[1] + 0x10)) goto LAB_004377b7;
          }
          iVar3 = local_30 / 2;
          if (param_2._3_1_ == '\0') {
            iVar3 = local_30;
          }
          iVar3 = (int)((float)iVar3 / *(float *)(*(int *)(piVar1[(int)fVar7 + 1] + 4) + 0x1c));
          if (local_11 != '\0') {
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000003;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
            }
            iVar3 = uVar5 + 1;
          }
          FUN_00591070(&DAT_005cdc70,"Component \'%s\' taking %d damage.");
          *(float *)local_18[(int)fVar7 + 1] = *(float *)local_18[(int)fVar7 + 1] - (float)iVar3;
          if (*(float *)local_18[(int)fVar7 + 1] <= 0.0) {
            *(float *)local_18[(int)fVar7 + 1] = 0.0;
          }
          if (local_18[(int)fVar7 + 0x15] != 0) {
            FUN_00591070(&DAT_005cdc70,"Addon \'%s\' taking %d damage.");
            *(float *)local_18[(int)fVar7 + 0x15] =
                 *(float *)local_18[(int)fVar7 + 0x15] - (float)((iVar3 / 3) * 2);
            if (*(float *)local_18[(int)fVar7 + 0x15] <= 0.0) {
              *(float *)local_18[(int)fVar7 + 0x15] = 0.0;
            }
          }
        }
        pfVar6 = pfVar4;
      } while (0 < param_1);
      if (local_1c != (float *)0x0) {
        pfVar6 = local_1c;
        if ((0xfff < ((int)local_20 - (int)local_1c & 0xfffffffcU)) &&
           (pfVar6 = (float *)local_1c[-1], 0x1f < (uint)((int)local_1c + (-4 - (int)pfVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pfVar6);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


float * __thiscall FUN_00437950(void *this,int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2e78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pfVar3 = (float *)FUN_00437210((int)this);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)FUN_00591070("DETAIL","Unable to damage this module.");
    ExceptionList = local_10;
    return pfVar3;
  }
  bVar1 = false;
  if (param_2 == 1) {
    iVar9 = 0x14;
    puVar7 = this;
    do {
      puVar7 = puVar7 + 1;
      pfVar3 = (float *)*puVar7;
      if (((pfVar3 != (float *)0x0) && ((float)*(int *)((int)pfVar3[1] + 0x10) <= *pfVar3)) &&
         (*(char *)((int)pfVar3[1] + 0x2d) != '\0')) {
        FUN_00591070(&DAT_005cdc70,"EMP damage is absorbed by buffer \'%s\'");
        pfVar3 = (float *)*puVar7;
        bVar1 = true;
        *pfVar3 = 5.0;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  do {
    if (param_1 < 1) {
      ExceptionList = local_10;
      return pfVar3;
    }
    iVar9 = 0;
    if (0 < param_1) {
      iVar9 = rand();
      iVar9 = iVar9 % param_1 + 1;
    }
    iVar8 = param_1;
    if (param_2 == 1) {
      if (9 < param_1) {
        iVar8 = iVar9;
      }
      if (0x32 < iVar8) {
        iVar8 = 0x32;
      }
    }
    else {
      if (9 < param_1) {
        iVar8 = iVar9;
      }
      if (0x3c < iVar8) {
        iVar8 = 0x3c;
      }
    }
    param_1 = param_1 - iVar8;
    iVar9 = 0;
    do {
      iVar4 = rand();
      pfVar3 = (float *)(iVar4 / 0x14);
      iVar4 = iVar4 % 0x14;
      if (*(int *)((int)this + iVar4 * 4 + 4) == 0) {
        iVar4 = -1;
        pfVar3 = (float *)FUN_00437210((int)this);
        if (pfVar3 == (float *)0x0) {
          pfVar3 = (float *)FUN_00591070("DETAIL",
                                         "Run out of components to damage. Resetting damage set and trying again."
                                        );
        }
      }
      iVar9 = iVar9 + 1;
      if (0x1d < iVar9) {
        pfVar3 = (float *)FUN_00591070("DETAIL",
                                       "Unable to pick enough components to damage. Cancelling.");
        break;
      }
    } while (iVar4 == -1);
    if (0x1d < iVar9) {
      ExceptionList = local_10;
      return pfVar3;
    }
    if ((iVar4 != -1) && (iVar4 < 0x14)) {
      pfVar3 = *(float **)((int)this + iVar4 * 4 + 0x54);
      if ((pfVar3 == (float *)0x0) ||
         ((*(int *)((int)pfVar3[1] + 0x80) != 0xb ||
          (bVar2 = true, *pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))))) {
        bVar2 = false;
      }
      iVar9 = *(int *)((int)this + iVar4 * 4 + 4);
      iVar5 = iVar8 / 2;
      if (!bVar2) {
        iVar5 = iVar8;
      }
      pfVar3 = *(float **)(iVar9 + 4);
      iVar8 = (int)((float)iVar5 / pfVar3[7]);
      if (iVar9 != 0) {
        if (bVar1) {
          uVar6 = rand();
          uVar6 = uVar6 & 0x80000003;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
          }
          iVar8 = uVar6 + 1;
        }
        FUN_00591070(&DAT_005cdc70,"Component \'%s\' taking %d damage.");
        pfVar3 = *(float **)((int)this + iVar4 * 4 + 4);
        *pfVar3 = *pfVar3 - (float)iVar8;
        pfVar3 = *(float **)((int)this + iVar4 * 4 + 4);
        if (*pfVar3 <= 0.0) {
          *pfVar3 = 0.0;
        }
      }
      if (*(int *)((int)this + iVar4 * 4 + 0x54) != 0) {
        FUN_00591070(&DAT_005cdc70,"Addon \'%s\' taking %d damage.");
        pfVar3 = *(float **)((int)this + iVar4 * 4 + 0x54);
        *pfVar3 = *pfVar3 - (float)((iVar8 / 3) * 2);
        pfVar3 = *(float **)((int)this + iVar4 * 4 + 0x54);
        if (*pfVar3 <= 0.0) {
          *pfVar3 = 0.0;
        }
      }
    }
  } while( true );
}


int __fastcall FUN_00437c60(int *param_1)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_18;
  char local_14 [8];
  int local_c;
  int *local_8;
  
  local_c = *param_1;
  fVar11 = 0.0;
  uVar9 = 0;
  local_8 = param_1;
  local_18 = *(int *)(local_c + 0x54) - *(int *)(local_c + 0x50) >> 2;
  builtin_strncpy(local_14,"\x01\x01\x01\x01\x01\x01\x01\x01",8);
  if (local_18 != 0) {
    iVar5 = -4 - (int)param_1;
    do {
      param_1 = param_1 + 1;
      if (0x13 < (int)uVar9) {
        FUN_00591070(&DAT_005cdc70,"ERROR: Too many components.");
        return 0;
      }
      iVar6 = *(int *)((int)param_1 + *(int *)(local_c + 0x50) + iVar5);
      if (*(char *)(iVar6 + 8) == '\0') {
        uVar2 = *(uint *)(iVar6 + 4);
        pfVar3 = (float *)*param_1;
        if (uVar2 == 0) {
          if (pfVar3 == (float *)0x0) {
            return 0;
          }
          if (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10)) {
            return 0;
          }
        }
        else if ((int)uVar2 < 1) {
          if ((pfVar3 == (float *)0x0) || (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) {
            if (3 < ~uVar2) goto LAB_00437e99;
            local_14[~uVar2] = '\0';
          }
        }
        else if ((pfVar3 == (float *)0x0) || (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) {
          if (3 < uVar2 - 1) {
LAB_00437e99:
                    // WARNING: Subroutine does not return
            ___report_rangecheckfailure();
          }
          local_14[uVar2 + 3] = '\0';
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(local_c + 0x54) - *(int *)(local_c + 0x50) >> 2));
  }
  uVar9 = 0;
  if (local_18 != 0) {
    do {
      pfVar3 = (float *)local_8[uVar9 + 1];
      if (pfVar3 != (float *)0x0) {
        iVar5 = *(int *)(*(int *)(*(int *)(local_c + 0x50) + uVar9 * 4) + 4);
        if (iVar5 != 0) {
          if (iVar5 < 1) {
            cVar1 = *(char *)((int)&local_18 + (3 - iVar5));
          }
          else {
            cVar1 = local_14[iVar5 + 3];
          }
          if (cVar1 == '\0') goto LAB_00437e15;
        }
        fVar4 = pfVar3[1];
        if ((float)*(int *)((int)fVar4 + 0x10) <= *pfVar3) {
          fVar10 = 1.0;
          if (*pfVar3 < (float)*(int *)((int)fVar4 + 0x14)) {
            fVar10 = 1.0 - (float)*(int *)((int)fVar4 + 0x18) / 100.0;
          }
        }
        else {
          fVar10 = 0.0;
        }
        fVar11 = fVar11 + *(float *)((int)fVar4 + 8) * fVar10;
      }
LAB_00437e15:
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_18);
  }
  iVar6 = 100;
  iVar5 = 0;
  if (0 < *(int *)(local_c + 0x30)) {
    iVar6 = 0;
    do {
      iVar8 = iVar5 + 1;
      if (local_14[iVar6 + 4] == '\0') {
        iVar8 = iVar5;
      }
      iVar5 = iVar8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_c + 0x30));
    if (iVar5 == 0) {
      return 0;
    }
    iVar6 = (iVar5 - *(int *)(local_c + 0x40)) * *(int *)(local_c + 0x38) + 100;
  }
  if (0 < *(int *)(local_c + 0x34)) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      iVar7 = iVar5 + 1;
      if (local_14[iVar8] == '\0') {
        iVar7 = iVar5;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar7;
    } while (iVar8 < *(int *)(local_c + 0x34));
    if (iVar7 == 0) {
      return 0;
    }
    iVar6 = iVar6 + (iVar7 - *(int *)(local_c + 0x44)) * *(int *)(local_c + 0x3c);
  }
  return (int)((float)iVar6 + fVar11);
}


void __fastcall FUN_00437ea0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_18 = 0x1010101;
  uVar7 = 0;
  local_c = param_1;
  local_10 = *param_1;
  local_14 = 0x1010101;
  uVar6 = *(int *)(local_10 + 0x54) - *(int *)(local_10 + 0x50) >> 2;
  if (uVar6 != 0) {
    iVar5 = -4 - (int)param_1;
    local_8 = iVar5;
    do {
      param_1 = param_1 + 1;
      if (0x13 < (int)uVar7) {
        FUN_00591070(&DAT_005cdc70,"ERROR: Too many components.");
        return;
      }
      iVar1 = *(int *)(local_10 + 0x50);
      iVar2 = *(int *)(iVar1 + iVar5 + (int)param_1);
      if (*(char *)(iVar2 + 8) == '\0') {
        uVar3 = *(uint *)(iVar2 + 4);
        pfVar4 = (float *)*param_1;
        iVar5 = local_8;
        if (uVar3 == 0) {
          if (pfVar4 == (float *)0x0) {
            return;
          }
          if (*pfVar4 < (float)*(int *)((int)pfVar4[1] + 0x10)) {
            return;
          }
        }
        else if ((int)uVar3 < 1) {
          if ((pfVar4 == (float *)0x0) || (*pfVar4 < (float)*(int *)((int)pfVar4[1] + 0x10))) {
            if (3 < ~uVar3) goto LAB_0043801a;
            *(undefined1 *)((int)&local_18 + ~uVar3) = 0;
            iVar5 = local_8;
          }
        }
        else if ((pfVar4 == (float *)0x0) || (*pfVar4 < (float)*(int *)((int)pfVar4[1] + 0x10))) {
          if (3 < uVar3 - 1) {
LAB_0043801a:
                    // WARNING: Subroutine does not return
            ___report_rangecheckfailure();
          }
          *(undefined1 *)((int)&local_18 + uVar3 + 3) = 0;
          iVar5 = local_8;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(local_10 + 0x54) - iVar1 >> 2));
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  return;
}
