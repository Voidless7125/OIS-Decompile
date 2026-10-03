#include "../ois_server.exe.h"


void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x005aedf8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x005aee04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = malloc(_Size);
  return pvVar1;
}


void * __cdecl memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x005af485. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memchr(_Buf,_Val,_MaxCount);
  return pvVar1;
}


void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x005af48b. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x005af491. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}
