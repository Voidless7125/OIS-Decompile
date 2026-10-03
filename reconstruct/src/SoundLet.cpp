// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: SoundLet * __thiscall SoundLet::SoundLet(SoundLet *this,int param_1,char *param_2,bool param_3,float param_4)
SoundLet::SoundLet(int param_1, char * param_2, bool param_3, float param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  uint uVar2;
  std::string *pbVar3;
  FMOD_RESULT FVar4;
  char *pcVar5;
  std::string *this_00;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c942b;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  this_00 = (std::string *)((char *)this + 4);
  *this = (byte)0x0;
  *(undefined4 *)((char *)this + 0x14) = 0;
  *(undefined4 *)((char *)this + 0x18) = 0xf;
  *this_00 = (std::string)0x0;
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ghidra::str::assign(this_00,param_2,(int)pcVar5 - (int)(param_2 + 1));
  // [seh] local_8 = 0;
  *(int *)((char *)this + 0x24) = s_nextSoundID;
  s_nextSoundID = s_nextSoundID + 1;
  ((char *)this)[0x20] = (SoundLet)param_3;
  *(int *)((char *)this + 0x2c) = param_1;
  *(float *)((char *)this + 0x1c) = param_4;
  *(undefined4 *)((char *)this + 0x30) = 0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  pbVar3 = this_00;
  if (0xf < *(uint *)((char *)this + 0x18)) {
    pbVar3 = *(std::string **)this_00;
  }
  FVar4 = FMOD::System::createSound
                    ((char *)param_1_0065d528,(uint)pbVar3,
                     (FMOD_CREATESOUNDEXINFO *)((uint)param_3 * 2),(Sound **)0x0);
  if (FVar4 != 0) {
    if (0xf < *(uint *)((char *)this + 0x18)) {
      this_00 = *(std::string **)this_00;
    }
    debugPrint("ERROR","Failed to load sound %s",this_00,uVar2);
  }
  // [seh] ExceptionList = local_10;
  return;
}
