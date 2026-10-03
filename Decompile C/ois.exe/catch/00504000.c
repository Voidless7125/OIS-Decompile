#include "../ois.exe.h"


void __fastcall Catch_All_00506f2b(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(Destination **)(unaff_EBP + -0x20),*(Destination **)(unaff_EBP + -0x1c));
  std::allocator<>::deallocate
            (this,*(Destination **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x24));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
