#include "../ois_server.exe.h"


// public: class cocos2d::Clonable * __thiscall cocos2d::__Double::clone(void)const 

Clonable * __thiscall cocos2d::__Double::clone(__Double *this)

{
  __Double *p_Var1;
  
                    // 0x1c10  2  ?clone@__Double@cocos2d@@QBEPAVClonable@2@XZ
  p_Var1 = cocos2d::__Double::clone(this);
  if (p_Var1 != (__Double *)0x0) {
    return (Clonable *)(p_Var1 + 0x18);
  }
  return (Clonable *)0x0;
}
