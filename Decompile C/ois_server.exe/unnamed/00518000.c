#include "../ois_server.exe.h"


void __thiscall FUN_005181f0(void *this,undefined4 *param_1)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  void **ppvVar4;
  size_t _Size;
  void *pvVar5;
  float *pfVar6;
  float *_Src;
  int *piVar7;
  double dVar8;
  double dVar9;
  undefined4 *in_stack_ffffff1c;
  undefined4 *in_stack_ffffff24;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float *local_80;
  float *local_7c;
  float *local_78;
  undefined4 local_74;
  undefined4 local_70;
  float *local_6c;
  float *local_68;
  float *local_64;
  int *local_60;
  float local_5c;
  float local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005c20e7;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  FUN_00591070(&DAT_005cdc70,"%s: path successful. Executing.");
  *(undefined1 *)((int)this + 0x2ec) = 0;
  FUN_005179b0((int)this);
  _Src = (float *)0x0;
  *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0x1c4);
  local_64 = (float *)0x0;
  local_80 = (float *)0x0;
  local_7c = (float *)0x0;
  local_6c = (float *)0x0;
  local_78 = (float *)0x0;
  local_2c = 0xf00000000;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = 1;
  pfVar6 = (float *)0x0;
  pfVar1 = local_68;
  for (local_60 = (int *)*param_1; (local_68 = pfVar6, local_60 != (int *)0x0 && (*local_60 != 0));
      local_60 = (int *)*local_60) {
    local_5c = *(float *)(*(int *)(*(int *)((int)this + 0x24) + 0xa8) + local_60[1] * 4);
    local_58 = local_5c;
    if (local_6c == local_68) {
      FUN_00414080(&local_80,_Src,&local_58);
      local_6c = local_78;
      local_64 = local_80;
      _Src = local_80;
      pfVar6 = local_7c;
    }
    else if (_Src == local_68) {
      *local_68 = local_5c;
      local_7c = local_68 + 1;
      pfVar6 = local_7c;
    }
    else {
      *local_68 = local_68[-1];
      _Size = (int)local_68 + (-4 - (int)_Src);
      pfVar6 = local_68 + 1;
      local_7c = pfVar6;
      memmove((void *)((int)local_68 - _Size),_Src,_Size);
      *local_64 = local_5c;
      _Src = local_64;
    }
    pfVar1 = local_68;
  }
  piVar7 = (int *)((int)local_68 - (int)_Src >> 2);
  local_5c = 0.0;
  local_68 = pfVar1;
  local_60 = piVar7;
  if (piVar7 != (int *)0x0) {
    do {
      local_68 = (float *)_Src[(int)local_5c];
      if ((*(char *)(local_68 + 0xd) == '\0') || (local_5c != (float)((int)piVar7 - 1U))) {
        local_98 = local_68[2];
        local_94 = local_68[3];
        local_88 = local_98;
        local_84 = local_94;
        iVar3 = rand();
        rand();
        dVar8 = (double)(iVar3 % 0x168) * 0.017453292519943295;
        dVar9 = dVar8;
        libm_sse2_sin_precise();
        local_58 = (float)(dVar9 * 0.0);
        libm_sse2_cos_precise();
        local_90 = local_58;
        local_8c = (float)(dVar8 * 0.0);
        local_14._0_1_ = 4;
        cocos2d::Vec2::operator+((Vec2 *)&local_98,(Vec2 *)&local_74);
        local_14 = CONCAT31(local_14._1_3_,5);
        FUN_005175a0(this,local_74,local_70);
        ppvVar4 = (void **)FUN_00591e00((undefined1 *)local_54,"%.0f, %.0f");
        if (&local_3c != ppvVar4) {
          FUN_00401b20((int *)&local_3c);
          local_3c = *ppvVar4;
          pvStack_38 = ppvVar4[1];
          pvStack_34 = ppvVar4[2];
          pvStack_30 = ppvVar4[3];
          local_2c = *(undefined8 *)(ppvVar4 + 4);
          ppvVar4[4] = (void *)0x0;
          ppvVar4[5] = (void *)0xf;
          *(undefined1 *)ppvVar4 = 0;
        }
        if (0xf < local_40) {
          pvVar5 = local_54[0];
          if ((0xfff < local_40 + 1) &&
             (pvVar5 = *(void **)((int)local_54[0] + -4),
             0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar5)))) goto LAB_0051879f;
          FUN_005adb3f(pvVar5);
        }
        in_stack_ffffff1c = (undefined4 *)((uint)in_stack_ffffff1c & 0xffffff00);
        FUN_00402690(&stack0xffffff1c,"WP #%d: %f,%f (np #%d, %s)",0x1a);
        FUN_0050ae50(this,in_stack_ffffff1c);
        local_14 = CONCAT31(local_14._1_3_,1);
        piVar7 = local_60;
      }
      else {
        iVar3 = FUN_0051fe10(*(int *)((int)this + 0x24));
        if ((iVar3 == 0) ||
           (ppvVar4 = (void **)(iVar3 + 8), piVar7 = local_60, ppvVar4 == (void **)0x0)) {
          FUN_0051fe10(*(int *)((int)this + 0x24));
          bVar2 = cc_assert_script_compatible
                            (
                            "ERROR: nav point marked for space station, but there\'s no space station."
                            );
          if (!bVar2) {
            cocos2d::log("Assert failed: %s");
          }
        }
        else {
          FUN_00517670(this,(int)ppvVar4);
          if (&local_3c != ppvVar4) {
            if (0xf < *(uint *)(iVar3 + 0x1c)) {
              ppvVar4 = *ppvVar4;
            }
            FUN_00402690(&local_3c,ppvVar4,*(uint *)(iVar3 + 0x18));
          }
          in_stack_ffffff24 = (undefined4 *)((uint)in_stack_ffffff24 & 0xffffff00);
          FUN_00402690(&stack0xffffff24,"WP #%d: %f,%f %s",0x10);
          in_stack_ffffff1c = (undefined4 *)0x5183f4;
          FUN_0050ae50(this,in_stack_ffffff24);
          piVar7 = local_60;
        }
      }
      local_5c = (float)((int)local_5c + 1);
      _Src = local_64;
    } while ((uint)local_5c < piVar7);
  }
  if (*(int *)((int)this + 0x2f0) == 0) {
    FUN_005175a0(this,*(undefined4 *)((int)this + 0x2f4),*(undefined4 *)((int)this + 0x2f8));
    if (*(char *)((int)this + 0x234) != '\0') {
      FUN_00527550(*(int **)((int)this + 0x224),1,"Course plotted to %.0f, %.0f. Engaging.");
    }
    FUN_00591070(&DAT_005cdc70,"%s: %d nodes plotted to get to %f, %f. Engaging.");
  }
  else {
    FUN_00517670(this,*(int *)((int)this + 0x2f0));
    if (*(char *)((int)this + 0x234) != '\0') {
      FUN_00527550(*(int **)((int)this + 0x224),1,"Course plotted to %s. Engaging.");
    }
    FUN_00591070(&DAT_005cdc70,"%s: %d nodes plotted to get to %s. Engaging.");
  }
  *(undefined4 *)((int)this + 0xd4) = 1;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  if (0xf < local_2c._4_4_) {
    pvVar5 = local_3c;
    if ((0xfff < local_2c._4_4_ + 1) &&
       (pvVar5 = *(void **)((int)local_3c + -4), 0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5))))
    {
LAB_0051879f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  if (local_64 != (float *)0x0) {
    pfVar6 = local_64;
    if ((0xfff < ((int)local_6c - (int)local_64 & 0xfffffffcU)) &&
       (pfVar6 = (float *)local_64[-1], 0x1f < (uint)((int)local_64 + (-4 - (int)pfVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pfVar6);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


bool __fastcall FUN_00518810(int param_1)

{
  return *(int *)(param_1 + 0xd4) == 1;
}


uint __fastcall FUN_00518820(int param_1)

{
  float fVar1;
  uint3 uVar2;
  uint uVar3;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x1c4);
  uVar6 = 0;
  uVar7 = (int)(*(int *)(param_1 + 0x1c8) - uVar3) >> 5;
  if (uVar7 != 0) {
    pfVar5 = (float *)(uVar3 + 8);
    do {
      fVar1 = *pfVar5;
      uVar4 = (undefined2)(uVar3 >> 0x10);
      uVar2 = CONCAT21(uVar4,(fVar1 == -9999.0) << 6 | NAN(fVar1) << 2 | 2U | fVar1 < -9999.0);
      if (fVar1 == -9999.0) {
        fVar1 = pfVar5[1];
        uVar2 = CONCAT21(uVar4,(fVar1 == -9999.0) << 6 | NAN(fVar1) << 2 | 2U | fVar1 < -9999.0);
        if (fVar1 == -9999.0) {
          return CONCAT31(uVar2,1);
        }
      }
      uVar3 = (uint)uVar2 << 8;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 8;
    } while (uVar6 < uVar7);
  }
  return uVar3 & 0xffffff00;
}


void __fastcall FUN_00518870(int param_1)

{
  float in_XMM1_Da;
  float fVar1;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2119;
  local_10 = ExceptionList;
  if (in_XMM1_Da == 0.0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    return;
  }
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  fVar1 = cocos2d::Vec2::getDistance((Vec2 *)(param_1 + 0x118),(Vec2 *)&local_18);
  *(float *)(param_1 + 0x118) = (*(float *)(param_1 + 0x118) / fVar1) * in_XMM1_Da;
  *(float *)(param_1 + 0x11c) = (*(float *)(param_1 + 0x11c) / fVar1) * in_XMM1_Da;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00518940(void *param_1)

{
  uint uVar1;
  double dVar2;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float *pfVar3;
  double local_2c;
  double local_24;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c215b;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = (double)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  local_1c = (float)*(double *)((int)param_1 + 0x28);
  local_18 = (float)*(double *)((int)param_1 + 0x30);
  pfVar3 = &local_1c;
  local_8 = 0;
  cocos2d::Vec2::operator+((Vec2 *)((int)param_1 + 0x118),(Vec2 *)&local_24);
  dVar2 = (double)((ulonglong)local_24 >> 0x20);
  FUN_0050b390(param_1,local_24._0_4_);
  if ((float)dVar2 == *(float *)((int)param_1 + 0x120)) {
    local_24 = 0.0;
    local_8 = 1;
    local_14 = cocos2d::Vec2::getDistance((Vec2 *)((int)param_1 + 0x118),(Vec2 *)&local_24);
    local_8 = 0xffffffff;
    if (local_14 == *(float *)(*(int *)((int)param_1 + 0x254) + 0x108)) {
      ExceptionList = local_10;
      return;
    }
  }
  dVar2 = (double)*(float *)((int)param_1 + 0x120) * 0.017453292519943295;
  local_24 = dVar2;
  libm_sse2_cos_precise(pfVar3,uVar1);
  local_14 = (float)(dVar2 * local_2c);
  dVar2 = local_24;
  libm_sse2_sin_precise();
  dVar2 = dVar2 * local_2c;
  local_2c = 0.0;
  *(float *)((int)param_1 + 0x118) = (float)dVar2 + *(float *)((int)param_1 + 0x118);
  *(float *)((int)param_1 + 0x11c) = local_14 + *(float *)((int)param_1 + 0x11c);
  local_8 = 2;
  local_14 = cocos2d::Vec2::getDistance((Vec2 *)((int)param_1 + 0x118),(Vec2 *)&local_2c);
  local_8 = 0xffffffff;
  if (*(float *)(*(int *)((int)param_1 + 0x254) + 0x108) < local_14) {
    FUN_00518870((int)param_1);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00518af0(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  FUN_005179b0(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x1c4);
  *(undefined4 **)(param_1 + 0x1c8) = puVar1;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0xc61c3c00;
  uStack_18 = 0xc61c3c00;
  local_14 = 0xbf800000;
  local_10 = 0;
  local_c = 0;
  if (*(undefined4 **)(param_1 + 0x1cc) == puVar1) {
    FUN_00420fb0((void *)(param_1 + 0x1c4),puVar1,&local_24);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xc61c3c00;
    puVar1[3] = 0xc61c3c00;
    puVar1[4] = 0xbf800000;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = local_8;
    *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 0x20;
  }
  *(undefined4 *)(param_1 + 0xd4) = 1;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  return;
}


undefined4 __thiscall FUN_00518ba0(void *this,char param_1)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  void *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2192;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = 0;
  iVar5 = *(int *)((int)this + 0x368);
  local_18 = this;
  if (*(int *)((int)this + 0x36c) - iVar5 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar5 + uVar6 * 4);
      if (*(char *)(iVar2 + 0x28) == '\0') {
        if (*(char *)(iVar2 + 0x1d) == '\0') {
          if (param_1 == '\0') {
            if (*(char *)(iVar2 + 0x1c) != '\0') goto LAB_00518df3;
            goto LAB_00518c15;
          }
LAB_00518c1d:
          if (0.0 < *(float *)(iVar2 + 0x20)) {
            local_20 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28);
            local_1c = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
            local_28 = (float)*(double *)((int)this + 0x28);
            local_24 = (float)*(double *)((int)this + 0x30);
            local_8 = 1;
            fVar7 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
            iVar5 = *(int *)((int)this + 0x368);
            local_14 = (float)(0x5f3759df - ((uint)fVar7 >> 1));
            fVar7 = (1.5 - fVar7 * 0.5 * local_14 * local_14) * local_14 * fVar7;
            pfVar1 = (float *)(*(int *)(iVar5 + uVar6 * 4) + 0x20);
            local_8 = 0xffffffff;
            if (*pfVar1 <= fVar7 && fVar7 != *pfVar1) goto LAB_00518df3;
          }
        }
        else {
LAB_00518c15:
          if (param_1 != '\0') goto LAB_00518c1d;
        }
        iVar2 = *(int *)(iVar5 + uVar6 * 4);
        local_14 = 0.0;
        bVar3 = true;
        if (*(char *)(iVar2 + 0x90) == '\0') {
          if (*(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x94) >> 2 != 0) {
            do {
              fVar7 = local_14;
              cVar4 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar5 + uVar6 * 4) + 0x94) +
                                             (int)local_14 * 4),
                                   *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
              local_14 = (float)((int)fVar7 + 1);
              bVar3 = (bool)(bVar3 & cVar4 != '\0');
              iVar5 = *(int *)((int)local_18 + 0x368);
              iVar2 = *(int *)(iVar5 + uVar6 * 4);
            } while ((uint)local_14 < (uint)(*(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x94) >> 2));
          }
        }
        else {
          bVar3 = false;
          if (*(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x94) >> 2 != 0) {
            do {
              fVar7 = local_14;
              cVar4 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar5 + uVar6 * 4) + 0x94) +
                                             (int)local_14 * 4),
                                   *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
              if (cVar4 != '\0') {
                bVar3 = true;
              }
              local_14 = (float)((int)fVar7 + 1);
              iVar5 = *(int *)((int)local_18 + 0x368);
              iVar2 = *(int *)(iVar5 + uVar6 * 4);
            } while ((uint)local_14 < (uint)(*(int *)(iVar2 + 0x98) - *(int *)(iVar2 + 0x94) >> 2));
          }
        }
        this = local_18;
        if (bVar3) {
          ExceptionList = local_10;
          return *(undefined4 *)(iVar5 + uVar6 * 4);
        }
      }
LAB_00518df3:
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)((int)this + 0x36c) - iVar5 >> 2));
  }
  ExceptionList = local_10;
  return 0;
}


undefined4 __fastcall FUN_00518e40(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_8;
  
  iVar5 = *(int *)(param_1 + 0x368);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x36c) - iVar5 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar5 + uVar6 * 4);
      if ((*(char *)(iVar1 + 0x1d) == '\0') && (*(char *)(iVar1 + 0x1c) == '\0')) {
        bVar2 = true;
        iVar4 = *(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2;
        local_8 = 0;
        if (*(char *)(iVar1 + 0x90) == '\0') {
          if (iVar4 != 0) {
            do {
              cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar5 + uVar6 * 4) + 0x94) +
                                             local_8 * 4),
                                   *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
              local_8 = local_8 + 1;
              bVar2 = (bool)(bVar2 & cVar3 != '\0');
              iVar5 = *(int *)(param_1 + 0x368);
              iVar1 = *(int *)(iVar5 + uVar6 * 4);
            } while (local_8 < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2));
          }
        }
        else {
          bVar2 = false;
          if (iVar4 != 0) {
            do {
              cVar3 = FUN_004a23b0(*(void **)(*(int *)(*(int *)(iVar5 + uVar6 * 4) + 0x94) +
                                             local_8 * 4),
                                   *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
              if (cVar3 != '\0') {
                bVar2 = true;
              }
              local_8 = local_8 + 1;
              iVar5 = *(int *)(param_1 + 0x368);
              iVar1 = *(int *)(iVar5 + uVar6 * 4);
            } while (local_8 < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2));
          }
        }
        if (bVar2) {
          return *(undefined4 *)(iVar5 + uVar6 * 4);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x36c) - iVar5 >> 2));
  }
  return 0;
}


void __thiscall FUN_00518fb0(void *this,int param_1,int param_2)

{
  undefined4 *this_00;
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c21c0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (undefined4 *)((int)this + 0x32c);
  *(undefined4 *)((int)this + 0x33c) = 0;
  puVar3 = this_00;
  if (0xf < *(uint *)((int)this + 0x340)) {
    puVar3 = (undefined4 *)*this_00;
  }
  *(undefined1 *)puVar3 = 0;
  local_14 = uVar2;
  iVar4 = rand();
  pcVar8 = (&PTR_s_Sorry_to_let_her_go_but_need_the_005df6b4)[iVar4 % 7];
  pcVar7 = pcVar8;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00403640(this_00,pcVar8,(int)pcVar7 - (int)(pcVar8 + 1));
  FUN_00403640(this_00,&DAT_005e7468,1);
  cVar1 = (**(code **)(*(int *)this + 0x24))(uVar2);
  if (cVar1 == '\0') {
    iVar4 = rand();
    pcVar8 = (&PTR_s_Kept_in_pristine_condition__005df678)[iVar4 % 6];
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar4 = rand();
    pcVar8 = (&PTR_s_Fixer_upper__005df61c)[iVar4 % 5];
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  FUN_00403640(this_00,pcVar8,(int)pcVar7 - (int)(pcVar8 + 1));
  iVar4 = rand();
  if (iVar4 % 3 != 0) {
    FUN_00403640(this_00,&DAT_005e7468,1);
    iVar4 = rand();
    pcVar8 = (&PTR_s_Has_a_good_espresso_machine_in_t_005df718)[iVar4 % 7];
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00403640(this_00,pcVar8,(int)pcVar7 - (int)(pcVar8 + 1));
  }
  if (param_1 != 0) {
    FUN_00403640(this_00,&DAT_005e7468,1);
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    puVar5 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_2c,
                          (&PTR_s_Has_an_after_market__s_installed_005df774)[uVar2]);
    local_8 = 0;
    puVar3 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar3 = (undefined4 *)*puVar5;
    }
    FUN_00403640(this_00,puVar3,puVar5[4]);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
  if (param_2 != 0) {
    FUN_00403640(this_00,&DAT_005e7468,1);
    iVar4 = rand();
    puVar5 = (undefined4 *)
             FUN_00591e00((undefined1 *)local_44,(&PTR_s_Needs_a_new__s__005df79c)[iVar4 % 3]);
    local_8 = 1;
    puVar3 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar3 = (undefined4 *)*puVar5;
    }
    FUN_00403640(this_00,puVar3,puVar5[4]);
    if (0xf < local_30) {
      pvVar6 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar6 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int * __thiscall FUN_00519230(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uStack_c;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(undefined4 **)((int)this + 8) == puVar3) {
    iVar12 = FUN_00420fb0(this,param_2,param_3);
    *param_1 = iVar12;
    return param_1;
  }
  uVar1 = *param_3;
  if (param_2 != puVar3) {
    uVar4 = param_3[5];
    puVar13 = puVar3 + -8;
    uStack_c = CONCAT31(uStack_c._1_3_,*(undefined1 *)(param_3 + 6));
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar2 = param_3[7];
    *puVar3 = *puVar13;
    puVar3[1] = puVar3[-7];
    puVar3[2] = puVar3[-6];
    puVar3[3] = puVar3[-5];
    puVar3[4] = puVar3[-4];
    puVar3[5] = puVar3[-3];
    *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(puVar3 + -2);
    puVar3[7] = puVar3[-1];
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
    for (; puVar13 != param_2; puVar13 = puVar13 + -8) {
      uVar9 = puVar13[-7];
      uVar10 = puVar13[-6];
      uVar11 = puVar13[-5];
      puVar3[-8] = puVar13[-8];
      puVar3[-7] = uVar9;
      puVar3[-6] = uVar10;
      puVar3[-5] = uVar11;
      uVar9 = puVar13[-3];
      uVar10 = puVar13[-2];
      uVar11 = puVar13[-1];
      puVar3[-4] = puVar13[-4];
      puVar3[-3] = uVar9;
      puVar3[-2] = uVar10;
      puVar3[-1] = uVar11;
      puVar3 = puVar3 + -8;
    }
    *param_2 = uVar1;
    param_2[1] = uVar5;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    param_2[4] = uVar8;
    param_2[5] = uVar4;
    param_2[6] = uStack_c;
    param_2[7] = uVar2;
    *param_1 = (int)param_2;
    return param_1;
  }
  *puVar3 = uVar1;
  puVar3[1] = param_3[1];
  puVar3[2] = param_3[2];
  puVar3[3] = param_3[3];
  puVar3[4] = param_3[4];
  puVar3[5] = param_3[5];
  *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(param_3 + 6);
  puVar3[7] = param_3[7];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  *param_1 = (int)param_2;
  return param_1;
}


void __fastcall FUN_00519340(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (int)pvVar1 & 0xffffffe0U)) &&
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


int * __thiscall FUN_005193d0(void *this,int *param_1)

{
  if (this != param_1) {
    FUN_00413270(this);
    *(int *)this = *param_1;
    *(int *)((int)this + 4) = param_1[1];
    *(int *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return this;
}


void __thiscall FUN_00519410(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afb10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)this;
  local_14 = piVar1;
  if ((param_2 == (int *)*piVar1) && (param_3 == piVar1)) {
    local_8 = 0;
    piVar2 = (int *)piVar1[1];
    if (*(char *)(piVar1[1] + 0xd) == '\0') {
      do {
        FUN_004cb180((int *)piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_005adb3f(piVar2);
        piVar2 = piVar1;
      } while (*(char *)((int)piVar1 + 0xd) == '\0');
      piVar1 = *(int **)this;
    }
    piVar1[1] = (int)local_14;
    **(int **)this = (int)local_14;
    *(int **)(*(int *)this + 8) = local_14;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    ExceptionList = local_10;
    return;
  }
  if (param_2 != param_3) {
    do {
      piVar1 = param_2;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&param_2);
      local_14 = piVar1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_14);
      piVar1 = FUN_004193e0(this,piVar1);
      FUN_005adb3f(piVar1);
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00519500(void *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)this;
  puVar1 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    puVar2 = puVar1;
    do {
      if ((int)puVar2[4] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_2 < (int)puVar2[4])) {
          puVar4 = puVar2;
        }
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    puVar1 = (undefined4 *)*puVar4;
  }
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    do {
      if (*param_2 < (int)puVar1[4]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  *param_1 = (int)puVar5;
  param_1[1] = (int)puVar4;
  return;
}


void __thiscall FUN_00519580(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  _Dst = *(void **)this;
  uVar7 = (int)param_2 - (int)param_1 >> 3;
  uVar1 = *(int *)((int)this + 4) - (int)_Dst >> 3;
  uVar2 = *(int *)((int)this + 8) - (int)_Dst >> 3;
  if (uVar7 <= uVar2) {
    if (uVar1 < uVar7) {
      memmove(_Dst,param_1,uVar1 * 8);
      puVar8 = *(undefined4 **)((int)this + 4);
      for (puVar6 = param_1 + uVar1 * 2; puVar6 != param_2; puVar6 = puVar6 + 2) {
        *puVar8 = *puVar6;
        puVar8[1] = puVar6[1];
        puVar8 = puVar8 + 2;
      }
      *(undefined4 **)((int)this + 4) = puVar8;
      return;
    }
    memmove(_Dst,param_1,(int)param_2 - (int)param_1);
    *(void **)((int)this + 4) = (void *)((int)_Dst + uVar7 * 8);
    return;
  }
  if (uVar7 < 0x20000000) {
    uVar1 = uVar7;
    if ((uVar2 <= 0x1fffffff - (uVar2 >> 1)) && (uVar1 = uVar2 + (uVar2 >> 1), uVar1 < uVar7)) {
      uVar1 = uVar7;
    }
    if (_Dst != (void *)0x0) {
      pvVar5 = _Dst;
      if ((0xfff < uVar2 * 8) &&
         (pvVar5 = *(void **)((int)_Dst + -4), 0x1f < (uint)((int)_Dst + (-4 - (int)pvVar5))))
      goto LAB_0051968f;
      FUN_005adb3f(pvVar5);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    if (uVar1 != 0) {
      if (0x1fffffff < uVar1) goto LAB_00519744;
      uVar2 = uVar1 * 8;
      if (uVar2 < 0x1000) {
        if (uVar2 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_005adb0f(uVar2);
        }
      }
      else {
        sVar3 = uVar2 + 0x23;
        if (sVar3 <= uVar1 * 8) {
          sVar3 = 0xffffffff;
        }
        iVar4 = FUN_005adb0f(sVar3);
        if (iVar4 == 0) {
LAB_0051968f:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        uVar1 = iVar4 + 0x23U & 0xffffffe0;
        *(int *)(uVar1 - 4) = iVar4;
      }
      *(uint *)this = uVar1;
      *(uint *)((int)this + 4) = uVar1;
      *(uint *)((int)this + 8) = *(int *)this + uVar2;
    }
    puVar6 = *(undefined4 **)this;
    for (; param_1 != param_2; param_1 = param_1 + 2) {
      *puVar6 = *param_1;
      puVar6[1] = param_1[1];
      puVar6 = puVar6 + 2;
    }
    *(undefined4 **)((int)this + 4) = puVar6;
    return;
  }
LAB_00519744:
                    // WARNING: Subroutine does not return
  FUN_00403b30();
}


void __fastcall FUN_00519750(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *_Src;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *_Dst;
  float in_XMM1_Da;
  undefined4 uVar7;
  undefined4 *in_stack_ffffff9c;
  undefined1 auStack_4c [12];
  undefined4 uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1[0xb] - param_1[10] >> 2 != 0) &&
     (fVar1 = (float)param_1[9], param_1[9] = (int)(fVar1 - in_XMM1_Da), fVar1 - in_XMM1_Da <= 0.0))
  {
    iVar3 = rand();
    param_1[9] = (int)(float)(iVar3 % 6 + 5);
    FUN_005198b0(param_1);
    puVar2 = *(undefined4 **)param_1[10];
    FUN_004024e0(auStack_4c,puVar2 + 0xe);
    local_8 = 0;
    FUN_004024e0(&stack0xffffff9c,puVar2 + 1);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar7 = *puVar2;
    this = (void *)FUN_00412da0();
    local_8 = 0xffffffff;
    FUN_0042f3f0(this,uVar7,in_stack_ffffff9c);
    _Src = (undefined4 *)param_1[0xb];
    _Dst = (undefined4 *)param_1[10];
    if (_Dst != _Src) {
      do {
        if ((undefined4 *)*_Dst == puVar2) break;
        _Dst = _Dst + 1;
      } while (_Dst != _Src);
      if (_Dst != _Src) {
        puVar4 = _Dst + 1;
        uVar5 = 0;
        uVar6 = (uint)((int)_Src + (3 - (int)puVar4)) >> 2;
        if (_Src < puVar4) {
          uVar6 = 0;
        }
        if (uVar6 != 0) {
          do {
            if ((undefined4 *)*puVar4 != puVar2) {
              *_Dst = (undefined4 *)*puVar4;
              _Dst = _Dst + 1;
            }
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar5 != uVar6);
        }
        if (_Dst != _Src) {
          iVar3 = param_1[0xb];
          uStack_40 = 0x519878;
          memmove(_Dst,_Src,iVar3 - (int)_Src);
          param_1[0xb] = (iVar3 - (int)_Src) + (int)_Dst;
        }
      }
    }
    FUN_0042f300(puVar2);
  }
  ExceptionList = local_10;
  return;
}


char __fastcall FUN_005198b0(int *param_1)

{
  float fVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2232;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28);
  local_14 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
  local_20 = (float)*(double *)(*param_1 + 0x28);
  local_1c = (float)*(double *)(*param_1 + 0x30);
  local_8 = 1;
  fVar2 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_20,(Vec2 *)&local_18);
  fVar1 = (float)(0x5f3759df - ((uint)fVar2 >> 1));
  ExceptionList = local_10;
  return ((1.5 - fVar2 * 0.5 * fVar1 * fVar1) * fVar1 * fVar2 < 300.0) * '\x04' + '`';
}


void __thiscall FUN_005199a0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 **this_00;
  char cVar1;
  undefined4 *_Dst;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000020;
  uint in_stack_00000030;
  uint in_stack_00000034;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b21b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  _Dst = (undefined4 *)FUN_005adb0f(0x50);
  memset(_Dst,0,0x50);
  this_00 = (undefined4 **)(_Dst + 1);
  _Dst[5] = 0;
  puVar4 = _Dst + 0xe;
  _Dst[6] = 0xf;
  *(undefined1 *)this_00 = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0xf;
  *(undefined1 *)(_Dst + 7) = 0;
  _Dst[0x12] = 0;
  _Dst[0x13] = 0xf;
  *(undefined1 *)puVar4 = 0;
  *_Dst = param_1;
  local_14 = _Dst;
  if (this_00 != &param_2) {
    ppuVar2 = &param_2;
    if (0xf < in_stack_0000001c) {
      ppuVar2 = (undefined4 **)param_2;
    }
    FUN_00402690(this_00,ppuVar2,in_stack_00000018);
  }
  if ((undefined4 **)puVar4 != &stack0x00000020) {
    puVar3 = &stack0x00000020;
    if (0xf < in_stack_00000034) {
      puVar3 = in_stack_00000020;
    }
    FUN_00402690(puVar4,puVar3,in_stack_00000030);
  }
  cVar1 = FUN_005198b0(this);
  _Dst[0xd] = CONCAT31(extraout_var,cVar1);
  FUN_0042efb0((int)_Dst);
  puVar4 = *(undefined4 **)((int)this + 0x2c);
  if (*(undefined4 **)((int)this + 0x30) == puVar4) {
    FUN_00414080((void *)((int)this + 0x28),puVar4,&local_14);
  }
  else {
    *puVar4 = _Dst;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 4;
  }
  if ((*(int *)((int)this + 0x2c) - *(int *)((int)this + 0x28) & 0xfffffffcU) == 4) {
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (0xf < in_stack_0000001c) {
    puVar4 = param_2;
    if (0xfff < in_stack_0000001c + 1) {
      puVar4 = (undefined4 *)param_2[-1];
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar4);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    puVar4 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      puVar4 = (undefined4 *)in_stack_00000020[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((int)in_stack_00000020 + (-4 - (int)puVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar4);
  }
  ExceptionList = local_10;
  return;
}


int __cdecl FUN_00519b40(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte **ppbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte **ppbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005be1b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  ppbVar7 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar7 = (byte **)param_1;
  }
  iVar8 = (int)((int)ppbVar3 + in_stack_00000014) - (int)ppbVar7;
  iVar9 = 0;
  if ((byte **)((int)ppbVar3 + in_stack_00000014) < ppbVar7) {
    iVar8 = 0;
  }
  if (iVar8 != 0) {
    do {
      iVar4 = tolower((int)*(char *)(iVar9 + (int)ppbVar7));
      *(char *)(iVar9 + (int)ppbVar3) = (char)iVar4;
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar8);
  }
  pbVar2 = param_1;
  iVar8 = 0;
  do {
    pbVar10 = (&PTR_DAT_005df7c4)[iVar8];
    pbVar5 = pbVar10;
    do {
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    ppbVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar3 = (byte **)pbVar2;
    }
    uVar6 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,pbVar10,(int)pbVar5 - (int)(pbVar10 + 1))
    ;
    if ((char)uVar6 != '\0') goto LAB_00519c0c;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  iVar8 = 0;
LAB_00519c0c:
  if (0xf < in_stack_00000018) {
    pbVar10 = pbVar2;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar10 = *(byte **)(pbVar2 + -4), (byte *)0x1f < pbVar2 + (-4 - (int)pbVar10))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar10);
  }
  ExceptionList = local_10;
  return iVar8;
}


undefined1 * __thiscall FUN_00519c60(void *this,undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c22ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xf;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xf;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0xf;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0xf;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0xf;
  *(undefined1 *)((int)this + 0xa8) = 0;
  local_8 = 7;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0x44c;
  *(undefined1 *)((int)this + 0xd0) = 0x43;
  cocos2d::Color3B::Color3B((Color3B *)((int)this + 0xd1),'\0','c','2');
  *(undefined2 *)((int)this + 0xd4) = 0x3032;
  *(undefined4 *)((int)this + 0xd8) = 10000;
  cocos2d::Color3B::Color3B((Color3B *)((int)this + 0xdc),0xff,'\0','\0');
  *(undefined2 *)((int)this + 0xdf) = 1;
  *(undefined4 *)((int)this + 0xe4) = 6;
  *(undefined4 *)((int)this + 0xe8) = 6;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0xf;
  *(undefined1 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0x3f99999a;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0xf;
  *(undefined1 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x158) = param_1;
  *(undefined4 *)((int)this + 0x15c) = 8;
  *(undefined4 *)((int)this + 0x160) = 0xc;
  *(undefined4 *)((int)this + 0x164) = 100;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  ExceptionList = local_10;
  return this;
}


undefined4 __thiscall FUN_00519f30(void *this,byte *param_1)

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
  iVar1 = *(int *)((int)this + 0x184);
  uVar6 = *(int *)((int)this + 0x188) - iVar1 >> 2;
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
        goto LAB_00519f88;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar8 = 0;
LAB_00519f88:
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


void __thiscall
FUN_00519fd0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
            undefined8 param_5)

{
  undefined4 *puVar1;
  char **ppcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *in_stack_ffffff7c;
  undefined4 *local_5c;
  void *local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 *local_48;
  int local_44;
  undefined4 *local_3c;
  char *local_38;
  undefined4 *local_34;
  int *local_30;
  char *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char *pcStack_20;
  int local_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c22f0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_58 = this;
  if ((uint)param_5 != 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x40);
    local_34 = puVar1 + 6;
    puVar1[4] = 0;
    puVar1[5] = 0xf;
    *(undefined1 *)puVar1 = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0xf;
    *(undefined1 *)local_34 = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    ppcVar2 = &param_1;
    if (0xf < param_5._4_4_) {
      ppcVar2 = (char **)param_1;
    }
    local_5c = puVar1;
    local_3c = puVar1;
    if (*(char *)ppcVar2 == '$') {
      *(undefined1 *)(puVar1 + 0xc) = 1;
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (char *)((uint)local_2c & 0xffffff00);
      if ((uint)param_5 == 0) {
                    // WARNING: Subroutine does not return
        FUN_004036c0();
      }
      uVar3 = (uint)param_5;
      if ((uint)param_5 - 1 < (uint)param_5) {
        uVar3 = (uint)param_5 - 1;
      }
      ppcVar2 = &param_1;
      if (0xf < param_5._4_4_) {
        ppcVar2 = (char **)param_1;
      }
      FUN_00402690(&local_2c,(void *)((int)ppcVar2 + 1),uVar3);
      FUN_00401b20((int *)&param_1);
      param_1 = local_2c;
      param_2 = uStack_28;
      param_3 = uStack_24;
      param_4 = pcStack_20;
      param_5 = CONCAT44(uStack_18,local_1c);
    }
    FUN_004024e0(&stack0xffffff7c,&param_1);
    FUN_00592d70(&local_54,',',(undefined4 *)in_stack_ffffff7c);
    local_8._0_1_ = 1;
    FUN_004024e0(&stack0xffffff7c,local_54);
    FUN_00592d70(&local_48,':',(undefined4 *)in_stack_ffffff7c);
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar5 = local_44 - (int)local_48 >> 0x1f;
    if (((local_44 - (int)local_48) / 0x18 + iVar5 != iVar5) && (local_3c != local_48)) {
      puVar8 = local_48;
      if (0xf < (uint)local_48[5]) {
        puVar8 = (undefined4 *)*local_48;
      }
      FUN_00402690(local_3c,puVar8,local_48[4]);
    }
    puVar8 = local_48;
    if (1 < (uint)((local_44 - (int)local_48) / 0x18)) {
      pcVar10 = (char *)(local_48 + 6);
      pcVar7 = pcVar10;
      local_38 = pcVar10;
      if (0xf < (uint)local_48[0xb]) {
        local_38 = *(char **)pcVar10;
        pcVar7 = *(char **)pcVar10;
      }
      if (0xf < (uint)local_48[0xb]) {
        pcVar10 = *(char **)pcVar10;
      }
      FUN_00413ec0(&local_30,toupper_exref,pcVar10,pcVar7 + local_48[10],local_38);
      puVar8 = local_48;
      pbVar9 = (byte *)(local_48 + 6);
      if (0xf < (uint)local_48[0xb]) {
        pbVar9 = (byte *)local_48[6];
      }
      uVar3 = FUN_004031f0(pbVar9,local_48[10],&DAT_0061c74c,4);
      if ((char)uVar3 != '\0') {
        *(undefined1 *)((int)local_3c + 0x31) = 1;
        puVar8 = local_48;
      }
    }
    if ((2 < (uint)((local_44 - (int)puVar8) / 0x18)) && (puVar4 = puVar8 + 0xc, local_34 != puVar4)
       ) {
      if (0xf < (uint)puVar8[0x11]) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402690(local_34,puVar4,puVar8[0x10]);
    }
    local_38 = (char *)0x1;
    if (1 < (uint)((local_50 - (int)local_54) / 0x18)) {
      local_34 = (undefined4 *)0x18;
      do {
        FUN_004024e0(&stack0xffffff7c,(undefined4 *)((int)local_34 + (int)local_54));
        FUN_00592d70(&pcStack_20,':',(undefined4 *)in_stack_ffffff7c);
        local_8 = CONCAT31(local_8._1_3_,3);
        if ((local_1c - (int)pcStack_20) / 0x18 == 1) {
          FUN_004024e0(&stack0xffffff7c,(undefined4 *)((int)local_54 + (int)local_34));
          iVar5 = FUN_004a8020(in_stack_ffffff7c);
          if (iVar5 != 0) {
            local_30 = (int *)FUN_005adb0f(8);
            *local_30 = -1;
            local_30[1] = iVar5;
            puVar8 = (undefined4 *)puVar1[0xe];
            if ((undefined4 *)puVar1[0xf] == puVar8) {
LAB_0051a316:
              FUN_00414080(puVar1 + 0xd,puVar8,&local_30);
            }
            else {
              *puVar8 = local_30;
              puVar1[0xe] = puVar1[0xe] + 4;
            }
          }
        }
        else {
          FUN_004024e0(&stack0xffffff7c,(undefined4 *)(pcStack_20 + 0x18));
          local_30 = (int *)FUN_004a8020(in_stack_ffffff7c);
          if (local_30 != (int *)0x0) {
            piVar6 = (int *)FUN_005adb0f(8);
            pcVar7 = pcStack_20;
            if (0xf < *(uint *)(pcStack_20 + 0x14)) {
              pcVar7 = *(char **)pcStack_20;
            }
            iVar5 = atoi(pcVar7);
            *piVar6 = iVar5;
            piVar6[1] = (int)local_30;
            puVar8 = (undefined4 *)puVar1[0xe];
            local_30 = piVar6;
            if ((undefined4 *)puVar1[0xf] == puVar8) goto LAB_0051a316;
            *puVar8 = piVar6;
            puVar1[0xe] = puVar1[0xe] + 4;
          }
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_004025a0((int *)&pcStack_20);
        local_38 = local_38 + 1;
        local_34 = local_34 + 6;
      } while (local_38 < (char *)((local_50 - (int)local_54) / 0x18));
    }
    puVar1 = *(undefined4 **)((int)local_58 + 0x188);
    if (*(undefined4 **)((int)local_58 + 0x18c) == puVar1) {
      FUN_00414080((void *)((int)local_58 + 0x184),puVar1,&local_5c);
    }
    else {
      *puVar1 = local_3c;
      *(int *)((int)local_58 + 0x188) = *(int *)((int)local_58 + 0x188) + 4;
    }
    FUN_004025a0((int *)&local_48);
    FUN_004025a0((int *)&local_54);
  }
  if (0xf < param_5._4_4_) {
    pcVar7 = param_1;
    if ((0xfff < param_5._4_4_ + 1) &&
       (pcVar7 = *(char **)(param_1 + -4), (char *)0x1f < param_1 + (-4 - (int)pcVar7))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pcVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0051a3f0(void *this,undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = *(int **)((int)this + 0x118);
  uVar5 = 0;
  iVar4 = *(int *)((int)this + 0x11c) - (int)piVar1;
  iVar2 = iVar4 >> 0x1f;
  iVar4 = iVar4 / 0xc + iVar2;
  piVar3 = piVar1;
  if (iVar4 != iVar2) {
    do {
      if (*piVar3 == param_2) {
        iVar2 = piVar1[uVar5 * 3 + 2];
        *param_1 = *(undefined8 *)(piVar1 + uVar5 * 3);
        *(int *)(param_1 + 1) = iVar2;
        return;
      }
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar5 < (uint)(iVar4 - iVar2));
  }
  iVar2 = piVar1[2];
  *param_1 = *(undefined8 *)piVar1;
  *(int *)(param_1 + 1) = iVar2;
  return;
}


int __fastcall FUN_0051a470(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x158);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


void __thiscall FUN_0051a490(void *this,float param_1,float param_2,void *param_3)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  uint in_stack_00000020;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c2345;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(float *)this = param_1;
  *(float *)((int)this + 4) = param_2;
  local_8 = 2;
  uStack_7 = 0;
  this_00 = (int *)((int)this + 8);
  local_14 = uVar5;
  FUN_004024e0(this_00,&param_3);
  _local_8 = CONCAT31(uStack_7,3);
  *(undefined1 *)((int)this + 0x20) = 0;
  if ((*(float *)this == -9999.0) && (*(float *)((int)this + 4) == -9999.0)) {
    bVar4 = cc_assert_script_compatible("Invalid destination for ship.");
    if (!bVar4) {
      cocos2d::log("Assert failed: %s","Invalid destination for ship.",uVar5);
    }
  }
  if (2 < *(uint *)((int)this + 0x18)) {
    piVar6 = this_00;
    if (0xf < *(uint *)((int)this + 0x1c)) {
      piVar6 = (int *)*this_00;
    }
    if ((char)*piVar6 == '!') {
      *(undefined1 *)((int)this + 0x20) = 1;
      piVar6 = (int *)FUN_004033e0(this_00,(undefined1 *)local_2c,1,*(int *)((int)this + 0x18) - 1);
      if (this_00 != piVar6) {
        FUN_00401b20(this_00);
        iVar1 = piVar6[1];
        iVar2 = piVar6[2];
        iVar3 = piVar6[3];
        *this_00 = *piVar6;
        *(int *)((int)this + 0xc) = iVar1;
        *(int *)((int)this + 0x10) = iVar2;
        *(int *)((int)this + 0x14) = iVar3;
        *(undefined8 *)((int)this + 0x18) = *(undefined8 *)(piVar6 + 4);
        piVar6[4] = 0;
        piVar6[5] = 0xf;
        *(undefined1 *)piVar6 = 0;
      }
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
        if (0xfff < local_18 + 1) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar7);
      }
    }
  }
  if (0xf < in_stack_00000020) {
    pvVar7 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar7 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int FUN_0051a630(void *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar2 = *(int **)(*(int *)((int)param_1 + 0x254) + 0x118);
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x254) + 0x11c) - (int)piVar2;
  iVar1 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0xc + iVar1;
  if (iVar3 != iVar1) {
    do {
      if (*piVar2 == param_2) {
        iVar1 = FUN_0050bff0(param_1,*piVar2);
        return iVar1 * 5;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar4 < (uint)(iVar3 - iVar1));
  }
  return 0;
}


int FUN_0051a690(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar3 = 0;
  uVar2 = 0;
  local_8 = *(int *)(*(int *)((int)param_1 + 0x254) + 0x118);
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x254) + 0x11c) - local_8;
  iVar4 = iVar1 >> 0x1f;
  if (iVar1 / 0xc + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      iVar1 = FUN_0050bff0(param_1,*(int *)(iVar4 + local_8));
      iVar3 = iVar3 + iVar1;
      iVar4 = iVar4 + 0xc;
      uVar2 = uVar2 + 1;
      local_8 = *(int *)(*(int *)((int)param_1 + 0x254) + 0x118);
    } while (uVar2 < (uint)((*(int *)(*(int *)((int)param_1 + 0x254) + 0x11c) - local_8) / 0xc));
  }
  return iVar3;
}


void FUN_0051a720(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  
  iVar1 = FUN_0051a690(param_1);
  if (iVar1 != 0) {
    piVar5 = (int *)(DAT_0065b5cc + 0xd0);
    param_1 = (void *)0x0;
    iVar1 = *piVar5;
    iVar3 = *(int *)(*(int *)(iVar1 + 0x254) + 0x11c) - *(int *)(*(int *)(iVar1 + 0x254) + 0x118);
    iVar4 = iVar3 >> 0x1f;
    if (iVar3 / 0xc + iVar4 != iVar4) {
      iVar4 = 0;
      do {
        local_8 = *(int *)(iVar4 + *(int *)(*(int *)(iVar1 + 0x254) + 0x118));
        piVar2 = FUN_00420f40((void *)(*piVar5 + 0x14c),&local_8);
        iVar4 = iVar4 + 0xc;
        piVar5 = (int *)(DAT_0065b5cc + 0xd0);
        param_1 = (void *)((int)param_1 + 1);
        *piVar2 = 0;
        iVar1 = *piVar5;
      } while (param_1 < (void *)((*(int *)(*(int *)(iVar1 + 0x254) + 0x11c) -
                                  *(int *)(*(int *)(iVar1 + 0x254) + 0x118)) / 0xc));
    }
  }
  return;
}


void FUN_0051a7e0(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *in_stack_ffffffd0;
  void *pvVar5;
  uint local_c;
  int local_8;
  
  local_c = 0;
  iVar4 = 0;
  iVar2 = *(int *)((int)param_1 + 0x254);
  iVar3 = *(int *)(iVar2 + 0x11c) - *(int *)(iVar2 + 0x118);
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar1 != iVar1) {
    local_8 = 0;
    do {
      FUN_0050bff0(param_1,*(int *)(*(int *)(iVar2 + 0x118) + local_8));
      iVar2 = FUN_0050bff0(param_1,*(int *)(*(int *)(*(int *)((int)param_1 + 0x254) + 0x118) +
                                           local_8));
      iVar4 = iVar4 + iVar2;
      in_stack_ffffffd0 = "`%%%s: `%c%d/%d `7(`$%dc`7 to repair)";
      FUN_0042de40(param_2,"`%%%s: `%c%d/%d `7(`$%dc`7 to repair)");
      local_c = local_c + 1;
      local_8 = local_8 + 0xc;
      iVar2 = *(int *)((int)param_1 + 0x254);
    } while (local_c < (uint)((*(int *)(iVar2 + 0x11c) - *(int *)(iVar2 + 0x118)) / 0xc));
  }
  FUN_0042dcd0((int)param_2);
  if (iVar4 == 0) {
    pvVar5 = (void *)((uint)in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0,"`0** ship undamaged **",0x16);
    FUN_0042ddb0(param_2,pvVar5);
    return;
  }
  FUN_0042de40(param_2,"`$ Hull damage: %d units");
  FUN_0042de40(param_2,"`7 Cost to repair: `$%dc");
  return;
}


int FUN_0051a960(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  piVar4 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
  iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - (int)piVar4 >> 2;
  if (iVar6 == 0) {
    return 0;
  }
  do {
    iVar5 = 0;
    puVar2 = *(undefined4 **)(*piVar4 + 0xc);
    iVar3 = 0x14;
    do {
      puVar2 = puVar2 + 1;
      if (((float *)*puVar2 != (float *)0x0) && (fVar1 = *(float *)*puVar2, fVar1 < 100.0)) {
        iVar5 = (int)((100.0 - fVar1) + (float)iVar5);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar4 = piVar4 + 1;
    local_8 = local_8 + (int)((float)iVar5 * 0.02);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return local_8;
}


undefined4 * __thiscall FUN_0051aa00(void *this,int param_1,void *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  uint in_stack_0000001c;
  uint in_stack_ffffffac;
  undefined4 *puVar3;
  uint in_stack_ffffffc4;
  byte *pbVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar4 = (byte *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,&PTR_005ce008,0);
  local_8._0_1_ = 1;
  puVar3 = (undefined4 *)(in_stack_ffffffac & 0xffffff00);
  FUN_00402690(&stack0xffffffac,&PTR_005ce008,0);
  local_8._0_1_ = 0;
  FUN_005099e0(this,param_1,9,puVar3);
  local_8._0_1_ = 2;
  *(undefined ***)this = SpaceStation::vftable;
  *(undefined2 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0xffffffff;
  FUN_004024e0(&stack0xffffffc4,&param_2);
  local_8._0_1_ = 3;
  pvVar1 = (void *)FUN_00412490();
  local_8 = CONCAT31(local_8._1_3_,2);
  uVar2 = FUN_004a0d10(pvVar1,pbVar4);
  *(undefined4 *)((int)this + 0x390) = uVar2;
  *(undefined4 *)((int)this + 0x394) = 0x50;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0xf;
  *(undefined1 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 1;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 10;
  *(undefined4 *)((int)this + 0x3e0) = 0x16;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 1000) = 0x3c;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
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
  return this;
}


void __thiscall FUN_0051ac80(void *this,int param_1)

{
  int *_Src;
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  size_t _Size;
  undefined4 local_c [2];
  
  _Src = *(int **)((int)this + 0x3d4);
  for (piVar2 = *(int **)((int)this + 0x3d0); (piVar2 != _Src && (*piVar2 != param_1));
      piVar2 = piVar2 + 1) {
  }
  if (piVar2 == _Src) {
    pcVar3 = "%s: vessel \'%s\' was NOT listed as docked, but was asked to undock.";
  }
  else {
    puVar1 = FUN_00414000(local_c,&param_1,*(int **)((int)this + 0x3d0),_Src);
    piVar2 = (int *)*puVar1;
    if (piVar2 != _Src) {
      _Size = *(int *)((int)this + 0x3d4) - (int)_Src;
      memmove(piVar2,_Src,_Size);
      *(size_t *)((int)this + 0x3d4) = _Size + (int)piVar2;
    }
    pcVar3 = "%s: vessel \'%s\' has undocked from us.";
  }
  FUN_00591070(&DAT_005cdc70,pcVar3);
  return;
}


int __thiscall FUN_0051ad50(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  piVar4 = *(int **)((int)this + 0x3d0);
  piVar1 = *(int **)((int)this + 0x3d4);
  if (piVar4 != piVar1) {
    do {
      if (*piVar4 == param_1) break;
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
    if (piVar4 != piVar1) {
      pcVar5 = "%s: vessel \'%s\' asked to dock, but was already docked.";
      goto LAB_0051ade3;
    }
  }
  piVar4 = *(int **)((int)this + 0x3d4);
  if (*(int **)((int)this + 0x3d8) == piVar4) {
    FUN_00414080((void *)((int)this + 0x3d0),piVar4,&param_1);
  }
  else {
    *piVar4 = param_1;
    *(int *)((int)this + 0x3d4) = *(int *)((int)this + 0x3d4) + 4;
  }
  pcVar5 = "%s: vessel \'%s\' docked with us";
LAB_0051ade3:
  iVar3 = param_1;
  iVar2 = FUN_00591070(&DAT_005cdc70,pcVar5);
  if (*(char *)(iVar3 + 0x234) != '\0') {
    iVar3 = rand();
    iVar2 = iVar3 / 10;
    *(int *)((int)this + 0x3b4) = iVar3 % 10 + 1;
  }
  return iVar2;
}


undefined1 __thiscall FUN_0051ae20(void *this,byte *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte **ppbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined1 local_5;
  
  pbVar3 = param_1;
  iVar1 = *(int *)((int)this + 0x414);
  uVar2 = (*(int *)((int)this + 0x418) - iVar1) / 0x18;
  uVar8 = 0;
  if (uVar2 != 0) {
    iVar9 = 0;
    do {
      pbVar7 = (byte *)(iVar1 + iVar9);
      ppbVar4 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar4 = (byte **)pbVar3;
      }
      pbVar6 = pbVar7;
      if (0xf < *(uint *)(pbVar7 + 0x14)) {
        pbVar6 = *(byte **)pbVar7;
      }
      uVar5 = FUN_004031f0(pbVar6,*(uint *)(pbVar7 + 0x10),(byte *)ppbVar4,in_stack_00000014);
      if ((char)uVar5 != '\0') {
        local_5 = 1;
        goto LAB_0051ae90;
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar8 < uVar2);
  }
  local_5 = 0;
LAB_0051ae90:
  if (0xf < in_stack_00000018) {
    pbVar7 = pbVar3;
    if (0xfff < in_stack_00000018 + 1) {
      pbVar7 = *(byte **)(pbVar3 + -4);
      if ((byte *)0x1f < pbVar3 + (-4 - (int)pbVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pbVar7);
  }
  return local_5;
}


uint __thiscall FUN_0051aee0(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if ((char)param_2 == '\0') {
    if (*(int *)((int)this + 0x3dc) == 0) goto LAB_0051afb4;
    if ((*(int *)((int)this + 0x390) != 0) &&
       (uVar3 = (uint)*(float *)(*(int *)((int)this + 0x390) + 0xd0), 0 < (int)uVar3)) {
      return uVar3 & 0xffffff00;
    }
  }
  if (*(int *)((int)this + 0x3dc) != 0) {
    uVar3 = 0;
    puVar4 = *(undefined4 **)((int)this + 0x3c4);
    uVar5 = *(int *)((int)this + 0x3c8) - (int)puVar4 >> 2;
    if (uVar5 != 0) {
      do {
        if (*(int *)*puVar4 == param_1) {
          iVar2 = *(int *)(*(int *)((int)this + 0x3c4) + uVar3 * 4);
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 8) = 2;
            return CONCAT31((int3)((uint)iVar2 >> 8),1);
          }
          break;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < uVar5);
    }
  }
  param_2 = (int *)FUN_005adb0f(0xc);
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 2;
  piVar1 = *(int **)((int)this + 0x3c8);
  if (*(int **)((int)this + 0x3cc) != piVar1) {
    *piVar1 = (int)param_2;
    *(int *)((int)this + 0x3c8) = *(int *)((int)this + 0x3c8) + 4;
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  in_EAX = FUN_004141e0((void *)((int)this + 0x3c4),piVar1,&param_2);
LAB_0051afb4:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


void __fastcall FUN_0051afc0(void *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  void **ppvVar11;
  byte *in_stack_ffffff34;
  void *local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  int local_88;
  int local_84;
  uint local_80;
  void *local_7c;
  int *local_78;
  uint local_74;
  void *local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  void *local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint uStack_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  puStack_18 = &LAB_005c23d3;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  bVar10 = false;
  local_8c = 0;
  if (*(int *)((int)param_1 + 0x254) != 0) {
    bVar10 = *(int *)(*(int *)((int)param_1 + 0x254) + 0x158) == 1;
  }
  local_7c = param_1;
  puVar3 = &stack0xfffffffc;
  if (bVar10) {
    FUN_0051c1b0(*(uint **)((int)param_1 + 0x3ec),*(uint **)((int)param_1 + 0x3f0));
    *(undefined4 *)((int)param_1 + 0x3f0) = *(undefined4 *)((int)param_1 + 0x3ec);
    FUN_004024e0(&stack0xffffff34,(undefined4 *)((int)param_1 + 0x68));
    local_78 = FUN_004a73f0(DAT_0065b5cc,'\0',in_stack_ffffff34);
    local_88 = 0;
    local_84 = 0;
    iVar5 = local_78[6];
    local_74 = 0;
    if (local_78[7] - iVar5 >> 2 != 0) {
      do {
        iVar1 = *(int *)(iVar5 + local_74 * 4);
        iVar9 = local_74 * 4;
        local_80 = 0;
        if (*(int *)(iVar1 + 0x94) - *(int *)(iVar1 + 0x90) >> 2 != 0) {
          do {
            iVar1 = local_80 * 4;
            iVar5 = *(int *)(iVar1 + *(int *)(*(int *)(iVar5 + iVar9) + 0x90));
            if ((*(int *)(iVar5 + 0x3c) == 6) && (*(char *)(iVar5 + 0xfc) != '\0')) {
              local_84 = local_84 + 1;
              iVar5 = *(int *)(iVar5 + 0xf8);
              if ((((0 < iVar5) || (iVar5 = *(int *)((int)local_7c + 1000), iVar9 = 0, 0 < iVar5))
                  && (iVar9 = iVar5, iVar5 == 100)) || (iVar5 = rand(), iVar5 % 100 < iVar9)) {
                FUN_004024e0(&stack0xffffff34,
                             (undefined4 *)
                             (*(int *)(*(int *)(*(int *)(local_78[6] + local_74 * 4) + 0x90) + iVar1
                                      ) + 0x58));
                ppvVar11 = local_70;
                FUN_0051b490(local_7c,(undefined1 *)ppvVar11,in_stack_ffffff34);
                local_14 = 0;
                FUN_004024e0(&stack0xffffff30,local_70);
                uVar6 = FUN_004a77f0(ppvVar11);
                if (uVar6 != 0) {
                  FUN_004024e0(local_a8,(undefined4 *)
                                        (*(int *)(*(int *)(*(int *)(local_78[6] + local_74 * 4) +
                                                          0x90) + iVar1) + 0x58));
                  local_14._0_1_ = 1;
                  local_58 = uVar6;
                  FUN_004024e0(&local_54,local_a8);
                  local_14._0_1_ = 0;
                  uVar4 = (undefined1)local_14;
                  local_14._0_1_ = 0;
                  if (0xf < local_94) {
                    pvVar7 = local_a8[0];
                    if ((0xfff < local_94 + 1) &&
                       (pvVar7 = *(void **)((int)local_a8[0] + -4),
                       0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar7)))) goto LAB_0051b42b;
                    FUN_005adb3f(pvVar7);
                  }
                  local_98 = 0;
                  local_94 = 0xf;
                  local_a8[0] = (void *)((uint)local_a8[0] & 0xffffff00);
                  local_14._0_1_ = 2;
                  puVar2 = *(uint **)((int)local_7c + 0x3f0);
                  if (*(uint **)((int)local_7c + 0x3f4) == puVar2) {
                    FUN_0051bfc0((void *)((int)local_7c + 0x3ec),puVar2,&local_58);
                    uVar8 = uStack_40;
                  }
                  else {
                    *puVar2 = local_58;
                    puVar2[5] = 0;
                    puVar2[6] = 0;
                    puVar2[1] = (uint)local_54;
                    puVar2[2] = uStack_50;
                    puVar2[3] = uStack_4c;
                    puVar2[4] = uStack_48;
                    local_54 = (void *)((uint)local_54 & 0xffffff00);
                    puVar2[5] = local_44;
                    puVar2[6] = uStack_40;
                    *(int *)((int)local_7c + 0x3f0) = *(int *)((int)local_7c + 0x3f0) + 0x1c;
                    uVar8 = 0xf;
                  }
                  local_14._0_1_ = 0;
                  if (0xf < uVar8) {
                    pvVar7 = local_54;
                    if ((0xfff < uVar8 + 1) &&
                       (pvVar7 = *(void **)((int)local_54 + -4), uVar4 = (undefined1)local_14,
                       0x1f < (uint)((int)local_54 + (-4 - (int)pvVar7)))) goto LAB_0051b42b;
                    FUN_005adb3f(pvVar7);
                  }
                  FUN_004024e0(local_3c,(undefined4 *)(uVar6 + 0xf8));
                  local_8c = local_8c | 1;
                  local_14._0_1_ = 3;
                  FUN_00591070("DETAIL","%s selected for spawn point %s");
                  local_14._0_1_ = 0;
                  if (0xf < local_28) {
                    pvVar7 = local_3c[0];
                    if ((0xfff < local_28 + 1) &&
                       (pvVar7 = *(void **)((int)local_3c[0] + -4), uVar4 = (undefined1)local_14,
                       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar7)))) goto LAB_0051b42b;
                    FUN_005adb3f(pvVar7);
                  }
                  local_88 = local_88 + 1;
                  local_2c = 0;
                  local_28 = 0xf;
                  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
                }
                local_14._0_1_ = 0xff;
                local_14._1_3_ = 0xffffff;
                if (0xf < local_5c) {
                  pvVar7 = local_70[0];
                  if ((0xfff < local_5c + 1) &&
                     (pvVar7 = *(void **)((int)local_70[0] + -4), uVar4 = (undefined1)local_14,
                     0x1f < (uint)((int)local_70[0] + (-4 - (int)pvVar7)))) {
LAB_0051b42b:
                    local_14._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_005adb3f(pvVar7);
                }
                local_60 = 0;
                local_5c = 0xf;
                local_70[0] = (void *)((uint)local_70[0] & 0xffffff00);
              }
            }
            local_80 = local_80 + 1;
            iVar5 = local_78[6];
            iVar9 = local_74 * 4;
          } while (local_80 <
                   (uint)(*(int *)(*(int *)(iVar5 + iVar9) + 0x94) -
                          *(int *)(*(int *)(iVar5 + iVar9) + 0x90) >> 2));
        }
        local_74 = local_74 + 1;
      } while (local_74 < (uint)(local_78[7] - iVar5 >> 2));
    }
    FUN_00591070("DETAIL","Generated %d extras at %d spawn points");
    puVar3 = puStack_20;
  }
  puStack_20 = puVar3;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_0051b440(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x18)) {
    pvVar1 = *(void **)(param_1 + 4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x18) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


undefined1 * __thiscall FUN_0051b490(void *this,undefined1 *param_1,byte *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  byte **ppbVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  byte *in_stack_ffffffb8;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1a28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffb8,(undefined4 *)((int)this + 0x68));
  piVar2 = FUN_004a73f0(DAT_0065b5cc,'\0',in_stack_ffffffb8);
  local_14 = 0;
  iVar7 = piVar2[6];
  if (piVar2[7] - iVar7 >> 2 != 0) {
    do {
      iVar8 = *(int *)(iVar7 + local_14 * 4);
      local_1c = 0;
      if (*(int *)(iVar8 + 0x94) - *(int *)(iVar8 + 0x90) >> 2 != 0) {
        do {
          iVar7 = *(int *)(*(int *)(*(int *)(iVar7 + local_14 * 4) + 0x90) + local_1c * 4);
          ppbVar3 = &param_2;
          if (0xf < in_stack_0000001c) {
            ppbVar3 = (byte **)param_2;
          }
          pbVar9 = (byte *)(iVar7 + 0x58);
          if (0xf < *(uint *)(iVar7 + 0x6c)) {
            pbVar9 = *(byte **)(iVar7 + 0x58);
          }
          uVar4 = FUN_004031f0(pbVar9,*(uint *)(iVar7 + 0x68),(byte *)ppbVar3,in_stack_00000018);
          if ((char)uVar4 != '\0') {
            puVar5 = (undefined4 *)0x0;
            iVar10 = 0;
            iVar8 = *(int *)(iVar7 + 0x5cc) - (int)*(undefined4 **)(iVar7 + 0x5c8) >> 2;
            if (iVar8 == 0) {
              iVar7 = *(int *)((int)this + 0x3bc) - (int)*(undefined4 **)((int)this + 0x3b8) >> 2;
              if (iVar7 == 1) {
                puVar5 = (undefined4 *)**(undefined4 **)((int)this + 0x3b8);
              }
              else {
                if (iVar7 == 0) goto LAB_0051b66a;
                do {
                  if (0x31 < iVar10) break;
                  iVar7 = *(int *)((int)this + 0x3bc);
                  iVar8 = *(int *)((int)this + 0x3b8);
                  iVar6 = rand();
                  puVar1 = *(undefined4 **)
                            (*(int *)((int)this + 0x3b8) + (iVar6 % (iVar7 - iVar8 >> 2)) * 4);
                  iVar7 = rand();
                  puVar5 = (undefined4 *)0x0;
                  if (iVar7 % 100 + 1 <= (int)puVar1[6]) {
                    puVar5 = puVar1;
                  }
                  iVar10 = iVar10 + 1;
                } while (puVar5 == (undefined4 *)0x0);
              }
            }
            else if (iVar8 == 1) {
              puVar5 = (undefined4 *)**(undefined4 **)(iVar7 + 0x5c8);
            }
            else {
              do {
                if (0x31 < iVar10) break;
                iVar7 = *(int *)(*(int *)(*(int *)(piVar2[6] + local_14 * 4) + 0x90) + local_1c * 4)
                ;
                iVar8 = *(int *)(iVar7 + 0x5cc);
                iVar7 = *(int *)(iVar7 + 0x5c8);
                iVar6 = rand();
                puVar1 = *(undefined4 **)
                          (*(int *)(*(int *)(*(int *)(*(int *)(piVar2[6] + local_14 * 4) + 0x90) +
                                            local_1c * 4) + 0x5c8) +
                          (iVar6 % (iVar8 - iVar7 >> 2)) * 4);
                iVar7 = rand();
                puVar5 = (undefined4 *)0x0;
                if (iVar7 % 100 + 1 <= (int)puVar1[6]) {
                  puVar5 = puVar1;
                }
                iVar10 = iVar10 + 1;
              } while (puVar5 == (undefined4 *)0x0);
            }
            if (puVar5 != (undefined4 *)0x0) {
              FUN_004024e0(param_1,puVar5);
              if (0xf < in_stack_0000001c) {
                pbVar9 = param_2;
                if ((0xfff < in_stack_0000001c + 1) &&
                   (pbVar9 = *(byte **)(param_2 + -4), (byte *)0x1f < param_2 + (-4 - (int)pbVar9)))
                {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_005adb3f(pbVar9);
              }
              ExceptionList = local_10;
              return param_1;
            }
          }
LAB_0051b66a:
          local_1c = local_1c + 1;
          iVar7 = piVar2[6];
          iVar8 = *(int *)(iVar7 + local_14 * 4);
        } while (local_1c < (uint)(*(int *)(iVar8 + 0x94) - *(int *)(iVar8 + 0x90) >> 2));
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(piVar2[7] - iVar7 >> 2));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  if (0xf < in_stack_0000001c) {
    pbVar9 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (pbVar9 = *(byte **)(param_2 + -4), (byte *)0x1f < param_2 + (-4 - (int)pbVar9))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar9);
  }
  ExceptionList = local_10;
  return param_1;
}


void __thiscall FUN_0051b780(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x234) != '\0') {
    FUN_0051afc0(this);
  }
  if ((*(char *)(*(int *)(param_1 + 0x40) + 0x34) == '\0') &&
     (iVar2 = *(int *)((int)this + 0x3e4), 0 < iVar2)) {
    if (*(char *)(param_1 + 0x234) != '\0') {
      FUN_00527550(*(int **)(param_1 + 0x224),3,
                   "`^WARNING`7: Docked without an active iFF signal; `$%dc`7 fine.");
      iVar2 = *(int *)((int)this + 0x3e4);
    }
    iVar1 = *(int *)((int)this + 0x390);
    if (iVar1 == 0) {
      FUN_00591070("ERROR","Tried to add owed amount to station with no faction.");
    }
    else {
      *(float *)(iVar1 + 0xd0) = (float)iVar2 + *(float *)(iVar1 + 0xd0);
    }
  }
  if ((*(char *)(param_1 + 0x234) != '\0') && (*(byte **)((int)this + 0x398) != (byte *)0x0)) {
    FUN_0049e640(*(byte **)((int)this + 0x398));
  }
  return;
}


undefined4 __thiscall FUN_0051b830(void *this,int param_1)

{
  int *in_EAX;
  
  if (*(int *)((int)this + 0x3dc) != 0) {
    in_EAX = FUN_0051b8a0(this,param_1);
    if ((in_EAX == (int *)0x0) || (in_EAX[2] != 0)) {
      return (uint)in_EAX & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


uint __thiscall FUN_0051b860(void *this,int param_1)

{
  int *in_EAX;
  
  if ((*(int *)((int)this + 0x3dc) != 0) &&
     (in_EAX = *(int **)((int)this + 0x254), in_EAX[0x56] != 3)) {
    in_EAX = FUN_0051b8a0(this,param_1);
    if ((in_EAX == (int *)0x0) || (in_EAX[2] != 2)) {
      return (uint)in_EAX & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


int * __thiscall FUN_0051b8a0(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x3dc) != 0) {
    uVar2 = 0;
    uVar3 = *(int *)((int)this + 0x3c8) - *(int *)((int)this + 0x3c4) >> 2;
    if (uVar3 != 0) {
      do {
        piVar1 = *(int **)(*(int *)((int)this + 0x3c4) + uVar2 * 4);
        if (*piVar1 == param_1) {
          return piVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return (int *)0x0;
}


void __thiscall FUN_0051b8f0(void *this,float param_1)

{
  FUN_00513650(this,param_1);
  FUN_0051b920((int)this);
  return;
}


void __fastcall FUN_0051b920(int param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  void *in_stack_ffffffc0;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2408;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = *(int *)(param_1 + 0x424) - *(int *)(param_1 + 0x420);
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x18 + iVar1 != iVar1) {
    uVar6 = 0;
    bVar2 = true;
    local_14 = 0;
    do {
      FUN_004024e0(&stack0xffffffc0,(undefined4 *)(local_14 + *(int *)(param_1 + 0x420)));
      local_8 = 0;
      puVar4 = FUN_00412df0();
      local_8 = 0xffffffff;
      bVar3 = FUN_004a1150(puVar4,in_stack_ffffffc0);
      if (bVar3 == 0) {
        bVar2 = false;
      }
      uVar6 = uVar6 + 1;
      local_14 = local_14 + 0x18;
    } while (uVar6 < (uint)((*(int *)(param_1 + 0x424) - *(int *)(param_1 + 0x420)) / 0x18));
    if (bVar2) {
      if (*(char *)(param_1 + 0x168) == '\0') {
        ExceptionList = local_10;
        return;
      }
      *(undefined1 *)(param_1 + 0x168) = 0;
      uVar6 = 0x16;
      pcVar7 = "coming into existence.";
    }
    else {
      if (*(char *)(param_1 + 0x168) != '\0') {
        ExceptionList = local_10;
        return;
      }
      *(undefined1 *)(param_1 + 0x168) = 1;
      uVar6 = 10;
      pcVar7 = "now hiding";
    }
    puVar4 = (undefined4 *)((uint)in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,pcVar7,uVar6);
    FUN_0050ae50(param_1,puVar4);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0051ba50(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x390);
  if (iVar1 == 0) {
    FUN_00591070("ERROR","Tried to add owed amount to station with no faction.");
    return;
  }
  *(float *)(iVar1 + 0xd0) = (float)param_1 + *(float *)(iVar1 + 0xd0);
  return;
}


void __thiscall FUN_0051baa0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar4 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2438;
  local_10 = ExceptionList;
  iVar2 = *(int *)((int)this + 0x390);
  if (iVar2 == 0) {
    pcVar6 = "Tried to remove owed amount to station with no faction.";
    pcVar5 = "ERROR";
    ExceptionList = &local_10;
  }
  else {
    if (*(float *)(iVar2 + 0xd0) <= 0.0) {
      return;
    }
    ExceptionList = &local_10;
    *(float *)(iVar2 + 0xd0) = *(float *)(iVar2 + 0xd0) - (float)param_1;
    if (*(float *)(*(int *)((int)this + 0x390) + 0xd0) != 0.0) {
      ExceptionList = pvVar4;
      return;
    }
    iVar2 = FUN_0051f090(*(int *)(DAT_0065b5cc + 0xd8));
    if (*(int *)((int)this + 0x390) != iVar2) {
      ExceptionList = local_10;
      return;
    }
    FUN_004024e0(local_30,(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x238));
    local_8 = 0;
    puVar3 = FUN_004122d0();
    piVar1 = puVar3 + 5;
    local_8 = 1;
    iVar2 = *piVar1;
    FUN_004132d0(*(int **)(iVar2 + 4));
    *(int *)(*piVar1 + 4) = iVar2;
    *(int *)*piVar1 = iVar2;
    local_8 = 0xffffffff;
    *(int *)(*piVar1 + 8) = iVar2;
    puVar3[6] = 0;
    if (0xf < local_1c) {
      pvVar4 = local_30[0];
      if ((0xfff < local_1c + 1) &&
         (pvVar4 = *(void **)((int)local_30[0] + -4),
         0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
    pcVar6 = "Removing player from belligerants list.";
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    pcVar5 = "DETAIL";
  }
  FUN_00591070(pcVar5,pcVar6);
  ExceptionList = local_10;
  return;
}


int __fastcall FUN_0051bc10(int param_1)

{
  if (*(int *)(param_1 + 0x390) == 0) {
    return 0;
  }
  return (int)*(float *)(*(int *)(param_1 + 0x390) + 0xd0);
}


void __fastcall FUN_0051bc30(int param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x408);
  uVar3 = 0;
  uVar2 = (uint)((int)*(undefined4 **)(param_1 + 0x40c) + (3 - (int)puVar4)) >> 2;
  if (*(undefined4 **)(param_1 + 0x40c) < puVar4) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        FUN_00406b80((int)pvVar1);
        FUN_005adb3f(pvVar1);
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x408);
  return;
}


int * __fastcall FUN_0051bca0(int param_1)

{
  void *this;
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  code *pcVar8;
  int **ppiVar9;
  byte *in_stack_ffffff9c;
  int *local_3c;
  int *local_38;
  int local_34;
  void *local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c2494;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  FUN_00591370((int *)(param_1 + 0x3fc));
  FUN_00591070("WORLD","Trying to spawn %d passengers to pick up");
  local_2c = (int *)&stack0xffffff9c;
  local_1c = 0;
  FUN_004024e0(&stack0xffffff9c,(undefined4 *)(param_1 + 0x238));
  ppiVar9 = &local_3c;
  local_8 = 0;
  this = (void *)FUN_0047d160();
  local_8 = 0xffffffff;
  FUN_00485da0(this,ppiVar9,in_stack_ffffff9c);
  local_8 = 1;
  uVar1 = (int)local_38 - (int)local_3c >> 2;
  if (uVar1 == 0) {
    piVar2 = (int *)FUN_00591070("WORLD","No valid passengers to spawn.");
  }
  else {
    piVar7 = (int *)0x0;
    pcVar8 = rand_exref;
    if (uVar1 < 4) {
      FUN_00591070("WORLD","Not enough valid passengers, or just enough. Spawning all %d.");
      iVar4 = local_14;
      piVar7 = (int *)0x0;
      piVar2 = (int *)0x0;
      if ((int)local_38 - (int)local_3c >> 2 != 0) {
        do {
          local_2c = (int *)FUN_005adb0f(0x94);
          local_8._0_1_ = 2;
          iVar3 = FUN_00484e30(local_2c,local_3c[(int)piVar7]);
          local_8 = CONCAT31(local_8._1_3_,1);
          local_1c = iVar3;
          FUN_00591070("WORLD","Passenger \'%s\' is waiting at %s.");
          piVar2 = *(int **)(iVar4 + 0x40c);
          if (*(int **)(iVar4 + 0x410) == piVar2) {
            FUN_00414080((void *)(iVar4 + 0x408),piVar2,&local_1c);
          }
          else {
            *piVar2 = iVar3;
            *(int *)(iVar4 + 0x40c) = *(int *)(iVar4 + 0x40c) + 4;
          }
          piVar7 = (int *)((int)piVar7 + 1);
          piVar2 = (int *)((int)local_38 - (int)local_3c >> 2);
        } while (piVar7 < piVar2);
      }
    }
    else {
      do {
        piVar2 = piVar7;
        local_2c = (int *)((int)piVar2 + 1);
        if (99 < (int)piVar2) break;
        iVar3 = (int)local_38 - (int)local_3c;
        iVar4 = (*pcVar8)();
        iVar4 = local_3c[iVar4 % (iVar3 >> 2)];
        local_24 = iVar4;
        iVar5 = (*pcVar8)();
        piVar2 = (int *)(iVar5 / 100);
        iVar3 = local_1c;
        if (iVar5 % 100 < *(int *)(iVar4 + 0x3c)) {
          local_30 = (void *)FUN_005adb0f(0x94);
          local_8._0_1_ = 3;
          local_28 = FUN_00484e30(local_30,iVar4);
          local_8 = CONCAT31(local_8._1_3_,1);
          for (piVar7 = local_3c; (piVar7 != local_38 && (*piVar7 != iVar4)); piVar7 = piVar7 + 1) {
          }
          local_18 = local_28;
          if (piVar7 != local_38) {
            piVar2 = piVar7 + 1;
            uVar1 = 0;
            uVar6 = (uint)((int)local_38 + (3 - (int)piVar2)) >> 2;
            if (local_38 < piVar2) {
              uVar6 = 0;
            }
            if (uVar6 != 0) {
              do {
                if (*piVar2 != local_24) {
                  *piVar7 = *piVar2;
                  piVar7 = piVar7 + 1;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 1;
              } while (uVar1 != uVar6);
            }
            if (piVar7 != local_38) {
              memmove(piVar7,local_38,0);
              local_38 = piVar7;
            }
          }
          iVar4 = local_14;
          iVar3 = local_1c + 1;
          local_1c = iVar3;
          FUN_00591070("WORLD","Passenger \'%s\' is waiting at %s.");
          pcVar8 = rand_exref;
          piVar2 = *(int **)(iVar4 + 0x40c);
          if (*(int **)(iVar4 + 0x410) == piVar2) {
            piVar2 = (int *)FUN_00414080((void *)(iVar4 + 0x408),piVar2,&local_28);
            pcVar8 = rand_exref;
          }
          else {
            *piVar2 = local_18;
            *(int *)(iVar4 + 0x40c) = *(int *)(iVar4 + 0x40c) + 4;
          }
        }
        piVar7 = local_2c;
      } while (iVar3 < 3);
    }
  }
  if (local_3c != (int *)0x0) {
    piVar7 = local_3c;
    if ((0xfff < (local_34 - (int)local_3c & 0xfffffffcU)) &&
       (piVar7 = (int *)local_3c[-1], 0x1f < (uint)((int)local_3c + (-4 - (int)piVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    piVar2 = (int *)FUN_005adb3f(piVar7);
  }
  ExceptionList = local_10;
  return piVar2;
}


int __thiscall FUN_0051bfc0(void *this,undefined4 *param_1,uint *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  void *pvVar11;
  uint *puVar12;
  uint *puVar13;
  
  iVar2 = ((int)param_1 - *(int *)this) / 0x1c;
  iVar3 = (*(int *)((int)this + 4) - *(int *)this) / 0x1c;
  if (iVar3 == 0x9249249) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar10 = iVar3 + 1;
  uVar7 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  uVar5 = uVar10;
  if ((uVar7 <= 0x9249249 - (uVar7 >> 1)) && (uVar5 = (uVar7 >> 1) + uVar7, uVar5 < uVar10)) {
    uVar5 = uVar10;
  }
  uVar7 = uVar5 * 0x1c;
  if (uVar5 < 0x924924a) {
    if (0xfff < uVar7) goto LAB_0051c064;
    if (uVar7 == 0) {
      puVar12 = (uint *)0x0;
    }
    else {
      puVar12 = (uint *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_0051c064:
    uVar6 = uVar7 + 0x23;
    if (uVar6 <= uVar7) {
      uVar6 = 0xffffffff;
    }
    uVar7 = FUN_005adb0f(uVar6);
    if (uVar7 == 0) goto LAB_0051c1a3;
    puVar12 = (uint *)(uVar7 + 0x23 & 0xffffffe0);
    puVar12[-1] = uVar7;
  }
  puVar12[iVar2 * 7] = *param_2;
  puVar12[iVar2 * 7 + 5] = 0;
  puVar12[iVar2 * 7 + 6] = 0;
  uVar7 = param_2[2];
  uVar6 = param_2[3];
  uVar4 = param_2[4];
  puVar13 = puVar12 + iVar2 * 7 + 1;
  *puVar13 = param_2[1];
  puVar13[1] = uVar7;
  puVar13[2] = uVar6;
  puVar13[3] = uVar4;
  *(undefined8 *)(puVar12 + iVar2 * 7 + 5) = *(undefined8 *)(param_2 + 5);
  param_2[5] = 0;
  param_2[6] = 0xf;
  *(undefined1 *)(param_2 + 1) = 0;
  puVar9 = *(undefined4 **)((int)this + 4);
  puVar8 = *(undefined4 **)this;
  puVar13 = puVar12;
  if (param_1 != puVar9) {
    FUN_0051c220(*(undefined4 **)this,param_1,puVar12);
    puVar9 = *(undefined4 **)((int)this + 4);
    puVar13 = puVar12 + iVar2 * 7 + 7;
    puVar8 = param_1;
  }
  FUN_0051c220(puVar8,puVar9,puVar13);
  if (*(uint **)this != (uint *)0x0) {
    FUN_0051c1b0(*(uint **)this,*(uint **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar11 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar1) / 0x1c) * 0x1c)) &&
       (pvVar11 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar11)))) {
LAB_0051c1a3:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  *(uint **)this = puVar12;
  *(uint **)((int)this + 4) = puVar12 + uVar10 * 7;
  *(uint **)((int)this + 8) = puVar12 + uVar5 * 7;
  return *(int *)this + iVar2 * 0x1c;
}
