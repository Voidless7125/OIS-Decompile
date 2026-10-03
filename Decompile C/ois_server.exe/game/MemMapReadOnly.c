#include "../ois_server.exe.h"


// Library Function - Single Match
//  public: virtual void * __thiscall MemMapReadOnly::`scalar deleting destructor'(unsigned int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void * __thiscall MemMapReadOnly::_scalar_deleting_destructor_(MemMapReadOnly *this,uint param_1)

{
  FUN_00593d00((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}
