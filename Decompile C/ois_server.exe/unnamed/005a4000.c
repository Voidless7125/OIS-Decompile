#include "../ois_server.exe.h"


void __thiscall FUN_005a4070(void *this,int param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  uVar2 = FUN_005ac070((ushort *)(param_1 + 2),2,2);
  uVar2 = FUN_005ac070((ushort *)(param_1 + 4),4,uVar2);
  uVar2 = uVar2 % (uint)(*(int *)((int)this + 0xc) << 3);
  piVar1 = *(int **)(*(int *)((int)this + 0x238) + uVar2 * 4);
  if (piVar1 != (int *)0x0) {
    iVar6 = *(int *)((int)this + 0x22c);
    piVar5 = (int *)0x0;
    while (((piVar4 = piVar1, iVar3 = *piVar4 * 0x1210,
            *(ushort *)(iVar3 + 6 + iVar6) != *(ushort *)(param_1 + 2) ||
            (*(short *)(iVar3 + 4 + iVar6) != 2)) ||
           (piVar1 = (int *)(iVar3 + 8 + iVar6), iVar6 = *(int *)((int)this + 0x22c),
           *piVar1 != *(int *)(param_1 + 4)))) {
      piVar1 = (int *)piVar4[1];
      piVar5 = piVar4;
      if ((int *)piVar4[1] == (int *)0x0) {
        return;
      }
    }
    if (piVar5 == (int *)0x0) {
      *(int *)(*(int *)((int)this + 0x238) + uVar2 * 4) = piVar4[1];
    }
    else {
      piVar5[1] = piVar4[1];
    }
    _Memory = (undefined4 *)piVar4[2];
    if (_Memory[1] == 0) {
      *(undefined4 *)*_Memory = piVar4;
      _Memory[1] = _Memory[1] + 1;
      *(int *)((int)this + 0x248) = *(int *)((int)this + 0x248) + -1;
      *(undefined4 *)(_Memory[3] + 0x10) = _Memory[4];
      *(undefined4 *)(_Memory[4] + 0xc) = _Memory[3];
      if ((0 < *(int *)((int)this + 0x248)) && (_Memory == *(undefined4 **)((int)this + 0x240))) {
        *(undefined4 *)((int)this + 0x240) = (*(undefined4 **)((int)this + 0x240))[3];
      }
      iVar6 = *(int *)((int)this + 0x244);
      *(int *)((int)this + 0x244) = iVar6 + 1;
      if (iVar6 == 0) {
        *(undefined4 **)((int)this + 0x23c) = _Memory;
        _Memory[3] = _Memory;
        _Memory[4] = _Memory;
        return;
      }
      _Memory[3] = *(undefined4 *)((int)this + 0x23c);
      _Memory[4] = *(undefined4 *)(*(int *)((int)this + 0x23c) + 0x10);
      *(undefined4 **)(*(int *)(*(int *)((int)this + 0x23c) + 0x10) + 0xc) = _Memory;
      *(undefined4 **)(*(int *)((int)this + 0x23c) + 0x10) = _Memory;
      return;
    }
    ((undefined4 *)*_Memory)[_Memory[1]] = piVar4;
    _Memory[1] = _Memory[1] + 1;
    if ((_Memory[1] == *(uint *)((int)this + 0x24c) / 0xc) && (3 < *(int *)((int)this + 0x244))) {
      if (_Memory == *(undefined4 **)((int)this + 0x23c)) {
        *(undefined4 *)((int)this + 0x23c) = _Memory[3];
      }
      *(undefined4 *)(_Memory[4] + 0xc) = _Memory[3];
      *(undefined4 *)(_Memory[3] + 0x10) = _Memory[4];
      *(int *)((int)this + 0x244) = *(int *)((int)this + 0x244) + -1;
      free((void *)*_Memory);
      free((void *)_Memory[2]);
      free(_Memory);
    }
  }
  return;
}


int __thiscall FUN_005a4230(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = FUN_005ac070((ushort *)(param_1 + 2),2,2);
  uVar2 = FUN_005ac070((ushort *)(param_1 + 4),4,uVar2);
  piVar3 = *(int **)(*(int *)((int)this + 0x238) +
                    (uVar2 % (uint)(*(int *)((int)this + 0xc) << 3)) * 4);
  if (piVar3 != (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x22c);
    do {
      iVar4 = *piVar3 * 0x1210;
      if (((*(ushort *)(iVar4 + 6 + iVar1) == *(ushort *)(param_1 + 2)) &&
          (*(short *)(iVar4 + 4 + iVar1) == 2)) &&
         (*(int *)(iVar4 + 8 + iVar1) == *(int *)(param_1 + 4))) {
        return *piVar3;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
  }
  return -1;
}


uint __thiscall FUN_005a42d0(void *this,int *param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  uint3 uVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = param_1[1];
  if ((*param_1 != DAT_00655908) || (iVar5 != DAT_0065590c)) {
    uVar3 = (uint3)((uint)iVar5 >> 8);
    if ((*param_1 == *(int *)((int)this + 0x450)) && (iVar5 == *(int *)((int)this + 0x454))) {
      return CONCAT31(uVar3,1);
    }
    return (uint)uVar3 << 8;
  }
  puVar4 = (uint *)((int)this + 0x498);
  iVar5 = 0;
  do {
    uVar1 = *(ushort *)((int)puVar4 + -2);
    uVar2 = (uint)uVar1;
    if (((uVar1 == DAT_006558f6) && ((short)puVar4[-1] == 2)) && (*puVar4 == DAT_006558f8)) break;
    if (((param_2 == '\0') || (uVar1 == *(ushort *)((int)param_1 + 0x12))) &&
       (((short)puVar4[-1] == 2 && (uVar2 = *puVar4, uVar2 == param_1[5])))) goto LAB_005a4357;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 5;
  } while (iVar5 < 10);
  if (param_2 == '\x01') {
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),*(short *)((int)param_1 + 0x12));
    bVar6 = *(short *)((int)param_1 + 0x12) == *(short *)((int)this + 0x46a);
  }
  else {
    bVar6 = param_2 == '\0';
  }
  if (((!bVar6) || ((short)param_1[4] != 2)) ||
     (uVar2 = param_1[5], uVar2 != *(uint *)((int)this + 0x46c))) {
    return uVar2 & 0xffffff00;
  }
LAB_005a4357:
  return CONCAT31((int3)(uVar2 >> 8),1);
}


bool __fastcall FUN_005a43a0(int *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1[0x8b] != 0) && ((char)param_1[2] != '\x01')) {
    uVar4 = 0;
    uVar2 = 0;
    if (param_1[0x8d] != 0) {
      do {
        pcVar1 = *(char **)(param_1[0x8c] + uVar2 * 4);
        if (((*pcVar1 != '\0') && (*(int *)(pcVar1 + 0x120c) == 7)) && (pcVar1[0x1170] == '\0')) {
          uVar4 = uVar4 + 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[0x8d]);
    }
    uVar2 = (**(code **)(*param_1 + 0x20))();
    return uVar4 < uVar2;
  }
  iVar3 = (**(code **)(*param_1 + 0x20))();
  return iVar3 != 0;
}


void __fastcall FUN_005a4410(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36c));
  FUN_0059bac0((void *)(param_1 + 0x35c),(undefined4 *)&stack0x00000004);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36c));
  return;
}


int __fastcall FUN_005a4450(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x36c);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)(param_1 + 0x360);
  if (*(uint *)(param_1 + 0x364) < uVar1) {
    iVar2 = *(int *)(param_1 + 0x368) - uVar1;
  }
  else {
    iVar2 = -uVar1;
  }
  if (*(uint *)(param_1 + 0x364) + iVar2 == 0) {
    LeaveCriticalSection(lpCriticalSection);
    iVar2 = FUN_005adb0f(0x600);
    *(undefined4 *)(iVar2 + 0x5d8) = 0;
    *(undefined4 *)(iVar2 + 0x5dc) = 0;
    *(undefined4 *)(iVar2 + 0x5e0) = 0;
    *(undefined4 *)(iVar2 + 0x5e4) = 0;
    *(undefined2 *)(iVar2 + 0x5d8) = 2;
    *(undefined4 *)(iVar2 + 0x5e8) = 0xffff0000;
    return iVar2;
  }
  iVar2 = uVar1 + 1;
  *(int *)(param_1 + 0x360) = iVar2;
  if (iVar2 == *(int *)(param_1 + 0x368)) {
    *(undefined4 *)(param_1 + 0x360) = 0;
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x35c) + -4 + *(int *)(param_1 + 0x368) * 4);
    LeaveCriticalSection(lpCriticalSection);
    return iVar2;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x35c) + -4 + iVar2 * 4);
  LeaveCriticalSection(lpCriticalSection);
  return iVar2;
}


void __fastcall FUN_005a4520(int param_1)

{
  uint uVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x370));
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x364);
    if (*(uint *)(param_1 + 0x368) < uVar1) {
      iVar2 = *(int *)(param_1 + 0x36c) - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    if (*(uint *)(param_1 + 0x368) + iVar2 == 0) break;
    iVar2 = uVar1 + 1;
    *(int *)(param_1 + 0x364) = iVar2;
    if (iVar2 == *(int *)(param_1 + 0x36c)) {
      *(undefined4 *)(param_1 + 0x364) = 0;
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      FUN_005adb3f(*(void **)(*(int *)(param_1 + 0x360) + -4 + *(int *)(param_1 + 0x36c) * 4));
    }
    else {
      FUN_005adb3f(*(void **)(*(int *)(param_1 + 0x360) + -4 + iVar2 * 4));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x370));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x398));
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x38c);
    if (*(uint *)(param_1 + 0x390) < uVar1) {
      iVar2 = *(int *)(param_1 + 0x394) - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    if (*(uint *)(param_1 + 0x390) + iVar2 == 0) break;
    iVar2 = uVar1 + 1;
    *(int *)(param_1 + 0x38c) = iVar2;
    if (iVar2 == *(int *)(param_1 + 0x394)) {
      *(undefined4 *)(param_1 + 0x38c) = 0;
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      FUN_005adb3f(*(void **)(*(int *)(param_1 + 0x388) + -4 + *(int *)(param_1 + 0x394) * 4));
    }
    else {
      FUN_005adb3f(*(void **)(*(int *)(param_1 + 0x388) + -4 + iVar2 * 4));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x398));
  return;
}


void __thiscall FUN_005a4640(void *this)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char in_stack_00000018;
  uint in_stack_0000001c;
  int in_stack_fffffe8c;
  int in_stack_fffffe90;
  ushort in_stack_fffffe94;
  undefined4 in_stack_fffffe98;
  undefined4 in_stack_fffffe9c;
  int iVar6;
  uint uVar7;
  undefined8 local_134;
  byte local_129;
  int local_128;
  uint local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  char local_118;
  undefined1 local_117 [259];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cba4b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar3 = (**(code **)(*(int *)this + 0x3c))();
  if (cVar3 != '\0') {
    memset(&local_128,0,0x114);
    local_11c = local_117;
    local_128 = 0;
    local_120 = 0;
    local_124 = 0x800;
    local_118 = '\x01';
    local_8 = 0;
    local_129 = 0;
    FUN_005ab3f0(&local_128,&local_129,8);
    uVar4 = FUN_005ab130();
    iVar6 = 0x5a4701;
    local_134 = __aulldiv((uint)uVar4,(uint)((ulonglong)uVar4 >> 0x20),1000,0);
    uVar7 = 0x5a471f;
    FUN_005aa070(&local_128,(byte *)&local_134);
    if (in_stack_00000018 == '\0') {
      FUN_0059d640(&stack0xfffffe84,(undefined4 *)&stack0x00000004);
      (**(code **)(*(int *)this + 0x4c))(&local_128,0,in_stack_0000001c,0);
    }
    else {
      uVar5 = FUN_005ab130();
      puVar2 = local_11c;
      iVar1 = local_128;
      FUN_0059d640(&stack0xfffffe8c,(undefined4 *)&stack0x00000004);
      FUN_005a4d90(this,puVar2,iVar1,0,in_stack_0000001c,0,'\0','\0',(uint)uVar5,
                   (uint)((ulonglong)uVar5 >> 0x20),0,in_stack_fffffe8c,in_stack_fffffe90,
                   in_stack_fffffe94,in_stack_fffffe98,in_stack_fffffe9c,iVar6,(int)uVar4,
                   (int)((ulonglong)uVar4 >> 0x20),uVar7);
    }
    if ((local_118 != '\0') && (0x800 < local_124)) {
      free(local_11c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall
FUN_005a47e0(void *this,int *param_1,char param_2,char param_3,undefined4 param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_48 [20];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (((((*param_1 != DAT_00655908) || (param_1[1] != DAT_0065590c)) ||
       (*(short *)((int)param_1 + 0x12) != DAT_006558f6)) ||
      (((short)param_1[4] != 2 || (param_1[5] != DAT_006558f8)))) &&
     ((*(int *)((int)this + 0x22c) != 0 && (*(char *)((int)this + 8) != '\x01')))) {
    if (((*(short *)((int)param_1 + 0x12) == DAT_006558f6) && ((short)param_1[4] == 2)) &&
       (param_1[5] == DAT_006558f8)) {
      piVar4 = (int *)(**(code **)(*(int *)this + 0xd4))
                                (local_48,*param_1,param_1[1],param_1[2],param_1[3]);
      uVar1 = *(undefined2 *)((int)piVar4 + 0x12);
      local_1c = *piVar4;
      iStack_18 = piVar4[1];
      iStack_14 = piVar4[2];
      iStack_10 = piVar4[3];
      uVar3 = (undefined2)piVar4[4];
    }
    else {
      uVar1 = *(undefined2 *)((int)param_1 + 0x22);
      local_1c = param_1[4];
      iStack_18 = param_1[5];
      iStack_14 = param_1[6];
      iStack_10 = param_1[7];
      uVar3 = (undefined2)param_1[8];
    }
    local_c = CONCAT22(uVar1,uVar3);
    if (((((short)((uint)local_1c >> 0x10) != DAT_006558f6) || ((short)local_1c != 2)) ||
        (iStack_18 != DAT_006558f8)) && (param_3 != '\0')) {
      iVar5 = **(int **)((int)this + 0x424);
      local_34 = *(undefined4 *)(iVar5 + 0xc);
      uStack_30 = *(undefined4 *)(iVar5 + 0x10);
      uStack_2c = *(undefined4 *)(iVar5 + 0x14);
      uStack_28 = *(undefined4 *)(iVar5 + 0x18);
      local_24 = *(undefined4 *)(iVar5 + 0x1c);
      FUN_0059d1f0(&local_1c,(short *)&local_34);
    }
    if (param_2 != '\0') {
      FUN_005a3990(this,local_1c,iStack_18,iStack_14,iStack_10,local_c,param_3,param_4,param_5);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (param_3 == '\0') {
      iVar5 = FUN_005aa700((int *)((int)this + 0x30c));
      *(undefined4 *)(iVar5 + 0x6c) = 1;
      FUN_0059d6c0((void *)(iVar5 + 0x10),&local_1c);
      *(undefined4 *)(iVar5 + 0x4c) = 0;
      *(undefined1 *)(iVar5 + 0xc) = (undefined1)param_4;
      *(int *)(iVar5 + 4) = param_5;
      FUN_005aa610((void *)((int)this + 0x30c),iVar5);
    }
    else {
      iVar5 = FUN_005a4230(this,(int)&local_1c);
      if ((iVar5 != -1) &&
         (iVar5 = iVar5 * 0x1210, local_20 = iVar5,
         *(char *)(iVar5 + *(int *)((int)this + 0x22c)) != '\0')) {
        uVar6 = 0;
        if (*(int *)((int)this + 0x234) != 0) {
          do {
            piVar4 = (int *)(*(int *)((int)this + 0x230) + uVar6 * 4);
            iVar2 = *piVar4;
            if (((*(short *)(iVar2 + 6) == local_1c._2_2_) && (*(short *)(iVar2 + 4) == 2)) &&
               (*(int *)(iVar2 + 8) == iStack_18)) {
              *piVar4 = *(int *)(*(int *)((int)this + 0x230) + -4 + *(uint *)((int)this + 0x234) * 4
                                );
              *(int *)((int)this + 0x234) = *(int *)((int)this + 0x234) + -1;
              break;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)((int)this + 0x234));
        }
        *(undefined1 *)(iVar5 + *(int *)((int)this + 0x22c)) = 0;
        piVar4 = (int *)(*(int *)((int)this + 0x22c) + 0x11f0 + iVar5);
        *piVar4 = DAT_00655908;
        piVar4[1] = DAT_0065590c;
        *(undefined2 *)(piVar4 + 2) = DAT_00655910;
        FUN_00596760((void *)(*(int *)((int)this + 0x22c) + 0xf8 + iVar5),'\0',
                     *(int *)(*(int *)((int)this + 0x22c) + 0x1200 + iVar5));
        *(undefined4 *)(*(int *)((int)this + 0x22c) + 0x1204 + iVar5) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_005a4a29(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_EBP;
  int unaff_EDI;
  undefined4 uStack00000008;
  
  iVar3 = FUN_005aa700((int *)(unaff_EDI + 0x30c));
  *(undefined4 *)(iVar3 + 0x6c) = 1;
  FUN_0059d6c0((void *)(iVar3 + 0x10),(undefined4 *)(unaff_EBP - 0x18));
  uVar1 = *(undefined1 *)(unaff_EBP + 0x14);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined1 *)(iVar3 + 0xc) = uVar1;
  *(undefined4 *)(iVar3 + 4) = uVar2;
  FUN_005aa610((void *)(unaff_EDI + 0x30c),iVar3);
  uStack00000008 = 0x5a4a78;
  __security_check_cookie(*(uint *)(unaff_EBP - 4) ^ unaff_EBP);
  return;
}


void __thiscall
FUN_005a4a80(void *this,void *param_1,int param_2,int param_3,int param_4,undefined1 param_5,
            int param_6,int param_7,undefined2 param_8,undefined4 param_9,int param_10,int param_11,
            int param_12,int param_13,int param_14,undefined4 param_15,undefined1 param_16,
            int param_17,int param_18)

{
  int *this_00;
  int *piVar1;
  void *_Dst;
  uint _Size;
  
  this_00 = (int *)((int)this + 0x30c);
  piVar1 = (int *)FUN_005aa700(this_00);
  _Size = param_2 + 7U >> 3;
  _Dst = malloc(_Size);
  piVar1[0x13] = (int)_Dst;
  if (_Dst == (void *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 800));
    FUN_005aaea0(this_00,(int)piVar1);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 800));
    return;
  }
  memcpy(_Dst,param_1,_Size);
  *piVar1 = param_2;
  piVar1[2] = param_4;
  *(undefined1 *)(piVar1 + 3) = param_5;
  piVar1[1] = param_3;
  piVar1[4] = param_6;
  piVar1[5] = param_7;
  *(undefined2 *)(piVar1 + 6) = param_8;
  piVar1[8] = param_10;
  piVar1[9] = param_11;
  piVar1[10] = param_12;
  piVar1[0xb] = param_13;
  piVar1[0xc] = param_14;
  *(undefined1 *)(piVar1 + 0xe) = param_16;
  piVar1[0xf] = param_17;
  piVar1[0x1a] = param_18;
  piVar1[0x1b] = 0;
  FUN_005aa610(this_00,piVar1);
  if (param_3 == 0) {
    SetEvent(*(HANDLE *)((int)this + 0x568));
  }
  return;
}


void __thiscall
FUN_005a4b80(void *this,int param_1,size_t *param_2,uint param_3,int param_4,int param_5,
            undefined1 param_6,int param_7,int param_8,undefined2 param_9,undefined4 param_10,
            int param_11,int param_12,int param_13,int param_14,undefined4 param_15,
            undefined4 param_16,char param_17,undefined4 param_18,int param_19)

{
  size_t *psVar1;
  uint uVar2;
  void *_Memory;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  size_t local_c;
  
  iVar4 = 0;
  local_c = 0;
  if (0 < (int)param_3) {
    if (7 < param_3) {
      uVar2 = param_3 & 0x80000007;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
      }
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      do {
        psVar1 = param_2 + iVar4;
        uVar7 = -(uint)(0 < (int)*psVar1);
        uVar8 = -(uint)(0 < (int)psVar1[1]);
        uVar9 = -(uint)(0 < (int)psVar1[2]);
        uVar10 = -(uint)(0 < (int)psVar1[3]);
        uVar15 = *psVar1 + uVar15 & uVar7 | ~uVar7 & uVar15;
        uVar16 = psVar1[1] + uVar16 & uVar8 | ~uVar8 & uVar16;
        uVar17 = psVar1[2] + uVar17 & uVar9 | ~uVar9 & uVar17;
        uVar18 = psVar1[3] + uVar18 & uVar10 | ~uVar10 & uVar18;
        psVar1 = param_2 + iVar4 + 4;
        iVar4 = iVar4 + 8;
        uVar7 = -(uint)(0 < (int)*psVar1);
        uVar8 = -(uint)(0 < (int)psVar1[1]);
        uVar9 = -(uint)(0 < (int)psVar1[2]);
        uVar10 = -(uint)(0 < (int)psVar1[3]);
        uVar11 = *psVar1 + uVar11 & uVar7 | ~uVar7 & uVar11;
        uVar12 = psVar1[1] + uVar12 & uVar8 | ~uVar8 & uVar12;
        uVar13 = psVar1[2] + uVar13 & uVar9 | ~uVar9 & uVar13;
        uVar14 = psVar1[3] + uVar14 & uVar10 | ~uVar10 & uVar14;
      } while (iVar4 < (int)(param_3 - uVar2));
      local_c = uVar11 + uVar15 + uVar13 + uVar17 + uVar12 + uVar16 + uVar14 + uVar18;
    }
    for (; iVar4 < (int)param_3; iVar4 = iVar4 + 1) {
      sVar5 = local_c + param_2[iVar4];
      if ((int)param_2[iVar4] < 1) {
        sVar5 = local_c;
      }
      local_c = sVar5;
    }
    if ((local_c != 0) && (_Memory = malloc(local_c), _Memory != (void *)0x0)) {
      iVar6 = 0;
      iVar4 = param_1 - (int)param_2;
      do {
        if (0 < (int)*param_2) {
          memcpy((void *)(iVar6 + (int)_Memory),*(void **)(iVar4 + (int)param_2),*param_2);
          iVar6 = iVar6 + *param_2;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      if ((param_17 == '\0') && (uVar2 = FUN_005a42d0(this,&param_7,'\x01'), (char)uVar2 != '\0')) {
        (**(code **)(*(int *)this + 0x54))(_Memory,local_c);
        free(_Memory);
        return;
      }
      piVar3 = (int *)FUN_005aa700((int *)((int)this + 0x30c));
      *piVar3 = local_c * 8;
      piVar3[2] = param_5;
      piVar3[0x13] = (int)_Memory;
      *(undefined1 *)(piVar3 + 3) = param_6;
      piVar3[1] = param_4;
      piVar3[4] = param_7;
      piVar3[5] = param_8;
      *(undefined2 *)(piVar3 + 6) = param_9;
      piVar3[8] = param_11;
      piVar3[9] = param_12;
      piVar3[10] = param_13;
      piVar3[0xb] = param_14;
      *(undefined2 *)((int)piVar3 + 0x32) = param_15._2_2_;
      *(undefined2 *)(piVar3 + 0xc) = (undefined2)param_15;
      *(char *)(piVar3 + 0xe) = param_17;
      piVar3[0xf] = 0;
      piVar3[0x1a] = param_19;
      piVar3[0x1b] = 0;
      FUN_005aa610((void *)((int)this + 0x30c),piVar3);
      if (param_4 == 0) {
        SetEvent(*(HANDLE *)((int)this + 0x568));
      }
    }
  }
  return;
}


void FUN_005a4ce2(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  piVar6 = (int *)FUN_005aa700((int *)(unaff_EDI + 0x30c));
  iVar2 = *(int *)(unaff_EBP + -0xc);
  *piVar6 = unaff_EBX * 8;
  piVar6[2] = *(int *)(unaff_EBP + 0x18);
  uVar1 = *(undefined1 *)(unaff_EBP + 0x1c);
  piVar6[0x13] = iVar2;
  iVar2 = *(int *)(unaff_EBP + 0x14);
  *(undefined1 *)(piVar6 + 3) = uVar1;
  piVar6[1] = iVar2;
  piVar6[4] = *(int *)(unaff_EBP + 0x20);
  piVar6[5] = *(int *)(unaff_EBP + 0x24);
  *(undefined2 *)(piVar6 + 6) = *(undefined2 *)(unaff_EBP + 0x28);
  iVar3 = *(int *)(unaff_EBP + 0x34);
  iVar4 = *(int *)(unaff_EBP + 0x38);
  iVar5 = *(int *)(unaff_EBP + 0x3c);
  piVar6[8] = *(int *)(unaff_EBP + 0x30);
  piVar6[9] = iVar3;
  piVar6[10] = iVar4;
  piVar6[0xb] = iVar5;
  *(undefined2 *)((int)piVar6 + 0x32) = *(undefined2 *)(unaff_EBP + 0x42);
  *(undefined2 *)(piVar6 + 0xc) = *(undefined2 *)(unaff_EBP + 0x40);
  *(undefined1 *)(piVar6 + 0xe) = *(undefined1 *)(unaff_EBP + 0x48);
  iVar3 = *(int *)(unaff_EBP + 0x50);
  piVar6[0xf] = 0;
  piVar6[0x1a] = iVar3;
  piVar6[0x1b] = 0;
  FUN_005aa610((void *)(unaff_EDI + 0x30c),piVar6);
  if (iVar2 == 0) {
    SetEvent(*(HANDLE *)(*(int *)(unaff_EBP + -0x10) + 0x568));
  }
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe

void __thiscall
FUN_005a4d90(void *this,void *param_1,int param_2,int param_3,uint param_4,byte param_5,char param_6
            ,char param_7,uint param_8,uint param_9,undefined4 param_10,int param_11,int param_12,
            ushort param_13,undefined4 param_14,undefined4 param_15,int param_16,undefined4 param_17
            ,undefined4 param_18,uint param_19)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_18;
  int local_14;
  
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  uVar9 = 0;
  bVar3 = false;
  if ((((short)((uint)param_15 >> 0x10) == DAT_006558f6) && ((short)param_15 == 2)) &&
     (param_16 == DAT_006558f8)) {
    if ((param_11 == DAT_00655908) && (param_12 == DAT_0065590c)) {
      uVar10 = 0xffffffff;
    }
    else {
      if ((param_11 != *(int *)((int)this + 0x450)) || (param_12 != *(int *)((int)this + 0x454))) {
        if ((param_13 != 0xffff) && (uVar10 = (uint)param_13, uVar10 < *(uint *)((int)this + 0xc)))
        {
          if ((*(int *)(uVar10 * 0x1210 + 0x11f0 + *(int *)((int)this + 0x22c)) == param_11) &&
             (*(int *)(uVar10 * 0x1210 + 0x11f4 + *(int *)((int)this + 0x22c)) == param_12))
          goto LAB_005a4ebc;
        }
        uVar10 = 0;
        if (*(int *)((int)this + 0xc) != 0) {
          piVar6 = (int *)(*(int *)((int)this + 0x22c) + 0x11f0);
          do {
            if ((*piVar6 == param_11) && (piVar6[1] == param_12)) {
              *(short *)(uVar10 * 0x1210 + 0x11f8 + *(int *)((int)this + 0x22c)) = (short)uVar10;
              goto LAB_005a4ebc;
            }
            uVar10 = uVar10 + 1;
            piVar6 = piVar6 + 0x484;
          } while (uVar10 < *(uint *)((int)this + 0xc));
          uVar10 = 0xffffffff;
          goto LAB_005a4ebc;
        }
      }
      uVar10 = 0xffffffff;
    }
  }
  else {
    uVar10 = FUN_005a2c60(this,param_15,param_16,param_17,param_18,param_19,'\x01');
  }
LAB_005a4ebc:
  if (param_6 == '\0') {
    if (uVar10 == 0xffffffff) goto LAB_005a5081;
    if (((*(char *)(uVar10 * 0x1210 + *(int *)((int)this + 0x22c)) == '\0') ||
        (iVar1 = *(int *)(uVar10 * 0x1210 + 0x120c + *(int *)((int)this + 0x22c)), iVar1 == 1)) ||
       ((iVar1 == 2 || (iVar1 == 3)))) goto LAB_005a5081;
    uVar9 = 1;
  }
  else {
    uVar7 = 0;
    if (*(int *)((int)this + 0xc) == 0) goto LAB_005a5081;
    local_14 = 0;
    do {
      if ((((uVar10 == 0xffffffff) || (uVar7 != uVar10)) &&
          (pcVar8 = (char *)(local_14 + *(int *)((int)this + 0x22c)), *pcVar8 != '\0')) &&
         (((*(short *)(pcVar8 + 6) != DAT_006558f6 || (*(short *)(pcVar8 + 4) != 2)) ||
          (*(int *)(pcVar8 + 8) != DAT_006558f8)))) {
        *(uint *)(&stack0xffffffcc + uVar9 * 4) = uVar7;
        uVar9 = uVar9 + 1;
      }
      uVar7 = uVar7 + 1;
      local_14 = local_14 + 0x1210;
    } while (uVar7 < *(uint *)((int)this + 0xc));
    if (uVar9 == 0) goto LAB_005a5081;
  }
  local_18 = 0;
  if (uVar9 != 0) {
    do {
      if (((param_7 == '\0') || (bVar3)) || (local_18 + 1 != uVar9)) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      piVar6 = (int *)(&stack0xffffffcc + local_18 * 4);
      FUN_005984e0((void *)(*piVar6 * 0x1210 + *(int *)((int)this + 0x22c) + 0xf8),param_1,param_2,
                   param_3,param_4,param_5,bVar4 ^ 1,piVar6,param_8,param_9,param_10);
      if (bVar4 != 0) {
        bVar3 = true;
      }
      if (((param_4 == 2) || (param_4 == 3)) ||
         ((param_4 == 4 || ((param_4 == 6 || (param_4 == 7)))))) {
        uVar11 = __aulldiv(param_8,param_9,1000,0);
        iVar1 = *piVar6;
        iVar2 = *(int *)((int)this + 0x22c);
        *(int *)(iVar1 * 0x1210 + 0x11e0 + iVar2) = (int)uVar11;
        *(undefined4 *)(iVar1 * 0x1210 + 0x11e4 + iVar2) = 0;
      }
      local_18 = local_18 + 1;
    } while (local_18 < uVar9);
  }
LAB_005a5081:
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Removing unreachable block (ram,0x005a50d1)

void FUN_005a50a0(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 local_10;
  
  uVar6 = FUN_005ab130();
  uVar7 = __aulldiv((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),1000,0);
  if (CONCAT44(param_2,param_1) < uVar7) {
    local_10 = (int)uVar7 - param_1;
  }
  else {
    local_10 = 0;
  }
  *(short *)(param_5 + 0x1178 + *(int *)(param_5 + 0x11c8) * 0x10) = (short)local_10;
  uVar2 = (uint)(uVar7 >> 1);
  uVar4 = param_3 - uVar2;
  uVar5 = param_1 >> 1 | param_2 << 0x1f;
  iVar3 = *(int *)(param_5 + 0x11c8) + 0x118;
  *(uint *)(param_5 + iVar3 * 0x10) = uVar4 - uVar5;
  *(uint *)(param_5 + 4 + iVar3 * 0x10) =
       (((param_4 - (int)((uVar7 >> 1) >> 0x20)) - (uint)(param_3 < uVar2)) - (param_2 >> 1)) -
       (uint)(uVar4 < uVar5);
  if ((*(ushort *)(param_5 + 0x11d0) == 0xffff) ||
     (local_10 < (int)(uint)*(ushort *)(param_5 + 0x11d0))) {
    *(short *)(param_5 + 0x11d0) = (short)local_10;
  }
  puVar1 = (uint *)(param_5 + 0x11c8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  *(int *)(param_5 + 0x11cc) = *(int *)(param_5 + 0x11cc) + (uint)(0xfffffffe < uVar2);
  if ((*(int *)(param_5 + 0x11c8) == 5) && (*(int *)(param_5 + 0x11cc) == 0)) {
    *(undefined4 *)(param_5 + 0x11c8) = 0;
    *(undefined4 *)(param_5 + 0x11cc) = 0;
  }
  return;
}


void __fastcall FUN_005a51a0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *this;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  this = (int *)(param_1 + 0x30c);
  while( true ) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x348));
    if (*(int *)(param_1 + 0x33c) == *(int *)(param_1 + 0x340)) break;
    iVar2 = *(int *)(param_1 + 0x33c) + 1;
    *(int *)(param_1 + 0x33c) = iVar2;
    if (iVar2 == *(int *)(param_1 + 0x344)) {
      *(undefined4 *)(param_1 + 0x33c) = 0;
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x338) + -4 + *(int *)(param_1 + 0x344) * 4);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x338) + -4 + iVar2 * 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x348));
    if (iVar2 == 0) goto LAB_005a5266;
    if (*(void **)(iVar2 + 0x4c) != (void *)0x0) {
      free(*(void **)(iVar2 + 0x4c));
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 800));
    FUN_005aaea0(this,iVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 800));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x348));
LAB_005a5266:
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 800));
  uVar3 = 0;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x33c);
    if (*(uint *)(param_1 + 0x340) < uVar1) {
      iVar2 = *(int *)(param_1 + 0x344) - uVar1;
    }
    else {
      iVar2 = -uVar1;
    }
    if (*(uint *)(param_1 + 0x340) + iVar2 <= uVar3) break;
    if (uVar1 + uVar3 < *(uint *)(param_1 + 0x344)) {
      FUN_005aaea0(this,*(int *)(*(int *)(param_1 + 0x338) + (uVar1 + uVar3) * 4));
      uVar3 = uVar3 + 1;
    }
    else {
      FUN_005aaea0(this,*(int *)(*(int *)(param_1 + 0x338) +
                                ((uVar1 - *(uint *)(param_1 + 0x344)) + uVar3) * 4));
      uVar3 = uVar3 + 1;
    }
  }
  if (*(uint *)(param_1 + 0x344) != 0) {
    if (0x20 < *(uint *)(param_1 + 0x344)) {
      free(*(void **)(param_1 + 0x338));
      *(undefined4 *)(param_1 + 0x344) = 0;
    }
    *(undefined4 *)(param_1 + 0x33c) = 0;
    *(undefined4 *)(param_1 + 0x340) = 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 800);
  LeaveCriticalSection(lpCriticalSection);
  EnterCriticalSection(lpCriticalSection);
  FUN_0059bdd0(this);
  LeaveCriticalSection(lpCriticalSection);
  return;
}


void __fastcall FUN_005a5320(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  this = (int *)(param_1 + 0x3b0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c4));
  uVar6 = 0;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 0x3e0);
    if (*(uint *)(param_1 + 0x3e4) < uVar1) {
      iVar3 = *(int *)(param_1 + 1000) - uVar1;
    }
    else {
      iVar3 = -uVar1;
    }
    if (*(uint *)(param_1 + 0x3e4) + iVar3 <= uVar6) break;
    uVar5 = *(uint *)(param_1 + 1000);
    uVar4 = uVar1 + uVar6;
    if (uVar5 <= uVar4) {
      uVar4 = (uVar1 - uVar5) + uVar6;
    }
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x3dc) + uVar4 * 4);
    if (puVar2[2] != 0) {
      free((void *)*puVar2);
      uVar5 = *(uint *)(param_1 + 1000);
    }
    uVar1 = *(int *)(param_1 + 0x3e0) + uVar6;
    if (uVar1 < uVar5) {
      FUN_005aaf80(this,*(int *)(*(int *)(param_1 + 0x3dc) + uVar1 * 4));
      uVar6 = uVar6 + 1;
    }
    else {
      FUN_005aaf80(this,*(int *)(*(int *)(param_1 + 0x3dc) +
                                ((*(int *)(param_1 + 0x3e0) - uVar5) + uVar6) * 4));
      uVar6 = uVar6 + 1;
    }
  }
  if (*(uint *)(param_1 + 1000) != 0) {
    if (0x20 < *(uint *)(param_1 + 1000)) {
      free(*(void **)(param_1 + 0x3dc));
      *(undefined4 *)(param_1 + 1000) = 0;
    }
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x3c4);
  LeaveCriticalSection(lpCriticalSection);
  EnterCriticalSection(lpCriticalSection);
  FUN_0059bdd0(this);
  LeaveCriticalSection(lpCriticalSection);
  return;
}


void __fastcall FUN_005a5400(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x59c));
  FUN_0059bac0((void *)(param_1 + 0x5b4),(undefined4 *)&stack0x00000004);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x59c));
  return;
}


void FUN_005a5440(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_24 [12];
  undefined8 local_18;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_24;
  local_18 = FUN_005ab130();
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar1 = FUN_005ab130();
    Sleep(1);
    Sleep(0);
    iVar2 = FUN_005ab130();
    bVar3 = (byte)iVar5;
    iVar5 = iVar5 + 4;
    *(byte *)((int)&local_18 + iVar4) =
         *(byte *)((int)&local_18 + iVar4) ^
         (byte)((uint)((iVar2 - iVar1) * 0x10000000) >> (bVar3 & 0x1f));
    iVar4 = iVar4 + 1;
  } while (iVar5 < 0x20);
  __security_check_cookie(local_c ^ (uint)auStack_24);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall
FUN_005a54c0(char *param_1,uint param_2,PRTL_CRITICAL_SECTION_DEBUG param_3,uint param_4,
            PRTL_CRITICAL_SECTION_DEBUG param_5,HANDLE param_6,byte *param_7,int *param_8,
            int *param_9,short *param_10,uint param_11,uint param_12)

{
  int *piVar1;
  short *psVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *this;
  char cVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  u_short uVar9;
  char *pcVar10;
  byte *pbVar11;
  LPCRITICAL_SECTION p_Var12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  void *this_00;
  void *this_01;
  void *this_02;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  PRTL_CRITICAL_SECTION_DEBUG p_Var21;
  undefined8 uVar22;
  int in_stack_fffff920;
  HANDLE in_stack_fffff924;
  ushort in_stack_fffff928;
  char *in_stack_fffff92c;
  undefined4 uVar23;
  byte *pbVar24;
  uint local_6a4;
  undefined1 local_6a0 [4];
  uint local_69c;
  PRTL_CRITICAL_SECTION_DEBUG local_698;
  uint uStack_694;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_690;
  HANDLE pvStack_68c;
  undefined2 local_688;
  undefined2 local_686;
  char *local_680;
  uint local_67c;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_678;
  undefined2 local_674;
  u_short uStack_672;
  undefined2 uStack_670;
  undefined2 uStack_66e;
  HANDLE pvStack_66c;
  byte *pbStack_668;
  char *local_664;
  char *local_660;
  uint local_65c;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_658;
  uint uStack_654;
  PRTL_CRITICAL_SECTION_DEBUG local_650;
  HANDLE pvStack_64c;
  byte *pbStack_648;
  undefined4 uStack_644;
  char *local_63c;
  uint local_638;
  PRTL_CRITICAL_SECTION_DEBUG local_634;
  uint uStack_630;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_62c;
  HANDLE pvStack_628;
  undefined2 local_624;
  undefined2 local_622;
  byte *local_620;
  undefined4 local_61c;
  int local_618 [3];
  char *local_60c;
  byte *local_500 [3];
  char *local_4f4;
  uint local_3e8;
  uint local_3e4;
  undefined4 local_3e0;
  char *local_3dc;
  char local_3d8;
  uint local_2d0;
  uint local_2cc;
  int local_2c8;
  char *local_2c4;
  char local_2c0;
  char local_2bf [263];
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  char *local_1ac;
  char local_1a8;
  char local_1a7 [263];
  undefined1 local_a0 [8];
  undefined8 uStack_98;
  byte *local_90 [3];
  undefined4 local_84;
  LPCRITICAL_SECTION local_80;
  LPCRITICAL_SECTION local_7c [2];
  undefined4 local_74;
  undefined4 local_70;
  byte local_69;
  char local_68 [68];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  piVar1 = param_9;
  this = param_8;
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005cbb30;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_74 = param_10;
  local_61c = param_2;
  local_84 = param_1;
  FUN_0059d0f0(&param_3,'\0',local_68);
  cVar5 = (**(code **)(*this + 0x90))();
  if (cVar5 == '\0') {
    if (2 < (int)local_61c) {
      cVar5 = *param_1;
      if (((cVar5 == '\x01') || (cVar5 == '\x02')) && (0x18 < local_61c)) {
        piVar16 = (int *)(param_1 + 9);
        local_70 = (byte *)&DAT_005e0e24;
        local_90[0] = (byte *)0xc;
        do {
          if (*piVar16 != *(int *)local_70) {
            bVar6 = (byte)*piVar16;
            bVar7 = bVar6 < *local_70;
            if (((bVar6 == *local_70) &&
                (bVar7 = *(byte *)((int)piVar16 + 1) < local_70[1],
                *(byte *)((int)piVar16 + 1) == local_70[1])) &&
               ((bVar7 = *(byte *)((int)piVar16 + 2) < local_70[2],
                *(byte *)((int)piVar16 + 2) == local_70[2] &&
                (bVar7 = *(byte *)((int)piVar16 + 3) < local_70[3],
                *(byte *)((int)piVar16 + 3) == local_70[3])))) {
              bVar7 = true;
            }
            else {
              bVar7 = (-(uint)bVar7 | 1) == 0;
            }
            goto LAB_005a596a;
          }
          local_70 = local_70 + 4;
          piVar16 = piVar16 + 1;
          bVar7 = (byte *)0x3 < local_90[0];
          local_90[0] = local_90[0] + -4;
        } while (bVar7);
        bVar7 = true;
      }
      else if (cVar5 == '\x1c') {
        if (local_61c < 0x1d) {
LAB_005a7935:
          *(undefined1 *)local_74 = 0;
          goto LAB_005a793d;
        }
        piVar16 = (int *)(param_1 + 0x11);
        local_70 = (byte *)&DAT_005e0e24;
        local_90[0] = (byte *)0xc;
        do {
          if (*piVar16 != *(int *)local_70) goto LAB_005a5968;
          local_70 = local_70 + 4;
          piVar16 = piVar16 + 1;
          bVar7 = (byte *)0x3 < local_90[0];
          local_90[0] = local_90[0] + -4;
        } while (bVar7);
        bVar7 = true;
      }
      else if (cVar5 == '\r') {
        if (local_61c < 0x19) goto LAB_005a7935;
        piVar16 = (int *)(param_1 + 9);
        local_70 = (byte *)&DAT_005e0e24;
        local_90[0] = (byte *)0xc;
        do {
          if (*piVar16 != *(int *)local_70) goto LAB_005a5968;
          local_70 = local_70 + 4;
          piVar16 = piVar16 + 1;
          bVar7 = (byte *)0x3 < local_90[0];
          local_90[0] = local_90[0] + -4;
        } while (bVar7);
        bVar7 = true;
      }
      else if (((((cVar5 == '\x06') || (cVar5 == '\b')) ||
                ((cVar5 == '\x05' || ((cVar5 == '\a' || (cVar5 == '\x11')))))) ||
               ((cVar5 == '\x14' || (((cVar5 == '\x17' || (cVar5 == '\x12')) || (cVar5 == '\x1a'))))
               )) && (0x18 < local_61c)) {
        piVar16 = (int *)(param_1 + 1);
        local_70 = (byte *)&DAT_005e0e24;
        local_90[0] = (byte *)0xc;
        do {
          if (*piVar16 != *(int *)local_70) goto LAB_005a5968;
          local_70 = local_70 + 4;
          piVar16 = piVar16 + 1;
          bVar7 = (byte *)0x3 < local_90[0];
          local_90[0] = local_90[0] + -4;
        } while (bVar7);
        bVar7 = true;
      }
      else {
        if ((cVar5 != '\x19') || (local_61c != 0x1a)) goto LAB_005a7935;
        piVar16 = (int *)(param_1 + 2);
        local_70 = (byte *)&DAT_005e0e24;
        local_90[0] = (byte *)0xc;
        do {
          if (*piVar16 != *(int *)local_70) goto LAB_005a5968;
          local_70 = local_70 + 4;
          piVar16 = piVar16 + 1;
          bVar7 = (byte *)0x3 < local_90[0];
          local_90[0] = local_90[0] + -4;
        } while (bVar7);
        bVar7 = true;
      }
      goto LAB_005a596a;
    }
    *(undefined1 *)local_74 = 1;
    goto LAB_005a5977;
  }
  local_74 = (short *)0x0;
  if (this[0xb7] != 0) {
    local_7c[0] = (LPCRITICAL_SECTION)(local_61c * 8);
    do {
      (**(code **)(**(int **)(this[0xb6] + (int)local_74 * 4) + 0x30))();
      local_74 = (short *)((int)local_74 + 1);
    } while (local_74 < (short *)this[0xb7]);
  }
  memset(&local_1b8,0,0x114);
  local_1ac = local_1a7;
  local_1b8 = 0;
  local_1b4 = 0x800;
  local_1b0 = 0;
  local_1a8 = '\x01';
  local_14 = 0;
  local_69 = 0x17;
  FUN_005ab3f0(&local_1b8,&local_69,8);
  local_1b8 = local_1b8 + (7 - (local_1b8 - 1 & 7));
  if ((local_1b8 & 7) == 0) {
    FUN_005ab5d0(&local_1b8,0x80);
    pcVar10 = local_1ac + (local_1b8 + 7 >> 3);
    pcVar10[0] = '\0';
    pcVar10[1] = -1;
    pcVar10[2] = -1;
    pcVar10[3] = '\0';
    pcVar10[4] = -2;
    pcVar10[5] = -2;
    pcVar10[6] = -2;
    pcVar10[7] = -2;
    pcVar10[8] = -3;
    pcVar10[9] = -3;
    pcVar10[10] = -3;
    pcVar10[0xb] = -3;
    pcVar10[0xc] = '\x12';
    pcVar10[0xd] = '4';
    pcVar10[0xe] = 'V';
    pcVar10[0xf] = 'x';
    local_1b8 = local_1b8 + 0x80;
  }
  else {
    FUN_005ab3f0(&local_1b8,(byte *)&DAT_005e0e24,0x80);
  }
  pbVar11 = (byte *)(**(code **)(*this + 0xd0))();
  FUN_005aa070(&local_1b8,pbVar11);
  local_63c = local_1ac;
  uVar20 = 0;
  local_620 = (byte *)0x0;
  local_638 = local_1b8 + 7 >> 3;
  local_634 = param_3;
  local_622 = param_7._2_2_;
  uStack_630 = param_4;
  p_Stack_62c = param_5;
  pvStack_628 = param_6;
  local_624 = SUB42(param_7,0);
  if (this[0xb7] != 0) {
    do {
      (**(code **)(**(int **)(this[0xb6] + uVar20 * 4) + 0x2c))(local_1ac,local_1b8);
      uVar20 = uVar20 + 1;
    } while (uVar20 < (uint)this[0xb7]);
  }
  (**(code **)(*piVar1 + 4))();
LAB_005a5759:
  if ((local_1a8 != '\0') && (0x800 < local_1b4)) {
    free(local_1ac);
  }
  goto LAB_005a793d;
LAB_005a5968:
  bVar7 = false;
LAB_005a596a:
  *(bool *)local_74 = bVar7;
  if (bVar7 == false) goto LAB_005a793d;
LAB_005a5977:
  local_90[0] = (byte *)0x0;
  if (this[0xb7] != 0) {
    local_7c[0] = (LPCRITICAL_SECTION)(local_61c * 8);
    do {
      in_stack_fffff928 = 0x59b6;
      in_stack_fffff92c = local_84;
      (**(code **)(**(int **)(this[0xb6] + (int)local_90[0] * 4) + 0x30))();
      local_90[0] = local_90[0] + 1;
      param_1 = local_84;
    } while (local_90[0] < (byte *)this[0xb7]);
  }
  cVar5 = *param_1;
  local_70 = (byte *)CONCAT13(cVar5,(undefined3)local_70);
  if (((cVar5 == '\x02') || (cVar5 == '\x01')) && (0x18 < local_61c)) {
    if (cVar5 != '\x01') {
      bVar7 = FUN_005a43a0(this);
      if (!bVar7) goto LAB_005a793d;
    }
    memset(&local_2d0,0,0x114);
    local_2c0 = '\0';
    local_2d0 = local_61c * 8;
    local_14 = 1;
    local_2c8 = 8;
    local_2cc = local_2d0;
    local_2c4 = param_1;
    FUN_005aa1f0(&local_2d0,(undefined1 *)&local_80);
    local_2c8 = local_2c8 + 0x80;
    local_650 = DAT_00655908;
    pvStack_64c = DAT_0065590c;
    pbStack_648 = _DAT_00655910;
    uStack_644 = uRam00655914;
    FUN_005aa1f0(&local_2d0,(undefined1 *)&local_650);
    memset(&local_1b8,0,0x114);
    local_1ac = local_1a7;
    local_1b8 = 0;
    local_1b4 = 0x800;
    local_1b0 = 0;
    local_1a8 = '\x01';
    local_14 = CONCAT31(local_14._1_3_,2);
    local_69 = 0x1c;
    FUN_005ab3f0(&local_1b8,&local_69,8);
    FUN_005aa070(&local_1b8,(byte *)&local_80);
    FUN_005aa070(&local_1b8,(byte *)(this + 0x114));
    local_1b8 = local_1b8 + (7 - (local_1b8 - 1 & 7));
    if ((local_1b8 & 7) == 0) {
      FUN_005ab5d0(&local_1b8,0x80);
      pcVar10 = local_1ac + (local_1b8 + 7 >> 3);
      pcVar10[0] = '\0';
      pcVar10[1] = -1;
      pcVar10[2] = -1;
      pcVar10[3] = '\0';
      pcVar10[4] = -2;
      pcVar10[5] = -2;
      pcVar10[6] = -2;
      pcVar10[7] = -2;
      pcVar10[8] = -3;
      pcVar10[9] = -3;
      pcVar10[10] = -3;
      pcVar10[0xb] = -3;
      pcVar10[0xc] = '\x12';
      pcVar10[0xd] = '4';
      pcVar10[0xe] = 'V';
      pcVar10[0xf] = 'x';
      local_1b8 = local_1b8 + 0x80;
    }
    else {
      FUN_005ab3f0(&local_1b8,(byte *)&DAT_005e0e24,0x80);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x9a));
    FUN_005ab240(&local_1b8,(byte *)this[8],this[5] + 7U >> 3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x9a));
    local_90[0] = (byte *)0x0;
    local_634 = param_3;
    if (this[0xb7] != 0) {
      do {
        (**(code **)(**(int **)(this[0xb6] + (int)local_90[0] * 4) + 0x2c))();
        local_90[0] = local_90[0] + 1;
        local_634 = param_3;
      } while (local_90[0] < (byte *)this[0xb7]);
    }
    local_63c = local_1ac;
    local_620 = (byte *)0x0;
    local_638 = local_1b8 + 7 >> 3;
    local_622 = param_7._2_2_;
    local_624 = (short)param_7;
    uStack_630 = param_4;
    p_Stack_62c = param_5;
    pvStack_628 = param_6;
    param_3 = local_634;
    (**(code **)(*piVar1 + 4))();
    p_Var12 = (LPCRITICAL_SECTION)FUN_0059d780(this,1);
    *(char *)&(p_Var12[2].DebugInfo)->Type = *local_84;
    p_Var12->DebugInfo = param_3;
    p_Var12->LockCount = param_4;
    p_Var12->RecursionCount = (LONG)param_5;
    p_Var12->OwningThread = param_6;
    *(short *)((int)&p_Var12->LockSemaphore + 2) = param_7._2_2_;
    *(short *)&p_Var12->LockSemaphore = (short)param_7;
    p_Var12[1].DebugInfo = local_650;
    p_Var12[1].LockCount = (LONG)pvStack_64c;
    *(undefined2 *)&p_Var12[1].RecursionCount = pbStack_648._0_2_;
    uVar20 = FUN_005a2c60(this,param_3,param_4,param_5,param_6,(uint)param_7,'\x01');
    *(short *)((int)&p_Var12->LockSemaphore + 2) = (short)uVar20;
    *(short *)&p_Var12[1].RecursionCount = (short)uVar20;
    local_7c[0] = p_Var12;
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x167));
    FUN_0059bac0(this + 0x16d,local_7c);
    p_Var12 = (LPCRITICAL_SECTION)(this + 0x167);
LAB_005a5ce9:
    LeaveCriticalSection(p_Var12);
    pcVar4 = free_exref;
    uVar20 = local_1b4;
    pcVar10 = local_1ac;
    cVar5 = local_1a8;
  }
  else {
    if (cVar5 != '\x1c') {
      if (cVar5 == '\r') {
        if ((local_61c < 0x1a) || (0x1a8 < local_61c)) goto LAB_005a793d;
        local_90[0] = (byte *)(local_61c - 0x19);
        local_74 = (short *)FUN_0059d780(this,local_61c - 0x18);
        memset(&local_3e8,0,0x114);
        local_3d8 = '\0';
        local_3e8 = local_61c * 8;
        local_14 = 5;
        local_3e0 = 8;
        local_3e4 = local_3e8;
        local_3dc = param_1;
        FUN_005aa1f0(&local_3e8,(undefined1 *)(local_74 + 0xc));
        psVar2 = local_74;
        pcVar10 = param_1 + 0x19;
        if (param_1[0x19] == '\x1d') {
          *(int *)(local_74 + 0x14) = *(int *)(local_74 + 0x14) + -1;
          *(int *)(local_74 + 0x16) = *(int *)(local_74 + 0x14) << 3;
          **(undefined1 **)(local_74 + 0x18) = 0x1d;
          pcVar10 = param_1 + 0x1a;
          pbVar11 = local_90[0] + -1;
        }
        else {
          **(undefined1 **)(local_74 + 0x18) = 0xd;
          pbVar11 = local_90[0];
        }
        memcpy((void *)(*(int *)(local_74 + 0x18) + 1),pcVar10,(size_t)pbVar11);
        *(PRTL_CRITICAL_SECTION_DEBUG *)psVar2 = param_3;
        *(uint *)(psVar2 + 2) = param_4;
        *(PRTL_CRITICAL_SECTION_DEBUG *)(psVar2 + 4) = param_5;
        *(HANDLE *)(psVar2 + 6) = param_6;
        psVar2[9] = param_7._2_2_;
        psVar2[8] = (short)param_7;
        uVar20 = FUN_005a2c60(this,param_3,param_4,param_5,param_6,(uint)param_7,'\x01');
        psVar2[9] = (short)uVar20;
        psVar2[0x10] = (short)uVar20;
        FUN_005a5400((int)this);
LAB_005a7905:
        if ((local_3d8 != '\0') && (0x800 < local_3e4)) {
          free(local_3dc);
        }
        goto LAB_005a793d;
      }
      if (cVar5 == '\x06') {
        local_90[0] = (byte *)0x0;
        local_2c4 = param_1;
        if (this[0xb7] != 0) {
          local_7c[0] = (LPCRITICAL_SECTION)(local_61c * 8);
          do {
            (**(code **)(**(int **)(this[0xb6] + (int)local_90[0] * 4) + 0x30))();
            local_90[0] = local_90[0] + 1;
            local_2c4 = local_84;
          } while (local_90[0] < (byte *)this[0xb7]);
        }
        memset(&local_2d0,0,0x114);
        local_2d0 = local_61c << 3;
        local_2c0 = '\0';
        local_14 = 6;
        local_650 = DAT_006558d0;
        pvStack_64c = DAT_006558d4;
        pbStack_648 = (byte *)CONCAT22(pbStack_648._2_2_,DAT_006558d8);
        local_2c8 = 0x88;
        local_2cc = local_2d0;
        FUN_005aa1f0(&local_2d0,(undefined1 *)&local_650);
        FUN_005ab4c0(&local_2d0,&local_69,8);
        if (local_69 != 0) {
          if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
            FUN_005ade89(&DAT_0066086c);
            if (DAT_0066086c == -1) {
              DAT_00660868 = htonl(0x3039);
              FUN_005ade3f(&DAT_0066086c);
            }
          }
          if (DAT_00660868 == 0x3039) {
            FUN_005ab4c0(&local_2d0,&local_74,0x20);
          }
          else {
            uVar14 = FUN_005ab4c0(&local_2d0,&local_84,0x20);
            if ((char)uVar14 != '\0') {
              local_74 = (short *)CONCAT13((char)local_84,
                                           CONCAT12((char)((uint)local_84 >> 8),
                                                    CONCAT11(local_84._2_1_,local_84._3_1_)));
            }
          }
        }
        memset(&local_1b8,0,0x114);
        local_1ac = local_1a7;
        local_1b8 = 0;
        local_1b4 = 0x800;
        local_1b0 = 0;
        local_1a8 = '\x01';
        local_14 = CONCAT31(local_14._1_3_,7);
        local_70 = (byte *)CONCAT13(7,(undefined3)local_70);
        FUN_005ab3f0(&local_1b8,(byte *)((int)&local_70 + 3),8);
        local_1b8 = local_1b8 + (7 - (local_1b8 - 1 & 7));
        if ((local_1b8 & 7) == 0) {
          FUN_005ab5d0(&local_1b8,0x80);
          pcVar10 = local_1ac + (local_1b8 + 7 >> 3);
          pcVar10[0] = '\0';
          pcVar10[1] = -1;
          pcVar10[2] = -1;
          pcVar10[3] = '\0';
          pcVar10[4] = -2;
          pcVar10[5] = -2;
          pcVar10[6] = -2;
          pcVar10[7] = -2;
          pcVar10[8] = -3;
          pcVar10[9] = -3;
          pcVar10[10] = -3;
          pcVar10[0xb] = -3;
          pcVar10[0xc] = '\x12';
          pcVar10[0xd] = '4';
          pcVar10[0xe] = 'V';
          pcVar10[0xf] = 'x';
          local_1b8 = local_1b8 + 0x80;
        }
        else {
          FUN_005ab3f0(&local_1b8,(byte *)&DAT_005e0e24,0x80);
        }
        if (local_69 != 0) {
          FUN_005aa140(&local_1b8,(byte *)&local_74);
        }
        local_7c[0] = (LPCRITICAL_SECTION)(this + 0xbd);
        EnterCriticalSection(local_7c[0]);
        pcVar10 = (char *)this[0xba];
        local_90[0] = (byte *)0x0;
        local_74 = (short *)((int)pcVar10 * 4);
        local_84 = pcVar10;
        while( true ) {
          if ((char *)this[0xbb] < pcVar10) {
            iVar15 = this[0xbc] - (int)pcVar10;
          }
          else {
            iVar15 = -(int)pcVar10;
          }
          p_Var12 = local_7c[0];
          if ((char *)this[0xbb] + iVar15 <= local_90[0]) goto LAB_005a5ce9;
          if (local_84 < (char *)this[0xbc]) {
            puVar13 = (undefined4 *)(this[0xb9] + (int)local_74);
          }
          else {
            puVar13 = (undefined4 *)
                      (this[0xb9] + (int)(pcVar10 + ((int)local_90[0] - this[0xbc])) * 4);
          }
          psVar2 = (short *)*puVar13;
          if (((psVar2[1] == param_3._2_2_) && (*psVar2 == 2)) && (*(uint *)(psVar2 + 2) == param_4)
             ) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) break;
          local_74 = local_74 + 2;
          local_90[0] = local_90[0] + 1;
          local_84 = local_84 + 1;
        }
        if (local_69 != 0) {
          local_70 = (byte *)((uint)local_70 & 0xffffff);
          FUN_005ab3f0(&local_1b8,(byte *)((int)&local_70 + 3),8);
        }
        FUN_0059b8a0(&local_2d0,(undefined1 *)&local_61c);
        local_70 = (byte *)CONCAT13((*psVar2 != 2) * '\x02' + '\x04',(undefined3)local_70);
        FUN_005ab3f0(&local_1b8,(byte *)((int)&local_70 + 3),8);
        if (*psVar2 == 2) {
          local_650 = *(PRTL_CRITICAL_SECTION_DEBUG *)psVar2;
          pvStack_64c = *(HANDLE *)(psVar2 + 2);
          pbStack_648 = *(byte **)(psVar2 + 4);
          uStack_644 = *(undefined4 *)(psVar2 + 6);
          local_7c[0] = (LPCRITICAL_SECTION)~*(uint *)(psVar2 + 2);
          FUN_005ab3f0(&local_1b8,(byte *)local_7c,0x20);
          local_7c[0] = (LPCRITICAL_SECTION)((uint)local_650 >> 0x10);
          FUN_005ab3f0(&local_1b8,(byte *)local_7c,0x10);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xbd));
        if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
          FUN_005ade89(&DAT_0066086c);
          if (DAT_0066086c == -1) {
            DAT_00660868 = htonl(0x3039);
            FUN_005ade3f(&DAT_0066086c);
          }
        }
        if (DAT_00660868 != 0x3039) {
          uVar20 = local_61c >> 8;
          uVar8 = (undefined1)local_61c;
          local_61c._0_2_ = CONCAT11(uVar8,(char)uVar20);
        }
        FUN_005ab3f0(&local_1b8,(byte *)&local_61c,0x10);
        pbVar11 = (byte *)(**(code **)(*this + 0xd0))();
        FUN_005aa070(&local_1b8,pbVar11);
        local_90[0] = (byte *)0x0;
        local_634 = param_3;
        if (this[0xb7] != 0) {
          do {
            (**(code **)(**(int **)(this[0xb6] + (int)local_90[0] * 4) + 0x2c))(local_1ac,local_1b8)
            ;
            local_90[0] = local_90[0] + 1;
            local_634 = param_3;
          } while (local_90[0] < (byte *)this[0xb7]);
        }
        local_63c = local_1ac;
        local_620 = (byte *)0x0;
        local_638 = local_1b8 + 7 >> 3;
        local_622 = param_7._2_2_;
        local_624 = (short)param_7;
        uStack_630 = param_4;
        p_Stack_62c = param_5;
        pvStack_628 = param_6;
        param_3 = local_634;
        (**(code **)(*piVar1 + 4))();
        if ((local_1a8 != '\0') && (0x800 < local_1b4)) {
          free(local_1ac);
        }
        if ((local_2c0 != '\0') && (0x800 < local_2cc)) {
          free(local_2c4);
        }
        goto LAB_005a793d;
      }
      if (cVar5 != '\b') {
        if ((((((cVar5 == '\x11') || (cVar5 == '\x14')) || (cVar5 == '\x17')) ||
             ((cVar5 == '\x12' || (cVar5 == '\x18')))) || (cVar5 == '\x1a')) || (cVar5 == '\x19')) {
          memset(&local_3e8,0,0x114);
          local_3e8 = local_61c << 3;
          local_3d8 = '\0';
          local_14 = 10;
          local_3e0 = 0x88;
          if (local_70._3_1_ == '\x19') {
            local_3e0 = 0x90;
          }
          local_650 = DAT_006558d0;
          pvStack_64c = DAT_006558d4;
          pbStack_648 = (byte *)CONCAT22(pbStack_648._2_2_,DAT_006558d8);
          local_3e4 = local_3e8;
          local_3dc = param_1;
          FUN_005aa1f0(&local_3e8,(undefined1 *)&local_650);
          local_69 = 0;
          EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xbd));
          uVar20 = this[0xba];
          uVar19 = 0;
          uVar18 = this[0xbb];
          local_74 = (short *)(uVar20 * 4);
          local_6a4 = uVar20;
          while( true ) {
            if (uVar18 < uVar20) {
              iVar15 = this[0xbc] - uVar20;
            }
            else {
              iVar15 = -uVar20;
            }
            if (uVar18 + iVar15 <= uVar19) goto LAB_005a7872;
            if (local_6a4 < (uint)this[0xbc]) {
              puVar13 = (undefined4 *)(this[0xb9] + (int)local_74);
            }
            else {
              puVar13 = (undefined4 *)(this[0xb9] + ((uVar19 - this[0xbc]) + this[0xba]) * 4);
              uVar18 = this[0xbb];
            }
            psVar2 = (short *)*puVar13;
            if (((*(int *)(psVar2 + 0xa4) == 1) && (psVar2[1] == param_3._2_2_)) &&
               ((*psVar2 == 2 && (uVar18 = this[0xbb], *(uint *)(psVar2 + 2) == param_4)))) break;
            local_74 = local_74 + 2;
            uVar19 = uVar19 + 1;
            local_6a4 = local_6a4 + 1;
            uVar20 = this[0xba];
          }
          local_69 = 1;
          FUN_005aa580(this + 0xb9,uVar19);
          FUN_005adb3f(psVar2);
LAB_005a7872:
          LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xbd));
          if (local_69 != 0) {
            local_7c[0] = (LPCRITICAL_SECTION)FUN_0059d780(this,1);
            *(char *)&(local_7c[0][2].DebugInfo)->Type = *local_84;
            local_7c[0][1].SpinCount = 8;
            local_7c[0]->DebugInfo = param_3;
            local_7c[0]->LockCount = param_4;
            local_7c[0]->RecursionCount = (LONG)param_5;
            local_7c[0]->OwningThread = param_6;
            *(short *)((int)&local_7c[0]->LockSemaphore + 2) = param_7._2_2_;
            *(short *)&local_7c[0]->LockSemaphore = (short)param_7;
            local_7c[0][1].DebugInfo = local_650;
            local_7c[0][1].LockCount = (LONG)pvStack_64c;
            *(undefined2 *)&local_7c[0][1].RecursionCount = pbStack_648._0_2_;
            EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x167));
            FUN_0059bac0(this + 0x16d,local_7c);
            LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x167));
          }
          goto LAB_005a7905;
        }
        if (cVar5 == '\x05') {
          if (0x11 < (int)local_61c) {
            if (param_1[0x11] == '\x06') {
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (this[0xb7] != 0) {
                local_90[0] = (byte *)(local_61c * 8);
                do {
                  (**(code **)(**(int **)(this[0xb6] + (int)local_7c[0] * 4) + 0x30))();
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < (LPCRITICAL_SECTION)this[0xb7]);
              }
              memset(&local_2d0,0,0x114);
              FUN_005ab1f0(&local_2d0);
              local_14 = 0xc;
              local_70 = (byte *)CONCAT13(6,(undefined3)local_70);
              FUN_005ab3f0(this_01,(byte *)((int)&local_70 + 3),8);
              FUN_005ab380(&local_2d0,(byte *)&DAT_005e0e24,0x10);
              pbVar11 = (byte *)(**(code **)(*this + 0xd0))();
              FUN_005aa070(&local_2d0,pbVar11);
              local_70 = (byte *)((uint)local_70 & 0xffffff);
              FUN_005ab3f0(&local_2d0,(byte *)((int)&local_70 + 3),8);
              if ((int)(local_61c + 0x1c) < 0x5d5) {
                local_7c[0] = (LPCRITICAL_SECTION)(local_61c + 0x1c & 0xffff);
              }
              else {
                local_7c[0] = (LPCRITICAL_SECTION)0x5d4;
              }
              FUN_0059b800(&local_2d0,(byte *)local_7c);
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (this[0xb7] != 0) {
                do {
                  (**(code **)(**(int **)(this[0xb6] + (int)local_7c[0] * 4) + 0x2c))
                            (local_2c4,local_2d0);
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < (LPCRITICAL_SECTION)this[0xb7]);
              }
              FUN_005959f0((int)&local_680);
              p_Stack_678 = param_3;
              local_680 = local_2c4;
              local_67c = local_2d0 + 7 >> 3;
              pbStack_668 = param_7;
              local_674 = (undefined2)param_4;
              uStack_672 = (u_short)(param_4 >> 0x10);
              uStack_670 = SUB42(param_5,0);
              uStack_66e = (undefined2)((uint)param_5 >> 0x10);
              pvStack_66c = param_6;
              (**(code **)(*piVar1 + 4))();
              FUN_005ab220((int)&local_2d0);
            }
            else {
              memset(&local_3e8,0,0x114);
              FUN_005ab1f0(&local_3e8);
              local_14 = 0xb;
              local_70 = (byte *)CONCAT13(0x19,(undefined3)local_70);
              FUN_005ab3f0(this_00,(byte *)((int)&local_70 + 3),8);
              local_70 = (byte *)CONCAT13(6,(undefined3)local_70);
              FUN_005ab3f0(&local_3e8,(byte *)((int)&local_70 + 3),8);
              FUN_005ab380(&local_3e8,(byte *)&DAT_005e0e24,0x10);
              pbVar11 = (byte *)(**(code **)(*this + 0xd0))();
              FUN_005aa070(&local_3e8,pbVar11);
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (this[0xb7] != 0) {
                do {
                  (**(code **)(**(int **)(this[0xb6] + (int)local_7c[0] * 4) + 0x2c))
                            (local_3dc,local_3e8);
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < (LPCRITICAL_SECTION)this[0xb7]);
              }
              FUN_005959f0((int)&local_63c);
              local_634 = param_3;
              local_63c = local_3dc;
              local_638 = local_3e8 + 7 >> 3;
              local_622 = param_7._2_2_;
              local_624 = (short)param_7;
              uStack_630 = param_4;
              p_Stack_62c = param_5;
              pvStack_628 = param_6;
              (**(code **)(*piVar1 + 4))();
              FUN_005ab220((int)&local_3e8);
            }
          }
          goto LAB_005a793d;
        }
        if (cVar5 != '\a') goto LAB_005a793d;
        local_664 = (char *)0xffff0000;
        uStack_672 = 0;
        uStack_670 = 0;
        uStack_66e = 0;
        pvStack_66c = (HANDLE)0x0;
        pbStack_668 = (byte *)0x0;
        local_674 = 2;
        FUN_0059d4f0(&local_650);
        memset(local_618,0,0x114);
        FUN_005ab1f0(local_618);
        local_14 = 0xd;
        memset(&local_3e8,0,0x114);
        local_3e8 = local_61c << 3;
        local_3d8 = '\0';
        local_3e0 = 0x88;
        local_3e4 = local_3e8;
        local_3dc = param_1;
        FUN_005ab4c0(&local_3e8,(void *)((int)&local_70 + 3),8);
        if (local_70._3_1_ == '\x04') {
          FUN_005ab4c0(&local_3e8,local_7c,0x20);
          uStack_670 = (undefined2)~(uint)local_7c[0];
          uStack_66e = (undefined2)(~(uint)local_7c[0] >> 0x10);
          FUN_005ab4c0(&local_3e8,&uStack_672,0x10);
          uVar9 = ntohs(uStack_672);
          local_664 = (char *)CONCAT22(local_664._2_2_,uVar9);
        }
        FUN_0059b8a0(&local_3e8,(undefined1 *)&local_61c);
        FUN_005aa1f0(&local_3e8,(undefined1 *)&local_650);
        piVar16 = FUN_005a3210(this,param_3,param_4);
        if ((piVar16 == (int *)0x0) || ((char)*piVar16 == '\0')) {
          local_69 = 0;
        }
        else {
          local_69 = 1;
        }
        piVar17 = (int *)FUN_005a3300(this,(int)local_650,(int)pvStack_64c,pbStack_648,uStack_644,
                                      '\x01');
        if ((piVar17 == (int *)0x0) || ((char)*piVar17 == '\0')) {
          bVar6 = 0;
        }
        else {
          bVar6 = 1;
        }
        if ((local_69 & bVar6) == 0) {
          if (local_69 == 0) {
            if (bVar6 == 1) {
              iVar15 = 3;
            }
            else {
LAB_005a708f:
              iVar15 = 0;
            }
          }
          else {
            if ((local_69 != 1) || (bVar6 != 0)) goto LAB_005a708f;
            iVar15 = 4;
          }
        }
        else if ((piVar16 == piVar17) && (piVar16[0x483] == 6)) {
          iVar15 = 1;
        }
        else {
          iVar15 = 2;
        }
        memset(local_500,0,0x114);
        FUN_005ab1f0(local_500);
        local_14 = CONCAT31(local_14._1_3_,0xf);
        local_70 = (byte *)CONCAT13(8,(undefined3)local_70);
        FUN_005ab3f0(this_02,(byte *)((int)&local_70 + 3),8);
        FUN_005ab380(local_500,(byte *)&DAT_005e0e24,0x10);
        pbVar11 = (byte *)(**(code **)(*this + 0xd0))();
        FUN_005aa070(local_500,pbVar11);
        local_70 = (byte *)CONCAT13(((short)param_3 != 2) * '\x02' + '\x04',(undefined3)local_70);
        FUN_005ab3f0(local_500,(byte *)((int)&local_70 + 3),8);
        if ((short)param_3 == 2) {
          local_620 = param_7;
          local_a0._4_4_ = param_4;
          local_a0._0_4_ = param_3;
          uStack_98._0_4_ = param_5;
          uStack_98._4_4_ = param_6;
          local_7c[0] = (LPCRITICAL_SECTION)~param_4;
          FUN_005ab3f0(local_500,(byte *)local_7c,0x20);
          local_7c[0] = (LPCRITICAL_SECTION)(uint)(ushort)local_a0._2_2_;
          FUN_005ab3f0(local_500,(byte *)local_7c,0x10);
        }
        if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
          FUN_005ade89(&DAT_0066086c);
          if (DAT_0066086c == -1) {
            DAT_00660868 = htonl(0x3039);
            FUN_005ade3f(&DAT_0066086c);
          }
        }
        if (DAT_00660868 == 0x3039) {
          pbVar11 = (byte *)&local_61c;
        }
        else {
          local_70._0_2_ = CONCAT11((char)local_61c,(char)(local_61c >> 8));
          pbVar11 = (byte *)&local_70;
        }
        FUN_005ab3f0(local_500,pbVar11,0x10);
        FUN_005ab5d0(local_500,1);
        if (((uint)local_500[0] & 7) == 0) {
          local_4f4[(uint)local_500[0] >> 3] = '\0';
        }
        local_500[0] = local_500[0] + 1;
        local_90[0] = local_500[0];
        if (iVar15 == 1) {
          local_7c[0] = (LPCRITICAL_SECTION)0x0;
          if (this[0xb7] != 0) {
            while( true ) {
              local_500[0] = local_90[0];
              (**(code **)(**(int **)(this[0xb6] + (int)local_7c[0] * 4) + 0x2c))
                        (local_4f4,local_90[0]);
              local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
              if ((LPCRITICAL_SECTION)this[0xb7] <= local_7c[0]) break;
              local_90[0] = local_500[0];
            }
          }
          FUN_005959f0((int)&local_63c);
          local_634 = param_3;
          local_63c = local_4f4;
          local_638 = (uint)(local_500[0] + 7) >> 3;
          local_622 = param_7._2_2_;
          local_624 = (short)param_7;
          iVar15 = *piVar1;
          uStack_630 = param_4;
          p_Stack_62c = param_5;
          pvStack_628 = param_6;
        }
        else if (iVar15 == 0) {
          bVar7 = FUN_005a43a0(this);
          if (bVar7) {
            local_69 = 0;
            FUN_005a3b30(this,param_3,param_4);
            if (local_69 == 1) {
              local_70 = (byte *)CONCAT13(0x1a,(undefined3)local_70);
              FUN_005ab3f0(local_618,(byte *)((int)&local_70 + 3),8);
              FUN_005ab380(local_618,(byte *)&DAT_005e0e24,0x10);
              FUN_005aa070(local_618,(byte *)(this + 0x114));
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (this[0xb7] != 0) {
                do {
                  (**(code **)(**(int **)(this[0xb6] + (int)local_7c[0] * 4) + 0x2c))
                            (local_60c,local_618[0]);
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < (LPCRITICAL_SECTION)this[0xb7]);
              }
              FUN_005959f0((int)&local_660);
              p_Stack_658 = param_3;
              local_660 = local_60c;
              local_65c = local_618[0] + 7U >> 3;
              uStack_654 = param_4;
              local_650 = param_5;
              pvStack_64c = param_6;
              pbStack_648 = param_7;
            }
            else {
              local_7c[0] = (LPCRITICAL_SECTION)0x0;
              if (this[0xb7] != 0) {
                do {
                  (**(code **)(**(int **)(this[0xb6] + (int)local_7c[0] * 4) + 0x2c))
                            (local_4f4,local_500[0]);
                  local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
                } while (local_7c[0] < (LPCRITICAL_SECTION)this[0xb7]);
              }
              FUN_005959f0((int)local_6a0);
              local_698 = param_3;
              uStack_694 = param_4;
              p_Stack_690 = param_5;
              pvStack_68c = param_6;
              local_69c = (uint)(local_500[0] + 7) >> 3;
              local_686 = param_7._2_2_;
              local_688 = (short)param_7;
            }
            iVar15 = *piVar1;
          }
          else {
            local_70 = (byte *)CONCAT13(0x14,(undefined3)local_70);
            FUN_005ab3f0(local_618,(byte *)((int)&local_70 + 3),8);
            FUN_005ab380(local_618,(byte *)&DAT_005e0e24,0x10);
            FUN_005aa070(local_618,(byte *)(this + 0x114));
            local_7c[0] = (LPCRITICAL_SECTION)0x0;
            if (this[0xb7] != 0) {
              do {
                (**(code **)(**(int **)(this[0xb6] + (int)local_7c[0] * 4) + 0x2c))
                          (local_60c,local_618[0]);
                local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
              } while (local_7c[0] < (LPCRITICAL_SECTION)this[0xb7]);
            }
            FUN_005959f0((int)&local_63c);
            local_634 = param_3;
            local_63c = local_60c;
            local_638 = local_618[0] + 7U >> 3;
            local_622 = param_7._2_2_;
            local_624 = (short)param_7;
            iVar15 = *piVar1;
            uStack_630 = param_4;
            p_Stack_62c = param_5;
            pvStack_628 = param_6;
          }
        }
        else {
          local_70 = (byte *)CONCAT13(0x12,(undefined3)local_70);
          FUN_005ab3f0(local_618,(byte *)((int)&local_70 + 3),8);
          FUN_005ab380(local_618,(byte *)&DAT_005e0e24,0x10);
          FUN_005aa070(local_618,(byte *)(this + 0x114));
          local_7c[0] = (LPCRITICAL_SECTION)0x0;
          if (this[0xb7] != 0) {
            do {
              (**(code **)(**(int **)(this[0xb6] + (int)local_7c[0] * 4) + 0x2c))
                        (local_60c,local_618[0]);
              local_7c[0] = (LPCRITICAL_SECTION)((int)&local_7c[0]->DebugInfo + 1);
            } while (local_7c[0] < (LPCRITICAL_SECTION)this[0xb7]);
          }
          FUN_005959f0((int)&local_63c);
          local_634 = param_3;
          local_63c = local_60c;
          local_638 = local_618[0] + 7U >> 3;
          local_622 = param_7._2_2_;
          local_624 = (short)param_7;
          iVar15 = *piVar1;
          uStack_630 = param_4;
          p_Stack_62c = param_5;
          pvStack_628 = param_6;
        }
        (**(code **)(iVar15 + 4))();
        FUN_005ab220((int)local_500);
        FUN_005ab220((int)&local_3e8);
        FUN_005ab220((int)local_618);
        goto LAB_005a793d;
      }
      local_90[0] = (byte *)0x0;
      local_1ac = param_1;
      if (this[0xb7] != 0) {
        local_7c[0] = (LPCRITICAL_SECTION)(local_61c * 8);
        do {
          in_stack_fffff928 = 0x65c6;
          in_stack_fffff92c = local_84;
          (**(code **)(**(int **)(this[0xb6] + (int)local_90[0] * 4) + 0x30))();
          local_90[0] = local_90[0] + 1;
          local_1ac = local_84;
        } while (local_90[0] < (byte *)this[0xb7]);
      }
      memset(&local_1b8,0,0x114);
      local_1b8 = local_61c << 3;
      local_1a8 = '\0';
      local_14 = 8;
      local_650 = DAT_006558d0;
      pvStack_64c = DAT_006558d4;
      pbStack_648 = (byte *)CONCAT22(pbStack_648._2_2_,DAT_006558d8);
      local_1b0 = 0x88;
      local_1b4 = local_1b8;
      FUN_005aa1f0(&local_1b8,(undefined1 *)&local_650);
      local_664 = (char *)0xffff0000;
      uStack_672 = 0;
      uStack_670 = 0;
      uStack_66e = 0;
      pvStack_66c = (HANDLE)0x0;
      pbStack_668 = (byte *)0x0;
      local_674 = 2;
      FUN_005ab4c0(&local_1b8,(void *)((int)&local_70 + 3),8);
      if (local_70._3_1_ == '\x04') {
        FUN_005ab4c0(&local_1b8,local_7c,0x20);
        uStack_670 = (undefined2)~(uint)local_7c[0];
        uStack_66e = (undefined2)(~(uint)local_7c[0] >> 0x10);
        FUN_005ab4c0(&local_1b8,&uStack_672,0x10);
        uVar9 = ntohs(uStack_672);
        local_664 = (char *)CONCAT22(local_664._2_2_,uVar9);
      }
      FUN_0059b8a0(&local_1b8,(undefined1 *)&local_61c);
      if (local_1b0 + 1 <= local_1b8) {
        local_1b0 = local_1b0 + 1;
      }
      local_7c[0] = (LPCRITICAL_SECTION)(this + 0xbd);
      EnterCriticalSection(local_7c[0]);
      pbVar11 = (byte *)this[0xba];
      local_90[0] = (byte *)0x0;
      local_84 = (char *)((int)pbVar11 * 4);
      local_70 = pbVar11;
      while( true ) {
        if ((byte *)this[0xbb] < pbVar11) {
          iVar15 = this[0xbc] - (int)pbVar11;
        }
        else {
          iVar15 = -(int)pbVar11;
        }
        if ((byte *)this[0xbb] + iVar15 <= local_90[0]) {
          LeaveCriticalSection(local_7c[0]);
          goto LAB_005a5759;
        }
        if (local_70 < (byte *)this[0xbc]) {
          pcVar10 = local_84 + this[0xb9];
        }
        else {
          pcVar10 = (char *)(this[0xb9] + (int)(pbVar11 + ((int)local_90[0] - this[0xbc])) * 4);
        }
        local_74 = *(short **)pcVar10;
        pbVar11 = (byte *)this[0xba];
        if (((local_74[1] == param_3._2_2_) && (*local_74 == 2)) &&
           (*(uint *)(local_74 + 2) == param_4)) break;
        local_84 = local_84 + 4;
        local_90[0] = local_90[0] + 1;
        local_70 = local_70 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xbd));
      local_a0._4_4_ = param_4;
      local_a0._0_4_ = param_3;
      uStack_98._0_4_ = param_5;
      uStack_98._4_4_ = param_6;
      local_90[0] = param_7;
      local_69 = 0;
      p_Var21 = param_3;
      uVar20 = param_4;
      if (((param_3._2_2_ == DAT_006558f6) && ((short)param_3 == 2)) && (param_4 == DAT_006558f8)) {
LAB_005a681c:
        in_stack_fffff920 = CONCAT22(uStack_66e,uStack_670);
        in_stack_fffff924 = pvStack_66c;
        pbVar11 = pbStack_668;
        in_stack_fffff92c = local_664;
        pcVar10 = (char *)FUN_005a3b30(this,p_Var21,uVar20);
        in_stack_fffff928 = (ushort)pbVar11;
        if (local_69 == 0) {
          if (pcVar10 != (char *)0x0) goto LAB_005a688e;
          local_90[0] = (byte *)FUN_0059d780(this,1);
          **(undefined1 **)(local_90[0] + 0x30) = 0x11;
          local_90[0][0x2c] = 8;
          local_90[0][0x2d] = 0;
          local_90[0][0x2e] = 0;
          local_90[0][0x2f] = 0;
          uVar14 = *(undefined4 *)(local_74 + 2);
          uVar23 = *(undefined4 *)(local_74 + 4);
          uVar3 = *(undefined4 *)(local_74 + 6);
          *(undefined4 *)local_90[0] = *(undefined4 *)local_74;
          *(undefined4 *)(local_90[0] + 4) = uVar14;
          *(undefined4 *)(local_90[0] + 8) = uVar23;
          *(undefined4 *)(local_90[0] + 0xc) = uVar3;
          *(short *)(local_90[0] + 0x12) = local_74[9];
          *(short *)(local_90[0] + 0x10) = local_74[8];
          *(PRTL_CRITICAL_SECTION_DEBUG *)(local_90[0] + 0x18) = local_650;
          *(HANDLE *)(local_90[0] + 0x1c) = pvStack_64c;
          *(undefined2 *)(local_90[0] + 0x20) = pbStack_648._0_2_;
          EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x167));
          FUN_0059bac0(this + 0x16d,local_90);
          LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x167));
        }
      }
      else {
        iVar15 = FUN_005a4230(this,(int)local_a0);
        if (((iVar15 == -1) ||
            (pcVar10 = (char *)(this[0x8b] + iVar15 * 0x1210), *pcVar10 != '\x01')) ||
           (pcVar10 == (char *)0x0)) goto LAB_005a681c;
LAB_005a688e:
        psVar2 = local_74;
        pcVar10[0x1170] = '\x01';
        pcVar10[0x120c] = '\x04';
        pcVar10[0x120d] = '\0';
        pcVar10[0x120e] = '\0';
        pcVar10[0x120f] = '\0';
        if (*(int *)(local_74 + 0x9e) != 0) {
          *(int *)(pcVar10 + 0x9b8) = *(int *)(local_74 + 0x9e);
        }
        memset(&local_2d0,0,0x114);
        local_2c4 = local_2bf;
        local_2d0 = 0;
        local_2cc = 0x800;
        local_2c8 = 0;
        local_2c0 = '\x01';
        local_14 = CONCAT31(local_14._1_3_,9);
        local_70 = (byte *)CONCAT13(9,(undefined3)local_70);
        FUN_005ab3f0(&local_2d0,(byte *)((int)&local_70 + 3),8);
        uVar14 = 0x5a6935;
        pbVar11 = (byte *)(**(code **)(*this + 0xd0))();
        FUN_005aa070(&local_2d0,pbVar11);
        uVar22 = FUN_005ab130();
        iVar15 = 0x5a6954;
        uVar22 = __aulldiv((uint)uVar22,(uint)((ulonglong)uVar22 >> 0x20),1000,0);
        uStack_98 = uVar22;
        FUN_005aa070(&local_2d0,(byte *)&uStack_98);
        pbVar24 = (byte *)0x8;
        pbVar11 = (byte *)((int)&local_70 + 3);
        local_70 = (byte *)((uint)local_70 & 0xffffff);
        uVar23 = 0x5a6988;
        FUN_005ab3f0(&local_2d0,pbVar11,8);
        bVar6 = *(byte *)(psVar2 + 0x95);
        if (bVar6 != 0) {
          pbVar24 = (byte *)(psVar2 + 0x15);
          pbVar11 = (byte *)0x5a69a5;
          FUN_005ab240(&local_2d0,pbVar24,(uint)bVar6);
        }
        pcVar10 = local_2c4;
        uVar20 = local_2d0;
        FUN_0059d640(&stack0xfffff920,&param_3);
        FUN_005a4d90(this,pcVar10,uVar20,0,2,0,'\0','\0',param_11,param_12,0,in_stack_fffff920,
                     (int)in_stack_fffff924,in_stack_fffff928,in_stack_fffff92c,uVar14,iVar15,uVar23
                     ,pbVar11,(uint)pbVar24);
        if ((local_2c0 != '\0') && (0x800 < local_2cc)) {
          free(local_2c4);
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xbd));
      uVar20 = this[0xba];
      local_90[0] = (byte *)0x0;
      local_84 = (char *)(uVar20 * 4);
      piVar1 = this + 0xb9;
      local_6a4 = uVar20;
      while( true ) {
        if ((uint)this[0xbb] < uVar20) {
          pbVar11 = (byte *)((this[0xbc] - uVar20) + this[0xbb]);
        }
        else {
          pbVar11 = (byte *)(this[0xbb] - uVar20);
        }
        if (pbVar11 <= local_90[0]) goto LAB_005a6b32;
        if (local_6a4 < (uint)this[0xbc]) {
          pcVar10 = local_84 + *piVar1;
        }
        else {
          pcVar10 = (char *)(*piVar1 + (int)(local_90[0] + (uVar20 - this[0xbc])) * 4);
        }
        psVar2 = *(short **)pcVar10;
        if (((psVar2[1] == param_3._2_2_) && (*psVar2 == 2)) && (*(uint *)(psVar2 + 2) == param_4))
        break;
        local_84 = local_84 + 4;
        local_90[0] = local_90[0] + 1;
        local_6a4 = local_6a4 + 1;
      }
      FUN_005aa580(piVar1,(uint)local_90[0]);
LAB_005a6b32:
      LeaveCriticalSection(local_7c[0]);
      FUN_005adb3f(local_74);
      goto LAB_005a5759;
    }
    if ((local_61c < 0x21) || (0x1b0 < local_61c)) goto LAB_005a793d;
    puVar13 = FUN_0059d780(this,local_61c - 0x1c);
    memset(&local_2d0,0,0x114);
    local_2c0 = '\0';
    local_2d0 = local_61c * 8;
    local_2c4 = local_84;
    local_14 = 3;
    local_2c8 = 8;
    local_2cc = local_2d0;
    FUN_005aa1f0(&local_2d0,(undefined1 *)&local_80);
    FUN_005aa1f0(&local_2d0,(undefined1 *)(puVar13 + 6));
    memset(&local_3e8,0,0x114);
    local_3dc = (char *)puVar13[0xc];
    local_3e4 = puVar13[10] << 3;
    local_3e0 = 0;
    local_3d8 = '\0';
    local_14 = CONCAT31(local_14._1_3_,4);
    local_3e8 = 0;
    local_69 = 0x1c;
    FUN_005ab3f0(&local_3e8,&local_69,8);
    local_7c[0] = local_80;
    FUN_005aa140(&local_3e8,(byte *)local_7c);
    FUN_005ab380(&local_3e8,(byte *)(local_84 + 0x21),local_61c - 0x21);
    *puVar13 = param_3;
    puVar13[1] = param_4;
    puVar13[2] = param_5;
    puVar13[3] = param_6;
    *(short *)((int)puVar13 + 0x12) = param_7._2_2_;
    *(short *)(puVar13 + 4) = (short)param_7;
    uVar20 = FUN_005a2c60(this,param_3,param_4,param_5,param_6,(uint)param_7,'\x01');
    *(short *)((int)puVar13 + 0x12) = (short)uVar20;
    *(short *)(puVar13 + 8) = (short)uVar20;
    FUN_005a5400((int)this);
    pcVar4 = free_exref;
    uVar20 = local_3e4;
    pcVar10 = local_3dc;
    cVar5 = local_3d8;
  }
  free_exref = pcVar4;
  if ((cVar5 != '\0') && (0x800 < uVar20)) {
    free(pcVar10);
  }
  if ((local_2c0 != '\0') && (0x800 < local_2cc)) {
    (*pcVar4)();
  }
LAB_005a793d:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall
FUN_005a7960(uint *param_1,uint param_2,uint *param_3,uint param_4,
            PRTL_CRITICAL_SECTION_DEBUG param_5,HANDLE param_6,byte *param_7,uint *param_8,
            int *param_9,uint param_10,uint param_11)

{
  uint *puVar1;
  uint *this;
  char cVar2;
  int *piVar3;
  
  this = param_8;
  cVar2 = FUN_005a54c0((char *)param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       (int *)param_8,param_9,(short *)&stack0xffffffef,param_10,param_11);
  puVar1 = param_3;
  if (cVar2 == '\0') {
    param_3 = (uint *)0x1;
    piVar3 = FUN_005a3210(this,puVar1,param_4);
    if ((piVar3 != (int *)0x0) && (param_7._3_1_ == '\0')) {
      param_3 = param_8;
      FUN_00597130(piVar3 + 0x3e,param_1,param_2,(undefined8 *)&param_3,(int *)(this + 0xb6),piVar3,
                   param_9,piVar3,param_10,param_11,param_8);
    }
  }
  return;
}


void __fastcall FUN_005a7a10(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x428) != 0) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x424) + uVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x428));
  }
  if (*(int *)(param_1 + 0x42c) != 0) {
    free(*(void **)(param_1 + 0x424));
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(undefined4 *)(param_1 + 0x424) = 0;
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  return;
}


uint __thiscall FUN_005a7a80(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0x428) != 0) {
    piVar1 = *(int **)((int)this + 0x424);
    do {
      if (*(int *)(*piVar1 + 0x20) == param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x428));
  }
  return 0xffffffff;
}


void __thiscall FUN_005a7ac0(void *this,uint *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  u_short uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  byte bVar15;
  byte *pbVar16;
  undefined4 *extraout_ECX;
  uint *puVar17;
  int iVar18;
  byte *pbVar19;
  char *pcVar20;
  u_short *puVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  PRTL_CRITICAL_SECTION_DEBUG p_Var25;
  undefined8 uVar26;
  longlong lVar27;
  undefined8 uVar28;
  uint in_stack_fffff37c;
  int in_stack_fffff380;
  uint *in_stack_fffff384;
  uint in_stack_fffff388;
  PRTL_CRITICAL_SECTION_DEBUG in_stack_fffff38c;
  undefined1 (*pauVar29) [16];
  char *in_stack_fffff390;
  char *pcVar30;
  char *this_00;
  char *pcVar31;
  undefined8 local_c48;
  undefined8 local_c40;
  uint *local_c38;
  int *local_c34;
  char *local_c30;
  char *pcStack_c2c;
  undefined4 uStack_c28;
  byte *pbStack_c24;
  undefined4 local_c20;
  undefined8 local_c1c;
  uint local_c14;
  undefined1 *local_c10;
  uint local_c0c;
  char *local_c08;
  byte *local_c04;
  byte local_bfd;
  int local_bfc;
  int iStack_bf8;
  undefined1 *puStack_bf4;
  uint uStack_bf0;
  char *local_bec;
  char *pcStack_be8;
  undefined4 uStack_be4;
  byte *pbStack_be0;
  uint local_bdc;
  int local_bd8;
  char *local_bd4;
  char *pcStack_bd0;
  undefined4 uStack_bcc;
  byte *pbStack_bc8;
  byte *local_bc4;
  uint local_bc0;
  uint local_bbc;
  undefined4 local_bb8;
  byte *local_bb4;
  char local_bb0;
  undefined4 local_aac;
  uint local_aa8;
  undefined4 local_aa4;
  byte *local_aa0;
  char local_a9c;
  undefined1 local_a9b [259];
  uint local_998;
  uint local_994;
  undefined4 local_990;
  byte *local_98c;
  char local_988;
  byte *local_884;
  byte *local_880;
  undefined4 local_87c;
  byte *local_878;
  char local_874;
  byte local_873 [3];
  char local_870 [32];
  undefined4 local_850 [24];
  byte local_7f0 [64];
  char local_7b0 [64];
  byte *local_770;
  uint local_76c;
  undefined4 local_768;
  undefined1 *local_764;
  char local_760;
  undefined1 local_75f [259];
  byte local_65c [4];
  int local_658;
  uint local_654;
  uint local_650;
  uint local_64c;
  uint local_648;
  uint local_644;
  int local_640;
  uint local_63c;
  uint local_638;
  uint local_634;
  int local_630;
  undefined1 local_62c [8];
  uint local_624;
  uint local_620;
  uint local_61c;
  undefined1 local_618 [4];
  undefined8 local_614;
  undefined8 local_60c;
  short local_604;
  u_short uStack_602;
  undefined2 uStack_600;
  ushort uStack_5fe;
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_5fc;
  char *pcStack_5f8;
  undefined4 local_5f4;
  char local_5f0;
  char local_5ef;
  char local_5ee;
  byte local_5ed;
  byte *local_5ec;
  uint local_5e8 [304];
  undefined4 local_128;
  uint local_124;
  undefined4 local_120;
  byte *local_11c;
  char local_118;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cbbad;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_bc4 = (byte *)((int)this + 0x424);
  local_c38 = param_1;
  pcStack_c2c = (char *)0x0;
  uStack_c28 = 0;
  pbStack_c24 = (byte *)0x0;
  local_c30 = (char *)0x2;
  local_c20 = 0xffff0000;
  local_60c = 0;
  local_614 = 0;
  local_c34 = this;
  if ((*(int *)(**(int **)local_bc4 + 8) == 7) && (*(int *)(**(int **)local_bc4 + 0x60) != 0)) {
    uStack_602 = 0;
    uStack_600 = 0;
    uStack_5fe = 0;
    p_Stack_5fc = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    pcStack_5f8 = (char *)0x0;
    local_604 = 2;
    local_5f4 = (byte *)0xffff0000;
    while (uVar8 = (**(code **)(**(int **)(**(int **)((int)this + 0x424) + 0x60) + 8))(),
          0 < (int)uVar8) {
      uVar26 = FUN_005ab130();
      in_stack_fffff384 = (uint *)CONCAT22(uStack_602,local_604);
      in_stack_fffff388 = CONCAT22(uStack_5fe,uStack_600);
      in_stack_fffff380 = 0x5a7bcf;
      in_stack_fffff38c = p_Stack_5fc;
      in_stack_fffff390 = pcStack_5f8;
      FUN_005a7960(local_5e8,uVar8,in_stack_fffff384,in_stack_fffff388,p_Stack_5fc,pcStack_5f8,
                   local_5f4,this,(int *)**(undefined4 **)((int)this + 0x424),(uint)uVar26,
                   (uint)((ulonglong)uVar26 >> 0x20));
    }
  }
  while( true ) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x398));
    uVar8 = *(uint *)((int)this + 0x38c);
    if (*(uint *)((int)this + 0x390) < uVar8) {
      iVar10 = *(int *)((int)this + 0x394) - uVar8;
    }
    else {
      iVar10 = -uVar8;
    }
    if (*(uint *)((int)this + 0x390) + iVar10 == 0) break;
    iVar18 = *(int *)((int)this + 0x394);
    iVar10 = uVar8 + 1;
    *(int *)((int)this + 0x38c) = iVar10;
    if (iVar10 == iVar18) {
      *(undefined4 *)((int)this + 0x38c) = 0;
      puVar17 = *(uint **)(*(int *)((int)this + 0x388) + -4 + iVar18 * 4);
    }
    else if (iVar10 == 0) {
      puVar17 = *(uint **)(*(int *)((int)this + 0x388) + -4 + iVar18 * 4);
    }
    else {
      puVar17 = *(uint **)(*(int *)((int)this + 0x388) + -4 + iVar10 * 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x398));
    if (puVar17 == (uint *)0x0) goto LAB_005a7cc2;
    in_stack_fffff384 = (uint *)puVar17[0x176];
    in_stack_fffff388 = puVar17[0x177];
    in_stack_fffff38c = (PRTL_CRITICAL_SECTION_DEBUG)puVar17[0x178];
    in_stack_fffff390 = (char *)puVar17[0x179];
    in_stack_fffff380 = 0x5a7c9f;
    FUN_005a7960(puVar17,puVar17[0x175],in_stack_fffff384,in_stack_fffff388,in_stack_fffff38c,
                 in_stack_fffff390,(byte *)puVar17[0x17a],this,(int *)puVar17[0x17e],puVar17[0x17c],
                 puVar17[0x17d]);
    (**(code **)(*(int *)((int)this + 4) + 8))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x398));
LAB_005a7cc2:
  local_c14 = local_614._4_4_;
  local_c0c = (uint)local_614;
  local_c1c = local_60c;
  while (*(int *)((int)this + 0x33c) != *(int *)((int)this + 0x340)) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x348));
    if (*(int *)((int)this + 0x33c) == *(int *)((int)this + 0x340)) {
      pbVar19 = (byte *)0x0;
    }
    else {
      iVar18 = *(int *)((int)this + 0x33c) + 1;
      *(int *)((int)this + 0x33c) = iVar18;
      iVar10 = *(int *)((int)this + 0x344);
      if (iVar18 == iVar10) {
        *(int *)((int)this + 0x33c) = 0;
        pbVar19 = *(byte **)(*(int *)((int)this + 0x338) + -4 + iVar10 * 4);
      }
      else if (iVar18 == 0) {
        pbVar19 = *(byte **)(*(int *)((int)this + 0x338) + -4 + iVar10 * 4);
      }
      else {
        pbVar19 = *(byte **)(*(int *)((int)this + 0x338) + -4 + iVar18 * 4);
      }
    }
    pbStack_bc8 = pbVar19;
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x348));
    if (pbVar19 == (byte *)0x0) break;
    iVar10 = *(int *)(pbVar19 + 0x6c);
    if (iVar10 == 0) {
      lVar27 = local_c1c;
      if (local_c1c == 0) {
        lVar27 = FUN_005ab130();
        local_c1c = lVar27;
        uVar26 = __aulldiv((uint)lVar27,(uint)((ulonglong)lVar27 >> 0x20),1000,0);
        local_c0c = (uint)uVar26;
        local_c14 = 0;
        lVar27 = local_c1c;
      }
      local_c1c._4_4_ = (uint)((ulonglong)lVar27 >> 0x20);
      local_c1c._0_4_ = (char *)lVar27;
      in_stack_fffff384 = *(uint **)(pbVar19 + 0x10);
      in_stack_fffff388 = *(uint *)(pbVar19 + 0x14);
      in_stack_fffff38c =
           (PRTL_CRITICAL_SECTION_DEBUG)
           CONCAT22((short)((uint)in_stack_fffff38c >> 0x10),*(ushort *)(pbVar19 + 0x18));
      in_stack_fffff380 = *(int *)(pbVar19 + 0x68);
      in_stack_fffff37c = local_c1c._4_4_;
      cVar6 = FUN_005a4d90(this,*(void **)(pbVar19 + 0x4c),*(int *)pbVar19,*(int *)(pbVar19 + 4),
                           *(uint *)(pbVar19 + 8),pbVar19[0xc],pbVar19[0x38],'\x01',
                           (uint)(char *)local_c1c,local_c1c._4_4_,in_stack_fffff380,
                           (int)in_stack_fffff384,in_stack_fffff388,*(ushort *)(pbVar19 + 0x18),
                           in_stack_fffff390,*(undefined4 *)(pbVar19 + 0x20),
                           *(int *)(pbVar19 + 0x24),*(undefined4 *)(pbVar19 + 0x28),
                           *(undefined4 *)(pbVar19 + 0x2c),*(uint *)(pbVar19 + 0x30));
      local_c1c = lVar27;
      if (cVar6 == '\0') {
        free(*(void **)(pbVar19 + 0x4c));
      }
      if (*(int *)(pbVar19 + 0x3c) != 0) {
        FUN_0059d5c0(&local_bfc,(undefined4 *)(pbVar19 + 0x10));
        if ((local_bfc == DAT_00655908) && (iStack_bf8 == DAT_0065590c)) {
          in_stack_fffff38c = (PRTL_CRITICAL_SECTION_DEBUG)0x5a7eca;
          in_stack_fffff390 = local_bec;
          piVar9 = FUN_005a3210(this,local_bec,(int)pcStack_be8);
        }
        else {
          piVar9 = (int *)FUN_005a3300(this,local_bfc,iStack_bf8,puStack_bf4,uStack_bf0,'\x01');
        }
        if (piVar9 != (int *)0x0) {
          piVar9[0x483] = *(int *)(pbVar19 + 0x3c);
        }
      }
    }
    else if (iVar10 == 1) {
      FUN_005a47e0(this,(int *)(pbVar19 + 0x10),'\0','\x01',(uint)pbVar19[0xc],*(int *)(pbVar19 + 4)
                  );
    }
    else if (iVar10 == 3) {
      FUN_0041ab70(&local_bfc,(undefined4 *)(pbVar19 + 0x10));
      if ((local_bfc == DAT_00655908) && (iStack_bf8 == DAT_0065590c)) {
        in_stack_fffff38c = (PRTL_CRITICAL_SECTION_DEBUG)0x5a7f74;
        in_stack_fffff390 = local_bec;
        piVar9 = FUN_005a3210(this,local_bec,(int)pcStack_be8);
      }
      else {
        piVar9 = (int *)FUN_005a3300(this,local_bfc,iStack_bf8,puStack_bf4,uStack_bf0,'\x01');
      }
      if (piVar9 != (int *)0x0) {
        iVar10 = FUN_005a4230(this,(int)(piVar9 + 1));
        FUN_005a3f00(this,(undefined4 *)(pbVar19 + 0x20),iVar10);
      }
    }
    else if (iVar10 == 2) {
      if ((((*(int *)(pbVar19 + 0x10) == DAT_00655908) && (*(int *)(pbVar19 + 0x14) == DAT_0065590c)
           ) && (*(short *)(pbVar19 + 0x22) == DAT_006558f6)) &&
         ((*(short *)(pbVar19 + 0x20) == 2 && (*(int *)(pbVar19 + 0x24) == DAT_006558f8)))) {
        puVar11 = FUN_005aa870((int *)((int)this + 0x3b0));
        FUN_005aa4b0(puVar11,(int *)local_bc4);
        FUN_005aa610((int *)((int)this + 0x3b0),puVar11);
        this = local_c34;
      }
      else {
        FUN_0059d5c0(&stack0xfffff37c,(undefined4 *)(pbVar19 + 0x10));
        local_5ec = (byte *)FUN_005a31b0(this,in_stack_fffff37c,in_stack_fffff380,in_stack_fffff384,
                                         in_stack_fffff388,in_stack_fffff38c,(int)in_stack_fffff390)
        ;
        puVar11 = FUN_005aa870((int *)((int)this + 0x3b0));
        if (puVar11[2] != 0) {
          free((void *)*puVar11);
          puVar11[2] = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
        }
        if (local_5ec != (byte *)0x0) {
          FUN_0059b980(puVar11,(undefined4 *)(local_5ec + 0x1204));
        }
        FUN_005aa610((int *)((int)this + 0x3b0),puVar11);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 800));
    FUN_005aaea0((int *)((int)this + 0x30c),(int)pbStack_bc8);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 800));
  }
  if (*(int *)((int)this + 0x2e8) != *(int *)((int)this + 0x2ec)) {
    if (local_c1c == 0) {
      lVar27 = FUN_005ab130();
      local_c1c = lVar27;
      uVar26 = __aulldiv((uint)lVar27,(uint)((ulonglong)lVar27 >> 0x20),1000,0);
      local_c0c = (uint)uVar26;
      local_c14 = 0;
    }
    pcVar20 = (char *)0x0;
    local_c08 = pcVar20;
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
      uVar8 = *(uint *)((int)this + 0x2e8);
      if (*(uint *)((int)this + 0x2ec) < uVar8) {
        iVar10 = *(int *)((int)this + 0x2f0) - uVar8;
      }
      else {
        iVar10 = -uVar8;
      }
      if ((char *)(*(uint *)((int)this + 0x2ec) + iVar10) <= pcVar20) break;
      if (pcVar20 + uVar8 < *(char **)((int)this + 0x2f0)) {
        puVar11 = (undefined4 *)(*(int *)((int)this + 0x2e4) + (int)(pcVar20 + uVar8) * 4);
      }
      else {
        puVar11 = (undefined4 *)
                  (*(int *)((int)this + 0x2e4) +
                  (int)(local_c08 + (uVar8 - (int)*(char **)((int)this + 0x2f0))) * 4);
      }
      pbVar19 = (byte *)*puVar11;
      local_5ec = pbVar19;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
      if ((local_c14 < *(uint *)(pbVar19 + 0x1c)) ||
         ((local_c14 <= *(uint *)(pbVar19 + 0x1c) && (local_c0c <= *(uint *)(pbVar19 + 0x18))))) {
        pcVar20 = local_c08 + 1;
        local_c08 = pcVar20;
      }
      else {
        local_bc4 = (byte *)(*(int *)(pbVar19 + 0x134) + 1);
        pbStack_bc8 = (byte *)(uint)pbVar19[0x20];
        if (((*(short *)(pbVar19 + 2) == DAT_006558f6) && (*(short *)pbVar19 == 2)) &&
           (*(int *)(pbVar19 + 4) == DAT_006558f8)) {
          local_5ee = '\x01';
        }
        else {
          local_5ee = '\0';
        }
        if ((pbStack_bc8 == local_bc4) || (local_5ee != '\0')) {
          if (*(void **)(pbVar19 + 0x24) != (void *)0x0) {
            free(*(void **)(pbVar19 + 0x24));
            pbVar19[0x24] = 0;
            pbVar19[0x25] = 0;
            pbVar19[0x26] = 0;
            pbVar19[0x27] = 0;
          }
          if (((pbStack_bc8 == local_bc4) && (local_5ee == '\0')) &&
             (*(int *)(pbVar19 + 0x148) == 1)) {
            local_bc4 = (byte *)FUN_0059d780(this,1);
            **(undefined1 **)(local_bc4 + 0x30) = 0x11;
            local_bc4[0x2c] = 8;
            local_bc4[0x2d] = 0;
            local_bc4[0x2e] = 0;
            local_bc4[0x2f] = 0;
            uVar23 = *(undefined4 *)(pbVar19 + 4);
            uVar24 = *(undefined4 *)(pbVar19 + 8);
            uVar4 = *(undefined4 *)(pbVar19 + 0xc);
            *(undefined4 *)local_bc4 = *(undefined4 *)pbVar19;
            *(undefined4 *)(local_bc4 + 4) = uVar23;
            *(undefined4 *)(local_bc4 + 8) = uVar24;
            *(undefined4 *)(local_bc4 + 0xc) = uVar4;
            *(undefined2 *)(local_bc4 + 0x12) = *(undefined2 *)(pbVar19 + 0x12);
            *(undefined2 *)(local_bc4 + 0x10) = *(undefined2 *)(pbVar19 + 0x10);
            EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
            FUN_0059bac0((int *)((int)this + 0x5b4),&local_bc4);
            LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
            pbVar19 = local_5ec;
          }
          FUN_005adb3f(pbVar19);
          EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
          pbVar19 = *(byte **)((int)this + 0x2e8);
          pbStack_bc8 = (byte *)0x0;
          local_c10 = (undefined1 *)((int)pbVar19 * 4);
          local_c04 = pbVar19;
          while( true ) {
            if (*(byte **)((int)this + 0x2ec) < pbVar19) {
              pbVar12 = (byte *)((*(int *)((int)this + 0x2f0) - (int)pbVar19) +
                                *(int *)((int)this + 0x2ec));
            }
            else {
              pbVar12 = *(byte **)((int)this + 0x2ec) + -(int)pbVar19;
            }
            if (pbVar12 <= pbStack_bc8) goto LAB_005a87fb;
            local_bc4 = *(byte **)((int)this + 0x2f0);
            puVar3 = local_c10;
            if (local_bc4 <= local_c04) {
              puVar3 = (undefined1 *)((int)(pbStack_bc8 + ((int)pbVar19 - (int)local_bc4)) * 4);
            }
            if (*(byte **)(puVar3 + *(int *)((int)this + 0x2e4)) == local_5ec) break;
            local_c10 = local_c10 + 4;
            pbStack_bc8 = pbStack_bc8 + 1;
            local_c04 = local_c04 + 1;
          }
          FUN_005aa580((int *)((int)this + 0x2e4),(uint)pbStack_bc8);
LAB_005a87fb:
          LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
          pcVar20 = local_c08;
        }
        else {
          local_c10 = (undefined1 *)
                      (ZEXT48(pbStack_bc8) / ((ulonglong)*(uint *)(pbVar19 + 0x134) / 3));
          if ((undefined1 *)0x2 < local_c10) {
            local_c10 = (undefined1 *)0x2;
          }
          pbVar19[0x20] = pbVar19[0x20] + 1;
          *(uint *)(pbVar19 + 0x1c) = local_c14 + CARRY4(*(uint *)(pbVar19 + 0x138),local_c0c);
          *(uint *)(pbVar19 + 0x18) = *(uint *)(pbVar19 + 0x138) + local_c0c;
          memset(&local_770,0,0x114);
          local_764 = local_75f;
          local_770 = (byte *)0x0;
          local_76c = 0x800;
          local_768 = 0;
          local_760 = '\x01';
          local_8 = 0;
          local_5ed = 5;
          FUN_005ab3f0(&local_770,&local_5ed,8);
          local_770 = local_770 + (7 - ((uint)(local_770 + -1) & 7));
          if (((uint)local_770 & 7) == 0) {
            FUN_005ab5d0(&local_770,0x80);
            puVar11 = (undefined4 *)(local_764 + ((uint)(local_770 + 7) >> 3));
            *puVar11 = 0xffff00;
            puVar11[1] = 0xfefefefe;
            puVar11[2] = 0xfdfdfdfd;
            puVar11[3] = 0x78563412;
            local_770 = local_770 + 0x80;
          }
          else {
            FUN_005ab3f0(&local_770,(byte *)&DAT_005e0e24,0x80);
          }
          local_5ed = 6;
          FUN_005ab3f0(&local_770,&local_5ed,8);
          if ((uint)(local_770 + 7) >> 3 < *(int *)(&UNK_005e0e34 + (int)local_c10 * 4) - 0x1cU) {
            pbStack_bc8 = (byte *)((*(int *)(&UNK_005e0e34 + (int)local_c10 * 4) - 0x1cU) -
                                  ((uint)(local_770 + (0xe - ((uint)(local_770 + -1) & 7))) >> 3));
            local_770 = local_770 + (7 - ((uint)(local_770 + -1) & 7));
            FUN_005ab5d0(&local_770,(int)pbStack_bc8 * 8);
            memset(local_764 + ((uint)(local_770 + 7) >> 3),0,(size_t)pbStack_bc8);
            local_770 = local_770 + (int)pbStack_bc8 * 8;
          }
          FUN_0059d0f0(pbVar19,'\x01',local_870);
          pbStack_bc8 = (byte *)0x0;
          if (*(int *)((int)this + 0x2dc) != 0) {
            do {
              (**(code **)(**(int **)(*(int *)((int)this + 0x2d8) + (int)pbStack_bc8 * 4) + 0x2c))()
              ;
              pbStack_bc8 = pbStack_bc8 + 1;
              pbVar19 = local_5ec;
            } while (pbStack_bc8 < *(byte **)((int)this + 0x2dc));
          }
          pbStack_bc8 = *(byte **)(pbVar19 + 0x144);
          if (pbStack_bc8 == (byte *)0x0) {
            pbStack_bc8 = *(byte **)(*(int *)((int)this + 0x424) + *(int *)(pbVar19 + 300) * 4);
          }
          p_Stack_5fc = *(PRTL_CRITICAL_SECTION_DEBUG *)(pbStack_bc8 + 0x14);
          pcStack_5f8 = *(char **)(pbStack_bc8 + 0x18);
          local_5f4 = *(byte **)(pbStack_bc8 + 0x1c);
          local_604 = (short)*(undefined4 *)(pbStack_bc8 + 0xc);
          uStack_602 = (u_short)((uint)*(undefined4 *)(pbStack_bc8 + 0xc) >> 0x10);
          uStack_600 = (undefined2)*(undefined4 *)(pbStack_bc8 + 0x10);
          uStack_5fe = (ushort)((uint)*(undefined4 *)(pbStack_bc8 + 0x10) >> 0x10);
          FUN_0059d0f0(pbVar19,'\0',(char *)local_7f0);
          pbVar16 = &DAT_0062eb60;
          pbVar12 = local_7f0;
          do {
            bVar15 = *pbVar12;
            bVar22 = bVar15 < *pbVar16;
            if (bVar15 != *pbVar16) {
LAB_005a84b1:
              uVar8 = -(uint)bVar22 | 1;
              goto LAB_005a84b6;
            }
            if (bVar15 == 0) break;
            bVar15 = pbVar12[1];
            bVar22 = bVar15 < pbVar16[1];
            if (bVar15 != pbVar16[1]) goto LAB_005a84b1;
            pbVar12 = pbVar12 + 2;
            pbVar16 = pbVar16 + 2;
          } while (bVar15 != 0);
          uVar8 = 0;
LAB_005a84b6:
          if ((uVar8 == 0) && (local_604 == 2)) {
            FUN_0059d270(pbVar19,"127.0.0.1");
          }
          if ((*(int *)(pbStack_bc8 + 8) != 3) && (*(int *)(pbStack_bc8 + 8) != 0)) {
            local_bc4 = (byte *)0x1;
            setsockopt(*(SOCKET *)(pbStack_bc8 + 0x24),0,0xe,(char *)&local_bc4,4);
          }
          uVar26 = FUN_005ab130();
          uVar26 = __aulldiv((uint)uVar26,(uint)((ulonglong)uVar26 >> 0x20),1000,0);
          local_5ec = (byte *)((ulonglong)uVar26 >> 0x20);
          local_bc4 = (byte *)uVar26;
          puStack_bf4 = local_764;
          uStack_bf0 = (uint)(local_770 + 7) >> 3;
          local_bec = *(char **)pbVar19;
          pcStack_be8 = *(char **)(pbVar19 + 4);
          uStack_be4 = *(undefined4 *)(pbVar19 + 8);
          pbStack_be0 = *(byte **)(pbVar19 + 0xc);
          local_bdc = *(uint *)(pbVar19 + 0x10);
          local_bd8 = 0;
          iVar10 = (**(code **)(*(int *)pbStack_bc8 + 4))();
          if (iVar10 == 0x2738) {
            bVar15 = (char)(*(uint *)(pbVar19 + 0x134) / 3) * ((char)local_c10 + '\x01');
            *(uint *)(pbVar19 + 0x18) = local_c0c;
            *(uint *)(pbVar19 + 0x1c) = local_c14;
LAB_005a8628:
            pbVar19[0x20] = bVar15;
          }
          else {
            uVar26 = FUN_005ab130();
            lVar27 = __aulldiv((uint)uVar26,(uint)((ulonglong)uVar26 >> 0x20),1000,0);
            lVar27 = lVar27 - CONCAT44(local_5ec,local_bc4);
            local_658 = (int)((ulonglong)lVar27 >> 0x20);
            if ((local_658 != 0) || (100 < (uint)lVar27)) {
              uVar8 = (uint)((ulonglong)*(uint *)(pbVar19 + 0x134) * 0xaaaaaaab >> 0x20) &
                      0xfffffffe;
              if ((int)uVar8 <= (int)(uint)pbVar19[0x20]) {
                bVar15 = (char)*(uint *)(pbVar19 + 0x134) + 1;
                goto LAB_005a8628;
              }
              *(uint *)(pbVar19 + 0x18) = local_c0c;
              pbVar19[0x20] = (byte)uVar8;
              *(uint *)(pbVar19 + 0x1c) = local_c14;
            }
          }
          if ((*(int *)(pbStack_bc8 + 8) != 3) && (*(int *)(pbStack_bc8 + 8) != 0)) {
            local_bc4 = (byte *)0x0;
            setsockopt(*(SOCKET *)(pbStack_bc8 + 0x24),0,0xe,(char *)&local_bc4,4);
          }
          pcVar20 = local_c08 + 1;
          local_8 = 0xffffffff;
          local_c08 = pcVar20;
          if ((local_760 != '\0') && (0x800 < local_76c)) {
            free(local_764);
          }
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
  }
  local_bc4 = (byte *)0x0;
  if (*(int *)((int)this + 0x234) != 0) {
    do {
      pcVar20 = *(char **)(*(int *)((int)this + 0x230) + (int)local_bc4 * 4);
      local_c30 = *(char **)(pcVar20 + 4);
      pcStack_c2c = *(char **)(pcVar20 + 8);
      uStack_c28 = *(undefined4 *)(pcVar20 + 0xc);
      pbStack_c24 = *(byte **)(pcVar20 + 0x10);
      local_c20 = *(uint *)(pcVar20 + 0x14);
      local_c08 = pcVar20;
      local_bd4 = local_c30;
      pcStack_bd0 = pcStack_c2c;
      uStack_bcc = uStack_c28;
      pbStack_bc8 = pbStack_c24;
      if (local_c1c == 0) {
        lVar27 = FUN_005ab130();
        local_c1c = lVar27;
        uVar26 = __aulldiv((uint)lVar27,(uint)((ulonglong)lVar27 >> 0x20),1000,0);
        local_c0c = (uint)uVar26;
        local_c14 = 0;
      }
      uVar8 = *(uint *)(pcVar20 + 0x11e0);
      lVar27 = local_c1c;
      if ((*(uint *)(pcVar20 + 0x11e4) <= local_c14) &&
         ((local_c14 != *(uint *)(pcVar20 + 0x11e4) || (uVar8 < local_c0c)))) {
        if (((local_c14 - *(int *)(pcVar20 + 0x11e4) != (uint)(local_c0c < uVar8)) ||
            (*(uint *)(pcVar20 + 0x9b8) >> 1 < local_c0c - uVar8)) &&
           (*(int *)(pcVar20 + 0x120c) == 7)) {
          puVar11 = FUN_0059aa70(pcVar20 + 0xf8,local_850);
          lVar27 = local_c1c;
          if (puVar11[0x32] == 0) {
            FUN_005a4640(this);
            *(uint *)(pcVar20 + 0x11e0) = local_c0c;
            *(uint *)(pcVar20 + 0x11e4) = local_c14;
            lVar27 = local_c1c;
          }
        }
      }
      local_c1c._4_4_ = (uint)((ulonglong)lVar27 >> 0x20);
      local_c1c._0_4_ = (char *)lVar27;
      this_00 = pcVar20 + 0xf8;
      pauVar29 = (undefined1 (*) [16])&local_c30;
      piVar9 = *(int **)(pcVar20 + 0x1204);
      iVar10 = 0x5a8998;
      pcVar31 = (char *)local_c1c;
      FUN_005987a0(this_00,piVar9,pauVar29,this_00,(uint)(char *)local_c1c,local_c1c._4_4_,
                   *(int *)((int)this + 0x460),(int *)((int)this + 0x2d8),this_00,local_c38);
      local_c1c = lVar27;
      if ((pcVar20[0x9b4] == '\0') &&
         ((((iVar18 = *(int *)(pcVar20 + 0x120c), iVar18 != 1 && (iVar18 != 2)) ||
           (*(int *)(pcVar20 + 0x970) != 0)) || (*(int *)(pcVar20 + 0xa88) != 0)))) {
        if (iVar18 == 3) {
          if (*(int *)(pcVar20 + 0x105c) != 0) {
            uVar8 = *(uint *)(pcVar20 + 0x968);
            pbStack_bc8 = (byte *)(-(uint)(uVar8 < local_c0c) - local_c14);
            if (((pbStack_bc8 == (byte *)0x0) && (uVar8 - local_c0c < 0x2711)) ||
               ((local_c14 == local_c0c < uVar8 && (local_c0c - uVar8 <= *(uint *)(pcVar20 + 0x9b8))
                ))) goto LAB_005a8b41;
          }
          goto LAB_005a8a34;
        }
        if (((iVar18 == 4) || (iVar18 == 5)) || (iVar18 == 6)) {
          uVar8 = *(uint *)(pcVar20 + 0x11e8);
          if (((*(uint *)(pcVar20 + 0x11ec) <= local_c14) &&
              ((local_c14 != *(uint *)(pcVar20 + 0x11ec) || (uVar8 < local_c0c)))) &&
             ((local_c14 - *(int *)(pcVar20 + 0x11ec) != (uint)(local_c0c < uVar8) ||
              (10000 < local_c0c - uVar8)))) goto LAB_005a8a34;
        }
        if ((((iVar18 == 7) && (*(uint *)(pcVar20 + 0x11dc) <= local_c14)) &&
            ((local_c14 != *(uint *)(pcVar20 + 0x11dc) || (*(uint *)(pcVar20 + 0x11d8) < local_c0c))
            )) && ((*(char *)((int)this + 10) != '\0' || (*(short *)(pcVar20 + 0x11d0) == -1)))) {
          *(uint *)(pcVar20 + 0x11d8) = local_c0c + 5000;
          *(uint *)(pcVar20 + 0x11dc) = local_c14 + (0xffffec77 < local_c0c);
          pauVar29 = (undefined1 (*) [16])0x5a8b35;
          this_00 = local_c30;
          pcVar31 = pcStack_c2c;
          FUN_005a4640(this);
          SetEvent(*(HANDLE *)((int)this + 0x568));
        }
LAB_005a8b41:
        uVar8 = *(uint *)(pcVar20 + 0xfc);
        if (*(uint *)(pcVar20 + 0x100) < uVar8) {
          iVar18 = *(int *)(pcVar20 + 0x104) - uVar8;
        }
        else {
          iVar18 = -uVar8;
        }
        piVar13 = (int *)(pcVar20 + 0xf8);
        if (*(uint *)(pcVar20 + 0x100) + iVar18 != 0) {
          iVar18 = uVar8 + 1;
          *(int *)(pcVar20 + 0xfc) = iVar18;
          iVar2 = *(int *)(pcVar20 + 0x104);
          if (iVar18 == iVar2) {
            pcVar20[0xfc] = '\0';
            pcVar20[0xfd] = '\0';
            pcVar20[0xfe] = '\0';
            pcVar20[0xff] = '\0';
            iVar18 = *(int *)(*piVar13 + -4 + iVar2 * 4);
          }
          else if (iVar18 == 0) {
            iVar18 = *(int *)(*piVar13 + -4 + iVar2 * 4);
          }
          else {
            iVar18 = *(int *)(*piVar13 + -4 + iVar18 * 4);
          }
          local_c04 = *(byte **)(iVar18 + 0x44);
          local_5ec = *(byte **)(iVar18 + 0x18);
          FUN_0059b080(pcVar20 + 0xf8,iVar18);
          piVar13 = local_c34;
          pcVar30 = local_c30;
          while ((local_c34 = piVar13, local_c30 = pcVar30, local_5ec != (byte *)0x0 &&
                 (bVar15 = *local_c04, bVar15 != 0x11))) {
            pbStack_bc8 = *(byte **)(pcVar20 + 0x120c);
            local_c10 = (undefined1 *)((uint)(local_5ec + 7) >> 3);
            if (pbStack_bc8 == (byte *)0x6) {
              if (bVar15 == 9) {
                FUN_005a3360(piVar13,(int)pcVar20,&local_c30,(int)local_c04,(int)local_c10);
                free(local_c04);
              }
              else {
                FUN_0059d640(&local_bfc,&local_c30);
                pcVar31 = (char *)0x5a8c53;
                FUN_005a47e0(piVar13,&local_bfc,'\0','\x01',0,3);
                FUN_0059d0f0(&local_c30,'\0',local_7b0);
                (**(code **)(*piVar13 + 0x84))();
                free(local_c04);
              }
            }
            else if (bVar15 == 9) {
              if (pbStack_bc8 == &DAT_00000004) {
                FUN_005a3360(piVar13,(int)pcVar20,&local_c30,(int)local_c04,(int)local_c10);
                free(local_c04);
              }
              else {
                memset(&local_bc0,0,0x114);
                local_bc0 = (int)local_c10 << 3;
                local_bb0 = '\0';
                local_bb4 = local_c04;
                local_8 = 1;
                local_bb8 = 200;
                local_bbc = local_bc0;
                FUN_005aa1f0(&local_bc0,local_62c);
                FUN_005a3650(piVar13,(int)pcVar20);
                local_8 = 0xffffffff;
                if ((local_bb0 != '\0') && (0x800 < local_bbc)) {
                  free(local_bb4);
                }
                free(local_c04);
              }
            }
            else if (bVar15 == 0x13) {
              if (local_c10 < (undefined1 *)0x18) goto LAB_005a93b4;
              if (pbStack_bc8 == (byte *)0x5) {
                pcVar20[0x120c] = '\a';
                pcVar20[0x120d] = '\0';
                pcVar20[0x120e] = '\0';
                pcVar20[0x120f] = '\0';
                pauVar29 = (undefined1 (*) [16])0x5a8dc9;
                FUN_005a4640(piVar13);
                SetEvent((HANDLE)piVar13[0x15a]);
                memset(&local_884,0,0x114);
                local_884 = (byte *)((int)local_c10 << 3);
                local_874 = '\0';
                local_878 = local_c04;
                local_8 = 2;
                local_5f4 = (byte *)0xffff0000;
                local_87c = 8;
                uStack_602 = 0;
                uStack_600 = 0;
                uStack_5fe = 0;
                p_Stack_5fc = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                pcStack_5f8 = (char *)0x0;
                local_604 = 2;
                pbStack_bc8 = (byte *)0x0;
                local_880 = local_884;
                FUN_005ab4c0(&local_884,&local_5ed,8);
                this_00 = pcVar30;
                if (local_5ed == 4) {
                  FUN_005ab4c0(&local_884,&local_620,0x20);
                  uStack_600 = (undefined2)~local_620;
                  uStack_5fe = (ushort)(~local_620 >> 0x10);
                  FUN_005ab4c0(&local_884,&uStack_602,0x10);
                  uVar7 = ntohs(uStack_602);
                  pbStack_bc8 = (byte *)CONCAT22(pbStack_bc8._2_2_,uVar7);
                  this_00 = pcVar30;
                }
                puVar21 = (u_short *)(pcVar20 + 0x2e);
                iVar18 = 10;
                do {
                  FUN_005ab4c0(&local_884,&local_5ee,8);
                  if (local_5ee == '\x04') {
                    puVar21[-1] = 2;
                    FUN_005ab4c0(&local_884,&local_624,0x20);
                    *(uint *)(puVar21 + 1) = ~local_624;
                    FUN_005ab4c0(&local_884,puVar21,0x10);
                    uVar7 = ntohs(*puVar21);
                    puVar21[7] = uVar7;
                  }
                  piVar13 = local_c34;
                  puVar21 = puVar21 + 10;
                  iVar18 = iVar18 + -1;
                } while (iVar18 != 0);
                FUN_005aa1f0(&local_884,(undefined1 *)&local_63c);
                FUN_005aa1f0(&local_884,(undefined1 *)&local_634);
                pcVar20 = local_c08;
                pcVar31 = (char *)0x5a8f7a;
                FUN_005a50a0(local_63c,local_638,local_634,local_630,(int)local_c08);
                *(int *)(pcVar20 + 0x18) = CONCAT22(uStack_602,local_604);
                *(int *)(pcVar20 + 0x1c) = CONCAT22(uStack_5fe,uStack_600);
                *(PRTL_CRITICAL_SECTION_DEBUG *)(pcVar20 + 0x20) = p_Stack_5fc;
                *(char **)(pcVar20 + 0x24) = pcStack_5f8;
                *(undefined2 *)(pcVar20 + 0x2a) = local_5f4._2_2_;
                *(short *)(pcVar20 + 0x28) = (short)pbStack_bc8;
                if (((*(short *)((int)piVar13 + 0x46a) == DAT_006558f6) &&
                    ((short)piVar13[0x11a] == 2)) && (piVar13[0x11b] == DAT_006558f8)) {
                  piVar13[0x11a] = CONCAT22(uStack_602,local_604);
                  piVar13[0x11b] = CONCAT22(uStack_5fe,uStack_600);
                  piVar13[0x11c] = (int)p_Stack_5fc;
                  piVar13[0x11d] = (int)pcStack_5f8;
                  *(undefined2 *)((int)piVar13 + 0x47a) = local_5f4._2_2_;
                  *(short *)(piVar13 + 0x11e) = (short)pbStack_bc8;
                  uVar7 = ntohs(*(u_short *)((int)piVar13 + 0x46a));
                  *(u_short *)(piVar13 + 0x11e) = uVar7;
                }
                pbStack_bc8 = (byte *)FUN_0059d830(piVar13,(int)local_c10,local_c04);
                *(byte **)(pbStack_bc8 + 0x2c) = local_5ec;
                *(undefined2 *)(pbStack_bc8 + 0x12) = local_c20._2_2_;
                *(short *)pbStack_bc8 = (short)local_c30;
                *(undefined2 *)(pbStack_bc8 + 2) = local_c30._2_2_;
                *(undefined2 *)(pbStack_bc8 + 4) = pcStack_c2c._0_2_;
                *(undefined2 *)(pbStack_bc8 + 6) = pcStack_c2c._2_2_;
                *(undefined2 *)(pbStack_bc8 + 8) = (undefined2)uStack_c28;
                *(undefined2 *)(pbStack_bc8 + 10) = uStack_c28._2_2_;
                *(undefined2 *)(pbStack_bc8 + 0xc) = pbStack_c24._0_2_;
                *(undefined2 *)(pbStack_bc8 + 0xe) = pbStack_c24._2_2_;
                *(undefined2 *)(pbStack_bc8 + 0x10) = (undefined2)local_c20;
                *(undefined2 *)(pbStack_bc8 + 0x12) = *(undefined2 *)(pcVar20 + 0x1208);
                *(undefined4 *)(pbStack_bc8 + 0x18) = *(undefined4 *)(pcVar20 + 0x11f0);
                *(undefined4 *)(pbStack_bc8 + 0x1c) = *(undefined4 *)(pcVar20 + 0x11f4);
                *(undefined2 *)(pbStack_bc8 + 0x20) = *(undefined2 *)(pcVar20 + 0x11f8);
                *(undefined2 *)(pbStack_bc8 + 0x20) = *(undefined2 *)(pbStack_bc8 + 0x12);
                EnterCriticalSection((LPCRITICAL_SECTION)(piVar13 + 0x167));
                FUN_0059bac0(piVar13 + 0x16d,&pbStack_bc8);
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar13 + 0x167));
                local_8 = 0xffffffff;
                pcVar20 = local_c08;
                if ((local_874 != '\0') && ((byte *)0x800 < local_880)) {
                  free(local_878);
                  pcVar20 = local_c08;
                }
              }
            }
            else if (bVar15 == 3) {
              if (local_c10 != (undefined1 *)0x11) goto LAB_005a93b4;
              memset(local_a9b,0,0x103);
              local_aa0 = local_c04;
              local_aac = 0x88;
              local_a9c = '\0';
              local_aa8 = 0x88;
              local_aa4 = 8;
              FUN_005aa1f0(&local_aac,(undefined1 *)&local_64c);
              FUN_005aa1f0(&local_aac,(undefined1 *)&local_644);
              pcVar31 = (char *)0x5a915b;
              FUN_005a50a0(local_64c,local_648,local_644,local_640,(int)pcVar20);
              free(local_c04);
              if ((local_a9c != '\0') && (0x800 < local_aa8)) {
                free(local_aa0);
              }
            }
            else if (bVar15 == 0) {
              if (local_c10 == (undefined1 *)0x9) {
                memset(&local_128,0,0x114);
                local_128 = 0x48;
                local_118 = '\0';
                local_124 = 0x48;
                local_11c = local_c04;
                local_8 = 3;
                local_120 = 8;
                FUN_005aa1f0(&local_128,local_65c);
                memset(&local_884,0,0x114);
                local_878 = local_873;
                local_884 = (byte *)0x0;
                local_880 = (byte *)0x800;
                local_87c = 0;
                local_874 = '\x01';
                local_8 = CONCAT31(local_8._1_3_,4);
                local_bfd = 3;
                FUN_005ab3f0(&local_884,&local_bfd,8);
                FUN_005aa070(&local_884,local_65c);
                uVar26 = FUN_005ab130();
                iVar18 = 0x5a9297;
                local_c40 = __aulldiv((uint)uVar26,(uint)((ulonglong)uVar26 >> 0x20),1000,0);
                uVar8 = 0x5a92b5;
                FUN_005aa070(&local_884,(byte *)&local_c40);
                uVar28 = FUN_005ab130();
                pbStack_bc8 = local_884;
                local_5ec = local_878;
                FUN_0059d640(&stack0xfffff384,&local_c30);
                piVar13 = local_c34;
                FUN_005a4d90(local_c34,local_5ec,(int)pbStack_bc8,0,0,0,'\0','\0',(uint)uVar28,
                             (uint)((ulonglong)uVar28 >> 0x20),0,iVar10,(int)piVar9,(ushort)pauVar29
                             ,this_00,pcVar31,iVar18,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20),
                             uVar8);
                SetEvent((HANDLE)piVar13[0x15a]);
                pcVar5 = free_exref;
                free(local_c04);
                uVar8 = local_124;
                cVar6 = local_118;
                if ((local_874 != '\0') && ((byte *)0x800 < local_880)) {
                  free(local_878);
                  uVar8 = local_124;
                  cVar6 = local_118;
                }
joined_r0x005a99c3:
                local_8 = 0xffffffff;
                pcVar20 = local_c08;
                if ((cVar6 != '\0') && (local_8 = 0xffffffff, 0x800 < uVar8)) {
                  local_8 = 0xffffffff;
                  (*pcVar5)();
                  pcVar20 = local_c08;
                }
              }
              else {
LAB_005a93b4:
                free(local_c04);
              }
            }
            else {
              if (bVar15 != 0x15) {
                if (bVar15 != 4) {
                  if (bVar15 == 0x18) {
                    if (pbStack_bc8 == &DAT_00000004) {
                      puVar11 = FUN_0059d830(piVar13,(int)local_c10,local_c04);
                      puVar11[0xb] = local_5ec;
                      *(undefined2 *)((int)puVar11 + 0x12) = local_c20._2_2_;
                      *(short *)puVar11 = (short)local_c30;
                      *(undefined2 *)((int)puVar11 + 2) = local_c30._2_2_;
                      *(undefined2 *)(puVar11 + 1) = pcStack_c2c._0_2_;
                      *(undefined2 *)((int)puVar11 + 6) = pcStack_c2c._2_2_;
                      *(undefined2 *)(puVar11 + 2) = (undefined2)uStack_c28;
                      *(undefined2 *)((int)puVar11 + 10) = uStack_c28._2_2_;
                      *(undefined2 *)(puVar11 + 3) = pbStack_c24._0_2_;
                      *(undefined2 *)((int)puVar11 + 0xe) = pbStack_c24._2_2_;
                      *(undefined2 *)(puVar11 + 4) = (undefined2)local_c20;
                      *(undefined2 *)((int)puVar11 + 0x12) = *(undefined2 *)(pcVar20 + 0x1208);
                      puVar11[6] = *(undefined4 *)(pcVar20 + 0x11f0);
                      puVar11[7] = *(undefined4 *)(pcVar20 + 0x11f4);
                      *(undefined2 *)(puVar11 + 8) = *(undefined2 *)(pcVar20 + 0x11f8);
                      *(undefined2 *)(puVar11 + 8) = *(undefined2 *)((int)puVar11 + 0x12);
                      FUN_005a5400((int)piVar13);
                      pcVar20[0x120c] = '\x02';
                      pcVar20[0x120d] = '\0';
                      pcVar20[0x120e] = '\0';
                      pcVar20[0x120f] = '\0';
                      goto LAB_005a9378;
                    }
                  }
                  else if (bVar15 == 0x10) {
                    if ((undefined1 *)0x19 < local_c10) {
                      if (((pbStack_bc8 == (byte *)0x5) || (pbStack_bc8 == &DAT_00000004)) ||
                         ((char)piVar13[0x119] != '\0')) {
                        bVar22 = true;
                      }
                      else {
                        bVar22 = false;
                      }
                      if (bVar22) {
                        local_5f4 = (byte *)0xffff0000;
                        uStack_602 = 0;
                        uStack_600 = 0;
                        uStack_5fe = 0;
                        p_Stack_5fc = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                        pcStack_5f8 = (char *)0x0;
                        local_604 = 2;
                        local_5ec = (byte *)0x0;
                        memset(&local_998,0,0x114);
                        local_998 = (int)local_c10 << 3;
                        local_988 = '\0';
                        local_98c = local_c04;
                        local_8 = 5;
                        local_990 = 8;
                        local_994 = local_998;
                        FUN_005ab4c0(&local_998,&local_5ef,8);
                        if (local_5ef == '\x04') {
                          FUN_005ab4c0(&local_998,&local_61c,0x20);
                          uStack_600 = (undefined2)~local_61c;
                          uStack_5fe = (ushort)(~local_61c >> 0x10);
                          FUN_005ab4c0(&local_998,&uStack_602,0x10);
                          uVar7 = ntohs(uStack_602);
                          local_5ec = (byte *)CONCAT22(local_5ec._2_2_,uVar7);
                        }
                        FUN_0059b8a0(&local_998,local_618);
                        puVar21 = (u_short *)(pcVar20 + 0x2e);
                        iVar18 = 10;
                        do {
                          FUN_005ab4c0(&local_998,&local_5f0,8);
                          if (local_5f0 == '\x04') {
                            puVar21[-1] = 2;
                            FUN_005ab4c0(&local_998,(void *)((int)&local_614 + 4),0x20);
                            *(uint *)(puVar21 + 1) = ~local_614._4_4_;
                            FUN_005ab4c0(&local_998,puVar21,0x10);
                            uVar7 = ntohs(*puVar21);
                            puVar21[7] = uVar7;
                          }
                          piVar13 = local_c34;
                          puVar21 = puVar21 + 10;
                          iVar18 = iVar18 + -1;
                        } while (iVar18 != 0);
                        FUN_005aa1f0(&local_998,(undefined1 *)&local_654);
                        FUN_005aa1f0(&local_998,(undefined1 *)&local_60c);
                        pcVar20 = local_c08;
                        FUN_005a50a0(local_654,local_650,(uint)local_60c,local_60c._4_4_,
                                     (int)local_c08);
                        uVar23 = CONCAT22(uStack_602,local_604);
                        uVar24 = CONCAT22(uStack_5fe,uStack_600);
                        *(undefined2 *)(pcVar20 + 0x2a) = local_5f4._2_2_;
                        *(undefined4 *)(pcVar20 + 0x18) = uVar23;
                        *(undefined4 *)(pcVar20 + 0x1c) = uVar24;
                        *(PRTL_CRITICAL_SECTION_DEBUG *)(pcVar20 + 0x20) = p_Stack_5fc;
                        *(char **)(pcVar20 + 0x24) = pcStack_5f8;
                        *(short *)(pcVar20 + 0x28) = (short)local_5ec;
                        pcVar20[0x120c] = '\a';
                        pcVar20[0x120d] = '\0';
                        pcVar20[0x120e] = '\0';
                        pcVar20[0x120f] = '\0';
                        p_Var25 = p_Stack_5fc;
                        pcVar20 = pcStack_5f8;
                        uVar8 = FUN_0059d0c0(piVar13 + 0x11a,0x6558f4);
                        if ((char)uVar8 != '\0') {
                          *(undefined2 *)((int)extraout_ECX + 0x12) = local_5f4._2_2_;
                          *extraout_ECX = uVar23;
                          extraout_ECX[1] = uVar24;
                          extraout_ECX[2] = p_Var25;
                          extraout_ECX[3] = pcVar20;
                          *(short *)(extraout_ECX + 4) = (short)local_5ec;
                          uVar7 = ntohs(*(u_short *)((int)piVar13 + 0x46a));
                          *(u_short *)(piVar13 + 0x11e) = uVar7;
                        }
                        puVar11 = FUN_0059d830(piVar13,(int)local_c10,local_c04);
                        puVar11[0xb] = (int)local_c10 * 8;
                        *(undefined2 *)((int)puVar11 + 0x12) = local_c20._2_2_;
                        *(undefined2 *)(puVar11 + 4) = (undefined2)local_c20;
                        *(short *)puVar11 = (short)local_c30;
                        *(undefined2 *)((int)puVar11 + 2) = local_c30._2_2_;
                        *(undefined2 *)(puVar11 + 1) = pcStack_c2c._0_2_;
                        *(undefined2 *)((int)puVar11 + 6) = pcStack_c2c._2_2_;
                        *(undefined2 *)(puVar11 + 2) = (undefined2)uStack_c28;
                        *(undefined2 *)((int)puVar11 + 10) = uStack_c28._2_2_;
                        *(undefined2 *)(puVar11 + 3) = pbStack_c24._0_2_;
                        *(undefined2 *)((int)puVar11 + 0xe) = pbStack_c24._2_2_;
                        this_00 = (char *)0x5a9707;
                        pcVar31 = local_c30;
                        uVar8 = FUN_005a2c60(piVar13,local_c30,(int)pcStack_c2c,uStack_c28,
                                             pbStack_c24,local_c20,'\x01');
                        *(short *)((int)puVar11 + 0x12) = (short)uVar8;
                        puVar11[6] = *(undefined4 *)(local_c08 + 0x11f0);
                        puVar11[7] = *(undefined4 *)(local_c08 + 0x11f4);
                        *(undefined2 *)(puVar11 + 8) = *(undefined2 *)(local_c08 + 0x11f8);
                        *(undefined2 *)(puVar11 + 8) = *(undefined2 *)((int)puVar11 + 0x12);
                        FUN_005a5400((int)piVar13);
                        memset(&local_770,0,0x114);
                        local_764 = local_75f;
                        local_770 = (byte *)0x0;
                        local_76c = 0x800;
                        local_768 = 0;
                        local_760 = '\x01';
                        local_8 = CONCAT31(local_8._1_3_,6);
                        local_bfd = 0x13;
                        FUN_005ab3f0(&local_770,&local_bfd,8);
                        local_bfd = ((short)local_c30 != 2) * '\x02' + 4;
                        FUN_005ab3f0(&local_770,&local_bfd,8);
                        if ((short)local_c30 == 2) {
                          local_5ec = (byte *)~(uint)pcStack_c2c;
                          FUN_005ab3f0(&local_770,(byte *)&local_5ec,0x20);
                          local_5ec = (byte *)((uint)local_c30 >> 0x10);
                          FUN_005ab3f0(&local_770,(byte *)&local_5ec,0x10);
                        }
                        piVar13 = piVar13 + 0x125;
                        iVar18 = 10;
                        do {
                          local_bfd = ((short)*piVar13 != 2) * '\x02' + 4;
                          FUN_005ab3f0(&local_770,&local_bfd,8);
                          if ((short)*piVar13 == 2) {
                            local_bd8 = piVar13[4];
                            p_Stack_5fc = (PRTL_CRITICAL_SECTION_DEBUG)piVar13[1];
                            pcStack_5f8 = (char *)piVar13[2];
                            local_5f4 = (byte *)piVar13[3];
                            local_5ec = (byte *)~piVar13[1];
                            uStack_600 = (undefined2)*piVar13;
                            uStack_5fe = (ushort)((uint)*piVar13 >> 0x10);
                            FUN_005ab3f0(&local_770,(byte *)&local_5ec,0x20);
                            local_5ec = (byte *)(uint)uStack_5fe;
                            FUN_005ab3f0(&local_770,(byte *)&local_5ec,0x10);
                          }
                          piVar13 = piVar13 + 5;
                          iVar18 = iVar18 + -1;
                        } while (iVar18 != 0);
                        FUN_005aa070(&local_770,(byte *)&local_60c);
                        uVar26 = FUN_005ab130();
                        iVar18 = 0x5a98ec;
                        local_c48 = __aulldiv((uint)uVar26,(uint)((ulonglong)uVar26 >> 0x20),1000,0)
                        ;
                        uVar8 = 0x5a990a;
                        FUN_005aa070(&local_770,(byte *)&local_c48);
                        uVar28 = FUN_005ab130();
                        local_5ec = local_770;
                        local_c10 = local_764;
                        FUN_0059d640(&stack0xfffff384,&local_c30);
                        piVar13 = local_c34;
                        FUN_005a4d90(local_c34,local_c10,(int)local_5ec,0,3,0,'\0','\0',(uint)uVar28
                                     ,(uint)((ulonglong)uVar28 >> 0x20),0,iVar10,(int)piVar9,
                                     (ushort)pauVar29,this_00,pcVar31,iVar18,(int)uVar26,
                                     (int)((ulonglong)uVar26 >> 0x20),uVar8);
                        if (pbStack_bc8 != (byte *)0x5) {
                          pauVar29 = (undefined1 (*) [16])0x5a998f;
                          this_00 = local_c30;
                          pcVar31 = pcStack_c2c;
                          FUN_005a4640(piVar13);
                        }
                        pcVar5 = free_exref;
                        uVar8 = local_994;
                        cVar6 = local_988;
                        if ((local_760 != '\0') && (0x800 < local_76c)) {
                          free(local_764);
                          uVar8 = local_994;
                          cVar6 = local_988;
                        }
                        goto joined_r0x005a99c3;
                      }
                    }
                  }
                  else if ((((0x1a < bVar15) || (bVar15 == 0xe)) || (bVar15 == 0xf)) &&
                          (*pcVar20 != '\0')) {
                    puVar11 = FUN_0059d830(piVar13,(int)local_c10,local_c04);
                    puVar11[0xb] = local_5ec;
                    *(undefined2 *)((int)puVar11 + 0x12) = local_c20._2_2_;
                    *(short *)puVar11 = (short)local_c30;
                    *(undefined2 *)((int)puVar11 + 2) = local_c30._2_2_;
                    *(undefined2 *)(puVar11 + 1) = pcStack_c2c._0_2_;
                    *(undefined2 *)((int)puVar11 + 6) = pcStack_c2c._2_2_;
                    *(undefined2 *)(puVar11 + 2) = (undefined2)uStack_c28;
                    *(undefined2 *)((int)puVar11 + 10) = uStack_c28._2_2_;
                    *(undefined2 *)(puVar11 + 3) = pbStack_c24._0_2_;
                    *(undefined2 *)((int)puVar11 + 0xe) = pbStack_c24._2_2_;
                    *(undefined2 *)(puVar11 + 4) = (undefined2)local_c20;
                    *(undefined2 *)((int)puVar11 + 0x12) = *(undefined2 *)(pcVar20 + 0x1208);
                    puVar11[6] = *(undefined4 *)(pcVar20 + 0x11f0);
                    puVar11[7] = *(undefined4 *)(pcVar20 + 0x11f4);
                    *(undefined2 *)(puVar11 + 8) = *(undefined2 *)(pcVar20 + 0x11f8);
                    *(undefined2 *)(puVar11 + 8) = *(undefined2 *)((int)puVar11 + 0x12);
                    FUN_005a5400((int)piVar13);
                    goto LAB_005a9378;
                  }
                }
                goto LAB_005a93b4;
              }
              pcVar20[0x120c] = '\x03';
              pcVar20[0x120d] = '\0';
              pcVar20[0x120e] = '\0';
              pcVar20[0x120f] = '\0';
              free(local_c04);
            }
LAB_005a9378:
            uVar8 = *(uint *)(pcVar20 + 0xfc);
            if (*(uint *)(pcVar20 + 0x100) < uVar8) {
              iVar18 = *(int *)(pcVar20 + 0x104) - uVar8;
            }
            else {
              iVar18 = -uVar8;
            }
            piVar14 = (int *)(pcVar20 + 0xf8);
            this = piVar13;
            if (*(uint *)(pcVar20 + 0x100) + iVar18 == 0) break;
            iVar18 = uVar8 + 1;
            *(int *)(pcVar20 + 0xfc) = iVar18;
            iVar2 = *(int *)(pcVar20 + 0x104);
            if (iVar18 == iVar2) {
              pcVar20[0xfc] = '\0';
              pcVar20[0xfd] = '\0';
              pcVar20[0xfe] = '\0';
              pcVar20[0xff] = '\0';
              iVar18 = *(int *)(*piVar14 + -4 + iVar2 * 4);
            }
            else if (iVar18 == 0) {
              iVar18 = *(int *)(*piVar14 + -4 + iVar2 * 4);
            }
            else {
              iVar18 = *(int *)(*piVar14 + -4 + iVar18 * 4);
            }
            local_c04 = *(byte **)(iVar18 + 0x44);
            local_5ec = *(byte **)(iVar18 + 0x18);
            FUN_0059b080(pcVar20 + 0xf8,iVar18);
            piVar13 = local_c34;
            pcVar30 = local_c30;
          }
        }
      }
      else {
LAB_005a8a34:
        iVar10 = *(int *)(pcVar20 + 0x120c);
        if ((((iVar10 == 7) || (iVar10 == 4)) || (iVar10 == 1)) || (iVar10 == 3)) {
          pbStack_bc8 = (byte *)FUN_0059d780(this,1);
          if (*(int *)(pcVar20 + 0x120c) == 4) {
            **(undefined1 **)(pbStack_bc8 + 0x30) = 0x11;
          }
          else if (*(int *)(pcVar20 + 0x120c) == 7) {
            **(undefined1 **)(pbStack_bc8 + 0x30) = 0x16;
          }
          else {
            **(undefined1 **)(pbStack_bc8 + 0x30) = 0x15;
          }
          *(undefined4 *)(pbStack_bc8 + 0x18) = *(undefined4 *)(pcVar20 + 0x11f0);
          *(undefined4 *)(pbStack_bc8 + 0x1c) = *(undefined4 *)(pcVar20 + 0x11f4);
          *(undefined2 *)(pbStack_bc8 + 0x20) = *(undefined2 *)(pcVar20 + 0x11f8);
          *(undefined2 *)(pbStack_bc8 + 0x12) = local_c20._2_2_;
          *(char **)pbStack_bc8 = local_c30;
          *(char **)(pbStack_bc8 + 4) = pcStack_c2c;
          *(undefined4 *)(pbStack_bc8 + 8) = uStack_c28;
          *(byte **)(pbStack_bc8 + 0xc) = pbStack_c24;
          *(undefined2 *)(pbStack_bc8 + 0x10) = (undefined2)local_c20;
          uVar1 = *(undefined2 *)(pcVar20 + 0x1208);
          *(undefined2 *)(pbStack_bc8 + 0x12) = uVar1;
          *(undefined2 *)(pbStack_bc8 + 0x20) = uVar1;
          EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
          FUN_0059bac0((int *)((int)this + 0x5b4),&pbStack_bc8);
          LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
        }
        local_bfc = DAT_00655908;
        iStack_bf8 = DAT_0065590c;
        puStack_bf4 = (undefined1 *)CONCAT22(puStack_bf4._2_2_,DAT_00655910);
        local_bdc = local_c20;
        local_bec = local_c30;
        pcStack_be8 = pcStack_c2c;
        uStack_be4 = uStack_c28;
        pbStack_be0 = pbStack_c24;
        FUN_005a47e0(this,&local_bfc,'\0','\x01',0,3);
      }
      local_bc4 = local_bc4 + 1;
    } while (local_bc4 < *(byte **)((int)this + 0x234));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
