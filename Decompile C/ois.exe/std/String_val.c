#include "../ois.exe.h"


// public: __thiscall std::_String_val<struct std::_Simple_types<char> >::_String_val<struct
// std::_Simple_types<char> >(void)

_String_val<> * __thiscall std::_String_val<>::_String_val<>(_String_val<> *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}


// public: static void __cdecl std::_String_val<struct std::_Simple_types<char> >::_Xran(void)

void __cdecl std::_String_val<>::_Xran(void)

{
                    // WARNING: Subroutine does not return
  std::_Xout_of_range("invalid string position");
}
