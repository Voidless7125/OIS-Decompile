#include "../ois.exe.h"


// public: virtual void * __thiscall type_info::`vector deleting destructor'(unsigned int)

void * __thiscall type_info::_vector_deleting_destructor_(type_info *this,uint param_1)

{
  this->_padding_ = (int)vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0xc);
  }
  return this;
}
