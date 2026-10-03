#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// Dynamic initializer for the 4-element firstTimeBonusStr label array,
// consumed by GameLogic::setStartBonus(int).
void _dynamic_initializer_for__firstTimeBonusStr__(void)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_005b151e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::basic_string<>::assign((basic_string<> *)&firstTimeBonusStr,"`7Normal",8);
  local_8 = 0;
  _DAT_00657560 = 0;
  _DAT_00657564 = 0xf;
  DAT_00657550 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_00657550,"`%Slightly More",0xf);
  local_8._0_1_ = 1;
  _DAT_00657578 = 0;
  _DAT_0065757c = 0xf;
  DAT_00657568 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_00657568,"`!More",6);
  local_8 = CONCAT31(local_8._1_3_,2);
  _DAT_00657590 = 0;
  _DAT_00657594 = 0xf;
  DAT_00657580 = 0;
  std::basic_string<>::assign((basic_string<> *)&DAT_00657580,"`0Heaps More",0xc);
  _atexit((_func_4879 *)&LAB_005cdcd0);
  ExceptionList = local_10;
  return;
}


void _dynamic_initializer_for__rnr__(void)

{
  _atexit(_dynamic_atexit_destructor_for__rnr__);
  return;
}


void _dynamic_initializer_for__cleanup__(void)

{
  _atexit(RakNet::RakString::_dynamic_atexit_destructor_for__cleanup__);
  return;
}


__uint64 * ___local_stdio_printf_options(void)

{
  return &`__local_stdio_printf_options'::__l2::_OptionsStorage;
}


int __cdecl
__vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  __uint64 *p_Var1;
  int iVar2;
  
  p_Var1 = ___local_stdio_printf_options();
  iVar2 = __stdio_common_vsprintf((uint)*p_Var1 | 1,*(undefined4 *)((int)p_Var1 + 4));
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  __uint64 *p_Var1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x0000000c;
  uVar4 = 0;
  uVar3 = 0xffffffff;
  p_Var1 = ___local_stdio_printf_options();
  iVar2 = __stdio_common_vsprintf
                    ((uint)*p_Var1 | 1,*(undefined4 *)((int)p_Var1 + 4),_Dest,uVar3,_Format,uVar4,
                     puVar5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


int __cdecl __vfprintf_l(FILE *_File,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  __uint64 *p_Var1;
  int iVar2;
  
  p_Var1 = ___local_stdio_printf_options();
  iVar2 = __stdio_common_vfprintf((int)*p_Var1,*(undefined4 *)((int)p_Var1 + 4));
  return iVar2;
}


int __cdecl _printf(char *_Format,...)

{
  int iVar1;
  va_list unaff_EBP;
  FILE *_File;
  char *_Format_00;
  _locale_t _Locale;
  
  _Format_00 = &stack0x00000008;
  __acrt_iob_func(1);
  iVar1 = __vfprintf_l(_File,_Format_00,_Locale,unaff_EBP);
  return iVar1;
}


int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  __uint64 *p_Var1;
  int iVar2;
  
  p_Var1 = ___local_stdio_printf_options();
  iVar2 = __stdio_common_vsprintf((uint)*p_Var1 | 2,*(undefined4 *)((int)p_Var1 + 4));
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


int __cdecl _fprintf(FILE *_File,char *_Format,...)

{
  int iVar1;
  FILE *in_ECX;
  _locale_t unaff_EBP;
  va_list unaff_retaddr;
  
  iVar1 = __vfprintf_l(in_ECX,&stack0x0000000c,unaff_EBP,unaff_retaddr);
  return iVar1;
}


// int __cdecl _snprintf_s<1024>(char (&)[1024],unsigned int,char const *,...)

int __cdecl _snprintf_s<1024>(char *param_1,uint param_2,char *param_3,...)

{
  __uint64 *p_Var1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x00000010;
  uVar4 = 0;
  uVar3 = 0x400;
  p_Var1 = ___local_stdio_printf_options();
  iVar2 = __stdio_common_vsnprintf_s
                    ((int)*p_Var1,*(undefined4 *)((int)p_Var1 + 4),param_1,uVar3,param_2,param_3,
                     uVar4,puVar5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


void _WinMain_16(void)

{
  Application *this;
  undefined1 auStack_5c [4];
  undefined **local_58 [19];
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)auStack_5c;
  SetUnhandledExceptionFilter(crashHandler);
  cocos2d::Application::Application((Application *)local_58);
  local_58[0] = AppDelegate::vftable;
  cocos2d::log("AppDelegate::AppDelegate()");
  this = cocos2d::Application::getInstance();
  cocos2d::Application::run(this);
  local_58[0] = AppDelegate::vftable;
  cocos2d::Application::~Application((Application *)local_58);
  __security_check_cookie(local_c ^ (uint)auStack_5c);
  return;
}


char * __fastcall _Itoa(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = param_1;
  pcVar5 = param_2;
  do {
    pcVar4 = pcVar5;
    uVar3 = iVar2 % 10 >> 0x1f;
    *pcVar4 = "0123456789abcdef"[(iVar2 % 10 ^ uVar3) - uVar3];
    pcVar5 = pcVar4 + 1;
    iVar2 = iVar2 / 10;
  } while (iVar2 != 0);
  if (param_1 < 0) {
    *pcVar5 = '-';
    pcVar5 = pcVar4 + 2;
  }
  *pcVar5 = '\0';
  pcVar5 = pcVar5 + -1;
  pcVar4 = param_2;
  if (param_2 < pcVar5) {
    do {
      cVar1 = *pcVar4;
      *pcVar4 = *pcVar5;
      pcVar4 = pcVar4 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + -1;
    } while (pcVar4 < pcVar5);
  }
  return param_2;
}


// __fastcall __security_check_cookie,4

void __fastcall __security_check_cookie(int param_1)

{
  if (param_1 == ___security_cookie) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___report_gsfailure();
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// void __stdcall `eh vector destructor iterator'(void *,unsigned int,unsigned int,void
// (__thiscall*)(void *))

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  bool success;
  undefined4 local_14;
  
  while( true ) {
    if (param_3 == 0) break;
    DataStructures::RangeNode<>::~RangeNode<>((RangeNode<> *)param_4);
    (*param_4)(in_stack_ffffffd0);
    param_3 = param_3 - 1;
  }
  FUN_005af900();
  ExceptionList = local_14;
  return;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// void __stdcall __ArrayUnwind(void *,unsigned int,unsigned int,void (__thiscall*)(void *))

void __ArrayUnwind(void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  uint uVar1;
  void *in_stack_ffffffc4;
  uint i;
  undefined4 local_14;
  
  uVar1 = 0;
  while( true ) {
    if (uVar1 == param_3) break;
    DataStructures::RangeNode<>::~RangeNode<>((RangeNode<> *)param_4);
    (*param_4)(in_stack_ffffffc4);
    uVar1 = uVar1 + 1;
  }
  ExceptionList = local_14;
  return;
}


undefined4 __scrt_initialize_thread_safe_statics(void)

{
  undefined4 uVar1;
  
  __scrt_initialize_thread_safe_statics_platform_specific();
  uVar1 = ___scrt_initialize_onexit_tables(0);
  if ((char)uVar1 != '\0') {
    _atexit(__scrt_uninitialize_thread_safe_statics);
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___scrt_fastfail();
}


// int (__stdcall*__cdecl __crt_fast_encode_pointer<int (__stdcall*)(struct _RTL_CONDITION_VARIABLE
// *,struct _RTL_CRITICAL_SECTION *,unsigned long)>(int (__stdcall*const)(struct
// _RTL_CONDITION_VARIABLE *,struct _RTL_CRITICAL_SECTION *,unsigned long)))(struct
// _RTL_CONDITION_VARIABLE *,struct _RTL_CRITICAL_SECTION *,unsigned long)

_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong * __cdecl
__crt_fast_encode_pointer<>
          (_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)___security_cookie & 0x1f) & 0x1f;
  return (_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *)
         (((uint)param_1 >> bVar1 | (int)param_1 << 0x20 - bVar1) ^ ___security_cookie);
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __scrt_initialize_thread_safe_statics_platform_specific(void)

{
  HMODULE hModule;
  RangeNode<> *this;
  _func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *p_Var1;
  _func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *p_Var2;
  undefined *puVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005ca410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if (hModule == (HMODULE)0x0) {
    hModule = GetModuleHandleW(L"kernel32.dll");
    if (hModule == (HMODULE)0x0) goto LAB_005afb27;
  }
  this = (RangeNode<> *)GetProcAddress(hModule,"InitializeConditionVariable");
  p_Var1 = (_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *)
           GetProcAddress(hModule,"SleepConditionVariableCS");
  p_Var2 = (_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *)
           GetProcAddress(hModule,"WakeAllConditionVariable");
  if (((this == (RangeNode<> *)0x0) ||
      (p_Var1 == (_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *)0x0)) ||
     (p_Var2 == (_func_int__RTL_CONDITION_VARIABLE_ptr__RTL_CRITICAL_SECTION_ptr_ulong *)0x0)) {
    hHandle_0065d158 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (hHandle_0065d158 == (HANDLE)0x0) {
LAB_005afb27:
                    // WARNING: Subroutine does not return
      ___scrt_fastfail();
    }
  }
  else {
    hHandle_0065d158 = (HANDLE)0x0;
    puVar3 = &DAT_0065d154;
    DataStructures::RangeNode<>::~RangeNode<>(this);
    (*(code *)this)(puVar3);
    _DAT_0065d15c = __crt_fast_encode_pointer<>(p_Var1);
    _DAT_0065d160 = __crt_fast_encode_pointer<>(p_Var2);
  }
  ExceptionList = local_10;
  return;
}


void __scrt_uninitialize_thread_safe_statics(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
  if (hHandle_0065d158 != (HANDLE)0x0) {
    CloseHandle(hHandle_0065d158);
  }
  return;
}


void __Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
  __Init_thread_notify();
  return;
}


void __Init_thread_footer(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
  __Init_global_epoch = __Init_global_epoch + 1;
  *param_1 = __Init_global_epoch;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = __Init_global_epoch;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
  __Init_thread_notify();
  return;
}


void __cdecl __Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_005afc00:
      LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) =
           __Init_global_epoch;
      goto LAB_005afc00;
    }
    __Init_thread_wait(100);
  } while( true );
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __Init_thread_notify(void)

{
  byte bVar1;
  RangeNode<> *this;
  undefined *puVar2;
  
  if (hHandle_0065d158 == (HANDLE)0x0) {
    bVar1 = (byte)___security_cookie & 0x1f;
    this = (RangeNode<> *)
           ((___security_cookie ^ _DAT_0065d160) >> bVar1 |
           (___security_cookie ^ _DAT_0065d160) << 0x20 - bVar1);
    puVar2 = &DAT_0065d154;
    DataStructures::RangeNode<>::~RangeNode<>(this);
    (*(code *)this)(puVar2);
    return;
  }
  SetEvent(hHandle_0065d158);
  ResetEvent(hHandle_0065d158);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  RangeNode<> *this;
  undefined *puVar2;
  LPCRITICAL_SECTION *pp_Var3;
  
  if (hHandle_0065d158 == (HANDLE)0x0) {
    bVar1 = (byte)___security_cookie & 0x1f;
    pp_Var3 = &lpCriticalSection_0065d13c;
    this = (RangeNode<> *)
           ((___security_cookie ^ _DAT_0065d15c) >> bVar1 |
           (___security_cookie ^ _DAT_0065d15c) << 0x20 - bVar1);
    puVar2 = &DAT_0065d154;
    DataStructures::RangeNode<>::~RangeNode<>(this);
    (*(code *)this)(puVar2,pp_Var3,param_1);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
    WaitForSingleObjectEx(hHandle_0065d158,param_1,0);
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_0065d13c);
  }
  return;
}


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
      if (___scrt_native_startup_lock != (void *)0x0) {
        pvVar3 = ___scrt_native_startup_lock;
        pvVar1 = ___scrt_native_startup_lock;
      }
      ___scrt_native_startup_lock = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return 0;
}


int __cdecl ___scrt_initialize_crt(int param_1,int param_2)

{
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar2;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  Ship *unaff_EBP;
  int unaff_retaddr;
  
  if (param_1 == 0) {
    DAT_0065d16c = 1;
  }
  ___isa_available_init();
  bVar1 = ShipInterface::doAlterServerSetting(unaff_EBP,unaff_retaddr,param_1,param_2);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = ShipInterface::doAlterServerSetting(unaff_EBP,unaff_retaddr,param_1,param_2);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    ShipInterface::doAlterServerSetting((Ship *)0x0,(int)unaff_EBP,unaff_retaddr,param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}


undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  
  if (DAT_0065d16d != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    // WARNING: Subroutine does not return
    ___scrt_fastfail();
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar2) == 0) || (param_1 != 0)) {
    bVar1 = 0x20 - ((byte)___security_cookie & 0x1f) & 0x1f;
    uVar4 = (0xffffffffU >> bVar1 | -1 << 0x20 - bVar1) ^ ___security_cookie;
    DAT_0065d170 = uVar4;
    DAT_0065d174 = uVar4;
    DAT_0065d178 = uVar4;
    DAT_0065d17c = uVar4;
    DAT_0065d180 = uVar4;
    DAT_0065d184 = uVar4;
LAB_005afded:
    DAT_0065d16d = '\x01';
    uVar3 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    uVar3 = __initialize_onexit_table(&DAT_0065d170);
    if (uVar3 == 0) {
      uVar3 = __initialize_onexit_table(&DAT_0065d17c);
      uVar4 = 0;
      if (uVar3 == 0) goto LAB_005afded;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  uVar1 = find_pe_section(0x400000,param_1 - 0x400000);
  if ((uVar1 == 0) || (*(int *)(uVar1 + 0x24) < 0)) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar1;
}


int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = ___scrt_native_startup_lock;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    ___scrt_native_startup_lock = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}


undefined1 __cdecl ___scrt_uninitialize_crt(Ship *param_1,char param_2)

{
  int unaff_EBP;
  int unaff_retaddr;
  Ship *pSVar1;
  
  if ((DAT_0065d16c == '\0') || (param_2 == '\0')) {
    pSVar1 = param_1;
    ShipInterface::doAlterServerSetting(param_1,unaff_EBP,unaff_retaddr,(int)param_1);
    ShipInterface::doAlterServerSetting(param_1,(int)pSVar1,unaff_EBP,unaff_retaddr);
  }
  return 1;
}


_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)___security_cookie & 0x1f;
  if (((___security_cookie ^ DAT_0065d170) >> bVar2 |
      (___security_cookie ^ DAT_0065d170) << 0x20 - bVar2) == 0xffffffff) {
    iVar1 = __crt_atexit();
  }
  else {
    iVar1 = __register_onexit_function(&DAT_0065d170,_Func);
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}


int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


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
  ulong dw [199];
  uint cookie [2];
  
  uVar2 = _IsProcessorFeaturePresent_4(0x17);
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
  _DAT_0065d280 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_0065d288 = (undefined4)lVar9;
  _DAT_0065d298 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0065d29c = &stack0x00000004;
  _DAT_0065d1d8 = 0x10001;
  _DAT_0065d188 = 0xc0000409;
  _DAT_0065d18c = 1;
  _DAT_0065d198 = 1;
  DAT_0065d19c = 2;
  _DAT_0065d194 = unaff_retaddr;
  _DAT_0065d264 = in_GS;
  _DAT_0065d268 = in_FS;
  _DAT_0065d26c = in_ES;
  _DAT_0065d270 = in_DS;
  _DAT_0065d274 = unaff_EDI;
  _DAT_0065d278 = unaff_ESI;
  _DAT_0065d27c = unaff_EBX;
  _DAT_0065d284 = uVar3;
  _DAT_0065d28c = unaff_EBP;
  DAT_0065d290 = unaff_retaddr;
  _DAT_0065d294 = in_CS;
  _DAT_0065d2a0 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_005cfb30);
  return;
}


void ___report_rangecheckfailure(void)

{
  ___report_securityfailure(8);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
  ulong dw [199];
  
  uVar2 = _IsProcessorFeaturePresent_4(0x17);
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
  _DAT_0065d280 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_0065d288 = (undefined4)lVar9;
  _DAT_0065d298 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0065d29c = &param_1;
  _DAT_0065d188 = 0xc0000409;
  _DAT_0065d18c = 1;
  _DAT_0065d198 = 1;
  DAT_0065d19c = param_1;
  _DAT_0065d194 = unaff_retaddr;
  _DAT_0065d264 = in_GS;
  _DAT_0065d268 = in_FS;
  _DAT_0065d26c = in_ES;
  _DAT_0065d270 = in_DS;
  _DAT_0065d274 = unaff_EDI;
  _DAT_0065d278 = unaff_ESI;
  _DAT_0065d27c = unaff_EBX;
  _DAT_0065d284 = uVar3;
  _DAT_0065d28c = unaff_EBP;
  DAT_0065d290 = unaff_retaddr;
  _DAT_0065d294 = in_CS;
  _DAT_0065d2a0 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_005cfb30);
  return;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// void __stdcall `eh vector constructor iterator'(void *,unsigned int,unsigned int,void
// (__thiscall*)(void *),void (__thiscall*)(void *))

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  uint uVar1;
  void *in_stack_ffffffcc;
  uint i;
  bool success;
  undefined4 local_14;
  
  for (uVar1 = 0; uVar1 != param_3; uVar1 = uVar1 + 1) {
    DataStructures::RangeNode<>::~RangeNode<>((RangeNode<> *)param_4);
    (*param_4)(in_stack_ffffffcc);
  }
  FUN_005b0188();
  ExceptionList = local_14;
  return;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// void __stdcall `eh vector copy constructor iterator'(void *,void *,unsigned int,unsigned int,void
// (__thiscall*)(void *,void *),void (__thiscall*)(void *))

void _eh_vector_copy_constructor_iterator_
               (void *param_1,void *param_2,uint param_3,uint param_4,
               _func_void_void_ptr_void_ptr *param_5,_func_void_void_ptr *param_6)

{
  uint uVar1;
  void *pvVar2;
  void *in_stack_ffffffcc;
  uint i;
  bool success;
  undefined4 local_14;
  
  for (uVar1 = 0; uVar1 != param_4; uVar1 = uVar1 + 1) {
    pvVar2 = param_2;
    DataStructures::RangeNode<>::~RangeNode<>((RangeNode<> *)param_5);
    (*param_5)(pvVar2,in_stack_ffffffcc);
    param_2 = (void *)((int)param_2 + param_3);
  }
  FUN_005b0202();
  ExceptionList = local_14;
  return;
}


// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4

int __scrt_common_main_seh(void)

{
  RangeNode<> *this;
  bool bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_stack_ffffffc8;
  bool is_nested;
  bool has_cctor;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1,in_stack_ffffffc8);
  if ((char)uVar3 != '\0') {
    bVar1 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (___scrt_current_native_startup_state != 1) {
      if (___scrt_current_native_startup_state == 0) {
        ___scrt_current_native_startup_state = 1;
        iVar4 = __initterm_e(&___xi_a,&___xi_z);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        __initterm(&___xc_a,&___xc_z);
        ___scrt_current_native_startup_state = 2;
      }
      else {
        bVar1 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)___scrt_get_dyn_tls_init_callback();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        this = (RangeNode<> *)*piVar5;
        uVar8 = 0;
        uVar7 = 2;
        uVar3 = 0;
        DataStructures::RangeNode<>::~RangeNode<>(this);
        (*(code *)this)(uVar3,uVar7,uVar8);
      }
      piVar5 = (int *)___scrt_get_dyn_tls_dtor_callback();
      if ((*piVar5 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar5), (char)uVar3 != '\0')) {
        __register_thread_local_exe_atexit_callback(*piVar5);
      }
      uVar2 = ___scrt_get_show_window_mode();
      __get_narrow_winmain_command_line(uVar2);
      iVar4 = _WinMain_16();
      uVar6 = ___scrt_is_managed_app();
      if ((char)uVar6 != '\0') {
        if (!bVar1) {
          __cexit();
        }
        ___scrt_uninitialize_crt((Ship *)&DAT_00000001,'\0');
        ExceptionList = local_14;
        return iVar4;
      }
      iVar4 = exit(iVar4);
      return iVar4;
    }
  }
                    // WARNING: Subroutine does not return
  ___scrt_fastfail();
}


void _WinMainCRTStartup(void)

{
  ___security_init_cookie();
  __scrt_common_main_seh();
  return;
}


// void __cdecl __scrt_throw_std_bad_alloc(void)

void __cdecl __scrt_throw_std_bad_alloc(void)

{
  bad_alloc local_10;
  
  std::bad_alloc::bad_alloc(&local_10);
                    // WARNING: Subroutine does not return
  __CxxThrowException_8(&local_10,(ThrowInfo *)&pThrowInfo_0064fa74);
}


// void __cdecl __scrt_throw_std_bad_array_new_length(void)

void __cdecl __scrt_throw_std_bad_array_new_length(void)

{
  bad_array_new_length local_10;
  
  std::bad_array_new_length::bad_array_new_length(&local_10);
                    // WARNING: Subroutine does not return
  __CxxThrowException_8(&local_10,(ThrowInfo *)&pThrowInfo_0064fac8);
}


// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2

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
  *(uint *)((int)auStack_1c + iVar1 + 4) = ___security_cookie ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}


// WARNING: This is an inlined function

void __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}


void __cdecl
__except_handler4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __except_handler4_common
            (&___security_cookie,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}


// WARNING: Variable defined which should be unmapped: context_record

void ___scrt_fastfail(void)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar4;
  _CONTEXT context_record;
  _EXCEPTION_RECORD exception_record;
  _EXCEPTION_POINTERS exception_pointers;
  
  BVar2 = _IsProcessorFeaturePresent_4(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  __crt_debugger_hook(3);
  uVar4 = memset(&context_record,0,0x2cc);
  context_record.Edx = (ulong)((ulonglong)uVar4 >> 0x20);
  context_record.Eax = (ulong)uVar4;
  context_record.EFlags =
       (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY4((int)&stack0xfffffcc8,0xc) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
       (uint)((int)&stack0xfffffcd4 < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined1 *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&stack0xfffffcd4 & 0xff) & 1U) == 0) * 4 |
       (uint)((undefined1 *)0xfffffff3 < &stack0xfffffcc8) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  context_record.ContextFlags = 0x10001;
  context_record.Esp = (ulong)register0x00000010;
  memset(&exception_record,0,0x50);
  exception_record.ExceptionCode = 0x40000015;
  exception_record.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  exception_pointers.ExceptionRecord = &exception_record;
  exception_pointers.ContextRecord = &context_record;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&exception_pointers);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    __crt_debugger_hook(3);
  }
  return;
}


ushort ___scrt_get_show_window_mode(void)

{
  _STARTUPINFOW startup_info;
  
  memset(&startup_info,0,0x44);
  GetStartupInfoW((LPSTARTUPINFOW)&startup_info);
  if (((byte)startup_info.dwFlags & 1) != 0) {
    return startup_info.wShowWindow;
  }
  return 10;
}


int __cdecl ___scrt_initialize_mta(_exception *_Except)

{
  return 0;
}


int __cdecl ___scrt_exe_initialize_mta(_exception *_Except)

{
  return 0;
}


uint ___scrt_is_managed_app(void)

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


void ___scrt_set_unhandled_exception_filter(void)

{
  SetUnhandledExceptionFilter(___scrt_unhandled_exception_filter_4);
  return;
}


// lpTopLevelExceptionFilter parameter of SetUnhandledExceptionFilter
// 

undefined4 ___scrt_unhandled_exception_filter_4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
    uVar3 = terminate();
    return uVar3;
  }
  return 0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl __crt_debugger_hook(int param_1)

{
  ____scrt_debugger_hook_flag = 0;
  return;
}


// WARNING: Removing unreachable block (ram,0x005b0875)
// WARNING: Removing unreachable block (ram,0x005b083a)
// WARNING: Removing unreachable block (ram,0x005b08ed)

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
  int CPUIDinfo [4];
  __uint64 xcr0_state;
  
  ___isa_available = 0;
  ___isa_enabled = ___isa_enabled | 1;
  BVar6 = _IsProcessorFeaturePresent_4(10);
  uVar5 = ___isa_enabled;
  if (BVar6 != 0) {
    ___isa_enabled = ___isa_enabled | 2;
    ___isa_available = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar8 = puVar2[3];
    if (((piVar1[3] == 0x6c65746e && piVar1[2] == 0x49656e69) && piVar1[1] == 0x756e6547) &&
       (((((uVar7 = *puVar2 & 0xfff3ff0, uVar7 == 0x106c0 || (uVar7 == 0x20660)) ||
          (uVar7 == 0x20670)) || ((uVar7 == 0x30650 || (uVar7 == 0x30660)))) || (uVar7 == 0x30670)))
       ) {
      ___favor = ___favor | 1;
    }
    if (*piVar1 < 7) {
      xcr0_state._4_4_ = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      xcr0_state._4_4_ = *(uint *)(iVar3 + 4);
      if ((xcr0_state._4_4_ & 0x200) != 0) {
        ___favor = ___favor | 2;
      }
    }
    if ((uVar8 & 0x100000) != 0) {
      ___isa_enabled = uVar5 | 6;
      ___isa_available = 2;
      if (((uVar8 & 0x8000000) != 0) && ((uVar8 & 0x10000000) != 0)) {
        uVar4 = xinuse(0);
        xcr0_state._0_4_ = in_XCR0 & (uint)uVar4;
        if (((uint)xcr0_state & 6) == 6) {
          ___isa_enabled = uVar5 | 0xe;
          ___isa_available = 3;
          if ((xcr0_state._4_4_ & 0x20) != 0) {
            ___isa_enabled = uVar5 | 0x2e;
            ___isa_available = 5;
          }
        }
      }
    }
  }
  return 0;
}


undefined4 __get_startup_argv_mode(void)

{
  return 1;
}


bool ___scrt_is_ucrt_dll_in_use(void)

{
  return ___scrt_ucrt_dll_is_in_use != 0;
}


uint __get_entropy(void)

{
  DWORD DVar1;
  _LARGE_INTEGER perfctr;
  FT systime;
  uint cookie;
  
  systime.ft_struct.dwLowDateTime = 0;
  systime.ft_struct.dwHighDateTime = 0;
  GetSystemTimeAsFileTime((LPFILETIME)&systime.ft_struct);
  cookie = systime.ft_struct.dwHighDateTime ^ systime.ft_struct.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  cookie = cookie ^ DVar1;
  DVar1 = GetCurrentProcessId();
  cookie = cookie ^ DVar1;
  QueryPerformanceCounter((LARGE_INTEGER *)&perfctr);
  return perfctr._s_0.HighPart ^ perfctr._s_0.LowPart ^ cookie ^ (uint)&cookie;
}


void __cdecl ___security_init_cookie(void)

{
  if ((___security_cookie == 0xbb40e64e) || ((___security_cookie & 0xffff0000) == 0)) {
    ___security_cookie = __get_entropy();
    if (___security_cookie == 0xbb40e64e) {
      ___security_cookie = 0xbb40e64f;
    }
    else if ((___security_cookie & 0xffff0000) == 0) {
      ___security_cookie = ___security_cookie | (___security_cookie | 0x4711) << 0x10;
    }
  }
  ___security_cookie_complement = ~___security_cookie;
  return;
}


undefined4 __get_startup_file_mode(void)

{
  return 0x4000;
}


// void __cdecl __scrt_initialize_type_info(void)

void __cdecl __scrt_initialize_type_info(void)

{
  InitializeSListHead((PSLIST_HEADER)&ListHead_0065d4b8);
  return;
}


void __initialize_default_precision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___scrt_fastfail();
}


__uint64 * ___local_stdio_scanf_options(void)

{
  return &`__local_stdio_scanf_options'::__l2::_OptionsStorage;
}


void ___scrt_initialize_default_local_stdio_options(void)

{
  __uint64 *p_Var1;
  
  p_Var1 = ___local_stdio_printf_options();
  *(uint *)p_Var1 = (uint)*p_Var1 | 4;
  *(undefined4 *)((int)p_Var1 + 4) = *(undefined4 *)((int)p_Var1 + 4);
  p_Var1 = ___local_stdio_scanf_options();
  *(uint *)p_Var1 = (uint)*p_Var1 | 2;
  *(undefined4 *)((int)p_Var1 + 4) = *(undefined4 *)((int)p_Var1 + 4);
  return;
}


bool ___scrt_is_user_matherr_present(void)

{
  return ___scrt_default_matherr == 0;
}


undefined * ___scrt_get_dyn_tls_init_callback(void)

{
  return &DAT_006629cc;
}


undefined * ___scrt_get_dyn_tls_dtor_callback(void)

{
  return &___dyn_tls_dtor_callback;
}


// WARNING: Removing unreachable block (ram,0x005b0ab6)
// WARNING: Removing unreachable block (ram,0x005b0ab7)
// WARNING: Removing unreachable block (ram,0x005b0abd)
// WARNING: Removing unreachable block (ram,0x005b0ac7)
// WARNING: Removing unreachable block (ram,0x005b0ace)

void __RTC_Initialize(void)

{
  return;
}


// WARNING: Removing unreachable block (ram,0x005b0ae2)
// WARNING: Removing unreachable block (ram,0x005b0ae3)
// WARNING: Removing unreachable block (ram,0x005b0ae9)
// WARNING: Removing unreachable block (ram,0x005b0af3)
// WARNING: Removing unreachable block (ram,0x005b0afa)

void __RTC_Terminate(void)

{
  return;
}


void ___std_terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b04. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_terminate();
  return;
}


void __cdecl __purecall(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b0a. Too many branches
                    // WARNING: Treating indirect jump as call
  purecall();
  return;
}


void ___std_exception_copy(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b10. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_exception_copy();
  return;
}


void ___std_exception_destroy(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b16. Too many branches
                    // WARNING: Treating indirect jump as call
  __std_exception_destroy();
  return;
}


void __CxxThrowException_8(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    // WARNING: Could not recover jumptable at 0x005b0b1c. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}


void __cdecl __except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b22. Too many branches
                    // WARNING: Treating indirect jump as call
  except_handler4_common();
  return;
}


int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x005b0b3a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _callnewh(_Size);
  return iVar1;
}


void __cdecl __configure_narrow_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b46. Too many branches
                    // WARNING: Treating indirect jump as call
  configure_narrow_argv();
  return;
}


void __cdecl __initialize_narrow_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b4c. Too many branches
                    // WARNING: Treating indirect jump as call
  initialize_narrow_environment();
  return;
}


void __cdecl __initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b52. Too many branches
                    // WARNING: Treating indirect jump as call
  initialize_onexit_table();
  return;
}


void __cdecl __register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b58. Too many branches
                    // WARNING: Treating indirect jump as call
  register_onexit_function();
  return;
}


void __cdecl __crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b5e. Too many branches
                    // WARNING: Treating indirect jump as call
  crt_atexit();
  return;
}


void __cdecl __cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b64. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}


void __cdecl __set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b70. Too many branches
                    // WARNING: Treating indirect jump as call
  set_app_type();
  return;
}


void ___setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b76. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}


void __cdecl __get_narrow_winmain_command_line(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b7c. Too many branches
                    // WARNING: Treating indirect jump as call
  get_narrow_winmain_command_line();
  return;
}


void __cdecl __initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b82. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm();
  return;
}


void __cdecl __initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0b88. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm_e();
  return;
}


void __cdecl __exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x005b0b94. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _exit(_Code);
  return;
}


errno_t __cdecl __set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x005b0b9a. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}


void __cdecl __register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0ba6. Too many branches
                    // WARNING: Treating indirect jump as call
  register_thread_local_exe_atexit_callback();
  return;
}


int __cdecl __configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x005b0bac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}


void __cdecl __set_new_mode(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0bb2. Too many branches
                    // WARNING: Treating indirect jump as call
  set_new_mode();
  return;
}


void ___p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x005b0bb8. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}


errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x005b0bbe. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s(_CurrentState,_NewValue,_Mask);
  return eVar1;
}


BOOL _IsProcessorFeaturePresent_4(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x005b0bc4. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}


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


ulonglong __ftoui3(void)

{
  ulonglong uVar1;
  
  uVar1 = __ftol3_NaN(1);
  return uVar1;
}


ulonglong __ftoul3(void)

{
  ulonglong uVar1;
  
  uVar1 = __ftol3_NaN(2);
  return uVar1;
}


// WARNING: Removing unreachable block (ram,0x005b0dc8)
// WARNING: Removing unreachable block (ram,0x005b0dd6)

ulonglong __ftol3(void)

{
  double dVar1;
  ushort in_FPUControlWord;
  float in_XMM0_Da;
  ulonglong in_XMM0_Qb;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  if (((0x7f7fffff < (uint)ABS(in_XMM0_Da)) ||
      (dVar1 = (double)in_XMM0_Da, 9.223372036854776e+18 <= dVar1)) ||
     (dVar1 < -9.223372036854776e+18)) {
    __ftol3_except(3,8);
    return 0x8000000000000000;
  }
  auVar4._0_8_ = ABS(dVar1);
  auVar4._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
  if (((auVar4._0_8_ <= 1.1754943157898259e-38) && (auVar4._0_8_ != 0.0)) &&
     ((in_FPUControlWord & 0x10) == 0)) {
    __ftol3_except(3,2);
    return 0x8000000000000000;
  }
  uVar3 = 0;
  if (auVar4._0_8_ != 0.0) {
    auVar5 = auVar4 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
    lVar6 = SUB168(ZEXT416(0x433),0) - ((ulonglong)auVar4._0_8_ >> 0x34);
    uVar7 = auVar5._0_8_ >> lVar6;
    iVar2 = -(uint)(0x433 < (uint)((ulonglong)((longlong)dVar1 << 1) >> 0x35));
    uVar3 = CONCAT44(iVar2,iVar2);
    uVar3 = ~uVar3 & uVar7 |
            auVar5._0_8_ << ((ulonglong)auVar4._0_8_ >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar3;
    uVar3 = ~-(ulonglong)(dVar1 == auVar4._0_8_) & -uVar3 |
            uVar3 & -(ulonglong)(dVar1 == auVar4._0_8_);
    if ((0 < (int)lVar6) &&
       (auVar8._0_8_ = uVar7 << lVar6, auVar8._8_8_ = (auVar5._8_8_ >> lVar6) << lVar6,
       SUB164(auVar5 ^ auVar8,0) != 0 || SUB164(auVar5 ^ auVar8,4) != 0)) {
      __ftol3_except(3,0x10);
    }
  }
  return uVar3;
}


ulonglong __fastcall __ftol3_NaN(int param_1)

{
  int extraout_ECX;
  ushort in_FPUControlWord;
  float in_XMM0_Da;
  double dVar1;
  ulonglong in_XMM0_Qb;
  int iVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  double in_XMM5_Qa;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  if ((uint)ABS(in_XMM0_Da) < 0x7f800000) {
    dVar1 = (double)in_XMM0_Da;
    if ((param_1 == 2) && (1.5474250491067253e+26 < dVar1)) {
      __ftol3_except(2,0x10);
      param_1 = extraout_ECX;
    }
    if ((dVar1 < in_XMM5_Qa) && (-9.223372036854776e+18 <= dVar1)) {
      auVar4._0_8_ = ABS(dVar1);
      auVar4._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
      if (((param_1 != 1) && (auVar4._0_8_ <= 1.1754943157898259e-38)) && (auVar4._0_8_ != 0.0)) {
        if ((in_FPUControlWord & 0x10) == 0) {
          __ftol3_except(param_1,2);
          return 0x8000000000000000;
        }
      }
      uVar3 = 0;
      if (auVar4._0_8_ != 0.0) {
        auVar5 = auVar4 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
        lVar6 = SUB168(ZEXT416(0x433),0) - ((ulonglong)auVar4._0_8_ >> 0x34);
        uVar7 = auVar5._0_8_ >> lVar6;
        iVar2 = -(uint)(0x433 < (uint)((ulonglong)((longlong)dVar1 << 1) >> 0x35));
        uVar3 = CONCAT44(iVar2,iVar2);
        uVar3 = ~uVar3 & uVar7 |
                auVar5._0_8_ << ((ulonglong)auVar4._0_8_ >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar3
        ;
        uVar3 = ~-(ulonglong)(dVar1 == auVar4._0_8_) & -uVar3 |
                uVar3 & -(ulonglong)(dVar1 == auVar4._0_8_);
        if ((0 < (int)lVar6) &&
           (auVar8._0_8_ = uVar7 << lVar6, auVar8._8_8_ = (auVar5._8_8_ >> lVar6) << lVar6,
           SUB164(auVar5 ^ auVar8,0) != 0 || SUB164(auVar5 ^ auVar8,4) != 0)) {
          __ftol3_except(param_1,0x10);
        }
      }
      return uVar3;
    }
  }
  __ftol3_except(param_1,8);
  return 0x8000000000000000;
}


ulonglong __fastcall __ftol3_work(int param_1)

{
  int extraout_ECX;
  ushort in_FPUControlWord;
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  int iVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  double in_XMM5_Qa;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  if ((param_1 == 2) && (1.5474250491067253e+26 < in_XMM0_Qa)) {
    __ftol3_except(2,0x10);
    param_1 = extraout_ECX;
  }
  if ((in_XMM0_Qa < in_XMM5_Qa) && (-9.223372036854776e+18 <= in_XMM0_Qa)) {
    auVar3._0_8_ = ABS(in_XMM0_Qa);
    auVar3._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    if (((param_1 != 1) && (auVar3._0_8_ <= 1.1754943157898259e-38)) && (auVar3._0_8_ != 0.0)) {
      if ((in_FPUControlWord & 0x10) == 0) {
        __ftol3_except(param_1,2);
        return 0x8000000000000000;
      }
    }
    uVar2 = 0;
    if (auVar3._0_8_ != 0.0) {
      auVar4 = auVar3 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
      lVar5 = SUB168(ZEXT416(0x433),0) - ((ulonglong)auVar3._0_8_ >> 0x34);
      uVar6 = auVar4._0_8_ >> lVar5;
      iVar1 = -(uint)(0x433 < (uint)((ulonglong)((longlong)in_XMM0_Qa << 1) >> 0x35));
      uVar2 = CONCAT44(iVar1,iVar1);
      uVar2 = ~uVar2 & uVar6 |
              auVar4._0_8_ << ((ulonglong)auVar3._0_8_ >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar2;
      uVar2 = ~-(ulonglong)(in_XMM0_Qa == auVar3._0_8_) & -uVar2 |
              uVar2 & -(ulonglong)(in_XMM0_Qa == auVar3._0_8_);
      if ((0 < (int)lVar5) &&
         (auVar7._0_8_ = uVar6 << lVar5, auVar7._8_8_ = (auVar4._8_8_ >> lVar5) << lVar5,
         SUB164(auVar4 ^ auVar7,0) != 0 || SUB164(auVar4 ^ auVar7,4) != 0)) {
        __ftol3_except(param_1,0x10);
      }
    }
    return uVar2;
  }
  __ftol3_except(param_1,8);
  return 0x8000000000000000;
}


ulonglong __fastcall __ftol3_common(undefined4 param_1)

{
  double in_XMM0_Qa;
  int iVar1;
  double dVar2;
  ulonglong uVar3;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  
  uVar3 = 0;
  dVar2 = in_XMM1._0_8_;
  if (dVar2 != 0.0) {
    auVar4 = in_XMM1 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
    lVar5 = SUB168(ZEXT416(0x433),0) - ((ulonglong)dVar2 >> 0x34);
    uVar6 = auVar4._0_8_ >> lVar5;
    iVar1 = -(uint)(0x433 < in_XMM1._4_4_ >> 0x14);
    uVar3 = CONCAT44(iVar1,iVar1);
    uVar3 = ~uVar3 & uVar6 |
            auVar4._0_8_ << ((ulonglong)dVar2 >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar3;
    uVar3 = ~-(ulonglong)(in_XMM0_Qa == dVar2) & -uVar3 | uVar3 & -(ulonglong)(in_XMM0_Qa == dVar2);
    if ((0 < (int)lVar5) &&
       (auVar7._0_8_ = uVar6 << lVar5, auVar7._8_8_ = (auVar4._8_8_ >> lVar5) << lVar5,
       SUB164(auVar4 ^ auVar7,0) != 0 || SUB164(auVar4 ^ auVar7,4) != 0)) {
      __ftol3_except(param_1,0x10);
    }
  }
  return uVar3;
}


undefined8 __fastcall __ftol3_arg_error(undefined4 param_1)

{
  __ftol3_except(param_1,8);
  return 0x8000000000000000;
}


void __fastcall __ftol3_except(undefined4 param_1,int param_2)

{
  byte in_FPUControlWord;
  
  if ((param_2 == 8) || ((*(byte *)((int)&DAT_00631958 + param_2 + 7) & in_FPUControlWord) == 0)) {
    __except1(param_2,0);
  }
  return;
}


void __dtoui3(void)

{
  __dtol3_NaN(1);
  return;
}


void __dtoul3(void)

{
  __dtol3_NaN(4);
  return;
}


// WARNING: Removing unreachable block (ram,0x005b0dc3)
// WARNING: Removing unreachable block (ram,0x005b0fe9)
// WARNING: Removing unreachable block (ram,0x005b0dc8)
// WARNING: Removing unreachable block (ram,0x005b0dd6)
// WARNING: Removing unreachable block (ram,0x005b0de0)
// WARNING: Removing unreachable block (ram,0x005b0dea)
// WARNING: Removing unreachable block (ram,0x005b0dfc)
// WARNING: Removing unreachable block (ram,0x005b0e0f)
// WARNING: Removing unreachable block (ram,0x005b0e1d)
// WARNING: Removing unreachable block (ram,0x005b0e27)
// WARNING: Removing unreachable block (ram,0x005b0e37)

uint __dtol3(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int extraout_ECX_03;
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  
  iVar1 = 5;
  dVar7 = 9.223372036854776e+18;
  if (((uint)((ulonglong)in_XMM0_Qa >> 0x20) & 0x7fffffff) < 0x7ff00000) {
    auVar3._0_8_ = ABS(in_XMM0_Qa);
    auVar3._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    if (3.4028235677973366e+38 < auVar3._0_8_) {
      __ftol3_except(5,1);
      __ftol3_except(extraout_ECX,0x10);
      iVar1 = extraout_ECX_00;
    }
    dVar5 = auVar3._0_8_;
    if (dVar5 < 1.1754943157898259e-38) {
      if (dVar5 == 0.0) {
        uVar2 = 0;
        if (dVar5 != 0.0) {
          auVar4 = auVar3 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
          lVar6 = SUB168(ZEXT416(0x433),0) - ((ulonglong)dVar5 >> 0x34);
          uVar9 = auVar4._0_8_ >> lVar6;
          uVar2 = -(uint)(0x433 < auVar3._4_4_ >> 0x14);
          uVar2 = ~uVar2 & (uint)uVar9 |
                  (uint)(auVar4._0_8_ << ((ulonglong)dVar5 >> 0x34) - SUB168(ZEXT416(0x433),0)) &
                  uVar2;
          uVar2 = ~-(uint)(in_XMM0_Qa == dVar5) & -uVar2 | uVar2 & -(uint)(in_XMM0_Qa == dVar5);
          if ((0 < (int)lVar6) &&
             (auVar8._0_8_ = uVar9 << lVar6, auVar8._8_8_ = (auVar4._8_8_ >> lVar6) << lVar6,
             SUB164(auVar4 ^ auVar8,0) != 0 || SUB164(auVar4 ^ auVar8,4) != 0)) {
            __ftol3_except(iVar1,0x10);
          }
        }
        return uVar2;
      }
      __ftol3_except(iVar1,2);
      __ftol3_except(extraout_ECX_01,0x10);
      uVar9 = __ftol3_common(extraout_ECX_02);
      return (uint)uVar9;
    }
    dVar5 = in_XMM0_Qa;
    if ((iVar1 == 4) && (9.223372036854776e+18 <= in_XMM0_Qa)) {
      dVar5 = in_XMM0_Qa - 9.223372036854776e+18;
    }
    if ((int)((ulonglong)((longlong)dVar5 << 0x23) >> 0x20) != 0) {
      __ftol3_except(iVar1,0x10);
      iVar1 = extraout_ECX_03;
    }
    if ((in_XMM0_Qa < dVar7) && (-9.223372036854776e+18 <= in_XMM0_Qa)) {
      uVar9 = __ftol3_common(iVar1);
      return (uint)uVar9;
    }
  }
  __ftol3_except(iVar1,8);
  return 0;
}


// WARNING: Removing unreachable block (ram,0x005b0dc8)
// WARNING: Removing unreachable block (ram,0x005b0dd6)
// WARNING: Removing unreachable block (ram,0x005b0e0f)
// WARNING: Removing unreachable block (ram,0x005b0e1d)
// WARNING: Removing unreachable block (ram,0x005b0e27)
// WARNING: Removing unreachable block (ram,0x005b0e37)

uint __fastcall __dtol3_NaN(int param_1)

{
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int extraout_ECX_05;
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  longlong lVar5;
  double in_XMM5_Qa;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  
  if (0x7fefffff < ((uint)((ulonglong)in_XMM0_Qa >> 0x20) & 0x7fffffff)) {
__ftol3_arg_error:
    __ftol3_except(param_1,8);
    return 0;
  }
  if (param_1 == 1) {
    if ((in_XMM5_Qa <= in_XMM0_Qa) || (in_XMM0_Qa < -9.223372036854776e+18)) goto __ftol3_arg_error;
    auVar2._0_8_ = ABS(in_XMM0_Qa);
    auVar2._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
  }
  else {
    auVar2._0_8_ = ABS(in_XMM0_Qa);
    auVar2._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    if (3.4028235677973366e+38 < auVar2._0_8_) {
      if (param_1 == 4) {
        __ftol3_except(4,0x10);
        __ftol3_except(extraout_ECX_01,1);
        param_1 = extraout_ECX_02;
      }
      else {
        __ftol3_except(param_1,1);
        __ftol3_except(extraout_ECX,0x10);
        param_1 = extraout_ECX_00;
      }
    }
    if (1.1754943157898259e-38 <= auVar2._0_8_) {
      dVar4 = in_XMM0_Qa;
      if ((param_1 == 4) && (9.223372036854776e+18 <= in_XMM0_Qa)) {
        dVar4 = in_XMM0_Qa - 9.223372036854776e+18;
      }
      if ((int)((ulonglong)((longlong)dVar4 << 0x23) >> 0x20) != 0) {
        __ftol3_except(param_1,0x10);
        param_1 = extraout_ECX_05;
      }
      if ((in_XMM0_Qa < in_XMM5_Qa) && (-9.223372036854776e+18 <= in_XMM0_Qa)) {
        uVar7 = __ftol3_common(param_1);
        return (uint)uVar7;
      }
      goto __ftol3_arg_error;
    }
    if (auVar2._0_8_ != 0.0) {
      __ftol3_except(param_1,2);
      __ftol3_except(extraout_ECX_03,0x10);
      uVar7 = __ftol3_common(extraout_ECX_04);
      return (uint)uVar7;
    }
  }
  uVar1 = 0;
  dVar4 = auVar2._0_8_;
  if (dVar4 != 0.0) {
    auVar3 = auVar2 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
    lVar5 = SUB168(ZEXT416(0x433),0) - ((ulonglong)dVar4 >> 0x34);
    uVar7 = auVar3._0_8_ >> lVar5;
    uVar1 = -(uint)(0x433 < auVar2._4_4_ >> 0x14);
    uVar1 = ~uVar1 & (uint)uVar7 |
            (uint)(auVar3._0_8_ << ((ulonglong)dVar4 >> 0x34) - SUB168(ZEXT416(0x433),0)) & uVar1;
    uVar1 = ~-(uint)(in_XMM0_Qa == dVar4) & -uVar1 | uVar1 & -(uint)(in_XMM0_Qa == dVar4);
    if ((0 < (int)lVar5) &&
       (auVar6._0_8_ = uVar7 << lVar5, auVar6._8_8_ = (auVar3._8_8_ >> lVar5) << lVar5,
       SUB164(auVar3 ^ auVar6,0) != 0 || SUB164(auVar3 ^ auVar6,4) != 0)) {
      __ftol3_except(param_1,0x10);
    }
  }
  return uVar1;
}


// WARNING: Removing unreachable block (ram,0x005b0dc8)
// WARNING: Removing unreachable block (ram,0x005b0dd6)
// WARNING: Removing unreachable block (ram,0x005b0e0f)
// WARNING: Removing unreachable block (ram,0x005b0e1d)
// WARNING: Removing unreachable block (ram,0x005b0e27)
// WARNING: Removing unreachable block (ram,0x005b0e37)

ulonglong __fastcall __dtol3_work(int param_1)

{
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int extraout_ECX_05;
  double in_XMM0_Qa;
  ulonglong in_XMM0_Qb;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  longlong lVar5;
  double in_XMM5_Qa;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  
  if (param_1 == 1) {
    if ((in_XMM5_Qa <= in_XMM0_Qa) || (in_XMM0_Qa < -9.223372036854776e+18)) goto __ftol3_arg_error;
    auVar2._0_8_ = ABS(in_XMM0_Qa);
    auVar2._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
  }
  else {
    auVar2._0_8_ = ABS(in_XMM0_Qa);
    auVar2._8_8_ = in_XMM0_Qb & 0x7fffffffffffffff;
    if (3.4028235677973366e+38 < auVar2._0_8_) {
      if (param_1 == 4) {
        __ftol3_except(4,0x10);
        __ftol3_except(extraout_ECX_01,1);
        param_1 = extraout_ECX_02;
      }
      else {
        __ftol3_except(param_1,1);
        __ftol3_except(extraout_ECX,0x10);
        param_1 = extraout_ECX_00;
      }
    }
    if (1.1754943157898259e-38 <= auVar2._0_8_) {
      dVar4 = in_XMM0_Qa;
      if ((param_1 == 4) && (9.223372036854776e+18 <= in_XMM0_Qa)) {
        dVar4 = in_XMM0_Qa - 9.223372036854776e+18;
      }
      if ((int)((ulonglong)((longlong)dVar4 << 0x23) >> 0x20) != 0) {
        __ftol3_except(param_1,0x10);
        param_1 = extraout_ECX_05;
      }
      if ((in_XMM0_Qa < in_XMM5_Qa) && (-9.223372036854776e+18 <= in_XMM0_Qa)) {
        uVar8 = __ftol3_common(param_1);
        return uVar8;
      }
__ftol3_arg_error:
      __ftol3_except(param_1,8);
      return 0x8000000000000000;
    }
    if (auVar2._0_8_ != 0.0) {
      __ftol3_except(param_1,2);
      __ftol3_except(extraout_ECX_03,0x10);
      uVar8 = __ftol3_common(extraout_ECX_04);
      return uVar8;
    }
  }
  uVar8 = 0;
  dVar4 = auVar2._0_8_;
  if (dVar4 != 0.0) {
    auVar3 = auVar2 & ZEXT816(0xfffffffffffff) | ZEXT816(0x10000000000000);
    lVar5 = SUB168(ZEXT416(0x433),0) - ((ulonglong)dVar4 >> 0x34);
    uVar6 = auVar3._0_8_ >> lVar5;
    iVar1 = -(uint)(0x433 < auVar2._4_4_ >> 0x14);
    uVar8 = CONCAT44(iVar1,iVar1);
    uVar8 = ~uVar8 & uVar6 |
            auVar3._0_8_ << ((ulonglong)dVar4 >> 0x34) - SUB168(ZEXT416(0x433),0) & uVar8;
    uVar8 = ~-(ulonglong)(in_XMM0_Qa == dVar4) & -uVar8 | uVar8 & -(ulonglong)(in_XMM0_Qa == dVar4);
    if ((0 < (int)lVar5) &&
       (auVar7._0_8_ = uVar6 << lVar5, auVar7._8_8_ = (auVar3._8_8_ >> lVar5) << lVar5,
       SUB164(auVar3 ^ auVar7,0) != 0 || SUB164(auVar3 ^ auVar7,4) != 0)) {
      __ftol3_except(param_1,0x10);
    }
  }
  return uVar8;
}


void __ultod3(void)

{
  return;
}


void __ltod3(void)

{
  return;
}


ulonglong __fastcall __ftol2_sse(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (___isa_available == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}


int __ftol2_pentium4(void)

{
  float10 in_ST0;
  
  return (int)in_ST0;
}


ulonglong __fastcall __ftol2_sse_excpt(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  ushort in_FPUControlWord;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if ((___isa_available != 0) && ((in_FPUControlWord & 0x7f) == 0x7f)) {
    return CONCAT44(param_2,(int)in_ST0);
  }
  uVar1 = (ulonglong)ROUND(in_ST0);
  uStack_20 = (uint)uVar1;
  fStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
    }
  }
  return uVar1;
}


ulonglong __ftol2(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}


void __CIatan2(void)

{
                    // WARNING: Could not recover jumptable at 0x005b11c7. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIatan2();
  return;
}


void __CIfmod(void)

{
                    // WARNING: Could not recover jumptable at 0x005b11cd. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIfmod();
  return;
}


void __cdecl __libm_sse2_cos_precise(void)

{
                    // WARNING: Could not recover jumptable at 0x005b11d3. Too many branches
                    // WARNING: Treating indirect jump as call
  libm_sse2_cos_precise();
  return;
}


void __cdecl __libm_sse2_sin_precise(void)

{
                    // WARNING: Could not recover jumptable at 0x005b11d9. Too many branches
                    // WARNING: Treating indirect jump as call
  libm_sse2_sin_precise();
  return;
}


void __cdecl __except1(void)

{
                    // WARNING: Could not recover jumptable at 0x005b11df. Too many branches
                    // WARNING: Treating indirect jump as call
  except1();
  return;
}


void _dynamic_atexit_destructor_for__rnr__(void)

{
  return;
}
