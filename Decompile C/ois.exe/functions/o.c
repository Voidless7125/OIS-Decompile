#include "../ois.exe.h"


// void * __cdecl operator new(unsigned int)

void * __cdecl operator_new(uint param_1)

{
  int iVar1;
  void *pvVar2;
  void *extraout_EAX;
  bad_array_new_length bStack_14;
  
  do {
    bStack_14._8_4_ = 0x5af859;
    pvVar2 = (void *)malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    bStack_14._8_4_ = 0x5af84c;
    iVar1 = __callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 != 0xffffffff) {
    __scrt_throw_std_bad_alloc();
    return extraout_EAX;
  }
  std::bad_array_new_length::bad_array_new_length(&bStack_14);
                    // WARNING: Subroutine does not return
  __CxxThrowException_8(&bStack_14,(ThrowInfo *)&pThrowInfo_0064fac8);
}


// void __cdecl operator delete(void *,struct std::nothrow_t const &)

void __cdecl operator_delete(void *param_1,nothrow_t *param_2)

{
  operator_delete(param_1);
  return;
}


// void __cdecl operator delete[](void *,unsigned int)

void __cdecl operator_delete__(void *param_1,uint param_2)

{
  operator_delete__(param_1);
  return;
}


// void * __cdecl operator new(unsigned int,struct std::nothrow_t const &)

void * __cdecl operator_new(uint param_1,nothrow_t *param_2)

{
  void *pvVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cdcb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  operator_new(param_1);
  pvVar1 = (void *)FUN_005af9ec();
  return pvVar1;
}


// void __cdecl operator delete[](void *)

void __cdecl operator_delete__(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x005b0b2e. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}


// void * __cdecl operator new[](unsigned int)

void * __cdecl operator_new__(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


// void __cdecl operator delete(void *)

void __cdecl operator_delete(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x005b0b2e. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_1);
  return;
}
