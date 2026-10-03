#include "../ois.exe.h"


// public: virtual __thiscall RakNet::RNS2EventHandler::~RNS2EventHandler(void)

void __thiscall RakNet::RNS2EventHandler::~RNS2EventHandler(RNS2EventHandler *this)

{
  *(undefined ***)this = vftable;
  return;
}


// public: virtual void * __thiscall RakNet::RNS2EventHandler::`vector deleting destructor'(unsigned
// int)

void * __thiscall
RakNet::RNS2EventHandler::_vector_deleting_destructor_(RNS2EventHandler *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)&DAT_00000004);
  }
  return this;
}
