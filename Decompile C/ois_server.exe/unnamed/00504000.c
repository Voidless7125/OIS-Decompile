#include "../ois_server.exe.h"


void __fastcall FUN_00504030(int param_1)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *this;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *this_00;
  float in_XMM1_Da;
  float fVar8;
  float fVar9;
  byte *in_stack_ffffffb4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c09f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0x40);
  if (*(char *)(iVar1 + 0x34) == '\0') {
    *(undefined1 *)(iVar1 + 0x34) = 1;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  local_1c = in_XMM1_Da;
  FUN_00519750(*(int **)(param_1 + 0x3c));
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_18 = (float)*(double *)(*(int *)(param_1 + 0x6c) + 0x28);
    local_14 = (float)*(double *)(*(int *)(param_1 + 0x6c) + 0x30);
    local_24 = (float)*(double *)(iVar1 + 0x20);
    local_20 = (float)*(double *)(iVar1 + 0x28);
    local_8 = 1;
    fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_24,(Vec2 *)&local_18);
    local_14 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
    local_8 = 0xffffffff;
    if (0.05 < (1.5 - fVar8 * 0.5 * local_14 * local_14) * local_14 * fVar8) {
      *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x168) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x168) = 1;
      pbVar7 = *(byte **)(param_1 + 0x10);
      iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0x44);
      this_00 = (byte *)(iVar1 + 0x7c);
      pbVar3 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar3 = *(byte **)pbVar7;
      }
      pbVar6 = this_00;
      if (0xf < *(uint *)(iVar1 + 0x90)) {
        pbVar6 = *(byte **)this_00;
      }
      local_14 = *(float *)(pbVar7 + 0x10);
      uVar4 = FUN_004031f0(pbVar6,*(uint *)(iVar1 + 0x8c),pbVar3,(uint)local_14);
      if (((char)uVar4 == '\0') && (this_00 != pbVar7)) {
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar7 = *(byte **)pbVar7;
        }
        FUN_00402690(this_00,pbVar7,(uint)local_14);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if ((*(char *)(iVar1 + 0x168) == '\0') && (iVar5 = *(int *)(param_1 + 8), iVar5 != 0)) {
    local_24 = (float)*(double *)(iVar1 + 0x28);
    local_20 = (float)*(double *)(iVar1 + 0x30);
    local_18 = (float)*(double *)(iVar5 + 0x20);
    local_14 = (float)*(double *)(iVar5 + 0x28);
    local_8 = 3;
    fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_18,(Vec2 *)&local_24);
    local_14 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
    local_8 = 0xffffffff;
    if (0.05 < (1.5 - fVar8 * 0.5 * local_14 * local_14) * local_14 * fVar8) {
      *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x168) = 0;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x168) = 1;
    }
  }
  if ((*(float *)(param_1 + 100) != -1.0) &&
     (local_1c = *(float *)(param_1 + 100) - local_1c, *(float *)(param_1 + 100) = local_1c,
     local_1c <= 0.0)) {
    *(undefined4 *)(param_1 + 100) = 0xbf800000;
    *(undefined4 *)(param_1 + 4) = 1;
    FUN_00591070(&DAT_0060dfc4,"%s: Leaving %s");
    iVar1 = *(int *)(param_1 + 0x6c);
    this = FUN_00412b00();
    FUN_004024e0(&stack0xffffffb4,(undefined4 *)(*(int *)(iVar1 + 0x44) + 0x94));
    iVar5 = FUN_004a6de0(in_stack_ffffffb4);
    iVar5 = FUN_004aad50(*(uint *)(iVar1 + 0x20),iVar5);
    FUN_004a9a40(this,iVar1,iVar5);
    piVar2 = *(int **)(param_1 + 0x3c);
    iVar1 = *piVar2;
    *(undefined1 *)(piVar2 + 4) = 0;
    *(undefined1 *)(piVar2 + 6) = 0;
    iVar5 = *(int *)(*(int *)(iVar1 + 0x44) + 0x10);
    local_24 = (float)*(double *)(iVar5 + 0x20);
    local_20 = (float)*(double *)(iVar5 + 0x28);
    local_18 = (float)*(double *)(iVar1 + 0x28);
    local_14 = (float)*(double *)(iVar1 + 0x30);
    local_8 = 5;
    fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_18,(Vec2 *)&local_24);
    fVar8 = (float)(0x5f3759df - ((uint)fVar9 >> 1));
    piVar2[5] = (int)((1.5 - fVar9 * 0.5 * fVar8 * fVar8) * fVar8 * fVar9);
  }
  ExceptionList = local_10;
  return;
}


undefined1 __thiscall FUN_005043f0(void *this,int param_1)

{
  int *this_00;
  undefined1 *puVar1;
  void *this_01;
  char cVar2;
  float fVar3;
  Vec2 *this_02;
  int iVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar6;
  undefined1 *extraout_EDX;
  undefined1 *extraout_EDX_00;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *in_stack_ffffff7c;
  void *in_stack_ffffff94;
  char *pcVar10;
  Vec2 local_44 [8];
  float local_3c;
  float local_38;
  undefined4 *local_34;
  float local_30;
  undefined4 *local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  undefined1 local_13;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0a96;
  local_10 = ExceptionList;
  uVar7 = 0;
  bVar9 = false;
  local_1c = 0.0;
  local_20 = *(int *)((int)this + 0x6c);
  if ((local_20 == 0) || (param_1 == 0)) {
    return 0;
  }
  this_00 = *(int **)(local_20 + 0x360);
  local_34 = (undefined4 *)(param_1 + 0x238);
  ExceptionList = &local_10;
  if (*(int **)(local_20 + 0x364) == this_00) {
    FUN_00403840((void *)(local_20 + 0x35c),this_00,local_34);
  }
  else {
    FUN_004024e0(this_00,local_34);
    *(int *)(local_20 + 0x360) = *(int *)(local_20 + 0x360) + 0x18;
  }
  local_20 = param_1 + 8;
  local_30 = (float)*(double *)(param_1 + 0x28);
  local_12 = '\0';
  local_11 = '\0';
  local_2c = (undefined4 *)(float)*(double *)(param_1 + 0x30);
  local_28 = (float)*(double *)(*(int *)((int)this + 0x6c) + 0x28);
  local_24 = (float)*(double *)(*(int *)((int)this + 0x6c) + 0x30);
  local_8 = 1;
  local_1c = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_30);
  fVar3 = (float)(0x5f3759df - ((uint)local_1c >> 1));
  local_18 = *(int *)(&DAT_005df564 + *(int *)((int)this + 0x74) * 4);
  fVar3 = (1.5 - local_1c * 0.5 * fVar3 * fVar3) * fVar3 * local_1c;
  if (*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') {
    if (fVar3 <= 180.0) {
      if (120.0 < fVar3) {
        local_18 = (local_18 / 3) * 2;
      }
    }
    else {
      local_18 = 5;
      local_11 = '\x01';
    }
  }
  else {
    local_18 = 2;
  }
  local_24 = *(float *)((int)this + 0x6c);
  puVar5 = *(undefined4 **)((int)local_24 + 0x214);
  local_2c = *(undefined4 **)((int)local_24 + 0x218);
  iVar6 = local_18;
  if (puVar5 != local_2c) {
    do {
      iVar6 = *(int *)((int)*puVar5 + 0x130);
      if (iVar6 == 0) {
LAB_00504667:
        bVar8 = false;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x254);
        bVar8 = false;
        if (iVar6 != 0) {
          bVar8 = *(int *)(iVar6 + 0x158) == 4;
        }
        if (!bVar8) goto LAB_00504667;
        local_3c = (float)*(double *)((int)local_24 + 0x28);
        local_38 = (float)*(double *)((int)local_24 + 0x30);
        local_8 = 2;
        local_1c = (float)(uVar7 | 1);
        this_02 = FUN_00508ff0((void *)*puVar5,local_44);
        local_8 = 3;
        uVar7 = 3;
        bVar9 = true;
        local_1c = 4.2039e-45;
        fVar3 = cocos2d::Vec2::getDistanceSq(this_02,(Vec2 *)&local_3c);
        local_1c = (float)(0x5f3759df - ((uint)fVar3 >> 1));
        if (100.0 <= (1.5 - fVar3 * 0.5 * local_1c * local_1c) * local_1c * fVar3)
        goto LAB_00504667;
        bVar8 = true;
      }
      if ((uVar7 & 2) != 0) {
        uVar7 = uVar7 & 0xfffffffd;
      }
      if (bVar9) {
        uVar7 = uVar7 & 0xfffffffe;
        bVar9 = false;
      }
      if (bVar8) {
        local_12 = '\x01';
        iVar6 = (int)((double)*(int *)(&DAT_005df564 + *(int *)((int)this + 0x74) * 4) * 1.5);
        if (100 < (int)((double)*(int *)(&DAT_005df564 + *(int *)((int)this + 0x74) * 4) * 1.5)) {
          iVar6 = 100;
        }
        break;
      }
      puVar5 = puVar5 + 1;
      iVar6 = local_18;
    } while (puVar5 != local_2c);
  }
  local_8 = 0xffffffff;
  local_13 = 1;
  if (*(int *)((int)this + 0x70) == 1) {
    if ((iVar6 == 100) || (iVar4 = rand(), iVar4 % 100 + 1 <= iVar6)) {
      puVar1 = *(undefined1 **)((int)this + 0x6c);
      iVar6 = -1;
      iVar4 = 0;
      do {
        if (99 < iVar4) {
          if (iVar6 == -1) goto LAB_00504810;
          break;
        }
        iVar6 = rand();
        iVar6 = iVar6 % 0xe;
        if (*(int *)(*(int *)(puVar1 + 0x1f8) + 0xc + iVar6 * 4) == 0) {
          iVar6 = -1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar6 == -1);
      *(int *)(puVar1 + 0x1ec) = iVar6;
      FUN_004e5ce0(puVar1);
LAB_00504810:
      local_2c = (undefined4 *)&stack0xffffff94;
      in_stack_ffffff94 = (void *)((uint)in_stack_ffffff94 & 0xffffff00);
      FUN_00402690(&stack0xffffff94,"Please call off your attack. We are complying.",0x2e);
      local_8 = 4;
      FUN_004024e0(&stack0xffffff7c,(undefined4 *)(*(int *)((int)this + 0x6c) + 0x238));
      local_8 = 0xffffffff;
      FUN_005199a0(*(void **)((int)this + 0x3c),2,in_stack_ffffff7c);
      if (*(char *)(param_1 + 0x234) != '\0') {
        FUN_00527550(*(int **)(param_1 + 0x224),4,"Please call off your attack. We are complying.");
      }
    }
    else {
      local_2c = (undefined4 *)&stack0xffffff94;
      in_stack_ffffff94 = (void *)((uint)in_stack_ffffff94 & 0xffffff00);
      FUN_00402690(&stack0xffffff94,"EMERGENCY! Pirate attack in progress.",0x25);
      local_8 = 5;
      FUN_004024e0(&stack0xffffff7c,(undefined4 *)(*(int *)((int)this + 0x6c) + 0x238));
      local_8 = 0xffffffff;
      FUN_005199a0(*(void **)((int)this + 0x3c),3,in_stack_ffffff7c);
      if (*(char *)(param_1 + 0x234) != '\0') {
        if (*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') {
          if (local_11 == '\0') {
            if (local_12 == '\0') {
              pcVar10 = "We\'ll believe it when we see a torpedo.";
            }
            else {
              uVar7 = rand();
              uVar7 = uVar7 & 0x80000001;
              bVar9 = uVar7 == 0;
              if ((int)uVar7 < 0) {
                bVar9 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
              }
              if (bVar9) {
                pcVar10 = "Not a chance. We\'re keeping our cargo.";
              }
              else {
                pcVar10 = "No. We have reported this attack to the authorities.";
              }
            }
          }
          else {
            pcVar10 = "You\'re too far away to threaten us.";
          }
        }
        else {
          pcVar10 = "You realise your IFF is on? We\'re reporting you to the authorities.";
        }
        FUN_00527550(*(int **)(param_1 + 0x224),4,pcVar10);
      }
      local_13 = 0;
    }
  }
  this_01 = *(void **)((int)this + 0x6c);
  uVar7 = FUN_0050c850(this_01,param_1);
  if ((char)uVar7 == '\0') {
    cVar2 = FUN_004cb1c0((int)this_01 + 8);
    FUN_004119f0(DAT_0065b444,CONCAT31(extraout_var_00,cVar2));
    FUN_004cb1c0(local_20);
    FUN_00591e00(extraout_EDX_00,
                 "Any authority vessels hearing this, please head to quadrant %s as soon as possible!"
                );
    local_8 = 9;
    puVar5 = (undefined4 *)(*(int *)((int)this + 0x6c) + 0x238);
  }
  else if (*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') {
    cVar2 = FUN_004cb1c0(local_20);
    FUN_004119f0(DAT_0065b444,CONCAT31(extraout_var,cVar2));
    FUN_004cb1c0(local_20);
    FUN_00591e00(extraout_EDX,
                 "Any authority vessels hearing this, please head to quadrant %s as soon as possible!"
                );
    local_8 = 8;
    puVar5 = (undefined4 *)(*(int *)((int)this + 0x6c) + 0x238);
  }
  else {
    FUN_004024e0(&stack0xffffff94,local_34);
    cVar2 = '\x01';
    local_8 = 6;
    puVar5 = FUN_004122d0();
    local_8 = 0xffffffff;
    FUN_004a8a20(puVar5,cVar2,in_stack_ffffff94);
    FUN_00591e00(&stack0xffffff94,
                 "Authority vessels detecting this - the vessel %s, rego %s just threatened us in an attempt to steal our cargo!"
                );
    local_8 = 7;
    puVar5 = (undefined4 *)(*(int *)((int)this + 0x6c) + 0x238);
  }
  FUN_004024e0(&stack0xffffff7c,puVar5);
  local_8 = 0xffffffff;
  FUN_005199a0(*(void **)((int)this + 0x3c),3,in_stack_ffffff7c);
  ExceptionList = local_10;
  return local_13;
}


void __fastcall FUN_00504a00(void *param_1)

{
  byte *****pppppbVar1;
  byte ****ppppbVar2;
  byte ***pppbVar3;
  char cVar4;
  byte bVar5;
  int3 extraout_var;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  byte ******ppppppbVar9;
  int iVar10;
  byte *pbVar11;
  byte ******ppppppbVar12;
  void *pvVar13;
  int extraout_EDX;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *in_stack_ffffff60;
  uint in_stack_ffffff74;
  undefined4 *in_stack_ffffff78;
  float fVar19;
  byte *****local_60 [4];
  uint local_50;
  uint local_4c;
  void *local_44;
  undefined1 *local_40;
  byte *****local_3c;
  int *local_38;
  int *local_34;
  void *local_30 [5];
  uint local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0af0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = param_1;
  FUN_00503810((int)param_1);
  if ((*(int *)((int)param_1 + 0x124) == 0) ||
     (*(char *)(*(int *)((int)param_1 + 0x124) + 0x160) == '\0')) {
    if (*(char *)((int)param_1 + 0x160) == '\0') goto LAB_00504a81;
    iVar14 = *(int *)(*(int *)((int)param_1 + 0x6c) + 0x40);
    if (*(char *)(iVar14 + 0x34) != '\0') {
      *(undefined1 *)(iVar14 + 0x34) = 0;
    }
    if (*(char *)((int)param_1 + 0x50) != '\0') {
      *(undefined1 *)((int)param_1 + 0x50) = 0;
    }
  }
  else {
    iVar14 = *(int *)(*(int *)((int)param_1 + 0x6c) + 0x40);
    if (*(char *)(*(int *)((int)param_1 + 0xd0) + 0x2c) == '\0') {
      if (*(char *)(iVar14 + 0x34) == '\0') {
        *(undefined1 *)(iVar14 + 0x34) = 1;
      }
LAB_00504a81:
      *(undefined1 *)((int)param_1 + 0x50) = 1;
    }
    else {
      if (*(char *)(iVar14 + 0x34) != '\0') {
        *(undefined1 *)(iVar14 + 0x34) = 0;
      }
      *(undefined1 *)((int)param_1 + 0x50) = 0;
    }
  }
  iVar14 = *(int *)((int)param_1 + 0x124);
  if (iVar14 != 0) {
    iVar10 = *(int *)(iVar14 + 0x268) - *(int *)(iVar14 + 0x264);
    iVar16 = iVar10 >> 0x1f;
    if (iVar10 / 0x24 + iVar16 != iVar16) {
      FUN_005052a0((int)param_1);
      iVar14 = *(int *)((int)param_1 + 0x124);
    }
    if (iVar14 != 0) {
      iVar14 = *(int *)((int)param_1 + 0x6c);
      iVar16 = *(int *)(iVar14 + 0x40);
      if ((((iVar16 != 0) && (piVar17 = *(int **)(iVar16 + 0x20), piVar17 != (int *)0x0)) &&
          (cVar4 = (**(code **)(*piVar17 + 0x10))(), cVar4 != '\0')) &&
         ((iVar14 = *(int *)(*(int *)(iVar14 + 0x40) + 0x20), iVar14 != 0 &&
          (cVar4 = FUN_004ae510(iVar14), CONCAT31(extraout_var,cVar4) != 0 && -1 < extraout_var))))
      {
        if (*(int *)((int)param_1 + 0x40) == 0) {
          local_34 = (int *)0x0;
          local_3c = *(byte ******)(*(int *)((int)param_1 + 0x6c) + 0x214);
          ppppppbVar12 = *(byte *******)(*(int *)((int)param_1 + 0x6c) + 0x218);
          piVar17 = (int *)((uint)((int)ppppppbVar12 + (3 - (int)local_3c)) >> 2);
          if (ppppppbVar12 < local_3c) {
            piVar17 = (int *)0x0;
          }
          local_38 = piVar17;
          if (piVar17 != (int *)0x0) {
            do {
              pppppbVar1 = (byte *****)*local_3c;
              ppppbVar2 = pppppbVar1[0x4c];
              if (((ppppbVar2 != (byte ****)0x0) && ((float)pppppbVar1[0x10] <= 0.5)) &&
                 (((float)pppppbVar1[0x46] == 0.0 &&
                  (((pppbVar3 = ppppbVar2[0x19], piVar17 = local_38,
                    pppbVar3 != *(byte ****)(*(int *)((int)param_1 + 0x6c) + 100) &&
                    (pppppbVar1[0x38] == (byte ****)0x0)) &&
                   (uVar6 = FUN_00403c70((int)ppppbVar2), piVar17 = local_38, (char)uVar6 != '\0')))
                  ))) {
                piVar18 = *(int **)(extraout_EDX * 0x6c + 0x22c + *(int *)(DAT_0065b5cc + 0xcc));
                piVar7 = *(int **)(extraout_EDX * 0x6c + 0x228 + *(int *)(DAT_0065b5cc + 0xcc));
                if (piVar7 != piVar18) {
                  do {
                    if ((byte ***)*piVar7 == pppbVar3) break;
                    piVar7 = piVar7 + 1;
                  } while (piVar7 != piVar18);
                  if (piVar7 != piVar18) {
                    *(byte *****)((int)param_1 + 0x40) = ppppbVar2;
                    *(undefined4 *)((int)param_1 + 0x44) = 0x42f00000;
                    in_stack_ffffff78 = (undefined4 *)((uint)in_stack_ffffff78 & 0xffffff00);
                    FUN_00402690(&stack0xffffff78,"Detected a vessel on an enemy team. Engaging.",
                                 0x2d);
                    in_stack_ffffff74 = *(uint *)((int)param_1 + 0x6c);
                    FUN_0050ae50(in_stack_ffffff74,in_stack_ffffff78);
                    piVar17 = local_38;
                  }
                }
              }
              local_34 = (int *)((int)local_34 + 1);
              local_3c = local_3c + 1;
            } while (local_34 != piVar17);
          }
        }
        iVar14 = *(int *)((int)param_1 + 0x124);
        if ((*(char *)(iVar14 + 0x161) != '\0') && (*(char *)((int)param_1 + 0x120) == '\0')) {
          pbVar11 = (byte *)(iVar14 + 0x194);
          pbVar15 = pbVar11;
          if (0xf < *(uint *)(iVar14 + 0x1a8)) {
            pbVar15 = *(byte **)pbVar11;
          }
          uVar6 = FUN_004031f0(pbVar15,*(uint *)(iVar14 + 0x1a4),(byte *)&PTR_005ce008,0);
          if ((char)uVar6 == '\0') {
            local_40 = &stack0xffffff78;
            FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar11);
            local_8 = 0;
            puVar8 = FUN_00412df0();
            local_8 = 0xffffffff;
            in_stack_ffffff74 = 0x504ca5;
            bVar5 = FUN_004a1150(puVar8,in_stack_ffffff78);
            if (bVar5 == 0) goto LAB_00504e11;
            iVar14 = *(int *)((int)param_1 + 0x124);
          }
          pbVar11 = (byte *)(iVar14 + 0x17c);
          pbVar15 = pbVar11;
          if (0xf < *(uint *)(iVar14 + 400)) {
            pbVar15 = *(byte **)pbVar11;
          }
          uVar6 = FUN_004031f0(pbVar15,*(uint *)(iVar14 + 0x18c),(byte *)&PTR_005ce008,0);
          if ((char)uVar6 == '\0') {
            local_40 = &stack0xffffff78;
            FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar11);
            local_8 = 1;
            puVar8 = FUN_00412df0();
            local_8 = 0xffffffff;
            in_stack_ffffff74 = 0x504d04;
            bVar5 = FUN_004a1150(puVar8,in_stack_ffffff78);
            if (bVar5 != 0) goto LAB_00504e11;
          }
          iVar16 = DAT_0065b5cc;
          iVar14 = *(int *)(DAT_0065b5cc + 0xd0);
          uVar6 = FUN_0050c850(*(void **)((int)param_1 + 0x6c),iVar14);
          if (((char)uVar6 != '\0') && (*(int *)((int)param_1 + 0x40) != iVar14)) {
            *(undefined1 *)((int)param_1 + 0x120) = 1;
            *(undefined4 *)((int)param_1 + 0x40) = *(undefined4 *)(iVar16 + 0xd0);
            *(undefined4 *)((int)param_1 + 0x44) = 0x42f00000;
            in_stack_ffffff78 = (undefined4 *)((uint)in_stack_ffffff78 & 0xffffff00);
            FUN_00402690(&stack0xffffff78,"Detected the player ship. Engaging.",0x23);
            in_stack_ffffff74 = *(uint *)((int)param_1 + 0x6c);
            FUN_0050ae50(in_stack_ffffff74,in_stack_ffffff78);
            iVar14 = *(int *)((int)param_1 + 0x124);
            pbVar15 = (byte *)(iVar14 + 0x164);
            pbVar11 = pbVar15;
            if (0xf < *(uint *)(iVar14 + 0x178)) {
              pbVar11 = *(byte **)pbVar15;
            }
            uVar6 = FUN_004031f0(pbVar11,*(uint *)(iVar14 + 0x174),(byte *)&PTR_005ce008,0);
            if ((char)uVar6 == '\0') {
              local_40 = &stack0xffffff78;
              FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar15);
              local_8 = 2;
              in_stack_ffffff74 = 0;
              in_stack_ffffff60 = (undefined4 *)((uint)in_stack_ffffff60 & 0xffffff00);
              FUN_00402690(&stack0xffffff60,"XX-XXX",6);
              local_8 = 0xffffffff;
              FUN_005199a0(*(void **)((int)param_1 + 0x3c),3,in_stack_ffffff60);
              puVar8 = (undefined4 *)(*(int *)((int)param_1 + 0x124) + 0x164);
              if (0xf < *(uint *)(*(int *)((int)param_1 + 0x124) + 0x178)) {
                puVar8 = (undefined4 *)*puVar8;
              }
              FUN_00527550(*(int **)(*(int *)((int)param_1 + 0x40) + 0x224),4,puVar8);
            }
          }
        }
LAB_00504e11:
        iVar14 = *(int *)((int)param_1 + 0x124);
        if ((*(char *)(iVar14 + 0x161) != '\0') && (*(int *)((int)param_1 + 0x40) != 0)) {
          pbVar15 = (byte *)(iVar14 + 0x1ac);
          pbVar11 = pbVar15;
          if (0xf < *(uint *)(iVar14 + 0x1c0)) {
            pbVar11 = *(byte **)pbVar15;
          }
          uVar6 = FUN_004031f0(pbVar11,*(uint *)(iVar14 + 0x1bc),(byte *)&PTR_005ce008,0);
          if ((char)uVar6 == '\0') {
            local_40 = &stack0xffffff78;
            FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar15);
            local_8 = 3;
            puVar8 = FUN_00412df0();
            local_8 = 0xffffffff;
            in_stack_ffffff74 = 0x504e80;
            bVar5 = FUN_004a1150(puVar8,in_stack_ffffff78);
            if (bVar5 != 0) {
              in_stack_ffffff78 = (undefined4 *)((uint)in_stack_ffffff78 & 0xffffff00);
              FUN_00402690(&stack0xffffff78,"Cancelled attack on player.",0x1b);
              in_stack_ffffff74 = *(uint *)((int)param_1 + 0x6c);
              FUN_0050ae50(in_stack_ffffff74,in_stack_ffffff78);
              iVar14 = *(int *)((int)param_1 + 0x124);
              pbVar15 = (byte *)(iVar14 + 0x17c);
              pbVar11 = pbVar15;
              if (0xf < *(uint *)(iVar14 + 400)) {
                pbVar11 = *(byte **)pbVar15;
              }
              uVar6 = FUN_004031f0(pbVar11,*(uint *)(iVar14 + 0x18c),(byte *)&PTR_005ce008,0);
              if ((char)uVar6 == '\0') {
                local_40 = &stack0xffffff78;
                FUN_004024e0(&stack0xffffff78,(undefined4 *)pbVar15);
                local_8 = 4;
                in_stack_ffffff74 = 0;
                in_stack_ffffff60 = (undefined4 *)((uint)in_stack_ffffff60 & 0xffffff00);
                FUN_00402690(&stack0xffffff60,"XX-XXX",6);
                local_8 = 0xffffffff;
                FUN_005199a0(*(void **)((int)param_1 + 0x3c),3,in_stack_ffffff60);
                puVar8 = (undefined4 *)(*(int *)((int)param_1 + 0x124) + 0x17c);
                if (0xf < *(uint *)(*(int *)((int)param_1 + 0x124) + 400)) {
                  puVar8 = (undefined4 *)*puVar8;
                }
                FUN_00527550(*(int **)(*(int *)((int)param_1 + 0x40) + 0x224),4,puVar8);
              }
              iVar14 = *(int *)((int)param_1 + 0x6c);
              if (*(int *)(*(int *)(iVar14 + 0x40) + 0x20) != 0) {
                iVar16 = 0x3c;
                do {
                  piVar17 = *(int **)(*(int *)(*(int *)(iVar14 + 0x40) + 0x20) + iVar16);
                  if ((piVar17 != (int *)0x0) && ((char)piVar17[0xf1] != '\0')) {
                    (**(code **)(*piVar17 + 0x10))();
                  }
                  iVar16 = iVar16 + 4;
                } while (iVar16 < 0x5c);
              }
              *(undefined4 *)((int)param_1 + 0x40) = 0;
            }
          }
        }
      }
    }
  }
  if ((*(int *)((int)param_1 + 0x70) == 7) || (*(int *)((int)param_1 + 0x70) == 8)) {
    iVar14 = *(int *)(*(int *)((int)param_1 + 0x6c) + 0x40);
    if (*(char *)(iVar14 + 0x34) == '\0') {
      *(undefined1 *)(iVar14 + 0x34) = 1;
    }
    if (*(int *)((int)param_1 + 0x40) == 0) {
      puVar8 = FUN_004122d0();
      piVar17 = (int *)puVar8[5];
      local_38 = (int *)*piVar17;
      while (piVar18 = local_38, local_38 != piVar17) {
        FUN_004024e0(local_30,local_38 + 4);
        local_18 = piVar18[10];
        local_8 = 5;
        FUN_004024e0(local_60,local_30);
        local_3c = local_60[0];
        piVar18 = *(int **)(*(int *)((int)param_1 + 0x6c) + 0x214);
        piVar7 = *(int **)(*(int *)((int)param_1 + 0x6c) + 0x218);
        ppppppbVar12 = (byte ******)local_60[0];
        local_34 = piVar7;
        if (piVar18 != piVar7) {
          do {
            iVar14 = *piVar18;
            if (*(int *)(iVar14 + 0x130) != 0) {
              ppppppbVar9 = local_60;
              if (0xf < local_4c) {
                ppppppbVar9 = ppppppbVar12;
              }
              pbVar11 = (byte *)(iVar14 + 0x90);
              if (0xf < *(uint *)(iVar14 + 0xa4)) {
                pbVar11 = *(byte **)(iVar14 + 0x90);
              }
              uVar6 = FUN_004031f0(pbVar11,*(uint *)(iVar14 + 0xa0),(byte *)ppppppbVar9,local_50);
              piVar7 = local_34;
              ppppppbVar12 = (byte ******)local_3c;
              if ((char)uVar6 != '\0') {
                if (0xf < local_4c) {
                  if ((0xfff < local_4c + 1) &&
                     (ppppppbVar12 = (byte ******)local_3c[-1],
                     (byte *)0x1f < (byte *)((int)local_3c + (-4 - (int)ppppppbVar12))))
                  goto LAB_00505221;
                  FUN_005adb3f(ppppppbVar12);
                }
                local_50 = 0;
                local_4c = 0xf;
                local_60[0] = (byte *****)((uint)local_60[0] & 0xffffff00);
                if ((((iVar14 == 0) || (*(int *)(iVar14 + 0x130) == 0)) ||
                    (*(float *)(iVar14 + 0x118) != 0.0)) || (0.5 < *(float *)(iVar14 + 0x40)))
                goto LAB_005050a6;
                *(int *)((int)local_44 + 0x40) = *(int *)(iVar14 + 0x130);
                puVar8 = (undefined4 *)(in_stack_ffffff74 & 0xffffff00);
                FUN_00402690(&stack0xffffff74,
                             "Detected a vessel marked as a billegerant - %s. Time to get into combat with them."
                             ,0x52);
                param_1 = local_44;
                FUN_0050ae50(*(undefined4 *)((int)local_44 + 0x6c),puVar8);
                local_8 = 0xffffffff;
                if (local_1c < 0x10) goto LAB_00505231;
                pvVar13 = local_30[0];
                if ((0xfff < local_1c + 1) &&
                   (pvVar13 = *(void **)((int)local_30[0] + -4),
                   0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar13)))) goto LAB_00505221;
                FUN_005adb3f(pvVar13);
                goto LAB_00505231;
              }
            }
            piVar18 = piVar18 + 1;
          } while (piVar18 != piVar7);
        }
        if (0xf < local_4c) {
          ppppppbVar9 = ppppppbVar12;
          if ((0xfff < local_4c + 1) &&
             (ppppppbVar9 = (byte ******)ppppppbVar12[-1],
             (byte *)0x1f < (byte *)((int)ppppppbVar12 + (-4 - (int)ppppppbVar9))))
          goto LAB_00505221;
          FUN_005adb3f(ppppppbVar9);
        }
        local_60[0] = (byte *****)((uint)local_60[0] & 0xffffff00);
LAB_005050a6:
        local_4c = 0xf;
        local_50 = 0;
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
          pvVar13 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pvVar13 = *(void **)((int)local_30[0] + -4),
             0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar13)))) {
LAB_00505221:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar13);
        }
        std::_Tree_unchecked_const_iterator<>::operator++
                  ((_Tree_unchecked_const_iterator<> *)&local_38);
        param_1 = local_44;
      }
    }
  }
LAB_00505231:
  iVar14 = *(int *)((int)param_1 + 0x6c);
  iVar16 = *(int *)(iVar14 + 0x37c);
  if (iVar16 == 0) {
    iVar16 = *(int *)(iVar14 + 900);
    if (iVar16 == 0) {
      iVar16 = *(int *)(iVar14 + 0x380);
      if (iVar16 == 0) goto LAB_0050526d;
      fVar19 = 1.4013e-45;
    }
    else {
      fVar19 = 2.8026e-45;
    }
  }
  else {
    if (*(int *)(iVar16 + 0xd4) != 1) goto LAB_0050526d;
    fVar19 = 0.0;
  }
  FUN_00505ea0(param_1,iVar16,fVar19);
LAB_0050526d:
  FUN_00519750(*(int **)((int)param_1 + 0x3c));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_005052a0(int param_1)

{
  float fVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined4 *puVar6;
  Vec2 *pVVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  Vec2 *pVVar11;
  float *pfVar12;
  uint *this;
  undefined1 *puVar13;
  float in_XMM1_Da;
  float fVar14;
  uint in_stack_ffffff5c;
  float fVar15;
  byte *in_stack_ffffff68;
  void *in_stack_ffffff6c;
  Vec2 *local_6c;
  undefined4 local_68;
  float *local_64;
  float local_60;
  undefined1 *local_5c;
  Vec2 *local_58;
  int local_54;
  uint *local_50;
  uint *local_4c;
  Vec2 *local_48;
  uint *local_44;
  float local_40;
  undefined1 *local_3c;
  float local_38;
  float local_34;
  Vec2 *local_30 [4];
  uint local_20;
  uint local_1c;
  Vec2 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0c24;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = (uint *)0x0;
  local_44 = (uint *)0x0;
  local_54 = param_1;
  if (((*(int *)(param_1 + 0x124) == 0) || (*(char *)(*(int *)(param_1 + 0x6c) + 0x2ec) != '\0')) ||
     ((*(char *)(param_1 + 0x108) == '\0' &&
      ((*(char *)(param_1 + 0x60) != '\0' &&
       (iVar10 = *(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c), iVar8 = iVar10 >> 0x1f,
       iVar10 / 0x24 + iVar8 == iVar8)))))) goto LAB_00505e17;
  fVar14 = *(float *)(param_1 + 0x104);
  if (0.0 < fVar14) {
    fVar14 = fVar14 - in_XMM1_Da;
    *(float *)(param_1 + 0x104) = fVar14;
    if (fVar14 < 0.0) {
      FUN_00591070(&DAT_0060dfc4,"Wait timer hit.");
      *(undefined4 *)(param_1 + 0x104) = 0;
      fVar14 = 0.0;
    }
  }
  pVVar11 = (Vec2 *)(param_1 + 0xd4);
  local_58 = pVVar11;
  if (((*(float *)(param_1 + 0xd4) == -9999.0) && (*(float *)(param_1 + 0xd8) == -9999.0)) &&
     (fVar14 <= 0.0)) {
    pfVar12 = (float *)(param_1 + 0x10c);
    local_64 = pfVar12;
    if ((*(int *)(param_1 + 0x110) - (int)*pfVar12) / 0x24 == 0) {
      if ((*(char *)(param_1 + 0x108) != '\0') || (*(char *)(param_1 + 0x60) == '\0')) {
        pVVar11 = *(Vec2 **)(*(int *)(param_1 + 0x124) + 0x264);
        local_58 = *(Vec2 **)(*(int *)(param_1 + 0x124) + 0x268);
        local_48 = pVVar11;
        if (pVVar11 != local_58) {
          do {
            local_38 = *(float *)pVVar11;
            local_34 = *(float *)(pVVar11 + 4);
            local_8 = 0;
            local_48 = pVVar11;
            FUN_004024e0(local_30,(undefined4 *)(pVVar11 + 8));
            local_18 = pVVar11[0x20];
            local_40 = (float)*(double *)(*(int *)(param_1 + 0x6c) + 0x28);
            puVar13 = (undefined1 *)(float)*(double *)(*(int *)(param_1 + 0x6c) + 0x30);
            local_8._0_1_ = 2;
            local_8._1_3_ = 0;
            local_3c = puVar13;
            FUN_00591010((Vec2 *)&local_38,(Vec2 *)&local_40);
            local_8 = CONCAT31(local_8._1_3_,1);
            if (10.0 < (float)puVar13) {
              pfVar12 = *(float **)(param_1 + 0x110);
              if (*(float **)(param_1 + 0x114) == pfVar12) {
                FUN_00506660((void *)(param_1 + 0x10c),pfVar12,(uint *)&local_38);
              }
              else {
                *pfVar12 = local_38;
                pfVar12[1] = local_34;
                local_8 = CONCAT31(local_8._1_3_,3);
                local_64 = pfVar12;
                FUN_004024e0(pfVar12 + 2,local_30);
                *(Vec2 *)(pfVar12 + 8) = local_18;
                *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 0x24;
              }
              FUN_0043daf0((int)&local_38);
            }
            else {
              FUN_0043daf0((int)&local_38);
              local_48 = pVVar11;
            }
            pVVar11 = local_48 + 0x24;
            local_48 = pVVar11;
          } while (pVVar11 != local_58);
        }
        *(undefined1 *)(param_1 + 0x60) = 1;
      }
    }
    else {
      local_38 = -9999.0;
      local_34 = -9999.0;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (Vec2 *)((uint)local_30[0] & 0xffffff00);
      local_8 = 4;
      iVar8 = 100;
      local_40 = -9999.0;
      local_3c = (undefined1 *)0xc61c3c00;
      *(undefined4 *)(param_1 + 0xd4) = 0xc61c3c00;
      *(undefined4 *)(param_1 + 0xd8) = 0xc61c3c00;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 1) {
LAB_00505857:
          pVVar11 = (Vec2 *)(param_1 + 0xd4);
          goto LAB_0050585d;
        }
        pfVar12 = (float *)*pfVar12;
        local_48 = (Vec2 *)((*(int *)(param_1 + 0x110) - (int)pfVar12) / 0x24);
        if (local_48 == (Vec2 *)0x0) {
          pfVar12 = (float *)(param_1 + 0x10c);
          goto LAB_00505857;
        }
        if ((*(char *)(param_1 + 0x109) != '\0') && (local_48 != (Vec2 *)0x1)) {
          iVar10 = rand();
          pfVar12 = (float *)(*(int *)(param_1 + 0x10c) + (iVar10 % (int)(local_48 + -1)) * 0x24);
        }
        local_38 = *pfVar12;
        local_34 = pfVar12[1];
        pVVar11 = (Vec2 *)(pfVar12 + 2);
        if ((Vec2 *)local_30 != pVVar11) {
          if (0xf < (uint)pfVar12[7]) {
            pVVar11 = *(Vec2 **)pVVar11;
          }
          FUN_00402690(local_30,pVVar11,(uint)pfVar12[6]);
        }
        local_4c = *(uint **)(param_1 + 0x110);
        local_18 = *(Vec2 *)(pfVar12 + 8);
        this = *(uint **)(param_1 + 0x10c);
        if (this != local_4c) {
          do {
            local_5c = &stack0xffffff60;
            local_8._0_1_ = 5;
            fVar14 = local_38;
            fVar15 = local_34;
            FUN_004024e0(&stack0xffffff68,local_30);
            local_8 = CONCAT31(local_8._1_3_,4);
            in_stack_ffffff5c = 0x505620;
            cVar3 = FUN_00501980(this,fVar14,fVar15,in_stack_ffffff68);
            if (cVar3 != '\0') break;
            this = this + 9;
          } while (this != local_4c);
          if (this != local_4c) {
            local_50 = this + 9;
            if (local_50 != local_4c) {
              local_6c = (Vec2 *)(this + 2);
              local_48 = (Vec2 *)(this + 0xb);
              do {
                local_3c = &stack0xffffff60;
                local_8._0_1_ = 6;
                fVar14 = local_38;
                fVar15 = local_34;
                FUN_004024e0(&stack0xffffff68,local_30);
                puVar2 = local_50;
                local_8 = CONCAT31(local_8._1_3_,4);
                in_stack_ffffff5c = 0x50568f;
                cVar3 = FUN_00501980(local_50,fVar14,fVar15,in_stack_ffffff68);
                pVVar11 = local_48;
                if (cVar3 == '\0') {
                  *this = *puVar2;
                  this[1] = puVar2[1];
                  if (local_6c != local_48) {
                    FUN_00401b20((int *)local_6c);
                    fVar14 = *(float *)(pVVar11 + 4);
                    fVar15 = *(float *)(pVVar11 + 8);
                    fVar1 = *(float *)(pVVar11 + 0xc);
                    *(float *)local_6c = *(float *)pVVar11;
                    *(float *)(local_6c + 4) = fVar14;
                    *(float *)(local_6c + 8) = fVar15;
                    *(float *)(local_6c + 0xc) = fVar1;
                    fVar14 = *(float *)(pVVar11 + 0x14);
                    *(float *)(local_6c + 0x10) = *(float *)(pVVar11 + 0x10);
                    *(float *)(local_6c + 0x14) = fVar14;
                    *(float *)(pVVar11 + 0x10) = 0.0;
                    *(float *)(pVVar11 + 0x14) = 2.10195e-44;
                    *pVVar11 = (Vec2)0x0;
                  }
                  this = this + 9;
                  local_6c[0x18] = pVVar11[0x18];
                  local_6c = local_6c + 0x24;
                }
                local_48 = pVVar11 + 0x24;
                local_50 = local_50 + 9;
              } while (local_50 != local_4c);
            }
            if (this != local_4c) {
              local_50 = *(uint **)(local_54 + 0x110);
              if (local_4c != local_50) {
                local_48 = (Vec2 *)(this + 2);
                pVVar11 = (Vec2 *)(local_4c + 2);
                do {
                  *this = *local_4c;
                  this[1] = local_4c[1];
                  if (local_48 != pVVar11) {
                    FUN_00401b20((int *)local_48);
                    fVar14 = *(float *)(pVVar11 + 4);
                    fVar15 = *(float *)(pVVar11 + 8);
                    fVar1 = *(float *)(pVVar11 + 0xc);
                    *(float *)local_48 = *(float *)pVVar11;
                    *(float *)(local_48 + 4) = fVar14;
                    *(float *)(local_48 + 8) = fVar15;
                    *(float *)(local_48 + 0xc) = fVar1;
                    fVar14 = *(float *)(pVVar11 + 0x14);
                    *(float *)(local_48 + 0x10) = *(float *)(pVVar11 + 0x10);
                    *(float *)(local_48 + 0x14) = fVar14;
                    *(float *)(pVVar11 + 0x10) = 0.0;
                    *(float *)(pVVar11 + 0x14) = 2.10195e-44;
                    *pVVar11 = (Vec2)0x0;
                  }
                  local_4c = local_4c + 9;
                  local_48[0x18] = pVVar11[0x18];
                  this = this + 9;
                  local_48 = local_48 + 0x24;
                  pVVar11 = pVVar11 + 0x24;
                } while (local_4c != local_50);
              }
              iVar10 = local_54;
              FUN_00480020(this,*(uint **)(local_54 + 0x110));
              *(uint **)(iVar10 + 0x110) = this;
            }
          }
        }
        pVVar11 = local_30[0];
        pVVar7 = (Vec2 *)local_30;
        if (0xf < local_1c) {
          pVVar7 = local_30[0];
        }
        uVar9 = FUN_004031f0((byte *)pVVar7,local_20,(byte *)&PTR_005ce008,0);
        if ((char)uVar9 != '\0') break;
        local_48 = (Vec2 *)&stack0xffffff6c;
        if (local_18 == (Vec2)0x0) {
          FUN_004024e0(&stack0xffffff6c,local_30);
          local_8._0_1_ = 8;
          puVar6 = FUN_00412df0();
          local_8 = CONCAT31(local_8._1_3_,4);
          in_stack_ffffff68 = (byte *)0x505801;
          bVar4 = FUN_004a1150(puVar6,in_stack_ffffff6c);
        }
        else {
          local_48 = (Vec2 *)&stack0xffffff6c;
          FUN_004024e0(&stack0xffffff6c,local_30);
          local_8._0_1_ = 7;
          puVar6 = FUN_00412df0();
          local_8 = CONCAT31(local_8._1_3_,4);
          in_stack_ffffff68 = (byte *)0x5057e1;
          bVar4 = FUN_004a1150(puVar6,in_stack_ffffff6c);
          bVar4 = bVar4 == 0;
        }
        pfVar12 = (float *)(local_54 + 0x10c);
        pVVar11 = local_30[0];
        param_1 = local_54;
      } while (bVar4 == 0);
      *(float *)local_58 = local_38;
      *(float *)(local_58 + 4) = local_34;
      if (local_58 + 8 != (Vec2 *)local_30) {
        pVVar7 = (Vec2 *)local_30;
        if (0xf < local_1c) {
          pVVar7 = pVVar11;
        }
        FUN_00402690(local_58 + 8,pVVar7,local_20);
      }
      local_58[0x20] = local_18;
      pVVar11 = local_58;
      pfVar12 = local_64;
      param_1 = local_54;
LAB_0050585d:
      if ((*(float *)pVVar11 == -9999.0) && (*(float *)(pVVar11 + 4) == -9999.0)) {
        FUN_00480020((uint *)*pfVar12,(uint *)pfVar12[1]);
        pfVar12[1] = *pfVar12;
        FUN_0043daf0((int)&local_38);
        goto LAB_00505e17;
      }
      in_stack_ffffff6c = (void *)0x0;
      puVar6 = (undefined4 *)(in_stack_ffffff5c & 0xffffff00);
      FUN_00402690(&stack0xffffff5c,"Beginning transit to new destination - %f, %f",0x2d);
      FUN_0050ae50(*(undefined4 *)(param_1 + 0x6c),puVar6);
      if (*(int *)(*(int *)(param_1 + 0x6c) + 0xd4) == 1) {
        FUN_00517400(*(int *)(param_1 + 0x6c));
      }
      iVar8 = FUN_0051fe10(*(int *)(*(int *)(param_1 + 0x6c) + 0x24));
      if (iVar8 == 0) {
LAB_0050599c:
        bVar5 = false;
      }
      else {
        local_40 = (float)*(double *)(*(int *)(param_1 + 0x6c) + 0x28);
        local_3c = (undefined1 *)(float)*(double *)(*(int *)(param_1 + 0x6c) + 0x30);
        local_60 = (float)*(double *)(iVar8 + 0x28);
        puVar13 = (undefined1 *)(float)*(double *)(iVar8 + 0x30);
        local_8 = 10;
        local_44 = (uint *)0x3;
        local_4c = (uint *)0x3;
        local_5c = puVar13;
        FUN_00591010((Vec2 *)&local_60,(Vec2 *)&local_40);
        if (0.05 < (float)puVar13) goto LAB_0050599c;
        bVar5 = true;
      }
      if (((uint)local_44 & 2) != 0) {
        local_44 = (uint *)((uint)local_44 & 0xfffffffd);
      }
      local_8 = 4;
      if (((uint)local_44 & 1) != 0) {
        local_44 = (uint *)((uint)local_44 & 0xfffffffe);
      }
      if (bVar5) {
        std::basic_string<>::operator=
                  ((basic_string<> *)(param_1 + 0x7c),(basic_string<> *)(iVar8 + 8));
      }
      else {
        FUN_00402690((basic_string<> *)(param_1 + 0x7c),&PTR_005ce008,0);
      }
      iVar8 = FUN_0051fe10(*(int *)(*(int *)(param_1 + 0x6c) + 0x24));
      if (iVar8 == 0) {
LAB_00505a52:
        bVar5 = false;
      }
      else {
        local_40 = (float)*(double *)(iVar8 + 0x28);
        puVar13 = (undefined1 *)(float)*(double *)(iVar8 + 0x30);
        local_8 = CONCAT31(local_8._1_3_,0xb);
        local_4c = (uint *)((uint)local_44 | 4);
        local_44 = local_4c;
        local_3c = puVar13;
        FUN_00591010((Vec2 *)&local_40,(Vec2 *)&local_38);
        if (0.05 < (float)puVar13) goto LAB_00505a52;
        bVar5 = true;
      }
      local_8 = 4;
      if (((uint)local_44 & 4) != 0) {
        local_44 = (uint *)((uint)local_44 & 0xfffffffb);
      }
      if (bVar5) {
        std::basic_string<>::operator=
                  ((basic_string<> *)(param_1 + 0xac),(basic_string<> *)(iVar8 + 8));
      }
      else {
        FUN_00402690((basic_string<> *)(param_1 + 0xac),&PTR_005ce008,0);
      }
      FUN_0043daf0((int)&local_38);
    }
    pVVar11 = (Vec2 *)(param_1 + 0xd4);
  }
  local_40 = 0.0;
  local_3c = (undefined1 *)0x0;
  *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x168) = 0;
  local_8 = 0xc;
  local_64 = (float *)cocos2d::Vec2::getDistance
                                ((Vec2 *)(*(int *)(param_1 + 0x6c) + 0x118),(Vec2 *)&local_40);
  local_8 = 0xffffffff;
  if ((float)local_64 == 0.0) {
    iVar8 = FUN_0051fe10(*(int *)(*(int *)(param_1 + 0x6c) + 0x24));
    if (iVar8 == 0) {
LAB_00505b88:
      bVar5 = false;
    }
    else {
      local_40 = (float)*(double *)(*(int *)(param_1 + 0x6c) + 0x28);
      local_3c = (undefined1 *)(float)*(double *)(*(int *)(param_1 + 0x6c) + 0x30);
      local_60 = (float)*(double *)(iVar8 + 0x28);
      puVar13 = (undefined1 *)(float)*(double *)(iVar8 + 0x30);
      local_4c = (uint *)((uint)local_44 | 0x18);
      local_8 = 0xe;
      local_5c = puVar13;
      local_44 = local_4c;
      FUN_00591010((Vec2 *)&local_60,(Vec2 *)&local_40);
      if (1.0 < (float)puVar13) goto LAB_00505b88;
      bVar5 = true;
    }
    if (((uint)local_44 & 0x10) != 0) {
      local_44 = (uint *)((uint)local_44 & 0xffffffef);
    }
    if (((uint)local_44 & 8) != 0) {
      local_44 = (uint *)((uint)local_44 & 0xfffffff7);
    }
    if (bVar5) {
      *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x168) = 1;
    }
  }
  local_8 = 0xffffffff;
  if ((*(float *)pVVar11 != -9999.0) || (*(float *)(pVVar11 + 4) != -9999.0)) {
    fVar14 = *(float *)(param_1 + 0x104);
    if (fVar14 <= 0.0) {
      FUN_00403cb0(*(int *)(param_1 + 0x6c));
      if (fVar14 == 0.0) {
        local_40 = (float)*(double *)(*(int *)(param_1 + 0x6c) + 0x28);
        puVar13 = (undefined1 *)(float)*(double *)(*(int *)(param_1 + 0x6c) + 0x30);
        local_8 = 0xf;
        local_3c = puVar13;
        FUN_00591010((Vec2 *)&local_40,pVVar11);
        local_8 = 0xffffffff;
        if (10.0 < (float)puVar13) {
          local_60 = *(float *)pVVar11;
          local_5c = *(undefined1 **)(pVVar11 + 4);
          iVar8 = *(int *)(*(int *)(param_1 + 0x6c) + 0x1c4);
          iVar10 = *(int *)(*(int *)(param_1 + 0x6c) + 0x1c8) - iVar8 >> 5;
          if (iVar10 != 0) {
            iVar10 = iVar10 * 0x20;
            uVar9 = (uint)local_44 | 0x40;
            local_64 = *(float **)(iVar10 + -0x14 + iVar8);
            local_68 = *(undefined4 *)(iVar10 + -0x18 + iVar8);
            if ((char)uVar9 < '\0') {
              uVar9 = (uint)local_44 & 0xffffff7f;
            }
            local_8 = 0x11;
            local_4c = (uint *)(uVar9 & 0xffffffbf | 0x20);
            bVar5 = cocos2d::Vec2::equals((Vec2 *)&local_68,(Vec2 *)&local_60);
            if (bVar5) goto LAB_00505e17;
          }
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)((uint)in_stack_ffffff6c & 0xffffff00);
          FUN_00402690(&stack0xffffff6c,"Mapping a course to our destination.",0x24);
          FUN_0050ae50(*(undefined4 *)(param_1 + 0x6c),puVar6);
          FUN_00517bc0(*(void **)(param_1 + 0x6c),*(undefined4 *)pVVar11,
                       *(undefined4 *)(pVVar11 + 4));
        }
        else {
          puVar6 = (undefined4 *)((uint)in_stack_ffffff6c & 0xffffff00);
          FUN_00402690(&stack0xffffff6c,"Reached destination.",0x14);
          uVar9 = 0x505cda;
          FUN_0050ae50(*(undefined4 *)(param_1 + 0x6c),puVar6);
          if ((*(int *)(param_1 + 0xf8) != 0) || (*(int *)(param_1 + 0x100) != 0)) {
            iVar8 = FUN_00591370((int *)(param_1 + 0xf8));
            *(float *)(param_1 + 0x104) = (float)iVar8;
            puVar6 = (undefined4 *)(uVar9 & 0xffffff00);
            FUN_00402690(&stack0xffffff64,"Waiting %f seconds before heading to next destination..."
                         ,0x38);
            FUN_0050ae50(*(undefined4 *)(param_1 + 0x6c),puVar6);
          }
          local_40 = -9999.0;
          local_3c = (undefined1 *)0xc61c3c00;
          *(undefined4 *)pVVar11 = 0xc61c3c00;
          *(undefined4 *)(pVVar11 + 4) = 0xc61c3c00;
        }
      }
    }
    else {
      FUN_00403cb0(*(int *)(param_1 + 0x6c));
      if ((0.0 < fVar14) && (uVar9 = FUN_00518820(*(int *)(param_1 + 0x6c)), (char)uVar9 == '\0')) {
        puVar6 = (undefined4 *)((uint)in_stack_ffffff6c & 0xffffff00);
        FUN_00402690(&stack0xffffff6c,"Bringing myself to a stop..",0x1b);
        FUN_0050ae50(*(undefined4 *)(param_1 + 0x6c),puVar6);
        FUN_00518af0(*(int *)(param_1 + 0x6c));
      }
    }
  }
LAB_00505e17:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int __fastcall FUN_00505e40(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x6c) + 0x40) + 0x20);
  if (piVar4 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar4 + 0x10))(0);
    if (cVar2 != '\0') {
      iVar3 = 0;
      piVar4 = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x40) + 0x20) + 0x3c);
      do {
        iVar1 = *piVar4;
        if (((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) == '\0')) &&
           (*(int *)(*(int *)(iVar1 + 0x388) + 0x1b4) == 3)) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < 8);
    }
  }
  return -1;
}


void __thiscall FUN_00505ea0(void *this,int param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  Vec2 *pVVar4;
  int iVar5;
  void *this_00;
  double dVar6;
  double dVar7;
  float fVar8;
  uint in_stack_ffffff90;
  undefined4 *puVar9;
  uint in_stack_ffffffb0;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c0cf7;
  local_10 = ExceptionList;
  local_14 = 0.0;
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0.0) {
    if (param_2 == 2.8026e-45) {
      local_28 = (double)CONCAT44((float)*(double *)(param_1 + 0x30),
                                  (float)*(double *)(param_1 + 0x28));
      local_8 = 5;
      ExceptionList = &local_10;
      fVar8 = cocos2d::Vec2::getDistanceSq
                        ((Vec2 *)(*(int *)((int)this + 0x6c) + 200),(Vec2 *)&local_28);
      fVar3 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
      local_8 = 0xffffffff;
      this_00 = *(void **)((int)this + 0x6c);
      if (((*(float *)((int)this_00 + 200) == -9999.0) &&
          (*(float *)((int)this_00 + 0xcc) == -9999.0)) ||
         (20.0 < (1.5 - fVar8 * 0.5 * fVar3 * fVar3) * fVar3 * fVar8)) {
        FUN_00593000((Vec2 *)&local_18);
        local_8 = 6;
        iVar5 = *(int *)((int)this + 0x6c);
        if ((*(float *)(iVar5 + 200) != -9999.0) || (*(float *)(iVar5 + 0xcc) != -9999.0)) {
          puVar9 = (undefined4 *)(in_stack_ffffff90 & 0xffffff00);
          FUN_00402690(&stack0xffffff90,"Correcting approach to my target (from %f,%f to %f,%f.",
                       0x36);
          FUN_0050ae50(*(undefined4 *)((int)this + 0x6c),puVar9);
          iVar5 = *(int *)((int)this + 0x6c);
        }
        *(float *)(iVar5 + 200) = local_18;
        *(float *)(iVar5 + 0xcc) = local_14;
        this_00 = *(void **)((int)this + 0x6c);
      }
      local_8 = 0xffffffff;
      if (*(int *)((int)this_00 + 0x1c8) - *(int *)((int)this_00 + 0x1c4) >> 5 != 1) {
        FUN_005179b0((int)this_00);
        *(undefined4 *)((int)this_00 + 0x1c8) = *(undefined4 *)((int)this_00 + 0x1c4);
        FUN_005175a0(*(void **)((int)this + 0x6c),*(undefined4 *)(*(int *)((int)this + 0x6c) + 200),
                     *(undefined4 *)(*(int *)((int)this + 0x6c) + 0xcc));
        iVar5 = *(int *)((int)this + 0x6c);
        *(undefined4 *)(iVar5 + 0xd4) = 1;
        *(undefined4 *)(iVar5 + 0x2c0) = 0;
        *(undefined4 *)(iVar5 + 0x2c4) = 0;
        FUN_00591070("DETAIL","%s: Approach waypoint added.");
        ExceptionList = local_10;
        return;
      }
      pVVar4 = (Vec2 *)FUN_00517770(this_00,(undefined4 *)&local_28);
      local_8 = 7;
      goto LAB_00506610;
    }
    if (param_2 != 1.4013e-45) {
      return;
    }
    local_20 = -9999.0;
    local_1c = -9999.0;
    iVar5 = *(int *)((int)this + 0x6c);
    if ((*(float *)(iVar5 + 200) == -9999.0) &&
       (ExceptionList = &local_10, *(float *)(iVar5 + 0xcc) == -9999.0)) {
LAB_005064f5:
      bVar2 = true;
    }
    else {
      fVar3 = (float)*(double *)(param_1 + 0x30);
      local_28 = (double)CONCAT44(fVar3,(float)*(double *)(param_1 + 0x28));
      local_8 = 9;
      local_14 = 3.36312e-44;
      ExceptionList = &local_10;
      FUN_00591010((Vec2 *)(iVar5 + 200),(Vec2 *)&local_28);
      if (20.0 < fVar3) goto LAB_005064f5;
      bVar2 = false;
    }
    local_8 = 0xffffffff;
    if (bVar2) {
      pVVar4 = FUN_00593000((Vec2 *)&local_28);
      iVar5 = *(int *)((int)this + 0x6c);
      *(undefined4 *)(iVar5 + 200) = *(undefined4 *)pVVar4;
      *(undefined4 *)(iVar5 + 0xcc) = *(undefined4 *)(pVVar4 + 4);
    }
    this_00 = *(void **)((int)this + 0x6c);
    if (*(int *)((int)this_00 + 0x1c8) - *(int *)((int)this_00 + 0x1c4) >> 5 != 1) {
      FUN_005179b0((int)this_00);
      *(undefined4 *)((int)this_00 + 0x1c8) = *(undefined4 *)((int)this_00 + 0x1c4);
      FUN_005175a0(*(void **)((int)this + 0x6c),*(undefined4 *)(*(int *)((int)this + 0x6c) + 200),
                   *(undefined4 *)(*(int *)((int)this + 0x6c) + 0xcc));
      iVar5 = *(int *)((int)this + 0x6c);
      *(undefined4 *)(iVar5 + 0xd4) = 1;
      *(undefined4 *)(iVar5 + 0x2c0) = 0;
      *(undefined4 *)(iVar5 + 0x2c4) = 0;
      FUN_00591070("DETAIL","%s: Shadow waypoint added.");
      ExceptionList = local_10;
      return;
    }
    pVVar4 = (Vec2 *)FUN_00517770(this_00,&local_20);
    local_8 = 10;
    goto LAB_00506610;
  }
  param_2 = *(float *)(param_1 + 0x120) + 135.0;
  if (360.0 <= param_2) {
    param_2 = param_2 - 360.0;
  }
  local_28 = -5.592396466345195e+29;
  iVar5 = *(int *)((int)this + 0x6c);
  if ((*(float *)(iVar5 + 200) == -9999.0) &&
     (ExceptionList = &local_10, *(float *)(iVar5 + 0xcc) == -9999.0)) {
LAB_00505fdd:
    bVar2 = true;
  }
  else {
    local_20 = (float)*(double *)(param_1 + 0x28);
    local_1c = (float)*(double *)(param_1 + 0x30);
    local_8 = 1;
    local_14 = 4.2039e-45;
    ExceptionList = &local_10;
    fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)(iVar5 + 200),(Vec2 *)&local_20);
    fVar3 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
    if (20.0 < (1.5 - fVar8 * 0.5 * fVar3 * fVar3) * fVar3 * fVar8) goto LAB_00505fdd;
    bVar2 = false;
  }
  local_8 = 0xffffffff;
  if (bVar2) {
    if ((*(float *)(*(int *)((int)this + 0x6c) + 200) != -9999.0) ||
       (*(float *)(*(int *)((int)this + 0x6c) + 0xcc) != -9999.0)) {
      puVar9 = (undefined4 *)(in_stack_ffffffb0 & 0xffffff00);
      FUN_00402690(&stack0xffffffb0,"Correcting approach to my formation target.",0x2b);
      FUN_0050ae50(*(undefined4 *)((int)this + 0x6c),puVar9);
    }
    local_18 = (float)*(double *)(param_1 + 0x28);
    local_14 = (float)*(double *)(param_1 + 0x30);
    local_8 = 2;
    dVar6 = (double)param_2 * 0.017453292519943295;
    local_28 = dVar6;
    libm_sse2_sin_precise();
    dVar7 = local_28;
    libm_sse2_cos_precise();
    local_1c = (float)(dVar7 * 4.0);
    local_8 = CONCAT31(local_8._1_3_,3);
    local_20 = (float)(dVar6 * 4.0);
    cocos2d::Vec2::operator+((Vec2 *)&local_18,(Vec2 *)&local_28);
    iVar5 = *(int *)((int)this + 0x6c);
    *(undefined4 *)(iVar5 + 200) = (undefined4)local_28;
    *(undefined4 *)(iVar5 + 0xcc) = local_28._4_4_;
  }
  local_8 = 0xffffffff;
  this_00 = *(void **)((int)this + 0x6c);
  if (*(int *)((int)this_00 + 0x1c8) - *(int *)((int)this_00 + 0x1c4) >> 5 != 1) {
    FUN_005179b0((int)this_00);
    *(undefined4 *)((int)this_00 + 0x1c8) = *(undefined4 *)((int)this_00 + 0x1c4);
    FUN_005175a0(*(void **)((int)this + 0x6c),*(undefined4 *)(*(int *)((int)this + 0x6c) + 200),
                 *(undefined4 *)(*(int *)((int)this + 0x6c) + 0xcc));
    iVar5 = *(int *)((int)this + 0x6c);
    *(undefined4 *)(iVar5 + 0xd4) = 1;
    *(undefined4 *)(iVar5 + 0x2c0) = 0;
    *(undefined4 *)(iVar5 + 0x2c4) = 0;
    FUN_00591070("DETAIL","%s: Formation waypoint added.");
    ExceptionList = local_10;
    return;
  }
  pVVar4 = (Vec2 *)FUN_00517770(this_00,(undefined4 *)&local_28);
  local_8 = 4;
LAB_00506610:
  bVar2 = cocos2d::Vec2::equals(pVVar4,(Vec2 *)((int)this_00 + 200));
  local_8 = 0xffffffff;
  if (!bVar2) {
    iVar5 = *(int *)((int)this + 0x6c);
    iVar1 = *(int *)(iVar5 + 0x1c4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + 200);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar5 + 0xcc);
    FUN_00516430(*(int *)((int)this + 0x6c));
  }
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_00506660(void *this,undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0d29;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)this;
  iVar3 = ((int)param_1 - iVar2) / 0x24;
  iVar4 = (*(int *)((int)this + 4) - iVar2) / 0x24;
  if (iVar4 == 0x71c71c7) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar6 = iVar4 + 1;
  uVar5 = (*(int *)((int)this + 8) - iVar2) / 0x24;
  uVar8 = uVar6;
  if ((uVar5 <= 0x71c71c7 - (uVar5 >> 1)) && (uVar8 = (uVar5 >> 1) + uVar5, uVar8 < uVar6)) {
    uVar8 = uVar6;
  }
  uVar6 = uVar8 * 0x24;
  if (uVar8 < 0x71c71c8) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        puVar7 = (uint *)0x0;
      }
      else {
        puVar7 = (uint *)FUN_005adb0f(uVar6);
      }
      goto LAB_00506763;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar5 = uVar6 + 0x23;
  if (uVar5 <= uVar6) {
    uVar5 = 0xffffffff;
  }
  uVar6 = FUN_005adb0f(uVar5);
  if (uVar6 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  puVar7 = (uint *)(uVar6 + 0x23 & 0xffffffe0);
  puVar7[-1] = uVar6;
LAB_00506763:
  puVar1 = puVar7 + iVar3 * 9;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_004024e0(puVar1 + 2,param_2 + 2);
  local_8 = (uint)local_8._1_3_ << 8;
  *(char *)(puVar7 + iVar3 * 9 + 8) = (char)param_2[8];
  if (param_1 == *(undefined4 **)((int)this + 4)) {
    FUN_0047fb00(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar7);
  }
  else {
    FUN_0047fba0(*(undefined4 **)this,param_1,puVar7);
    FUN_0047fba0(param_1,*(undefined4 **)((int)this + 4),puVar1 + 9);
  }
  FUN_0047fa50(this,(int)puVar7,iVar4 + 1,uVar8);
  ExceptionList = local_10;
  return *(int *)this + iVar3 * 0x24;
}


uint __fastcall FUN_00506830(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  do {
    if (*(char *)(uVar1 + param_1) == '\0') {
      return uVar1 & 0xffffff00;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 3);
  return CONCAT31((int3)(uVar1 >> 8),1);
}


uint __fastcall FUN_00506850(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  do {
    if (*(char *)(uVar1 + param_1) != '\0') {
      return uVar1 & 0xffffff00;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 3);
  return CONCAT31((int3)(uVar1 >> 8),1);
}


undefined1 __thiscall FUN_00506870(void *this,int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if (param_1 - 1U < 3) {
    return *(undefined1 *)(param_1 + (int)this);
  }
  return 0;
}


undefined1 * __thiscall FUN_005068a0(void *this,undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 1;
  do {
    if (*(char *)(iVar3 + (int)this) != '\0') {
      iVar3 = 1;
      do {
        if (*(char *)(iVar3 + (int)this) == '\0') {
          iVar3 = 1;
          while ((iVar3 != 0 &&
                 (((char *)0x2 < (char *)(iVar3 + (int)this) + ~(uint)this ||
                  (*(char *)(iVar3 + (int)this) == '\0'))))) {
            iVar3 = iVar3 + 1;
            if (2 < iVar3) {
              *(undefined4 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x14) = 0xf;
              *param_1 = 0;
              FUN_00402690(param_1,&DAT_006167bc,3);
              return param_1;
            }
          }
          pcVar2 = (&PTR_s_General_005df5f4)[iVar3];
          *(undefined4 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x14) = 0xf;
          *param_1 = 0;
          pcVar4 = pcVar2;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_00402690(param_1,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
          return param_1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *param_1 = 0;
      FUN_00402690(param_1,"upgraded",8);
      return param_1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,"standard",8);
  return param_1;
}


void __thiscall FUN_005069b0(void *this,undefined1 *param_1,uint param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005c0d71;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  if (param_3 == '\0') {
    iVar8 = *(int *)((int)this + param_2 * 4 + 0xc);
    iVar3 = 1;
    do {
      if (*(char *)(iVar8 + iVar3) != '\0') {
        iVar3 = 1;
        goto LAB_00506a44;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    FUN_00403640(param_1,&DAT_00618b34,2);
  }
  goto LAB_00506ae5;
  while (iVar3 = iVar3 + 1, iVar3 < 3) {
LAB_00506a44:
    if (*(char *)(iVar8 + iVar3) == '\0') {
      iVar3 = 1;
      goto LAB_00506a68;
    }
  }
  FUN_00403640(param_1,&DAT_005e7e24,2);
  goto LAB_00506ae5;
  while (iVar3 = iVar3 + 1, iVar3 < 3) {
LAB_00506b30:
    if (*(char *)(iVar8 + iVar3) == '\0') {
      bVar2 = true;
      iVar8 = 1;
      do {
        if (*(char *)(iVar8 + *(int *)((int)this + (param_2 + 3) * 4)) != '\0') {
          if (!bVar2) {
            FUN_00403640(param_1,&DAT_0061a718,1);
          }
          pcVar9 = *(char **)(&UNK_005df5e8 + iVar8 * 4);
          bVar2 = false;
          pcVar7 = pcVar9;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00403640(param_1,pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      goto LAB_00506bac;
    }
  }
  uVar10 = 8;
  pcVar9 = "upgraded";
  goto LAB_00506ba5;
  while (iVar3 = iVar3 + 1, iVar3 < 3) {
LAB_00506a68:
    if (*(char *)(iVar8 + iVar3) != '\0') {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,&DAT_005e7d58);
      local_8 = 1;
      puVar5 = puVar4;
      if (0xf < (uint)puVar4[5]) {
        puVar5 = (undefined4 *)*puVar4;
      }
      FUN_00403640(param_1,puVar5,puVar4[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_1c) {
        pvVar6 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar6 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      break;
    }
  }
LAB_00506ae5:
  if (param_2 < 0xe) {
    if (*(int *)((int)this + (param_2 + 3) * 4) == 0) goto LAB_00506bac;
    iVar8 = *(int *)((int)this + param_2 * 4 + 0xc);
    iVar3 = 1;
    do {
      if (*(char *)(iVar8 + iVar3) != '\0') {
        iVar3 = 1;
        goto LAB_00506b30;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    uVar10 = 8;
    pcVar9 = "standard";
  }
  else {
    uVar10 = 5;
    pcVar9 = "empty";
  }
LAB_00506ba5:
  FUN_00403640(param_1,pcVar9,uVar10);
LAB_00506bac:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00506bd0(void *this,int param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 8) = param_2;
  puVar3 = (undefined4 *)((int)this + 0xc);
  iVar2 = 0;
  do {
    if (iVar2 < param_1) {
      puVar1 = (undefined2 *)FUN_005adb0f(0xc);
      *(undefined4 *)(puVar1 + 2) = 0xffffffff;
      *(undefined4 *)(puVar1 + 4) = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *puVar3 = puVar1;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0xe);
  return;
}


int __fastcall FUN_00506c20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x10);
  iVar3 = 7;
  do {
    if (piVar1[-1] != 0) {
      iVar2 = iVar2 + (0x14 - *(int *)(piVar1[-1] + 8));
    }
    if (*piVar1 != 0) {
      iVar2 = iVar2 + (0x14 - *(int *)(*piVar1 + 8));
    }
    piVar1 = piVar1 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}


basic_string<> * __thiscall FUN_00506c60(void *this,basic_string<> *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar3 = 0;
  piVar4 = (int *)((int)this + 0x10);
  iVar9 = 7;
  do {
    if (piVar4[-1] != 0) {
      iVar3 = iVar3 + *(int *)(piVar4[-1] + 8);
    }
    if (*piVar4 != 0) {
      iVar3 = iVar3 + *(int *)(*piVar4 + 8);
    }
    piVar4 = piVar4 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (iVar3 == 0) {
    pcVar6 = "`7empty";
    if (param_2 == '\0') {
      pcVar6 = "empty";
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (basic_string<>)0x0;
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00402690(param_1,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
    return param_1;
  }
  iVar9 = -1;
  piVar4 = (int *)((int)this + 0xc);
  iVar3 = 0;
  do {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      if ((iVar9 == -1) && (0 < *(int *)(iVar2 + 8))) {
        iVar9 = *(int *)(iVar2 + 4);
      }
      else if ((*(int *)(iVar2 + 4) != iVar9) &&
              ((*(int *)(iVar2 + 4) != -1 && (0 < *(int *)(iVar2 + 8))))) {
        pcVar6 = "`^Various";
        if (param_2 == '\0') {
          pcVar6 = "Various";
        }
        std::basic_string<>::basic_string<>(param_1,pcVar6);
        return param_1;
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0xe);
  uVar8 = 0;
  puVar7 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  uVar10 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar7 >> 2;
  if (uVar10 != 0) {
    do {
      piVar4 = (int *)*puVar7;
      if (*piVar4 == iVar9) goto LAB_00506d40;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 < uVar10);
  }
  piVar4 = (int *)0x0;
LAB_00506d40:
  if (param_2 == '\0') {
    FUN_004024e0(param_1,piVar4 + 1);
    return param_1;
  }
  FUN_00591e00(param_1,&DAT_0061a63c);
  return param_1;
}


uint __thiscall FUN_00506db0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *local_c;
  
  uVar8 = 0;
  puVar6 = *(uint **)(DAT_0065b5cc + 0x84);
  uVar3 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar6 >> 2;
  if (uVar3 != 0) {
    do {
      local_c = (int *)*puVar6;
      if (*local_c == param_1) goto LAB_00506dfc;
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 < uVar3);
  }
  local_c = (int *)0x0;
LAB_00506dfc:
  iVar9 = 0;
  piVar7 = (int *)((int)this + 0xc);
  do {
    iVar1 = *piVar7;
    piVar5 = local_c;
    if (((iVar1 != 0) &&
        ((iVar2 = local_c[0x17], iVar2 == 0 ||
         ((piVar5 = (int *)(iVar2 - 1), piVar5 < (int *)0x3 &&
          (piVar5 = (int *)CONCAT31((int3)((uint)piVar5 >> 8),*(char *)(iVar1 + iVar2)),
          *(char *)(iVar1 + iVar2) != '\0')))))) &&
       ((iVar2 = *(int *)(iVar1 + 4), iVar2 == -1 || (iVar2 == param_1)))) {
      iVar4 = 0x14 - *(int *)(iVar1 + 8);
      if (param_2 <= iVar4) {
        if ((iVar2 == param_1) || (iVar2 == -1)) {
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + param_2;
          *(int *)(iVar1 + 4) = param_1;
        }
        piVar5 = (int *)FUN_00591070("DETAIL","adding %d units to slot %d");
        goto LAB_00506e98;
      }
      param_2 = param_2 - iVar4;
      if ((iVar2 == param_1) || (iVar2 == -1)) {
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + iVar4;
        *(int *)(iVar1 + 4) = param_1;
      }
      piVar5 = (int *)FUN_00591070("DETAIL","adding %d units to slot %d");
    }
    iVar9 = iVar9 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar9 < 0xe);
  if (param_2 != 0) {
    uVar3 = FUN_00591070(&DAT_005cdc70,"No space for cargo in this hold.");
    return uVar3 & 0xffffff00;
  }
LAB_00506e98:
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}


void __thiscall FUN_00506ed0(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x84);
  uVar4 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar2 >> 2;
  if (uVar4 != 0) {
    do {
      piVar1 = (int *)*puVar2;
      if (*piVar1 == param_1) goto LAB_00506f07;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar4);
  }
  piVar1 = (int *)0x0;
LAB_00506f07:
  FUN_00506f20(this,piVar1,param_2);
  return;
}


void __thiscall FUN_00506f20(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar4 = (int *)((int)this + 0x44);
  iVar6 = 0xe;
  iVar5 = param_2;
  do {
    if ((-1 < iVar6) &&
       (((*(int *)((int)this + 8) < 1 || (iVar6 < *(int *)((int)this + 8))) &&
        (iVar1 = *piVar4, iVar1 != 0)))) {
      iVar2 = *(int *)(iVar1 + 4);
      iVar3 = *param_1;
      if (iVar2 == iVar3) {
        iVar7 = *(int *)(iVar1 + 8);
      }
      else {
        iVar7 = 0;
      }
      if (param_2 <= iVar7) {
        if ((iVar2 == iVar3) &&
           (*(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - iVar5, *(int *)(iVar1 + 8) < 1)) {
          *(undefined4 *)(iVar1 + 8) = 0;
          *(undefined4 *)(iVar1 + 4) = 0xffffffff;
        }
        FUN_00591070(&DAT_005cdc70,"Removed %d units from pod %d");
        return;
      }
      if (0 < iVar7) {
        if (iVar5 < iVar7) {
          if ((iVar2 == iVar3) &&
             (*(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - iVar5, *(int *)(iVar1 + 8) < 1)) {
            *(undefined4 *)(iVar1 + 8) = 0;
            *(undefined4 *)(iVar1 + 4) = 0xffffffff;
          }
          FUN_00591070(&DAT_005cdc70,"Removed %d units from pod %d");
          iVar5 = 0;
        }
        else {
          if ((iVar2 == iVar3) &&
             (*(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) - iVar7, *(int *)(iVar1 + 8) < 1)) {
            *(undefined4 *)(iVar1 + 8) = 0;
            *(undefined4 *)(iVar1 + 4) = 0xffffffff;
          }
          FUN_00591070(&DAT_005cdc70,"Removed %d units from pod %d");
          iVar5 = iVar5 - iVar7;
        }
      }
    }
    piVar4 = piVar4 + -1;
    iVar6 = iVar6 + -1;
    if (iVar6 < 0) {
      if (0 < iVar5) {
        FUN_00591070(&DAT_005cdc70,"Error: couldn\'t remove all, %d remaining.");
      }
      return;
    }
  } while( true );
}


int __thiscall FUN_00507060(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) &&
     (((*(int *)((int)this + 8) < 1 || (param_1 < *(int *)((int)this + 8))) &&
      (*(int *)((int)this + param_1 * 4 + 0xc) != 0)))) {
    iVar2 = 0x32;
    iVar1 = 1;
    do {
      if ((iVar1 == 0) ||
         ((iVar1 - 1U < 3 && (*(char *)(iVar1 + *(int *)((int)this + param_1 * 4 + 0xc)) != '\0'))))
      {
        iVar2 = iVar2 + *(int *)(&DAT_005df604 + iVar1 * 4) / 2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    return iVar2;
  }
  return -1;
}


undefined4 __thiscall FUN_005070d0(void *this,int param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  
  if (param_1 == -1) {
    param_1 = 0;
    if (0 < *(int *)((int)this + 8)) {
      piVar2 = (int *)((int)this + 0xc);
      do {
        if (*piVar2 == 0) goto LAB_00507100;
        param_1 = param_1 + 1;
        piVar2 = piVar2 + 1;
      } while (param_1 < *(int *)((int)this + 8));
    }
    param_1 = 0xffffffff;
  }
LAB_00507100:
  if (*(int *)((int)this + param_1 * 4 + 0xc) == 0) {
    puVar1 = (undefined2 *)FUN_005adb0f(0xc);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    *(undefined4 *)(puVar1 + 4) = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined2 **)((int)this + param_1 * 4 + 0xc) = puVar1;
    return CONCAT31((int3)((uint)puVar1 >> 8),1);
  }
  return param_1 & 0xffffff00;
}


bool __thiscall FUN_00507140(void *this,int param_1)

{
  if ((-1 < param_1) && ((*(int *)((int)this + 8) < 1 || (param_1 < *(int *)((int)this + 8))))) {
    return *(int *)((int)this + param_1 * 4 + 0xc) != 0;
  }
  return false;
}


void __thiscall FUN_00507170(void *this,int param_1)

{
  void *pvVar1;
  
  if ((-1 < param_1) && ((*(int *)((int)this + 8) < 1 || (param_1 < *(int *)((int)this + 8))))) {
    pvVar1 = *(void **)((int)this + param_1 * 4 + 0xc);
    if (pvVar1 != (void *)0x0) {
      FUN_005adb3f(pvVar1);
      *(undefined4 *)((int)this + param_1 * 4 + 0xc) = 0;
    }
  }
  return;
}


void __thiscall FUN_005071b0(void *this,int param_1,int param_2)

{
  if ((param_1 < 0) ||
     (((0 < *(int *)((int)this + 8) && (*(int *)((int)this + 8) <= param_1)) ||
      (*(int *)((int)this + param_1 * 4 + 0xc) == 0)))) {
    FUN_005070d0(this,param_1);
  }
  if ((param_2 != 0) && (param_2 - 1U < 3)) {
    *(undefined1 *)(param_2 + *(int *)((int)this + param_1 * 4 + 0xc)) = 1;
  }
  return;
}


int __thiscall FUN_00507200(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = 0;
  piVar6 = (int *)((int)this + 0xc);
  iVar5 = 0xe;
  do {
    iVar3 = *piVar6;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      if ((iVar2 < 1) || (piVar1 = (int *)(iVar3 + 4), iVar3 = *piVar6, *piVar1 != *param_1)) {
        if ((iVar2 == 0) &&
           ((iVar2 = param_1[0x17], iVar2 == 0 ||
            ((iVar2 - 1U < 3 && (*(char *)(iVar3 + iVar2) != '\0')))))) {
          iVar4 = iVar4 + 0x14;
        }
      }
      else {
        iVar4 = iVar4 + (0x14 - iVar2);
      }
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return iVar4;
}


int __thiscall FUN_00507270(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  iVar2 = 0;
  piVar4 = (int *)((int)this + 0xc);
  local_8 = 0;
  iVar3 = 0;
  do {
    if (((-1 < iVar3) &&
        (((iVar2 = local_8, *(int *)((int)this + 8) < 1 || (iVar3 < *(int *)((int)this + 8))) &&
         (iVar1 = *piVar4, iVar1 != 0)))) &&
       ((param_1 == 0 || ((param_1 - 1U < 3 && (*(char *)(iVar1 + param_1) != '\0')))))) {
      local_8 = local_8 + (0x14 - *(int *)(iVar1 + 8));
      iVar2 = local_8;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0xe);
  return iVar2;
}


int __fastcall FUN_005072f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  iVar8 = 0;
  piVar4 = (int *)(param_1 + 0xc);
  do {
    if (((-1 < iVar8) &&
        (((iVar2 = local_8, *(int *)(param_1 + 8) < 1 || (iVar8 < *(int *)(param_1 + 8))) &&
         (iVar1 = *piVar4, iVar1 != 0)))) &&
       ((*(int *)(iVar1 + 4) != -1 && (*(int *)(iVar1 + 8) != 0)))) {
      uVar6 = 0;
      puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x84);
      uVar7 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar3 >> 2;
      if (uVar7 != 0) {
        do {
          piVar5 = (int *)*puVar3;
          if (*piVar5 == *(int *)(((int *)(param_1 + 0xc))[iVar8] + 4)) goto LAB_00507368;
          uVar6 = uVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar6 < uVar7);
      }
      piVar5 = (int *)0x0;
LAB_00507368:
      local_8 = local_8 + piVar5[0x16] * *(int *)(iVar1 + 8);
      iVar2 = local_8;
    }
    iVar8 = iVar8 + 1;
    piVar4 = piVar4 + 1;
    if (0xd < iVar8) {
      return iVar2;
    }
  } while( true );
}


int __thiscall FUN_005073a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  piVar3 = (int *)((int)this + 0xc);
  do {
    if ((-1 < iVar1) &&
       (((*(int *)((int)this + 8) < 1 || (iVar1 < *(int *)((int)this + 8))) &&
        (iVar2 = *piVar3, iVar2 != 0)))) {
      if (*(int *)(iVar2 + 4) == param_1) {
        iVar2 = *(int *)(iVar2 + 8);
      }
      else {
        iVar2 = 0;
      }
      iVar4 = iVar4 + iVar2;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 0xe);
  return iVar4;
}


int __thiscall FUN_005073f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  iVar8 = 0;
  piVar5 = (int *)((int)this + 0xc);
  do {
    if ((((-1 < iVar8) &&
         (((iVar2 = local_8, *(int *)((int)this + 8) < 1 || (iVar8 < *(int *)((int)this + 8))) &&
          (iVar1 = *piVar5, iVar1 != 0)))) &&
        ((param_1 == 0 || ((param_1 - 1U < 3 && (*(char *)(iVar1 + param_1) != '\0')))))) &&
       (-1 < *(int *)(iVar1 + 4))) {
      uVar6 = 0;
      puVar3 = *(undefined4 **)(DAT_0065b5cc + 0x84);
      uVar7 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar3 >> 2;
      if (uVar7 != 0) {
        do {
          piVar4 = (int *)*puVar3;
          if (*piVar4 == *(int *)(((int *)((int)this + 0xc))[iVar8] + 4)) goto LAB_0050748a;
          uVar6 = uVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar6 < uVar7);
      }
      piVar4 = (int *)0x0;
LAB_0050748a:
      if (piVar4[0x17] == param_1) {
        local_8 = local_8 + *(int *)(iVar1 + 8);
        iVar2 = local_8;
      }
    }
    iVar8 = iVar8 + 1;
    piVar5 = piVar5 + 1;
    if (0xd < iVar8) {
      return iVar2;
    }
  } while( true );
}


void __thiscall FUN_005074d0(void *this,float *param_1)

{
  undefined4 *puVar1;
  char ****ppppcVar2;
  char ****ppppcVar3;
  byte *in_stack_ffffff94;
  undefined1 *local_3c;
  float *local_38;
  void *local_34;
  char ***local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0db0;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = param_1;
  local_34 = this;
  if ((((float)*(int *)((int)param_1[1] + 0x10) <= *param_1) && (*(int *)(DAT_0065b5cc + 0xd0) != 0)
      ) && (this == *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8))) {
    FUN_00591e00((undefined1 *)local_30,"has_component_%s");
    local_8 = 0;
    ppppcVar3 = local_30;
    if (0xf < local_1c) {
      ppppcVar3 = (char ****)local_30[0];
    }
    ppppcVar2 = local_30;
    if (0xf < local_1c) {
      ppppcVar2 = (char ****)local_30[0];
    }
    FUN_00413ec0(&local_3c,tolower_exref,(char *)ppppcVar2,(char *)((int)ppppcVar3 + local_20),
                 (undefined1 *)ppppcVar3);
    local_3c = &stack0xffffff94;
    FUN_004024e0(&stack0xffffff94,local_30);
    local_8._0_1_ = 1;
    puVar1 = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a0ee0(puVar1,in_stack_ffffff94);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
      ppppcVar3 = (char ****)local_30[0];
      if ((0xfff < local_1c + 1) &&
         (ppppcVar3 = (char ****)local_30[0][-1],
         (char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar3);
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
  }
  puVar1 = *(undefined4 **)((int)local_34 + 0x48);
  if ((uint)((int)puVar1 - *(int *)((int)local_34 + 0x44) >> 2) < *(uint *)((int)local_34 + 4)) {
    if (*(undefined4 **)((int)local_34 + 0x4c) == puVar1) {
      FUN_00414080((int *)((int)local_34 + 0x44),puVar1,&local_38);
    }
    else {
      *puVar1 = param_1;
      *(int *)((int)local_34 + 0x48) = *(int *)((int)local_34 + 0x48) + 4;
    }
  }
  else {
    FUN_00591070(&DAT_005cdc70,"ERROR: Component storage full.");
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


uint __thiscall FUN_00507670(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)((int)this + 0x44);
  uVar1 = 0;
  uVar3 = *(int *)((int)this + 0x48) - (int)piVar2 >> 2;
  if (uVar3 != 0) {
    do {
      if (**(int **)(*piVar2 + 4) == param_1) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < uVar3);
  }
  return uVar1 & 0xffffff00;
}


void __thiscall FUN_005076c0(void *this,float ****param_1)

{
  int *_Dst;
  float ****ppppfVar1;
  undefined4 *puVar2;
  float ******ppppppfVar3;
  int iVar4;
  uint uVar5;
  float *******pppppppfVar6;
  int iVar7;
  size_t _Size;
  uint uVar8;
  int iVar9;
  byte *in_stack_ffffff8c;
  undefined1 *local_44;
  int *local_40;
  float ****local_3c;
  float ******local_38;
  float ******local_34;
  float ******local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c0df0;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = *(int **)((int)this + 0x48);
  local_38 = (float ******)param_1;
  local_3c = param_1;
  local_34 = this;
  puVar2 = FUN_00414000(&local_44,(int *)&local_3c,*(int **)((int)this + 0x44),local_40);
  _Dst = (int *)*puVar2;
  if (_Dst != local_40) {
    _Size = *(int *)((int)this + 0x48) - (int)local_40;
    memmove(_Dst,local_40,_Size);
    local_34[0x12] = (float *****)(_Size + (int)_Dst);
    this = local_34;
  }
  if ((float)(int)param_1[1][4] <= (float)*local_38) {
    ppppppfVar3 = *(float *******)((int)this + 0x44);
    uVar5 = 0;
    uVar8 = (int)*(float *******)((int)this + 0x48) - (int)ppppppfVar3 >> 2;
    if (uVar8 != 0) {
      do {
        ppppfVar1 = (*ppppppfVar3)[1];
        if ((ppppfVar1 == (float ****)param_1[1]) &&
           ((float)(int)ppppfVar1[4] <= (float)**ppppppfVar3)) goto LAB_00507865;
        uVar5 = uVar5 + 1;
        ppppppfVar3 = ppppppfVar3 + 1;
      } while (uVar5 < uVar8);
    }
  }
  FUN_00591e00((undefined1 *)local_30,"has_component_%s");
  local_8 = 0;
  local_38 = (float ******)local_30;
  if (0xf < local_1c) {
    local_38 = local_30[0];
  }
  local_34 = (float ******)local_30;
  if (0xf < local_1c) {
    local_34 = local_30[0];
  }
  iVar9 = (local_20 + (int)local_38) - (int)local_34;
  iVar7 = 0;
  if ((float *******)(local_20 + (int)local_38) < local_34) {
    iVar9 = 0;
  }
  if (iVar9 != 0) {
    do {
      iVar4 = tolower((int)*(char *)(iVar7 + (int)local_34));
      *(char *)(iVar7 + (int)local_38) = (char)iVar4;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar9);
  }
  local_44 = &stack0xffffff8c;
  FUN_004024e0(&stack0xffffff8c,local_30);
  local_8._0_1_ = 1;
  puVar2 = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004a0ee0(puVar2,in_stack_ffffff8c);
  if (0xf < local_1c) {
    pppppppfVar6 = (float *******)local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pppppppfVar6 = (float *******)local_30[0][-1],
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pppppppfVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppfVar6);
  }
LAB_00507865:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


int __cdecl FUN_00507890(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte **ppbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  uVar6 = in_stack_00000018;
  pbVar2 = param_1;
  ppbVar5 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar5 = (byte **)param_1;
  }
  uVar3 = FUN_004031f0((byte *)ppbVar5,in_stack_00000014,(byte *)"solid",5);
  iVar7 = 0;
  if ((char)uVar3 == '\0') {
    do {
      uVar6 = in_stack_00000018;
      pbVar8 = (&PTR_DAT_005df610)[iVar7];
      pbVar4 = pbVar8;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      ppbVar5 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar5 = (byte **)pbVar2;
      }
      uVar3 = FUN_004031f0((byte *)ppbVar5,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1))
      ;
      if ((char)uVar3 != '\0') goto LAB_005078fe;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    iVar7 = 0;
  }
LAB_005078fe:
  if (0xf < uVar6) {
    pbVar8 = pbVar2;
    if (0xfff < uVar6 + 1) {
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


void FUN_00507940(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *this;
  undefined4 ****ppppuVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  int iVar6;
  byte *in_stack_ffffff9c;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c0e30;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x30);
  if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
    FUN_00591070("DETAIL",
                 "%s: unable to run fail hack logic due to lack of hack module or targeted ship");
    goto LAB_00507b82;
  }
  FUN_00591070("DETAIL","%s: Detected a ship trying to hack us. Determining response.");
  if ((iVar5 == 0) || (iVar6 = *(int *)(iVar5 + 0x44), iVar6 == 0)) goto LAB_00507b82;
  iVar2 = *(int *)(iVar6 + 0x70);
  if (iVar2 == 2) {
    FUN_00591070("DETAIL","%s: Attacking this ship.");
    iVar6 = *(int *)(iVar5 + 0x44);
    *(int *)(iVar6 + 0x40) = param_1;
    *(undefined4 *)(iVar6 + 0x44) = 0x42f00000;
  }
  else {
    if (iVar2 == 1) {
      iVar6 = *(int *)(iVar6 + 0x38);
      if (((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != *(int *)(iVar6 + 0x1c))) &&
         (-1 < *(int *)(iVar6 + 0x24))) {
        FUN_00591070("DETAIL","%s: I\'ve been outed as a smuggler! Attacking this ship.");
        if (*(char *)(*(int *)(*(int *)(iVar5 + 0x44) + 0x38) + 0x28) != '\0') {
          *(undefined4 *)(iVar5 + 100) = 3;
          *(undefined4 *)(*(int *)(iVar5 + 0x44) + 0x70) = 2;
          iVar6 = *(int *)(iVar5 + 0x44);
          *(int *)(iVar6 + 0x40) = param_1;
          *(undefined4 *)(iVar6 + 0x44) = 0x42f00000;
          goto LAB_00507a6f;
        }
      }
      iVar6 = 3;
    }
    else if (iVar2 == 7) {
      iVar6 = 3;
    }
    else {
      iVar6 = 2;
    }
    FUN_00527550(*(int **)(param_1 + 0x224),iVar6,"Hack detected by vessel, attempt cancelled");
  }
LAB_00507a6f:
  iVar5 = *(int *)(iVar5 + 0x44);
  piVar1 = *(int **)(iVar5 + 0xd0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  FUN_004024e0(local_2c,(undefined4 *)(*(int *)(iVar5 + 0x6c) + 0x238));
  local_8 = 0;
  ppppuVar4 = local_2c;
  if (0xf < local_18) {
    ppppuVar4 = (undefined4 ****)local_2c[0];
  }
  ppppuVar3 = local_2c;
  if (0xf < local_18) {
    ppppuVar3 = (undefined4 ****)local_2c[0];
  }
  iVar5 = 0;
  iVar6 = (local_1c + (int)ppppuVar4) - (int)ppppuVar3;
  if ((undefined4 ****)(local_1c + (int)ppppuVar4) < ppppuVar3) {
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    do {
      iVar2 = tolower((int)*(char *)(iVar5 + (int)ppppuVar3));
      *(char *)(iVar5 + (int)ppppuVar4) = (char)iVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar6);
  }
  FUN_00591e00(&stack0xffffff9c,"failed_hacking_%s");
  local_8._0_1_ = 1;
  this = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004a0ee0(this,in_stack_ffffff9c);
  if (0xf < local_18) {
    ppppuVar4 = (undefined4 ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppuVar4 = (undefined4 ****)local_2c[0][-1],
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar4);
  }
LAB_00507b82:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00507ba0(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  void *pvVar12;
  undefined1 *puVar13;
  char *pcVar14;
  void *pvVar15;
  uint uVar16;
  uint uVar17;
  uint in_stack_fffffee4;
  undefined1 auStack_104 [16];
  undefined4 uStack_f4;
  undefined1 auStack_ec [16];
  undefined4 uStack_dc;
  undefined1 auStack_d4 [16];
  undefined4 uStack_c4;
  byte *in_stack_ffffff44;
  char *pcVar18;
  int local_7c;
  void *local_74 [5];
  uint local_60;
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
  puStack_c = &LAB_005c0f40;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar9 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x30);
  if ((iVar9 == 0) || (pvVar12 = *(void **)(iVar9 + 0x18), pvVar12 == (void *)0x0)) {
    FUN_00591070("DETAIL","%s: unable to hack due to lack of hack module or targeted ship");
    goto LAB_00508aae;
  }
  pvVar5 = (void *)FUN_0050c720(param_1,*(int *)((int)pvVar12 + 0x250));
  if (pvVar5 == (void *)0x0) {
    FUN_00591070("DETAIL","WARNING: No sensor data to work with for the vessel being hacked.");
    goto LAB_00508aae;
  }
  puVar10 = (undefined4 *)((int)pvVar12 + 8);
  if ((undefined4 *)((int)pvVar5 + 0x48) != puVar10) {
    if (0xf < *(uint *)((int)pvVar12 + 0x1c)) {
      puVar10 = (undefined4 *)*puVar10;
    }
    FUN_00402690((undefined4 *)((int)pvVar5 + 0x48),puVar10,*(uint *)((int)pvVar12 + 0x18));
  }
  pcVar18 = *(char **)((int)pvVar12 + 0x254);
  if (0xf < *(uint *)(pcVar18 + 0x14)) {
    pcVar18 = *(char **)pcVar18;
  }
  pcVar14 = pcVar18;
  do {
    cVar4 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar4 != '\0');
  FUN_00402690((void *)((int)pvVar5 + 0x60),pcVar18,(int)pcVar14 - (int)(pcVar18 + 1));
  puVar10 = (undefined4 *)((int)pvVar12 + 0x238);
  if ((undefined4 *)((int)pvVar5 + 0x90) != puVar10) {
    puVar8 = puVar10;
    if (0xf < *(uint *)((int)pvVar12 + 0x24c)) {
      puVar8 = (undefined4 *)*puVar10;
    }
    FUN_00402690((undefined4 *)((int)pvVar5 + 0x90),puVar8,*(uint *)((int)pvVar12 + 0x248));
  }
  FUN_005095f0(pvVar5,(undefined1 *)local_2c,'\0',-1);
  local_8 = 0;
  FUN_00591e00((undefined1 *)local_74,"Hack Report - %s");
  local_8._0_1_ = 2;
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
LAB_00507cf2:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_8._0_1_ = 3;
  puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"** Hack Report **\n");
  local_8._0_1_ = 4;
  puVar8 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar8 = (undefined4 *)*puVar6;
  }
  FUN_00403640(local_5c,puVar8,puVar6[4]);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"Unit: %s %s\n\n");
  local_8._0_1_ = 5;
  puVar8 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar8 = (undefined4 *)*puVar6;
  }
  FUN_00403640(local_5c,puVar8,puVar6[4]);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  FUN_00403640(local_5c,"- TARGET -\n",0xb);
  puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"Name : %s\n");
  local_8._0_1_ = 6;
  puVar8 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar8 = (undefined4 *)*puVar6;
  }
  FUN_00403640(local_5c,puVar8,puVar6[4]);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"Manu.: %s\n");
  local_8._0_1_ = 7;
  puVar8 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar8 = (undefined4 *)*puVar6;
  }
  FUN_00403640(local_5c,puVar8,puVar6[4]);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"Class: %s\n");
  local_8._0_1_ = 8;
  puVar8 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar8 = (undefined4 *)*puVar6;
  }
  FUN_00403640(local_5c,puVar8,puVar6[4]);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"Rego.: %s\n");
  local_8._0_1_ = 9;
  puVar8 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar8 = (undefined4 *)*puVar6;
  }
  FUN_00403640(local_5c,puVar8,puVar6[4]);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
    pvVar15 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar15 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  FUN_005095f0(pvVar5,(undefined1 *)local_44,'\0',-1);
  local_8._0_1_ = 10;
  puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"Sens.: %s\n");
  local_8._0_1_ = 0xb;
  puVar8 = puVar6;
  if (0xf < (uint)puVar6[5]) {
    puVar8 = (undefined4 *)*puVar6;
  }
  FUN_00403640(local_5c,puVar8,puVar6[4]);
  local_8._0_1_ = 10;
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
  local_8._0_1_ = 3;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
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
  FUN_00403640(local_5c,&DAT_005e75f8,1);
  FUN_00403640(local_5c,"- FLIGHT PLAN -\n",0x10);
  if (*(int *)(*(int *)((int)pvVar12 + 0x44) + 0x10) == 0) {
    FUN_00403640(local_5c,"Dest.: none filed\n",0x12);
  }
  else {
    puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"Dest.: %s\n");
    local_8._0_1_ = 0xc;
    puVar8 = puVar6;
    if (0xf < (uint)puVar6[5]) {
      puVar8 = (undefined4 *)*puVar6;
    }
    FUN_00403640(local_5c,puVar8,puVar6[4]);
    local_8._0_1_ = 3;
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
  }
  if (*(int *)(*(int *)((int)pvVar12 + 0x44) + 8) == 0) {
    FUN_00403640(local_5c,"Orig.: none filed\n",0x12);
  }
  else {
    puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"Orig.: %s\n");
    local_8._0_1_ = 0xd;
    puVar8 = puVar6;
    if (0xf < (uint)puVar6[5]) {
      puVar8 = (undefined4 *)*puVar6;
    }
    FUN_00403640(local_5c,puVar8,puVar6[4]);
    local_8._0_1_ = 3;
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
  }
  iVar9 = *(int *)(*(int *)((int)pvVar12 + 0x44) + 0x38);
  if (iVar9 == 0) {
    uVar17 = 0xb;
    pcVar18 = "Cargo: nil\n";
LAB_00508376:
    FUN_00403640(local_5c,pcVar18,uVar17);
LAB_0050837e:
    uVar17 = 0;
    piVar7 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x10c);
    if (*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x110) - *piVar7 >> 2 != 0) {
      do {
        pvVar5 = *(void **)(*(int *)(uVar17 * 4 + *piVar7) + 0x18);
        if ((pvVar5 == (void *)0x0) ||
           (cVar4 = FUN_004a23b0(pvVar5,*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8)),
           cVar4 != '\0')) {
          uStack_c4 = 0x5083ef;
          FUN_004024e0(&stack0xffffff44,
                       *(undefined4 **)
                        (*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x10c) + uVar17 * 4));
          piVar7 = (int *)FUN_004a8380(in_stack_ffffff44);
          if ((piVar7 != (int *)0x0) &&
             ((*(void **)((int)pvVar12 + 0x1f8) != (void *)0x0 &&
              (iVar9 = FUN_005073a0(*(void **)((int)pvVar12 + 0x1f8),*piVar7), 0 < iVar9)))) {
            FUN_00403640(local_5c,
                         "WARNING: Discrepancy between listed cargo in IFF transponder, and signature from the cargo pods. Signature indicates cargo listed as contraband in this sector. Vessel may be a smugger.\n"
                         ,0xb9);
            if ((undefined4 *)(DAT_0065b444 + 0x1ac) != puVar10) {
              if (0xf < *(uint *)((int)pvVar12 + 0x24c)) {
                puVar10 = (undefined4 *)*puVar10;
              }
              FUN_00402690((undefined4 *)(DAT_0065b444 + 0x1ac),puVar10,
                           *(uint *)((int)pvVar12 + 0x248));
            }
            FUN_00591070(&DAT_005cdc70,"Player detected a smuggler - %s (%s)");
            break;
          }
        }
        uVar17 = uVar17 + 1;
        piVar7 = (int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x10c);
      } while (uVar17 < (uint)(*(int *)(*(int *)(DAT_0065b5cc + 0xd8) + 0x110) - *piVar7 >> 2));
    }
    FUN_00403640(local_5c,&DAT_005e75f8,1);
    FUN_00403640(local_5c,"- GENERAL -\n",0xc);
    iVar9 = FUN_0050bf30(pvVar12);
    if (iVar9 < 4) {
      uVar17 = 7;
      pcVar18 = "nominal";
    }
    else if (iVar9 < 0x15) {
      uVar17 = 10;
      pcVar18 = "light dmg.";
    }
    else if (iVar9 < 0x33) {
      uVar17 = 9;
      pcVar18 = "med. dmg.";
    }
    else if (iVar9 < 0x4c) {
      uVar17 = 10;
      pcVar18 = "heavy dmg.";
    }
    else {
      uVar17 = 8;
      pcVar18 = "CRITICAL";
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,pcVar18,uVar17);
    local_8._0_1_ = 0x11;
    puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"Hull : %s\n");
    local_8._0_1_ = 0x12;
    puVar10 = puVar8;
    if (0xf < (uint)puVar8[5]) {
      puVar10 = (undefined4 *)*puVar8;
    }
    FUN_00403640(local_5c,puVar10,puVar8[4]);
    local_8._0_1_ = 0x11;
    if (0xf < local_30) {
      pvVar5 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar5 = *(void **)((int)local_44[0] + -4), uVar3 = (undefined1)local_8,
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_0050826d;
      FUN_005adb3f(pvVar5);
    }
    local_8._0_1_ = 3;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_18) {
      pvVar5 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar5 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_0050826d;
      FUN_005adb3f(pvVar5);
    }
    FUN_00403640(local_5c,"Modules:\n",9);
    puVar8 = *(undefined4 **)(*(int *)((int)pvVar12 + 0x40) + 0x40);
    for (puVar10 = *(undefined4 **)(*(int *)((int)pvVar12 + 0x40) + 0x3c); puVar10 != puVar8;
        puVar10 = puVar10 + 1) {
      piVar7 = (int *)*puVar10;
      cVar4 = (**(code **)(*piVar7 + 0x14))();
      if (cVar4 == '\0') {
        (**(code **)(*piVar7 + 0x18))();
      }
      cVar4 = (**(code **)(*piVar7 + 0x14))();
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*piVar7 + 0x18))();
        uVar17 = 7;
        if (cVar4 == '\0') {
          pcVar18 = "nominal";
        }
        else {
          pcVar18 = "damaged";
        }
      }
      else {
        uVar17 = 0xe;
        pcVar18 = "non-functional";
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,pcVar18,uVar17);
      local_8._0_1_ = 0x13;
      uStack_c4 = 0x5086c2;
      puVar11 = (undefined4 *)FUN_00591e00((undefined1 *)local_44," - %s %s (%s), `%c%s`2\n");
      local_8._0_1_ = 0x14;
      puVar6 = puVar11;
      if (0xf < (uint)puVar11[5]) {
        puVar6 = (undefined4 *)*puVar11;
      }
      FUN_00403640(local_5c,puVar6,puVar11[4]);
      local_8._0_1_ = 0x13;
      if (0xf < local_30) {
        pvVar5 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar5 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_00507cf2;
        FUN_005adb3f(pvVar5);
      }
      local_8._0_1_ = 3;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_18) {
        pvVar5 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar5 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_00507cf2;
        FUN_005adb3f(pvVar5);
      }
    }
    FUN_00403640(local_5c,"Cargo...\n",9);
    bVar2 = false;
    local_7c = 0;
    iVar9 = 0xc;
    do {
      iVar1 = *(int *)((int)pvVar12 + 0x1f8);
      if ((-1 < local_7c) &&
         (((*(int *)(iVar1 + 8) < 1 || (local_7c < *(int *)(iVar1 + 8))) &&
          (*(int *)(iVar9 + iVar1) != 0)))) {
        if (*(int *)(*(int *)(iVar9 + iVar1) + 8) < 1) {
          FUN_00403640(local_5c,"- empty pod\n",0xc);
        }
        else {
          uVar17 = 0;
          uVar16 = *(int *)(DAT_0065b5cc + 0x88) - *(int *)(DAT_0065b5cc + 0x84) >> 2;
          if (uVar16 != 0) {
            do {
              if (**(int **)(*(int *)(DAT_0065b5cc + 0x84) + uVar17 * 4) ==
                  *(int *)(*(int *)(iVar1 + iVar9) + 4)) break;
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar16);
          }
          puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"- %dx %s\n");
          local_8._0_1_ = 0x15;
          puVar10 = puVar8;
          if (0xf < (uint)puVar8[5]) {
            puVar10 = (undefined4 *)*puVar8;
          }
          FUN_00403640(local_5c,puVar10,puVar8[4]);
          local_8._0_1_ = 3;
          if (0xf < local_30) {
            pvVar5 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar5 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_00507cf2;
            FUN_005adb3f(pvVar5);
          }
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        }
        bVar2 = true;
      }
      local_7c = local_7c + 1;
      iVar9 = iVar9 + 4;
    } while (iVar9 < 0x44);
    if (!bVar2) {
      FUN_00403640(local_5c," - none",7);
    }
    pvVar12 = (void *)FUN_005adb0f(0xb8);
    local_8._0_1_ = 0x16;
    uStack_c4 = 0x5088db;
    FUN_004024e0(&stack0xffffff44,local_5c);
    local_8._0_1_ = 0x17;
    uStack_dc = 0x5088f0;
    FUN_004024e0(auStack_d4,local_74);
    local_8._0_1_ = 0x18;
    uStack_f4 = 0x508908;
    FUN_004024e0(auStack_ec,local_74);
    local_8._0_1_ = 0x19;
    pcVar18 = (char *)(param_3 + 4);
    if (0xf < *(uint *)(param_3 + 0x18)) {
      pcVar18 = *(char **)pcVar18;
    }
    uStack_f4 = 0;
    auStack_104[0] = 0;
    pcVar14 = pcVar18;
    do {
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    FUN_00402690(auStack_104,pcVar18,(int)pcVar14 - (int)(pcVar18 + 1));
    local_8._0_1_ = 0x1a;
    pvVar5 = (void *)(in_stack_fffffee4 & 0xffffff00);
    FUN_00402690(&stack0xfffffee4,"LOCALHOST",9);
    local_8._0_1_ = 0x16;
    pvVar12 = FUN_00439500(pvVar12,pvVar5);
    local_8._0_1_ = 3;
    if (DAT_0065c270 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)FUN_005adb0f(0x2c);
      DAT_0065c270 = puVar13;
      *puVar13 = 0;
      *(undefined4 *)(puVar13 + 4) = 0;
      *(undefined4 *)(puVar13 + 8) = 0;
      *(undefined4 *)(puVar13 + 0xc) = 0;
      *(undefined4 *)(puVar13 + 0x10) = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0;
      *(undefined4 *)(puVar13 + 0x18) = 0;
      *(undefined4 *)(puVar13 + 0x1c) = 0;
      *(undefined4 *)(puVar13 + 0x20) = 0;
      *(undefined4 *)(puVar13 + 0x24) = 0;
      *(undefined4 *)(puVar13 + 0x28) = 0;
    }
    FUN_00439d40(param_2,(int)pvVar12);
    FUN_00527550(*(int **)((int)param_1 + 0x224),2,"Hack report in inbox");
  }
  else {
    iVar9 = *(int *)(iVar9 + 0x1c);
    if (iVar9 < 0) {
      puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"Cargo: %s\n");
      local_8._0_1_ = 0xf;
LAB_0050823a:
      FUN_00403490(local_5c,puVar8);
      local_8._0_1_ = 3;
      if (0xf < local_18) {
        pvVar5 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar5 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) goto LAB_0050826d;
        FUN_005adb3f(pvVar5);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_18 = 0xf;
      local_1c = 0;
      iVar9 = *(int *)(*(int *)((int)pvVar12 + 0x44) + 0x38);
      iVar1 = *(int *)(iVar9 + 0x20);
      if (iVar1 < 0) {
        if (*(int *)(iVar9 + 0x1c) == -2) {
          uVar17 = 0x12;
          pcVar18 = "Cargo: passengers\n";
          goto LAB_00508376;
        }
      }
      else {
        piVar7 = FUN_004a84a0(iVar1);
        if (piVar7 == (int *)0x0) goto LAB_005082d3;
        puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"Cargo: %s\n");
        local_8._0_1_ = 0x10;
        FUN_00403490(local_5c,puVar8);
        local_8._0_1_ = 3;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 3;
        if (0xf < local_30) {
          pvVar5 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar5 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) goto LAB_0050826d;
          FUN_005adb3f(pvVar5);
        }
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      }
      goto LAB_0050837e;
    }
    piVar7 = FUN_004a84a0(iVar9);
    if (piVar7 != (int *)0x0) {
      puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"Cargo: %s\n");
      local_8._0_1_ = 0xe;
      goto LAB_0050823a;
    }
LAB_005082d3:
    FUN_00591070("ERROR","ERROR: Invalid cargo set for this ship\'s behaviour logic.");
  }
  if (0xf < local_48) {
    pvVar12 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar12 = *(void **)((int)local_5c[0] + -4), uVar3 = (undefined1)local_8,
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar12)))) goto LAB_0050826d;
    FUN_005adb3f(pvVar12);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar12 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar12 = *(void **)((int)local_74[0] + -4), uVar3 = (undefined1)local_8,
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar12)))) {
LAB_0050826d:
      local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
LAB_00508aae:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
