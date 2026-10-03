#include "../ois.exe.h"


// memset

void __cdecl memset(void *param_1,int param_2,size_t param_3)

{
                    // WARNING: Could not recover jumptable at 0x005b0b28. Too many branches
                    // WARNING: Treating indirect jump as call
  memset(param_1,param_2,param_3);
  return;
}


// malloc

void __cdecl malloc(size_t param_1)

{
                    // WARNING: Could not recover jumptable at 0x005b0b34. Too many branches
                    // WARNING: Treating indirect jump as call
  malloc(param_1);
  return;
}


// memchr

void __cdecl memchr(void *param_1,int param_2,size_t param_3)

{
                    // WARNING: Could not recover jumptable at 0x005b11b5. Too many branches
                    // WARNING: Treating indirect jump as call
  memchr(param_1,param_2,param_3);
  return;
}


// memcpy

void __cdecl memcpy(void *param_1,void *param_2,size_t param_3)

{
                    // WARNING: Could not recover jumptable at 0x005b11bb. Too many branches
                    // WARNING: Treating indirect jump as call
  memcpy(param_1,param_2,param_3);
  return;
}


// memmove

void __cdecl memmove(void *param_1,void *param_2,size_t param_3)

{
                    // WARNING: Could not recover jumptable at 0x005b11c1. Too many branches
                    // WARNING: Treating indirect jump as call
  memmove(param_1,param_2,param_3);
  return;
}
