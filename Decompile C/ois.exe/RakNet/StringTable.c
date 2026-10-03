#include "../ois.exe.h"


// public: static void __cdecl RakNet::StringTable::RemoveReference(void)

void __cdecl RakNet::StringTable::RemoveReference(void)

{
  StrAndBool *pSVar1;
  StringTable *pSVar2;
  uint uVar3;
  
  pSVar2 = instance;
  if ((0 < referenceCount) && (referenceCount = referenceCount + -1, referenceCount == 0)) {
    if (instance != (StringTable *)0x0) {
      uVar3 = 0;
      if ((instance->orderedStringList).orderedList.list_size != 0) {
        do {
          pSVar1 = (pSVar2->orderedStringList).orderedList.listArray;
          if (pSVar1[uVar3].b != false) {
            free(pSVar1[uVar3].str);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (pSVar2->orderedStringList).orderedList.list_size);
      }
      if ((pSVar2->orderedStringList).orderedList.allocation_size != 0) {
        operator_delete__((pSVar2->orderedStringList).orderedList.listArray);
        (pSVar2->orderedStringList).orderedList.allocation_size = 0;
        (pSVar2->orderedStringList).orderedList.listArray = (StrAndBool *)0x0;
        (pSVar2->orderedStringList).orderedList.list_size = 0;
      }
      operator_delete(pSVar2,(nothrow_t *)0xc);
    }
    instance = (StringTable *)0x0;
  }
  return;
}
