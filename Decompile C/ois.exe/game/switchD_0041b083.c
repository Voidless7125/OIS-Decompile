#include "../ois.exe.h"


void switchD_0041b083::caseD_1(void)

{
  int unaff_ESI;
  basic_string<> local_18 [16];
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0xf;
  local_18[0] = (basic_string<>)0x0;
  std::basic_string<>::assign(local_18,"Error: INVALID_PARAMETER",0x18);
  NetworkClient::addChatLogItem();
  *(undefined1 *)(unaff_ESI + 0x1c) = 0;
  return;
}
