// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall CargoPod::hasAllOptions(CargoPod *this)
bool CargoPod::hasAllOptions()

{
  int iVar1;
  
  iVar1 = 1;
  do {
    if (this[iVar1] == (byte)0x0) {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return true;
}


// Ghidra: bool __thiscall CargoPod::hasNoOptions(CargoPod *this)
bool CargoPod::hasNoOptions()

{
  int iVar1;
  
  iVar1 = 1;
  do {
    if (this[iVar1] != (byte)0x0) {
      return false;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return true;
}


// Ghidra: bool __thiscall CargoPod::hasOption(CargoPod *this,GoodContainmentOption param_1)
bool CargoPod::hasOption(GoodContainmentOption param_1)

{
  if (param_1 == 0) {
    return true;
  }
  if (param_1 - 1 < 3) {
    return (bool)this[param_1];
  }
  return false;
}


// Ghidra: basic_string<> * __thiscall CargoPod::describeAddons(CargoPod *this)
std::string * CargoPod::describeAddons()

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  std::string *in_stack_00000004;
  
  iVar3 = 1;
  do {
    if (this[iVar3] != (byte)0x0) {
      iVar3 = 1;
      do {
        if (this[iVar3] == (byte)0x0) {
          iVar3 = 1;
          while ((iVar3 != 0 &&
                 (((CargoPod *)&DAT_00000002 < this + iVar3 + ~(uint)this ||
                  (this[iVar3] == (byte)0x0))))) {
            iVar3 = iVar3 + 1;
            if (2 < iVar3) {
              *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
              *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
              *in_stack_00000004 = (std::string)0x0;
              ghidra::str::assign(in_stack_00000004,"n/a",3);
              return in_stack_00000004;
            }
          }
          pcVar2 = (&PTR_s_General_005e16cc)[iVar3];
          *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
          *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
          *in_stack_00000004 = (std::string)0x0;
          pcVar4 = pcVar2;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          ghidra::str::assign(in_stack_00000004,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
          return in_stack_00000004;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
      *in_stack_00000004 = (std::string)0x0;
      ghidra::str::assign(in_stack_00000004,"upgraded",8);
      return in_stack_00000004;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  ghidra::str::assign(in_stack_00000004,"standard",8);
  return in_stack_00000004;
}
