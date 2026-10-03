#include "../ois.exe.h"


// enum EQuadrant::Quadrant __cdecl quadrantFor(class cocos2d::Vec2)

Quadrant __cdecl quadrantFor(float param_1,float param_2)

{
  Quadrant QVar1;
  
  if (param_1 <= 0.0) {
    QVar1 = 0;
    if (param_2 <= 0.0) {
      QVar1 = 3;
    }
    return QVar1;
  }
  QVar1 = 2;
  if (0.0 < param_2) {
    QVar1 = 1;
  }
  return QVar1;
}
