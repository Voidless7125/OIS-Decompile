// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall GameObject::getLocation(GameObject *this)
void GameObject::getLocation()

{
  float *in_stack_00000004;
  
  *in_stack_00000004 = (float)*(double *)((char *)this + 0x20);
  in_stack_00000004[1] = (float)*(double *)((char *)this + 0x28);
  return;
}


// Ghidra: void __thiscall GameObject::setLocation(GameObject *this,float param_2,float param_3)
void GameObject::setLocation(float param_2, float param_3)

{
  *(double *)((char *)this + 0x20) = (double)param_2;
  *(double *)((char *)this + 0x28) = (double)param_3;
  return;
}


// Ghidra: Quadrant __thiscall GameObject::getQuadrant(GameObject *this)
Quadrant GameObject::getQuadrant()

{
  Quadrant QVar1;
  
  QVar1 = 0;
  if ((float)*(double *)((char *)this + 0x20) <= 0.0) {
    if ((float)*(double *)((char *)this + 0x28) <= 0.0) {
      QVar1 = 3;
    }
    return QVar1;
  }
  return ((float)*(double *)((char *)this + 0x28) <= 0.0) + 1;
}
