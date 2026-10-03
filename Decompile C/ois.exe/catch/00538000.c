#include "../ois.exe.h"


undefined * Catch_0053bf4c(void)

{
  PresentationInterface *this;
  int unaff_EBP;
  
  debugPrint("ERROR","FILE LOAD EXCEPTION: %d",*(undefined4 *)(unaff_EBP + -0xc4));
  MessageBoxA((HWND)0x0,"Error loading model file.","Critical Error",0);
  Singleton<>::getInstance();
  PresentationInterface::exitGame(this);
  return &DAT_0053bf8b;
}
