#include "../ois_server.exe.h"


// Library Function - Single Match
//  struct _IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned char * const,unsigned int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2)

{
  int iVar1;
  _IMAGE_SECTION_HEADER *p_Var2;
  _IMAGE_SECTION_HEADER *p_Var3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  p_Var2 = (_IMAGE_SECTION_HEADER *)
           (param_1 + (uint)*(ushort *)(param_1 + iVar1 + 0x14) + iVar1 + 0x18);
  p_Var3 = p_Var2 + (uint)*(ushort *)(param_1 + iVar1 + 6) * 0x28;
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((*(uint *)(p_Var2 + 0xc) <= param_2) &&
       (param_2 < (uint)(*(int *)(p_Var2 + 8) + *(int *)(p_Var2 + 0xc)))) break;
    p_Var2 = p_Var2 + 0x28;
  }
  return p_Var2;
}


void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x005aedfe. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}


void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x005aedfe. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}


void __cdecl free(void *_Memory)

{
                    // WARNING: Could not recover jumptable at 0x005aedfe. Too many branches
                    // WARNING: Treating indirect jump as call
  free(_Memory);
  return;
}
