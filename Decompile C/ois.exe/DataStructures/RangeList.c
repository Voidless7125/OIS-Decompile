#include "../ois.exe.h"


// public: __thiscall DataStructures::RangeList<struct RakNet::uint24_t>::~RangeList<struct
// RakNet::uint24_t>(void)

void __thiscall DataStructures::RangeList<>::~RangeList<>(RangeList<> *this)

{
  Clear(this);
  OrderedList<>::~OrderedList<>((OrderedList<> *)this);
  return;
}


// public: void __thiscall DataStructures::RangeList<struct RakNet::uint24_t>::Insert(struct
// RakNet::uint24_t)

void __thiscall DataStructures::RangeList<>::Insert(RangeList<> *this,uint24_t param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  _func_int_uint24_t_ptr_RangeNode<>_ptr *p_Var3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  bool *pbVar7;
  RangeList<> *pRVar8;
  uint local_14;
  uint local_10;
  bool objectExists;
  
  uVar5 = *(uint *)&this->field_0x4;
  if (uVar5 == 0) {
    local_14 = param_1.val;
    local_10 = param_1.val;
    pbVar7 = &objectExists;
    pRVar8 = this;
    OrderedList<>::GetIndexFromKey
              ((OrderedList<> *)this,&param_1,pbVar7,(_func_int_uint24_t_ptr_RangeNode<>_ptr *)this)
    ;
    if (objectExists == false) {
      List<>::Insert((List<> *)this,(RangeNode<> *)&local_14,pbVar7,(uint)pRVar8);
      return;
    }
  }
  else {
    pbVar7 = &objectExists;
    pRVar8 = this;
    uVar2 = OrderedList<>::GetIndexFromKey
                      ((OrderedList<> *)this,&param_1,pbVar7,
                       (_func_int_uint24_t_ptr_RangeNode<>_ptr *)this);
    puVar6 = (uint *)(*(int *)this + uVar2 * 8);
    if (uVar2 == uVar5) {
      p_Var3 = (_func_int_uint24_t_ptr_RangeNode<>_ptr *)(puVar6[-1] + 1 & 0xffffff);
      if ((_func_int_uint24_t_ptr_RangeNode<>_ptr *)param_1.val == p_Var3) {
        puVar6[-1] = puVar6[-1] + 1;
        *(undefined1 *)((int)puVar6 + -1) = 0;
        return;
      }
      if (p_Var3 < param_1.val) {
        local_14 = param_1.val;
        local_10 = param_1.val;
        pbVar7 = &objectExists;
        uVar2 = OrderedList<>::GetIndexFromKey((OrderedList<> *)this,&param_1,pbVar7,p_Var3);
        if (objectExists == false) {
          if (uVar2 < uVar5) {
            List<>::Insert((List<> *)this,(RangeNode<> *)&local_14,uVar2,pbVar7,(uint)p_Var3);
            return;
          }
          List<>::Insert((List<> *)this,(RangeNode<> *)&local_14,pbVar7,(uint)p_Var3);
          return;
        }
      }
    }
    else {
      uVar5 = *puVar6 - 1;
      uVar4 = uVar5 & 0xffffff;
      if (param_1.val < uVar4) {
        local_14 = param_1.val;
        local_10 = param_1.val;
        List<>::Insert((List<> *)this,(RangeNode<> *)&local_14,uVar2,pbVar7,(uint)pRVar8);
        return;
      }
      if (param_1.val == uVar4) {
        *puVar6 = uVar5;
        *(undefined1 *)((int)puVar6 + 3) = 0;
        if (uVar2 == 0) {
          return;
        }
        puVar6 = (uint *)(*(int *)this + uVar2 * 8);
        if ((puVar6[-1] + 1 & 0xffffff) != *puVar6) {
          return;
        }
        puVar6[-1] = puVar6[1];
        uVar5 = *(uint *)&this->field_0x4;
        if (uVar5 <= uVar2) {
          return;
        }
        if (uVar2 < uVar5 - 1) {
          do {
            puVar1 = (undefined4 *)(*(int *)this + uVar2 * 8);
            uVar2 = uVar2 + 1;
            *puVar1 = puVar1[2];
            puVar1[1] = puVar1[3];
          } while (uVar2 < *(int *)&this->field_0x4 - 1U);
          *(int *)&this->field_0x4 = *(int *)&this->field_0x4 + -1;
          return;
        }
      }
      else {
        if ((*puVar6 <= param_1.val) && (param_1.val <= puVar6[1])) {
          return;
        }
        if (param_1.val != (puVar6[1] + 1 & 0xffffff)) {
          return;
        }
        puVar6[1] = puVar6[1] + 1;
        *(undefined1 *)((int)puVar6 + 7) = 0;
        if (*(int *)&this->field_0x4 - 1U <= uVar2) {
          return;
        }
        puVar1 = (undefined4 *)(*(int *)this + uVar2 * 8);
        if (puVar1[2] != (puVar1[1] + 1 & 0xffffff)) {
          return;
        }
        puVar1[2] = *puVar1;
        uVar5 = *(uint *)&this->field_0x4;
        if (uVar5 <= uVar2) {
          return;
        }
        if (uVar2 < uVar5 - 1) {
          do {
            puVar1 = (undefined4 *)(*(int *)this + uVar2 * 8);
            uVar2 = uVar2 + 1;
            *puVar1 = puVar1[2];
            puVar1[1] = puVar1[3];
            uVar5 = *(uint *)&this->field_0x4;
          } while (uVar2 < uVar5 - 1);
        }
      }
      *(uint *)&this->field_0x4 = uVar5 - 1;
    }
  }
  return;
}


// public: void __thiscall DataStructures::RangeList<struct RakNet::uint24_t>::Clear(void)

void __thiscall DataStructures::RangeList<>::Clear(RangeList<> *this)

{
  uint *puVar1;
  void *pvVar2;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2730;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(uint *)&this->field_0x8 != 0) {
    if (0x200 < *(uint *)&this->field_0x8) {
      pvVar2 = *(void **)this;
      if (pvVar2 != (void *)0x0) {
        puVar1 = (uint *)((int)pvVar2 + -4);
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar2,8,*puVar1,RangeNode<>::~RangeNode<>);
        operator_delete__(puVar1,*puVar1 * 8 + 4);
      }
      *(undefined4 *)&this->field_0x8 = 0;
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)&this->field_0x4 = 0;
  }
  ExceptionList = local_10;
  return;
}


// public: unsigned int __thiscall DataStructures::RangeList<struct
// RakNet::uint24_t>::Serialize(class RakNet::BitStream *,unsigned int,bool)

uint __thiscall
DataStructures::RangeList<>::Serialize
          (RangeList<> *this,BitStream *param_1,uint param_2,bool param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  uint24_t *puVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint local_130;
  ushort countWritten;
  BitStream tempBS;
  uchar local_c;
  uchar minEqualsMax;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  memset(tempBS.stackData,0,0x103);
  tempBS.data = tempBS.stackData;
  tempBS.numberOfBitsUsed = 0;
  iVar9 = 0;
  tempBS.numberOfBitsAllocated = 0x800;
  tempBS.readOffset = 0;
  tempBS.copyData = true;
  _countWritten = 0;
  local_130 = 0;
  iVar5 = _countWritten;
  if (*(int *)&this->field_0x4 != 0) {
    _countWritten = 0x51;
    do {
      iVar5 = iVar9;
      if (param_2 < _countWritten) break;
      iVar5 = local_130 * 8;
      iVar4 = *(int *)this + iVar5;
      minEqualsMax = *(int *)(*(int *)this + iVar5) == *(int *)(iVar4 + 4);
      RakNet::BitStream::WriteBits(&tempBS,&minEqualsMax,8,SUB41(iVar4,0));
      RakNet::BitStream::Write<>(&tempBS,(uint24_t *)(*(int *)this + iVar5));
      _countWritten = _countWritten + 0x28;
      puVar6 = (uint24_t *)(*(int *)this + 4 + iVar5);
      if (*(uint *)(*(int *)this + iVar5) != puVar6->val) {
        RakNet::BitStream::Write<>(&tempBS,puVar6);
        _countWritten = _countWritten + 0x20;
      }
      iVar9 = iVar9 + 1;
      local_130 = local_130 + 1;
      iVar5 = iVar9;
    } while (local_130 < *(uint *)&this->field_0x4);
  }
  _countWritten = iVar5;
  iVar9 = _countWritten;
  uVar8 = (ushort)_countWritten;
  param_1->numberOfBitsUsed = (param_1->numberOfBitsUsed - (param_1->numberOfBitsUsed - 1 & 7)) + 7;
  iVar5 = *(int *)ThreadLocalStoragePointer;
  if ((*(int *)(iVar5 + 4) < DAT_006629a4) &&
     (__Init_thread_header(&DAT_006629a4), iVar5 = extraout_ECX, DAT_006629a4 == -1)) {
    DAT_006629a0 = htonl(0x3039);
    __Init_thread_footer(&DAT_006629a4);
    iVar5 = extraout_ECX_00;
  }
  if (DAT_006629a0 == 0x3039) {
    RakNet::BitStream::WriteBits(param_1,(uchar *)&countWritten,0x10,SUB41(iVar5,0));
    uVar8 = (ushort)_countWritten;
  }
  else {
    local_c = (uchar)((uint)iVar9 >> 8);
    minEqualsMax = (uchar)iVar9;
    RakNet::BitStream::WriteBits(param_1,&local_c,0x10,SUB41(iVar5,0));
  }
  RakNet::BitStream::Write(param_1,&tempBS,tempBS.numberOfBitsUsed);
  if (uVar8 != 0) {
    uVar3 = *(uint *)&this->field_0x4;
    uVar7 = (uint)uVar8;
    uVar10 = 0;
    if (uVar3 != uVar7) {
      iVar5 = uVar7 * 8;
      do {
        puVar1 = (undefined4 *)(iVar5 + *(int *)this);
        puVar2 = (undefined4 *)(*(int *)this + uVar10 * 8);
        *puVar2 = *puVar1;
        iVar5 = iVar5 + 8;
        uVar10 = uVar10 + 1;
        puVar2[1] = puVar1[1];
      } while (uVar10 < uVar3 - uVar7);
      uVar3 = *(uint *)&this->field_0x4;
    }
    *(uint *)&this->field_0x4 = uVar3 - uVar7;
  }
  if ((tempBS.copyData != false) && (0x800 < tempBS.numberOfBitsAllocated)) {
    free(tempBS.data);
  }
  uVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar3;
}


// public: bool __thiscall DataStructures::RangeList<struct RakNet::uint24_t>::Deserialize(class
// RakNet::BitStream *)

bool __thiscall DataStructures::RangeList<>::Deserialize(RangeList<> *this,BitStream *param_1)

{
  uint *puVar1;
  void *pvVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 extraout_ECX_00;
  ushort uVar6;
  char *pcVar7;
  uint24_t *puVar8;
  uint local_30;
  uint local_2c;
  uint24_t max;
  uint24_t min;
  ushort count;
  uchar maxEqualToMin;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd400;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(uint *)&this->field_0x8 != 0) {
    if (0x200 < *(uint *)&this->field_0x8) {
      pvVar2 = *(void **)this;
      if (pvVar2 != (void *)0x0) {
        puVar1 = (uint *)((int)pvVar2 + -4);
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar2,8,*puVar1,RangeNode<>::~RangeNode<>);
        operator_delete__(puVar1,*puVar1 * 8 + 4);
      }
      *(undefined4 *)&this->field_0x8 = 0;
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)&this->field_0x4 = 0;
  }
  local_8 = 0xffffffff;
  param_1->readOffset = (param_1->readOffset - (param_1->readOffset - 1 & 7)) + 7;
  RakNet::BitStream::Read<>(param_1,&count);
  maxEqualToMin = '\0';
  uVar6 = 0;
  uVar5 = extraout_ECX;
  if (count != 0) {
    while( true ) {
      RakNet::BitStream::ReadBits(param_1,&maxEqualToMin,8,SUB41(uVar5,0));
      puVar8 = &min;
      pcVar7 = (char *)0x59e84e;
      bVar3 = RakNet::BitStream::Read<>(param_1,puVar8);
      if (!bVar3) break;
      if (maxEqualToMin == '\0') {
        puVar8 = &max;
        pcVar7 = (char *)0x59e863;
        bVar3 = RakNet::BitStream::Read<>(param_1,puVar8);
        if ((!bVar3) || (max.val < min.val)) break;
      }
      else {
        max = min;
      }
      local_30 = min.val;
      local_2c = max.val;
      List<>::Insert((List<> *)this,(RangeNode<> *)&local_30,pcVar7,(uint)puVar8);
      uVar6 = uVar6 + 1;
      uVar5 = extraout_ECX_00;
      if (count <= uVar6) break;
    }
  }
  ExceptionList = local_10;
  uVar4 = __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}
