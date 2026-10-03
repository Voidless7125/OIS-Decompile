#include "../ois_server.exe.h"


void __fastcall FUN_0051c1b0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 6;
    do {
      if (0xf < *puVar4) {
        pvVar2 = (void *)puVar4[-5];
        pvVar3 = pvVar2;
        if ((0xfff < *puVar4 + 1) &&
           (pvVar3 = *(void **)((int)pvVar2 - 4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      puVar4[-1] = 0;
      *puVar4 = 0xf;
      *(undefined1 *)(puVar4 + -5) = 0;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 7;
    } while (puVar1 != param_2);
  }
  return;
}


uint * __fastcall FUN_0051c220(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = param_3;
  if (param_1 != param_2) {
    puVar5 = param_1 + 6;
    puVar7 = param_3 + 1;
    do {
      *puVar6 = puVar5[-6];
      puVar7[4] = 0;
      puVar1 = puVar5 + 1;
      *(undefined4 *)((int)param_3 + (-0x1c - (int)param_1) + (int)(puVar5 + 7)) = 0;
      puVar6 = puVar6 + 7;
      uVar2 = puVar5[-4];
      uVar3 = puVar5[-3];
      uVar4 = puVar5[-2];
      *puVar7 = puVar5[-5];
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar5 + -1);
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      puVar5 = puVar5 + 7;
      puVar7 = puVar7 + 7;
    } while (puVar1 != param_2);
  }
  FUN_0051c1b0(puVar6,puVar6);
  return puVar6;
}


undefined4 * __thiscall FUN_0051c2a0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_stack_ffffffa4;
  undefined4 *puVar4;
  undefined1 auStack_44 [16];
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2507;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  iVar3 = 2;
  do {
    uVar1 = rand();
    uVar1 = uVar1 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    iVar2 = iVar2 + 1 + uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_00655080 = DAT_00655080 + iVar2;
  FUN_00591e00(auStack_44,&DAT_0061cb28);
  puVar4 = (undefined4 *)(in_stack_ffffffa4 & 0xffffff00);
  local_8 = iVar3;
  FUN_00402690(&stack0xffffffa4,&PTR_005ce008,0);
  local_8 = 0xffffffff;
  FUN_005099e0(this,param_2,*(int *)(param_2 + 0x1b4),puVar4);
  *(undefined ***)this = Weapon::vftable;
  *(int *)((int)this + 0x388) = param_2;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x390) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0x394) = 0xc61c3c00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  *(int *)((int)this + 0x39c) = param_1;
  uStack_34 = 0x51c391;
  FUN_004024e0((void *)((int)this + 0x3a0),(undefined4 *)(param_1 + 0x238));
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined1 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0xbf800000;
  *(undefined2 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined1 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0x19;
  *(undefined1 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined1 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0xf;
  *(undefined1 *)((int)this + 0x400) = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0xbf800000;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined1 *)(*(int *)((int)this + 0x40) + 0x34) = 0;
  *(undefined1 *)((int)this + 0x235) = 0;
  FUN_0051d9d0((int)this);
  ExceptionList = local_10;
  return this;
}


void __thiscall FUN_0051c460(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined *puVar5;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1031;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  iVar1 = *(int *)((int)this + 0x3b8);
  if (iVar1 == 0) {
    FUN_00403640(param_1,"`8nil",5);
  }
  else {
    if (iVar1 < 0x51) {
      if (iVar1 < 0x1f) {
        puVar5 = &DAT_0061663c;
      }
      else {
        puVar5 = &DAT_005e6754;
      }
    }
    else {
      puVar5 = &DAT_005e746c;
    }
    FUN_00403640(param_1,puVar5,2);
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_0061cb0c);
    local_8 = 1;
    puVar3 = puVar2;
    if (0xf < (uint)puVar2[5]) {
      puVar3 = (undefined4 *)*puVar2;
    }
    FUN_00403640(param_1,puVar3,puVar2[4]);
    if (0xf < local_18) {
      pvVar4 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar4 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar4);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __thiscall FUN_0051c590(void *this,int param_1)

{
  uint uVar1;
  
  if (((((param_1 == 0) || (uVar1 = *(uint *)((int)this + 0x254), *(int *)(uVar1 + 0x158) != 4)) ||
       (*(int *)((int)this + 0x39c) != param_1)) &&
      ((uVar1 = *(uint *)(*(int *)((int)this + 0x254) + 0x158), uVar1 != 1 && (uVar1 != 2)))) &&
     ((uVar1 != 3 && ((uVar1 != 4 || (*(int *)((int)this + 0x39c) != param_1)))))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


int __thiscall FUN_0051c5f0(void *this,int param_1)

{
  if (*(char *)((int)this + 0x3bc) != '\0') {
    return 100;
  }
  if (*(float *)((int)this + 0x3c0) == -1.0) {
    return 0;
  }
  return (int)(100.0 - (*(float *)((int)this + 0x3c0) / (float)param_1) * 100.0);
}


int __thiscall FUN_0051c650(void *this,int param_1)

{
  if (*(char *)((int)this + 0x3bc) == '\0') {
    if (*(float *)((int)this + 0x3c0) == -1.0) {
      return 0;
    }
    return (int)(100.0 - (*(float *)((int)this + 0x3c0) / (float)param_1) * 100.0);
  }
  if (*(char *)((int)this + 0x3c4) == '\0') {
    return 100;
  }
  return *(int *)((int)this + 0x420);
}


char __fastcall FUN_0051c6c0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x3bc);
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1) {
    if ((cVar1 == '\0') && (*(float *)(param_1 + 0x3c0) == -1.0)) {
      return '\0';
    }
    cVar1 = '\x01';
  }
  return cVar1;
}


undefined1 __fastcall FUN_0051c700(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3cc);
}


uint __thiscall FUN_0051c710(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 5) && (*(char *)(*(uint *)((int)this + 0x388) + 0x1a4) != '\0')) {
    return *(uint *)((int)this + 0x388) & 0xffffff00;
  }
  uVar1 = (**(code **)(*(int *)this + 0x10))();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


void __fastcall FUN_0051c740(int param_1)

{
  FUN_00591070("DETAIL","%s: I am destroyed.");
  if ((*(char *)(param_1 + 0x3cc) == '\0') && (*(char *)(param_1 + 0x3c5) != '\0')) {
    FUN_0051d470(param_1);
  }
  *(undefined1 *)(param_1 + 0x3cc) = 1;
  return;
}


void __thiscall FUN_0051c790(void *this,float param_1)

{
  void **ppvVar1;
  void *pvVar2;
  Vec2 *pVVar3;
  undefined4 *this_00;
  int iVar4;
  void **ppvVar5;
  int *piVar6;
  int *piVar7;
  char ****ppppcVar8;
  int iVar9;
  char *****pppppcVar10;
  undefined4 *puVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  char *in_stack_ffffff48;
  byte *in_stack_ffffff4c;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  void *local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 *local_68;
  float local_64;
  float local_60;
  int local_5c;
  float local_58;
  char ****local_54;
  float local_50;
  float local_4c;
  undefined4 *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ****local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2658;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar12 = 0.0;
  local_54 = (char ****)0x0;
  local_50 = 0.0;
  iVar9 = *(int *)(*(int *)((int)this + 0x388) + 0x1b4);
  if ((iVar9 == 3) || (iVar9 == 5)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
  }
  if ((bVar15) &&
     (iVar9 = *(int *)(*(int *)((int)this + 0x40) + 4), *(char *)(iVar9 + 0x62) == '\0')) {
    *(undefined1 *)(iVar9 + 0x62) = 1;
  }
  local_5c = 0;
  local_7c = this;
  if (*(int *)((int)this + 0x38c) == 0) {
    puVar11 = (undefined4 *)0x0;
    iVar9 = *(int *)((int)this + 0x214);
    uVar13 = 0;
    local_68 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0x218) - iVar9 >> 2 != 0) {
      do {
        iVar9 = *(int *)(iVar9 + uVar13 * 4);
        if (((*(int *)(iVar9 + 0xe0) == 0) && (iVar14 = *(int *)(iVar9 + 0x130), iVar14 != 0)) &&
           (iVar9 != 0)) {
          if (puVar11 == (undefined4 *)0x0) {
LAB_0051c98d:
            bVar15 = true;
          }
          else {
            local_84 = (float)*(double *)((int)this + 0x28);
            local_80 = (float)*(double *)((int)this + 0x30);
            local_8c = (float)*(double *)(puVar11 + 10);
            local_88 = (float)*(double *)(puVar11 + 0xc);
            local_64 = (float)*(double *)(iVar14 + 0x28);
            local_60 = (float)*(double *)(iVar14 + 0x30);
            local_8 = 3;
            fVar12 = 2.10195e-44;
            local_54 = (char ****)0xf;
            local_74 = local_84;
            local_70 = local_80;
            local_78 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_8c,(Vec2 *)&local_84);
            local_48 = (undefined4 *)(local_78 * 0.5);
            local_58 = (float)(0x5f3759df - ((uint)local_78 >> 1));
            local_54 = (char ****)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_64,(Vec2 *)&local_74);
            local_50 = (float)(0x5f3759df - ((uint)local_54 >> 1));
            if ((1.5 - (float)local_54 * 0.5 * local_50 * local_50) * local_50 * (float)local_54 <
                (1.5 - (float)local_48 * local_58 * local_58) * local_58 * local_78)
            goto LAB_0051c98d;
            bVar15 = false;
          }
          if (((uint)fVar12 & 8) != 0) {
            fVar12 = (float)((uint)fVar12 & 0xfffffff7);
          }
          if (((uint)fVar12 & 4) != 0) {
            fVar12 = (float)((uint)fVar12 & 0xfffffffb);
          }
          if (((uint)fVar12 & 2) != 0) {
            fVar12 = (float)((uint)fVar12 & 0xfffffffd);
          }
          if (((uint)fVar12 & 1) != 0) {
            fVar12 = (float)((uint)fVar12 & 0xfffffffe);
          }
          puVar11 = local_68;
          if (bVar15) {
            local_68 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x214) + uVar13 * 4) + 0x130);
            puVar11 = local_68;
          }
        }
        local_8 = 0xffffffff;
        uVar13 = uVar13 + 1;
        iVar9 = *(int *)((int)this + 0x214);
      } while (uVar13 < (uint)(*(int *)((int)this + 0x218) - iVar9 >> 2));
      local_50 = fVar12;
      if (puVar11 != (undefined4 *)0x0) {
        FUN_00591070(&DAT_0060dfc4,"%s: detected a target: %s");
        FUN_0051e300(this,(int)(puVar11 + 2));
      }
    }
  }
  else {
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    FUN_00402690(local_44,"invalid",7);
    local_8 = 4;
    iVar9 = *(int *)((int)this + 0x38c);
    if (*(int *)(iVar9 + 0x30) == 1) {
      ppvVar1 = (void **)(iVar9 + 0x230);
      if (iVar9 == 0) {
        ppvVar1 = (void **)&DAT_00000238;
      }
      if (local_44 != ppvVar1) {
        ppvVar5 = ppvVar1;
        if ((void *)0xf < ppvVar1[5]) {
          ppvVar5 = *ppvVar1;
        }
        FUN_00402690(local_44,ppvVar5,(uint)ppvVar1[4]);
      }
    }
    FUN_004024e0(&stack0xffffff4c,local_44);
    in_stack_ffffff48 = (char *)(float)*(double *)((int)this + 0x30);
    local_5c = FUN_0040ed50(*(int *)((int)this + 0x20),(float)*(double *)((int)this + 0x28),
                            in_stack_ffffff48,in_stack_ffffff4c);
    if (local_5c == 0) {
LAB_0051cb7f:
      bVar15 = false;
    }
    else {
      local_64 = (float)*(double *)((int)this + 0x28);
      local_60 = (float)*(double *)((int)this + 0x30);
      local_74 = (float)*(double *)(local_5c + 0x28);
      local_70 = (float)*(double *)(local_5c + 0x30);
      local_8 = 6;
      fVar12 = 6.72623e-44;
      local_50 = 6.72623e-44;
      local_54 = (char ****)&DAT_00000030;
      local_48 = (undefined4 *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_74,(Vec2 *)&local_64);
      local_58 = (float)(0x5f3759df - ((uint)local_48 >> 1));
      if (*(float *)(local_5c + 100) <
          (1.5 - (float)local_48 * 0.5 * local_58 * local_58) * local_58 * (float)local_48)
      goto LAB_0051cb7f;
      bVar15 = true;
    }
    if (((uint)fVar12 & 0x20) != 0) {
      fVar12 = (float)((uint)fVar12 & 0xffffffdf);
      local_50 = fVar12;
    }
    local_8 = 4;
    if (((uint)fVar12 & 0x10) != 0) {
      fVar12 = (float)((uint)fVar12 & 0xffffffef);
      local_50 = fVar12;
    }
    if (bVar15) {
      fVar16 = (float)*(double *)(local_5c + 0x30);
      uVar18 = 0;
      FUN_0050b390(this,(float)*(double *)(local_5c + 0x28));
      dVar20 = (double)CONCAT44(uVar18,fVar16) - (double)*(float *)((int)this + 0x120);
      if (dVar20 < 0.0) {
        dVar20 = dVar20 + 360.0;
      }
      fVar16 = *(float *)(*(int *)(*(int *)(*(int *)((int)this + 0x40) + 4) + 8) + 0x104) * 0.5;
      if ((fVar16 < (float)(int)dVar20) && ((float)(int)dVar20 < 360.0 - fVar16)) goto LAB_0051cdfc;
      piVar7 = *(int **)((int)this + 1000);
      piVar6 = *(int **)((int)this + 0x3e4);
      if (piVar6 == piVar7) {
LAB_0051cc93:
        piVar7 = *(int **)((int)this + 0x3f4);
        piVar6 = *(int **)((int)this + 0x3f0);
        if (piVar6 != piVar7) {
          do {
            if (*piVar6 == *(int *)(local_5c + 0x44)) break;
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar7);
          if (piVar6 != piVar7) goto LAB_0051cdfc;
        }
        iVar9 = rand();
        local_48 = (undefined4 *)(iVar9 % 100 + 1);
        FUN_00591070(&DAT_0060dfc4,"%s: CM percentile check: %d vs %d");
        if (*(int *)(local_5c + 0xf0) < (int)local_48) {
          local_68 = (undefined4 *)(local_5c + 0x44);
          in_stack_ffffff48 = "%s: CM #%d at %f, %f has failed. Ignoring it.";
          FUN_00591070(&DAT_0060dfc4,"%s: CM #%d at %f, %f has failed. Ignoring it.");
          puVar11 = *(undefined4 **)((int)this + 0x3f4);
          if (*(undefined4 **)((int)this + 0x3f8) == puVar11) {
            FUN_004141e0((void *)((int)this + 0x3f0),puVar11,local_68);
          }
          else {
            *puVar11 = *local_68;
            *(int *)((int)this + 0x3f4) = *(int *)((int)this + 0x3f4) + 4;
          }
          goto LAB_0051cdfc;
        }
        local_48 = (undefined4 *)(local_5c + 0x44);
        in_stack_ffffff48 = "%s: CM #%d at %f, %f has succeeded. Aiming for it instead.";
        FUN_00591070(&DAT_0060dfc4,"%s: CM #%d at %f, %f has succeeded. Aiming for it instead.");
        local_6c = (float)*(double *)(local_5c + 0x28);
        local_68 = (undefined4 *)(float)*(double *)(local_5c + 0x30);
        *(float *)((int)this + 300) = local_6c;
        *(undefined4 **)((int)this + 0x130) = local_68;
        puVar11 = *(undefined4 **)((int)this + 1000);
        if (*(undefined4 **)((int)this + 0x3ec) == puVar11) {
          FUN_004141e0((void *)((int)this + 0x3e4),puVar11,local_48);
          dVar20 = *(double *)(local_5c + 0x28);
          uVar18 = (undefined4)*(undefined8 *)(local_5c + 0x30);
          uVar19 = (undefined4)((ulonglong)*(undefined8 *)(local_5c + 0x30) >> 0x20);
        }
        else {
          *puVar11 = *(undefined4 *)(local_5c + 0x44);
          *(int *)((int)this + 1000) = *(int *)((int)this + 1000) + 4;
          dVar20 = *(double *)(local_5c + 0x28);
          uVar18 = (undefined4)*(undefined8 *)(local_5c + 0x30);
          uVar19 = (undefined4)((ulonglong)*(undefined8 *)(local_5c + 0x30) >> 0x20);
        }
      }
      else {
        do {
          if (*piVar6 == *(int *)(local_5c + 0x44)) break;
          piVar6 = piVar6 + 1;
        } while (piVar6 != piVar7);
        fVar12 = local_50;
        this = local_7c;
        if (piVar6 == piVar7) goto LAB_0051cc93;
        dVar20 = *(double *)(local_5c + 0x30);
        *(float *)((int)local_7c + 300) = (float)*(double *)(local_5c + 0x28);
        *(float *)((int)local_7c + 0x130) = (float)dVar20;
        dVar20 = *(double *)(local_5c + 0x28);
        uVar18 = (undefined4)*(undefined8 *)(local_5c + 0x30);
        uVar19 = (undefined4)((ulonglong)*(undefined8 *)(local_5c + 0x30) >> 0x20);
      }
LAB_0051d000:
      local_4c = (float)dVar20;
      local_48 = (undefined4 *)(float)(double)CONCAT44(uVar19,uVar18);
      *(float *)((int)this + 300) = local_4c;
      *(undefined4 **)((int)this + 0x130) = local_48;
    }
    else {
LAB_0051cdfc:
      iVar9 = *(int *)((int)this + 0x38c);
      if (*(int *)(iVar9 + 0x30) != 1) {
        dVar20 = *(double *)(iVar9 + 0x20);
        uVar18 = (undefined4)*(undefined8 *)(iVar9 + 0x28);
        uVar19 = (undefined4)((ulonglong)*(undefined8 *)(iVar9 + 0x28) >> 0x20);
        goto LAB_0051d000;
      }
      uVar13 = FUN_0050c850(this,-(uint)(iVar9 != 0) & iVar9 - 8U);
      if ((char)uVar13 == '\0') {
        if (*(char *)((int)this + 0x3dc) != '\0') {
          FUN_00591070(&DAT_0060dfc4,"%s: Lost contact with my target, %s");
          *(undefined1 *)((int)this + 0x3dc) = 0;
        }
      }
      else {
        iVar9 = *(int *)((int)this + 0x38c);
        if (*(char *)((int)this + 0x3dc) == '\0') {
          FUN_00591070(&DAT_0060dfc4,"%s: regained contact with my target, %s");
          iVar9 = *(int *)((int)this + 0x38c);
          *(undefined1 *)((int)this + 0x3dc) = 1;
        }
        puVar11 = (undefined4 *)(iVar9 + 0xf8);
        if (iVar9 == 0) {
          puVar11 = (undefined4 *)&DAT_00000100;
        }
        *puVar11 = 0;
        piVar7 = (int *)(*(int *)((int)this + 0x38c) + 0x248);
        if (*(int *)((int)this + 0x38c) == 0) {
          piVar7 = (int *)&DAT_00000250;
        }
        pvVar2 = (void *)FUN_0050c720(this,*piVar7);
        pVVar3 = FUN_00508ff0(pvVar2,(Vec2 *)&local_64);
        fVar16 = *(float *)((int)this + 0x3e0) - param_1;
        *(undefined4 *)((int)this + 300) = *(undefined4 *)pVVar3;
        *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(pVVar3 + 4);
        *(float *)((int)this + 0x3e0) = fVar16;
        if (fVar16 <= 0.0) {
          local_64 = (float)*(double *)((int)this + 0x28);
          fVar17 = (float)*(double *)((int)this + 0x30);
          local_8._0_1_ = 7;
          local_60 = fVar17;
          FUN_00591010((Vec2 *)((int)this + 300),(Vec2 *)&local_64);
          local_8 = CONCAT31(local_8._1_3_,4);
          fVar16 = 60.0;
          if (fVar17 <= 60.0) {
            fVar16 = fVar17;
          }
          iVar9 = *(int *)((int)this + 0x38c);
          *(float *)((int)this + 0x3e0) = (fVar16 / 60.0) * 4.0 + 0.6;
          if (*(int *)(iVar9 + 0x30) == 1) {
            if (15.0 <= fVar16) {
              iVar14 = (fVar16 < 30.0) + 1;
            }
            else {
              iVar14 = 3;
            }
            iVar4 = 0x23;
            uVar13 = -(uint)(iVar9 != 0) & iVar9 - 8U;
            pvVar2 = (void *)FUN_00402f60();
            FUN_00557fb0(pvVar2,uVar13,iVar4,iVar14);
            FUN_00591070("DETAIL","%s: PINGING! Ping timer = %f");
          }
        }
      }
    }
    local_8 = 0xffffffff;
    if (0xf < local_30) {
      pvVar2 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar2 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
  }
  local_58 = 0.1;
  iVar9 = *(int *)(*(int *)((int)this + 0x388) + 0x194);
  fVar16 = 0.1;
  if ((iVar9 != 0) && (fVar16 = local_58, iVar9 == 1)) {
    fVar16 = 0.6;
  }
  local_58 = fVar16;
  FUN_0051e1a0(this,*(float *)((int)this + 300));
  local_48 = (undefined4 *)FUN_004a6be0(*(int *)((int)this + 0x20),(int)this,'\0');
  if (local_48 != (undefined4 *)0x0) {
    FUN_00591070(&DAT_0060dfc4,"%s: Triggering explosive due to proximity to %s");
    puVar11 = local_48;
    if (*(char *)(local_48 + 0x8d) != '\0') {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ****)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"hit_by_torp",0xb);
      local_8 = 8;
      if (DAT_0065c294 == 0) {
        local_48 = (undefined4 *)FUN_005adb0f(0x28);
        local_8 = CONCAT31(local_8._1_3_,9);
        DAT_0065c294 = FUN_0051e500(local_48);
      }
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        ppppcVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppcVar8 = (char ****)local_2c[0][-1],
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppcVar8)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppcVar8);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (char ****)((uint)local_2c[0] & 0xffffff00);
      FUN_00402690(local_2c,"torpedo_hit_player",0x12);
      local_48 = (undefined4 *)&stack0xffffff48;
      local_8 = 0xb;
      FUN_004024e0(&stack0xffffff48,local_2c);
      local_8._0_1_ = 0xc;
      this_00 = FUN_00412df0();
      local_8 = CONCAT31(local_8._1_3_,0xb);
      FUN_004a0ee0(this_00,(byte *)in_stack_ffffff48);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pppppcVar10 = (char *****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pppppcVar10 = (char *****)local_2c[0][-1],
           (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppcVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppcVar10);
      }
    }
    iVar9 = puVar11[0x95];
    bVar15 = false;
    if (iVar9 != 0) {
      bVar15 = *(int *)(iVar9 + 0x158) == 0;
    }
    if (bVar15) {
LAB_0051d279:
      FUN_00591e00((undefined1 *)local_2c,"torpedo_hit_%s");
      local_8 = 0xd;
      local_54 = (char ****)local_2c;
      if (0xf < local_18) {
        local_54 = local_2c[0];
      }
      pppppcVar10 = local_2c;
      if (0xf < local_18) {
        pppppcVar10 = (char *****)local_2c[0];
      }
      iVar9 = ((int)local_54 + local_1c) - (int)pppppcVar10;
      if ((char *****)((int)local_54 + local_1c) < pppppcVar10) {
        iVar9 = 0;
      }
      if (iVar9 != 0) {
        local_54 = (char ****)((int)local_54 - (int)pppppcVar10);
        iVar14 = 0;
        do {
          iVar4 = tolower((int)*(char *)pppppcVar10);
          iVar14 = iVar14 + 1;
          *(char *)((int)pppppcVar10 + (int)local_54) = (char)iVar4;
          fVar12 = local_50;
          pppppcVar10 = (char *****)((int)pppppcVar10 + 1);
          this = local_7c;
        } while (iVar14 != iVar9);
      }
      local_48 = (undefined4 *)&stack0xffffff48;
      FUN_004024e0(&stack0xffffff48,local_2c);
      local_8._0_1_ = 0xe;
      puVar11 = FUN_00412df0();
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_004a0ee0(puVar11,(byte *)in_stack_ffffff48);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pppppcVar10 = (char *****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pppppcVar10 = (char *****)local_2c[0][-1],
           (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)pppppcVar10)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pppppcVar10);
      }
    }
    else {
      bVar15 = false;
      if (iVar9 != 0) {
        bVar15 = *(int *)(iVar9 + 0x158) == 1;
      }
      if (bVar15) goto LAB_0051d279;
    }
    FUN_0051d470((int)this);
  }
  if (local_5c != 0) {
    local_64 = (float)*(double *)((int)this + 0x28);
    local_60 = (float)*(double *)((int)this + 0x30);
    local_74 = (float)*(double *)(local_5c + 0x28);
    local_70 = (float)*(double *)(local_5c + 0x30);
    local_8 = 0x10;
    local_54 = (char ****)((uint)fVar12 | 0xc0);
    local_48 = (undefined4 *)cocos2d::Vec2::getDistanceSq((Vec2 *)&local_74,(Vec2 *)&local_64);
    local_54 = (char ****)(0x5f3759df - ((uint)local_48 >> 1));
    if ((1.5 - (float)local_48 * 0.5 * (float)local_54 * (float)local_54) * (float)local_54 *
        (float)local_48 <= local_58) {
      bVar15 = true;
      goto LAB_0051d418;
    }
  }
  bVar15 = false;
LAB_0051d418:
  local_8 = 0xffffffff;
  if (bVar15) {
    FUN_00591070(&DAT_0060dfc4,"%s: Triggering explosive due to proximity to CM %d");
    FUN_0051d470((int)this);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0051d470(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x3cc) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x3cc) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0x388) + 0x1b4);
  if ((iVar1 == 3) || (iVar1 == 5)) {
    if ((*(int *)(DAT_0065b5cc + 0xd0) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xd4) == 3)) {
      return;
    }
    FUN_00591070(&DAT_0060dfc4,"%s: Triggering my warhead.");
    FUN_0040f270(*(int *)(*(int *)(param_1 + 0x388) + 0x194),*(int *)(param_1 + 0x24),param_1,
                 *(undefined4 *)(param_1 + 0x39c),(float)*(double *)(param_1 + 0x28),
                 (float)*(double *)(param_1 + 0x30));
    if (*(char *)(param_1 + 0x3fc) == '\0') {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x39c);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x420) != 0) {
      return;
    }
    pcVar2 = "Battery dead on weapon #%d, contact lost.";
  }
  else {
    if (*(char *)(param_1 + 0x3fc) == '\0') {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x39c);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x420) != 0) {
      iVar1 = FUN_0051f5e0(*(int *)(param_1 + 0x24));
      if (iVar1 == 0) {
        FUN_00591070("WARNING","Probe was supposed to enter orbit around object, but didn\'t.");
        FUN_00527550(*(int **)(*(int *)(param_1 + 0x39c) + 0x224),2,
                     "Probe from tube %d in scanning position.");
        return;
      }
      FUN_00527550(*(int **)(*(int *)(param_1 + 0x39c) + 0x224),2,
                   "Probe from tube %d in scanning orbit of %s");
      return;
    }
    pcVar2 = "Battery dead on probe #%d, contact lost.";
  }
  FUN_00527550(*(int **)(iVar1 + 0x224),2,pcVar2);
  return;
}


void __fastcall FUN_0051d640(int param_1)

{
  if (*(char *)(param_1 + 0x3c5) == '\0') {
    if ((*(char *)(param_1 + 0x3c4) != '\0') || (*(char *)(param_1 + 0x3bc) != '\0')) {
      *(float *)(param_1 + 0xdc) = (float)*(int *)(*(int *)(param_1 + 0x254) + 200);
      return;
    }
    if (*(float *)(param_1 + 0x3c0) == -1.0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      return;
    }
  }
  *(float *)(param_1 + 0xdc) = (float)*(int *)(*(int *)(param_1 + 0x254) + 0xc0);
  return;
}


void __thiscall FUN_0051d6b0(void *this,float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  uint in_stack_ffffffbc;
  byte *pbVar7;
  uint in_stack_ffffffc0;
  float local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2691;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0xd4) = 1;
  if (((*(float *)((int)this + 0x3c0) != -1.0) && (*(char *)((int)this + 0x3c4) == '\0')) &&
     (fVar6 = *(float *)((int)this + 0x3c0) - param_1, *(float *)((int)this + 0x3c0) = fVar6,
     iVar4 = DAT_0065b5cc, fVar6 <= 0.0)) {
    *(undefined4 *)((int)this + 0x3c0) = 0;
    *(undefined1 *)((int)this + 0x3bc) = 1;
    if (((*(int *)(iVar4 + 0xcc) != 0) && (*(int *)(*(int *)(iVar4 + 0xcc) + 0x70) == 1)) &&
       (*(char *)(*(int *)(*(int *)((int)this + 0x40) + 0x48) + 0x234) != '\0')) {
      local_14 = &stack0xffffffbc;
      pbVar7 = (byte *)(in_stack_ffffffbc & 0xffffff00);
      FUN_00402690(&stack0xffffffbc,"spun_up_torpedo",0xf);
      local_8 = 0;
      puVar2 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar2,pbVar7);
    }
  }
  FUN_0051d640((int)this);
  if ((*(float *)((int)this + 300) == -9999.0) && (*(float *)((int)this + 0x130) == -9999.0)) {
    *(undefined4 *)((int)this + 0x41c) = 0xbf800000;
  }
  else {
    local_18 = (float)*(double *)((int)this + 0x28);
    local_14 = (undefined1 *)(float)*(double *)((int)this + 0x30);
    local_8 = 1;
    fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)((int)this + 300),(Vec2 *)&local_18);
    local_14 = (undefined1 *)(0x5f3759df - ((uint)fVar6 >> 1));
    local_8 = 0xffffffff;
    *(float *)((int)this + 0x41c) =
         (1.5 - fVar6 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar6;
  }
  FUN_0051d9d0((int)this);
  iVar4 = *(int *)((int)this + 0x38c);
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 0x30) == 1) {
      uVar3 = FUN_0050c850(this,iVar4 + -8);
      if (((char)uVar3 != '\0') || (*(int *)(iVar4 + 0x30) == 1)) goto LAB_0051d8bd;
    }
    local_18 = (float)*(double *)(iVar4 + 0x20);
    local_14 = (undefined1 *)(float)*(double *)(iVar4 + 0x28);
    *(float *)((int)this + 300) = local_18;
    *(undefined1 **)((int)this + 0x130) = local_14;
  }
LAB_0051d8bd:
  iVar4 = *(int *)((int)this + 0x3d0);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_0051dc90(this);
    }
    else if (iVar4 == 2) {
      (**(code **)(*(int *)this + 0x2c))();
    }
    else if (iVar4 == 3) {
      (**(code **)(*(int *)this + 0x28))();
    }
  }
  FUN_00513650(this,param_1);
  iVar4 = *(int *)((int)this + 0x40);
  iVar1 = *(int *)(*(int *)(iVar4 + 0x48) + 0x254);
  bVar5 = false;
  if (iVar1 != 0) {
    bVar5 = *(int *)(iVar1 + 0x158) == 1;
  }
  if (!bVar5) {
    bVar5 = false;
    if (iVar1 != 0) {
      bVar5 = *(int *)(iVar1 + 0x158) == 2;
    }
    if (!bVar5) {
      FUN_005228c0(iVar4);
      fVar6 = param_1;
      FUN_00522920(iVar4);
      iVar4 = (int)((param_1 / fVar6) * 100.0);
      goto LAB_0051d97a;
    }
  }
  iVar4 = 100;
LAB_0051d97a:
  *(int *)((int)this + 0x420) = iVar4;
  if ((iVar4 == 0) && (*(char *)((int)this + 0x3c4) != '\0')) {
    puVar2 = (undefined4 *)(in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"I\'m out of power. Destroying myself.",0x24);
    FUN_0050ae50(this,puVar2);
    (**(code **)(*(int *)this + 0x10))();
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0051d9d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *******pppppppuVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar9;
  undefined4 ******local_54 [5];
  uint local_40;
  undefined4 ******local_3c [4];
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005bcb68;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  if (*(int *)(param_1 + 0x38c) == 0) {
LAB_0051dbac:
    if ((*(float *)(param_1 + 300) == -9999.0) && (*(float *)(param_1 + 0x130) == -9999.0)) {
      puStack_20 = &stack0xfffffffc;
      FUN_00402690((void *)(param_1 + 0x400),"`8none",6);
      goto LAB_0051dc66;
    }
    piVar7 = (int *)FUN_00591e00((undefined1 *)local_54,"`2%.2f^%.2f");
    piVar8 = (int *)(param_1 + 0x400);
    if (piVar8 != piVar7) {
      FUN_00401b20(piVar8);
      iVar3 = piVar7[1];
      iVar1 = piVar7[2];
      iVar2 = piVar7[3];
      *piVar8 = *piVar7;
      *(int *)(param_1 + 0x404) = iVar3;
      *(int *)(param_1 + 0x408) = iVar1;
      *(int *)(param_1 + 0x40c) = iVar2;
      *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(piVar7 + 4);
      piVar7[4] = 0;
      piVar7[5] = 0xf;
      *(undefined1 *)piVar7 = 0;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x38c) + 0x30);
    if (iVar3 == 1) {
      local_2c = 0;
      local_28 = 0xf;
      local_3c[0] = (undefined4 ******)((uint)local_3c[0] & 0xffffff00);
      puStack_20 = &stack0xfffffffc;
      FUN_00402690(local_3c,&DAT_005e6758,2);
      local_14 = 0;
      local_54[0] = local_3c[0];
      local_40 = local_28;
      if ((*(void **)(param_1 + 0x39c) != (void *)0x0) && (*(char *)(param_1 + 0x3fc) != '\0')) {
        piVar7 = (int *)(*(int *)(param_1 + 0x38c) + 0x248);
        if (*(int *)(param_1 + 0x38c) == 0) {
          piVar7 = (int *)&DAT_00000250;
        }
        iVar3 = FUN_0050c720(*(void **)(param_1 + 0x39c),*piVar7);
        if (iVar3 == 0) {
LAB_0051daf3:
          FUN_00403640(local_3c,&DAT_005eb3f0,4);
        }
        else {
          pbVar6 = (byte *)(iVar3 + 0x48);
          pbVar9 = pbVar6;
          if (0xf < *(uint *)(iVar3 + 0x5c)) {
            pbVar9 = *(byte **)pbVar6;
          }
          uVar4 = FUN_004031f0(pbVar9,*(uint *)(iVar3 + 0x58),(byte *)&PTR_005ce008,0);
          if ((char)uVar4 == '\0') {
            FUN_00403490(local_3c,(undefined4 *)pbVar6);
          }
          else {
            pbVar9 = (byte *)(iVar3 + 0x60);
            pbVar6 = pbVar9;
            if (0xf < *(uint *)(iVar3 + 0x74)) {
              pbVar6 = *(byte **)pbVar9;
            }
            uVar4 = FUN_004031f0(pbVar6,*(uint *)(iVar3 + 0x70),(byte *)&PTR_005ce008,0);
            if ((char)uVar4 != '\0') goto LAB_0051daf3;
            FUN_00403490(local_3c,(undefined4 *)pbVar9);
          }
        }
        local_54[0] = local_3c[0];
        local_40 = local_28;
        if ((undefined4 *******)(param_1 + 0x400) != local_3c) {
          pppppppuVar5 = local_3c;
          if (0xf < local_28) {
            pppppppuVar5 = (undefined4 *******)local_3c[0];
          }
          FUN_00402690((undefined4 *******)(param_1 + 0x400),pppppppuVar5,local_2c);
          local_54[0] = local_3c[0];
          local_40 = local_28;
        }
      }
    }
    else {
      if (iVar3 != 0) goto LAB_0051dbac;
      puStack_20 = &stack0xfffffffc;
      piVar7 = (int *)FUN_00591e00((undefined1 *)local_3c,&DAT_0061ceb0);
      piVar8 = (int *)(param_1 + 0x400);
      local_54[0] = local_3c[0];
      local_40 = local_28;
      if (piVar8 != piVar7) {
        FUN_00401b20(piVar8);
        iVar3 = piVar7[1];
        iVar1 = piVar7[2];
        iVar2 = piVar7[3];
        *piVar8 = *piVar7;
        *(int *)(param_1 + 0x404) = iVar3;
        *(int *)(param_1 + 0x408) = iVar1;
        *(int *)(param_1 + 0x40c) = iVar2;
        *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(piVar7 + 4);
        piVar7[4] = 0;
        piVar7[5] = 0xf;
        *(undefined1 *)piVar7 = 0;
        local_54[0] = local_3c[0];
        local_40 = local_28;
      }
    }
  }
  if (0xf < local_40) {
    pppppppuVar5 = (undefined4 *******)local_54[0];
    if ((0xfff < local_40 + 1) &&
       (pppppppuVar5 = (undefined4 *******)local_54[0][-1],
       0x1f < (uint)((int)local_54[0] + (-4 - (int)pppppppuVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pppppppuVar5);
  }
LAB_0051dc66:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0051dc90(int *param_1)

{
  byte *pbVar1;
  Vec2 *pVVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  Vec2 *pVVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  char ****ppppcVar10;
  char ****ppppcVar11;
  bool bVar12;
  float fVar13;
  byte *in_stack_ffffff8c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 *local_34;
  float local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c271f;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0.0;
  pVVar2 = (Vec2 *)(param_1 + 0x4b);
  if (((*(float *)pVVar2 == -9999.0) && ((float)param_1[0x4c] == -9999.0)) && (param_1[0xe3] == 0))
  {
    if ((*(int *)(param_1[0xe2] + 0x1b4) == 3) || (*(int *)(param_1[0xe2] + 0x1b4) == 5)) {
      if (*(int *)(param_1[0x10] + 4) != 0) {
        *(undefined1 *)(*(int *)(param_1[0x10] + 4) + 0x62) = 0;
      }
      piVar3 = (int *)param_1[0x10];
    }
    else {
      piVar3 = (int *)param_1[0x10];
      if (*piVar3 != 0) {
        *(undefined1 *)(*piVar3 + 0x62) = 0;
        iVar8 = *(int *)(param_1[0x10] + 0x10);
        bVar12 = iVar8 == 0;
        goto LAB_0051e0df;
      }
    }
    iVar8 = piVar3[4];
    bVar12 = iVar8 == 0;
  }
  else {
    if ((((char)param_1[0xff] != '\0') && (pvVar5 = (void *)param_1[0xe7], pvVar5 != (void *)0x0))
       && ((iVar8 = param_1[0xe3], iVar8 != 0 && (*(int *)(iVar8 + 0x30) == 1)))) {
      local_30 = (float)(iVar8 + -8);
      uVar4 = FUN_0050c850(pvVar5,(int)local_30);
      if ((char)uVar4 != '\0') {
        pvVar5 = (void *)FUN_0050c720(pvVar5,*(int *)((int)local_30 + 0x250));
        pVVar6 = FUN_00508ff0(pvVar5,(Vec2 *)&local_40);
        *(undefined4 *)pVVar2 = *(undefined4 *)pVVar6;
        param_1[0x4c] = *(int *)(pVVar6 + 4);
      }
    }
    FUN_0051e1a0(param_1,*(float *)pVVar2);
    if ((*(int *)(param_1[0xe2] + 0x1b4) != 3) && (*(int *)(param_1[0xe2] + 0x1b4) != 5)) {
      local_38 = (float)*(double *)(param_1 + 10);
      local_34 = (undefined1 *)(float)*(double *)(param_1 + 0xc);
      local_8 = 3;
      fVar13 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,pVVar2);
      local_30 = (float)(0x5f3759df - ((uint)fVar13 >> 1));
      local_8 = 0xffffffff;
      if ((1.5 - fVar13 * 0.5 * local_30 * local_30) * local_30 * fVar13 <= 2.0) {
        fVar13 = (float)FUN_0051f5e0(param_1[9]);
        local_30 = fVar13;
        if (fVar13 == 0.0) {
          local_38 = -9999.0;
          local_34 = (undefined1 *)0xc61c3c00;
          *(undefined4 *)pVVar2 = 0xc61c3c00;
          param_1[0xf4] = 3;
          param_1[0x4c] = -0x39e3c400;
        }
        else {
          pbVar1 = (byte *)((int)fVar13 + 0x74);
          pbVar9 = pbVar1;
          if (0xf < *(uint *)((int)fVar13 + 0x88)) {
            pbVar9 = *(byte **)pbVar1;
          }
          uVar4 = FUN_004031f0(pbVar9,*(uint *)((int)fVar13 + 0x84),(byte *)&PTR_005ce008,0);
          if ((char)uVar4 == '\0') {
            local_34 = &stack0xffffff8c;
            FUN_004024e0(&stack0xffffff8c,(undefined4 *)pbVar1);
            local_8 = 4;
            puVar7 = FUN_00412df0();
            local_8 = 0xffffffff;
            FUN_004a0ee0(puVar7,in_stack_ffffff8c);
          }
          FUN_004024e0(local_2c,(undefined4 *)((int)fVar13 + 0x5c));
          local_8 = 5;
          ppppcVar11 = local_2c;
          if (0xf < local_18) {
            ppppcVar11 = (char ****)local_2c[0];
          }
          ppppcVar10 = local_2c;
          if (0xf < local_18) {
            ppppcVar10 = (char ****)local_2c[0];
          }
          FUN_00413ec0(&local_34,tolower_exref,(char *)ppppcVar10,
                       (char *)((int)ppppcVar11 + local_1c),(undefined1 *)ppppcVar11);
          local_34 = &stack0xffffff8c;
          FUN_00591e00(&stack0xffffff8c,"scanned_%s");
          local_8._0_1_ = 6;
          puVar7 = FUN_00412df0();
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_004a0ee0(puVar7,in_stack_ffffff8c);
          FUN_00591070("DETAIL","Scanned stellar object \'%s\' (%s) with a probe.");
          (**(code **)(*param_1 + 0x10))();
          if (0xf < local_18) {
            ppppcVar11 = (char ****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (ppppcVar11 = (char ****)local_2c[0][-1],
               (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar11)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppcVar11);
          }
        }
      }
      goto LAB_0051e0e5;
    }
    iVar8 = param_1[0xe7];
    if ((iVar8 == 0) || ((char)param_1[0xff] == '\0')) {
LAB_0051e0c1:
      bVar12 = true;
    }
    else {
      local_38 = (float)*(double *)(iVar8 + 0x28);
      local_34 = (undefined1 *)(float)*(double *)(iVar8 + 0x30);
      local_48 = (float)*(double *)(param_1 + 10);
      fVar13 = (float)*(double *)(param_1 + 0xc);
      local_8 = 1;
      local_30 = 8.40779e-45;
      local_44 = fVar13;
      FUN_00591010((Vec2 *)&local_48,(Vec2 *)&local_38);
      if (30.0 < fVar13) goto LAB_0051e0c1;
      local_40 = (float)*(double *)(param_1 + 10);
      fVar13 = (float)*(double *)(param_1 + 0xc);
      local_8 = 2;
      local_30 = 1.96182e-44;
      local_3c = fVar13;
      FUN_00591010((Vec2 *)&local_40,pVVar2);
      if (fVar13 < 20.0) goto LAB_0051e0c1;
      bVar12 = false;
    }
    local_8 = 0xffffffff;
    if (bVar12) {
      FUN_0051e290((int)param_1);
    }
    iVar8 = *(int *)(param_1[0x10] + 4);
    bVar12 = *(char *)(iVar8 + 0x62) == '\0';
  }
LAB_0051e0df:
  if (!bVar12) {
    *(undefined1 *)(iVar8 + 0x62) = 0;
  }
LAB_0051e0e5:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0051e110(int param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c0119;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  local_14 = cocos2d::Vec2::getDistance((Vec2 *)(param_1 + 0x118),(Vec2 *)&local_1c);
  local_8 = 0xffffffff;
  if (local_14 != 0.0) {
    FUN_00517120(param_1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0051e1a0(void *this,float param_1)

{
  float fVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  fVar1 = (float)*(double *)((int)this + 0x28);
  FUN_00592f80(fVar1,(float)*(double *)((int)this + 0x30),param_1);
  if (fVar1 != *(float *)((int)this + 0x128)) {
    FUN_005174e0((int)this);
  }
  if ((*(float *)((int)this + 0x120) - 5.0 <= fVar1) &&
     (fVar1 <= *(float *)((int)this + 0x120) + 5.0)) {
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x40) + 0x10) + 0x62) = 1;
    ExceptionList = local_10;
    return;
  }
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x40) + 0x10) + 0x62) = 0;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0051e290(int param_1)

{
  if (*(int *)(param_1 + 0x3d0) == 1) {
    FUN_00591070(&DAT_0060dfc4,"%s: Going active.");
    *(undefined4 *)(param_1 + 0x3d0) = 2;
    *(undefined1 *)(param_1 + 0x3c5) = 1;
    *(float *)(param_1 + 0x390) = (float)*(double *)(param_1 + 0x28);
    *(float *)(param_1 + 0x394) = (float)*(double *)(param_1 + 0x30);
  }
  return;
}


void __thiscall FUN_0051e300(void *this,int param_1)

{
  undefined4 *this_00;
  char ****ppppcVar1;
  char ****ppppcVar2;
  byte *pbVar3;
  undefined1 *local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c2790;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)((int)this + 0x3dc) = 1;
  *(int *)((int)this + 0x38c) = param_1;
  local_30 = (undefined1 *)(float)*(double *)(param_1 + 0x28);
  *(float *)((int)this + 300) = (float)*(double *)(param_1 + 0x20);
  *(undefined1 **)((int)this + 0x130) = local_30;
  FUN_00591070(&DAT_0060dfc4,"%s: Targeting %s");
  if ((((*(int *)((int)this + 0x39c) != 0) &&
       (*(char *)(*(int *)((int)this + 0x39c) + 0x234) != '\0')) &&
      (*(int *)((int)this + 0x38c) != 0)) && (*(int *)(*(int *)((int)this + 0x38c) + 0x30) == 1)) {
    FUN_00591e00((undefined1 *)local_2c,"has_fired_at_%s");
    local_8 = 0;
    ppppcVar2 = local_2c;
    if (0xf < local_18) {
      ppppcVar2 = (char ****)local_2c[0];
    }
    ppppcVar1 = local_2c;
    if (0xf < local_18) {
      ppppcVar1 = (char ****)local_2c[0];
    }
    pbVar3 = (byte *)0x51e420;
    FUN_00413ec0(&local_30,tolower_exref,(char *)ppppcVar1,(char *)((int)ppppcVar2 + local_1c),
                 (undefined1 *)ppppcVar2);
    local_30 = &stack0xffffffa4;
    FUN_004024e0(&stack0xffffffa4,local_2c);
    local_8._0_1_ = 1;
    this_00 = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a0ee0(this_00,pbVar3);
    if (0xf < local_18) {
      ppppcVar2 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar2 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar2);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0051e4a0(int param_1)

{
  *(undefined4 *)(param_1 + 300) = 0xc61c3c00;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0xc61c3c00;
  FUN_00591070(&DAT_0060dfc4,"%s: Clearing target.");
  return;
}


void __fastcall FUN_0051e500(undefined4 *param_1)

{
  undefined4 *this;
  undefined4 uVar1;
  byte *pbVar2;
  void *pvVar3;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c27f1;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = FUN_004136c0();
  param_1[4] = uVar1;
  this = param_1 + 6;
  local_8 = 0;
  *this = 0;
  param_1[7] = 0;
  uVar1 = FUN_0047d950();
  *this = uVar1;
  local_8._0_1_ = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = FUN_004136c0();
  param_1[8] = uVar1;
  local_8._0_1_ = 2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"visited_every_starsystem",0x18);
  local_8._0_1_ = 3;
  pbVar2 = FUN_00419170(this,(byte *)local_2c);
  FUN_00402690(pbVar2,&DAT_005e4c64,4);
  local_8._0_1_ = 2;
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
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"visited_every_starsystem",0x18);
  local_8 = CONCAT31(local_8._1_3_,4);
  pbVar2 = FUN_00419170(this,(byte *)local_2c);
  FUN_00402690(pbVar2,&DAT_005e4c64,4);
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0051e6c0(void *this,void *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar1 = FUN_00412f20((void *)((int)this + 0x20),(byte *)&param_1);
  pbVar1[0] = 1;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return;
}


void FUN_0051e750(undefined4 param_1,void *param_2)

{
  void *pvVar1;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c2828;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xf < in_stack_0000001c) {
    pvVar1 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      pvVar1 = *(void **)((int)param_2 + -4);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


bool __thiscall FUN_0051e7c0(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  uint in_stack_00000018;
  
  iVar1 = FUN_004a8d60((void *)((int)this + 0x10),(byte *)&param_1);
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  return iVar1 != 0;
}


void __thiscall FUN_0051e820(void *this,void *param_1)

{
  void *pvVar1;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004a2a30((void *)((int)this + 0x10),(byte *)&param_1);
  if (0xf < in_stack_00000018) {
    pvVar1 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar1 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0051e8b0(void *this,void *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  undefined4 in_XMM2_Da;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar1 = FUN_004a2a30((void *)((int)this + 0x10),(byte *)&param_1);
  *(undefined4 *)pbVar1 = in_XMM2_Da;
  if (0xf < in_stack_00000018) {
    pvVar2 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      pvVar2 = *(void **)((int)param_1 + -4);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0051e940(uint *param_1)

{
  uint *this;
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float *local_28;
  uint *local_24;
  float *local_20;
  int local_1c;
  int local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c286b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 8;
  local_14 = param_1;
  local_24 = param_1;
  do {
    local_18 = 8;
    do {
      puVar6 = (undefined4 *)*local_14;
      uVar4 = 0;
      uVar7 = (uint)((int)local_14[1] + (3 - (int)puVar6)) >> 2;
      if ((undefined4 *)local_14[1] < puVar6) {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        do {
          if ((void *)*puVar6 != (void *)0x0) {
            FUN_005adb3f((void *)*puVar6);
          }
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar4 != uVar7);
        puVar6 = (undefined4 *)*local_14;
      }
      local_14[1] = (uint)puVar6;
      local_14 = local_14 + 3;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  if ((*(char *)(DAT_0065b444 + 0x142) == '\0') &&
     (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x376) != '\0')) {
    local_8._1_3_ = 0;
    local_18 = -0x24c;
    pcVar5 = rand_exref;
    do {
      local_40 = (float)local_18;
      local_1c = -0x24c;
      do {
        local_44 = (float)local_1c;
        local_4c = 0;
        local_48 = 0;
        local_38 = local_40;
        local_8._0_1_ = 1;
        local_3c = local_44;
        fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_3c,(Vec2 *)&local_4c);
        local_14 = (uint *)(0x5f3759df - ((uint)fVar9 >> 1));
        local_8._0_1_ = 0;
        if ((1.5 - fVar9 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 * fVar9 <
            600.0) {
          local_34 = local_3c;
          local_30 = local_38;
          iVar2 = (*pcVar5)();
          iVar3 = (*pcVar5)();
          local_20 = (float *)(iVar3 % 0x168);
          iVar3 = (*pcVar5)();
          local_14 = (uint *)(iVar3 % 6);
          local_8 = CONCAT31(local_8._1_3_,2);
          fVar9 = local_34 + 600.0;
          fVar8 = local_30 + 600.0;
          local_28 = (float *)FUN_005adb0f(0x14);
          *local_28 = local_34;
          local_28[1] = local_30;
          local_28[2] = (float)local_14;
          local_28[3] = (float)local_20;
          this = local_24 + ((int)(fVar9 / 150.0) + (int)(fVar8 / 150.0) * 8) * 3;
          local_28[4] = (float)(int)(((float)(iVar2 % 0x19 + 0x4c) / 100.0) * 255.0);
          piVar1 = (int *)this[1];
          local_20 = local_28;
          if ((int *)this[2] == piVar1) {
            FUN_00414080(this,piVar1,&local_20);
          }
          else {
            *piVar1 = (int)local_28;
            this[1] = this[1] + 4;
          }
          pcVar5 = rand_exref;
        }
        local_1c = local_1c + 0x18;
      } while (local_1c < 0x264);
      local_18 = local_18 + 0x18;
    } while (local_18 < 0x264);
  }
  ExceptionList = local_10;
  return;
}


int FUN_0051ec10(void)

{
  float in_XMM0_Da;
  
  return (int)((in_XMM0_Da + 600.0) / 150.0);
}


undefined1 __thiscall
FUN_0051ec30(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  size_t _Size;
  int *_Dst;
  float fVar10;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  int *local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c28a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar8 = (undefined4 *)0x0;
  local_11 = 0;
  local_20 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  uVar7 = 0;
  local_8 = 1;
  iVar1 = param_1 + param_2 * 8;
  iVar6 = *(int *)((int)this + iVar1 * 0xc);
  local_18 = this;
  if (*(int *)((int)this + iVar1 * 0xc + 4) - iVar6 >> 2 != 0) {
    do {
      fVar10 = cocos2d::Vec2::getDistanceSq(*(Vec2 **)(iVar6 + uVar7 * 4),(Vec2 *)&param_3);
      fVar2 = (float)(0x5f3759df - ((uint)fVar10 >> 1));
      if ((1.5 - fVar10 * 0.5 * fVar2 * fVar2) * fVar2 * fVar10 <= param_5) {
        puVar3 = (undefined4 *)(*(int *)((int)this + iVar1 * 0xc) + uVar7 * 4);
        if (local_1c == puVar8) {
          FUN_00414080(&local_30,puVar8,puVar3);
          local_1c = local_28;
        }
        else {
          *puVar8 = *puVar3;
          local_2c = puVar8 + 1;
        }
        local_11 = 1;
        puVar8 = local_2c;
      }
      uVar7 = uVar7 + 1;
      iVar6 = *(int *)((int)this + iVar1 * 0xc);
    } while (uVar7 < (uint)(*(int *)((int)this + iVar1 * 0xc + 4) - iVar6 >> 2));
    local_20 = local_30;
  }
  param_5 = (float)((int)puVar8 - (int)local_20 >> 2);
  piVar4 = local_20;
  local_30 = local_20;
  if (param_5 != 0.0) {
    do {
      local_24 = *(int **)((int)this + iVar1 * 0xc + 4);
      _Dst = *(int **)((int)this + iVar1 * 0xc);
      if (_Dst != local_24) {
        do {
          if (*_Dst == *piVar4) break;
          _Dst = _Dst + 1;
        } while (_Dst != local_24);
        if (_Dst != local_24) {
          piVar5 = _Dst + 1;
          uVar7 = 0;
          uVar9 = (uint)((int)local_24 + (3 - (int)piVar5)) >> 2;
          if (local_24 < piVar5) {
            uVar9 = 0;
          }
          if (uVar9 != 0) {
            do {
              if (*piVar5 != *piVar4) {
                *_Dst = *piVar5;
                _Dst = _Dst + 1;
              }
              uVar7 = uVar7 + 1;
              piVar5 = piVar5 + 1;
            } while (uVar7 != uVar9);
          }
          if (_Dst != local_24) {
            _Size = *(int *)((int)local_18 + iVar1 * 0xc + 4) - (int)local_24;
            memmove(_Dst,local_24,_Size);
            *(size_t *)((int)local_18 + iVar1 * 0xc + 4) = _Size + (int)_Dst;
          }
        }
      }
      this = local_18;
      fVar2 = param_5;
      FUN_00591070("DETAIL","Removed fog at %f, %f");
      param_5 = (float)((int)fVar2 + -1);
      piVar4 = piVar4 + 1;
    } while (param_5 != 0.0);
    param_5 = 0.0;
  }
  if (local_20 != (int *)0x0) {
    piVar4 = local_20;
    if ((0xfff < ((int)local_1c - (int)local_20 & 0xfffffffcU)) &&
       (piVar4 = (int *)local_20[-1], 0x1f < (uint)((int)local_20 + (-4 - (int)piVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar4);
  }
  ExceptionList = local_10;
  return local_11;
}


uint __thiscall FUN_0051eeb0(void *this,float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void **ppvVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1fd9;
  local_10 = ExceptionList;
  local_8 = 0;
  iVar10 = (int)((param_1 + 600.0) / 150.0);
  iVar5 = (int)((param_2 + 600.0) / 150.0);
  uVar9 = iVar5 - 1;
  uVar6 = iVar5 + 1;
  uVar8 = uVar6;
  if ((int)uVar9 <= (int)uVar6) {
    uVar1 = iVar10 - 1;
    uVar8 = iVar10 + 1;
    uVar2 = uVar1;
    uVar3 = uVar1;
    ppvVar4 = &local_10;
    do {
      for (; ExceptionList = ppvVar4, (int)uVar2 <= (int)uVar8; uVar2 = uVar2 + 1) {
        if ((uVar9 < 8) && (uVar3 < 8)) {
          iVar5 = uVar2 + uVar9 * 8;
          uVar11 = 0;
          iVar10 = *(int *)((int)this + iVar5 * 0xc);
          if (*(int *)((int)this + iVar5 * 0xc + 4) - iVar10 >> 2 != 0) {
            do {
              fVar12 = cocos2d::Vec2::getDistanceSq
                                 (*(Vec2 **)(iVar10 + uVar11 * 4),(Vec2 *)&param_1);
              fVar7 = (float)(0x5f3759df - ((uint)fVar12 >> 1));
              if ((1.5 - fVar12 * 0.5 * fVar7 * fVar7) * fVar7 * fVar12 <= 24.0) {
                ExceptionList = local_10;
                return CONCAT31((int3)((uint)fVar7 >> 8),1);
              }
              uVar11 = uVar11 + 1;
              iVar10 = *(int *)((int)this + iVar5 * 0xc);
            } while (uVar11 < (uint)(*(int *)((int)this + iVar5 * 0xc + 4) - iVar10 >> 2));
          }
        }
        uVar3 = uVar3 + 1;
        ppvVar4 = ExceptionList;
      }
      uVar9 = uVar9 + 1;
      uVar2 = uVar1;
      uVar3 = uVar1;
      ppvVar4 = ExceptionList;
    } while ((int)uVar9 <= (int)uVar6);
  }
  ExceptionList = local_10;
  return uVar8 & 0xffffff00;
}


void __fastcall FUN_0051f040(int param_1)

{
  int *piVar1;
  int *_Dst;
  undefined4 *puVar2;
  size_t _Size;
  undefined4 local_c;
  int *local_8;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  local_8 = piVar1;
  puVar2 = FUN_00414000(&local_c,(int *)&stack0x00000004,*(int **)(param_1 + 0x28),piVar1);
  _Dst = (int *)*puVar2;
  if (_Dst != piVar1) {
    _Size = *(int *)(param_1 + 0x2c) - (int)local_8;
    memmove(_Dst,local_8,_Size);
    *(size_t *)(param_1 + 0x2c) = _Size + (int)_Dst;
  }
  return;
}


undefined4 __fastcall FUN_0051f090(int param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  byte *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be3e8;
  local_10 = ExceptionList;
  iVar3 = *(int *)(param_1 + 0xe8) - (int)*(undefined4 **)(param_1 + 0xe4);
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0x18 + iVar1 != iVar1) {
    ExceptionList = &local_10;
    FUN_004024e0(&stack0xffffffcc,*(undefined4 **)(param_1 + 0xe4));
    local_8 = 0;
    this = (void *)FUN_00412490();
    local_8 = 0xffffffff;
    uVar2 = FUN_004a0d10(this,in_stack_ffffffcc);
    ExceptionList = local_10;
    return uVar2;
  }
  return 0;
}


char * __thiscall FUN_0051f120(void *this,float param_1,float param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float local_20;
  float local_1c;
  void *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c28d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pcVar4 = (char *)0x0;
  iVar3 = *(int *)((int)this + 0x134);
  uVar5 = 0;
  if (*(int *)((int)this + 0x138) - iVar3 >> 2 != 0) {
    fVar7 = 0.5;
    local_18 = this;
    do {
      local_20 = param_1;
      local_1c = param_2;
      iVar1 = *(int *)(iVar3 + uVar5 * 4);
      local_8._0_1_ = 1;
      if (*(float *)(iVar1 + 0x3c) <= 0.0) {
        fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)(iVar1 + 0xe8));
        fVar7 = 0.5;
        local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
        local_8 = (uint)local_8._1_3_ << 8;
        iVar3 = *(int *)((int)local_18 + 0x134);
        if ((1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14 * fVar6 <= *(float *)(iVar1 + 0x38)
           ) {
LAB_0051f275:
          pcVar4 = *(char **)(iVar3 + uVar5 * 4);
        }
      }
      else {
        fVar6 = *(float *)(iVar1 + 0x3c) * fVar7;
        if ((*(float *)(iVar1 + 0xe8) - fVar6 <= param_1) &&
           (param_1 <= fVar6 + *(float *)(iVar1 + 0xe8))) {
          fVar6 = *(float *)(iVar1 + 0x40) * fVar7;
          if ((*(float *)(iVar1 + 0xec) - fVar6 <= param_2) &&
             (param_2 <= *(float *)(iVar1 + 0xec) + fVar6)) {
            local_8 = (uint)local_8._1_3_ << 8;
            goto LAB_0051f275;
          }
        }
        local_8 = (uint)local_8._1_3_ << 8;
      }
      if ((pcVar4 != (char *)0x0) && (param_3 != '\0')) {
        uVar2 = FUN_004105f0(pcVar4);
        if ((char)uVar2 == '\0') {
          pcVar4 = (char *)0x0;
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)((int)local_18 + 0x134);
    } while (uVar5 < (uint)(*(int *)((int)local_18 + 0x138) - iVar3 >> 2));
  }
  ExceptionList = local_10;
  return pcVar4;
}


int __thiscall FUN_0051f2d0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xa0) - *(int *)((int)this + 0x9c) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x9c) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x44) == param_1) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


undefined4 * __thiscall FUN_0051f310(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint in_stack_ffffffc8;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2914;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != (undefined4 *)0x2) {
    param_1 = (undefined4 *)FUN_005adb0f(0xf0);
    local_8 = 1;
    param_1 = FUN_005214e0(param_1,puVar1);
    local_8 = 0xffffffff;
    param_1[0x19] = 0xbf800000;
    param_1[9] = this;
    param_1[8] = *(undefined4 *)this;
    puVar1 = *(undefined4 **)((int)this + 0xa0);
    if (*(undefined4 **)((int)this + 0xa4) == puVar1) {
      FUN_00414080((void *)((int)this + 0x9c),puVar1,&param_1);
    }
    else {
      *puVar1 = param_1;
      *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 4;
    }
    ExceptionList = local_10;
    return param_1;
  }
  puVar1 = (undefined4 *)FUN_005adb0f(0x108);
  local_8 = 0;
  pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
  param_1 = puVar1;
  FUN_00402690(&stack0xffffffc8,&PTR_005ce008,0);
  puVar2 = FUN_00403d40(puVar1,pvVar3);
  local_8 = 0xffffffff;
  puVar2[0x19] = 0xbf800000;
  puVar2[9] = this;
  puVar2[8] = *(undefined4 *)this;
  puVar1 = *(undefined4 **)((int)this + 0xa0);
  if (*(undefined4 **)((int)this + 0xa4) != puVar1) {
    *puVar1 = puVar2;
    *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 4;
    ExceptionList = local_10;
    return puVar2;
  }
  param_1 = puVar2;
  FUN_00414080((void *)((int)this + 0x9c),puVar1,&param_1);
  ExceptionList = local_10;
  return puVar2;
}


void __thiscall FUN_0051f460(void *this,undefined4 *param_1)

{
  void *this_00;
  int iVar1;
  int *_Src;
  int *_Dst;
  undefined4 *puVar2;
  uint uVar3;
  size_t _Size;
  uint local_c;
  void *local_8;
  
  puVar2 = *(undefined4 **)((int)this + 0xcc);
  uVar3 = 0;
  local_c = (uint)((int)*(undefined4 **)((int)this + 0xd0) + (3 - (int)puVar2)) >> 2;
  if (*(undefined4 **)((int)this + 0xd0) < puVar2) {
    local_c = 0;
  }
  local_8 = this;
  if (local_c != 0) {
    do {
      this_00 = (void *)*puVar2;
      if ((*(int *)((int)this_00 + 0x194) != 0) &&
         ((((iVar1 = *(int *)(*(int *)((int)this_00 + 0x194) + 0xe0), iVar1 == 5 || (iVar1 == 6)) ||
           (iVar1 == 4)) || (iVar1 == 7)))) {
        *(undefined4 *)((int)this_00 + 0x194) = 0;
        *(undefined4 *)((int)this_00 + 400) = 0xffffffff;
      }
      FUN_0050c8a0(this_00,param_1[0x11]);
      if ((*(undefined4 **)((int)this_00 + 0x174) != (undefined4 *)0x0) &&
         (*(undefined4 **)((int)this_00 + 0x174) == param_1)) {
        *(undefined4 *)((int)this_00 + 0x174) = 0;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != local_c);
  }
  _Src = *(int **)((int)local_8 + 0xa0);
  puVar2 = FUN_00414000(&local_c,(int *)&param_1,*(int **)((int)local_8 + 0x9c),_Src);
  _Dst = (int *)*puVar2;
  if (_Dst != _Src) {
    _Size = *(int *)((int)local_8 + 0xa0) - (int)_Src;
    memmove(_Dst,_Src,_Size);
    *(size_t *)((int)local_8 + 0xa0) = _Size + (int)_Dst;
  }
  puVar2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    FUN_00521670(param_1);
    FUN_005adb3f(puVar2);
  }
  return;
}


void __thiscall FUN_0051f570(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x88);
  if (*(int **)((int)this + 0x8c) == piVar1) {
    FUN_00414080((void *)((int)this + 0x84),piVar1,&param_1);
  }
  else {
    *piVar1 = param_1;
    *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 4;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 0)) {
    piVar1 = *(int **)((int)this + 0x94);
    if (*(int **)((int)this + 0x98) != piVar1) {
      *piVar1 = param_1;
      *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + 4;
      return;
    }
    FUN_00414080((void *)((int)this + 0x90),piVar1,&param_1);
  }
  return;
}


int __fastcall FUN_0051f5e0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float in_XMM1_Da;
  float fVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c295c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar1 = false;
  local_14 = 0.0;
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x84);
  uVar4 = 0;
  local_1c = in_XMM1_Da;
  local_18 = param_1;
  if (*(int *)(param_1 + 0x88) - iVar3 >> 2 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + uVar4 * 4);
      local_28 = (float)*(double *)(iVar3 + 0x20);
      local_24 = (float)*(double *)(iVar3 + 0x28);
      local_8 = 1;
      uStack_7 = 0;
      local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&stack0x00000004);
      local_14 = (float)(0x5f3759df - ((uint)local_20 >> 1));
      local_20 = (1.5 - local_20 * 0.5 * local_14 * local_14) * local_14 * local_20;
      if (local_1c < local_20) {
LAB_0051f75c:
        bVar2 = false;
      }
      else {
        if (iVar5 != 0) {
          local_30 = (float)*(double *)(iVar5 + 0x20);
          local_2c = (float)*(double *)(iVar5 + 0x28);
          _local_8 = CONCAT31(uStack_7,2);
          bVar1 = true;
          local_14 = 1.4013e-45;
          fVar6 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&stack0x00000004);
          local_14 = (float)(0x5f3759df - ((uint)fVar6 >> 1));
          if (local_20 <= (1.5 - fVar6 * 0.5 * local_14 * local_14) * local_14 * fVar6)
          goto LAB_0051f75c;
        }
        bVar2 = true;
      }
      if (bVar1) {
        bVar1 = false;
      }
      if (bVar2) {
        iVar5 = *(int *)(*(int *)(local_18 + 0x84) + uVar4 * 4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(local_18 + 0x84);
    } while (uVar4 < (uint)(*(int *)(local_18 + 0x88) - iVar3 >> 2));
  }
  ExceptionList = local_10;
  return iVar5;
}


void __thiscall FUN_0051f7b0(void *this,int param_1)

{
  undefined1 *this_00;
  void *this_01;
  int iVar1;
  byte *in_stack_ffffffc8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005bc2e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_01 = *(void **)(param_1 + 0x39c);
  if (this_01 != (void *)0x0) {
    if (*(char *)(DAT_0065b444 + 0x70) != '\0') {
      FUN_004024e0(&stack0xffffffc8,(undefined4 *)((int)this_01 + 0x238));
      local_8 = 0;
      iVar1 = param_1;
      this_00 = FUN_00402de0();
      local_8 = 0xffffffff;
      FUN_00425870(this_00,iVar1,in_stack_ffffffc8);
      this_01 = *(void **)(param_1 + 0x39c);
    }
    FUN_0050f370(this_01,param_1);
  }
  FUN_0051f8b0(this,param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0051f850(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  iVar2 = *(int *)((int)param_1 + 0xcc);
  if (*(int *)((int)param_1 + 0xd0) - iVar2 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar2 + uVar3 * 4);
      bVar4 = false;
      iVar1 = *(int *)(iVar2 + 0x254);
      if (iVar1 != 0) {
        bVar4 = *(int *)(iVar1 + 0x158) == 4;
      }
      if (bVar4) {
        FUN_0051f7b0(param_1,iVar2);
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((int)param_1 + 0xcc);
    } while (uVar3 < (uint)(*(int *)((int)param_1 + 0xd0) - iVar2 >> 2));
  }
  return;
}


void __thiscall FUN_0051f8b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  size_t _Size;
  int local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  int *local_c;
  int local_8;
  
  piVar5 = *(int **)((int)this + 0xcc);
  piVar1 = *(int **)((int)this + 0xd0);
  local_c = piVar5;
  iVar8 = param_1;
  local_10 = this;
  if (piVar5 != piVar1) {
    do {
      iVar10 = *local_c;
      uVar7 = 0;
      piVar5 = *(int **)(*(int *)(iVar10 + 0x40) + 0x3c);
      piVar2 = *(int **)(*(int *)(iVar10 + 0x40) + 0x40);
      uVar9 = (uint)((int)piVar2 + (3 - (int)piVar5)) >> 2;
      if (piVar2 < piVar5) {
        uVar9 = 0;
      }
      if (uVar9 != 0) {
        do {
          if (*(int *)(*piVar5 + 0x18) == iVar8) {
            *(undefined4 *)(*piVar5 + 0x18) = 0;
          }
          uVar7 = uVar7 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar7 != uVar9);
      }
      local_8 = *(int *)(iVar10 + 0x44);
      local_20 = iVar10;
      if (local_8 != 0) {
        if (*(int *)(local_8 + 0x40) == iVar8) {
          *(undefined4 *)(local_8 + 0x40) = 0;
        }
        puVar3 = *(undefined4 **)(local_8 + 200);
        puVar6 = *(undefined4 **)(local_8 + 0xc4);
        uVar7 = (uint)((int)puVar3 + (3 - (int)puVar6)) >> 2;
        if (puVar3 < puVar6) {
          uVar7 = 0;
        }
        local_18 = 0;
        local_1c = puVar3;
        local_14 = uVar7;
        if (uVar7 != 0) {
          if (iVar8 == 0) {
            for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
              (**(code **)(*(int *)*puVar6 + 0x18))(0);
              iVar8 = param_1;
            }
          }
          else {
            local_1c = (undefined4 *)(iVar8 + 8);
            uVar9 = 0;
            do {
              (**(code **)(*(int *)*puVar6 + 0x18))(local_1c);
              puVar6 = puVar6 + 1;
              uVar9 = uVar9 + 1;
              iVar8 = param_1;
              iVar10 = local_20;
            } while (uVar9 != uVar7);
          }
        }
        *(undefined4 *)(local_8 + 0x154) = *(undefined4 *)(local_8 + 0x150);
        *(undefined4 *)(local_8 + 0x148) = *(undefined4 *)(local_8 + 0x144);
        *(undefined4 *)(local_8 + 0x13c) = *(undefined4 *)(local_8 + 0x138);
        *(undefined4 *)(local_8 + 0x130) = *(undefined4 *)(local_8 + 300);
        *(undefined4 *)(local_8 + 0x128) = 0;
      }
      if (*(char *)(iVar10 + 0x234) != '\0') {
        if ((*(int *)(iVar10 + 0x194) != 0) && (*(int *)(*(int *)(iVar10 + 0x194) + 0x130) == iVar8)
           ) {
          *(undefined4 *)(iVar8 + 0x194) = 0;
          *(undefined4 *)(iVar8 + 400) = 0xffffffff;
        }
        if ((*(int *)(iVar10 + 0x19c) != 0) && (*(int *)(*(int *)(iVar10 + 0x19c) + 0x130) == iVar8)
           ) {
          *(undefined4 *)(iVar10 + 0x1b8) = 0xc61c3c00;
          *(undefined4 *)(iVar10 + 0x1a4) = 0;
          *(undefined4 *)(iVar10 + 0x1a0) = 0xffffffff;
          *(undefined4 *)(iVar10 + 0x1bc) = 0xc61c3c00;
          *(undefined4 *)(iVar10 + 0x19c) = 0;
          *(undefined4 *)(iVar10 + 0x198) = 0xffffffff;
          if (*(char *)(iVar10 + 0x1b0) != '\0') {
            *(undefined4 *)(iVar10 + 0x194) = 0;
            *(undefined4 *)(iVar10 + 400) = 0xffffffff;
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c != piVar1);
    piVar5 = *(int **)((int)local_10 + 0xcc);
  }
  piVar1 = *(int **)((int)local_10 + 0xd0);
  if (piVar5 != piVar1) {
    do {
      if (*piVar5 == iVar8) break;
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1);
    if (piVar5 != piVar1) {
      puVar6 = FUN_00414000(&local_20,&param_1,*(int **)((int)local_10 + 0xcc),piVar1);
      pvVar4 = local_10;
      piVar5 = (int *)*puVar6;
      if (piVar5 != piVar1) {
        _Size = *(int *)((int)local_10 + 0xd0) - (int)piVar1;
        memmove(piVar5,piVar1,_Size);
        *(size_t *)((int)pvVar4 + 0xd0) = _Size + (int)piVar5;
      }
    }
  }
  return;
}


undefined4 __thiscall FUN_0051fb10(void *this,int param_1)

{
  return *(undefined4 *)(*(int *)((int)this + 0xcc) + param_1 * 4);
}


undefined4 __thiscall FUN_0051fb30(void *this,byte *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar3 = param_1;
  iVar1 = *(int *)((int)this + 0xcc);
  uVar7 = 0;
  uVar9 = *(int *)((int)this + 0xd0) - iVar1 >> 2;
  if (uVar9 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      bVar10 = false;
      if (*(int *)(iVar2 + 0x254) != 0) {
        bVar10 = *(int *)(*(int *)(iVar2 + 0x254) + 0x158) == 0;
      }
      if (bVar10) {
        pbVar6 = (byte *)(iVar2 + 0x238);
        ppbVar4 = &param_1;
        if (0xf < in_stack_00000018) {
          ppbVar4 = (byte **)pbVar3;
        }
        if (0xf < *(uint *)(iVar2 + 0x24c)) {
          pbVar6 = *(byte **)(iVar2 + 0x238);
        }
        uVar5 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x248),(byte *)ppbVar4,in_stack_00000014);
        if ((char)uVar5 != '\0') {
          uVar8 = *(undefined4 *)(iVar1 + uVar7 * 4);
          goto LAB_0051fbb9;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  uVar8 = 0;
LAB_0051fbb9:
  if (0xf < in_stack_00000018) {
    pbVar6 = pbVar3;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar6 = *(byte **)(pbVar3 + -4), (byte *)0x1f < pbVar3 + (-4 - (int)pbVar6))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar6);
  }
  return uVar8;
}


int __thiscall FUN_0051fc00(void *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  void **ppvVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c29bd;
  local_10 = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  iVar6 = *(int *)((int)this + 0xcc);
  if (param_1 == -1) {
    param_1 = 5;
  }
  uVar7 = 0;
  local_18 = 0;
  ppvVar4 = &local_10;
  if (*(int *)((int)this + 0xd0) - iVar6 >> 2 == 0) {
    return 0;
  }
  do {
    ExceptionList = ppvVar4;
    if ((param_1 == 5) ||
       (*(int *)(*(int *)(*(int *)(iVar6 + uVar7 * 4) + 0x254) + 0x158) == param_1)) {
      if (local_18 == 0) {
LAB_0051fda7:
        bVar3 = true;
      }
      else {
        iVar6 = *(int *)(iVar6 + uVar7 * 4);
        local_30 = (float)*(double *)(iVar6 + 0x28);
        local_2c = (float)*(double *)(iVar6 + 0x30);
        local_38 = (float)*(double *)(local_18 + 0x28);
        local_34 = (float)*(double *)(local_18 + 0x30);
        local_8 = 2;
        bVar2 = true;
        bVar1 = true;
        local_20 = 3;
        local_24 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&stack0x00000008);
        local_28 = local_24 * 0.5;
        local_1c = (float)(0x5f3759df - ((uint)local_24 >> 1));
        fVar8 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,(Vec2 *)&stack0x00000008);
        fVar5 = (float)(0x5f3759df - ((uint)fVar8 >> 1));
        if ((1.5 - local_28 * local_1c * local_1c) * local_1c * local_24 <
            (1.5 - fVar8 * 0.5 * fVar5 * fVar5) * fVar5 * fVar8) goto LAB_0051fda7;
        bVar3 = false;
      }
      if (bVar1) {
        bVar1 = false;
      }
      if (bVar2) {
        bVar2 = false;
      }
      if (bVar3) {
        local_18 = *(int *)(*(int *)((int)this + 0xcc) + uVar7 * 4);
      }
    }
    uVar7 = uVar7 + 1;
    iVar6 = *(int *)((int)this + 0xcc);
    ppvVar4 = ExceptionList;
    if ((uint)(*(int *)((int)this + 0xd0) - iVar6 >> 2) <= uVar7) {
      ExceptionList = local_10;
      return local_18;
    }
  } while( true );
}


int __fastcall FUN_0051fe10(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void **ppvVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2a1d;
  local_10 = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  uVar7 = 0;
  iVar6 = *(int *)(param_1 + 0xcc);
  local_14 = 0;
  ppvVar4 = &local_10;
  if (*(int *)(param_1 + 0xd0) - iVar6 >> 2 == 0) {
    return 0;
  }
  do {
    ExceptionList = ppvVar4;
    iVar6 = *(int *)(iVar6 + uVar7 * 4);
    bVar8 = false;
    iVar1 = *(int *)(iVar6 + 0x254);
    if (iVar1 != 0) {
      bVar8 = *(int *)(iVar1 + 0x158) == 3;
    }
    if (bVar8) {
LAB_0051feab:
      if (local_14 == 0) {
LAB_0051ffb9:
        bVar8 = true;
      }
      else {
        local_2c = (float)*(double *)(iVar6 + 0x28);
        local_28 = (float)*(double *)(iVar6 + 0x30);
        local_34 = (float)*(double *)(local_14 + 0x28);
        local_30 = (float)*(double *)(local_14 + 0x30);
        local_8 = 2;
        bVar3 = true;
        bVar2 = true;
        local_1c = 3;
        local_20 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_2c,(Vec2 *)&stack0x00000004);
        local_24 = local_20 * 0.5;
        local_18 = (float)(0x5f3759df - ((uint)local_20 >> 1));
        fVar9 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_34,(Vec2 *)&stack0x00000004);
        fVar5 = (float)(0x5f3759df - ((uint)fVar9 >> 1));
        if ((1.5 - local_24 * local_18 * local_18) * local_18 * local_20 <
            (1.5 - fVar9 * 0.5 * fVar5 * fVar5) * fVar5 * fVar9) goto LAB_0051ffb9;
        bVar8 = false;
      }
      if (bVar2) {
        bVar2 = false;
      }
      if (bVar3) {
        bVar3 = false;
      }
      if (bVar8) {
        local_14 = *(int *)(*(int *)(param_1 + 0xcc) + uVar7 * 4);
      }
    }
    else {
      bVar8 = false;
      if (iVar1 != 0) {
        bVar8 = *(int *)(iVar1 + 0x158) == 1;
      }
      if (bVar8) goto LAB_0051feab;
      bVar8 = false;
      if (iVar1 != 0) {
        bVar8 = *(int *)(iVar1 + 0x158) == 2;
      }
      if (bVar8) goto LAB_0051feab;
    }
    uVar7 = uVar7 + 1;
    iVar6 = *(int *)(param_1 + 0xcc);
    ppvVar4 = ExceptionList;
    if ((uint)(*(int *)(param_1 + 0xd0) - iVar6 >> 2) <= uVar7) {
      ExceptionList = local_10;
      return local_14;
    }
  } while( true );
}
