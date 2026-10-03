#include "../ois_server.exe.h"


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __thiscall
FUN_005942f0(void *this,HANDLE param_1,DWORD *param_2,undefined4 param_3,undefined4 param_4)

{
  HANDLE pvVar1;
  BOOL BVar2;
  int iVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  CONTEXT *pCVar6;
  DWORD DVar7;
  undefined4 local_22c4;
  undefined4 local_22c0;
  undefined4 local_22bc;
  char *local_22b8;
  undefined4 local_22b4;
  undefined4 local_22b0;
  undefined4 local_22ac;
  uint local_22a8;
  undefined4 local_22a4;
  int local_22a0;
  int local_229c;
  undefined4 *local_2298;
  char local_2291;
  int *local_2290;
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
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_2298 = (undefined4 *)0x0;
  local_2291 = '\x01';
  local_229c = 0;
  local_2290 = this;
  if (*(int *)((int)this + 0x10) == 0) {
    FUN_00593dd0(this);
  }
  if (*(int *)(local_2290[1] + 4) == 0) {
    SetLastError(0x45a);
  }
  else {
    DAT_0065c248 = param_3;
    DAT_0065c244 = param_4;
    if (param_2 == (DWORD *)0x0) {
      pvVar1 = GetCurrentThread();
      if (param_1 == pvVar1) {
        memset(&local_3dc,0,0x2cc);
        local_3dc.ContextFlags = 0x10007;
        local_3dc.Eip = 0x5943ad;
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
          goto LAB_00594aa5;
        }
      }
    }
    else {
      pDVar5 = param_2;
      pCVar6 = &local_3dc;
      for (iVar3 = 0xb3; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar6->ContextFlags = *pDVar5;
        pDVar5 = pDVar5 + 1;
        pCVar6 = (CONTEXT *)&pCVar6->Dr0;
      }
    }
    memset(&local_110,0,0x108);
    local_22ac = 0x14c;
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
      while (iVar3 = (**(code **)(local_2290[1] + 0x38))
                               (local_22ac,local_2290[2],param_1,&local_110,&local_3dc,FUN_00594ae0,
                                *(undefined4 *)(local_2290[1] + 0x14),
                                *(undefined4 *)(local_2290[1] + 0x1c),0), iVar3 != 0) {
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
          if ((0 < local_2290[7]) && (local_2290[7] < local_229c)) {
            (**(code **)(*local_2290 + 0x10))
                      ("StackWalk64-Endless-Callstack!",0,local_110,local_10c);
            goto LAB_00594a50;
          }
          local_229c = local_229c + 1;
        }
        else {
          local_229c = 0;
        }
        if (local_110 != 0 || local_10c != 0) {
          iVar3 = (**(code **)(local_2290[1] + 0x28))
                            (local_2290[2],local_110,local_10c,&local_1684,local_2298);
          if (iVar3 == 0) {
            DVar7 = local_110;
            iVar3 = local_10c;
            DVar4 = GetLastError();
            (**(code **)(*local_2290 + 0x10))("SymGetSymFromAddr64",DVar4,DVar7,iVar3);
          }
          else {
            FUN_005932d0(local_2284,0x400,(char *)(local_2298 + 7));
            (**(code **)(local_2290[1] + 0x3c))(local_2298 + 7,local_1e84,0x400,0x1000);
            (**(code **)(local_2290[1] + 0x3c))(local_2298 + 7,local_1a84,0x400,0);
          }
          if (*(int *)(local_2290[1] + 0x18) != 0) {
            iVar3 = (**(code **)(local_2290[1] + 0x18))
                              (local_2290[2],local_110,local_10c,&local_167c,&local_22c4);
            if (iVar3 == 0) {
              DVar7 = local_110;
              iVar3 = local_10c;
              DVar4 = GetLastError();
              (**(code **)(*local_2290 + 0x10))("SymGetLineFromAddr64",DVar4,DVar7,iVar3);
            }
            else {
              local_1678 = local_22bc;
              FUN_005932d0(local_1674,0x400,local_22b8);
            }
          }
          iVar3 = FUN_00593ba0((void *)local_2290[1],local_2290[2],local_110,local_10c,local_a64);
          if (iVar3 == 0) {
            DVar7 = local_110;
            iVar3 = local_10c;
            DVar4 = GetLastError();
            (**(code **)(*local_2290 + 0x10))("SymGetModuleInfo64",DVar4,DVar7,iVar3);
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
            FUN_005932d0(local_126c,0x400,local_a40);
            local_e6c = local_a5c;
            local_e68 = local_a58;
            FUN_005932d0(local_e64,0x400,local_920);
          }
        }
        local_22a8 = (uint)(local_22a0 != 0);
        local_2291 = '\0';
        (**(code **)(*local_2290 + 0xc))(local_22a8,&local_228c);
        if (local_100 == 0 && local_fc == 0) {
          local_2291 = '\x01';
          (**(code **)(*local_2290 + 0xc))(2,&local_228c);
          SetLastError(0);
          goto LAB_00594a50;
        }
        local_22a0 = local_22a0 + 1;
      }
      (**(code **)(*local_2290 + 0x10))("StackWalk64",0,local_110,local_10c);
    }
LAB_00594a50:
    if (local_2298 != (undefined4 *)0x0) {
      free(local_2298);
    }
    if (local_2291 == '\0') {
      (**(code **)(*local_2290 + 0xc))(2,&local_228c);
    }
    if (param_2 == (DWORD *)0x0) {
      ResumeThread(param_1);
    }
  }
LAB_00594aa5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00594ae0(HANDLE param_1,LPCVOID param_2,undefined4 param_3,LPVOID param_4,SIZE_T param_5,
                 SIZE_T *param_6)

{
  SIZE_T local_8;
  
  if (DAT_0065c248 == (code *)0x0) {
    ReadProcessMemory(param_1,param_2,param_4,param_5,&local_8);
    *param_6 = local_8;
    return;
  }
  (*DAT_0065c248)(param_1,param_2,param_3,param_4,param_5,param_6,DAT_0065c244);
  return;
}


void __thiscall FUN_00594b40(void *this)

{
  int in_stack_00000024;
  int in_stack_00000028;
  undefined1 local_408 [1024];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (in_stack_00000024 == 0 && in_stack_00000028 == 0) {
    FUN_00594f50(local_408,0x400,"%s:%s (%p), size: %d (result: %d), SymType: \'%s\', PDB: \'%s\'\n"
                );
  }
  else {
    FUN_00594f50(local_408,0x400,
                 "%s:%s (%p), size: %d (result: %d), SymType: \'%s\', PDB: \'%s\', fileVersion: %d.%d.%d.%d\n"
                );
  }
  (**(code **)(*(int *)this + 0x14))(local_408);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00594c30(void *this,int param_1,int *param_2)

{
  int *_Dst;
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_408 [1023];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if ((param_1 != 2) && (*param_2 != 0 || param_2[1] != 0)) {
    _Dst = param_2 + 2;
    if ((char)param_2[2] == '\0') {
      strcpy_s((char *)_Dst,0x400,"(function-name not available)");
    }
    piVar1 = param_2 + 0x102;
    if ((char)param_2[0x102] != '\0') {
      piVar3 = piVar1;
      do {
        iVar2 = *piVar3;
        piVar3 = (int *)((int)piVar3 + 1);
      } while ((char)iVar2 != '\0');
      if ((uint)((int)piVar3 - ((int)param_2 + 0x409)) < 0x400) {
        strcpy_s((char *)_Dst,0x400,(char *)piVar1);
      }
      else {
        strncpy_s((char *)_Dst,0x400,(char *)piVar1,0x400);
        *(undefined1 *)((int)param_2 + 0x407) = 0;
      }
    }
    piVar1 = param_2 + 0x202;
    if ((char)param_2[0x202] != '\0') {
      piVar3 = piVar1;
      do {
        iVar2 = *piVar3;
        piVar3 = (int *)((int)piVar3 + 1);
      } while ((char)iVar2 != '\0');
      if ((uint)((int)piVar3 - ((int)param_2 + 0x809)) < 0x400) {
        strcpy_s((char *)_Dst,0x400,(char *)piVar1);
      }
      else {
        strncpy_s((char *)_Dst,0x400,(char *)piVar1,0x400);
        *(undefined1 *)((int)param_2 + 0x407) = 0;
      }
    }
    if ((char)param_2[0x306] == '\0') {
      strcpy_s((char *)(param_2 + 0x306),0x400,"(filename not available)");
      if ((char)param_2[0x408] == '\0') {
        strcpy_s((char *)(param_2 + 0x408),0x400,"(module-name not available)");
      }
      FUN_00594f50(local_408,0x400,"%p (%s): %s: %s\n");
    }
    else {
      FUN_00594f50(local_408,0x400,"%s (%d): %s\n");
    }
    local_9 = 0;
    (**(code **)(*(int *)this + 0x14))(local_408);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00594e00(int *param_1)

{
  undefined1 local_408 [1024];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  FUN_00594f50(local_408,0x400,"ERROR: %s, GetLastError: %d (Address: %p)\n");
  (**(code **)(*param_1 + 0x14))(local_408);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00594e60(int *param_1)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_4a4;
  undefined1 local_408 [1024];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  FUN_00594f50(local_408,0x400,
               "SymInit: Symbol-SearchPath: \'%s\', symOptions: %d, UserName: \'%s\'\n");
  (**(code **)(*param_1 + 0x14))(local_408);
  memset(&local_4a4.dwMajorVersion,0,0x98);
  local_4a4.dwOSVersionInfoSize = 0x9c;
  BVar1 = GetVersionExA(&local_4a4);
  if (BVar1 != 0) {
    FUN_00594f50(local_408,0x400,"OS-Version: %d.%d.%d (%s) 0x%x-0x%x\n");
    (**(code **)(*param_1 + 0x14))(local_408);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


int __cdecl FUN_00594f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x00000010;
  uVar4 = 0;
  uVar3 = 0x400;
  puVar1 = (undefined4 *)FUN_004156e0();
  iVar2 = __stdio_common_vsnprintf_s(*puVar1,puVar1[1],param_1,uVar3,param_2,param_3,uVar4,puVar5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


void __fastcall FUN_00594f90(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005af9b0;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *param_1 = StackWalker::vftable;
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  puVar1 = (undefined4 *)param_1[1];
  param_1[5] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uStack_8 = 0;
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
    FUN_005adb3f(puVar1);
  }
  param_1[1] = 0;
  ExceptionList = pvStack_10;
  return;
}


void __thiscall FUN_00594fa0(void *this,LPCSTR param_1)

{
  if (_File_0065b400 != (FILE *)0x0) {
    FUN_00590ff0(this,_File_0065b400,&DAT_005ce00c);
    OutputDebugStringA(param_1);
    return;
  }
  FUN_00591070("CRASH","%s");
  OutputDebugStringA(param_1);
  return;
}


void FUN_005957a0(void)

{
  Application *this;
  undefined1 auStack_5c [4];
  undefined **local_58 [19];
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_5c;
  SetUnhandledExceptionFilter(lpTopLevelExceptionFilter_00594ff0);
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


void __thiscall FUN_00595820(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  *(uint *)this = (*(int *)this - (*(int *)this - 1U & 7)) + 7;
  FUN_005ab5d0(this,0x18);
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
    FUN_005ade89(&DAT_0066086c);
    if (DAT_0066086c == -1) {
      DAT_00660868 = htonl(0x3039);
      FUN_005ade3f(&DAT_0066086c);
    }
  }
  puVar2 = (undefined1 *)((*(uint *)this >> 3) + *(int *)((int)this + 0xc));
  if (DAT_00660868 == 0x3039) {
    *puVar2 = param_1[3];
    *(undefined1 *)((*(uint *)this >> 3) + 1 + *(int *)((int)this + 0xc)) = param_1[2];
    uVar1 = param_1[1];
  }
  else {
    *puVar2 = *param_1;
    *(undefined1 *)((*(uint *)this >> 3) + 1 + *(int *)((int)this + 0xc)) = param_1[1];
    uVar1 = param_1[2];
  }
  *(undefined1 *)((*(uint *)this >> 3) + 2 + *(int *)((int)this + 0xc)) = uVar1;
  *(int *)this = *(int *)this + 0x18;
  return;
}


uint __thiscall FUN_005958f0(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) - (*(int *)((int)this + 8) - 1U & 7);
  *(int *)((int)this + 8) = iVar3 + 7;
  uVar2 = iVar3 + 0x1f;
  if (*(uint *)this < uVar2) {
    return uVar2 & 0xffffff00;
  }
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
    FUN_005ade89(&DAT_0066086c);
    if (DAT_0066086c == -1) {
      DAT_00660868 = htonl(0x3039);
      FUN_005ade3f(&DAT_0066086c);
    }
  }
  uVar1 = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + *(int *)((int)this + 0xc));
  if (DAT_00660868 != 0x3039) {
    *param_1 = uVar1;
    param_1[1] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 1 + *(int *)((int)this + 0xc));
    param_1[2] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 2 + *(int *)((int)this + 0xc));
    param_1[3] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
    return 1;
  }
  param_1[3] = uVar1;
  param_1[2] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 1 + *(int *)((int)this + 0xc));
  param_1[1] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 2 + *(int *)((int)this + 0xc));
  *param_1 = 0;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
  return 1;
}


int __fastcall FUN_005959f0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 8) = 2;
  *(undefined4 *)(param_1 + 0x18) = 0xffff0000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}


void __thiscall FUN_00595a20(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005cb2ed;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)((int)this + 0x1c) == 0) {
    puVar4 = (undefined4 *)FUN_005ae4ea(0x104);
    local_14 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar4 = 0x10;
      puVar5 = puVar4 + 1;
      _eh_vector_constructor_iterator_(puVar5,0x10,0x10,FUN_004dcac0,guard_check_icall);
    }
    *(uint **)((int)this + 0x10) = puVar5;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 1;
    *puVar5 = param_3;
    puVar5[1] = param_4;
    puVar5[2] = param_1;
    puVar5[3] = param_2;
    *(undefined4 *)((int)this + 0x1c) = 0x10;
  }
  else {
    puVar5 = (uint *)(*(int *)((int)this + 0x18) * 0x10 + *(int *)((int)this + 0x10));
    *puVar5 = param_3;
    puVar5[1] = param_4;
    puVar5[2] = param_1;
    puVar5[3] = param_2;
    iVar6 = *(int *)((int)this + 0x18) + 1;
    *(int *)((int)this + 0x18) = iVar6;
    if (iVar6 == *(int *)((int)this + 0x1c)) {
      *(undefined4 *)((int)this + 0x18) = 0;
      iVar6 = 0;
    }
    if ((iVar6 == *(int *)((int)this + 0x14)) &&
       (puVar5 = FUN_0059cd60(*(int *)((int)this + 0x1c) * 2), puVar5 != (uint *)0x0)) {
      uVar8 = 0;
      local_24 = puVar5;
      if (*(int *)((int)this + 0x1c) != 0) {
        do {
          uVar7 = *(int *)((int)this + 0x14) + uVar8;
          uVar8 = uVar8 + 1;
          puVar9 = (uint *)((uVar7 % *(uint *)((int)this + 0x1c)) * 0x10 +
                           *(int *)((int)this + 0x10));
          uVar7 = puVar9[1];
          uVar2 = puVar9[2];
          uVar3 = puVar9[3];
          *local_24 = *puVar9;
          local_24[1] = uVar7;
          local_24[2] = uVar2;
          local_24[3] = uVar3;
          local_24 = local_24 + 4;
        } while (uVar8 < *(uint *)((int)this + 0x1c));
      }
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x1c);
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) * 2;
      pvVar1 = *(void **)((int)this + 0x10);
      *(undefined4 *)((int)this + 0x14) = 0;
      if (pvVar1 != (void *)0x0) {
        local_14 = 1;
        _eh_vector_destructor_iterator_(pvVar1,0x10,*(uint *)((int)pvVar1 + -4),guard_check_icall);
        FUN_005adb4d((uint *)((int)pvVar1 + -4));
      }
      *(uint **)((int)this + 0x10) = puVar5;
    }
  }
  uVar8 = *(uint *)this;
  *(uint *)this = *(int *)this + param_3;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_4 + (uint)CARRY4(uVar8,param_3);
  puVar5 = (uint *)((int)this + 8);
  uVar8 = *puVar5;
  *puVar5 = *puVar5 + param_3;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_4 + (uint)CARRY4(uVar8,param_3);
  ExceptionList = local_1c;
  return;
}


undefined4 * __fastcall FUN_00595bd0(undefined4 *param_1)

{
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00595c70(param_1);
  return param_1;
}


void __fastcall FUN_00595c00(int param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(param_1 + 0x1c) != 0) &&
     (pvVar1 = *(void **)(param_1 + 0x10), pvVar1 != (void *)0x0)) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(uint *)((int)pvVar1 + -4),guard_check_icall);
    FUN_005adb4d((uint *)((int)pvVar1 + -4));
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00595c70(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1[7] != 0) {
    if (0x20 < (uint)param_1[7]) {
      pvVar1 = (void *)param_1[4];
      if (pvVar1 != (void *)0x0) {
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar1,0x10,*(uint *)((int)pvVar1 + -4),guard_check_icall);
        FUN_005adb4d((uint *)((int)pvVar1 + -4));
      }
      param_1[7] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00595d20(void *this,uint *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte local_c [4];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  FUN_005ab5d0(param_1,1);
  pbVar4 = (byte *)((*param_1 >> 3) + param_1[3]);
  uVar2 = *param_1 & 7;
  if (uVar2 == 0) {
    *pbVar4 = 0x80;
  }
  else {
    *pbVar4 = *pbVar4 | (byte)(0x80 >> (sbyte)uVar2);
  }
  *param_1 = *param_1 + 1;
  if (*(char *)((int)this + 8) == '\0') {
    cVar1 = *(char *)((int)this + 9);
    FUN_005ab5d0(param_1,1);
    uVar2 = *param_1;
    if (cVar1 != '\0') {
      if ((uVar2 & 7) == 0) {
        *(undefined1 *)((uVar2 >> 3) + param_1[3]) = 0;
        uVar2 = *param_1;
      }
      *param_1 = uVar2 + 1;
      FUN_005ab5d0(param_1,1);
      pbVar4 = (byte *)((*param_1 >> 3) + param_1[3]);
      uVar2 = *param_1 & 7;
      if (uVar2 == 0) {
        *pbVar4 = 0x80;
        *param_1 = *param_1 + 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      *pbVar4 = *pbVar4 | (byte)(0x80 >> (sbyte)uVar2);
      *param_1 = *param_1 + 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if ((uVar2 & 7) == 0) {
      *(undefined1 *)((uVar2 >> 3) + param_1[3]) = 0;
      uVar2 = *param_1;
    }
    *param_1 = uVar2 + 1;
    FUN_005ab5d0(param_1,1);
    uVar2 = *param_1;
    if ((uVar2 & 7) == 0) {
      *(undefined1 *)((uVar2 >> 3) + param_1[3]) = 0;
      uVar2 = *param_1;
    }
    *param_1 = uVar2 + 1;
    cVar1 = *(char *)((int)this + 10);
    FUN_005ab5d0(param_1,1);
    uVar2 = *param_1;
    uVar3 = uVar2 & 7;
    if (cVar1 == '\0') {
      if (uVar3 == 0) {
        *(undefined1 *)((uVar2 >> 3) + param_1[3]) = 0;
        uVar2 = *param_1;
      }
      *param_1 = uVar2 + 1;
    }
    else {
      pbVar4 = (byte *)((uVar2 >> 3) + param_1[3]);
      if (uVar3 == 0) {
        *pbVar4 = 0x80;
        *param_1 = *param_1 + 1;
      }
      else {
        *pbVar4 = *pbVar4 | (byte)(0x80 >> (sbyte)uVar3);
        *param_1 = *param_1 + 1;
      }
    }
    cVar1 = *(char *)((int)this + 0xc);
    FUN_005ab5d0(param_1,1);
    uVar2 = *param_1;
    uVar3 = uVar2 & 7;
    if (cVar1 == '\0') {
      if (uVar3 == 0) {
        *(undefined1 *)((uVar2 >> 3) + param_1[3]) = 0;
        uVar2 = *param_1;
      }
      *param_1 = uVar2 + 1;
    }
    else {
      pbVar4 = (byte *)((uVar2 >> 3) + param_1[3]);
      if (uVar3 == 0) {
        *pbVar4 = 0x80;
        *param_1 = *param_1 + 1;
      }
      else {
        *pbVar4 = *pbVar4 | (byte)(0x80 >> (sbyte)uVar3);
        *param_1 = *param_1 + 1;
      }
    }
    cVar1 = *(char *)((int)this + 0xd);
    FUN_005ab5d0(param_1,1);
    uVar2 = *param_1;
    uVar3 = uVar2 & 7;
    if (cVar1 == '\0') {
      if (uVar3 == 0) {
        *(undefined1 *)((uVar2 >> 3) + param_1[3]) = 0;
        goto LAB_0059600f;
      }
    }
    else {
      pbVar4 = (byte *)((uVar2 >> 3) + param_1[3]);
      if (uVar3 == 0) {
        *pbVar4 = 0x80;
      }
      else {
        *pbVar4 = *pbVar4 | (byte)(0x80 >> (sbyte)uVar3);
      }
LAB_0059600f:
      uVar2 = *param_1;
    }
    *param_1 = (uVar2 - (uVar2 & 7)) + 8;
    FUN_00595820(param_1,this);
    goto LAB_00596027;
  }
  FUN_005ab5d0(param_1,1);
  pbVar4 = (byte *)((*param_1 >> 3) + param_1[3]);
  uVar2 = *param_1 & 7;
  if (uVar2 == 0) {
    *pbVar4 = 0x80;
  }
  else {
    *pbVar4 = *pbVar4 | (byte)(0x80 >> (sbyte)uVar2);
  }
  *param_1 = *param_1 + 1;
  cVar1 = *(char *)((int)this + 0xb);
  FUN_005ab5d0(param_1,1);
  uVar2 = *param_1;
  uVar3 = uVar2 & 7;
  if (cVar1 == '\0') {
    if (uVar3 == 0) {
      *(undefined1 *)((uVar2 >> 3) + param_1[3]) = 0;
      goto LAB_00595dcd;
    }
  }
  else {
    pbVar4 = (byte *)((uVar2 >> 3) + param_1[3]);
    if (uVar3 == 0) {
      *pbVar4 = 0x80;
    }
    else {
      *pbVar4 = *pbVar4 | (byte)(0x80 >> (sbyte)uVar3);
    }
LAB_00595dcd:
    uVar2 = *param_1;
  }
  *param_1 = (uVar2 - (uVar2 & 7)) + 8;
  if (*(char *)((int)this + 0xb) != '\0') {
    if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
      FUN_005ade89(&DAT_0066086c);
      if (DAT_0066086c == -1) {
        DAT_00660868 = htonl(0x3039);
        FUN_005ade3f(&DAT_0066086c);
      }
    }
    if (DAT_00660868 != 0x3039) {
      local_c[1] = *(undefined1 *)((int)this + 6);
      local_c[0] = *(undefined1 *)((int)this + 7);
      local_c[2] = *(undefined1 *)((int)this + 5);
      local_c[3] = *(byte *)((int)this + 4);
      FUN_005ab3f0(param_1,local_c,0x20);
      local_c[0] = 0x74;
      local_c[1] = 0x5e;
      local_c[2] = 0x59;
      local_c[3] = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_005ab3f0(param_1,(byte *)((int)this + 4),0x20);
    local_c[0] = 0x8d;
    local_c[1] = 0x5e;
    local_c[2] = 0x59;
    local_c[3] = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00596027:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00596040(void *this,uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  uVar3 = param_1[2];
  uVar2 = *param_1;
  if (uVar3 + 1 <= uVar2) {
    *(bool *)((int)this + 0xe) =
         (*(byte *)((uVar3 >> 3) + param_1[3]) & (byte)(0x80 >> ((byte)uVar3 & 7))) != 0;
    param_1[2] = param_1[2] + 1;
    uVar3 = param_1[2];
    uVar2 = *param_1;
  }
  if (uVar3 + 1 <= uVar2) {
    *(bool *)((int)this + 8) =
         (*(byte *)((uVar3 >> 3) + param_1[3]) & (byte)(0x80 >> ((byte)uVar3 & 7))) != 0;
    param_1[2] = param_1[2] + 1;
    uVar3 = param_1[2];
  }
  if (*(char *)((int)this + 8) == '\0') {
    if (uVar3 + 1 <= *param_1) {
      *(bool *)((int)this + 9) =
           (*(byte *)((uVar3 >> 3) + param_1[3]) & (byte)(0x80 >> ((byte)uVar3 & 7))) != 0;
      param_1[2] = param_1[2] + 1;
      uVar3 = param_1[2];
    }
    if (*(char *)((int)this + 9) != '\0') {
      *(undefined1 *)((int)this + 10) = 0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar2 = *param_1;
    if (uVar3 + 1 <= uVar2) {
      *(bool *)((int)this + 10) =
           (*(byte *)((uVar3 >> 3) + param_1[3]) & (byte)(0x80 >> ((byte)uVar3 & 7))) != 0;
      param_1[2] = param_1[2] + 1;
      uVar3 = param_1[2];
      uVar2 = *param_1;
    }
    if (uVar3 + 1 <= uVar2) {
      *(bool *)((int)this + 0xc) =
           (*(byte *)((uVar3 >> 3) + param_1[3]) & (byte)(0x80 >> ((byte)uVar3 & 7))) != 0;
      param_1[2] = param_1[2] + 1;
      uVar3 = param_1[2];
      uVar2 = *param_1;
    }
    if (uVar3 + 1 <= uVar2) {
      local_c = 0x80 >> ((byte)uVar3 & 7);
      *(bool *)((int)this + 0xd) = (*(byte *)((uVar3 >> 3) + param_1[3]) & (byte)local_c) != 0;
      uVar3 = param_1[2] + 1;
    }
    param_1[2] = (uVar3 - (uVar3 - 1 & 7)) + 7;
    FUN_005958f0(param_1,this);
  }
  else {
    *(undefined2 *)((int)this + 9) = 0;
    uVar2 = param_1[2];
    if (uVar2 + 1 <= *param_1) {
      local_c = 0x80 >> ((byte)uVar2 & 7);
      *(bool *)((int)this + 0xb) = (*(byte *)((uVar2 >> 3) + param_1[3]) & (byte)local_c) != 0;
      uVar2 = param_1[2] + 1;
    }
    param_1[2] = (uVar2 - (uVar2 - 1 & 7)) + 7;
    if (*(char *)((int)this + 0xb) != '\0') {
      if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
        FUN_005ade89(&DAT_0066086c);
        if (DAT_0066086c == -1) {
          DAT_00660868 = htonl(0x3039);
          FUN_005ade3f(&DAT_0066086c);
        }
      }
      if (DAT_00660868 == 0x3039) {
        FUN_005ab4c0(param_1,(undefined1 *)((int)this + 4),0x20);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      uVar1 = FUN_005ab4c0(param_1,&local_c,0x20);
      if ((char)uVar1 != '\0') {
        *(undefined1 *)((int)this + 4) = local_c._3_1_;
        *(undefined1 *)((int)this + 5) = local_c._2_1_;
        *(char *)((int)this + 6) = (char)((uint)local_c >> 8);
        *(char *)((int)this + 7) = (char)local_c;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


uint __cdecl FUN_005962b0(ushort *param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(**(int **)(*param_2 + 8) + 0xe);
  if (*param_1 < uVar1) {
    return 0xffffffff;
  }
  return (uint)(*param_1 != uVar1);
}


undefined4 * __fastcall FUN_005962e0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005cb404;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x4000;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x4000;
  param_1[0x21f] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  param_1[0x22c] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  local_8 = 6;
  uStack_7 = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x2ea,0x10,0x20,(_func_void_void_ptr *)&LAB_0059bee0,FUN_0059b970);
  param_1[0x38d] = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  param_1[0x3bf] = 0;
  param_1[0x3bd] = 0;
  param_1[0x3be] = 0;
  param_1[0x3c2] = 0;
  param_1[0x3c0] = 0;
  param_1[0x3c1] = 0;
  param_1[0x3c5] = 0;
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  param_1[0x3c8] = 0;
  param_1[0x3c6] = 0;
  param_1[0x3c7] = 0;
  param_1[0x3cb] = 0;
  param_1[0x3c9] = 0;
  param_1[0x3ca] = 0;
  param_1[0x3d6] = 0;
  param_1[0x3d4] = 0;
  param_1[0x3d5] = 0;
  param_1[0x3da] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  param_1[0x3dd] = 0;
  param_1[0x3db] = 0;
  param_1[0x3dc] = 0;
  param_1[0x3e1] = 0;
  param_1[0x3e2] = 0;
  param_1[0x3e3] = 0x4000;
  _local_8 = CONCAT31(uStack_7,0x11);
  _eh_vector_constructor_iterator_(param_1 + 0x3e4,0x20,7,FUN_00595bd0,FUN_00595c00);
  param_1[0x230] = 10000;
  FUN_00596830((int)param_1);
  param_1[0x10] = 0x400;
  param_1[0x19] = 0x780;
  param_1[0x3e3] = 0x100;
  ExceptionList = local_10;
  return param_1;
}


void __fastcall FUN_00596580(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c71c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00596b50(param_1);
  _eh_vector_destructor_iterator_(param_1 + 0x3e4,0x20,7,FUN_00595c00);
  FUN_0059bdd0(param_1 + 0x3df);
  FUN_0059c720(param_1 + 0x3db);
  FUN_0059cc30(param_1 + 0x3db);
  FUN_0059c720(param_1 + 0x3d8);
  FUN_0059cc30(param_1 + 0x3d8);
  FUN_0059c720(param_1 + 0x3d4);
  FUN_0059cc30(param_1 + 0x3d4);
  if (param_1[0x3cb] != 0) {
    free((void *)param_1[0x3c9]);
  }
  if (param_1[0x3c8] != 0) {
    free((void *)param_1[0x3c6]);
  }
  if (param_1[0x3c5] != 0) {
    free((void *)param_1[0x3c3]);
  }
  if (param_1[0x3c2] != 0) {
    free((void *)param_1[0x3c0]);
  }
  if (param_1[0x3bf] != 0) {
    free((void *)param_1[0x3bd]);
  }
  if (param_1[0x38d] != 0) {
    free((void *)param_1[0x38a]);
  }
  _eh_vector_destructor_iterator_(param_1 + 0x2ea,0x10,0x20,FUN_0059b970);
  if (param_1[0x22c] != 0) {
    free((void *)param_1[0x22a]);
    param_1[0x22c] = 0;
    param_1[0x22a] = 0;
    param_1[0x22b] = 0;
  }
  if (param_1[0x21f] != 0) {
    free((void *)param_1[0x21d]);
  }
  FUN_0059bdd0(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    free((void *)param_1[0x11]);
  }
  FUN_0059bdd0(param_1 + 0xc);
  if (param_1[0xb] != 0) {
    free((void *)param_1[8]);
  }
  if (param_1[3] != 0) {
    free((void *)*param_1);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00596760(void *this,char param_1,int param_2)

{
  int iVar1;
  
  FUN_00596b50(this);
  if (param_1 != '\0') {
    FUN_00596830((int)this);
    iVar1 = param_2 + -0x1c;
    FUN_005ab130();
    *(undefined8 *)((int)this + 0xee0) = 0xbff0000000000000;
    *(undefined8 *)((int)this + 0xee8) = 0xbff0000000000000;
    *(int *)((int)this + 0xea0) = iVar1;
    *(undefined8 *)((int)this + 0xed8) = 0xbff0000000000000;
    *(undefined4 *)((int)this + 0xeb8) = 0;
    *(undefined4 *)((int)this + 0xebc) = 0;
    *(double *)((int)this + 0xea8) =
         (double)iVar1 + *(double *)(&DAT_0062f350 + (iVar1 >> 0x1f) * -8);
    *(undefined8 *)((int)this + 0xeb0) = 0;
    *(undefined4 *)((int)this + 0xec0) = 0;
    *(undefined1 *)((int)this + 0xec3) = 0;
    *(undefined4 *)((int)this + 0xec4) = 0;
    *(undefined2 *)((int)this + 0xec7) = 0;
    *(undefined1 *)((int)this + 0xec9) = 0;
    *(undefined4 *)((int)this + 0xecc) = 0;
    *(undefined2 *)((int)this + 0xecf) = 0;
  }
  return;
}


void __fastcall FUN_00596830(int param_1)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005afb10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  memset((void *)(param_1 + 0x8c8),0,0x2e0);
  memset((void *)(param_1 + 0xda8),0,0x80);
  uVar4 = FUN_005ab130();
  *(undefined8 *)(param_1 + 0x938) = uVar4;
  *(undefined2 *)(param_1 + 0x8be) = 0;
  *(undefined4 *)(param_1 + 0xe90) = 0;
  *(undefined4 *)(param_1 + 0xe94) = 0;
  *(undefined4 *)(param_1 + 0xe80) = 0;
  *(undefined4 *)(param_1 + 0xe84) = 0;
  *(undefined4 *)(param_1 + 0x8b4) = 0;
  *(undefined1 *)(param_1 + 0x8b7) = 0;
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  *(undefined1 *)(param_1 + 0x8bb) = 0;
  *(undefined4 *)(param_1 + 0xf48) = 0;
  *(undefined4 *)(param_1 + 0xf4c) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0;
  uVar4 = FUN_005ab130();
  *(undefined8 *)(param_1 + 0xe40) = uVar4;
  *(undefined1 *)(param_1 + 0xe78) = 0;
  *(undefined4 *)(param_1 + 0xe68) = 0;
  *(undefined4 *)(param_1 + 0xe6c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1070) = 0;
  *(undefined4 *)(param_1 + 0x1074) = 0;
  *(undefined4 *)(param_1 + 0xf5c) = 0xf;
  *(undefined4 *)(param_1 + 0xe70) = 0;
  *(undefined4 *)(param_1 + 0xe74) = 0;
  *(undefined2 *)(param_1 + 0x8bc) = 0;
  *(undefined4 *)(param_1 + 0xf40) = 0;
  *(undefined4 *)(param_1 + 0xf44) = 0;
  uVar4 = FUN_005ab130();
  uVar4 = __aulldiv((uint)uVar4,(uint)((ulonglong)uVar4 >> 0x20),1000,0);
  *(int *)(param_1 + 0x870) = (int)uVar4;
  *(undefined4 *)(param_1 + 0x990) = 0;
  *(undefined4 *)(param_1 + 0x998) = 0;
  *(undefined4 *)(param_1 + 0x99c) = 0;
  *(undefined4 *)(param_1 + 0xe38) = 0;
  *(undefined2 *)(param_1 + 0xe3b) = 0x100;
  *(undefined4 *)(param_1 + 0xe50) = *(undefined4 *)(param_1 + 0xe40);
  *(undefined4 *)(param_1 + 0xe88) = 0;
  *(undefined4 *)(param_1 + 0xe48) = 350000;
  *(undefined4 *)(param_1 + 0xe4c) = 0;
  *(undefined1 *)(param_1 + 0xe60) = 0;
  *(undefined4 *)(param_1 + 0xe58) = 0;
  *(undefined4 *)(param_1 + 0xe5c) = 0;
  *(undefined4 *)(param_1 + 0xe54) = *(undefined4 *)(param_1 + 0xe44);
  *(undefined4 *)(param_1 + 0xef0) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined8 *)(param_1 + 0xf38) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  *(undefined4 *)(param_1 + 0x890) = 3;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x898) = 10;
  *(undefined4 *)(param_1 + 0x89c) = 0;
  *(undefined4 *)(param_1 + 0x8a0) = 0x1b;
  *(undefined4 *)(param_1 + 0x8a4) = 0;
  *(undefined4 *)(param_1 + 0x960) = 0;
  *(undefined4 *)(param_1 + 0x970) = 0;
  *(undefined4 *)(param_1 + 0x974) = 0;
  *(undefined4 *)(param_1 + 0x978) = 0;
  *(undefined4 *)(param_1 + 0x97c) = 0;
  *(undefined4 *)(param_1 + 0x964) = 0;
  puVar3 = (uint *)(param_1 + 0xfac);
  *(undefined4 *)(param_1 + 0x968) = 0;
  iVar2 = 7;
  *(undefined4 *)(param_1 + 0x980) = 0;
  *(undefined4 *)(param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x988) = 0;
  *(undefined4 *)(param_1 + 0x98c) = 0;
  *(undefined4 *)(param_1 + 0x96c) = 0;
  do {
    puVar3[-5] = 0;
    puVar3[-4] = 0;
    puVar3[-7] = 0;
    puVar3[-6] = 0;
    if (*puVar3 != 0) {
      if (0x20 < *puVar3) {
        pvVar1 = (void *)puVar3[-3];
        if (pvVar1 != (void *)0x0) {
          local_8 = 0;
          _eh_vector_destructor_iterator_(pvVar1,0x10,*(uint *)((int)pvVar1 + -4),guard_check_icall)
          ;
          FUN_005adb4d((uint *)((int)pvVar1 + -4));
        }
        *puVar3 = 0;
      }
      puVar3[-2] = 0;
      puVar3[-1] = 0;
    }
    puVar3 = puVar3 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00596b50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0059ad00(param_1);
  uVar6 = 0;
  if (param_1[0x22b] != 0) {
    do {
      iVar3 = param_1[0x22a];
      uVar7 = 0;
      if (*(int *)(*(int *)(iVar3 + uVar6 * 4) + 0xc) != 0) {
        do {
          FUN_0059b560(param_1,*(int *)(*(int *)(*(int *)(param_1[0x22a] + uVar6 * 4) + 8) +
                                       uVar7 * 4));
          FUN_0059b080(param_1,*(int *)(*(int *)(*(int *)(param_1[0x22a] + uVar6 * 4) + 8) +
                                       uVar7 * 4));
          iVar3 = param_1[0x22a];
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(*(int *)(iVar3 + uVar6 * 4) + 0xc));
      }
      pvVar4 = *(void **)(iVar3 + uVar6 * 4);
      if (pvVar4 != (void *)0x0) {
        if (*(int *)((int)pvVar4 + 0x10) != 0) {
          free(*(void **)((int)pvVar4 + 8));
        }
        FUN_005adb3f(pvVar4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[0x22b]);
  }
  if (param_1[0x22c] != 0) {
    free((void *)param_1[0x22a]);
    param_1[0x22c] = 0;
    param_1[0x22a] = 0;
    param_1[0x22b] = 0;
  }
  while( true ) {
    uVar6 = param_1[1];
    if ((uint)param_1[2] < uVar6) {
      iVar3 = param_1[3] - uVar6;
    }
    else {
      iVar3 = -uVar6;
    }
    if (param_1[2] + iVar3 == 0) break;
    iVar5 = uVar6 + 1;
    param_1[1] = iVar5;
    iVar3 = param_1[3];
    if (iVar5 == iVar3) {
      param_1[1] = 0;
      iVar3 = *(int *)(*param_1 + -4 + iVar3 * 4);
    }
    else if (iVar5 == 0) {
      iVar3 = *(int *)(*param_1 + -4 + iVar3 * 4);
    }
    else {
      iVar3 = *(int *)(*param_1 + -4 + iVar5 * 4);
    }
    FUN_0059b560(param_1,iVar3);
    FUN_0059b080(param_1,iVar3);
  }
  free((void *)*param_1);
  iVar3 = FUN_005ae4ea(0x80);
  *param_1 = iVar3;
  param_1[3] = 0x20;
  param_1[1] = 0;
  puVar8 = (uint *)(param_1 + 0x2ec);
  param_1[2] = 0;
  local_18 = 0x20;
  do {
    local_14 = 0;
    if (puVar8[-1] != 0) {
      iVar3 = 0;
      do {
        FUN_0059b560(param_1,*(int *)(puVar8[-2] + 8 + iVar3));
        FUN_0059b080(param_1,*(int *)(puVar8[-2] + 8 + iVar3));
        iVar3 = iVar3 + 0x10;
        local_14 = local_14 + 1;
      } while (local_14 < puVar8[-1]);
    }
    if (*puVar8 != 0) {
      if (0x200 < *puVar8) {
        free((void *)puVar8[-2]);
        *puVar8 = 0;
        puVar8[-2] = 0;
      }
      puVar8[-1] = 0;
    }
    puVar8 = puVar8 + 4;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  memset(param_1 + 0x1a,0,0x800);
  param_1[0x264] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  iVar3 = param_1[0x21a];
  if (param_1[0x21a] != 0) {
    while( true ) {
      if (*(int *)(iVar3 + 0x44) != 0) {
        FUN_0059b560(param_1,iVar3);
      }
      iVar5 = *(int *)(iVar3 + 0x60);
      if (iVar5 == param_1[0x21a]) break;
      FUN_0059b080(param_1,iVar3);
      iVar3 = iVar5;
    }
    FUN_0059b080(param_1,iVar3);
    param_1[0x21a] = 0;
  }
  uVar6 = 0;
  param_1[0x3bc] = 0;
  if (param_1[0x21e] != 0) {
    iVar3 = 0;
    do {
      iVar5 = param_1[0x21d];
      iVar2 = *(int *)(iVar5 + 8 + iVar3);
      if (*(int *)(iVar2 + 0x44) != 0) {
        FUN_0059b560(param_1,iVar2);
        iVar5 = param_1[0x21d];
      }
      FUN_0059b080(param_1,*(int *)(iVar5 + 8 + iVar3));
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar6 < (uint)param_1[0x21e]);
  }
  if (param_1[0x21f] != 0) {
    if (0x200 < (uint)param_1[0x21f]) {
      free((void *)param_1[0x21d]);
      param_1[0x21f] = 0;
      param_1[0x21d] = 0;
    }
    param_1[0x21e] = 0;
  }
  if (param_1[0x13] != 0) {
    free((void *)param_1[0x11]);
    param_1[0x13] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  piVar1 = param_1 + 0x3bd;
  if (param_1[0x3bf] != 0) {
    free((void *)*piVar1);
    param_1[0x3bf] = 0;
    *piVar1 = 0;
    param_1[0x3be] = 0;
  }
  FUN_0059ba20(piVar1,0x200);
  if (param_1[0x3c2] != 0) {
    free((void *)param_1[0x3c0]);
    param_1[0x3c2] = 0;
    param_1[0x3c0] = 0;
    param_1[0x3c1] = 0;
  }
  uVar6 = 0x10;
  do {
    uVar6 = uVar6 * 2;
  } while (uVar6 < 0x200);
  if ((uint)param_1[0x3c2] < uVar6) {
    param_1[0x3c2] = uVar6;
    if (uVar6 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005ae4ea(uVar6);
    }
    pvVar4 = (void *)param_1[0x3c0];
    if (pvVar4 != (void *)0x0) {
      uVar6 = 0;
      if (param_1[0x3c1] != 0) {
        do {
          *(undefined1 *)(uVar6 + iVar3) = *(undefined1 *)(uVar6 + param_1[0x3c0]);
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)param_1[0x3c1]);
        pvVar4 = (void *)param_1[0x3c0];
      }
      free(pvVar4);
    }
    param_1[0x3c0] = iVar3;
  }
  piVar1 = param_1 + 0x3c3;
  if (param_1[0x3c5] != 0) {
    free((void *)*piVar1);
    param_1[0x3c5] = 0;
    *piVar1 = 0;
    param_1[0x3c4] = 0;
  }
  FUN_0059c480(piVar1);
  piVar1 = param_1 + 0x3c9;
  if (param_1[0x3cb] != 0) {
    free((void *)*piVar1);
    param_1[0x3cb] = 0;
    *piVar1 = 0;
    param_1[0x3ca] = 0;
  }
  FUN_0059c480(piVar1);
  FUN_0059bdd0(param_1 + 0x15);
  FUN_0059bdd0(param_1 + 0x3df);
  while( true ) {
    uVar6 = param_1[9];
    if ((uint)param_1[10] < uVar6) {
      iVar3 = param_1[0xb] - uVar6;
    }
    else {
      iVar3 = -uVar6;
    }
    if (param_1[10] + iVar3 == 0) break;
    FUN_0059b260(param_1,param_1[0x14]);
    param_1[9] = param_1[9] + 1;
    if (param_1[9] == param_1[0xb]) {
      param_1[9] = 0;
    }
    param_1[0x14] = param_1[0x14] + 1;
    *(undefined1 *)((int)param_1 + 0x53) = 0;
  }
  FUN_0059bdd0(param_1 + 0xc);
  param_1[0x14] = 0;
  *(undefined1 *)((int)param_1 + 0x53) = 0;
  if (param_1[0x3da] != 0) {
    if (0x200 < (uint)param_1[0x3da]) {
      pvVar4 = (void *)param_1[0x3d8];
      if (pvVar4 != (void *)0x0) {
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar4,8,*(uint *)((int)pvVar4 + -4),guard_check_icall);
        FUN_005adb4d((uint *)((int)pvVar4 + -4));
      }
      param_1[0x3da] = 0;
      param_1[0x3d8] = 0;
    }
    param_1[0x3d9] = 0;
  }
  if (param_1[0x3dd] != 0) {
    if (0x200 < (uint)param_1[0x3dd]) {
      pvVar4 = (void *)param_1[0x3db];
      if (pvVar4 != (void *)0x0) {
        local_8 = 1;
        _eh_vector_destructor_iterator_(pvVar4,8,*(uint *)((int)pvVar4 + -4),guard_check_icall);
        FUN_005adb4d((uint *)((int)pvVar4 + -4));
      }
      param_1[0x3dd] = 0;
      param_1[0x3db] = 0;
    }
    param_1[0x3dc] = 0;
  }
  param_1[0x21b] = 0;
  ExceptionList = local_10;
  return;
}


void __thiscall
FUN_00597130(void *this,uint *param_1,uint param_2,undefined8 *param_3,int *param_4,
            undefined4 param_5,int *param_6,undefined4 param_7,uint param_8,uint param_9,
            uint *param_10)

{
  double dVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint *puVar13;
  int *piVar14;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint uVar15;
  double in_XMM0_Qa;
  double dVar16;
  undefined8 uVar17;
  undefined8 local_190;
  void *local_184;
  uint local_180;
  uint *local_17c;
  uint local_174;
  undefined8 *local_170;
  uint local_16c;
  uint local_168;
  uint *local_164;
  int *local_160;
  uint local_15c;
  int *local_158;
  byte local_151;
  uint local_150;
  uint local_14c;
  undefined4 local_148;
  uint *local_144;
  char local_140;
  uint local_34;
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005cb453;
  local_1c = ExceptionList;
  uVar6 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_17c = param_1;
  local_170 = param_3;
  local_174 = param_2;
  local_160 = param_4;
  local_168 = param_8;
  local_16c = param_9;
  local_184 = this;
  local_24 = uVar6;
  FUN_00595a20((void *)((int)this + 0x1050),param_8,param_9,param_2,0);
  piVar14 = local_160;
  if ((local_174 < 3) || (local_17c == (uint *)0x0)) {
    uVar10 = 0;
    if (local_160[1] != 0) {
      do {
        (**(code **)(**(int **)(*local_160 + uVar10 * 4) + 0x34))
                  ("length <= 2 || buffer == 0",local_174 * 8,*(undefined4 *)local_170,
                   *(undefined4 *)((int)local_170 + 4),*(undefined4 *)(local_170 + 1),
                   *(undefined4 *)((int)local_170 + 0xc),*(undefined4 *)(local_170 + 2),1,uVar6);
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)local_160[1]);
    }
    goto LAB_005984ba;
  }
  uVar17 = FUN_005ab130();
  uVar17 = __aulldiv((uint)uVar17,(uint)((ulonglong)uVar17 >> 0x20),1000,0);
  *(int *)((int)this + 0x870) = (int)uVar17;
  memset(&local_150,0,0x114);
  local_180 = local_174 << 3;
  local_148 = 0;
  local_140 = '\0';
  local_144 = local_17c;
  local_14 = 0;
  local_150 = local_180;
  local_14c = local_180;
  FUN_00596040(&local_34,&local_150);
  if (local_28._2_1_ == '\0') {
    uVar6 = 0;
    if (piVar14[1] != 0) {
      do {
        (**(code **)(**(int **)(*piVar14 + uVar6 * 4) + 0x34))
                  ("dhf.isValid==false",local_180,*(undefined4 *)local_170,
                   *(undefined4 *)((int)local_170 + 4),*(undefined4 *)(local_170 + 1),
                   *(undefined4 *)((int)local_170 + 0xc),*(undefined4 *)(local_170 + 2),1);
        uVar6 = uVar6 + 1;
        piVar14 = local_160;
      } while (uVar6 < (uint)local_160[1]);
    }
    local_151 = 1;
  }
  else if (local_30._4_1_ == '\0') {
    if (local_30._5_1_ == '\0') {
      if (*(int *)((int)this + 0xeb8) == 0 && *(int *)((int)this + 0xebc) == 0) {
        *(uint *)((int)this + 0xeb8) = local_168;
        *(uint *)((int)this + 0xebc) = local_16c;
      }
      if (local_34 == *(uint *)((int)this + 0xecc)) {
        *(uint *)((int)this + 0xecc) = local_34 + 1 & 0xffffff;
      }
      else {
        if ((*(uint *)((int)this + 0xecc) - local_34 & 0xffffff) < 0x800000) {
          local_15c = 0;
        }
        else {
          local_15c = local_34 - *(int *)((int)this + 0xecc) & 0xffffff;
          if (1000 < local_15c) {
            if (50000 < local_15c) {
              uVar6 = 0;
              if (piVar14[1] != 0) {
                do {
                  (**(code **)(**(int **)(*piVar14 + uVar6 * 4) + 0x34))
                            ("congestionManager.OnGotPacket failed",local_180,
                             *(undefined4 *)local_170,*(undefined4 *)((int)local_170 + 4),
                             *(undefined4 *)(local_170 + 1),*(undefined4 *)((int)local_170 + 0xc),
                             *(undefined4 *)(local_170 + 2),1);
                  uVar6 = uVar6 + 1;
                  piVar14 = local_160;
                } while (uVar6 < (uint)local_160[1]);
              }
              local_151 = 1;
              goto LAB_00597d04;
            }
            local_15c = 1000;
          }
          *(uint *)((int)this + 0xecc) = local_34 + 1 & 0xffffff;
        }
        if (local_15c != 0) {
          pvVar2 = (void *)((int)this + 0xf6c);
          uVar6 = local_15c;
          do {
            FUN_0059c520(pvVar2,local_34 - uVar6 & 0xffffff);
            uVar6 = uVar6 - 1;
            this = local_184;
          } while (uVar6 != 0);
        }
      }
      *(undefined1 *)((int)this + 0xf78) = local_28._1_1_;
      *(undefined4 *)((int)this + 0xe98) = 0;
      *(undefined4 *)((int)this + 0xe9c) = 0;
      FUN_0059c520((void *)((int)this + 0xf60),local_34);
      local_158 = (int *)FUN_0059a010(this,&local_150,local_168,local_16c);
      piVar14 = local_160;
      if (local_158 != (int *)0x0) {
        do {
          local_15c = 0;
          if (local_160[1] != 0) {
            uVar17 = __aulldiv(local_168,local_16c,1000,0);
            do {
              local_174 = (uint)((ulonglong)uVar17 >> 0x20);
              local_164 = (uint *)uVar17;
              (**(code **)(**(int **)(*local_160 + local_15c * 4) + 0x38))
                        (local_158,*(undefined4 *)((int)this + 0xe88),(int)*local_170,
                         (int)((ulonglong)*local_170 >> 0x20),(int)local_170[1],
                         (int)((ulonglong)local_170[1] >> 0x20),*(undefined4 *)(local_170 + 2),
                         local_164,0);
              uVar17 = CONCAT44(local_174,local_164);
              local_15c = local_15c + 1;
            } while (local_15c < (uint)local_160[1]);
          }
          piVar14 = local_158;
          if (*(char *)((int)this + 0xe3c) != '\0') {
            free(*(void **)((int)this + 0xe28));
            uVar12 = FUN_005ae4ea(0x200);
            *(undefined4 *)((int)this + 0xe28) = uVar12;
            *(undefined4 *)((int)this + 0xe34) = 0x200;
            *(undefined4 *)((int)this + 0xe2c) = 0;
            *(undefined4 *)((int)this + 0xe30) = 0;
            *(undefined4 *)((int)this + 0xe38) = 0;
            *(undefined2 *)((int)this + 0xe3b) = 0;
          }
          piVar7 = local_158;
          iVar11 = piVar14[7];
          if ((((iVar11 == 4) || (iVar11 == 1)) || (iVar11 == 3)) && (0x1f < *(byte *)(piVar14 + 3))
             ) {
            local_164 = (uint *)0x0;
            if (local_160[1] != 0) {
              uVar6 = 0;
              do {
                (**(code **)(**(int **)(*local_160 + uVar6 * 4) + 0x34))
                          ("internalPacket->orderingChannel >= NUMBER_OF_ORDERED_STREAMS",local_180,
                           (int)*local_170,(int)((ulonglong)*local_170 >> 0x20),(int)local_170[1],
                           (int)((ulonglong)local_170[1] >> 0x20),*(undefined4 *)(local_170 + 2),1);
                uVar6 = uVar6 + 1;
                piVar14 = local_158;
                this = local_184;
              } while (uVar6 < (uint)local_160[1]);
            }
LAB_00597c96:
            FUN_00595a20((void *)((int)this + 0x1010),local_168,local_16c,piVar14[6] + 7U >> 3,0);
            piVar7 = piVar14;
LAB_00597cb9:
            FUN_0059b560(this,(int)piVar7);
            FUN_0059b080(this,(int)piVar7);
          }
          else {
            if (((iVar11 == 2) || (iVar11 == 4)) || (iVar11 == 3)) {
              uVar6 = *piVar14 - *(int *)((int)this + 0xe38) & 0xffffff;
              if (uVar6 != 0) {
                if (uVar6 < 0x800000) {
                  uVar10 = *(uint *)((int)this + 0xe2c);
                  if (*(uint *)((int)this + 0xe30) < uVar10) {
                    iVar11 = *(int *)((int)this + 0xe34) - uVar10;
                  }
                  else {
                    iVar11 = -uVar10;
                  }
                  piVar14 = local_158;
                  if (uVar6 < *(uint *)((int)this + 0xe30) + iVar11) {
                    puVar8 = *(uint **)((int)this + 0xe34);
                    local_164 = (uint *)(uVar10 + uVar6);
                    if (local_164 < puVar8) {
                      local_174 = *(int *)((int)this + 0xe28) + uVar10;
                      uVar15 = uVar10 - (int)puVar8;
                    }
                    else {
                      uVar15 = uVar10 - (int)puVar8;
                      local_174 = *(int *)((int)this + 0xe28) + uVar15;
                      puVar8 = *(uint **)((int)this + 0xe34);
                    }
                    this = local_184;
                    if (*(char *)(local_174 + uVar6) != '\0') {
                      if (local_164 < puVar8) {
                        uVar15 = uVar10;
                      }
                      *(undefined1 *)(uVar15 + *(int *)((int)local_184 + 0xe28) + uVar6) = 0;
                      goto LAB_00597f80;
                    }
                  }
                  else {
                    if (uVar6 < 0xf4241) {
                      while( true ) {
                        uVar10 = *(uint *)((int)this + 0xe2c);
                        if (*(uint *)((int)this + 0xe30) < uVar10) {
                          iVar11 = *(int *)((int)this + 0xe34) - uVar10;
                        }
                        else {
                          iVar11 = -uVar10;
                        }
                        if (uVar6 <= *(uint *)((int)this + 0xe30) + iVar11) break;
                        local_151 = 1;
                        FUN_0059c310((void *)((int)this + 0xe28),&local_151);
                      }
                      local_151 = 0;
                      FUN_0059c310((void *)((int)this + 0xe28),&local_151);
                      goto LAB_00597f80;
                    }
                    local_164 = (uint *)0x0;
                    if (local_160[1] != 0) {
                      uVar6 = 0;
                      do {
                        (**(code **)(**(int **)(*local_160 + uVar6 * 4) + 0x34))
                                  ("holeCount > 1000000",local_180,(int)*local_170,
                                   (int)((ulonglong)*local_170 >> 0x20),(int)local_170[1],
                                   (int)((ulonglong)local_170[1] >> 0x20),
                                   *(undefined4 *)(local_170 + 2),1);
                        uVar6 = uVar6 + 1;
                        piVar14 = local_158;
                        this = local_184;
                      } while (uVar6 < (uint)local_160[1]);
                    }
                  }
                  goto LAB_00597c96;
                }
                FUN_00595a20((void *)((int)this + 0x1010),local_168,local_16c,local_158[6] + 7U >> 3
                             ,0);
                local_164 = (uint *)0x0;
                if (local_160[1] != 0) {
                  uVar6 = 0;
                  do {
                    (**(code **)(**(int **)(*local_160 + uVar6 * 4) + 0x34))
                              ("holeCount > typeRange/(DatagramSequenceNumberType) 2",local_180,
                               (int)*local_170,(int)((ulonglong)*local_170 >> 0x20),
                               (int)local_170[1],(int)((ulonglong)local_170[1] >> 0x20),
                               *(undefined4 *)(local_170 + 2),0);
                    uVar6 = uVar6 + 1;
                    piVar7 = local_158;
                    this = local_184;
                  } while (uVar6 < (uint)local_160[1]);
                }
                goto LAB_00597cb9;
              }
              uVar6 = *(uint *)((int)this + 0xe2c);
              if (*(uint *)((int)this + 0xe30) < uVar6) {
                iVar11 = *(int *)((int)this + 0xe34) - uVar6;
              }
              else {
                iVar11 = -uVar6;
              }
              if (*(uint *)((int)this + 0xe30) + iVar11 == 0) goto LAB_00597fc9;
              do {
                *(uint *)((int)this + 0xe2c) = uVar6 + 1;
                if (uVar6 + 1 == *(int *)((int)this + 0xe34)) {
                  *(undefined4 *)((int)this + 0xe2c) = 0;
                }
LAB_00597fc9:
                *(int *)((int)this + 0xe38) = *(int *)((int)this + 0xe38) + 1;
                *(undefined1 *)((int)this + 0xe3b) = 0;
LAB_00597f80:
                uVar6 = *(uint *)((int)this + 0xe2c);
                if (*(uint *)((int)this + 0xe30) < uVar6) {
                  iVar11 = *(int *)((int)this + 0xe34) - uVar6;
                }
                else {
                  iVar11 = -uVar6;
                }
                piVar14 = local_158;
              } while ((*(uint *)((int)this + 0xe30) + iVar11 != 0) &&
                      (*(char *)(uVar6 + *(int *)((int)this + 0xe28)) == '\0'));
            }
            uVar6 = *(uint *)((int)this + 0xe34);
            if (0x200 < uVar6) {
              uVar10 = *(uint *)((int)this + 0xe2c);
              uVar15 = *(uint *)((int)this + 0xe30);
              if (uVar15 < uVar10) {
                iVar11 = (uVar15 - uVar10) + uVar6;
              }
              else {
                iVar11 = uVar15 - uVar10;
              }
              if ((uint)(iVar11 * 3) < uVar6) {
                local_17c = (uint *)((int)this + 0xe34);
                if (*(int *)((int)this + 0xe34) != 0) {
                  local_15c = 1;
                  uVar6 = FUN_0059c3d0((int)this + 0xe28);
                  if (uVar6 == 0) {
                    uVar6 = 1;
LAB_00598065:
                    local_174 = FUN_005ae4ea(uVar6);
                    iVar11 = (int)this + 0xe28;
                  }
                  else {
                    do {
                      local_15c = local_15c * 2;
                    } while (local_15c <= uVar6);
                    uVar6 = local_15c;
                    if (local_15c != 0) goto LAB_00598065;
                    local_174 = 0;
                    iVar11 = extraout_ECX;
                  }
                  local_164 = (uint *)0x0;
                  iVar11 = FUN_0059c3d0(iVar11);
                  piVar7 = extraout_ECX_00;
                  puVar8 = local_164;
                  if (iVar11 != 0) {
                    do {
                      *(undefined1 *)((int)puVar8 + local_174) =
                           *(undefined1 *)((uint)(piVar7[1] + (int)puVar8) % *local_17c + *piVar7);
                      puVar8 = (uint *)((int)puVar8 + 1);
                      puVar13 = (uint *)FUN_0059c3d0((int)piVar7);
                      piVar7 = extraout_ECX_01;
                      piVar14 = local_158;
                      this = local_184;
                    } while (puVar8 < puVar13);
                  }
                  if ((uint)piVar7[2] < (uint)piVar7[1]) {
                    iVar11 = *local_17c - piVar7[1];
                  }
                  else {
                    iVar11 = -piVar7[1];
                  }
                  pvVar2 = (void *)*piVar7;
                  piVar7[2] = piVar7[2] + iVar11;
                  piVar7[1] = 0;
                  *local_17c = local_15c;
                  free(pvVar2);
                  *(uint *)((int)this + 0xe28) = local_174;
                }
              }
            }
            if (piVar14[5] == 0) {
LAB_0059817a:
              iVar11 = piVar14[7];
              if (((iVar11 == 4) || (iVar11 == 1)) || (iVar11 == 3)) {
                local_151 = *(byte *)(piVar14 + 3);
                local_15c = (uint)local_151;
                uVar10 = piVar14[1];
                uVar6 = *(uint *)((int)this + local_15c * 4 + 0xaa8);
                piVar7 = piVar14;
                if (uVar10 != uVar6) {
                  if (uVar6 < 0x800000) {
                    if ((uVar6 - 0x800000 & 0xffffff) <= uVar10) goto LAB_00597cb9;
joined_r0x005983ab:
                    if (uVar10 < uVar6) goto LAB_00597cb9;
                  }
                  else if ((uVar6 - 0x7ffffe & 0xffffff) <= uVar10) goto joined_r0x005983ab;
                  bVar5 = local_151;
                  if (*(int *)(local_15c * 0x10 + 0xbac + (int)this) == 0) {
                    *(uint *)((int)this + local_15c * 4 + 0xda8) = uVar6;
                    uVar10 = piVar14[1];
                    bVar5 = *(byte *)(piVar14 + 3);
                  }
                  local_174 = (uint)bVar5;
                  local_190 = (ulonglong)
                              (uVar10 - *(int *)((int)this + local_174 * 4 + 0xda8) & 0xffffff) *
                              0x100000;
                  local_164 = (uint *)local_190;
                  if ((piVar14[7] == 4) || (piVar14[7] == 1)) {
                    local_190 = local_190 + (ulonglong)(uint)piVar14[2];
                  }
                  else {
                    local_190 = local_190 + 0xfffff;
                  }
                  FUN_0059bf00((void *)(local_174 * 0x10 + 0xba8 + (int)this),(uint *)&local_190,
                               &local_158);
                  goto LAB_00597ccc;
                }
                if ((iVar11 != 4) && (iVar11 != 1)) {
                  FUN_00595a20((void *)((int)this + 0xff0),local_168,local_16c,piVar14[6] + 7U >> 3,
                               0);
                  FUN_0059bac0(this,&local_158);
                  bVar5 = *(byte *)(piVar14 + 3);
                  piVar7 = (int *)((int)this + (uint)bVar5 * 4 + 0xaa8);
                  *piVar7 = *piVar7 + 1;
                  *(undefined1 *)((int)this + (uint)bVar5 * 4 + 0xaab) = 0;
                  *(undefined4 *)((int)this + (uint)*(byte *)(piVar14 + 3) * 4 + 0xb28) = 0;
                  bVar5 = *(byte *)(piVar14 + 3);
                  iVar11 = *(int *)((int)this + (uint)bVar5 * 0x10 + 0xbac);
                  while ((iVar11 != 0 &&
                         (piVar14 = (int *)((uint)bVar5 * 0x10 + 0xba8 + (int)this),
                         *(int *)(*(int *)(*piVar14 + 8) + 4) ==
                         *(int *)((int)this + (uint)bVar5 * 4 + 0xaa8)))) {
                    piVar14 = (int *)FUN_0059bf80(piVar14);
                    local_158 = piVar14;
                    FUN_00595a20((void *)((int)this + 0xff0),local_168,local_16c,
                                 piVar14[6] + 7U >> 3,0);
                    FUN_0059bac0(this,&local_158);
                    if (piVar14[7] == 3) {
                      bVar5 = *(byte *)(piVar14 + 3);
                      piVar7 = (int *)((int)this + (uint)bVar5 * 4 + 0xaa8);
                      *piVar7 = *piVar7 + 1;
                      *(undefined1 *)((int)this + (uint)bVar5 * 4 + 0xaab) = 0;
                    }
                    else {
                      *(int *)((int)this + (uint)*(byte *)(piVar14 + 3) * 4 + 0xb28) = piVar14[2];
                    }
                    bVar5 = *(byte *)(piVar14 + 3);
                    iVar11 = *(int *)((int)this + (uint)bVar5 * 0x10 + 0xbac);
                  }
                  goto LAB_00597ccc;
                }
                uVar6 = piVar14[2];
                uVar10 = *(uint *)((int)this + local_15c * 4 + 0xb28);
                if (uVar10 < 0x800000) {
                  if ((uVar10 - 0x800000 & 0xffffff) <= uVar6) goto LAB_00597cb9;
joined_r0x00598322:
                  if (uVar6 < uVar10) goto LAB_00597cb9;
                }
                else if ((uVar10 - 0x7ffffe & 0xffffff) <= uVar6) goto joined_r0x00598322;
                *(uint *)((int)this + local_15c * 4 + 0xb28) = uVar6 + 1 & 0xffffff;
              }
              FUN_00595a20((void *)((int)this + 0xff0),local_168,local_16c,piVar14[6] + 7U >> 3,0);
              FUN_0059bac0(this,&local_158);
            }
            else {
              iVar11 = piVar14[7];
              if (((iVar11 != 3) && (iVar11 != 4)) && (iVar11 != 1)) {
                *(undefined1 *)(piVar14 + 3) = 0xff;
              }
              FUN_0059a6c0(this,piVar14,local_168,local_16c);
              piVar14 = FUN_0059a880(this,(uint)*(ushort *)((int)piVar14 + 0xe),local_168,local_16c,
                                     param_6,(undefined4 *)local_170,extraout_ECX_02,param_10);
              local_158 = piVar14;
              if (piVar14 != (int *)0x0) goto LAB_0059817a;
            }
          }
LAB_00597ccc:
          local_158 = (int *)FUN_0059a010(this,&local_150,local_168,local_16c);
        } while (local_158 != (int *)0x0);
        goto LAB_00597cf6;
      }
      local_174 = 0;
      local_158 = (int *)0x0;
      if (local_160[1] != 0) {
        do {
          (**(code **)(**(int **)(*piVar14 + local_174 * 4) + 0x34))
                    ("CreateInternalPacketFromBitStream failed",local_180,*(undefined4 *)local_170,
                     *(undefined4 *)((int)local_170 + 4),*(undefined4 *)(local_170 + 1),
                     *(undefined4 *)((int)local_170 + 0xc),*(undefined4 *)(local_170 + 2),1);
          local_174 = local_174 + 1;
        } while (local_174 < (uint)piVar14[1]);
      }
    }
    else {
      local_28 = 0;
      local_30 = 0;
      local_14 = CONCAT31(local_14._1_3_,1);
      cVar4 = FUN_0059ca50(&local_30,&local_150);
      if (cVar4 == '\0') {
        uVar6 = 0;
        if (piVar14[1] != 0) {
          do {
            (**(code **)(**(int **)(*piVar14 + uVar6 * 4) + 0x34))
                      ("incomingNAKs.Deserialize failed",local_180,*(undefined4 *)local_170,
                       *(undefined4 *)((int)local_170 + 4),*(undefined4 *)(local_170 + 1),
                       *(undefined4 *)((int)local_170 + 0xc),*(undefined4 *)(local_170 + 2),1);
            uVar6 = uVar6 + 1;
            piVar14 = local_160;
          } while (uVar6 < (uint)local_160[1]);
        }
LAB_00597910:
        FUN_0059c720((undefined4 *)&local_30);
        FUN_0059cc30((undefined4 *)&local_30);
        local_151 = 0;
        goto LAB_00597d04;
      }
      local_17c = (uint *)0x0;
      if (local_30._4_4_ != (uint *)0x0) {
        dVar16 = 0.5;
        iVar11 = (int)local_30;
        do {
          piVar14 = local_160;
          uVar6 = *(uint *)(iVar11 + (int)local_17c * 8);
          if (*(uint *)(iVar11 + 4 + (int)local_17c * 8) < uVar6) {
            local_174 = 0;
            if (local_160[1] != 0) {
              do {
                (**(code **)(**(int **)(*piVar14 + local_174 * 4) + 0x34))
                          ("incomingNAKs minIndex>maxIndex",local_180,*(undefined4 *)local_170,
                           *(undefined4 *)((int)local_170 + 4),*(undefined4 *)(local_170 + 1),
                           *(undefined4 *)((int)local_170 + 0xc),*(undefined4 *)(local_170 + 2),1);
                local_174 = local_174 + 1;
              } while (local_174 < (uint)piVar14[1]);
            }
            goto LAB_00597910;
          }
          do {
            local_174 = uVar6;
            if (*(uint *)(iVar11 + 4 + (int)local_17c * 8) < uVar6) break;
            if ((*(char *)((int)this + 0xed0) != '\0') && (*(char *)((int)this + 0xec8) == '\0')) {
              *(double *)((int)this + 0xeb0) = *(double *)((int)this + 0xea8) * dVar16;
            }
            puVar8 = (uint *)FUN_0059b170(this,uVar6,(undefined4 *)&local_190);
            for (; puVar8 != (uint *)0x0; puVar8 = (uint *)puVar8[1]) {
              iVar11 = *(int *)((int)this + (*puVar8 & 0x1ff) * 4 + 0x68);
              if ((iVar11 != 0) && (*(int *)(iVar11 + 0x30) != 0 || *(int *)(iVar11 + 0x34) != 0)) {
                *(uint *)(iVar11 + 0x30) = local_168;
                *(uint *)(iVar11 + 0x34) = local_16c;
              }
              uVar6 = local_174;
            }
            uVar6 = uVar6 + 1 & 0xffffff;
            iVar11 = (int)local_30;
            local_174 = uVar6;
          } while (*(uint *)((int)local_30 + (int)local_17c * 8) <= uVar6);
          local_17c = (uint *)((int)local_17c + 1);
        } while (local_17c < local_30._4_4_);
      }
      FUN_0059c720((undefined4 *)&local_30);
      FUN_0059cc30((undefined4 *)&local_30);
LAB_00597cf6:
      *(int *)((int)this + 0xe88) = *(int *)((int)this + 0xe88) + 1;
    }
    local_151 = 1;
  }
  else {
    FUN_0059c720((undefined4 *)((int)this + 0xf50));
    cVar4 = FUN_0059ca50((void *)((int)this + 0xf50),&local_150);
    if (cVar4 != '\0') {
      local_17c = (uint *)0x0;
      if (*(int *)((int)this + 0xf54) != 0) {
        iVar11 = *(int *)((int)this + 0xf50);
LAB_00597370:
        piVar14 = local_160;
        uVar6 = *(uint *)(iVar11 + (int)local_17c * 8);
        uVar10 = *(uint *)(iVar11 + 4 + (int)local_17c * 8);
        if ((uVar6 <= uVar10) && (uVar10 != 0xffffff)) goto LAB_00597390;
        local_174 = 0;
        if (local_160[1] != 0) {
          do {
            (**(code **)(**(int **)(*piVar14 + local_174 * 4) + 0x34))
                      ("incomingAcks minIndex > maxIndex or maxIndex is max value",local_180,
                       *(undefined4 *)local_170,*(undefined4 *)((int)local_170 + 4),
                       *(undefined4 *)(local_170 + 1),*(undefined4 *)((int)local_170 + 0xc),
                       *(undefined4 *)(local_170 + 2),1);
            local_174 = local_174 + 1;
          } while (local_174 < (uint)piVar14[1]);
        }
        local_151 = 0;
        goto LAB_00597d04;
      }
      goto LAB_00597cf6;
    }
    uVar6 = 0;
    if (piVar14[1] != 0) {
      do {
        (**(code **)(**(int **)(*piVar14 + uVar6 * 4) + 0x34))
                  ("incomingAcks.Deserialize failed",local_180,*(undefined4 *)local_170,
                   *(undefined4 *)((int)local_170 + 4),*(undefined4 *)(local_170 + 1),
                   *(undefined4 *)((int)local_170 + 0xc),*(undefined4 *)(local_170 + 2),1);
        uVar6 = uVar6 + 1;
        piVar14 = local_160;
      } while (uVar6 < (uint)local_160[1]);
    }
    local_151 = 0;
  }
LAB_00597d04:
  if ((local_140 != '\0') && (0x800 < local_14c)) {
    free(local_144);
  }
LAB_005984ba:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
LAB_00597390:
  do {
    local_174 = uVar6;
    if (*(uint *)(iVar11 + 4 + (int)local_17c * 8) < uVar6) break;
    if (*(int *)((int)this + 0x48) != 0) {
      piVar14 = (int *)((int)this + 0x44);
      local_15c = 0;
      local_158 = (int *)0x0;
      piVar7 = piVar14;
      do {
        if (*(uint *)((int)local_158 + *piVar7) == uVar6) {
          puVar8 = FUN_0059af10((int)this);
          puVar8[0x12] = 0;
          local_164 = puVar8;
          puVar9 = malloc(5);
          this = local_184;
          puVar8[0x11] = (uint)puVar9;
          puVar8[6] = 0x28;
          *puVar9 = 0xe;
          *(undefined4 *)(puVar8[0x11] + 1) = *(undefined4 *)((int)local_158 + *piVar14 + 4);
          FUN_0059bac0(local_184,&local_164);
          FUN_0059be80((void *)((int)this + 0x44),local_15c);
        }
        else {
          local_15c = local_15c + 1;
          local_158 = local_158 + 4;
        }
        piVar7 = (int *)((int)this + 0x44);
      } while (local_15c < *(uint *)((int)this + 0x48));
    }
    local_164 = (uint *)FUN_0059b170(this,uVar6,(undefined4 *)&local_190);
    if (local_164 != (uint *)0x0) {
      if ((local_16c < local_190._4_4_) ||
         ((local_16c == local_190._4_4_ && (local_168 <= (uint)local_190)))) {
        in_XMM0_Qa = 0.0;
      }
      local_151 = *(byte *)((int)this + 0xe78);
      FUN_005af360();
      dVar16 = *(double *)((int)this + 0xee0);
      *(double *)((int)this + 0xed8) = in_XMM0_Qa;
      if (dVar16 == -1.0) {
        *(double *)((int)this + 0xee0) = in_XMM0_Qa;
        *(double *)((int)this + 0xee8) = in_XMM0_Qa;
      }
      else {
        uVar10 = (uint)(in_XMM0_Qa - dVar16);
        uVar15 = (int)uVar10 >> 0x1f;
        *(double *)((int)this + 0xee0) = (in_XMM0_Qa - dVar16) * 0.05 + dVar16;
        in_XMM0_Qa = ((double)(int)((uVar10 ^ uVar15) - uVar15) - *(double *)((int)this + 0xee8)) *
                     0.05 + *(double *)((int)this + 0xee8);
        *(double *)((int)this + 0xee8) = in_XMM0_Qa;
      }
      *(byte *)((int)this + 0xed0) = local_151;
      puVar8 = local_164;
      if (local_151 != 0) {
        if ((*(uint *)((int)this + 0xec4) == uVar6) ||
           ((*(uint *)((int)this + 0xec4) - uVar6 & 0xffffff) < 0x800000)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
          *(undefined2 *)((int)this + 0xec8) = 0;
          *(undefined4 *)((int)this + 0xec4) = *(undefined4 *)((int)this + 0xec0);
        }
        dVar16 = *(double *)((int)this + 0xea8);
        in_XMM0_Qa = 0.0;
        dVar1 = *(double *)((int)this + 0xeb0);
        if ((dVar16 <= dVar1) || (dVar1 == 0.0)) {
          iVar11 = *(int *)((int)this + 0xea0);
          dVar16 = (double)iVar11 + *(double *)(&DAT_0062f350 + (iVar11 >> 0x1f) * -8) + dVar16;
          *(double *)((int)this + 0xea8) = dVar16;
          if ((dVar1 < dVar16) && (dVar1 != 0.0)) {
            in_XMM0_Qa = ((double)(iVar11 * iVar11) +
                         *(double *)(&DAT_0062f350 + (iVar11 * iVar11 >> 0x1f) * -8)) / dVar16 +
                         dVar1;
            goto LAB_00597636;
          }
        }
        else if (bVar3) {
          iVar11 = *(int *)((int)this + 0xea0) * *(int *)((int)this + 0xea0);
          in_XMM0_Qa = ((double)iVar11 + *(double *)(&DAT_0062f350 + (iVar11 >> 0x1f) * -8)) /
                       dVar16 + dVar16;
LAB_00597636:
          *(double *)((int)this + 0xea8) = in_XMM0_Qa;
        }
      }
      do {
        FUN_00599ca0(this,*puVar8,local_168,local_16c,local_160,(undefined4 *)local_170);
        uVar6 = local_174;
        puVar13 = puVar8 + 1;
        puVar8 = (uint *)*puVar13;
      } while ((uint *)*puVar13 != (uint *)0x0);
      FUN_0059b260(this,local_174);
    }
    iVar11 = *(int *)((int)this + 0xf50);
    uVar6 = uVar6 + 1 & 0xffffff;
    local_174 = uVar6;
  } while (*(uint *)(iVar11 + (int)local_17c * 8) <= uVar6);
  local_17c = (uint *)((int)local_17c + 1);
  if (*(uint **)((int)this + 0xf54) <= local_17c) goto LAB_00597cf6;
  goto LAB_00597370;
}
