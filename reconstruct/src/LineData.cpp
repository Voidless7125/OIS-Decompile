// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: LineData * __thiscall LineData::LineData(LineData *this,uchar *param_1)
LineData::LineData(uchar * param_1)

{
  LineData LVar1;
  bool bVar2;
  bool bVar3;
  LineData *pLVar4;
  int iVar5;
  uint uVar6;
  uint local_28;
  uint local_1c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b54c3;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)((char *)this + 0x10) = 0;
  *(undefined4 *)((char *)this + 0x14) = 0xf;
  *this = (byte)0x0;
  *(undefined4 *)((char *)this + 0x28) = 0;
  *(undefined4 *)((char *)this + 0x2c) = 0xf;
  ((char *)this)[0x18] = (byte)0x0;
  bVar2 = true;
  // [seh] local_8 = 1;
  bVar3 = true;
  iVar5 = 0;
  do {
    pLVar4 = this + 0x18;
    LVar1 = *(LineData *)(param_1 + iVar5);
    if (LVar1 == (byte)0x0) {
      // [seh] ExceptionList = local_10;
      return;
    }
    if ((iVar5 == 0) && (LVar1 == (byte)0x23)) {
      // [seh] ExceptionList = local_10;
      return;
    }
    if (LVar1 == (byte)0xa) {
      // [seh] ExceptionList = local_10;
      return;
    }
    if (bVar2) {
      if (LVar1 == (byte)0x3d) {
        bVar3 = false;
        bVar2 = false;
      }
      else if ((((0x40 < (byte)LVar1) && ((byte)LVar1 < 0x5b)) ||
               ((0x60 < (byte)LVar1 && ((byte)LVar1 < 0x7b)))) ||
              ((LVar1 == (byte)0x5f || (LVar1 == (byte)0x2d)))) {
        uVar6 = *(uint *)((char *)this + 0x10);
        if (*(uint *)((char *)this + 0x14) == uVar6) {
          local_1c = local_1c & 0xffffff00;
          pLVar4 = this;
          uVar6 = local_1c;
          goto LAB_0043e035;
        }
        *(uint *)((char *)this + 0x10) = uVar6 + 1;
        pLVar4 = this;
        if (0xf < *(uint *)((char *)this + 0x14)) {
          pLVar4 = *(LineData **)this;
        }
        pLVar4[uVar6] = LVar1;
        pLVar4[uVar6 + 1] = (byte)0x0;
        bVar2 = bVar3;
      }
    }
    else {
      uVar6 = *(uint *)((char *)this + 0x28);
      if (*(uint *)((char *)this + 0x2c) == uVar6) {
        local_28 = local_28 & 0xffffff00;
        uVar6 = local_28;
LAB_0043e035:
        ghidra::lib::basic_string___Reallocate_grow_by((std::string *)pLVar4,0,uVar6,0,LVar1);
        bVar2 = bVar3;
      }
      else {
        *(uint *)((char *)this + 0x28) = uVar6 + 1;
        if (0xf < *(uint *)((char *)this + 0x2c)) {
          pLVar4 = *(LineData **)((char *)this + 0x18);
        }
        pLVar4[uVar6] = LVar1;
        pLVar4[uVar6 + 1] = (byte)0x0;
        bVar2 = bVar3;
      }
    }
    iVar5 = iVar5 + 1;
    if (0x1fff < iVar5) {
      // [seh] ExceptionList = local_10;
      return;
    }
  } while( true );
}
