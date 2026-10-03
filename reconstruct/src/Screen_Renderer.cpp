// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: basic_string<> * __thiscall Screen_Renderer::getCurrentBootString(Screen_Renderer *this)
std::string * Screen_Renderer::getCurrentBootString()

{
  std::string *in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  ghidra::str::assign(in_stack_00000004,"",0);
  return in_stack_00000004;
}


// Ghidra: bool __thiscall Screen_Renderer::onKeyReleased(Screen_Renderer *this,KeyCode param_1,Event *param_2)
bool Screen_Renderer::onKeyReleased(KeyCode param_1, Event * param_2)

{
  return false;
}


// Ghidra: void __thiscall Screen_Renderer::~Screen_Renderer(Screen_Renderer *this)
Screen_Renderer::~Screen_Renderer()

{
  // [vtable] *(undefined ***)this = vftable;
  return;
}
