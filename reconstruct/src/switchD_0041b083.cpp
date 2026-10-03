// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void switchD_0041b083::caseD_1(void)
void switchD_0041b083::caseD_1()

{
  int unaff_ESI;
  std::string local_18 [16];
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0xf;
  local_18[0] = (std::string)0x0;
  ghidra::str::assign(local_18,"Error: INVALID_PARAMETER",0x18);
  NetworkClient::addChatLogItem();
  *(undefined1 *)(unaff_ESI + 0x1c) = 0;
  return;
}
