#include "../ois.exe.h"


// public: __thiscall RakNet::RakString::RakString(void)

RakString * __thiscall RakNet::RakString::RakString(RakString *this)

{
  *(SharedString **)this = &emptyString;
  return this;
}


// public: __cdecl RakNet::RakString::RakString(char const *,...)

char * __thiscall RakNet::RakString::RakString(RakString *this,char *param_1,...)

{
  char *in_stack_00000008;
  
  Assign((RakString *)param_1,in_stack_00000008,&stack0x0000000c);
  return param_1;
}


// public: __thiscall RakNet::RakString::~RakString(void)

void __thiscall RakNet::RakString::~RakString(RakString *this)

{
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_005cb7a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Free(this);
  ExceptionList = local_10;
  return;
}


// public: bool __thiscall RakNet::RakString::IPAddressMatch(char const *)

bool __thiscall RakNet::RakString::IPAddressMatch(RakString *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  
  if ((param_1 != (char *)0x0) && (cVar5 = *param_1, cVar5 != '\0')) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar3 - (int)(param_1 + 1)) < 0x10) {
      iVar4 = 0;
      pcVar3 = *(char **)(*(int *)this + 0x10);
      if (*pcVar3 == cVar5) {
        pcVar2 = param_1;
        do {
          if (cVar5 == '\0') {
            return true;
          }
          cVar5 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          iVar4 = iVar4 + 1;
        } while (pcVar2[(int)pcVar3 - (int)param_1] == cVar5);
      }
      if (((pcVar3[iVar4] != '\0') && (param_1[iVar4] != '\0')) && (pcVar3[iVar4] == '*')) {
        return true;
      }
    }
  }
  return false;
}


// public: static void __cdecl RakNet::RakString::FreeMemoryNoMutex(void)

void __cdecl RakNet::RakString::FreeMemoryNoMutex(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = 0;
  if (freeList.list_size != 0) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)freeList.listArray[uVar1]->refCountMutex;
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        DeleteCriticalSection(lpCriticalSection);
        operator_delete(lpCriticalSection,(nothrow_t *)0x18);
      }
      free(freeList.listArray[uVar1]);
      uVar1 = uVar1 + 1;
    } while (uVar1 < freeList.list_size);
  }
  if (freeList.allocation_size != 0) {
    operator_delete__(freeList.listArray);
    freeList.allocation_size = 0;
    freeList.listArray = (SharedString **)0x0;
    freeList.list_size = 0;
  }
  return;
}


// protected: void __thiscall RakNet::RakString::Allocate(unsigned int)

void __thiscall RakNet::RakString::Allocate(RakString *this,uint param_1)

{
  LPCRITICAL_SECTION p_Var1;
  SharedString *pSVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvVar3;
  List<> *this_00;
  int iVar4;
  char *pcVar5;
  SharedString *ss;
  
  p_Var1 = (LPCRITICAL_SECTION)GetPoolMutex();
  EnterCriticalSection(p_Var1);
  if (freeList.list_size == 0) {
    iVar4 = 0x80;
    do {
      pSVar2 = malloc(0x84);
      ss = pSVar2;
      lpCriticalSection = operator_new(0x18);
      pcVar5 = (char *)0x5ae0f2;
      p_Var1 = lpCriticalSection;
      InitializeCriticalSection(lpCriticalSection);
      pSVar2->refCountMutex = (SimpleMutex *)lpCriticalSection;
      DataStructures::List<>::Insert(this_00,&ss,pcVar5,(uint)p_Var1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(SharedString **)this = freeList.listArray[freeList.list_size - 1];
  if (freeList.list_size - 1 < freeList.list_size) {
    freeList.list_size = freeList.list_size - 1;
  }
  p_Var1 = (LPCRITICAL_SECTION)GetPoolMutex();
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


// protected: void __thiscall RakNet::RakString::Assign(char const *)

void __thiscall RakNet::RakString::Assign(RakString *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    Allocate(this,(uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    memcpy(*(void **)(*(int *)this + 0x10),param_1,(size_t)(pcVar2 + (1 - (int)(param_1 + 1))));
    return;
  }
  *(SharedString **)this = &emptyString;
  return;
}


// protected: void __thiscall RakNet::RakString::Assign(char const *,char *)

void __thiscall RakNet::RakString::Assign(RakString *this,char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  size_t extraout_ECX;
  size_t _MaxCount;
  size_t extraout_ECX_00;
  va_list unaff_EBX;
  _locale_t unaff_ESI;
  char *pcVar4;
  char *_Memory;
  _locale_t unaff_EDI;
  size_t _NewSize;
  char stackBuff [512];
  
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    *(SharedString **)this = &emptyString;
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar3 = __vsnprintf_l(param_1,(size_t)param_2,param_2,unaff_ESI,unaff_EBX);
  if (iVar3 != -1) {
    if (stackBuff[0] != '\0') {
      pcVar4 = stackBuff;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      Allocate(this,(uint)(pcVar4 + (1 - (int)(stackBuff + 1))));
      memcpy(*(void **)(*(int *)this + 0x10),stackBuff,(size_t)(pcVar4 + (1 - (int)(stackBuff + 1)))
            );
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
    *(SharedString **)this = &emptyString;
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
  _NewSize = 0x1fa0;
  pcVar4 = realloc((void *)0x0,0x1fa0);
  _MaxCount = extraout_ECX;
  if (pcVar4 != (char *)0x0) {
    do {
      _Memory = pcVar4;
      iVar3 = __vsnprintf_l(param_1,_MaxCount,param_2,unaff_EDI,(va_list)unaff_ESI);
      if (iVar3 != -1) goto LAB_005ae2f1;
      _NewSize = _NewSize * 2;
      pcVar4 = realloc(_Memory,_NewSize);
      _MaxCount = extraout_ECX_00;
    } while (pcVar4 != (char *)0x0);
    if (_Memory != (char *)0x0) {
LAB_005ae2f1:
      Assign(this,_Memory);
      free(_Memory);
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  if (stackBuff[0] != '\0') {
    pcVar4 = stackBuff;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    Allocate(this,(uint)(pcVar4 + (1 - (int)(stackBuff + 1))));
    memcpy(*(void **)(*(int *)this + 0x10),stackBuff,(size_t)(pcVar4 + (1 - (int)(stackBuff + 1))));
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(SharedString **)this = &emptyString;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// protected: void __thiscall RakNet::RakString::Free(void)

void __thiscall RakNet::RakString::Free(RakString *this)

{
  LPCRITICAL_SECTION p_Var1;
  List<> *this_00;
  char *pcVar2;
  
  if (*(SharedString **)this != &emptyString) {
    EnterCriticalSection((LPCRITICAL_SECTION)(*(SharedString **)this)->refCountMutex);
    *(int *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + -1;
    p_Var1 = (LPCRITICAL_SECTION)**(undefined4 **)this;
    if ((*(undefined4 **)this)[1] == 0) {
      LeaveCriticalSection(p_Var1);
      if (0x70 < *(uint *)(*(int *)this + 8)) {
        free(*(void **)(*(int *)this + 0xc));
      }
      p_Var1 = (LPCRITICAL_SECTION)GetPoolMutex();
      pcVar2 = (char *)0x5ae3ea;
      EnterCriticalSection(p_Var1);
      DataStructures::List<>::Insert(this_00,(SharedString **)this,pcVar2,(uint)p_Var1);
      p_Var1 = (LPCRITICAL_SECTION)GetPoolMutex();
    }
    LeaveCriticalSection(p_Var1);
    *(SharedString **)this = &emptyString;
  }
  return;
}


void __cdecl RakNet::RakString::_dynamic_atexit_destructor_for__cleanup__(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = 0;
  if (freeList.list_size != 0) {
    do {
      lpCriticalSection = (LPCRITICAL_SECTION)freeList.listArray[uVar1]->refCountMutex;
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        DeleteCriticalSection(lpCriticalSection);
        operator_delete(lpCriticalSection,(nothrow_t *)0x18);
      }
      free(freeList.listArray[uVar1]);
      uVar1 = uVar1 + 1;
    } while (uVar1 < freeList.list_size);
  }
  if (freeList.allocation_size != 0) {
    operator_delete__(freeList.listArray);
    freeList.allocation_size = 0;
    freeList.listArray = (SharedString **)0x0;
    freeList.list_size = 0;
  }
  return;
}
