#include "../ois.exe.h"


void `GetPoolMutex'::`2'::_dynamic_atexit_destructor_for__poolMutex__(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_006629ac);
  return;
}
