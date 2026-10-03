#include "../ois.exe.h"


// protected: virtual int __thiscall CCallbackImpl<16>::GetCallbackSizeBytes(void)

int __thiscall CCallbackImpl<16>::GetCallbackSizeBytes(CCallbackImpl<16> *this)

{
  return 0x10;
}


// protected: virtual void __thiscall CCallbackImpl<16>::Run(void *,bool,unsigned __int64)

void __thiscall
CCallbackImpl<16>::Run(CCallbackImpl<16> *this,void *param_1,bool param_2,__uint64 param_3)

{
  (**(code **)(*(int *)this + 4))(param_1);
  return;
}


// protected: virtual int __thiscall CCallbackImpl<24>::GetCallbackSizeBytes(void)

int __thiscall CCallbackImpl<24>::GetCallbackSizeBytes(CCallbackImpl<24> *this)

{
  return 0x18;
}
