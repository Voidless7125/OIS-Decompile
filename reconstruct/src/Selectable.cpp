// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall Selectable::~Selectable(Selectable *this)
Selectable::~Selectable()

{
                    // WARNING: Could not recover jumptable at 0x00572a70. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Rect::~Rect((Rect *)this);
  return;
}
