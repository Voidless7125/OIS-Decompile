#include "../ois.exe.h"


void __fastcall Catch_All_00582418(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(ModuleRenderData **)(unaff_EBP + -0x1c),
             *(ModuleRenderData **)(unaff_EBP + -0x1c));
  std::allocator<>::deallocate
            (this,*(PrivateCommElement **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x20));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
