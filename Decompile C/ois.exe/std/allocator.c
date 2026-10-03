#include "../ois.exe.h"


// public: void __thiscall std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >::deallocate(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
// const,unsigned int)

void __thiscall std::allocator<>::deallocate(allocator<> *this,basic_string<> *param_1,uint param_2)

{
  basic_string<> *pbVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x18);
  pbVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pbVar1 = *(basic_string<> **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((basic_string<> *)0x1f < param_1 + (-4 - (int)pbVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pbVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<class PrivateCommElement>::deallocate(class
// PrivateCommElement * const,unsigned int)

void __thiscall
std::allocator<>::deallocate(allocator<> *this,PrivateCommElement *param_1,uint param_2)

{
  PrivateCommElement *pPVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x38);
  pPVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pPVar1 = *(PrivateCommElement **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((PrivateCommElement *)0x1f < param_1 + (-4 - (int)pPVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pPVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<class PrivateCommOption>::deallocate(class
// PrivateCommOption * const,unsigned int)

void __thiscall
std::allocator<>::deallocate(allocator<> *this,PrivateCommOption *param_1,uint param_2)

{
  PrivateCommOption *pPVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0xa8);
  pPVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pPVar1 = *(PrivateCommOption **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((PrivateCommOption *)0x1f < param_1 + (-4 - (int)pPVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pPVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<class ListData>::deallocate(class ListData *
// const,unsigned int)

void __thiscall
std::allocator<ListData>::deallocate(allocator<ListData> *this,ListData *param_1,uint param_2)

{
  ListData *pLVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x60);
  pLVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pLVar1 = *(ListData **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((ListData *)0x1f < param_1 + (-4 - (int)pLVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pLVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<class NavMarker>::deallocate(class NavMarker *
// const,unsigned int)

void __thiscall
std::allocator<NavMarker>::deallocate(allocator<NavMarker> *this,NavMarker *param_1,uint param_2)

{
  NavMarker *pNVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x28);
  pNVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pNVar1 = *(NavMarker **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((NavMarker *)0x1f < param_1 + (-4 - (int)pNVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pNVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<class Widget>::deallocate(class Widget * const,unsigned
// int)

void __thiscall
std::allocator<Widget>::deallocate(allocator<Widget> *this,Widget *param_1,uint param_2)

{
  Widget *pWVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x188);
  pWVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pWVar1 = *(Widget **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((Widget *)0x1f < param_1 + (-4 - (int)pWVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pWVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<struct ScreenData>::deallocate(struct ScreenData *
// const,unsigned int)

void __thiscall
std::allocator<ScreenData>::deallocate(allocator<ScreenData> *this,ScreenData *param_1,uint param_2)

{
  ScreenData *pSVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x50);
  pSVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pSVar1 = *(ScreenData **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((ScreenData *)0x1f < param_1 + (-4 - (int)pSVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pSVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<struct Destination>::deallocate(struct Destination *
// const,unsigned int)

void __thiscall std::allocator<>::deallocate(allocator<> *this,Destination *param_1,uint param_2)

{
  Destination *pDVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x24);
  pDVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pDVar1 = *(Destination **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((Destination *)0x1f < param_1 + (-4 - (int)pDVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pDVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<struct DockProcessElement>::deallocate(struct
// DockProcessElement * const,unsigned int)

void __thiscall
std::allocator<>::deallocate(allocator<> *this,DockProcessElement *param_1,uint param_2)

{
  DockProcessElement *pDVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x2c);
  pDVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pDVar1 = *(DockProcessElement **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((DockProcessElement *)0x1f < param_1 + (-4 - (int)pDVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pDVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<struct word>::deallocate(struct word * const,unsigned int)

void __thiscall std::allocator<word>::deallocate(allocator<word> *this,word *param_1,uint param_2)

{
  word *pwVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x20);
  pwVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pwVar1 = *(word **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((word *)0x1f < param_1 + (-4 - (int)pwVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pwVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<struct CameraPos>::deallocate(struct CameraPos *
// const,unsigned int)

void __thiscall
std::allocator<CameraPos>::deallocate(allocator<CameraPos> *this,CameraPos *param_1,uint param_2)

{
  CameraPos *pCVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x1c);
  pCVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pCVar1 = *(CameraPos **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((CameraPos *)0x1f < param_1 + (-4 - (int)pCVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pCVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<struct UpgradeCommand>::deallocate(struct UpgradeCommand *
// const,unsigned int)

void __thiscall std::allocator<>::deallocate(allocator<> *this,UpgradeCommand *param_1,uint param_2)

{
  UpgradeCommand *pUVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x40);
  pUVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pUVar1 = *(UpgradeCommand **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((UpgradeCommand *)0x1f < param_1 + (-4 - (int)pUVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pUVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<struct CommsCommand>::deallocate(struct CommsCommand *
// const,unsigned int)

void __thiscall std::allocator<>::deallocate(allocator<> *this,CommsCommand *param_1,uint param_2)

{
  CommsCommand *pCVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x78);
  pCVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pCVar1 = *(CommsCommand **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((CommsCommand *)0x1f < param_1 + (-4 - (int)pCVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pCVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<class std::vector<struct word,class std::allocator<struct
// word> > >::deallocate(class std::vector<struct word,class std::allocator<struct word> > *
// const,unsigned int)

void __thiscall std::allocator<>::deallocate(allocator<> *this,vector<> *param_1,uint param_2)

{
  vector<> *pvVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0xc);
  pvVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pvVar1 = *(vector<> **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((vector<> *)0x1f < param_1 + (-4 - (int)pvVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<class cocos2d::Rect>::deallocate(class cocos2d::Rect *
// const,unsigned int)

void __thiscall std::allocator<>::deallocate(allocator<> *this,Rect *param_1,uint param_2)

{
  Rect *pRVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x10);
  pRVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pRVar1 = *(Rect **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((Rect *)0x1f < param_1 + (-4 - (int)pRVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pRVar1,pnVar2);
  return;
}


// public: void __thiscall std::allocator<struct JumpGateRoute>::deallocate(struct JumpGateRoute *
// const,unsigned int)

void __thiscall std::allocator<>::deallocate(allocator<> *this,JumpGateRoute *param_1,uint param_2)

{
  JumpGateRoute *pJVar1;
  nothrow_t *pnVar2;
  
  pnVar2 = (nothrow_t *)(param_2 * 0x14);
  pJVar1 = param_1;
  if ((nothrow_t *)0xfff < pnVar2) {
    pJVar1 = *(JumpGateRoute **)(param_1 + -4);
    pnVar2 = pnVar2 + 0x23;
    if ((JumpGateRoute *)0x1f < param_1 + (-4 - (int)pJVar1)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pJVar1,pnVar2);
  return;
}
