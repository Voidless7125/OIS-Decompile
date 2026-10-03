#include "../ois_server.exe.h"


void __thiscall FUN_00508ad0(void *this,int param_1)

{
  int *_Src;
  float *pfVar1;
  int *piVar2;
  int iVar3;
  size_t _Size;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float in_XMM1_Da;
  int local_c;
  float local_8;
  
  fVar8 = 0.0;
  if (0.0 <= in_XMM1_Da) {
    fVar8 = in_XMM1_Da;
  }
  iVar4 = 0;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  uVar6 = 0;
  piVar2 = *(int **)((int)this + 4);
  iVar3 = *(int *)this;
  uVar5 = (int)piVar2 - iVar3 >> 3;
  iVar7 = (int)fVar8;
  if (uVar5 != 0) {
    do {
      if (iVar7 == *(int *)(iVar3 + uVar6 * 8)) {
        fVar8 = (float)iVar4;
        pfVar1 = (float *)(iVar3 + 4 + uVar6 * 8);
        if (fVar8 < *pfVar1 || fVar8 == *pfVar1) {
          return;
        }
        *(float *)(iVar3 + 4 + uVar6 * 8) = fVar8;
        return;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  uVar6 = 0;
  local_c = iVar7;
  if (uVar5 != 0) {
    do {
      if (iVar7 < *(int *)(iVar3 + uVar6 * 8)) {
        _Src = (int *)(iVar3 + uVar6 * 8);
        local_8 = (float)iVar4;
        if (*(int **)((int)this + 8) == piVar2) {
          FUN_00421160(this,_Src,&local_c);
          return;
        }
        if (_Src != piVar2) {
          *piVar2 = piVar2[-2];
          piVar2[1] = piVar2[-1];
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
          _Size = (int)piVar2 + (-8 - (int)_Src);
          memmove((void *)((int)piVar2 - _Size),_Src,_Size);
          *_Src = iVar7;
          _Src[1] = (int)local_8;
          return;
        }
        goto LAB_00508b43;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  local_8 = (float)iVar4;
  if (*(int **)((int)this + 8) == piVar2) {
    FUN_00421160(this,piVar2,&local_c);
    return;
  }
LAB_00508b43:
  local_8 = (float)iVar4;
  *piVar2 = iVar7;
  piVar2[1] = (int)local_8;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return;
}


undefined4 * __thiscall FUN_00508c00(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 in_XMM3_Da;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c0fe6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined8 *)((int)this + 0x20) = 0xbff0000000000000;
  *(undefined8 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xbf800000;
  *(undefined4 *)((int)this + 0x3c) = 0xbf800000;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined1 *)((int)this + 0x48) = 0;
  FUN_00402690((undefined1 *)((int)this + 0x48),"Unknown",7);
  local_8 = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xf;
  *(undefined1 *)((int)this + 0x60) = 0;
  FUN_00402690((undefined1 *)((int)this + 0x60),"Unknown",7);
  local_8._0_1_ = 1;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0xf;
  *(undefined1 *)((int)this + 0x78) = 0;
  FUN_00402690((undefined1 *)((int)this + 0x78),"Unknown",7);
  local_8._0_1_ = 2;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0xf;
  *(undefined1 *)((int)this + 0x90) = 0;
  FUN_00402690((undefined1 *)((int)this + 0x90),"Unknown",7);
  local_8._0_1_ = 3;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0xf;
  *(undefined1 *)((int)this + 0xa8) = 0;
  FUN_00402690((undefined1 *)((int)this + 0xa8),"Unknown",7);
  local_8._0_1_ = 4;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0xf;
  *(undefined1 *)((int)this + 0xc0) = 0;
  FUN_00402690((undefined1 *)((int)this + 0xc0),"Unknown",7);
  *(undefined4 *)((int)this + 0xdc) = 3;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  local_8 = CONCAT31(local_8._1_3_,8);
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined2 *)((int)this + 0x110) = 0;
  *(undefined1 *)((int)this + 0x112) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = in_XMM3_Da;
  *(undefined4 *)((int)this + 0x11c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x124) = param_1;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0xffffffff;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined2 *)((int)this + 0x120) = 0;
  *(undefined1 *)((int)this + 0x122) = 0;
  FUN_00591070("DETAIL","New Sensor Object with ID: %d");
  ExceptionList = local_10;
  return this;
}


void __thiscall FUN_00508e80(void *this,undefined1 *param_1)

{
  float fVar1;
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
  fVar1 = *(float *)((int)this + 0x128);
  if (fVar1 == -1.0) {
    FUN_00403640(param_1,"`7n/a",5);
  }
  else if (fVar1 == 0.0) {
    FUN_00403640(param_1,"`8nil",5);
  }
  else {
    if (fVar1 <= 80.0) {
      if (fVar1 <= 30.0) {
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
    puVar2 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"%.0f%%");
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


Vec2 * __thiscall FUN_00508ff0(void *this,Vec2 *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1072;
  local_10 = ExceptionList;
  if (*(float *)((int)this + 0x128) == 100.0) {
    fVar1 = *(float *)((int)this + 0x104);
    dVar2 = *(double *)((int)this + 0x10);
    *(float *)(param_1 + 4) =
         (float)((double)*(float *)((int)this + 0x108) + *(double *)((int)this + 0x18));
    *(float *)param_1 = (float)((double)fVar1 + dVar2);
    return param_1;
  }
  local_24 = (float)((double)*(float *)((int)this + 0x104) + *(double *)((int)this + 0x10));
  local_20 = (float)((double)*(float *)((int)this + 0x108) + *(double *)((int)this + 0x18));
  local_14 = (float)((double)(1.0 - *(float *)((int)this + 0x128) / 100.0) *
                    *(double *)((int)this + 0x28));
  local_8 = 0;
  dVar3 = (double)(float)*(double *)((int)this + 0x20) * 0.017453292519943295;
  dVar2 = dVar3;
  ExceptionList = &local_10;
  libm_sse2_sin_precise(DAT_0065500c ^ (uint)&stack0xfffffffc);
  local_18 = (float)(dVar2 * (double)local_14);
  libm_sse2_cos_precise();
  local_1c = local_18;
  local_18 = (float)(dVar3 * (double)local_14);
  local_8 = CONCAT31(local_8._1_3_,1);
  cocos2d::Vec2::operator+((Vec2 *)&local_24,param_1);
  ExceptionList = local_10;
  return param_1;
}


void __thiscall FUN_00509160(void *this,undefined1 *param_1)

{
  basic_string<> *pbVar1;
  int iVar2;
  bool bVar3;
  undefined3 uVar4;
  char cVar5;
  uint uVar6;
  void **ppvVar7;
  basic_string<> *pbVar8;
  void *pvVar9;
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
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c10d2;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  uStack_7 = 0;
  uVar4 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  if (*(char *)((int)this + 0x45) == '\0') {
LAB_005092a5:
    FUN_00402690(local_44,"Possible",8);
    FUN_00402690(local_2c,&DAT_0061abb8,1);
  }
  else {
    iVar2 = *(int *)((int)this + 0xe0);
    if (iVar2 == 2) {
      FUN_00402690(local_44,"Transient",9);
      FUN_00402690(local_2c,&DAT_0061abb8,1);
      goto LAB_0050952d;
    }
    if (iVar2 == 1) goto LAB_005092a5;
    if (iVar2 == 0) {
      FUN_00402690(local_44,&DAT_005e6c60,4);
      pbVar1 = (basic_string<> *)((int)this + 0x90);
      pbVar8 = pbVar1;
      if (0xf < *(uint *)((int)this + 0xa4)) {
        pbVar8 = *(basic_string<> **)pbVar1;
      }
      uVar6 = FUN_004031f0((byte *)pbVar8,*(uint *)((int)this + 0xa0),(byte *)"unknown",7);
      if ((char)uVar6 == '\0') {
        std::basic_string<>::operator=((basic_string<> *)local_2c,pbVar1);
      }
      else {
        FUN_00402690((basic_string<> *)local_2c,&DAT_0061abb8,1);
      }
      iVar2 = *(int *)((int)this + 0xd8);
      if ((((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) && (iVar2 == 4)) {
        FUN_0042e050(local_44,0x57);
      }
      if (*(float *)((int)this + 0x118) != 0.0) goto LAB_005092a5;
    }
    else if (iVar2 == 5) {
      FUN_00402690(local_44,"Beacon",6);
      std::basic_string<>::operator=
                ((basic_string<> *)local_2c,(basic_string<> *)((int)this + 0x90));
    }
    else if (iVar2 == 6) {
      FUN_00402690(local_44,"Cargo",5);
      std::basic_string<>::operator=
                ((basic_string<> *)local_2c,(basic_string<> *)((int)this + 0x90));
    }
    else {
      if (iVar2 == 7) {
        FUN_00402690(local_44,"Derelict",8);
        bVar3 = *(float *)((int)this + 0x128) <= 63.0;
        if (bVar3) {
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          FUN_00402690(local_5c,"unknown",7);
          ppvVar7 = local_5c;
        }
        else {
          ppvVar7 = (void **)FUN_004024e0(local_74,(undefined4 *)((int)this + 0x90));
          local_8 = 2;
        }
        cVar5 = !bVar3;
        FUN_00413230(local_2c,(int *)ppvVar7);
        if ((bVar3) && (0xf < local_48)) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
      }
      else {
        uStack_7 = uVar4;
        if (iVar2 != 4) {
          if (iVar2 == 3) {
            FUN_00402690(local_44,"Countermeasure",0xe);
            FUN_00402690(local_2c,&DAT_006167bc,3);
          }
          goto LAB_0050952d;
        }
        FUN_00402690(local_44,"Debris",6);
        bVar3 = *(float *)((int)this + 0x128) <= 76.0;
        if (bVar3) {
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
          FUN_00402690(local_5c,"unknown",7);
          ppvVar7 = local_5c;
          cVar5 = '\0';
        }
        else {
          ppvVar7 = (void **)FUN_004024e0(local_74,(undefined4 *)((int)this + 0x90));
          local_8 = 3;
          cVar5 = '\x04';
        }
        FUN_00413230(local_2c,(int *)ppvVar7);
        if ((bVar3) && (0xf < local_48)) {
          pvVar9 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar9 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar9)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar9);
        }
      }
      uStack_7 = 0;
      local_8 = 1;
      if ((cVar5 != '\0') && (0xf < local_60)) {
        pvVar9 = local_74[0];
        if ((0xfff < local_60 + 1) &&
           (pvVar9 = *(void **)((int)local_74[0] + -4),
           0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar9)))) goto LAB_00509421;
        FUN_005adb3f(pvVar9);
      }
    }
  }
LAB_0050952d:
  FUN_00591e00(param_1,"%s %d (%c%d)");
  if (0xf < local_18) {
    pvVar9 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar9 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_00509421;
    FUN_005adb3f(pvVar9);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
    pvVar9 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar9 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) {
LAB_00509421:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005095f0(void *this,undefined1 *param_1,char param_2,char param_3)

{
  basic_string<> *pbVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  basic_string<> *pbVar5;
  void *pvVar6;
  undefined1 uVar7;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar6 = local_2c[0];
  puStack_c = &LAB_005c1110;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pvVar3 = local_2c[0];
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_8 = 1;
  local_2c[0]._2_2_ = SUB42(pvVar6,2);
  if (*(char *)((int)this + 0x45) == '\0') {
    local_1c = 1;
    local_2c[0] = (void *)CONCAT22(local_2c[0]._2_2_,0x50);
    FUN_00402690(local_44,&DAT_0061abb8,1);
  }
  else {
    iVar2 = *(int *)((int)this + 0xe0);
    if (iVar2 == 2) {
      local_1c = 1;
      local_2c[0] = (void *)CONCAT22(local_2c[0]._2_2_,0x54);
      FUN_00402690(local_44,&DAT_0061abb8,1);
    }
    else if (iVar2 == 1) {
      local_2c[0] = (void *)CONCAT22(local_2c[0]._2_2_,0x50);
      local_1c = iVar2;
      FUN_00402690(local_44,&DAT_0061abb8,1);
    }
    else if (iVar2 == 0) {
      pbVar1 = (basic_string<> *)((int)this + 0x90);
      local_1c = 1;
      local_2c[0] = (void *)CONCAT22(local_2c[0]._2_2_,0x53);
      pbVar5 = pbVar1;
      if (0xf < *(uint *)((int)this + 0xa4)) {
        pbVar5 = *(basic_string<> **)pbVar1;
      }
      uVar4 = FUN_004031f0((byte *)pbVar5,*(uint *)((int)this + 0xa0),(byte *)"unknown",7);
      if ((char)uVar4 == '\0') {
        std::basic_string<>::operator=((basic_string<> *)local_44,pbVar1);
      }
      else {
        FUN_00402690((basic_string<> *)local_44,&DAT_0061abb8,1);
      }
      iVar2 = *(int *)((int)this + 0xd8);
      if ((((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) && (iVar2 == 4)) {
        FUN_0042e050(local_2c,0x57);
      }
      if (*(float *)((int)this + 0x118) != 0.0) {
        FUN_0042e050(local_2c,0x50);
        FUN_00402690(local_44,&DAT_0061abb8,1);
      }
    }
    else {
      local_2c[0] = pvVar3;
      if (iVar2 == 5) {
        uVar7 = 0x42;
      }
      else if (iVar2 == 6) {
        uVar7 = 0x43;
      }
      else {
        if (iVar2 != 7) goto LAB_0050979f;
        uVar7 = 0x44;
      }
      FUN_0042e050(local_2c,uVar7);
      std::basic_string<>::operator=
                ((basic_string<> *)local_44,(basic_string<> *)((int)this + 0x90));
    }
  }
LAB_0050979f:
  if (param_3 == -1) {
    FUN_00591e00(param_1,&DAT_0061ac18);
  }
  else if (param_2 == '\0') {
    FUN_00591e00(param_1,"`%c%s%d");
  }
  else {
    FUN_00591e00(param_1,"`%c%s%d: %s");
  }
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
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int __fastcall FUN_00509900(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (((iVar1 != 6) && (iVar1 != 4)) && (iVar1 != 7)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


int __fastcall FUN_00509920(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 4)) && (iVar1 != 7)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


undefined1 __fastcall FUN_00509940(int param_1)

{
  if (*(float *)(param_1 + 0x118) == 0.0) {
    return 1;
  }
  return 0;
}


void __fastcall FUN_00509960(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = param_1[1] - *param_1 >> 3;
  if (3 < uVar1) {
    iVar2 = (uVar1 - 4 >> 2) + 1;
    uVar3 = iVar2 * 4;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (uVar3 < uVar1) {
    iVar2 = uVar1 - uVar3;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}


undefined4 * __thiscall FUN_005099e0(void *this,int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 *in_stack_00000024;
  uint in_stack_00000034;
  uint in_stack_00000038;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_18 = &LAB_005c12b2;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xf;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined ***)this = Ship::vftable;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xbf800000;
  *(undefined4 *)((int)this + 0x58) = 0xbf800000;
  *(undefined4 *)((int)this + 0x5c) = 0xbf800000;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0xf;
  *(undefined1 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0xf;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0xf;
  *(undefined1 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0xf;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 200) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0xcc) = 0xc61c3c00;
  *(undefined1 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined1 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0xbf800000;
  *(undefined1 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0xbf800000;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0xbf800000;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0x130) = 0xc61c3c00;
  local_14 = 10;
  uStack_13 = 0;
  *(undefined4 *)((int)this + 0x148) = 0xbf800000;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  uVar2 = FUN_004cb160();
  *(undefined4 *)((int)this + 0x14c) = uVar2;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined1 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0xbf800000;
  *(undefined4 *)((int)this + 0x164) = 0xbf800000;
  *(undefined1 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  *(undefined4 *)((int)this + 400) = 0xffffffff;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0xffffffff;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined2 *)((int)this + 0x1b0) = 1;
  *(undefined1 *)((int)this + 0x1b2) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 1;
  *(undefined4 *)((int)this + 0x1b8) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0x1bc) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  local_14 = 0xd;
  *(undefined4 *)((int)this + 0x1d0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1d4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1d8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1dc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1e8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  puVar3 = (undefined1 *)FUN_005adb0f(0x50);
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 4) = 0x18;
  *(undefined4 *)(puVar3 + 0x44) = 0;
  *(undefined4 *)(puVar3 + 0x48) = 0;
  *(undefined4 *)(puVar3 + 0x4c) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  *(undefined4 *)(puVar3 + 0x18) = 0;
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 0x20) = 0;
  *(undefined4 *)(puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 0x28) = 0;
  *(undefined4 *)(puVar3 + 0x2c) = 0;
  *(undefined4 *)(puVar3 + 0x30) = 0;
  *(undefined4 *)(puVar3 + 0x34) = 0;
  *(undefined4 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x3c) = 0;
  *(undefined1 **)((int)this + 0x1f8) = puVar3;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 1;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined1 *)((int)this + 0x235) = 1;
  *(bool *)((int)this + 0x234) = param_2 == 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0xf;
  *(undefined1 *)((int)this + 0x238) = 0;
  iVar7 = DAT_0065b3d8 + 1;
  *(int *)((int)this + 0x250) = DAT_0065b3d8;
  DAT_0065b3d8 = iVar7;
  *(int *)((int)this + 0x254) = param_1;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0xf;
  *(undefined1 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined8 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined2 *)((int)this + 0x280) = 0x101;
  *(undefined4 *)((int)this + 0x290) = 0xe147ae14;
  *(undefined4 *)((int)this + 0x294) = 0x4059547a;
  *(undefined4 *)((int)this + 0x298) = 0xe147ae14;
  *(undefined4 *)((int)this + 0x29c) = 0x4059547a;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0x41b00000;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined1 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0xbf800000;
  *(undefined1 *)((int)this + 0x2d0) = 0;
  *(undefined1 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0xffffffff;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined1 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0xbf800000;
  *(undefined2 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x323) = 1;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0xf;
  *(undefined1 *)((int)this + 0x32c) = 0;
  local_14 = 0x16;
  *(undefined2 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  uVar2 = FUN_004cb160();
  *(undefined4 *)((int)this + 0x348) = uVar2;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0x358) = 0xc61c3c00;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  _local_14 = CONCAT31(uStack_13,0x1a);
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 1;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  if ((undefined4 **)((int)this + 8) != &param_3) {
    ppuVar4 = &param_3;
    if (0xf < in_stack_00000020) {
      ppuVar4 = (undefined4 **)param_3;
    }
    FUN_00402690((undefined4 **)((int)this + 8),ppuVar4,in_stack_0000001c);
  }
  if ((undefined4 **)((int)this + 0x238) != &stack0x00000024) {
    puVar5 = &stack0x00000024;
    if (0xf < in_stack_00000038) {
      puVar5 = in_stack_00000024;
    }
    FUN_00402690((undefined4 *)((int)this + 0x238),puVar5,in_stack_00000034);
  }
  puVar5 = (undefined4 *)FUN_005adb0f(0x4c);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 1;
  iVar6 = rand();
  iVar7 = DAT_0065b5cc;
  puVar5[0xe] = (float)(iVar6 % 0x1e + 0x12d);
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  iVar7 = *(int *)(iVar7 + 0xcc);
  if (iVar7 != 0) {
    if (*(char *)(iVar7 + 0x377) == '\0') {
      if ((*(int *)(iVar7 + 0x378) == 0) && (*(int *)(iVar7 + 0x380) == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        iVar7 = FUN_00591370((int *)(iVar7 + 0x378));
        puVar5[0xe] = (float)iVar7;
      }
    }
    else {
      puVar5[0xe] = 0xbf800000;
    }
  }
  *(undefined4 **)((int)this + 0x40) = puVar5;
  puVar5[0x12] = this;
  FUN_0050c590((int)this);
  FUN_00506bd0(*(void **)((int)this + 0x1f8),*(int *)(*(int *)((int)this + 0x254) + 0xe8),
               *(undefined4 *)(*(int *)((int)this + 0x254) + 0xe4));
  puVar5 = (undefined4 *)FUN_005adb0f(0x60);
  *puVar5 = this;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0xf;
  *(undefined1 *)(puVar5 + 6) = 0;
  puVar5[0xc] = 0xbf800000;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0xbf000000;
  puVar5[0x12] = 0xbf800000;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  *(undefined4 **)((int)this + 0x224) = puVar5;
  iVar7 = *(int *)((int)this + 0x254);
  puVar5 = (undefined4 *)(iVar7 + 0xec);
  if ((undefined4 *)((int)this + 0x68) != puVar5) {
    if (0xf < *(uint *)(iVar7 + 0x100)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    FUN_00402690((undefined4 *)((int)this + 0x68),puVar5,*(uint *)(iVar7 + 0xfc));
  }
  if (param_2 == 0) {
    if (*(char *)(DAT_0065b444 + 0x11a) == '\0') {
      FUN_0050b040((int)this);
    }
    else {
      FUN_0050af80((int)this);
    }
  }
  if (0xf < in_stack_00000020) {
    puVar5 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      puVar5 = (undefined4 *)param_3[-1];
      if (0x1f < (uint)((int)param_3 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar5);
  }
  in_stack_0000001c = 0;
  in_stack_00000020 = 0xf;
  param_3 = (undefined4 *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    puVar5 = in_stack_00000024;
    if (0xfff < in_stack_00000038 + 1) {
      puVar5 = (undefined4 *)in_stack_00000024[-1];
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar5);
  }
  ExceptionList = local_1c;
  return this;
}


void __fastcall FUN_0050a3d0(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_00519410(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  FUN_005adb3f((void *)*param_1);
  return;
}


void __fastcall FUN_0050a400(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  int local_1c;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c12d0;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Ship::vftable;
  local_18 = param_1;
  FUN_00591070("WORLD","%s: deleting object.");
  if ((param_1[0x11] != 0) && (*(int *)(param_1[0x11] + 0x70) == 0)) {
    FUN_0050b120((int)param_1);
  }
  pvVar8 = (void *)param_1[0x89];
  if (pvVar8 != (void *)0x0) {
    local_8 = 0;
    if (*(int **)((int)pvVar8 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)((int)pvVar8 + 0x34) + 0x138))(1,uVar4);
      *(undefined4 *)((int)pvVar8 + 0x34) = 0;
    }
    FUN_004025a0((int *)((int)pvVar8 + 0x4c));
    FUN_004025a0((int *)((int)pvVar8 + 0x38));
    if (0xf < *(uint *)((int)pvVar8 + 0x2c)) {
      pvVar7 = *(void **)((int)pvVar8 + 0x18);
      pvVar5 = pvVar7;
      if ((0xfff < *(uint *)((int)pvVar8 + 0x2c) + 1) &&
         (pvVar5 = *(void **)((int)pvVar7 + -4), 0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar5))))
      goto LAB_0050ab01;
      FUN_005adb3f(pvVar5);
    }
    *(undefined4 *)((int)pvVar8 + 0x28) = 0;
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0xf;
    *(undefined1 *)((int)pvVar8 + 0x18) = 0;
    pvVar7 = *(void **)((int)pvVar8 + 4);
    if (pvVar7 != (void *)0x0) {
      pvVar5 = pvVar7;
      if ((0xfff < (uint)((*(int *)((int)pvVar8 + 0xc) - (int)pvVar7 >> 2) * 4)) &&
         (pvVar5 = *(void **)((int)pvVar7 + -4), 0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar5))))
      goto LAB_0050ab01;
      FUN_005adb3f(pvVar5);
      *(undefined4 *)((int)pvVar8 + 4) = 0;
      *(undefined4 *)((int)pvVar8 + 8) = 0;
      *(undefined4 *)((int)pvVar8 + 0xc) = 0;
    }
    local_8 = 0xffffffff;
    FUN_005adb3f(pvVar8);
  }
  if ((void *)param_1[0x7e] != (void *)0x0) {
    FUN_004b9460((void *)param_1[0x7e]);
  }
  puVar2 = (undefined4 *)param_1[0x11];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_005022b0(puVar2);
    FUN_005adb3f(puVar2);
  }
  uVar4 = 0;
  pvVar8 = (void *)param_1[0xda];
  if (param_1[0xdb] - (int)pvVar8 >> 2 != 0) {
    do {
      pvVar8 = *(void **)((int)pvVar8 + uVar4 * 4);
      if ((pvVar8 != (void *)0x0) && (*(char *)((int)pvVar8 + 0x28) != '\0')) {
        FUN_0050ab10((int)pvVar8);
        FUN_005adb3f(pvVar8);
        *(undefined4 *)(param_1[0xda] + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
      pvVar8 = (void *)param_1[0xda];
    } while (uVar4 < (uint)(param_1[0xdb] - (int)pvVar8 >> 2));
  }
  if (pvVar8 != (void *)0x0) {
    pvVar7 = pvVar8;
    if ((0xfff < (uint)((param_1[0xdc] - (int)pvVar8 >> 2) * 4)) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
    param_1[0xdc] = 0;
  }
  FUN_004025a0(param_1 + 0xd7);
  FUN_00519410(param_1 + 0xd2,&local_1c,*(int **)param_1[0xd2],(int *)param_1[0xd2]);
  FUN_005adb3f((void *)param_1[0xd2]);
  if (0xf < (uint)param_1[0xd0]) {
    pvVar8 = (void *)param_1[0xcb];
    pvVar7 = pvVar8;
    if ((0xfff < param_1[0xd0] + 1) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
  }
  param_1[0xcf] = 0;
  param_1[0xd0] = 0xf;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  pvVar8 = (void *)param_1[0x9c];
  if (pvVar8 != (void *)0x0) {
    pvVar7 = pvVar8;
    if ((0xfff < (uint)((param_1[0x9e] - (int)pvVar8 >> 2) * 4)) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
  }
  if (0xf < (uint)param_1[0x9b]) {
    pvVar8 = (void *)param_1[0x96];
    pvVar7 = pvVar8;
    if ((0xfff < param_1[0x9b] + 1) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
  }
  param_1[0x9a] = 0;
  param_1[0x9b] = 0xf;
  *(undefined1 *)(param_1 + 0x96) = 0;
  if (0xf < (uint)param_1[0x93]) {
    pvVar8 = (void *)param_1[0x8e];
    pvVar7 = pvVar8;
    if ((0xfff < param_1[0x93] + 1) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
  }
  param_1[0x92] = 0;
  param_1[0x93] = 0xf;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  pvVar8 = (void *)param_1[0x8a];
  if (pvVar8 != (void *)0x0) {
    pvVar7 = pvVar8;
    if ((0xfff < (uint)((param_1[0x8c] - (int)pvVar8 >> 2) * 4)) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
  }
  pvVar8 = (void *)param_1[0x85];
  if (pvVar8 != (void *)0x0) {
    pvVar7 = pvVar8;
    if ((0xfff < (uint)((param_1[0x87] - (int)pvVar8 >> 2) * 4)) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
  }
  FUN_004025a0(param_1 + 0x82);
  FUN_004025a0(param_1 + 0x7f);
  pvVar8 = (void *)param_1[0x71];
  if (pvVar8 != (void *)0x0) {
    pvVar7 = pvVar8;
    if ((0xfff < (param_1[0x73] - (int)pvVar8 & 0xffffffe0U)) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
  }
  iVar6 = param_1[0x53];
  piVar1 = param_1 + 0x53;
  local_8 = 1;
  piVar9 = *(int **)(iVar6 + 4);
  local_1c = iVar6;
  local_14 = piVar1;
  if (*(char *)((int)piVar9 + 0xd) == '\0') {
    do {
      FUN_004cb180((int *)piVar9[2]);
      piVar3 = (int *)*piVar9;
      FUN_005adb3f(piVar9);
      piVar9 = piVar3;
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
    iVar6 = *piVar1;
    param_1 = local_18;
  }
  *(int *)(iVar6 + 4) = local_1c;
  *(int *)*local_14 = local_1c;
  *(int *)(*local_14 + 8) = local_1c;
  local_14[1] = 0;
  FUN_005adb3f((void *)*local_14);
  if (0xf < (uint)param_1[0x31]) {
    pvVar8 = (void *)param_1[0x2c];
    pvVar7 = pvVar8;
    if ((0xfff < param_1[0x31] + 1) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0xf;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (0xf < (uint)param_1[0x2b]) {
    pvVar8 = (void *)param_1[0x26];
    pvVar7 = pvVar8;
    if ((0xfff < param_1[0x2b] + 1) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xf;
  *(undefined1 *)(param_1 + 0x26) = 0;
  if (0xf < (uint)param_1[0x25]) {
    pvVar8 = (void *)param_1[0x20];
    pvVar7 = pvVar8;
    if ((0xfff < param_1[0x25] + 1) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (0xf < (uint)param_1[0x1f]) {
    pvVar8 = (void *)param_1[0x1a];
    pvVar7 = pvVar8;
    if ((0xfff < param_1[0x1f] + 1) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7))))
    goto LAB_0050ab01;
    FUN_005adb3f(pvVar7);
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0xf;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (0xf < (uint)param_1[7]) {
    pvVar8 = (void *)param_1[2];
    pvVar7 = pvVar8;
    if ((0xfff < param_1[7] + 1) &&
       (pvVar7 = *(void **)((int)pvVar8 + -4), 0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar7)))) {
LAB_0050ab01:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0050ab10(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0xa0);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0xa8) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050ad2a;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x94);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x9c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050ad2a;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x88)) {
    pvVar1 = *(void **)(param_1 + 0x74);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x88) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050ad2a;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xf;
  *(undefined1 *)(param_1 + 0x74) = 0;
  if (0xf < *(uint *)(param_1 + 0x70)) {
    pvVar1 = *(void **)(param_1 + 0x5c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x70) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050ad2a;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xf;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  if (0xf < *(uint *)(param_1 + 0x58)) {
    pvVar1 = *(void **)(param_1 + 0x44);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x58) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050ad2a;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xf;
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (0xf < *(uint *)(param_1 + 0x40)) {
    pvVar1 = *(void **)(param_1 + 0x2c);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x40) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0050ad2a;
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xf;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    pvVar1 = *(void **)(param_1 + 4);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x18) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0050ad2a:
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


void __thiscall FUN_0050ad40(void *this,undefined4 param_1,int param_2,int param_3)

{
  void *this_00;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1314;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (void *)FUN_005adb0f(0x164);
  if (param_2 < 4) {
    local_8 = 1;
    puVar1 = FUN_00501e30(this_00,this,param_1);
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0x44) = puVar1;
    puVar1[0x1d] = param_2;
  }
  else {
    local_8 = 0;
    puVar1 = FUN_00501e30(this_00,this,param_1);
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0x44) = puVar1;
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)((int)this + 0x44) + 0x74) = uVar2;
  }
  if (param_3 < 3) {
    *(int *)(*(int *)((int)this + 0x44) + 0x78) = param_3;
  }
  else {
    iVar3 = rand();
    *(int *)(*(int *)((int)this + 0x44) + 0x78) = iVar3 % 3;
  }
  iVar3 = *(int *)(*(int *)((int)this + 0x44) + 0x70);
  if ((iVar3 != 0) && (iVar3 != 3)) {
    FUN_00591070(&DAT_0060dfc4,"%s: My captain is %s and %s");
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __cdecl FUN_0050ae50(int param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  char *pcVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint in_stack_0000001c;
  void *local_4030 [5];
  uint local_401c;
  uint local_18;
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c1343;
  local_10 = ExceptionList;
  uStack_14 = 0x50ae6b;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  ppuVar1 = &param_2;
  if (0xf < in_stack_0000001c) {
    ppuVar1 = (undefined4 **)param_2;
  }
  FUN_0042bbf0(ppuVar1,&stack0x00000020);
  pcVar2 = (char *)FUN_00591e00((undefined1 *)local_4030,"%s: %s");
  local_8 = CONCAT31(local_8._1_3_,1);
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar2 = *(char **)pcVar2;
  }
  FUN_00591070(&DAT_005cdc70,pcVar2);
  if (0xf < local_401c) {
    pvVar3 = local_4030[0];
    if ((0xfff < local_401c + 1) &&
       (pvVar3 = *(void **)((int)local_4030[0] + -4),
       0x1f < (uint)((int)local_4030[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  if (0xf < in_stack_0000001c) {
    puVar4 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (puVar4 = (undefined4 *)param_2[-1], 0x1f < (uint)((int)param_2 + (-4 - (int)puVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0050af80(int param_1)

{
  int iVar1;
  void *_Dst;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = 0;
  if (*(int *)(DAT_0065b5cc + 0x40) - *(int *)(DAT_0065b5cc + 0x3c) >> 2 != 0) {
    do {
      _Dst = (void *)FUN_005adb0f(0x300);
      memset(_Dst,0,0x300);
      local_8 = 0;
      _eh_vector_constructor_iterator_(_Dst,0xc,0x40,FUN_0042b080,FUN_00412930);
      local_8 = 0xffffffff;
      piVar2 = FUN_00420f40((void *)(param_1 + 0x348),
                            *(int **)(*(int *)(DAT_0065b5cc + 0x3c) + uVar3 * 4));
      iVar1 = DAT_0065b5cc;
      uVar3 = uVar3 + 1;
      *piVar2 = (int)_Dst;
    } while (uVar3 < (uint)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0050b040(int param_1)

{
  uint *_Dst;
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = 0;
  if (*(int *)(DAT_0065b5cc + 0x40) - *(int *)(DAT_0065b5cc + 0x3c) >> 2 != 0) {
    do {
      _Dst = (uint *)FUN_005adb0f(0x300);
      memset(_Dst,0,0x300);
      local_8 = 0;
      _eh_vector_constructor_iterator_(_Dst,0xc,0x40,FUN_0042b080,FUN_00412930);
      local_8 = 0xffffffff;
      piVar1 = FUN_00420f40((void *)(param_1 + 0x348),
                            *(int **)(*(int *)(DAT_0065b5cc + 0x3c) + uVar2 * 4));
      *piVar1 = (int)_Dst;
      if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) {
        FUN_0051e940(_Dst);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(DAT_0065b5cc + 0x40) - *(int *)(DAT_0065b5cc + 0x3c) >> 2));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0050b120(int param_1)

{
  void *pvVar1;
  int *piVar2;
  void *this;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  void *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c1370;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x34c) != 0) &&
     (piVar4 = (int *)(DAT_0065b5cc + 0x3c), 3 < (uint)(*(int *)(DAT_0065b5cc + 0x40) - *piVar4))) {
    local_1c = (void *)(param_1 + 0x348);
    local_14 = 0;
    do {
      if (*(int *)((int)local_1c + 4) == 0) {
        ExceptionList = local_10;
        return;
      }
      FUN_00519500(local_1c,(int *)&local_30,*(int **)(*piVar4 + local_14));
      piVar2 = local_2c;
      iVar5 = 0;
      local_18 = local_30;
      if (local_30 != local_2c) {
        do {
          iVar5 = iVar5 + 1;
          std::_Tree_unchecked_const_iterator<>::operator++
                    ((_Tree_unchecked_const_iterator<> *)&local_18);
          iVar3 = local_14;
          this = local_1c;
        } while (local_18 != piVar2);
        if (iVar5 != 0) {
          piVar4 = FUN_00420f40(local_1c,*(int **)(*piVar4 + local_14));
          pvVar1 = (void *)*piVar4;
          FUN_00519500(this,(int *)&local_28,*(int **)(iVar3 + *(int *)(DAT_0065b5cc + 0x3c)));
          piVar4 = local_24;
          local_18 = local_28;
          while (local_18 != piVar4) {
            std::_Tree_unchecked_const_iterator<>::operator++
                      ((_Tree_unchecked_const_iterator<> *)&local_18);
          }
          FUN_00519410(this,&local_20,local_28,piVar4);
          if (pvVar1 != (void *)0x0) {
            local_8 = 0;
            _eh_vector_destructor_iterator_(pvVar1,0xc,0x40,FUN_00412930);
            local_8 = 0xffffffff;
            FUN_005adb3f(pvVar1);
          }
        }
      }
      piVar4 = (int *)(DAT_0065b5cc + 0x3c);
      local_14 = local_14 + 4;
    } while ((*(int *)(DAT_0065b5cc + 0x40) - *piVar4 & 0xfffffffcU) != 0);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0050b290(void *this,float param_1)

{
  FUN_0050b390(this,param_1);
  return;
}


void FUN_0050b2e0(void)

{
  _CIatan2();
  return;
}


void __thiscall FUN_0050b390(void *this,float param_1)

{
  _CIatan2(*(double *)((int)this + 0x28) - (double)param_1);
  return;
}


void __thiscall FUN_0050b410(void *this,int param_1)

{
  _CIatan2(*(double *)((int)this + 0x28) - (double)(float)*(double *)(param_1 + 0x20));
  return;
}


int __fastcall FUN_0050b490(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float local_38;
  float local_34;
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
  undefined4 local_8;
  
  puStack_c = &LAB_005c13b4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x214);
  local_14 = 0.0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x218) - iVar1 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      if ((*(int *)(iVar1 + 0xe0) == 0) && (*(char *)(iVar1 + 0x10c) == '\0')) {
        local_20 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
        local_1c = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
        local_28 = (float)*(double *)(param_1 + 0x28);
        local_24 = (float)*(double *)(param_1 + 0x30);
        local_8 = 1;
        fVar4 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_20);
        local_18 = (float)(0x5f3759df - ((uint)fVar4 >> 1));
        fVar4 = (1.5 - fVar4 * 0.5 * local_18 * local_18) * local_18 * fVar4;
        if (((iVar3 == 0) || (*(int *)(iVar3 + 0xe0) == 0)) || (fVar4 < local_14)) {
LAB_0050b6b0:
          local_14 = fVar4;
          iVar3 = *(int *)(*(int *)(param_1 + 0x214) + uVar2 * 4);
        }
      }
      else if (*(int *)(iVar1 + 0xe0) == 1) {
        local_30 = (float)((double)*(float *)(iVar1 + 0x104) + *(double *)(iVar1 + 0x10));
        local_2c = (float)((double)*(float *)(iVar1 + 0x108) + *(double *)(iVar1 + 0x18));
        local_38 = (float)*(double *)(param_1 + 0x28);
        local_34 = (float)*(double *)(param_1 + 0x30);
        local_8 = 3;
        fVar4 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_38,(Vec2 *)&local_30);
        local_18 = (float)(0x5f3759df - ((uint)fVar4 >> 1));
        fVar4 = (1.5 - fVar4 * 0.5 * local_18 * local_18) * local_18 * fVar4;
        if (((iVar3 == 0) || (fVar4 < local_14)) || (*(int *)(iVar3 + 0xe0) != 0))
        goto LAB_0050b6b0;
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)(param_1 + 0x214);
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x218) - iVar1 >> 2));
  }
  ExceptionList = local_10;
  return iVar3;
}


void __fastcall FUN_0050b6f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c13d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  puVar9 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puVar5 = (undefined4 *)0x0;
  local_28 = (int *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_8 = 0;
  uVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x214);
  if (*(int *)(param_1 + 0x218) - iVar3 >> 2 != 0) {
    do {
      iVar6 = *(int *)(param_1 + 0xfc);
      if (iVar6 == 1) {
        iVar6 = *(int *)(*(int *)(iVar3 + uVar7 * 4) + 0xd8);
        if ((iVar6 != 2) && (iVar6 != 1)) {
joined_r0x0050b792:
          if (iVar6 != 3) goto LAB_0050b794;
        }
      }
      else {
        if (iVar6 != 2) goto joined_r0x0050b792;
        iVar6 = *(int *)(*(int *)(iVar3 + uVar7 * 4) + 0xd8);
        if ((iVar6 == 4) || (iVar6 == 0)) goto LAB_0050b7c8;
LAB_0050b794:
        local_1c = *(undefined4 *)(iVar3 + uVar7 * 4);
        local_18 = 0;
        if (puVar9 == puVar5) {
          FUN_00421160(&local_28,puVar5,&local_1c);
          local_14 = local_20;
          puVar5 = local_24;
          puVar9 = local_20;
        }
        else {
          *puVar5 = local_1c;
          puVar5[1] = 0;
          local_24 = puVar5 + 2;
          puVar5 = local_24;
        }
      }
LAB_0050b7c8:
      uVar7 = uVar7 + 1;
      iVar3 = *(int *)(param_1 + 0x214);
    } while (uVar7 < (uint)(*(int *)(param_1 + 0x218) - iVar3 >> 2));
  }
  iVar3 = *(int *)(param_1 + 0x24);
  uVar7 = 0;
  if (*(int *)(iVar3 + 0x94) - *(int *)(iVar3 + 0x90) >> 2 != 0) {
    do {
      if ((*(int *)(param_1 + 0xfc) != 1) && (*(int *)(param_1 + 0xfc) != 2)) {
        local_1c = 0;
        local_18 = *(undefined4 *)(*(int *)(iVar3 + 0x90) + uVar7 * 4);
        if (local_14 == puVar5) {
          FUN_00421160(&local_28,puVar5,&local_1c);
          local_14 = local_20;
          puVar5 = local_24;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = local_18;
          local_24 = puVar5 + 2;
          puVar5 = local_24;
        }
      }
      iVar3 = *(int *)(param_1 + 0x24);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(iVar3 + 0x94) - *(int *)(iVar3 + 0x90) >> 2));
  }
  uVar7 = (int)puVar5 - (int)local_28 >> 3;
  if (uVar7 == 0) {
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
    if (*(char *)(param_1 + 0x1b0) != '\0') {
      *(undefined4 *)(param_1 + 0x19c) = 0;
      *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x194);
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x1ac) == 0)) {
      iVar3 = *local_28;
      if (iVar3 == 0) {
        iVar3 = 0;
        *(int *)(param_1 + 0x1ac) = local_28[1];
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(local_28[1] + 0x38);
      }
      else {
        *(int *)(param_1 + 0x194) = iVar3;
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)*local_28;
      }
      if (*(char *)(param_1 + 0x1b0) == '\0') goto LAB_0050ba18;
      *(int *)(param_1 + 0x19c) = iVar3;
    }
    else {
      uVar1 = 0;
      if (uVar7 != 0) {
        do {
          if (((*(int *)(param_1 + 0x1ac) != 0) &&
              (*(int *)(param_1 + 0x1ac) == local_28[uVar1 * 2 + 1])) ||
             ((iVar3 != 0 && (iVar3 == local_28[uVar1 * 2])))) {
            if (uVar1 != 0xffffffff) {
              uVar4 = uVar7 - 1;
              if (uVar1 + 1 < uVar7) {
                uVar4 = uVar1 + 1;
              }
              piVar10 = local_28 + uVar4 * 2;
              iVar3 = *piVar10;
              if (iVar3 == 0) {
                *(undefined4 *)(param_1 + 0x194) = 0;
                iVar3 = 0;
                *(undefined4 *)(param_1 + 400) = 0xffffffff;
                iVar6 = piVar10[1];
                *(int *)(param_1 + 0x1ac) = iVar6;
                uVar8 = *(undefined4 *)(piVar10[1] + 0x38);
                uVar2 = 0xffffffff;
                *(undefined4 *)(param_1 + 0x1a8) = uVar8;
              }
              else {
                *(int *)(param_1 + 0x194) = iVar3;
                iVar6 = 0;
                uVar8 = 0xffffffff;
                uVar2 = *(undefined4 *)*piVar10;
                *(undefined4 *)(param_1 + 400) = uVar2;
                *(undefined4 *)(param_1 + 0x1ac) = 0;
                *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
              }
              if (*(char *)(param_1 + 0x1b0) == '\0') goto LAB_0050ba18;
              *(int *)(param_1 + 0x19c) = iVar3;
              *(int *)(param_1 + 0x1a4) = iVar6;
              *(undefined4 *)(param_1 + 0x1a0) = uVar8;
              goto LAB_0050ba12;
            }
            break;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar7);
      }
      iVar6 = *local_28;
      if (iVar6 == 0) {
        *(int *)(param_1 + 0x1ac) = local_28[1];
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(local_28[1] + 0x38);
      }
      else {
        *(int *)(param_1 + 0x194) = iVar6;
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)*local_28;
        iVar3 = iVar6;
      }
      if (*(char *)(param_1 + 0x1b0) == '\0') goto LAB_0050ba18;
      *(int *)(param_1 + 0x19c) = iVar3;
    }
    uVar2 = *(undefined4 *)(param_1 + 400);
LAB_0050ba12:
    *(undefined4 *)(param_1 + 0x198) = uVar2;
  }
LAB_0050ba18:
  if (local_28 != (int *)0x0) {
    piVar10 = local_28;
    if ((0xfff < ((int)local_14 - (int)local_28 & 0xfffffff8U)) &&
       (piVar10 = (int *)local_28[-1], 0x1f < (uint)((int)local_28 + (-4 - (int)piVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar10);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0050ba60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c13d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  puVar5 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)0x0;
  local_28 = (int *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_8 = 0;
  uVar8 = 0;
  iVar9 = *(int *)(param_1 + 0x214);
  if (*(int *)(param_1 + 0x218) - iVar9 >> 2 != 0) {
    do {
      iVar4 = *(int *)(param_1 + 0xfc);
      if (iVar4 == 1) {
        iVar4 = *(int *)(*(int *)(iVar9 + uVar8 * 4) + 0xd8);
        if ((iVar4 != 2) && (iVar4 != 1)) {
joined_r0x0050bb02:
          if (iVar4 != 3) goto LAB_0050bb04;
        }
      }
      else {
        if (iVar4 != 2) goto joined_r0x0050bb02;
        iVar4 = *(int *)(*(int *)(iVar9 + uVar8 * 4) + 0xd8);
        if ((iVar4 == 4) || (iVar4 == 0)) goto LAB_0050bb38;
LAB_0050bb04:
        local_1c = *(undefined4 *)(iVar9 + uVar8 * 4);
        local_18 = 0;
        if (puVar5 == puVar3) {
          FUN_00421160(&local_28,puVar3,&local_1c);
          local_14 = local_20;
          puVar3 = local_24;
          puVar5 = local_20;
        }
        else {
          *puVar3 = local_1c;
          puVar3[1] = 0;
          local_24 = puVar3 + 2;
          puVar3 = local_24;
        }
      }
LAB_0050bb38:
      uVar8 = uVar8 + 1;
      iVar9 = *(int *)(param_1 + 0x214);
    } while (uVar8 < (uint)(*(int *)(param_1 + 0x218) - iVar9 >> 2));
  }
  iVar9 = *(int *)(param_1 + 0x24);
  uVar8 = 0;
  if (*(int *)(iVar9 + 0x94) - *(int *)(iVar9 + 0x90) >> 2 != 0) {
    do {
      if ((*(int *)(param_1 + 0xfc) != 1) && (*(int *)(param_1 + 0xfc) != 2)) {
        local_1c = 0;
        local_18 = *(undefined4 *)(*(int *)(iVar9 + 0x90) + uVar8 * 4);
        if (local_14 == puVar3) {
          FUN_00421160(&local_28,puVar3,&local_1c);
          local_14 = local_20;
          puVar3 = local_24;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = local_18;
          local_24 = puVar3 + 2;
          puVar3 = local_24;
        }
      }
      iVar9 = *(int *)(param_1 + 0x24);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(*(int *)(iVar9 + 0x94) - *(int *)(iVar9 + 0x90) >> 2));
  }
  uVar8 = (int)puVar3 - (int)local_28 >> 3;
  if (uVar8 == 0) {
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 400) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
    if (*(char *)(param_1 + 0x1b0) != '\0') {
      *(undefined4 *)(param_1 + 0x19c) = 0;
      *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    }
    goto LAB_0050bd45;
  }
  iVar9 = *(int *)(param_1 + 0x194);
  if ((iVar9 == 0) && (*(int *)(param_1 + 0x1ac) == 0)) {
    iVar9 = *local_28;
    iVar4 = iVar9;
    if (iVar9 != 0) goto LAB_0050bc78;
LAB_0050bd15:
    *(int *)(param_1 + 0x1ac) = local_28[1];
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(local_28[1] + 0x38);
    iVar4 = iVar9;
  }
  else {
    uVar1 = 0;
    if (uVar8 != 0) {
      do {
        if (((*(int *)(param_1 + 0x1ac) != 0) &&
            (*(int *)(param_1 + 0x1ac) == local_28[uVar1 * 2 + 1])) ||
           ((iVar9 != 0 && (iVar9 == local_28[uVar1 * 2])))) {
          if (uVar1 != 0xffffffff) {
            iVar9 = 0;
            if (-1 < (int)(uVar1 - 1)) {
              iVar9 = uVar1 - 1;
            }
            piVar6 = local_28 + iVar9 * 2;
            iVar4 = *piVar6;
            if (iVar4 == 0) {
              *(undefined4 *)(param_1 + 0x194) = 0;
              iVar4 = 0;
              *(undefined4 *)(param_1 + 400) = 0xffffffff;
              iVar9 = piVar6[1];
              *(int *)(param_1 + 0x1ac) = iVar9;
              uVar7 = *(undefined4 *)(piVar6[1] + 0x38);
              uVar2 = 0xffffffff;
              *(undefined4 *)(param_1 + 0x1a8) = uVar7;
            }
            else {
              *(int *)(param_1 + 0x194) = iVar4;
              iVar9 = 0;
              uVar7 = 0xffffffff;
              uVar2 = *(undefined4 *)*piVar6;
              *(undefined4 *)(param_1 + 400) = uVar2;
              *(undefined4 *)(param_1 + 0x1ac) = 0;
              *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
            }
            if (*(char *)(param_1 + 0x1b0) == '\0') goto LAB_0050bd45;
            *(int *)(param_1 + 0x1a4) = iVar9;
            *(undefined4 *)(param_1 + 0x1a0) = uVar7;
            goto LAB_0050bd39;
          }
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar8);
    }
    iVar4 = *local_28;
    if (iVar4 == 0) goto LAB_0050bd15;
LAB_0050bc78:
    *(int *)(param_1 + 0x194) = iVar4;
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)*local_28;
  }
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 400);
LAB_0050bd39:
    *(int *)(param_1 + 0x19c) = iVar4;
    *(undefined4 *)(param_1 + 0x198) = uVar2;
  }
LAB_0050bd45:
  if (local_28 != (int *)0x0) {
    piVar6 = local_28;
    if ((0xfff < ((int)local_14 - (int)local_28 & 0xfffffff8U)) &&
       (piVar6 = (int *)local_28[-1], 0x1f < (uint)((int)local_28 + (-4 - (int)piVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar6);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0050bd90(void *this,char param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)((int)this + 0x40);
  *(char *)((int)this + 0xe4) = param_1;
  if (*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2 != 0) {
    do {
      this_00 = *(void **)(*(int *)(iVar1 + 0x3c) + uVar2 * 4);
      if ((param_1 == '\0') || (*(char *)((int)this_00 + 0x14) != '\0')) {
        FUN_004ae9f0(this_00,(int)this);
      }
      else {
        FUN_004ae7b0(this_00,(int)this);
      }
      iVar1 = *(int *)((int)this + 0x40);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2));
  }
  return;
}


uint __fastcall FUN_0050bdf0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14c);
  local_8 = (undefined4 *)*puVar1;
  while( true ) {
    if (local_8 == puVar1) {
      return (uint)local_8 & 0xffffff00;
    }
    if (0 < (int)local_8[5]) break;
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_8);
  }
  return CONCAT31((int3)((uint)local_8 >> 8),1);
}


uint __fastcall FUN_0050be30(int param_1)

{
  int *piVar1;
  void *this;
  int *piVar2;
  _Tree_unchecked_const_iterator<> *in_EAX;
  undefined8 local_14;
  int local_c;
  int *local_8;
  
  piVar1 = *(int **)(param_1 + 0x14c);
  local_8 = (int *)*piVar1;
  if (local_8 != piVar1) {
    this = *(void **)(param_1 + 0x254);
    do {
      piVar2 = local_8;
      FUN_0051a3f0(this,&local_14,local_8[4]);
      if ((local_14._4_1_ != '\0') && (local_c <= piVar2[5])) {
        return CONCAT31((int3)((uint)piVar2[5] >> 8),1);
      }
      in_EAX = std::_Tree_unchecked_const_iterator<>::operator++
                         ((_Tree_unchecked_const_iterator<> *)&local_8);
    } while (local_8 != piVar1);
  }
  return (uint)in_EAX & 0xffffff00;
}


char __thiscall FUN_0050be90(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = *(int **)(*(int *)((int)this + 0x254) + 0x118);
  iVar2 = *(int *)(*(int *)((int)this + 0x254) + 0x11c) - (int)piVar3;
  iVar1 = iVar2 >> 0x1f;
  iVar2 = iVar2 / 0xc + iVar1;
  if (iVar2 != iVar1) {
    do {
      if (*piVar3 == param_1) {
        iVar1 = FUN_0050bff0(this,param_1);
        iVar1 = 100 - iVar1;
        if (iVar1 == 100) {
          return '\0';
        }
        if (0x54 < iVar1) {
          return '\x01';
        }
        if (0x3b < iVar1) {
          return '\x02';
        }
        if (0x18 < iVar1) {
          return '\x03';
        }
        return (iVar1 < 1) + '\x04';
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  return '\0';
}


int __fastcall FUN_0050bf30(void *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float fVar7;
  undefined8 local_1c;
  float local_10;
  void *local_c;
  float local_8;
  
  iVar4 = 0;
  local_8 = 0.0;
  local_10 = 0.0;
  local_c = param_1;
  do {
    iVar2 = FUN_0050bff0(param_1,iVar4);
    pvVar1 = local_c;
    uVar6 = 0;
    piVar5 = *(int **)(*(int *)((int)param_1 + 0x254) + 0x118);
    iVar3 = *(int *)(*(int *)((int)param_1 + 0x254) + 0x11c) - (int)piVar5;
    fVar7 = (float)iVar2 + local_10;
    iVar2 = iVar3 >> 0x1f;
    iVar3 = iVar3 / 0xc + iVar2;
    local_10 = fVar7;
    if (iVar3 != iVar2) {
      do {
        if (*piVar5 == iVar4) {
          iVar2 = FUN_0051a3f0(*(void **)((int)local_c + 0x254),&local_1c,iVar4);
          local_8 = (float)*(int *)(iVar2 + 8) + local_8;
          break;
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 3;
      } while (uVar6 < (uint)(iVar3 - iVar2));
    }
    iVar4 = iVar4 + 1;
    param_1 = pvVar1;
    if (4 < iVar4) {
      return (int)((fVar7 / local_8) * 100.0);
    }
  } while( true );
}


int __thiscall FUN_0050bff0(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined8 local_14;
  int local_c;
  void *local_8;
  
  iVar2 = param_1;
  this_00 = *(void **)((int)this + 0x254);
  uVar5 = 0;
  piVar3 = *(int **)((int)this_00 + 0x118);
  iVar4 = *(int *)((int)this_00 + 0x11c) - (int)piVar3;
  iVar1 = iVar4 >> 0x1f;
  iVar4 = iVar4 / 0xc + iVar1;
  if (iVar4 != iVar1) {
    do {
      if (*piVar3 == param_1) {
        local_8 = this;
        FUN_0051a3f0(this_00,&local_14,param_1);
        param_1 = iVar2;
        piVar3 = FUN_00420f40((void *)((int)local_8 + 0x14c),&param_1);
        return (int)(((float)*piVar3 / (float)local_c) * 100.0);
      }
      uVar5 = uVar5 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar5 < (uint)(iVar4 - iVar1));
  }
  return 0;
}
