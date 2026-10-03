#include "../ois.exe.h"


// public: __thiscall SoundLet::SoundLet(int,char const *,bool,float)

SoundLet * __thiscall
SoundLet::SoundLet(SoundLet *this,int param_1,char *param_2,bool param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  basic_string<> *pbVar3;
  FMOD_RESULT FVar4;
  char *pcVar5;
  basic_string<> *this_00;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c942b;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (basic_string<> *)(this + 4);
  *this = (SoundLet)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  *this_00 = (basic_string<>)0x0;
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign(this_00,param_2,(int)pcVar5 - (int)(param_2 + 1));
  local_8 = 0;
  *(int *)(this + 0x24) = s_nextSoundID;
  s_nextSoundID = s_nextSoundID + 1;
  this[0x20] = (SoundLet)param_3;
  *(int *)(this + 0x2c) = param_1;
  *(float *)(this + 0x1c) = param_4;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  pbVar3 = this_00;
  if (0xf < *(uint *)(this + 0x18)) {
    pbVar3 = *(basic_string<> **)this_00;
  }
  FVar4 = FMOD::System::createSound
                    ((char *)param_1_0065d528,(uint)pbVar3,
                     (FMOD_CREATESOUNDEXINFO *)((uint)param_3 * 2),(Sound **)0x0);
  if (FVar4 != 0) {
    if (0xf < *(uint *)(this + 0x18)) {
      this_00 = *(basic_string<> **)this_00;
    }
    debugPrint("ERROR","Failed to load sound %s",this_00,uVar2);
  }
  ExceptionList = local_10;
  return this;
}


// public: void * __thiscall SoundLet::`scalar deleting destructor'(unsigned int)

void * __thiscall SoundLet::_scalar_deleting_destructor_(SoundLet *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(this + 0x34) != 0) {
    FMOD::Sound::release();
  }
  uVar1 = *(uint *)(this + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 4);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (SoundLet)0x0;
  operator_delete(this,(nothrow_t *)0x38);
  ExceptionList = local_10;
  return this;
}
