#include "../ois_server.exe.h"


void OutputDebugStringA(LPCSTR lpOutputString)

{
                    // WARNING: Could not recover jumptable at 0x00594f40. Too many branches
                    // WARNING: Treating indirect jump as call
  OutputDebugStringA(lpOutputString);
  return;
}
