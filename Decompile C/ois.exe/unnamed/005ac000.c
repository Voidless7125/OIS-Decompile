#include "../ois.exe.h"


void FUN_005af900(void)

{
  char in_AL;
  uint unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  uint unaff_EDI;
  
  if (in_AL == '\0') {
    __ArrayUnwind(unaff_ESI,unaff_EBX,unaff_EDI,*(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


void FUN_005af9ec(void)

{
  int unaff_EBP;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}
