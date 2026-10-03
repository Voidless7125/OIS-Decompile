#include "../ois_server.exe.h"


void __fastcall FUN_00574350(int param_1)

{
  if (*(char *)(param_1 + 0x45d) != '\0') {
    return;
  }
  return;
}


void __fastcall FUN_00574380(int param_1)

{
  if (*(char *)(param_1 + 0x45d) != '\0') {
    return;
  }
  return;
}


void __fastcall FUN_005743b0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  Node *pNVar3;
  int *piVar4;
  Ref *pRVar5;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar7;
  uint in_stack_ffffff20;
  void *pvVar8;
  undefined1 *puVar9;
  void *in_stack_ffffff48;
  void *in_stack_ffffff5c;
  void *in_stack_ffffff70;
  void *in_stack_ffffff84;
  void *in_stack_ffffff98;
  void *in_stack_ffffffac;
  Size local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar8 = DAT_0065b5cc;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c9058;
  local_10 = ExceptionList;
  if (*(int *)((int)DAT_0065b5cc + 0xd0) == 0) {
    return;
  }
  ExceptionList = &local_10;
  if (*(char *)((int)param_1 + 0x45d) == '\0') {
    param_1[0x13f] = *(int *)(&UNK_005e0c20 + DAT_00655098 * 4);
  }
  else {
    param_1[0x13f] = *(int *)(&UNK_005e0ca8 + DAT_00655094 * 4);
    if (DAT_0065509c != -1) {
      FUN_004a7280(pvVar8,DAT_0065509c);
    }
  }
  pNVar3 = FUN_00412990();
  if ((*(int *)(pNVar3 + 0x278) == 0) && (*(char *)((int)param_1 + 0x45d) == '\0')) {
    pNVar3 = FUN_00412990();
    *(int **)(pNVar3 + 0x278) = param_1;
  }
  (**(code **)(*param_1 + 0x290))();
  piVar4 = *(int **)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x40) + 0x28);
  if (piVar4 == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
  cVar2 = (**(code **)(*piVar4 + 0x10))();
  if (cVar2 == '\0') {
    ExceptionList = local_10;
    return;
  }
  FUN_00591e00(&stack0xffffffac,"%c_BrokenCorner_TopLeft.png");
  piVar4 = (int *)FUN_00591910(in_stack_ffffffac);
  param_1[0x118] = (int)piVar4;
  local_18 = 0;
  local_14 = (Ref *)0x3f800000;
  local_8 = 0;
  (**(code **)(*piVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x118] + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  FUN_00591e00(&stack0xffffff98,"%c_BrokenCorner_TopRight.png");
  piVar4 = (int *)FUN_00591910(in_stack_ffffff98);
  param_1[0x119] = (int)piVar4;
  local_18 = 0x3f800000;
  local_14 = (Ref *)0x3f800000;
  local_8 = 1;
  (**(code **)(*piVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x119] + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  FUN_00591e00(&stack0xffffff84,"%c_BrokenCorner_BottomLeft.png");
  piVar4 = (int *)FUN_00591910(in_stack_ffffff84);
  param_1[0x11a] = (int)piVar4;
  local_18 = 0;
  local_14 = (Ref *)0x0;
  local_8 = 2;
  (**(code **)(*piVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x11a] + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  FUN_00591e00(&stack0xffffff70,"%c_BrokenCorner_BottomRight.png");
  piVar4 = (int *)FUN_00591910(in_stack_ffffff70);
  param_1[0x11b] = (int)piVar4;
  local_18 = 0x3f800000;
  local_14 = (Ref *)0x0;
  local_8 = 3;
  (**(code **)(*piVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x11b] + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  pNVar3 = FUN_00412990();
  if (pNVar3[0x285] == (Node)0x0) {
    if (*(char *)((int)param_1 + 0x45d) == '\0') {
      iVar6 = *(int *)((int)DAT_0065b5cc + 0xd0);
      if (*(int *)(iVar6 + 0x60) == -1) {
        FUN_004cb1c0(iVar6 + 8);
        in_stack_ffffff48 = *(void **)(extraout_EDX + 0x2c);
        FUN_00591e00(&stack0xffffff5c,"`8%.0f,%.0f %s, %s");
      }
      else {
        FUN_004cb1c0(iVar6 + 8);
        in_stack_ffffff48 = *(void **)(extraout_EDX_00 + 0x30);
        FUN_00591e00(&stack0xffffff5c,"`8%.0f,%.0f %s, %s (desired: `7%s`8)");
      }
    }
    else if (DAT_00655094 == 0) {
      in_stack_ffffff5c = (void *)((uint)in_stack_ffffff5c & 0xffffff00);
      FUN_00402690(&stack0xffffff5c,"`7The Apollo Cluster",0x14);
    }
    else {
      FUN_00591e00(&stack0xffffff5c,&DAT_005e3dcc);
    }
  }
  else {
    FUN_004024e0(&stack0xffffff5c,param_1 + 0x139);
  }
  pRVar5 = FUN_0055cb00((Node)0x0,in_stack_ffffff5c);
  param_1[0x138] = (int)pRVar5;
  local_18 = 0x3f000000;
  local_14 = (Ref *)0x0;
  local_8 = 4;
  (**(code **)(*(int *)pRVar5 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)param_1[0x138] + 0x48))();
  (**(code **)(*param_1 + 0x108))();
  if ((int *)param_1[0x11e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11e] + 0x138))();
    param_1[0x11e] = 0;
  }
  puVar9 = &stack0xffffff48;
  FUN_00591e00(&stack0xffffff48,"%s_Selector.png");
  piVar4 = (int *)FUN_00591910(in_stack_ffffff48);
  param_1[0x11e] = (int)piVar4;
  local_18 = 0x3f000000;
  local_14 = (Ref *)0x3f000000;
  local_8 = 5;
  (**(code **)(*piVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*param_1 + 0x108))();
  uVar7 = 0;
  iVar6 = param_1[0x129];
  if (param_1[0x12a] - iVar6 >> 2 != 0) {
    do {
      piVar4 = *(int **)(iVar6 + uVar7 * 4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x138))();
        *(undefined4 *)(param_1[0x129] + uVar7 * 4) = 0;
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_1[0x129];
    } while (uVar7 < (uint)(param_1[0x12a] - iVar6 >> 2));
  }
  param_1[0x12a] = iVar6;
  if (*(char *)((int)param_1 + 0x45d) == '\0') {
    if (DAT_00655098 != 0) goto LAB_00574976;
LAB_00574b87:
    FUN_0057bcd0(param_1);
  }
  else {
    if (DAT_00655094 == 0) goto LAB_00574b87;
LAB_00574976:
    FUN_00578f40(param_1);
    if (((*(int *)((int)DAT_0065b5cc + 0xcc) == 0) ||
        (*(int *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x70) != 1)) &&
       (pNVar3 = FUN_00412990(), pNVar3[0x285] == (Node)0x0)) {
      if (*(char *)((int)param_1 + 0x45d) != '\0') goto LAB_00574b9d;
      FUN_00574bf0(param_1);
    }
  }
  if (((*(char *)((int)param_1 + 0x45d) == '\0') &&
      (*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0xf8) == 2)) {
    pvVar8 = (void *)((uint)puVar9 & 0xffffff00);
    FUN_00402690(&stack0xffffff3c,"white.png",9);
    piVar4 = (int *)FUN_00591910(pvVar8);
    param_1[300] = (int)piVar4;
    local_18 = 0;
    local_14 = (Ref *)0x0;
    local_8 = 6;
    (**(code **)(*piVar4 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)param_1[300] + 0x3c))();
    iVar6 = *(int *)param_1[300];
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0','\0','\0');
    (**(code **)(iVar6 + 0x25c))();
    (**(code **)(*(int *)param_1[300] + 0x244))();
    (**(code **)(*param_1 + 0x108))();
    pvVar8 = (void *)(in_stack_ffffff20 & 0xffffff00);
    FUN_00402690(&stack0xffffff20,"`7** docked **",0xe);
    pRVar5 = FUN_0055cb00((Node)0x0,pvVar8);
    local_20 = 0x3f000000;
    local_1c = 0x3f800000;
    local_8 = 7;
    local_14 = pRVar5;
    (**(code **)(*(int *)pRVar5 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pRVar5 + 0x48))();
    (**(code **)(*param_1 + 0x108))();
    puVar1 = (undefined4 *)param_1[0x121];
    if ((undefined4 *)param_1[0x122] == puVar1) {
      FUN_00414080(param_1 + 0x120,puVar1,&local_14);
    }
    else {
      *puVar1 = pRVar5;
      param_1[0x121] = param_1[0x121] + 4;
    }
  }
LAB_00574b9d:
  iVar6 = *param_1;
  cocos2d::Size::Size(local_28,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar6 + 0xac))();
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00574bf0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  uint3 uVar8;
  uchar uVar9;
  uchar uVar10;
  void *in_stack_ffffff44;
  uchar uVar11;
  uint in_stack_ffffff58;
  uint in_stack_ffffff6c;
  uint in_stack_ffffff80;
  uint in_stack_ffffff94;
  uint local_28;
  int *local_20;
  Color3B local_19 [3];
  Color3B local_16 [3];
  Color3B local_13 [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c90b6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar7 = (void *)(in_stack_ffffff94 & 0xffffff00);
  FUN_00402690(&stack0xffffff94,"UI_MiniMap_TopLeft.png",0x16);
  piVar3 = (int *)FUN_00591910(pvVar7);
  local_20 = piVar3;
  (**(code **)(*piVar3 + 0x48))();
  if (param_1[0x132] == 0) {
    (**(code **)(*piVar3 + 0x244))();
    iVar6 = *piVar3;
    cocos2d::Color3B::Color3B(local_13,0xff,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
  }
  else {
    iVar6 = *piVar3;
    cocos2d::Color3B::Color3B(local_13,0x80,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    (**(code **)(*piVar3 + 0x244))();
  }
  puVar5 = (undefined4 *)param_1[0x12e];
  piVar3 = param_1 + 0x12d;
  if ((undefined4 *)param_1[0x12f] == puVar5) {
    FUN_00414080(piVar3,puVar5,&local_20);
  }
  else {
    *puVar5 = local_20;
    param_1[0x12e] = param_1[0x12e] + 4;
  }
  (**(code **)(*param_1 + 0x10c))();
  pvVar7 = (void *)(in_stack_ffffff80 & 0xffffff00);
  FUN_00402690(&stack0xffffff80,"UI_MiniMap_TopRight.png",0x17);
  piVar4 = (int *)FUN_00591910(pvVar7);
  local_20 = piVar4;
  (**(code **)(*piVar4 + 0x48))();
  if (param_1[0x132] == 1) {
    (**(code **)(*piVar4 + 0x244))();
    iVar6 = *piVar4;
    cocos2d::Color3B::Color3B(local_13,0xff,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    piVar4 = local_20;
  }
  else {
    iVar6 = *piVar4;
    cocos2d::Color3B::Color3B(local_13,0x80,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    piVar4 = local_20;
    (**(code **)(*local_20 + 0x244))();
  }
  puVar5 = (undefined4 *)param_1[0x12e];
  if ((undefined4 *)param_1[0x12f] == puVar5) {
    FUN_00414080(piVar3,puVar5,&local_20);
  }
  else {
    *puVar5 = piVar4;
    param_1[0x12e] = param_1[0x12e] + 4;
  }
  (**(code **)(*param_1 + 0x10c))();
  pvVar7 = (void *)(in_stack_ffffff6c & 0xffffff00);
  FUN_00402690(&stack0xffffff6c,"UI_MiniMap_BottomRight.png",0x1a);
  piVar4 = (int *)FUN_00591910(pvVar7);
  local_20 = piVar4;
  (**(code **)(*piVar4 + 0x48))();
  if (param_1[0x132] == 2) {
    (**(code **)(*piVar4 + 0x244))();
    iVar6 = *piVar4;
    cocos2d::Color3B::Color3B(local_13,0xff,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    piVar4 = local_20;
  }
  else {
    iVar6 = *piVar4;
    cocos2d::Color3B::Color3B(local_13,0x80,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    piVar4 = local_20;
    (**(code **)(*local_20 + 0x244))();
  }
  puVar5 = (undefined4 *)param_1[0x12e];
  if ((undefined4 *)param_1[0x12f] == puVar5) {
    FUN_00414080(piVar3,puVar5,&local_20);
  }
  else {
    *puVar5 = piVar4;
    param_1[0x12e] = param_1[0x12e] + 4;
  }
  (**(code **)(*param_1 + 0x10c))();
  pvVar7 = (void *)(in_stack_ffffff58 & 0xffffff00);
  FUN_00402690(&stack0xffffff58,"UI_MiniMap_BottomLeft.png",0x19);
  piVar4 = (int *)FUN_00591910(pvVar7);
  local_20 = piVar4;
  (**(code **)(*piVar4 + 0x48))();
  if (param_1[0x132] == 3) {
    (**(code **)(*piVar4 + 0x244))();
    iVar6 = *piVar4;
    cocos2d::Color3B::Color3B(local_13,0xff,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    piVar4 = local_20;
  }
  else {
    iVar6 = *piVar4;
    cocos2d::Color3B::Color3B(local_13,0x80,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    piVar4 = local_20;
    (**(code **)(*local_20 + 0x244))();
  }
  puVar5 = (undefined4 *)param_1[0x12e];
  if ((undefined4 *)param_1[0x12f] == puVar5) {
    FUN_00414080(piVar3,puVar5,&local_20);
  }
  else {
    *puVar5 = piVar4;
    param_1[0x12e] = param_1[0x12e] + 4;
  }
  (**(code **)(*param_1 + 0x10c))();
  pvVar7 = (void *)0x574ff9;
  FUN_00591e00(&stack0xffffff44,"%s_MiniMapUnderlay.png");
  piVar4 = (int *)FUN_00591910(in_stack_ffffff44);
  local_20 = piVar4;
  (**(code **)(*piVar4 + 0x48))();
  (**(code **)(*piVar4 + 0x244))();
  puVar5 = (undefined4 *)param_1[0x12e];
  if ((undefined4 *)param_1[0x12f] == puVar5) {
    FUN_00414080(piVar3,puVar5,&local_20);
  }
  else {
    *puVar5 = piVar4;
    param_1[0x12e] = param_1[0x12e] + 4;
  }
  (**(code **)(*param_1 + 0x10c))();
  if ((*(char *)((int)param_1 + 0x45d) == '\0') || (DAT_0065509c == -1)) {
    piVar4 = *(int **)(DAT_0065b5cc + 0xd8);
  }
  else {
    for (puVar5 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
        puVar5 != *(undefined4 **)(DAT_0065b5cc + 0x40); puVar5 = puVar5 + 1) {
      piVar4 = (int *)*puVar5;
      if (*piVar4 == DAT_0065509c) goto LAB_0057509a;
    }
    piVar4 = (int *)0x0;
  }
LAB_0057509a:
  iVar6 = piVar4[0x21];
  local_28 = 0;
  if (piVar4[0x22] - iVar6 >> 2 != 0) {
    do {
      iVar6 = *(int *)(*(int *)(iVar6 + local_28 * 4) + 0x54);
      uVar8 = (uint3)((uint)pvVar7 >> 8);
      if (iVar6 == 1) {
        pvVar7 = (void *)((uint)uVar8 << 8);
        FUN_00402690(&stack0xffffff34,"white.png",9);
        local_20 = (int *)FUN_00591910(pvVar7);
        iVar6 = *local_20;
        cocos2d::Color3B::Color3B(local_13,0xff,0xff,'\0');
        (**(code **)(iVar6 + 0x25c))();
        local_8 = 0;
LAB_00575228:
        piVar2 = local_20;
        (**(code **)(*local_20 + 0x4c))();
        local_8 = 0xffffffff;
        puVar5 = (undefined4 *)param_1[0x12e];
        if ((undefined4 *)param_1[0x12f] == puVar5) {
          FUN_00414080(piVar3,puVar5,&local_20);
        }
        else {
          *puVar5 = piVar2;
          param_1[0x12e] = param_1[0x12e] + 4;
        }
        (**(code **)(*param_1 + 0x108))();
      }
      else if (iVar6 == 0) {
        pvVar7 = (void *)((uint)uVar8 << 8);
        FUN_00402690(&stack0xffffff34,"white.png",9);
        local_20 = (int *)FUN_00591910(pvVar7);
        iVar6 = *local_20;
        cocos2d::Color3B::Color3B(local_16,'\0',0xff,0xbf);
        (**(code **)(iVar6 + 0x25c))();
        local_8 = 1;
        goto LAB_00575228;
      }
      local_28 = local_28 + 1;
      iVar6 = piVar4[0x21];
    } while (local_28 < (uint)(piVar4[0x22] - iVar6 >> 2));
  }
  iVar6 = piVar4[0x33];
  local_28 = 0;
  if (piVar4[0x34] - iVar6 >> 2 != 0) {
    do {
      iVar6 = *(int *)(local_28 * 4 + iVar6);
      iVar1 = *(int *)(*(int *)(iVar6 + 0x254) + 0x158);
      if (iVar1 == 2) {
        pvVar7 = (void *)((uint)pvVar7 & 0xffffff00);
        FUN_00402690(&stack0xffffff34,"white.png",9);
        local_20 = (int *)FUN_00591910(pvVar7);
        iVar6 = *local_20;
        cocos2d::Color3B::Color3B(local_16,0xff,'\0',0xff);
        (**(code **)(iVar6 + 0x25c))();
        local_8 = 2;
LAB_00575511:
        piVar2 = local_20;
        (**(code **)(*local_20 + 0x4c))();
        local_8 = 0xffffffff;
        puVar5 = (undefined4 *)param_1[0x12e];
        if ((undefined4 *)param_1[0x12f] == puVar5) {
          FUN_00414080(piVar3,puVar5,&local_20);
        }
        else {
          *puVar5 = piVar2;
          param_1[0x12e] = param_1[0x12e] + 4;
        }
        (**(code **)(*param_1 + 0x108))();
      }
      else {
        uVar8 = (uint3)((uint)pvVar7 >> 8);
        if ((iVar1 == 1) && (*(char *)(iVar6 + 0x168) == '\0')) {
          pvVar7 = (void *)((uint)uVar8 << 8);
          FUN_00402690(&stack0xffffff34,"white.png",9);
          local_20 = (int *)FUN_00591910(pvVar7);
          iVar6 = *local_20;
          cocos2d::Color3B::Color3B(local_13,'\0',0xbf,0xff);
          (**(code **)(iVar6 + 0x25c))();
          local_8 = 3;
          goto LAB_00575511;
        }
        if (iVar1 == 3) {
          pvVar7 = (void *)((uint)uVar8 << 8);
          FUN_00402690(&stack0xffffff34,"white.png",9);
          local_20 = (int *)FUN_00591910(pvVar7);
          iVar6 = *local_20;
          cocos2d::Color3B::Color3B(local_19,'\0',0xbf,0xff);
          (**(code **)(iVar6 + 0x25c))();
          local_8 = 4;
          goto LAB_00575511;
        }
      }
      local_28 = local_28 + 1;
      iVar6 = piVar4[0x33];
    } while (local_28 < (uint)(piVar4[0x34] - iVar6 >> 2));
  }
  pvVar7 = (void *)((uint)pvVar7 & 0xffffff00);
  FUN_00402690(&stack0xffffff34,"white.png",9);
  piVar3 = (int *)FUN_00591910(pvVar7);
  param_1[0x130] = (int)piVar3;
  iVar6 = *piVar3;
  if ((float)param_1[0x134] < 0.0) {
    uVar11 = '@';
    uVar10 = '@';
    uVar9 = '@';
  }
  else {
    uVar11 = 0xff;
    uVar10 = 0xff;
    uVar9 = 0xff;
  }
  cocos2d::Color3B::Color3B(local_19,uVar9,uVar10,uVar11);
  (**(code **)(iVar6 + 0x25c))();
  local_8 = 5;
  (**(code **)(*(int *)param_1[0x130] + 0x4c))();
  local_8 = 0xffffffff;
  (**(code **)(*param_1 + 0x108))();
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00575680(void *this,float param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  float fVar6;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c9116;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar6 = 0.2;
  if (*(char *)((int)this + 0x45d) == '\0') {
    local_20 = *(float *)((int)this + 0x4fc);
  }
  else {
    local_20 = 0.2;
  }
  local_20 = (param_1 - (float)(*(int *)((int)this + 0x2a0) / 2)) / local_20;
  if (*(char *)((int)this + 0x45d) == '\0') {
    fVar6 = *(float *)((int)this + 0x4fc);
  }
  local_1c = ((param_2 - (float)(*(int *)((int)this + 0x2a4) / 2)) / fVar6) * -1.0;
  local_8 = 1;
  uStack_7 = 0;
  FUN_00591070("RENDER","World pos = %.2f, %.2f");
  iVar1 = DAT_0065b5cc;
  if (*(char *)((int)this + 0x45d) == '\0') {
    local_18 = 10.0;
  }
  else {
    local_18 = 40.0;
  }
  local_28 = local_20;
  local_24 = local_1c;
  uVar5 = 0;
  iVar3 = *(int *)(DAT_0065b5cc + 0x3c);
  if (*(int *)(DAT_0065b5cc + 0x40) - iVar3 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + uVar5 * 4);
      local_30 = (float)*(int *)(iVar3 + 0x7c);
      local_2c = (float)*(int *)(iVar3 + 0x80);
      local_8 = 3;
      fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&local_28);
      local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
      if ((1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14 * fVar6 <= local_18) {
        puVar4 = *(undefined4 **)(*(int *)(iVar1 + 0x3c) + uVar5 * 4);
        goto LAB_00575848;
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)(iVar1 + 0x3c);
    } while (uVar5 < (uint)(*(int *)(iVar1 + 0x40) - iVar3 >> 2));
  }
  puVar4 = (undefined4 *)0x0;
LAB_00575848:
  iVar1 = DAT_0065b5cc;
  if (*(char *)((int)this + 0x45d) == '\0') {
    if (puVar4 == (undefined4 *)0x0) {
      *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d0) = 0xffffffff;
    }
    else {
      *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d0) = *puVar4;
      iVar1 = *(int *)(*(int *)(iVar1 + 0xd0) + 0x24);
      local_2c = (float)*(int *)(iVar1 + 0x80);
      local_30 = (float)*(int *)(iVar1 + 0x7c);
      local_24 = (float)(int)puVar4[0x20];
      local_28 = (float)(int)puVar4[0x1f];
      local_8 = 5;
      local_18 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_30);
      local_14 = (float)(0x5f3759df - ((uint)local_18 >> 1));
      FUN_00591070("RENDER","distance from current sector = %f");
    }
  }
  else if (puVar4 == (undefined4 *)0x0) {
    DAT_0065509c = 0xffffffff;
  }
  else {
    DAT_0065509c = *puVar4;
    DAT_00655094 = 3;
    DAT_0065bf1c = 0;
    DAT_0065bf20 = 0;
  }
  local_8 = 1;
  (**(code **)(*(int *)this + 0x294))(uVar2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005759b0(void *this,float param_1,float param_2)

{
  Node *pNVar1;
  int iVar2;
  void *this_00;
  char *pcVar3;
  int iVar4;
  Vec2 *pVVar5;
  uint uVar6;
  Vec2 *pVVar7;
  int iVar8;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  float local_34;
  float local_30;
  char *local_2c;
  int local_28;
  int local_24;
  float local_20;
  undefined4 *local_1c;
  int *local_18;
  Vec2 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c916d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  FUN_005777f0(this,&local_44,param_1,param_2);
  local_8._0_1_ = 1;
  pNVar1 = FUN_00412990();
  if (*(int *)(pNVar1 + 0x27c) == 3) {
    local_38 = &stack0xffffff94;
    local_8._0_1_ = 2;
    pNVar1 = FUN_00412990();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00524080((int)pNVar1);
    ExceptionList = local_10;
    return;
  }
  local_1c = (undefined4 *)0x0;
  local_28 = 0;
  pVVar5 = (Vec2 *)0x0;
  local_2c = (char *)0x0;
  pNVar1 = FUN_00412990();
  local_24 = FUN_004a84f0(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x20),local_44,local_40,
                          (float)(uint)(pNVar1[0x285] == (Node)0x0));
  if (local_24 == 0) {
    local_1c = (undefined4 *)FUN_0050c610(*(int *)(DAT_0065b5cc + 0xd0));
    iVar4 = DAT_0065b5cc;
    if (local_1c == (undefined4 *)0x0) {
      local_28 = FUN_00520a20(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24));
      if (local_28 == 0) {
        local_30 = 5.0 / *(float *)((int)this + 0x4fc);
        local_4c = local_44;
        local_48 = local_40;
        iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24);
        local_8._0_1_ = 3;
        uVar6 = 0;
        iVar2 = *(int *)(iVar4 + 0xc0);
        local_14 = (Vec2 *)0x0;
        pVVar5 = local_14;
        if (*(int *)(iVar4 + 0xc4) - iVar2 >> 2 != 0) {
          pVVar5 = (Vec2 *)0x0;
          do {
            local_20 = cocos2d::Vec2::getDistanceSq(*(Vec2 **)(iVar2 + uVar6 * 4),(Vec2 *)&local_4c)
            ;
            local_14 = (Vec2 *)(0x5f3759df - ((uint)local_20 >> 1));
            local_34 = (1.5 - local_20 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14
                       * local_20;
            if (local_34 <= local_30) {
              if (pVVar5 != (Vec2 *)0x0) {
                local_20 = cocos2d::Vec2::getDistanceSq(pVVar5,(Vec2 *)&local_4c);
                local_14 = (Vec2 *)(0x5f3759df - ((uint)local_20 >> 1));
                if (local_34 <=
                    (1.5 - local_20 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
                    local_20) goto LAB_00575e5f;
              }
              pVVar5 = *(Vec2 **)(*(int *)(iVar4 + 0xc0) + uVar6 * 4);
            }
LAB_00575e5f:
            uVar6 = uVar6 + 1;
            iVar2 = *(int *)(iVar4 + 0xc0);
          } while (uVar6 < (uint)(*(int *)(iVar4 + 0xc4) - iVar2 >> 2));
        }
        local_14 = pVVar5;
        pVVar7 = local_14;
        pVVar5 = (Vec2 *)0x0;
        local_8._0_1_ = 1;
        if (local_14 == (Vec2 *)0x0) {
          local_30 = 5.0 / (float)local_18[0x13f];
          local_54 = local_44;
          local_50 = local_40;
          iVar4 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24);
          local_8._0_1_ = 4;
          pVVar5 = (Vec2 *)0x0;
          uVar6 = 0;
          iVar2 = *(int *)(iVar4 + 0xb4);
          if (*(int *)(iVar4 + 0xb8) - iVar2 >> 2 != 0) {
            do {
              local_34 = cocos2d::Vec2::getDistanceSq
                                   (*(Vec2 **)(iVar2 + uVar6 * 4),(Vec2 *)&local_54);
              local_20 = (float)(0x5f3759df - ((uint)local_34 >> 1));
              local_38 = (undefined1 *)
                         ((1.5 - local_34 * 0.5 * local_20 * local_20) * local_20 * local_34);
              if ((float)local_38 <= local_30) {
                if (pVVar5 != (Vec2 *)0x0) {
                  local_34 = cocos2d::Vec2::getDistanceSq(pVVar5,(Vec2 *)&local_54);
                  local_20 = (float)(0x5f3759df - ((uint)local_34 >> 1));
                  if ((float)local_38 <=
                      (1.5 - local_34 * 0.5 * local_20 * local_20) * local_20 * local_34)
                  goto LAB_00576047;
                }
                pVVar5 = *(Vec2 **)(*(int *)(iVar4 + 0xb4) + uVar6 * 4);
              }
LAB_00576047:
              uVar6 = uVar6 + 1;
              iVar2 = *(int *)(iVar4 + 0xb4);
            } while (uVar6 < (uint)(*(int *)(iVar4 + 0xb8) - iVar2 >> 2));
          }
          local_8._0_1_ = 1;
          if (pVVar5 == (Vec2 *)0x0) {
            pcVar3 = FUN_0051f120(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x24),local_44,local_40
                                  ,'\0');
            pVVar7 = local_14;
            this = local_18;
            local_2c = pcVar3;
            if (pcVar3 == (char *)0x0) goto LAB_005761a2;
            pNVar1 = FUN_00412990();
            iVar4 = DAT_0065b5cc;
            *(undefined4 *)(pNVar1 + 0x27c) = 5;
            *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b0) = 0;
            *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b4) = 0;
            *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b8) = 0;
            *(char **)(*(int *)(iVar4 + 0xd0) + 700) = pcVar3;
          }
          else {
            pNVar1 = FUN_00412990();
            iVar4 = DAT_0065b5cc;
            *(undefined4 *)(pNVar1 + 0x27c) = 6;
            *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b0) = 0;
            *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b4) = 0;
            *(Vec2 **)(*(int *)(iVar4 + 0xd0) + 0x2b8) = pVVar5;
            *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 700) = 0;
          }
          local_54 = -9999.0;
          local_50 = -9999.0;
          *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x1a4) = 0;
          *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x1a0) = 0xffffffff;
          iVar4 = *(int *)(iVar4 + 0xd0);
          *(undefined4 *)(iVar4 + 0x1b8) = 0xc61c3c00;
          *(undefined4 *)(iVar4 + 0x1bc) = 0xc61c3c00;
          FUN_004eb5a0();
          pVVar7 = local_14;
          this = local_18;
        }
        else {
          pNVar1 = FUN_00412990();
          iVar4 = DAT_0065b5cc;
          local_4c = -9999.0;
          local_48 = -9999.0;
          *(undefined4 *)(pNVar1 + 0x27c) = 4;
          *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b0) = 0;
          *(Vec2 **)(*(int *)(iVar4 + 0xd0) + 0x2b4) = pVVar7;
          *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 700) = 0;
          *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x1a4) = 0;
          *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x1a0) = 0xffffffff;
          iVar4 = *(int *)(iVar4 + 0xd0);
          *(undefined4 *)(iVar4 + 0x1b8) = 0xc61c3c00;
          *(undefined4 *)(iVar4 + 0x1bc) = 0xc61c3c00;
          FUN_004eb5a0();
          this = local_18;
        }
        goto LAB_005761a2;
      }
      pNVar1 = FUN_00412990();
      iVar4 = DAT_0065b5cc;
      *(undefined4 *)(pNVar1 + 0x27c) = 2;
      *(int *)(*(int *)(iVar4 + 0xd0) + 0x2b0) = local_28;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b4) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 700) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b8) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x1a4) = 0;
    }
    else {
      *(undefined4 **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x19c) = local_1c;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x198) = *local_1c;
      iVar2 = *(int *)(iVar4 + 0xd0);
      if (*(char *)(iVar2 + 0x1b0) != '\0') {
        *(undefined4 **)(iVar2 + 0x194) = local_1c;
        *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 400) = *local_1c;
        iVar2 = *(int *)(iVar4 + 0xd0);
      }
      *(undefined4 *)(iVar2 + 0x1a4) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b0) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b4) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b8) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 700) = 0;
    }
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x1a0) = 0xffffffff;
LAB_00575cf0:
    iVar2 = *(int *)(iVar4 + 0xd0);
  }
  else {
    FUN_00591070("RENDER","Selected stellar object.");
    iVar4 = DAT_0065b5cc;
    *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) = local_24;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x1a0) = *(undefined4 *)(local_24 + 0x38);
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x19c) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x198) = 0xffffffff;
    iVar2 = *(int *)(iVar4 + 0xd0);
    if (*(char *)(iVar2 + 0x1b0) != '\0') {
      *(undefined4 *)(iVar2 + 0x194) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b0) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b4) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b8) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 700) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 400) = 0xffffffff;
      goto LAB_00575cf0;
    }
  }
  local_3c = 0xc61c3c00;
  *(undefined4 *)(iVar2 + 0x1b8) = 0xc61c3c00;
  local_38 = (undefined1 *)0xc61c3c00;
  *(undefined4 *)(iVar2 + 0x1bc) = 0xc61c3c00;
  iVar8 = -1;
  iVar2 = 8;
  iVar4 = *(int *)(iVar4 + 0xd0);
  this_00 = (void *)FUN_00402f60();
  FUN_00557fb0(this_00,iVar4,iVar2,iVar8);
  pVVar7 = (Vec2 *)0x0;
LAB_005761a2:
  FUN_00591070("RENDER","Clicked on %f, %f");
  iVar4 = DAT_0065b5cc;
  if (((((local_24 == 0) && (local_1c == (undefined4 *)0x0)) && (local_28 == 0)) &&
      ((pVVar7 == (Vec2 *)0x0 && (local_2c == (char *)0x0)))) && (pVVar5 == (Vec2 *)0x0)) {
    local_54 = -9999.0;
    local_50 = -9999.0;
    *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1a4) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x1a0) = 0xffffffff;
    iVar2 = *(int *)(iVar4 + 0xd0);
    *(undefined4 *)(iVar2 + 0x1b8) = 0xc61c3c00;
    *(undefined4 *)(iVar2 + 0x1bc) = 0xc61c3c00;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x19c) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b0) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b4) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x2b8) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 700) = 0;
    *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x198) = 0xffffffff;
    if (*(char *)(*(int *)(iVar4 + 0xd0) + 0x1b0) != '\0') {
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 0x194) = 0;
      *(undefined4 *)(*(int *)(iVar4 + 0xd0) + 400) = 0xffffffff;
    }
    FUN_004eb5c0();
  }
  if ((*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x2b0) == 0) &&
     (pNVar1 = FUN_00412990(), *(int *)(pNVar1 + 0x27c) == 2)) {
    pNVar1 = FUN_00412990();
    *(undefined4 *)(pNVar1 + 0x27c) = 0;
  }
  if ((*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x2b8) == 0) &&
     (pNVar1 = FUN_00412990(), *(int *)(pNVar1 + 0x27c) == 6)) {
    pNVar1 = FUN_00412990();
    *(undefined4 *)(pNVar1 + 0x27c) = 0;
  }
  if ((*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 700) == 0) &&
     (pNVar1 = FUN_00412990(), *(int *)(pNVar1 + 0x27c) == 5)) {
    pNVar1 = FUN_00412990();
    *(undefined4 *)(pNVar1 + 0x27c) = 0;
  }
  iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
  FUN_005179b0(iVar4);
  *(undefined4 *)(iVar4 + 0x1c8) = *(undefined4 *)(iVar4 + 0x1c4);
  (**(code **)(*(int *)this + 0x294))();
  pNVar1 = FUN_00412990();
  if (pNVar1[0x285] != (Node)0x0) {
    pNVar1 = FUN_00412990();
    FUN_00524430((int)pNVar1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005763c0(void *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  Node *pNVar3;
  float *pfVar4;
  float local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c91a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(float *)((int)this + 0x4d4) = param_1;
  *(float *)((int)this + 0x4d8) = param_2;
  pNVar3 = FUN_00412990();
  if (pNVar3[0x285] != (Node)0x0) {
    pfVar4 = FUN_005777f0(this,local_18,param_1,param_2);
    local_8 = CONCAT31(local_8._1_3_,1);
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    pNVar3 = FUN_00412990();
    *(float *)(pNVar3 + 0x288) = fVar1;
    *(float *)(pNVar3 + 0x28c) = fVar2;
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00576460(void *this,float param_1,float param_2)

{
  int *piVar1;
  Node *pNVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int iVar8;
  float local_48 [2];
  float local_40 [3];
  float local_34;
  float local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005c91e4;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_005777f0(this,local_40,param_1,param_2);
  local_8._0_1_ = 1;
  FUN_005777f0(this,local_48,param_1,param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar1 = (int *)FUN_00591e00((undefined1 *)local_2c,"Loc: %f, %f");
  if ((int *)((int)this + 0x4e4) != piVar1) {
    FUN_00401b20((int *)((int)this + 0x4e4));
    iVar5 = piVar1[1];
    iVar6 = piVar1[2];
    iVar8 = piVar1[3];
    *(int *)((int)this + 0x4e4) = *piVar1;
    *(int *)((int)this + 0x4e8) = iVar5;
    *(int *)((int)this + 0x4ec) = iVar6;
    *(int *)((int)this + 0x4f0) = iVar8;
    *(undefined8 *)((int)this + 0x4f4) = *(undefined8 *)(piVar1 + 4);
    piVar1[4] = 0;
    piVar1[5] = 0xf;
    *(undefined1 *)piVar1 = 0;
  }
  if (0xf < local_18) {
    pvVar3 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar3 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  local_8 = local_8 & 0xffffff00;
  if (*(char *)((int)this + 0x45d) == '\0') {
    if (DAT_00655098 != 0) {
      pNVar2 = FUN_00412990();
      if (pNVar2[0x285] != (Node)0x0) {
        FUN_005759b0(this,param_1,param_2);
        goto LAB_005767f3;
      }
      FUN_005777f0(this,&local_34,param_1,param_2);
      local_8 = CONCAT31(local_8._1_3_,3);
      if ((*(char *)((int)this + 0x45c) == '\0') ||
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
        if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
          FUN_004122b0();
          dVar7 = (double)(DAT_00655098 + 1);
          uVar4 = 0x3a;
          goto LAB_0057679f;
        }
        FUN_004e72a0(*(int *)(DAT_0065b5cc + 0xd0),(int)local_34,(int)local_30);
      }
      else {
        piVar1 = (int *)FUN_00591e00((undefined1 *)local_2c,"Loc: %f, %f");
        FUN_00413230((void *)((int)this + 0x4e4),piVar1);
        if (0xf < local_18) {
          pvVar3 = local_2c[0];
          if (0xfff < local_18 + 1) {
            pvVar3 = *(void **)((int)local_2c[0] + -4);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_005adb3f(pvVar3);
        }
        FUN_00591070("WORLD","Plotting point over: %f, %f");
        if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
          FUN_004122b0();
          FUN_0041c620(0x3a,(double)(DAT_00655098 + 1));
        }
        else {
          FUN_004e72a0(*(int *)(DAT_0065b5cc + 0xd0),(int)local_34,(int)local_30);
        }
        if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
          FUN_004122b0();
          dVar7 = 0.0;
          uVar4 = 5;
LAB_0057679f:
          FUN_0041c620(uVar4,dVar7);
        }
        else {
          FUN_004deb90(*(void **)(DAT_0065b5cc + 0xd0),1);
        }
      }
      (**(code **)(*(int *)this + 0x294))();
      iVar6 = 9;
      iVar8 = -1;
      iVar5 = *(int *)(DAT_0065b5cc + 0xd0);
      pvVar3 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar3,iVar5,iVar6,iVar8);
      goto LAB_005767f3;
    }
  }
  else if (DAT_00655094 != 0) goto LAB_005767f3;
  FUN_00575680(this,param_1,param_2);
LAB_005767f3:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00576810(void *this,float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = DAT_0065b5cc;
  if (DAT_0065b3d4 != 0) {
    if (3 < (uint)(*(int *)((int)this + 0x4b8) - *(int *)((int)this + 0x4b4) >> 2)) {
      if (*(int *)((int)this + 0x4c0) != 0) {
        fVar3 = *(float *)((int)this + 0x4d0) + param_1;
        *(float *)((int)this + 0x4d0) = fVar3;
        if (1.0 <= fVar3) {
          *(float *)((int)this + 0x4d0) = fVar3 - 2.0;
        }
      }
      iVar1 = *(int *)(*(int *)(iVar2 + 0xd0) + 0x60);
      *(int *)((int)this + 0x4c8) = iVar1;
      if (iVar1 != -1) {
        if (*(char *)((int)this + 0x4cc) == '\x01') {
          fVar3 = *(float *)((int)this + 0x4c4) + param_1 * 212.49998;
          *(float *)((int)this + 0x4c4) = fVar3;
          if (200.0 <= fVar3) {
            *(undefined4 *)((int)this + 0x4c4) = 0x43480000;
            *(undefined1 *)((int)this + 0x4cc) = 0;
          }
        }
        else {
          fVar3 = *(float *)((int)this + 0x4c4) - param_1 * 212.49998;
          *(float *)((int)this + 0x4c4) = fVar3;
          if (fVar3 <= 40.0) {
            *(undefined4 *)((int)this + 0x4c4) = 0x42200000;
            *(undefined1 *)((int)this + 0x4cc) = 1;
          }
        }
      }
    }
    fVar3 = *(float *)((int)this + 0x44c);
    if ((fVar3 != 0.0) || (*(float *)((int)this + 0x450) != 0.0)) {
      *(float *)((int)this + 0x454) = *(float *)((int)this + 0x454) + param_1;
      fVar4 = *(float *)((int)this + 0x458) + param_1;
      *(float *)((int)this + 0x458) = fVar4;
      if (0.01 <= fVar4) {
        fVar5 = 8.0;
        *(float *)((int)this + 0x458) = fVar4 - 0.01;
        if (fVar3 != 0.0) {
          if (*(char *)((int)this + 0x45d) == '\0') {
            if (DAT_0065507d != '\0') {
              DAT_0065507d = '\0';
              DAT_0065bf24 = (float)*(double *)(*(int *)(iVar2 + 0xd0) + 0x28);
              DAT_0065bf28 = (float)*(double *)(*(int *)(iVar2 + 0xd0) + 0x30);
              fVar3 = *(float *)((int)this + 0x44c);
            }
            if (*(char *)((int)this + 0x45c) == '\0') {
              fVar4 = 2.0;
            }
            else {
              fVar4 = 8.0;
            }
            DAT_0065bf24 = fVar4 * fVar3 + DAT_0065bf24;
          }
          else {
            if (DAT_0065507e != '\0') {
              DAT_0065507e = '\0';
              DAT_0065bf1c = (float)*(double *)(*(int *)(iVar2 + 0xd0) + 0x28);
              DAT_0065bf20 = (float)*(double *)(*(int *)(iVar2 + 0xd0) + 0x30);
              fVar3 = *(float *)((int)this + 0x44c);
            }
            if (*(char *)((int)this + 0x45c) == '\0') {
              fVar4 = 2.0;
            }
            else {
              fVar4 = 8.0;
            }
            DAT_0065bf1c = fVar4 * fVar3 + DAT_0065bf1c;
          }
          **(undefined1 **)((int)this + 0x288) = 1;
        }
        fVar3 = *(float *)((int)this + 0x450);
        if (fVar3 != 0.0) {
          if (*(char *)((int)this + 0x45d) == '\0') {
            if (DAT_0065507d != '\0') {
              DAT_0065507d = '\0';
              DAT_0065bf24 = (float)*(double *)(*(int *)(iVar2 + 0xd0) + 0x28);
              DAT_0065bf28 = (float)*(double *)(*(int *)(iVar2 + 0xd0) + 0x30);
              fVar3 = *(float *)((int)this + 0x450);
            }
            if (*(char *)((int)this + 0x45c) == '\0') {
              fVar5 = 2.0;
            }
            DAT_0065bf28 = fVar5 * fVar3 + DAT_0065bf28;
          }
          else {
            if (DAT_0065507e != '\0') {
              DAT_0065507e = '\0';
              DAT_0065bf1c = (float)*(double *)(*(int *)(iVar2 + 0xd0) + 0x28);
              DAT_0065bf20 = (float)*(double *)(*(int *)(iVar2 + 0xd0) + 0x30);
              fVar3 = *(float *)((int)this + 0x450);
            }
            if (*(char *)((int)this + 0x45c) == '\0') {
              fVar5 = 2.0;
            }
            DAT_0065bf20 = fVar5 * fVar3 + DAT_0065bf20;
          }
          **(undefined1 **)((int)this + 0x288) = 1;
        }
      }
    }
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


undefined1 * FUN_00576b90(undefined1 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_2 + 0x8c);
  if (0xf < *(uint *)(param_2 + 0xa0)) {
    pbVar3 = *(byte **)pbVar3;
  }
  uVar2 = FUN_004031f0(pbVar3,*(uint *)(param_2 + 0x9c),(byte *)&PTR_005ce008,0);
  if ((char)uVar2 == '\0') {
    FUN_00591e00(param_1,"%s_%s.png");
    return param_1;
  }
  switch(*(undefined4 *)(param_2 + 0x54)) {
  case 0:
    break;
  case 1:
    FUN_00591e00(param_1,"%s_Star.png");
    return param_1;
  case 2:
    FUN_00591e00(param_1,"%s_Moon.png");
    return param_1;
  case 3:
    FUN_00591e00(param_1,"%s_AsteroidSegment_Light_%02d.png");
    return param_1;
  case 4:
    FUN_00591e00(param_1,"%s_GasCloudSegment_%s_%02d.png");
    return param_1;
  default:
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  if (0.0 < *(float *)(param_2 + 0xc0)) {
    FUN_00591e00(param_1,"%s_Planet_Lush.png");
    return param_1;
  }
  if (*(int *)(param_2 + 200) != 0) {
    if (*(int *)(param_2 + 200) == 1) {
      FUN_00591e00(param_1,"%s_Planet_Gas_Purple.png");
      return param_1;
    }
    FUN_00591e00(param_1,"%s_Planet_Gas_Purple.png");
    return param_1;
  }
  iVar1 = *(int *)(param_2 + 0xc4);
  if (iVar1 == 0) {
    FUN_00591e00(param_1,"%s_Planet_Barren.png");
    return param_1;
  }
  if ((iVar1 != 3) && (iVar1 != 2)) {
    if ((iVar1 != 4) && (iVar1 != 1)) {
      FUN_00591e00(param_1,"%s_Planet_Barren.png");
      return param_1;
    }
    FUN_00591e00(param_1,"%s_Planet_Red.png");
    return param_1;
  }
  FUN_00591e00(param_1,"%s_Planet_Lush.png");
  return param_1;
}


undefined1 * FUN_00576f30(undefined1 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int extraout_ECX;
  
  iVar1 = *(int *)(param_2 + 0xd8);
  if (iVar1 == 2) {
    FUN_00591e00(param_1,"%s_JumpGate.png");
    return param_1;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if ((*(int *)(param_2 + 0x130) != 0) && (*(char *)(*(int *)(param_2 + 0x130) + 0x388) != '\0')
         ) {
        FUN_00591e00(param_1,"%s_ColonyShip.png");
        return param_1;
      }
      FUN_00591e00(param_1,"%s_Starbase.png");
      return param_1;
    }
    if (iVar1 == 3) {
      FUN_00591e00(param_1,"%s_Depot.png");
      return param_1;
    }
    if ((iVar1 == 4) && (cVar2 = FUN_00509940(param_2), cVar2 != '\0')) {
      if (*(int *)(extraout_ECX + 0xdc) == 0) {
        FUN_00591e00(param_1,"%s_FriendlyMissile%s.png");
        return param_1;
      }
      FUN_00591e00(param_1,"%s_HostileMissile%s.png");
      return param_1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    return param_1;
  }
  if ((*(int *)(param_2 + 0x130) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0x130) + 0x44), iVar1 != 0)) {
    if ((*(int *)(iVar1 + 0x70) == 7) ||
       ((*(int *)(iVar1 + 0x124) != 0 && (*(int *)(*(int *)(iVar1 + 0x124) + 0x248) == 2)))) {
      FUN_00591e00(param_1,"%s_Authority%s.png");
      return param_1;
    }
    if ((iVar1 != 0) &&
       ((*(int *)(iVar1 + 0x70) == 8 ||
        ((*(int *)(iVar1 + 0x124) != 0 && (*(int *)(*(int *)(iVar1 + 0x124) + 0x248) == 1)))))) {
      FUN_00591e00(param_1,"%s_Military%s.png");
      return param_1;
    }
  }
  if (*(int *)(param_2 + 0xdc) == 2) {
    FUN_00591e00(param_1,"%s_Hostile%s.png");
    return param_1;
  }
  if (*(int *)(param_2 + 0xdc) == 0) {
    FUN_00591e00(param_1,"%s_Friendly%s.png");
    return param_1;
  }
  FUN_00591e00(param_1,"%s_Neutral%s.png");
  return param_1;
}


undefined1 * FUN_005772f0(undefined1 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x254) + 0x158);
  if (iVar1 == 2) {
    FUN_00591e00(param_1,"%s_JumpGate.png");
    return param_1;
  }
  if (iVar1 == 0) {
    if (param_2 == *(int *)(DAT_0065b5cc + 0xd0)) {
      FUN_00591e00(param_1,"%s_OwnShip.png");
      return param_1;
    }
    if (*(char *)(*(int *)(param_2 + 0x40) + 0x34) == '\0') {
      FUN_00591e00(param_1,"%s_Hostile%s.png");
      return param_1;
    }
    FUN_00591e00(param_1,"%s_Neutral%s.png");
    return param_1;
  }
  if (iVar1 == 1) {
    if (*(char *)(param_2 + 0x388) != '\0') {
      FUN_00591e00(param_1,"%s_ColonyShip.png");
      return param_1;
    }
    FUN_00591e00(param_1,"%s_Starbase.png");
    return param_1;
  }
  if (iVar1 != 3) {
    if (iVar1 != 4) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *param_1 = 0;
      FUN_00402690(param_1,&PTR_005ce008,0);
      return param_1;
    }
    if (*(int *)(param_2 + 0x39c) == *(int *)(DAT_0065b5cc + 0xd0)) {
      FUN_00591e00(param_1,"%s_FriendlyMissile%s.png");
      return param_1;
    }
    FUN_00591e00(param_1,"%s_HostileMissile%s.png");
    return param_1;
  }
  FUN_00591e00(param_1,"%s_Depot.png");
  return param_1;
}


void FUN_00577530(float *param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  void *local_1c [4];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0xf;
  local_1c[0] = (void *)((uint)local_1c[0] & 0xffffff00);
  FUN_00402690(local_1c,&PTR_005ce008,0);
  cVar2 = DAT_0065507d;
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
    if (0xf < local_8) {
      pvVar3 = local_1c[0];
      if (0xfff < local_8 + 1) {
        pvVar3 = *(void **)((int)local_1c[0] + -4);
        if (0x1f < (uint)((int)local_1c[0] + (-4 - (int)pvVar3))) goto LAB_0057761e;
      }
      FUN_005adb3f(pvVar3);
    }
LAB_0057759a:
    *param_1 = DAT_0065bf24;
    param_1[1] = DAT_0065bf28;
    return;
  }
  if (DAT_00655098 == 0) {
    if (0xf < local_8) {
      pvVar3 = local_1c[0];
      if (0xfff < local_8 + 1) {
        pvVar3 = *(void **)((int)local_1c[0] + -4);
        if (0x1f < (uint)((int)local_1c[0] + (-4 - (int)pvVar3))) {
LAB_0057761e:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar3);
    }
  }
  else {
    if (0xf < local_8) {
      pvVar3 = local_1c[0];
      if (0xfff < local_8 + 1) {
        pvVar3 = *(void **)((int)local_1c[0] + -4);
        if (0x1f < (uint)((int)local_1c[0] + (-4 - (int)pvVar3))) goto LAB_0057761e;
      }
      FUN_005adb3f(pvVar3);
    }
    if (cVar2 == '\0') goto LAB_0057759a;
  }
  iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
  *param_1 = (float)*(double *)(iVar1 + 0x28);
  param_1[1] = (float)*(double *)(iVar1 + 0x30);
  return;
}


float * __thiscall FUN_00577670(void *this,float *param_1,float param_2,float param_3)

{
  double dVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  uint in_stack_ffffffc4;
  void *pvVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c9233;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  pvVar7 = (void *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,&PTR_005ce008,0);
  cVar3 = FUN_0052aeb0(*(int *)(DAT_0065b5cc + 0xd0),(uint)*(byte *)((int)this + 0x45d),pvVar7);
  if (cVar3 == '\0') {
    pfVar4 = (float *)&DAT_0065bf1c;
    if (*(char *)((int)this + 0x45d) == '\0') {
      pfVar4 = (float *)&DAT_0065bf24;
    }
    *param_1 = *param_1 - *pfVar4;
    fVar6 = param_1[1] - pfVar4[1];
  }
  else {
    dVar1 = *(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
    *param_1 = *param_1 - (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28);
    fVar6 = param_1[1] - (float)dVar1;
  }
  param_1[1] = fVar6;
  fVar5 = *param_1 * *(float *)((int)this + 0x4fc);
  fVar6 = fVar6 * *(float *)((int)this + 0x4fc);
  *param_1 = fVar5;
  param_1[1] = fVar6;
  fVar5 = (float)(*(int *)((int)this + 0x2a0) / 2) + fVar5;
  *param_1 = fVar5;
  iVar2 = *(int *)((int)this + 0x2a4);
  *param_1 = (float)(int)fVar5;
  param_1[1] = (float)(int)((float)(iVar2 / 2) + fVar6);
  ExceptionList = local_10;
  return param_1;
}


float * __thiscall FUN_005777f0(void *this,float *param_1,float param_2,float param_3)

{
  char cVar1;
  float *pfVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  Vec2 local_24 [8];
  float local_1c;
  float local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c927c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  local_14 = 1;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  fVar5 = param_2 - (float)(*(int *)((int)this + 0x2a0) / 2);
  *param_1 = fVar5;
  fVar4 = param_3 - (float)(*(int *)((int)this + 0x2a4) / 2);
  param_1[1] = fVar4;
  *param_1 = fVar5 / *(float *)((int)this + 0x4fc);
  param_1[1] = (fVar4 / *(float *)((int)this + 0x4fc)) * -1.0;
  FUN_00402690(local_3c,&PTR_005ce008,0);
  cVar1 = DAT_0065507d;
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) {
    if (0xf < local_28) {
      pvVar3 = local_3c[0];
      if (0xfff < local_28 + 1) {
        pvVar3 = *(void **)((int)local_3c[0] + -4);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar3);
    }
LAB_005778fd:
    pfVar2 = (float *)cocos2d::Vec2::operator+((Vec2 *)&DAT_0065bf24,local_24);
    *param_1 = *pfVar2;
    param_1[1] = pfVar2[1];
  }
  else {
    if (DAT_00655098 == 0) {
      if (0xf < local_28) {
        pvVar3 = local_3c[0];
        if (0xfff < local_28 + 1) {
          pvVar3 = *(void **)((int)local_3c[0] + -4);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar3);
      }
    }
    else {
      if (0xf < local_28) {
        pvVar3 = local_3c[0];
        if (0xfff < local_28 + 1) {
          pvVar3 = *(void **)((int)local_3c[0] + -4);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar3);
      }
      if (cVar1 == '\0') goto LAB_005778fd;
    }
    local_1c = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28);
    local_18 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
    local_8 = CONCAT31(local_8._1_3_,2);
    pfVar2 = (float *)cocos2d::Vec2::operator+((Vec2 *)&local_1c,local_24);
    *param_1 = *pfVar2;
    param_1[1] = pfVar2[1];
  }
  ExceptionList = local_10;
  return param_1;
}


void __thiscall FUN_00577a00(void *this,void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  Vec2 *pVVar4;
  Vec2 *this_00;
  int iVar5;
  undefined4 uVar6;
  Color3B *this_01;
  float fVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  code *pcVar11;
  uint in_stack_ffffffa8;
  void *pvVar12;
  float in_stack_ffffffb4;
  float local_20;
  undefined4 local_1c;
  float local_18;
  Color3B local_13 [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c92b2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar12 = (void *)(in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"beaconcone.png",0xe);
  piVar3 = (int *)FUN_00591910(pvVar12);
  iVar2 = param_2;
  *(int **)(param_2 + 0x28) = piVar3;
  local_8 = 0;
  (**(code **)(*piVar3 + 0xa0))();
  local_8 = 0xffffffff;
  FUN_00508ff0(param_1,(Vec2 *)&stack0xffffffb4);
  FUN_00592f80((float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28),
               (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30),in_stack_ffffffb4);
  (**(code **)(**(int **)(iVar2 + 0x28) + 0xbc))();
  FUN_00577670(this,&local_20,(float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28),
               (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30));
  local_8 = 1;
  (**(code **)(**(int **)(iVar2 + 0x28) + 0x4c))();
  local_8 = 0xffffffff;
  pVVar4 = (Vec2 *)(**(code **)(**(int **)(iVar2 + 0x20) + 0x5c))();
  this_00 = (Vec2 *)(**(code **)(**(int **)(iVar2 + 0x28) + 0x5c))();
  local_18 = cocos2d::Vec2::getDistanceSq(this_00,pVVar4);
  piVar3 = *(int **)(iVar2 + 0x28);
  iVar1 = *piVar3;
  param_2 = 0x5f3759df - ((uint)local_18 >> 1);
  iVar5 = (**(code **)(iVar1 + 0xb0))();
  local_1c = *(undefined4 *)(iVar5 + 4);
  (**(code **)(*piVar3 + 0xb0))();
  (**(code **)(iVar1 + 0x3c))();
  (**(code **)(**(int **)(iVar2 + 0x28) + 0x244))();
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x28) + 8) +
                  0xb0);
  if (iVar1 == 0) {
    uVar10 = '^';
    uVar9 = 0xa1;
    uVar8 = 'X';
    this_01 = (Color3B *)((int)&param_2 + 1);
  }
  else if (iVar1 == 1) {
    uVar10 = 0xff;
    uVar9 = '\0';
    uVar8 = '\0';
    this_01 = (Color3B *)((int)&param_2 + 1);
  }
  else {
    if (*(char *)((int)param_1 + 0x45) == '\0') {
switchD_00577c8c_caseD_1:
      pcVar11 = YELLOW_exref;
LAB_00577d18:
      (**(code **)(**(int **)(iVar2 + 0x28) + 0x25c))(pcVar11);
      goto switchD_00577c8c_default;
    }
    switch(*(undefined4 *)((int)param_1 + 0xe0)) {
    case 0:
      iVar1 = *(int *)((int)param_1 + 0xdc);
      if (iVar1 != 0) {
        pcVar11 = GREEN_exref;
        if (((iVar1 != 1) && (pcVar11 = RED_exref, iVar1 != 2)) &&
           (pcVar11 = YELLOW_exref, iVar1 != 3)) goto switchD_00577c8c_default;
        goto LAB_00577d18;
      }
      uVar10 = 0xd0;
      uVar9 = 0xf5;
      uVar8 = 0xf5;
      this_01 = (Color3B *)((int)&param_2 + 1);
      break;
    case 1:
    case 2:
      goto switchD_00577c8c_caseD_1;
    case 3:
      pcVar11 = ORANGE_exref;
      goto LAB_00577d18;
    case 4:
    case 5:
    case 6:
    case 7:
      if (*(float *)((int)param_1 + 0x128) == 0.0) goto switchD_00577c8c_default;
      uVar10 = '\"';
      uVar9 = 0x9f;
      uVar8 = 0xf9;
      this_01 = local_13;
      break;
    default:
      goto switchD_00577c8c_default;
    }
  }
  iVar1 = **(int **)(iVar2 + 0x28);
  uVar6 = cocos2d::Color3B::Color3B(this_01,uVar8,uVar9,uVar10);
  (**(code **)(iVar1 + 0x25c))(uVar6);
switchD_00577c8c_default:
  (**(code **)(*(int *)this + 0x108))(*(undefined4 *)(iVar2 + 0x28),5);
  fVar7 = *(float *)((int)param_1 + 0x128);
  if (fVar7 == 100.0) {
    (**(code **)(**(int **)(iVar2 + 0x28) + 0xb4))(0);
    fVar7 = *(float *)((int)param_1 + 0x128);
  }
  if (25.0 <= fVar7) {
    if (50.0 <= fVar7) {
      if (75.0 <= fVar7) {
        if (90.0 <= fVar7) {
          uVar6 = 0xff;
        }
        else {
          uVar6 = 0xc0;
        }
      }
      else {
        uVar6 = 0x80;
      }
    }
    else {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = 0x20;
  }
  (**(code **)(**(int **)(iVar2 + 0x20) + 0x244))(uVar6);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00577e00(void *this,void *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  void **ppvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  Ref *pRVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  void *this_00;
  float in_XMM2_Da;
  void *in_stack_ffffff68;
  void *pvVar14;
  float in_stack_ffffff70;
  float fVar15;
  char *pcVar16;
  undefined4 *local_74;
  Color3B local_6f [3];
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60 [3];
  undefined4 local_54;
  void *local_50;
  int *local_4c;
  char local_45;
  void *local_44;
  void *pvStack_40;
  void *pvStack_3c;
  void *pvStack_38;
  undefined8 local_34;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c9337;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_1;
  local_34 = 0xf00000000;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_8 = 0;
  iVar12 = *(int *)((int)param_1 + 0xe0);
  local_64 = in_XMM2_Da;
  local_4c = this;
  if (iVar12 == 2) {
    in_stack_ffffff70 = 8.035094e-39;
    ppvVar5 = (void **)FUN_00591e00((undefined1 *)local_2c,"%s_Explosion.png");
    if (&local_44 != ppvVar5) {
LAB_00577e9f:
      FUN_00401b20((int *)&local_44);
      local_44 = *ppvVar5;
      pvStack_40 = ppvVar5[1];
      pvStack_3c = ppvVar5[2];
      pvStack_38 = ppvVar5[3];
      local_34 = *(undefined8 *)(ppvVar5 + 4);
      ppvVar5[4] = (void *)0x0;
      ppvVar5[5] = (void *)0xf;
      *(undefined1 *)ppvVar5 = 0;
    }
LAB_00577ec9:
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))))
      goto LAB_00577efb;
LAB_00578170:
      FUN_005adb3f(pvVar14);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x45) != '\0') {
      if (iVar12 != 1) {
        if (iVar12 != 0) {
          if (iVar12 == 3) {
            if (*(int *)((int)param_1 + 0xdc) == 0) {
              if (*(float *)((int)param_1 + 0x40) <= 1.0 && *(float *)((int)param_1 + 0x40) != 1.0)
              goto LAB_00578044;
              pcVar16 = "%s_CounterMeasure_NoContact.png";
            }
            else if (1.0 < *(float *)((int)param_1 + 0x40) || *(float *)((int)param_1 + 0x40) == 1.0
                    ) {
              pcVar16 = "%s_CounterMeasure_Unknown_NoContact.png";
            }
            else {
              pcVar16 = "%s_CounterMeasure_Unknown.png";
            }
          }
          else if (iVar12 == 5) {
LAB_00578044:
            pcVar16 = "%s_CounterMeasure.png";
          }
          else if ((iVar12 == 6) || (iVar12 == 4)) {
            pcVar16 = "%s_Cargo.png";
          }
          else {
            if (iVar12 != 7) goto LAB_0057817a;
            pcVar16 = "%s_Derelict.png";
          }
          in_stack_ffffff70 = 8.035722e-39;
          piVar10 = (int *)FUN_00591e00((undefined1 *)local_2c,pcVar16);
          FUN_00413230(&local_44,piVar10);
          goto LAB_00577ec9;
        }
        if (*(float *)((int)param_1 + 0x118) == 0.0) {
          in_stack_ffffff70 = 8.03559e-39;
          piVar10 = (int *)FUN_00576f30((undefined1 *)local_2c,(int)param_1);
          FUN_00413230(&local_44,piVar10);
          goto LAB_00577ec9;
        }
      }
      in_stack_ffffff70 = 8.036092e-39;
      ppvVar5 = (void **)FUN_00591e00((undefined1 *)local_2c,"%s_Unknown.png");
      if (&local_44 != ppvVar5) goto LAB_00577e9f;
      goto LAB_00577ec9;
    }
    in_stack_ffffff70 = 8.03533e-39;
    ppvVar5 = (void **)FUN_00591e00((undefined1 *)local_2c,"%s_Unknown.png");
    if (&local_44 != ppvVar5) {
      FUN_00401b20((int *)&local_44);
      local_44 = *ppvVar5;
      pvStack_40 = ppvVar5[1];
      pvStack_3c = ppvVar5[2];
      pvStack_38 = ppvVar5[3];
      local_34 = *(undefined8 *)(ppvVar5 + 4);
      ppvVar5[4] = (void *)0x0;
      ppvVar5[5] = (void *)0xf;
      *(undefined1 *)ppvVar5 = 0;
    }
    if (0xf < local_18) {
      pvVar14 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar14 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_00578170;
    }
  }
LAB_0057817a:
  puVar6 = (undefined4 *)FUN_005adb0f(0x38);
  local_8._0_1_ = 1;
  iVar12 = *(int *)((int)param_1 + 0x130);
  local_74 = puVar6;
  FUN_004024e0(&stack0xffffff68,&local_44);
  puVar6 = FUN_00573530(puVar6,-(uint)(iVar12 != 0) & iVar12 + 8U,in_stack_ffffff68);
  local_8._0_1_ = 0;
  piVar10 = (int *)puVar6[8];
  local_74 = puVar6;
  if (piVar10 == (int *)0x0) {
    FUN_004024e0(&stack0xffffff68,puVar6);
    uVar7 = FUN_00591910(in_stack_ffffff68);
    puVar6[8] = uVar7;
    (**(code **)(*local_4c + 0x108))();
    piVar10 = (int *)puVar6[8];
  }
  (**(code **)(*piVar10 + 0x40))();
  local_6c = 0x3f000000;
  local_68 = 0x3f000000;
  local_8._0_1_ = 2;
  fVar15 = 8.036356e-39;
  (**(code **)(*(int *)puVar6[8] + 0xa0))();
  this_00 = local_50;
  local_8._0_1_ = 0;
  FUN_00508ff0(local_50,(Vec2 *)&stack0xffffff70);
  pvVar14 = (void *)0x578235;
  pfVar8 = FUN_00577670(local_4c,local_60,in_stack_ffffff70,fVar15);
  local_8._0_1_ = 3;
  (**(code **)(*(int *)puVar6[8] + 0x4c))();
  local_8 = (uint)local_8._1_3_ << 8;
  local_45 = *(float *)((int)this_00 + 0x118) < 120.0;
  (**(code **)(*(int *)puVar6[8] + 0xb4))();
  piVar10 = local_4c;
  if (this_00 == *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x19c)) {
    (**(code **)(*(int *)local_4c[0x11e] + 0x40))();
    iVar12 = *(int *)piVar10[0x11e];
    (**(code **)(*(int *)puVar6[8] + 0x5c))();
    (**(code **)(iVar12 + 0x4c))();
    piVar10 = local_4c;
    pfVar8 = (float *)0x1;
    (**(code **)(*(int *)local_4c[0x11e] + 0xb4))();
    pvVar14 = (void *)0x9e;
    iVar12 = *(int *)piVar10[0x11e];
    cocos2d::Color3B::Color3B(local_6f,0x9e,0xd2,0xf9);
    (**(code **)(iVar12 + 0x25c))();
    this_00 = local_50;
  }
  if (*(int *)((int)this_00 + 0xe0) == 0) {
    iVar12 = *(int *)((int)this_00 + 0xd8);
    if (iVar12 == 1) {
      uVar7 = 0x25;
      if (*(char *)((int)local_4c + 0x45d) == '\0') {
        uVar7 = 0x37;
      }
    }
    else {
      uVar3 = 0x38;
      if (iVar12 == 2) {
        uVar3 = 0x30;
      }
      uVar7 = CONCAT31((int3)((uint)iVar12 >> 8),uVar3);
    }
    iVar12 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x28);
    if (iVar12 != 0) {
      local_54._1_3_ = (undefined3)((uint)uVar7 >> 8);
      if (*(int *)(*(int *)(iVar12 + 8) + 0xb0) == 0) {
        local_54 = CONCAT31(local_54._1_3_,0x32);
        uVar7 = local_54;
      }
      else if (iVar12 != 0) {
        uVar3 = (undefined1)uVar7;
        if (*(int *)(*(int *)(iVar12 + 8) + 0xb0) == 1) {
          uVar3 = 0x33;
        }
        local_54 = CONCAT31(local_54._1_3_,uVar3);
        uVar7 = local_54;
      }
    }
    local_54 = uVar7;
    FUN_004024e0(local_2c,(undefined4 *)((int)this_00 + 0x48));
    local_8._0_1_ = 4;
    FUN_00591e00(&stack0xffffff68,"`%c%s");
    pRVar9 = FUN_0055cb00((Node)0x0,pvVar14);
    puVar6[0xc] = pRVar9;
    local_6c = 0x3f000000;
    local_68 = 0x3f800000;
    local_8._0_1_ = 5;
    fVar15 = 8.03704e-39;
    (**(code **)(*(int *)pRVar9 + 0xa0))();
    local_8._0_1_ = 4;
    FUN_00508ff0(this_00,(Vec2 *)&stack0xffffff74);
    FUN_00577670(local_4c,local_60,(float)pfVar8,fVar15);
    local_8._0_1_ = 6;
    (**(code **)(*(int *)puVar6[0xc] + 0x48))();
    pvVar14 = (void *)0x578456;
    (**(code **)(*local_4c + 0x108))();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pvVar13 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar13 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13)))) goto LAB_00577efb;
      FUN_005adb3f(pvVar13);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  }
  else if (*(int *)((int)this_00 + 0xe0) == 1) {
    FUN_00591e00(&stack0xffffff68,"`%c%s");
    pRVar9 = FUN_0055cb00((Node)0x0,pvVar14);
    puVar6[0xc] = pRVar9;
    local_60[0] = 0.5;
    local_60[1] = 1.0;
    local_8._0_1_ = 7;
    fVar15 = 8.037481e-39;
    (**(code **)(*(int *)pRVar9 + 0xa0))();
    local_8._0_1_ = 0;
    FUN_00508ff0(this_00,(Vec2 *)&stack0xffffff74);
    FUN_00577670(local_4c,local_60 + 2,(float)pfVar8,fVar15);
    local_8._0_1_ = 8;
    (**(code **)(*(int *)puVar6[0xc] + 0x48))();
    pvVar14 = (void *)0x578591;
    (**(code **)(*local_4c + 0x108))();
    local_8 = (uint)local_8._1_3_ << 8;
  }
  iVar12 = *(int *)((int)this_00 + 0xe0);
  if ((((iVar12 == 5) || (iVar12 == 6)) || (iVar12 == 4)) || (iVar12 == 7)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
LAB_00578931:
    FUN_00577a00(local_4c,this_00,(int)puVar6);
  }
  else {
    if ((*(int *)((int)this_00 + 0xd8) == 0) && (*(float *)((int)this_00 + 0x3c) != -1.0)) {
      FUN_00591e00(&stack0xffffff68,"%s_Ship_Sensors.png");
      piVar10 = (int *)FUN_00591910(pvVar14);
      puVar6[10] = piVar10;
      local_60[0] = 0.5;
      local_60[1] = 0.5;
      local_8._0_1_ = 9;
      (**(code **)(*piVar10 + 0xa0))();
      local_8 = (uint)local_8._1_3_ << 8;
      iVar12 = *(int *)puVar6[10];
      iVar11 = (**(code **)(*(int *)puVar6[8] + 0xb0))();
      local_54 = *(undefined4 *)(iVar11 + 4);
      (**(code **)(*(int *)puVar6[8] + 0xb0))();
      (**(code **)(iVar12 + 0x48))();
      (**(code **)(*(int *)puVar6[8] + 0x108))();
      this_00 = local_50;
      pvVar14 = *(void **)((int)local_50 + 0x3c);
      (**(code **)(*(int *)puVar6[10] + 0xbc))();
      (**(code **)(*(int *)puVar6[10] + 0x40))(local_64);
      if (1.0 < *(float *)((int)this_00 + 0x40) || *(float *)((int)this_00 + 0x40) == 1.0) {
        uVar7 = 0x30;
      }
      else {
        uVar7 = 0x50;
      }
      (**(code **)(*(int *)puVar6[10] + 0x244))(uVar7);
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x28) + 8) +
                  0xb0) == 2) {
        iVar12 = *(int *)((int)this_00 + 0x130);
        if (iVar12 == 0) {
LAB_00578799:
          iVar12 = *(int *)puVar6[10];
        }
        else {
          if ((*(int *)(iVar12 + 100) == *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 100)) ||
             ((iVar11 = *(int *)(*(int *)(iVar12 + 0x44) + 0x124), iVar11 != 0 &&
              (*(int *)(iVar11 + 0x248) != 0)))) {
            iVar12 = *(int *)puVar6[10];
            cocos2d::Color3B::Color3B(local_6f,0xf5,0xf5,0xd0);
            (**(code **)(iVar12 + 0x25c))();
            this_00 = local_50;
            goto LAB_005787aa;
          }
          if ((iVar12 == 0) || (cVar4 = FUN_00509940((int)this_00), cVar4 == '\0'))
          goto LAB_00578799;
          iVar12 = *(int *)puVar6[10];
        }
        (**(code **)(iVar12 + 0x25c))();
      }
    }
LAB_005787aa:
    if (*(float *)((int)this_00 + 0x128) < 90.0) {
      if (local_45 != '\0') goto LAB_00578931;
    }
    else if (local_45 != '\0') {
      if (puVar6[9] == 0) {
        pvVar14 = (void *)((uint)pvVar14 & 0xffffff00);
        FUN_00402690(&stack0xffffff68,"white.png",9);
        uVar7 = FUN_00591910(pvVar14);
        puVar6[9] = uVar7;
        (**(code **)(*local_4c + 0x108))();
      }
      if (*(float *)((int)this_00 + 0x34) == 0.0) {
        (**(code **)(*(int *)puVar6[9] + 0xb4))();
      }
      else {
        (**(code **)(*(int *)puVar6[9] + 0xb4))();
        local_60[0] = 0.5;
        local_60[1] = 0.0;
        local_8._0_1_ = 10;
        (**(code **)(*(int *)puVar6[9] + 0xa0))();
        local_8 = (uint)local_8._1_3_ << 8;
        iVar12 = *(int *)puVar6[9];
        (**(code **)(*(int *)puVar6[8] + 0x5c))();
        (**(code **)(iVar12 + 0x4c))();
        (**(code **)(*(int *)puVar6[9] + 0xbc))();
        iVar12 = *(int *)puVar6[9];
        local_64 = *(float *)((int)local_50 + 0x34) * 8.0;
        (**(code **)(iVar12 + 0xb0))();
        (**(code **)(iVar12 + 0x2c))();
        iVar12 = *(int *)((int)local_50 + 0x130);
        if ((((iVar12 != 0) && (*(int *)(*(int *)(iVar12 + 0x254) + 0x158) == 4)) &&
            (*(char *)(iVar12 + 0x3fc) != '\0')) && (*(int *)(iVar12 + 0x3d0) == 2)) {
          iVar12 = *(int *)puVar6[9];
          cocos2d::Color3B::Color3B(local_6f,0xff,'\0','\0');
          (**(code **)(iVar12 + 0x25c))();
        }
      }
    }
  }
  puVar1 = (undefined4 *)local_4c[0x10b];
  if ((undefined4 *)local_4c[0x10c] == puVar1) {
    FUN_00414080(local_4c + 0x10a,puVar1,&local_74);
  }
  else {
    *puVar1 = puVar6;
    local_4c[0x10b] = local_4c[0x10b] + 4;
  }
  if (0xf < local_34._4_4_) {
    pvVar14 = local_44;
    if ((0xfff < local_34._4_4_ + 1) &&
       (pvVar14 = *(void **)((int)local_44 + -4), 0x1f < (uint)((int)local_44 + (-4 - (int)pvVar14))
       )) {
LAB_00577efb:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
