#include "../ois_server.exe.h"


undefined * Catch_0053a26c(void)

{
  FUN_00591070("ERROR","FILE LOAD EXCEPTION: %d");
  MessageBoxA((HWND)0x0,"Error loading model file.","Critical Error",0);
  FUN_004023e0();
  FUN_005327f0();
  return &DAT_0053a2ab;
}
