#include "../ois.exe.h"


// public: bool __thiscall RakNet::SystemAddress::operator==(struct RakNet::SystemAddress const
// &)const 

bool __thiscall RakNet::SystemAddress::operator==(SystemAddress *this,SystemAddress *param_1)

{
  if (((*(short *)&this->field_0x2 == *(short *)&param_1->field_0x2) && (*(short *)this == 2)) &&
     (*(int *)&this->field_0x4 == *(int *)&param_1->field_0x4)) {
    return true;
  }
  return false;
}


// public: void __thiscall RakNet::SystemAddress::ToString(bool,char *,char)const 

void __thiscall
RakNet::SystemAddress::ToString(SystemAddress *this,bool param_1,char *param_2,char param_3)

{
  char cVar1;
  u_short uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char local_c [4];
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (((*(short *)&this->field_0x2 == DAT_006578e2) && (*(short *)this == 2)) &&
     (*(int *)&this->field_0x4 == DAT_006578e4)) {
    builtin_strncpy(param_2,"UNASSIGNED_SYSTEM_ADDRESS",0x1a);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_c[0] = '|';
  local_c[1] = '\0';
  pcVar3 = inet_ntoa((in_addr)*(_union_1226 *)&this->field_0x4);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar5[(int)(param_2 + (-1 - (int)pcVar3))] = cVar1;
  } while (cVar1 != '\0');
  if (param_1) {
    pcVar5 = local_c;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar5 - (int)local_c;
    pcVar5 = param_2 + -1;
    do {
      pcVar3 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar3 != '\0');
    pcVar3 = local_c;
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    }
    do {
      pcVar5 = param_2;
      param_2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    uVar2 = ntohs(*(u_short *)&this->field_0x2);
    _Itoa((uint)uVar2,pcVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall RakNet::SystemAddress::FixForIPVersion(struct RakNet::SystemAddress const
// &)

void __thiscall RakNet::SystemAddress::FixForIPVersion(SystemAddress *this,SystemAddress *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  char str [128];
  
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ToString(this,false,str,(char)this);
  pbVar5 = &s___1;
  pbVar3 = (byte *)str;
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0059ef70:
      uVar4 = -(uint)bVar6 | 1;
      goto LAB_0059ef75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0059ef70;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_0059ef75:
  if ((uVar4 == 0) && (*(short *)param_1 == 2)) {
    SetBinaryAddress(this,"127.0.0.1",(char)pbVar5);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: bool __thiscall RakNet::SystemAddress::SetBinaryAddress(char const *,char)

bool __thiscall
RakNet::SystemAddress::SetBinaryAddress(SystemAddress *this,char *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  u_short uVar7;
  ulong uVar8;
  int iVar9;
  hostent *phVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char local_70 [68];
  char local_2c [24];
  char local_14 [12];
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  cVar1 = *param_1;
  cVar2 = cVar1;
  pcVar12 = param_1;
  while (cVar2 != '\0') {
    if ((('f' < cVar2) && (cVar2 < '{')) || (('@' < cVar2 && (cVar2 < '[')))) {
      iVar9 = _strnicmp(param_1,"localhost",9);
      if (iVar9 == 0) {
        uVar8 = inet_addr("127.0.0.1");
        *(ulong *)&this->field_0x4 = uVar8;
        if (param_1[9] != '\0') {
          iVar9 = atoi(param_1 + 9);
          uVar7 = htons((u_short)iVar9);
          *(u_short *)&this->field_0x2 = uVar7;
          this->debugPort = (u_short)iVar9;
        }
      }
      else {
        local_70[0] = '\0';
        _DAT_006629a8 = 0;
        phVar10 = gethostbyname(param_1);
        if ((phVar10 == (hostent *)0x0) ||
           ((_union_1226 *)*phVar10->h_addr_list == (_union_1226 *)0x0)) {
          memset(local_70,0,0x41);
        }
        else {
          _DAT_006629a8 =
               (_union_1226)*(_union_1226 *)&((_union_1226 *)*phVar10->h_addr_list)->S_un_b;
          pcVar11 = inet_ntoa((in_addr)_DAT_006629a8);
          pcVar12 = pcVar11;
          do {
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar12[(int)(local_70 + (-1 - (int)pcVar11))] = cVar1;
          } while (cVar1 != '\0');
        }
        uVar5 = uRam006578ec;
        uVar4 = uRam006578e8;
        uVar3 = DAT_006578e4;
        if (local_70[0] == '\0') {
          *(undefined4 *)this = _DAT_006578e0;
          *(undefined4 *)&this->field_0x4 = uVar3;
          *(undefined4 *)&this->field_0x8 = uVar4;
          *(undefined4 *)&this->field_0xc = uVar5;
          this->systemIndex = DAT_006578f2;
          this->debugPort = DAT_006578f0;
          uVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return (bool)uVar6;
        }
        uVar8 = inet_addr(local_70);
        *(ulong *)&this->field_0x4 = uVar8;
      }
      goto LAB_0059f0ab;
    }
    pcVar11 = pcVar12 + 1;
    pcVar12 = pcVar12 + 1;
    cVar2 = *pcVar11;
  }
  uVar13 = 0;
  if (cVar1 != '\0') {
    pcVar12 = param_1;
    while (((cVar1 != '\0' && ((int)uVar13 < 0x16)) &&
           ((cVar1 == '.' || ((byte)(cVar1 - 0x30U) < 10))))) {
      pcVar12[(int)(local_2c + -(int)param_1)] = cVar1;
      uVar13 = uVar13 + 1;
      pcVar11 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
      cVar1 = *pcVar11;
    }
    if (0x15 < uVar13) goto LAB_0059f1ac;
  }
  cVar1 = param_1[uVar13];
  local_2c[uVar13] = '\0';
  local_14[0] = '\0';
  if ((cVar1 != '\0') && (param_1[uVar13 + 1] != '\0')) {
    uVar14 = 0;
    do {
      uVar13 = uVar13 + 1;
      cVar1 = param_1[uVar13];
      if (((cVar1 == '\0') || (0x1f < (int)uVar13)) || (9 < (byte)(cVar1 - 0x30U))) break;
      local_14[uVar14] = cVar1;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 10);
    if (9 < uVar14) {
LAB_0059f1ac:
                    // WARNING: Subroutine does not return
      ___report_rangecheckfailure();
    }
    local_14[uVar14] = '\0';
  }
  if (local_2c[0] != '\0') {
    uVar8 = inet_addr(local_2c);
    *(ulong *)&this->field_0x4 = uVar8;
  }
  if (local_14[0] != '\0') {
    iVar9 = atoi(local_14);
    uVar7 = htons((u_short)iVar9);
    *(u_short *)&this->field_0x2 = uVar7;
    uVar7 = ntohs(uVar7);
    this->debugPort = uVar7;
  }
LAB_0059f0ab:
  uVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: bool __thiscall RakNet::SystemAddress::FromStringExplicitPort(char const *,unsigned
// short,int)

bool __thiscall
RakNet::SystemAddress::FromStringExplicitPort
          (SystemAddress *this,char *param_1,ushort param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  u_short uVar5;
  
  bVar4 = SetBinaryAddress(this,param_1,(char)this);
  uVar3 = uRam006578ec;
  uVar2 = uRam006578e8;
  uVar1 = DAT_006578e4;
  if (!bVar4) {
    *(undefined4 *)this = _DAT_006578e0;
    *(undefined4 *)&this->field_0x4 = uVar1;
    *(undefined4 *)&this->field_0x8 = uVar2;
    *(undefined4 *)&this->field_0xc = uVar3;
    this->systemIndex = DAT_006578f2;
    this->debugPort = DAT_006578f0;
    return false;
  }
  uVar5 = htons(param_2);
  *(u_short *)&this->field_0x2 = uVar5;
  uVar5 = ntohs(uVar5);
  this->debugPort = uVar5;
  return true;
}
