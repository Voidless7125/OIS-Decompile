#include "../ois.exe.h"


// public: virtual class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> > __thiscall Screen_Renderer::getCurrentBootString(void)

basic_string<> * __thiscall Screen_Renderer::getCurrentBootString(Screen_Renderer *this)

{
  basic_string<> *in_stack_00000004;
  
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  std::basic_string<>::assign(in_stack_00000004,"",0);
  return in_stack_00000004;
}


// public: virtual bool __thiscall Screen_Renderer::onKeyReleased(enum
// cocos2d::EventKeyboard::KeyCode,class cocos2d::Event *)

bool __thiscall Screen_Renderer::onKeyReleased(Screen_Renderer *this,KeyCode param_1,Event *param_2)

{
  return false;
}


// public: virtual void * __thiscall Screen_Renderer::`scalar deleting destructor'(unsigned int)

void * __thiscall Screen_Renderer::_scalar_deleting_destructor_(Screen_Renderer *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x14);
  }
  return this;
}


// public: virtual __thiscall Screen_Renderer::~Screen_Renderer(void)

void __thiscall Screen_Renderer::~Screen_Renderer(Screen_Renderer *this)

{
  *(undefined ***)this = vftable;
  return;
}
