// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: StackWalkerInternal * __thiscall StackWalkerInternal::StackWalkerInternal (StackWalkerInternal *this,StackWalker *param_1,void *param_2)
StackWalkerInternal::StackWalkerInternal(StackWalker * param_1, void * param_2)

{
  *(StackWalker **)this = param_1;
  *(void **)((char *)this + 8) = param_2;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0xc) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0;
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x20) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0;
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0;
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0;
  *(undefined4 *)((char *)this + 0x3c) = 0;
  *(undefined4 *)((char *)this + 0x40) = 0;
  return;
}


// Ghidra: int __thiscall StackWalkerInternal::Init(StackWalkerInternal *this,char *param_1)
int StackWalkerInternal::Init(char * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  DWORD DVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  char *pcVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  DWORD local_2818;
  char *local_2814;
  WCHAR local_2810 [4096];
  undefined1 local_810 [1024];
  CHAR local_410 [1028];
  uint local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x5950dd;
  // [cookie] local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_2814 = param_1;
  if (*(int *)this != 0) {
    DVar1 = GetModuleFileNameW((HMODULE)0x0,local_2810,0x1000);
    if (DVar1 != 0) {
      wcscat_s(local_2810,0x1000,L".local");
      DVar1 = GetFileAttributesW(local_2810);
      param_1 = local_2814;
      if ((DVar1 == 0xffffffff) && (*(int *)((char *)this + 4) == 0)) {
        DVar1 = GetEnvironmentVariableW(L"ProgramFiles",local_2810,0x1000);
        if (DVar1 != 0) {
          wcscat_s(local_2810,0x1000,L"\\Debugging Tools for Windows (x86)\\dbghelp.dll");
          DVar1 = GetFileAttributesW(local_2810);
          if (DVar1 != 0xffffffff) {
            pHVar2 = LoadLibraryW(local_2810);
            *(HMODULE *)((char *)this + 4) = pHVar2;
          }
        }
        param_1 = local_2814;
        if ((*(int *)((char *)this + 4) == 0) &&
           (DVar1 = GetEnvironmentVariableW(L"ProgramFiles",local_2810,0x1000), param_1 = local_2814
           , DVar1 != 0)) {
          wcscat_s(local_2810,0x1000,L"\\Debugging Tools for Windows\\dbghelp.dll");
          DVar1 = GetFileAttributesW(local_2810);
          param_1 = local_2814;
          if (DVar1 != 0xffffffff) {
            pHVar2 = LoadLibraryW(local_2810);
            *(HMODULE *)((char *)this + 4) = pHVar2;
            param_1 = local_2814;
          }
        }
      }
    }
    pHVar2 = *(HMODULE *)((char *)this + 4);
    if (pHVar2 == (HMODULE)0x0) {
      pHVar2 = LoadLibraryW(L"dbghelp.dll");
      *(HMODULE *)((char *)this + 4) = pHVar2;
      if (pHVar2 == (HMODULE)0x0) goto LAB_00595455;
    }
    pFVar3 = GetProcAddress(pHVar2,"SymInitialize");
    *(FARPROC *)((char *)this + 0x2c) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymCleanup");
    *(FARPROC *)((char *)this + 0x10) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"StackWalk64");
    *(FARPROC *)((char *)this + 0x38) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymGetOptions");
    *(FARPROC *)((char *)this + 0x24) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymSetOptions");
    *(FARPROC *)((char *)this + 0x34) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymFunctionTableAccess64");
    *(FARPROC *)((char *)this + 0x14) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymGetLineFromAddr64");
    *(FARPROC *)((char *)this + 0x18) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymGetModuleBase64");
    *(FARPROC *)((char *)this + 0x1c) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymGetModuleInfo64");
    *(FARPROC *)((char *)this + 0x20) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymGetSymFromAddr64");
    *(FARPROC *)((char *)this + 0x28) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"UnDecorateSymbolName");
    *(FARPROC *)((char *)this + 0x3c) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymLoadModule64");
    *(FARPROC *)((char *)this + 0x30) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)((char *)this + 4),"SymGetSearchPath");
    *(FARPROC *)((char *)this + 0x40) = pFVar3;
    if ((((((*(int *)((char *)this + 0x10) != 0) && (*(int *)((char *)this + 0x14) != 0)) &&
          (*(int *)((char *)this + 0x1c) != 0)) &&
         ((*(int *)((char *)this + 0x20) != 0 && (*(int *)((char *)this + 0x24) != 0)))) &&
        ((*(int *)((char *)this + 0x28) != 0 &&
         ((pcVar5 = *(code **)((char *)this + 0x2c), pcVar5 != (code *)0x0 && (*(int *)((char *)this + 0x34) != 0)))
         ))) && ((*(int *)((char *)this + 0x38) != 0 &&
                 ((*(int *)((char *)this + 0x3c) != 0 && (*(int *)((char *)this + 0x30) != 0)))))) {
      if (param_1 != (char *)0x0) {
        pcVar4 = _strdup(param_1);
        *(char **)((char *)this + 0xc) = pcVar4;
        pcVar5 = *(code **)((char *)this + 0x2c);
      }
      iVar6 = (*pcVar5)(*(undefined4 *)((char *)this + 8),*(undefined4 *)((char *)this + 0xc),0);
      if (iVar6 == 0) {
        uVar9 = 0;
        uVar8 = 0;
        iVar6 = **(int **)this;
        DVar1 = GetLastError();
        (**(code **)(iVar6 + 0x10))("SymInitialize",DVar1,uVar8,uVar9);
      }
      uVar7 = (**(code **)((char *)this + 0x24))();
      local_2814 = (char *)(**(code **)((char *)this + 0x34))(uVar7 | 0x210);
      memset(local_810,0,0x400);
      if ((*(code **)((char *)this + 0x40) != (code *)0x0) &&
         (iVar6 = (**(code **)((char *)this + 0x40))(*(undefined4 *)((char *)this + 8),local_810,0x400), iVar6 == 0)
         ) {
        uVar9 = 0;
        uVar8 = 0;
        iVar6 = **(int **)this;
        DVar1 = GetLastError();
        (**(code **)(iVar6 + 0x10))("SymGetSearchPath",DVar1,uVar8,uVar9);
      }
      memset(local_410,0,0x400);
      local_2818 = 0x400;
      GetUserNameA(local_410,&local_2818);
      (**(code **)(**(int **)this + 4))(local_810,local_2814,local_410);
      // [cookie] iVar6 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return iVar6;
    }
    FreeLibrary(*(HMODULE *)((char *)this + 4));
    *(undefined4 *)((char *)this + 4) = 0;
    *(undefined4 *)((char *)this + 0x10) = 0;
  }
LAB_00595455:
  // [cookie] iVar6 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return iVar6;
}


// Ghidra: int __thiscall StackWalkerInternal::GetModuleListPSAPI(StackWalkerInternal *this,void *param_1)
int StackWalkerInternal::GetModuleListPSAPI(void * param_1)

{
  char *pcVar1;
  HMODULE hModule;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  char *_Memory;
  ulong unaff_EDI;
  int iVar5;
  int local_38;
  undefined4 local_34;
  HMODULE local_2c;
  FARPROC local_28;
  uint local_24;
  StackWalkerInternal *local_20;
  FARPROC local_1c;
  FARPROC local_18;
  FARPROC local_14;
  char *local_10;
  void *local_c;
  char *local_8;
  
  iVar5 = 0;
  local_20 = this;
  hModule = LoadLibraryW(L"psapi.dll");
  if (hModule != (HMODULE)0x0) {
    local_2c = hModule;
    local_14 = GetProcAddress(hModule,"EnumProcessModules");
    local_18 = GetProcAddress(hModule,"GetModuleFileNameExA");
    local_1c = GetProcAddress(hModule,"GetModuleBaseNameA");
    local_28 = GetProcAddress(hModule,"GetModuleInformation");
    if ((((local_14 != (FARPROC)0x0) && (local_18 != (FARPROC)0x0)) && (local_1c != (FARPROC)0x0))
       && (local_28 != (FARPROC)0x0)) {
      local_c = malloc(0x1fa0);
      local_8 = malloc(0x1fa0);
      local_10 = malloc(0x1fa0);
      _Memory = local_8;
      if ((((local_c != (void *)0x0) && (local_8 != (char *)0x0)) &&
          ((local_10 != (char *)0x0 &&
           ((iVar2 = (*local_14)(param_1,local_c,0x1fa0,&local_24), pcVar1 = local_8, iVar2 != 0 &&
            (local_24 < 0x1fa1)))))) && (uVar4 = 0, _Memory = local_8, (local_24 & 0xfffffffc) != 0)
         ) {
        do {
          (*local_28)(param_1,*(undefined4 *)((int)local_c + uVar4 * 4),&local_38,0xc);
          *pcVar1 = '\0';
          (*local_18)(param_1,*(undefined4 *)((int)local_c + uVar4 * 4),pcVar1,0x1fa0);
          *local_10 = '\0';
          (*local_1c)(param_1,*(undefined4 *)((int)local_c + uVar4 * 4),local_10,0x1fa0);
          uVar3 = LoadModule(local_20,param_1,pcVar1,local_10,CONCAT44(local_34,local_38 >> 0x1f),
                             unaff_EDI);
          if (uVar3 != 0) {
            (**(code **)(**(int **)local_20 + 0x10))("LoadModule",uVar3,0,0);
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 1;
          hModule = local_2c;
          _Memory = local_8;
        } while (uVar4 < local_24 >> 2);
      }
      FreeLibrary(hModule);
      if (local_10 != (char *)0x0) {
        free(local_10);
      }
      if (_Memory != (char *)0x0) {
        free(_Memory);
      }
      if (local_c != (void *)0x0) {
        free(local_c);
      }
      return (uint)(iVar5 != 0);
    }
    FreeLibrary(hModule);
  }
  return 0;
}


// Ghidra: int __thiscall StackWalkerInternal::GetModuleInfo (StackWalkerInternal *this,void *param_1,__uint64 param_2,IMAGEHLP_MODULE64_V3 *param_3)
int StackWalkerInternal::GetModuleInfo(void * param_1, __uint64 param_2, IMAGEHLP_MODULE64_V3 * param_3)

{
  undefined4 *_Memory;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 in_stack_00000008;
  
  memset(param_2._4_4_,0,0x688);
  if (*(int *)((char *)this + 0x20) != 0) {
    *param_2._4_4_ = 0x688;
    _Memory = malloc(0x1000);
    if (_Memory == (undefined4 *)0x0) {
      SetLastError(8);
      return 0;
    }
    bVar4 = `public:_int___thiscall_StackWalkerInternal::GetModuleInfo(void*,unsigned___int64,StackWalkerInternal::IMAGEHLP_MODULE64_V3*)'
            ::__l2::s_useV3Version != false;
    puVar2 = param_2._4_4_;
    puVar3 = _Memory;
    for (iVar1 = 0x1a2; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    if (bVar4) {
      iVar1 = (**(code **)((char *)this + 0x20))(param_1,in_stack_00000008,(undefined4)param_2,_Memory);
      if (iVar1 != 0) {
        puVar2 = _Memory;
        puVar3 = param_2._4_4_;
        for (iVar1 = 0x1a2; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        *param_2._4_4_ = 0x688;
        free(_Memory);
        return 1;
      }
      `public:_int___thiscall_StackWalkerInternal::GetModuleInfo(void*,unsigned___int64,StackWalkerInternal::IMAGEHLP_MODULE64_V3*)'
      ::__l2::s_useV3Version = false;
    }
    *param_2._4_4_ = 0x248;
    puVar2 = param_2._4_4_;
    puVar3 = _Memory;
    for (iVar1 = 0x92; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = (**(code **)((char *)this + 0x20))(param_1,in_stack_00000008,(undefined4)param_2,_Memory);
    if (iVar1 != 0) {
      puVar2 = _Memory;
      puVar3 = param_2._4_4_;
      for (iVar1 = 0x92; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *param_2._4_4_ = 0x248;
      free(_Memory);
      return 1;
    }
    free(_Memory);
  }
  SetLastError(0x45a);
  return 0;
}
