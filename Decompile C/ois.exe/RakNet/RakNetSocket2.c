#include "../ois.exe.h"


// public: virtual void * __thiscall RakNet::RakNetSocket2::`vector deleting destructor'(unsigned
// int)

void * __thiscall
RakNet::RakNetSocket2::_vector_deleting_destructor_(RakNetSocket2 *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x24);
  }
  return this;
}
