#include "../ois.exe.h"


void `dynamic_atexit_destructor_for_'RakNet::RakString::freeList__(void)

{
  if (RakNet::RakString::freeList.allocation_size != 0) {
    operator_delete__(RakNet::RakString::freeList.listArray);
  }
  return;
}
