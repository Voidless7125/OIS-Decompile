#include "../ois.exe.h"


// public: bool __thiscall ComponentClass::isAddon(void)

bool __thiscall ComponentClass::isAddon(ComponentClass *this)

{
  if ((*(int *)(this + 0x80) != 10) && (*(int *)(this + 0x80) != 0xb)) {
    return false;
  }
  return true;
}
