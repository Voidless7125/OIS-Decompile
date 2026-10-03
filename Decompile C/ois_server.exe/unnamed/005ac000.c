#include "../ois_server.exe.h"


int __fastcall FUN_005ac070(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  uVar4 = param_2 & 3;
  for (iVar5 = (int)param_2 >> 2; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar2 = *param_1;
    puVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    uVar3 = param_3 + uVar2 ^ ((uint)*puVar1 ^ (param_3 + uVar2) * 0x20) << 0xb;
    param_3 = uVar3 + (uVar3 >> 0xb);
  }
  if (uVar4 == 1) {
    uVar4 = param_3 + (int)(char)*param_1;
    uVar4 = uVar4 ^ uVar4 * 0x400;
    uVar3 = uVar4 >> 1;
  }
  else if (uVar4 == 2) {
    uVar4 = param_3 + *param_1 ^ (param_3 + *param_1) * 0x800;
    uVar3 = uVar4 >> 0x11;
  }
  else {
    if (uVar4 != 3) goto LAB_005ac103;
    uVar4 = param_3 + *param_1 ^ ((int)(char)param_1[1] << 2 ^ param_3 + *param_1) << 0x10;
    uVar3 = uVar4 >> 0xb;
  }
  param_3 = uVar4 + uVar3;
LAB_005ac103:
  uVar4 = param_3 ^ param_3 * 8;
  uVar4 = uVar4 + (uVar4 >> 5);
  uVar4 = uVar4 ^ uVar4 * 0x10;
  uVar4 = uVar4 + (uVar4 >> 0x11);
  uVar4 = uVar4 ^ uVar4 * 0x2000000;
  return uVar4 + (uVar4 >> 6);
}


void FUN_005ac140(void)

{
  WSADATA local_1a0;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&local_1a0;
  DAT_0065b404 = DAT_0065b404 + 1;
  if (DAT_0065b404 == 1) {
    WSAStartup(0x202,&local_1a0);
  }
  __security_check_cookie(local_c ^ (uint)&local_1a0);
  return;
}


undefined * FUN_005ac190(void)

{
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066088c) {
    FUN_005ade89(&DAT_0066088c);
    if (DAT_0066088c == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00660874);
      _atexit((_func_4879 *)&LAB_005cc940);
      FUN_005ade3f(&DAT_0066088c);
    }
  }
  return (undefined *)&lpCriticalSection_00660874;
}


void * __cdecl FUN_005ac200(void *param_1,char *param_2)

{
  FUN_005ac4b0(param_1,param_2,&stack0x0000000c);
  return param_1;
}


void __fastcall FUN_005ac220(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c9820;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005ac670(param_1);
  ExceptionList = local_10;
  return;
}


undefined4 __thiscall FUN_005ac260(void *this,char *param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  int iVar3;
  char cVar4;
  
  if ((param_1 != (char *)0x0) && (cVar4 = *param_1, cVar4 != '\0')) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      in_EAX = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar2 - (int)(param_1 + 1)) < 0x10) {
      in_EAX = *(char **)this;
      iVar3 = 0;
      pcVar2 = *(char **)(in_EAX + 0x10);
      if (*pcVar2 == cVar4) {
        in_EAX = param_1;
        do {
          if (cVar4 == '\0') goto LAB_005ac2bf;
          cVar4 = in_EAX[1];
          in_EAX = in_EAX + 1;
          iVar3 = iVar3 + 1;
        } while (in_EAX[(int)pcVar2 - (int)param_1] == cVar4);
      }
      cVar4 = pcVar2[iVar3];
      in_EAX = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar4);
      if (((cVar4 != '\0') && (param_1[iVar3] != '\0')) && (cVar4 == '*')) {
LAB_005ac2bf:
        return CONCAT31((int3)((uint)in_EAX >> 8),1);
      }
    }
  }
  return (uint)in_EAX & 0xffffff00;
}


void FUN_005ac2e0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_0065ba58 != 0) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)**(undefined4 **)((int)DAT_0065ba54 + uVar1 * 4);
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        DeleteCriticalSection(lpCriticalSection);
        FUN_005adb3f(lpCriticalSection);
      }
      free(*(void **)((int)DAT_0065ba54 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_0065ba58);
  }
  if (DAT_0065ba5c != 0) {
    free(DAT_0065ba54);
    DAT_0065ba5c = 0;
    DAT_0065ba54 = (void *)0x0;
    DAT_0065ba58 = 0;
  }
  return;
}


void __thiscall FUN_005ac370(void *this,uint param_1)

{
  LPCRITICAL_SECTION p_Var1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *local_8;
  
  p_Var1 = (LPCRITICAL_SECTION)FUN_005ac190();
  EnterCriticalSection(p_Var1);
  if (DAT_0065ba58 == 0) {
    iVar4 = 0x80;
    do {
      puVar2 = malloc(0x84);
      local_8 = puVar2;
      p_Var1 = (LPCRITICAL_SECTION)FUN_005adb0f(0x18);
      InitializeCriticalSection(p_Var1);
      *puVar2 = p_Var1;
      FUN_005ac6e0(&local_8);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)this = *(undefined4 *)(DAT_0065ba54 + -4 + DAT_0065ba58 * 4);
  if (DAT_0065ba58 - 1 < DAT_0065ba58) {
    DAT_0065ba58 = DAT_0065ba58 - 1;
  }
  p_Var1 = (LPCRITICAL_SECTION)FUN_005ac190();
  LeaveCriticalSection(p_Var1);
  *(undefined4 *)(*(int *)this + 4) = 1;
  if (0x70 < param_1) {
    *(uint *)(*(int *)this + 8) = param_1 * 2;
    pvVar3 = malloc(*(size_t *)(*(int *)this + 8));
    *(void **)(*(int *)this + 0xc) = pvVar3;
    *(undefined4 *)(*(int *)this + 0x10) = *(undefined4 *)(*(int *)this + 0xc);
    return;
  }
  *(undefined4 *)(*(int *)this + 8) = 0x70;
  *(int *)(*(int *)this + 0x10) = *(int *)this + 0x14;
  return;
}


void __thiscall FUN_005ac460(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_005ac370(this,(uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    memcpy(*(void **)(*(int *)this + 0x10),param_1,(size_t)(pcVar2 + (1 - (int)(param_1 + 1))));
    return;
  }
  *(undefined **)this = &DAT_006550b0;
  return;
}


void __thiscall FUN_005ac4b0(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 extraout_ECX_00;
  char *pcVar4;
  char *_Memory;
  size_t _NewSize;
  char local_208 [512];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    *(undefined **)this = &DAT_006550b0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = FUN_004156f0(local_208,0x200,param_1,param_2,param_2);
  if (iVar2 != -1) {
    if (local_208[0] != '\0') {
      pcVar4 = local_208;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_005ac370(this,(uint)(pcVar4 + (1 - (int)(local_208 + 1))));
      memcpy(*(void **)(*(int *)this + 0x10),local_208,(size_t)(pcVar4 + (1 - (int)(local_208 + 1)))
            );
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *(undefined **)this = &DAT_006550b0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  _NewSize = 0x1fa0;
  pcVar4 = realloc((void *)0x0,0x1fa0);
  uVar3 = extraout_ECX;
  if (pcVar4 != (char *)0x0) {
    do {
      _Memory = pcVar4;
      iVar2 = FUN_004156f0(_Memory,_NewSize,param_1,uVar3,param_2);
      if (iVar2 != -1) goto LAB_005ac5c1;
      _NewSize = _NewSize * 2;
      pcVar4 = realloc(_Memory,_NewSize);
      uVar3 = extraout_ECX_00;
    } while (pcVar4 != (char *)0x0);
    if (_Memory != (char *)0x0) {
LAB_005ac5c1:
      FUN_005ac460(this,_Memory);
      free(_Memory);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  if (local_208[0] != '\0') {
    pcVar4 = local_208;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_005ac370(this,(uint)(pcVar4 + (1 - (int)(local_208 + 1))));
    memcpy(*(void **)(*(int *)this + 0x10),local_208,(size_t)(pcVar4 + (1 - (int)(local_208 + 1))));
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(undefined **)this = &DAT_006550b0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_005ac670(int *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  if ((undefined4 *)*param_1 != (undefined4 *)&DAT_006550b0) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)*param_1);
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
    p_Var1 = *(LPCRITICAL_SECTION *)*param_1;
    if (((undefined4 *)*param_1)[1] == 0) {
      LeaveCriticalSection(p_Var1);
      if (0x70 < *(uint *)(*param_1 + 8)) {
        free(*(void **)(*param_1 + 0xc));
      }
      p_Var1 = (LPCRITICAL_SECTION)FUN_005ac190();
      EnterCriticalSection(p_Var1);
      FUN_005ac6e0(param_1);
      p_Var1 = (LPCRITICAL_SECTION)FUN_005ac190();
    }
    LeaveCriticalSection(p_Var1);
    *param_1 = (int)&DAT_006550b0;
  }
  return;
}


void FUN_005ac6e0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_0065ba58 != DAT_0065ba5c) {
    *(undefined4 *)((int)DAT_0065ba54 + DAT_0065ba58 * 4) = *param_1;
    DAT_0065ba58 = DAT_0065ba58 + 1;
    return;
  }
  if (DAT_0065ba5c == 0) {
    DAT_0065ba5c = 0x10;
  }
  else {
    DAT_0065ba5c = DAT_0065ba5c * 2;
    if (DAT_0065ba5c == 0) {
      iVar1 = 0;
      goto LAB_005ac730;
    }
  }
  iVar1 = FUN_005ae4ea(-(uint)((int)((ulonglong)DAT_0065ba5c * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)DAT_0065ba5c * 4));
LAB_005ac730:
  if (DAT_0065ba54 != (void *)0x0) {
    uVar2 = 0;
    if (DAT_0065ba58 != 0) {
      do {
        *(undefined4 *)(iVar1 + uVar2 * 4) = *(undefined4 *)((int)DAT_0065ba54 + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_0065ba58);
    }
    free(DAT_0065ba54);
  }
  DAT_0065ba54 = (void *)iVar1;
  *(undefined4 *)(iVar1 + DAT_0065ba58 * 4) = *param_1;
  DAT_0065ba58 = DAT_0065ba58 + 1;
  return;
}


LPCRITICAL_SECTION __fastcall FUN_005ac7b0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}


void __fastcall FUN_005ac7c0(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  return;
}


void FUN_005ac7d0(void)

{
  int *this;
  int *_Dst;
  int iVar1;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  char local_21;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005cbca7;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  DAT_0065b408 = DAT_0065b408 + 1;
  if (DAT_0065b408 == 1) {
    this = (int *)FUN_005adb0f(0x18);
    *this = 0;
    this[1] = 0;
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[2] = 0;
    *this = 0;
    this[1] = 0;
    *(undefined1 *)(this + 5) = 0;
    local_14 = 1;
    local_2c = this;
    _Dst = (int *)FUN_005adb0f(0x804);
    local_28 = _Dst;
    memset(_Dst,0,0x804);
    *_Dst = 0;
    FUN_005ace80(_Dst);
    local_28 = (int *)0x0;
    iVar1 = FUN_005aca50(this,(int *)&local_28,&local_21);
    if (local_21 == '\0') {
      local_34 = 0;
      local_30 = _Dst;
      FUN_005acaf0(this,(int *)&local_28,&local_34);
      DAT_0065b40c = this;
    }
    else {
      *(int **)(*this + 4 + iVar1 * 8) = _Dst;
      DAT_0065b40c = this;
    }
  }
  ExceptionList = local_1c;
  return;
}


// WARNING: Removing unreachable block (ram,0x005ac9a7)

void FUN_005ac8f0(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = DAT_0065b40c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((0 < DAT_0065b408) && (DAT_0065b408 = DAT_0065b408 + -1, DAT_0065b408 == 0)) {
    if (DAT_0065b40c != (int *)0x0) {
      uVar3 = 0;
      if (DAT_0065b40c[1] != 0) {
        do {
          piVar1 = *(int **)(*piVar2 + 4 + uVar3 * 8);
          if (piVar1 != (int *)0x0) {
            local_8 = 0;
            FUN_005acd20(piVar1);
            local_8 = 0xffffffff;
            FUN_005adb3f(piVar1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)piVar2[1]);
      }
      *(undefined1 *)(piVar2 + 5) = 0;
      if (piVar2[2] != 0) {
        free((void *)*piVar2);
        piVar2[2] = 0;
        *piVar2 = 0;
        piVar2[1] = 0;
      }
      FUN_005adb3f(piVar2);
    }
    DAT_0065b40c = (int *)0x0;
  }
  ExceptionList = local_10;
  return;
}


// WARNING: Removing unreachable block (ram,0x005aca22)

void __fastcall FUN_005ac9f0(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 5) = 0;
  if (param_1[2] != 0) {
    free((void *)*param_1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


int __thiscall FUN_005aca50(void *this,int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    iVar5 = 0;
    iVar2 = iVar1 / 2;
    local_8 = iVar1 + -1;
    do {
      iVar4 = *(int *)(*(int *)this + iVar2 * 8);
      if (*param_1 < iVar4) {
        iVar4 = -1;
      }
      else {
        if (*param_1 == iVar4) {
          *param_2 = 1;
          return iVar2;
        }
        iVar4 = 1;
      }
      iVar3 = iVar2 + -1;
      if (-1 < iVar4) {
        iVar3 = local_8;
        iVar5 = iVar2 + 1;
      }
      iVar2 = (iVar3 - iVar5) / 2 + iVar5;
      if (iVar3 < iVar5) {
        *param_2 = 0;
        return iVar5;
      }
    } while ((-1 < iVar2) && (local_8 = iVar3, iVar2 < iVar1));
  }
  *param_2 = 0;
  return 0;
}


uint __thiscall FUN_005acaf0(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *_Memory;
  uint uVar7;
  char local_5;
  
  uVar4 = FUN_005aca50(this,param_1,&local_5);
  if (local_5 != '\0') {
    return 0xffffffff;
  }
  uVar7 = *(uint *)((int)this + 4);
  uVar5 = *(uint *)((int)this + 8);
  if (uVar4 < uVar7) {
    if (uVar7 != uVar5) {
      iVar6 = *(int *)this;
      goto LAB_005acc4e;
    }
    if (uVar5 == 0) {
      *(undefined4 *)((int)this + 8) = 0x10;
      uVar5 = 0x10;
LAB_005acbe2:
      iVar6 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar5 * 8));
      uVar7 = *(uint *)((int)this + 4);
    }
    else {
      uVar5 = uVar5 * 2;
      *(uint *)((int)this + 8) = uVar5;
      if (uVar5 != 0) goto LAB_005acbe2;
      iVar6 = 0;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        iVar3 = *(int *)this;
        iVar2 = uVar5 * 8;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar2 + iVar6) = *(undefined4 *)(iVar3 + iVar2);
        *(undefined4 *)(iVar2 + 4 + iVar6) = *(undefined4 *)(iVar3 + 4 + iVar2);
      } while (uVar5 < *(uint *)((int)this + 4));
    }
    free(*(void **)this);
    uVar7 = *(uint *)((int)this + 4);
    *(int *)this = iVar6;
LAB_005acc4e:
    if (uVar7 != uVar4) {
      do {
        puVar1 = (undefined4 *)(*(int *)this + uVar7 * 8);
        uVar7 = uVar7 - 1;
        *puVar1 = puVar1[-2];
        puVar1[1] = puVar1[-1];
      } while (uVar7 != uVar4);
      iVar6 = *(int *)this;
    }
    *(undefined4 *)(iVar6 + uVar4 * 8) = *param_2;
    *(undefined4 *)(iVar6 + 4 + uVar4 * 8) = param_2[1];
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    return uVar4;
  }
  if (uVar7 != uVar5) {
    iVar6 = *(int *)this;
    goto LAB_005acba9;
  }
  if (uVar5 == 0) {
    *(undefined4 *)((int)this + 8) = 0x10;
    uVar5 = 0x10;
LAB_005acb40:
    iVar6 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar5 * 8));
    uVar7 = *(uint *)((int)this + 4);
  }
  else {
    uVar5 = uVar5 * 2;
    *(uint *)((int)this + 8) = uVar5;
    if (uVar5 != 0) goto LAB_005acb40;
    iVar6 = 0;
  }
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    uVar4 = 0;
    if (uVar7 != 0) {
      do {
        iVar3 = *(int *)this;
        iVar2 = uVar4 * 8;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar2 + iVar6) = *(undefined4 *)(iVar3 + iVar2);
        *(undefined4 *)(iVar2 + 4 + iVar6) = *(undefined4 *)(iVar3 + 4 + iVar2);
      } while (uVar4 < *(uint *)((int)this + 4));
      _Memory = *(void **)this;
    }
    free(_Memory);
  }
  *(int *)this = iVar6;
LAB_005acba9:
  puVar1 = (undefined4 *)(iVar6 + *(int *)((int)this + 4) * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)((int)this + 4) = uVar4 + 1;
  return uVar4;
}


void FUN_005acc90(void)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_0065b410;
  if ((0 < DAT_0065b414) && (DAT_0065b414 = DAT_0065b414 + -1, DAT_0065b414 == 0)) {
    if (DAT_0065b410 != (int *)0x0) {
      uVar2 = 0;
      if (DAT_0065b410[1] != 0) {
        do {
          if (*(char *)(*piVar1 + 4 + uVar2 * 8) != '\0') {
            free(*(void **)(*piVar1 + uVar2 * 8));
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)piVar1[1]);
      }
      if (piVar1[2] != 0) {
        free((void *)*piVar1);
        piVar1[2] = 0;
        *piVar1 = 0;
        piVar1[1] = 0;
      }
      FUN_005adb3f(piVar1);
    }
    DAT_0065b410 = (int *)0x0;
  }
  return;
}


void __fastcall FUN_005acd20(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  void *local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005cbcd8;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  puVar1 = &stack0xfffffffc;
  if (*param_1 != 0) {
    uStack_28 = 0;
    local_34 = (void *)0x0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_14 = 0;
    FUN_0059bac0(&local_34,param_1);
    uVar3 = uStack_30;
    while( true ) {
      if (uStack_2c < uVar3) {
        iVar2 = (uStack_2c - uVar3) + uStack_28;
      }
      else {
        iVar2 = uStack_2c - uVar3;
      }
      if (iVar2 == 0) break;
      uStack_30 = uVar3 + 1;
      if (uStack_30 == uStack_28) {
        uStack_30 = 0;
        pvVar5 = *(void **)((int)local_34 + uStack_28 * 4 + -4);
      }
      else if (uStack_30 == 0) {
        pvVar5 = *(void **)((int)local_34 + uStack_28 * 4 + -4);
      }
      else {
        pvVar5 = *(void **)((int)local_34 + uStack_30 * 4 + -4);
      }
      if (*(int *)((int)pvVar5 + 8) != 0) {
        FUN_0059bac0(&local_34,(undefined4 *)((int)pvVar5 + 8));
      }
      if (*(int *)((int)pvVar5 + 0xc) != 0) {
        FUN_0059bac0(&local_34,(undefined4 *)((int)pvVar5 + 0xc));
      }
      uVar3 = uStack_30;
      FUN_005adb3f(pvVar5);
    }
    iVar2 = 0x100;
    piVar4 = param_1 + 1;
    do {
      free((void *)*piVar4);
      piVar4 = piVar4 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *param_1 = 0;
    puVar1 = puStack_20;
    if (uStack_28 != 0) {
      free(local_34);
      puVar1 = puStack_20;
    }
  }
  puStack_20 = puVar1;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_005ace80(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  void *_Dst;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  ushort *puVar10;
  char *pcVar11;
  int aiStack_650 [256];
  char local_250 [260];
  int *local_14c;
  ushort *local_148;
  int local_144;
  uint local_140;
  uint local_13c;
  undefined4 local_138;
  undefined1 *local_134;
  char local_130;
  undefined1 local_12f [267];
  int local_24;
  int *piStack_20;
  int *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cbd08;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = (int *)0x0;
  _local_24 = 0;
  local_8 = 0;
  local_14c = param_1;
  FUN_005acd20(param_1);
  iVar8 = 0;
  do {
    puVar3 = (undefined1 *)FUN_005adb0f(0x14);
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    *puVar3 = (char)iVar8;
    iVar4 = (&DAT_00655138)[iVar8];
    *(int *)(puVar3 + 4) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(puVar3 + 4) = 1;
    }
    aiStack_650[iVar8] = (int)puVar3;
    FUN_005ad240((int)puVar3,&local_24);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x100);
  while( true ) {
    iVar8 = local_24;
    if (piStack_20 != (int *)0x0) {
      local_1c = piStack_20;
    }
    local_144 = *local_1c;
    piVar7 = local_1c;
    piVar9 = piStack_20;
    if (local_24 != 0) {
      if (local_24 == 1) {
        FUN_005adb3f(piStack_20);
        piVar9 = (int *)0x0;
        piVar7 = (int *)0x0;
        _local_24 = 0;
        iVar8 = 0;
      }
      else {
        *(int *)(local_1c[1] + 8) = local_1c[2];
        *(int *)(local_1c[2] + 4) = local_1c[1];
        piVar7 = (int *)local_1c[2];
        if (local_1c == piStack_20) {
          piVar9 = piVar7;
        }
        _local_24 = CONCAT44(piVar9,local_24);
        FUN_005adb3f(local_1c);
        iVar8 = iVar8 + -1;
      }
      _local_24 = CONCAT44(piStack_20,iVar8);
    }
    puVar10 = (ushort *)*piVar7;
    local_148 = puVar10;
    local_1c = piVar7;
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        FUN_005adb3f(piVar9);
        local_1c = (int *)0x0;
        _local_24 = 0;
        iVar8 = 0;
      }
      else {
        *(int *)(piVar7[1] + 8) = piVar7[2];
        *(int *)(piVar7[2] + 4) = piVar7[1];
        piVar2 = (int *)piVar7[2];
        if (piVar7 == piVar9) {
          piVar9 = piVar2;
        }
        _local_24 = CONCAT44(piVar9,local_24);
        FUN_005adb3f(piVar7);
        iVar8 = iVar8 + -1;
        puVar10 = local_148;
        local_1c = piVar2;
      }
      _local_24 = CONCAT44(piStack_20,iVar8);
    }
    iVar4 = FUN_005adb0f(0x14);
    piVar7 = local_14c;
    *(int *)(iVar4 + 8) = local_144;
    *(ushort **)(iVar4 + 0xc) = puVar10;
    *(int *)(iVar4 + 4) = *(int *)((int)puVar10 + 4) + *(int *)(local_144 + 4);
    *(int *)(local_144 + 0x10) = iVar4;
    *(int *)((int)puVar10 + 0x10) = iVar4;
    if (iVar8 == 0) break;
    FUN_005ad240(iVar4,&local_24);
  }
  *local_14c = iVar4;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  memset(local_12f,0,0x103);
  local_13c = 0x800;
  local_134 = local_12f;
  local_140 = 0;
  local_138 = 0;
  local_130 = '\x01';
  local_144 = 0;
  local_148 = (ushort *)(piVar7 + 2);
  do {
    local_138 = 0;
    local_140 = 0;
    uVar6 = 0;
    uVar5 = 0;
    iVar8 = aiStack_650[local_144];
    do {
      iVar4 = *(int *)(iVar8 + 0x10);
      if (*(int *)(iVar4 + 8) == iVar8) {
        if (0xff < uVar5) {
                    // WARNING: Subroutine does not return
          ___report_rangecheckfailure();
        }
        local_250[uVar5] = '\0';
      }
      else {
        local_250[uVar5] = '\x01';
      }
      uVar1 = uVar5 + 1;
      uVar5 = uVar1 & 0xffff;
      iVar8 = iVar4;
    } while (iVar4 != *piVar7);
    if ((short)uVar1 != 0) {
      pcVar11 = local_250 + uVar5;
      do {
        uVar5 = uVar5 + 0xffff;
        pcVar11 = pcVar11 + -1;
        FUN_005ab5d0(&local_140,1);
        if (*pcVar11 == '\0') {
          if ((local_140 & 7) == 0) {
            local_134[local_140 >> 3] = 0;
          }
        }
        else if ((local_140 & 7) == 0) {
          local_134[local_140 >> 3] = 0x80;
        }
        else {
          local_134[local_140 >> 3] =
               local_134[local_140 >> 3] | (byte)(0x80 >> (sbyte)(local_140 & 7));
        }
        uVar6 = local_140 + 1;
        piVar7 = local_14c;
        local_140 = uVar6;
      } while ((short)uVar5 != 0);
    }
    _Dst = malloc(uVar6 + 7 >> 3);
    puVar10 = local_148;
    *(void **)(local_148 + -2) = _Dst;
    memcpy(_Dst,local_134,local_140 + 7 >> 3);
    local_144 = local_144 + 1;
    *puVar10 = (ushort)(byte)local_140;
    local_140 = 0;
    local_138 = 0;
    local_148 = puVar10 + 4;
  } while (local_144 < 0x100);
  if ((local_130 != '\0') && (0x800 < local_13c)) {
    free(local_134);
  }
  FUN_005ad440(&local_24);
  FUN_005ad440(&local_24);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_005ad240(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = param_2;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    piVar3 = (int *)param_2[1];
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)param_2[2];
    }
    else {
      param_2[2] = (int)piVar3;
    }
    iVar4 = 0;
    iVar5 = param_2[1];
    if (*(uint *)(*piVar3 + 4) < *(uint *)(param_1 + 4)) {
      do {
        if ((iVar1 != 0) && (piVar3[2] != iVar5)) {
          param_2[2] = piVar3[2];
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == iVar1) {
          if (iVar5 != 0) {
            param_2[2] = *(int *)(iVar5 + 4);
          }
          piVar3 = (int *)FUN_005adb0f(0xc);
          if (iVar1 == 0) {
            piVar2[1] = (int)piVar3;
            *piVar3 = param_1;
            *(int *)(piVar2[1] + 8) = piVar2[1];
            *(int *)(piVar2[1] + 4) = piVar2[1];
            *piVar2 = 1;
            piVar2[2] = piVar2[1];
            return;
          }
          if (iVar1 == 1) {
            piVar2[2] = (int)piVar3;
            *(int **)(piVar2[1] + 8) = piVar3;
            *(int *)(piVar2[1] + 4) = piVar2[2];
            *(int *)(piVar2[2] + 4) = piVar2[1];
            *(int *)(piVar2[2] + 8) = piVar2[1];
            *(int *)piVar2[2] = param_1;
            *piVar2 = 2;
            piVar2[2] = piVar2[1];
            return;
          }
          *piVar3 = param_1;
          piVar3[1] = piVar2[2];
          piVar3[2] = *(int *)(piVar2[2] + 8);
          *(int **)(*(int *)(piVar2[2] + 8) + 4) = piVar3;
          *(int **)(piVar2[2] + 8) = piVar3;
          *piVar2 = *piVar2 + 1;
          return;
        }
        piVar3 = (int *)param_2[2];
        iVar5 = param_2[1];
      } while (*(uint *)(*piVar3 + 4) < *(uint *)(param_1 + 4));
    }
  }
  FUN_005ad370(param_2,&param_1);
  return;
}


void __fastcall FUN_005ad360(int *param_1)

{
  FUN_005ad440(param_1);
  FUN_005ad440(param_1);
  return;
}


void __thiscall FUN_005ad370(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)this;
  puVar2 = (undefined4 *)FUN_005adb0f(0xc);
  if (iVar1 == 0) {
    *(undefined4 **)((int)this + 4) = puVar2;
    *puVar2 = *param_1;
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)this = 1;
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
    return;
  }
  if (iVar1 == 1) {
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)(*(int *)((int)this + 4) + 8) = puVar2;
    *(undefined4 *)(*(int *)((int)this + 4) + 4) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)(*(int *)((int)this + 8) + 4) = *(undefined4 *)((int)this + 4);
    *(undefined4 *)(*(int *)((int)this + 8) + 8) = *(undefined4 *)((int)this + 4);
    **(undefined4 **)((int)this + 8) = *param_1;
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)this = 2;
    return;
  }
  *puVar2 = *param_1;
  *(undefined4 **)(*(int *)(*(int *)((int)this + 8) + 4) + 8) = puVar2;
  puVar2[1] = *(undefined4 *)(*(int *)((int)this + 8) + 4);
  *(undefined4 **)(*(int *)((int)this + 8) + 4) = puVar2;
  puVar2[2] = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *(int *)this = *(int *)this + 1;
  return;
}


void __fastcall FUN_005ad440(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*param_1 != 0) {
    pvVar2 = (void *)param_1[1];
    if (*param_1 == 1) {
      FUN_005adb3f((void *)param_1[1]);
    }
    else {
      do {
        pvVar1 = *(void **)((int)pvVar2 + 8);
        FUN_005adb3f(pvVar2);
        pvVar2 = pvVar1;
      } while (pvVar1 != (void *)param_1[1]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


void __cdecl FUN_005adb0f(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_14 [2];
  undefined4 uStack_c;
  
  do {
    uStack_c = 0x5adb29;
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    uStack_c = 0x5adb1c;
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    FUN_005ae80e();
    return;
  }
  FUN_005ae78c(local_14);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_14,(ThrowInfo *)&pThrowInfo_0064d258);
}


void __cdecl FUN_005adb3f(void *param_1)

{
  free(param_1);
  return;
}


void __cdecl FUN_005adb4d(void *param_1)

{
  free(param_1);
  return;
}


void FUN_005adbd0(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  uint unaff_EDI;
  
  if (in_AL == '\0') {
    __ArrayUnwind(unaff_ESI,unaff_EBX,unaff_EDI,*(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


undefined4 * __thiscall FUN_005adc59(void *this,byte param_1)

{
  *(undefined ***)this = type_info::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void FUN_005adc7c(size_t param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cbd30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_005adb0f(param_1);
  FUN_005adcbc();
  return;
}


void FUN_005adcbc(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


void FUN_005addff(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
  if (hHandle_0065b020 != (HANDLE)0x0) {
    CloseHandle(hHandle_0065b020);
  }
  return;
}


void FUN_005ade3f(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
  DAT_00655000 = DAT_00655000 + 1;
  *param_1 = DAT_00655000;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_00655000;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
  __Init_thread_notify();
  return;
}


void __cdecl FUN_005ade89(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_005aded0:
      LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = DAT_00655000;
      goto LAB_005aded0;
    }
    __Init_thread_wait(100);
  } while( true );
}


void FUN_005ae457(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (in_AL == '\0') {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),unaff_EBX,
                  *(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


void FUN_005ae4d1(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  
  if (in_AL == '\0') {
    __ArrayUnwind(*(void **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0x10),unaff_EBX,
                  *(_func_void_void_ptr **)(unaff_EBP + 0x1c));
  }
  return;
}


void __cdecl FUN_005ae4ea(size_t param_1)

{
  FUN_005adb0f(param_1);
  return;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4

int FUN_005ae5b8(void)

{
  code *pcVar1;
  bool bVar2;
  WORD WVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_14;
  
  uVar4 = ___scrt_initialize_crt(1);
  if ((char)uVar4 != '\0') {
    bVar2 = false;
    uVar4 = ___scrt_acquire_startup_lock();
    if (DAT_0065b02c != 1) {
      if (DAT_0065b02c == 0) {
        DAT_0065b02c = 1;
        iVar5 = initterm_e(&DAT_005cda30,&DAT_005cda40);
        if (iVar5 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_005cd95c,&DAT_005cda2c);
        DAT_0065b02c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar4);
      piVar6 = (int *)FUN_005aed6a();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        pcVar1 = (code *)*piVar6;
        uVar9 = 0;
        uVar8 = 2;
        uVar4 = 0;
        guard_check_icall();
        (*pcVar1)(uVar4,uVar8,uVar9);
      }
      piVar6 = (int *)FUN_005aed70();
      if ((*piVar6 != 0) &&
         (uVar4 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar4 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar6);
      }
      WVar3 = ___scrt_get_show_window_mode();
      get_narrow_winmain_command_line(WVar3);
      iVar5 = FUN_005957a0();
      uVar7 = FUN_005aea31();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return iVar5;
      }
                    // WARNING: Subroutine does not return
      exit(iVar5);
    }
  }
                    // WARNING: Subroutine does not return
  ___scrt_fastfail();
}


exception * __thiscall FUN_005ae73e(void *this,exception *param_1)

{
  std::exception::exception(this,param_1);
  *(undefined ***)this = std::bad_alloc::vftable;
  return this;
}


undefined4 * __fastcall FUN_005ae759(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}


exception * __thiscall FUN_005ae771(void *this,exception *param_1)

{
  std::exception::exception(this,param_1);
  *(undefined ***)this = std::bad_array_new_length::vftable;
  return this;
}


undefined4 * __fastcall FUN_005ae78c(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}


undefined4 * __thiscall FUN_005ae7e1(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  __std_exception_destroy((int)this + 4);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void FUN_005ae80e(void)

{
  undefined4 local_10 [3];
  
  FUN_005ae759(local_10);
                    // WARNING: Subroutine does not return
  _CxxThrowException(local_10,(ThrowInfo *)&pThrowInfo_0064d204);
}


char * __fastcall FUN_005ae848(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 4);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}


void __cdecl
FUN_005ae8bb(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0065500c,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}


undefined4 thunk_FUN_005aea2e(void)

{
  return 0;
}


undefined4 FUN_005aea2e(void)

{
  return 0;
}


uint FUN_005aea31(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && ((short)pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     (((pHVar1 = (HMODULE)0x10b, (short)piVar2[6] == 0x10b && (0xe < (uint)piVar2[0x1d])) &&
      (piVar2[0x3a] != 0)))) {
    return 0x101;
  }
  return (uint)pHVar1 & 0xffffff00;
}


void FUN_005aea74(void)

{
  SetUnhandledExceptionFilter(lpTopLevelExceptionFilter_005aea80);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_005aeac1(void)

{
  _DAT_0065b36c = 0;
  return;
}


undefined4 FUN_005aec60(void)

{
  return 1;
}


undefined4 FUN_005aed08(void)

{
  return 0x4000;
}


void FUN_005aed0e(void)

{
  InitializeSListHead((PSLIST_HEADER)&ListHead_0065b380);
  return;
}


void FUN_005aed1a(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___scrt_fastfail();
}


undefined * FUN_005aed3b(void)

{
  return &DAT_0065b388;
}


void FUN_005aed41(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_004156e0();
  *puVar1 = *puVar1 | 4;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_005aed3b();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}


bool FUN_005aed5e(void)

{
  return DAT_00655014 == 0;
}


undefined * FUN_005aed6a(void)

{
  return &DAT_00660894;
}


undefined * FUN_005aed70(void)

{
  return &DAT_00660890;
}


// WARNING: Removing unreachable block (ram,0x005aed86)
// WARNING: Removing unreachable block (ram,0x005aed87)
// WARNING: Removing unreachable block (ram,0x005aed8d)
// WARNING: Removing unreachable block (ram,0x005aed97)
// WARNING: Removing unreachable block (ram,0x005aed9e)

void FUN_005aed76(void)

{
  return;
}


// WARNING: Removing unreachable block (ram,0x005aedb2)
// WARNING: Removing unreachable block (ram,0x005aedb3)
// WARNING: Removing unreachable block (ram,0x005aedb9)
// WARNING: Removing unreachable block (ram,0x005aedc3)
// WARNING: Removing unreachable block (ram,0x005aedca)

void FUN_005aeda2(void)

{
  return;
}


void __fastcall FUN_005af1ed(undefined4 param_1,int param_2)

{
  byte in_FPUControlWord;
  
  if ((param_2 == 8) || ((*(byte *)((int)&DAT_0062f418 + param_2 + 7) & in_FPUControlWord) == 0)) {
    except1(param_2,0);
  }
  return;
}


// WARNING: Removing unreachable block (ram,0x005af093)
// WARNING: Removing unreachable block (ram,0x005af2a3)
// WARNING: Removing unreachable block (ram,0x005af098)
// WARNING: Removing unreachable block (ram,0x005af0a6)
// WARNING: Removing unreachable block (ram,0x005af0b0)
// WARNING: Removing unreachable block (ram,0x005af0ba)
// WARNING: Removing unreachable block (ram,0x005af0cc)
// WARNING: Removing unreachable block (ram,0x005af0df)
// WARNING: Removing unreachable block (ram,0x005af0ed)
// WARNING: Removing unreachable block (ram,0x005af0f7)
// WARNING: Removing unreachable block (ram,0x005af107)

ulonglong FUN_005af240(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  int iVar2;
  double dVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  
  iVar1 = 4;
  dVar3 = 1.8446744073709552e+19;
  if (((uint)((ulonglong)in_XMM0_Qa >> 0x20) & 0x7fffffff) < 0x7ff00000) {
    auVar5._0_8_ = ABS(in_XMM0_Qa);
    auVar5._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    if (3.4028235677973366e+38 < auVar5._0_8_) {
      FUN_005af1ed(4,0x10);
      FUN_005af1ed(extraout_ECX,1);
      iVar1 = extraout_ECX_00;
    }
    if (1.1754943157898259e-38 <= auVar5._0_8_) {
      dVar7 = in_XMM0_Qa;
      if ((iVar1 == 4) && (9.223372036854776e+18 <= in_XMM0_Qa)) {
        dVar7 = in_XMM0_Qa - 9.223372036854776e+18;
      }
      if ((int)((ulonglong)((longlong)dVar7 << 0x23) >> 0x20) != 0) {
        FUN_005af1ed(iVar1,0x10);
        iVar1 = extraout_ECX_03;
      }
      if ((dVar3 <= in_XMM0_Qa) || (in_XMM0_Qa < -9.223372036854776e+18)) goto LAB_005af1db;
    }
    else if (auVar5._0_8_ != 0.0) {
      FUN_005af1ed(iVar1,2);
      FUN_005af1ed(extraout_ECX_01,0x10);
      iVar1 = extraout_ECX_02;
    }
    uVar4 = 0;
    dVar3 = auVar5._0_8_;
    if (dVar3 != 0.0) {
      auVar6 = auVar5 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
      lVar8 = SUB168(ZEXT416(0x433),0) - ((ulonglong)dVar3 >> 0x34);
      uVar9 = auVar6._0_8_ >> lVar8;
      iVar2 = -(uint)(0x433 < auVar5._4_4_ >> 0x14);
      uVar4 = CONCAT44(iVar2,iVar2);
      uVar4 = ~uVar4 & uVar9 |
              auVar6._0_8_ << ((ulonglong)dVar3 >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar4;
      uVar4 = ~-(ulonglong)(in_XMM0_Qa == dVar3) & -uVar4 |
              uVar4 & -(ulonglong)(in_XMM0_Qa == dVar3);
      if ((0 < (int)lVar8) &&
         (auVar10._0_8_ = uVar9 << lVar8, auVar10._8_8_ = (auVar6._8_8_ >> lVar8) << lVar8,
         SUB164(auVar6 ^ auVar10,0) != 0 || SUB164(auVar6 ^ auVar10,4) != 0)) {
        FUN_005af1ed(iVar1,0x10);
      }
    }
    return uVar4;
  }
LAB_005af1db:
  FUN_005af1ed(iVar1,8);
  return 0x8000000000000000;
}


void FUN_005af360(void)

{
  return;
}


ulonglong __fastcall FUN_005af3d0(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint local_20;
  float fStack_1c;
  
  if (DAT_0065b374 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    local_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((local_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


void thunk_FUN_005ac2e0(void)

{
  FUN_005ac2e0();
  return;
}
