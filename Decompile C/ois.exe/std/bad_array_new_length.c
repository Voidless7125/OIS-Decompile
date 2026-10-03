#include "../ois.exe.h"


// public: __thiscall std::bad_array_new_length::bad_array_new_length(class
// std::bad_array_new_length const &)

bad_array_new_length * __thiscall
std::bad_array_new_length::bad_array_new_length
          (bad_array_new_length *this,bad_array_new_length *param_1)

{
  exception::exception((exception *)this,(exception *)param_1);
  *(undefined ***)this = vftable;
  return this;
}


// public: __thiscall std::bad_array_new_length::bad_array_new_length(void)

bad_array_new_length * __thiscall
std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  *(undefined4 *)&this->field_0x4 = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(char **)&this->field_0x4 = "bad array new length";
  *(undefined ***)this = vftable;
  return this;
}
