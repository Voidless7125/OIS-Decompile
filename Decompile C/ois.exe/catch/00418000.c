#include "../ois.exe.h"


void __fastcall Catch_All_004180b4(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(InputCommand **)(unaff_EBP + -0x18),*(InputCommand **)(unaff_EBP + -0x30));
  std::allocator<>::deallocate
            (this,*(PrivateCommElement **)(unaff_EBP + -0x38),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void Catch_All_0041847d(uint param_1)

{
  void *unaff_retaddr;
  
  std::_Deallocate<8,0>(unaff_retaddr,param_1);
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void Catch_All_0041850f(uint param_1)

{
  void *unaff_retaddr;
  
  std::_Deallocate<8,0>(unaff_retaddr,param_1);
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void Catch_All_0041a06a(void)

{
  int unaff_EBP;
  
  std::basic_string<>::_Tidy_deallocate(*(basic_string<> **)(unaff_EBP + -0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_0041a7c4(_Tree<> *param_1)

{
  int unaff_EBP;
  
  std::_Tree<>::_Destroy_if_node(param_1,*(_Tree_node<> **)(unaff_EBP + 0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_0041acf1(_Tree<> *param_1)

{
  int unaff_EBP;
  
  std::_Tree<>::_Destroy_if_node(param_1,*(_Tree_node<> **)(unaff_EBP + 0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
