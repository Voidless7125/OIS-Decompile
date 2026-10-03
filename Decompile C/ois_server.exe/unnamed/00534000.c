#include "../ois_server.exe.h"


void * __thiscall FUN_00534130(void *this,void *param_1)

{
  void *pvVar1;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b1018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_004024e0(this,&param_1);
  *(undefined4 *)((int)this + 0x18) = in_stack_0000001c;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
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
  return this;
}


void __fastcall FUN_005341e0(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4920;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar7 = 0;
  iVar6 = param_1[7];
  if (param_1[8] - iVar6 >> 2 != 0) {
    do {
      pvVar1 = *(void **)(iVar6 + uVar7 * 4);
      if (pvVar1 != (void *)0x0) {
        local_8 = 0;
        piVar2 = *(int **)((int)pvVar1 + 0x6c);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)((int)pvVar1 + 0x48),uVar3);
          *(undefined4 *)((int)pvVar1 + 0x6c) = 0;
        }
        local_8 = 1;
        piVar2 = *(int **)((int)pvVar1 + 0x44);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)((int)pvVar1 + 0x20));
          *(undefined4 *)((int)pvVar1 + 0x44) = 0;
        }
        local_8 = 0xffffffff;
        if (0xf < *(uint *)((int)pvVar1 + 0x18)) {
          pvVar5 = *(void **)((int)pvVar1 + 4);
          pvVar4 = pvVar5;
          if ((0xfff < *(uint *)((int)pvVar1 + 0x18) + 1) &&
             (pvVar4 = *(void **)((int)pvVar5 + -4), 0x1f < (uint)((int)pvVar5 + (-4 - (int)pvVar4))
             )) goto LAB_00534380;
          FUN_005adb3f(pvVar4);
        }
        *(undefined4 *)((int)pvVar1 + 0x14) = 0;
        *(undefined4 *)((int)pvVar1 + 0x18) = 0xf;
        *(undefined1 *)((int)pvVar1 + 4) = 0;
        FUN_005adb3f(pvVar1);
      }
      uVar7 = uVar7 + 1;
      iVar6 = param_1[7];
    } while (uVar7 < (uint)(param_1[8] - iVar6 >> 2));
  }
  param_1[8] = iVar6;
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    pvVar5 = pvVar1;
    if ((0xfff < (param_1[9] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar5 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar5))))
    goto LAB_00534380;
    FUN_005adb3f(pvVar5);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar5 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar5 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar5)))) {
LAB_00534380:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  ExceptionList = local_10;
  return;
}


int * __thiscall FUN_00534390(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)this;
  if (*(char *)(piVar3[1] + 0xd) == '\0') {
    piVar2 = (int *)piVar3[1];
    do {
      if (piVar2[4] < *param_1) {
        piVar1 = (int *)piVar2[2];
      }
      else {
        piVar1 = (int *)*piVar2;
        piVar3 = piVar2;
      }
      piVar2 = piVar1;
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    if ((piVar3 != *(int **)this) && (piVar3[4] <= *param_1)) {
      return piVar3 + 5;
    }
  }
  piVar2 = (int *)FUN_005346e0(this,param_1,&param_1);
  FUN_00534700(this,&param_1,piVar3,piVar2 + 4,piVar2);
  return param_1 + 5;
}


void __fastcall FUN_00534400(int param_1)

{
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
  return;
}


void __thiscall FUN_00534420(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_28;
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
  local_3c[0] = std::_Func_impl_no_alloc<>::vftable;
  local_34 = *param_1;
  local_30 = param_1[1];
  local_2c = *(undefined1 *)(param_1 + 2);
  local_2b = *(undefined1 *)((int)param_1 + 9);
  local_28 = param_1[3];
  local_18 = local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005344d0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
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
  local_3c[0] = std::_Func_impl_no_alloc<>::vftable;
  local_34 = *param_1;
  local_30 = param_1[1];
  local_2c = *(undefined1 *)(param_1 + 2);
  local_28 = param_1[3];
  local_18 = local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00534570(void *this,char param_1)

{
  if (param_1 != '\0') {
    FUN_005adb3f(this);
  }
  return;
}


TypeDescriptor * FUN_00534590(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_005345a0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((int)this + 0x10);
  param_1[5] = *(undefined4 *)((int)this + 0x14);
  return param_1;
}


TypeDescriptor * FUN_005345d0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_005345e0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((int)this + 0x10);
  param_1[5] = *(undefined4 *)((int)this + 0x14);
  return param_1;
}


void __thiscall FUN_00534610(void *this,undefined4 *param_1)

{
  (**(code **)((int)this + 8))(*param_1);
  return;
}


TypeDescriptor * FUN_00534630(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_00534640(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((int)this + 0x10);
  param_1[5] = *(undefined4 *)((int)this + 0x14);
  return param_1;
}


TypeDescriptor * FUN_00534670(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_00534680(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)param_1 + 0x11) = *(undefined1 *)((int)this + 0x11);
  param_1[5] = *(undefined4 *)((int)this + 0x14);
  return param_1;
}


void __thiscall FUN_005346c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  (**(code **)((int)this + 8))(*param_1,*param_2);
  return;
}


void __thiscall FUN_005346e0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00421600(this);
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)*param_2;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  return;
}


undefined4 * __thiscall
FUN_00534700(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uStack_30;
  undefined4 local_20;
  int local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c4970;
  local_10 = ExceptionList;
  uStack_30 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_00421640(this,param_1,'\x01',*(undefined4 **)this,this,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = *(int **)this;
  if (param_2 == (int *)*piVar2) {
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_00421640(this,param_1,'\x01',param_2,param_2,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar2) {
    param_2 = (int *)piVar2[2];
    if (param_2[4] < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_00421640(this,param_1,'\0',param_2,param_2,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_1c = *param_3;
    if (local_1c < param_2[4]) {
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        piVar5 = (int *)*param_2;
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          cVar1 = *(char *)(piVar5[2] + 0xd);
          piVar3 = (int *)piVar5[2];
          while (cVar1 == '\0') {
            cVar1 = *(char *)(piVar3[2] + 0xd);
            piVar5 = piVar3;
            piVar3 = (int *)piVar3[2];
          }
        }
        else {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)*piVar5))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
          if (*(char *)((int)piVar3 + 0xd) != '\0') {
            piVar5 = piVar3;
          }
        }
      }
      else {
        piVar5 = (int *)param_2[2];
      }
      if (piVar5[4] < local_1c) {
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          local_14 = (undefined1 *)&uStack_30;
          FUN_00421640(this,param_1,'\x01',param_2,param_2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_30;
        FUN_00421640(this,param_1,'\0',piVar5,param_2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    if (param_2[4] < local_1c) {
      piVar5 = (int *)param_2[2];
      local_15 = *(char *)((int)piVar5 + 0xd);
      if (local_15 == '\0') {
        cVar1 = *(char *)(*piVar5 + 0xd);
        piVar3 = (int *)*piVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0xd);
        piVar4 = (int *)param_2[1];
        piVar3 = param_2;
        while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
        }
      }
      if ((piVar5 == piVar2) || (local_1c < piVar5[4])) {
        if (local_15 == '\0') {
          FUN_00421640(this,param_1,'\x01',piVar5,param_2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_30;
        FUN_00421640(this,param_1,'\0',param_2,param_2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_30;
  puVar6 = (undefined4 *)FUN_00421870(this,&local_20,param_2,param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


undefined1 __fastcall FUN_00534990(int param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x94) - iVar3 >> 2 != 0) {
    do {
      pvVar1 = *(void **)(iVar3 + uVar5 * 4);
      if ((*(int *)((int)pvVar1 + 0x3c) == 6) && (cVar2 = FUN_005384b0(pvVar1), cVar2 != '\0')) {
        FUN_005382e0(*(int *)(*(int *)(param_1 + 0x90) + uVar5 * 4));
        FUN_00538bd0(*(void **)(*(int *)(param_1 + 0x90) + uVar5 * 4),*(int **)(param_1 + 0xa0));
        uVar4 = 1;
        FUN_00591070("DETAIL","Character spawn state has changed for %s");
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)(param_1 + 0x90);
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x94) - iVar3 >> 2));
  }
  return uVar4;
}


void __thiscall FUN_00534a40(void *this,int *param_1)

{
  int iVar1;
  Vec3 *pVVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  AmbientLight *pAVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  void *pvVar10;
  Vec3 *this_00;
  uint uVar11;
  Vec3 local_64 [12];
  Vec3 local_58 [12];
  Vec3 *local_4c;
  Vec3 local_48 [16];
  Vec3 local_38 [16];
  undefined8 local_28;
  Vec3 *local_20;
  void *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar8 = ~Vec3_exref;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c49c5;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(int **)((int)this + 0xa0) = param_1;
  pVVar2 = *(Vec3 **)((int)this + 0xa8);
  this_00 = *(Vec3 **)((int)this + 0xa4);
  local_1c = this;
  if (this_00 != pVVar2) {
    do {
      cocos2d::Vec3::~Vec3(this_00 + 0xc);
      cocos2d::Vec3::~Vec3(this_00);
      this_00 = this_00 + 0x1c;
    } while (this_00 != pVVar2);
    this_00 = *(Vec3 **)((int)local_1c + 0xa4);
  }
  pvVar10 = local_1c;
  *(Vec3 **)((int)local_1c + 0xa8) = this_00;
  iVar9 = *(int *)((int)local_1c + 0x94);
  iVar7 = *(int *)((int)local_1c + 0x90);
  local_18 = 0;
  if (iVar9 - iVar7 >> 2 != 0) {
    do {
      iVar9 = local_18 * 4;
      local_20 = *(Vec3 **)(*(int *)(iVar9 + iVar7) + 900);
      if (-1 < (int)local_20) {
        cocos2d::Vec3::Vec3(local_48,(Vec3 *)(*(int *)(iVar9 + iVar7) + 0x3c4));
        local_8 = 0;
        cocos2d::Vec3::Vec3(local_38,(Vec3 *)(*(int *)(*(int *)((int)pvVar10 + 0x90) + iVar9) +
                                             0x3b8));
        local_8 = 2;
        cocos2d::Vec3::Vec3(local_64,local_38);
        local_8 = CONCAT31(local_8._1_3_,3);
        cocos2d::Vec3::Vec3(local_58,local_48);
        local_4c = local_20;
        (*pcVar8)();
        (*pcVar8)();
        local_8 = 4;
        pVVar2 = *(Vec3 **)((int)pvVar10 + 0xa8);
        if (*(Vec3 **)((int)pvVar10 + 0xac) == pVVar2) {
          FUN_00535930((void *)((int)pvVar10 + 0xa4),pVVar2,local_64);
        }
        else {
          local_20 = pVVar2;
          cocos2d::Vec3::Vec3(pVVar2,local_64);
          local_8 = CONCAT31(local_8._1_3_,5);
          cocos2d::Vec3::Vec3(pVVar2 + 0xc,local_58);
          *(Vec3 **)(pVVar2 + 0x18) = local_4c;
          *(int *)((int)pvVar10 + 0xa8) = *(int *)((int)pvVar10 + 0xa8) + 0x1c;
        }
        pcVar8 = ~Vec3_exref;
        local_8 = 0xffffffff;
        cocos2d::Vec3::~Vec3(local_58);
        cocos2d::Vec3::~Vec3(local_64);
        iVar7 = *(int *)((int)pvVar10 + 0x90);
      }
      if (*(int *)(*(int *)(iVar9 + iVar7) + 0x3c) == 4) {
        FUN_0053ad70(*(int *)(iVar9 + iVar7));
        iVar7 = *(int *)((int)pvVar10 + 0x90);
      }
      FUN_00538bd0(*(void **)(iVar9 + iVar7),param_1);
      iVar7 = *(int *)(iVar9 + *(int *)((int)pvVar10 + 0x90));
      if ((*(int *)(iVar7 + 0x3c) == 4) &&
         (pvVar3 = *(void **)(iVar7 + 0x624 + *(int *)(iVar7 + 0x388) * 4), pvVar3 != (void *)0x0))
      {
        FUN_00555630(pvVar3);
      }
      iVar9 = *(int *)((int)pvVar10 + 0x94);
      iVar7 = *(int *)((int)pvVar10 + 0x90);
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(iVar9 - iVar7 >> 2));
  }
  if (*(float *)((int)pvVar10 + 0x40) != -1.0) {
    pAVar6 = cocos2d::AmbientLight::create((Color3B *)WHITE_exref);
    *(AmbientLight **)((int)pvVar10 + 0x9c) = pAVar6;
    *(undefined4 *)(pAVar6 + 0x27c) = 2;
    cocos2d::BaseLight::setIntensity
              (*(BaseLight **)((int)pvVar10 + 0x9c),*(float *)((int)pvVar10 + 0x40));
    (**(code **)(**(int **)((int)pvVar10 + 0x9c) + 0x25c))((int)pvVar10 + 0x8c,uVar5);
    (**(code **)(*param_1 + 0x10c))(*(undefined4 *)((int)pvVar10 + 0x9c));
    iVar9 = *(int *)((int)pvVar10 + 0x94);
  }
  iVar7 = *(int *)((int)pvVar10 + 0x90);
  param_1 = (int *)0x0;
  if (iVar9 - iVar7 >> 2 != 0) {
    do {
      uVar5 = 0;
      uVar11 = iVar9 - iVar7 >> 2;
      if (uVar11 != 0) {
        do {
          iVar9 = *(int *)(iVar7 + uVar5 * 4);
          if ((*(char *)(iVar9 + 0x449) != '\0') &&
             (*(int *)(iVar9 + 0x54) == *(int *)(*(int *)(iVar7 + (int)param_1 * 4) + 0x50)))
          goto LAB_00534cf1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar11);
      }
      iVar9 = 0;
LAB_00534cf1:
      iVar1 = (int)param_1 * 4;
      param_1 = (int *)((int)param_1 + 1);
      *(int *)(*(int *)(iVar7 + iVar1) + 0x44c) = iVar9;
      iVar9 = *(int *)((int)local_1c + 0x94);
      iVar7 = *(int *)((int)local_1c + 0x90);
      pvVar10 = local_1c;
    } while (param_1 < (int *)(iVar9 - iVar7 >> 2));
  }
  local_28 = *(undefined8 *)((int)pvVar10 + 0x74);
  uVar4 = *(undefined4 *)((int)pvVar10 + 0x7c);
  iVar7 = FUN_004023e0();
  *(undefined8 *)(iVar7 + 0x3b4) = local_28;
  *(undefined4 *)(iVar7 + 0x3bc) = uVar4;
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00534d60(Vec3 *param_1)

{
  cocos2d::Vec3::~Vec3(param_1 + 0xc);
                    // WARNING: Could not recover jumptable at 0x00534d6f. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Vec3::~Vec3(param_1);
  return;
}


void __fastcall FUN_00534d80(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 2 != 0) {
    do {
      FUN_005382e0(*(int *)(*(int *)(param_1 + 0x90) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 2));
  }
  if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x138))(1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}


undefined4 * __fastcall FUN_00534df0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c49f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  local_14 = (undefined4 *)FUN_005adb0f(0x6a0);
  local_8 = 0;
  local_14 = FUN_00537b10(local_14);
  local_8 = 0xffffffff;
  puVar1 = (undefined4 *)param_1[0x25];
  if ((undefined4 *)param_1[0x26] != puVar1) {
    *puVar1 = local_14;
    param_1[0x25] = param_1[0x25] + 4;
    ExceptionList = local_10;
    return local_14;
  }
  FUN_00414080(param_1 + 0x24,puVar1,&local_14);
  ExceptionList = local_10;
  return local_14;
}


void __fastcall FUN_00534e80(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  float10 fVar10;
  void *in_stack_ffffffa8;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)(param_1 + 0x90);
  local_14 = 0;
  if (*(int *)(param_1 + 0x94) - iVar6 >> 2 != 0) {
    do {
      iVar9 = local_14 * 4;
      iVar1 = *(int *)(iVar9 + iVar6);
      if ((*(int *)(iVar1 + 0x3c) == 4) &&
         (pvVar2 = *(void **)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4), pvVar2 != (void *)0x0))
      {
        FUN_00555630(pvVar2);
        iVar6 = *(int *)(param_1 + 0x90);
      }
      if (*(int *)(*(int *)(iVar9 + iVar6) + 0x514) == 0) {
        piVar3 = *(int **)(*(int *)(iVar9 + iVar6) + 0x53c);
        if (piVar3 != (int *)0x0) {
          fVar10 = (float10)(**(code **)(*piVar3 + 8))();
          uVar7 = (uint)fVar10;
          goto LAB_00534fa4;
        }
      }
      else {
        iVar6 = DAT_0065b3d4;
        if (DAT_0065b3d4 == 0) {
          iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
        }
        in_stack_ffffffa8 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
        FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
        iVar1 = *(int *)(*(int *)(param_1 + 0x90) + iVar9);
        bVar4 = FUN_00417780((void *)(iVar1 + 0x4f0),iVar6,*(undefined4 *)(iVar1 + 0x540),
                             in_stack_ffffffa8);
        uVar7 = (uint)bVar4;
LAB_00534fa4:
        iVar6 = *(int *)(iVar9 + *(int *)(param_1 + 0x90));
        if (uVar7 != *(uint *)(iVar6 + 0x7c)) {
          *(uint *)(iVar6 + 0x7c) = uVar7;
          FUN_00538bd0(*(void **)(iVar9 + *(int *)(param_1 + 0x90)),*(int **)(param_1 + 0xa0));
        }
      }
      iVar6 = *(int *)(iVar9 + *(int *)(param_1 + 0x90));
      if (*(int *)(iVar6 + 0x5c4) == 0) {
        pbVar8 = (byte *)(iVar6 + 0x450);
        if (0xf < *(uint *)(iVar6 + 0x464)) {
          pbVar8 = *(byte **)(iVar6 + 0x450);
        }
        uVar7 = FUN_004031f0(pbVar8,*(uint *)(iVar6 + 0x460),(byte *)&PTR_005ce008,0);
        if ((char)uVar7 == '\0') {
          FUN_004024e0(&stack0xffffffa8,(undefined4 *)(iVar6 + 0x450));
          local_8 = 0;
          puVar5 = FUN_00412df0();
          local_8 = 0xffffffff;
          bVar4 = FUN_004a1150(puVar5,in_stack_ffffffa8);
          goto LAB_00535087;
        }
      }
      else {
        iVar6 = DAT_0065b3d4;
        if (DAT_0065b3d4 == 0) {
          iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
        }
        in_stack_ffffffa8 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
        FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
        bVar4 = FUN_00417780((void *)(*(int *)(*(int *)(param_1 + 0x90) + iVar9) + 0x5a0),iVar6,0,
                             in_stack_ffffffa8);
LAB_00535087:
        iVar6 = *(int *)(iVar9 + *(int *)(param_1 + 0x90));
        if (bVar4 != *(byte *)(iVar6 + 0x4c)) {
          *(byte *)(iVar6 + 0x4c) = bVar4;
          FUN_00538bd0(*(void **)(iVar9 + *(int *)(param_1 + 0x90)),*(int **)(param_1 + 0xa0));
        }
      }
      iVar6 = *(int *)(iVar9 + *(int *)(param_1 + 0x90));
      if (*(int *)(iVar6 + 0x4a4) == 0) {
        piVar3 = *(int **)(iVar6 + 0x4cc);
        if (piVar3 != (int *)0x0) {
          fVar10 = (float10)(**(code **)(*piVar3 + 8))();
          uVar7 = (uint)fVar10;
          goto LAB_00535159;
        }
      }
      else {
        iVar6 = DAT_0065b3d4;
        if (DAT_0065b3d4 == 0) {
          iVar6 = *(int *)(DAT_0065b5cc + 0xd0);
        }
        in_stack_ffffffa8 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
        FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
        iVar1 = *(int *)(iVar9 + *(int *)(param_1 + 0x90));
        bVar4 = FUN_00417780((void *)(iVar1 + 0x480),iVar6,*(undefined4 *)(iVar1 + 0x4d0),
                             in_stack_ffffffa8);
        uVar7 = (uint)bVar4;
LAB_00535159:
        iVar6 = *(int *)(iVar9 + *(int *)(param_1 + 0x90));
        if (uVar7 != *(uint *)(iVar6 + 0x78)) {
          *(uint *)(iVar6 + 0x78) = uVar7;
          FUN_00538bd0(*(void **)(iVar9 + *(int *)(param_1 + 0x90)),*(int **)(param_1 + 0xa0));
        }
      }
      puVar5 = *(undefined4 **)(iVar9 + *(int *)(param_1 + 0x90));
      if (((float)puVar5[0x10e] != 0.0) || (0.0 < (float)puVar5[0x111])) {
LAB_005351dc:
        (**(code **)*puVar5)();
      }
      else {
        iVar6 = (int)(puVar5[0xe6] - puVar5[0xe5]) >> 0x1f;
        iVar9 = (int)(puVar5[0xe6] - puVar5[0xe5]) / 0x50 + iVar6;
        if ((iVar9 != iVar6) || ((0.0 < (float)puVar5[0xcd] || (puVar5[0x40] != iVar9 - iVar6))))
        goto LAB_005351dc;
      }
      iVar6 = *(int *)(param_1 + 0x90);
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(param_1 + 0x94) - iVar6 >> 2));
  }
  ExceptionList = local_10;
  return;
}


undefined4 __thiscall FUN_00535230(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x90) + uVar2 * 4);
      if (*(int *)(iVar1 + 900) == param_1) {
        return *(undefined4 *)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


undefined4 __thiscall FUN_00535280(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x90) + uVar2 * 4);
      if ((*(int *)(iVar1 + 0x3c) == 4) && (*(int *)(iVar1 + 900) == param_1)) {
        return *(undefined4 *)(*(int *)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4) + 300);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


int __thiscall FUN_005352e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = *(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x90) + uVar3 * 4);
      iVar2 = *(int *)(iVar1 + 900);
      if ((iVar2 != -1) && (iVar2 == param_1)) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return 0;
}


int __thiscall FUN_00535330(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x94) - *(int *)((int)this + 0x90) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x90) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x50) == param_1) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


undefined4 __thiscall FUN_00535370(void *this,float param_1,float param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  Camera *pCVar4;
  Ray *this_00;
  Vec3 *pVVar5;
  int iVar6;
  AABB *pAVar7;
  Sprite3D *this_01;
  uint uVar8;
  undefined4 uVar9;
  Size *pSVar10;
  Vec3 *pVVar11;
  float *pfVar12;
  Vec3 local_5c [12];
  Vec3 local_50 [12];
  Vec3 local_44 [12];
  Vec3 local_38 [12];
  Vec3 local_2c [12];
  Size local_20 [8];
  Ray *local_18;
  Ray *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c4a96;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (Ray *)0x0;
  local_8 = 0;
  pCVar4 = cocos2d::Camera::getDefaultCamera();
  if (pCVar4 == (Camera *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  cocos2d::Vec3::Vec3(local_50,param_1,param_2,-1.0);
  local_8._0_1_ = 1;
  cocos2d::Vec3::Vec3(local_38);
  local_8._0_1_ = 2;
  cocos2d::Vec3::Vec3(local_44,param_1,param_2,1.0);
  local_8._0_1_ = 3;
  cocos2d::Vec3::Vec3(local_2c);
  local_8._0_1_ = 4;
  cocos2d::Size::Size(local_20,(Size *)&DAT_0065ba28);
  pVVar5 = local_38;
  pVVar11 = local_50;
  pSVar10 = local_20;
  pCVar4 = cocos2d::Camera::getDefaultCamera();
  cocos2d::Camera::unproject(pCVar4,pSVar10,pVVar11,pVVar5);
  pVVar5 = local_2c;
  pVVar11 = local_44;
  pSVar10 = local_20;
  pCVar4 = cocos2d::Camera::getDefaultCamera();
  cocos2d::Camera::unproject(pCVar4,pSVar10,pVVar11,pVVar5);
  this_00 = (Ray *)FUN_005adb0f(0x18);
  local_8._0_1_ = 5;
  local_18 = this_00;
  pVVar5 = (Vec3 *)cocos2d::Vec3::operator-(local_2c,local_5c);
  local_8 = CONCAT31(local_8._1_3_,6);
  local_14 = (Ray *)0x1;
  iVar6 = FUN_004023e0();
  local_14 = (Ray *)cocos2d::Ray::Ray(this_00,(Vec3 *)(iVar6 + 0x2fc),pVVar5);
  local_8 = 4;
  cocos2d::Vec3::~Vec3(local_5c);
  uVar8 = 0;
  iVar6 = *(int *)((int)this + 0x90);
  if (*(int *)((int)this + 0x94) - iVar6 >> 2 != 0) {
    do {
      cVar2 = FUN_0053b1e0(*(int *)(iVar6 + uVar8 * 4));
      if (cVar2 != '\0') {
        iVar6 = *(int *)(*(int *)((int)this + 0x90) + uVar8 * 4);
        iVar1 = *(int *)(iVar6 + 0x44c);
        if ((iVar1 == 0) || (this_01 = *(Sprite3D **)(iVar1 + 0x3dc), this_01 == (Sprite3D *)0x0)) {
          this_01 = *(Sprite3D **)(iVar6 + 0x3dc);
        }
        pfVar12 = (float *)0x0;
        pAVar7 = cocos2d::Sprite3D::getAABB(this_01);
        bVar3 = cocos2d::Ray::intersects(local_14,pAVar7,pfVar12);
        if (bVar3) {
          uVar9 = *(undefined4 *)(*(int *)((int)this + 0x90) + uVar8 * 4);
          goto LAB_00535540;
        }
      }
      uVar8 = uVar8 + 1;
      iVar6 = *(int *)((int)this + 0x90);
    } while (uVar8 < (uint)(*(int *)((int)this + 0x94) - iVar6 >> 2));
  }
  uVar9 = 0;
LAB_00535540:
  cocos2d::Vec3::~Vec3(local_2c);
  cocos2d::Vec3::~Vec3(local_44);
  cocos2d::Vec3::~Vec3(local_38);
  cocos2d::Vec3::~Vec3(local_50);
  ExceptionList = local_10;
  return uVar9;
}


undefined1 * FUN_00535580(undefined1 *param_1,float param_2,float param_3)

{
  bool bVar1;
  Camera *pCVar2;
  Ray *this;
  Vec3 *pVVar3;
  int iVar4;
  AABB *pAVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  code *pcVar11;
  Size *pSVar12;
  Vec3 *pVVar13;
  float *pfVar14;
  Vec3 local_60 [12];
  Vec3 local_54 [12];
  Vec3 local_48 [12];
  Vec3 local_3c [12];
  Vec3 local_30 [12];
  Size local_24 [8];
  undefined4 local_1c;
  Ray *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c4b16;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  pCVar2 = cocos2d::Camera::getDefaultCamera();
  if (pCVar2 == (Camera *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
  }
  else {
    cocos2d::Vec3::Vec3(local_54,param_2,param_3,-1.0);
    local_8._0_1_ = 1;
    cocos2d::Vec3::Vec3(local_3c);
    local_8._0_1_ = 2;
    cocos2d::Vec3::Vec3(local_48,param_2,param_3,1.0);
    local_8._0_1_ = 3;
    cocos2d::Vec3::Vec3(local_30);
    local_8._0_1_ = 4;
    cocos2d::Size::Size(local_24,(Size *)&DAT_0065ba28);
    pVVar3 = local_3c;
    pVVar13 = local_54;
    pSVar12 = local_24;
    pCVar2 = cocos2d::Camera::getDefaultCamera();
    cocos2d::Camera::unproject(pCVar2,pSVar12,pVVar13,pVVar3);
    pVVar3 = local_30;
    pVVar13 = local_48;
    pSVar12 = local_24;
    pCVar2 = cocos2d::Camera::getDefaultCamera();
    cocos2d::Camera::unproject(pCVar2,pSVar12,pVVar13,pVVar3);
    this = (Ray *)FUN_005adb0f(0x18);
    local_8._0_1_ = 5;
    local_18 = this;
    pVVar3 = (Vec3 *)cocos2d::Vec3::operator-(local_30,local_60);
    local_8 = CONCAT31(local_8._1_3_,6);
    local_1c = 2;
    iVar4 = FUN_004023e0();
    local_18 = (Ray *)cocos2d::Ray::Ray(this,(Vec3 *)(iVar4 + 0x2fc),pVVar3);
    pcVar11 = ~Vec3_exref;
    local_8 = 4;
    cocos2d::Vec3::~Vec3(local_60);
    uVar8 = 0;
    iVar4 = *(int *)(local_14 + 0x90);
    if (*(int *)(local_14 + 0x94) - iVar4 >> 2 != 0) {
      do {
        iVar9 = *(int *)(iVar4 + uVar8 * 4);
        piVar10 = (int *)(iVar4 + uVar8 * 4);
        if (*(int *)(iVar9 + 0x3c) == 6) {
          if (*(Sprite3D **)(iVar9 + 0x3dc) != (Sprite3D *)0x0) {
            pfVar14 = (float *)0x0;
            pAVar5 = cocos2d::Sprite3D::getAABB(*(Sprite3D **)(iVar9 + 0x3dc));
            bVar1 = cocos2d::Ray::intersects(local_18,pAVar5,pfVar14);
            if (bVar1) {
              iVar9 = *(int *)(*(int *)(local_14 + 0x90) + uVar8 * 4);
              piVar10 = (int *)(*(int *)(local_14 + 0x90) + uVar8 * 4);
              if (*(int *)(iVar9 + 0x100) != 0) {
                FUN_004024e0(param_1,(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x100) + 0x1c) + 0xc))
                ;
                cocos2d::Vec3::~Vec3(local_30);
                cocos2d::Vec3::~Vec3(local_48);
                cocos2d::Vec3::~Vec3(local_3c);
                cocos2d::Vec3::~Vec3(local_54);
                ExceptionList = local_10;
                return param_1;
              }
              goto LAB_00535751;
            }
          }
        }
        else {
LAB_00535751:
          pbVar7 = (byte *)(iVar9 + 0x24);
          if (0xf < *(uint *)(iVar9 + 0x38)) {
            pbVar7 = *(byte **)(iVar9 + 0x24);
          }
          uVar6 = FUN_004031f0(pbVar7,*(uint *)(iVar9 + 0x34),(byte *)&PTR_005ce008,0);
          if ((char)uVar6 == '\0') {
            if ((*(int *)(iVar9 + 0x44c) == 0) || (*(int *)(*(int *)(iVar9 + 0x44c) + 0x3dc) == 0))
            {
              iVar4 = *piVar10;
            }
            else {
              iVar4 = *(int *)(*piVar10 + 0x44c);
            }
            pfVar14 = (float *)0x0;
            pAVar5 = cocos2d::Sprite3D::getAABB(*(Sprite3D **)(iVar4 + 0x3dc));
            bVar1 = cocos2d::Ray::intersects(local_18,pAVar5,pfVar14);
            if (bVar1) {
              FUN_004024e0(param_1,(undefined4 *)
                                   (*(int *)(*(int *)(local_14 + 0x90) + uVar8 * 4) + 0x24));
              cocos2d::Vec3::~Vec3(local_30);
              cocos2d::Vec3::~Vec3(local_48);
              cocos2d::Vec3::~Vec3(local_3c);
              cocos2d::Vec3::~Vec3(local_54);
              ExceptionList = local_10;
              return param_1;
            }
          }
        }
        uVar8 = uVar8 + 1;
        iVar4 = *(int *)(local_14 + 0x90);
        pcVar11 = ~Vec3_exref;
      } while (uVar8 < (uint)(*(int *)(local_14 + 0x94) - iVar4 >> 2));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = 0;
    FUN_00402690(param_1,&PTR_005ce008,0);
    (*pcVar11)();
    (*pcVar11)();
    (*pcVar11)();
    (*pcVar11)();
  }
  ExceptionList = local_10;
  return param_1;
}


void FUN_005358b0(Vec3 *param_1,Vec3 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    cocos2d::Vec3::~Vec3(param_1 + 0xc);
    cocos2d::Vec3::~Vec3(param_1);
  }
  return;
}


void FUN_005358e0(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x1c)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


int __thiscall FUN_00535930(void *this,Vec3 *param_1,Vec3 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Vec3 *this_00;
  Vec3 *pVVar7;
  Vec3 *pVVar8;
  Vec3 *pVVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005c4b5a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = *(int *)this;
  iVar4 = (*(int *)((int)this + 4) - iVar5) / 0x1c;
  if (iVar4 == 0x9249249) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar4 + 1;
  uVar6 = (*(int *)((int)this + 8) - iVar5) / 0x1c;
  uVar2 = uVar1;
  if ((uVar6 <= 0x9249249 - (uVar6 >> 1)) && (uVar2 = (uVar6 >> 1) + uVar6, uVar2 < uVar1)) {
    uVar2 = uVar1;
  }
  uVar6 = uVar2 * 0x1c;
  if (uVar2 < 0x924924a) {
    if (0xfff < uVar6) goto LAB_005359fc;
    if (uVar6 == 0) {
      pVVar8 = (Vec3 *)0x0;
    }
    else {
      pVVar8 = (Vec3 *)FUN_005adb0f(uVar6);
    }
  }
  else {
    uVar6 = 0xffffffff;
LAB_005359fc:
    uVar3 = uVar6 + 0x23;
    if (uVar3 <= uVar6) {
      uVar3 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar3);
    if (iVar4 == 0) goto LAB_00535a1f;
    pVVar8 = (Vec3 *)(iVar4 + 0x23U & 0xffffffe0);
    *(int *)(pVVar8 + -4) = iVar4;
  }
  local_8 = 0;
  iVar5 = (((int)param_1 - iVar5) / 0x1c) * 0x1c;
  cocos2d::Vec3::Vec3(pVVar8 + iVar5,param_2);
  local_8._0_1_ = 1;
  cocos2d::Vec3::Vec3(pVVar8 + iVar5 + 0xc,param_2 + 0xc);
  local_8._0_1_ = 0;
  *(undefined4 *)(pVVar8 + iVar5 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  pVVar7 = *(Vec3 **)((int)this + 4);
  if (param_1 == pVVar7) {
    this_00 = pVVar8;
    for (pVVar9 = *(Vec3 **)this; local_8._0_1_ = 2, pVVar9 != pVVar7; pVVar9 = pVVar9 + 0x1c) {
      cocos2d::Vec3::Vec3(this_00,pVVar9);
      local_8._0_1_ = 3;
      cocos2d::Vec3::Vec3(this_00 + 0xc,pVVar9 + 0xc);
      *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(pVVar9 + 0x18);
      this_00 = this_00 + 0x1c;
    }
  }
  else {
    FUN_00535bf0(*(Vec3 **)this,param_1,pVVar8);
    FUN_00535bf0(param_1,*(Vec3 **)((int)this + 4),pVVar8 + iVar5 + 0x1c);
  }
  pVVar7 = *(Vec3 **)this;
  if (pVVar7 != (Vec3 *)0x0) {
    pVVar9 = *(Vec3 **)((int)this + 4);
    if (pVVar7 != pVVar9) {
      do {
        cocos2d::Vec3::~Vec3(pVVar7 + 0xc);
        cocos2d::Vec3::~Vec3(pVVar7);
        pVVar7 = pVVar7 + 0x1c;
      } while (pVVar7 != pVVar9);
      pVVar7 = *(Vec3 **)this;
    }
    pVVar9 = pVVar7;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pVVar7) / 0x1c) * 0x1c)) &&
       (pVVar9 = *(Vec3 **)(pVVar7 + -4), (Vec3 *)0x1f < pVVar7 + (-4 - (int)pVVar9))) {
LAB_00535a1f:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pVVar9);
  }
  *(Vec3 **)this = pVVar8;
  *(Vec3 **)((int)this + 4) = pVVar8 + uVar1 * 0x1c;
  *(Vec3 **)((int)this + 8) = pVVar8 + uVar2 * 0x1c;
  ExceptionList = local_10;
  return *(int *)this + iVar5;
}


Vec3 * FUN_00535bf0(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c4b91;
  uStack_7 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8 = 0;
    cocos2d::Vec3::Vec3(param_3,param_1);
    local_8 = 1;
    cocos2d::Vec3::Vec3(param_3 + 0xc,param_1 + 0xc);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    param_3 = param_3 + 0x1c;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


void __fastcall FUN_00535c90(undefined4 *param_1)

{
  Vec3 *pVVar1;
  Vec3 *this;
  
  pVVar1 = (Vec3 *)param_1[1];
  for (this = (Vec3 *)*param_1; this != pVVar1; this = this + 0x1c) {
    cocos2d::Vec3::~Vec3(this + 0xc);
    cocos2d::Vec3::~Vec3(this);
  }
  return;
}


int __cdecl FUN_00535cc0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_s_neutral_005dfc38)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_00535d0e;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
LAB_00535d0e:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
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


int __cdecl FUN_00535d50(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_s_neutral_005dfc5c)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_00535d9e;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  iVar7 = 0;
LAB_00535d9e:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
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


int __cdecl FUN_00535de0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_DAT_005dfccc)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_00535e2e;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar7 = 0;
LAB_00535e2e:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
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


undefined4 * __thiscall FUN_00535e70(void *this,void *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint in_stack_00000018;
  byte *in_stack_ffffffb4;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_005c4bbb;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_14 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0x100;
  *(undefined1 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xbf800000;
  *(undefined4 *)((int)this + 0x14) = 0xbf800000;
  FUN_004024e0(&stack0xffffffb4,&param_1);
  uVar1 = FUN_004a76c0(in_stack_ffffffb4);
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar1 = FUN_004136c0();
  *(undefined4 *)((int)this + 0x20) = uVar1;
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  iVar3 = *(int *)(*(int *)((int)this + 0x1c) + 4);
  *(int *)((int)this + 0x18) = iVar3;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(undefined4 *)((int)this + 0x54) = 0xffffffff;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  *(undefined4 *)((int)this + 0x68) = 0xffffffff;
  *(undefined4 *)((int)this + 0x6c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0xffffffff;
  if (*(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c) >> 2 != 0) {
    do {
      if (**(int **)(*(int *)(iVar3 + 0x1c) + uVar4 * 4) != -1) {
        *(undefined4 *)((int)this + uVar4 * 4 + 0x2c) = 0;
        iVar3 = *(int *)((int)this + 0x18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c) >> 2));
  }
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
  ExceptionList = local_1c;
  return this;
}


// WARNING: Type propagation algorithm not settling

void __thiscall FUN_00535fd0(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  RenderTexture *this_00;
  Sprite *pSVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  void *pvVar16;
  int iVar17;
  uint uVar18;
  void *in_stack_ffffff20;
  char *pcVar19;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  void *local_78 [5];
  uint local_64;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  byte *******local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4c38;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  pcVar19 = (&PTR_s_Female_005dfc94)[*(int *)((int)param_1 + 0x69c)];
  pcVar10 = pcVar19;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_60,pcVar19,(int)pcVar10 - (int)(pcVar19 + 1));
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_90 = 0;
  do {
    local_8c = 0;
    do {
      local_88 = 0;
      do {
        this_00 = cocos2d::RenderTexture::create(0x100,0x100);
        cocos2d::Ref::retain((Ref *)this_00);
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (byte *******)((uint)local_30[0] & 0xffffff00);
        FUN_00402690(local_30,"Neutral_Head_Base.png",0x15);
        local_8._0_1_ = 1;
        pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_30);
        local_8._0_1_ = 0;
        uVar4 = (undefined1)local_8;
        local_8._0_1_ = 0;
        if (0xf < local_1c) {
          pppppppbVar15 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pppppppbVar15 = (byte *******)local_30[0][-1],
             (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)pppppppbVar15))))
          goto LAB_00536968;
          FUN_005adb3f(pppppppbVar15);
        }
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (byte *******)((uint)local_30[0] & 0xffffff00);
        (**(code **)(*(int *)pSVar5 + 0x25c))();
        local_8._0_1_ = 2;
        (**(code **)(*(int *)pSVar5 + 0xa0))();
        local_8._0_1_ = 0;
        (**(code **)(*(int *)pSVar5 + 0xb0))();
        (**(code **)(*(int *)pSVar5 + 0xb0))();
        local_8._0_1_ = 3;
        (**(code **)(*(int *)pSVar5 + 0x4c))();
        local_8._0_1_ = 0;
        (**(code **)(*(int *)this_00 + 0x290))();
        (**(code **)(*(int *)pSVar5 + 0x2c))();
        cocos2d::Node::visit((Node *)pSVar5);
        iVar11 = *(int *)((int)this + 0x18);
        local_84 = 0;
        if (*(int *)(iVar11 + 0x20) - *(int *)(iVar11 + 0x1c) >> 2 != 0) {
LAB_005361e6:
          iVar11 = *(int *)(*(int *)(iVar11 + 0x1c) + local_84 * 4);
          uVar4 = (undefined1)local_8;
          if (*(int *)(iVar11 + 0x24) == 0) {
            pbVar6 = FUN_00412f20((void *)(*(int *)((int)this + 0x1c) + 0x6c),(byte *)(iVar11 + 8));
            iVar11 = *(int *)pbVar6;
            uVar4 = (undefined1)local_8;
            if (iVar11 != -1) {
              FUN_004024e0(local_30,local_60);
              local_8._0_1_ = 4;
              if (*(char *)(*(int *)(*(int *)(*(int *)((int)this + 0x18) + 0x1c) + local_84 * 4) +
                           0x28) != '\0') {
                FUN_00402690(local_30,"Neutral",7);
              }
              FUN_00403640(local_30,&DAT_0061bc80,1);
              pcVar19 = "Head";
              do {
                pcVar10 = pcVar19;
                pcVar19 = pcVar10 + 1;
              } while (*pcVar10 != '\0');
              FUN_00403640(local_30,&DAT_00607128,(uint)(pcVar10 + -0x607128));
              FUN_00403640(local_30,&DAT_0061bc80,1);
              iVar17 = *(int *)((int)this + 0x18);
              iVar2 = *(int *)(iVar17 + 0x1c);
              iVar3 = *(int *)(iVar2 + local_84 * 4);
              pbVar6 = (byte *)(iVar3 + 8);
              if (0xf < *(uint *)(iVar3 + 0x1c)) {
                pbVar6 = *(byte **)(iVar3 + 8);
              }
              uVar7 = FUN_004031f0(pbVar6,*(uint *)(iVar3 + 0x18),(byte *)"EyeColour",9);
              if ((char)uVar7 == '\0') {
                iVar2 = *(int *)(iVar2 + local_84 * 4);
                pvVar16 = (void *)(iVar2 + 8);
                if (0xf < *(uint *)(iVar2 + 0x1c)) {
                  pvVar16 = *(void **)(iVar2 + 8);
                }
                FUN_00403640(local_30,pvVar16,*(uint *)(iVar2 + 0x18));
                FUN_00403640(local_30,&DAT_0061bc80,1);
                iVar17 = *(int *)((int)this + 0x18);
              }
              else if (local_90 == 1) {
                local_8._0_1_ = 0;
                uVar4 = (undefined1)local_8;
                if (0xf < local_1c) {
                  pppppppbVar15 = local_30[0];
                  if ((local_1c + 1 < 0x1000) ||
                     (pppppppbVar15 = (byte *******)local_30[0][-1],
                     (byte *)((int)local_30[0] + (-4 - (int)pppppppbVar15)) < (byte *)0x20)) {
                    FUN_005adb3f(pppppppbVar15);
                    uVar4 = (undefined1)local_8;
                    goto LAB_0053632a;
                  }
                  goto LAB_00536968;
                }
                goto LAB_0053632a;
              }
              iVar2 = *(int *)(iVar17 + 0x1c);
              iVar3 = *(int *)(iVar2 + local_84 * 4);
              pbVar6 = (byte *)(iVar3 + 8);
              if (0xf < *(uint *)(iVar3 + 0x1c)) {
                pbVar6 = *(byte **)(iVar3 + 8);
              }
              uVar7 = FUN_004031f0(pbVar6,*(uint *)(iVar3 + 0x18),(byte *)"EyeColour",9);
              if ((char)uVar7 == '\0') {
                iVar11 = *(int *)(iVar2 + local_84 * 4);
                pbVar6 = (byte *)(iVar11 + 8);
                if (0xf < *(uint *)(iVar11 + 0x1c)) {
                  pbVar6 = *(byte **)(iVar11 + 8);
                }
                uVar7 = FUN_004031f0(pbVar6,*(uint *)(iVar11 + 0x18),&DAT_0061feb8,4);
                if ((char)uVar7 == '\0') {
                  iVar11 = *(int *)(iVar2 + local_84 * 4);
                  pbVar6 = (byte *)(iVar11 + 8);
                  if (0xf < *(uint *)(iVar11 + 0x1c)) {
                    pbVar6 = *(byte **)(iVar11 + 8);
                  }
                  uVar7 = FUN_004031f0(pbVar6,*(uint *)(iVar11 + 0x18),(byte *)"Mouth",5);
                  if ((char)uVar7 != '\0') {
                    pcVar19 = *(char **)((int)&PTR_s_Neutral_005dfc70 + local_88);
                    pcVar10 = pcVar19;
                    do {
                      cVar1 = *pcVar10;
                      pcVar10 = pcVar10 + 1;
                    } while (cVar1 != '\0');
                    FUN_00403640(local_30,pcVar19,(int)pcVar10 - (int)(pcVar19 + 1));
                    uVar7 = 1;
                    pcVar19 = "_";
                    goto LAB_0053655a;
                  }
                }
                else {
                  pcVar19 = *(char **)((int)&PTR_s_Neutral_005dfc48 + local_8c);
                  pcVar10 = pcVar19;
                  do {
                    cVar1 = *pcVar10;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  FUN_00403640(local_30,pcVar19,(int)pcVar10 - (int)(pcVar19 + 1));
                  FUN_00403640(local_30,&DAT_0061bc80,1);
                  if (local_90 == 1) {
                    uVar7 = 6;
                    pcVar19 = "Blink_";
LAB_0053655a:
                    FUN_00403640(local_30,pcVar19,uVar7);
                  }
                }
              }
              else {
                FUN_00403640(local_30,"Eyes_",5);
                pcVar19 = *(char **)((int)&PTR_s_Neutral_005dfc48 + local_8c);
                pcVar10 = pcVar19;
                do {
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                FUN_00403640(local_30,pcVar19,(int)pcVar10 - (int)(pcVar19 + 1));
                FUN_00403640(local_30,&DAT_0061bc80,1);
                FUN_00403640(local_30,"Colour_",7);
                pcVar19 = (&PTR_DAT_005dfcd8)[iVar11];
                pcVar10 = pcVar19;
                do {
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar1 != '\0');
                FUN_00403640(local_30,pcVar19,(int)pcVar10 - (int)(pcVar19 + 1));
                FUN_00403640(local_30,&DAT_0061bc80,1);
              }
              puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_78,&DAT_005e1d38);
              local_8._0_1_ = 5;
              puVar13 = puVar8;
              if (0xf < (uint)puVar8[5]) {
                puVar13 = (undefined4 *)*puVar8;
              }
              FUN_00403640(local_30,puVar13,puVar8[4]);
              local_8._0_1_ = 4;
              if (0xf < local_64) {
                pvVar16 = local_78[0];
                if ((0xfff < local_64 + 1) &&
                   (pvVar16 = *(void **)((int)local_78[0] + -4), uVar4 = (undefined1)local_8,
                   0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar16)))) goto LAB_00536968;
                FUN_005adb3f(pvVar16);
              }
              FUN_00403640(local_30,&DAT_0061fe9c,4);
              uVar18 = local_1c;
              uVar7 = local_20;
              pppppppbVar15 = local_30[0];
              pppppppbVar14 = (byte *******)local_30;
              if (0xf < local_1c) {
                pppppppbVar14 = local_30[0];
              }
              uVar9 = FUN_004031f0((byte *)pppppppbVar14,local_20,
                                   (byte *)"Male_Head_Eyes_Raised_Colour_Brown_5.png",0x28);
              if ((char)uVar9 != '\0') {
                FUN_00402690(local_30,"Male_Head_Eyes_Raised_Colour_Brown_4.png",0x28);
                uVar7 = local_20;
                uVar18 = local_1c;
                pppppppbVar15 = local_30[0];
              }
              pppppppbVar14 = (byte *******)local_30;
              if (0xf < uVar18) {
                pppppppbVar14 = pppppppbVar15;
              }
              uVar9 = FUN_004031f0((byte *)pppppppbVar14,uVar7,
                                   (byte *)"Male_Head_Eyes_Raised_Colour_Blue_5.png",0x27);
              if ((char)uVar9 != '\0') {
                FUN_00402690(local_30,"Male_Head_Eyes_Raised_Colour_Blue_4.png",0x27);
                uVar7 = local_20;
                uVar18 = local_1c;
                pppppppbVar15 = local_30[0];
              }
              pppppppbVar14 = (byte *******)local_30;
              if (0xf < uVar18) {
                pppppppbVar14 = pppppppbVar15;
              }
              uVar9 = FUN_004031f0((byte *)pppppppbVar14,uVar7,
                                   (byte *)"Male_Head_Eyes_Raised_Colour_Green_5.png",0x28);
              if ((char)uVar9 != '\0') {
                FUN_00402690(local_30,"Male_Head_Eyes_Raised_Colour_Green_4.png",0x28);
                uVar7 = local_20;
                uVar18 = local_1c;
                pppppppbVar15 = local_30[0];
              }
              pppppppbVar14 = (byte *******)local_30;
              if (0xf < uVar18) {
                pppppppbVar14 = pppppppbVar15;
              }
              uVar9 = FUN_004031f0((byte *)pppppppbVar14,uVar7,
                                   (byte *)"Male_Head_Eyes_Raised_Blink_5.png",0x21);
              if ((char)uVar9 != '\0') {
                FUN_00402690(local_30,"Male_Head_Eyes_Raised_Blink_4.png",0x21);
                uVar7 = local_20;
                uVar18 = local_1c;
                pppppppbVar15 = local_30[0];
              }
              pppppppbVar14 = (byte *******)local_30;
              if (0xf < uVar18) {
                pppppppbVar14 = pppppppbVar15;
              }
              uVar7 = FUN_004031f0((byte *)pppppppbVar14,uVar7,(byte *)"Male_Head_Eyes_Raised_5.png"
                                   ,0x1b);
              if ((char)uVar7 != '\0') {
                FUN_00402690(local_30,"Male_Head_Eyes_Raised_4.png",0x1b);
              }
              pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_30);
              local_8._0_1_ = 6;
              (**(code **)(*(int *)pSVar5 + 0xa0))();
              local_8._0_1_ = 4;
              (**(code **)(*(int *)pSVar5 + 0xb0))();
              (**(code **)(*(int *)pSVar5 + 0xb0))();
              local_8._0_1_ = 7;
              (**(code **)(*(int *)pSVar5 + 0x4c))();
              local_8._0_1_ = 4;
              if (*(char *)(*(int *)(*(int *)(*(int *)((int)this + 0x18) + 0x1c) + local_84 * 4) +
                           0x20) != '\0') {
                (**(code **)(*(int *)pSVar5 + 0x25c))();
              }
              (**(code **)(*(int *)pSVar5 + 0x2c))();
              cocos2d::Node::visit((Node *)pSVar5);
              local_8._0_1_ = 0;
              uVar4 = (undefined1)local_8;
              local_8._0_1_ = 0;
              if (0xf < local_1c) {
                pppppppbVar15 = local_30[0];
                if ((0xfff < local_1c + 1) &&
                   (pppppppbVar15 = (byte *******)local_30[0][-1], uVar4 = (undefined1)local_8,
                   (byte *)0x1f < (byte *)((int)local_30[0] + (-4 - (int)pppppppbVar15))))
                goto LAB_00536968;
                FUN_005adb3f(pppppppbVar15);
                uVar4 = (undefined1)local_8;
              }
            }
          }
LAB_0053632a:
          local_8._0_1_ = uVar4;
          iVar11 = *(int *)((int)this + 0x18);
          local_84 = local_84 + 1;
          if ((uint)(*(int *)(iVar11 + 0x20) - *(int *)(iVar11 + 0x1c) >> 2) <= local_84)
          goto LAB_00536342;
          goto LAB_005361e6;
        }
LAB_00536342:
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
        pcVar19 = "head";
        do {
          pcVar10 = pcVar19;
          pcVar19 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        FUN_00402690(local_48,&DAT_0061fde4,(uint)(pcVar10 + -0x61fde4));
        local_8 = CONCAT31(local_8._1_3_,8);
        FUN_00403640(local_48,&DAT_0061bc80,1);
        pcVar19 = *(char **)((int)&PTR_s_neutral_005dfc5c + local_8c);
        pcVar10 = pcVar19;
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_00403640(local_48,pcVar19,(int)pcVar10 - (int)(pcVar19 + 1));
        FUN_00403640(local_48,&DAT_0061bc80,1);
        if (*(char *)((int)this + 0xe) == '\0') {
          pcVar10 = *(char **)((int)&PTR_s_neutral_005dfc38 + local_88);
          pcVar19 = pcVar10 + 1;
          pcVar12 = pcVar10;
          do {
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
        }
        else {
          pcVar10 = "open";
          pcVar12 = "open";
          pcVar19 = "pen";
          do {
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
        }
        FUN_00403640(local_48,pcVar10,(int)pcVar12 - (int)pcVar19);
        if (local_90 == 1) {
          FUN_00403640(local_48,"_blink",6);
        }
        (**(code **)(*(int *)this_00 + 0x2a4))();
        FUN_004024e0(&stack0xffffff20,local_48);
        FUN_0053c7b0(param_1,this_00,in_stack_ffffff20);
        FUN_00591070("DETAIL","Added element \'%s\'");
        local_8._0_1_ = 0;
        if (0xf < local_34) {
          pvVar16 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar16 = *(void **)((int)local_48[0] + -4), uVar4 = (undefined1)local_8,
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar16)))) goto LAB_00536968;
          FUN_005adb3f(pvVar16);
        }
        local_88 = local_88 + 4;
      } while (local_88 < 0x10);
      local_8c = local_8c + 4;
    } while (local_8c < 0x14);
    local_90 = local_90 + 1;
  } while (local_90 < 2);
  FUN_00591070("DETAIL","Added %d head texture state variations");
  if (0xf < local_4c) {
    pvVar16 = local_60[0];
    if ((0xfff < local_4c + 1) &&
       (pvVar16 = *(void **)((int)local_60[0] + -4), uVar4 = (undefined1)local_8,
       0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar16)))) {
LAB_00536968:
      local_8._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar16);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005369a0(void *this,void *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  RenderTexture *this_00;
  basic_string<> *pbVar4;
  Sprite *pSVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  void *pvVar12;
  undefined **ppuVar13;
  int iVar14;
  void *pvVar15;
  uint local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4cda;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  pcVar2 = (&PTR_s_Female_005dfc94)[*(int *)((int)param_1 + 0x69c)];
  pcVar9 = pcVar2;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_5c,pcVar2,(int)pcVar9 - (int)(pcVar2 + 1));
  local_8 = 0;
  this_00 = cocos2d::RenderTexture::create(0x100,0x100);
  cocos2d::Ref::retain((Ref *)this_00);
  pbVar4 = (basic_string<> *)FUN_00591e00((undefined1 *)local_2c,"%s_%s_Skin.png");
  local_8._0_1_ = 1;
  pvVar15 = (void *)0x536a6a;
  pSVar5 = cocos2d::Sprite::create(pbVar4);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pvVar12 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar12 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) {
LAB_00536a99:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  (**(code **)(*(int *)pSVar5 + 0x25c))();
  local_8._0_1_ = 2;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  local_8._0_1_ = 0;
  (**(code **)(*(int *)pSVar5 + 0xb0))();
  (**(code **)(*(int *)pSVar5 + 0xb0))();
  local_8._0_1_ = 3;
  (**(code **)(*(int *)pSVar5 + 0x4c))();
  local_8._0_1_ = 0;
  (**(code **)(*(int *)this_00 + 0x290))();
  (**(code **)(*(int *)pSVar5 + 0x2c))();
  cocos2d::Node::visit((Node *)pSVar5);
  iVar10 = *(int *)((int)this + 0x18);
  local_78 = 0;
  if (*(int *)(iVar10 + 0x20) - *(int *)(iVar10 + 0x1c) >> 2 != 0) {
    do {
      iVar14 = local_78 * 4;
      iVar10 = *(int *)(iVar14 + *(int *)(iVar10 + 0x1c));
      if ((*(int *)(iVar10 + 0x24) == param_2) &&
         (pbVar6 = FUN_00412f20((void *)(*(int *)((int)this + 0x1c) + 0x6c),(byte *)(iVar10 + 8)),
         *(int *)pbVar6 != -1)) {
        FUN_004024e0(local_44,local_5c);
        local_8._0_1_ = 4;
        if (*(char *)(*(int *)(iVar14 + *(int *)(*(int *)((int)this + 0x18) + 0x1c)) + 0x28) != '\0'
           ) {
          FUN_00402690(local_44,"Neutral",7);
        }
        FUN_00403640(local_44,&DAT_0061bc80,1);
        pcVar2 = (&PTR_DAT_005dfcc0)[param_2];
        pcVar9 = pcVar2;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_00403640(local_44,pcVar2,(int)pcVar9 - (int)(pcVar2 + 1));
        FUN_00403640(local_44,&DAT_0061bc80,1);
        iVar10 = *(int *)(iVar14 + *(int *)(*(int *)((int)this + 0x18) + 0x1c));
        pvVar12 = (void *)(iVar10 + 8);
        if (0xf < *(uint *)(iVar10 + 0x1c)) {
          pvVar12 = *(void **)(iVar10 + 8);
        }
        FUN_00403640(local_44,pvVar12,*(uint *)(iVar10 + 0x18));
        iVar10 = *(int *)(*(int *)((int)this + 0x18) + 0x1c);
        iVar3 = *(int *)(iVar10 + iVar14);
        pbVar6 = (byte *)(iVar3 + 8);
        if (0xf < *(uint *)(iVar3 + 0x1c)) {
          pbVar6 = *(byte **)(iVar3 + 8);
        }
        uVar7 = FUN_004031f0(pbVar6,*(uint *)(iVar3 + 0x18),&DAT_0061feb8,4);
        if ((char)uVar7 == '\0') {
          iVar3 = *(int *)(iVar14 + iVar10);
          pbVar6 = (byte *)(iVar3 + 8);
          if (0xf < *(uint *)(iVar3 + 0x1c)) {
            pbVar6 = *(byte **)(iVar3 + 8);
          }
          uVar7 = FUN_004031f0(pbVar6,*(uint *)(iVar3 + 0x18),(byte *)"Mouth",5);
          if ((char)uVar7 == '\0') {
            FUN_00412f20((void *)(*(int *)((int)this + 0x1c) + 0x6c),
                         (byte *)(*(int *)(iVar14 + iVar10) + 8));
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_0061fee0);
            local_8._0_1_ = 9;
            puVar11 = puVar8;
            if (0xf < (uint)puVar8[5]) {
              puVar11 = (undefined4 *)*puVar8;
            }
            FUN_00403640(local_44,puVar11,puVar8[4]);
            local_8._0_1_ = 4;
            if (0xf < local_60) {
              pvVar12 = local_74[0];
              if ((0xfff < local_60 + 1) &&
                 (pvVar12 = *(void **)((int)local_74[0] + -4),
                 0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar12)))) goto LAB_00536a99;
              FUN_005adb3f(pvVar12);
            }
          }
          FUN_00403640(local_44,&DAT_0061fe9c,4);
          pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_44);
          local_8._0_1_ = 10;
          (**(code **)(*(int *)pSVar5 + 0xa0))();
          local_8._0_1_ = 4;
          (**(code **)(*(int *)pSVar5 + 0xb0))();
          (**(code **)(*(int *)pSVar5 + 0xb0))();
          local_8._0_1_ = 0xb;
          (**(code **)(*(int *)pSVar5 + 0x4c))();
          local_8._0_1_ = 4;
          if (*(char *)(*(int *)(*(int *)(*(int *)((int)this + 0x18) + 0x1c) + local_78 * 4) + 0x20)
              != '\0') {
            (**(code **)(*(int *)pSVar5 + 0x25c))();
          }
          (**(code **)(*(int *)pSVar5 + 0x2c))();
          cocos2d::Node::visit((Node *)pSVar5);
        }
        else {
          ppuVar13 = &PTR_s_Neutral_005dfc48;
          do {
            FUN_004024e0(local_2c,local_44);
            local_8._0_1_ = 5;
            FUN_00403640(local_2c,&DAT_0061bc80,1);
            pcVar2 = *ppuVar13;
            pcVar9 = pcVar2;
            do {
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            FUN_00403640(local_2c,pcVar2,(int)pcVar9 - (int)(pcVar2 + 1));
            FUN_00412f20((void *)(*(int *)((int)this + 0x1c) + 0x6c),
                         (byte *)(*(int *)(*(int *)(*(int *)((int)this + 0x18) + 0x1c) + iVar14) + 8
                                 ));
            puVar8 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_0061fee0);
            local_8._0_1_ = 6;
            puVar11 = puVar8;
            if (0xf < (uint)puVar8[5]) {
              puVar11 = (undefined4 *)*puVar8;
            }
            FUN_00403640(local_2c,puVar11,puVar8[4]);
            local_8._0_1_ = 5;
            if (0xf < local_60) {
              pvVar12 = local_74[0];
              if ((0xfff < local_60 + 1) &&
                 (pvVar12 = *(void **)((int)local_74[0] + -4),
                 0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar12)))) goto LAB_00536a99;
              FUN_005adb3f(pvVar12);
            }
            FUN_00403640(local_2c,&DAT_0061fe9c,4);
            pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_2c);
            local_8._0_1_ = 7;
            (**(code **)(*(int *)pSVar5 + 0xa0))();
            local_8._0_1_ = 5;
            (**(code **)(*(int *)pSVar5 + 0xb0))();
            (**(code **)(*(int *)pSVar5 + 0xb0))();
            local_8._0_1_ = 8;
            (**(code **)(*(int *)pSVar5 + 0x4c))();
            local_8._0_1_ = 5;
            if (*(char *)(*(int *)(*(int *)(*(int *)((int)this + 0x18) + 0x1c) + local_78 * 4) +
                         0x20) != '\0') {
              (**(code **)(*(int *)pSVar5 + 0x25c))();
            }
            (**(code **)(*(int *)pSVar5 + 0x2c))();
            cocos2d::Node::visit((Node *)pSVar5);
            local_8._0_1_ = 4;
            if (0xf < local_18) {
              pvVar12 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar12 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12)))) goto LAB_00536a99;
              FUN_005adb3f(pvVar12);
            }
            ppuVar13 = ppuVar13 + 1;
          } while ((int)ppuVar13 < 0x5dfc5c);
        }
        local_8._0_1_ = 0;
        if (0xf < local_30) {
          pvVar12 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar12 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar12)))) goto LAB_00536a99;
          FUN_005adb3f(pvVar12);
        }
      }
      iVar10 = *(int *)((int)this + 0x18);
      local_78 = local_78 + 1;
    } while (local_78 < (uint)(*(int *)(iVar10 + 0x20) - *(int *)(iVar10 + 0x1c) >> 2));
  }
  (**(code **)(*(int *)this_00 + 0x2a4))();
  pcVar2 = (&PTR_DAT_005dfccc)[param_2];
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pcVar9 = pcVar2;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00402690(local_2c,pcVar2,(int)pcVar9 - (int)(pcVar2 + 1));
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_004024e0(&stack0xffffff24,local_2c);
  FUN_0053c7b0(param_1,this_00,pvVar15);
  if (0xf < local_18) {
    pvVar15 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar15 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  if (0xf < local_48) {
    pvVar15 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar15 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar15);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00537140(void *this,void *param_1)

{
  int iVar1;
  
  FUN_0053c760((int)param_1);
  iVar1 = 0;
  do {
    if (iVar1 == 0) {
      FUN_00535fd0(this,param_1);
    }
    else {
      FUN_005369a0(this,param_1,iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}


void __thiscall FUN_00537180(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  Texture2D *pTVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int iVar11;
  void *in_stack_ffffff68;
  byte *in_stack_ffffff80;
  char *pcVar12;
  uint uVar13;
  uint local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c4d48;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = *(int *)((int)this + 0x20);
  FUN_004132d0(*(int **)(iVar2 + 4));
  local_4c = 0;
  *(int *)(*(int *)((int)this + 0x20) + 4) = iVar2;
  **(int **)((int)this + 0x20) = iVar2;
  local_8 = 0xffffffff;
  *(int *)(*(int *)((int)this + 0x20) + 8) = iVar2;
  *(undefined4 *)((int)this + 0x24) = 0;
  iVar2 = *(int *)((int)this + 0x1c);
  if (*(int *)(iVar2 + 100) - *(int *)(iVar2 + 0x60) >> 2 != 0) {
    do {
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      local_8 = 1;
      if (*(char *)(*(int *)(*(int *)(iVar2 + 0x60) + local_4c * 4) + 0x30) == '\0') {
        pcVar12 = (&PTR_s_Female_005dfc94)[*(int *)((int)param_1 + 0x69c)];
        pcVar6 = pcVar12;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar13 = (int)pcVar6 - (int)(pcVar12 + 1);
      }
      else {
        uVar13 = 7;
        pcVar12 = "Neutral";
      }
      FUN_00403640(local_48,pcVar12,uVar13);
      FUN_00403640(local_48,&DAT_0061bc80,1);
      puVar9 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x1c) + 0x60) + local_4c * 4);
      puVar4 = puVar9;
      if (0xf < (uint)puVar9[5]) {
        puVar4 = (undefined4 *)*puVar9;
      }
      FUN_00403640(local_48,puVar4,puVar9[4]);
      FUN_00591070("RENDER","Showing addition \'%s\'");
      iVar2 = *(int *)(*(int *)((int)this + 0x1c) + 0x60);
      iVar11 = *(int *)(iVar2 + local_4c * 4);
      if (*(char *)(iVar11 + 0x31) == '\0') {
        pbVar5 = (byte *)(iVar11 + 0x34);
        if (0xf < *(uint *)(iVar11 + 0x48)) {
          pbVar5 = *(byte **)(iVar11 + 0x34);
        }
        uVar13 = FUN_004031f0(pbVar5,*(uint *)(iVar11 + 0x44),(byte *)&PTR_005ce008,0);
        if ((char)uVar13 == '\0') {
          FUN_00591e00(&stack0xffffff80,"%s.png");
          local_8._0_1_ = 4;
        }
        else {
          iVar2 = *(int *)(iVar2 + local_4c * 4);
          pbVar5 = (byte *)(iVar2 + 0x18);
          if (0xf < *(uint *)(iVar2 + 0x2c)) {
            pbVar5 = *(byte **)(iVar2 + 0x18);
          }
          uVar13 = FUN_004031f0(pbVar5,*(uint *)(iVar2 + 0x28),(byte *)&PTR_005ce008,0);
          if ((char)uVar13 == '\0') {
            FUN_00591e00(&stack0xffffff80,"Texture_%s_%s.png");
            local_8._0_1_ = 5;
          }
          else {
            FUN_00591e00(&stack0xffffff80,"Texture_%s_0.png");
            local_8._0_1_ = 6;
          }
        }
        FUN_004024e0(&stack0xffffff68,local_48);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0053a450(param_1,true,in_stack_ffffff68);
      }
      else {
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        pcVar12 = (&PTR_DAT_005dfccc)[*(int *)(iVar11 + 0x4c)];
        pcVar6 = pcVar12;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00402690(local_30,pcVar12,(int)pcVar6 - (int)(pcVar12 + 1));
        local_8._0_1_ = 2;
        if (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 0x60) + local_4c * 4) + 0x4c) ==
            0) {
          FUN_00403640(local_30,&DAT_0061bc80,1);
          pcVar12 = (&PTR_s_neutral_005dfc5c)
                    [*(int *)(*(int *)(*(int *)((int)param_1 + 0x100) + 0x1c) + 0x58)];
          pcVar6 = pcVar12;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00403640(local_30,pcVar12,(int)pcVar6 - (int)(pcVar12 + 1));
          FUN_00403640(local_30,&DAT_0061bc80,1);
          if (*(char *)((int)this + 0xe) == '\0') {
            pcVar6 = (&PTR_s_neutral_005dfc38)
                     [*(int *)(*(int *)(*(int *)((int)param_1 + 0x100) + 0x1c) + 0x54)];
            pcVar12 = pcVar6 + 1;
            pcVar7 = pcVar6;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          else {
            pcVar6 = "open";
            pcVar7 = "open";
            pcVar12 = "pen";
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          FUN_00403640(local_30,pcVar6,(int)pcVar7 - (int)pcVar12);
          if (*(char *)((int)this + 0xd) == '\0') {
            FUN_00403640(local_30,"_blink",6);
          }
        }
        FUN_004024e0(&stack0xffffff80,local_30);
        iVar2 = FUN_0053c8f0(param_1,in_stack_ffffff80);
        FUN_004024e0(&stack0xffffff80,local_48);
        local_8._0_1_ = 3;
        pTVar3 = (Texture2D *)(**(code **)(*(int *)(iVar2 + 0x278) + 0xc))();
        local_8._0_1_ = 2;
        FUN_0053a2d0(param_1,true,pTVar3,in_stack_ffffff80);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (0xf < local_1c) {
          pvVar10 = local_30[0];
          if ((0xfff < local_1c + 1) &&
             (pvVar10 = *(void **)((int)local_30[0] + -4),
             0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10)))) goto LAB_005376e1;
          FUN_005adb3f(pvVar10);
        }
      }
      iVar2 = *(int *)((int)this + 0x1c);
      local_50 = 0;
      iVar11 = *(int *)(*(int *)(iVar2 + 0x60) + local_4c * 4);
      iVar8 = *(int *)(iVar11 + 0x58) - *(int *)(iVar11 + 0x54);
      iVar11 = iVar8 >> 0x1f;
      if (iVar8 / 0x18 + iVar11 != iVar11) {
        iVar11 = 0;
        do {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          pcVar12 = (&PTR_s_Female_005dfc94)[*(int *)((int)param_1 + 0x69c)];
          pcVar6 = pcVar12;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00402690(local_30,pcVar12,(int)pcVar6 - (int)(pcVar12 + 1));
          local_8._0_1_ = 7;
          FUN_00403640(local_30,&DAT_0061bc80,1);
          puVar4 = (undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 0x60) + local_4c * 4) +
                            0x54) + iVar11);
          puVar9 = puVar4;
          if (0xf < (uint)puVar4[5]) {
            puVar9 = (undefined4 *)*puVar4;
          }
          FUN_00403640(local_30,puVar9,puVar4[4]);
          pbVar5 = FUN_004a2bf0((void *)((int)this + 0x20),(byte *)local_30);
          *pbVar5 = 1;
          FUN_00591070("RENDER","Hiding %s");
          local_8 = CONCAT31(local_8._1_3_,1);
          if (0xf < local_1c) {
            pvVar10 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar10 = *(void **)((int)local_30[0] + -4),
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10)))) goto LAB_005376e1;
            FUN_005adb3f(pvVar10);
          }
          iVar2 = *(int *)((int)this + 0x1c);
          iVar11 = iVar11 + 0x18;
          local_50 = local_50 + 1;
          iVar8 = *(int *)(*(int *)(iVar2 + 0x60) + local_4c * 4);
        } while (local_50 < (uint)((*(int *)(iVar8 + 0x58) - *(int *)(iVar8 + 0x54)) / 0x18));
      }
      local_8 = 0xffffffff;
      if (0xf < local_34) {
        pvVar10 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar10 = *(void **)((int)local_48[0] + -4),
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10)))) {
LAB_005376e1:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar10);
        iVar2 = *(int *)((int)this + 0x1c);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (uint)(*(int *)(iVar2 + 100) - *(int *)(iVar2 + 0x60) >> 2));
  }
  FUN_005376f0(this,param_1);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005376f0(void *this,void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  Texture2D *pTVar7;
  undefined1 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  void *pvVar12;
  char *pcVar13;
  byte *in_stack_ffffff70;
  int local_68;
  int local_64;
  void *local_60;
  void *local_5c;
  uint local_58;
  void *local_54;
  undefined1 local_50;
  undefined3 uStack_4f;
  undefined1 *local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c4d88;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = param_1;
  local_58 = 0;
  local_60 = this;
  if (*(int *)(*(int *)((int)this + 0x18) + 0x2c) - *(int *)(*(int *)((int)this + 0x18) + 0x28) >> 2
      != 0) {
    local_5c = (void *)((int)this + 0x20);
    do {
      uVar3 = local_58;
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      pcVar13 = (&PTR_s_Female_005dfc94)[*(int *)((int)local_54 + 0x69c)];
      pcVar9 = pcVar13;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(local_48,pcVar13,(int)pcVar9 - (int)(pcVar13 + 1));
      local_8 = 0;
      FUN_00403640(local_48,&DAT_0061bc80,1);
      puVar2 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x18) + 0x28) + uVar3 * 4);
      puVar11 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar11 = (undefined4 *)*puVar2;
      }
      FUN_00403640(local_48,puVar11,puVar2[4]);
      iVar6 = *(int *)(*(int *)(*(int *)((int)this + 0x18) + 0x28) + uVar3 * 4);
      iVar10 = *(int *)(iVar6 + 0x20) - *(int *)(iVar6 + 0x1c);
      iVar6 = iVar10 >> 0x1f;
      if (iVar10 / 0x18 + iVar6 != iVar6) {
        FUN_00403640(local_48,&DAT_0061bc80,1);
        puVar2 = *(undefined4 **)
                  (*(int *)(*(int *)(*(int *)((int)this + 0x18) + 0x28) + uVar3 * 4) + 0x1c);
        puVar11 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar11 = (undefined4 *)*puVar2;
        }
        FUN_00403640(local_48,puVar11,puVar2[4]);
      }
      _local_50 = CONCAT31(uStack_4f,1);
      FUN_00419820((void *)((int)this + 0x20),&local_68,(byte *)local_48);
      iVar6 = local_64;
      iVar10 = 0;
      local_4c = (undefined1 *)local_68;
      if (local_68 != local_64) {
        do {
          iVar10 = iVar10 + 1;
          std::_Tree_unchecked_const_iterator<>::operator++
                    ((_Tree_unchecked_const_iterator<> *)&local_4c);
        } while (local_4c != (undefined1 *)iVar6);
        if (iVar10 != 0) {
          pbVar5 = FUN_004a2bf0(local_5c,(byte *)local_48);
          uVar8 = local_50;
          if (*pbVar5 == 1) {
            uVar8 = 0;
          }
          _local_50 = CONCAT31(uStack_4f,uVar8);
        }
      }
      this = local_60;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      pcVar13 = (&PTR_DAT_005dfccc)
                [*(int *)(*(int *)(*(int *)(*(int *)((int)local_60 + 0x18) + 0x28) + uVar3 * 4) +
                         0x18)];
      pcVar9 = pcVar13;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(local_30,pcVar13,(int)pcVar9 - (int)(pcVar13 + 1));
      local_8._0_1_ = 1;
      pvVar12 = local_54;
      if (*(int *)(*(int *)(*(int *)(*(int *)((int)this + 0x18) + 0x28) + uVar3 * 4) + 0x18) == 0) {
        FUN_00403640(local_30,&DAT_0061bc80,1);
        pvVar12 = local_54;
        pcVar13 = (&PTR_s_neutral_005dfc5c)
                  [*(int *)(*(int *)(*(int *)((int)local_54 + 0x100) + 0x1c) + 0x58)];
        pcVar9 = pcVar13;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_00403640(local_30,pcVar13,(int)pcVar9 - (int)(pcVar13 + 1));
        FUN_00403640(local_30,&DAT_0061bc80,1);
        if (*(char *)((int)this + 0xe) == '\0') {
          pcVar13 = (&PTR_s_neutral_005dfc38)
                    [*(int *)(*(int *)(*(int *)((int)pvVar12 + 0x100) + 0x1c) + 0x54)];
          pcVar9 = pcVar13;
          do {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          pcVar9 = pcVar9 + -(int)(pcVar13 + 1);
        }
        else {
          pcVar13 = "open";
          pcVar4 = "open";
          do {
            pcVar9 = pcVar4;
            pcVar4 = pcVar9 + 1;
          } while (*pcVar9 != '\0');
          pcVar9 = pcVar9 + -0x61fe58;
        }
        FUN_00403640(local_30,pcVar13,(uint)pcVar9);
        if (*(char *)((int)this + 0xd) == '\0') {
          FUN_00403640(local_30,"_blink",6);
        }
      }
      FUN_004024e0(&stack0xffffff70,local_30);
      iVar6 = FUN_0053c8f0(pvVar12,in_stack_ffffff70);
      local_4c = &stack0xffffff70;
      FUN_004024e0(&stack0xffffff70,local_48);
      local_8._0_1_ = 2;
      pTVar7 = (Texture2D *)(**(code **)(*(int *)(iVar6 + 0x278) + 0xc))();
      local_8._0_1_ = 1;
      FUN_0053a2d0(pvVar12,SUB41(_local_50,0),pTVar7,in_stack_ffffff70);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_1c) {
        pvVar12 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar12 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12)))) goto LAB_00537a4f;
        FUN_005adb3f(pvVar12);
      }
      local_8 = -1;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_34) {
        pvVar12 = local_48[0];
        if ((0xfff < local_34 + 1) &&
           (pvVar12 = *(void **)((int)local_48[0] + -4),
           0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar12)))) {
LAB_00537a4f:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar12);
      }
      local_58 = local_58 + 1;
    } while (local_58 <
             (uint)(*(int *)(*(int *)((int)this + 0x18) + 0x2c) -
                    *(int *)(*(int *)((int)this + 0x18) + 0x28) >> 2));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


int __cdecl FUN_00537a80(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte **ppbVar6;
  int iVar7;
  byte *pbVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pbVar2 = param_1;
  iVar7 = 0;
  do {
    uVar3 = in_stack_00000018;
    pbVar8 = (&PTR_s_standing_005dfce4)[iVar7];
    pbVar4 = pbVar8;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    ppbVar6 = &param_1;
    if (0xf < in_stack_00000018) {
      ppbVar6 = (byte **)pbVar2;
    }
    uVar5 = FUN_004031f0((byte *)ppbVar6,in_stack_00000014,pbVar8,(int)pbVar4 - (int)(pbVar8 + 1));
    if ((char)uVar5 != '\0') goto LAB_00537ace;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  iVar7 = 0;
LAB_00537ace:
  if (0xf < uVar3) {
    pbVar8 = pbVar2;
    if (0xfff < uVar3 + 1) {
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


undefined4 * __fastcall FUN_00537b10(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c5014;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = RoomObject::vftable;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[0xf] = 0;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xf;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_8 = 3;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_00402690(param_1 + 0x20,"stand_normal",0xc);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xf;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0xf;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0xf;
  *(undefined1 *)(param_1 + 0x32) = 0;
  local_8 = 7;
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  iVar1 = rand();
  param_1[0x3e] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((int)param_1 + 0xfe) = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = (float)(iVar1 % 10 + 7);
  _eh_vector_constructor_iterator_
            (param_1 + 0x41,0x18,10,(_func_void_void_ptr *)&LAB_00403160,FUN_00401b20);
  local_8 = 8;
  _eh_vector_constructor_iterator_
            (param_1 + 0x7d,0x18,10,(_func_void_void_ptr *)&LAB_00403160,FUN_00401b20);
  local_8 = 9;
  param_1[0xb9] = 0x3f800000;
  param_1[0xba] = 0x3f800000;
  param_1[0xbb] = 0x3f800000;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0xbc),0.0,0.0,0.0);
  local_8 = 10;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0xbf),0.0,0.0,0.0);
  local_8 = 0xb;
  cocos2d::Quaternion::Quaternion((Quaternion *)(param_1 + 0xc2),0.0,0.0,0.0,0.0);
  local_8 = 0xc;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  param_1[199] = 0;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 200),0.0,0.0,0.0);
  local_8 = 0xd;
  param_1[0xcd] = 0;
  param_1[0xce] = 0x3f800000;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0xd0),0.0,0.0,0.0);
  local_8 = 0xe;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0xd4),0.0,0.0,0.0);
  local_8 = 0xf;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0xd7),0.0,0.0,0.0);
  local_8 = 0x10;
  cocos2d::Rect::Rect((Rect *)(param_1 + 0xdb),0.0,0.0,0.0,0.0);
  local_8 = 0x11;
  cocos2d::Color3B::Color3B((Color3B *)(param_1 + 0xdf),'\0','\0','\0');
  *(undefined2 *)((int)param_1 + 0x37f) = 0;
  *(undefined1 *)((int)param_1 + 0x381) = 0;
  param_1[0xe1] = 0xffffffff;
  param_1[0xe2] = 0;
  *(undefined1 *)(param_1 + 0xe3) = 1;
  param_1[0xe4] = 1;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  local_8 = 0x12;
  param_1[0xe8] = 0;
  *(undefined2 *)(param_1 + 0xe9) = 0;
  param_1[0xea] = 0x437f0000;
  param_1[0xeb] = 0x3f800000;
  param_1[0xec] = 0x3dcccccd;
  param_1[0xed] = 0x3f800000;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0xee),0.0,0.0,0.0);
  local_8 = 0x13;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0xf1),0.0,0.0,0.0);
  local_8 = 0x14;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(undefined2 *)(param_1 + 0xfd) = 0;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0xfe),0.0,0.0,0.0);
  local_8 = 0x15;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x101),0.0,0.0,0.0);
  local_8 = 0x16;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x104));
  local_8 = 0x17;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x107),0.0,0.0,0.0);
  local_8 = 0x18;
  cocos2d::Vec3::Vec3((Vec3 *)(param_1 + 0x10a),0.0,0.0,0.0);
  param_1[0x10e] = 0;
  param_1[0x10f] = 0x40000000;
  *(undefined1 *)(param_1 + 0x110) = 0;
  param_1[0x111] = 0;
  *(undefined2 *)(param_1 + 0x112) = 0;
  param_1[0x113] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0xf;
  *(undefined1 *)(param_1 + 0x114) = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0xf;
  *(undefined1 *)(param_1 + 0x11a) = 0;
  param_1[0x129] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0xffffffff;
  param_1[0x139] = 0;
  param_1[0x13a] = 0xf;
  *(undefined1 *)(param_1 + 0x135) = 0;
  param_1[0x145] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0xffffffff;
  param_1[0x155] = 0;
  param_1[0x156] = 0xf;
  *(undefined1 *)(param_1 + 0x151) = 0;
  param_1[0x161] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0xf;
  *(undefined1 *)(param_1 + 0x162) = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0xf;
  *(undefined1 *)(param_1 + 0x175) = 0;
  *(undefined1 *)(param_1 + 0x17b) = 0;
  param_1[0x17c] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x193) = 1;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  puVar2 = param_1 + 0x20;
  _local_8 = CONCAT31(uStack_7,0x29);
  param_1[0x1a7] = 0;
  if (param_1 + 0x26 != puVar2) {
    if (0xf < (uint)param_1[0x25]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    FUN_00402690(param_1 + 0x26,puVar2,param_1[0x24]);
  }
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  ExceptionList = local_10;
  return param_1;
}
