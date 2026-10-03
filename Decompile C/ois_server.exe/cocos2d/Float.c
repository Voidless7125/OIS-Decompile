#include "../ois_server.exe.h"


// public: class cocos2d::Clonable * __thiscall cocos2d::__Float::clone(void)const 

Clonable * __thiscall cocos2d::__Float::clone(__Float *this)

{
  __Float *p_Var1;
  
                    // 0x1bf0  3  ?clone@__Float@cocos2d@@QBEPAVClonable@2@XZ
  p_Var1 = cocos2d::__Float::clone(this);
  if (p_Var1 != (__Float *)0x0) {
    return (Clonable *)(p_Var1 + 0x18);
  }
  return (Clonable *)0x0;
}
