// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall Article::readyToPublish(Article *this,bool param_1)
bool Article::readyToPublish(bool param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(g_gameData + 0xd0) != 0) {
    if ((*(int *)((char *)this + 0x9c) <= *(int *)(g_gameLogic + 400)) &&
       ((*(int *)((char *)this + 0x9c) < *(int *)(g_gameLogic + 400) ||
        ((*(int *)((char *)this + 0x98) <= *(int *)(g_gameLogic + 0x18c) &&
         ((*(int *)((char *)this + 0x98) < *(int *)(g_gameLogic + 0x18c) ||
          ((*(int *)((char *)this + 0x94) <= *(int *)(g_gameLogic + 0x188) &&
           ((*(int *)((char *)this + 0x94) < *(int *)(g_gameLogic + 0x188) ||
            ((*(int *)((char *)this + 0x90) <= *(int *)(g_gameLogic + 0x184) &&
             ((*(int *)((char *)this + 0x90) < *(int *)(g_gameLogic + 0x184) ||
              (*(int *)((char *)this + 0x8c) <= *(int *)(g_gameLogic + 0x180))))))))))))))))) {
      uVar3 = 0;
      iVar2 = *(int *)((char *)this + 0xd4);
      if (*(int *)((char *)this + 0xd8) - iVar2 >> 2 != 0) {
        do {
          bVar1 = Requirement::checkReq
                            (*(Requirement **)(iVar2 + uVar3 * 4),
                             *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          if (!bVar1) {
            return false;
          }
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)((char *)this + 0xd4);
        } while (uVar3 < (uint)(*(int *)((char *)this + 0xd8) - iVar2 >> 2));
      }
      if ((!param_1) || (*(float *)((char *)this + 100) == 0.0)) {
        return true;
      }
    }
  }
  return false;
}


// Ghidra: bool __thiscall Article::runLogic(Article *this,float param_1)
bool Article::runLogic(float param_1)

{
  bool bVar1;
  Article *pAVar2;
  float in_XMM1_Da;
  float fVar3;
  
  bVar1 = readyToPublish(this,false);
  if ((bVar1) && (*(float *)((char *)this + 100) == -1.0)) {
    fVar3 = *(float *)((char *)this + 0x68);
    pAVar2 = this + 0x1c;
    *(float *)((char *)this + 100) = fVar3;
    if (fVar3 == 0.0) {
      debugPrint("DETAIL","Article \'%s\' ready to publish now");
    }
    else {
      if (0xf < *(uint *)((char *)this + 0x30)) {
        pAVar2 = *(Article **)pAVar2;
      }
      debugPrint("DETAIL","Article \'%s\' ready to publish in time: %.02f",pAVar2,(double)fVar3);
    }
  }
  if ((0.0 <= *(float *)((char *)this + 100)) &&
     (fVar3 = *(float *)((char *)this + 100) - ((in_XMM1_Da * 24.0) / 60.0) / 60.0,
     *(float *)((char *)this + 100) = fVar3, fVar3 <= 0.0)) {
    *(undefined4 *)((char *)this + 100) = 0;
    *(undefined4 *)((char *)this + 0xa0) = *(undefined4 *)((char *)this + 0x88);
    *(undefined4 *)((char *)this + 0xa4) = *(undefined4 *)((char *)this + 0x8c);
    *(undefined4 *)((char *)this + 0xa8) = *(undefined4 *)((char *)this + 0x90);
    *(undefined4 *)((char *)this + 0xac) = *(undefined4 *)((char *)this + 0x94);
    *(undefined8 *)((char *)this + 0xb0) = *(undefined8 *)((char *)this + 0x98);
    if (0 < *(int *)((char *)this + 0xb8)) {
      ((DateTime *)((char *)this + 0xa0))->decrement(*(int *)((char *)this + 0xb8));
    }
    return true;
  }
  return false;
}
