#include "../ois.exe.h"


void __fastcall Catch_All_00549be4(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(CommsCommand **)(unaff_EBP + -0x1c),*(CommsCommand **)(unaff_EBP + -0x24));
  std::allocator<>::deallocate
            (this,*(CommsCommand **)(unaff_EBP + -0x30),*(uint *)(unaff_EBP + -0x20));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
