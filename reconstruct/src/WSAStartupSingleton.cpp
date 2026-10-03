// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __cdecl WSAStartupSingleton::AddRef(void)
void WSAStartupSingleton::AddRef()

{
  uint uVar1;
  undefined1 local_1a0 [4];
  WSAData winsockInfo;
  
  // [cookie] uVar1 = ___security_cookie ^ (uint)local_1a0;
  refCount = refCount + 1;
  if (refCount == 1) {
    WSAStartup(0x202,(LPWSADATA)local_1a0);
  }
  // [cookie] __security_check_cookie(uVar1 ^ (uint)local_1a0);
  return;
}
