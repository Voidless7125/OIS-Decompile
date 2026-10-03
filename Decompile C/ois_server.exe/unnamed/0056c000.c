#include "../ois_server.exe.h"


Node * __thiscall FUN_0056c090(void *this,byte param_1)

{
  FUN_0056c0c0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0056c0c0(Node *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c7b10;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_Image::vftable;
  if (*(int **)(param_1 + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x46c) + 0x138))(1,uVar2);
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x48c);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x494) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0056c288;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x48c) = 0;
    *(undefined4 *)(param_1 + 0x490) = 0;
    *(undefined4 *)(param_1 + 0x494) = 0;
  }
  if (0xf < *(uint *)(param_1 + 0x488)) {
    pvVar1 = *(void **)(param_1 + 0x474);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x488) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0056c288;
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0xf;
  param_1[0x474] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 0x464)) {
    pvVar1 = *(void **)(param_1 + 0x450);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x464) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0056c288;
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0xf;
  param_1[0x450] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 0x44c)) {
    pvVar1 = *(void **)(param_1 + 0x438);
    pvVar3 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x44c) + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
LAB_0056c288:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0xf;
  param_1[0x438] = (Node)0x0;
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0056c290(int param_1)

{
  if (*(int **)(param_1 + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x46c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  return;
}


void __fastcall FUN_0056c2c0(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c88b9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = param_1;
  (**(code **)(*param_1 + 0x290))(DAT_0065500c ^ (uint)&stack0xfffffffc);
  pbVar6 = (byte *)(param_1 + 0x10e);
  pbVar1 = pbVar6;
  if (0xf < (uint)param_1[0x113]) {
    pbVar1 = *(byte **)pbVar6;
  }
  pbVar3 = (byte *)(param_1 + 0x11d);
  if (0xf < (uint)param_1[0x122]) {
    pbVar3 = (byte *)param_1[0x11d];
  }
  uVar2 = FUN_004031f0(pbVar3,param_1[0x121],pbVar1,param_1[0x112]);
  if ((char)uVar2 == '\0') {
    puVar7 = (undefined4 *)param_1[0x123];
    uVar5 = 0;
    uVar2 = (uint)(param_1[0x124] + (3 - (int)puVar7)) >> 2;
    if ((undefined4 *)param_1[0x124] < puVar7) {
      uVar2 = 0;
    }
    if (uVar2 != 0) {
      do {
        cocos2d::Ref::autorelease((Ref *)*puVar7);
        uVar5 = uVar5 + 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        param_1 = local_18;
      } while (uVar5 != uVar2);
    }
    pbVar6 = (byte *)(param_1 + 0x10e);
    param_1[0x124] = param_1[0x123];
  }
  iVar4 = param_1[0x124];
  if ((uint)(iVar4 - param_1[0x123]) < 4) {
    FUN_0056c4b0((int)param_1);
    iVar4 = param_1[0x124];
  }
  if (3 < (uint)(iVar4 - param_1[0x123])) {
    local_14 = *(int **)(param_1[0x123] + param_1[0x10d] * 4);
    param_1[0x11b] = (int)local_14;
    uVar2 = *(uint *)(pbVar6 + 0x14);
    pbVar1 = pbVar6;
    if (0xf < uVar2) {
      pbVar1 = *(byte **)pbVar6;
    }
    local_18 = *(int **)(pbVar6 + 0x10);
    uVar5 = FUN_004031f0(pbVar1,(uint)local_18,(byte *)&PTR_005ce008,0);
    if ((char)uVar5 == '\0') {
      if (0xf < uVar2) {
        pbVar6 = *(byte **)pbVar6;
      }
      uVar2 = FUN_004031f0(pbVar6,(uint)local_18,&DAT_0061fe9c,4);
      if ((char)uVar2 == '\0') {
        local_20 = 0x3f000000;
        local_1c = 0x3f000000;
        local_8 = 0;
        (**(code **)(*local_14 + 0xa0))(&local_20);
        local_8 = 0xffffffff;
        (**(code **)(*(int *)param_1[0x11b] + 0x48))
                  ((float)(param_1[0xa8] / 2),(float)(param_1[0xa9] / 2));
        (**(code **)(*param_1 + 0x10c))(param_1[0x11b]);
      }
    }
    *(undefined1 *)param_1[0xa2] = 1;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0056c4b0(int param_1)

{
  byte *pbVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  Ref *pRVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  void *pvVar9;
  int iVar10;
  undefined4 *in_stack_ffffff88;
  int local_50 [3];
  float local_44;
  float local_40;
  Ref *local_3c;
  Ref *local_38;
  float local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c88e8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar1 = (byte *)(param_1 + 0x438);
  pbVar8 = pbVar1;
  if (0xf < *(uint *)(param_1 + 0x44c)) {
    pbVar8 = *(byte **)pbVar1;
  }
  uVar3 = FUN_004031f0(pbVar8,*(uint *)(param_1 + 0x448),(byte *)&PTR_005ce008,0);
  if ((char)uVar3 == '\0') {
    if (*(int *)(param_1 + 0x428) < 2) {
      FUN_004024e0(&stack0xffffff88,(undefined4 *)pbVar1);
      pRVar5 = (Ref *)FUN_00591910(in_stack_ffffff88);
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_38 = pRVar5;
      FUN_00402690(local_2c,"scale",5);
      local_30 = FUN_00419130((void *)(param_1 + 0x3f8),(byte *)local_2c);
      if (0xf < local_18) {
        pvVar9 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar9 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) {
LAB_0056c75d:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar9);
      }
      if (local_30 != 0) {
        piVar6 = (int *)(**(code **)(*(int *)pRVar5 + 0xb0))();
        local_30 = *piVar6;
        (**(code **)(*(int *)pRVar5 + 0xb0))();
        (**(code **)(*(int *)pRVar5 + 0x40))();
      }
      cocos2d::Ref::retain(pRVar5);
      puVar7 = *(undefined4 **)(param_1 + 0x490);
      if (*(undefined4 **)(param_1 + 0x494) == puVar7) {
        FUN_00414080((void *)(param_1 + 0x48c),puVar7,&local_38);
      }
      else {
        *puVar7 = pRVar5;
        *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 4;
      }
    }
    else {
      local_38 = (Ref *)0x0;
      if (0 < *(int *)(param_1 + 0x428)) {
        do {
          FUN_004024e0(&stack0xffffff88,(undefined4 *)(param_1 + 0x438));
          FUN_00592d70(local_50,'.',in_stack_ffffff88);
          local_8 = 0;
          FUN_00591e00(&stack0xffffff88,"%s%d.%s");
          local_3c = (Ref *)FUN_00591910(in_stack_ffffff88);
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690(local_2c,"scale",5);
          FUN_00419820((void *)(param_1 + 0x3f8),(int *)&local_44,(byte *)local_2c);
          fVar2 = local_40;
          iVar10 = 0;
          local_34 = local_44;
          while (local_34 != fVar2) {
            iVar10 = iVar10 + 1;
            std::_Tree_unchecked_const_iterator<>::operator++
                      ((_Tree_unchecked_const_iterator<> *)&local_34);
          }
          if (0xf < local_18) {
            pvVar9 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar9 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9)))) goto LAB_0056c75d;
            FUN_005adb3f(pvVar9);
          }
          pRVar5 = local_3c;
          if (iVar10 != 0) {
            local_30 = 0x3f800000;
            pfVar4 = (float *)(**(code **)(*(int *)local_3c + 0xb0))();
            local_34 = *pfVar4;
            (**(code **)(*(int *)pRVar5 + 0xb0))();
            (**(code **)(*(int *)pRVar5 + 0x40))();
          }
          cocos2d::Ref::retain(pRVar5);
          puVar7 = *(undefined4 **)(param_1 + 0x490);
          if (*(undefined4 **)(param_1 + 0x494) == puVar7) {
            FUN_00414080((void *)(param_1 + 0x48c),puVar7,&local_3c);
          }
          else {
            *puVar7 = pRVar5;
            *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 4;
          }
          local_8 = 0xffffffff;
          FUN_004025a0(local_50);
          local_38 = local_38 + 1;
        } while ((int)local_38 < *(int *)(param_1 + 0x428));
      }
    }
    puVar7 = (undefined4 *)(param_1 + 0x438);
    if ((undefined4 *)(param_1 + 0x474) != puVar7) {
      if (0xf < *(uint *)(param_1 + 0x44c)) {
        puVar7 = (undefined4 *)*puVar7;
      }
      FUN_00402690((undefined4 *)(param_1 + 0x474),puVar7,*(uint *)(param_1 + 0x448));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0056c860(void *this,float param_1)

{
  int *piVar1;
  uint uVar2;
  byte ****ppppbVar3;
  void *pvVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  float fVar8;
  float fVar9;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  byte ***local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8920;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_0065b3d4 != 0) {
    piVar1 = *(int **)((int)this + 0x3e4);
    if (piVar1 == (int *)0x0) {
      if (*(int *)((int)this + 0x2e0) == 1) goto LAB_0056ca80;
    }
    else {
      local_4c = *(undefined4 *)((int)this + 1000);
      local_50 = *(undefined4 *)(DAT_0065b5cc + 0xd0);
      if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(*piVar1 + 8))(local_48,&local_50,&local_4c,local_18);
      local_8 = 0;
      piVar1 = (int *)((int)this + 0x450);
      if (0xf < *(uint *)((int)this + 0x464)) {
        piVar1 = (int *)*piVar1;
      }
      FUN_00591e00((undefined1 *)local_30,piVar1);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (0xf < local_34) {
        pvVar4 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar4 = *(void **)((int)local_48[0] + -4),
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      ppppbVar6 = (byte ****)local_30[0];
      ppppbVar7 = (byte ****)((int)this + 0x438);
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      ppppbVar3 = ppppbVar7;
      if (0xf < *(uint *)((int)this + 0x44c)) {
        ppppbVar3 = (byte ****)*ppppbVar7;
      }
      ppppbVar5 = local_30;
      if (0xf < local_1c) {
        ppppbVar5 = (byte ****)local_30[0];
      }
      uVar2 = FUN_004031f0((byte *)ppppbVar5,local_20,(byte *)ppppbVar3,*(uint *)((int)this + 0x448)
                          );
      if ((char)uVar2 == '\0') {
        if (ppppbVar7 != local_30) {
          ppppbVar3 = local_30;
          if (0xf < local_1c) {
            ppppbVar3 = ppppbVar6;
          }
          FUN_00402690(ppppbVar7,ppppbVar3,local_20);
          ppppbVar6 = (byte ****)local_30[0];
        }
        *(undefined4 *)((int)this + 0x434) = 0;
        *(undefined4 *)((int)this + 0x430) = 0;
        (**(code **)(*(int *)this + 0x294))();
      }
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        ppppbVar7 = ppppbVar6;
        if ((0xfff < local_1c + 1) &&
           (ppppbVar7 = (byte ****)ppppbVar6[-1],
           (byte *)0x1f < (byte *)((int)ppppbVar6 + (-4 - (int)ppppbVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar7);
      }
    }
    if (1 < *(int *)((int)this + 0x428)) {
      fVar8 = *(float *)((int)this + 0x430) + param_1;
      fVar9 = *(float *)((int)this + 0x42c) / (float)*(int *)((int)this + 0x428);
      *(float *)((int)this + 0x430) = fVar8;
      if (fVar9 <= fVar8) {
        *(int *)((int)this + 0x434) = *(int *)((int)this + 0x434) + 1;
        *(float *)((int)this + 0x430) = fVar8 - fVar9;
        if ((uint)(*(int *)((int)this + 0x490) - *(int *)((int)this + 0x48c) >> 2) <=
            *(uint *)((int)this + 0x434)) {
          *(undefined4 *)((int)this + 0x434) = 0;
        }
        (**(code **)(*(int *)this + 0x294))();
      }
    }
  }
LAB_0056ca80:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_0056caa0(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)((int)this + 0x434);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x43c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_0056cb8c;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)((int)this + 0x434) = 0;
    *(undefined4 *)((int)this + 0x438) = 0;
    *(undefined4 *)((int)this + 0x43c) = 0;
  }
  pvVar1 = *(void **)((int)this + 0x428);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x430) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_0056cb8c:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)((int)this + 0x428) = 0;
    *(undefined4 *)((int)this + 0x42c) = 0;
    *(undefined4 *)((int)this + 0x430) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0056cba0(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(param_1 + 0x434);
  uVar1 = (uint)((int)*(int **)(param_1 + 0x438) + (3 - (int)piVar2)) >> 2;
  uVar3 = 0;
  if (*(int **)(param_1 + 0x438) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_1 + 0x434);
  uVar3 = 0;
  piVar2 = *(int **)(param_1 + 0x428);
  uVar1 = (uint)((int)*(int **)(param_1 + 0x42c) + (3 - (int)piVar2)) >> 2;
  if (*(int **)(param_1 + 0x42c) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x428);
  return;
}


void __fastcall FUN_0056cc50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  Ref *pRVar3;
  void *pvVar4;
  void *in_stack_ffffff8c;
  undefined4 in_stack_ffffff9c;
  uint3 uVar6;
  char *pcVar5;
  uint uVar7;
  Ref *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8973;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  iVar1 = param_1[0x112];
  local_30 = (Ref *)0x0;
  uVar6 = (uint3)((uint)in_stack_ffffff9c >> 8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar7 = 0xc;
      pcVar5 = "Logo_505.png";
    }
    else if (iVar1 == 2) {
      uVar7 = 0xd;
      pcVar5 = "Logo_SNSW.png";
    }
    else {
      if (iVar1 != 3) goto LAB_0056d0d7;
      uVar7 = 0xb;
      pcVar5 = "Logo_FE.png";
    }
    pvVar4 = (void *)((uint)uVar6 << 8);
    FUN_00402690(&stack0xffffff9c,pcVar5,uVar7);
    pRVar3 = (Ref *)FUN_00591910(pvVar4);
    local_30 = pRVar3;
    if (param_1[0x113] == 0) {
      (**(code **)(*(int *)pRVar3 + 0x244))();
    }
    else if (param_1[0x113] == 2) {
      (**(code **)(*(int *)pRVar3 + 0x244))();
    }
    else {
      (**(code **)(*(int *)pRVar3 + 0x244))();
    }
    local_8 = 3;
    (**(code **)(*(int *)pRVar3 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pRVar3 + 0x48))();
    (**(code **)(*param_1 + 0x10c))();
    puVar2 = (undefined4 *)param_1[0x10e];
    if ((undefined4 *)param_1[0x10f] == puVar2) {
      FUN_00414080(param_1 + 0x10d,puVar2,&local_30);
    }
    else {
      *puVar2 = pRVar3;
      param_1[0x10e] = param_1[0x10e] + 4;
    }
    goto LAB_0056d0d7;
  }
  *(undefined1 *)(DAT_0065b444 + 4) = 1;
  pvVar4 = (void *)((uint)uVar6 << 8);
  FUN_00402690(&stack0xffffff9c,"FELogo_Lores.png",0x10);
  pRVar3 = (Ref *)FUN_00591910(pvVar4);
  local_8 = 0;
  local_30 = pRVar3;
  (**(code **)(*(int *)pRVar3 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pRVar3 + 0x48))();
  (**(code **)(*param_1 + 0x10c))();
  puVar2 = (undefined4 *)param_1[0x10e];
  if ((undefined4 *)param_1[0x10f] == puVar2) {
    FUN_00414080(param_1 + 0x10d,puVar2,&local_30);
  }
  else {
    *puVar2 = pRVar3;
    param_1[0x10e] = param_1[0x10e] + 4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = (Ref *)(1.0 - (float)param_1[0x110] / 10.0);
  local_8 = 1;
  FUN_00402690(local_2c,"`2Flat Earth Modular BIOS v6.00PG\n",0x22);
  FUN_00403640(local_2c,"(C) 2019 by Flat Earth Games\n\n\n\n",0x20);
  FUN_00403640(local_2c,"Main Processor : PurchaseTech 80386 40Mhz\n\n",0x2b);
  if ((float)local_30 < 0.4) {
    if (0.3 <= (float)local_30) {
      FUN_00403640(local_2c,"Memory Testing : `04096kB/4096kB OK\n\n",0x25);
      uVar7 = 0x25;
      pcVar5 = "`0PurchaseTech AVOnChip(R) Ver 8.60\n\n";
      goto LAB_0056ce9e;
    }
    if (0.28 <= (float)local_30) {
      FUN_00403640(local_2c,"Memory Testing : 3072kB/4096kB\n\n",0x20);
      uVar7 = 0x25;
      pcVar5 = "`0PurchaseTech AVOnChip(R) Ver 8.60\n\n";
      goto LAB_0056ce9e;
    }
    if (0.26 <= (float)local_30) {
      FUN_00403640(local_2c,"Memory Testing : 2048kB/4096kB\n\n",0x20);
      uVar7 = 0x25;
      pcVar5 = "`0PurchaseTech AVOnChip(R) Ver 8.60\n\n";
      goto LAB_0056ce9e;
    }
    if (0.24 <= (float)local_30) {
      FUN_00403640(local_2c,"Memory Testing : 1024kB/4096kB\n\n",0x20);
      uVar7 = 0x25;
      pcVar5 = "`0PurchaseTech AVOnChip(R) Ver 8.60\n\n";
      goto LAB_0056ce9e;
    }
    if (0.2 <= (float)local_30) {
      uVar7 = 0x1d;
      pcVar5 = "Memory Testing : 0kB/4096kB\n\n";
      goto LAB_0056ce9e;
    }
  }
  else {
    FUN_00403640(local_2c,"Memory Testing : `04096kB/4096kB OK\n\n",0x25);
    FUN_00403640(local_2c,"`0PurchaseTech AVOnChip(R) Ver 8.60\n\n",0x25);
    FUN_00403640(local_2c,
                 "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n`2Press `0DEL`2 to enter SETUP, `0ALT+F2`2 to enter OBJFLASH\n"
                 ,0x4d);
    uVar7 = 0x24;
    pcVar5 = "`223/06/2017-i902-FL183500-8A3410-00";
LAB_0056ce9e:
    FUN_00403640(local_2c,pcVar5,uVar7);
  }
  FUN_004024e0(&stack0xffffff8c,local_2c);
  pRVar3 = FUN_0055ca10(param_1[0xa8],param_1[0xa9],(Node)0x0,in_stack_ffffff8c);
  local_8._0_1_ = 2;
  local_30 = pRVar3;
  (**(code **)(*(int *)pRVar3 + 0xa0))();
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)pRVar3 + 0x48))();
  puVar2 = (undefined4 *)param_1[0x10b];
  if ((undefined4 *)param_1[0x10c] == puVar2) {
    FUN_00414080(param_1 + 0x10a,puVar2,&local_30);
  }
  else {
    *puVar2 = pRVar3;
    param_1[0x10b] = param_1[0x10b] + 4;
  }
  (**(code **)(*param_1 + 0x10c))();
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
LAB_0056d0d7:
  *(undefined1 *)param_1[0xa2] = 1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0056d100(void *this,float param_1)

{
  void *pvVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  
  if (*(float *)((int)this + 0x440) <= -1.0) {
    *(undefined1 *)(DAT_0065b444 + 4) = 0;
    if ((*(int *)((int)this + 0x278) != 0) &&
       (iVar4 = *(int *)(*(int *)((int)this + 0x278) + 300), iVar4 != 0)) {
      *(undefined1 *)(iVar4 + 5) = 0;
    }
    iVar4 = (**(code **)(*(int *)this + 0x124))();
    if (0 < iVar4) {
      (**(code **)(*(int *)this + 0x290))();
    }
    return;
  }
  fVar2 = *(float *)((int)this + 0x440) - param_1;
  *(float *)((int)this + 0x440) = fVar2;
  if (0.0 < fVar2) goto LAB_0056d237;
  iVar4 = *(int *)((int)this + 0x448);
  *(undefined4 *)((int)this + 0x440) = 0xbf800000;
  iVar5 = DAT_0065b444;
  if (iVar4 == 3) {
    if (*(int *)((int)this + 0x44c) == 2) {
      fVar2 = 1.0;
      cVar7 = '\x01';
      bVar6 = 0;
      iVar5 = -1;
      iVar4 = 0x28;
      uVar3 = 6;
      pvVar1 = (void *)FUN_00402f60();
      FUN_00557af0(pvVar1,uVar3,iVar4,iVar5,bVar6,cVar7,fVar2);
      uVar8 = 0xffffffff;
      pvVar1 = (void *)FUN_004023e0();
      FUN_00530750(pvVar1,uVar8);
      *(undefined4 *)((int)this + 0x448) = 0;
      *(undefined4 *)((int)this + 0x440) = 0x41200000;
      *(undefined4 *)((int)this + 0x444) = 0x41200000;
      goto LAB_0056d237;
    }
  }
  else if ((iVar4 != 1) && (iVar4 != 2)) {
    if (iVar4 == 0) {
      *(undefined1 *)(DAT_0065b444 + 0x78) = 0;
      *(undefined4 *)((int)this + 0x44c) = 0;
      *(undefined4 *)((int)this + 0x448) = 4;
      *(undefined1 *)(iVar5 + 5) = 0;
    }
    goto LAB_0056d237;
  }
  if (*(int *)((int)this + 0x44c) == 2) {
    *(undefined4 *)((int)this + 0x44c) = 0;
    *(int *)((int)this + 0x448) = iVar4 + 1;
LAB_0056d223:
    *(undefined4 *)((int)this + 0x440) = 0x3fc00000;
  }
  else {
    iVar4 = *(int *)((int)this + 0x44c) + 1;
    *(int *)((int)this + 0x44c) = iVar4;
    if (iVar4 == 0) goto LAB_0056d223;
    if (iVar4 == 1) {
      *(undefined4 *)((int)this + 0x440) = 0x40000000;
    }
    else if (iVar4 == 2) goto LAB_0056d223;
  }
  *(undefined4 *)((int)this + 0x444) = 0x3fc00000;
LAB_0056d237:
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x278) + 300) + 5) = 1;
  (**(code **)(*(int *)this + 0x294))();
  return;
}


uint __thiscall FUN_0056d2a0(void *this,int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if ((-1.0 < *(float *)((int)this + 0x440)) &&
     ((((param_1 == 6 || (param_1 == 0x3b)) || (param_1 == 10)) ||
      ((param_1 == 0xa4 || (in_EAX = param_1, param_1 == 0x23)))))) {
    *(undefined4 *)((int)this + 0x440) = 0xbf800000;
    FUN_00410fd0();
    uVar1 = (**(code **)(*(int *)this + 0x294))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


undefined4 * __thiscall FUN_0056d300(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &param_2_005c89bf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  FUN_004024e0((void *)((int)this + 0xc),&param_2);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  cocos2d::Size::Size((Size *)((int)this + 0x2c),0.0,0.0);
  *(undefined1 *)((int)this + 0x34) = 0;
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


void __thiscall FUN_0056d3d0(void *this,undefined4 param_1,void *param_2,void *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  basic_string<> *pbVar3;
  Scale9Sprite *pSVar4;
  Texture2D *this_00;
  Texture2D *pTVar5;
  Ref *pRVar6;
  void *pvVar7;
  void *pvVar8;
  Scale9Sprite *pSVar9;
  undefined4 local_3c;
  Ref *local_38;
  void *local_34;
  Scale9Sprite *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8a1b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = param_3;
  if (*(char *)((int)this + 7) == '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (*(char *)((int)this + 4) == '\0') {
      FUN_00402690(local_2c,"MenuButton_Undepressed.png",0x1a);
      local_8 = 2;
      pSVar4 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
    }
    else {
      FUN_00402690(local_2c,"MenuButton_Depressed.png",0x18);
      local_8 = 1;
      pSVar4 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
    }
  }
  else {
    pbVar3 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"MenuButton_Greyed.png");
    local_8 = 0;
    pSVar4 = cocos2d::ui::Scale9Sprite::create(pbVar3);
  }
  local_8 = 0xffffffff;
  local_30 = pSVar4;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) goto LAB_0056d477;
    FUN_005adb3f(pvVar7);
  }
  this_00 = (Texture2D *)(**(code **)(*(int *)(pSVar4 + 0x278) + 0xc))();
  pTVar5 = this_0065b3fc;
  if (this_0065b3fc == (Texture2D *)0x0) {
    pTVar5 = (Texture2D *)FUN_005adb0f(0x10);
    this_0065b3fc = pTVar5;
    *(undefined4 *)(pTVar5 + 4) = 0x2600;
    *(undefined4 *)pTVar5 = 0x2600;
    *(undefined4 *)(pTVar5 + 8) = 0x812f;
    *(undefined4 *)(pTVar5 + 0xc) = 0x812f;
  }
  cocos2d::Texture2D::setTexParameters(this_00,(_TexParams *)pTVar5);
  iVar1 = *(int *)pSVar4;
  cocos2d::Size::Size((Size *)&local_3c,*(float *)((int)this + 0x2c),*(float *)((int)this + 0x30));
  (**(code **)(iVar1 + 0xac))();
  local_3c = 0;
  local_38 = (Ref *)0x3f800000;
  local_8 = 3;
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar4 + 0x48))();
  pSVar9 = (Scale9Sprite *)0x56d5b7;
  (**(code **)(*param_4 + 0x10c))();
  pvVar7 = local_34;
  puVar2 = *(undefined4 **)((int)local_34 + 4);
  if (*(undefined4 **)((int)local_34 + 8) == puVar2) {
    FUN_00414080(local_34,puVar2,&local_30);
  }
  else {
    *puVar2 = pSVar4;
    *(int *)((int)local_34 + 4) = *(int *)((int)local_34 + 4) + 4;
  }
  if (*(char *)((int)this + 5) != '\0') {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"MenuButton_Selected.png",0x17);
    local_8 = 4;
    pSVar4 = cocos2d::ui::Scale9Sprite::create((basic_string<> *)local_2c);
    local_8 = 0xffffffff;
    local_30 = pSVar4;
    if (0xf < local_18) {
      pvVar8 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar8 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) {
LAB_0056d477:
        local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
    iVar1 = *(int *)pSVar4;
    cocos2d::Size::Size((Size *)&local_3c,*(float *)((int)this + 0x2c),*(float *)((int)this + 0x30))
    ;
    (**(code **)(iVar1 + 0xac))();
    pSVar4 = local_30;
    local_3c = 0;
    local_38 = (Ref *)0x3f800000;
    local_8 = 5;
    (**(code **)(*(int *)local_30 + 0xa0))();
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pSVar4 + 0x48))();
    pSVar9 = pSVar4;
    (**(code **)(*param_4 + 0x108))();
    puVar2 = *(undefined4 **)((int)pvVar7 + 4);
    if (*(undefined4 **)((int)pvVar7 + 8) == puVar2) {
      FUN_00414080(pvVar7,puVar2,&local_30);
    }
    else {
      *puVar2 = pSVar4;
      *(int *)((int)pvVar7 + 4) = *(int *)((int)pvVar7 + 4) + 4;
    }
  }
  FUN_00591e00(&stack0xffffff84,"`%c%s");
  pRVar6 = FUN_0055cb00((Node)0x0,pSVar9);
  local_8 = 6;
  local_38 = pRVar6;
  (**(code **)(*(int *)pRVar6 + 0xa0))();
  local_8 = 0xffffffff;
  local_34 = *(void **)((int)this + 0x30);
  iVar1 = *(int *)pRVar6;
  local_30 = *(Scale9Sprite **)((int)this + 0x28);
  (**(code **)(iVar1 + 0xb0))();
  (**(code **)(iVar1 + 0x48))();
  (**(code **)(*param_4 + 0x108))();
  puVar2 = *(undefined4 **)((int)param_2 + 4);
  if (*(undefined4 **)((int)param_2 + 8) == puVar2) {
    FUN_00414080(param_2,puVar2,&local_38);
  }
  else {
    *puVar2 = pRVar6;
    *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) + 4;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


Node * __thiscall FUN_0056d840(void *this,undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  Size *pSVar5;
  uint uVar6;
  uint uVar7;
  Size local_20 [8];
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8a8e;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00553370(this,param_1,param_2,param_3);
  *(undefined ***)this = UI_Menu::vftable;
  *(undefined1 *)((int)this + 0x428) = 1;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0xffffffff;
  *(undefined4 *)((int)this + 0x434) = 0xffffffff;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  piVar3 = DAT_0065c300;
  local_8 = 5;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined1 *)((int)this + 0x284) = 1;
  *(undefined1 *)((int)this + 0x286) = 1;
  *(undefined1 *)(param_2 + 0x2c) = 1;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_005adb0f(0x10);
    DAT_0065c300 = piVar3;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    param_3 = piVar3;
  }
  piVar4 = piVar3;
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)FUN_005adb0f(0x10);
    DAT_0065c300 = piVar4;
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
  }
  piVar1 = (int *)piVar4[1];
  uVar6 = 0;
  uVar7 = piVar4[2] - (int)piVar1 >> 2;
  if (uVar7 != 0) {
    piVar4 = piVar1;
    do {
      if (*(int *)(*piVar4 + 0x278) == *piVar3) {
        param_3 = (int *)piVar1[uVar6];
        goto LAB_0056d9ea;
      }
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar6 < uVar7);
  }
  param_3 = (int *)0x0;
LAB_0056d9ea:
  *(int **)((int)this + 0x474) = param_3;
  if (param_3[0xd3] != 0) {
    if ((int *)param_3[0xd3] == (int *)0x0) {
                    // WARNING: Subroutine does not return
      std::_Xbad_function_call();
    }
    (**(code **)(*(int *)param_3[0xd3] + 8))(&param_3,uVar2);
    piVar1 = param_3;
  }
  param_3 = piVar1;
  FUN_0056f1a0((int)this);
  *(undefined4 *)((int)this + 0x430) = 0;
  FUN_0056f7e0((int)this);
  pSVar5 = (Size *)cocos2d::Size::Size(local_20,(float)*(int *)((int)this + 0x2a0),
                                       (float)*(int *)((int)this + 0x2a4));
  cocos2d::Node::setContentSize(this,pSVar5);
  FUN_0056e260(this);
  ExceptionList = local_10;
  return this;
}


Node * __thiscall FUN_0056da90(void *this,byte param_1)

{
  FUN_0056dac0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0056dac0(Node *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c8ab0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_Menu::vftable;
  uVar5 = 0;
  piVar6 = *(int **)(param_1 + 0x450);
  uVar4 = (uint)((int)*(int **)(param_1 + 0x454) + (3 - (int)piVar6)) >> 2;
  if (*(int **)(param_1 + 0x454) < piVar6) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      if ((int *)*piVar6 != (int *)0x0) {
        (**(code **)(*(int *)*piVar6 + 0x138))(1,uVar2);
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 != uVar4);
  }
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x450);
  uVar4 = 0;
  piVar6 = *(int **)(param_1 + 0x444);
  uVar2 = (uint)((int)*(int **)(param_1 + 0x448) + (3 - (int)piVar6)) >> 2;
  if (*(int **)(param_1 + 0x448) < piVar6) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      if ((int *)*piVar6 != (int *)0x0) {
        (**(code **)(*(int *)*piVar6 + 0x138))(1);
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x444);
  uVar4 = 0;
  piVar6 = *(int **)(param_1 + 0x438);
  uVar2 = (uint)((int)*(int **)(param_1 + 0x43c) + (3 - (int)piVar6)) >> 2;
  if (*(int **)(param_1 + 0x43c) < piVar6) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      if ((int *)*piVar6 != (int *)0x0) {
        (**(code **)(*(int *)*piVar6 + 0x138))(1);
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_1 + 0x438);
  pvVar1 = *(void **)(param_1 + 0x468);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x470) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0056ddc9;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x46c) = 0;
    *(undefined4 *)(param_1 + 0x470) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x45c);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x464) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0056ddc9;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x460) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x450);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x458) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0056ddc9;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x450) = 0;
    *(undefined4 *)(param_1 + 0x454) = 0;
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x444);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x44c) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_0056ddc9;
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x444) = 0;
    *(undefined4 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x44c) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x438);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x440) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
LAB_0056ddc9:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
    *(undefined4 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
    *(undefined4 *)(param_1 + 0x440) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0056ddd0(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(param_1 + 0x450);
  uVar1 = (uint)((int)*(int **)(param_1 + 0x454) + (3 - (int)piVar2)) >> 2;
  uVar3 = 0;
  if (*(int **)(param_1 + 0x454) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x450);
  uVar3 = 0;
  piVar2 = *(int **)(param_1 + 0x444);
  uVar1 = (uint)((int)*(int **)(param_1 + 0x448) + (3 - (int)piVar2)) >> 2;
  if (*(int **)(param_1 + 0x448) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x444);
  uVar3 = 0;
  piVar2 = *(int **)(param_1 + 0x438);
  uVar1 = (uint)((int)*(int **)(param_1 + 0x43c) + (3 - (int)piVar2)) >> 2;
  if (*(int **)(param_1 + 0x43c) < piVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x138))(1);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_1 + 0x438);
  return;
}


undefined4 __thiscall FUN_0056ded0(void *this,float param_1,float param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 uVar4;
  uint *puVar6;
  uint uVar7;
  undefined1 uVar5;
  
  puVar1 = *(uint **)((int)this + 0x46c);
  uVar3 = 0;
  puVar6 = *(uint **)((int)this + 0x468);
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = (uint)((int)puVar1 + (3 - (int)puVar6)) >> 2;
  if (puVar1 < puVar6) {
    uVar7 = 0;
  }
  if (uVar7 != 0) {
    do {
      puVar1 = (uint *)*puVar6;
      if ((((param_1 < *(float *)((int)puVar1 + 0x24)) ||
           (*(float *)((int)puVar1 + 0x2c) + *(float *)((int)puVar1 + 0x24) < param_1)) ||
          (param_2 < *(float *)((int)puVar1 + 0x28) - *(float *)((int)puVar1 + 0x30))) ||
         (*(float *)((int)puVar1 + 0x28) < param_2)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      uVar4 = uVar5;
      if (cVar2 != *(char *)((int)puVar1 + 4)) {
        *(char *)((int)puVar1 + 4) = cVar2;
        uVar4 = 1;
      }
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 1;
      uVar5 = uVar4;
    } while (uVar3 != uVar7);
  }
  return CONCAT31((int3)((uint)puVar1 >> 8),uVar4);
}


void __fastcall FUN_0056df70(int *param_1)

{
  int iVar1;
  uint uVar2;
  Ref *pRVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int *piVar6;
  uint in_stack_ffffff9c;
  void *pvVar7;
  void *in_stack_ffffffb0;
  int *local_18;
  Ref *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8ae2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*param_1 + 0x290))();
  if (*(char *)(DAT_0065b444 + 5) == '\0') {
    if ((param_1[0x9e] != 0) && (iVar1 = *(int *)(param_1[0x9e] + 300), iVar1 != 0)) {
      *(undefined1 *)(iVar1 + 5) = 0;
    }
    iVar1 = param_1[0x11d];
    pbVar5 = (byte *)(iVar1 + 0x2b0);
    local_18 = (int *)param_1[0xa9];
    if (0xf < *(uint *)(iVar1 + 0x2c4)) {
      pbVar5 = *(byte **)pbVar5;
    }
    uVar2 = FUN_004031f0(pbVar5,*(uint *)(iVar1 + 0x2c0),(byte *)&PTR_005ce008,0);
    if ((char)uVar2 == '\0') {
      pbVar5 = (byte *)(iVar1 + 0x2c8);
      if (0xf < *(uint *)(iVar1 + 0x2dc)) {
        pbVar5 = *(byte **)pbVar5;
      }
      FUN_004031f0(pbVar5,*(uint *)(iVar1 + 0x2d8),(byte *)&PTR_005ce008,0);
      FUN_00591e00(&stack0xffffffb0,"`%%%s");
      pRVar3 = FUN_0055cb00((Node)0x0,in_stack_ffffffb0);
      local_8 = 0;
      local_14 = pRVar3;
      (**(code **)(*(int *)pRVar3 + 0xa0))();
      local_8 = 0xffffffff;
      (**(code **)(*(int *)pRVar3 + 0x48))();
      (**(code **)(*param_1 + 0x108))();
      puVar4 = (undefined4 *)param_1[0x10f];
      if ((undefined4 *)param_1[0x110] == puVar4) {
        FUN_00414080(param_1 + 0x10e,puVar4,&local_14);
        pRVar3 = local_14;
      }
      else {
        *puVar4 = pRVar3;
        param_1[0x10f] = param_1[0x10f] + 4;
      }
      pvVar7 = (void *)(in_stack_ffffff9c & 0xffffff00);
      FUN_00402690(&stack0xffffff9c,"white.png",9);
      local_18 = (int *)FUN_00591910(pvVar7);
      iVar1 = *local_18;
      (**(code **)(*(int *)pRVar3 + 0xb0))();
      piVar6 = local_18;
      (**(code **)(iVar1 + 0x24))();
      local_8 = 1;
      (**(code **)(*piVar6 + 0xa0))();
      local_8 = 0xffffffff;
      iVar1 = *piVar6;
      (**(code **)(*(int *)local_14 + 0xb0))();
      piVar6 = local_18;
      (**(code **)(iVar1 + 0x48))();
      (**(code **)(*param_1 + 0x10c))();
      puVar4 = (undefined4 *)param_1[0x115];
      if ((undefined4 *)param_1[0x116] == puVar4) {
        FUN_00414080(param_1 + 0x114,puVar4,&local_18);
      }
      else {
        *puVar4 = piVar6;
        param_1[0x115] = param_1[0x115] + 4;
      }
    }
    puVar4 = (undefined4 *)param_1[0x11a];
    local_18 = (int *)0x0;
    piVar6 = (int *)((uint)(param_1[0x11b] + (3 - (int)puVar4)) >> 2);
    if ((undefined4 *)param_1[0x11b] < puVar4) {
      piVar6 = (int *)0x0;
    }
    if (piVar6 != (int *)0x0) {
      do {
        FUN_0056d3d0((void *)*puVar4,param_1 + 0x10e,param_1 + 0x10e,param_1 + 0x111,param_1);
        puVar4 = puVar4 + 1;
        local_18 = (int *)((int)local_18 + 1);
      } while (local_18 != piVar6);
    }
    *(undefined1 *)param_1[0xa2] = 1;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0056e260(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *apiStack_c [2];
  
  if (*(char *)(DAT_0065b444 + 5) == '\0') {
    apiStack_c[0] = param_1;
    if ((char)param_1[0x10a] != '\0') {
      *(undefined1 *)(param_1 + 0x10a) = 0;
      (**(code **)(*param_1 + 0x294))();
    }
    if (*(int *)(DAT_0065b444 + 0x144) != -1) {
      *(undefined1 *)(DAT_0065b444 + 0x1c4) = 0;
      FUN_0056ef30(param_1);
      iVar3 = *(int *)(DAT_0065b444 + 0x144);
      pvVar1 = (void *)FUN_00529a20();
      piVar2 = (int *)FUN_0052a560(pvVar1,iVar3);
      param_1[0x11d] = (int)piVar2;
      if ((int *)piVar2[0xd3] != (int *)0x0) {
        apiStack_c[0] = piVar2;
        (**(code **)(*(int *)piVar2[0xd3] + 8))(apiStack_c);
      }
      FUN_0056f1a0((int)param_1);
      param_1[0x10c] = 0;
      FUN_0056f7e0((int)param_1);
      (**(code **)(*param_1 + 0x294))();
      iVar5 = -1;
      iVar4 = 8;
      iVar3 = DAT_0065b3d4;
      pvVar1 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar1,iVar3,iVar4,iVar5);
      *(undefined4 *)(DAT_0065b444 + 0x144) = 0xffffffff;
      (**(code **)(*param_1 + 0x294))();
      return;
    }
    if (*(char *)(DAT_0065b444 + 0x60) != '\0') {
      *(undefined1 *)(DAT_0065b444 + 0x60) = 0;
      piVar2 = (int *)((int *)param_1[0x11d])[0xd3];
      if (piVar2 != (int *)0x0) {
        apiStack_c[0] = (int *)param_1[0x11d];
        (**(code **)(*piVar2 + 8))(apiStack_c);
      }
      FUN_0056f1a0((int)param_1);
      (**(code **)(*param_1 + 0x294))();
    }
  }
  return;
}


void __thiscall FUN_0056e380(void *this,float param_1,float param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2759;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(DAT_0065b444 + 5) == '\0') {
    uVar2 = FUN_0056ded0(this,param_1,(float)*(int *)((int)this + 0x2a4) - param_2);
    if ((char)uVar2 != '\0') {
      (**(code **)(*(int *)this + 0x294))(uVar1);
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0056e410(void *this,float param_1,float param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c2049;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(char *)(DAT_0065b444 + 5) == '\0') {
    FUN_0056ded0(this,param_1,(float)*(int *)((int)this + 0x2a4) - param_2);
    for (puVar2 = *(undefined4 **)((int)this + 0x468); puVar2 != *(undefined4 **)((int)this + 0x46c)
        ; puVar2 = puVar2 + 1) {
      if ((char)((int *)*puVar2)[1] != '\0') {
        FUN_0056e570(this,(int *)*puVar2);
        break;
      }
    }
    *(undefined4 *)((int)this + 0x430) = 0xffffffff;
    FUN_0056f7e0((int)this);
    piVar3 = *(int **)((int)this + 0x468);
    uVar4 = 0;
    uVar5 = (uint)((int)*(int **)((int)this + 0x46c) + (3 - (int)piVar3)) >> 2;
    if (*(int **)((int)this + 0x46c) < piVar3) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      do {
        if (*piVar3 == 0) {
          DAT_00000004 = 1;
        }
        else {
          *(undefined1 *)(*piVar3 + 4) = 0;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar4 != uVar5);
    }
    (**(code **)(*(int *)this + 0x294))(uVar1);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0056e520(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  piVar2 = (int *)param_1[0x11a];
  uVar4 = (uint)(param_1[0x11b] + (3 - (int)piVar2)) >> 2;
  if ((int *)param_1[0x11b] < piVar2) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 + 1;
      *(bool *)(iVar1 + 4) = iVar1 == 0;
    } while (uVar3 != uVar4);
  }
                    // WARNING: Could not recover jumptable at 0x0056e561. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x294))();
  return;
}


void __thiscall FUN_0056e570(void *this,int *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *extraout_ECX;
  undefined4 *puVar6;
  undefined4 *in_stack_ffffff9c;
  int iVar7;
  int iVar8;
  undefined4 *local_3c;
  undefined4 *local_38;
  int local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8b10;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != (int *)0x0) {
    iVar3 = *param_1;
    if (iVar3 == -2) {
      if (*(int *)(*(int *)((int)this + 0x474) + 0x27c) != -1) {
        FUN_0056ef30(this);
        iVar3 = *(int *)(*(int *)((int)this + 0x474) + 0x27c);
        pvVar2 = (void *)FUN_00529a20();
        iVar3 = FUN_0052a560(pvVar2,iVar3);
        *(int *)((int)this + 0x474) = iVar3;
        iVar3 = DAT_0065b444;
        *(undefined1 *)(DAT_0065b444 + 0x1c4) = 0;
        *(undefined1 *)(iVar3 + 0xa4) = 0;
        piVar5 = *(int **)(*(int *)((int)this + 0x474) + 0x34c);
        if (piVar5 != (int *)0x0) {
          local_30 = *(int *)((int)this + 0x474);
          (**(code **)(*piVar5 + 8))();
        }
        FUN_0056f1a0((int)this);
        *(undefined4 *)((int)this + 0x430) = 0;
        FUN_0056f7e0((int)this);
        iVar8 = -1;
        iVar7 = 9;
        iVar3 = DAT_0065b3d4;
        pvVar2 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar2,iVar3,iVar7,iVar8);
      }
    }
    else if (iVar3 == -6) {
      if ((*(int *)((int)this + 0x434) != -1) && (0 < *(int *)((int)this + 0x42c))) {
        FUN_0056f830(this);
        iVar8 = -1;
        iVar7 = 9;
        iVar3 = DAT_0065b3d4;
        pvVar2 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar2,iVar3,iVar7,iVar8);
      }
    }
    else if (iVar3 == -7) {
      uVar4 = FUN_0056f7b0((int)this);
      if ((char)uVar4 != '\0') {
        FUN_0056f850(extraout_ECX);
        FUN_004eb5a0();
      }
    }
    else {
      for (puVar6 = *(undefined4 **)(*(int *)((int)this + 0x474) + 0x31c);
          puVar6 != *(undefined4 **)(*(int *)((int)this + 0x474) + 800); puVar6 = puVar6 + 1) {
        piVar5 = (int *)*puVar6;
        if (*piVar5 == iVar3) goto LAB_0056e6cf;
      }
      piVar5 = (int *)0x0;
LAB_0056e6cf:
      FUN_004024e0(&stack0xffffff9c,piVar5 + 0xd);
      FUN_00592d70(&local_3c,',',in_stack_ffffff9c);
      local_8 = 0;
      for (puVar6 = local_3c; puVar6 != local_38; puVar6 = puVar6 + 6) {
        FUN_004024e0(local_2c,puVar6);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004024e0(&stack0xffffff9c,local_2c);
        cVar1 = FUN_0052a300(in_stack_ffffff9c);
        if (cVar1 != '\0') {
          FUN_004024e0(&stack0xffffff9c,local_2c);
          FUN_0056e7b0(this,in_stack_ffffff9c);
        }
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pvVar2 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar2 = *(void **)((int)local_2c[0] + -4),
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar2);
        }
      }
      FUN_004025a0((int *)&local_3c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0056e7b0(void *this,void *param_1)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  Director *this_00;
  void *pvVar5;
  Layer *pLVar6;
  uint uVar7;
  undefined4 *puVar8;
  basic_string<> *pbVar9;
  byte *pbVar10;
  basic_string<> *pbVar11;
  uint in_stack_00000018;
  byte *in_stack_ffffffb8;
  int iVar12;
  int iVar13;
  byte *local_20;
  int local_1c;
  Layer *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c8bc2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffb8,&param_1);
  FUN_00592d70(&local_20,'=',(undefined4 *)in_stack_ffffffb8);
  pbVar1 = local_20;
  local_8._0_1_ = 1;
  uVar7 = *(uint *)(local_20 + 0x14);
  pbVar10 = local_20;
  if (0xf < uVar7) {
    pbVar10 = *(byte **)local_20;
  }
  uVar3 = FUN_004031f0(pbVar10,*(uint *)(local_20 + 0x10),&DAT_0061e9e8,4);
  if ((char)uVar3 != '\0') {
    if (DAT_0065c25c == (Layer *)0x0) {
      local_14 = (Layer *)FUN_005adb0f(0x418);
      local_8._0_1_ = 2;
      DAT_0065c25c = FUN_0052b7a0(local_14);
      local_8._0_1_ = 1;
    }
    iVar4 = FUN_00402f60();
    FUN_00557990(iVar4);
    this_00 = cocos2d::Director::getInstance();
    cocos2d::Director::end(this_00);
    goto LAB_0056eed0;
  }
  pbVar10 = pbVar1;
  if (0xf < uVar7) {
    pbVar10 = *(byte **)pbVar1;
  }
  uVar3 = FUN_004031f0(pbVar10,*(uint *)(pbVar1 + 0x10),&DAT_005e93b4,4);
  if ((char)uVar3 != '\0') {
    pbVar10 = pbVar1 + 0x18;
    if (0xf < *(uint *)(pbVar1 + 0x2c)) {
      pbVar10 = *(byte **)pbVar10;
    }
    iVar4 = atoi((char *)pbVar10);
    *(undefined1 *)(DAT_0065b444 + 0x1c4) = 0;
    FUN_0056ef30(this);
    pvVar5 = (void *)FUN_00529a20();
    pLVar6 = (Layer *)FUN_0052a560(pvVar5,iVar4);
    *(Layer **)((int)this + 0x474) = pLVar6;
    if (*(int *)(pLVar6 + 0x34c) != 0) {
      local_14 = pLVar6;
      if (*(int **)(pLVar6 + 0x34c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
        std::_Xbad_function_call();
      }
      (**(code **)(**(int **)(pLVar6 + 0x34c) + 8))();
    }
    FUN_0056f1a0((int)this);
    *(undefined4 *)((int)this + 0x430) = 0;
    FUN_0056f7e0((int)this);
    (**(code **)(*(int *)this + 0x294))();
    iVar13 = -1;
    iVar12 = 8;
    iVar4 = DAT_0065b3d4;
    pvVar5 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar5,iVar4,iVar12,iVar13);
    goto LAB_0056eed0;
  }
  pbVar10 = pbVar1;
  if (0xf < uVar7) {
    pbVar10 = *(byte **)pbVar1;
  }
  uVar3 = FUN_004031f0(pbVar10,*(uint *)(pbVar1 + 0x10),(byte *)"newcampaign",0xb);
  if ((char)uVar3 == '\0') {
    pbVar10 = pbVar1;
    if (0xf < uVar7) {
      pbVar10 = *(byte **)pbVar1;
    }
    uVar3 = FUN_004031f0(pbVar10,*(uint *)(pbVar1 + 0x10),(byte *)"newtutorial",0xb);
    if ((char)uVar3 == '\0') {
      pbVar10 = pbVar1;
      if (0xf < uVar7) {
        pbVar10 = *(byte **)pbVar1;
      }
      uVar3 = FUN_004031f0(pbVar10,*(uint *)(pbVar1 + 0x10),(byte *)"beginscenario",0xd);
      if ((char)uVar3 == '\0') {
        pbVar10 = pbVar1;
        if (0xf < uVar7) {
          pbVar10 = *(byte **)pbVar1;
        }
        uVar3 = FUN_004031f0(pbVar10,*(uint *)(pbVar1 + 0x10),(byte *)"continuecampaign",0x10);
        if ((char)uVar3 == '\0') {
          pbVar10 = pbVar1;
          if (0xf < uVar7) {
            pbVar10 = *(byte **)pbVar1;
          }
          uVar3 = FUN_004031f0(pbVar10,*(uint *)(pbVar1 + 0x10),(byte *)"selectsaveslot",0xe);
          if ((char)uVar3 == '\0') {
            pbVar10 = pbVar1;
            if (0xf < uVar7) {
              pbVar10 = *(byte **)pbVar1;
            }
            uVar7 = FUN_004031f0(pbVar10,*(uint *)(pbVar1 + 0x10),(byte *)"selectscenario",0xe);
            if ((char)uVar7 == '\0') goto LAB_0056eed0;
            iVar4 = (local_1c - (int)pbVar1) / 0x18;
            if (iVar4 == 1) {
              FUN_00402690((void *)(DAT_0065b5cc + 0xb4),&PTR_005ce008,0);
            }
            else {
              pbVar11 = (basic_string<> *)(pbVar1 + 0x18);
              pbVar9 = pbVar11;
              if (0xf < *(uint *)(pbVar1 + 0x2c)) {
                pbVar9 = *(basic_string<> **)pbVar11;
              }
              uVar7 = FUN_004031f0((byte *)pbVar9,*(uint *)(pbVar1 + 0x28),(byte *)"%ANYSINGLE",10);
              if ((char)uVar7 == '\0') {
                if (iVar4 == 1) {
                  FUN_00402690((basic_string<> *)(DAT_0065b5cc + 0xb4),&PTR_005ce008,0);
                }
                else {
                  std::basic_string<>::operator=((basic_string<> *)(DAT_0065b5cc + 0xb4),pbVar11);
                }
              }
              else {
                FUN_004024e0(&stack0xffffffb8,(undefined4 *)(DAT_0065b5cc + 0xb4));
                uVar7 = 0x56ea7d;
                iVar4 = FUN_004a82e0(in_stack_ffffffb8);
                if ((iVar4 == 0) || (*(int *)(iVar4 + 0x6c) != 2)) {
                  for (puVar8 = *(undefined4 **)(DAT_0065b5cc + 0x60);
                      puVar8 != *(undefined4 **)(DAT_0065b5cc + 100); puVar8 = puVar8 + 1) {
                    if (*(int *)((basic_string<> *)*puVar8 + 0x6c) == 2) {
                      std::basic_string<>::operator=
                                ((basic_string<> *)(DAT_0065b5cc + 0xb4),(basic_string<> *)*puVar8);
                      break;
                    }
                  }
                }
                iVar12 = DAT_0065b444;
                *(undefined1 *)(DAT_0065b444 + 0x1c4) = 0;
                if (*(int *)(iVar4 + 0x6c) == 1) {
                  if (*(int *)(iVar12 + 0x74) != -1) {
                    FUN_004127d0();
                    cVar2 = FUN_004b7390();
                    if (cVar2 != '\0') {
                      local_14 = (Layer *)&stack0xffffffb4;
                      pbVar10 = (byte *)(uVar7 & 0xffffff00);
                      FUN_00402690(&stack0xffffffb4,"can_begin_game",0xe);
                      local_8._0_1_ = 3;
                      puVar8 = FUN_00412df0();
                      local_8._0_1_ = 1;
                      FUN_004a0ee0(puVar8,pbVar10);
                      pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                      local_14 = (Layer *)&stack0xffffffb4;
                      FUN_00402690(&stack0xffffffb4,"can_delete_save",0xf);
                      local_8._0_1_ = 4;
                      puVar8 = FUN_00412df0();
                      local_8._0_1_ = 1;
                      FUN_004a0ee0(puVar8,pbVar10);
                      pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                      local_14 = (Layer *)&stack0xffffffb4;
                      FUN_00402690(&stack0xffffffb4,"can_continue_game",0x11);
                      local_8._0_1_ = 5;
                      puVar8 = FUN_00412df0();
                      local_8._0_1_ = 1;
                      FUN_004a0ee0(puVar8,pbVar10);
                      pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                      local_14 = (Layer *)&stack0xffffffb4;
                      FUN_00402690(&stack0xffffffb4,"can_confirm_delete_save",0x17);
                      local_8._0_1_ = 6;
                      goto LAB_0056ed95;
                    }
                  }
                  local_14 = (Layer *)&stack0xffffffb4;
                  pbVar10 = (byte *)(uVar7 & 0xffffff00);
                  FUN_00402690(&stack0xffffffb4,"can_begin_game",0xe);
                  local_8._0_1_ = 7;
                  puVar8 = FUN_00412df0();
                  local_8._0_1_ = 1;
                  FUN_004a0ee0(puVar8,pbVar10);
                  pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                  local_14 = (Layer *)&stack0xffffffb4;
                  FUN_00402690(&stack0xffffffb4,"can_delete_save",0xf);
                  local_8._0_1_ = 8;
                  puVar8 = FUN_00412df0();
                  local_8._0_1_ = 1;
                  FUN_004a0ee0(puVar8,pbVar10);
                  pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                  local_14 = (Layer *)&stack0xffffffb4;
                  FUN_00402690(&stack0xffffffb4,"can_continue_game",0x11);
                  local_8._0_1_ = 9;
                  puVar8 = FUN_00412df0();
                  local_8._0_1_ = 1;
                  FUN_004a0ee0(puVar8,pbVar10);
                  pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                  local_14 = (Layer *)&stack0xffffffb4;
                  FUN_00402690(&stack0xffffffb4,"can_confirm_delete_save",0x17);
                  local_8._0_1_ = 10;
                }
                else {
                  local_14 = (Layer *)&stack0xffffffb4;
                  pbVar10 = (byte *)(uVar7 & 0xffffff00);
                  FUN_00402690(&stack0xffffffb4,"can_begin_game",0xe);
                  local_8._0_1_ = 0xb;
                  puVar8 = FUN_00412df0();
                  local_8._0_1_ = 1;
                  FUN_004a0ee0(puVar8,pbVar10);
                  pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                  local_14 = (Layer *)&stack0xffffffb4;
                  FUN_00402690(&stack0xffffffb4,"can_delete_save",0xf);
                  local_8._0_1_ = 0xc;
                  puVar8 = FUN_00412df0();
                  local_8._0_1_ = 1;
                  FUN_004a0ee0(puVar8,pbVar10);
                  pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                  local_14 = (Layer *)&stack0xffffffb4;
                  FUN_00402690(&stack0xffffffb4,"can_continue_game",0x11);
                  local_8._0_1_ = 0xd;
                  puVar8 = FUN_00412df0();
                  local_8._0_1_ = 1;
                  FUN_004a0ee0(puVar8,pbVar10);
                  pbVar10 = (byte *)((uint)pbVar10 & 0xffffff00);
                  local_14 = (Layer *)&stack0xffffffb4;
                  FUN_00402690(&stack0xffffffb4,"can_confirm_delete_save",0x17);
                  local_8._0_1_ = 0xe;
                }
LAB_0056ed95:
                puVar8 = FUN_00412df0();
                local_8._0_1_ = 1;
                FUN_004a0ee0(puVar8,pbVar10);
              }
            }
            FUN_00591070("DETAIL","Selected scenario %s");
            FUN_004eb5a0();
            FUN_0056f1a0((int)this);
            (**(code **)(*(int *)this + 0x294))();
            goto LAB_0056eed0;
          }
        }
      }
    }
  }
  FUN_00591070("DETAIL","Selected item %d");
  iVar13 = -1;
  iVar12 = 8;
  iVar4 = DAT_0065b3d4;
  pvVar5 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar5,iVar4,iVar12,iVar13);
  pbVar10 = local_20;
  if (0xf < *(uint *)(local_20 + 0x14)) {
    pbVar10 = *(byte **)local_20;
  }
  uVar7 = FUN_004031f0(pbVar10,*(uint *)(local_20 + 0x10),(byte *)"selectsaveslot",0xe);
  if ((char)uVar7 != '\0') {
    pbVar10 = local_20 + 0x18;
    if (0xf < *(uint *)(local_20 + 0x2c)) {
      pbVar10 = *(byte **)pbVar10;
    }
    iVar4 = atoi((char *)pbVar10);
    *(int *)(DAT_0065b444 + 0x74) = iVar4;
    FUN_00402690((void *)(DAT_0065b5cc + 0xb4),"objectsinspace",0xe);
    *(undefined1 *)(DAT_0065b444 + 0xa4) = 0;
    FUN_0056f1a0((int)this);
    (**(code **)(*(int *)this + 0x294))();
    FUN_00591070("DETAIL","Selected save slot %d");
  }
LAB_0056eed0:
  FUN_004025a0((int *)&local_20);
  if (0xf < in_stack_00000018) {
    pvVar5 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pvVar5 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0056ef30(void *param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *this;
  byte *pbVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *in_stack_ffffff98;
  undefined4 *in_stack_ffffff9c;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined1 *local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8c00;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0056f100((int)param_1);
  iVar8 = *(int *)((int)param_1 + 0x474);
  pbVar1 = (byte *)(iVar8 + 0x280);
  pbVar5 = pbVar1;
  if (0xf < *(uint *)(iVar8 + 0x294)) {
    pbVar5 = *(byte **)pbVar1;
  }
  uVar4 = FUN_004031f0(pbVar5,*(uint *)(iVar8 + 0x290),(byte *)&PTR_005ce008,0);
  if ((char)uVar4 == '\0') {
    FUN_004024e0(&stack0xffffff9c,(undefined4 *)pbVar1);
    in_stack_ffffff98 = (byte *)0x56efaa;
    FUN_00592d70(&local_3c,',',in_stack_ffffff9c);
    local_8 = 0;
    for (puVar7 = local_3c; puVar7 != local_38; puVar7 = puVar7 + 6) {
      FUN_004024e0(local_2c,puVar7);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_004024e0(&stack0xffffff9c,local_2c);
      in_stack_ffffff98 = (byte *)0x56efe0;
      cVar3 = FUN_0052a300(in_stack_ffffff9c);
      if (cVar3 != '\0') {
        FUN_004024e0(&stack0xffffff9c,local_2c);
        in_stack_ffffff98 = (byte *)0x56eff9;
        FUN_0056e7b0(param_1,in_stack_ffffff9c);
      }
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0056f0f2;
        FUN_005adb3f(pvVar6);
      }
    }
    local_8 = 0xffffffff;
    FUN_004025a0((int *)&local_3c);
    iVar8 = *(int *)((int)param_1 + 0x474);
  }
  puVar7 = *(undefined4 **)(iVar8 + 0x310);
  puVar2 = *(undefined4 **)(iVar8 + 0x314);
  do {
    if (puVar7 == puVar2) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004024e0(local_2c,puVar7);
    local_30 = &stack0xffffff98;
    local_8 = 2;
    FUN_004024e0(&stack0xffffff98,local_2c);
    local_8._0_1_ = 3;
    this = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a0ee0(this,in_stack_ffffff98);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar6 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
LAB_0056f0f2:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    puVar7 = puVar7 + 6;
  } while( true );
}


void __fastcall FUN_0056f100(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x46c);
  puVar5 = *(undefined4 **)(param_1 + 0x468);
  do {
    if (puVar5 == puVar1) {
      *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x468);
      return;
    }
    pvVar2 = (void *)*puVar5;
    if (pvVar2 != (void *)0x0) {
      if (0xf < *(uint *)((int)pvVar2 + 0x20)) {
        pvVar3 = *(void **)((int)pvVar2 + 0xc);
        pvVar4 = pvVar3;
        if ((0xfff < *(uint *)((int)pvVar2 + 0x20) + 1) &&
           (pvVar4 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar4);
      }
      *(undefined4 *)((int)pvVar2 + 0x1c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20) = 0xf;
      *(undefined1 *)((int)pvVar2 + 0xc) = 0;
      FUN_005adb3f(pvVar2);
    }
    puVar5 = puVar5 + 1;
  } while( true );
}


void __fastcall FUN_0056f1a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  Size *pSVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  void **ppvVar12;
  int iVar13;
  void **ppvVar14;
  byte *in_stack_ffffff68;
  void *in_stack_ffffff6c;
  Size local_68 [8];
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_58;
  undefined1 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8c9b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0056f100(param_1);
  local_58 = *(int *)(param_1 + 0x2a4) / 6;
  local_5c = (undefined4 *)0x0;
  iVar1 = *(int *)(param_1 + 0x474);
  if ((uint)(*(int *)(iVar1 + 800) - *(int *)(iVar1 + 0x31c) >> 2) < 9) {
    *(undefined4 *)(param_1 + 0x434) = 0xffffffff;
    iVar13 = -1;
  }
  else {
    *(undefined4 *)(param_1 + 0x434) = 8;
    iVar13 = 8;
  }
  puVar8 = *(undefined4 **)(iVar1 + 0x31c);
  local_48 = *(undefined4 **)(iVar1 + 800);
  if (puVar8 != local_48) {
    local_4c = (undefined4 *)0x0;
    do {
      local_50 = (undefined4 *)*puVar8;
      if ((*(int *)(param_1 + 0x434) == -1) ||
         ((*(int *)(param_1 + 0x42c) <= (int)local_5c &&
          ((int)local_5c < *(int *)(param_1 + 0x434) + *(int *)(param_1 + 0x42c))))) {
        puVar4 = (undefined1 *)FUN_005adb0f(0x3c);
        local_8 = 0;
        local_54 = puVar4;
        FUN_004024e0(&stack0xffffff6c,local_50 + 1);
        in_stack_ffffff68 = (byte *)*local_50;
        puVar5 = FUN_0056d300(puVar4,in_stack_ffffff68,in_stack_ffffff6c);
        local_8 = 0xffffffff;
        puVar5[9] = 0x40c00000;
        puVar5[10] = (float)((*(int *)(param_1 + 0x2a4) - (int)local_4c) - local_58);
        local_60 = puVar5;
        pSVar6 = (Size *)cocos2d::Size::Size(local_68,128.0,15.0);
        cocos2d::Size::operator=((Size *)(puVar5 + 0xb),pSVar6);
        *(undefined1 *)(puVar5 + 2) = 1;
        if (*(int *)(*(int *)(param_1 + 0x474) + 0x374) != 0) {
          piVar2 = *(int **)(*(int *)(param_1 + 0x474) + 0x374);
          if (piVar2 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          uVar3 = (**(code **)(*piVar2 + 8))();
          *(undefined1 *)((int)puVar5 + 6) = uVar3;
        }
        puVar10 = *(undefined4 **)(param_1 + 0x46c);
        if (*(undefined4 **)(param_1 + 0x470) == puVar10) {
          FUN_00414080((void *)(param_1 + 0x468),puVar10,&local_60);
        }
        else {
          *puVar10 = puVar5;
          *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 4;
        }
        local_4c = (undefined4 *)((int)local_4c + 0x13);
      }
      local_5c = (undefined4 *)((int)local_5c + 1);
      puVar8 = puVar8 + 1;
    } while (puVar8 != local_48);
    iVar13 = *(int *)(param_1 + 0x434);
  }
  if (iVar13 != -1) {
    pvVar7 = (void *)FUN_005adb0f(0x3c);
    local_8 = 1;
    in_stack_ffffff6c = (void *)((uint)in_stack_ffffff6c & 0xffffff00);
    local_54 = pvVar7;
    FUN_00402690(&stack0xffffff6c,&DAT_0061e3e0,3);
    puVar8 = FUN_0056d300(pvVar7,0xfffffffa,in_stack_ffffff6c);
    local_8 = 0xffffffff;
    puVar8[9] = 0x430a0000;
    puVar8[10] = (float)(*(int *)(param_1 + 0x2a4) - local_58);
    if ((*(int *)(param_1 + 0x434) == -1) || (*(int *)(param_1 + 0x42c) < 1)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)((int)puVar8 + 7) = uVar3;
    local_4c = puVar8;
    pSVar6 = (Size *)cocos2d::Size::Size(local_68,15.0,15.0);
    cocos2d::Size::operator=((Size *)(puVar8 + 0xb),pSVar6);
    puVar5 = *(undefined4 **)(param_1 + 0x46c);
    if (*(undefined4 **)(param_1 + 0x470) == puVar5) {
      FUN_00414080((void *)(param_1 + 0x468),puVar5,&local_4c);
    }
    else {
      *puVar5 = puVar8;
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 4;
    }
    puVar4 = (undefined1 *)FUN_005adb0f(0x3c);
    local_8 = 2;
    in_stack_ffffff6c = (void *)((uint)in_stack_ffffff6c & 0xffffff00);
    local_54 = puVar4;
    FUN_00402690(&stack0xffffff6c,&DAT_0061e3a8,3);
    in_stack_ffffff68 = (byte *)0xfffffff9;
    puVar8 = FUN_0056d300(puVar4,0xfffffff9,in_stack_ffffff6c);
    local_8 = 0xffffffff;
    puVar8[9] = 0x430a0000;
    puVar8[10] = (float)(((*(int *)(param_1 + 0x2a4) + *(int *)(param_1 + 0x434) * -0x13) - local_58
                         ) + 0x13);
    if ((*(int *)(param_1 + 0x434) == -1) ||
       ((uint)((*(int *)(*(int *)(param_1 + 0x474) + 800) -
                *(int *)(*(int *)(param_1 + 0x474) + 0x31c) >> 2) - *(int *)(param_1 + 0x434)) <=
        *(uint *)(param_1 + 0x42c))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)((int)puVar8 + 7) = uVar3;
    local_4c = puVar8;
    pSVar6 = (Size *)cocos2d::Size::Size(local_68,15.0,15.0);
    cocos2d::Size::operator=((Size *)(puVar8 + 0xb),pSVar6);
    puVar5 = *(undefined4 **)(param_1 + 0x46c);
    if (*(undefined4 **)(param_1 + 0x470) == puVar5) {
      FUN_00414080((void *)(param_1 + 0x468),puVar5,&local_4c);
    }
    else {
      *puVar5 = puVar8;
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 4;
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x474) + 0x27c) != -1) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"`a3 back",8);
    local_8 = 3;
    iVar1 = *(int *)(param_1 + 0x474);
    ppvVar14 = (void **)(iVar1 + 0x298);
    ppvVar12 = ppvVar14;
    if (0xf < *(uint *)(iVar1 + 0x2ac)) {
      ppvVar12 = *ppvVar14;
    }
    local_48 = *(undefined4 **)(iVar1 + 0x2a8);
    uVar9 = FUN_004031f0((byte *)ppvVar12,(uint)local_48,(byte *)&PTR_005ce008,0);
    iVar13 = 0;
    if ((char)uVar9 == '\0') {
      if (local_2c != ppvVar14) {
        if (0xf < *(uint *)(iVar1 + 0x2ac)) {
          ppvVar14 = *ppvVar14;
        }
        FUN_00402690(local_2c,ppvVar14,(uint)local_48);
      }
      iVar13 = 0;
      if (10 < local_1c) {
        iVar13 = 1;
      }
    }
    puVar4 = (undefined1 *)FUN_005adb0f(0x3c);
    local_8._0_1_ = 4;
    local_54 = puVar4;
    FUN_004024e0(&stack0xffffff6c,local_2c);
    in_stack_ffffff68 = (byte *)0xfffffffe;
    puVar5 = FUN_0056d300(puVar4,0xfffffffe,in_stack_ffffff6c);
    local_8 = CONCAT31(local_8._1_3_,3);
    puVar5[9] = 0x40c00000;
    puVar5[10] = 0x41980000;
    local_48 = puVar5;
    pSVar6 = (Size *)cocos2d::Size::Size(local_68,(float)((iVar13 + 1) * 0x40),15.0);
    cocos2d::Size::operator=((Size *)(puVar5 + 0xb),pSVar6);
    puVar8 = *(undefined4 **)(param_1 + 0x46c);
    if (*(undefined4 **)(param_1 + 0x470) == puVar8) {
      FUN_00414080((void *)(param_1 + 0x468),puVar8,&local_48);
    }
    else {
      *puVar8 = puVar5;
      *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) {
      pvVar7 = local_2c[0];
      if (0xfff < local_18 + 1) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
LAB_0056f676:
          local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar7);
    }
  }
  puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x474) + 0x314);
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x474) + 0x310);
  local_48 = puVar8;
  if (puVar5 != puVar8) {
    do {
      FUN_004024e0(local_44,puVar5);
      local_54 = &stack0xffffff68;
      local_8 = 5;
      FUN_004024e0(&stack0xffffff68,local_44);
      local_8._0_1_ = 6;
      if (DAT_0065c274 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)FUN_005adb0f(0x30);
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar8 = puVar10 + 3;
        local_8._0_1_ = 8;
        *puVar8 = 0;
        puVar10[4] = 0;
        local_60 = puVar10;
        local_5c = puVar8;
        uVar11 = FUN_004136c0();
        *puVar8 = uVar11;
        puVar10[9] = 0;
        puVar10[10] = 0xf;
        *(undefined1 *)(puVar10 + 5) = 0;
        puVar8 = local_48;
        DAT_0065c274 = puVar10;
      }
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_004a0ee0(DAT_0065c274,in_stack_ffffff68);
      local_8 = 0xffffffff;
      if (0xf < local_30) {
        pvVar7 = local_44[0];
        if (0xfff < local_30 + 1) {
          pvVar7 = *(void **)((int)local_44[0] + -4);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) goto LAB_0056f676;
        }
        FUN_005adb3f(pvVar7);
      }
      puVar5 = puVar5 + 6;
    } while (puVar5 != puVar8);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


uint __fastcall FUN_0056f7b0(int param_1)

{
  int *in_EAX;
  
  if ((*(int *)(param_1 + 0x434) != -1) &&
     (in_EAX = (int *)(*(int *)(param_1 + 0x474) + 0x31c),
     *(uint *)(param_1 + 0x42c) <
     (uint)((*(int *)(*(int *)(param_1 + 0x474) + 800) - *in_EAX >> 2) - *(int *)(param_1 + 0x434)))
     ) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  return (uint)in_EAX & 0xffffff00;
}


void __fastcall FUN_0056f7e0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x468);
  if (*(int *)(param_1 + 0x46c) - iVar2 >> 2 != 0) {
    do {
      *(bool *)(*(int *)(iVar2 + uVar1 * 4) + 5) = uVar1 == *(uint *)(param_1 + 0x430);
      uVar1 = uVar1 + 1;
      iVar2 = *(int *)(param_1 + 0x468);
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x46c) - iVar2 >> 2));
  }
  return;
}


void __fastcall FUN_0056f830(int *param_1)

{
  param_1[0x10b] = param_1[0x10b] + -1;
  FUN_0056f1a0((int)param_1);
  FUN_0056f7e0((int)param_1);
                    // WARNING: Could not recover jumptable at 0x0056f848. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x294))();
  return;
}


void __fastcall FUN_0056f850(int *param_1)

{
  param_1[0x10b] = param_1[0x10b] + 1;
  FUN_0056f1a0((int)param_1);
  FUN_0056f7e0((int)param_1);
                    // WARNING: Could not recover jumptable at 0x0056f868. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x294))();
  return;
}


uint __thiscall FUN_0056f870(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = DAT_0065b444;
  if (*(char *)(DAT_0065b444 + 5) != '\0') {
LAB_0056f8e1:
    return uVar4 & 0xffffff00;
  }
  if ((((param_1 == 0x3b) || (param_1 == 0x1b)) || (param_1 == 0x29)) ||
     (((param_1 == 0x7f || (param_1 == 0xa4)) || ((param_1 == 0x23 || (param_1 == 10)))))) {
    piVar3 = *(int **)((int)this + 0x468);
    uVar4 = 0;
    iVar1 = piVar3[*(int *)((int)this + 0x430)];
    uVar5 = (uint)((int)*(int **)((int)this + 0x46c) + (3 - (int)piVar3)) >> 2;
    if (*(int **)((int)this + 0x46c) < piVar3) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      do {
        iVar2 = *piVar3;
        piVar3 = piVar3 + 1;
        uVar4 = uVar4 + 1;
        *(bool *)(iVar2 + 4) = iVar2 == iVar1;
      } while (uVar4 != uVar5);
    }
    param_1 = (**(code **)(*(int *)this + 0x294))();
  }
  else if (((param_1 != 0x1d) && (param_1 != 0x2b)) &&
          ((param_1 != 0x4e &&
           ((((param_1 != 0x8e && (param_1 != 0x1c)) && (param_1 != 0x25)) &&
            ((param_1 != 0x54 && (uVar4 = param_1, param_1 != 0x92)))))))) goto LAB_0056f8e1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


uint __thiscall FUN_0056f950(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *this_00;
  int *extraout_ECX;
  uint uVar6;
  uint uVar7;
  
  if (*(char *)(DAT_0065b444 + 5) != '\0') {
    return DAT_0065b444 & 0xffffff00;
  }
  if ((((param_1 == 0x1d) || (param_1 == 0x2b)) || (param_1 == 0x4e)) || (param_1 == 0x8e)) {
    iVar5 = *(int *)((int)this + 0x430);
    if (iVar5 == -1) {
      *(undefined4 *)((int)this + 0x430) = *(undefined4 *)((int)this + 0x42c);
    }
    else {
      uVar6 = iVar5 + 1;
      iVar1 = *(int *)((int)this + 0x468);
      uVar7 = *(int *)((int)this + 0x46c) - iVar1 >> 2;
      if (uVar6 < uVar7) {
        if (((**(int **)(iVar1 + iVar5 * 4) < 0) || (-1 < **(int **)(iVar1 + uVar6 * 4))) ||
           (uVar7 = FUN_0056f7b0((int)this), (char)uVar7 == '\0')) {
          *(uint *)((int)this + 0x430) = uVar6;
        }
        else {
          FUN_0056f850(extraout_ECX);
        }
      }
      else {
        *(uint *)((int)this + 0x430) = uVar7 - 1;
      }
    }
    FUN_0056f7e0((int)this);
    piVar3 = *(int **)((int)this + 0x468);
    uVar7 = 0;
    uVar6 = (uint)((int)*(int **)((int)this + 0x46c) + (3 - (int)piVar3)) >> 2;
    if (*(int **)((int)this + 0x46c) < piVar3) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        iVar5 = *piVar3;
        piVar3 = piVar3 + 1;
        uVar7 = uVar7 + 1;
        *(bool *)(iVar5 + 4) = iVar5 == 0;
      } while (uVar7 != uVar6);
    }
  }
  else {
    if (((param_1 != 0x1c) && (param_1 != 0x25)) && ((param_1 != 0x54 && (param_1 != 0x92)))) {
      if ((((((param_1 != 0x3b) && (param_1 != 0x1b)) && (param_1 != 0x29)) &&
           ((param_1 != 0x7f && (param_1 != 0xa4)))) && (param_1 != 0x23)) && (param_1 != 10)) {
        piVar3 = (int *)FUN_004023e0();
        if ((param_1 < 0x7c) || (0x95 < param_1)) {
          this_00 = piVar3 + 0xbc;
          if ((char)piVar3[0xbe] == '\0') {
            this_00 = piVar3 + 0xba;
          }
          piVar3 = FUN_00534390(this_00,&param_1);
        }
        return (uint)piVar3 & 0xffffff00;
      }
      if (*(int *)((int)this + 0x430) != -1) {
        cVar2 = FUN_0056e570(this,*(int **)(*(int *)((int)this + 0x468) +
                                           *(int *)((int)this + 0x430) * 4));
        if (cVar2 != '\0') {
          *(undefined4 *)((int)this + 0x430) = 0;
        }
        FUN_0056f7e0((int)this);
        uVar4 = (**(code **)(*(int *)this + 0x294))();
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      goto LAB_0056fbbc;
    }
    if (*(int *)((int)this + 0x430) == -1) {
      iVar5 = (*(int *)((int)this + 0x46c) - *(int *)((int)this + 0x468) >> 2) + -1;
LAB_0056fa7d:
      *(int *)((int)this + 0x430) = iVar5;
    }
    else {
      iVar5 = *(int *)((int)this + 0x430) + -1;
      if (-1 < iVar5) goto LAB_0056fa7d;
      if ((*(int *)((int)this + 0x434) != -1) && (0 < *(int *)((int)this + 0x42c))) {
        *(int *)((int)this + 0x42c) = *(int *)((int)this + 0x42c) + -1;
        FUN_0056f1a0((int)this);
        FUN_0056f7e0((int)this);
        (**(code **)(*(int *)this + 0x294))();
      }
    }
    FUN_0056f7e0((int)this);
    piVar3 = *(int **)((int)this + 0x468);
    uVar7 = 0;
    uVar6 = (uint)((int)*(int **)((int)this + 0x46c) + (3 - (int)piVar3)) >> 2;
    if (*(int **)((int)this + 0x46c) < piVar3) {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      do {
        iVar5 = *piVar3;
        piVar3 = piVar3 + 1;
        uVar7 = uVar7 + 1;
        *(bool *)(iVar5 + 4) = iVar5 == 0;
      } while (uVar7 != uVar6);
      uVar4 = (**(code **)(*(int *)this + 0x294))();
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  param_1 = (**(code **)(*(int *)this + 0x294))();
LAB_0056fbbc:
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


bool __thiscall FUN_0056fbd0(void *this,undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  Rect *this_00;
  Rect local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c8cdb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = param_1;
  local_14 = param_2;
  local_8 = 1;
  uStack_7 = 0;
  this_00 = (Rect *)(**(code **)(*(int *)this + 0x1b4))
                              (local_28,DAT_0065500c ^ (uint)&stack0xfffffffc);
  _local_8 = CONCAT31(uStack_7,2);
  bVar1 = cocos2d::Rect::containsPoint(this_00,(Vec2 *)&local_18);
  cocos2d::Rect::~Rect(local_28);
  ExceptionList = local_10;
  return bVar1;
}


undefined4 * __thiscall
FUN_0056fc50(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c8d40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00553370(this,param_1,param_2,param_3);
  *(undefined ***)this = UI_ModuleRepair::vftable;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x438) = 0xffffffff;
  *(undefined2 *)((int)this + 0x4dc) = 1;
  *(undefined4 *)((int)this + 0x4e0) = 0xbf800000;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined2 *)((int)this + 0x518) = 0x100;
  *(undefined4 *)((int)this + 0x51c) = 0xbf800000;
  *(undefined4 *)((int)this + 0x520) = 0;
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0;
  *(undefined4 *)((int)this + 0x530) = 0;
  *(undefined4 *)((int)this + 0x534) = 0;
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined4 *)((int)this + 0x544) = 0;
  *(undefined4 *)((int)this + 0x548) = 0;
  *(undefined4 *)((int)this + 0x54c) = 0;
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined4 *)((int)this + 0x558) = 0;
  *(undefined4 *)((int)this + 0x55c) = 0;
  local_8 = 4;
  *(undefined1 *)((int)this + 0x2dc) = 1;
  iVar1 = DAT_0065b5cc;
  uVar5 = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0xc0000000;
  *(undefined4 *)((int)this + 0x4ec) = 0xc0000000;
  *(undefined4 *)((int)this + 0x4f0) = 0xc0000000;
  *(undefined4 *)((int)this + 0x4f4) = 0xc0000000;
  *(undefined4 *)((int)this + 0x431) = 0x1010101;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  iVar3 = *(int *)(*(int *)(iVar1 + 0xd0) + 0x40);
  piVar4 = *(int **)(iVar3 + 0x3c);
  uVar2 = *(int *)(iVar3 + 0x40) - (int)piVar4 >> 2;
  if (uVar2 != 0) {
    do {
      iVar3 = *piVar4;
      if (*(int *)(iVar3 + 0x10) == *(int *)(*(int *)(iVar1 + 0xd0) + 0x1d8)) goto LAB_0056fe9a;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < uVar2);
  }
  iVar3 = 0;
LAB_0056fe9a:
  *(int *)((int)this + 0x428) = iVar3;
  if (iVar3 != 0) {
    *(undefined1 *)((int)this + 0x430) = *(undefined1 *)(iVar3 + 99);
    *(undefined4 *)((int)this + 0x42c) = 0xffffffff;
  }
  iVar3 = 0;
  do {
    if (*(int *)((int)this + 0x428) == 0) {
      *(undefined1 *)((int)this + iVar3 + 0x431) = 1;
    }
    else {
      *(undefined1 *)((int)this + iVar3 + 0x431) =
           *(undefined1 *)(*(int *)((int)this + 0x428) + 0x1e + iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined4 *)((int)this + 0x41c) = 0x65;
  *(undefined1 *)((int)this + 0x286) = 1;
  *(undefined1 *)((int)this + 0x284) = 1;
  FUN_00571820((int)this);
  ExceptionList = local_10;
  return this;
}


Node * __thiscall FUN_0056ff20(void *this,byte param_1)

{
  FUN_0056ff50(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0056ff50(Node *param_1)

{
  void *pvVar1;
  void *pvVar2;
  Rect *this;
  Rect *pRVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c84a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = UI_ModuleRepair::vftable;
  FUN_00570160((int)param_1);
  this = *(Rect **)(param_1 + 0x554);
  if (this != (Rect *)0x0) {
    pRVar3 = *(Rect **)(param_1 + 0x558);
    if (this != pRVar3) {
      do {
        cocos2d::Rect::~Rect(this);
        this = this + 0x14;
      } while (this != pRVar3);
      this = *(Rect **)(param_1 + 0x554);
    }
    pRVar3 = this;
    if ((0xfff < (uint)(((*(int *)(param_1 + 0x55c) - (int)this) / 0x14) * 0x14)) &&
       (pRVar3 = *(Rect **)(this + -4), (Rect *)0x1f < this + (-4 - (int)pRVar3)))
    goto LAB_00570152;
    FUN_005adb3f(pRVar3);
    *(undefined4 *)(param_1 + 0x554) = 0;
    *(undefined4 *)(param_1 + 0x558) = 0;
    *(undefined4 *)(param_1 + 0x55c) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x548);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x550) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00570152;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x548) = 0;
    *(undefined4 *)(param_1 + 0x54c) = 0;
    *(undefined4 *)(param_1 + 0x550) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x53c);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x544) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00570152;
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x53c) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0;
    *(undefined4 *)(param_1 + 0x544) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x530);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x538) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00570152:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)(param_1 + 0x530) = 0;
    *(undefined4 *)(param_1 + 0x534) = 0;
    *(undefined4 *)(param_1 + 0x538) = 0;
  }
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}
