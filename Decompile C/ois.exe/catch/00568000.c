#include "../ois.exe.h"


void __fastcall Catch_All_00568ee5(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy(param_1,*(Rect **)(unaff_EBP + -0x18),*(Rect **)(unaff_EBP + -0x2c));
  std::allocator<>::deallocate(this,*(Rect **)(unaff_EBP + -0x30),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
