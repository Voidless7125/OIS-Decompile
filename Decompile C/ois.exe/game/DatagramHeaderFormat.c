#include "../ois.exe.h"


// public: void __thiscall DatagramHeaderFormat::Serialize(class RakNet::BitStream *)

void __thiscall DatagramHeaderFormat::Serialize(DatagramHeaderFormat *this,BitStream *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  byte *pbVar5;
  uchar local_c [4];
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  RakNet::BitStream::AddBitsAndReallocate(param_1,1);
  pbVar5 = param_1->data + (param_1->numberOfBitsUsed >> 3);
  uVar2 = param_1->numberOfBitsUsed & 7;
  if (uVar2 == 0) {
    *pbVar5 = 0x80;
  }
  else {
    *pbVar5 = *pbVar5 | (byte)(0x80 >> (sbyte)uVar2);
  }
  param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 1;
  if (this->isACK == false) {
    bVar1 = this->isNAK;
    RakNet::BitStream::AddBitsAndReallocate(param_1,1);
    uVar2 = param_1->numberOfBitsUsed;
    if (bVar1 != false) {
      if ((uVar2 & 7) == 0) {
        param_1->data[uVar2 >> 3] = '\0';
        uVar2 = param_1->numberOfBitsUsed;
      }
      param_1->numberOfBitsUsed = uVar2 + 1;
      RakNet::BitStream::AddBitsAndReallocate(param_1,1);
      pbVar5 = param_1->data + (param_1->numberOfBitsUsed >> 3);
      uVar2 = param_1->numberOfBitsUsed & 7;
      if (uVar2 == 0) {
        *pbVar5 = 0x80;
        param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      *pbVar5 = *pbVar5 | (byte)(0x80 >> (sbyte)uVar2);
      param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if ((uVar2 & 7) == 0) {
      param_1->data[uVar2 >> 3] = '\0';
      uVar2 = param_1->numberOfBitsUsed;
    }
    param_1->numberOfBitsUsed = uVar2 + 1;
    RakNet::BitStream::AddBitsAndReallocate(param_1,1);
    uVar2 = param_1->numberOfBitsUsed;
    if ((uVar2 & 7) == 0) {
      param_1->data[uVar2 >> 3] = '\0';
      uVar2 = param_1->numberOfBitsUsed;
    }
    param_1->numberOfBitsUsed = uVar2 + 1;
    bVar1 = this->isPacketPair;
    RakNet::BitStream::AddBitsAndReallocate(param_1,1);
    uVar2 = param_1->numberOfBitsUsed;
    uVar3 = uVar2 & 7;
    if (bVar1 == false) {
      if (uVar3 == 0) {
        param_1->data[uVar2 >> 3] = '\0';
        uVar2 = param_1->numberOfBitsUsed;
      }
      param_1->numberOfBitsUsed = uVar2 + 1;
    }
    else {
      pbVar5 = param_1->data + (uVar2 >> 3);
      if (uVar3 == 0) {
        *pbVar5 = 0x80;
        param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 1;
      }
      else {
        *pbVar5 = *pbVar5 | (byte)(0x80 >> (sbyte)uVar3);
        param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 1;
      }
    }
    bVar1 = this->isContinuousSend;
    RakNet::BitStream::AddBitsAndReallocate(param_1,1);
    uVar2 = param_1->numberOfBitsUsed;
    uVar3 = uVar2 & 7;
    if (bVar1 == false) {
      if (uVar3 == 0) {
        param_1->data[uVar2 >> 3] = '\0';
        uVar2 = param_1->numberOfBitsUsed;
      }
      param_1->numberOfBitsUsed = uVar2 + 1;
    }
    else {
      pbVar5 = param_1->data + (uVar2 >> 3);
      if (uVar3 == 0) {
        *pbVar5 = 0x80;
        param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 1;
      }
      else {
        *pbVar5 = *pbVar5 | (byte)(0x80 >> (sbyte)uVar3);
        param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 1;
      }
    }
    bVar1 = this->needsBAndAs;
    RakNet::BitStream::AddBitsAndReallocate(param_1,1);
    uVar2 = param_1->numberOfBitsUsed;
    uVar3 = uVar2 & 7;
    if (bVar1 == false) {
      if (uVar3 == 0) {
        param_1->data[uVar2 >> 3] = '\0';
        goto LAB_00597d3f;
      }
    }
    else {
      pbVar5 = param_1->data + (uVar2 >> 3);
      if (uVar3 == 0) {
        *pbVar5 = 0x80;
      }
      else {
        *pbVar5 = *pbVar5 | (byte)(0x80 >> (sbyte)uVar3);
      }
LAB_00597d3f:
      uVar2 = param_1->numberOfBitsUsed;
    }
    param_1->numberOfBitsUsed = (uVar2 - (uVar2 & 7)) + 8;
    RakNet::BitStream::Write<>(param_1,&this->datagramNumber);
    goto LAB_00597d57;
  }
  RakNet::BitStream::AddBitsAndReallocate(param_1,1);
  pbVar5 = param_1->data + (param_1->numberOfBitsUsed >> 3);
  uVar2 = param_1->numberOfBitsUsed & 7;
  if (uVar2 == 0) {
    *pbVar5 = 0x80;
  }
  else {
    *pbVar5 = *pbVar5 | (byte)(0x80 >> (sbyte)uVar2);
  }
  param_1->numberOfBitsUsed = param_1->numberOfBitsUsed + 1;
  bVar1 = this->hasBAndAS;
  RakNet::BitStream::AddBitsAndReallocate(param_1,1);
  uVar2 = param_1->numberOfBitsUsed;
  uVar3 = uVar2 & 7;
  if (bVar1 == false) {
    if (uVar3 == 0) {
      param_1->data[uVar2 >> 3] = '\0';
      goto LAB_00597afd;
    }
  }
  else {
    pbVar5 = param_1->data + (uVar2 >> 3);
    if (uVar3 == 0) {
      *pbVar5 = 0x80;
    }
    else {
      *pbVar5 = *pbVar5 | (byte)(0x80 >> (sbyte)uVar3);
    }
LAB_00597afd:
    uVar2 = param_1->numberOfBitsUsed;
  }
  param_1->numberOfBitsUsed = (uVar2 - (uVar2 & 7)) + 8;
  if (this->hasBAndAS != false) {
    iVar4 = *(int *)ThreadLocalStoragePointer;
    if (*(int *)(iVar4 + 4) < DAT_006629a4) {
      __Init_thread_header(&DAT_006629a4);
      iVar4 = extraout_ECX;
      if (DAT_006629a4 == -1) {
        DAT_006629a0 = htonl(0x3039);
        __Init_thread_footer(&DAT_006629a4);
        iVar4 = extraout_ECX_00;
      }
    }
    if (DAT_006629a0 != 0x3039) {
      local_c[1] = *(undefined1 *)((int)&this->AS + 2);
      local_c[0] = *(undefined1 *)((int)&this->AS + 3);
      local_c[2] = *(undefined1 *)((int)&this->AS + 1);
      local_c[3] = *(undefined1 *)&this->AS;
      RakNet::BitStream::WriteBits(param_1,local_c,0x20,SUB41(iVar4,0));
      local_c[0] = 0xa4;
      local_c[1] = '{';
      local_c[2] = 'Y';
      local_c[3] = '\0';
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    RakNet::BitStream::WriteBits(param_1,(uchar *)&this->AS,0x20,SUB41(iVar4,0));
    local_c[0] = 0xbd;
    local_c[1] = '{';
    local_c[2] = 'Y';
    local_c[3] = '\0';
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00597d57:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall DatagramHeaderFormat::Deserialize(class RakNet::BitStream *)

void __thiscall DatagramHeaderFormat::Deserialize(DatagramHeaderFormat *this,BitStream *param_1)

{
  bool bVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  uint uVar4;
  undefined4 local_c;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  uVar4 = param_1->readOffset;
  uVar2 = param_1->numberOfBitsUsed;
  if (uVar4 + 1 <= uVar2) {
    this->isValid = (param_1->data[uVar4 >> 3] & (byte)(0x80 >> ((byte)uVar4 & 7))) != 0;
    param_1->readOffset = param_1->readOffset + 1;
    uVar4 = param_1->readOffset;
    uVar2 = param_1->numberOfBitsUsed;
  }
  if (uVar4 + 1 <= uVar2) {
    this->isACK = (param_1->data[uVar4 >> 3] & (byte)(0x80 >> ((byte)uVar4 & 7))) != 0;
    param_1->readOffset = param_1->readOffset + 1;
    uVar4 = param_1->readOffset;
  }
  if (this->isACK == false) {
    if (uVar4 + 1 <= param_1->numberOfBitsUsed) {
      this->isNAK = (param_1->data[uVar4 >> 3] & (byte)(0x80 >> ((byte)uVar4 & 7))) != 0;
      param_1->readOffset = param_1->readOffset + 1;
      uVar4 = param_1->readOffset;
    }
    if (this->isNAK != false) {
      this->isPacketPair = false;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar2 = param_1->numberOfBitsUsed;
    if (uVar4 + 1 <= uVar2) {
      this->isPacketPair = (param_1->data[uVar4 >> 3] & (byte)(0x80 >> ((byte)uVar4 & 7))) != 0;
      param_1->readOffset = param_1->readOffset + 1;
      uVar4 = param_1->readOffset;
      uVar2 = param_1->numberOfBitsUsed;
    }
    if (uVar4 + 1 <= uVar2) {
      this->isContinuousSend = (param_1->data[uVar4 >> 3] & (byte)(0x80 >> ((byte)uVar4 & 7))) != 0;
      param_1->readOffset = param_1->readOffset + 1;
      uVar4 = param_1->readOffset;
      uVar2 = param_1->numberOfBitsUsed;
    }
    if (uVar4 + 1 <= uVar2) {
      local_c = 0x80 >> ((byte)uVar4 & 7);
      this->needsBAndAs = (param_1->data[uVar4 >> 3] & (byte)local_c) != 0;
      uVar4 = param_1->readOffset + 1;
    }
    param_1->readOffset = (uVar4 - (uVar4 - 1 & 7)) + 7;
    RakNet::BitStream::Read<>(param_1,&this->datagramNumber);
  }
  else {
    this->isNAK = false;
    this->isPacketPair = false;
    uVar2 = param_1->readOffset;
    if (uVar2 + 1 <= param_1->numberOfBitsUsed) {
      local_c = 0x80 >> ((byte)uVar2 & 7);
      this->hasBAndAS = (param_1->data[uVar2 >> 3] & (byte)local_c) != 0;
      uVar2 = param_1->readOffset + 1;
    }
    param_1->readOffset = (uVar2 - (uVar2 - 1 & 7)) + 7;
    if (this->hasBAndAS != false) {
      iVar3 = *(int *)ThreadLocalStoragePointer;
      if (*(int *)(iVar3 + 4) < DAT_006629a4) {
        __Init_thread_header(&DAT_006629a4);
        iVar3 = extraout_ECX;
        if (DAT_006629a4 == -1) {
          DAT_006629a0 = htonl(0x3039);
          __Init_thread_footer(&DAT_006629a4);
          iVar3 = extraout_ECX_00;
        }
      }
      if (DAT_006629a0 == 0x3039) {
        RakNet::BitStream::ReadBits(param_1,(uchar *)&this->AS,0x20,SUB41(iVar3,0));
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      bVar1 = RakNet::BitStream::ReadBits(param_1,(uchar *)&local_c,0x20,SUB41(iVar3,0));
      if (bVar1) {
        *(undefined1 *)&this->AS = local_c._3_1_;
        *(undefined1 *)((int)&this->AS + 1) = local_c._2_1_;
        *(char *)((int)&this->AS + 2) = (char)((uint)local_c >> 8);
        *(char *)((int)&this->AS + 3) = (char)local_c;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}
