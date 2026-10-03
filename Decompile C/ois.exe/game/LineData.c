#include "../ois.exe.h"


// public: __thiscall LineData::LineData(unsigned char *)

LineData * __thiscall LineData::LineData(LineData *this,uchar *param_1)

{
  LineData LVar1;
  bool bVar2;
  bool bVar3;
  LineData *pLVar4;
  int iVar5;
  uint uVar6;
  uint local_28;
  uint local_1c;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b54c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (LineData)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (LineData)0x0;
  bVar2 = true;
  local_8 = 1;
  bVar3 = true;
  iVar5 = 0;
  do {
    pLVar4 = this + 0x18;
    LVar1 = *(LineData *)(param_1 + iVar5);
    if (LVar1 == (LineData)0x0) {
      ExceptionList = local_10;
      return this;
    }
    if ((iVar5 == 0) && (LVar1 == (LineData)0x23)) {
      ExceptionList = local_10;
      return this;
    }
    if (LVar1 == (LineData)0xa) {
      ExceptionList = local_10;
      return this;
    }
    if (bVar2) {
      if (LVar1 == (LineData)0x3d) {
        bVar3 = false;
        bVar2 = false;
      }
      else if ((((0x40 < (byte)LVar1) && ((byte)LVar1 < 0x5b)) ||
               ((0x60 < (byte)LVar1 && ((byte)LVar1 < 0x7b)))) ||
              ((LVar1 == (LineData)0x5f || (LVar1 == (LineData)0x2d)))) {
        uVar6 = *(uint *)(this + 0x10);
        if (*(uint *)(this + 0x14) == uVar6) {
          local_1c = local_1c & 0xffffff00;
          pLVar4 = this;
          uVar6 = local_1c;
          goto LAB_0043e035;
        }
        *(uint *)(this + 0x10) = uVar6 + 1;
        pLVar4 = this;
        if (0xf < *(uint *)(this + 0x14)) {
          pLVar4 = *(LineData **)this;
        }
        pLVar4[uVar6] = LVar1;
        pLVar4[uVar6 + 1] = (LineData)0x0;
        bVar2 = bVar3;
      }
    }
    else {
      uVar6 = *(uint *)(this + 0x28);
      if (*(uint *)(this + 0x2c) == uVar6) {
        local_28 = local_28 & 0xffffff00;
        uVar6 = local_28;
LAB_0043e035:
        std::basic_string<>::_Reallocate_grow_by<>((basic_string<> *)pLVar4,0,uVar6,0,LVar1);
        bVar2 = bVar3;
      }
      else {
        *(uint *)(this + 0x28) = uVar6 + 1;
        if (0xf < *(uint *)(this + 0x2c)) {
          pLVar4 = *(LineData **)(this + 0x18);
        }
        pLVar4[uVar6] = LVar1;
        pLVar4[uVar6 + 1] = (LineData)0x0;
        bVar2 = bVar3;
      }
    }
    iVar5 = iVar5 + 1;
    if (0x1fff < iVar5) {
      ExceptionList = local_10;
      return this;
    }
  } while( true );
}
