#include "../ois.exe.h"


// public: __thiscall std::exception::exception(class std::exception const &)

exception * __thiscall std::exception::exception(exception *this,exception *param_1)

{
  this->_padding_ = (int)vftable;
  (this->_Data)._What = (char *)0x0;
  *(undefined4 *)&(this->_Data)._DoFree = 0;
  ___std_exception_copy(&param_1->_Data,&this->_Data);
  return this;
}


// public: virtual char const * __thiscall std::exception::what(void)const 

char * __thiscall std::exception::what(exception *this)

{
  char *pcVar1;
  
  pcVar1 = (this->_Data)._What;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "Unknown exception";
  }
  return pcVar1;
}
