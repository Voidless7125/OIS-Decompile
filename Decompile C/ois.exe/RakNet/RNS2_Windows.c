#include "../ois.exe.h"


// public: virtual void * __thiscall RakNet::RNS2_Windows::`vector deleting destructor'(unsigned
// int)

void * __thiscall
RakNet::RNS2_Windows::_vector_deleting_destructor_(RNS2_Windows *this,uint param_1)

{
  this->_padding_ = (int)RNS2_Berkley::vftable;
  if (this->_padding_ != 0xffffffff) {
    closesocket(this->_padding_);
  }
  this->_padding_ = (int)RakNetSocket2::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)&DAT_00000064);
  }
  return this;
}


// public: virtual enum RakNet::RNS2BindResult __thiscall RakNet::RNS2_Windows::Bind(struct
// RakNet::RNS2_BerkleyBindParameters *,char const *,unsigned int)

RNS2BindResult __thiscall
RakNet::RNS2_Windows::Bind
          (RNS2_Windows *this,RNS2_BerkleyBindParameters *param_1,char *param_2,uint param_3)

{
  RNS2BindResult RVar1;
  char *in_stack_ffffffe8;
  char *pcVar2;
  uint in_stack_ffffffec;
  uint uVar3;
  
  RVar1 = RNS2_Berkley::BindShared((RNS2_Berkley *)this,param_1,in_stack_ffffffe8,in_stack_ffffffec)
  ;
  if (RVar1 == BR_FAILED_TO_BIND_SOCKET) {
    uVar3 = 100;
    pcVar2 = (char *)0x5adc82;
    Sleep(100);
    RVar1 = RNS2_Berkley::BindShared((RNS2_Berkley *)this,param_1,pcVar2,uVar3);
  }
  return RVar1;
}


// public: virtual int __thiscall RakNet::RNS2_Windows::Send(struct RakNet::RNS2_SendParameters
// *,char const *,unsigned int)

int __thiscall
RakNet::RNS2_Windows::Send
          (RNS2_Windows *this,RNS2_SendParameters *param_1,char *param_2,uint param_3)

{
  SOCKET s;
  int iVar1;
  int iVar2;
  int local_14 [4];
  
  local_14[3] = ___security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->slo == (SocketLayerOverride *)0x0) ||
     (iVar1 = (**(code **)(*(int *)this->slo + 4))
                        (param_1->data,param_1->length,&param_1->systemAddress), iVar1 < 0)) {
    s = this->_padding_;
    iVar1 = 0;
    do {
      local_14[2] = -1;
      if (0 < param_1->ttl) {
        local_14[1] = 4;
        iVar2 = getsockopt(s,0,4,(char *)(local_14 + 2),local_14 + 1);
        if (iVar2 != -1) {
          local_14[0] = param_1->ttl;
          setsockopt(s,0,4,(char *)local_14,4);
        }
      }
      if (*(short *)&(param_1->systemAddress).address == 2) {
        iVar1 = sendto(s,param_1->data,param_1->length,0,(sockaddr *)&param_1->systemAddress,0x10);
      }
      if (iVar1 < 0) {
        _printf("sendto failed with code %i for char %i and length %i.\n",iVar1,(int)*param_1->data,
                param_1->length);
      }
      if (local_14[2] != -1) {
        setsockopt(s,0,4,(char *)(local_14 + 2),4);
      }
    } while (iVar1 == 0);
  }
  iVar1 = __security_check_cookie(local_14[3] ^ (uint)&stack0xfffffffc);
  return iVar1;
}
