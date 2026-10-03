#include "../ois.exe.h"


void __fastcall FUN_00595000(char *param_1,uint param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    pcVar2 = param_3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar2 - (int)(param_3 + 1)) < param_2) {
      strcpy_s(param_1,param_2,param_3);
      return;
    }
    strncpy_s(param_1,param_2,param_3,param_2);
    param_1[param_2 - 1] = '\0';
  }
  return;
}
