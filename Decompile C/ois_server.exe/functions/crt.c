#include "../ois_server.exe.h"


// _StartAddress parameter of _beginthreadex
// 

void _StartAddress_005a9c80(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 local_128;
  uint local_124;
  undefined4 local_120;
  void *local_11c;
  char local_118;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cbbeb;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  memset(&local_128,0,0x114);
  local_128 = 0;
  local_120 = 0;
  local_11c = malloc(0x5d4);
  local_124 = 0x2ea0;
  local_118 = '\x01';
  local_8 = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  cVar1 = (char)param_1[2];
  while (cVar1 == '\0') {
    if ((code *)param_1[0x158] != (code *)0x0) {
      (*(code *)param_1[0x158])(param_1,param_1[0x159],uVar2);
    }
    (**(code **)(*param_1 + 0x154))(&local_128);
    WaitForSingleObjectEx((HANDLE)param_1[0x15a],10,0);
    cVar1 = (char)param_1[2];
  }
  *(undefined1 *)((int)param_1 + 9) = 0;
  if ((local_118 != '\0') && (0x800 < local_124)) {
    free(local_11c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// _StartAddress parameter of _beginthreadex
// 

void _StartAddress_005abca0(int param_1)

{
  char cVar1;
  u_short uVar2;
  char *buf;
  int iVar3;
  undefined8 uVar4;
  int *local_38;
  int iStack_34;
  sockaddr sStack_30;
  uint local_14;
  
  local_14 = DAT_0065500c ^ (uint)&local_38;
  local_38 = (int *)(param_1 + 0x58);
  LOCK();
  *local_38 = *local_38 + 1;
  UNLOCK();
  cVar1 = *(char *)(param_1 + 0x5c);
  do {
    if (cVar1 != '\0') {
      LOCK();
      *local_38 = *local_38 + -1;
      UNLOCK();
      __security_check_cookie(local_14 ^ (uint)&local_38);
      return;
    }
    buf = (char *)(**(code **)(**(int **)(param_1 + 0x50) + 0xc))
                            ("f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x161);
    if (buf != (char *)0x0) {
      *(int *)(buf + 0x5f8) = param_1;
      iStack_34 = 0x10;
      sStack_30.sa_data[2] = '\0';
      sStack_30.sa_data[3] = '\0';
      sStack_30.sa_data[4] = '\0';
      sStack_30.sa_data[5] = '\0';
      sStack_30.sa_data[6] = '\0';
      sStack_30.sa_data[7] = '\0';
      sStack_30.sa_data[8] = '\0';
      sStack_30.sa_data[9] = '\0';
      sStack_30.sa_data[10] = '\0';
      sStack_30.sa_data[0xb] = '\0';
      sStack_30.sa_data[0xc] = '\0';
      sStack_30.sa_data[0xd] = '\0';
      sStack_30.sa_family = 2;
      sStack_30.sa_data[0] = '\0';
      sStack_30.sa_data[1] = '\0';
      iVar3 = recvfrom(*(SOCKET *)(param_1 + 0x24),buf,0x5d4,0,&sStack_30,&iStack_34);
      *(int *)(buf + 0x5d4) = iVar3;
      if (0 < iVar3) {
        uVar4 = FUN_005ab130();
        *(undefined8 *)(buf + 0x5f0) = uVar4;
        *(undefined2 *)(buf + 0x5da) = sStack_30.sa_data._0_2_;
        uVar2 = ntohs(sStack_30.sa_data._0_2_);
        *(u_short *)(buf + 0x5e8) = uVar2;
        *(uint *)(buf + 0x5dc) = CONCAT22(sStack_30.sa_data._4_2_,sStack_30.sa_data._2_2_);
        if (0 < *(int *)(buf + 0x5d4)) {
          (**(code **)(**(int **)(param_1 + 0x50) + 4))(buf);
          goto LAB_005abd98;
        }
      }
      Sleep(0);
      (**(code **)(**(int **)(param_1 + 0x50) + 8))
                (buf,"f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x16f);
    }
LAB_005abd98:
    cVar1 = *(char *)(param_1 + 0x5c);
  } while( true );
}


// Library Function - Single Match
//  @__security_check_cookie@4
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release
// __fastcall __security_check_cookie,4

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == DAT_0065500c) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___report_gsfailure();
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  void __stdcall `eh vector destructor iterator'(void *,unsigned int,unsigned int,void
// (__thiscall*)(void *))
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  undefined4 local_14;
  
  while( true ) {
    if (param_3 == 0) break;
    guard_check_icall();
    (*param_4)(in_stack_ffffffd0);
    param_3 = param_3 - 1;
  }
  FUN_005adbd0();
  ExceptionList = local_14;
  return;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  void __stdcall __ArrayUnwind(void *,unsigned int,unsigned int,void (__thiscall*)(void *))
// 
// Library: Visual Studio 2017 Release

void __ArrayUnwind(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  uint uVar1;
  void *in_stack_ffffffc4;
  undefined4 local_14;
  
  uVar1 = 0;
  while( true ) {
    if (uVar1 == param_3) break;
    guard_check_icall();
    (*param_4)(in_stack_ffffffc4);
    uVar1 = uVar1 + 1;
  }
  ExceptionList = local_14;
  return;
}


// Library Function - Multiple Matches With Same Base Name
//  int (__stdcall*__cdecl __crt_fast_encode_pointer<int (__stdcall*)(struct _RTL_CONDITION_VARIABLE
// *,struct _RTL_CRITICAL_SECTION *,unsigned long)>(int (__stdcall*const)(struct
// _RTL_CONDITION_VARIABLE *,struct _RTL_CRITICAL_SECTION *,unsigned long)))(struct
// _RTL_CONDITION_VARIABLE *,struct _RTL_CRITICAL_SECTION *,unsigned long)
//  void (__stdcall*__cdecl __crt_fast_encode_pointer<void (__stdcall*)(struct
// _RTL_CONDITION_VARIABLE *)>(void (__stdcall*const)(struct _RTL_CONDITION_VARIABLE *)))(struct
// _RTL_CONDITION_VARIABLE *)
// 
// Library: Visual Studio 2017 Release

uint __cdecl __crt_fast_encode_pointer<>(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0065500c & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_0065500c;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  void __cdecl __scrt_initialize_thread_safe_statics_platform_specific(void)
// 
// Library: Visual Studio 2017 Release

void __cdecl __scrt_initialize_thread_safe_statics_platform_specific(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  undefined *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c84a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&lpCriticalSection_0065b004,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if (hModule == (HMODULE)0x0) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_005addf7;
  }
  pFVar1 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar2 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar3 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if (((pFVar1 == (FARPROC)0x0) || (pFVar2 == (FARPROC)0x0)) || (pFVar3 == (FARPROC)0x0)) {
    hHandle_0065b020 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (hHandle_0065b020 == (HANDLE)0x0) {
LAB_005addf7:
                    // WARNING: Subroutine does not return
      ___scrt_fastfail();
    }
  }
  else {
    hHandle_0065b020 = (HANDLE)0x0;
    puVar4 = &DAT_0065b01c;
    guard_check_icall();
    (*pFVar1)(puVar4);
    _DAT_0065b024 = __crt_fast_encode_pointer<>((uint)pFVar2);
    _DAT_0065b028 = __crt_fast_encode_pointer<>((uint)pFVar3);
  }
  ExceptionList = local_10;
  return;
}


// Library Function - Single Match
//  __Init_thread_abort
// 
// Library: Visual Studio 2017 Release

void __Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
  __Init_thread_notify();
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __Init_thread_notify
// 
// Library: Visual Studio 2017 Release

void __Init_thread_notify(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (hHandle_0065b020 == (HANDLE)0x0) {
    uVar2 = DAT_0065500c ^ _DAT_0065b028;
    bVar1 = (byte)DAT_0065500c & 0x1f;
    puVar3 = &DAT_0065b01c;
    guard_check_icall();
    (*(code *)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))(puVar3);
    return;
  }
  SetEvent(hHandle_0065b020);
  ResetEvent(hHandle_0065b020);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __Init_thread_wait
// 
// Library: Visual Studio 2017 Release

void __cdecl __Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  LPCRITICAL_SECTION *pp_Var4;
  
  if (hHandle_0065b020 == (HANDLE)0x0) {
    uVar2 = DAT_0065500c ^ _DAT_0065b024;
    bVar1 = (byte)DAT_0065500c & 0x1f;
    pp_Var4 = &lpCriticalSection_0065b004;
    puVar3 = &DAT_0065b01c;
    guard_check_icall();
    (*(code *)(uVar2 >> bVar1 | uVar2 << 0x20 - bVar1))(puVar3,pp_Var4,param_1);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
    WaitForSingleObjectEx(hHandle_0065b020,param_1,0);
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065b004);
  }
  return;
}


// Library Function - Single Match
//  ___scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 ___scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    while( true ) {
      pvVar3 = (void *)0x0;
      LOCK();
      pvVar1 = StackBase;
      if (DAT_0065b030 != (void *)0x0) {
        pvVar3 = DAT_0065b030;
        pvVar1 = DAT_0065b030;
      }
      DAT_0065b030 = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return 0;
}


// Library Function - Single Match
//  ___scrt_initialize_crt
// 
// Library: Visual Studio 2017 Release

int __cdecl ___scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint3 extraout_var;
  uint3 uVar2;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_0065b034 = 1;
  }
  ___isa_available_init();
  cVar1 = FUN_004e1a00();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_004e1a00();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_004e1a00();
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}


// Library Function - Single Match
//  ___scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2017 Release

undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  
  if (DAT_0065b035 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    // WARNING: Subroutine does not return
    ___scrt_fastfail();
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar2) == 0) || (param_1 != 0)) {
    bVar1 = 0x20 - ((byte)DAT_0065500c & 0x1f) & 0x1f;
    uVar4 = (0xffffffffU >> bVar1 | -1 << 0x20 - bVar1) ^ DAT_0065500c;
    DAT_0065b038 = uVar4;
    DAT_0065b03c = uVar4;
    DAT_0065b040 = uVar4;
    DAT_0065b044 = uVar4;
    DAT_0065b048 = uVar4;
    DAT_0065b04c = uVar4;
LAB_005ae0bf:
    DAT_0065b035 = '\x01';
    uVar3 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    uVar3 = initialize_onexit_table(&DAT_0065b038);
    if (uVar3 == 0) {
      uVar3 = initialize_onexit_table(&DAT_0065b044);
      uVar4 = 0;
      if (uVar3 == 0) goto LAB_005ae0bf;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  ___scrt_is_nonwritable_in_current_image
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  uint uVar2;
  void *local_14;
  
  p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000);
  if ((p_Var1 == (_IMAGE_SECTION_HEADER *)0x0) || (*(int *)(p_Var1 + 0x24) < 0)) {
    uVar2 = (uint)p_Var1 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)p_Var1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar2;
}


// Library Function - Single Match
//  ___scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_0065b030;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_0065b030 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}


// Library Function - Single Match
//  ___scrt_uninitialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined1 __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  if ((DAT_0065b034 == '\0') || (param_2 == '\0')) {
    FUN_004e1a00();
    FUN_004e1a00();
  }
  return 1;
}


// Library Function - Single Match
//  __onexit
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)DAT_0065500c & 0x1f;
  if (((DAT_0065500c ^ DAT_0065b038) >> bVar2 | (DAT_0065500c ^ DAT_0065b038) << 0x20 - bVar2) ==
      0xffffffff) {
    iVar1 = crt_atexit();
  }
  else {
    iVar1 = register_onexit_function(&DAT_0065b038,_Func);
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}


// Library Function - Single Match
//  _atexit
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


// Library Function - Single Match
//  ___raise_securityfailure
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_gsfailure
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___report_gsfailure(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_0065b148 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_0065b150 = (undefined4)lVar9;
  _DAT_0065b160 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0065b164 = &stack0x00000004;
  _DAT_0065b0a0 = 0x10001;
  _DAT_0065b050 = 0xc0000409;
  _DAT_0065b054 = 1;
  _DAT_0065b060 = 1;
  DAT_0065b064 = 2;
  _DAT_0065b05c = unaff_retaddr;
  _DAT_0065b12c = in_GS;
  _DAT_0065b130 = in_FS;
  _DAT_0065b134 = in_ES;
  _DAT_0065b138 = in_DS;
  _DAT_0065b13c = unaff_EDI;
  _DAT_0065b140 = unaff_ESI;
  _DAT_0065b144 = unaff_EBX;
  _DAT_0065b14c = uVar3;
  _DAT_0065b154 = unaff_EBP;
  DAT_0065b158 = unaff_retaddr;
  _DAT_0065b15c = in_CS;
  _DAT_0065b168 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_005cdb00);
  return;
}


// Library Function - Single Match
//  ___report_rangecheckfailure
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void ___report_rangecheckfailure(void)

{
  ___report_securityfailure(8);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_securityfailure
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_0065b148 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_0065b150 = (undefined4)lVar9;
  _DAT_0065b160 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0065b164 = &param_1;
  _DAT_0065b050 = 0xc0000409;
  _DAT_0065b054 = 1;
  _DAT_0065b060 = 1;
  DAT_0065b064 = param_1;
  _DAT_0065b05c = unaff_retaddr;
  _DAT_0065b12c = in_GS;
  _DAT_0065b130 = in_FS;
  _DAT_0065b134 = in_ES;
  _DAT_0065b138 = in_DS;
  _DAT_0065b13c = unaff_EDI;
  _DAT_0065b140 = unaff_ESI;
  _DAT_0065b144 = unaff_EBX;
  _DAT_0065b14c = uVar3;
  _DAT_0065b154 = unaff_EBP;
  DAT_0065b158 = unaff_retaddr;
  _DAT_0065b15c = in_CS;
  _DAT_0065b168 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_005cdb00);
  return;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  void __stdcall `eh vector constructor iterator'(void *,unsigned int,unsigned int,void
// (__thiscall*)(void *),void (__thiscall*)(void *))
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  uint uVar1;
  void *in_stack_ffffffcc;
  undefined4 local_14;
  
  for (uVar1 = 0; uVar1 != param_3; uVar1 = uVar1 + 1) {
    guard_check_icall();
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_005ae457();
  ExceptionList = local_14;
  return;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  void __stdcall `eh vector copy constructor iterator'(void *,void *,unsigned int,unsigned
// int,void (__thiscall*)(void *,void *),void (__thiscall*)(void *))
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void _eh_vector_copy_constructor_iterator_
               (void *param_1,void *param_2,uint param_3,uint param_4,
               _func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_ffffffcc;
  undefined4 local_14;
  
  for (uVar1 = 0; uVar1 != param_4; uVar1 = uVar1 + 1) {
    pvVar2 = param_2;
    guard_check_icall();
    (*param_5)(pvVar2,in_stack_ffffffcc);
    param_2 = (void *)((int)param_2 + param_3);
  }
  FUN_005ae4d1();
  ExceptionList = local_14;
  return;
}


// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_0065500c ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// Library Function - Single Match
//  ___scrt_fastfail
// 
// Library: Visual Studio 2017 Release

void ___scrt_fastfail(void)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  undefined4 local_328 [39];
  EXCEPTION_RECORD local_5c;
  _EXCEPTION_POINTERS local_c;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  FUN_005aeac1();
  memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_005aeac1();
  }
  return;
}


// Library Function - Single Match
//  ___scrt_get_show_window_mode
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

WORD ___scrt_get_show_window_mode(void)

{
  _STARTUPINFOW local_48;
  
  memset(&local_48,0,0x44);
  GetStartupInfoW(&local_48);
  if (((byte)local_48.dwFlags & 1) != 0) {
    return local_48.wShowWindow;
  }
  return 10;
}


// WARNING: Removing unreachable block (ram,0x005aeb45)
// WARNING: Removing unreachable block (ram,0x005aeb0a)
// WARNING: Removing unreachable block (ram,0x005aebbd)
// Library Function - Single Match
//  ___isa_available_init
// 
// Library: Visual Studio 2017 Release

undefined4 ___isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint in_XCR0;
  uint local_18;
  uint local_14;
  
  DAT_0065b374 = 0;
  DAT_00655010 = DAT_00655010 | 1;
  BVar6 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00655010;
  if (BVar6 != 0) {
    DAT_00655010 = DAT_00655010 | 2;
    DAT_0065b374 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar8 = puVar2[3];
    if (((piVar1[3] == 0x6c65746e && piVar1[2] == 0x49656e69) && piVar1[1] == 0x756e6547) &&
       (((((uVar7 = *puVar2 & 0xfff3ff0, uVar7 == 0x106c0 || (uVar7 == 0x20660)) ||
          (uVar7 == 0x20670)) || ((uVar7 == 0x30650 || (uVar7 == 0x30660)))) || (uVar7 == 0x30670)))
       ) {
      DAT_0065b378 = DAT_0065b378 | 1;
    }
    if (*piVar1 < 7) {
      local_14 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      local_14 = *(uint *)(iVar3 + 4);
      if ((local_14 & 0x200) != 0) {
        DAT_0065b378 = DAT_0065b378 | 2;
      }
    }
    if ((uVar8 & 0x100000) != 0) {
      DAT_00655010 = uVar5 | 6;
      DAT_0065b374 = 2;
      if (((uVar8 & 0x8000000) != 0) && ((uVar8 & 0x10000000) != 0)) {
        uVar4 = xinuse(0);
        local_18 = in_XCR0 & (uint)uVar4;
        if ((local_18 & 6) == 6) {
          DAT_00655010 = uVar5 | 0xe;
          DAT_0065b374 = 3;
          if ((local_14 & 0x20) != 0) {
            DAT_00655010 = uVar5 | 0x2e;
            DAT_0065b374 = 5;
          }
        }
      }
    }
  }
  return 0;
}


// Library Function - Single Match
//  ___scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2017 Release

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_00655018 != 0;
}


// Library Function - Single Match
//  ___get_entropy
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint ___get_entropy(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_10);
  local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = local_8 ^ DVar1;
  DVar1 = GetCurrentProcessId();
  local_8 = local_8 ^ DVar1;
  QueryPerformanceCounter(&local_18);
  return local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
}


// Library Function - Single Match
//  ___security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_0065500c == 0xbb40e64e) || ((DAT_0065500c & 0xffff0000) == 0)) {
    DAT_0065500c = ___get_entropy();
    if (DAT_0065500c == 0xbb40e64e) {
      DAT_0065500c = 0xbb40e64f;
    }
    else if ((DAT_0065500c & 0xffff0000) == 0) {
      DAT_0065500c = DAT_0065500c | (DAT_0065500c | 0x4711) << 0x10;
    }
  }
  DAT_00655008 = ~DAT_0065500c;
  return;
}


void __std_exception_copy(void)

{
                    // WARNING: Could not recover jumptable at 0x005aede0. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_exception_copy();
  return;
}


void __std_exception_destroy(void)

{
                    // WARNING: Could not recover jumptable at 0x005aede6. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_exception_destroy();
  return;
}


void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x005aedec. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}


int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x005aee0a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _callnewh(_Size);
  return iVar1;
}


void _configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x005aee16. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_narrow_argv();
  return;
}


void _initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x005aee1c. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_narrow_environment();
  return;
}


void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x005aee34. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}


void _set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x005aee40. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_app_type();
  return;
}


void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x005aee46. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}


void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x005aee64. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _exit(_Code);
  return;
}


errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x005aee6a. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}


int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x005aee7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}


void _set_new_mode(void)

{
                    // WARNING: Could not recover jumptable at 0x005aee82. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_new_mode();
  return;
}


void __p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x005aee88. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}


errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x005aee8e. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s(_CurrentState,_NewValue,_Mask);
  return eVar1;
}


// Library Function - Single Match
//  __alldvrm
// 
// Library: Visual Studio

undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}


// WARNING: This is an inlined function
// Library Function - Single Match
//  __alloca_probe
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}


// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

uint __alloca_probe_16(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

uint __alloca_probe_8(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}


// Library Function - Single Match
//  __aulldiv
// 
// Library: Visual Studio

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}


void _CIatan2(void)

{
                    // WARNING: Could not recover jumptable at 0x005af497. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIatan2();
  return;
}


void _CIfmod(void)

{
                    // WARNING: Could not recover jumptable at 0x005af49d. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIfmod();
  return;
}
