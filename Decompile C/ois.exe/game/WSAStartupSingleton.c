#include "../ois.exe.h"


// public: static void __cdecl WSAStartupSingleton::AddRef(void)

void __cdecl WSAStartupSingleton::AddRef(void)

{
  uint uVar1;
  undefined1 local_1a0 [4];
  WSAData winsockInfo;
  
  uVar1 = ___security_cookie ^ (uint)local_1a0;
  refCount = refCount + 1;
  if (refCount == 1) {
    WSAStartup(0x202,(LPWSADATA)local_1a0);
  }
  __security_check_cookie(uVar1 ^ (uint)local_1a0);
  return;
}
