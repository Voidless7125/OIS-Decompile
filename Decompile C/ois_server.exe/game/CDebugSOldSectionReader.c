#include "../ois_server.exe.h"


// Library Function - Single Match
//  public: virtual void * __thiscall CDebugSOldSectionReader::`scalar deleting destructor'(unsigned
// int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void * __thiscall
CDebugSOldSectionReader::_scalar_deleting_destructor_(CDebugSOldSectionReader *this,uint param_1)

{
  *(undefined ***)this = RakNet::RakNetSocket2::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}
