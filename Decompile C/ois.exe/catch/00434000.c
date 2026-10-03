#include "../ois.exe.h"


void __fastcall Catch_All_00436723(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(PrivateCommElement **)(unaff_EBP + -0x28),
             *(PrivateCommElement **)(unaff_EBP + -0x28));
  std::allocator<>::deallocate
            (this,*(PrivateCommElement **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x18));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_004368df(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(PrivateCommOption **)(unaff_EBP + -0x14),
             *(PrivateCommOption **)(unaff_EBP + -0x20));
  std::allocator<>::deallocate
            (this,*(PrivateCommOption **)(unaff_EBP + -0x18),*(uint *)(unaff_EBP + -0x24));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_00436a9f(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(PrivateCommOption **)(unaff_EBP + -0x14),
             *(PrivateCommOption **)(unaff_EBP + -0x20));
  std::allocator<>::deallocate
            (this,*(PrivateCommOption **)(unaff_EBP + -0x18),*(uint *)(unaff_EBP + -0x24));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void Catch_All_00437000(void)

{
  int unaff_EBP;
  
  std::vector<>::_Tidy(*(vector<> **)(unaff_EBP + -0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void Catch_All_00437169(void)

{
  int unaff_EBP;
  
  std::vector<>::_Tidy(*(vector<> **)(unaff_EBP + -0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
