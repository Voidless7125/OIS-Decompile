#include "../ois.exe.h"


void __fastcall Catch_All_00541d02(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(ContractCommand **)(unaff_EBP + -0x18),
             *(ContractCommand **)(unaff_EBP + -0x20));
  std::allocator<>::deallocate
            (this,*(UpgradeCommand **)(unaff_EBP + -0x2c),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
