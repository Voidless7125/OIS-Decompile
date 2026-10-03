// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall SoundEngine::shutdown(SoundEngine *this)
void SoundEngine::shutdown()

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  undefined4 *puVar7;
  
  debugPrint("GAME","Shutting down sound engine");
  removeAllSounds(this);
  if (*(int *)((char *)this + 0x6c) != 0) {
    FMOD::System::release();
    *(undefined4 *)((char *)this + 0x6c) = 0;
  }
  puVar1 = *(undefined4 **)((char *)this + 0x5c);
  puVar7 = *(undefined4 **)((char *)this + 0x58);
  do {
    if (puVar7 == puVar1) {
      *(undefined4 *)((char *)this + 0x5c) = *(undefined4 *)((char *)this + 0x58);
      removeAllSounds(this);
      return;
    }
    piVar2 = (int *)*puVar7;
    if (piVar2 != (int *)0x0) {
      uVar3 = piVar2[0x11];
      if (0xf < uVar3) {
        pvVar4 = (void *)piVar2[0xc];
        pnVar6 = (nothrow_t *)(uVar3 + 1);
        pvVar5 = pvVar4;
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)pvVar4 + -4);
          pnVar6 = (nothrow_t *)(uVar3 + 0x24);
          if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) goto LAB_005597d3;
        }
        operator_delete(pvVar5,pnVar6);
      }
      piVar2[0x10] = 0;
      piVar2[0x11] = 0xf;
      *(undefined1 *)(piVar2 + 0xc) = 0;
      uVar3 = piVar2[0xb];
      if (0xf < uVar3) {
        pvVar4 = (void *)piVar2[6];
        pnVar6 = (nothrow_t *)(uVar3 + 1);
        pvVar5 = pvVar4;
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)pvVar4 + -4);
          pnVar6 = (nothrow_t *)(uVar3 + 0x24);
          if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) goto LAB_005597d3;
        }
        operator_delete(pvVar5,pnVar6);
      }
      piVar2[10] = 0;
      piVar2[0xb] = 0xf;
      *(undefined1 *)(piVar2 + 6) = 0;
      uVar3 = piVar2[5];
      if (0xf < uVar3) {
        pvVar4 = (void *)*piVar2;
        pnVar6 = (nothrow_t *)(uVar3 + 1);
        pvVar5 = pvVar4;
        if ((nothrow_t *)0xfff < pnVar6) {
          pvVar5 = *(void **)((int)pvVar4 + -4);
          pnVar6 = (nothrow_t *)(uVar3 + 0x24);
          if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) {
LAB_005597d3:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,pnVar6);
      }
      piVar2[4] = 0;
      piVar2[5] = 0xf;
      *(undefined1 *)piVar2 = 0;
      operator_delete(piVar2,(nothrow_t *)0x48);
    }
    puVar7 = puVar7 + 1;
  } while( true );
}


// Ghidra: void __thiscall SoundEngine::removeAllSounds(SoundEngine *this)
void SoundEngine::removeAllSounds()

{
  int iVar1;
  SoundLet *this_00;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x2c);
  if (*(int *)((char *)this + 0x30) - iVar2 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar2 + uVar3 * 4);
      if ((*(int *)(iVar1 + 0x34) != 0) && (*(int *)(iVar1 + 0x30) != 0)) {
        FMOD::ChannelControl::stop();
        iVar2 = *(int *)((char *)this + 0x2c);
      }
      this_00 = *(SoundLet **)(iVar2 + uVar3 * 4);
      if (this_00 != (SoundLet *)0x0) {
        SoundLet::_scalar_deleting_destructor_(this_00,(uint)this_00);
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x2c);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x30) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x30) = iVar2;
  return;
}


// Ghidra: void __thiscall SoundEngine::playSound(SoundEngine *this,Sound param_1,int param_2)
void SoundEngine::playSound(Sound param_1, int param_2)

{
  if (*this != (byte)0x0) {
    addSound(this,6,param_1,param_2,false,true,1.0);
  }
  return;
}


// Ghidra: void __thiscall SoundEngine::playSound(SoundEngine *this,Ship *param_1,Sound param_2,int param_3)
void SoundEngine::playSound(Ship * param_1, Sound param_2, int param_3)

{
  char stack0xffffffd0[1] = {0};  // [pseudo] address of an unnamed stack slot
  NetworkServer *pNVar1;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b2198;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (*this != (byte)0x0) {
    if ((g_gameLogic[0x71] == (byte)0x0) && (g_gameLogic[0x72] == (byte)0x0)) {
      ghidra::str::ctor
                ((std::string *)&stack0xffffffd0,(std::string *)(param_1 + 0x238));
      // [seh] local_8 = 0;
      pNVar1 = ghidra::any_singleton();
      // [seh] local_8 = 0xffffffff;
      (pNVar1)->sendSound(param_2, param_3);
      // [seh] ExceptionList = local_10;
      return;
    }
    if (param_1 == *(Ship **)((char *)this + 0x24)) {
      addSound(this,6,param_2,param_3,false,true,1.0);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall SoundEngine::pauseSound(SoundEngine *this,int param_1)
void SoundEngine::pauseSound(int param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 0x30) - *(int *)((char *)this + 0x2c) >> 2;
  if (uVar3 != 0) {
    while( true ) {
      pcVar1 = *(char **)(*(int *)((char *)this + 0x2c) + uVar2 * 4);
      if (*(int *)(pcVar1 + 0x24) == param_1) break;
      uVar2 = uVar2 + 1;
      if (uVar3 <= uVar2) {
        return;
      }
    }
    if ((((pcVar1 != (char *)0x0) && (*(int *)(pcVar1 + 0x24) != -1)) && (*pcVar1 == '\0')) &&
       (*(int *)(pcVar1 + 0x34) != 0)) {
      if (*(int *)(pcVar1 + 0x30) != 0) {
        FMOD::ChannelControl::setPaused(SUB41(*(int *)(pcVar1 + 0x30),0));
      }
      *pcVar1 = '\x01';
    }
  }
  return;
}


// Ghidra: void __thiscall SoundEngine::unpauseSound(SoundEngine *this,int param_1)
void SoundEngine::unpauseSound(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((char *)this + 0x30) - *(int *)((char *)this + 0x2c) >> 2;
  if (uVar3 != 0) {
    while (puVar1 = *(undefined1 **)(*(int *)((char *)this + 0x2c) + uVar2 * 4),
          *(int *)(puVar1 + 0x24) != param_1) {
      uVar2 = uVar2 + 1;
      if (uVar3 <= uVar2) {
        return;
      }
    }
    if ((puVar1 != (undefined1 *)0x0) && (*(int *)(puVar1 + 0x34) != 0)) {
      FMOD::ChannelControl::getPaused(*(bool **)(puVar1 + 0x30));
      *puVar1 = 0;
      if ((param_1._3_1_ != '\0') && (*(int *)(puVar1 + 0x30) != 0)) {
        FMOD::ChannelControl::setPaused(SUB41(*(int *)(puVar1 + 0x30),0));
      }
    }
  }
  return;
}


// Ghidra: void __thiscall SoundEngine::setSoundSpace(SoundEngine *this,SoundSpace *param_1)
void SoundEngine::setSoundSpace(SoundSpace * param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(SoundSpace **)((char *)this + 0x28) = param_1;
  iVar1 = *(int *)((char *)this + 0x2c);
  if (*(int *)((char *)this + 0x30) - iVar1 >> 2 != 0) {
    do {
      if (*(int *)((char *)this + 0x28) == 0) {
        *(undefined4 *)(*(int *)(iVar1 + uVar2 * 4) + 0x1c) = 0;
        iVar1 = *(int *)((char *)this + 0x2c);
      }
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x1c);
      iVar1 = *(int *)(*(int *)((char *)this + 0x2c) + uVar2 * 4);
      if ((*(int *)(iVar1 + 0x2c) != 0) && (*(int *)((char *)this + 0x28) != 0)) {
        *(float *)(iVar1 + 0x28) =
             *(float *)(*(int *)((char *)this + 0x28) + *(int *)(iVar1 + 0x2c) * 4) *
             *(float *)(iVar1 + 0x28);
      }
      if ((*(int *)(iVar1 + 0x34) != 0) && (*(float *)(iVar1 + 0x30) != 0.0)) {
        FMOD::ChannelControl::setVolume(*(float *)(iVar1 + 0x30));
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x2c);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x30) - iVar1 >> 2));
  }
  return;
}


// Ghidra: void __thiscall SoundEngine::resumeTrack(SoundEngine *this)
void SoundEngine::resumeTrack()

{
  char local_6;
  char local_5;
  
  if (*(bool **)((char *)this + 100) != (bool *)0x0) {
    FMOD::ChannelControl::getPaused(*(bool **)((char *)this + 100));
    local_6 = (char)((uint)this >> 0x10);
    if (local_6 != '\0') {
      FMOD::ChannelControl::setPaused(SUB41(*(undefined4 *)((char *)this + 100),0));
      ((char *)this)[0x44] = (byte)0x1;
      return;
    }
  }
  ((char *)this)[0x44] = (byte)0x1;
  if (*(bool **)((char *)this + 100) != (bool *)0x0) {
    FMOD::ChannelControl::isPlaying(*(bool **)((char *)this + 100));
    if (*(int *)((char *)this + 100) != 0) {
      local_5 = (char)((uint)this >> 0x18);
      if (local_5 != '\0') {
        return;
      }
      FMOD::ChannelControl::setPaused(SUB41(*(int *)((char *)this + 100),0));
      return;
    }
  }
  playNewTrack(this);
  return;
}


// Ghidra: void __thiscall SoundEngine::playNewTrack(SoundEngine *this)
void SoundEngine::playNewTrack()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  AnimationFrames **ppAVar1;
  AnimationFrames *pAVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  FMOD_RESULT FVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  int iVar12;
  uint uVar13;
  size_t sVar14;
  SoundEngine *pSVar15;
  std::string abStack_78 [12];
  undefined4 uStack_6c;
  FMOD_CREATESOUNDEXINFO *pFVar16;
  Sound **ppSVar17;
  int local_44;
  int local_40;
  SoundEngine *local_34;
  AnimationFrames *local_30;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c94f0;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  this_00 = (ghidra::vector *)((char *)this + 0x4c);
  local_34 = this;
  if ((uint)(*(int *)((char *)this + 0x50) - *(int *)this_00) < 4) {
    debugPrint("GAME","Shuffling music tracks...");
    ghidra::lib::vector__vector((ghidra::vector *)&local_44,(ghidra::vector *)((char *)this + 0x58));
    // [seh] local_8 = 0;
    iVar6 = local_40;
    for (iVar3 = local_40 - local_44; iVar3 >> 2 != 0; iVar3 = iVar6 - iVar3) {
      iVar12 = iVar6 - local_44;
      iVar4 = rand();
      iVar3 = local_44;
      ppAVar1 = *(AnimationFrames ***)((char *)this + 0x50);
      local_30 = *(AnimationFrames **)(local_44 + (iVar4 % (iVar12 >> 2)) * 4);
      if (*(AnimationFrames ***)((char *)this + 0x54) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_30);
      }
      else {
        *ppAVar1 = local_30;
        *(int *)((char *)this + 0x50) = *(int *)((char *)this + 0x50) + 4;
      }
      piVar5 = (int *)ghidra::lib::remove___x28_x29();
      iVar4 = *piVar5;
      if (iVar4 != iVar6) {
        iVar6 = iVar4;
        local_40 = iVar4;
      }
    }
    // [seh] local_8 = 0xffffffff;
    ghidra::lib::vector___x7evector((ghidra::vector *)&local_44);
  }
  pSVar15 = local_34;
  if (*(int *)(local_34 + 100) != 0) {
    FMOD::ChannelControl::stop();
  }
  pSVar15[0x44] = (byte)0x1;
  uVar13 = *(int *)((char *)this + 0x50) - (int)*(undefined4 **)this_00 >> 2;
  if (uVar13 < 2) {
    uVar7 = **(undefined4 **)this_00;
  }
  else {
    iVar6 = rand();
    uVar7 = *(undefined4 *)(*(int *)this_00 + (iVar6 % (int)uVar13) * 4);
  }
  *(undefined4 *)(pSVar15 + 0x48) = uVar7;
  local_30 = *(AnimationFrames **)(pSVar15 + 0x50);
  puVar8 = (undefined4 *)ghidra::lib::remove___x28_x29();
  pAVar2 = (AnimationFrames *)*puVar8;
  if (pAVar2 != local_30) {
    sVar14 = *(int *)(pSVar15 + 0x50) - (int)local_30;
    memmove(pAVar2,local_30,sVar14);
    *(AnimationFrames **)(local_34 + 0x50) = pAVar2 + sVar14;
    pSVar15 = local_34;
  }
  debugPrint("GAME","Playing new track: %s by %s");
  ppSVar17 = (Sound **)0x0;
  pFVar16 = (FMOD_CREATESOUNDEXINFO *)0x0;
  ghidra::str::ctor(abStack_78,*(std::string **)(pSVar15 + 0x48));
  puVar8 = (undefined4 *)OSInterface::getSoundLocationForAsset();
  // [seh] local_8 = 1;
  if (0xf < (uint)puVar8[5]) {
    puVar8 = (undefined4 *)*puVar8;
  }
  uStack_6c = 0x55a13d;
  FVar9 = FMOD::System::createSound(*(char **)(pSVar15 + 0x6c),(uint)puVar8,pFVar16,ppSVar17);
  // [seh] local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  if (FVar9 != 0) {
    debugPrint("ERROR","Failed to load sound %s");
  }
  uStack_6c = 0x55a1c7;
  FVar9 = FMOD::System::playSound
                    (*(Sound **)(pSVar15 + 0x6c),*(ChannelGroup **)(pSVar15 + 0x68),false,
                     (Channel **)0x0);
  if (FVar9 == 0) {
    FMOD::ChannelControl::setVolume(*(float *)(pSVar15 + 100));
  }
  else {
    debugPrint("ERROR","failed to play music %s");
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall SoundEngine::resetSoundVolume(SoundEngine *this)
void SoundEngine::resetSoundVolume()

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x2c);
  if (*(int *)((char *)this + 0x30) - iVar2 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar2 + uVar3 * 4);
      if ((*(int *)(iVar2 + 0x34) != 0) && (fVar1 = *(float *)(iVar2 + 0x30), fVar1 != 0.0)) {
        FMOD::ChannelControl::setVolume(fVar1);
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x2c);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x30) - iVar2 >> 2));
  }
  return;
}


// Ghidra: void __thiscall SoundEngine::setMusicVolume(SoundEngine *this,float param_1)
void SoundEngine::setMusicVolume(float param_1)

{
  FMOD::ChannelControl::isPlaying(*(bool **)((char *)this + 100));
  FMOD::ChannelControl::setVolume(*(float *)((char *)this + 100));
  return;
}


// Ghidra: void __thiscall SoundEngine::runLogic(SoundEngine *this,float param_1)
void SoundEngine::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  AnimationFrames **ppAVar2;
  SoundLet *this_00;
  void *pvVar3;
  bool bVar4;
  uint uVar5;
  std::string *pbVar6;
  SoundEngine *pSVar7;
  std::string *pbVar8;
  FMOD_RESULT FVar9;
  AnimationFrames **ppAVar10;
  undefined4 *puVar11;
  char *pcVar12;
  void *pvVar13;
  int iVar14;
  uint extraout_ECX;
  uint extraout_ECX_00;
  nothrow_t *pnVar15;
  uint uVar16;
  float in_XMM1_Da;
  char *pcVar17;
  uint uVar18;
  int local_50;
  uint local_4c;
  char local_45;
  void *local_44 [5];
  uint local_30;
  std::string *local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005c9540;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_14 = uVar5;
  if (*(int *)(g_gameData + 0xd0) == 0) goto LAB_0055a6ee;
  if (*(int *)((char *)this + 0x48) == 0) {
    pSVar7 = this + 0xc;
    *(undefined4 *)((char *)this + 0x1c) = 0;
    if (0xf < *(uint *)((char *)this + 0x20)) {
      pSVar7 = *(SoundEngine **)pSVar7;
    }
    *pSVar7 = (byte)0x0;
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (std::string *)((uint)local_2c[0] & 0xffffff00);
    // [seh] local_8 = 0;
    if ((((char *)this)[0x44] == (byte)0x0) || (*(char *)(*(int *)(g_gameData + 0xd0) + 0xe4) != '\0'))
    {
      pcVar17 = "`8";
    }
    else {
      pcVar17 = "`%";
    }
    ghidra::str::append((std::string *)local_2c,pcVar17,2);
    iVar14 = *(int *)((char *)this + 0x48);
    pcVar17 = (char *)(iVar14 + 0x30);
    if (0xf < *(uint *)(iVar14 + 0x44)) {
      pcVar17 = *(char **)(iVar14 + 0x30);
    }
    ghidra::str::append((std::string *)local_2c,pcVar17,*(uint *)(iVar14 + 0x40));
    if ((((char *)this)[0x44] == (byte)0x0) || (*(char *)(*(int *)(g_gameData + 0xd0) + 0xe4) != '\0'))
    {
      uVar18 = 3;
      pcVar17 = " - ";
    }
    else {
      uVar18 = 7;
      pcVar17 = " `7- `!";
    }
    ghidra::str::append((std::string *)local_2c,pcVar17,uVar18);
    iVar14 = *(int *)((char *)this + 0x48);
    pcVar17 = (char *)(iVar14 + 0x18);
    if (0xf < *(uint *)(iVar14 + 0x2c)) {
      pcVar17 = *(char **)(iVar14 + 0x18);
    }
    ghidra::str::append((std::string *)local_2c,pcVar17,*(uint *)(iVar14 + 0x28));
    if (*(int *)(*(int *)((char *)this + 0x48) + 0x40) + 3 + *(int *)(*(int *)((char *)this + 0x48) + 0x28) < 0xe) {
      if ((std::string *)((char *)this + 0xc) != (std::string *)local_2c) {
        pbVar6 = (std::string *)local_2c;
        if (0xf < local_18) {
          pbVar6 = local_2c[0];
        }
        ghidra::str::assign((std::string *)((char *)this + 0xc),(char *)pbVar6,local_1c);
      }
    }
    else {
      fVar1 = *(float *)((char *)this + 8);
      *(float *)((char *)this + 8) = fVar1 - in_XMM1_Da;
      if (fVar1 - in_XMM1_Da <= 0.0) {
        *(int *)((char *)this + 4) = *(int *)((char *)this + 4) + 1;
        *(undefined4 *)((char *)this + 8) = 0x3e800000;
        if (local_1c <= *(uint *)((char *)this + 4)) {
          *(undefined4 *)((char *)this + 4) = 0;
          *(undefined4 *)((char *)this + 8) = 0x41200000;
        }
      }
    }
    pSVar7 = this + 0xc;
    local_50 = 0;
    local_4c = 0;
    local_45 = '\0';
    *(undefined4 *)((char *)this + 0x1c) = 0;
    if (0xf < *(uint *)((char *)this + 0x20)) {
      pSVar7 = *(SoundEngine **)((char *)this + 0xc);
    }
    *pSVar7 = (byte)0x0;
    uVar16 = 0;
    pbVar6 = local_2c[0];
    uVar18 = local_18;
    if (local_1c != 0) {
      do {
        if (local_45 == '\0') {
          pbVar8 = (std::string *)local_2c;
          if (0xf < uVar18) {
            pbVar8 = pbVar6;
          }
          if (pbVar8[uVar16] == (std::string)0x60) {
            local_45 = '\x01';
            pbVar8 = (std::string *)local_2c;
            if (0xf < uVar18) {
              pbVar8 = pbVar6;
            }
            pcVar17 = (char *)strUsingArgs((char *)local_44,"%c",(int)(char)pbVar8[uVar16]);
            // [seh] local_8._0_1_ = 2;
            goto LAB_0055a519;
          }
          iVar14 = local_50 + 1;
          bVar4 = *(int *)((char *)this + 4) <= local_50;
          local_50 = iVar14;
          if ((bVar4) && ((int)local_4c < 0xe)) {
            local_4c = local_4c + 1;
            pbVar8 = (std::string *)local_2c;
            if (0xf < uVar18) {
              pbVar8 = pbVar6;
            }
            pcVar17 = (char *)strUsingArgs((char *)local_44,"%c",(int)(char)pbVar8[uVar16]);
            // [seh] local_8._0_1_ = 3;
            goto LAB_0055a519;
          }
        }
        else {
          local_45 = '\0';
          pbVar8 = (std::string *)local_2c;
          if (0xf < uVar18) {
            pbVar8 = pbVar6;
          }
          pcVar17 = (char *)strUsingArgs((char *)local_44,"%c",(int)(char)pbVar8[uVar16]);
          // [seh] local_8._0_1_ = 1;
LAB_0055a519:
          pcVar12 = pcVar17;
          if (0xf < *(uint *)(pcVar17 + 0x14)) {
            pcVar12 = *(char **)pcVar17;
          }
          ghidra::str::append
                    ((std::string *)((char *)this + 0xc),pcVar12,*(uint *)(pcVar17 + 0x10));
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          pbVar6 = local_2c[0];
          uVar18 = local_18;
          if (0xf < local_30) {
            pnVar15 = (nothrow_t *)(local_30 + 1);
            pvVar13 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar15) {
              pvVar13 = *(void **)((int)local_44[0] + -4);
              pnVar15 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar13))) goto LAB_0055a59a;
            }
            operator_delete(pvVar13,pnVar15);
            pbVar6 = local_2c[0];
            uVar18 = local_18;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < local_1c);
    }
    // [seh] local_8 = -1;
    if (0xf < uVar18) {
      pnVar15 = (nothrow_t *)(uVar18 + 1);
      pbVar8 = pbVar6;
      if ((nothrow_t *)0xfff < pnVar15) {
        pbVar8 = *(std::string **)(pbVar6 + -4);
        pnVar15 = (nothrow_t *)(uVar18 + 0x24);
        if ((std::string *)0x1f < pbVar6 + (-4 - (int)pbVar8)) {
LAB_0055a59a:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar8,pnVar15);
    }
  }
  if (((char *)this)[0x44] != (byte)0x0) {
    if (*(int *)((char *)this + 0x48) != 0) {
      if ((*(bool **)((char *)this + 100) == (bool *)0x0) ||
         (FMOD::ChannelControl::isPlaying(*(bool **)((char *)this + 100)), local_45 == '\0')) {
        *(undefined4 *)((char *)this + 0x48) = 0;
      }
      if (*(int *)((char *)this + 0x48) != 0) goto LAB_0055a5f9;
    }
    playNewTrack(this);
  }
LAB_0055a5f9:
  uVar18 = 0;
  iVar14 = *(int *)((char *)this + 0x2c);
  if (*(int *)((char *)this + 0x30) - iVar14 >> 2 != 0) {
    do {
      iVar14 = *(int *)(uVar18 * 4 + iVar14);
      if ((*(char *)(iVar14 + 0x20) == '\0') &&
         ((FVar9 = FMOD::ChannelControl::isPlaying(*(bool **)(iVar14 + 0x30)), FVar9 != 0 ||
          (local_45 == '\0')))) {
        ppAVar2 = *(AnimationFrames ***)((char *)this + 0x3c);
        ppAVar10 = (AnimationFrames **)(*(int *)((char *)this + 0x2c) + uVar18 * 4);
        if (*(AnimationFrames ***)((char *)this + 0x40) == ppAVar2) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x38),ppAVar2,ppAVar10);
        }
        else {
          *ppAVar2 = *ppAVar10;
          *(int *)((char *)this + 0x3c) = *(int *)((char *)this + 0x3c) + 4;
        }
      }
      uVar18 = uVar18 + 1;
      iVar14 = *(int *)((char *)this + 0x2c);
    } while (uVar18 < (uint)(*(int *)((char *)this + 0x30) - iVar14 >> 2));
  }
  iVar14 = *(int *)((char *)this + 0x38);
  if (*(int *)((char *)this + 0x3c) - iVar14 >> 2 != 0) {
    local_4c = 0;
    do {
      this_00 = *(SoundLet **)(iVar14 + local_4c * 4);
      pvVar13 = *(void **)((char *)this + 0x30);
      puVar11 = (undefined4 *)ghidra::lib::remove___x28_x29(*(undefined4 *)((char *)this + 0x2c),pvVar13,uVar5);
      pvVar3 = (void *)*puVar11;
      uVar18 = extraout_ECX;
      if (pvVar3 != pvVar13) {
        iVar14 = *(int *)((char *)this + 0x30);
        memmove(pvVar3,pvVar13,iVar14 - (int)pvVar13);
        *(int *)((char *)this + 0x30) = (iVar14 - (int)pvVar13) + (int)pvVar3;
        uVar18 = extraout_ECX_00;
      }
      if (this_00 != (SoundLet *)0x0) {
        SoundLet::_scalar_deleting_destructor_(this_00,uVar18);
      }
      local_4c = local_4c + 1;
      iVar14 = *(int *)((char *)this + 0x38);
    } while (local_4c < (uint)(*(int *)((char *)this + 0x3c) - iVar14 >> 2));
    *(int *)((char *)this + 0x3c) = iVar14;
  }
  FMOD::System::update();
LAB_0055a6ee:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall SoundEngine::playRandomKeyPress(SoundEngine *this,Ship *param_1)
void SoundEngine::playRandomKeyPress(Ship * param_1)

{
  int iVar1;
  
  if (OISConfiguration::keySounds) {
    iVar1 = rand();
    iVar1 = iVar1 % 3 + 1;
    if (param_1 == (Ship *)0x0) {
      addSound(this,0,0xd,iVar1,false,true,1.0);
      return;
    }
    playSound(this,param_1,0xd,iVar1);
  }
  return;
}
