#include "../ois.exe.h"


void __fastcall Catch_All_004adf8f(vector<> *param_1)

{
  allocator<ListData> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(ListData **)(unaff_EBP + -0x2c),*(ListData **)(unaff_EBP + -0x2c));
  std::allocator<ListData>::deallocate
            (this,*(ListData **)(unaff_EBP + -0x20),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
