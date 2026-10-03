#include "../ois.exe.h"


// public: __thiscall std::bad_alloc::bad_alloc(class std::bad_alloc const &)

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this,bad_alloc *param_1)

{
  exception::exception((exception *)this,(exception *)param_1);
  *(undefined ***)this = vftable;
  return this;
}


// public: __thiscall std::bad_alloc::bad_alloc(void)

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  *(undefined4 *)&this->field_0x4 = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(char **)&this->field_0x4 = "bad allocation";
  *(undefined ***)this = vftable;
  return this;
}


// public: virtual __thiscall std::bad_alloc::~bad_alloc(void)

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined ***)this = exception::vftable;
  ___std_exception_destroy(&this->field_0x4);
  return;
}


// public: virtual void * __thiscall std::bad_alloc::`vector deleting destructor'(unsigned int)

void * __thiscall std::bad_alloc::_vector_deleting_destructor_(bad_alloc *this,uint param_1)

{
  *(undefined ***)this = exception::vftable;
  ___std_exception_destroy(&this->field_0x4);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0xc);
  }
  return this;
}
