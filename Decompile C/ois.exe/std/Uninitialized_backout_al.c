#include "../ois.exe.h"


// public: __thiscall std::_Uninitialized_backout_al<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > *,class std::allocator<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
// >::~_Uninitialized_backout_al<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > *,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  basic_string<> *unaff_retaddr;
  allocator<> *in_stack_00000004;
  
  _Destroy_range<>((basic_string<> *)this,unaff_retaddr,in_stack_00000004);
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct InputCommand *,class
// std::allocator<struct InputCommand> >::~_Uninitialized_backout_al<struct InputCommand *,class
// std::allocator<struct InputCommand> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  InputCommand *unaff_retaddr;
  allocator<> *in_stack_00000004;
  
  _Destroy_range<>((InputCommand *)this,unaff_retaddr,in_stack_00000004);
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<class PrivateCommOption *,class
// std::allocator<class PrivateCommOption> >::~_Uninitialized_backout_al<class PrivateCommOption
// *,class std::allocator<class PrivateCommOption> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  PrivateCommOption *pPVar1;
  PrivateCommOption *this_00;
  
  pPVar1 = *(PrivateCommOption **)(this + 4);
  for (this_00 = *(PrivateCommOption **)this; this_00 != pPVar1; this_00 = this_00 + 0xa8) {
    PrivateCommOption::~PrivateCommOption(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<class Requirement *,class std::allocator<class
// Requirement> >::~_Uninitialized_backout_al<class Requirement *,class std::allocator<class
// Requirement> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  Requirement *pRVar1;
  Requirement *this_00;
  
  pRVar1 = *(Requirement **)(this + 4);
  for (this_00 = *(Requirement **)this; this_00 != pRVar1; this_00 = this_00 + 0x40) {
    Requirement::_scalar_deleting_destructor_(this_00,0);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<class Widget *,class std::allocator<class
// Widget> >::~_Uninitialized_backout_al<class Widget *,class std::allocator<class Widget> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  Widget *pWVar1;
  Widget *this_00;
  
  pWVar1 = *(Widget **)(this + 4);
  for (this_00 = *(Widget **)this; this_00 != pWVar1; this_00 = this_00 + 0x188) {
    Widget::~Widget(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct MouseCursor *,class
// std::allocator<struct MouseCursor> >::~_Uninitialized_backout_al<struct MouseCursor *,class
// std::allocator<struct MouseCursor> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  MouseCursor *pMVar1;
  MouseCursor *this_00;
  
  pMVar1 = *(MouseCursor **)(this + 4);
  for (this_00 = *(MouseCursor **)this; this_00 != pMVar1; this_00 = this_00 + 0x28) {
    MouseCursor::~MouseCursor(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct Destination *,class
// std::allocator<struct Destination> >::~_Uninitialized_backout_al<struct Destination *,class
// std::allocator<struct Destination> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  Destination *unaff_retaddr;
  allocator<> *in_stack_00000004;
  
  _Destroy_range<>((Destination *)this,unaff_retaddr,in_stack_00000004);
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct ScreenData *,class std::allocator<struct
// ScreenData> >::~_Uninitialized_backout_al<struct ScreenData *,class std::allocator<struct
// ScreenData> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  ScreenData *pSVar1;
  ScreenData *this_00;
  
  pSVar1 = *(ScreenData **)(this + 4);
  for (this_00 = *(ScreenData **)this; this_00 != pSVar1; this_00 = this_00 + 0x50) {
    ScreenData::~ScreenData(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<class NavMarker *,class std::allocator<class
// NavMarker> >::~_Uninitialized_backout_al<class NavMarker *,class std::allocator<class NavMarker>
// >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  NavMarker *unaff_retaddr;
  allocator<NavMarker> *in_stack_00000004;
  
  _Destroy_range<>((NavMarker *)this,unaff_retaddr,in_stack_00000004);
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct CameraPos *,class std::allocator<struct
// CameraPos> >::~_Uninitialized_backout_al<struct CameraPos *,class std::allocator<struct
// CameraPos> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  Vec3 *pVVar1;
  Vec3 *this_00;
  
  pVVar1 = *(Vec3 **)(this + 4);
  for (this_00 = *(Vec3 **)this; this_00 != pVVar1; this_00 = this_00 + 0x1c) {
    cocos2d::Vec3::~Vec3(this_00 + 0xc);
    cocos2d::Vec3::~Vec3(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct Command *,class std::allocator<struct
// Command> >::~_Uninitialized_backout_al<struct Command *,class std::allocator<struct Command>
// >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  Command *pCVar1;
  Command *this_00;
  
  pCVar1 = *(Command **)(this + 4);
  for (this_00 = *(Command **)this; this_00 != pCVar1; this_00 = this_00 + 0x40) {
    Command::~Command(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct CommsCommand *,class
// std::allocator<struct CommsCommand> >::~_Uninitialized_backout_al<struct CommsCommand *,class
// std::allocator<struct CommsCommand> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  CommsCommand *pCVar1;
  CommsCommand *this_00;
  
  pCVar1 = *(CommsCommand **)(this + 4);
  for (this_00 = *(CommsCommand **)this; this_00 != pCVar1; this_00 = this_00 + 0x78) {
    CommsCommand::~CommsCommand(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct word *,class std::allocator<struct word>
// >::~_Uninitialized_backout_al<struct word *,class std::allocator<struct word> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  word *unaff_retaddr;
  allocator<word> *in_stack_00000004;
  
  _Destroy_range<>((word *)this,unaff_retaddr,in_stack_00000004);
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<class cocos2d::Rect *,class
// std::allocator<class cocos2d::Rect> >::~_Uninitialized_backout_al<class cocos2d::Rect *,class
// std::allocator<class cocos2d::Rect> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  Rect *pRVar1;
  Rect *this_00;
  
  pRVar1 = *(Rect **)(this + 4);
  for (this_00 = *(Rect **)this; this_00 != pRVar1; this_00 = this_00 + 0x10) {
    cocos2d::Rect::~Rect(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct Selectable *,class std::allocator<struct
// Selectable> >::~_Uninitialized_backout_al<struct Selectable *,class std::allocator<struct
// Selectable> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  Rect *pRVar1;
  Rect *this_00;
  
  pRVar1 = *(Rect **)(this + 4);
  for (this_00 = *(Rect **)this; this_00 != pRVar1; this_00 = this_00 + 0x14) {
    cocos2d::Rect::~Rect(this_00);
  }
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct JumpGateRoute *,class
// std::allocator<struct JumpGateRoute> >::~_Uninitialized_backout_al<struct JumpGateRoute *,class
// std::allocator<struct JumpGateRoute> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  JumpGateRoute *unaff_retaddr;
  allocator<> *in_stack_00000004;
  
  _Destroy_range<>((JumpGateRoute *)this,unaff_retaddr,in_stack_00000004);
  return;
}


// public: __thiscall std::_Uninitialized_backout_al<struct SensorSelectionElement *,class
// std::allocator<struct SensorSelectionElement> >::~_Uninitialized_backout_al<struct
// SensorSelectionElement *,class std::allocator<struct SensorSelectionElement> >(void)

void __thiscall
std::_Uninitialized_backout_al<>::~_Uninitialized_backout_al<>(_Uninitialized_backout_al<> *this)

{
  ExtraSpawned *unaff_retaddr;
  allocator<> *in_stack_00000004;
  
  _Destroy_range<>((ExtraSpawned *)this,unaff_retaddr,in_stack_00000004);
  return;
}
