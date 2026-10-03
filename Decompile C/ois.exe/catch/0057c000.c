#include "../ois.exe.h"


void __fastcall Catch_All_0057f08d(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(JumpGateRoute **)(unaff_EBP + -0x14),*(JumpGateRoute **)(unaff_EBP + -0x24));
  std::allocator<>::deallocate
            (this,*(JumpGateRoute **)(unaff_EBP + -0x2c),*(uint *)(unaff_EBP + -0x18));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
