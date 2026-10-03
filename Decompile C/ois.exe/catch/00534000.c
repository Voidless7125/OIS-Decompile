#include "../ois.exe.h"


void __fastcall Catch_All_0053664d(_Tree<> *param_1)

{
  int unaff_EBP;
  
  std::_Tree<>::_Destroy_if_node(param_1,*(_Tree_node<> **)(unaff_EBP + 0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_005378a8(vector<> *param_1)

{
  allocator<CameraPos> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(CameraPos **)(unaff_EBP + -0x20),*(CameraPos **)(unaff_EBP + -0x28));
  std::allocator<CameraPos>::deallocate
            (this,*(CameraPos **)(unaff_EBP + -0x2c),*(uint *)(unaff_EBP + -0x24));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
