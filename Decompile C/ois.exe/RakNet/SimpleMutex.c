#include "../ois.exe.h"


// public: __thiscall RakNet::SimpleMutex::SimpleMutex(void)

SimpleMutex * __thiscall RakNet::SimpleMutex::SimpleMutex(SimpleMutex *this)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  return this;
}


// public: __thiscall RakNet::SimpleMutex::~SimpleMutex(void)

void __thiscall RakNet::SimpleMutex::~SimpleMutex(SimpleMutex *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}
