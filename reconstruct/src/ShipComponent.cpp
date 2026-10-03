// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: float __thiscall ShipComponent::getDamageAsModifier(ShipComponent *this)
float ShipComponent::getDamageAsModifier()

{
  float10 in_ST0;
  
  if (*(float *)this < (float)*(int *)(*(int *)((char *)this + 4) + 0x10)) {
    return (float)in_ST0;
  }
  return (float)in_ST0;
}
