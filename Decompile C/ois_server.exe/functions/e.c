#include "../ois_server.exe.h"


void entry(void)

{
  ___security_init_cookie();
  FUN_005ae5b8();
  return;
}


void __cdecl except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x005aedf2. Too many branches
                    // WARNING: Treating indirect jump as call
  except_handler4_common();
  return;
}


void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x005aee5e. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}


void __cdecl except1(void)

{
                    // WARNING: Could not recover jumptable at 0x005af4af. Too many branches
                    // WARNING: Treating indirect jump as call
  except1();
  return;
}
