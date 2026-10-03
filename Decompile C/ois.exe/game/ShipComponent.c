#include "../ois.exe.h"


// public: float __thiscall ShipComponent::getDamageAsModifier(void)

float __thiscall ShipComponent::getDamageAsModifier(ShipComponent *this)

{
  float10 in_ST0;
  
  if (*(float *)this < (float)*(int *)(*(int *)(this + 4) + 0x10)) {
    return (float)in_ST0;
  }
  return (float)in_ST0;
}
