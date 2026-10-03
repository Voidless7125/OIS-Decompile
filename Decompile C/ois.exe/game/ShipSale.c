#include "../ois.exe.h"


// public: __thiscall ShipSale::ShipSale(void)

ShipSale * __thiscall ShipSale::ShipSale(ShipSale *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (ShipSale)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (ShipSale)0x0;
  return this;
}
