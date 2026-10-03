#include "../ois.exe.h"


void __fastcall Catch_All_00403ca7(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(basic_string<> **)(unaff_EBP + -0x18),*(basic_string<> **)(unaff_EBP + -0x18)
            );
  std::allocator<>::deallocate
            (this,*(basic_string<> **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
