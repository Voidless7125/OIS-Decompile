// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_DockVisualisation::cleanupRender(UI_DockVisualisation *this)
void UI_DockVisualisation::cleanupRender()

{
  if (*(int **)((char *)this + 0x428) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x428) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x428) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_DockVisualisation::render(UI_DockVisualisation *this)
void UI_DockVisualisation::render()

{
  std::string abStack_24 [16];
  undefined4 uStack_14;
  Sprite *pSStack_10;
  
  pSStack_10 = (Sprite *)0x568fef;
  (**(code **)(*(int *)this + 0x290))();
  uStack_14 = 0;
  pSStack_10 = (Sprite *)0xf;
  abStack_24[0] = (std::string)0x0;
  ghidra::str::assign(abStack_24,"DockingReticule.png",0x13);
  pSStack_10 = loadSprite();
  *(Sprite **)((char *)this + 0x428) = pSStack_10;
  uStack_14 = 0x56902a;
  (**(code **)(*(int *)this + 0x10c))();
  **(undefined1 **)((char *)this + 0x288) = 1;
  return;
}
