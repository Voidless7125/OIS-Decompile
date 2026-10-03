#include "../ois_server.exe.h"


// Library Function - Single Match
//  public: char const * __thiscall SimpleString::operator=(char const *)
// 
// Library: Visual Studio 2019 Release

char * __thiscall SimpleString::operator=(SimpleString *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  piVar3 = FUN_00402690(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (char *)piVar3;
}


// Library Function - Single Match
//  public: char const * __thiscall SimpleString::operator=(char const *)
// 
// Library: Visual Studio 2019 Release

char * __thiscall SimpleString::operator=(SimpleString *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00403640(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return pcVar2;
}
