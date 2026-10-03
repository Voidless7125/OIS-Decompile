#include "../ois.exe.h"


// public: virtual __thiscall StackWalker::~StackWalker(void)

void __thiscall StackWalker::~StackWalker(StackWalker *this)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b1790;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(void **)(this + 0x14) != (void *)0x0) {
    free(*(void **)(this + 0x14));
  }
  puVar1 = *(undefined4 **)(this + 4);
  *(undefined4 *)(this + 0x14) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    local_8 = 0;
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
  *(undefined4 *)(this + 4) = 0;
  ExceptionList = local_10;
  return;
}


// WARNING: Type propagation algorithm not settling
// public: int __thiscall StackWalker::LoadModules(void)

int __thiscall StackWalker::LoadModules(StackWalker *this)

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
  
  local_c = ___security_cookie ^ (uint)auStack_664;
  local_650 = this;
  if (*(int *)(this + 4) == 0) {
LAB_00595e5d:
    SetLastError(0x45a);
    iVar2 = __security_check_cookie(local_c ^ (uint)auStack_664);
    return iVar2;
  }
  if (*(int *)(this + 0x10) != 0) {
    iVar2 = __security_check_cookie(local_c ^ (uint)auStack_664);
    return iVar2;
  }
  _Dst = (char *)0x0;
  if (((byte)this[0x18] & 0x10) != 0) {
    _Dst = malloc(0x1000);
    if (_Dst == (char *)0x0) {
      SetLastError(8);
      iVar2 = __security_check_cookie(local_c ^ (uint)auStack_664);
      return iVar2;
    }
    *_Dst = '\0';
    if (*(char **)(this + 0x14) != (char *)0x0) {
      strcat_s(_Dst,0x1000,*(char **)(this + 0x14));
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
    if (((byte)this[0x18] & 0x20) != 0) {
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
  iVar2 = StackWalkerInternal::Init(*(StackWalkerInternal **)(this + 4),_Dst);
  if (_Dst != (char *)0x0) {
    free(_Dst);
  }
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))("Error while initializing dbghelp.dll");
    goto LAB_00595e5d;
  }
  local_644 = *(undefined4 *)(this + 0xc);
  uVar9 = 0;
  local_64c = *(void **)(this + 8);
  local_648 = *(StackWalkerInternal **)(this + 4);
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
    iVar2 = StackWalkerInternal::GetModuleListPSAPI(local_648,local_64c);
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
  iVar2 = __security_check_cookie(local_c ^ (uint)auStack_664);
  return iVar2;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// public: int __thiscall StackWalker::ShowCallstack(void *,struct _CONTEXT const *,int
// (__stdcall*)(void *,unsigned __int64,void *,unsigned long,unsigned long *,void *),void *)

int __thiscall
StackWalker::ShowCallstack
          (StackWalker *this,void *param_1,_CONTEXT *param_2,
          _func_int_void_ptr___uint64_void_ptr_ulong_ulong_ptr_void_ptr *param_3,void *param_4)

{
  HANDLE pvVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  _CONTEXT *p_Var5;
  CONTEXT *pCVar6;
  DWORD DVar7;
  IMAGEHLP_MODULE64_V3 *pIVar8;
  undefined4 local_22c4;
  undefined4 local_22c0;
  undefined4 local_22bc;
  char *local_22b8;
  undefined4 local_22b4;
  undefined4 local_22b0;
  IMAGEHLP_MODULE64_V3 *local_22ac;
  uint local_22a8;
  undefined4 local_22a4;
  int local_22a0;
  int local_229c;
  undefined4 *local_2298;
  char local_2291;
  StackWalker *local_2290;
  DWORD local_228c;
  int local_2288;
  char local_2284 [1024];
  undefined1 local_1e84 [1024];
  undefined1 local_1a84 [1024];
  undefined8 local_1684;
  undefined4 local_167c;
  undefined4 local_1678;
  char local_1674 [1028];
  char *local_1270;
  char local_126c [1024];
  undefined4 local_e6c;
  undefined4 local_e68;
  char local_e64 [1024];
  undefined4 local_a64 [2];
  undefined4 local_a5c;
  undefined4 local_a58;
  undefined4 local_a44;
  char local_a40 [288];
  char local_920 [1348];
  CONTEXT local_3dc;
  DWORD local_110;
  int local_10c;
  undefined4 local_104;
  DWORD local_100;
  int local_fc;
  undefined1 *local_f0;
  undefined4 local_ec;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined4 local_d4;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_2298 = (undefined4 *)0x0;
  local_2291 = '\x01';
  local_229c = 0;
  local_2290 = this;
  if (*(int *)(this + 0x10) == 0) {
    LoadModules(this);
  }
  if (*(int *)(*(int *)(local_2290 + 4) + 4) == 0) {
    SetLastError(0x45a);
  }
  else {
    DAT_0065e380 = param_3;
    DAT_0065e37c = param_4;
    if (param_2 == (_CONTEXT *)0x0) {
      pvVar1 = GetCurrentThread();
      if (param_1 == pvVar1) {
        memset(&local_3dc,0,0x2cc);
        local_3dc.ContextFlags = 0x10007;
        local_3dc.Eip = 0x5960cd;
        local_3dc.Ebp = (DWORD)&stack0xfffffffc;
        local_3dc.Esp = (DWORD)&stack0xffffdd34;
      }
      else {
        SuspendThread(param_1);
        memset(&local_3dc,0,0x2cc);
        local_3dc.ContextFlags = 0x10007;
        BVar2 = GetThreadContext(param_1,&local_3dc);
        if (BVar2 == 0) {
          ResumeThread(param_1);
          goto LAB_005967c5;
        }
      }
    }
    else {
      p_Var5 = param_2;
      pCVar6 = &local_3dc;
      for (iVar4 = 0xb3; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->ContextFlags = p_Var5->ContextFlags;
        p_Var5 = (_CONTEXT *)&p_Var5->Dr0;
        pCVar6 = (CONTEXT *)&pCVar6->Dr0;
      }
    }
    memset(&local_110,0,0x108);
    local_22ac = (IMAGEHLP_MODULE64_V3 *)0x14c;
    local_110 = local_3dc.Eip;
    local_10c = 0;
    local_104 = 3;
    local_f0 = (undefined1 *)local_3dc.Ebp;
    local_ec = 0;
    local_e4 = 3;
    local_e0 = (undefined1 *)local_3dc.Esp;
    local_dc = 0;
    local_d4 = 3;
    local_2298 = malloc(0x420);
    if (local_2298 != (undefined4 *)0x0) {
      memset(local_2298,0,0x420);
      *local_2298 = 0x20;
      local_2298[6] = 0x400;
      local_22c0 = 0;
      local_22bc = 0;
      local_22b8 = (char *)0x0;
      local_22b4 = 0;
      local_22b0 = 0;
      local_22c4 = 0x18;
      memset(local_a64,0,0x688);
      local_a64[0] = 0x688;
      local_22a0 = 0;
      while (pIVar8 = local_22ac,
            iVar4 = (**(code **)(*(int *)(local_2290 + 4) + 0x38))
                              (local_22ac,*(int *)(local_2290 + 8),param_1,&local_110,&local_3dc,
                               myReadProcMem,*(undefined4 *)(*(int *)(local_2290 + 4) + 0x14),
                               *(undefined4 *)(*(int *)(local_2290 + 4) + 0x1c),0), iVar4 != 0) {
        local_228c = local_110;
        local_2288 = local_10c;
        local_2284[0] = '\0';
        local_1e84[0] = 0;
        local_1a84[0] = 0;
        local_1684 = 0;
        local_167c = 0;
        local_1674[0] = '\0';
        local_1678 = 0;
        local_e64[0] = '\0';
        local_126c[0] = '\0';
        if ((local_110 == local_100) && (local_10c == local_fc)) {
          if ((0 < *(int *)(local_2290 + 0x1c)) && (*(int *)(local_2290 + 0x1c) < local_229c)) {
            (**(code **)(*(int *)local_2290 + 0x10))
                      ("StackWalk64-Endless-Callstack!",0,local_110,local_10c);
            goto LAB_00596770;
          }
          local_229c = local_229c + 1;
        }
        else {
          local_229c = 0;
        }
        if (local_110 != 0 || local_10c != 0) {
          iVar4 = (**(code **)(*(int *)(local_2290 + 4) + 0x28))
                            (*(int *)(local_2290 + 8),local_110,local_10c,&local_1684,local_2298);
          if (iVar4 == 0) {
            DVar7 = local_110;
            iVar4 = local_10c;
            DVar3 = GetLastError();
            (**(code **)(*(int *)local_2290 + 0x10))("SymGetSymFromAddr64",DVar3,DVar7,iVar4);
          }
          else {
            FUN_00595000(local_2284,0x400,(char *)(local_2298 + 7));
            (**(code **)(*(int *)(local_2290 + 4) + 0x3c))(local_2298 + 7,local_1e84,0x400,0x1000);
            (**(code **)(*(int *)(local_2290 + 4) + 0x3c))(local_2298 + 7,local_1a84,0x400,0);
          }
          if (*(int *)(*(int *)(local_2290 + 4) + 0x18) != 0) {
            iVar4 = (**(code **)(*(int *)(local_2290 + 4) + 0x18))
                              (*(int *)(local_2290 + 8),local_110,local_10c,&local_167c,&local_22c4)
            ;
            if (iVar4 == 0) {
              DVar7 = local_110;
              iVar4 = local_10c;
              DVar3 = GetLastError();
              (**(code **)(*(int *)local_2290 + 0x10))("SymGetLineFromAddr64",DVar3,DVar7,iVar4);
            }
            else {
              local_1678 = local_22bc;
              FUN_00595000(local_1674,0x400,local_22b8);
            }
          }
          iVar4 = StackWalkerInternal::GetModuleInfo
                            (*(StackWalkerInternal **)(local_2290 + 4),*(void **)(local_2290 + 8),
                             CONCAT44(local_a64,local_10c),pIVar8);
          if (iVar4 == 0) {
            DVar7 = local_110;
            iVar4 = local_10c;
            DVar3 = GetLastError();
            (**(code **)(*(int *)local_2290 + 0x10))("SymGetModuleInfo64",DVar3,DVar7,iVar4);
          }
          else {
            local_22a4 = local_a44;
            switch(local_a44) {
            case 0:
              local_1270 = "-nosymbols-";
              break;
            case 1:
              local_1270 = "COFF";
              break;
            case 2:
              local_1270 = "CV";
              break;
            case 3:
              local_1270 = "PDB";
              break;
            case 4:
              local_1270 = "-exported-";
              break;
            case 5:
              local_1270 = "-deferred-";
              break;
            case 6:
              local_1270 = "SYM";
              break;
            case 7:
              local_1270 = "DIA";
              break;
            case 8:
              local_1270 = "Virtual";
              break;
            default:
              local_1270 = (char *)0x0;
            }
            FUN_00595000(local_126c,0x400,local_a40);
            local_e6c = local_a5c;
            local_e68 = local_a58;
            FUN_00595000(local_e64,0x400,local_920);
          }
        }
        local_22a8 = (uint)(local_22a0 != 0);
        local_2291 = '\0';
        (**(code **)(*(int *)local_2290 + 0xc))(local_22a8,&local_228c);
        if (local_100 == 0 && local_fc == 0) {
          local_2291 = '\x01';
          (**(code **)(*(int *)local_2290 + 0xc))(2,&local_228c);
          SetLastError(0);
          goto LAB_00596770;
        }
        local_22a0 = local_22a0 + 1;
      }
      (**(code **)(*(int *)local_2290 + 0x10))("StackWalk64",0,local_110,local_10c);
    }
LAB_00596770:
    if (local_2298 != (undefined4 *)0x0) {
      free(local_2298);
    }
    if (local_2291 == '\0') {
      (**(code **)(*(int *)local_2290 + 0xc))(2,&local_228c);
    }
    if (param_2 == (_CONTEXT *)0x0) {
      ResumeThread(param_1);
    }
  }
LAB_005967c5:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}


// protected: static int __stdcall StackWalker::myReadProcMem(void *,unsigned __int64,void
// *,unsigned long,unsigned long *)

int StackWalker::myReadProcMem
              (void *param_1,__uint64 param_2,void *param_3,ulong param_4,ulong *param_5)

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


// protected: virtual void __thiscall StackWalker::OnLoadModule(char const *,char const *,unsigned
// __int64,unsigned long,unsigned long,char const *,char const *,unsigned __int64)

void __thiscall
StackWalker::OnLoadModule
          (StackWalker *this,char *param_1,char *param_2,__uint64 param_3,ulong param_4,
          ulong param_5,char *param_6,char *param_7,__uint64 param_8)

{
  char local_408 [20];
  undefined4 uStack_3f4;
  char *pcStack_3f0;
  undefined4 uStack_3e8;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (param_8 == 0) {
    _snprintf_s<1024>(local_408,0x400,
                      "%s:%s (%p), size: %d (result: %d), SymType: \'%s\', PDB: \'%s\'\n",param_1,
                      param_2,(void *)param_3,param_4,param_5,param_6,param_7);
  }
  else {
    _snprintf_s<1024>(local_408,0x400,
                      "%s:%s (%p), size: %d (result: %d), SymType: \'%s\', PDB: \'%s\', fileVersion: %d.%d.%d.%d\n"
                      ,param_1,param_2,(void *)param_3,param_4,param_5,param_6,param_7,
                      param_8._4_4_ >> 0x10,(int)((param_8 & 0xffff0000ffff) >> 0x20),
                      (uint)param_8 >> 0x10,(int)(param_8 & 0xffff0000ffff));
  }
  pcStack_3f0 = local_408;
  uStack_3f4 = 0x59693a;
  (**(code **)(*(int *)this + 0x14))();
  uStack_3e8 = 0x596947;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: virtual void __thiscall StackWalker::OnCallstackEntry(enum
// StackWalker::CallstackEntryType,struct StackWalker::CallstackEntry &)

void __thiscall
StackWalker::OnCallstackEntry(StackWalker *this,CallstackEntryType param_1,CallstackEntry *param_2)

{
  CallstackEntry *_Dst;
  CallstackEntry *pCVar1;
  CallstackEntry CVar2;
  CallstackEntry *pCVar3;
  undefined4 **local_408 [255];
  undefined1 local_9;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
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
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: virtual void __thiscall StackWalker::OnDbgHelpErr(char const *,unsigned long,unsigned
// __int64)

void __thiscall
StackWalker::OnDbgHelpErr(StackWalker *this,char *param_1,ulong param_2,__uint64 param_3)

{
  char local_408 [4];
  undefined4 uStack_404;
  char *pcStack_400;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  _snprintf_s<1024>(local_408,0x400,"ERROR: %s, GetLastError: %d (Address: %p)\n",param_1,param_2,
                    (void *)param_3);
  pcStack_400 = local_408;
  uStack_404 = 0x596b68;
  (**(code **)(*(int *)this + 0x14))();
  pcStack_400 = (char *)0x596b73;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: virtual void __thiscall StackWalker::OnSymInit(char const *,unsigned long,char const
// *)

void __thiscall StackWalker::OnSymInit(StackWalker *this,char *param_1,ulong param_2,char *param_3)

{
  BOOL BVar1;
  undefined1 local_490 [24];
  CHAR aCStack_478 [4];
  char *pcStack_474;
  ushort local_40c;
  byte local_40a;
  char local_408 [1024];
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
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
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: virtual void __thiscall StackWalker::OnOutput(char const *)

void __thiscall StackWalker::OnOutput(StackWalker *this,char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00596c60. Too many branches
                    // WARNING: Treating indirect jump as call
  OutputDebugStringA(param_1);
  return;
}
