#include "../ois_server.exe.h"


void switchD_0041aee3::caseD_1(void)

{
  void *unaff_ESI;
  uint in_stack_ffffffe8;
  void *pvVar1;
  
  pvVar1 = (void *)(in_stack_ffffffe8 & 0xffffff00);
  FUN_00402690(&stack0xffffffe8,"Error: INVALID_PARAMETER",0x18);
  FUN_0041c350(unaff_ESI,pvVar1);
  *(undefined1 *)((int)unaff_ESI + 0x1c) = 0;
  return;
}
