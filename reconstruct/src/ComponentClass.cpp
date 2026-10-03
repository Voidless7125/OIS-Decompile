// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall ComponentClass::isAddon(ComponentClass *this)
bool ComponentClass::isAddon()

{
  if ((*(int *)((char *)this + 0x80) != 10) && (*(int *)((char *)this + 0x80) != 0xb)) {
    return false;
  }
  return true;
}
