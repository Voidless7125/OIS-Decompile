#include "../ois.exe.h"


// public: class cocos2d::Vec2 __thiscall GameObject::getLocation(void)

void __thiscall GameObject::getLocation(GameObject *this)

{
  float *in_stack_00000004;
  
  *in_stack_00000004 = (float)*(double *)(this + 0x20);
  in_stack_00000004[1] = (float)*(double *)(this + 0x28);
  return;
}


// public: void __thiscall GameObject::setLocation(class cocos2d::Vec2)

void __thiscall GameObject::setLocation(GameObject *this,float param_2,float param_3)

{
  *(double *)(this + 0x20) = (double)param_2;
  *(double *)(this + 0x28) = (double)param_3;
  return;
}


// public: enum EQuadrant::Quadrant __thiscall GameObject::getQuadrant(void)

Quadrant __thiscall GameObject::getQuadrant(GameObject *this)

{
  Quadrant QVar1;
  
  QVar1 = 0;
  if ((float)*(double *)(this + 0x20) <= 0.0) {
    if ((float)*(double *)(this + 0x28) <= 0.0) {
      QVar1 = 3;
    }
    return QVar1;
  }
  return ((float)*(double *)(this + 0x28) <= 0.0) + 1;
}
