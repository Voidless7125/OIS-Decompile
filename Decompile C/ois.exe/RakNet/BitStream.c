#include "../ois.exe.h"


// public: void __thiscall RakNet::BitStream::Write<struct RakNet::uint24_t>(struct RakNet::uint24_t
// const &)

void __thiscall RakNet::BitStream::Write<>(BitStream *this,uint24_t *param_1)

{
  uchar uVar1;
  
  this->numberOfBitsUsed = (this->numberOfBitsUsed - (this->numberOfBitsUsed - 1 & 7)) + 7;
  AddBitsAndReallocate(this,0x18);
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_006629a4) {
    __Init_thread_header(&DAT_006629a4);
    if (DAT_006629a4 == -1) {
      DAT_006629a0 = htonl(0x3039);
      __Init_thread_footer(&DAT_006629a4);
    }
  }
  if (DAT_006629a0 == 0x3039) {
    this->data[this->numberOfBitsUsed >> 3] = *(uchar *)((int)&param_1->val + 3);
    this->data[(this->numberOfBitsUsed >> 3) + 1] = *(uchar *)((int)&param_1->val + 2);
    uVar1 = *(uchar *)((int)&param_1->val + 1);
  }
  else {
    this->data[this->numberOfBitsUsed >> 3] = (uchar)param_1->val;
    this->data[(this->numberOfBitsUsed >> 3) + 1] = *(uchar *)((int)&param_1->val + 1);
    uVar1 = *(uchar *)((int)&param_1->val + 2);
  }
  this->data[(this->numberOfBitsUsed >> 3) + 2] = uVar1;
  this->numberOfBitsUsed = this->numberOfBitsUsed + 0x18;
  return;
}


// public: bool __thiscall RakNet::BitStream::Read<struct RakNet::uint24_t>(struct RakNet::uint24_t
// &)

bool __thiscall RakNet::BitStream::Read<>(BitStream *this,uint24_t *param_1)

{
  int iVar1;
  
  iVar1 = this->readOffset - (this->readOffset - 1 & 7);
  this->readOffset = iVar1 + 7;
  if (this->numberOfBitsUsed < iVar1 + 0x1fU) {
    return false;
  }
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_006629a4) {
    __Init_thread_header(&DAT_006629a4);
    if (DAT_006629a4 == -1) {
      DAT_006629a0 = htonl(0x3039);
      __Init_thread_footer(&DAT_006629a4);
    }
  }
  if (DAT_006629a0 != 0x3039) {
    *(uchar *)&param_1->val = this->data[this->readOffset >> 3];
    *(uchar *)((int)&param_1->val + 1) = this->data[(this->readOffset >> 3) + 1];
    *(uchar *)((int)&param_1->val + 2) = this->data[(this->readOffset >> 3) + 2];
    *(undefined1 *)((int)&param_1->val + 3) = 0;
    this->readOffset = this->readOffset + 0x18;
    return true;
  }
  *(uchar *)((int)&param_1->val + 3) = this->data[this->readOffset >> 3];
  *(uchar *)((int)&param_1->val + 2) = this->data[(this->readOffset >> 3) + 1];
  *(uchar *)((int)&param_1->val + 1) = this->data[(this->readOffset >> 3) + 2];
  *(undefined1 *)&param_1->val = 0;
  this->readOffset = this->readOffset + 0x18;
  return true;
}


// public: void __thiscall RakNet::BitStream::Write<unsigned short>(unsigned short const &)

void __thiscall RakNet::BitStream::Write<>(BitStream *this,ushort *param_1)

{
  uint uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  uchar output [2];
  undefined2 uStack_a;
  
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)ThreadLocalStoragePointer;
  if ((*(int *)(iVar2 + 4) < DAT_006629a4) &&
     (__Init_thread_header(&DAT_006629a4), iVar2 = extraout_ECX, DAT_006629a4 == -1)) {
    DAT_006629a0 = htonl(0x3039);
    __Init_thread_footer(&DAT_006629a4);
    iVar2 = extraout_ECX_00;
  }
  if (DAT_006629a0 != 0x3039) {
    output = (uchar  [2])CONCAT11((uchar)*param_1,*(uchar *)((int)param_1 + 1));
    param_1 = (ushort *)output;
  }
  WriteBits(this,(uchar *)param_1,0x10,SUB41(iVar2,0));
  _output = 0x59d5c5;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall RakNet::BitStream::Read<unsigned short>(unsigned short &)

bool __thiscall RakNet::BitStream::Read<>(BitStream *this,ushort *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  uchar output [2];
  
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
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
    bVar1 = ReadBits(this,output,0x10,SUB41(iVar4,0));
    if (bVar1) {
      *(uchar *)((int)param_1 + 1) = output[0];
      *(uchar *)param_1 = output[1];
      _output = 0x59d664;
      uVar2 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
      return (bool)uVar2;
    }
    _output = 0x59d678;
    uVar2 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
  ReadBits(this,(uchar *)param_1,0x10,SUB41(iVar4,0));
  _output = 0x59d690;
  uVar2 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// public: void __thiscall RakNet::BitStream::Write<unsigned __int64>(unsigned __int64 const &)

void __thiscall RakNet::BitStream::Write<>(BitStream *this,__uint64 *param_1)

{
  uint uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  uchar output [8];
  
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)ThreadLocalStoragePointer;
  if ((*(int *)(iVar2 + 4) < DAT_006629a4) &&
     (__Init_thread_header(&DAT_006629a4), iVar2 = extraout_ECX, DAT_006629a4 == -1)) {
    DAT_006629a0 = htonl(0x3039);
    __Init_thread_footer(&DAT_006629a4);
    iVar2 = extraout_ECX_00;
  }
  if (DAT_006629a0 != 0x3039) {
    output[1] = *(uchar *)((int)param_1 + 6);
    output[0] = *(uchar *)((int)param_1 + 7);
    output[2] = *(uchar *)((int)param_1 + 5);
    output[3] = *(uchar *)((int)param_1 + 4);
    output[4] = *(uchar *)((int)param_1 + 3);
    output[5] = *(uchar *)((int)param_1 + 2);
    output[6] = *(uchar *)((int)param_1 + 1);
    output[7] = (uchar)*param_1;
    param_1 = (__uint64 *)output;
  }
  WriteBits(this,(uchar *)param_1,0x40,SUB41(iVar2,0));
  output[0] = '_';
  output[1] = 0xbe;
  output[2] = 'Z';
  output[3] = '\0';
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall RakNet::BitStream::Write<unsigned int>(unsigned int const &)

void __thiscall RakNet::BitStream::Write<>(BitStream *this,uint *param_1)

{
  uint uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  uchar output [4];
  
  uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)ThreadLocalStoragePointer;
  if ((*(int *)(iVar2 + 4) < DAT_006629a4) &&
     (__Init_thread_header(&DAT_006629a4), iVar2 = extraout_ECX, DAT_006629a4 == -1)) {
    DAT_006629a0 = htonl(0x3039);
    __Init_thread_footer(&DAT_006629a4);
    iVar2 = extraout_ECX_00;
  }
  if (DAT_006629a0 != 0x3039) {
    output[1] = *(uchar *)((int)param_1 + 2);
    output[0] = *(uchar *)((int)param_1 + 3);
    output[2] = *(uchar *)((int)param_1 + 1);
    output[3] = (uchar)*param_1;
    param_1 = (uint *)output;
  }
  WriteBits(this,(uchar *)param_1,0x20,SUB41(iVar2,0));
  output[0] = '\x13';
  output[1] = 0xbf;
  output[2] = 'Z';
  output[3] = '\0';
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


// public: bool __thiscall RakNet::BitStream::Read<unsigned __int64>(unsigned __int64 &)

bool __thiscall RakNet::BitStream::Read<>(BitStream *this,__uint64 *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  uchar output [8];
  
  uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
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
    bVar1 = ReadBits(this,output,0x40,SUB41(iVar4,0));
    if (bVar1) {
      *(uchar *)param_1 = output[7];
      *(uchar *)((int)param_1 + 1) = output[6];
      *(uchar *)((int)param_1 + 2) = output[5];
      *(uchar *)((int)param_1 + 3) = output[4];
      *(uchar *)((int)param_1 + 4) = output[3];
      *(uchar *)((int)param_1 + 5) = output[2];
      *(uchar *)((int)param_1 + 6) = output[1];
      *(uchar *)((int)param_1 + 7) = output[0];
      builtin_memcpy(output,"ڿZ",4);
      uVar2 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
      return (bool)uVar2;
    }
    output[0] = 0xee;
    output[1] = 0xbf;
    output[2] = 'Z';
    output[3] = '\0';
    uVar2 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
  ReadBits(this,(uchar *)param_1,0x40,SUB41(iVar4,0));
  output[0] = '\x06';
  output[1] = 0xc0;
  output[2] = 'Z';
  output[3] = '\0';
  uVar2 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// public: __thiscall RakNet::BitStream::BitStream(void)

BitStream * __thiscall RakNet::BitStream::BitStream(BitStream *this)

{
  this->numberOfBitsUsed = 0;
  this->data = this->stackData;
  this->numberOfBitsAllocated = 0x800;
  this->readOffset = 0;
  this->copyData = true;
  return this;
}


// public: __thiscall RakNet::BitStream::~BitStream(void)

void __thiscall RakNet::BitStream::~BitStream(BitStream *this)

{
  if ((this->copyData != false) && (0x800 < this->numberOfBitsAllocated)) {
    free(this->data);
  }
  return;
}


// public: void __thiscall RakNet::BitStream::Write(char const *,unsigned int)

void __thiscall RakNet::BitStream::Write(BitStream *this,char *param_1,uint param_2)

{
  if (param_2 != 0) {
    if ((this->numberOfBitsUsed & 7) == 0) {
      AddBitsAndReallocate(this,param_2 * 8);
      memcpy(this->data + (this->numberOfBitsUsed + 7 >> 3),param_1,param_2);
      this->numberOfBitsUsed = this->numberOfBitsUsed + param_2 * 8;
      return;
    }
    WriteBits(this,(uchar *)param_1,param_2 * 8,SUB41(this,0));
  }
  return;
}


// public: void __thiscall RakNet::BitStream::Write(class RakNet::BitStream *,unsigned int)

void __thiscall RakNet::BitStream::Write(BitStream *this,BitStream *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  AddBitsAndReallocate(this,param_2);
  if (((param_1->readOffset & 7) == 0) && ((this->numberOfBitsUsed & 7) == 0)) {
    uVar2 = param_1->readOffset >> 3;
    uVar3 = param_2 >> 3;
    memcpy(this->data + (this->numberOfBitsUsed >> 3),param_1->data + uVar2,uVar3);
    param_2 = param_2 + uVar3 * -8;
    param_1->readOffset = (uVar2 + uVar3) * 8;
    this->numberOfBitsUsed = this->numberOfBitsUsed + uVar3 * 8;
  }
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar2 = param_1->readOffset;
    uVar3 = param_2 - 1;
    if (param_1->numberOfBitsUsed < uVar2 + 1) break;
    uVar1 = this->numberOfBitsUsed;
    param_2._0_1_ = (byte)(0x80 >> ((byte)uVar2 & 7));
    if ((uVar1 & 7) == 0) {
      this->data[uVar1 >> 3] = -((param_1->data[uVar2 >> 3] & (byte)param_2) != 0) & 0x80;
    }
    else if ((param_1->data[uVar2 >> 3] & (byte)param_2) != 0) {
      this->data[uVar1 >> 3] = this->data[uVar1 >> 3] | (byte)(0x80 >> (sbyte)(uVar1 & 7));
    }
    param_1->readOffset = param_1->readOffset + 1;
    this->numberOfBitsUsed = this->numberOfBitsUsed + 1;
    param_2 = uVar3;
  }
  return;
}


// public: void __thiscall RakNet::BitStream::WriteAlignedBytes(unsigned char const *,unsigned int)

void __thiscall RakNet::BitStream::WriteAlignedBytes(BitStream *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (this->numberOfBitsUsed - (this->numberOfBitsUsed - 1 & 7)) + 7;
  this->numberOfBitsUsed = uVar1;
  if (param_2 != 0) {
    if ((uVar1 & 7) == 0) {
      AddBitsAndReallocate(this,param_2 * 8);
      memcpy(this->data + (this->numberOfBitsUsed + 7 >> 3),param_1,param_2);
      this->numberOfBitsUsed = this->numberOfBitsUsed + param_2 * 8;
      return;
    }
    WriteBits(this,param_1,param_2 * 8,SUB41(this,0));
  }
  return;
}


// public: void __thiscall RakNet::BitStream::WriteBits(unsigned char const *,unsigned int,bool)

void __thiscall
RakNet::BitStream::WriteBits(BitStream *this,uchar *param_1,uint param_2,bool param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  
  AddBitsAndReallocate(this,param_2);
  uVar4 = this->numberOfBitsUsed;
  uVar2 = uVar4 & 7;
  if ((uVar2 == 0) && ((param_2 & 7) == 0)) {
    memcpy(this->data + (uVar4 >> 3),param_1,param_2 >> 3);
    this->numberOfBitsUsed = this->numberOfBitsUsed + param_2;
    return;
  }
  while (param_2 != 0) {
    bVar3 = *param_1;
    param_1 = param_1 + 1;
    if (param_2 < 8) {
      bVar3 = bVar3 << (8U - (char)param_2 & 0x1f);
    }
    pbVar1 = this->data + (uVar4 >> 3);
    if (uVar2 == 0) {
      *pbVar1 = bVar3;
    }
    else {
      uVar4 = 8 - uVar2;
      *pbVar1 = *pbVar1 | bVar3 >> (sbyte)uVar2;
      if ((uVar4 < 8) && (uVar4 < param_2)) {
        this->data[(this->numberOfBitsUsed >> 3) + 1] = bVar3 << ((byte)uVar4 & 0x1f);
      }
    }
    uVar4 = param_2;
    if (7 < param_2) {
      uVar4 = 8;
    }
    bVar5 = param_2 < 8;
    uVar4 = this->numberOfBitsUsed + uVar4;
    this->numberOfBitsUsed = uVar4;
    param_2 = param_2 - 8;
    if (bVar5) {
      param_2 = 0;
    }
  }
  return;
}


// public: bool __thiscall RakNet::BitStream::ReadBits(unsigned char *,unsigned int,bool)

bool __thiscall
RakNet::BitStream::ReadBits(BitStream *this,uchar *param_1,uint param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte local_8;
  
  uVar2 = this->readOffset;
  if (this->numberOfBitsUsed < uVar2 + param_2) {
    return false;
  }
  uVar1 = uVar2 & 7;
  if ((uVar1 == 0) && ((param_2 & 7) == 0)) {
    memcpy(param_1,this->data + (uVar2 >> 3),param_2 >> 3);
    this->readOffset = this->readOffset + param_2;
    return true;
  }
  iVar4 = 0;
  memset(param_1,0,param_2 + 7 >> 3);
  uVar2 = this->readOffset;
  while( true ) {
    bVar3 = this->data[uVar2 >> 3] << (sbyte)uVar1 | param_1[iVar4];
    param_1[iVar4] = bVar3;
    if ((uVar1 != 0) && (8 - uVar1 < param_2)) {
      local_8 = (byte)(8 - uVar1);
      bVar3 = this->data[(this->readOffset >> 3) + 1] >> (local_8 & 0x1f) | bVar3;
      param_1[iVar4] = bVar3;
    }
    if (param_2 < 8) break;
    iVar4 = iVar4 + 1;
    uVar2 = this->readOffset + 8;
    this->readOffset = uVar2;
    param_2 = param_2 - 8;
    if (param_2 == 0) {
      return true;
    }
  }
  if (-1 < (int)(param_2 - 8)) {
    this->readOffset = this->readOffset + 8;
    return true;
  }
  param_1[iVar4] = bVar3 >> (-(char)(param_2 - 8) & 0x1fU);
  this->readOffset = this->readOffset + param_2;
  return true;
}


// public: void __thiscall RakNet::BitStream::AddBitsAndReallocate(unsigned int)

void __thiscall RakNet::BitStream::AddBitsAndReallocate(BitStream *this,uint param_1)

{
  uint uVar1;
  uchar *puVar2;
  uint uVar3;
  
  uVar3 = this->numberOfBitsUsed + param_1;
  if ((uVar3 != 0) && ((this->numberOfBitsAllocated - 1 & 0xfffffff8) < (uVar3 - 1 & 0xfffffff8))) {
    uVar1 = uVar3 * 2;
    uVar3 = uVar3 + 0x100000;
    if ((uVar1 - this->numberOfBitsUsed) - param_1 < 0x100001) {
      uVar3 = uVar1;
    }
    uVar1 = uVar3 + 7 >> 3;
    if (this->data == this->stackData) {
      if (0x100 < uVar1) {
        puVar2 = malloc(uVar1);
        this->data = puVar2;
        memcpy(puVar2,this->stackData,this->numberOfBitsAllocated + 7 >> 3);
      }
    }
    else {
      puVar2 = realloc(this->data,uVar1);
      this->data = puVar2;
    }
  }
  if (this->numberOfBitsAllocated < uVar3) {
    this->numberOfBitsAllocated = uVar3;
  }
  return;
}


// public: void __thiscall RakNet::BitStream::WriteAlignedVar16(char const *)

void __thiscall RakNet::BitStream::WriteAlignedVar16(BitStream *this,char *param_1)

{
  uchar uVar1;
  
  AddBitsAndReallocate(this,0x10);
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_006629a4) {
    __Init_thread_header(&DAT_006629a4);
    if (DAT_006629a4 == -1) {
      DAT_006629a0 = htonl(0x3039);
      __Init_thread_footer(&DAT_006629a4);
    }
  }
  if (DAT_006629a0 == 0x3039) {
    this->data[this->numberOfBitsUsed >> 3] = *param_1;
    uVar1 = param_1[1];
  }
  else {
    this->data[this->numberOfBitsUsed >> 3] = param_1[1];
    uVar1 = *param_1;
  }
  this->data[(this->numberOfBitsUsed >> 3) + 1] = uVar1;
  this->numberOfBitsUsed = this->numberOfBitsUsed + 0x10;
  return;
}


// public: bool __thiscall RakNet::BitStream::ReadAlignedVar16(char *)

bool __thiscall RakNet::BitStream::ReadAlignedVar16(BitStream *this,char *param_1)

{
  if (this->numberOfBitsUsed < this->readOffset + 0x10) {
    return false;
  }
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_006629a4) {
    __Init_thread_header(&DAT_006629a4);
    if (DAT_006629a4 == -1) {
      DAT_006629a0 = htonl(0x3039);
      __Init_thread_footer(&DAT_006629a4);
    }
  }
  if (DAT_006629a0 != 0x3039) {
    *param_1 = (this->data + (this->readOffset >> 3))[1];
    param_1[1] = this->data[this->readOffset >> 3];
    this->readOffset = this->readOffset + 0x10;
    return true;
  }
  *param_1 = this->data[this->readOffset >> 3];
  param_1[1] = this->data[(this->readOffset >> 3) + 1];
  this->readOffset = this->readOffset + 0x10;
  return true;
}


// public: void __thiscall RakNet::BitStream::WriteAlignedVar32(char const *)

void __thiscall RakNet::BitStream::WriteAlignedVar32(BitStream *this,char *param_1)

{
  uchar uVar1;
  uint uVar2;
  
  AddBitsAndReallocate(this,0x20);
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_006629a4) {
    __Init_thread_header(&DAT_006629a4);
    if (DAT_006629a4 == -1) {
      DAT_006629a0 = htonl(0x3039);
      __Init_thread_footer(&DAT_006629a4);
    }
  }
  uVar2 = this->numberOfBitsUsed >> 3;
  if (DAT_006629a0 == 0x3039) {
    this->data[uVar2] = *param_1;
    this->data[(this->numberOfBitsUsed >> 3) + 1] = param_1[1];
    this->data[(this->numberOfBitsUsed >> 3) + 2] = param_1[2];
    uVar1 = param_1[3];
  }
  else {
    this->data[uVar2] = param_1[3];
    this->data[(this->numberOfBitsUsed >> 3) + 1] = param_1[2];
    this->data[(this->numberOfBitsUsed >> 3) + 2] = param_1[1];
    uVar1 = *param_1;
  }
  this->data[(this->numberOfBitsUsed >> 3) + 3] = uVar1;
  this->numberOfBitsUsed = this->numberOfBitsUsed + 0x20;
  return;
}


// public: bool __thiscall RakNet::BitStream::ReadAlignedVar32(char *)

bool __thiscall RakNet::BitStream::ReadAlignedVar32(BitStream *this,char *param_1)

{
  if (this->numberOfBitsUsed < this->readOffset + 0x20) {
    return false;
  }
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_006629a4) {
    __Init_thread_header(&DAT_006629a4);
    if (DAT_006629a4 == -1) {
      DAT_006629a0 = htonl(0x3039);
      __Init_thread_footer(&DAT_006629a4);
    }
  }
  if (DAT_006629a0 != 0x3039) {
    *param_1 = (this->data + (this->readOffset >> 3))[3];
    param_1[1] = this->data[(this->readOffset >> 3) + 2];
    param_1[2] = this->data[(this->readOffset >> 3) + 1];
    param_1[3] = this->data[this->readOffset >> 3];
    this->readOffset = this->readOffset + 0x20;
    return true;
  }
  *param_1 = this->data[this->readOffset >> 3];
  param_1[1] = this->data[(this->readOffset >> 3) + 1];
  param_1[2] = this->data[(this->readOffset >> 3) + 2];
  param_1[3] = this->data[(this->readOffset >> 3) + 3];
  this->readOffset = this->readOffset + 0x20;
  return true;
}
