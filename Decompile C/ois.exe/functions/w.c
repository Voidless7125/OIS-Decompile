#include "../ois.exe.h"


// void __cdecl writeTextToFile(struct _iobuf *,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __cdecl writeTextToFile(undefined4 *param_1)

{
  undefined4 *puVar1;
  FILE *in_ECX;
  nothrow_t *pnVar2;
  size_t in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2368;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::append((basic_string<> *)&param_1,"\n",1);
  puVar1 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar1 = param_1;
  }
  fwrite(puVar1,in_stack_00000014,1,in_ECX);
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar1 = param_1;
    if ((nothrow_t *)0xfff < pnVar2) {
      puVar1 = (undefined4 *)param_1[-1];
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar1,pnVar2);
  }
  ExceptionList = local_10;
  return;
}


// void __cdecl writeString(struct _iobuf *,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __cdecl writeString(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  nothrow_t *pnVar3;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_0000001c;
  uint in_stack_00000030;
  char acStack_34 [12];
  undefined4 uStack_28;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005be260;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  puVar2 = &stack0x0000001c;
  if (0xf < in_stack_00000030) {
    puVar2 = in_stack_0000001c;
  }
  puVar1 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar1 = param_1;
  }
  strUsingArgs(acStack_34,"%s=%s",puVar1,puVar2);
  writeTextToFile();
  if (0xf < in_stack_00000018) {
    pnVar3 = (nothrow_t *)(in_stack_00000018 + 1);
    puVar2 = param_1;
    if ((nothrow_t *)0xfff < pnVar3) {
      puVar2 = (undefined4 *)param_1[-1];
      pnVar3 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4b09a5;
    operator_delete(puVar2,pnVar3);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar3 = (nothrow_t *)(in_stack_00000030 + 1);
    puVar2 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar3) {
      puVar2 = (undefined4 *)in_stack_0000001c[-1];
      pnVar3 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000001c + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_28 = 0x4b09ed;
    operator_delete(puVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// void __cdecl writeBoolean(struct _iobuf *,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,bool,bool)

void __cdecl writeBoolean(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char in_DL;
  nothrow_t *pnVar3;
  uint in_stack_0000001c;
  char acStack_40 [12];
  undefined4 uStack_34;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005be288;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pcVar1 = "true";
  puVar2 = &param_2;
  if (0xf < in_stack_0000001c) {
    puVar2 = param_2;
  }
  if (in_DL == '\0') {
    pcVar1 = "false";
  }
  strUsingArgs(acStack_40,"%s=%s",puVar2,pcVar1);
  writeTextToFile();
  if (0xf < in_stack_0000001c) {
    pnVar3 = (nothrow_t *)(in_stack_0000001c + 1);
    puVar2 = param_2;
    if ((nothrow_t *)0xfff < pnVar3) {
      puVar2 = (undefined4 *)param_2[-1];
      pnVar3 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_34 = 0x4b0a9d;
    operator_delete(puVar2,pnVar3);
  }
  ExceptionList = local_10;
  return;
}


// void __cdecl writeMetaDataStr(struct _iobuf *,int,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __cdecl writeMetaDataStr(void *param_1)

{
  FILE *in_ECX;
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  undefined1 local_18 [7];
  undefined1 local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4f48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_11 = 1;
  fwrite(local_18,4,1,in_ECX);
  fwrite(&local_11,1,1,in_ECX);
  Singleton<>::getInstance();
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffffc4,(basic_string<> *)&param_1)
  ;
  SaveHandler::writeLengthString();
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_1 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_10;
  return;
}
