#include "../ois.exe.h"


// public: virtual __thiscall RakNet::RakPeerInterface::~RakPeerInterface(void)

void __thiscall RakNet::RakPeerInterface::~RakPeerInterface(RakPeerInterface *this)

{
  *(undefined ***)this = vftable;
  return;
}


// public: virtual void * __thiscall RakNet::RakPeerInterface::`vector deleting destructor'(unsigned
// int)

void * __thiscall
RakNet::RakPeerInterface::_vector_deleting_destructor_(RakPeerInterface *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)&DAT_00000004);
  }
  return this;
}


// public: static unsigned __int64 __cdecl
// RakNet::RakPeerInterface::Get64BitUniqueRandomNumber(void)

__uint64 __cdecl RakNet::RakPeerInterface::Get64BitUniqueRandomNumber(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  __uint64 _Var5;
  __uint64 _Var6;
  undefined1 auStack_24 [8];
  __uint64 lastTime;
  __uint64 g;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)auStack_24;
  join_0x00000008_0x00000000_ = GetTimeUS_Windows();
  iVar4 = 0;
  iVar3 = 0;
  do {
    _Var5 = GetTimeUS_Windows();
    Sleep(1);
    Sleep(0);
    _Var6 = GetTimeUS_Windows();
    bVar2 = (byte)iVar4;
    iVar4 = iVar4 + 4;
    pbVar1 = (byte *)((int)&lastTime + iVar3 + 4);
    *pbVar1 = *pbVar1 ^ (byte)((uint)(((int)_Var6 - (int)_Var5) * 0x10000000) >> (bVar2 & 0x1f));
    iVar3 = iVar3 + 1;
  } while (iVar4 < 0x20);
  _Var5 = __security_check_cookie(local_c ^ (uint)auStack_24);
  return _Var5;
}
