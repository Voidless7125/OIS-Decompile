#include "../ois_server.exe.h"


undefined4 * __thiscall
FUN_004dc7b0(void *this,uint param_1,uint param_2,void *param_3,uint param_4)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t _Size;
  void *_Dst;
  undefined4 *puVar4;
  void *pvVar5;
  size_t _Size_00;
  
  uVar2 = param_1;
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
                    // WARNING: Subroutine does not return
    FUN_004036c0();
  }
  uVar3 = uVar1 - param_1;
  if (uVar3 < param_2) {
    param_2 = uVar3;
  }
  if (param_2 == param_4) {
    pvVar5 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar5 = *(void **)this;
    }
    memmove((void *)((int)pvVar5 + param_1),param_3,param_4);
    return this;
  }
  _Size = (uVar3 - param_2) + 1;
  if (param_4 < param_2) {
    *(uint *)((int)this + 0x10) = (uVar1 - param_2) + param_4;
    pvVar5 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar5 = *(void **)this;
    }
    pvVar5 = (void *)(param_1 + (int)pvVar5);
    memmove(pvVar5,param_3,param_4);
    memmove((void *)((int)pvVar5 + param_4),(void *)(param_2 + (int)pvVar5),_Size);
    return this;
  }
  uVar3 = param_4 - param_2;
  if (*(int *)((int)this + 0x14) - uVar1 < uVar3) {
    param_1 = param_1 & 0xffffff00;
    puVar4 = FUN_004dc940(this,uVar3,param_1,uVar2,param_2,param_3,param_4);
    return puVar4;
  }
  *(uint *)((int)this + 0x10) = uVar3 + uVar1;
  pvVar5 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar5 = *(void **)this;
  }
  _Dst = (void *)((int)pvVar5 + param_1);
  _Src = (void *)((int)_Dst + param_2);
  _Size_00 = param_4;
  if ((_Dst < (void *)((int)param_3 + param_4)) && (param_3 <= (void *)((int)pvVar5 + uVar1))) {
    if (param_3 < _Src) {
      _Size_00 = (int)_Src - (int)param_3;
    }
    else {
      _Size_00 = 0;
    }
  }
  memmove((void *)(uVar3 + (int)_Src),_Src,_Size);
  memmove(_Dst,param_3,_Size_00);
  memcpy((void *)((int)_Dst + _Size_00),(void *)(uVar3 + _Size_00 + (int)param_3),param_4 - _Size_00
        );
  return this;
}


undefined4 * __thiscall FUN_004dc910(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x24) = 0;
  if (param_1 != 0) {
    *(undefined ***)this = std::_Func_impl_no_alloc<>::vftable;
    *(int *)((int)this + 4) = param_1;
    *(void **)((int)this + 0x24) = this;
  }
  return this;
}


undefined4 * __thiscall
FUN_004dc940(void *this,uint param_1,undefined4 param_2,size_t param_3,int param_4,void *param_5,
            size_t param_6)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  void *_Dst;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (0x7fffffffU - iVar1 < param_1) {
                    // WARNING: Subroutine does not return
    FUN_00402940();
  }
  uVar2 = *(uint *)((int)this + 0x14);
  uVar6 = iVar1 + param_1 | 0xf;
  if (uVar6 < 0x80000000) {
    if (0x7fffffff - (uVar2 >> 1) < uVar2) {
      uVar6 = 0x7fffffff;
    }
    else {
      uVar3 = (uVar2 >> 1) + uVar2;
      if (uVar6 < uVar3) {
        uVar6 = uVar3;
      }
    }
  }
  else {
    uVar6 = 0x7fffffff;
  }
  uVar3 = uVar6 + 1;
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_005adb0f(uVar3);
    }
  }
  else {
    uVar4 = uVar6 + 0x24;
    if (uVar4 <= uVar3) {
      uVar4 = 0xffffffff;
    }
    iVar5 = FUN_005adb0f(uVar4);
    if (iVar5 == 0) goto LAB_004dca70;
    _Dst = (void *)(iVar5 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst - 4) = iVar5;
  }
  *(uint *)((int)this + 0x10) = iVar1 + param_1;
  *(uint *)((int)this + 0x14) = uVar6;
  pvVar7 = (void *)((int)_Dst + param_3);
  _Size = ((iVar1 - param_3) - param_4) + 1;
  if (uVar2 < 0x10) {
    memcpy(_Dst,this,param_3);
    memcpy(pvVar7,param_5,param_6);
    memcpy((void *)(param_6 + (int)pvVar7),(void *)(param_3 + param_4 + (int)this),_Size);
    *(void **)this = _Dst;
    return this;
  }
  _Src = *(void **)this;
  memcpy(_Dst,_Src,param_3);
  memcpy(pvVar7,param_5,param_6);
  memcpy((void *)(param_6 + (int)pvVar7),(void *)((int)_Src + param_4 + param_3),_Size);
  pvVar7 = _Src;
  if ((uVar2 + 1 < 0x1000) ||
     (pvVar7 = *(void **)((int)_Src + -4), (uint)((int)_Src + (-4 - (int)pvVar7)) < 0x20)) {
    FUN_005adb3f(pvVar7);
    *(void **)this = _Dst;
    return this;
  }
LAB_004dca70:
                    // WARNING: Subroutine does not return
  _invalid_parameter_noinfo_noreturn();
}


undefined4 __fastcall FUN_004dcac0(undefined4 param_1)

{
  return param_1;
}


void __thiscall FUN_004dcad0(void *this,int *param_1)

{
  if (*param_1 != 0) {
    *(undefined ***)this = std::_Func_impl_no_alloc<>::vftable;
    *(int *)((int)this + 4) = *param_1;
    *(void **)((int)this + 0x24) = this;
  }
  return;
}


void __thiscall FUN_004dcaf0(void *this,char param_1)

{
  if (param_1 != '\0') {
    FUN_005adb3f(this);
  }
  return;
}


TypeDescriptor * FUN_004dcb10(void)

{
  return &.P6A_NPAVShip@@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z::
          RTTI_Type_Descriptor;
}


void __thiscall FUN_004dcb20(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  return;
}


void __thiscall FUN_004dcb40(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = *param_3;
  uVar1 = *(undefined8 *)(param_3 + 4);
  param_3[4] = 0;
  param_3[5] = 0xf;
  *(undefined1 *)param_3 = 0;
  (**(code **)((int)this + 4))(*param_1,*param_2,uVar2,param_3[1],param_3[2],param_3[3],uVar1,this);
  return;
}


int __cdecl FUN_004dcba0(byte *param_1)

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
      iVar4 = toupper((int)*(char *)(iVar9 + (int)ppbVar7));
      *(char *)(iVar9 + (int)ppbVar3) = (char)iVar4;
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar8);
  }
  pbVar2 = param_1;
  iVar8 = 0;
  do {
    pbVar10 = (&PTR_DAT_005dee68)[iVar8];
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
    if ((char)uVar6 != '\0') goto LAB_004dcc6c;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x43);
  iVar8 = 0;
LAB_004dcc6c:
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


undefined4 * __fastcall FUN_004dccc0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  switch(param_1) {
  case 1:
    return (undefined4 *)(DAT_0065b5cc + 0xf4);
  case 2:
    return &DAT_006557b0;
  case 3:
    return &DAT_00655750;
  case 4:
    return &DAT_0065b610;
  case 5:
    return (undefined4 *)(DAT_0065b5cc + 0x1f0);
  case 6:
    return (undefined4 *)(DAT_0065b5cc + 0x10c);
  case 7:
    return &DAT_0065506c;
  case 8:
    return &DAT_00655070;
  case 9:
    return (undefined4 *)&DAT_0065b39b;
  case 10:
    return &DAT_006557c8;
  case 0xb:
    return (undefined4 *)&DAT_0065506a;
  case 0xc:
    return (undefined4 *)&DAT_00655068;
  case 0xd:
    return (undefined4 *)&DAT_0065b3cf;
  case 0xe:
    return (undefined4 *)&DAT_0065506b;
  case 0xf:
    return (undefined4 *)&DAT_00655069;
  case 0x10:
    iVar2 = FUN_004124e0();
    return (undefined4 *)(iVar2 + 0x1c);
  case 0x11:
    return &DAT_006557e0;
  case 0x12:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(*(int *)(iVar2 + 0x11c) + 8);
  case 0x13:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(*(int *)(iVar2 + 0x11c) + 0x4c);
  case 0x14:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(*(int *)(iVar2 + 0x11c) + 0xc);
  case 0x15:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(*(int *)(iVar2 + 0x11c) + 0x50);
  case 0x16:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(*(int *)(iVar2 + 0x11c) + 0x1c);
  case 0x17:
    iVar2 = FUN_00412d40();
    return *(undefined4 **)(iVar2 + 0x11c);
  case 0x18:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(*(int *)(iVar2 + 0x11c) + 0x94);
  case 0x19:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(*(int *)(iVar2 + 0x11c) + 0x90);
  case 0x1a:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(*(int *)(iVar2 + 0x11c) + 0xa4);
  case 0x1b:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xcc);
  case 0x1c:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xd0);
  case 0x1d:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xd4);
  case 0x1e:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xdc);
  case 0x1f:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xe0);
  case 0x20:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xe9);
  case 0x21:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x10c);
  case 0x22:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x110);
  case 0x23:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x114);
  case 0x24:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x118);
  case 0x25:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xf4);
  case 0x26:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x109);
  case 0x27:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xf8);
  case 0x28:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xfc);
  case 0x29:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x108);
  case 0x2a:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xd8);
  case 0x2b:
    return (undefined4 *)(DAT_0065b444 + 0x118);
  case 0x2c:
    return (undefined4 *)(DAT_0065b444 + 0x119);
  case 0x2d:
    return (undefined4 *)(DAT_0065b444 + 0x11a);
  case 0x2e:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xf0);
  case 0x2f:
    puVar1 = (undefined4 *)FUN_004123c0();
    return puVar1;
  case 0x30:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xe4);
  case 0x31:
    iVar2 = FUN_004b32a0();
    return (undefined4 *)(iVar2 + 8);
  case 0x32:
    return (undefined4 *)(DAT_0065b444 + 0x141);
  case 0x33:
    return (undefined4 *)(DAT_0065b444 + 0x140);
  case 0x34:
    return (undefined4 *)(DAT_0065b444 + 0x142);
  case 0x35:
    puVar1 = (undefined4 *)FUN_00412280();
    return puVar1;
  case 0x36:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x6c);
  case 0x37:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x84);
  case 0x38:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0x9c);
  case 0x39:
    iVar2 = FUN_00412d40();
    return (undefined4 *)(iVar2 + 0xb4);
  case 0x3a:
    return (undefined4 *)(DAT_0065b444 + 0xa4);
  case 0x3b:
    return (undefined4 *)(DAT_0065b444 + 0xac);
  case 0x3c:
    return (undefined4 *)(DAT_0065b444 + 200);
  case 0x3d:
    return (undefined4 *)(DAT_0065b444 + 0xe4);
  case 0x3e:
    return (undefined4 *)(DAT_0065b444 + 0x100);
  case 0x3f:
    return (undefined4 *)(DAT_0065b444 + 0x11b);
  case 0x40:
    return (undefined4 *)(DAT_0065b444 + 0x11c);
  case 0x41:
    return (undefined4 *)(DAT_0065b444 + 0x14c);
  case 0x42:
    return (undefined4 *)(DAT_0065b5cc + 0x25c);
  default:
    return (undefined4 *)0x0;
  }
}


int * __fastcall FUN_004dd090(int *param_1,undefined4 param_2)

{
  int *this;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be1f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  switch(param_2) {
  case 0x10:
    iVar2 = FUN_004124e0();
    local_8 = 0;
    uVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar3 = *(int *)(iVar2 + 0x38);
    if (*(int *)(iVar2 + 0x3c) - iVar3 >> 2 != 0) {
      do {
        this = (int *)param_1[1];
        puVar1 = *(undefined4 **)(iVar3 + uVar4 * 4);
        if ((int *)param_1[2] == this) {
          FUN_00403840(param_1,this,puVar1);
        }
        else {
          FUN_004024e0(this,puVar1);
          param_1[1] = param_1[1] + 0x18;
        }
        uVar4 = uVar4 + 1;
        iVar3 = *(int *)(iVar2 + 0x38);
      } while (uVar4 < (uint)(*(int *)(iVar2 + 0x3c) - iVar3 >> 2));
      ExceptionList = local_10;
      return param_1;
    }
    break;
  case 0x11:
    FUN_0042b900(param_1,(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224) + 0x38));
    ExceptionList = local_10;
    return param_1;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    break;
  case 0x41:
    FUN_00411a40(param_1);
    ExceptionList = local_10;
    return param_1;
  case 0x42:
    FUN_00411d20(DAT_0065b444,param_1);
    ExceptionList = local_10;
    return param_1;
  }
  ExceptionList = local_10;
  return param_1;
}


void __fastcall FUN_004dd240(undefined4 param_1)

{
  char *pcVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  byte *in_stack_ffffffc4;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar5 = DAT_0065b5cc;
  pvVar2 = DAT_0065b444;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be228;
  local_10 = ExceptionList;
  switch(param_1) {
  case 2:
  case 3:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    ExceptionList = &local_10;
    FUN_004b2910();
    ExceptionList = local_10;
    return;
  case 0x10:
    ExceptionList = &local_10;
    iVar5 = FUN_004124e0();
    FUN_004024e0(&stack0xffffffc4,(undefined4 *)(iVar5 + 0x1c));
    local_8 = 0;
    pvVar2 = (void *)FUN_004124e0();
    local_8 = 0xffffffff;
    FUN_004a3800(pvVar2,in_stack_ffffffc4);
    ExceptionList = local_10;
    return;
  case 0x11:
    pvVar2 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
    ExceptionList = &local_10;
    FUN_00527930(pvVar2,*(uint *)((int)pvVar2 + 0x14));
    ExceptionList = local_10;
    return;
  case 0x12:
    iVar5 = 0;
    ExceptionList = &local_10;
    pvVar2 = (void *)FUN_00412d40();
    FUN_0048bcf0(pvVar2,iVar5);
    ExceptionList = local_10;
    return;
  case 0x13:
    ExceptionList = &local_10;
    iVar5 = FUN_00412d40();
    iVar5 = *(int *)(iVar5 + 0x11c);
    iVar4 = *(int *)(iVar5 + 0x4c);
    if (iVar4 < 0) {
      iVar4 = *(int *)(iVar5 + 0x5c);
    }
    else {
      *(int *)(iVar5 + 0x5c) = iVar4;
      *(undefined4 *)(iVar5 + 0x50) = 0xffffffff;
    }
    if (-1 < iVar4) {
      *(undefined4 *)(iVar5 + 0x48) = 2;
      *(undefined4 *)(iVar5 + 0x60) = 1;
      ExceptionList = local_10;
      return;
    }
    goto LAB_004dd40e;
  case 0x14:
    iVar5 = 0;
    ExceptionList = &local_10;
    pvVar2 = (void *)FUN_00412d40();
    FUN_0048bbf0(pvVar2,iVar5);
    ExceptionList = local_10;
    return;
  case 0x15:
    ExceptionList = &local_10;
    iVar5 = FUN_00412d40();
    iVar5 = *(int *)(iVar5 + 0x11c);
    iVar4 = *(int *)(iVar5 + 0x50);
    if (iVar4 < 0) {
      iVar4 = *(int *)(iVar5 + 0x5c);
    }
    else {
      *(int *)(iVar5 + 0x5c) = iVar4;
      *(undefined4 *)(iVar5 + 0x4c) = 0xffffffff;
    }
    if (-1 < iVar4) {
      *(undefined4 *)(iVar5 + 0x48) = 1;
      *(undefined4 *)(iVar5 + 0x60) = 1;
      ExceptionList = local_10;
      return;
    }
LAB_004dd40e:
    *(undefined4 *)(iVar5 + 0x48) = 0;
    ExceptionList = local_10;
    return;
  case 0x16:
    ExceptionList = &local_10;
    FUN_00412d40();
    ExceptionList = local_10;
    return;
  case 0x18:
    iVar5 = 2;
    ExceptionList = &local_10;
    pvVar2 = (void *)FUN_00412d40();
    FUN_0048bbf0(pvVar2,iVar5);
    ExceptionList = local_10;
    return;
  case 0x19:
    iVar5 = 2;
    ExceptionList = &local_10;
    pvVar2 = (void *)FUN_00412d40();
    FUN_0048bcf0(pvVar2,iVar5);
    ExceptionList = local_10;
    return;
  case 0x1b:
    ExceptionList = &local_10;
    iVar5 = FUN_00412d40();
    *(undefined1 *)(iVar5 + 0xe8) = 0;
    ExceptionList = local_10;
    return;
  case 0x1c:
    ExceptionList = &local_10;
    FUN_00412d40();
    goto LAB_004dd471;
  case 0x1d:
    ExceptionList = &local_10;
    iVar5 = FUN_00412d40();
    *(undefined1 *)(iVar5 + 0xe8) = 0;
LAB_004dd471:
    iVar5 = DAT_0065b3d4;
    if (DAT_0065b3d4 == 0) {
      iVar5 = *(int *)(DAT_0065b5cc + 0xd0);
    }
    iVar9 = -1;
    iVar4 = 0x2a;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar5,iVar4,iVar9);
    ExceptionList = local_10;
    return;
  case 0x1e:
    ExceptionList = &local_10;
    iVar5 = FUN_00412d40();
    *(undefined4 *)(iVar5 + 0xec) = 0xffffffff;
    if ((*(int *)(iVar5 + 0xcc) == 2) && (iVar4 = *(int *)(iVar5 + 0xdc), iVar4 != -1)) {
      uVar8 = 0;
      piVar3 = (int *)FUN_00412490();
      puVar6 = (undefined4 *)*piVar3;
      uVar7 = piVar3[1] - (int)puVar6 >> 2;
      if (uVar7 != 0) {
        do {
          piVar3 = (int *)*puVar6;
          if (*piVar3 == iVar4) goto LAB_004dd508;
          uVar8 = uVar8 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar8 < uVar7);
      }
      piVar3 = (int *)0x0;
LAB_004dd508:
      iVar4 = FUN_004a09a0((int)piVar3);
      *(int *)(iVar5 + 0xe0) = iVar4;
      goto LAB_004dd471;
    }
    break;
  case 0x26:
    ExceptionList = &local_10;
    iVar5 = FUN_00412d40();
    *(undefined4 *)(iVar5 + 0x118) = 0xffffffff;
    ExceptionList = local_10;
    return;
  case 0x2b:
  case 0x2c:
    if (*(char *)((int)DAT_0065b444 + 0x11b) != '\0') {
      *(undefined2 *)((int)DAT_0065b444 + 0x118) = 0x101;
    }
    break;
  case 0x34:
    ExceptionList = &local_10;
    *(undefined1 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x2d0) =
         *(undefined1 *)((int)DAT_0065b444 + 0x142);
    if (*(char *)(*(int *)(iVar5 + 0xd0) + 0x2d0) != '\0') {
      FUN_0050b120(*(int *)(iVar5 + 0xd0));
      FUN_0050af80(*(int *)(DAT_0065b5cc + 0xd0));
      ExceptionList = local_10;
      return;
    }
    break;
  case 0x35:
    if ((*(char *)((int)DAT_0065b444 + 0x72) != '\0') ||
       (*(char *)((int)DAT_0065b444 + 0x70) != '\0')) {
      ExceptionList = &local_10;
      puVar6 = (undefined4 *)FUN_00412280();
      *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1e8) = *puVar6;
      ExceptionList = local_10;
      return;
    }
    if (*(char *)((int)DAT_0065b444 + 0x71) != '\0') {
      ExceptionList = &local_10;
      FUN_004122b0();
      FUN_00412280();
      FUN_0041c620(0x7b,0);
      ExceptionList = local_10;
      return;
    }
    break;
  case 0x3b:
    ExceptionList = &local_10;
    FUN_00411250(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xa8));
    ExceptionList = local_10;
    return;
  case 0x3c:
    ExceptionList = &local_10;
    FUN_00411290(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xc4));
    ExceptionList = local_10;
    return;
  case 0x3d:
    ExceptionList = &local_10;
    FUN_004112d0(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xe0));
    ExceptionList = local_10;
    return;
  case 0x3e:
    if (*(char *)((int)DAT_0065b444 + 0x11b) != '\0') {
      ExceptionList = &local_10;
      FUN_00411310(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xfc));
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_00411310(DAT_0065b444,1);
    ExceptionList = local_10;
    return;
  case 0x3f:
    pcVar1 = (char *)((int)DAT_0065b444 + 0x11b);
    *(bool *)((int)DAT_0065b444 + 0x11c) = *pcVar1 == '\0';
    if (*pcVar1 != '\0') {
LAB_004dd72f:
      *(undefined2 *)((int)pvVar2 + 0x118) = 0x101;
      return;
    }
    goto LAB_004dd6f9;
  case 0x40:
    pcVar1 = (char *)((int)DAT_0065b444 + 0x11c);
    *(bool *)((int)DAT_0065b444 + 0x11b) = *pcVar1 == '\0';
    if (*pcVar1 == '\0') goto LAB_004dd72f;
LAB_004dd6f9:
    *(undefined2 *)((int)pvVar2 + 0x118) = 0;
    return;
  case 0x41:
    ExceptionList = &local_10;
    FUN_004024e0(&stack0xffffffc4,(undefined4 *)((int)DAT_0065b444 + 0x14c));
    FUN_00411b60(in_stack_ffffffc4);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}


uint __fastcall FUN_004dd820(undefined4 param_1)

{
  uint uVar1;
  undefined3 uVar3;
  int iVar2;
  
  uVar1 = 0;
  uVar3 = (undefined3)(DAT_0065b444 >> 8);
  switch(param_1) {
  case 10:
    if (0 < DAT_00655074) {
      return 1;
    }
    break;
  case 0x10:
    iVar2 = FUN_004124e0();
    return CONCAT31((int3)((uint)iVar2 >> 8),0 < *(int *)(iVar2 + 0x18));
  case 0x11:
    iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
    return CONCAT31((int3)((uint)iVar2 >> 8),0 < *(int *)(iVar2 + 0x14));
  case 0x36:
    iVar2 = FUN_00412d40();
    return *(uint *)(*(int *)(iVar2 + 0x11c) + 0x54) >> 0x1f ^ 1;
  case 0x37:
    iVar2 = FUN_00412d40();
    return *(uint *)(*(int *)(iVar2 + 0x11c) + 0x58) >> 0x1f ^ 1;
  case 0x38:
    iVar2 = FUN_00412d40();
    return *(uint *)(*(int *)(iVar2 + 0x11c) + 0xdc) >> 0x1f ^ 1;
  case 0x39:
    iVar2 = FUN_00412d40();
    return *(uint *)(*(int *)(iVar2 + 0x11c) + 0xe0) >> 0x1f ^ 1;
  case 0x3b:
    return CONCAT31(uVar3,0 < *(int *)(DAT_0065b444 + 0xa8));
  case 0x3c:
    return CONCAT31(uVar3,0 < *(int *)(DAT_0065b444 + 0xc4));
  case 0x3d:
    return CONCAT31(uVar3,0 < *(int *)(DAT_0065b444 + 0xe0));
  case 0x3e:
    uVar1 = DAT_0065b444;
    if ((*(char *)(DAT_0065b444 + 0x11b) != '\0') && (0 < *(int *)(DAT_0065b444 + 0xfc))) {
      return CONCAT31(uVar3,1);
    }
  }
  return uVar1 & 0xffffff00;
}


bool __fastcall FUN_004dd980(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  switch(param_1) {
  case 10:
    if (DAT_00655074 < (DAT_0065b62c - DAT_0065b628 >> 3) - 1U) {
      return true;
    }
    break;
  case 0x10:
    iVar1 = FUN_004124e0();
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x38);
    iVar2 = FUN_004124e0();
    return *(uint *)(iVar2 + 0x18) < (iVar3 - iVar1 >> 2) - 1U;
  case 0x11:
    iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
    return *(uint *)(iVar3 + 0x14) < (*(int *)(iVar3 + 0x3c) - *(int *)(iVar3 + 0x38)) / 0x18 - 1U;
  case 0x36:
    iVar3 = FUN_00412d40();
    return *(int *)(*(int *)(iVar3 + 0x11c) + 0x54) < 0xc;
  case 0x37:
    iVar3 = FUN_00412d40();
    return *(int *)(*(int *)(iVar3 + 0x11c) + 0x58) < 6;
  case 0x38:
    iVar3 = FUN_00412d40();
    return *(int *)(*(int *)(iVar3 + 0x11c) + 0xdc) < 5;
  case 0x39:
    iVar3 = FUN_00412d40();
    return *(int *)(*(int *)(iVar3 + 0x11c) + 0xe0) < 0xe;
  case 0x3b:
    return *(int *)(DAT_0065b444 + 0xa8) < 3;
  case 0x3c:
    return *(int *)(DAT_0065b444 + 0xc4) < 4;
  case 0x3d:
    return *(int *)(DAT_0065b444 + 0xe0) < 3;
  case 0x3e:
    if ((*(char *)(DAT_0065b444 + 0x11b) != '\0') && (*(int *)(DAT_0065b444 + 0xfc) < 0xb)) {
      return true;
    }
  }
  return false;
}


void __fastcall FUN_004ddb20(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  
  switch(param_1) {
  case 10:
    uVar2 = FUN_004dd820(param_1);
    if ((char)uVar2 != '\0') {
      DAT_00655074 = DAT_00655074 + -1;
      FUN_004b0c60();
      return;
    }
    break;
  case 0x10:
    iVar4 = FUN_004124e0();
    if (0 < *(int *)(iVar4 + 0x18)) {
      iVar4 = FUN_004124e0();
      iVar4 = *(int *)(iVar4 + 0x18) + -1;
      pvVar3 = (void *)FUN_004124e0();
      FUN_004a39a0(pvVar3,iVar4);
      return;
    }
    break;
  case 0x11:
    pvVar3 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
    iVar4 = *(int *)((int)pvVar3 + 0x14);
    if (0 < iVar4) {
      FUN_00527930(pvVar3,iVar4 - 1);
      return;
    }
    break;
  case 0x36:
    iVar4 = FUN_00412d40();
    piVar1 = (int *)(*(int *)(iVar4 + 0x11c) + 0x54);
    *piVar1 = *piVar1 + -1;
    goto LAB_004ddbaa;
  case 0x37:
    iVar4 = FUN_00412d40();
    piVar1 = (int *)(*(int *)(iVar4 + 0x11c) + 0x58);
    *piVar1 = *piVar1 + -1;
LAB_004ddbaa:
    iVar4 = FUN_00412d40();
    FUN_00489cc0(iVar4);
    iVar4 = FUN_00412d40();
    FUN_00489b70(iVar4);
    return;
  case 0x38:
    iVar4 = FUN_00412d40();
    piVar1 = (int *)(*(int *)(iVar4 + 0x11c) + 0xdc);
    *piVar1 = *piVar1 + -1;
    goto LAB_004ddbe3;
  case 0x39:
    iVar4 = FUN_00412d40();
    piVar1 = (int *)(*(int *)(iVar4 + 0x11c) + 0xe0);
    *piVar1 = *piVar1 + -1;
LAB_004ddbe3:
    iVar4 = FUN_00412d40();
    FUN_00489bc0(iVar4);
    iVar4 = FUN_00412d40();
    FUN_00489c60(iVar4);
    return;
  case 0x3b:
    FUN_00411250(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xa8) + -1);
    return;
  case 0x3c:
    FUN_00411290(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xc4) + -1);
    return;
  case 0x3d:
    FUN_004112d0(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xe0) + -1);
    return;
  case 0x3e:
    FUN_00411310(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xfc) + -1);
  }
  return;
}


void __fastcall FUN_004ddcd0(undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  
  switch(param_1) {
  case 10:
    bVar2 = FUN_004dd980(param_1);
    if (bVar2) {
      DAT_00655074 = DAT_00655074 + 1;
      FUN_004b0c60();
      return;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x3a:
    break;
  case 0x10:
    iVar3 = FUN_004124e0();
    iVar6 = *(int *)(iVar3 + 0x3c);
    iVar3 = *(int *)(iVar3 + 0x38);
    iVar4 = FUN_004124e0();
    if (*(uint *)(iVar4 + 0x18) < (iVar6 - iVar3 >> 2) - 1U) {
      iVar6 = FUN_004124e0();
      iVar6 = *(int *)(iVar6 + 0x18) + 1;
      pvVar5 = (void *)FUN_004124e0();
      FUN_004a39a0(pvVar5,iVar6);
      return;
    }
    break;
  case 0x11:
    pvVar5 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
    if (*(uint *)((int)pvVar5 + 0x14) <
        (*(int *)((int)pvVar5 + 0x3c) - *(int *)((int)pvVar5 + 0x38)) / 0x18 - 1U) {
      FUN_00527930(pvVar5,*(uint *)((int)pvVar5 + 0x14) + 1);
    }
    break;
  case 0x36:
    iVar6 = FUN_00412d40();
    piVar1 = (int *)(*(int *)(iVar6 + 0x11c) + 0x54);
    *piVar1 = *piVar1 + 1;
    iVar6 = FUN_00412d40();
    FUN_00489cc0(iVar6);
    iVar6 = FUN_00412d40();
    FUN_00489b70(iVar6);
    return;
  case 0x37:
    iVar6 = FUN_00412d40();
    piVar1 = (int *)(*(int *)(iVar6 + 0x11c) + 0x58);
    *piVar1 = *piVar1 + 1;
    iVar6 = FUN_00412d40();
    FUN_00489cc0(iVar6);
    iVar6 = FUN_00412d40();
    FUN_00489b70(iVar6);
    return;
  case 0x38:
    iVar6 = FUN_00412d40();
    piVar1 = (int *)(*(int *)(iVar6 + 0x11c) + 0xdc);
    *piVar1 = *piVar1 + 1;
    iVar6 = FUN_00412d40();
    FUN_00489bc0(iVar6);
    iVar6 = FUN_00412d40();
    FUN_00489c60(iVar6);
    return;
  case 0x39:
    iVar6 = FUN_00412d40();
    piVar1 = (int *)(*(int *)(iVar6 + 0x11c) + 0xe0);
    *piVar1 = *piVar1 + 1;
    iVar6 = FUN_00412d40();
    FUN_00489bc0(iVar6);
    iVar6 = FUN_00412d40();
    FUN_00489c60(iVar6);
    return;
  case 0x3b:
    FUN_00411250(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xa8) + 1);
    return;
  case 0x3c:
    FUN_00411290(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xc4) + 1);
    return;
  case 0x3d:
    FUN_004112d0(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xe0) + 1);
    return;
  case 0x3e:
    FUN_00411310(DAT_0065b444,*(int *)((int)DAT_0065b444 + 0xfc) + 1);
    return;
  default:
    goto switchD_004ddce4_default;
  }
switchD_004ddce4_default:
  return;
}


void __fastcall FUN_004dded0(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  pvVar6 = DAT_0065b444;
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005be260;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  puVar5 = &stack0xfffffffc;
  switch(param_1) {
  case 10:
    DAT_00655074 = param_2;
    puStack_20 = &stack0xfffffffc;
    FUN_004b0c60();
    puVar5 = puStack_20;
    break;
  case 0x10:
    puStack_20 = &stack0xfffffffc;
    pvVar6 = (void *)FUN_004124e0();
    FUN_004a39a0(pvVar6,param_2);
    puVar5 = puStack_20;
    break;
  case 0x11:
    puStack_20 = &stack0xfffffffc;
    FUN_00527930(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),param_2);
    puVar5 = puStack_20;
    break;
  case 0x3b:
    puStack_20 = &stack0xfffffffc;
    FUN_00411250(DAT_0065b444,param_2);
    puVar5 = puStack_20;
    break;
  case 0x3c:
    puStack_20 = &stack0xfffffffc;
    FUN_00411290(DAT_0065b444,param_2);
    puVar5 = puStack_20;
    break;
  case 0x3d:
    puStack_20 = &stack0xfffffffc;
    FUN_004112d0(DAT_0065b444,param_2);
    puVar5 = puStack_20;
    break;
  case 0x3e:
    puStack_20 = &stack0xfffffffc;
    FUN_00411310(DAT_0065b444,param_2);
    puVar5 = puStack_20;
    break;
  case 0x41:
    puStack_20 = &stack0xfffffffc;
    FUN_00411a40(&local_48);
    local_14 = 1;
    if (((int)param_2 < 0) || ((uint)((local_44 - local_48) / 0x18) <= param_2)) {
      *(undefined4 *)((int)pvVar6 + 0x148) = 0xffffffff;
      FUN_00402690((void *)((int)pvVar6 + 0x14c),&PTR_005ce008,0);
      FUN_004025a0(&local_48);
      puVar5 = puStack_20;
    }
    else {
      *(uint *)((int)pvVar6 + 0x148) = param_2;
      puVar1 = (undefined4 *)(local_48 + param_2 * 0x18);
      if ((undefined4 *)((int)pvVar6 + 0x14c) != puVar1) {
        puVar8 = puVar1;
        if (0xf < (uint)puVar1[5]) {
          puVar8 = (undefined4 *)*puVar1;
        }
        FUN_00402690((undefined4 *)((int)pvVar6 + 0x14c),puVar8,puVar1[4]);
      }
      piVar7 = (int *)FUN_00591e00((undefined1 *)local_3c,"Server name: %s\nLocation: 127.0.0.1");
      piVar10 = (int *)((int)pvVar6 + 0x164);
      if (piVar10 != piVar7) {
        FUN_00401b20(piVar10);
        iVar2 = piVar7[1];
        iVar3 = piVar7[2];
        iVar4 = piVar7[3];
        *piVar10 = *piVar7;
        *(int *)((int)pvVar6 + 0x168) = iVar2;
        *(int *)((int)pvVar6 + 0x16c) = iVar3;
        *(int *)((int)pvVar6 + 0x170) = iVar4;
        *(undefined8 *)((int)pvVar6 + 0x174) = *(undefined8 *)(piVar7 + 4);
        piVar7[4] = 0;
        piVar7[5] = 0xf;
        *(undefined1 *)piVar7 = 0;
      }
      if (0xf < local_28) {
        pvVar6 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar6 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      FUN_004025a0(&local_48);
      puVar5 = puStack_20;
    }
    break;
  case 0x42:
    FUN_00411d20(DAT_0065b444,&local_54);
    iVar2 = DAT_0065b5cc;
    local_14 = 0;
    if (((int)param_2 < 0) || ((uint)((local_50 - local_54) / 0x18) <= param_2)) {
      *(undefined4 *)(DAT_0065b5cc + 0x274) = 0xffffffff;
      FUN_00402690((void *)(iVar2 + 0x25c),&PTR_005ce008,0);
      FUN_004025a0(&local_54);
      puVar5 = puStack_20;
    }
    else {
      puVar1 = (undefined4 *)(local_54 + param_2 * 0x18);
      *(uint *)(DAT_0065b5cc + 0x274) = param_2;
      puVar8 = (undefined4 *)(iVar2 + 0x25c);
      if (puVar8 != puVar1) {
        puVar9 = puVar1;
        if (0xf < (uint)puVar1[5]) {
          puVar9 = (undefined4 *)*puVar1;
        }
        FUN_00402690(puVar8,puVar9,puVar1[4]);
      }
      FUN_004025a0(&local_54);
      puVar5 = puStack_20;
    }
  }
  puStack_20 = puVar5;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_004de1e0(undefined4 param_1,int *param_2)

{
  void *pvVar1;
  
  switch(param_1) {
  case 0x12:
    FUN_00412d40();
    FUN_004867c0(param_2,'\0');
    return;
  case 0x13:
    FUN_00412d40();
    FUN_00487330(param_2);
    return;
  case 0x14:
    pvVar1 = (void *)FUN_00412d40();
    FUN_004877e0(pvVar1,param_2);
    return;
  case 0x15:
    pvVar1 = (void *)FUN_00412d40();
    FUN_00489410(pvVar1,param_2);
    return;
  case 0x18:
    pvVar1 = (void *)FUN_00412d40();
    FUN_00488220(pvVar1,param_2);
    return;
  case 0x19:
    FUN_00412d40();
    FUN_00488850(param_2);
    return;
  case 0x1b:
    FUN_00412d40();
    FUN_0048ee10(param_2);
    return;
  case 0x1c:
    FUN_00412d40();
    FUN_0048f5c0(param_2);
    return;
  case 0x1d:
    FUN_00412d40();
    FUN_00490020(param_2);
    return;
  case 0x1e:
    FUN_00412d40();
    FUN_004913a0(param_2);
    return;
  case 0x21:
    FUN_00412d40();
    FUN_00495bc0(param_2);
    return;
  case 0x22:
    FUN_00412d40();
    FUN_00495f10(param_2);
    return;
  case 0x23:
    FUN_00412d40();
    FUN_004965f0(param_2);
    return;
  case 0x24:
    pvVar1 = (void *)FUN_00412d40();
    FUN_00496de0(pvVar1,param_2);
    return;
  case 0x25:
    FUN_00412d40();
    FUN_004979a0(param_2);
    return;
  case 0x27:
    FUN_00412d40();
    FUN_00497eb0(param_2);
    return;
  case 0x2a:
    FUN_00412d40();
    FUN_00499260(param_2);
    return;
  case 0x2e:
    FUN_00412d40();
    FUN_004867c0(param_2,'\x01');
    return;
  case 0x2f:
    FUN_004123c0();
    FUN_0043b6c0(param_2);
    return;
  case 0x30:
    FUN_00412d40();
    FUN_0049a990(param_2);
    return;
  case 0x31:
    pvVar1 = (void *)FUN_004b32a0();
    FUN_00526e30(pvVar1,param_2);
    return;
  case 0x35:
    FUN_00412280();
    FUN_004abee0(param_2);
  }
  return;
}


bool __fastcall FUN_004de400(undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  
  switch(param_1) {
  case 0x12:
    FUN_00412d40();
    uVar1 = FUN_00486d90(param_2,0);
    return (bool)uVar1;
  case 0x13:
    FUN_00412d40();
    uVar1 = FUN_00487570(param_2);
    return (bool)uVar1;
  case 0x14:
    pvVar2 = (void *)FUN_00412d40();
    uVar1 = FUN_00487c70(pvVar2,param_2);
    return (bool)uVar1;
  case 0x15:
    pvVar2 = (void *)FUN_00412d40();
    uVar1 = FUN_00489710(pvVar2,param_2);
    return (bool)uVar1;
  default:
    return false;
  case 0x18:
    pvVar2 = (void *)FUN_00412d40();
    uVar1 = FUN_004884f0(pvVar2,param_2);
    return (bool)uVar1;
  case 0x19:
    FUN_00412d40();
    uVar1 = FUN_00488ee0(param_2);
    return (bool)uVar1;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x25:
  case 0x27:
    FUN_00412d40();
    return true;
  case 0x1e:
    FUN_00412d40();
    uVar1 = FUN_004917e0(param_2);
    return (bool)uVar1;
  case 0x21:
    FUN_00412d40();
    return 0x5f < (param_2[1] - *param_2) - 0x180U;
  case 0x22:
    FUN_00412d40();
    uVar1 = FUN_00496260(param_2);
    return (bool)uVar1;
  case 0x23:
    FUN_00412d40();
    uVar1 = FUN_00496a20(param_2);
    return (bool)uVar1;
  case 0x24:
    pvVar2 = (void *)FUN_00412d40();
    uVar1 = FUN_004973a0(pvVar2,param_2);
    return (bool)uVar1;
  case 0x2a:
    FUN_00412d40();
    uVar1 = FUN_004996b0(param_2);
    return (bool)uVar1;
  case 0x2e:
    FUN_00412d40();
    uVar1 = FUN_00486d90(param_2,1);
    return (bool)uVar1;
  case 0x2f:
    FUN_004123c0();
    return true;
  case 0x30:
    FUN_00412d40();
    uVar1 = FUN_0049ad90(param_2);
    return (bool)uVar1;
  case 0x31:
    FUN_004b32a0();
    return true;
  case 0x35:
    FUN_00412280();
    return true;
  }
}


int __fastcall FUN_004de5d0(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  
  switch(param_1) {
  default:
    return 100;
  case 0x12:
  case 0x16:
    iVar2 = 0;
    pvVar1 = (void *)FUN_00412d40();
    iVar2 = FUN_0048baa0(pvVar1,iVar2);
    return iVar2;
  case 0x1a:
    iVar2 = 2;
    pvVar1 = (void *)FUN_00412d40();
    iVar2 = FUN_0048baa0(pvVar1,iVar2);
    return iVar2;
  case 0x1f:
    iVar2 = FUN_00412d40();
    iVar2 = FUN_0048eda0(iVar2);
    return iVar2;
  }
}


undefined4 __cdecl FUN_004de650(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  uint in_stack_ffffffcc;
  int iVar9;
  int iVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be2a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar3 + 0x24) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(uVar3 + 0x24) + 0x10))();
    if (((char)uVar3 != '\0') && (*(int *)(param_1 + 0xd4) != 3)) {
      if (*(int *)(param_1 + 0x178) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = (uint)(*(int *)(iVar1 + 0x158) == 2);
        }
        if ((char)uVar3 != '\0') goto LAB_004de7ca;
      }
      if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
        pvVar5 = (void *)(in_stack_ffffffcc & 0xffffff00);
        FUN_00402690(&stack0xffffffcc,"lock_manual_engine_control",0x1a);
        local_8 = 0;
        puVar4 = FUN_00412df0();
        local_8 = 0xffffffff;
        uVar7 = 0x4de726;
        bVar2 = FUN_004a1150(puVar4,pvVar5);
        uVar3 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) goto LAB_004de7ca;
        pbVar8 = (byte *)(uVar7 & 0xffffff00);
        FUN_00402690(&stack0xffffffc8,"has_fired_main_engine",0x15);
        local_8 = 1;
        puVar4 = FUN_00412df0();
        local_8 = 0xffffffff;
        FUN_004a0ee0(puVar4,pbVar8);
      }
      FUN_00517b80(param_1);
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
      if (iVar1 != 0) {
        iVar10 = -1;
        iVar9 = 8;
        *(undefined1 *)(iVar1 + 0x62) = 1;
        pvVar5 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar5,param_1,iVar9,iVar10);
        uVar6 = FUN_00591070(&DAT_005cdc70,"BURNING MAIN ENGINE.");
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      uVar3 = FUN_00591070(&DAT_005cdc70,"NO MAIN ENGINE TO BURN.");
    }
  }
LAB_004de7ca:
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004de7e0(int param_1)

{
  int iVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x24) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x24) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      if (*(int *)(param_1 + 0x178) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = (uint)(*(int *)(iVar1 + 0x158) == 2);
        }
        if ((char)uVar2 != '\0') goto LAB_004de884;
      }
      uVar2 = 0;
      if (*(int *)(param_1 + 0xd4) != 3) {
        FUN_00517b80(param_1);
        iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
        if (iVar1 != 0) {
          iVar5 = -1;
          iVar4 = 9;
          *(undefined1 *)(iVar1 + 0x62) = 0;
          this = (void *)FUN_00402f60();
          FUN_00557fb0(this,param_1,iVar4,iVar5);
          uVar3 = FUN_00591070(&DAT_005cdc70,"STOPPING MAIN ENGINE.");
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
        uVar2 = FUN_00591070(&DAT_005cdc70,"NO MAIN ENGINE TO STOPPING.");
      }
    }
  }
LAB_004de884:
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004de890(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x24) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x24) + 0x10))(0);
    if (((char)uVar2 != '\0') && (*(int *)(param_1 + 0xd4) != 3)) {
      if (*(int *)(param_1 + 0x178) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = (uint)(*(int *)(iVar1 + 0x158) == 2);
        }
        if ((char)uVar2 != '\0') goto LAB_004de931;
      }
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      *(undefined4 *)(param_1 + 0x2c4) = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
      uVar2 = 0;
      if (iVar1 != 0) {
        if (*(char *)(iVar1 + 0x62) != '\0') {
          uVar3 = FUN_004de7e0(param_1);
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
        uVar3 = FUN_004de650(param_1);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  }
LAB_004de931:
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004de940(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *this;
  undefined3 extraout_var;
  void *pvVar3;
  undefined4 uVar4;
  uint in_stack_ffffffcc;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be2c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x24) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x24) + 0x10))();
    if (((char)uVar2 != '\0') && (*(int *)(param_1 + 0xd4) != 3)) {
      if (*(int *)(param_1 + 0x178) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
        uVar2 = 0;
        if (iVar5 != 0) {
          uVar2 = (uint)(*(int *)(iVar5 + 0x158) == 2);
        }
        if ((char)uVar2 != '\0') goto LAB_004dea4f;
      }
      if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
        pvVar3 = (void *)(in_stack_ffffffcc & 0xffffff00);
        FUN_00402690(&stack0xffffffcc,"lock_manual_control",0x13);
        local_8 = 0;
        this = FUN_00412df0();
        local_8 = 0xffffffff;
        bVar1 = FUN_004a1150(this,pvVar3);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 0) goto LAB_004dea4f;
      }
      FUN_005179b0(param_1);
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
      FUN_00517400(param_1);
      iVar6 = -1;
      iVar5 = 9;
      pvVar3 = (void *)FUN_00402f60();
      uVar4 = FUN_00557fb0(pvVar3,param_1,iVar5,iVar6);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
LAB_004dea4f:
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004dea70(int param_1)

{
  uint in_EAX;
  void *this;
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xd4) != 3) {
    if (*(int *)(param_1 + 0x178) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x178) + 0x254);
      in_EAX = 0;
      if (iVar2 != 0) {
        in_EAX = (uint)(*(int *)(iVar2 + 0x158) == 2);
      }
      if ((char)in_EAX != '\0') goto LAB_004deb12;
    }
    iVar4 = -1;
    iVar3 = 9;
    iVar2 = param_1;
    this = (void *)FUN_00402f60();
    FUN_00557fb0(this,iVar2,iVar3,iVar4);
    FUN_00512a60(param_1);
    FUN_005179b0(extraout_ECX);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    uVar1 = FUN_00591070(&DAT_005cdc70,"%s: Autopilot cancelled.");
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
LAB_004deb12:
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004deb20(int param_1)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x1c4);
    iVar1 = *(int *)(param_1 + 0x1c8) - iVar4 >> 5;
    in_EAX = 0;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        uVar2 = FUN_004dea70(param_1);
        return uVar2;
      }
      FUN_004eb600((int *)(param_1 + 0x1c4),&param_1,(undefined4 *)(iVar1 * 0x20 + iVar4 + -0x20));
      FUN_00512a60(iVar3);
      iVar1 = -1;
      iVar4 = 9;
      this = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this,iVar3,iVar4,iVar1);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


void __cdecl FUN_004deb90(void *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  char ****ppppcVar9;
  char ****ppppcVar10;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar11;
  float fVar12;
  float fVar13;
  byte *pbVar14;
  uint in_stack_ffffff98;
  char *pcVar15;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 *local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005be346;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar7 = (void *)(in_stack_ffffff98 & 0xffffff00);
  FUN_00402690(&stack0xffffff98,&PTR_005ce008,0);
  bVar4 = FUN_004ceeb0((int)param_1,0,pvVar7);
  if ((bVar4) && (param_2 == 0)) {
    FUN_004de940((int)param_1);
  }
  piVar1 = *(int **)(*(int *)((int)param_1 + 0x40) + 0x24);
  if ((piVar1 == (int *)0x0) || (cVar5 = (**(code **)(*piVar1 + 0x10))(), cVar5 == '\0'))
  goto LAB_004df290;
  local_40 = (float)*(double *)((int)param_1 + 0x28);
  fVar12 = (float)*(double *)((int)param_1 + 0x30);
  local_8 = 0;
  uStack_7 = 0;
  iVar11 = *(int *)((int)param_1 + 0x1c4);
  iVar8 = *(int *)((int)param_1 + 0x1c8) - iVar11 >> 5;
  local_3c = fVar12;
  if (iVar8 != 0) {
    iVar8 = iVar8 * 0x20;
    local_40 = *(float *)(iVar8 + -0x18 + iVar11);
    local_3c = *(float *)(iVar8 + -0x14 + iVar11);
  }
  FUN_00517440((int)param_1);
  iVar11 = (int)fVar12;
  iVar8 = *(int *)(*(int *)((int)param_1 + 0x40) + 0x18);
  if (iVar8 == 0) {
    fVar12 = -1.0;
  }
  else {
    fVar12 = 360.0 / *(float *)(*(int *)(iVar8 + 8) + 0x104);
  }
  iVar8 = (int)fVar12;
  if ((iVar11 == -1) || (iVar8 == -1)) {
    FUN_00527550(*(int **)((int)param_1 + 0x224),2,"ERROR: Vessel disabled.");
    iVar8 = -1;
    iVar11 = 10;
    pvVar7 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar7,(int)param_1,iVar11,iVar8);
    goto LAB_004df290;
  }
  FUN_00403cb0((int)param_1);
  if ((fVar12 == 0.0) &&
     ((uint)(*(int *)((int)param_1 + 0x1c8) - *(int *)((int)param_1 + 0x1c4)) < 0x20)) {
    iVar11 = iVar11 * 2;
  }
  else {
    iVar11 = iVar11 + (iVar11 / 3) * 2;
  }
  iVar2 = *(int *)((int)param_1 + 0x1a4);
  local_30 = (undefined1 *)((float)iVar11 + 3.0 + (float)iVar8);
  if (iVar2 != 0) {
    local_38 = (float)*(double *)(iVar2 + 0x20);
    fVar12 = (float)*(double *)(iVar2 + 0x28);
    local_8 = 1;
    local_34 = fVar12;
    FUN_00591010((Vec2 *)&local_40,(Vec2 *)&local_38);
    local_8 = 0;
    if ((float)local_30 < fVar12) {
      FUN_00517670(param_1,*(int *)((int)param_1 + 0x1a4));
      FUN_004eb5a0();
    }
    else {
      FUN_004eb5e0();
      if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
        pcVar15 = "ERROR: Target too close for autopilot.";
      }
      else {
        pcVar15 = "ERROR: Can\'t pilot there - too close to you.";
      }
      FUN_00527550(*(int **)((int)param_1 + 0x224),2,pcVar15);
    }
    goto LAB_004df290;
  }
  fVar12 = *(float *)((int)param_1 + 0x1b8);
  if ((fVar12 != -9999.0) || (fVar12 = *(float *)((int)param_1 + 0x1bc), fVar12 != -9999.0)) {
    FUN_00591010((Vec2 *)&local_40,(Vec2 *)((int)param_1 + 0x1b8));
    uVar3 = local_8;
    if ((float)local_30 < fVar12) {
      fVar12 = *(float *)((int)param_1 + 0x1b8);
      fVar13 = *(float *)((int)param_1 + 0x1bc);
LAB_004df256:
      FUN_005175a0(param_1,fVar12,fVar13);
      FUN_004eb5a0();
      goto LAB_004df290;
    }
    goto LAB_004df208;
  }
  iVar11 = *(int *)((int)param_1 + 0x19c);
  if (iVar11 == 0) goto LAB_004df290;
  iVar8 = *(int *)(iVar11 + 0x130);
  if (iVar8 == 0) {
    iVar11 = FUN_00509900(iVar11);
    local_38 = (float)((double)*(float *)(extraout_EDX_00 + 0x104) +
                      *(double *)(extraout_EDX_00 + 0x10));
    fVar12 = (float)((double)*(float *)(extraout_EDX_00 + 0x108) +
                    *(double *)(extraout_EDX_00 + 0x18));
    local_34 = fVar12;
    if ((char)iVar11 == '\0') {
      local_8 = 7;
      FUN_00591010((Vec2 *)&local_40,(Vec2 *)&local_38);
      local_8 = 0;
      uVar3 = local_8;
      if ((float)local_30 < fVar12) {
        if ((((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
             (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
            (*(int *)(*(int *)((int)param_1 + 0x19c) + 0xe0) == 5)) &&
           (iVar11 = FUN_0051f2d0(*(void **)((int)param_1 + 0x24),
                                  *(int *)(*(int *)((int)param_1 + 0x19c) + 4)), uVar3 = local_8,
           iVar11 != 0)) {
          FUN_00591e00((undefined1 *)local_2c,"plotted_course_to_%s");
          local_8 = 8;
          ppppcVar10 = local_2c;
          if (0xf < local_18) {
            ppppcVar10 = (char ****)local_2c[0];
          }
          ppppcVar9 = local_2c;
          if (0xf < local_18) {
            ppppcVar9 = (char ****)local_2c[0];
          }
          pbVar14 = (byte *)0x4df14c;
          FUN_00413ec0(&local_30,tolower_exref,(char *)ppppcVar9,
                       (char *)((int)ppppcVar10 + local_1c),(undefined1 *)ppppcVar10);
          local_30 = &stack0xffffff94;
          FUN_004024e0(&stack0xffffff94,local_2c);
          local_8 = 9;
          puVar6 = FUN_00412df0();
          local_8 = 8;
          FUN_004a0ee0(puVar6,pbVar14);
          local_8 = 0;
          uVar3 = local_8;
          if (0xf < local_18) {
            ppppcVar10 = (char ****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (ppppcVar10 = (char ****)local_2c[0][-1],
               (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar10)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppcVar10);
            uVar3 = local_8;
          }
        }
        goto LAB_004df1b0;
      }
      goto LAB_004df208;
    }
    local_8 = 4;
    FUN_00591010((Vec2 *)&local_40,(Vec2 *)&local_38);
    local_8 = 0;
    if ((float)local_30 < fVar12) {
      iVar11 = FUN_0051f2d0(*(void **)((int)param_1 + 0x24),
                            *(int *)(*(int *)((int)param_1 + 0x19c) + 4));
      if (iVar11 != 0) {
        *(int *)((int)param_1 + 0x170) = iVar11;
        FUN_004eb5a0();
        FUN_00517670(param_1,iVar11 + 8);
        FUN_00591070(&DAT_005cdc70,"Plotting course to moor with synthetic object.");
        if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
           (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
          FUN_00591e00((undefined1 *)local_2c,"plotted_course_to_%s");
          local_8 = 5;
          ppppcVar10 = local_2c;
          if (0xf < local_18) {
            ppppcVar10 = (char ****)local_2c[0];
          }
          ppppcVar9 = local_2c;
          if (0xf < local_18) {
            ppppcVar9 = (char ****)local_2c[0];
          }
          pbVar14 = (byte *)0x4df02c;
          FUN_00413ec0(&local_30,tolower_exref,(char *)ppppcVar9,
                       (char *)((int)ppppcVar10 + local_1c),(undefined1 *)ppppcVar10);
          local_30 = &stack0xffffff94;
          FUN_004024e0(&stack0xffffff94,local_2c);
          local_8 = 6;
          puVar6 = FUN_00412df0();
          local_8 = 5;
          FUN_004a0ee0(puVar6,pbVar14);
          if (0xf < local_18) {
            ppppcVar10 = (char ****)local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (ppppcVar10 = (char ****)local_2c[0][-1],
               (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar10)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(ppppcVar10);
          }
        }
      }
      goto LAB_004df290;
    }
    FUN_004eb5e0();
    *(undefined4 *)((int)param_1 + 0x170) = 0;
LAB_004df20d:
    if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
LAB_004df229:
      pcVar15 = "ERROR: Target too close for autopilot.";
    }
    else {
      pcVar15 = "ERROR: Can\'t pilot there - too close to you.";
    }
  }
  else {
    iVar11 = FUN_0051a470(*(int *)(iVar8 + 0x254));
    if ((char)iVar11 != '\0') {
      local_38 = (float)*(double *)(iVar8 + 0x28);
      fVar12 = (float)*(double *)(iVar8 + 0x30);
      local_8 = 2;
      local_34 = fVar12;
      FUN_00591010((Vec2 *)&local_40,(Vec2 *)&local_38);
      local_8 = 0;
      uVar3 = local_8;
      local_8 = 0;
      if ((float)local_30 < fVar12) {
        FUN_004eb5a0();
        iVar11 = *(int *)(*(int *)((int)param_1 + 0x19c) + 0x130);
        FUN_00517670(param_1,-(uint)(iVar11 != 0) & iVar11 + 8U);
        FUN_00591070(&DAT_005cdc70,"Plotting course to space station.");
        goto LAB_004df290;
      }
LAB_004df208:
      local_8 = uVar3;
      FUN_004eb5e0();
      goto LAB_004df20d;
    }
    local_38 = (float)((double)*(float *)(extraout_EDX + 0x104) + *(double *)(extraout_EDX + 0x10));
    fVar12 = (float)((double)*(float *)(extraout_EDX + 0x108) + *(double *)(extraout_EDX + 0x18));
    local_8 = 3;
    local_34 = fVar12;
    FUN_00591010((Vec2 *)&local_40,(Vec2 *)&local_38);
    local_8 = 0;
    uVar3 = local_8;
    local_8 = 0;
    if ((float)local_30 < fVar12) {
LAB_004df1b0:
      local_8 = uVar3;
      iVar11 = *(int *)((int)param_1 + 0x19c);
      fVar13 = (float)((double)*(float *)(iVar11 + 0x108) + *(double *)(iVar11 + 0x18));
      fVar12 = (float)((double)*(float *)(iVar11 + 0x104) + *(double *)(iVar11 + 0x10));
      goto LAB_004df256;
    }
    FUN_004eb5e0();
    if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) goto LAB_004df229;
    pcVar15 = "ERROR: Can\'t pilot there - too close to you.";
  }
  FUN_00527550(*(int **)((int)param_1 + 0x224),2,pcVar15);
LAB_004df290:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __cdecl FUN_004df2b0(int param_1)

{
  double dVar1;
  int *piVar2;
  float *pfVar3;
  char cVar4;
  byte bVar5;
  void **ppvVar6;
  float fVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  uint uVar12;
  byte *pbVar13;
  uint in_stack_ffffffc8;
  void *pvVar14;
  char *pcVar15;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be389;
  local_10 = ExceptionList;
  ppvVar6 = &local_10;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xd4) != 3)) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x24);
    ExceptionList = ppvVar6;
    if ((piVar2 == (int *)0x0) || (cVar4 = (**(code **)(*piVar2 + 0x10))(), cVar4 == '\0')) {
      pcVar15 = "Travel not possible: helm non-functional";
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x10);
      if ((piVar2 == (int *)0x0) || (cVar4 = (**(code **)(*piVar2 + 0x10))(), cVar4 == '\0')) {
        pcVar15 = "Travel not possible: main drive offline";
      }
      else {
        piVar2 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
        if ((piVar2 != (int *)0x0) && (cVar4 = (**(code **)(*piVar2 + 0x10))(), cVar4 != '\0')) {
          ppvVar6 = (void **)(*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5);
          if ((ppvVar6 != (void **)0x0) && (*(int *)(param_1 + 0xd4) == 0)) {
            *(undefined4 *)(param_1 + 0xd4) = 1;
            *(undefined4 *)(param_1 + 0x2c0) = 0;
            *(undefined4 *)(param_1 + 0x2c4) = 0;
            dVar1 = *(double *)(param_1 + 0x30);
            pfVar3 = *(float **)(param_1 + 0x1c4);
            *pfVar3 = (float)*(double *)(param_1 + 0x28);
            pfVar3[1] = (float)dVar1;
            local_18 = (float)*(double *)(param_1 + 0x28);
            local_14 = (float)*(double *)(param_1 + 0x30);
            local_8 = 0;
            fVar11 = cocos2d::Vec2::getDistanceSq
                               ((Vec2 *)(*(int *)(param_1 + 0x1c4) + 8),(Vec2 *)&local_18);
            fVar7 = (float)(0x5f3759df - ((uint)fVar11 >> 1));
            local_8 = 0xffffffff;
            *(double *)(param_1 + 0x138) =
                 (double)((1.5 - fVar11 * 0.5 * fVar7 * fVar7) * fVar7 * fVar11);
            iVar8 = *(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4) >> 5;
            if ((iVar8 == 0) || (*(int *)(iVar8 * 0x20 + -0xc + *(int *)(param_1 + 0x1c4)) == 0)) {
              FUN_00527550(*(int **)(param_1 + 0x224),0,"Engaging course");
            }
            else {
              FUN_005177d0(param_1);
              FUN_00527550(*(int **)(param_1 + 0x224),0,"Engaging course to %s");
            }
            if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
               (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
              pvVar14 = (void *)(in_stack_ffffffc8 & 0xffffff00);
              FUN_00402690(&stack0xffffffc8,"only_plot_to_beacons",0x14);
              local_8 = 1;
              puVar9 = FUN_00412df0();
              local_8 = 0xffffffff;
              uVar12 = 0x4df501;
              bVar5 = FUN_004a1150(puVar9,pvVar14);
              if (bVar5 != 0) {
                pbVar13 = (byte *)(uVar12 & 0xffffff00);
                FUN_00402690(&stack0xffffffc4,"lock_manual_control",0x13);
                local_8 = 2;
                puVar9 = FUN_00412df0();
                local_8 = 0xffffffff;
                FUN_004a0ee0(puVar9,pbVar13);
              }
            }
            uVar10 = FUN_004eb5a0();
            ExceptionList = local_10;
            return CONCAT31((int3)((uint)uVar10 >> 8),1);
          }
          goto LAB_004df582;
        }
        pcVar15 = "Travel not possible: RCS non-functional";
      }
    }
    ppvVar6 = (void **)FUN_00527550(*(int **)(param_1 + 0x224),2,pcVar15);
  }
LAB_004df582:
  ExceptionList = local_10;
  return (uint)ppvVar6 & 0xffffff00;
}


undefined4 __cdecl FUN_004df5a0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined3 extraout_var;
  uint uVar3;
  void *pvVar4;
  char *in_stack_ffffffc4;
  byte *pbVar5;
  uint in_stack_ffffffcc;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be3c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) && (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1))
  {
    in_stack_ffffffc4 = "no_full_stop";
    pvVar4 = (void *)(in_stack_ffffffcc & 0xffffff00);
    FUN_00402690(&stack0xffffffcc,"no_full_stop",0xc);
    local_8 = 0;
    puVar2 = FUN_00412df0();
    local_8 = 0xffffffff;
    bVar1 = FUN_004a1150(puVar2,pvVar4);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) goto LAB_004df6d5;
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar3 + 0x24) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(uVar3 + 0x24) + 0x10))();
    if ((char)uVar3 != '\0') {
      FUN_005179b0(param_1);
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1c4);
      FUN_00518af0(param_1);
      iVar7 = -1;
      iVar6 = 9;
      pvVar4 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar4,param_1,iVar6,iVar7);
      iVar6 = *(int *)(DAT_0065b5cc + 0xcc);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x70) == 1)) {
        pbVar5 = (byte *)((uint)in_stack_ffffffc4 & 0xffffff00);
        FUN_00402690(&stack0xffffffc4,"has_ever_hit_full_stop",0x16);
        local_8 = 1;
        puVar2 = FUN_00412df0();
        local_8 = 0xffffffff;
        iVar6 = FUN_004a0ee0(puVar2,pbVar5);
      }
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)iVar6 >> 8),1);
    }
  }
LAB_004df6d5:
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004df6f0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = *(uint *)(DAT_0065b5cc + 0xcc);
  if ((uVar4 != 0) && (*(int *)(uVar4 + 0x70) == 1)) goto LAB_004df7ad;
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24);
  if (piVar1 == (int *)0x0) {
LAB_004df798:
    pcVar5 = "Not possible: helm non-functional";
  }
  else {
    cVar2 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar2 == '\0') goto LAB_004df798;
    piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if (cVar2 != '\0') {
        uVar4 = *(uint *)(param_1 + 0xd4);
        if (uVar4 != 3) {
          if (uVar4 == 1) {
            FUN_00517400(param_1);
          }
          uVar3 = FUN_005174e0(param_1);
          *(undefined4 *)(param_1 + 0xd4) = 1;
          *(undefined4 *)(param_1 + 0x2c0) = 0;
          *(undefined4 *)(param_1 + 0x2c4) = 0;
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
        goto LAB_004df7ad;
      }
    }
    pcVar5 = "Not possible: RCS non-functional";
  }
  uVar4 = FUN_00527550(*(int **)(param_1 + 0x224),2,pcVar5);
LAB_004df7ad:
  return uVar4 & 0xffffff00;
}


undefined4 __cdecl FUN_004df7c0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char extraout_AL;
  byte bVar4;
  uint3 extraout_var;
  undefined4 *puVar5;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  undefined4 uVar6;
  uint uVar7;
  uint3 extraout_var_02;
  uint3 uVar8;
  uint in_stack_ffffffd0;
  void *pvVar9;
  char *pcVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be2a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24);
  if (piVar1 == (int *)0x0) {
LAB_004df9a6:
    pcVar10 = "Not possible: helm non-functional";
  }
  else {
    cVar3 = (**(code **)(*piVar1 + 0x10))();
    if (cVar3 == '\0') goto LAB_004df9a6;
    piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))();
      if (extraout_AL != '\0') {
        uVar8 = extraout_var;
        if (*(int *)(param_1 + 0xd4) != 3) {
          if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
             (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
LAB_004df8db:
            FUN_00517b80(param_1);
            iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x18);
            if (iVar2 == 0) {
              FUN_004eb5e0();
              uVar7 = FUN_00591070(&DAT_005cdc70,"NO RCS TO BURN.");
              ExceptionList = local_10;
              return uVar7 & 0xffffff00;
            }
            if ((*(char *)(iVar2 + 0x62) != '\0') && (*(int *)(iVar2 + 0x34) == 1)) {
              uVar6 = FUN_004dfc00(param_1);
              ExceptionList = local_10;
              return CONCAT31((int3)((uint)uVar6 >> 8),1);
            }
            *(undefined1 *)(iVar2 + 0x62) = 1;
            *(undefined4 *)(param_1 + 0x128) = 0xbf800000;
            DAT_0065b3e0 = 0xbff0000000000000;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x34) = 1;
            FUN_00591070(&DAT_005cdc70,"BURNING RCS CW.");
            uVar6 = FUN_004eb5a0();
            ExceptionList = local_10;
            return CONCAT31((int3)((uint)uVar6 >> 8),1);
          }
          pvVar9 = (void *)(in_stack_ffffffd0 & 0xffffff00);
          FUN_00402690(&stack0xffffffd0,"lock_manual_control",0x13);
          local_8 = 0;
          puVar5 = FUN_00412df0();
          local_8 = 0xffffffff;
          bVar4 = FUN_004a1150(puVar5,pvVar9);
          uVar8 = extraout_var_00;
          if (bVar4 == 0) {
            pvVar9 = (void *)((uint)pvVar9 & 0xffffff00);
            FUN_00402690(&stack0xffffffd0,"angle_50",8);
            local_8 = 1;
            puVar5 = FUN_00412df0();
            local_8 = 0xffffffff;
            bVar4 = FUN_004a1150(puVar5,pvVar9);
            uVar8 = extraout_var_01;
            if (bVar4 == 0) goto LAB_004df8db;
          }
        }
        goto LAB_004df9bb;
      }
    }
    pcVar10 = "Not possible: RCS non-functional";
  }
  FUN_00527550(*(int **)(param_1 + 0x224),2,pcVar10);
  uVar8 = extraout_var_02;
LAB_004df9bb:
  ExceptionList = local_10;
  return (uint)uVar8 << 8;
}


undefined4 __cdecl FUN_004df9d0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar7;
  uint in_stack_ffffffd0;
  void *pvVar8;
  char *pcVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be2a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24);
  if (piVar1 == (int *)0x0) {
LAB_004dfbcd:
    pcVar9 = "Not possible: helm non-functional";
  }
  else {
    cVar3 = (**(code **)(*piVar1 + 0x10))();
    if (cVar3 == '\0') goto LAB_004dfbcd;
    piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
    if (piVar1 != (int *)0x0) {
      uVar5 = (**(code **)(*piVar1 + 0x10))();
      if ((char)uVar5 != '\0') {
        if (*(int *)(param_1 + 0xd4) != 3) {
          if (*(int *)(param_1 + 0x178) != 0) {
            uVar5 = FUN_004cb200(*(int *)(param_1 + 0x178));
            if ((char)uVar5 != '\0') goto LAB_004dfbe2;
          }
          if ((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
             (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) != 1)) {
LAB_004dfb02:
            FUN_00517b80(param_1);
            iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x18);
            if (iVar2 == 0) {
              FUN_004eb5e0();
              uVar5 = FUN_00591070(&DAT_005cdc70,"NO RCS TO BURN.");
              ExceptionList = local_10;
              return uVar5 & 0xffffff00;
            }
            if ((*(char *)(iVar2 + 0x62) != '\0') && (*(int *)(iVar2 + 0x34) == 2)) {
              uVar7 = FUN_004dfc00(param_1);
              ExceptionList = local_10;
              return CONCAT31((int3)((uint)uVar7 >> 8),1);
            }
            *(undefined1 *)(iVar2 + 0x62) = 1;
            *(undefined4 *)(param_1 + 0x128) = 0xbf800000;
            DAT_0065b3e0 = 0xbff0000000000000;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x18) + 0x34) = 2;
            FUN_004eb5a0();
            uVar7 = FUN_00591070(&DAT_005cdc70,"BURNING RCS CCW.");
            ExceptionList = local_10;
            return CONCAT31((int3)((uint)uVar7 >> 8),1);
          }
          pvVar8 = (void *)(in_stack_ffffffd0 & 0xffffff00);
          FUN_00402690(&stack0xffffffd0,"lock_manual_control",0x13);
          local_8 = 0;
          puVar6 = FUN_00412df0();
          local_8 = 0xffffffff;
          bVar4 = FUN_004a1150(puVar6,pvVar8);
          uVar5 = CONCAT31(extraout_var,bVar4);
          if (bVar4 == 0) {
            pvVar8 = (void *)((uint)pvVar8 & 0xffffff00);
            FUN_00402690(&stack0xffffffd0,"angle_50",8);
            local_8 = 1;
            puVar6 = FUN_00412df0();
            local_8 = 0xffffffff;
            bVar4 = FUN_004a1150(puVar6,pvVar8);
            uVar5 = CONCAT31(extraout_var_00,bVar4);
            if (bVar4 == 0) goto LAB_004dfb02;
          }
        }
        goto LAB_004dfbe2;
      }
    }
    pcVar9 = "Not possible: RCS non-functional";
  }
  uVar5 = FUN_00527550(*(int **)(param_1 + 0x224),2,pcVar9);
LAB_004dfbe2:
  ExceptionList = local_10;
  return uVar5 & 0xffffff00;
}


undefined4 __cdecl FUN_004dfc00(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint in_EAX;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0xd4) == 3)) goto LAB_004dfcfd;
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x24);
  if (piVar1 == (int *)0x0) {
LAB_004dfce8:
    pcVar6 = "Not possible: helm non-functional";
  }
  else {
    cVar3 = (**(code **)(*piVar1 + 0x10))(0);
    if (cVar3 == '\0') goto LAB_004dfce8;
    piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x18);
    if (piVar1 != (int *)0x0) {
      in_EAX = (**(code **)(*piVar1 + 0x10))(0);
      if ((char)in_EAX != '\0') {
        if (*(int *)(param_1 + 0xd4) != 3) {
          if (*(int *)(param_1 + 0x178) != 0) {
            in_EAX = FUN_004cb200(*(int *)(param_1 + 0x178));
            if ((char)in_EAX != '\0') goto LAB_004dfcfd;
          }
          FUN_00517b80(param_1);
          iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x18);
          if (iVar2 != 0) {
            *(undefined1 *)(iVar2 + 0x62) = 0;
            DAT_0065b3e0 = 0xbff0000000000000;
            FUN_004eb5c0();
            uVar4 = FUN_00591070(&DAT_005cdc70,"STOPPING RCS BURN.");
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
          FUN_004eb5e0();
          uVar5 = FUN_00591070(&DAT_005cdc70,"NO RCS TO BURN.");
          return uVar5 & 0xffffff00;
        }
        goto LAB_004dfcfd;
      }
    }
    pcVar6 = "Not possible: RCS non-functional";
  }
  in_EAX = FUN_00527550(*(int **)(param_1 + 0x224),2,pcVar6);
LAB_004dfcfd:
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004dfd10(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *extraout_EDX;
  
  uVar1 = *(uint *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70);
  if ((uVar1 != 1) && (uVar1 != 0)) {
    uVar1 = *(uint *)((int)param_1 + 0x254);
    if ((*(char *)(uVar1 + 0xdf) != '\0') && (*(int *)((int)param_1 + 0xd4) != 3)) {
      if (*(int *)((int)param_1 + 0x178) != 0) {
        uVar1 = FUN_004cb200(*(int *)((int)param_1 + 0x178));
        param_1 = extraout_EDX;
        if ((char)uVar1 != '\0') goto LAB_004dfd83;
      }
      if (*(char *)((int)param_1 + 0xe4) != '\0') {
        uVar2 = FUN_004dfeb0((int)param_1);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      uVar2 = FUN_004dfd90(param_1);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
LAB_004dfd83:
  return uVar1 & 0xffffff00;
}


undefined4 __cdecl FUN_004dfd90(void *param_1)

{
  void *this;
  void *pvVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  uint uVar3;
  uint in_stack_ffffffc4;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be3e8;
  local_10 = ExceptionList;
  uVar3 = *(uint *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70);
  if ((uVar3 != 1) && (uVar3 != 0)) {
    uVar3 = *(uint *)((int)param_1 + 0x254);
    if ((*(char *)(uVar3 + 0xdf) != '\0') && (*(int *)((int)param_1 + 0xd4) != 3)) {
      iVar7 = -1;
      iVar6 = 3;
      ExceptionList = &local_10;
      *(undefined1 *)(*(int *)((int)param_1 + 0x40) + 0x34) = 0;
      pvVar1 = param_1;
      this = (void *)FUN_00402f60();
      FUN_00557fb0(this,(int)pvVar1,iVar6,iVar7);
      FUN_0050bd90(param_1,'\x01');
      iVar6 = FUN_00402f60();
      if ((*(char *)(iVar6 + 0x44) != '\0') && (*(int *)(iVar6 + 100) != 0)) {
        FMOD::ChannelControl::setPaused(SUB41(*(int *)(iVar6 + 100),0));
      }
      cVar5 = '\x01';
      pvVar1 = (void *)FUN_004023e0();
      FUN_00531430(pvVar1,cVar5);
      pbVar4 = (byte *)(in_stack_ffffffc4 & 0xffffff00);
      FUN_00402690(&stack0xffffffc4,"in_emcon_mode",0xd);
      local_8 = 0;
      this_00 = FUN_00412df0();
      local_8 = 0xffffffff;
      uVar2 = FUN_004a0ee0(this_00,pbVar4);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004dfeb0(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *this;
  undefined4 uVar3;
  uint uVar4;
  uint in_stack_ffffffc0;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be228;
  local_10 = ExceptionList;
  uVar4 = *(uint *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70);
  if ((uVar4 != 1) && (uVar4 != 0)) {
    uVar4 = *(uint *)(param_1 + 0x254);
    if ((*(char *)(uVar4 + 0xdf) != '\0') && (*(int *)(param_1 + 0xd4) != 3)) {
      iVar8 = -1;
      iVar6 = 4;
      ExceptionList = &local_10;
      iVar2 = param_1;
      pvVar1 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar1,iVar2,iVar6,iVar8);
      iVar2 = *(int *)(param_1 + 0x40);
      uVar4 = 0;
      *(undefined1 *)(param_1 + 0xe4) = 0;
      if (*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) >> 2 != 0) {
        do {
          FUN_004ae9f0(*(void **)(*(int *)(iVar2 + 0x3c) + uVar4 * 4),param_1);
          iVar2 = *(int *)(param_1 + 0x40);
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)(*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) >> 2));
      }
      iVar2 = FUN_00402f60();
      if (*(char *)(iVar2 + 0x44) != '\0') {
        FUN_00558210(iVar2);
      }
      cVar7 = '\0';
      pvVar1 = (void *)FUN_004023e0();
      FUN_00531430(pvVar1,cVar7);
      pbVar5 = (byte *)(in_stack_ffffffc0 & 0xffffff00);
      FUN_00402690(&stack0xffffffc0,"in_emcon_mode",0xd);
      local_8 = 0;
      this = FUN_00412df0();
      local_8 = 0xffffffff;
      uVar3 = FUN_004a0ee0(this,pbVar5);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}


undefined4 __cdecl FUN_004dfff0(int param_1)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(uVar1 + 4) + 0x10))(0);
    if ((char)uVar1 != '\0') {
      iVar4 = -1;
      iVar3 = 8;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) = 1;
      this = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this,param_1,iVar3,iVar4);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}
