#include "../ois_server.exe.h"


void __cdecl crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x005aee2e. Too many branches
                    // WARNING: Treating indirect jump as call
  crt_atexit();
  return;
}
