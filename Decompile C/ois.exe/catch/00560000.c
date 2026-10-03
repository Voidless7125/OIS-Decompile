#include "../ois.exe.h"


void __fastcall Catch_All_00560d56(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(vector<> **)(unaff_EBP + -0x28),*(vector<> **)(unaff_EBP + -0x28));
  std::allocator<>::deallocate(this,*(vector<> **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x18));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_00560f1c(vector<> *param_1)

{
  allocator<word> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy(param_1,*(word **)(unaff_EBP + -0x18),*(word **)(unaff_EBP + -0x18));
  std::allocator<word>::deallocate(this,*(word **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void Catch_All_005610e1(void)

{
  int unaff_EBP;
  
  std::vector<>::_Tidy(*(vector<> **)(unaff_EBP + -0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_00563a7a(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(ScreenTab **)(unaff_EBP + -0x28),*(ScreenTab **)(unaff_EBP + -0x28));
  std::allocator<>::deallocate
            (this,*(DockProcessElement **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x18));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void Catch_All_00563b4e(void)

{
  int unaff_EBP;
  
  std::vector<>::_Tidy(*(vector<> **)(unaff_EBP + -0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
