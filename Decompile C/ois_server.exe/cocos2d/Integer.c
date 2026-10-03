#include "../ois_server.exe.h"


// public: class cocos2d::Clonable * __thiscall cocos2d::__Integer::clone(void)const 

Clonable * __thiscall cocos2d::__Integer::clone(__Integer *this)

{
  __Integer *p_Var1;
  
                    // 0x1bd0  4  ?clone@__Integer@cocos2d@@QBEPAVClonable@2@XZ
  p_Var1 = cocos2d::__Integer::clone(this);
  if (p_Var1 != (__Integer *)0x0) {
    return (Clonable *)(p_Var1 + 0x18);
  }
  return (Clonable *)0x0;
}
