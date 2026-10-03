#include "../ois_server.exe.h"


void __thiscall
FUN_00560280(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_4) {
    do {
      if (param_3 < param_3 + 1) {
        iVar2 = 1;
        puVar1 = (undefined2 *)((int)this + (param_3 * 0x50 + iVar3) * 7 + 0x71a0);
        do {
          *puVar1 = (undefined2)param_1;
          *(undefined1 *)(puVar1 + 1) = param_1._2_1_;
          iVar2 = iVar2 + -1;
          puVar1 = puVar1 + 0x118;
        } while (iVar2 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  *(undefined1 *)((int)this + 0x428) = 1;
  **(undefined1 **)((int)this + 0x288) = 1;
  return;
}


undefined1 * __thiscall FUN_00560310(void *this,undefined4 param_1,char param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  Node *this_00;
  bool bVar4;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c7e90;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == '\0') {
    uVar2 = *(undefined1 *)(DAT_0065b5cc + 0xd4);
  }
  else {
    uVar2 = 0x54;
  }
  *(undefined1 *)this = uVar2;
  *(char *)((int)this + 1) = param_2;
  *(undefined2 *)((int)this + 2) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xc;
  *(undefined4 *)((int)this + 0x5c) = 0xfffffffd;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  local_8 = 4;
  uStack_7 = 0;
  bVar4 = DAT_0065b3ce != '\0';
  *(undefined4 *)((int)this + 0x74) = 2;
  *(undefined4 *)((int)this + 0x78) = 0x41400000;
  *(undefined4 *)((int)this + 0x7c) = 0x3fb33333;
  *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  *(undefined1 *)((int)this + 0x84) = 0;
  if ((bVar4) ||
     ((((iVar1 = *(int *)((int)this + 0x60), iVar1 != 0 &&
        (iVar1 = *(int *)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4), iVar1 != 0)) &&
       (iVar1 = *(int *)(iVar1 + 300), iVar1 != 0)) && (*(char *)(iVar1 + 6) != '\0')))) {
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x74) = 3;
  }
  if (*(int *)((int)this + 0x2c) == 0) {
    local_14 = this;
    this_00 = cocos2d::Node::create();
    *(Node **)((int)this + 0x2c) = this_00;
    cocos2d::Ref::retain((Ref *)this_00);
    local_1c = 0x3f000000;
    local_18 = 0x3f000000;
    local_8 = 5;
    (**(code **)(**(int **)((int)this + 0x2c) + 0xa0))(&local_1c,uVar3);
    _local_8 = CONCAT31(uStack_7,4);
    (**(code **)(**(int **)((int)this + 0x2c) + 0x2c))(0xbf800000);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_005604e0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c71c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005606e0(param_1);
  FUN_00561e50(*(int **)(param_1 + 0x68),*(int **)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  if (*(Ref **)(param_1 + 0x2c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int **)(param_1 + 0x68) != (int *)0x0) {
    FUN_00561e50(*(int **)(param_1 + 0x68),*(int **)(param_1 + 0x6c));
    pvVar1 = *(void **)(param_1 + 0x68);
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0x70) - (int)pvVar1) / 0x2c) * 0x2c)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005606d3;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x48);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x50) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005606d3;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x3c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x44) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005606d3;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x38) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_005606d3;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x28)) {
    pvVar1 = *(void **)(param_1 + 0x14);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x28) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_005606d3:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  *(undefined1 *)(param_1 + 0x14) = 0;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005606e0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x34) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x30) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x30);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x34) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x34) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x40) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x3c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x3c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x40) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x40) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x4c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x48) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x48);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x4c) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 100) + 0x138))(1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


void __thiscall FUN_005607c0(void *this,uint param_1)

{
  undefined4 *this_00;
  int iVar1;
  char cVar2;
  void **ppvVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *in_stack_ffffff58;
  uint local_74;
  int local_70;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  void *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7ec0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x60) != 0) {
    this_00 = (undefined4 *)((int)this + 0x68);
    FUN_00561e50((int *)*this_00,*(int **)((int)this + 0x6c));
    puVar6 = (undefined4 *)*this_00;
    *(undefined4 **)((int)this + 0x6c) = puVar6;
    iVar4 = *(int *)(*(int *)((int)this + 0x60) + 0x394);
    if (*(char *)(iVar4 + 5 + param_1 * 0x50) == '\0') {
      iVar7 = *(int *)((int)this + 0x60);
      local_74 = 0;
      iVar4 = *(int *)(iVar7 + 0x398) - iVar4;
      iVar1 = iVar4 >> 0x1f;
      if (iVar4 / 0x50 + iVar1 != iVar1) {
        iVar4 = 0;
        local_70 = 0x624;
        do {
          if (*(char *)(*(int *)(iVar7 + 0x394) + 4 + iVar4) != '\0') {
            if (*(int *)(*(int *)(iVar7 + 0x394) + 0x4c + iVar4) != 0) {
              in_stack_ffffff58 = (void *)((uint)in_stack_ffffff58 & 0xffffff00);
              FUN_00402690(&stack0xffffff58,&PTR_005ce008,0);
              cVar2 = FUN_00417780((void *)(*(int *)(*(int *)((int)this + 0x60) + 0x394) + 0x28 +
                                           iVar4),*(undefined4 *)(DAT_0065b5cc + 0xd0),0,
                                   in_stack_ffffff58);
              if (cVar2 == '\0') goto LAB_00560ad1;
            }
            if (*(char *)(iVar4 + 5 + *(int *)(*(int *)((int)this + 0x60) + 0x394)) == '\0') {
              local_5c = 0;
              local_58 = 0xf;
              local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
              local_54 = 0;
              local_50 = 0;
              local_4c = 0;
              local_44 = 0xbf800000;
              local_8 = 1;
              iVar7 = *(int *)(local_70 + *(int *)((int)this + 0x60));
              ppvVar3 = (void **)(iVar7 + 0x30);
              local_48 = local_74;
              if (local_6c != ppvVar3) {
                if (0xf < *(uint *)(iVar7 + 0x44)) {
                  ppvVar3 = *ppvVar3;
                }
                FUN_00402690(local_6c,ppvVar3,*(uint *)(iVar7 + 0x40));
              }
              puVar6 = *(undefined4 **)((int)this + 0x6c);
              local_54 = CONCAT11(local_54._1_1_,local_74 == param_1);
              if (*(undefined4 **)((int)this + 0x70) == puVar6) {
                FUN_00561b70(this_00,puVar6,local_6c);
              }
              else {
                FUN_004024e0(puVar6,local_6c);
                *(undefined1 *)(puVar6 + 6) = (undefined1)local_54;
                *(undefined1 *)((int)puVar6 + 0x19) = local_54._1_1_;
                puVar6[7] = local_50;
                puVar6[8] = local_4c;
                puVar6[9] = local_48;
                puVar6[10] = local_44;
                *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + 0x2c;
              }
              local_8 = 0xffffffff;
              if (0xf < local_58) {
                pvVar5 = local_6c[0];
                if ((0xfff < local_58 + 1) &&
                   (pvVar5 = *(void **)((int)local_6c[0] + -4),
                   0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar5)))) goto LAB_00560906;
                FUN_005adb3f(pvVar5);
              }
            }
          }
LAB_00560ad1:
          iVar4 = iVar4 + 0x50;
          local_74 = local_74 + 1;
          local_70 = local_70 + 4;
          iVar7 = *(int *)((int)this + 0x60);
        } while (local_74 < (uint)((*(int *)(iVar7 + 0x398) - *(int *)(iVar7 + 0x394)) / 0x50));
      }
    }
    else {
      local_30 = 0;
      local_2c = 0xf;
      local_40[0] = (void *)((uint)local_40[0] & 0xffffff00);
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_18 = 0xbf800000;
      local_8 = 0;
      local_1c = param_1;
      iVar4 = *(int *)(*(int *)((int)this + 0x60) + 0x624 + param_1 * 4);
      ppvVar3 = (void **)(iVar4 + 0x30);
      if (local_40 != ppvVar3) {
        if (0xf < *(uint *)(iVar4 + 0x44)) {
          ppvVar3 = *ppvVar3;
        }
        FUN_00402690(local_40,ppvVar3,*(uint *)(iVar4 + 0x40));
        puVar6 = *(undefined4 **)((int)this + 0x6c);
      }
      local_28 = CONCAT11(local_28._1_1_,1);
      if (*(undefined4 **)((int)this + 0x70) == puVar6) {
        FUN_00561b70(this_00,puVar6,local_40);
      }
      else {
        FUN_004024e0(puVar6,local_40);
        *(undefined1 *)(puVar6 + 6) = (undefined1)local_28;
        *(undefined1 *)((int)puVar6 + 0x19) = local_28._1_1_;
        puVar6[7] = local_24;
        puVar6[8] = local_20;
        puVar6[9] = local_1c;
        puVar6[10] = local_18;
        *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + 0x2c;
      }
      if (0xf < local_2c) {
        pvVar5 = local_40[0];
        if ((0xfff < local_2c + 1) &&
           (pvVar5 = *(void **)((int)local_40[0] + -4),
           0x1f < (uint)((int)local_40[0] + (-4 - (int)pvVar5)))) {
LAB_00560906:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00560b10(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  basic_string<> *pbVar5;
  byte *pbVar6;
  basic_string<> *pbVar7;
  float fVar8;
  float in_XMM1_Da;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_00560de0(param_1);
    return;
  }
  fVar9 = in_XMM1_Da;
  if (*(int *)(param_1 + 0x60) != 0) {
    if (((*(int *)(DAT_0065b5cc + 0xd0) == 0) ||
        (iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224), iVar2 == 0)) ||
       (iVar2 = *(int *)(iVar2 + 0x10), iVar2 == 0)) {
LAB_00560b9c:
      pbVar6 = (byte *)(param_1 + 0x14);
      if (0xf < *(uint *)(param_1 + 0x28)) {
        pbVar6 = *(byte **)(param_1 + 0x14);
      }
      uVar1 = FUN_004031f0(pbVar6,*(uint *)(param_1 + 0x24),(byte *)&PTR_005ce008,0);
      if ((char)uVar1 != '\0') goto LAB_00560bda;
      FUN_00402690((void *)(param_1 + 0x14),&PTR_005ce008,0);
    }
    else {
      pbVar7 = (basic_string<> *)(iVar2 + 0x18);
      pbVar5 = pbVar7;
      if (0xf < *(uint *)(iVar2 + 0x2c)) {
        pbVar5 = *(basic_string<> **)pbVar7;
      }
      uVar1 = FUN_004031f0((byte *)pbVar5,*(uint *)(iVar2 + 0x28),(byte *)&PTR_005ce008,0);
      if ((char)uVar1 != '\0') goto LAB_00560b9c;
      uVar1 = FUN_00413e90((byte *)(param_1 + 0x14),(byte *)pbVar7);
      if ((char)uVar1 == '\0') goto LAB_00560bda;
      std::basic_string<>::operator=((basic_string<> *)(param_1 + 0x14),pbVar7);
    }
    FUN_00560de0(param_1);
    fVar9 = in_XMM1_Da;
  }
LAB_00560bda:
  if (*(char *)(DAT_0065b444 + 0x73) == '\0') {
    iVar2 = (int)*(float *)(&DAT_005ce048 + *(int *)(DAT_0065b444 + 100) * 4);
  }
  else {
    iVar2 = -1;
  }
  if (iVar2 == *(int *)(param_1 + 8)) {
    fVar8 = *(float *)(param_1 + 4);
    if (fVar8 <= 0.0) goto LAB_00560c44;
  }
  else {
    *(int *)(param_1 + 8) = iVar2;
    FUN_00560de0(param_1);
    fVar8 = 2.0;
    *(undefined4 *)(param_1 + 4) = 0x40000000;
    fVar9 = in_XMM1_Da;
  }
  fVar8 = fVar8 - fVar9;
  *(float *)(param_1 + 4) = fVar8;
  if (fVar8 < 0.0) {
    *(undefined4 *)(param_1 + 4) = 0;
    fVar8 = 0.0;
  }
LAB_00560c44:
  fVar10 = 0.0;
  if ((*(char *)(param_1 + 0x84) == '\0') && (*(char *)(param_1 + 3) == '\0')) {
    pbVar6 = (byte *)(param_1 + 0x14);
    if (0xf < *(uint *)(param_1 + 0x28)) {
      pbVar6 = *(byte **)(param_1 + 0x14);
    }
    uVar1 = FUN_004031f0(pbVar6,*(uint *)(param_1 + 0x24),(byte *)&PTR_005ce008,0);
    if (((char)uVar1 != '\0') && (fVar8 <= fVar10)) {
      iVar2 = *(int *)(param_1 + 0x74);
      if (iVar2 != 1) {
        if (iVar2 == 4) {
          fVar9 = fVar9 * 128.0 + *(float *)(param_1 + 0x78);
          *(float *)(param_1 + 0x78) = fVar9;
          if (12.0 <= fVar9) {
            *(undefined4 *)(param_1 + 0x78) = 0x41400000;
            *(undefined4 *)(param_1 + 0x74) = 0;
          }
          FUN_00561a60(param_1);
          return;
        }
        if (iVar2 != 2) {
          return;
        }
        fVar9 = *(float *)(param_1 + 0x7c) - fVar9;
        *(float *)(param_1 + 0x7c) = fVar9;
        if (fVar10 < fVar9) {
          return;
        }
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      *(undefined4 *)(param_1 + 0x74) = 4;
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x74);
  if ((((iVar2 == 2) || (iVar2 == 0)) || (iVar2 == 1)) || (iVar2 == 4)) {
    *(undefined4 *)(param_1 + 0x74) = 1;
    fVar9 = *(float *)(param_1 + 0x78) - fVar9 * 128.0;
    *(float *)(param_1 + 0x78) = fVar9;
    if (fVar9 <= fVar10) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x74) = 2;
      *(undefined4 *)(param_1 + 0x7c) = 0x3fb33333;
    }
    iVar2 = **(int **)(param_1 + 0x2c);
    iVar3 = (**(code **)(iVar2 + 0xb0))();
    fVar9 = *(float *)(iVar3 + 4);
    fVar8 = *(float *)(param_1 + 0x78);
    pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0x2c) + 0xb0))();
    (**(code **)(iVar2 + 0x48))(*pfVar4 * 0.5,fVar9 * 0.5 - fVar8);
  }
  else if ((iVar2 == 3) && (*(float *)(param_1 + 0x78) != fVar10)) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00561a60(param_1);
    return;
  }
  return;
}


// WARNING: Type propagation algorithm not settling

void __fastcall FUN_00560de0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  basic_string<> *pbVar3;
  Scale9Sprite *pSVar4;
  Ref *pRVar5;
  float *pfVar6;
  byte *pbVar7;
  void **ppvVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  void **ppvVar13;
  void *pvVar14;
  char *pcVar15;
  int iVar16;
  void **in_stack_fffffe8c;
  Scale9Sprite *pSVar17;
  Size local_130 [8];
  undefined4 local_128;
  undefined4 local_124;
  byte *local_120;
  byte *local_11c;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  uint local_10c;
  Ref *local_108;
  void *local_104 [5];
  uint local_f0;
  undefined4 local_ec [4];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4 [16];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [16];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [16];
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [16];
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [16];
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [16];
  undefined4 local_4c;
  undefined4 local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7fa7;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005606e0(param_1);
  if (*(int *)(param_1 + 0x60) == 0) goto LAB_00561a37;
  pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_SystemBar.png");
  local_8 = 0;
  pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar14 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar14 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
LAB_00560e74:
      local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar14);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar16 = *(int *)pSVar4;
  cocos2d::Size::Size((Size *)&local_110,(float)*(int *)(param_1 + 0x54),
                      (float)*(int *)(param_1 + 0x58));
  (**(code **)(iVar16 + 0xac))();
  local_110 = 0;
  local_10c = 0;
  local_8 = 1;
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar4 + 0x48))();
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x108))();
  if (*(char *)(param_1 + 1) == '\0') {
    if ((*(char *)(*(int *)(param_1 + 0x60) + 0x3a4) != '\0') ||
       (pcVar15 = "%c_SystemBar_HelpIcon.png", *(char *)(*(int *)(param_1 + 0x60) + 0x3a5) != '\0'))
    {
      pcVar15 = "%c_SystemBar_ExitIcon.png";
    }
    FUN_00591e00(&stack0xfffffe8c,pcVar15);
    pRVar5 = (Ref *)FUN_00591910(in_stack_fffffe8c);
    local_108 = pRVar5;
    (**(code **)(*(int *)pRVar5 + 0x48))();
    puVar1 = *(undefined4 **)(param_1 + 0x34);
    if (*(undefined4 **)(param_1 + 0x38) == puVar1) {
      FUN_00414080((void *)(param_1 + 0x30),puVar1,&local_108);
    }
    else {
      *puVar1 = pRVar5;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
    }
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x108))();
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x48))();
  iVar16 = **(int **)(param_1 + 0x2c);
  cocos2d::Size::Size(local_130,(float)*(int *)(param_1 + 0x54),(float)*(int *)(param_1 + 0x58));
  (**(code **)(iVar16 + 0xac))();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(char *)(*(int *)(param_1 + 0x60) + 0x3a4) == '\0') {
    iVar16 = *(int *)(param_1 + 0x68);
    iVar11 = *(int *)(param_1 + 0x6c) - iVar16;
    iVar10 = iVar11 >> 0x1f;
    iVar11 = iVar11 / 0x2c + iVar10;
    if (iVar11 - iVar10 == 1) {
      FUN_00591e00((undefined1 *)local_2c,&DAT_0061ceb0);
      local_8 = 2;
      if (local_1c < 0x51) {
        FUN_004024e0(&stack0xfffffea4,local_2c);
        pRVar5 = FUN_0055cb00((Node)0x0,pSVar4);
        local_108 = pRVar5;
        (**(code **)(*(int *)pRVar5 + 0x48))();
        (**(code **)(**(int **)(param_1 + 0x2c) + 0x108))();
        pSVar17 = *(Scale9Sprite **)(param_1 + 0x4c);
        if (*(Scale9Sprite **)(param_1 + 0x50) == pSVar17) {
          FUN_00414080((void *)(param_1 + 0x48),pSVar17,&local_108);
          pRVar5 = local_108;
          pSVar4 = pSVar17;
        }
        else {
          *(Ref **)pSVar17 = pRVar5;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 4;
        }
        pfVar6 = (float *)(**(code **)(*(int *)pRVar5 + 0xb0))();
        *(int *)(param_1 + 0xc) = (int)(*pfVar6 + 2.0);
      }
      else {
        bVar2 = cc_assert_script_compatible("Very big string error.");
        if (!bVar2) {
          cocos2d::log("Assert failed: %s");
        }
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
    }
    else if ((iVar11 != iVar10) && (local_10c = 0, iVar11 != iVar10)) {
      iVar10 = 0;
      local_114 = 0;
      do {
        pbVar7 = (byte *)(iVar10 + iVar16);
        pbVar12 = pbVar7;
        if (0xf < *(uint *)(iVar10 + 0x14 + iVar16)) {
          pbVar12 = *(byte **)pbVar7;
        }
        uVar9 = FUN_004031f0(pbVar12,*(uint *)(pbVar7 + 0x10),(byte *)&PTR_005ce008,0);
        if ((char)uVar9 == '\0') {
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          FUN_00402690(local_44,"Unknown",7);
          local_8 = 3;
          local_dc = 0;
          local_d8 = 0xf;
          local_ec[0]._0_1_ = 0;
          FUN_00402690(local_ec,"Cargo",5);
          local_8._0_1_ = 4;
          local_c4 = 0;
          local_c0 = 0xf;
          local_d4[0] = 0;
          FUN_00402690(local_d4,&DAT_005ecf00,4);
          local_8._0_1_ = 5;
          local_ac = 0;
          local_a8 = 0xf;
          local_bc[0] = 0;
          FUN_00402690(local_bc,"PComms",6);
          local_8._0_1_ = 6;
          local_94 = 0;
          local_90 = 0xf;
          local_a4[0] = 0;
          FUN_00402690(local_a4,"RTComms",7);
          local_8._0_1_ = 7;
          local_7c = 0;
          local_78 = 0xf;
          local_8c[0] = 0;
          FUN_00402690(local_8c,"Weapons",7);
          local_8._0_1_ = 8;
          local_64 = 0;
          local_60 = 0xf;
          local_74[0] = 0;
          FUN_00402690(local_74,"AdminTerm",9);
          local_8._0_1_ = 9;
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = 0;
          FUN_00402690(local_5c,"DockingPerm",0xb);
          local_8._0_1_ = 10;
          local_120 = (byte *)0x0;
          local_11c = (byte *)0x0;
          local_118 = 0;
          FUN_00561d90(&local_120,local_ec,local_44);
          local_8 = CONCAT31(local_8._1_3_,0xc);
          _eh_vector_destructor_iterator_(local_ec,0x18,7,FUN_00401b20);
          if (((*(char *)(param_1 + 1) != '\0') ||
              (pbVar7 = FUN_004143f0(local_120,local_11c,(byte *)(*(int *)(param_1 + 0x68) + iVar10)
                                    ), pbVar7 != local_11c)) &&
             (ppvVar8 = (void **)(*(int *)(param_1 + 0x68) + iVar10), local_44 != ppvVar8)) {
            ppvVar13 = ppvVar8;
            if ((void *)0xf < ppvVar8[5]) {
              ppvVar13 = *ppvVar8;
            }
            FUN_00402690(local_44,ppvVar13,(uint)ppvVar8[4]);
          }
          in_stack_fffffe8c = (void **)0x5614ee;
          FUN_00591e00(&stack0xfffffea4,"%c_SystemBar_%s%s.png");
          pRVar5 = (Ref *)FUN_00591910(pSVar4);
          local_108 = pRVar5;
          (**(code **)(*(int *)pRVar5 + 0x48))();
          *(int *)(iVar10 + 0x1c + *(int *)(param_1 + 0x68)) = local_114;
          *(undefined4 *)(iVar10 + 0x20 + *(int *)(param_1 + 0x68)) = 0xb;
          puVar1 = *(undefined4 **)(param_1 + 0x34);
          if (*(undefined4 **)(param_1 + 0x38) == puVar1) {
            FUN_00414080((void *)(param_1 + 0x30),puVar1,&local_108);
          }
          else {
            *puVar1 = pRVar5;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
          }
          (**(code **)(**(int **)(param_1 + 0x2c) + 0x108))();
          *(int *)(param_1 + 0xc) =
               *(int *)(iVar10 + 0x20 + *(int *)(param_1 + 0x68)) +
               *(int *)(iVar10 + 0x1c + *(int *)(param_1 + 0x68));
          FUN_004025a0((int *)&local_120);
          local_8 = 0xffffffff;
          if (0xf < local_30) {
            pvVar14 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar14 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14)))) goto LAB_00560e74;
            FUN_005adb3f(pvVar14);
          }
        }
        iVar16 = *(int *)(param_1 + 0x68);
        iVar10 = iVar10 + 0x2c;
        local_10c = local_10c + 1;
        local_114 = local_114 + 0xb;
      } while (local_10c < (uint)((*(int *)(param_1 + 0x6c) - iVar16) / 0x2c));
    }
  }
  else {
    pSVar17 = (Scale9Sprite *)((uint)pSVar4 & 0xffffff00);
    FUN_00402690(&stack0xfffffea4,"`!Information in Space",0x16);
    pRVar5 = FUN_0055cb00((Node)0x0,pSVar17);
    local_108 = pRVar5;
    (**(code **)(*(int *)pRVar5 + 0x48))();
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x108))();
    pSVar4 = *(Scale9Sprite **)(param_1 + 0x4c);
    if (*(Scale9Sprite **)(param_1 + 0x50) == pSVar4) {
      FUN_00414080((void *)(param_1 + 0x48),pSVar4,&local_108);
      pRVar5 = local_108;
    }
    else {
      *(Ref **)pSVar4 = pRVar5;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 4;
      pSVar4 = pSVar17;
    }
    pfVar6 = (float *)(**(code **)(*(int *)pRVar5 + 0xb0))();
    *(int *)(param_1 + 0xc) = (int)(*pfVar6 + 2.0);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    pbVar7 = (byte *)(param_1 + 0x14);
    pbVar12 = pbVar7;
    if (0xf < *(uint *)(param_1 + 0x28)) {
      pbVar12 = *(byte **)pbVar7;
    }
    uVar9 = FUN_004031f0(pbVar12,*(uint *)(param_1 + 0x24),(byte *)&PTR_005ce008,0);
    if ((char)uVar9 == '\0') {
      FUN_004024e0(local_2c,(undefined4 *)pbVar7);
      local_8 = 0xd;
      FUN_004024e0(&stack0xfffffe8c,local_2c);
      FUN_00591780((void **)&stack0xfffffea4,*(int *)(param_1 + 0x10) / 6,in_stack_fffffe8c);
      pRVar5 = FUN_0055cb00((Node)0x0,pSVar4);
      *(Ref **)(param_1 + 100) = pRVar5;
      cocos2d::Ref::retain(pRVar5);
      local_110 = 0x3f000000;
      local_10c = 0;
      local_8._0_1_ = 0xe;
      (**(code **)(**(int **)(param_1 + 100) + 0xa0))();
      local_8 = CONCAT31(local_8._1_3_,0xd);
      (**(code **)(**(int **)(param_1 + 100) + 0x48))();
      pSVar4 = (Scale9Sprite *)0x5616ea;
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x108))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
        pvVar14 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar14 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
LAB_005618da:
        local_8 = 0xffffffff;
        FUN_005adb3f(pvVar14);
      }
    }
  }
  else if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) {
    pcVar15 = "%02d:%02d %d %s %da";
    FUN_00591e00((undefined1 *)local_2c,"%02d:%02d %d %s %da");
    local_8 = 0xf;
    FUN_00591e00((undefined1 *)local_104,&DAT_0061a63c);
    local_8._0_1_ = 0x11;
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
    FUN_004024e0(&stack0xfffffe8c,local_104);
    FUN_00591780((void **)&stack0xfffffea4,*(int *)(param_1 + 0x10) / 6,in_stack_fffffe8c);
    pRVar5 = FUN_0055cb00((Node)0x0,pcVar15);
    *(Ref **)(param_1 + 100) = pRVar5;
    cocos2d::Ref::retain(pRVar5);
    local_128 = 0x3f000000;
    local_124 = 0;
    local_8._0_1_ = 0x12;
    (**(code **)(**(int **)(param_1 + 100) + 0xa0))();
    local_8 = CONCAT31(local_8._1_3_,0x11);
    (**(code **)(**(int **)(param_1 + 100) + 0x48))();
    pSVar4 = (Scale9Sprite *)0x5618a1;
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x108))();
    local_8 = 0xffffffff;
    if (0xf < local_f0) {
      pvVar14 = local_104[0];
      if ((0xfff < local_f0 + 1) &&
         (pvVar14 = *(void **)((int)local_104[0] + -4),
         0x1f < (uint)((int)local_104[0] + (-4 - (int)pvVar14)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      goto LAB_005618da;
    }
  }
  if ((*(char *)(DAT_0065b444 + 0x73) != '\0') ||
     ((0 < *(int *)(DAT_0065b444 + 100) &&
      ((*(float *)(&DAT_005ce048 + *(int *)(DAT_0065b444 + 100) * 4) == 2.0 ||
       (*(float *)(&DAT_005ce048 + *(int *)(DAT_0065b444 + 100) * 4) == 4.0)))))) {
    FUN_00591e00(&stack0xfffffea4,"SystemBar_TimeCompression_%d.png");
    pRVar5 = (Ref *)FUN_00591910(pSVar4);
    local_108 = pRVar5;
    if (pRVar5 != (Ref *)0x0) {
      (**(code **)(*(int *)pRVar5 + 0x48))();
      puVar1 = *(undefined4 **)(param_1 + 0x34);
      if (*(undefined4 **)(param_1 + 0x38) == puVar1) {
        FUN_00414080((void *)(param_1 + 0x30),puVar1,&local_108);
      }
      else {
        *puVar1 = pRVar5;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
      }
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x108))();
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
  *(int *)(param_1 + 0x10) = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xc)) + -0xc;
  iVar16 = **(int **)(param_1 + 0x2c);
  iVar10 = (**(code **)(iVar16 + 0xb0))();
  local_10c = *(uint *)(iVar10 + 4);
  local_114 = *(int *)(param_1 + 0x78);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0xb0))();
  (**(code **)(iVar16 + 0x48))();
LAB_00561a37:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00561a60(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  iVar3 = **(int **)(param_1 + 0x2c);
  iVar4 = (**(code **)(iVar3 + 0xb0))();
  fVar1 = *(float *)(iVar4 + 4);
  fVar2 = *(float *)(param_1 + 0x78);
  pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0x2c) + 0xb0))();
  (**(code **)(iVar3 + 0x48))(*pfVar5 * 0.5,fVar1 * 0.5 - fVar2);
  return;
}


void __fastcall FUN_00561ad0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    FUN_00561e50((int *)*param_1,(int *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[2] - (int)pvVar1) / 0x2c) * 0x2c)) &&
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


void FUN_00561b50(int *param_1,int *param_2)

{
  FUN_00561e50(param_1,param_2);
  return;
}


int __thiscall FUN_00561b70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *this_00;
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int *piVar11;
  int *piVar12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7fd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)this;
  iVar2 = ((int)param_1 - iVar6) / 0x2c;
  iVar3 = (*(int *)((int)this + 4) - iVar6) / 0x2c;
  if (iVar3 == 0x5d1745d) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar7 = iVar3 + 1;
  uVar5 = (*(int *)((int)this + 8) - iVar6) / 0x2c;
  uVar4 = uVar7;
  if ((uVar5 <= 0x5d1745d - (uVar5 >> 1)) && (uVar4 = (uVar5 >> 1) + uVar5, uVar4 < uVar7)) {
    uVar4 = uVar7;
  }
  uVar7 = uVar4 * 0x2c;
  if (uVar4 < 0x5d1745e) {
    if (0xfff < uVar7) goto LAB_00561c30;
    if (uVar7 == 0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)FUN_005adb0f(uVar7);
    }
  }
  else {
    uVar7 = 0xffffffff;
LAB_00561c30:
    uVar5 = uVar7 + 0x23;
    if (uVar5 <= uVar7) {
      uVar5 = 0xffffffff;
    }
    iVar6 = FUN_005adb0f(uVar5);
    if (iVar6 == 0) goto LAB_00561c53;
    piVar11 = (int *)(iVar6 + 0x23U & 0xffffffe0);
    piVar11[-1] = iVar6;
  }
  local_8 = 0;
  this_00 = piVar11 + iVar2 * 0xb;
  FUN_004024e0(this_00,param_2);
  *(undefined1 *)(this_00 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((int)this_00 + 0x19) = *(undefined1 *)((int)param_2 + 0x19);
  this_00[7] = param_2[7];
  this_00[8] = param_2[8];
  this_00[9] = param_2[9];
  this_00[10] = param_2[10];
  puVar9 = *(undefined4 **)((int)this + 4);
  puVar8 = *(undefined4 **)this;
  piVar12 = piVar11;
  if (param_1 != puVar9) {
    FUN_00561ec0(*(undefined4 **)this,param_1,piVar11);
    puVar9 = *(undefined4 **)((int)this + 4);
    piVar12 = this_00 + 0xb;
    puVar8 = param_1;
  }
  FUN_00561ec0(puVar8,puVar9,piVar12);
  if (*(int **)this != (int *)0x0) {
    FUN_00561e50(*(int **)this,*(int **)((int)this + 4));
    pvVar1 = *(void **)this;
    pvVar10 = pvVar1;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar1) / 0x2c) * 0x2c)) &&
       (pvVar10 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar10)))) {
LAB_00561c53:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar10);
  }
  *(int **)this = piVar11;
  *(int **)((int)this + 4) = piVar11 + (iVar3 + 1) * 0xb;
  *(int **)((int)this + 8) = piVar11 + uVar4 * 0xb;
  ExceptionList = local_10;
  return *(int *)this + iVar2 * 0x2c;
}


void __thiscall FUN_00561d90(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *this_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0042ba20(this,((int)param_2 - (int)param_1) / 0x18);
  if ((char)uVar1 != '\0') {
    this_00 = *(int **)this;
    local_8 = 1;
    for (; param_1 != param_2; param_1 = param_1 + 6) {
      FUN_004024e0(this_00,param_1);
      this_00 = this_00 + 6;
    }
    FUN_004028b0(this_00,this_00);
    *(int **)((int)this + 4) = this_00;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00561e50(int *param_1,int *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (0xf < (uint)param_1[5]) {
      pvVar1 = (void *)*param_1;
      pvVar2 = pvVar1;
      if ((0xfff < param_1[5] + 1U) &&
         (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 0xb;
  } while( true );
}


int * __fastcall FUN_00561ec0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar6 = param_3;
  if (param_1 != param_2) {
    puVar5 = param_1 + 5;
    do {
      piVar6[4] = 0;
      *(undefined4 *)((int)param_3 + (-0x2c - (int)param_1) + (int)(puVar5 + 0xb)) = 0;
      iVar2 = puVar5[-4];
      iVar3 = puVar5[-3];
      iVar4 = puVar5[-2];
      *piVar6 = puVar5[-5];
      piVar6[1] = iVar2;
      piVar6[2] = iVar3;
      piVar6[3] = iVar4;
      *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(puVar5 + -1);
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      *(undefined1 *)(piVar6 + 6) = *(undefined1 *)(puVar5 + 1);
      *(undefined1 *)((int)piVar6 + 0x19) = *(undefined1 *)((int)puVar5 + 5);
      piVar6[7] = puVar5[2];
      piVar6[8] = puVar5[3];
      piVar6[9] = puVar5[4];
      piVar6[10] = puVar5[5];
      puVar1 = puVar5 + 6;
      piVar6 = piVar6 + 0xb;
      puVar5 = puVar5 + 0xb;
    } while (puVar1 != param_2);
  }
  FUN_00561e50(piVar6,piVar6);
  return piVar6;
}


Node * __thiscall FUN_00561f50(void *this,byte param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8020;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UIAnimatedSprite::vftable;
  if (*(int **)((int)this + 0x2a4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2a4) + 0x134))(uVar2);
    *(undefined4 *)((int)this + 0x2a4) = 0;
  }
  puVar5 = *(undefined4 **)((int)this + 0x2a8);
  uVar4 = 0;
  uVar2 = (uint)((int)*(undefined4 **)((int)this + 0x2ac) + (3 - (int)puVar5)) >> 2;
  if (*(undefined4 **)((int)this + 0x2ac) < puVar5) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      cocos2d::Ref::autorelease((Ref *)*puVar5);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != uVar2);
  }
  *(undefined4 *)((int)this + 0x2ac) = *(undefined4 *)((int)this + 0x2a8);
  pvVar1 = *(void **)((int)this + 0x2a8);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x2b0) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005620cd;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)((int)this + 0x2a8) = 0;
    *(undefined4 *)((int)this + 0x2ac) = 0;
    *(undefined4 *)((int)this + 0x2b0) = 0;
  }
  if (0xf < *(uint *)((int)this + 0x28c)) {
    pvVar1 = *(void **)((int)this + 0x278);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x28c) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
LAB_005620cd:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0xf;
  *(undefined1 *)((int)this + 0x278) = 0;
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_005620e0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  Ref *this;
  int iVar3;
  int iVar4;
  void *in_stack_ffffffb8;
  Ref *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8049;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int *)param_1[0xa9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xa9] + 0x134))();
    param_1[0xa9] = 0;
  }
  piVar2 = param_1 + 0xaa;
  iVar3 = *piVar2;
  if (((uint)(param_1[0xab] - iVar3) < 4) && (iVar4 = 0, 0 < param_1[0xa4])) {
    do {
      FUN_00591e00(&stack0xffffffb8,"%s_%02d.png");
      this = (Ref *)FUN_00591910(in_stack_ffffffb8);
      local_14 = this;
      cocos2d::Ref::retain(this);
      puVar1 = (undefined4 *)param_1[0xab];
      if ((undefined4 *)param_1[0xac] == puVar1) {
        FUN_00414080(piVar2,puVar1,&local_14);
      }
      else {
        *puVar1 = this;
        param_1[0xab] = param_1[0xab] + 4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[0xa4]);
    iVar3 = *piVar2;
  }
  piVar2 = *(int **)(iVar3 + param_1[0xa5] * 4);
  param_1[0xa9] = (int)piVar2;
  local_8 = 0;
  (**(code **)(*piVar2 + 0xa0))();
  local_8 = 0xffffffff;
  iVar3 = *(int *)param_1[0xa9];
  (**(code **)(iVar3 + 0xb0))();
  (**(code **)(*(int *)param_1[0xa9] + 0xb0))();
  (**(code **)(iVar3 + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  iVar3 = *param_1;
  (**(code **)(*(int *)param_1[0xa9] + 0xb0))();
  (**(code **)(iVar3 + 0xac))();
  ExceptionList = local_10;
  return;
}


Node * __thiscall FUN_00562280(void *this,int param_1,int param_2,undefined3 param_3)

{
  Node *this_00;
  Size *pSVar1;
  int *piVar2;
  undefined1 extraout_var;
  uint in_stack_ffffff88;
  void *pvVar3;
  uint in_stack_ffffff98;
  uint in_stack_ffffffa8;
  uint in_stack_ffffffb8;
  undefined4 local_20;
  undefined4 local_1c;
  Node *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &param_1_005c809d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = this;
  cocos2d::Node::Node(this);
  local_8 = 0;
  *(undefined ***)this = UIRectangle::vftable;
  cocos2d::Color3B::Color3B((Color3B *)((int)this + 0x288));
  pSVar1 = (Size *)cocos2d::Size::Size((Size *)&local_20,(float)param_1,(float)param_2);
  cocos2d::Node::setContentSize(this,pSVar1);
  pvVar3 = (void *)(in_stack_ffffffb8 & 0xffffff00);
  FUN_00402690(&stack0xffffffb8,"white.png",9);
  piVar2 = (int *)FUN_00591910(pvVar3);
  *(int **)((int)this + 0x278) = piVar2;
  local_20 = 0;
  local_1c = 0;
  local_8._0_1_ = 1;
  (**(code **)(*piVar2 + 0xa0))();
  local_8._0_1_ = 0;
  (**(code **)(**(int **)((int)this + 0x278) + 0x48))();
  (**(code **)(**(int **)((int)this + 0x278) + 0x2c))();
  cocos2d::Node::addChild(this,*(Node **)((int)this + 0x278));
  pvVar3 = (void *)(in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"white.png",9);
  piVar2 = (int *)FUN_00591910(pvVar3);
  local_20 = 0;
  local_1c = 0;
  *(int **)(local_18 + 0x27c) = piVar2;
  local_8._0_1_ = 2;
  (**(code **)(*piVar2 + 0xa0))();
  local_8._0_1_ = 0;
  (**(code **)(**(int **)(local_18 + 0x27c) + 0x48))();
  this_00 = local_18;
  (**(code **)(**(int **)(local_18 + 0x27c) + 0x24))();
  cocos2d::Node::addChild(this_00,*(Node **)(this_00 + 0x27c));
  pvVar3 = (void *)(in_stack_ffffff98 & 0xffffff00);
  FUN_00402690(&stack0xffffff98,"white.png",9);
  piVar2 = (int *)FUN_00591910(pvVar3);
  *(int **)(this_00 + 0x280) = piVar2;
  local_20 = 0;
  local_1c = 0;
  local_8._0_1_ = 3;
  (**(code **)(*piVar2 + 0xa0))();
  local_8._0_1_ = 0;
  (**(code **)(**(int **)(this_00 + 0x280) + 0x48))();
  (**(code **)(**(int **)(this_00 + 0x280) + 0x2c))();
  cocos2d::Node::addChild(this_00,*(Node **)(this_00 + 0x280));
  pvVar3 = (void *)(in_stack_ffffff88 & 0xffffff00);
  FUN_00402690(&stack0xffffff88,"white.png",9);
  piVar2 = (int *)FUN_00591910(pvVar3);
  *(int **)(this_00 + 0x284) = piVar2;
  local_20 = 0;
  local_1c = 0;
  local_8._0_1_ = 4;
  (**(code **)(*piVar2 + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(this_00 + 0x284) + 0x48))();
  (**(code **)(**(int **)(this_00 + 0x284) + 0x24))();
  cocos2d::Node::addChild(this_00,*(Node **)(this_00 + 0x284));
  FUN_00562690(this_00,CONCAT13(extraout_var,param_3));
  ExceptionList = local_10;
  return this_00;
}


Node * __thiscall FUN_005625a0(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UIRectangle::vftable;
  FUN_00562610((int)this);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00562610(int param_1)

{
  if (*(int **)(param_1 + 0x278) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x278) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x278) = 0;
  }
  if (*(int **)(param_1 + 0x27c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x27c) = 0;
  }
  if (*(int **)(param_1 + 0x280) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x280) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  if (*(int **)(param_1 + 0x284) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x284) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x284) = 0;
  }
  return;
}


void __thiscall FUN_00562690(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 4;
  piVar1 = (int *)((int)this + 0x278);
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x25c))(&param_1);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)((int)this + 0x288) = (undefined2)param_1;
  *(undefined1 *)((int)this + 0x28a) = param_1._2_1_;
  return;
}


Node * __thiscall FUN_005626e0(void *this,byte param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af9b0;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_AdShell::vftable;
  if (*(int **)((int)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x444) + 0x138))(1,uVar3);
    *(undefined4 *)((int)this + 0x444) = 0;
  }
  uVar3 = 0;
  iVar5 = *(int *)((int)this + 0x438);
  if (*(int *)((int)this + 0x43c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((int)this + 0x438) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar5 = *(int *)((int)this + 0x438);
    } while (uVar3 < (uint)(*(int *)((int)this + 0x43c) - iVar5 >> 2));
  }
  *(int *)((int)this + 0x43c) = iVar5;
  pvVar2 = *(void **)((int)this + 0x438);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(int *)((int)this + 0x440) - (int)pvVar2 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
    *(undefined4 *)((int)this + 0x438) = 0;
    *(undefined4 *)((int)this + 0x43c) = 0;
    *(undefined4 *)((int)this + 0x440) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00562830(Node *param_1)

{
  (**(code **)(*(int *)param_1 + 0x290))();
                    // WARNING: Could not recover jumptable at 0x0056283e. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Node::cleanup(param_1);
  return;
}


void __fastcall FUN_00562850(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int **)(param_1 + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x444) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x444) = 0;
  }
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x438);
  if (*(int *)(param_1 + 0x43c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(param_1 + 0x438) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x438);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x43c) - iVar2 >> 2));
  }
  *(int *)(param_1 + 0x43c) = iVar2;
  return;
}


void __fastcall FUN_005628d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *in_stack_ffffffd8;
  
  if (param_1[0x10d] != 0) {
    FUN_004024e0(&stack0xffffffd8,(undefined4 *)(param_1[0x10d] + 4));
    iVar1 = FUN_00591910(in_stack_ffffffd8);
    param_1[0x111] = iVar1;
    iVar1 = rand();
    if (iVar1 % 6 == 0) {
      (**(code **)(*(int *)param_1[0x111] + 0x244))();
    }
    else {
      (**(code **)(*(int *)param_1[0x111] + 0x244))();
      uVar2 = rand();
      uVar2 = uVar2 & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      param_1[0x10c] = 2;
      param_1[0x10b] = (int)(float)(int)(uVar2 + 5);
    }
    (**(code **)(*param_1 + 0x10c))();
    FUN_00591070("DETAIL","Displying ad: %s");
    *(undefined1 *)param_1[0xa2] = 1;
  }
  return;
}


void __thiscall FUN_005629a0(void *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  iVar1 = DAT_0065b5cc;
  iVar3 = *(int *)((int)this + 0x430);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 0x428);
    puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x90);
    iVar2 = *(int *)(DAT_0065b5cc + 0x94) - (int)puVar4 >> 2;
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else if (iVar2 == 1) {
      piVar5 = (int *)*puVar4;
    }
    else {
      piVar5 = (int *)0x0;
      iVar2 = 0;
      do {
        if (99 < iVar2) break;
        iVar6 = 0;
        iVar7 = *(int *)(iVar1 + 0x94) - (int)puVar4 >> 2;
        if (0 < iVar7) {
          iVar6 = rand();
          puVar4 = *(undefined4 **)(iVar1 + 0x90);
          iVar6 = iVar6 % iVar7 + 1;
        }
        piVar5 = (int *)0x0;
        if (*(int *)puVar4[iVar6 + -1] != iVar3) {
          piVar5 = (int *)puVar4[iVar6 + -1];
        }
        iVar2 = iVar2 + 1;
      } while (piVar5 == (int *)0x0);
    }
    *(int **)((int)this + 0x434) = piVar5;
    *(int *)((int)this + 0x428) = *piVar5;
    (**(code **)(*(int *)this + 0x294))();
    iVar3 = 1;
    fVar8 = 3.0;
    *(undefined4 *)((int)this + 0x42c) = 0x40400000;
    *(undefined4 *)((int)this + 0x430) = 1;
  }
  else {
    fVar8 = *(float *)((int)this + 0x42c);
    if (fVar8 <= -1.0) goto LAB_00562ac0;
  }
  fVar8 = fVar8 - param_1;
  *(float *)((int)this + 0x42c) = fVar8;
  if (fVar8 <= 0.0) {
    *(undefined4 *)((int)this + 0x42c) = 0xbf800000;
    fVar8 = -1.0;
  }
LAB_00562ac0:
  if (iVar3 == 1) {
    piVar5 = *(int **)((int)this + 0x444);
    if (fVar8 <= 0.0) {
      *(undefined4 *)((int)this + 0x430) = 2;
      *(undefined4 *)((int)this + 0x42c) = 0x41000000;
      (**(code **)(*piVar5 + 0x244))(0xff);
      **(undefined1 **)((int)this + 0x288) = 1;
      return;
    }
    fVar8 = 1.0 - fVar8 / 3.0;
  }
  else {
    if (iVar3 == 2) {
      if (0.0 < fVar8) {
        return;
      }
      *(undefined4 *)((int)this + 0x430) = 3;
      *(undefined4 *)((int)this + 0x42c) = 0x40400000;
      return;
    }
    if (iVar3 != 3) {
      return;
    }
    piVar5 = *(int **)((int)this + 0x444);
    if (fVar8 <= 0.0) {
      *(undefined4 *)((int)this + 0x430) = 0;
      *(undefined4 *)((int)this + 0x42c) = 0xbf800000;
      (**(code **)(*piVar5 + 0x244))(0);
      return;
    }
    fVar8 = fVar8 / 3.0;
  }
  (**(code **)(*piVar5 + 0x244))((int)(fVar8 * 255.0) & 0xff);
  **(undefined1 **)((int)this + 0x288) = 1;
  return;
}


void __thiscall FUN_00562bb0(void *this,double param_1)

{
  if ((*(float *)((int)this + 0x438) != (float)(int)param_1) ||
     (*(char *)((int)this + 0x434) != '\0')) {
    *(undefined1 *)((int)this + 0x434) = 0;
    *(float *)((int)this + 0x438) = (float)(int)param_1;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


void __thiscall
FUN_00562c00(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
            ,int param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  char *_String;
  void *pvVar3;
  double dVar4;
  uint in_stack_ffffffa4;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c80c8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00553370(this,param_1,param_2,param_3);
  local_8 = 0;
  *(undefined ***)this = UI_BDBar::vftable;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined1 *)((int)this + 0x434) = 1;
  *(undefined4 *)((int)this + 0x438) = 0x40800000;
  *(undefined4 *)((int)this + 0x43c) = 0x3f800000;
  *(int *)((int)this + 0x440) = param_5;
  *(int *)((int)this + 0x444) = param_6;
  pcVar1 = BLACK_exref;
  *(undefined2 *)((int)this + 0x448) = *(undefined2 *)BLACK_exref;
  *(code *)((int)this + 0x44a) = pcVar1[2];
  pcVar1 = GREEN_exref;
  *(undefined2 *)((int)this + 1099) = *(undefined2 *)GREEN_exref;
  *(code *)((int)this + 0x44d) = pcVar1[2];
  pcVar1 = RED_exref;
  *(undefined2 *)((int)this + 0x44e) = *(undefined2 *)RED_exref;
  *(code *)((int)this + 0x450) = pcVar1[2];
  pvVar3 = (void *)(in_stack_ffffffa4 & 0xffffff00);
  FUN_00402690(&stack0xffffffa4,"maxlevel",8);
  bVar2 = FUN_005576d0(param_2,pvVar3);
  if (bVar2) {
    pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
    FUN_00402690(&stack0xffffffa4,"maxlevel",8);
    _String = FUN_00557760(param_2,local_2c,pvVar3);
    if (0xf < *(uint *)(_String + 0x14)) {
      _String = *(char **)_String;
    }
    dVar4 = atof(_String);
    *(float *)((int)this + 0x43c) = (float)dVar4;
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
  }
  *(bool *)((int)this + 0x435) = param_6 < param_5;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_00562dc0(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_BDBar::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x428) = 0;
  }
  if (*(int **)((int)this + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x42c) + 0x138))(1);
    *(undefined4 *)((int)this + 0x42c) = 0;
  }
  if (*(int **)((int)this + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x430) + 0x138))(1);
    *(undefined4 *)((int)this + 0x430) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00562e90(int param_1)

{
  if (*(int **)(param_1 + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x428) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  if (*(int **)(param_1 + 0x42c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x42c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  if (*(int **)(param_1 + 0x430) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x430) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  return;
}


void __fastcall FUN_00562ef0(int *param_1)

{
  Sprite *pSVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int *piVar10;
  float10 fVar11;
  float fVar12;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  int *local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c813e;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_1;
  (**(code **)(*param_1 + 0x290))(local_14);
  if ((float)param_1[0x10f] == 0.0) goto LAB_005635b7;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"white.png",9);
  local_8 = 0;
  pSVar1 = cocos2d::Sprite::create((basic_string<> *)local_2c);
  local_8 = 0xffffffff;
  param_1[0x10a] = (int)pSVar1;
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
  iVar6 = param_1[0x111];
  iVar4 = *(int *)param_1[0x10a];
  iVar2 = (**(code **)(iVar4 + 0xb0))();
  iVar7 = param_1[0x110];
  local_30 = *(float *)(iVar2 + 4);
  pfVar3 = (float *)(**(code **)(*(int *)local_34[0x10a] + 0xb0))();
  (**(code **)(iVar4 + 0x3c))((float)iVar7 / *pfVar3,(float)iVar6 / local_30);
  piVar10 = local_34;
  (**(code **)(*(int *)local_34[0x10a] + 0x25c))(local_34 + 0x112);
  local_3c = 0;
  local_38 = 0.0;
  local_8 = 1;
  (**(code **)(*(int *)piVar10[0x10a] + 0xa0))(&local_3c);
  local_8 = 0xffffffff;
  (**(code **)(*piVar10 + 0x108))(piVar10[0x10a],0xfffffffe);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"white.png",9);
  local_8 = 2;
  pSVar1 = cocos2d::Sprite::create((basic_string<> *)local_2c);
  local_8 = 0xffffffff;
  piVar10[0x10c] = (int)pSVar1;
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
  if (*(char *)((int)piVar10 + 0x435) == '\0') {
    iVar6 = *(int *)piVar10[0x10c];
    iVar4 = piVar10[0x110];
    pfVar3 = (float *)(**(code **)(*(int *)piVar10[0x10a] + 0xb0))();
    (**(code **)(iVar6 + 0x3c))((float)iVar4 / *pfVar3,0x3f800000);
  }
  else {
    iVar6 = *(int *)piVar10[0x10c];
    local_30 = (float)piVar10[0x111];
    iVar4 = (**(code **)(*(int *)piVar10[0x10a] + 0xb0))();
    (**(code **)(iVar6 + 0x3c))(0x3f800000,local_30 / *(float *)(iVar4 + 4));
  }
  iVar6 = *(int *)piVar10[0x10c];
  uVar5 = cocos2d::Color3B::Color3B((Color3B *)((int)&local_30 + 1),'@','@','@');
  (**(code **)(iVar6 + 0x25c))(uVar5);
  (**(code **)(*(int *)piVar10[0x10c] + 0x48))
            ((float)(piVar10[0x110] / 2),(float)(piVar10[0x111] / 2));
  local_3c = 0x3f000000;
  local_38 = 0.5;
  local_8 = 3;
  (**(code **)(*(int *)piVar10[0x10c] + 0xa0))(&local_3c);
  local_8 = 0xffffffff;
  (**(code **)(*piVar10 + 0x108))(piVar10[0x10c],0xffffffff);
  local_40 = (float)*piVar10;
  iVar6 = (**(code **)(*(int *)piVar10[0x10a] + 0xb0))();
  local_30 = *(float *)(iVar6 + 4);
  iVar6 = *(int *)piVar10[0x10a];
  pfVar3 = (float *)(**(code **)(*(int *)piVar10[0x10a] + 0xb0))();
  piVar10 = (int *)local_34[0x10a];
  fVar11 = (float10)(**(code **)(iVar6 + 0x30))();
  fVar12 = (float)(fVar11 * (float10)local_30);
  fVar11 = (float10)(**(code **)(*piVar10 + 0x28))();
  uVar5 = cocos2d::Size::Size((Size *)&local_3c,(float)(fVar11 * (float10)*pfVar3),fVar12);
  piVar10 = local_34;
  (**(code **)((int)local_40 + 0xac))(uVar5);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"white.png",9);
  local_8 = 4;
  pSVar1 = cocos2d::Sprite::create((basic_string<> *)local_2c);
  local_8 = 0xffffffff;
  piVar10[0x10b] = (int)pSVar1;
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
  local_30 = (float)piVar10[0x10e];
  if (local_30 < 0.0) {
    local_30 = local_30 * -1.0;
  }
  iVar6 = piVar10[0x111];
  iVar4 = *(int *)piVar10[0x10b];
  if (*(char *)((int)piVar10 + 0x435) == '\0') {
    iVar7 = (**(code **)(*(int *)piVar10[0x10a] + 0xb0))();
    local_40 = *(float *)(iVar7 + 4);
    local_38 = (float)piVar10[0x10f];
    iVar7 = piVar10[0x110];
    pfVar3 = (float *)(**(code **)(*(int *)local_34[0x10b] + 0xb0))();
    piVar10 = local_34;
    (**(code **)(iVar4 + 0x3c))
              ((float)(iVar7 + -2) / *pfVar3,
               ((float)(iVar6 + -2) / local_40) * (local_30 / local_38) * 0.5);
    (**(code **)(*(int *)piVar10[0x10b] + 0x48))(0x3f800000,(float)(piVar10[0x111] / 2));
    if (0.0 <= (float)piVar10[0x10e]) {
      local_8 = 7;
      goto LAB_00563410;
    }
    if ((float)piVar10[0x10e] < 0.0) {
      local_48 = 0;
      local_44 = 0x3f800000;
      local_8 = 8;
      puVar9 = &local_48;
      goto LAB_0056354a;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)piVar10[0x10a] + 0xb0))();
    iVar7 = piVar10[0x110];
    local_40 = *(float *)(iVar2 + 4);
    pfVar3 = (float *)(**(code **)(*(int *)local_34[0x10b] + 0xb0))();
    piVar10 = local_34;
    (**(code **)(iVar4 + 0x3c))
              (((float)(iVar7 + -2) / *pfVar3) * (local_30 / (float)local_34[0x10f]) * 0.5,
               (float)(iVar6 + -2) / local_40);
    (**(code **)(*(int *)piVar10[0x10b] + 0x48))((float)(piVar10[0x110] / 2),0x3f800000);
    if ((float)piVar10[0x10e] < 0.0) {
      if (0.0 <= (float)piVar10[0x10e]) goto LAB_00563575;
      local_3c = 0x3f800000;
      local_38 = 0.0;
      local_8 = 6;
      puVar9 = &local_3c;
LAB_0056354a:
      (**(code **)(*(int *)piVar10[0x10b] + 0xa0))(puVar9);
      iVar6 = (int)piVar10 + 0x44e;
    }
    else {
      local_8 = 5;
LAB_00563410:
      local_38 = 0.0;
      local_3c = 0;
      (**(code **)(*(int *)piVar10[0x10b] + 0xa0))(&local_3c);
      iVar6 = (int)piVar10 + 1099;
    }
    local_8 = 0xffffffff;
    (**(code **)(*(int *)piVar10[0x10b] + 0x25c))(iVar6);
  }
LAB_00563575:
  (**(code **)(*piVar10 + 0x10c))(piVar10[0x10b]);
  (**(code **)(*(int *)piVar10[0x10b] + 0xb4))((float)piVar10[0x10e] != 0.0);
  *(undefined1 *)piVar10[0xa2] = 1;
LAB_005635b7:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_005635e0(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_Border::vftable;
  if (*(int **)((int)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x138))(1,uVar1);
    *(undefined4 *)((int)this + 0x428) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00563680(int param_1)

{
  if (*(int **)(param_1 + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x428) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  return;
}


void __fastcall FUN_005636b0(int *param_1)

{
  int iVar1;
  basic_string<> *pbVar2;
  Scale9Sprite *pSVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8181;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))(local_14);
  pbVar2 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%c_Border.png");
  local_8 = 0;
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  param_1[0x10a] = (int)pSVar3;
  if (0xf < local_18) {
    pvVar5 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar5 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar5);
  }
  local_34 = 0;
  local_30 = 0;
  local_8 = 1;
  (**(code **)(*(int *)param_1[0x10a] + 0xa0))(&local_34);
  local_8 = 0xffffffff;
  iVar1 = *(int *)param_1[0x10a];
  uVar4 = cocos2d::Size::Size((Size *)&local_34,(float)param_1[0xa8],(float)param_1[0xa9]);
  (**(code **)(iVar1 + 0xac))(uVar4);
  (**(code **)(*param_1 + 0x10c))(param_1[0x10a]);
  *(undefined1 *)param_1[0xa2] = 1;
  iVar1 = *param_1;
  uVar4 = (**(code **)(*(int *)param_1[0x10a] + 0xb0))();
  (**(code **)(iVar1 + 0xac))(uVar4);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00563810(void *this,double param_1)

{
  if ((param_1 != 0.0) != (bool)*(char *)((int)this + 0x44c)) {
    *(bool *)((int)this + 0x44c) = param_1 != 0.0;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


Node * __thiscall FUN_00563850(void *this,byte param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c55f0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = UI_Button::vftable;
  if (*(int **)((int)this + 0x45c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x45c) + 0x138))(1,uVar2);
    *(undefined4 *)((int)this + 0x45c) = 0;
  }
  piVar5 = (int *)((int)this + 0x450);
  iVar4 = 3;
  do {
    if ((int *)*piVar5 != (int *)0x0) {
      (**(code **)(*(int *)*piVar5 + 0x138))(1);
    }
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (0xf < *(uint *)((int)this + 0x448)) {
    pvVar1 = *(void **)((int)this + 0x434);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)((int)this + 0x448) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0xf;
  *(undefined1 *)((int)this + 0x434) = 0;
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00563970(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x45c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x45c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x45c) = 0;
  }
  piVar1 = (int *)(param_1 + 0x450);
  iVar2 = 3;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x138))(1);
    }
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


void __fastcall FUN_005639d0(int *param_1)

{
  Ref *pRVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  void *pvVar8;
  undefined1 *puVar9;
  void *in_stack_ffffff44;
  undefined8 in_stack_ffffff68;
  uint uStack_90;
  undefined4 local_70;
  int *local_6c;
  uint local_68;
  undefined1 local_62;
  undefined1 local_61;
  uint local_60;
  void *local_5c [5];
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
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c828b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_68 = 0;
  (**(code **)(*param_1 + 0x290))();
  pvVar8 = (void *)in_stack_ffffff68;
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_8 = 0;
  local_60 = 0;
  uVar6 = 0;
  local_61 = 0;
  local_62 = 0;
  if (param_1[0x111] != 0) {
    piVar2 = param_1 + 0x10d;
    do {
      local_6c = piVar2;
      if (0xf < (uint)param_1[0x112]) {
        local_6c = (int *)*piVar2;
      }
      if (*(char *)((int)local_6c + local_60) == '&') {
        uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
        local_61 = 1;
      }
      else {
        if ((char)uVar6 == '\0') {
          if ((char)(uVar6 >> 8) != '\0') {
            FUN_00403640(local_44,&DAT_00618b34,2);
            local_62 = 0;
          }
          uStack_90 = 0x563b06;
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005ce018);
          local_8._0_1_ = 2;
        }
        else {
          piVar7 = piVar2;
          if (0xf < (uint)param_1[0x112]) {
            piVar7 = (int *)*piVar2;
          }
          *(undefined1 *)((int)param_1 + 0x44d) = *(undefined1 *)((int)piVar7 + local_60);
          FUN_00403640(local_44,&DAT_005e6758,2);
          local_62 = 1;
          local_61 = 0;
          uStack_90 = 0x563ac3;
          puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005ce018);
          local_8._0_1_ = 1;
        }
        puVar5 = puVar3;
        if (0xf < (uint)puVar3[5]) {
          puVar5 = (undefined4 *)*puVar3;
        }
        FUN_00403640(local_44,puVar5,puVar3[4]);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pvVar8 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar8 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_00563fcb;
          FUN_005adb3f(pvVar8);
        }
        uVar6 = (uint)CONCAT11(local_62,local_61);
      }
      pvVar8 = (void *)in_stack_ffffff68;
      local_60 = local_60 + 1;
    } while (local_60 < (uint)param_1[0x111]);
  }
  if ((char)param_1[0x10c] == '\0') {
    FUN_004024e0(&stack0xffffff68,local_44);
    pRVar1 = FUN_0055ca10(-1,0xffffffff,(Node)0x0,pvVar8);
    param_1[0x117] = (int)pRVar1;
    local_70 = 0x3f000000;
    local_6c = (int *)0x3f000000;
    local_8._0_1_ = 7;
    (**(code **)(*(int *)pRVar1 + 0xa0))();
    local_8._0_1_ = 0;
    uStack_90 = 0x563eab;
    (**(code **)(*(int *)param_1[0x117] + 0x48))();
    uStack_90 = 1;
    (**(code **)(*param_1 + 0x108))();
    if ((char)param_1[0x113] == '\0') {
      uStack_90 = 0x563eff;
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Undepressed.png");
      local_8 = 9;
      local_68 = 2;
    }
    else {
      uStack_90 = 0x563ee1;
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"%c_Button_Depressed.png");
      local_8 = CONCAT31(local_8._1_3_,8);
      local_68 = 1;
    }
    local_60 = local_68;
    cocos2d::Rect::Rect((Rect *)&uStack_90,0.0,0.0,4.0,(float)param_1[0x10b]);
    pvVar8 = (void *)*puVar3;
    puVar3[4] = 0;
    puVar3[5] = 0xf;
    *(undefined1 *)puVar3 = 0;
    iVar4 = FUN_00591b50(pvVar8);
    param_1[0x114] = iVar4;
    local_8 = 8;
    if ((local_60 & 2) != 0) {
      local_68 = local_60 & 0xfffffffd;
      local_60 = local_68;
      if (0xf < local_18) {
        pvVar8 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar8 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
LAB_00563fcb:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar8);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
    local_8 = 0;
    if (((local_60 & 1) != 0) &&
       (local_68 = local_60 & 0xfffffffe, local_60 = local_68, 0xf < local_48)) {
      pvVar8 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar8 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    (**(code **)(*(int *)param_1[0x114] + 0x48))();
    uStack_90 = 0x564067;
    (**(code **)(*param_1 + 0x10c))();
    uStack_90 = (uint)*(char *)(DAT_0065b5cc + 0xd4);
    if ((char)param_1[0x113] == '\0') {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Undepressed.png");
      local_8 = 0xb;
      local_68 = local_60 | 8;
    }
    else {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"%c_Button_Depressed.png");
      local_8 = CONCAT31(local_8._1_3_,10);
      local_68 = local_60 | 4;
    }
    local_60 = local_68;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff64,4.0,0.0,4.0,(float)param_1[0x10b]);
    pvVar8 = (void *)*puVar3;
    puVar3[4] = 0;
    puVar3[5] = 0xf;
    *(undefined1 *)puVar3 = 0;
    iVar4 = FUN_00591b50(pvVar8);
    param_1[0x115] = iVar4;
    local_8 = 10;
    if ((local_60 & 8) != 0) {
      local_68 = local_60 & 0xfffffff7;
      local_60 = local_68;
      if (0xf < local_18) {
        uStack_90 = local_18 + 1;
        pvVar8 = local_2c[0];
        if (0xfff < uStack_90) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          uStack_90 = local_18 + 0x24;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            uStack_90 = 0x56417d;
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar8);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    }
    local_8 = 0;
    if (((local_60 & 4) != 0) &&
       (local_68 = local_60 & 0xfffffffb, local_60 = local_68, 0xf < local_48)) {
      uStack_90 = local_48 + 1;
      pvVar8 = local_5c[0];
      if (0xfff < uStack_90) {
        pvVar8 = *(void **)((int)local_5c[0] + -4);
        uStack_90 = local_48 + 0x24;
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          uStack_90 = 0x5641dc;
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar8);
    }
    uStack_90 = 0;
    (**(code **)(*(int *)param_1[0x115] + 0x48))();
    iVar4 = *(int *)param_1[0x115];
    (**(code **)(iVar4 + 0xb0))();
    (**(code **)(iVar4 + 0x24))();
    (**(code **)(*param_1 + 0x10c))();
    if ((char)param_1[0x113] == '\0') {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"%c_Button_Undepressed.png");
      local_8 = 0xd;
      local_68 = local_60 | 0x20;
    }
    else {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"%c_Button_Depressed.png");
      local_8 = CONCAT31(local_8._1_3_,0xc);
      local_68 = local_60 | 0x10;
    }
    local_60 = local_68;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff40,8.0,0.0,4.0,(float)param_1[0x10b]);
    pvVar8 = (void *)*puVar3;
    puVar3[4] = 0;
    puVar3[5] = 0xf;
    *(undefined1 *)puVar3 = 0;
    iVar4 = FUN_00591b50(pvVar8);
    param_1[0x116] = iVar4;
    local_8 = 0xc;
    if ((local_60 & 0x20) != 0) {
      local_60 = local_60 & 0xffffffdf;
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
    local_8 = 0;
    if (((local_60 & 0x10) != 0) && (0xf < local_48)) {
      pvVar8 = local_5c[0];
      if ((0xfff < local_48 + 1) &&
         (pvVar8 = *(void **)((int)local_5c[0] + -4),
         0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    iVar4 = *(int *)param_1[0x116];
  }
  else {
    FUN_00591e00(&stack0xffffff68,&DAT_006166fc);
    pRVar1 = FUN_0055ca10(-1,0xffffffff,(Node)0x0,pvVar8);
    param_1[0x117] = (int)pRVar1;
    local_70 = 0x3f000000;
    local_6c = (int *)0x3f000000;
    local_8._0_1_ = 3;
    (**(code **)(*(int *)pRVar1 + 0xa0))();
    local_8._0_1_ = 0;
    uStack_90 = 0x563c24;
    (**(code **)(*(int *)param_1[0x117] + 0x48))();
    uStack_90 = 1;
    (**(code **)(*param_1 + 0x108))();
    local_6c = (int *)&stack0xffffff5c;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff5c,0.0,0.0,4.0,(float)param_1[0x10b]);
    local_8._0_1_ = 4;
    puVar9 = &stack0xffffff44;
    FUN_00591e00(&stack0xffffff44,"%c_Button_Greyed.png");
    local_8._0_1_ = 0;
    piVar2 = (int *)FUN_00591b50(in_stack_ffffff44);
    param_1[0x114] = (int)piVar2;
    (**(code **)(*piVar2 + 0x48))();
    (**(code **)(*param_1 + 0x10c))();
    local_6c = (int *)&stack0xffffff50;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff50,4.0,0.0,4.0,(float)param_1[0x10b]);
    local_8._0_1_ = 5;
    pvVar8 = (void *)0x563d23;
    FUN_00591e00(&stack0xffffff38,"%c_Button_Greyed.png");
    local_8._0_1_ = 0;
    piVar2 = (int *)FUN_00591b50(puVar9);
    param_1[0x115] = (int)piVar2;
    (**(code **)(*piVar2 + 0x48))();
    iVar4 = *(int *)param_1[0x115];
    (**(code **)(iVar4 + 0xb0))();
    (**(code **)(iVar4 + 0x24))();
    (**(code **)(*param_1 + 0x10c))();
    local_6c = (int *)&stack0xffffff40;
    cocos2d::Rect::Rect((Rect *)&stack0xffffff40,8.0,0.0,4.0,(float)param_1[0x10b]);
    local_8._0_1_ = 6;
    FUN_00591e00(&stack0xffffff28,"%c_Button_Greyed.png");
    local_8 = (uint)local_8._1_3_ << 8;
    piVar2 = (int *)FUN_00591b50(pvVar8);
    param_1[0x116] = (int)piVar2;
    iVar4 = *piVar2;
  }
  (**(code **)(iVar4 + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  iVar4 = *param_1;
  cocos2d::Size::Size((Size *)&local_70,(float)param_1[0x10a],(float)param_1[0x10b]);
  (**(code **)(iVar4 + 0xac))();
  *(undefined1 *)param_1[0xa2] = 1;
  if (0xf < local_30) {
    pvVar8 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar8 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
