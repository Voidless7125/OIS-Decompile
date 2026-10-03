#include "../ois.exe.h"


// protected: enum RakNet::RNS2BindResult __thiscall RakNet::RNS2_Berkley::BindSharedIPV4(struct
// RakNet::RNS2_BerkleyBindParameters *,char const *,unsigned int)

RNS2BindResult __thiscall
RakNet::RNS2_Berkley::BindSharedIPV4
          (RNS2_Berkley *this,RNS2_BerkleyBindParameters *param_1,char *param_2,uint param_3)

{
  char *cp;
  u_short uVar1;
  SOCKET s;
  ulong uVar2;
  uint uVar3;
  RNS2BindResult RVar4;
  sockaddr local_20;
  u_long local_10;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined4 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  uVar1 = htons(param_1->port);
  *(u_short *)&this->field_0xe = uVar1;
  s = socket((uint)param_1->addressFamily,param_1->type,param_1->protocol);
  this->rns2Socket = s;
  if (s != 0xffffffff) {
    local_10 = 0x40000;
    setsockopt(s,0xffff,0x1002,(char *)&local_10,4);
    local_10 = 0;
    setsockopt(this->rns2Socket,0xffff,0x80,(char *)&local_10,4);
    local_10 = 0x4000;
    setsockopt(this->rns2Socket,0xffff,0x1001,(char *)&local_10,4);
    local_10 = (u_long)param_1->nonBlockingSocket;
    ioctlsocket(this->rns2Socket,-0x7ffb9982,&local_10);
    local_10 = param_1->setBroadcast;
    setsockopt(this->rns2Socket,0xffff,0x20,(char *)&local_10,4);
    local_10 = param_1->setIPHdrIncl;
    setsockopt(this->rns2Socket,0,2,(char *)&local_10,4);
    *(undefined2 *)&this->field_0xc = 2;
    cp = param_1->hostAddress;
    if ((cp == (char *)0x0) || (*cp == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = inet_addr(cp);
    }
    *(ulong *)&this->field_0x10 = uVar2;
    uVar3 = bind(this->rns2Socket,(sockaddr *)&this->field_0xc,0x10);
    if (uVar3 < 0x80000000) {
      local_10 = 0x10;
      local_20.sa_family = 0;
      local_20.sa_data[0] = '\0';
      local_20.sa_data[1] = '\0';
      local_20.sa_data[2] = '\0';
      local_20.sa_data[3] = '\0';
      local_20.sa_data[4] = '\0';
      local_20.sa_data[5] = '\0';
      local_20.sa_data[6] = '\0';
      local_20.sa_data[7] = '\0';
      local_20.sa_data[8] = '\0';
      local_20.sa_data[9] = '\0';
      local_20.sa_data[10] = '\0';
      local_20.sa_data[0xb] = '\0';
      local_20.sa_data[0xc] = '\0';
      local_20.sa_data[0xd] = '\0';
      getsockname(this->rns2Socket,&local_20,(int *)&local_10);
      this->field_0xe = local_20.sa_data[0];
      this->field_0xf = local_20.sa_data[1];
      uVar1 = ntohs(local_20.sa_data._0_2_);
      *(u_short *)&this->field_0x1c = uVar1;
      *(int *)&this->field_0x10 = CONCAT22(local_20.sa_data._4_2_,local_20.sa_data._2_2_);
      if (CONCAT22(local_20.sa_data._4_2_,local_20.sa_data._2_2_) == 0) {
        uVar2 = inet_addr("127.0.0.1");
        *(ulong *)&this->field_0x10 = uVar2;
      }
      RVar4 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return RVar4;
    }
    closesocket(this->rns2Socket);
  }
  RVar4 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return RVar4;
}


// protected: enum RakNet::RNS2BindResult __thiscall RakNet::RNS2_Berkley::BindShared(struct
// RakNet::RNS2_BerkleyBindParameters *,char const *,unsigned int)

RNS2BindResult __thiscall
RakNet::RNS2_Berkley::BindShared
          (RNS2_Berkley *this,RNS2_BerkleyBindParameters *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  RNS2EventHandler *pRVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined2 uVar6;
  bool bVar7;
  undefined3 uVar8;
  RNS2BindResult RVar9;
  int iVar10;
  char *in_stack_ffffffc0;
  uint in_stack_ffffffc4;
  RNS2_SendParameters bsp;
  ulong zero;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  RVar9 = BindSharedIPV4(this,param_1,in_stack_ffffffc0,in_stack_ffffffc4);
  if (RVar9 == BR_SUCCESS) {
    bsp.data = (char *)&zero;
    bsp.length = 4;
    bsp.systemAddress.systemIndex = *(ushort *)&this->field_0x1e;
    bsp.systemAddress.debugPort = *(ushort *)&this->field_0x1c;
    bsp.systemAddress.address = (<>)this->field_0xc;
    bsp.systemAddress._1_3_ = *(undefined3 *)&this->field_0xd;
    bsp.systemAddress._4_4_ = *(undefined4 *)&this->field_0x10;
    bsp.systemAddress._8_4_ = *(undefined4 *)&this->field_0x14;
    bsp.systemAddress._12_4_ = *(undefined4 *)&this->field_0x18;
    bsp.ttl = 0;
    zero = RVar9;
    iVar10 = (**(code **)(*(int *)this + 4))
                       (&bsp,"f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x140);
    if (iVar10 < 0) {
      RVar9 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return RVar9;
    }
    uVar4 = *(undefined2 *)&param_1->field_0x2;
    pcVar1 = param_1->hostAddress;
    uVar5 = param_1->addressFamily;
    uVar6 = *(undefined2 *)&param_1->field_0xa;
    iVar10 = param_1->type;
    (this->binding).port = param_1->port;
    *(undefined2 *)&(this->binding).field_0x2 = uVar4;
    (this->binding).hostAddress = pcVar1;
    (this->binding).addressFamily = uVar5;
    *(undefined2 *)&(this->binding).field_0xa = uVar6;
    (this->binding).type = iVar10;
    bVar7 = param_1->nonBlockingSocket;
    uVar8 = *(undefined3 *)&param_1->field_0x15;
    iVar10 = param_1->setBroadcast;
    iVar2 = param_1->setIPHdrIncl;
    (this->binding).protocol = param_1->protocol;
    (this->binding).nonBlockingSocket = bVar7;
    *(undefined3 *)&(this->binding).field_0x15 = uVar8;
    (this->binding).setBroadcast = iVar10;
    (this->binding).setIPHdrIncl = iVar2;
    iVar10 = param_1->pollingThreadPriority;
    pRVar3 = param_1->eventHandler;
    uVar5 = param_1->remotePortRakNetWasStartedOn_PS3_PS4_PSP2;
    uVar4 = *(undefined2 *)&param_1->field_0x2e;
    (this->binding).doNotFragment = param_1->doNotFragment;
    (this->binding).pollingThreadPriority = iVar10;
    (this->binding).eventHandler = pRVar3;
    (this->binding).remotePortRakNetWasStartedOn_PS3_PS4_PSP2 = uVar5;
    *(undefined2 *)&(this->binding).field_0x2e = uVar4;
  }
  RVar9 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return RVar9;
}


// protected: static unsigned int __stdcall RakNet::RNS2_Berkley::RecvFromLoop(void *)
// _StartAddress parameter of _beginthreadex
// 

uint RakNet::RNS2_Berkley::RecvFromLoop(void *param_1)

{
  char cVar1;
  u_short uVar2;
  char *buf;
  int iVar3;
  uint uVar4;
  __uint64 _Var5;
  int *local_38;
  int iStack_34;
  sockaddr sStack_30;
  uint local_14;
  
  local_14 = ___security_cookie ^ (uint)&local_38;
  local_38 = (int *)((int)param_1 + 0x58);
  LOCK();
  *local_38 = *local_38 + 1;
  UNLOCK();
  cVar1 = *(char *)((int)param_1 + 0x5c);
  do {
    if (cVar1 != '\0') {
      LOCK();
      *local_38 = *local_38 + -1;
      UNLOCK();
      uVar4 = __security_check_cookie(local_14 ^ (uint)&local_38);
      return uVar4;
    }
    buf = (char *)(**(code **)(**(int **)((int)param_1 + 0x50) + 0xc))
                            ("f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x161);
    if (buf != (char *)0x0) {
      *(void **)(buf + 0x5f8) = param_1;
      iStack_34 = 0x10;
      sStack_30.sa_data[2] = '\0';
      sStack_30.sa_data[3] = '\0';
      sStack_30.sa_data[4] = '\0';
      sStack_30.sa_data[5] = '\0';
      sStack_30.sa_data[6] = '\0';
      sStack_30.sa_data[7] = '\0';
      sStack_30.sa_data[8] = '\0';
      sStack_30.sa_data[9] = '\0';
      sStack_30.sa_data[10] = '\0';
      sStack_30.sa_data[0xb] = '\0';
      sStack_30.sa_data[0xc] = '\0';
      sStack_30.sa_data[0xd] = '\0';
      sStack_30.sa_family = 2;
      sStack_30.sa_data[0] = '\0';
      sStack_30.sa_data[1] = '\0';
      iVar3 = recvfrom(*(SOCKET *)((int)param_1 + 0x24),buf,0x5d4,0,&sStack_30,&iStack_34);
      *(int *)(buf + 0x5d4) = iVar3;
      if (0 < iVar3) {
        _Var5 = GetTimeUS_Windows();
        *(__uint64 *)(buf + 0x5f0) = _Var5;
        *(undefined2 *)(buf + 0x5da) = sStack_30.sa_data._0_2_;
        uVar2 = ntohs(sStack_30.sa_data._0_2_);
        *(u_short *)(buf + 0x5e8) = uVar2;
        *(uint *)(buf + 0x5dc) = CONCAT22(sStack_30.sa_data._4_2_,sStack_30.sa_data._2_2_);
        if (0 < *(int *)(buf + 0x5d4)) {
          (**(code **)(**(int **)((int)param_1 + 0x50) + 4))(buf);
          goto LAB_005adac8;
        }
      }
      Sleep(0);
      (**(code **)(**(int **)((int)param_1 + 0x50) + 8))
                (buf,"f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x16f);
    }
LAB_005adac8:
    cVar1 = *(char *)((int)param_1 + 0x5c);
  } while( true );
}


// public: virtual void * __thiscall RakNet::RNS2_Berkley::`vector deleting destructor'(unsigned
// int)

void * __thiscall
RakNet::RNS2_Berkley::_vector_deleting_destructor_(RNS2_Berkley *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (this->rns2Socket != 0xffffffff) {
    closesocket(this->rns2Socket);
  }
  *(undefined ***)this = RakNetSocket2::vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x60);
  }
  return this;
}


// public: void __thiscall RakNet::RNS2_Berkley::BlockOnStopRecvPollingThread(void)

void __thiscall RakNet::RNS2_Berkley::BlockOnStopRecvPollingThread(RNS2_Berkley *this)

{
  int iVar1;
  __uint64 _Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *local_30;
  RNS2_SendParameters bsp;
  ulong zero;
  
  bsp.ttl = 0;
  local_30 = &bsp.ttl;
  bsp.data = &DAT_00000004;
  this->endThreads = true;
  bsp.systemAddress._12_4_ = *(undefined4 *)&this->field_0x1c;
  bsp.length = *(int *)&this->field_0xc;
  bsp.systemAddress.address = (<>)this->field_0x10;
  bsp.systemAddress._1_3_ = *(undefined3 *)&this->field_0x11;
  bsp.systemAddress._4_4_ = *(undefined4 *)&this->field_0x14;
  bsp.systemAddress._8_4_ = *(undefined4 *)&this->field_0x18;
  bsp.systemAddress.debugPort = 0;
  bsp.systemAddress.systemIndex = 0;
  (**(code **)(*(int *)this + 4))
            (&local_30,"f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x1a9);
  _Var2 = GetTimeUS_Windows();
  uVar3 = __aulldiv((uint)_Var2,(uint)(_Var2 >> 0x20),1000,0);
  iVar1 = *(int *)&this->isRecvFromLoopThreadActive;
  while (iVar1 != 0) {
    _Var2 = GetTimeUS_Windows();
    uVar4 = __aulldiv((uint)_Var2,(uint)(_Var2 >> 0x20),1000,0);
    if ((int)uVar3 + 1000U <= (uint)uVar4) break;
    (**(code **)(*(int *)this + 4))();
    Sleep(0x1e);
    iVar1 = *(int *)&this->isRecvFromLoopThreadActive;
  }
  __security_check_cookie(bsp.systemAddress._12_4_ ^ (uint)&stack0xffffffc0);
  return;
}
