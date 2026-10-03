#include "../ois.exe.h"


// public: __thiscall RakNet::RNS2_SendParameters::RNS2_SendParameters(void)

RNS2_SendParameters * __thiscall
RakNet::RNS2_SendParameters::RNS2_SendParameters(RNS2_SendParameters *this)

{
  *(undefined4 *)&this->systemAddress = 0;
  *(undefined4 *)&(this->systemAddress).field_0x4 = 0;
  *(undefined4 *)&(this->systemAddress).field_0x8 = 0;
  *(undefined4 *)&(this->systemAddress).field_0xc = 0;
  *(undefined2 *)&this->systemAddress = 2;
  (this->systemAddress).debugPort = 0;
  (this->systemAddress).systemIndex = 0xffff;
  this->ttl = 0;
  return this;
}
