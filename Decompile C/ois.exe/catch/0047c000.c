#include "../ois.exe.h"


void __fastcall Catch_All_0047dde4(vector<> *param_1)

{
  allocator<NavMarker> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(NavMarker **)(unaff_EBP + -0x24),*(NavMarker **)(unaff_EBP + -0x20));
  std::allocator<NavMarker>::deallocate
            (this,*(NavMarker **)(unaff_EBP + -0x2c),*(uint *)(unaff_EBP + -0x14));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_0047e4bc(vector<> *param_1)

{
  allocator<ScreenData> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(ScreenData **)(unaff_EBP + -0x18),*(ScreenData **)(unaff_EBP + -0x20));
  std::allocator<ScreenData>::deallocate
            (this,*(ScreenData **)(unaff_EBP + -0x2c),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_0047e827(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(Destination **)(unaff_EBP + 0xc),*(Destination **)(unaff_EBP + -0x20));
  std::allocator<>::deallocate
            (this,*(Destination **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_0047ea4f(vector<> *param_1)

{
  allocator<> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(DockProcessElement **)(unaff_EBP + -0x28),
             *(DockProcessElement **)(unaff_EBP + -0x28));
  std::allocator<>::deallocate
            (this,*(DockProcessElement **)(unaff_EBP + -0x18),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_0047ee8a(vector<> *param_1)

{
  allocator<NavMarker> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(MouseCursor **)(unaff_EBP + -0x14),*(MouseCursor **)(unaff_EBP + -0x2c));
  std::allocator<NavMarker>::deallocate
            (this,*(NavMarker **)(unaff_EBP + -0x18),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_0047f0dc(vector<> *param_1)

{
  allocator<Widget> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy(param_1,*(Widget **)(unaff_EBP + -0x18),*(Widget **)(unaff_EBP + -0x20));
  std::allocator<Widget>::deallocate
            (this,*(Widget **)(unaff_EBP + -0x2c),*(uint *)(unaff_EBP + -0x1c));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}


void __fastcall Catch_All_0047f2b0(vector<> *param_1)

{
  allocator<word> *this;
  int unaff_EBP;
  
  std::vector<>::_Destroy
            (param_1,*(BootElement **)(unaff_EBP + -0x24),*(BootElement **)(unaff_EBP + -0x24));
  std::allocator<word>::deallocate(this,*(word **)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x18));
                    // WARNING: Subroutine does not return
  __CxxThrowException_8((void *)0x0,(ThrowInfo *)0x0);
}
