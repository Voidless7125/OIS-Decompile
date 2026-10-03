#include "../ois_server.exe.h"


// Library Function - Single Match
//  public: __thiscall std::exception::exception(class std::exception const &)
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  __std_exception_copy(param_1 + 4,this + 4);
  return this;
}
