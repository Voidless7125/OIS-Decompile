#include "../ois_server.exe.h"


// Library Function - Single Match
//  public: virtual void * __thiscall std::_Facet_base::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2019 Release

void * __thiscall std::_Facet_base::_scalar_deleting_destructor_(_Facet_base *this,uint param_1)

{
  *(undefined ***)this = RakNet::RNS2EventHandler::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


// Library Function - Single Match
//  public: virtual void * __thiscall std::_Facet_base::`scalar deleting destructor'(unsigned int)
// 
// Library: Visual Studio 2019 Release

void * __thiscall std::_Facet_base::_scalar_deleting_destructor_(_Facet_base *this,uint param_1)

{
  *(undefined ***)this = RakNet::RakPeerInterface::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}
