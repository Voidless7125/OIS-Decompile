#include "../ois.exe.h"


// public: class cocos2d::Clonable * __thiscall cocos2d::__Bool::clone(void)const 

Clonable * __thiscall cocos2d::__Bool::clone(__Bool *this)

{
  __Bool *p_Var1;
  
                    // 0x1bb0  1  ?clone@__Bool@cocos2d@@QBEPAVClonable@2@XZ
  p_Var1 = cocos2d::__Bool::clone(this);
  if (p_Var1 != (__Bool *)0x0) {
    return (Clonable *)(p_Var1 + 0x18);
  }
  return (Clonable *)0x0;
}
