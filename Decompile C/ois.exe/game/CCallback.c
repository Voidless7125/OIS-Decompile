#include "../ois.exe.h"


// public: __thiscall CCallback<class Stats,struct UserStatsReceived_t,0>::~CCallback<class
// Stats,struct UserStatsReceived_t,0>(void)

void __thiscall CCallback<>::~CCallback<>(CCallback<> *this)

{
  *(undefined ***)this = CCallbackImpl<24>::vftable;
  if (((byte)this[4] & 1) != 0) {
    SteamAPI_UnregisterCallback(this);
  }
  return;
}


// public: __thiscall CCallback<class Stats,struct UserStatsStored_t,0>::~CCallback<class
// Stats,struct UserStatsStored_t,0>(void)

void __thiscall CCallback<>::~CCallback<>(CCallback<> *this)

{
  *(undefined ***)this = CCallbackImpl<16>::vftable;
  if (((byte)this[4] & 1) != 0) {
    SteamAPI_UnregisterCallback(this);
  }
  return;
}


// protected: virtual void __thiscall CCallback<class Stats,struct UserStatsStored_t,0>::Run(void *)

void __thiscall CCallback<>::Run(CCallback<> *this,void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x005203ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(this + 0x10))();
  return;
}
