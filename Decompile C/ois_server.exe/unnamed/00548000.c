#include "../ois_server.exe.h"


void __fastcall FUN_00548020(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[1];
  for (piVar2 = (int *)*param_1; piVar2 != piVar1; piVar2 = piVar2 + 0x1e) {
    FUN_005457a0(piVar2);
  }
  return;
}


TypeDescriptor * FUN_00548050(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_00548060(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return;
}


TypeDescriptor * FUN_00548090(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_005480a0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


TypeDescriptor * FUN_005480c0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_005480d0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


void __thiscall FUN_00548100(void *this,undefined4 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)((int)this + 4);
  uVar3 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 4);
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  (*pcVar2)(uVar3,param_1[1],param_1[2],param_1[3],uVar1);
  return;
}


undefined4 * __thiscall FUN_00548150(void *this,byte param_1)

{
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00548180(undefined4 *param_1)

{
  *param_1 = Screen_Renderer::vftable;
  return;
}


void FUN_00548190(void)

{
  return;
}


undefined4 * __thiscall FUN_005481a0(void *this,byte param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = Screen_RTComms::vftable;
  if (*(Ref **)((int)this + 0x1c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  FUN_004025a0((int *)((int)this + 0x24));
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00548220(int param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  uint in_stack_fffffe18;
  byte *pbVar7;
  undefined4 local_1b8;
  undefined4 local_1b4 [4];
  undefined4 local_1a4;
  undefined4 local_1a0;
  void *local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6929;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0x35;
  *(undefined4 *)(param_1 + 0x18) = 0x1e;
  FUN_0043d780((int)local_1b4);
  local_8 = 0;
  local_1a4 = *(undefined4 *)(param_1 + 0x14);
  local_1a0 = *(undefined4 *)(param_1 + 0x18);
  pvVar1 = (void *)FUN_005adb0f(0x15c00);
  local_8._0_1_ = 1;
  pbVar7 = (byte *)(in_stack_fffffe18 & 0xffffff00);
  local_1b8 = pvVar1;
  FUN_00402690(&stack0xfffffe18,&PTR_005ce008,0);
  pbVar6 = *(byte **)(param_1 + 0xc);
  piVar2 = (int *)FUN_0055f500(pvVar1,pbVar6,local_1b4,pbVar6 + 0x70,*(int *)(param_1 + 0x14),
                               *(int *)(param_1 + 0x18),pbVar7);
  local_8._0_1_ = 0;
  *(int **)(param_1 + 0x1c) = piVar2;
  FUN_0055fcc0(piVar2);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))();
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(param_1 + 0x1c));
  iVar5 = *(int *)(param_1 + 0xc);
  local_1b8 = *(void **)(param_1 + 0x1c);
  puVar3 = *(undefined4 **)(iVar5 + 0x194);
  if (*(undefined4 **)(iVar5 + 0x198) == puVar3) {
    FUN_00414080((void *)(iVar5 + 400),puVar3,&local_1b8);
  }
  else {
    *puVar3 = local_1b8;
    *(int *)(iVar5 + 0x194) = *(int *)(iVar5 + 0x194) + 4;
  }
  pvVar1 = (void *)FUN_005adb0f(0x150);
  local_8._0_1_ = 3;
  puVar3 = FUN_0042bc30(pvVar1,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x24,
                        *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                        param_1 + 0x24);
  puVar4 = DAT_0065c27c;
  local_8._0_1_ = 0;
  *(undefined4 **)(param_1 + 0x20) = puVar3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_005adb0f(0x20);
    DAT_0065c27c = puVar4;
    *puVar4 = CommsManager::vftable;
    puVar4[1] = 0x50;
    puVar4[2] = 0x28;
    *(undefined1 *)(puVar4 + 3) = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar3 = *(undefined4 **)(param_1 + 0x20);
  }
  puVar4[4] = puVar3;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"`%RTCOMMS v1.10",0xf);
  local_8._0_1_ = 4;
  iVar5 = puVar4[1] - local_1c;
  if (0 < iVar5) {
    do {
      FUN_00403640(local_2c,&DAT_005e7468,1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_1b8 + 1),'\0','\0',0xff);
  FUN_004024e0(&stack0xfffffe04,local_2c);
  FUN_0042dec0((void *)puVar4[4],pbVar6);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pvVar1 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar1 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  puVar3 = DAT_0065c27c;
  if (DAT_0065c27c == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_005adb0f(0x20);
    DAT_0065c27c = puVar3;
    *puVar3 = CommsManager::vftable;
    puVar3[1] = 0x50;
    puVar3[2] = 0x28;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  puVar3[1] = *(undefined4 *)(param_1 + 0x14);
  puVar3[2] = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(puVar3 + 3) = 1;
  FUN_00465e40((int)local_1b4);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00548560(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint in_stack_ffffffd4;
  void *pvVar7;
  
  if ((*(int **)(param_1[3] + 0x188) == (int *)0x0) ||
     (cVar3 = (**(code **)(**(int **)(param_1[3] + 0x188) + 0x10))(), cVar3 == '\0')) {
    piVar1 = (int *)param_1[8];
    puVar2 = (undefined4 *)piVar1[2];
    FUN_004028b0((int *)*puVar2,(int *)puVar2[1]);
    puVar2[1] = *puVar2;
    FUN_0042d280(piVar1);
    if (*(int **)(param_1[3] + 0x188) == (int *)0x0) {
      uVar6 = 0x1e;
      pcVar5 = "`@Error #74: `$no comms module";
    }
    else {
      cVar3 = (**(code **)(**(int **)(param_1[3] + 0x188) + 0x14))();
      uVar6 = 0x2a;
      if (cVar3 == '\0') {
        pcVar5 = "`@Error #81: `$comms module non-functional";
      }
      else {
        pcVar5 = "`@Error #78: `$comms module is `@destroyed";
      }
    }
    pvVar7 = (void *)(in_stack_ffffffd4 & 0xffffff00);
    FUN_00402690(&stack0xffffffd4,pcVar5,uVar6);
    FUN_0042ddb0((void *)param_1[8],pvVar7);
    FUN_0042d280((int *)param_1[8]);
    return;
  }
  iVar4 = FUN_00412da0();
  if (*(char *)(iVar4 + 0xc) != '\0') {
    iVar4 = FUN_00412da0();
    *(undefined1 *)(iVar4 + 0xc) = 0;
    (**(code **)(*param_1 + 0xc))();
  }
  if (param_1[3] == 0) {
    return;
  }
  *(undefined1 *)(param_1[3] + 0x70) = 1;
  return;
}


undefined1 FUN_00548640(void)

{
  return 1;
}


undefined4 __thiscall FUN_00548650(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_0065c27c;
  if (DAT_0065c27c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x20);
    DAT_0065c27c = puVar1;
    *puVar1 = CommsManager::vftable;
    puVar1[1] = 0x50;
    puVar1[2] = 0x28;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    this = puVar1;
  }
  uVar2 = (**(code **)*puVar1)(param_1,this);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


void FUN_005486b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *in_stack_ffffffa8;
  void *local_30 [5];
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1d48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = DAT_0065c27c;
  if (DAT_0065c27c == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_005adb0f(0x20);
    DAT_0065c27c = puVar3;
    *puVar3 = CommsManager::vftable;
    puVar3[1] = 0x50;
    puVar3[2] = 0x28;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    local_18 = puVar3;
  }
  piVar1 = (int *)puVar3[4];
  puVar2 = (undefined4 *)piVar1[2];
  FUN_004028b0((int *)*puVar2,(int *)puVar2[1]);
  puVar2[1] = *puVar2;
  FUN_0042d280(piVar1);
  uVar6 = 0;
  iVar4 = puVar3[5];
  if (puVar3[6] - iVar4 >> 2 != 0) {
    do {
      FUN_004024e0(local_30,(undefined4 *)(*(int *)(iVar4 + uVar6 * 4) + 0x1c));
      pvVar5 = (void *)puVar3[4];
      local_8 = 0;
      FUN_004024e0(&stack0xffffffa8,local_30);
      FUN_0042d530(pvVar5,*(uint *)((int)pvVar5 + 0x20),in_stack_ffffffa8);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pvVar5 = local_30[0];
        if (0xfff < local_1c + 1) {
          pvVar5 = *(void **)((int)local_30[0] + -4);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar5);
      }
      uVar6 = uVar6 + 1;
      iVar4 = puVar3[5];
    } while (uVar6 < (uint)(puVar3[6] - iVar4 >> 2));
  }
  FUN_0042d280(*(int **)(local_14 + 0x20));
  ExceptionList = local_10;
  return;
}


undefined4 * __thiscall FUN_00548800(void *this,byte param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c55f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = Screen_Terminal::vftable;
  if (*(Ref **)((int)this + 0x20) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
    FUN_0053cfb0(*(void **)((int)this + 0x28));
  }
  FUN_004025a0((int *)((int)this + 0x38));
  piVar1 = *(int **)((int)this + 0x2c);
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)((int)this + 0x30);
    if (piVar1 != piVar2) {
      do {
        FUN_0053d810(piVar1);
        piVar1 = piVar1 + 0x10;
      } while (piVar1 != piVar2);
      piVar1 = *(int **)((int)this + 0x2c);
    }
    piVar2 = piVar1;
    if ((0xfff < (*(int *)((int)this + 0x34) - (int)piVar1 & 0xffffffc0U)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00548900(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_fffffdb4;
  byte *pbVar6;
  uint in_stack_fffffdec;
  code *local_1ec;
  code *local_1e8;
  undefined4 *local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc [4];
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_54 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6a26;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(DAT_0065b5cc + 0xd0);
  *(undefined4 *)(param_1 + 0x18) = 0x2a;
  *(undefined4 *)(param_1 + 0x1c) = 0x18;
  FUN_0043d780((int)local_1dc);
  local_8 = 0;
  local_1cc = *(undefined4 *)(param_1 + 0x18);
  local_1c8 = *(undefined4 *)(param_1 + 0x1c);
  pvVar1 = (void *)FUN_005adb0f(0x15c00);
  local_8._0_1_ = 1;
  pbVar6 = (byte *)(in_stack_fffffdec & 0xffffff00);
  local_1e0 = pvVar1;
  FUN_00402690(&stack0xfffffdec,&PTR_005ce008,0);
  piVar2 = (int *)FUN_0055f500(pvVar1,*(int *)(param_1 + 0xc),local_1dc,
                               *(int *)(param_1 + 0xc) + 0x70,*(int *)(param_1 + 0x18),
                               *(int *)(param_1 + 0x1c),pbVar6);
  local_8._0_1_ = 0;
  *(int **)(param_1 + 0x20) = piVar2;
  FUN_0055fcc0(piVar2);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (undefined4 *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(param_1 + 0x20) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(param_1 + 0x20));
  iVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0xb0))();
  local_1e0 = *(void **)(iVar3 + 4);
  (**(code **)(**(int **)(param_1 + 0x20) + 0xb0))();
  pbVar6 = (byte *)0x548aa5;
  FUN_00591070("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)(param_1 + 0xc);
  local_1e0 = *(void **)(param_1 + 0x20);
  puVar4 = *(undefined4 **)(iVar3 + 0x194);
  if (*(undefined4 **)(iVar3 + 0x198) == puVar4) {
    FUN_00414080((void *)(iVar3 + 400),puVar4,&local_1e0);
  }
  else {
    *puVar4 = local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = (undefined4 *)FUN_005adb0f(0xa8);
  puVar4 = FUN_0042b260(local_1e4);
  *(undefined4 **)(param_1 + 0x28) = puVar4;
  local_1ec = FUN_00549020;
  local_1e4 = (undefined4 *)param_1;
  FUN_0054a920(puVar4 + 6,&local_1ec);
  local_1e8 = FUN_005494d0;
  local_1e4 = (undefined4 *)param_1;
  FUN_0054a9c0((void *)(*(int *)(param_1 + 0x28) + 0x68),&local_1e8);
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0xd) = 1;
  local_1e4 = (undefined4 *)FUN_005adb0f(0x150);
  local_8._0_1_ = 3;
  puVar4 = FUN_0042bc30(local_1e4,*(undefined4 *)(param_1 + 0x20),param_1 + 0x38,
                        *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                        param_1 + 0x38);
  local_8._0_1_ = 0;
  *(undefined4 **)(param_1 + 0x24) = puVar4;
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_1e0 + 1),'\0','\0',0xff);
  FUN_00591e00(&stack0xfffffdd8,"SYS> `%%%s%c");
  FUN_0042dec0(*(void **)(param_1 + 0x24),pbVar6);
  local_1e4 = (undefined4 *)&stack0xfffffdcc;
  local_8._0_1_ = 4;
  pvVar1 = (void *)(in_stack_fffffdb4 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"STATUS",6);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x34) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x2c),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar5,puVar4,puVar5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = (undefined4 *)&stack0xfffffdcc;
  local_8._0_1_ = 6;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"POWER",5);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,7);
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x34) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x2c),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = (undefined4 *)&stack0xfffffdcc;
  local_8._0_1_ = 8;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00621464,3);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,9);
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x34) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x2c),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = (undefined4 *)&stack0xfffffdcc;
  local_8._0_1_ = 10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"MODULES",7);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x34) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x2c),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = (undefined4 *)&stack0xfffffdcc;
  local_8._0_1_ = 0xc;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"MODULE",6);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x34) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x2c),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = (undefined4 *)&stack0xfffffdcc;
  local_8._0_1_ = 0xe;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00621610,3);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x34) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x2c),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = (undefined4 *)&stack0xfffffdcc;
  local_8._0_1_ = 0x10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_006215f4,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  if (*(undefined4 **)(param_1 + 0x34) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x2c),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x40;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0053d810(local_54);
  FUN_005494d0(param_1);
  FUN_00465e40((int)local_1dc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00549000(void *this,int param_1)

{
  FUN_0042b4d0(*(void **)((int)this + 0x28),param_1);
  return;
}


void __thiscall FUN_00549020(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 *in_stack_ffffff84;
  void *local_50 [3];
  int local_44 [3];
  byte *local_38;
  void *local_34;
  undefined1 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c57c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_34 = this;
  FUN_004024e0(local_2c,&param_1);
  local_8._0_1_ = 2;
  uVar11 = 0;
  iVar9 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar9 != iVar9) {
    iVar9 = 0;
    do {
      FUN_00403640(local_2c,&DAT_005e7468,1);
      pbVar2 = in_stack_0000001c + iVar9;
      pbVar10 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar10 = *(byte **)pbVar2;
      }
      FUN_00403640(local_2c,pbVar10,*(uint *)(pbVar2 + 0x10));
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar11 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x24);
  local_8._0_1_ = 3;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8._0_1_ = 2;
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  FUN_0042de40(*(void **)((int)this + 0x24),"`!SYS>`2 %s");
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x24);
  local_8._0_1_ = 4;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  uVar11 = 0;
  iVar9 = *(int *)((int)this + 0x30);
  pbVar10 = *(byte **)((int)local_34 + 0x2c);
  local_38 = pbVar10;
  if (iVar9 - (int)pbVar10 >> 6 != 0) {
    do {
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)param_1;
      }
      pbVar2 = pbVar10;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar2 = *(byte **)pbVar10;
      }
      uVar4 = FUN_004031f0(pbVar2,*(uint *)(pbVar10 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        FUN_0042b900(local_44,(int *)&stack0x0000001c);
        local_30 = 0;
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x2c) + 0x3c);
        if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar7 + 8))();
        FUN_004025a0(local_44);
        goto LAB_0054937a;
      }
      uVar11 = uVar11 + 1;
      pbVar10 = pbVar10 + 0x40;
      iVar9 = *(int *)((int)local_34 + 0x30);
    } while (uVar11 < (uint)(iVar9 - (int)local_38 >> 6));
  }
  pvVar8 = local_34;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  uVar11 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_00620618,4);
  pbVar10 = local_38;
  if ((char)uVar11 == '\0') {
    local_44[1] = 0;
    local_44[2] = 0xf;
    local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
    FUN_00402690(local_50,"Unknown command.",0x10);
    pvVar8 = *(void **)((int)pvVar8 + 0x24);
    local_8._0_1_ = 7;
    FUN_004024e0(&stack0xffffff84,local_50);
    FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < (uint)local_44[2]) {
      pvVar8 = local_50[0];
      if ((0xfff < local_44[2] + 1U) &&
         (pvVar8 = *(void **)((int)local_50[0] + -4),
         0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
LAB_0054943b:
    piVar7 = *(int **)((int)local_34 + 0x24);
  }
  else {
    iVar1 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar1 == iVar1) {
      FUN_0054a4f0((int)pvVar8);
      piVar7 = *(int **)((int)local_34 + 0x24);
    }
    else {
      uVar11 = 0;
      if (iVar9 - (int)local_38 >> 6 == 0) goto LAB_0054943b;
      uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      pbVar2 = local_38;
      do {
        pbVar6 = in_stack_0000001c;
        if (0xf < *(uint *)(in_stack_0000001c + 0x14)) {
          pbVar6 = *(byte **)in_stack_0000001c;
        }
        pbVar5 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          pbVar5 = *(byte **)pbVar2;
        }
        uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),pbVar6,uVar4);
        if ((char)uVar4 != '\0') {
          FUN_0042b900(local_44,(int *)&stack0x0000001c);
          pvVar8 = local_34;
          local_30 = 1;
          local_8._0_1_ = 6;
          piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x2c) + 0x3c);
          if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar7 + 8))();
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004025a0(local_44);
          piVar7 = *(int **)((int)pvVar8 + 0x24);
          goto LAB_00549375;
        }
        uVar11 = uVar11 + 1;
        pbVar2 = pbVar2 + 0x40;
        uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      } while (uVar11 < (uint)(*(int *)((int)local_34 + 0x30) - (int)pbVar10 >> 6));
      piVar7 = *(int **)((int)local_34 + 0x24);
    }
  }
LAB_00549375:
  FUN_0042d280(piVar7);
LAB_0054937a:
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_005493ac;
    FUN_005adb3f(pvVar8);
  }
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  if (0xf < in_stack_00000018) {
    pbVar10 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar10 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar10))) {
LAB_005493ac:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  FUN_004025a0((int *)&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_005494d0(int param_1)

{
  byte *in_stack_ffffffd4;
  Color3B local_7 [3];
  
  cocos2d::Color3B::Color3B(local_7,'\0','\0',0xff);
  FUN_00591e00(&stack0xffffffd4,"SYS> `%%%s%c");
  FUN_0042dec0(*(void **)(param_1 + 0x24),in_stack_ffffffd4);
  FUN_0042d280(*(int **)(param_1 + 0x24));
  return;
}


void __thiscall FUN_00549540(void *this,char param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  void *in_stack_ffffffcc;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c67e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    FUN_0042de40(*(void **)((int)this + 0x24),"Ship Name: `!%s");
    FUN_0042de40(*(void **)((int)this + 0x24),"Ship Class: `%%%s");
    FUN_0042de40(*(void **)((int)this + 0x24),"Manufacturer: `0%s");
    FUN_00522c50(*(int *)(*(int *)((int)this + 0x14) + 0x40));
    FUN_00522c50(*(int *)(*(int *)((int)this + 0x14) + 0x40));
    FUN_0042de40(*(void **)((int)this + 0x24),"Current Power Generation: `$%.2fmw`2/`$%.2fmw");
    FUN_00522920(*(int *)(*(int *)((int)this + 0x14) + 0x40));
    FUN_005228c0(*(int *)(*(int *)((int)this + 0x14) + 0x40));
    FUN_0042de40(*(void **)((int)this + 0x24),"Current Power Storage: `!%.2fmw`2/`!%.2fmw");
    iVar1 = *(int *)(*(int *)((int)this + 0x14) + 0x40);
    FUN_00522be0(iVar1);
    FUN_00522c50(iVar1);
    in_stack_ffffffcc = *(void **)((int)this + 0x24);
    FUN_0042de40(in_stack_ffffffcc,"Current Power Drain: `@-%.2fmw");
    switch(*(undefined4 *)(*(int *)((int)this + 0x14) + 0xd4)) {
    case 0:
      uVar3 = 0x20;
      pcVar2 = "Current Status: `%Manual Control";
      break;
    case 1:
      uVar3 = 0x23;
      pcVar2 = "Current Status: `$Automatic Control";
      break;
    case 2:
      uVar3 = 0x1a;
      pcVar2 = "Current Status: `0In Orbit";
      break;
    case 3:
      uVar3 = 0x18;
      pcVar2 = "Current Status: `1Docked";
      break;
    default:
      goto LAB_0054970b;
    }
  }
  else {
    uVar3 = 0x27;
    pcVar2 = "`3STATUS`2: display ship system summary";
  }
  pvVar4 = (void *)((uint)in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,pcVar2,uVar3);
  FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar4);
LAB_0054970b:
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00549740(void *this,char param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  float fVar7;
  undefined1 in_XMM0 [16];
  float fVar8;
  uint in_stack_ffffffc4;
  void *pvVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar3 = param_2;
  puStack_c = &LAB_005c5938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == '\0') &&
     (iVar1 = param_3 - (int)param_2 >> 0x1f, (param_3 - (int)param_2) / 0x18 + iVar1 != iVar1)) {
    iVar1 = *(int *)(DAT_0065b5cc + 0xd0);
    pbVar5 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar5 = *(byte **)param_2;
    }
    uVar4 = FUN_004031f0(pbVar5,*(uint *)(param_2 + 0x10),(byte *)"DRAIN",5);
    if ((char)uVar4 != '\0') {
      uVar4 = 0;
      if (*(int *)(*(int *)(iVar1 + 0x40) + 0x40) - *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2 !=
          0) {
        do {
          iVar6 = *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x14) + 0x40) + 0x3c) + uVar4 * 4)
          ;
          if (*(char *)(iVar6 + 99) != '\0') {
            if (*(char *)(iVar6 + 0x62) == '\0') {
              fVar8 = *(float *)(*(int *)(iVar6 + 8) + 0xc0);
              fVar7 = fVar8;
              FUN_00438020(*(int **)(iVar6 + 0xc));
              fVar8 = fVar7 * fVar8 + fVar8;
            }
            else {
              iVar2 = *(int *)(iVar6 + 100);
              fVar8 = *(float *)(*(int *)(iVar6 + 8) + 0xbc);
              fVar7 = fVar8;
              FUN_00438020(*(int **)(iVar6 + 0xc));
              fVar8 = (fVar7 * fVar8 + fVar8) * ((float)iVar2 / 100.0);
            }
            if (0.0 < fVar8) {
              iVar6 = *(int *)(*(int *)(*(int *)(iVar1 + 0x40) + 0x3c) + uVar4 * 4);
              if (*(char *)(iVar6 + 99) != '\0') {
                if (*(char *)(iVar6 + 0x62) == '\0') {
                  FUN_00438020(*(int **)(iVar6 + 0xc));
                }
                else {
                  FUN_00438020(*(int **)(iVar6 + 0xc));
                }
              }
              FUN_0042de40(*(void **)((int)this + 0x24),"`%%%s`2: draining `@%.2fmw");
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)(*(int *)(*(int *)(iVar1 + 0x40) + 0x40) -
                                *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2));
      }
      goto LAB_00549afd;
    }
    pbVar5 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar5 = *(byte **)pbVar3;
    }
    uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar3 + 0x10),&DAT_006217ac,3);
    if ((char)uVar4 != '\0') {
      uVar4 = 0;
      if (*(int *)(*(int *)(iVar1 + 0x40) + 0x40) - *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2 !=
          0) {
        do {
          iVar6 = *(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x14) + 0x40) + 0x3c) + uVar4 * 4)
          ;
          if ((*(char *)(iVar6 + 99) != '\0') && (FUN_004ae5e0(iVar6), 0.0 < in_XMM0._0_4_)) {
            iVar6 = *(int *)(*(int *)(*(int *)(iVar1 + 0x40) + 0x3c) + uVar4 * 4);
            if (*(char *)(iVar6 + 99) == '\0') {
              in_XMM0 = ZEXT816(0);
            }
            else {
              FUN_004ae5e0(iVar6);
            }
            in_XMM0._0_8_ = (double)in_XMM0._0_4_;
            FUN_0042de40(*(void **)((int)this + 0x24),"`%%%s`2: generating `$%.2fmw");
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)(*(int *)(*(int *)(iVar1 + 0x40) + 0x40) -
                                *(int *)(*(int *)(iVar1 + 0x40) + 0x3c) >> 2));
      }
      goto LAB_00549afd;
    }
    pbVar5 = pbVar3;
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar5 = *(byte **)pbVar3;
    }
    uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar3 + 0x10),(byte *)"STORE",5);
    if ((char)uVar4 != '\0') {
      iVar6 = *(int *)(iVar1 + 0x40);
      uVar4 = 0;
      if (*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c) >> 2 != 0) {
        do {
          if (0.0 < *(float *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x3c) + uVar4 * 4) + 8) + 0xc4)) {
            FUN_0042de40(*(void **)((int)this + 0x24),"`%%%s`2: storing `$%.2fmw`2/`$%.2fmw");
            iVar6 = *(int *)(iVar1 + 0x40);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)(*(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c) >> 2));
      }
      FUN_00522850(iVar6);
      FUN_00522920(*(int *)(iVar1 + 0x40));
      FUN_005228c0(*(int *)(iVar1 + 0x40));
      FUN_0042de40(*(void **)((int)this + 0x24),"`2Total power: `$%.2fmw`2/`$%.2fmw (%d%%)");
      goto LAB_00549afd;
    }
  }
  pvVar9 = (void *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,
               "`3POWER`2 (DRAIN,GEN,STORE): display power storage, or items currently draining or generating power"
               ,99);
  FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar9);
LAB_00549afd:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00549b20(void *this,char param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  uint in_stack_ffffff70;
  int local_60;
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
  int local_8;
  
  puStack_c = &LAB_005c6a70;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    local_60 = 0xc;
    iVar4 = 1;
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x14) + 0x1f8);
      if (iVar4 + -1 < *(int *)(iVar1 + 8)) {
        pvVar3 = *(void **)(iVar1 + local_60);
        if (pvVar3 == (void *)0x0) {
          FUN_0042de40(*(void **)((int)this + 0x24),"`2%d: `8*no pod*");
        }
        else if ((*(int *)((int)pvVar3 + 8) < 1) || (*(int *)((int)pvVar3 + 4) == -1)) {
          FUN_005068a0(pvVar3,(undefined1 *)local_5c);
          local_8._0_1_ = 3;
          FUN_0042de40(*(void **)((int)this + 0x24),"`2%d: %s`2 -`7 empty");
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_48) {
            pvVar3 = local_5c[0];
            if ((0xfff < local_48 + 1) &&
               (pvVar3 = *(void **)((int)local_5c[0] + -4),
               0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar3)))) goto LAB_00549da1;
            FUN_005adb3f(pvVar3);
          }
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        }
        else {
          piVar2 = FUN_004a84a0(*(int *)((int)pvVar3 + 4));
          if (piVar2 == (int *)0x0) {
            FUN_005068a0(pvVar3,(undefined1 *)local_44);
            local_8._0_1_ = 2;
            FUN_0042de40(*(void **)((int)this + 0x24),"`2%d: %s`2 -`7 UNKNOWN");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_30) {
              pvVar3 = local_44[0];
              if ((0xfff < local_30 + 1) &&
                 (pvVar3 = *(void **)((int)local_44[0] + -4),
                 0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) goto LAB_00549da1;
              FUN_005adb3f(pvVar3);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          }
          else {
            FUN_005068a0(pvVar3,(undefined1 *)local_2c);
            local_8._0_1_ = 1;
            FUN_0042de40(*(void **)((int)this + 0x24),"`2%d: %s`2 -`7 %dx %s");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pvVar3 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar3 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3)))) {
LAB_00549da1:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pvVar3);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          }
        }
      }
      local_60 = local_60 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xf);
    iVar4 = 7;
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_0042de40(*(void **)((int)this + 0x24),"`2Hold carrying: %d/%d");
  }
  else {
    pvVar3 = (void *)(in_stack_ffffff70 & 0xffffff00);
    FUN_00402690(&stack0xffffff70,"`3INV`2: display ship\'s hold contents",0x25);
    FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar3);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00549e20(void *this,char param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint in_stack_ffffff70;
  void *pvVar7;
  char *pcVar8;
  uint uVar9;
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
  
  puStack_c = &LAB_005c6ad9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uStack_7 = 0;
  if (param_1 == '\0') {
    local_60 = 0;
    iVar1 = *(int *)(*(int *)((int)this + 0x14) + 0x40);
    if (*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2 != 0) {
      do {
        iVar1 = local_60 * 4;
        local_60 = local_60 + 1;
        pvVar7 = (void *)0x549f01;
        FUN_0042de40(*(void **)((int)this + 0x24),"`0%d`3: %s - `7%s");
        local_34 = 0;
        local_30 = 0xf;
        local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
        local_8 = 1;
        cVar2 = (**(code **)(**(int **)(iVar1 + *(int *)(*(int *)(*(int *)((int)this + 0x14) + 0x40)
                                                        + 0x3c)) + 0x14))();
        if (cVar2 == '\0') {
          iVar3 = *(int *)(iVar1 + *(int *)(*(int *)(*(int *)((int)this + 0x14) + 0x40) + 0x3c));
          if (*(char *)(iVar3 + 99) == '\0') {
            FUN_00403640(local_44," `2(`7disconnected`2)",0x15);
          }
          else {
            _local_8 = CONCAT31(uStack_7,2);
            iVar3 = FUN_00437440(*(int **)(iVar3 + 0xc));
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            FUN_00402690(local_2c,"`0nominal",9);
            if (iVar3 == 0) {
              uVar9 = 0x10;
              pcVar8 = "`4non-functional";
LAB_00549fd5:
              FUN_00402690(local_2c,pcVar8,uVar9);
            }
            else {
              if (iVar3 < 0x19) {
                uVar9 = 0xe;
                pcVar8 = "`@heavy damage";
                goto LAB_00549fd5;
              }
              if (iVar3 < 0x32) {
                uVar9 = 8;
                pcVar8 = "`^damage";
                goto LAB_00549fd5;
              }
              if (iVar3 < 0x4b) {
                uVar9 = 0xe;
                pcVar8 = "`$light damage";
                goto LAB_00549fd5;
              }
            }
            puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c," `2(%s`2)");
            local_8 = 3;
            puVar5 = puVar4;
            if (0xf < (uint)puVar4[5]) {
              puVar5 = (undefined4 *)*puVar4;
            }
            FUN_00403640(local_44,puVar5,puVar4[4]);
            local_8 = 2;
            if (0xf < local_48) {
              pvVar6 = local_5c[0];
              if ((0xfff < local_48 + 1) &&
                 (pvVar6 = *(void **)((int)local_5c[0] + -4),
                 0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) goto LAB_0054a179;
              FUN_005adb3f(pvVar6);
            }
            local_8 = 1;
            local_4c = 0;
            local_48 = 0xf;
            local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
            if (0xf < local_18) {
              pvVar6 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar6 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) goto LAB_0054a179;
              FUN_005adb3f(pvVar6);
            }
            FUN_00437c60(*(int **)(*(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x14) + 0x40) +
                                                    0x3c) + iVar1) + 0xc));
            puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c," `2(%d%% efficiency`2)");
            local_8 = 4;
            puVar5 = puVar4;
            if (0xf < (uint)puVar4[5]) {
              puVar5 = (undefined4 *)*puVar4;
            }
            FUN_00403640(local_44,puVar5,puVar4[4]);
            local_8 = 1;
            if (0xf < local_48) {
              pvVar6 = local_5c[0];
              if ((0xfff < local_48 + 1) &&
                 (pvVar6 = *(void **)((int)local_5c[0] + -4),
                 0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar6)))) goto LAB_0054a179;
              FUN_005adb3f(pvVar6);
            }
          }
        }
        else {
          FUN_00403640(local_44," `2(`@nonfunctional`2)",0x16);
        }
        FUN_004024e0(&stack0xffffff70,local_44);
        FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar7);
        local_8 = 0;
        if (0xf < local_30) {
          pvVar7 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar7 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7)))) {
LAB_0054a179:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pvVar7);
        }
        iVar1 = *(int *)(*(int *)((int)this + 0x14) + 0x40);
      } while (local_60 < (uint)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2));
    }
  }
  else {
    pvVar7 = (void *)(in_stack_ffffff70 & 0xffffff00);
    FUN_00402690(&stack0xffffff70,"`3MODULES`2: itemise all ship modules",0x25);
    FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar7);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054a180(void *this,char param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  char *pcVar8;
  uint in_stack_ffffffc4;
  void *pvVar9;
  uint3 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar4 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar4 == iVar4) {
      FUN_0054a180(this,'\x01',(char *)0x0,0);
    }
    else {
      pcVar8 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pcVar8 = *(char **)param_2;
      }
      iVar4 = atoi(pcVar8);
      uVar6 = iVar4 - 1;
      uVar10 = (uint3)(in_stack_ffffffc4 >> 8);
      if (((int)uVar6 < 0) ||
         (iVar4 = *(int *)(*(int *)((int)this + 0x14) + 0x40), iVar1 = *(int *)(iVar4 + 0x3c),
         (uint)(*(int *)(iVar4 + 0x40) - iVar1 >> 2) <= uVar6)) {
        pvVar9 = (void *)((uint)uVar10 << 8);
        FUN_00402690(&stack0xffffffc4,"`$Error: invalid module number",0x1e);
        FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar9);
      }
      else {
        piVar2 = *(int **)(iVar1 + uVar6 * 4);
        if (piVar2 == (int *)0x0) {
          pvVar9 = (void *)((uint)uVar10 << 8);
          FUN_00402690(&stack0xffffffc4,"`7**empty**",0xb);
          FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar9);
        }
        else {
          FUN_0042de40(*(void **)((int)this + 0x24),"`3Man.: `0%s");
          FUN_0042de40(*(void **)((int)this + 0x24),"`3Typ.: `0%s");
          cVar3 = (**(code **)(*piVar2 + 0x14))();
          if (cVar3 == '\0') {
            if (*(char *)((int)piVar2 + 99) == '\0') {
              uVar6 = 0x16;
              pcVar8 = "`3Sta.: `$disconnected";
            }
            else {
              uVar6 = 0x13;
              pcVar8 = "`3Sta.: `!connected";
            }
          }
          else {
            uVar6 = 0x14;
            pcVar8 = "`3Sta.: `@inoperable";
          }
          pvVar9 = (void *)(in_stack_ffffffc4 & 0xffffff00);
          FUN_00402690(&stack0xffffffc4,pcVar8,uVar6);
          FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar9);
          FUN_00437c60((int *)piVar2[3]);
          FUN_0042de40(*(void **)((int)this + 0x24),"`3Eff.: %d%%");
          piVar5 = (int *)piVar2[3];
          if (*(int *)(*piVar5 + 0x54) - *(int *)(*piVar5 + 0x50) >> 2 != 0) {
            iVar4 = 0;
            uVar6 = 1;
            do {
              iVar1 = *(int *)(iVar4 + 4 + (int)piVar5);
              if (*(char *)((int)piVar2 + 99) == '\0') {
                if (iVar1 == 0) {
                  FUN_0042de40(*(void **)((int)this + 0x24),"`2 C%02d: `0%s `2/ `8**empty**");
                }
                else {
                  FUN_0042de40(*(void **)((int)this + 0x24),"`2 C%02d: `0%s `2/ `!%s");
                }
                if (*(int *)(iVar4 + 0x54 + piVar2[3]) != 0) {
                  pcVar8 = "`2 A%02d: `0%s";
                  goto LAB_0054a422;
                }
              }
              else {
                if (iVar1 == 0) {
                  FUN_0042de40(*(void **)((int)this + 0x24),"`2 C%02d: `0%s `2/ `8**empty**");
                }
                else {
                  FUN_0042de40(*(void **)((int)this + 0x24),"`2 C%02d: `0%s `2/ `!%s");
                }
                if (*(int *)(iVar4 + 0x54 + piVar2[3]) != 0) {
                  pcVar8 = "`2 A%02d: `0%s`2";
LAB_0054a422:
                  FUN_0042de40(*(void **)((int)this + 0x24),pcVar8);
                }
              }
              iVar4 = iVar4 + 4;
              piVar5 = (int *)piVar2[3];
              bVar7 = uVar6 < (uint)(*(int *)(*piVar5 + 0x54) - *(int *)(*piVar5 + 0x50) >> 2);
              uVar6 = uVar6 + 1;
            } while (bVar7);
          }
        }
      }
    }
  }
  else {
    pvVar9 = (void *)(in_stack_ffffffc4 & 0xffffff00);
    FUN_00402690(&stack0xffffffc4,"`3MODULE`2 [module number]: show details about a ship module",
                 0x3c);
    FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar9);
  }
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0054a4f0(int param_1)

{
  void *pvVar1;
  uint in_stack_ffffffa8;
  undefined4 *puVar2;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = (void *)(in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
  FUN_0042ddb0(*(void **)(param_1 + 0x24),pvVar1);
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`%SysTerm 1.0.8 `7(c) by Purchase Tech",0x26);
  FUN_0042ddb0(*(void **)(param_1 + 0x24),pvVar1);
  puVar2 = (undefined4 *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`0Valid commands:",0x11);
  FUN_0042ddb0(*(void **)(param_1 + 0x24),puVar2);
  local_14 = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 6 != 0) {
    do {
      FUN_00591e00((undefined1 *)local_30,&DAT_005e7500);
      pvVar1 = *(void **)(param_1 + 0x24);
      local_8 = 0;
      FUN_004024e0(&stack0xffffffa8,local_30);
      FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pvVar1 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar1 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) goto LAB_0054a6b2;
        FUN_005adb3f(pvVar1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_00402690(local_30,"`3HELP",6);
  pvVar1 = *(void **)(param_1 + 0x24);
  local_8 = 1;
  FUN_004024e0(&stack0xffffffa8,local_30);
  FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
  if (0xf < local_1c) {
    pvVar1 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar1 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) {
LAB_0054a6b2:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0054a6e0(void *this,char param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  void *in_stack_ffffffcc;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c67e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar2 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar2 == iVar2) goto LAB_0054a7a3;
    pcVar3 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pcVar3 = *(char **)param_2;
    }
    uVar1 = atoi(pcVar3);
    if (uVar1 < 0x168) {
      DAT_0065b3e0 = (double)(int)uVar1;
      iVar2 = DAT_0065b3d4;
      if (DAT_0065b3d4 == 0) {
        iVar2 = *(int *)(DAT_0065b5cc + 0xd0);
      }
      FUN_004df6f0(iVar2);
      FUN_00591e00(&stack0xffffffcc,"`3ROT`2: rotating to %d^");
      goto LAB_0054a7c5;
    }
    uVar1 = 0x19;
    pcVar3 = "`@Error: `2 invalid angle";
  }
  else {
LAB_0054a7a3:
    uVar1 = 0x26;
    pcVar3 = "`3ROT`2 [angle]: rotate ship using RCS";
  }
  in_stack_ffffffcc = (void *)((uint)in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,pcVar3,uVar1);
LAB_0054a7c5:
  FUN_0042ddb0(*(void **)((int)this + 0x24),in_stack_ffffffcc);
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0054a7f0(void *this,char param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint in_stack_ffffffc8;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pbVar1 = param_2;
  puStack_c = &LAB_005c6b08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar3 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar3 != iVar3) {
      pbVar4 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar4 = *(byte **)param_2;
      }
      uVar2 = FUN_004031f0(pbVar4,*(uint *)(param_2 + 0x10),&DAT_00621a40,2);
      if ((char)uVar2 != '\0') {
        iVar3 = DAT_0065b3d4;
        if (DAT_0065b3d4 == 0) {
          iVar3 = *(int *)(DAT_0065b5cc + 0xd0);
        }
        FUN_004de650(iVar3);
        goto LAB_0054a8fd;
      }
      pbVar4 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar4 = *(byte **)pbVar1;
      }
      uVar2 = FUN_004031f0(pbVar4,*(uint *)(pbVar1 + 0x10),&DAT_00621a0c,3);
      if ((char)uVar2 != '\0') {
        iVar3 = DAT_0065b3d4;
        if (DAT_0065b3d4 == 0) {
          iVar3 = *(int *)(DAT_0065b5cc + 0xd0);
        }
        FUN_004de7e0(iVar3);
        goto LAB_0054a8fd;
      }
    }
  }
  pvVar5 = (void *)(in_stack_ffffffc8 & 0xffffff00);
  FUN_00402690(&stack0xffffffc8,"`3BURN`2 [on/off]: enable or disable main drive",0x2f);
  FUN_0042ddb0(*(void **)((int)this + 0x24),pvVar5);
LAB_0054a8fd:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0054a920(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = *(undefined1 *)(param_1 + 1);
  local_33 = *(undefined1 *)((int)param_1 + 5);
  local_30 = param_1[2];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054a9c0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = param_1[1];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


TypeDescriptor * FUN_0054aa50(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_0054aa60(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


TypeDescriptor * FUN_0054aa90(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_0054aaa0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


TypeDescriptor * FUN_0054aac0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_0054aad0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


undefined4 * __thiscall FUN_0054ab00(void *this,byte param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c55f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = Screen_TradeTerminal::vftable;
  if (*(Ref **)((int)this + 0x1c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    FUN_0053cfb0(*(void **)((int)this + 0x24));
  }
  FUN_004025a0((int *)((int)this + 0x34));
  piVar1 = *(int **)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)((int)this + 0x2c);
    if (piVar1 != piVar2) {
      do {
        FUN_0053d810(piVar1);
        piVar1 = piVar1 + 0x10;
      } while (piVar1 != piVar2);
      piVar1 = *(int **)((int)this + 0x28);
    }
    piVar2 = piVar1;
    if ((0xfff < (*(int *)((int)this + 0x30) - (int)piVar1 & 0xffffffc0U)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_0054ac00(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_fffffdb4;
  undefined **ppuStack_234;
  code *pcStack_230;
  undefined4 uStack_22c;
  uint in_stack_fffffdec;
  byte *pbVar6;
  code *local_1ec;
  code *local_1e8;
  undefined4 *local_1e4;
  void *local_1e0;
  undefined4 local_1dc [4];
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_54 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6c2f;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0x2a;
  *(undefined4 *)(param_1 + 0x18) = 0x18;
  FUN_0043d780((int)local_1dc);
  local_8 = 0;
  local_1cc = *(undefined4 *)(param_1 + 0x14);
  local_1c8 = *(undefined4 *)(param_1 + 0x18);
  pvVar1 = (void *)FUN_005adb0f(0x15c00);
  local_8._0_1_ = 1;
  pbVar6 = (byte *)(in_stack_fffffdec & 0xffffff00);
  local_1e0 = pvVar1;
  FUN_00402690(&stack0xfffffdec,&PTR_005ce008,0);
  uStack_22c = 0x54acb6;
  piVar2 = (int *)FUN_0055f500(pvVar1,*(int *)(param_1 + 0xc),local_1dc,
                               *(int *)(param_1 + 0xc) + 0x70,*(int *)(param_1 + 0x14),
                               *(int *)(param_1 + 0x18),pbVar6);
  local_8._0_1_ = 0;
  *(int **)(param_1 + 0x1c) = piVar2;
  FUN_0055fcc0(piVar2);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (undefined4 *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(param_1 + 0x1c));
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))();
  local_1e0 = *(void **)(iVar3 + 4);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))();
  FUN_00591070("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)(param_1 + 0xc);
  local_1e0 = *(void **)(param_1 + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 0x194);
  if (*(undefined4 **)(iVar3 + 0x198) == puVar4) {
    FUN_00414080((void *)(iVar3 + 400),puVar4,&local_1e0);
  }
  else {
    *puVar4 = local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = (undefined4 *)FUN_005adb0f(0xa8);
  puVar4 = FUN_0042b260(local_1e4);
  *(undefined4 **)(param_1 + 0x24) = puVar4;
  local_1ec = FUN_0054b460;
  local_1e4 = (undefined4 *)param_1;
  FUN_0054dcf0(puVar4 + 6,&local_1ec);
  local_1e8 = FUN_0054ba30;
  local_1e4 = (undefined4 *)param_1;
  FUN_0054dd90((void *)(*(int *)(param_1 + 0x24) + 0x68),&local_1e8);
  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0xd) = 1;
  local_1e4 = (undefined4 *)FUN_005adb0f(0x150);
  local_8._0_1_ = 3;
  puVar4 = FUN_0042bc30(local_1e4,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x34,
                        *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                        param_1 + 0x34);
  local_8._0_1_ = 0;
  *(undefined4 **)(param_1 + 0x20) = puVar4;
  FUN_0054b910(param_1);
  FUN_0054ba50(param_1);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054bbd0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 4;
  pvVar1 = (void *)(in_stack_fffffdb4 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_006204f4,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar5,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054c300;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 6;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00620518,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,7);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054cc40;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 8;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"CONFIRM",7);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,9);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054cd20;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"CANCEL",6);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054c890;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xc;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00621c54,3);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054d440;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0xe;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"CARGO",5);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054d210;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00621c38,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054cdb0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x12;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_0060e210,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x13);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054d740;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x14;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,"PASSENGERS",10);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x15);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_0054d890;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 0x16;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00620510,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0x17);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0053d810(local_54);
  FUN_0054ba50(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  FUN_00465e40((int)local_1dc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0054b460(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 *in_stack_ffffff84;
  void *local_50 [3];
  int local_44 [3];
  byte *local_38;
  void *local_34;
  undefined1 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c57c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_34 = this;
  FUN_004024e0(local_2c,&param_1);
  local_8._0_1_ = 2;
  uVar11 = 0;
  iVar9 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar9 != iVar9) {
    iVar9 = 0;
    do {
      FUN_00403640(local_2c,&DAT_005e7468,1);
      pbVar2 = in_stack_0000001c + iVar9;
      pbVar10 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar10 = *(byte **)pbVar2;
      }
      FUN_00403640(local_2c,pbVar10,*(uint *)(pbVar2 + 0x10));
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar11 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x20);
  local_8._0_1_ = 3;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8._0_1_ = 2;
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  FUN_0042de40(*(void **)((int)this + 0x20),"`!TRD>`2 %s");
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x20);
  local_8._0_1_ = 4;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  uVar11 = 0;
  iVar9 = *(int *)((int)this + 0x2c);
  pbVar10 = *(byte **)((int)local_34 + 0x28);
  local_38 = pbVar10;
  if (iVar9 - (int)pbVar10 >> 6 != 0) {
    do {
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)param_1;
      }
      pbVar2 = pbVar10;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar2 = *(byte **)pbVar10;
      }
      uVar4 = FUN_004031f0(pbVar2,*(uint *)(pbVar10 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        FUN_0042b900(local_44,(int *)&stack0x0000001c);
        local_30 = 0;
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x28) + 0x3c);
        if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar7 + 8))();
        FUN_004025a0(local_44);
        goto LAB_0054b7ba;
      }
      uVar11 = uVar11 + 1;
      pbVar10 = pbVar10 + 0x40;
      iVar9 = *(int *)((int)local_34 + 0x2c);
    } while (uVar11 < (uint)(iVar9 - (int)local_38 >> 6));
  }
  pvVar8 = local_34;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  uVar11 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_00620618,4);
  pbVar10 = local_38;
  if ((char)uVar11 == '\0') {
    local_44[1] = 0;
    local_44[2] = 0xf;
    local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
    FUN_00402690(local_50,"Unknown command.",0x10);
    pvVar8 = *(void **)((int)pvVar8 + 0x20);
    local_8._0_1_ = 7;
    FUN_004024e0(&stack0xffffff84,local_50);
    FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < (uint)local_44[2]) {
      pvVar8 = local_50[0];
      if ((0xfff < local_44[2] + 1U) &&
         (pvVar8 = *(void **)((int)local_50[0] + -4),
         0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
LAB_0054b87b:
    piVar7 = *(int **)((int)local_34 + 0x20);
  }
  else {
    iVar1 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar1 == iVar1) {
      FUN_0054dac0((int)pvVar8);
      piVar7 = *(int **)((int)local_34 + 0x20);
    }
    else {
      uVar11 = 0;
      if (iVar9 - (int)local_38 >> 6 == 0) goto LAB_0054b87b;
      uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      pbVar2 = local_38;
      do {
        pbVar6 = in_stack_0000001c;
        if (0xf < *(uint *)(in_stack_0000001c + 0x14)) {
          pbVar6 = *(byte **)in_stack_0000001c;
        }
        pbVar5 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          pbVar5 = *(byte **)pbVar2;
        }
        uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),pbVar6,uVar4);
        if ((char)uVar4 != '\0') {
          FUN_0042b900(local_44,(int *)&stack0x0000001c);
          pvVar8 = local_34;
          local_30 = 1;
          local_8._0_1_ = 6;
          piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x28) + 0x3c);
          if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar7 + 8))();
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004025a0(local_44);
          piVar7 = *(int **)((int)pvVar8 + 0x20);
          goto LAB_0054b7b5;
        }
        uVar11 = uVar11 + 1;
        pbVar2 = pbVar2 + 0x40;
        uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      } while (uVar11 < (uint)(*(int *)((int)local_34 + 0x2c) - (int)pbVar10 >> 6));
      piVar7 = *(int **)((int)local_34 + 0x20);
    }
  }
LAB_0054b7b5:
  FUN_0042d280(piVar7);
LAB_0054b7ba:
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0054b7ec;
    FUN_005adb3f(pvVar8);
  }
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  if (0xf < in_stack_00000018) {
    pbVar10 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar10 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar10))) {
LAB_0054b7ec:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  FUN_004025a0((int *)&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0054b910(int param_1)

{
  int iVar1;
  uint uVar2;
  uint in_stack_ffffffd0;
  void *pvVar3;
  
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1)) {
    FUN_0042de40(*(void **)(param_1 + 0x20),"`7Welcome to `$%s");
    pvVar3 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0," `!** Trading Terminal",0x16);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar3);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
    FUN_004024e0(&stack0xffffffd0,(undefined4 *)(*(int *)(iVar1 + 0x398) + 0x18));
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar3);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
    uVar2 = *(int *)(iVar1 + 0x40c) - *(int *)(iVar1 + 0x408) >> 2;
    if (1 < uVar2) {
      FUN_0042de40(*(void **)(param_1 + 0x20),"`$%d passengers are looking for transport here.");
      FUN_0042dcd0(*(int *)(param_1 + 0x20));
      return;
    }
    if (uVar2 == 1) {
      pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
      FUN_00402690(&stack0xffffffd0,"`$A passenger is looking for transport here.",0x2c);
      FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar3);
    }
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
  }
  return;
}


void __fastcall FUN_0054ba30(int param_1)

{
  FUN_0054ba50(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  return;
}


void __fastcall FUN_0054ba50(int param_1)

{
  undefined4 ****ppppuVar1;
  undefined4 ****ppppuVar2;
  void *pvVar3;
  int iVar4;
  Color3B local_47 [3];
  void *local_44 [4];
  int local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5800;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00591e00((undefined1 *)local_44,"TRD> `%%%s%c");
  local_8 = 0;
  ppppuVar2 = local_2c;
  FUN_00591e00((undefined1 *)ppppuVar2,"`$%dc ");
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = ((*(int *)(*(int *)(param_1 + 0x20) + 0x20) - local_1c) - local_34) + -6;
  if (0 < iVar4) {
    do {
      FUN_00403640(local_44,&DAT_005e7468,1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ppppuVar1 = local_2c;
  if (0xf < local_18) {
    ppppuVar1 = (undefined4 ****)local_2c[0];
  }
  FUN_00403640(local_44,ppppuVar1,local_1c);
  cocos2d::Color3B::Color3B(local_47,'\0','\0',0xff);
  FUN_004024e0(&stack0xffffff8c,local_44);
  FUN_0042dec0(*(void **)(param_1 + 0x20),(byte *)ppppuVar2);
  if (0xf < local_18) {
    ppppuVar2 = (undefined4 ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppuVar2 = (undefined4 ****)local_2c[0][-1],
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar2);
  }
  if (0xf < local_30) {
    pvVar3 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar3 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Type propagation algorithm not settling

void __thiscall FUN_0054bbd0(void *this,char param_1,byte *param_2,int param_3)

{
  byte *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *******pppppppbVar6;
  byte *pbVar7;
  void *pvVar8;
  uint uVar9;
  int *piVar10;
  uint in_stack_ffffff60;
  byte *******pppppppbVar11;
  uint local_70;
  int local_68;
  char local_61;
  byte *local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  byte *******local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c6c88;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != '\0') {
    pvVar8 = (void *)(in_stack_ffffff60 & 0xffffff00);
    FUN_00402690(&stack0xffffff60,
                 "`3LIST [buy|sell]`2: list all tradeable items either to buy or for sale",0x47);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
    goto LAB_0054c2da;
  }
  iVar3 = param_3 - (int)param_2 >> 0x1f;
  if ((param_3 - (int)param_2) / 0x18 + iVar3 != iVar3) {
    uVar1 = *(uint *)(param_2 + 0x14);
    this_00 = *(byte **)(DAT_0065b3d4 + 0x398);
    pbVar4 = param_2;
    if (0xf < uVar1) {
      pbVar4 = *(byte **)param_2;
    }
    local_60 = param_2;
    if (0xf < uVar1) {
      local_60 = *(byte **)param_2;
    }
    pbVar7 = param_2;
    if (0xf < uVar1) {
      pbVar7 = *(byte **)param_2;
    }
    FUN_00413ec0(&local_68,tolower_exref,(char *)pbVar7,
                 (char *)(local_60 + *(int *)(param_2 + 0x10)),pbVar4);
    pbVar7 = param_2;
    pbVar4 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar4 = *(byte **)param_2;
    }
    uVar1 = FUN_004031f0(pbVar4,*(uint *)(param_2 + 0x10),&DAT_00621ba8,4);
    if ((char)uVar1 != '\0') {
      pvVar8 = (void *)(in_stack_ffffff60 & 0xffffff00);
      FUN_00402690(&stack0xffffff60,"`7Wanted to buy (base rate):",0x1c);
      FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
      iVar3 = *(int *)(this_00 + 0x70);
      local_60 = (byte *)0x0;
      if (*(int *)(this_00 + 0x74) - iVar3 >> 2 != 0) {
        do {
          uVar1 = 0;
          puVar5 = *(undefined4 **)(DAT_0065b5cc + 0x84);
          uVar9 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar5 >> 2;
          if (uVar9 != 0) {
            do {
              piVar10 = (int *)*puVar5;
              if (*piVar10 == *(int *)(*(int *)(iVar3 + (int)local_60 * 4) + 0x14))
              goto LAB_0054bd55;
              uVar1 = uVar1 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar1 < uVar9);
          }
          piVar10 = (int *)0x0;
LAB_0054bd55:
          iVar3 = (int)local_60 * 4;
          iVar2 = FUN_0049d160(this_00,*(int *)(*(int *)(*(int *)(this_00 + 0x70) + iVar3) + 0x14),
                               '\x01');
          iVar3 = *(int *)(*(int *)(*(int *)(this_00 + 0x70) + iVar3) + 0x14);
          local_68 = FUN_0049d160(this_00,iVar3,'\x01');
          uVar9 = 0;
          puVar5 = *(undefined4 **)(DAT_0065b5cc + 0x84);
          uVar1 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar5 >> 2;
          if (uVar1 != 0) {
            do {
              if (*(int *)*puVar5 == iVar3) break;
              uVar9 = uVar9 + 1;
              puVar5 = puVar5 + 1;
            } while (uVar9 < uVar1);
          }
          if (iVar2 == 0) {
            FUN_00591070("DETAIL","ignoring %s as cost is null");
          }
          else {
            FUN_004024e0(local_2c,(undefined4 *)piVar10[7]);
            local_8._0_1_ = 1;
            FUN_0042de40(*(void **)((int)this + 0x20),"  `7[`8%s`7] `7%s @ `%c%dc");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pppppppbVar11 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pppppppbVar11 = (byte *******)local_2c[0][-1],
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppbVar11)))) goto LAB_0054beae;
              FUN_005adb3f(pppppppbVar11);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (byte *******)((uint)local_2c[0] & 0xffffff00);
          }
          iVar3 = *(int *)(this_00 + 0x70);
          local_60 = local_60 + 1;
        } while (local_60 < (byte *)(*(int *)(this_00 + 0x74) - iVar3 >> 2));
      }
      goto LAB_0054c2da;
    }
    pbVar4 = pbVar7;
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar4 = *(byte **)pbVar7;
    }
    uVar1 = FUN_004031f0(pbVar4,*(uint *)(pbVar7 + 0x10),&DAT_00621b20,3);
    if ((char)uVar1 != '\0') {
      pppppppbVar11 = (byte *******)(in_stack_ffffff60 & 0xffffff00);
      FUN_00402690(&stack0xffffff60,"`7For sale:",0xb);
      FUN_0042ddb0(*(void **)((int)this + 0x20),pppppppbVar11);
      iVar3 = *(int *)(this_00 + 0x70);
      local_70 = 0;
      if (*(int *)(this_00 + 0x74) - iVar3 >> 2 != 0) {
        do {
          iVar3 = *(int *)(iVar3 + local_70 * 4);
          if ((*(int *)(iVar3 + 4) != 0) || (*(int *)(iVar3 + 0xc) != 0)) {
            iVar3 = *(int *)(iVar3 + 0x14);
            piVar10 = FUN_004a84a0(iVar3);
            local_60 = (byte *)FUN_0049d160(this_00,iVar3,'\0');
            iVar3 = *(int *)(*(int *)(*(int *)(this_00 + 0x70) + local_70 * 4) + 0x14);
            local_68 = FUN_0049d160(this_00,iVar3,'\0');
            uVar9 = 0;
            puVar5 = *(undefined4 **)(DAT_0065b5cc + 0x84);
            uVar1 = *(int *)(DAT_0065b5cc + 0x88) - (int)puVar5 >> 2;
            if (uVar1 != 0) {
              do {
                if (*(int *)*puVar5 == iVar3) break;
                uVar9 = uVar9 + 1;
                puVar5 = puVar5 + 1;
              } while (uVar9 < uVar1);
            }
            FUN_004024e0(local_2c,(undefined4 *)piVar10[7]);
            local_8._0_1_ = 2;
            pppppppbVar11 = (byte *******)local_2c;
            if (0xf < local_18) {
              pppppppbVar11 = local_2c[0];
            }
            FUN_0042de40(*(void **)((int)this + 0x20),"  `7[`8%s`7] %s x`%c%d `7@ `%c%dc");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pppppppbVar6 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pppppppbVar6 = (byte *******)local_2c[0][-1],
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppbVar6)))) goto LAB_0054beae;
              FUN_005adb3f(pppppppbVar6);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (byte *******)((uint)local_2c[0] & 0xffffff00);
          }
          local_70 = local_70 + 1;
          iVar3 = *(int *)(this_00 + 0x70);
        } while (local_70 < (uint)(*(int *)(this_00 + 0x74) - iVar3 >> 2));
      }
      piVar10 = (int *)(DAT_0065b5cc + 0x13c);
      iVar3 = *(int *)(DAT_0065b5cc + 0x140) - *piVar10 >> 2;
      if (iVar3 != 0) {
        local_61 = '\0';
        local_60 = (byte *)0x0;
        if (iVar3 != 0) {
          do {
            iVar3 = *(int *)(*piVar10 + (int)local_60 * 4);
            pbVar4 = this_00;
            if (0xf < *(uint *)(this_00 + 0x14)) {
              pbVar4 = *(byte **)this_00;
            }
            pbVar7 = (byte *)(iVar3 + 0x38);
            if (0xf < *(uint *)(iVar3 + 0x4c)) {
              pbVar7 = *(byte **)(iVar3 + 0x38);
            }
            uVar1 = FUN_004031f0(pbVar7,*(uint *)(iVar3 + 0x48),pbVar4,*(uint *)(this_00 + 0x10));
            if ((char)uVar1 != '\0') {
              FUN_004024e0(&stack0xffffff60,*(undefined4 **)(iVar3 + 0x58));
              iVar3 = FUN_004a8380((byte *)pppppppbVar11);
              if (local_61 == '\0') {
                FUN_0042dcd0(*(int *)((int)this + 0x20));
                pvVar8 = (void *)((uint)pppppppbVar11 & 0xffffff00);
                FUN_00402690(&stack0xffffff60," `%Contract pick-ups here:",0x1a);
                FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
                local_61 = '\x01';
              }
              iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0x13c) + (int)local_60 * 4)
                                       + 0x58) + 0x28);
              if (iVar2 == -1) {
                iVar2 = *(int *)(iVar3 + 0x58);
              }
              if (iVar2 == 0) {
                FUN_004024e0(local_5c,*(undefined4 **)(iVar3 + 0x1c));
                local_8._0_1_ = 4;
                pppppppbVar11 = (byte *******)0x54c245;
                FUN_0042de40(*(void **)((int)this + 0x20),"  `7[`8%s`7] %s x`0%d");
                local_8 = (uint)local_8._1_3_ << 8;
                if (0xf < local_48) {
                  pvVar8 = local_5c[0];
                  if ((0xfff < local_48 + 1) &&
                     (pvVar8 = *(void **)((int)local_5c[0] + -4),
                     0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) {
LAB_0054beae:
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_005adb3f(pvVar8);
                }
                local_4c = 0;
                local_48 = 0xf;
                local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
              }
              else {
                FUN_004024e0(local_44,*(undefined4 **)(iVar3 + 0x1c));
                local_8._0_1_ = 3;
                pppppppbVar11 = *(byte ********)((int)this + 0x20);
                FUN_0042de40(pppppppbVar11,"  `7[`8%s`7] %s x`0%d `7@ `0%dc");
                local_8 = (uint)local_8._1_3_ << 8;
                if (0xf < local_30) {
                  pvVar8 = local_44[0];
                  if ((0xfff < local_30 + 1) &&
                     (pvVar8 = *(void **)((int)local_44[0] + -4),
                     0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8)))) goto LAB_0054beae;
                  FUN_005adb3f(pvVar8);
                }
                local_34 = 0;
                local_30 = 0xf;
                local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
              }
            }
            piVar10 = (int *)(DAT_0065b5cc + 0x13c);
            local_60 = local_60 + 1;
          } while (local_60 < (byte *)(*(int *)(DAT_0065b5cc + 0x140) - *piVar10 >> 2));
        }
      }
      goto LAB_0054c2da;
    }
  }
  FUN_0054bbd0(this,'\x01',(byte *)0x0,0);
LAB_0054c2da:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
