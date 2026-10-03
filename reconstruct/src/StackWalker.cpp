// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall StackWalker::~StackWalker(StackWalker *this)
StackWalker::~StackWalker()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  uint uVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b1790;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  if (*(void **)((char *)this + 0x14) != (void *)0x0) {
    free(*(void **)((char *)this + 0x14));
  }
  puVar1 = *(undefined4 **)((char *)this + 4);
  *(undefined4 *)((char *)this + 0x14) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    // [seh] local_8 = 0;
    if ((code *)puVar1[4] != (code *)0x0) {
      (*(code *)puVar1[4])(puVar1[2],uVar2);
    }
    if ((HMODULE)puVar1[1] != (HMODULE)0x0) {
      FreeLibrary((HMODULE)puVar1[1]);
    }
    puVar1[1] = 0;
    *puVar1 = 0;
    if ((void *)puVar1[3] != (void *)0x0) {
      free((void *)puVar1[3]);
    }
    puVar1[3] = 0;
    operator_delete(puVar1,(nothrow_t *)&DAT_00000044);
  }
  *(undefined4 *)((char *)this + 4) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: int __thiscall StackWalker::LoadModules(StackWalker *this)
int StackWalker::LoadModules()

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  HMODULE hLibModule;
  HANDLE hObject;
  char *pcVar4;
  char *pcVar5;
  code *pcVar6;
  code *pcVar7;
  StackWalker *pSVar8;
  char *_Dst;
  ulong unaff_EDI;
  uint uVar9;
  undefined1 auStack_664 [4];
  code *local_660;
  code *local_65c;
  code *local_658;
  HMODULE local_654;
  StackWalker *local_650;
  void *local_64c;
  StackWalkerInternal *local_648;
  undefined4 local_644;
  wchar_t *local_640 [7];
  int iStack_624;
  undefined4 uStack_620;
  char acStack_618 [256];
  char acStack_518 [264];
  CHAR local_410 [1023];
  undefined1 local_11;
  uint local_c;
  
  // [cookie] local_c = ___security_cookie ^ (uint)auStack_664;
  local_650 = this;
  if (*(int *)((char *)this + 4) == 0) {
LAB_00595e5d:
    SetLastError(0x45a);
    // [cookie] iVar2 = __security_check_cookie(local_c ^ (uint)auStack_664);
    return iVar2;
  }
  if (*(int *)((char *)this + 0x10) != 0) {
    // [cookie] iVar2 = __security_check_cookie(local_c ^ (uint)auStack_664);
    return iVar2;
  }
  _Dst = (char *)0x0;
  if (((byte)((char *)this)[0x18] & 0x10) != 0) {
    _Dst = malloc(0x1000);
    if (_Dst == (char *)0x0) {
      SetLastError(8);
      // [cookie] iVar2 = __security_check_cookie(local_c ^ (uint)auStack_664);
      return iVar2;
    }
    *_Dst = '\0';
    if (*(char **)((char *)this + 0x14) != (char *)0x0) {
      strcat_s(_Dst,0x1000,*(char **)((char *)this + 0x14));
      strcat_s(_Dst,0x1000,";");
    }
    strcat_s(_Dst,0x1000,".;");
    DVar3 = GetCurrentDirectoryA(0x400,local_410);
    if (DVar3 != 0) {
      local_11 = 0;
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,";");
    }
    DVar3 = GetModuleFileNameA((HMODULE)0x0,local_410,0x400);
    if (DVar3 != 0) {
      local_11 = 0;
      pcVar5 = local_410;
      do {
        pcVar4 = pcVar5;
        pcVar5 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      pcVar4 = pcVar4 + -1;
      if (local_410 <= pcVar4) {
        do {
          cVar1 = *pcVar4;
          if (((cVar1 == '\\') || (cVar1 == '/')) || (cVar1 == ':')) {
            *pcVar4 = '\0';
            break;
          }
          pcVar4 = pcVar4 + -1;
        } while (local_410 <= pcVar4);
      }
      pcVar5 = local_410;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (pcVar5 != local_410 + 1) {
        strcat_s(_Dst,0x1000,local_410);
        strcat_s(_Dst,0x1000,";");
      }
    }
    DVar3 = GetEnvironmentVariableA("_NT_SYMBOL_PATH",local_410,0x400);
    if (DVar3 != 0) {
      local_11 = 0;
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,";");
    }
    DVar3 = GetEnvironmentVariableA("_NT_ALTERNATE_SYMBOL_PATH",local_410,0x400);
    if (DVar3 != 0) {
      local_11 = 0;
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,";");
    }
    DVar3 = GetEnvironmentVariableA("SYSTEMROOT",local_410,0x400);
    if (DVar3 != 0) {
      local_11 = 0;
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,";");
      strcat_s(local_410,0x400,"\\system32");
      strcat_s(_Dst,0x1000,local_410);
      strcat_s(_Dst,0x1000,";");
    }
    if (((byte)((char *)this)[0x18] & 0x20) != 0) {
      DVar3 = GetEnvironmentVariableA("SYSTEMDRIVE",local_410,0x400);
      if (DVar3 == 0) {
        pcVar5 = "SRV*c:\\websymbols*http://msdl.microsoft.com/download/symbols;";
      }
      else {
        local_11 = 0;
        strcat_s(_Dst,0x1000,"SRV*");
        strcat_s(_Dst,0x1000,local_410);
        strcat_s(_Dst,0x1000,"\\websymbols");
        pcVar5 = "*http://msdl.microsoft.com/download/symbols;";
      }
      strcat_s(_Dst,0x1000,pcVar5);
    }
  }
  iVar2 = (*(StackWalkerInternal **)((char *)this + 4))->Init(_Dst);
  if (_Dst != (char *)0x0) {
    free(_Dst);
  }
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))("Error while initializing dbghelp.dll");
    goto LAB_00595e5d;
  }
  local_644 = *(undefined4 *)((char *)this + 0xc);
  uVar9 = 0;
  local_64c = *(void **)((char *)this + 8);
  local_648 = *(StackWalkerInternal **)((char *)this + 4);
  local_640[0] = L"kernel32.dll";
  local_640[1] = L"tlhelp32.dll";
  local_660 = (code *)0x0;
  local_65c = (code *)0x0;
  local_658 = (code *)0x0;
  local_640[2] = (wchar_t *)0x224;
  pcVar6 = GetProcAddress_exref;
  do {
    hLibModule = LoadLibraryW(local_640[uVar9]);
    local_654 = hLibModule;
    if (hLibModule != (HMODULE)0x0) {
      (*pcVar6)();
      (*pcVar6)(hLibModule);
      local_658 = (code *)(*pcVar6)(hLibModule,"Module32Next");
      if (((local_660 != (code *)0x0) && (local_65c != (code *)0x0)) && (local_658 != (code *)0x0))
      break;
      FreeLibrary(hLibModule);
      local_654 = (HMODULE)0x0;
      pcVar6 = GetProcAddress_exref;
    }
    uVar9 = uVar9 + 1;
    hLibModule = local_654;
  } while (uVar9 < 2);
  pSVar8 = local_650;
  if (hLibModule == (HMODULE)0x0) {
LAB_00595f58:
    iVar2 = (local_648)->GetModuleListPSAPI(local_64c);
    if (iVar2 == 0) goto LAB_00595f70;
  }
  else {
    hObject = (HANDLE)(*local_660)();
    if (hObject == (HANDLE)0xffffffff) {
      FreeLibrary(hLibModule);
      goto LAB_00595f58;
    }
    local_660 = (code *)0x0;
    iVar2 = (*local_65c)();
    pcVar6 = local_658;
    pcVar7 = local_660;
    if (iVar2 != 0) {
      pcVar7 = (code *)0x0;
      do {
        StackWalkerInternal::LoadModule
                  (local_648,local_64c,acStack_518,acStack_618,
                   CONCAT44(uStack_620,iStack_624 >> 0x1f),unaff_EDI);
        pcVar7 = pcVar7 + 1;
        iVar2 = (*pcVar6)();
        pSVar8 = local_650;
        hLibModule = local_654;
      } while (iVar2 != 0);
    }
    local_660 = pcVar7;
    CloseHandle(hObject);
    FreeLibrary(hLibModule);
    if ((int)local_660 < 1) goto LAB_00595f58;
  }
  *(undefined4 *)(pSVar8 + 0x10) = 1;
LAB_00595f70:
  // [cookie] iVar2 = __security_check_cookie(local_c ^ (uint)auStack_664);
  return iVar2;
}


// Ghidra: int StackWalker::myReadProcMem (void *param_1,__uint64 param_2,void *param_3,ulong param_4,ulong *param_5)
int StackWalker::myReadProcMem(void * param_1, __uint64 param_2, void * param_3, ulong param_4, ulong * param_5)

{
  BOOL BVar1;
  int iVar2;
  LPCVOID in_stack_00000008;
  SIZE_T local_8;
  
  if (DAT_0065e380 == (code *)0x0) {
    BVar1 = ReadProcessMemory(param_1,in_stack_00000008,param_2._4_4_,(SIZE_T)param_3,&local_8);
    *(SIZE_T *)param_4 = local_8;
    return BVar1;
  }
  iVar2 = (*DAT_0065e380)(param_1);
  return iVar2;
}


// Ghidra: void __thiscall StackWalker::OnCallstackEntry(StackWalker *this,CallstackEntryType param_1,CallstackEntry *param_2)
void StackWalker::OnCallstackEntry(CallstackEntryType param_1, CallstackEntry * param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  CallstackEntry *_Dst;
  CallstackEntry *pCVar1;
  CallstackEntry CVar2;
  CallstackEntry *pCVar3;
  undefined4 **local_408 [255];
  undefined1 local_9;
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if ((param_1 != 2) && (*(int *)param_2 != 0 || *(int *)(param_2 + 4) != 0)) {
    _Dst = param_2 + 8;
    if (param_2[8] == (CallstackEntry)0x0) {
      strcpy_s((char *)_Dst,0x400,"(function-name not available)");
    }
    pCVar1 = param_2 + 0x408;
    if (param_2[0x408] != (CallstackEntry)0x0) {
      pCVar3 = pCVar1;
      do {
        CVar2 = *pCVar3;
        pCVar3 = pCVar3 + 1;
      } while (CVar2 != (CallstackEntry)0x0);
      if ((uint)((int)pCVar3 - (int)(param_2 + 0x409)) < 0x400) {
        strcpy_s((char *)_Dst,0x400,(char *)pCVar1);
      }
      else {
        strncpy_s((char *)_Dst,0x400,(char *)pCVar1,0x400);
        param_2[0x407] = (CallstackEntry)0x0;
      }
    }
    pCVar1 = param_2 + 0x808;
    if (param_2[0x808] != (CallstackEntry)0x0) {
      pCVar3 = pCVar1;
      do {
        CVar2 = *pCVar3;
        pCVar3 = pCVar3 + 1;
      } while (CVar2 != (CallstackEntry)0x0);
      if ((uint)((int)pCVar3 - (int)(param_2 + 0x809)) < 0x400) {
        strcpy_s((char *)_Dst,0x400,(char *)pCVar1);
      }
      else {
        strncpy_s((char *)_Dst,0x400,(char *)pCVar1,0x400);
        param_2[0x407] = (CallstackEntry)0x0;
      }
    }
    pCVar1 = param_2 + 0xc18;
    if (param_2[0xc18] == (CallstackEntry)0x0) {
      strcpy_s((char *)pCVar1,0x400,"(filename not available)");
      if (param_2[0x1020] == (CallstackEntry)0x0) {
        strcpy_s((char *)(param_2 + 0x1020),0x400,"(module-name not available)");
      }
      _snprintf_s<1024>((char *)local_408,0x400,"%p (%s): %s: %s\n",*(void **)param_2,
                        (char *)(param_2 + 0x1020),(char *)pCVar1,(char *)_Dst);
    }
    else {
      _snprintf_s<1024>((char *)local_408,0x400,"%s (%d): %s\n",(char *)pCVar1,
                        *(int *)(param_2 + 0xc14),(char *)_Dst);
    }
    local_408[0] = local_408;
    local_9 = 0;
    (**(code **)(*(int *)this + 0x14))();
  }
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall StackWalker::OnDbgHelpErr(StackWalker *this,char *param_1,ulong param_2,__uint64 param_3)
void StackWalker::OnDbgHelpErr(char * param_1, ulong param_2, __uint64 param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char local_408 [4];
  undefined4 uStack_404;
  char *pcStack_400;
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  _snprintf_s<1024>(local_408,0x400,"ERROR: %s, GetLastError: %d (Address: %p)\n",param_1,param_2,
                    (void *)param_3);
  pcStack_400 = local_408;
  uStack_404 = 0x596b68;
  (**(code **)(*(int *)this + 0x14))();
  pcStack_400 = (char *)0x596b73;
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall StackWalker::OnSymInit(StackWalker *this,char *param_1,ulong param_2,char *param_3)
void StackWalker::OnSymInit(char * param_1, ulong param_2, char * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffb60[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffb5c[1] = {0};  // [pseudo] address of an unnamed stack slot
  BOOL BVar1;
  undefined1 local_490 [24];
  CHAR aCStack_478 [4];
  char *pcStack_474;
  ushort local_40c;
  byte local_40a;
  char local_408 [1024];
  uint local_8;
  
  // [cookie] local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  _snprintf_s<1024>(local_408,0x400,
                    "SymInit: Symbol-SearchPath: \'%s\', symOptions: %d, UserName: \'%s\'\n",param_1
                    ,param_2,param_3);
  (**(code **)(*(int *)this + 0x14))();
  memset(&stack0xfffffb60,0,0x98);
  BVar1 = GetVersionExA((LPOSVERSIONINFOA)&stack0xfffffb5c);
  if (BVar1 != 0) {
    _snprintf_s<1024>(local_408,0x400,"OS-Version: %d.%d.%d (%s) 0x%x-0x%x\n",(int)local_490,
                      (uint)local_40c,(uint)local_40a,local_490,(uint)local_40c,(uint)local_40a);
    pcStack_474 = local_408;
    builtin_memcpy(aCStack_478,"IlY",4);
    (**(code **)(*(int *)this + 0x14))();
  }
  // [cookie] __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall StackWalker::OnOutput(StackWalker *this,char *param_1)
void StackWalker::OnOutput(char * param_1)

{
                    // WARNING: Could not recover jumptable at 0x00596c60. Too many branches
                    // WARNING: Treating indirect jump as call
  OutputDebugStringA(param_1);
  return;
}
