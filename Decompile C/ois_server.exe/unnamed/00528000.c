#include "../ois_server.exe.h"


undefined4 __cdecl FUN_00529360(int *param_1)

{
  int *piVar1;
  
  piVar1 = DAT_0065b444;
  if ((DAT_0065b444[0x1d] != -1) && (piVar1 = param_1, DAT_0065b444[0x1d] == *param_1)) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return (uint)piVar1 & 0xffffff00;
}


void __cdecl FUN_00529380(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  void *this;
  int iVar4;
  void *in_stack_ffffff80;
  undefined1 local_68 [12];
  undefined4 uStack_5c;
  undefined4 local_50 [3];
  undefined4 uStack_44;
  undefined4 *local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c3e0d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0052a290(param_1);
  iVar4 = 0;
  do {
    FUN_004127d0();
    cVar2 = FUN_004b7390();
    if (cVar2 == '\0') {
      this = (void *)FUN_005adb0f(0x68);
      local_8 = 6;
      local_50[0]._0_1_ = 0;
      uStack_5c = 0x529521;
      FUN_00402690(local_50,&PTR_005ce008,0);
      local_8._0_1_ = 7;
      FUN_00591e00(local_68,"selectsaveslot=%d");
      local_8._0_1_ = 8;
      in_stack_ffffff80 = (void *)((uint)in_stack_ffffff80 & 0xffffff00);
      FUN_00402690(&stack0xffffff80,"[no save]",9);
      local_8 = CONCAT31(local_8._1_3_,6);
    }
    else {
      iVar3 = iVar4;
      FUN_004127d0();
      iVar3 = FUN_004b7d60(iVar3);
      this = (void *)FUN_005adb0f(0x68);
      if (iVar3 == 0) {
        local_8 = 3;
        local_50[0]._0_1_ = 0;
        uStack_5c = 0x529494;
        FUN_00402690(local_50,&PTR_005ce008,0);
        local_8._0_1_ = 4;
        local_68[0] = 0;
        FUN_00402690(local_68,&PTR_005ce008,0);
        local_8._0_1_ = 5;
        in_stack_ffffff80 = (void *)((uint)in_stack_ffffff80 & 0xffffff00);
        FUN_00402690(&stack0xffffff80,"Error: bad save file",0x14);
        local_8 = CONCAT31(local_8._1_3_,3);
      }
      else {
        local_18 = local_50;
        local_8 = 0;
        local_50[0]._0_1_ = 0;
        uStack_5c = 0x52941c;
        local_14 = this;
        FUN_00402690(local_50,&PTR_005ce008,0);
        local_8._0_1_ = 1;
        FUN_00591e00(local_68,"selectsaveslot=%d");
        local_8._0_1_ = 2;
        FUN_00591e00(&stack0xffffff80,&DAT_005ce00c);
        local_8 = (uint)local_8._1_3_ << 8;
        this = local_14;
      }
    }
    local_18 = FUN_00529b80(this,iVar4,in_stack_ffffff80);
    local_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(param_1 + 800);
    if (*(undefined4 **)(param_1 + 0x324) == puVar1) {
      uStack_44 = 0x529591;
      FUN_004141e0((void *)(param_1 + 0x31c),puVar1,&local_18);
    }
    else {
      *puVar1 = local_18;
      *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  ExceptionList = local_10;
  return;
}


void __cdecl FUN_005295b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *this;
  undefined4 uVar4;
  uint in_stack_ffffff90;
  void *pvVar5;
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  undefined1 local_40 [12];
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c3e8d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = param_1 + 199;
  param_1[200] = *this;
  iVar2 = FUN_00402370();
  if (*(int *)(iVar2 + 0x20) == 0) {
    puVar3 = (undefined4 *)FUN_005adb0f(0x68);
    local_8 = 6;
    local_40[0] = 0;
    uStack_4c = 0x529776;
    param_1 = puVar3;
    FUN_00402690(local_40,&PTR_005ce008,0);
    local_8._0_1_ = 7;
    local_58[0] = 0;
    FUN_00402690(local_58,"menu=11",7);
    local_8._0_1_ = 8;
    pvVar5 = (void *)(in_stack_ffffff90 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"Manual Connection",0x11);
    uVar4 = 1;
    local_8 = CONCAT31(local_8._1_3_,6);
  }
  else {
    puVar3 = (undefined4 *)FUN_005adb0f(0x68);
    local_8 = 0;
    local_40[0] = 0;
    uStack_4c = 0x52962c;
    param_1 = puVar3;
    FUN_00402690(local_40,&PTR_005ce008,0);
    local_8._0_1_ = 1;
    local_58[0] = 0;
    FUN_00402690(local_58,"menu=12",7);
    local_8._0_1_ = 2;
    pvVar5 = (void *)(in_stack_ffffff90 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,&DAT_0061ea00,4);
    local_8 = (uint)local_8._1_3_ << 8;
    param_1 = FUN_00529b80(puVar3,2,pvVar5);
    local_8 = 0xffffffff;
    puVar3 = (undefined4 *)puVar1[200];
    if ((undefined4 *)puVar1[0xc9] == puVar3) {
      uStack_34 = 0x5296ae;
      FUN_004141e0(this,puVar3,&param_1);
    }
    else {
      *puVar3 = param_1;
      puVar1[200] = puVar1[200] + 4;
    }
    puVar3 = (undefined4 *)FUN_005adb0f(0x68);
    local_8 = 3;
    local_40[0] = 0;
    uStack_4c = 0x5296e6;
    param_1 = puVar3;
    FUN_00402690(local_40,&PTR_005ce008,0);
    local_8._0_1_ = 4;
    local_58[0] = 0;
    FUN_00402690(local_58,"menu=13",7);
    local_8._0_1_ = 5;
    pvVar5 = (void *)((uint)pvVar5 & 0xffffff00);
    FUN_00402690(&stack0xffffff90,"Options",7);
    uVar4 = 3;
    local_8 = CONCAT31(local_8._1_3_,3);
  }
  param_1 = FUN_00529b80(puVar3,uVar4,pvVar5);
  local_8 = 0xffffffff;
  puVar3 = (undefined4 *)puVar1[200];
  if ((undefined4 *)puVar1[0xc9] != puVar3) {
    *puVar3 = param_1;
    puVar1[200] = puVar1[200] + 4;
    ExceptionList = local_10;
    return;
  }
  uStack_34 = 0x529807;
  FUN_004141e0(this,puVar3,&param_1);
  ExceptionList = local_10;
  return;
}


void __cdecl FUN_00529820(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *this;
  int *this_00;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  void *in_stack_ffffff80;
  undefined1 auStack_68 [12];
  undefined4 uStack_5c;
  undefined1 local_50 [12];
  undefined4 uStack_44;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c3ecf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (int *)(param_1 + 0x31c);
  local_14 = 0;
  iVar8 = 0;
  *(int *)(param_1 + 800) = *this_00;
  do {
    if ((iVar8 != 7) && (iVar8 != 0)) {
      pcVar7 = (char *)0x0;
      piVar9 = *(int **)(DAT_0065b5cc + 0x60);
      local_18 = (char *)((uint)((int)*(int **)(DAT_0065b5cc + 100) + (3 - (int)piVar9)) >> 2);
      if (*(int **)(DAT_0065b5cc + 100) < piVar9) {
        local_18 = (char *)0x0;
      }
      iVar4 = 0;
      if (local_18 != (char *)0x0) {
        do {
          iVar2 = *piVar9;
          piVar9 = piVar9 + 1;
          iVar5 = iVar4 + 1;
          if (*(int *)(iVar2 + 0x68) != iVar8) {
            iVar5 = iVar4;
          }
          pcVar7 = pcVar7 + 1;
          iVar4 = iVar5;
        } while (pcVar7 != local_18);
        if (iVar5 != 0) {
          this = (void *)FUN_005adb0f(0x68);
          local_8 = 0;
          local_50[0] = 0;
          uStack_5c = 0x5298f6;
          FUN_00402690(local_50,&PTR_005ce008,0);
          local_8._0_1_ = 1;
          FUN_00591e00(auStack_68,"menu=%d");
          local_8._0_1_ = 2;
          pcVar7 = (&PTR_s_Testing_005dfc04)[iVar8];
          local_18 = pcVar7 + 1;
          in_stack_ffffff80 = (void *)((uint)in_stack_ffffff80 & 0xffffff00);
          pcVar6 = pcVar7;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00402690(&stack0xffffff80,pcVar7,(int)pcVar6 - (int)local_18);
          iVar4 = local_14;
          local_8 = (uint)local_8._1_3_ << 8;
          local_18 = (char *)FUN_00529b80(this,local_14,in_stack_ffffff80);
          local_14 = iVar4 + 1;
          local_8 = 0xffffffff;
          local_18[100] = '\x01';
          puVar3 = *(undefined4 **)(param_1 + 800);
          if (*(undefined4 **)(param_1 + 0x324) == puVar3) {
            uStack_44 = 0x529991;
            FUN_004141e0(this_00,puVar3,&local_18);
          }
          else {
            *puVar3 = local_18;
            *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 4;
          }
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  iVar8 = *(int *)(param_1 + 800) - *this_00 >> 2;
  if (iVar8 != 0) {
    *(undefined1 *)(*(int *)(*this_00 + -4 + iVar8 * 4) + 100) = 1;
  }
  ExceptionList = local_10;
  return;
}


void __cdecl FUN_005299d0(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(DAT_0065b5cc + 0xb4);
  if (0xf < *(uint *)(DAT_0065b5cc + 200)) {
    pbVar2 = *(byte **)(DAT_0065b5cc + 0xb4);
  }
  pbVar1 = (byte *)(param_1 + 0x4c);
  if (0xf < *(uint *)(param_1 + 0x60)) {
    pbVar1 = *(byte **)(param_1 + 0x4c);
  }
  FUN_004031f0(pbVar1,*(uint *)(param_1 + 0x5c),pbVar2,*(uint *)(DAT_0065b5cc + 0xc4));
  return;
}


void FUN_00529a20(void)

{
  undefined4 *puVar1;
  
  if (DAT_0065c300 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x10);
    DAT_0065c300 = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  return;
}


void __thiscall FUN_00529a60(void *this,int param_1)

{
  uint uVar1;
  undefined **local_40;
  int local_3c;
  undefined ***local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c3ef0;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = (undefined ***)0x0;
  if (param_1 != 0) {
    local_3c = param_1;
    local_1c = &local_40;
    local_40 = std::_Func_impl_no_alloc<>::vftable;
  }
  local_18 = uVar1;
  FUN_0042e080(&local_40,this);
  local_8 = 0;
  if (local_1c != (undefined ***)0x0) {
    (*(code *)(*local_1c)[4])(local_1c != &local_40,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


TypeDescriptor * FUN_00529b00(void)

{
  return &.P6A_NPAX@Z::RTTI_Type_Descriptor;
}


void __thiscall FUN_00529b10(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}


TypeDescriptor * FUN_00529b30(void)

{
  return &.P6AXPAVMenu@@@Z::RTTI_Type_Descriptor;
}


void __thiscall FUN_00529b40(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}


void __thiscall FUN_00529b60(void *this,undefined4 *param_1)

{
  (**(code **)((int)this + 4))(*param_1);
  return;
}


undefined4 * __thiscall FUN_00529b80(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  undefined4 uStack00000030;
  uint in_stack_00000034;
  void *in_stack_00000038;
  uint in_stack_0000004c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c3f4e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  *(undefined4 *)this = param_1;
  FUN_004024e0((void *)((int)this + 4),&param_2);
  local_8._0_1_ = 3;
  FUN_004024e0((void *)((int)this + 0x1c),&stack0x00000038);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004024e0((void *)((int)this + 0x34),&stack0x00000020);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0xf;
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 100) = 0;
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
  uStack00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pvVar1 = in_stack_00000020;
    if (0xfff < in_stack_00000034 + 1) {
      pvVar1 = *(void **)((int)in_stack_00000020 + -4);
      if (0x1f < (uint)((int)in_stack_00000020 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000030 = 0;
  in_stack_00000034 = 0xf;
  in_stack_00000020 = (void *)((uint)in_stack_00000020 & 0xffffff00);
  if (0xf < in_stack_0000004c) {
    pvVar1 = in_stack_00000038;
    if (0xfff < in_stack_0000004c + 1) {
      pvVar1 = *(void **)((int)in_stack_00000038 + -4);
      if (0x1f < (uint)((int)in_stack_00000038 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


Node * __thiscall FUN_00529ce0(void *this,undefined4 param_1,void *param_2)

{
  void *pvVar1;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *in_stack_00000024;
  undefined4 uStack00000034;
  uint in_stack_00000038;
  void *in_stack_0000003c;
  uint in_stack_00000050;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c3fd7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  cocos2d::Node::Node(this);
  *(undefined4 *)((int)this + 0x278) = param_1;
  *(undefined ***)this = Menu::vftable;
  *(undefined4 *)((int)this + 0x27c) = in_stack_00000020;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0xf;
  *(undefined1 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0xf;
  *(undefined1 *)((int)this + 0x298) = 0;
  local_8._0_1_ = 5;
  FUN_004024e0((void *)((int)this + 0x2b0),&param_2);
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0xf;
  *(undefined1 *)((int)this + 0x2c8) = 0;
  local_8._0_1_ = 7;
  FUN_004024e0((void *)((int)this + 0x2e0),&stack0x0000003c);
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_004024e0((void *)((int)this + 0x2f8),&stack0x00000024);
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
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
  uStack00000018 = 0;
  in_stack_0000001c = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pvVar1 = in_stack_00000024;
    if (0xfff < in_stack_00000038 + 1) {
      pvVar1 = *(void **)((int)in_stack_00000024 + -4);
      if (0x1f < (uint)((int)in_stack_00000024 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  uStack00000034 = 0;
  in_stack_00000038 = 0xf;
  in_stack_00000024 = (void *)((uint)in_stack_00000024 & 0xffffff00);
  if (0xf < in_stack_00000050) {
    pvVar1 = in_stack_0000003c;
    if (0xfff < in_stack_00000050 + 1) {
      pvVar1 = *(void **)((int)in_stack_0000003c + -4);
      if (0x1f < (uint)((int)in_stack_0000003c + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return this;
}


Node * __thiscall FUN_00529ef0(void *this,byte param_1)

{
  FUN_00529f20(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00529f20(Node *param_1)

{
  void *pvVar1;
  Node *pNVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4000;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = Menu::vftable;
  puVar6 = *(undefined4 **)(param_1 + 0x31c);
  local_14 = 0;
  uVar5 = (uint)((int)*(undefined4 **)(param_1 + 800) + (3 - (int)puVar6)) >> 2;
  if (*(undefined4 **)(param_1 + 800) < puVar6) {
    uVar5 = 0;
  }
  if (uVar5 != 0) {
    do {
      pvVar1 = (void *)*puVar6;
      if (pvVar1 != (void *)0x0) {
        FUN_00439780((int)pvVar1);
        FUN_005adb3f(pvVar1);
      }
      local_14 = local_14 + 1;
      puVar6 = puVar6 + 1;
    } while (local_14 != uVar5);
  }
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x31c);
  local_8 = 0;
  pNVar2 = *(Node **)(param_1 + 0x374);
  if (pNVar2 != (Node *)0x0) {
    (**(code **)(*(int *)pNVar2 + 0x10))(pNVar2 != param_1 + 0x350,uVar3);
    *(undefined4 *)(param_1 + 0x374) = 0;
  }
  local_8 = 1;
  pNVar2 = *(Node **)(param_1 + 0x34c);
  if (pNVar2 != (Node *)0x0) {
    (**(code **)(*(int *)pNVar2 + 0x10))(pNVar2 != param_1 + 0x328);
    *(undefined4 *)(param_1 + 0x34c) = 0;
  }
  pvVar1 = *(void **)(param_1 + 0x31c);
  if (pvVar1 != (void *)0x0) {
    pvVar4 = pvVar1;
    if ((0xfff < (*(int *)(param_1 + 0x324) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))))
    goto LAB_0052a281;
    FUN_005adb3f(pvVar4);
    *(undefined4 *)(param_1 + 0x31c) = 0;
    *(undefined4 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x324) = 0;
  }
  FUN_004025a0((int *)(param_1 + 0x310));
  if (0xf < *(uint *)(param_1 + 0x30c)) {
    pvVar1 = *(void **)(param_1 + 0x2f8);
    pvVar4 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x30c) + 1) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))))
    goto LAB_0052a281;
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0xf;
  param_1[0x2f8] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 0x2f4)) {
    pvVar1 = *(void **)(param_1 + 0x2e0);
    pvVar4 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x2f4) + 1) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))))
    goto LAB_0052a281;
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0xf;
  param_1[0x2e0] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 0x2dc)) {
    pvVar1 = *(void **)(param_1 + 0x2c8);
    pvVar4 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x2dc) + 1) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))))
    goto LAB_0052a281;
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0xf;
  param_1[0x2c8] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 0x2c4)) {
    pvVar1 = *(void **)(param_1 + 0x2b0);
    pvVar4 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x2c4) + 1) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))))
    goto LAB_0052a281;
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0xf;
  param_1[0x2b0] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 0x2ac)) {
    pvVar1 = *(void **)(param_1 + 0x298);
    pvVar4 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x2ac) + 1) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))))
    goto LAB_0052a281;
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0xf;
  param_1[0x298] = (Node)0x0;
  if (0xf < *(uint *)(param_1 + 0x294)) {
    pvVar1 = *(void **)(param_1 + 0x280);
    pvVar4 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x294) + 1) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4)))) {
LAB_0052a281:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0xf;
  param_1[0x280] = (Node)0x0;
  cocos2d::Node::~Node(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0052a290(int param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x31c);
  uVar3 = 0;
  uVar2 = (uint)((int)*(undefined4 **)(param_1 + 800) + (3 - (int)puVar4)) >> 2;
  if (*(undefined4 **)(param_1 + 800) < puVar4) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      pvVar1 = (void *)*puVar4;
      if (pvVar1 != (void *)0x0) {
        FUN_00439780((int)pvVar1);
        FUN_005adb3f(pvVar1);
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x31c);
  return;
}


undefined1 FUN_0052a300(void *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  uint in_stack_00000018;
  undefined4 *in_stack_ffffffb8;
  byte *local_20 [3];
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c4030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffb8,&param_1);
  FUN_00592d70(local_20,'=',in_stack_ffffffb8);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar6 = *(uint *)(local_20[0] + 0x14);
  pbVar8 = local_20[0];
  if (0xf < uVar6) {
    pbVar8 = *(byte **)local_20[0];
  }
  uVar1 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),&DAT_005e93b4,4);
  if ((char)uVar1 == '\0') {
    pbVar8 = local_20[0];
    if (0xf < uVar6) {
      pbVar8 = *(byte **)local_20[0];
    }
    uVar1 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),&DAT_0061e9e8,4);
    if ((char)uVar1 == '\0') {
      pbVar8 = local_20[0];
      if (0xf < uVar6) {
        pbVar8 = *(byte **)local_20[0];
      }
      uVar1 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),(byte *)"newcampaign",0xb);
      if ((char)uVar1 == '\0') {
        pbVar8 = local_20[0];
        if (0xf < uVar6) {
          pbVar8 = *(byte **)local_20[0];
        }
        uVar1 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),(byte *)"newtutorial",0xb);
        if ((char)uVar1 == '\0') {
          pbVar8 = local_20[0];
          if (0xf < uVar6) {
            pbVar8 = *(byte **)local_20[0];
          }
          uVar1 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),(byte *)"continuecampaign",0x10)
          ;
          if ((char)uVar1 == '\0') {
            pbVar8 = local_20[0];
            if (0xf < uVar6) {
              pbVar8 = *(byte **)local_20[0];
            }
            uVar1 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),(byte *)"beginscenario",0xd);
            if ((char)uVar1 == '\0') {
              pbVar8 = local_20[0];
              if (0xf < uVar6) {
                pbVar8 = *(byte **)local_20[0];
              }
              uVar1 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),(byte *)"joinserver",10);
              if ((char)uVar1 == '\0') {
                pbVar8 = local_20[0];
                if (0xf < uVar6) {
                  pbVar8 = *(byte **)local_20[0];
                }
                uVar1 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),(byte *)"selectsaveslot",
                                     0xe);
                if ((char)uVar1 == '\0') {
                  pbVar8 = local_20[0];
                  if (0xf < uVar6) {
                    pbVar8 = *(byte **)local_20[0];
                  }
                  uVar6 = FUN_004031f0(pbVar8,*(uint *)(local_20[0] + 0x10),(byte *)"selectscenario"
                                       ,0xe);
                  if ((char)uVar6 == '\0') goto LAB_0052a505;
                }
              }
            }
          }
        }
      }
    }
LAB_0052a509:
    uVar7 = 1;
  }
  else {
    pbVar8 = local_20[0] + 0x18;
    if (0xf < *(uint *)(local_20[0] + 0x2c)) {
      pbVar8 = *(byte **)pbVar8;
    }
    iVar2 = atoi((char *)pbVar8);
    puVar3 = DAT_0065c300;
    if (DAT_0065c300 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_005adb0f(0x10);
      DAT_0065c300 = puVar3;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      local_14 = puVar3;
    }
    uVar6 = 0;
    piVar4 = (int *)puVar3[1];
    uVar1 = puVar3[2] - (int)piVar4 >> 2;
    if (uVar1 != 0) {
      do {
        if (*(int *)(*piVar4 + 0x278) == iVar2) goto LAB_0052a509;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar6 < uVar1);
      uVar7 = 0;
      goto LAB_0052a50b;
    }
LAB_0052a505:
    uVar7 = 0;
  }
LAB_0052a50b:
  FUN_004025a0((int *)local_20);
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
  return uVar7;
}


int __thiscall FUN_0052a560(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 4) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x278) == param_1) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


void FUN_0052a5a0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  byte *in_stack_ffffffbc;
  uint in_stack_ffffffc0;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4088;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *DAT_0065b444 = 1;
  FUN_00405c30();
  FUN_00405f70();
  pbVar6 = *(byte **)(DAT_0065b5cc + 0xcc);
  pbVar7 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar7 = *(byte **)pbVar6;
  }
  uVar2 = FUN_004031f0(pbVar7,*(uint *)(pbVar6 + 0x10),(byte *)"objectsinspace",0xe);
  if (((char)uVar2 != '\0') && (*(char *)((int)DAT_0065b444 + 0x119) != '\0')) {
    in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,"lock_manual_engine_control",0x1a);
    local_8 = 0;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffbc);
    in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,"owi_tutorialnpcsdisabled",0x18);
    local_8 = 1;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffbc);
  }
  FUN_00405590('\0');
  if (*(char *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x30e) != '\0') {
    iVar4 = FUN_004023e0();
    local_14 = 0;
    iVar4 = *(int *)(iVar4 + 0x2d4);
    iVar8 = *(int *)(iVar4 + 0x90);
    if (*(int *)(iVar4 + 0x94) - iVar8 >> 2 != 0) {
      do {
        pvVar5 = *(void **)(iVar8 + local_14 * 4);
        if (*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x388) * 4 + 0x624) != 0) {
          iVar8 = *(int *)((int)pvVar5 + 0x388) * 0x50 + *(int *)((int)pvVar5 + 0x394);
          pbVar6 = (byte *)(iVar8 + 0x10);
          if (0xf < *(uint *)(iVar8 + 0x24)) {
            pbVar6 = *(byte **)(iVar8 + 0x10);
          }
          uVar2 = FUN_004031f0(pbVar6,*(uint *)(iVar8 + 0x20),(byte *)"c_weapons2",10);
          if ((char)uVar2 == '\0') {
            iVar8 = 0;
            piVar9 = (int *)((int)pvVar5 + 0x624);
            do {
              iVar1 = *piVar9;
              if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x128) == 0)) && (*(int *)(iVar1 + 300) != 0))
                 && (iVar1 = *(int *)(*(int *)(iVar1 + 300) + 0x10), iVar1 != 0)) {
                pbVar6 = (byte *)(iVar1 + 0x30);
                if (0xf < *(uint *)(iVar1 + 0x44)) {
                  pbVar6 = *(byte **)(iVar1 + 0x30);
                }
                uVar2 = FUN_004031f0(pbVar6,*(uint *)(iVar1 + 0x40),(byte *)"Weapons",7);
                if ((char)uVar2 != '\0') {
                  FUN_0053ad10(pvVar5,iVar8);
                  FUN_00591070("DETAIL","Switching helm display to ship control.");
                  goto LAB_0052a7ca;
                }
              }
              iVar8 = iVar8 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar8 < 10);
          }
        }
        iVar8 = *(int *)(iVar4 + 0x90);
        local_14 = local_14 + 1;
      } while (local_14 < (uint)(*(int *)(iVar4 + 0x94) - iVar8 >> 2));
    }
  }
LAB_0052a7ca:
  pbVar6 = *(byte **)(DAT_0065b5cc + 0xcc);
  pbVar7 = pbVar6;
  if (0xf < *(uint *)(pbVar6 + 0x14)) {
    pbVar7 = *(byte **)pbVar6;
  }
  uVar2 = FUN_004031f0(pbVar7,*(uint *)(pbVar6 + 0x10),(byte *)"objectsinspace",0xe);
  if ((char)uVar2 != '\0') {
    if (*(char *)((int)DAT_0065b444 + 0x119) == '\0') goto LAB_0052a97a;
    in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,"int_wendymafumoconv2done",0x18);
    local_8 = 2;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffbc);
    in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,"owi_lesliegarbutconv1done",0x19);
    local_8 = 3;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffbc);
    in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,"owi_lesliegarbutconv2done",0x19);
    local_8 = 4;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffbc);
    in_stack_ffffffbc = (byte *)((uint)in_stack_ffffffbc & 0xffffff00);
    FUN_00402690(&stack0xffffffbc,"owi_lesliegarbutconv3done",0x19);
    local_8 = 5;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffbc);
  }
  if ((*(char *)((int)DAT_0065b444 + 0x119) != '\0') &&
     (*(char *)((int)DAT_0065b444 + 0x11b) == '\0')) {
    pbVar6 = (byte *)(in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,&DAT_0061eb7c,4);
    local_8 = 6;
    pvVar5 = (void *)FUN_00412490();
    local_8 = 0xffffffff;
    iVar4 = FUN_004a0d10(pvVar5,pbVar6);
    if (iVar4 != 0) {
      FUN_004a00e0(iVar4);
      FUN_00412d40();
      FUN_00486510();
    }
  }
LAB_0052a97a:
  if (((*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) &&
      (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xf8) == 2)) {
    FUN_004127d0();
    FUN_004b8550();
  }
  ExceptionList = local_10;
  return;
}


Node * __thiscall FUN_0052a9c0(void *this,byte param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)((int)this + 0x278);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 0x280) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    *(undefined4 *)((int)this + 0x278) = 0;
    *(undefined4 *)((int)this + 0x27c) = 0;
    *(undefined4 *)((int)this + 0x280) = 0;
  }
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0052aa50(int param_1)

{
  uint uVar1;
  Vec3 *pVVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  size_t _Size;
  int *piVar12;
  int *in_XMM1_Da;
  Vec3 local_74 [12];
  Vec3 local_68 [12];
  Vec3 local_5c [12];
  Vec3 local_50 [12];
  Vec3 local_44 [12];
  int *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  undefined4 *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c40d3;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar11 = (undefined4 *)0x0;
  local_20 = (int *)0x0;
  local_38 = (int *)0x0;
  local_34 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_8 = 0;
  iVar8 = *(int *)(param_1 + 0x278);
  local_24 = 0;
  local_18 = in_XMM1_Da;
  local_14 = param_1;
  if (*(int *)(param_1 + 0x27c) - iVar8 >> 2 != 0) {
    do {
      iVar8 = *(int *)(iVar8 + local_24 * 4);
      local_28 = local_24 * 4;
      local_20 = (int *)iVar8;
      pVVar2 = (Vec3 *)cocos2d::Vec3::Vec3(local_5c,0.0,-800.0,0.0);
      local_8._0_1_ = 1;
      cocos2d::Vec3::operator*(pVVar2,(float)local_50);
      local_8._0_1_ = 2;
      puVar3 = (undefined8 *)cocos2d::Vec3::operator+((Vec3 *)(iVar8 + 0x278),local_44);
      *(undefined8 *)(iVar8 + 0x278) = *puVar3;
      *(undefined4 *)(iVar8 + 0x280) = *(undefined4 *)(puVar3 + 1);
      cocos2d::Vec3::~Vec3(local_44);
      cocos2d::Vec3::~Vec3(local_50);
      local_8._0_1_ = 0;
      cocos2d::Vec3::~Vec3(local_5c);
      if (*(float *)(iVar8 + 0x27c) <= -400.0 && *(float *)(iVar8 + 0x27c) != -400.0) {
        *(undefined4 *)(iVar8 + 0x27c) = 0xc3c80000;
      }
      piVar10 = local_18;
      uVar4 = cocos2d::Vec3::operator*((Vec3 *)(iVar8 + 0x278),(float)local_74);
      local_8._0_1_ = 3;
      pVVar2 = (Vec3 *)(iVar8 + 0x290);
      puVar3 = (undefined8 *)cocos2d::Vec3::operator+(pVVar2,local_68);
      *(undefined8 *)pVVar2 = *puVar3;
      *(undefined4 *)(iVar8 + 0x298) = *(undefined4 *)(puVar3 + 1);
      cocos2d::Vec3::~Vec3(local_68);
      local_8 = (uint)local_8._1_3_ << 8;
      cocos2d::Vec3::~Vec3(local_74);
      (**(code **)(**(int **)((int)local_20 + 0x29c) + 0x78))(pVVar2,uVar4,piVar10);
      if (*(float *)((int)local_20 + 0x294) <= 0.0 && *(float *)((int)local_20 + 0x294) != 0.0) {
        FUN_00591070("RENDER","Particle journey complete.");
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x278) + local_28);
        if (local_1c == puVar11) {
          FUN_00414080(&local_38,puVar11,puVar5);
          local_1c = local_30;
          puVar11 = local_34;
        }
        else {
          *puVar11 = *puVar5;
          local_34 = puVar11 + 1;
          puVar11 = local_34;
        }
      }
      iVar8 = *(int *)(param_1 + 0x278);
      local_24 = local_24 + 1;
    } while (local_24 < (uint)(*(int *)(param_1 + 0x27c) - iVar8 >> 2));
    local_20 = local_38;
  }
  local_24 = (int)puVar11 - (int)local_20 >> 2;
  piVar10 = local_20;
  local_38 = local_20;
  if (local_24 != 0) {
    do {
      iVar8 = *piVar10;
      piVar12 = *(int **)(iVar8 + 0x29c);
      local_18 = piVar10;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0x138))(1,uVar1);
        *(undefined4 *)(iVar8 + 0x29c) = 0;
      }
      (**(code **)(*(int *)*piVar10 + 0x138))(1);
      local_2c = *(int **)(param_1 + 0x27c);
      piVar12 = *(int **)(param_1 + 0x278);
      if (piVar12 != local_2c) {
        do {
          if (*piVar12 == *piVar10) break;
          piVar12 = piVar12 + 1;
        } while (piVar12 != local_2c);
        if (piVar12 != local_2c) {
          piVar6 = piVar12 + 1;
          uVar7 = 0;
          uVar9 = (uint)((int)local_2c + (3 - (int)piVar6)) >> 2;
          if (local_2c < piVar6) {
            uVar9 = 0;
          }
          if (uVar9 != 0) {
            do {
              if (*piVar6 != *local_18) {
                *piVar12 = *piVar6;
                piVar12 = piVar12 + 1;
              }
              uVar7 = uVar7 + 1;
              piVar6 = piVar6 + 1;
              piVar10 = local_18;
            } while (uVar7 != uVar9);
          }
          if (piVar12 != local_2c) {
            _Size = *(int *)(local_14 + 0x27c) - (int)local_2c;
            memmove(piVar12,local_2c,_Size);
            *(size_t *)(local_14 + 0x27c) = _Size + (int)piVar12;
            piVar10 = local_18;
          }
        }
      }
      local_18 = piVar10 + 1;
      local_24 = local_24 + -1;
      piVar10 = local_18;
      param_1 = local_14;
    } while (local_24 != 0);
    local_24 = 0;
  }
  if (local_20 != (int *)0x0) {
    piVar10 = local_20;
    if ((0xfff < ((int)local_1c - (int)local_20 & 0xfffffffcU)) &&
       (piVar10 = (int *)local_20[-1], 0x1f < (uint)((int)local_20 + (-4 - (int)piVar10)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar10);
  }
  ExceptionList = local_10;
  return;
}


undefined1 __cdecl FUN_0052ad80(int param_1,int param_2,void *param_3)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005bdb38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != 0) {
    uVar6 = 0;
    iVar1 = FUN_004023e0();
    piVar2 = *(int **)(*(int *)(iVar1 + 0x2d4) + 0x90);
    uVar4 = *(int *)(*(int *)(iVar1 + 0x2d4) + 0x94) - (int)piVar2 >> 2;
    if (uVar4 != 0) {
      do {
        iVar1 = *piVar2;
        if (*(int *)(iVar1 + 0x50) == param_2) {
          if (iVar1 != 0) {
            uVar5 = *(undefined1 *)(iVar1 + 0x34c);
            goto LAB_0052ade8;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar6 < uVar4);
    }
  }
  uVar5 = 0;
LAB_0052ade8:
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar3 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  return uVar5;
}


undefined1 __cdecl FUN_0052ae40(int param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if ((param_1 == 0) || (DAT_0065b3e0 == (double)*(float *)(param_1 + 0x128))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar1 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar1);
  }
  return uVar2;
}


undefined1 __cdecl FUN_0052aeb0(int param_1,int param_2,void *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  uint in_stack_00000020;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = 1;
    if (DAT_00655098 != 0) {
      uVar2 = DAT_0065507d;
    }
  }
  else {
    uVar2 = DAT_0065507e;
    if (DAT_00655094 == 0) {
      uVar2 = 1;
    }
  }
  if (0xf < in_stack_00000020) {
    pvVar1 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar1 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  return uVar2;
}


undefined4 __cdecl FUN_0052af30(undefined4 param_1,double param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0052b1a0(param_2 != 0.0,-10.0,0.0);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_0052af70(undefined4 param_1,double param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0052b1a0(param_2 != 0.0,10.0,0.0);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_0052afb0(undefined4 param_1,double param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0052b1a0(param_2 != 0.0,0.0,10.0);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_0052aff0(undefined4 param_1,double param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0052b1a0(param_2 != 0.0,0.0,-10.0);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_0052b030(int param_1,double param_2)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 9;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,param_1,iVar2,iVar3);
  if (param_2 == 0.0) {
    DAT_00655098 = DAT_00655098 + -1;
    if (DAT_00655098 < 1) {
      DAT_00655098 = 1;
    }
    uVar1 = CONCAT31((int3)((uint)DAT_00655098 >> 8),1);
  }
  else {
    DAT_00655094 = DAT_00655094 + -1;
    uVar1 = CONCAT31((int3)((uint)DAT_00655094 >> 8),1);
    if (DAT_00655094 < 1) {
      DAT_00655094 = 1;
      return uVar1;
    }
  }
  return uVar1;
}


undefined4 __cdecl FUN_0052b090(int param_1,double param_2)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 8;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,param_1,iVar2,iVar3);
  if (param_2 == 0.0) {
    DAT_00655098 = DAT_00655098 + 1;
    if (4 < DAT_00655098) {
      DAT_00655098 = 4;
    }
    uVar1 = CONCAT31((int3)((uint)DAT_00655098 >> 8),1);
  }
  else {
    DAT_00655094 = DAT_00655094 + 1;
    uVar1 = CONCAT31((int3)((uint)DAT_00655094 >> 8),1);
    if (3 < DAT_00655094) {
      DAT_00655094 = 3;
      return uVar1;
    }
  }
  return uVar1;
}


undefined4 __cdecl FUN_0052b100(int param_1,double param_2)

{
  void *this;
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 9;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,param_1,iVar2,iVar3);
  fVar1 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28);
  if (param_2 != 0.0) {
    DAT_0065bf1c = fVar1;
    DAT_0065507e = 1;
    DAT_0065bf20 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
    return CONCAT31((int3)((uint)*(int *)(DAT_0065b5cc + 0xd0) >> 8),1);
  }
  DAT_0065bf24 = fVar1;
  DAT_0065507d = 1;
  DAT_0065bf28 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
  return CONCAT31((int3)((uint)*(int *)(DAT_0065b5cc + 0xd0) >> 8),1);
}


void __thiscall FUN_0052b1a0(char param_1,float param_2,float param_3)

{
  if (param_1 == '\0') {
    if (DAT_0065507d != '\0') {
      DAT_0065507d = '\0';
      DAT_0065bf24 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28);
      DAT_0065bf28 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
    }
    DAT_0065bf24 = DAT_0065bf24 + param_2;
    DAT_0065bf28 = DAT_0065bf28 + param_3;
    return;
  }
  if (DAT_0065507e != '\0') {
    DAT_0065507e = '\0';
    DAT_0065bf1c = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x28);
    DAT_0065bf20 = (float)*(double *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x30);
  }
  DAT_0065bf1c = DAT_0065bf1c + param_2;
  DAT_0065bf20 = DAT_0065bf20 + param_3;
  return;
}


uint __fastcall FUN_0052b280(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x24:
  case 0xc4:
  case 0xc5:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd6:
    return 1;
  default:
    return 0;
  }
}


undefined4 * __fastcall FUN_0052b380(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_005305f0;
    param_1[9] = param_1;
    return param_1;
  default:
    param_1[9] = 0;
    return param_1;
  case 8:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_0052af30;
    param_1[9] = param_1;
    return param_1;
  case 9:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_0052af70;
    param_1[9] = param_1;
    return param_1;
  case 10:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_0052afb0;
    param_1[9] = param_1;
    return param_1;
  case 0xb:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_0052aff0;
    param_1[9] = param_1;
    return param_1;
  case 0xc:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_0052b030;
    param_1[9] = param_1;
    return param_1;
  case 0xd:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_0052b090;
    param_1[9] = param_1;
    return param_1;
  case 0xe:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_0052b100;
    param_1[9] = param_1;
    return param_1;
  case 0x24:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e0850;
    param_1[9] = param_1;
    return param_1;
  case 0xbd:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e93b0;
    param_1[9] = param_1;
    return param_1;
  case 0xbe:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e93f0;
    param_1[9] = param_1;
    return param_1;
  case 0xbf:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9470;
    param_1[9] = param_1;
    return param_1;
  case 0xc0:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e94b0;
    param_1[9] = param_1;
    return param_1;
  case 0xc4:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9630;
    param_1[9] = param_1;
    return param_1;
  case 0xc5:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e96e0;
    param_1[9] = param_1;
    return param_1;
  case 200:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9790;
    param_1[9] = param_1;
    return param_1;
  case 0xc9:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9840;
    param_1[9] = param_1;
    return param_1;
  case 0xcf:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9b80;
    param_1[9] = param_1;
    return param_1;
  case 0xd0:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9ba0;
    param_1[9] = param_1;
    return param_1;
  case 0xd1:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9c40;
    param_1[9] = param_1;
    return param_1;
  case 0xd2:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9cd0;
    param_1[9] = param_1;
    return param_1;
  case 0xd3:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e1a00;
    param_1[9] = param_1;
    return param_1;
  case 0xd4:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9fe0;
    param_1[9] = param_1;
    return param_1;
  case 0xd6:
    *param_1 = std::_Func_impl_no_alloc<>::vftable;
    param_1[1] = FUN_004e9de0;
    param_1[9] = param_1;
    return param_1;
  }
}


void __thiscall FUN_0052b6b0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}


TypeDescriptor * FUN_0052b6d0(void)

{
  return &.P6A_NPAVShip@@NNN@Z::RTTI_Type_Descriptor;
}


void __thiscall FUN_0052b6e0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}


void __thiscall
FUN_0052b700(void *this,undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,
            undefined8 *param_4)

{
  (**(code **)((int)this + 4))(*param_1,*param_2,*param_3,*param_4);
  return;
}


void __thiscall
FUN_0052b750(void *this,undefined4 *param_1,double *param_2,double *param_3,double *param_4)

{
  (**(code **)((int)this + 4))(*param_1,(int)*param_2,(int)*param_3,(int)*param_4);
  return;
}


int __fastcall FUN_0052b780(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 5) && (iVar1 != 6)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


Layer * __fastcall FUN_0052b7a0(Layer *param_1)

{
  Node *pNVar1;
  undefined4 uVar2;
  Layer *pLVar3;
  EventListenerKeyboard *pEVar4;
  Director *pDVar5;
  EventListenerMouse *pEVar6;
  int *piVar7;
  code *local_28;
  undefined4 local_24;
  Layer *local_1c;
  Layer *local_18;
  Layer *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c41e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = param_1;
  cocos2d::Layer::Layer(param_1);
  local_8 = 0;
  *(undefined ***)param_1 = PresentationInterface::vftable;
  *(undefined4 *)(param_1 + 0x294) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x298) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined2 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x2b8) = 0xbf800000;
  *(undefined4 *)(param_1 + 700) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c8) = 0xbf800000;
  param_1[0x2cc] = (Layer)0x0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  uVar2 = FUN_00402f60();
  pLVar3 = param_1 + 0x2e8;
  *(undefined4 *)(param_1 + 0x2e0) = uVar2;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)pLVar3 = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  local_14 = pLVar3;
  uVar2 = FUN_004cb160();
  *(undefined4 *)pLVar3 = uVar2;
  local_8._0_1_ = 1;
  pNVar1 = (Node *)(param_1 + 0x2f0);
  *(undefined4 *)pNVar1 = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  local_14 = (Layer *)pNVar1;
  uVar2 = FUN_004cb160();
  *(undefined4 *)pNVar1 = uVar2;
  local_8._0_1_ = 2;
  param_1[0x2f8] = (Layer)0x0;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x2fc),-9999.0,-9999.0,-9999.0);
  local_8._0_1_ = 3;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x308),-9999.0,-9999.0,-9999.0);
  local_8._0_1_ = 4;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x314));
  local_8._0_1_ = 5;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 800));
  local_8._0_1_ = 6;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x32c),0.0,0.0,0.0);
  local_8._0_1_ = 7;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x338));
  param_1[0x344] = (Layer)0x0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 900) = 0xf;
  param_1[0x370] = (Layer)0x0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  pLVar3 = DAT_0065c304;
  local_8._0_1_ = 0xb;
  *(undefined2 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  if (pLVar3 == (Layer *)0x0) {
    pLVar3 = (Layer *)FUN_005adb0f(0x288);
    local_8._0_1_ = 0xc;
    local_14 = pLVar3;
    cocos2d::Node::Node((Node *)pLVar3);
    *(undefined ***)pLVar3 = ParticleEngine::vftable;
    *(undefined4 *)(pLVar3 + 0x278) = 0;
    *(undefined4 *)(pLVar3 + 0x27c) = 0;
    *(undefined4 *)(pLVar3 + 0x280) = 0;
    DAT_0065c304 = pLVar3;
  }
  local_8._0_1_ = 0xb;
  *(Layer **)(param_1 + 0x3a8) = pLVar3;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0xffffffff;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x3b4),0.0,0.0,0.0);
  local_8._0_1_ = 0xd;
  param_1[0x3c0] = (Layer)0x0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  cocos2d::Color3B::Color3B((Color3B *)(param_1 + 0x3cc),0xff,0xff,0xff);
  cocos2d::Color3B::Color3B((Color3B *)(param_1 + 0x3cf),0xff,0xff,0xff);
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x3dc),0.0,0.0,0.0);
  local_8._0_1_ = 0xe;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 1000),0.0,0.0,0.0);
  local_8._0_1_ = 0xf;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x3f4),0.0,0.0,0.0);
  local_8 = CONCAT31(local_8._1_3_,0x10);
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  cocos2d::Node::scheduleUpdate((Node *)param_1);
  pEVar4 = cocos2d::EventListenerKeyboard::create();
  *(EventListenerKeyboard **)(param_1 + 0x2d8) = pEVar4;
  local_28 = (code *)&LAB_0053497f;
  local_24 = 0;
  local_1c = param_1;
  FUN_00534420(pEVar4 + 0x70,&local_28);
  local_28 = (code *)&LAB_00534987;
  local_24 = 0;
  local_1c = param_1;
  FUN_00534420((void *)(*(int *)(param_1 + 0x2d8) + 0x98),&local_28);
  pDVar5 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(pDVar5 + 0x58),*(EventListener **)(param_1 + 0x2d8),1000);
  pEVar6 = cocos2d::EventListenerMouse::create();
  *(EventListenerMouse **)(param_1 + 0x2dc) = pEVar6;
  local_28 = FUN_00530400;
  local_24 = 0;
  local_1c = param_1;
  FUN_005344d0(pEVar6 + 0x70,&local_28);
  local_28 = FUN_00530000;
  local_24 = 0;
  local_1c = param_1;
  FUN_005344d0((void *)(*(int *)(param_1 + 0x2dc) + 0x98),&local_28);
  local_28 = FUN_0052f9f0;
  local_24 = 0;
  local_1c = param_1;
  FUN_005344d0((void *)(*(int *)(param_1 + 0x2dc) + 0xc0),&local_28);
  local_28 = FUN_005304b0;
  local_24 = 0;
  local_1c = param_1;
  FUN_005344d0((void *)(*(int *)(param_1 + 0x2dc) + 0xe8),&local_28);
  pDVar5 = cocos2d::Director::getInstance();
  cocos2d::EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(pDVar5 + 0x58),*(EventListener **)(param_1 + 0x2dc),1000);
  param_1[0x39c] = (Layer)0x0;
  pLVar3 = param_1 + 0x2e8;
  local_14 = (Layer *)0x3b;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x20;
  local_14 = (Layer *)0x4d;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x31;
  local_14 = (Layer *)0x4e;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x32;
  local_14 = (Layer *)0x4f;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x33;
  local_14 = (Layer *)0x50;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x34;
  local_14 = (Layer *)0x51;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x35;
  local_14 = (Layer *)0x52;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x36;
  local_14 = (Layer *)0x53;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x37;
  local_14 = (Layer *)0x54;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x38;
  local_14 = (Layer *)0x55;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x39;
  local_14 = (Layer *)0x4c;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x30;
  local_14 = (Layer *)0x49;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2d;
  local_14 = (Layer *)0x20;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2d;
  local_14 = (Layer *)0x1f;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2b;
  local_14 = (Layer *)0x4b;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2f;
  local_14 = (Layer *)0x78;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x5c;
  local_14 = (Layer *)0x77;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x5b;
  local_14 = (Layer *)0x79;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x5d;
  local_14 = (Layer *)0x99;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x60;
  local_14 = (Layer *)0x57;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x3b;
  local_14 = (Layer *)0x43;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x27;
  local_14 = (Layer *)0x48;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2c;
  local_14 = (Layer *)0x4a;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2e;
  local_14 = (Layer *)0x59;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  pLVar3 = param_1 + 0x2f0;
  *(undefined1 *)piVar7 = 0x3d;
  local_14 = (Layer *)0x3b;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x20;
  local_14 = (Layer *)0x4d;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x21;
  local_14 = (Layer *)0x4e;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x40;
  local_14 = (Layer *)0x4f;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x23;
  local_14 = (Layer *)0x50;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x24;
  local_14 = (Layer *)0x51;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x25;
  local_14 = (Layer *)0x52;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x5e;
  local_14 = (Layer *)0x53;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x26;
  local_14 = (Layer *)0x54;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2a;
  local_14 = (Layer *)0x55;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x28;
  local_14 = (Layer *)0x4c;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x29;
  local_14 = (Layer *)0x49;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x5f;
  local_14 = (Layer *)0x20;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2d;
  local_14 = (Layer *)0x1f;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2b;
  local_14 = (Layer *)0x4b;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x3f;
  local_14 = (Layer *)0x78;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x7c;
  local_14 = (Layer *)0x77;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x7b;
  local_14 = (Layer *)0x79;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x7d;
  local_14 = (Layer *)0x99;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x7e;
  local_14 = (Layer *)0x57;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x3a;
  local_14 = (Layer *)0x43;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x22;
  local_14 = (Layer *)0x48;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x3c;
  local_14 = (Layer *)0x4a;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x3e;
  local_14 = (Layer *)0x59;
  piVar7 = FUN_00534390(pLVar3,(int *)&local_14);
  *(undefined1 *)piVar7 = 0x2b;
  ShowCursor(0);
  cocos2d::Node::addChild((Node *)param_1,*(Node **)(param_1 + 0x3a8));
  ExceptionList = local_10;
  return param_1;
}
