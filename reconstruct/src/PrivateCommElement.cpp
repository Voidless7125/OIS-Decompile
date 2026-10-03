// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall PrivateCommElement::~PrivateCommElement(PrivateCommElement *this)
PrivateCommElement::~PrivateCommElement()

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  ghidra::lib::vector___Tidy((ghidra::vector *)((char *)this + 0x2c));
  ghidra::lib::vector___Tidy((ghidra::vector *)((char *)this + 0x20));
  uVar1 = *(uint *)((char *)this + 0x1c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((char *)this + 8);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x18) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0xf;
  ((char *)this)[8] = (byte)0x0;
  return;
}
