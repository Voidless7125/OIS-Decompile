#include "../ois_server.exe.h"


void __thiscall FUN_00558070(void *this,int param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 2;
  if (uVar3 != 0) {
    while( true ) {
      pcVar1 = *(char **)(*(int *)((int)this + 0x2c) + uVar2 * 4);
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


void __thiscall FUN_005580e0(void *this,int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 2;
  if (uVar3 != 0) {
    while (puVar1 = *(undefined1 **)(*(int *)((int)this + 0x2c) + uVar2 * 4),
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


void __thiscall FUN_00558150(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x28) = param_1;
  iVar1 = *(int *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x30) - iVar1 >> 2 != 0) {
    do {
      if (*(int *)((int)this + 0x28) == 0) {
        *(undefined4 *)(*(int *)(iVar1 + uVar2 * 4) + 0x1c) = 0;
        iVar1 = *(int *)((int)this + 0x2c);
      }
      iVar1 = *(int *)(iVar1 + uVar2 * 4);
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x1c);
      iVar1 = *(int *)(*(int *)((int)this + 0x2c) + uVar2 * 4);
      if ((*(int *)(iVar1 + 0x2c) != 0) && (*(int *)((int)this + 0x28) != 0)) {
        *(float *)(iVar1 + 0x28) =
             *(float *)(*(int *)((int)this + 0x28) + *(int *)(iVar1 + 0x2c) * 4) *
             *(float *)(iVar1 + 0x28);
      }
      if ((*(int *)(iVar1 + 0x34) != 0) && (*(float *)(iVar1 + 0x30) != 0.0)) {
        FMOD::ChannelControl::setVolume(*(float *)(iVar1 + 0x30));
      }
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((int)this + 0x2c);
    } while (uVar2 < (uint)(*(int *)((int)this + 0x30) - iVar1 >> 2));
  }
  return;
}


void __fastcall FUN_00558210(int param_1)

{
  char local_6;
  char local_5;
  
  if (*(bool **)(param_1 + 100) != (bool *)0x0) {
    FMOD::ChannelControl::getPaused(*(bool **)(param_1 + 100));
    local_6 = (char)((uint)param_1 >> 0x10);
    if (local_6 != '\0') {
      FMOD::ChannelControl::setPaused(SUB41(*(undefined4 *)(param_1 + 100),0));
      *(undefined1 *)(param_1 + 0x44) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  if (*(bool **)(param_1 + 100) != (bool *)0x0) {
    FMOD::ChannelControl::isPlaying(*(bool **)(param_1 + 100));
    if (*(int *)(param_1 + 100) != 0) {
      local_5 = (char)((uint)param_1 >> 0x18);
      if (local_5 != '\0') {
        return;
      }
      FMOD::ChannelControl::setPaused(SUB41(*(int *)(param_1 + 100),0));
      return;
    }
  }
  FUN_00558290(param_1);
  return;
}


void __fastcall FUN_00558290(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  FMOD_RESULT FVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  size_t _Size;
  undefined4 *in_stack_ffffff84;
  FMOD_CREATESOUNDEXINFO *pFVar11;
  Sound **ppSVar12;
  int *local_44;
  int *local_40;
  undefined4 local_38;
  int local_34;
  int *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7580;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)(param_1 + 0x4c);
  local_34 = param_1;
  if ((uint)(*(int *)(param_1 + 0x50) - *piVar1) < 4) {
    FUN_00591070(&DAT_005cdc70,"Shuffling music tracks...");
    FUN_0042af40(&local_44,(int *)(param_1 + 0x58));
    local_8 = 0;
    iVar3 = (int)local_40 - (int)local_44;
    piVar10 = local_40;
    while (iVar3 >> 2 != 0) {
      iVar8 = (int)piVar10 - (int)local_44;
      iVar3 = rand();
      piVar2 = local_44;
      piVar4 = *(int **)(param_1 + 0x50);
      local_30 = (int *)local_44[iVar3 % (iVar8 >> 2)];
      if (*(int **)(param_1 + 0x54) == piVar4) {
        FUN_00414080(piVar1,piVar4,&local_30);
      }
      else {
        *piVar4 = (int)local_30;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
      }
      piVar4 = FUN_00414000(&local_38,(int *)&local_30,piVar2,piVar10);
      piVar4 = (int *)*piVar4;
      if (piVar4 != piVar10) {
        piVar10 = piVar4;
        local_40 = piVar4;
      }
      iVar3 = (int)piVar10 - (int)piVar2;
    }
    local_8 = 0xffffffff;
    FUN_00412930((int *)&local_44);
  }
  iVar3 = local_34;
  if (*(int *)(local_34 + 100) != 0) {
    FMOD::ChannelControl::stop();
  }
  *(undefined1 *)(iVar3 + 0x44) = 1;
  uVar9 = *(int *)(param_1 + 0x50) - *piVar1 >> 2;
  if (uVar9 < 2) {
    iVar8 = *(int *)*piVar1;
  }
  else {
    iVar8 = rand();
    iVar8 = *(int *)(*piVar1 + (iVar8 % (int)uVar9) * 4);
  }
  *(int *)(iVar3 + 0x48) = iVar8;
  local_30 = *(int **)(iVar3 + 0x50);
  puVar5 = FUN_00414000(&local_38,(int *)(iVar3 + 0x48),(int *)*piVar1,local_30);
  piVar1 = (int *)*puVar5;
  if (piVar1 != local_30) {
    _Size = *(int *)(iVar3 + 0x50) - (int)local_30;
    memmove(piVar1,local_30,_Size);
    *(size_t *)(local_34 + 0x50) = _Size + (int)piVar1;
    iVar3 = local_34;
  }
  FUN_00591070(&DAT_005cdc70,"Playing new track: %s by %s");
  ppSVar12 = (Sound **)0x0;
  pFVar11 = (FMOD_CREATESOUNDEXINFO *)0x0;
  FUN_004024e0(&stack0xffffff84,*(undefined4 **)(iVar3 + 0x48));
  puVar5 = (undefined4 *)FUN_0058ec90(local_2c,in_stack_ffffff84);
  local_8 = 1;
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  FVar6 = FMOD::System::createSound(*(char **)(iVar3 + 0x6c),(uint)puVar5,pFVar11,ppSVar12);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pvVar7 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar7 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (FVar6 != 0) {
    FUN_00591070("ERROR","Failed to load sound %s");
  }
  FVar6 = FMOD::System::playSound
                    (*(Sound **)(iVar3 + 0x6c),*(ChannelGroup **)(iVar3 + 0x68),false,
                     (Channel **)0x0);
  if (FVar6 == 0) {
    FMOD::ChannelControl::setVolume(*(float *)(iVar3 + 100));
  }
  else {
    FUN_00591070("ERROR","failed to play music %s");
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00558540(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x30) - iVar2 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar2 + uVar3 * 4);
      if ((*(int *)(iVar2 + 0x34) != 0) && (fVar1 = *(float *)(iVar2 + 0x30), fVar1 != 0.0)) {
        FMOD::ChannelControl::setVolume(fVar1);
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(param_1 + 0x2c);
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x30) - iVar2 >> 2));
  }
  return;
}


void __fastcall FUN_005585b0(int param_1)

{
  FMOD::ChannelControl::isPlaying(*(bool **)(param_1 + 100));
  FMOD::ChannelControl::setVolume(*(float *)(param_1 + 100));
  return;
}


void __fastcall FUN_005585f0(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 ****ppppuVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 ****ppppuVar6;
  FMOD_RESULT FVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  float fVar12;
  float in_XMM1_Da;
  undefined *puVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 local_58;
  void *local_54;
  int *local_50;
  float local_4c;
  char local_45;
  void *local_44 [5];
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c75d0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = in_XMM1_Da;
  if (*(int *)(DAT_0065b5cc + 0xd0) == 0) goto LAB_005589fe;
  if (*(int *)(param_1 + 0x48) == 0) {
    puVar5 = (undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (0xf < *(uint *)(param_1 + 0x20)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)puVar5 = 0;
  }
  else {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    local_8 = 0;
    if ((*(char *)(param_1 + 0x44) == '\0') ||
       (*(char *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xe4) != '\0')) {
      puVar13 = &DAT_005e7dbc;
    }
    else {
      puVar13 = &DAT_005e6758;
    }
    FUN_00403640(local_2c,puVar13,2);
    iVar10 = *(int *)(param_1 + 0x48);
    pvVar9 = (void *)(iVar10 + 0x30);
    if (0xf < *(uint *)(iVar10 + 0x44)) {
      pvVar9 = *(void **)(iVar10 + 0x30);
    }
    FUN_00403640(local_2c,pvVar9,*(uint *)(iVar10 + 0x40));
    if ((*(char *)(param_1 + 0x44) == '\0') ||
       (*(char *)(*(int *)(DAT_0065b5cc + 0xd0) + 0xe4) != '\0')) {
      uVar15 = 3;
      pcVar14 = " - ";
    }
    else {
      uVar15 = 7;
      pcVar14 = " `7- `!";
    }
    FUN_00403640(local_2c,pcVar14,uVar15);
    iVar10 = *(int *)(param_1 + 0x48);
    pvVar9 = (void *)(iVar10 + 0x18);
    if (0xf < *(uint *)(iVar10 + 0x2c)) {
      pvVar9 = *(void **)(iVar10 + 0x18);
    }
    FUN_00403640(local_2c,pvVar9,*(uint *)(iVar10 + 0x28));
    if (*(int *)(*(int *)(param_1 + 0x48) + 0x40) + 3 + *(int *)(*(int *)(param_1 + 0x48) + 0x28) <
        0xe) {
      if ((undefined4 ****)(param_1 + 0xc) != local_2c) {
        ppppuVar3 = local_2c;
        if (0xf < local_18) {
          ppppuVar3 = (undefined4 ****)local_2c[0];
        }
        FUN_00402690((undefined4 ****)(param_1 + 0xc),ppppuVar3,local_1c);
      }
    }
    else {
      local_4c = *(float *)(param_1 + 8) - local_4c;
      *(float *)(param_1 + 8) = local_4c;
      if (local_4c <= 0.0) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *(undefined4 *)(param_1 + 8) = 0x3e800000;
        if (local_1c <= *(uint *)(param_1 + 4)) {
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0x41200000;
        }
      }
    }
    puVar4 = (undefined1 *)(param_1 + 0xc);
    local_50 = (int *)0x0;
    local_4c = 0.0;
    local_45 = '\0';
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (0xf < *(uint *)(param_1 + 0x20)) {
      puVar4 = *(undefined1 **)(param_1 + 0xc);
    }
    *puVar4 = 0;
    uVar11 = 0;
    ppppuVar3 = (undefined4 ****)local_2c[0];
    uVar15 = local_18;
    if (local_1c != 0) {
      do {
        if (local_45 == '\0') {
          ppppuVar6 = local_2c;
          if (0xf < uVar15) {
            ppppuVar6 = ppppuVar3;
          }
          if (*(char *)((int)ppppuVar6 + uVar11) == '`') {
            local_45 = '\x01';
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005ce018);
            local_8._0_1_ = 2;
            goto LAB_00558829;
          }
          piVar1 = (int *)((int)local_50 + 1);
          bVar2 = *(int *)(param_1 + 4) <= (int)local_50;
          local_50 = piVar1;
          if ((bVar2) && ((int)local_4c < 0xe)) {
            local_4c = (float)((int)local_4c + 1);
            puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005ce018);
            local_8._0_1_ = 3;
            goto LAB_00558829;
          }
        }
        else {
          local_45 = '\0';
          puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,&DAT_005ce018);
          local_8._0_1_ = 1;
LAB_00558829:
          puVar8 = puVar5;
          if (0xf < (uint)puVar5[5]) {
            puVar8 = (undefined4 *)*puVar5;
          }
          FUN_00403640((void *)(param_1 + 0xc),puVar8,puVar5[4]);
          local_8 = (uint)local_8._1_3_ << 8;
          ppppuVar3 = (undefined4 ****)local_2c[0];
          uVar15 = local_18;
          if (0xf < local_30) {
            pvVar9 = local_44[0];
            if ((0xfff < local_30 + 1) &&
               (pvVar9 = *(void **)((int)local_44[0] + -4),
               0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9)))) goto LAB_005588aa;
            FUN_005adb3f(pvVar9);
            ppppuVar3 = (undefined4 ****)local_2c[0];
            uVar15 = local_18;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < local_1c);
    }
    local_8 = -1;
    if (0xf < uVar15) {
      ppppuVar6 = ppppuVar3;
      if ((0xfff < uVar15 + 1) &&
         (ppppuVar6 = (undefined4 ****)ppppuVar3[-1],
         0x1f < (uint)((int)ppppuVar3 + (-4 - (int)ppppuVar6)))) {
LAB_005588aa:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppuVar6);
    }
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    if (*(int *)(param_1 + 0x48) != 0) {
      if ((*(bool **)(param_1 + 100) == (bool *)0x0) ||
         (FMOD::ChannelControl::isPlaying(*(bool **)(param_1 + 100)), local_45 == '\0')) {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      if (*(int *)(param_1 + 0x48) != 0) goto LAB_00558909;
    }
    FUN_00558290(param_1);
  }
LAB_00558909:
  uVar15 = 0;
  iVar10 = *(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x30) - iVar10 >> 2 != 0) {
    do {
      iVar10 = *(int *)(uVar15 * 4 + iVar10);
      if ((*(char *)(iVar10 + 0x20) == '\0') &&
         ((FVar7 = FMOD::ChannelControl::isPlaying(*(bool **)(iVar10 + 0x30)), FVar7 != 0 ||
          (local_45 == '\0')))) {
        puVar5 = *(undefined4 **)(param_1 + 0x3c);
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x2c) + uVar15 * 4);
        if (*(undefined4 **)(param_1 + 0x40) == puVar5) {
          FUN_00414080((void *)(param_1 + 0x38),puVar5,puVar8);
        }
        else {
          *puVar5 = *puVar8;
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 4;
        }
      }
      uVar15 = uVar15 + 1;
      iVar10 = *(int *)(param_1 + 0x2c);
    } while (uVar15 < (uint)(*(int *)(param_1 + 0x30) - iVar10 >> 2));
  }
  iVar10 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x3c) - iVar10 >> 2 != 0) {
    local_4c = 0.0;
    do {
      fVar12 = local_4c;
      local_54 = *(void **)(iVar10 + (int)local_4c * 4);
      local_50 = *(int **)(param_1 + 0x30);
      puVar5 = FUN_00414000(&local_58,(int *)(iVar10 + (int)local_4c * 4),*(int **)(param_1 + 0x2c),
                            local_50);
      piVar1 = (int *)*puVar5;
      if (piVar1 != local_50) {
        _Size = *(int *)(param_1 + 0x30) - (int)local_50;
        memmove(piVar1,local_50,_Size);
        *(size_t *)(param_1 + 0x30) = _Size + (int)piVar1;
        fVar12 = local_4c;
      }
      if (local_54 != (void *)0x0) {
        FUN_00557ed0(local_54);
      }
      local_4c = (float)((int)fVar12 + 1);
      iVar10 = *(int *)(param_1 + 0x38);
    } while ((uint)local_4c < (uint)(*(int *)(param_1 + 0x3c) - iVar10 >> 2));
    *(int *)(param_1 + 0x3c) = iVar10;
  }
  FMOD::System::update();
LAB_005589fe:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00558a20(void *this,int param_1)

{
  int iVar1;
  
  if (DAT_0065506a != '\0') {
    iVar1 = rand();
    iVar1 = iVar1 % 3 + 1;
    if (param_1 == 0) {
      FUN_00557af0(this,0,0xd,iVar1,0,'\x01',1.0);
      return;
    }
    FUN_00557fb0(this,param_1,0xd,iVar1);
  }
  return;
}


int __thiscall FUN_00558a80(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x18) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x1c) == param_1) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  FUN_00591070("ERROR","Unknown room %d in structure %s");
  return 0;
}


void FUN_00558ae0(undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  void *pvVar6;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005c7659;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`3  Sync: `!%s`3@`!%s\n");
  local_8 = 1;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    pvVar6 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar6 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3    on: `!%s\n");
  local_8 = 2;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`3        `!%s\n");
  local_8 = 3;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    pvVar6 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar6 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3        `!%s\n");
  local_8 = 4;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  FUN_00403640(param_1,&DAT_005e75f8,1);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3Credit: `%c%d`$c\n");
  local_8 = 5;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`3Acc No: `!%d\n");
  local_8 = 6;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 2) {
    iVar2 = FUN_004127d0();
    pbVar4 = (byte *)(iVar2 + 0x14);
    if (0xf < *(uint *)(iVar2 + 0x28)) {
      pbVar4 = *(byte **)(iVar2 + 0x14);
    }
    uVar3 = FUN_004031f0(pbVar4,*(uint *)(iVar2 + 0x24),(byte *)&PTR_005ce008,0);
    if ((char)uVar3 == '\0') {
      FUN_004127d0();
      puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"\n`!Last save was aboard `%%%s");
      local_8 = 7;
      puVar5 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar5 = (undefined4 *)*puVar1;
      }
      FUN_00403640(param_1,puVar5,puVar1[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_30) {
        pvVar6 = local_44[0];
        if ((0xfff < local_30 + 1) &&
           (pvVar6 = *(void **)((int)local_44[0] + -4),
           0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    }
  }
  if (*(char *)(DAT_0065b444 + 0x72) == '\0') {
    if ((*(char *)(DAT_0065b444 + 0x71) != '\0') &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 4)) {
      puVar1 = (undefined4 *)
               FUN_00591e00((undefined1 *)local_2c,"\n\n`!Pirates remaining: `%c%d`3/`!%d\n");
      local_8 = 8;
      puVar5 = puVar1;
      if (0xf < (uint)puVar1[5]) {
        puVar5 = (undefined4 *)*puVar1;
      }
      FUN_00403640(param_1,puVar5,puVar1[4]);
      if (0xf < local_18) {
        pvVar6 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar6 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
    }
  }
  else {
    FUN_00403640(param_1,
                 "\n\n*Hit \'`!~`%\' (`!tilde`%) to switch between tabs*\n\n*`!<`% and `!>`% = alter game speed*\n*`!TAB`% = toggle your PDA*\n*`!Space`% = find ship (nav map)*\n*`!Shift+click`% = multi waypoints*"
                 ,0xba);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_00559070(undefined1 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *in_stack_ffffff8c;
  char *pcVar5;
  uint uVar6;
  int local_48;
  int local_44;
  undefined4 local_3c;
  uint local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005c7701;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  local_3c = 1;
  iVar1 = *(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2;
  if (iVar1 == 0) {
    FUN_00403640(param_1,"`7** no current trade contracts",0x1f);
  }
  else {
    local_30 = 0;
    if (iVar1 != 0) {
      do {
        uVar6 = local_30;
        FUN_00403640(param_1,"`!Contract: \n",0xd);
        FUN_00483120((void *)**(undefined4 **)(DAT_0065b5cc + 0x13c),&local_48);
        local_8 = 1;
        local_34 = 0;
        iVar1 = local_44 - local_48 >> 0x1f;
        if ((local_44 - local_48) / 0x18 + iVar1 != iVar1) {
          do {
            puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_00623b00);
            local_8._0_1_ = 2;
            puVar4 = puVar3;
            if (0xf < (uint)puVar3[5]) {
              puVar4 = (undefined4 *)*puVar3;
            }
            FUN_00403640(param_1,puVar4,puVar3[4]);
            local_8 = CONCAT31(local_8._1_3_,1);
            if (0xf < local_18) {
              pvVar2 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pvVar2 = *(void **)((int)local_2c[0] + -4),
                 0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) goto LAB_0055968f;
              FUN_005adb3f(pvVar2);
            }
            local_34 = local_34 + 1;
            uVar6 = local_30;
          } while (local_34 < (uint)((local_44 - local_48) / 0x18));
        }
        local_8 = local_8 & 0xffffff00;
        FUN_004025a0(&local_48);
        local_30 = uVar6 + 1;
      } while (local_30 <
               (uint)(*(int *)(DAT_0065b5cc + 0x140) - *(int *)(DAT_0065b5cc + 0x13c) >> 2));
    }
  }
  iVar1 = *(int *)(DAT_0065b5cc + 0x134) - *(int *)(DAT_0065b5cc + 0x130) >> 2;
  if ((iVar1 != 0) && (local_30 = 0, iVar1 != 0)) {
    do {
      iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0x130) + local_30 * 4);
      FUN_004024e0(&stack0xffffff8c,(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x24));
      local_34 = FUN_004a80d0(in_stack_ffffff8c);
      puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
      if (puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
        do {
          if (*(int *)*puVar4 == *(int *)(*(int *)(iVar1 + 0x4c) + 0x18)) break;
          puVar4 = puVar4 + 1;
        } while (puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40));
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Target: `@%s\n");
      local_8 = 3;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(param_1,puVar4,puVar3[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar2 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar2 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) goto LAB_0055968f;
        FUN_005adb3f(pvVar2);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Ship  : `$%s\n");
      local_8 = 4;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(param_1,puVar4,puVar3[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar2 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar2 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) goto LAB_0055968f;
        FUN_005adb3f(pvVar2);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Rego  : `!%s\n");
      local_8 = 5;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(param_1,puVar4,puVar3[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar2 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar2 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) goto LAB_0055968f;
        FUN_005adb3f(pvVar2);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Class : `7%s\n");
      local_8 = 6;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(param_1,puVar4,puVar3[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar2 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar2 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) goto LAB_0055968f;
        FUN_005adb3f(pvVar2);
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Locat.: `7%s\n");
      local_8 = 7;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(param_1,puVar4,puVar3[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar2 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar2 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) goto LAB_0055968f;
        FUN_005adb3f(pvVar2);
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x1c);
      if (iVar1 == 0) {
        uVar6 = 0x14;
        pcVar5 = "`%Threat: `0Minimal\n";
LAB_005594f8:
        FUN_00403640(param_1,pcVar5,uVar6);
      }
      else {
        if (iVar1 == 1) {
          uVar6 = 0x15;
          pcVar5 = "`%Threat: `$Possible\n";
          goto LAB_005594f8;
        }
        if (iVar1 == 2) {
          uVar6 = 0x16;
          pcVar5 = "`%Threat: `@Dangerous\n";
          goto LAB_005594f8;
        }
      }
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Reward: `$%dc\n");
      local_8 = 8;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(param_1,puVar4,puVar3[4]);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pvVar2 = local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (pvVar2 = *(void **)((int)local_2c[0] + -4),
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) goto LAB_0055968f;
        FUN_005adb3f(pvVar2);
      }
      local_1c = 0;
      local_30 = local_30 + 1;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    } while (local_30 < (uint)(*(int *)(DAT_0065b5cc + 0x134) - *(int *)(DAT_0065b5cc + 0x130) >> 2)
            );
  }
  if (*(int *)(DAT_0065b5cc + 0x128) != 0) {
    FUN_004024e0(&stack0xffffff8c,*(undefined4 **)(*(int *)(DAT_0065b5cc + 0x128) + 0xc));
    FUN_004a7100(in_stack_ffffff8c);
    FUN_004024e0(&stack0xffffff8c,
                 (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0x128) + 0xc) + 0x18));
    FUN_004a7100(in_stack_ffffff8c);
    FUN_004024e0(&stack0xffffff8c,
                 (undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0x128) + 0xc) + 0x18));
    local_30 = FUN_004a6f80(in_stack_ffffff8c);
    FUN_00403640(param_1,&DAT_005e75f8,1);
    FUN_00403640(param_1,"`!- Passenger -\n",0x10);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Name  : `7%s\n");
    local_8 = 9;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar2 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar2 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
LAB_0055968f:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Origin: `7%s\n");
    local_8 = 10;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar2 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar2 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Dest. : `7%s\n");
    local_8 = 0xb;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar2 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar2 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"        `7(%s)\n");
    local_8 = 0xc;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pvVar2 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar2 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,"`%%Fee   : `$%dc\n");
    local_8 = 0xd;
    puVar4 = puVar3;
    if (0xf < (uint)puVar3[5]) {
      puVar4 = (undefined4 *)*puVar3;
    }
    FUN_00403640(param_1,puVar4,puVar3[4]);
    if (0xf < local_18) {
      pvVar2 = local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (pvVar2 = *(void **)((int)local_2c[0] + -4),
         0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar2);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005598a0(void *this,undefined4 *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  void **ppvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  Layer *pLVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte *in_stack_ffffff20;
  void *in_stack_ffffff38;
  char *pcVar17;
  void *pvVar18;
  uint local_84;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005c77c5;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar8 = *(int *)((int)this + 0x20);
  bVar3 = false;
  if (iVar8 == 0) {
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,"`3Talking to: `8nobody\n`3Language  : `8n/a",0x2a);
    goto LAB_0055a181;
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_8 = 2;
  iVar14 = *(int *)(iVar8 + 0x8c);
  if (iVar14 == 0) {
    pbVar12 = (byte *)(iVar8 + 4);
    if (0xf < *(uint *)(iVar8 + 0x18)) {
      pbVar12 = *(byte **)pbVar12;
    }
    uVar13 = FUN_004031f0(pbVar12,*(uint *)(iVar8 + 0x14),(byte *)"passenger",9);
    if ((char)uVar13 != '\0') {
      iVar8 = *(int *)(DAT_0065b5cc + 0x128);
      ppvVar5 = (void **)(iVar8 + 0x10);
      if (local_74 != ppvVar5) {
        if (0xf < *(uint *)(iVar8 + 0x24)) {
          ppvVar5 = *ppvVar5;
        }
        FUN_00402690(local_74,ppvVar5,*(uint *)(iVar8 + 0x20));
      }
      ppvVar5 = (void **)(*(int *)(DAT_0065b5cc + 0x128) + 0x70);
      goto LAB_00559984;
    }
    FUN_00402690(local_74,"unknown",7);
    pvVar18 = (void *)0x7;
    pcVar17 = "english";
LAB_00559a15:
    FUN_00402690(local_5c,pcVar17,(uint)pvVar18);
  }
  else {
    ppvVar5 = (void **)(iVar14 + 0xc);
    if (local_74 != ppvVar5) {
      if (0xf < *(uint *)(iVar14 + 0x20)) {
        ppvVar5 = *ppvVar5;
      }
      FUN_00402690(local_74,ppvVar5,*(uint *)(iVar14 + 0x1c));
      iVar8 = *(int *)((int)this + 0x20);
    }
    ppvVar5 = (void **)(*(int *)(iVar8 + 0x8c) + 0x24);
LAB_00559984:
    if (local_5c != ppvVar5) {
      pcVar17 = (char *)ppvVar5;
      if ((void *)0xf < ppvVar5[5]) {
        pcVar17 = *ppvVar5;
      }
      pvVar18 = ppvVar5[4];
      goto LAB_00559a15;
    }
  }
  iVar8 = *(int *)(*(int *)((int)this + 0x20) + 0x8c);
  if (*(char *)(iVar8 + 0x44) == '\0') {
LAB_00559a90:
    bVar2 = false;
  }
  else {
    FUN_004024e0(local_44,(undefined4 *)(iVar8 + 0xf8));
    local_8 = CONCAT31(local_8._1_3_,3);
    bVar3 = true;
    FUN_00591e00(&stack0xffffff38,"knows_%s");
    local_8 = 4;
    puVar6 = FUN_00412df0();
    local_8 = CONCAT31(local_8._1_3_,3);
    bVar4 = FUN_004a1150(puVar6,in_stack_ffffff38);
    bVar2 = true;
    if (bVar4 != 0) goto LAB_00559a90;
  }
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  if ((bVar3) && (0xf < local_30)) {
    pvVar18 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar18 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18)))) {
LAB_00559ace:
      local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar18);
  }
  if (bVar2) {
    FUN_00403640(&local_2c,"`3Talking to: `7unknown\n",0x18);
  }
  else {
    puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`3Talking to: `!%s\n");
    local_8._0_1_ = 5;
    puVar6 = puVar7;
    if (0xf < (uint)puVar7[5]) {
      puVar6 = (undefined4 *)*puVar7;
    }
    FUN_00403640(&local_2c,puVar6,puVar7[4]);
    local_8._0_1_ = 2;
    if (0xf < local_30) {
      pvVar18 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar18 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar18);
    }
  }
  puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`3Language  : `#%s`%%\n");
  local_8._0_1_ = 6;
  puVar6 = puVar7;
  if (0xf < (uint)puVar7[5]) {
    puVar6 = (undefined4 *)*puVar7;
  }
  FUN_00403640(&local_2c,puVar6,puVar7[4]);
  local_8._0_1_ = 2;
  if (0xf < local_30) {
    pvVar18 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar18 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar18);
  }
  FUN_00403640(&local_2c,&DAT_00623d8c,3);
  uVar13 = 0;
  puVar6 = *(undefined4 **)(*(int *)((int)this + 0x20) + 0xa0);
  uVar16 = *(int *)(*(int *)((int)this + 0x20) + 0xa4) - (int)puVar6 >> 2;
  if (uVar16 != 0) {
    puVar7 = puVar6;
    do {
      if (*(int *)*puVar7 == *(int *)((int)this + 0x1c)) {
        iVar8 = puVar6[uVar13];
        goto LAB_00559c29;
      }
      uVar13 = uVar13 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar13 < uVar16);
  }
  iVar8 = 0;
LAB_00559c29:
  iVar14 = 0;
  local_84 = 0;
  while( true ) {
    uVar13 = *(uint *)((int)this + 4);
    uVar16 = uVar13;
    if (uVar13 == 0xffffffff) {
      uVar16 = (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34)) / 0x18;
    }
    if (uVar16 <= local_84) break;
    iVar15 = *(int *)((int)this + 0x34);
    pbVar12 = (byte *)(iVar14 + iVar15);
    pbVar9 = pbVar12;
    if (0xf < *(uint *)(iVar14 + 0x14 + iVar15)) {
      pbVar9 = *(byte **)pbVar12;
    }
    uVar13 = *(uint *)(pbVar12 + 0x10);
    uVar16 = FUN_004031f0(pbVar9,uVar13,&DAT_005e75f8,1);
    if ((char)uVar16 == '\0') {
      pbVar9 = pbVar12;
      if (0xf < *(uint *)(pbVar12 + 0x14)) {
        pbVar9 = *(byte **)pbVar12;
      }
      if (*pbVar9 == 0x23) {
        pbVar9 = *(byte **)((int)this + 0x44);
        pbVar10 = FUN_004143f0(*(byte **)((int)this + 0x40),pbVar9,pbVar12);
        if (pbVar10 != pbVar9) goto LAB_00559cb4;
        if (*(int *)(pbVar12 + 0x10) == 0) {
                    // WARNING: Subroutine does not return
          FUN_004036c0();
        }
        uVar16 = *(int *)(pbVar12 + 0x10) - 1;
        if (uVar16 < uVar13) {
          uVar13 = uVar16;
        }
        if (0xf < *(uint *)(pbVar12 + 0x14)) {
          pbVar12 = *(byte **)pbVar12;
        }
        FUN_00402690(&stack0xffffff38,pbVar12 + 1,uVar13);
        local_8._0_1_ = 7;
        FUN_004024e0(&stack0xffffff20,
                     (undefined4 *)(*(int *)(*(int *)((int)this + 0x20) + 0x8c) + 0xf8));
        local_8._0_1_ = 8;
        if (DAT_0065c25c == (Layer *)0x0) {
          pLVar11 = (Layer *)FUN_005adb0f(0x418);
          local_8._0_1_ = 9;
          DAT_0065c25c = FUN_0052b7a0(pLVar11);
        }
        local_8._0_1_ = 2;
        FUN_00532350(DAT_0065c25c,in_stack_ffffff20);
        puVar6 = (undefined4 *)(*(int *)((int)this + 0x34) + iVar14);
        piVar1 = *(int **)((int)this + 0x44);
        if (*(int **)((int)this + 0x48) == piVar1) {
          FUN_00403840((void *)((int)this + 0x40),piVar1,puVar6);
          local_84 = local_84 + 1;
          iVar14 = iVar14 + 0x18;
        }
        else {
          FUN_004024e0(piVar1,puVar6);
          *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 0x18;
          local_84 = local_84 + 1;
          iVar14 = iVar14 + 0x18;
        }
      }
      else {
        if (0 < (int)local_84) {
          FUN_00403640(&local_2c,&DAT_005e7468,1);
          iVar15 = *(int *)((int)this + 0x34);
        }
        puVar7 = (undefined4 *)(iVar14 + iVar15);
        puVar6 = puVar7;
        if (0xf < (uint)puVar7[5]) {
          puVar6 = (undefined4 *)*puVar7;
        }
        FUN_00403640(&local_2c,puVar6,puVar7[4]);
        local_84 = local_84 + 1;
        iVar14 = iVar14 + 0x18;
      }
    }
    else {
      FUN_00403640(&local_2c,&DAT_005e75f8,1);
LAB_00559cb4:
      local_84 = local_84 + 1;
      iVar14 = iVar14 + 0x18;
    }
  }
  if ((uVar13 != 0xffffffff) &&
     (local_84 < (uint)((*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34)) / 0x18))) {
    if (0.6 < *(float *)((int)this + 0xc)) {
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`8%c`3");
      local_8._0_1_ = 0xb;
      uVar13 = puVar6[5];
    }
    else {
      puVar6 = (undefined4 *)FUN_00591e00((undefined1 *)local_44,"`%%%c`3");
      local_8._0_1_ = 10;
      uVar13 = puVar6[5];
    }
    puVar7 = puVar6;
    if (0xf < uVar13) {
      puVar7 = (undefined4 *)*puVar6;
    }
    FUN_00403640(&local_2c,puVar7,puVar6[4]);
    local_8._0_1_ = 2;
    if (0xf < local_30) {
      pvVar18 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar18 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18)))) goto LAB_00559ed5;
      FUN_005adb3f(pvVar18);
    }
  }
  FUN_00403640(&local_2c,&DAT_005e310c,2);
  if (*(int *)((int)this + 4) == -1) {
    piVar1 = (int *)((int)this + 0x28);
    iVar14 = *piVar1;
    uVar13 = 0;
    *(int *)((int)this + 0x2c) = iVar14;
    iVar15 = *(int *)(iVar8 + 0x60);
    if (*(int *)(iVar8 + 100) - iVar15 >> 2 != 0) {
      do {
        uVar16 = FUN_0049fdd0(*(void **)(uVar13 * 4 + iVar15),
                              *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8));
        if ((char)uVar16 != '\0') {
          puVar7 = (undefined4 *)(*(int *)(iVar8 + 0x60) + uVar13 * 4);
          puVar6 = *(undefined4 **)((int)this + 0x2c);
          if (*(undefined4 **)((int)this + 0x30) == puVar6) {
            FUN_00414080(piVar1,puVar6,puVar7);
          }
          else {
            *puVar6 = *puVar7;
            *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 4;
          }
        }
        uVar13 = uVar13 + 1;
        iVar15 = *(int *)(iVar8 + 0x60);
      } while (uVar13 < (uint)(*(int *)(iVar8 + 100) - iVar15 >> 2));
      iVar14 = *(int *)((int)this + 0x2c);
    }
    uVar13 = 0;
    if (iVar14 - *piVar1 >> 2 != 0) {
      do {
        if (0 < (int)uVar13) {
          FUN_00403640(&local_2c,&DAT_005e75f8,1);
        }
        puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_44," `3[`!%c`3] `%c%s");
        local_8._0_1_ = 0xc;
        puVar6 = puVar7;
        if (0xf < (uint)puVar7[5]) {
          puVar6 = (undefined4 *)*puVar7;
        }
        FUN_00403640(&local_2c,puVar6,puVar7[4]);
        local_8._0_1_ = 2;
        if (0xf < local_30) {
          pvVar18 = local_44[0];
          if ((0xfff < local_30 + 1) &&
             (pvVar18 = *(void **)((int)local_44[0] + -4),
             0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar18)))) goto LAB_00559ace;
          FUN_005adb3f(pvVar18);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (uint)(*(int *)((int)this + 0x2c) - *piVar1 >> 2));
    }
  }
  pvVar18 = local_2c;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = pvVar18;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  param_1[3] = uStack_20;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_18,local_1c);
  local_1c = 0;
  uStack_18 = 0xf;
  if (0xf < local_48) {
    pvVar18 = local_5c[0];
    if ((0xfff < local_48 + 1) &&
       (pvVar18 = *(void **)((int)local_5c[0] + -4),
       0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar18)))) goto LAB_00559ed5;
    FUN_005adb3f(pvVar18);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pvVar18 = local_74[0];
    if ((0xfff < local_60 + 1) &&
       (pvVar18 = *(void **)((int)local_74[0] + -4),
       0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar18)))) goto LAB_00559ed5;
    FUN_005adb3f(pvVar18);
  }
  local_64 = 0;
  local_60 = 0xf;
  local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
  if (0xf < uStack_18) {
    pvVar18 = local_2c;
    if ((0xfff < uStack_18 + 1) &&
       (pvVar18 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar18))
       )) {
LAB_00559ed5:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar18);
  }
LAB_0055a181:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0055a1b0(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  RotateTo *pRVar4;
  int *piVar5;
  void *this;
  int extraout_ECX;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *in_stack_ffffffc8;
  float fVar9;
  int iVar10;
  int local_10;
  int local_c;
  
  if (*(int *)((int)param_1 + 0x20) != 0) {
    local_10 = *(int *)((int)param_1 + 0x28);
    if ((*(int *)((int)param_1 + 0x2c) - local_10 & 0xfffffffcU) == 0) {
      FUN_00591070("ERROR","No options for current element.");
      bVar1 = cc_assert_script_compatible("No options for current element.");
      if (!bVar1) {
        cocos2d::log("Assert failed: %s");
        return;
      }
    }
    else {
      local_c = *(int *)((int)param_1 + 0x24);
      iVar2 = *(int *)(local_10 + local_c * 4);
      if ((iVar2 != 0) && (uVar8 = 0, *(int *)(iVar2 + 0x5c) - *(int *)(iVar2 + 0x58) >> 2 != 0)) {
        do {
          FUN_0055a870(*(int **)(*(int *)(iVar2 + 0x58) + uVar8 * 4),local_10,
                       *(float **)(DAT_0065b5cc + 0x124));
          uVar8 = uVar8 + 1;
          local_10 = extraout_ECX;
        } while (uVar8 < (uint)(*(int *)(iVar2 + 0x5c) - *(int *)(iVar2 + 0x58) >> 2));
        local_c = *(int *)((int)param_1 + 0x24);
        local_10 = *(int *)((int)param_1 + 0x28);
      }
      iVar2 = *(int *)(local_10 + local_c * 4);
      if (*(int *)(iVar2 + 8) == -1) {
        iVar2 = FUN_004023e0();
        if ((*(int *)(iVar2 + 0x34c) != 0) &&
           (iVar2 = FUN_004023e0(), *(int *)(*(int *)(iVar2 + 0x34c) + 0x100) != 0)) {
          iVar3 = FUN_004023e0();
          fVar9 = 4.0;
          iVar2 = **(int **)(*(int *)(iVar3 + 0x34c) + 0x3dc);
          pRVar4 = cocos2d::RotateTo::create(1.4,(Vec3 *)(*(int *)(iVar3 + 0x34c) + 0x40));
          cocos2d::EaseInOut::create((ActionInterval *)pRVar4,fVar9);
          (**(code **)(iVar2 + 0x1d0))();
        }
        iVar2 = FUN_004023e0();
        *(undefined4 *)(iVar2 + 0x2a4) = 8;
        iVar2 = FUN_004023e0();
        *(undefined2 *)(iVar2 + 0x2a0) = 0x101;
        *(undefined4 *)(iVar2 + 0x29c) = 1;
        *(undefined4 *)(iVar2 + 0x2ac) = 0x3f19999a;
        *(undefined4 *)(iVar2 + 0x2a8) = 0x3f19999a;
      }
      else if (*(int *)(iVar2 + 8) == -2) {
        FUN_00591070(&DAT_005cdc70,"Scenario done.");
        iVar2 = FUN_004023e0();
        FUN_0052e640(iVar2);
      }
      else {
        pbVar6 = (byte *)(iVar2 + 0x24);
        if (0xf < *(uint *)(iVar2 + 0x38)) {
          pbVar6 = *(byte **)(iVar2 + 0x24);
        }
        uVar8 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x34),(byte *)&PTR_005ce008,0);
        if ((char)uVar8 == '\0') {
          FUN_004024e0(&stack0xffffffc8,(undefined4 *)(iVar2 + 0x24));
          iVar2 = FUN_00535d50(in_stack_ffffffc8);
          *(int *)(*(int *)((int)param_1 + 0x10) + 0x58) = iVar2;
          local_c = *(int *)((int)param_1 + 0x24);
          local_10 = *(int *)((int)param_1 + 0x28);
        }
        iVar2 = *(int *)(local_10 + local_c * 4);
        pbVar6 = (byte *)(iVar2 + 0xc);
        if (0xf < *(uint *)(iVar2 + 0x20)) {
          pbVar6 = *(byte **)(iVar2 + 0xc);
        }
        uVar8 = FUN_004031f0(pbVar6,*(uint *)(iVar2 + 0x1c),(byte *)&PTR_005ce008,0);
        if ((char)uVar8 == '\0') {
          FUN_004024e0(&stack0xffffffc8,(undefined4 *)(*(int *)(local_10 + local_c * 4) + 0xc));
          iVar2 = FUN_00535cc0(in_stack_ffffffc8);
          *(int *)(*(int *)((int)param_1 + 0x10) + 0x54) = iVar2;
          local_c = *(int *)((int)param_1 + 0x24);
          local_10 = *(int *)((int)param_1 + 0x28);
        }
        FUN_0055b0c0(param_1,*(int *)(*(int *)(local_10 + local_c * 4) + 8));
        *(undefined4 *)((int)param_1 + 0x24) = 0;
        FUN_00591070(&DAT_005cdc70,"Going to element %d");
        uVar8 = 0;
        iVar2 = *(int *)(*(int *)((int)param_1 + 0x20) + 0xa0);
        uVar7 = *(int *)(*(int *)((int)param_1 + 0x20) + 0xa4) - iVar2 >> 2;
        if (uVar7 != 0) {
          do {
            if (**(int **)(iVar2 + uVar8 * 4) == *(int *)((int)param_1 + 0x1c)) break;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar7);
        }
        FUN_00591070(&DAT_005cdc70,"Element text = %s");
        FUN_00412870();
        piVar5 = FUN_004a0060(*(void **)((int)param_1 + 0x20),*(int *)((int)param_1 + 0x1c));
        FUN_00439320((int)piVar5);
      }
      iVar10 = -1;
      iVar3 = 8;
      iVar2 = *(int *)(DAT_0065b5cc + 0xd0);
      this = (void *)FUN_00402f60();
      FUN_00557fb0(this,iVar2,iVar3,iVar10);
    }
  }
  return;
}


void __fastcall FUN_0055a4a0(int param_1)

{
  undefined4 ***pppuVar1;
  int iVar2;
  uint uVar3;
  undefined4 ****ppppuVar4;
  uint uVar5;
  float fVar6;
  float in_XMM1_Da;
  undefined4 ***local_20 [4];
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x20) == 0) goto LAB_0055a6f3;
  fVar6 = in_XMM1_Da + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = fVar6;
  if (1.0 <= fVar6) {
    *(float *)(param_1 + 0xc) = fVar6 - 1.0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 10) != '\0')) {
    *(undefined1 *)(iVar2 + 10) = 0;
  }
  if (*(int *)(param_1 + 4) < 0) goto LAB_0055a6f3;
  fVar6 = *(float *)(param_1 + 8);
  if (fVar6 == -1.0) {
    FUN_004024e0(local_20,(undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 4) * 0x18));
    uVar5 = local_c;
    pppuVar1 = local_20[0];
    ppppuVar4 = local_20;
    if (0xf < local_c) {
      ppppuVar4 = (undefined4 ****)local_20[0];
    }
    if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '?') {
LAB_0055a588:
      uVar3 = rand();
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      fVar6 = (float)(int)uVar3 + 0.5;
    }
    else {
      ppppuVar4 = local_20;
      if (0xf < local_c) {
        ppppuVar4 = (undefined4 ****)local_20[0];
      }
      if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '.') goto LAB_0055a588;
      ppppuVar4 = local_20;
      if (0xf < local_c) {
        ppppuVar4 = (undefined4 ****)local_20[0];
      }
      if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '!') goto LAB_0055a588;
      iVar2 = rand();
      fVar6 = (float)(iVar2 % 5) / 50.0;
    }
    *(float *)(param_1 + 8) = fVar6;
    if (0xf < uVar5) {
      ppppuVar4 = (undefined4 ****)pppuVar1;
      if (0xfff < uVar5 + 1) {
        ppppuVar4 = (undefined4 ****)pppuVar1[-1];
        if (0x1f < (uint)((int)pppuVar1 + (-4 - (int)ppppuVar4))) goto LAB_0055a6d2;
      }
      FUN_005adb3f(ppppuVar4);
      fVar6 = *(float *)(param_1 + 8);
    }
  }
  *(float *)(param_1 + 8) = fVar6 - in_XMM1_Da;
  if (fVar6 - in_XMM1_Da < 0.0) {
    FUN_004024e0(local_20,(undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 4) * 0x18));
    ppppuVar4 = local_20;
    if (0xf < local_c) {
      ppppuVar4 = (undefined4 ****)local_20[0];
    }
    if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '?') {
LAB_0055a660:
      uVar5 = rand();
      uVar5 = uVar5 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      fVar6 = (float)(int)uVar5 + 0.5;
    }
    else {
      ppppuVar4 = local_20;
      if (0xf < local_c) {
        ppppuVar4 = (undefined4 ****)local_20[0];
      }
      if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '.') goto LAB_0055a660;
      ppppuVar4 = local_20;
      if (0xf < local_c) {
        ppppuVar4 = (undefined4 ****)local_20[0];
      }
      if (*(char *)(local_10 + -1 + (int)ppppuVar4) == '!') goto LAB_0055a660;
      iVar2 = rand();
      fVar6 = (float)(iVar2 % 5) / 50.0;
    }
    *(float *)(param_1 + 8) = fVar6;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if ((uint)((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34)) / 0x18) <=
        *(uint *)(param_1 + 4)) {
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      *(undefined4 *)(param_1 + 8) = 0xbf800000;
    }
    if (0xf < local_c) {
      ppppuVar4 = (undefined4 ****)local_20[0];
      if (0xfff < local_c + 1) {
        ppppuVar4 = (undefined4 ****)local_20[0][-1];
        if (0x1f < (uint)((int)local_20[0] + (-4 - (int)ppppuVar4))) {
LAB_0055a6d2:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(ppppuVar4);
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 10) == '\0')) {
    *(undefined1 *)(iVar2 + 10) = 1;
  }
LAB_0055a6f3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


uint __thiscall FUN_0055a710(void *this,undefined4 param_1)

{
  int *piVar1;
  uint in_EAX;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)((int)this + 0x20) != 0) && (*(int *)((int)this + 4) == -1)) {
    in_EAX = 0;
    switch(param_1) {
    case 10:
    case 0x23:
    case 0xa4:
      uVar3 = FUN_0055a1b0(this);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    case 0x1c:
    case 0x25:
      piVar1 = (int *)((int)this + 0x24);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        *(int *)((int)this + 0x24) =
             (*(int *)((int)this + 0x2c) - *(int *)((int)this + 0x28) >> 2) + -1;
      }
      iVar6 = -1;
      iVar5 = 8;
      iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
      pvVar2 = (void *)FUN_00402f60();
      uVar3 = FUN_00557fb0(pvVar2,iVar4,iVar5,iVar6);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    case 0x1d:
    case 0x2b:
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
      if ((uint)(*(int *)((int)this + 0x2c) - *(int *)((int)this + 0x28) >> 2) <=
          *(uint *)((int)this + 0x24)) {
        *(undefined4 *)((int)this + 0x24) = 0;
      }
      iVar6 = -1;
      iVar5 = 8;
      iVar4 = *(int *)(DAT_0065b5cc + 0xd0);
      pvVar2 = (void *)FUN_00402f60();
      uVar3 = FUN_00557fb0(pvVar2,iVar4,iVar5,iVar6);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


void FUN_0055a870(int *param_1,undefined4 param_2,float *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float **ppfVar8;
  byte *pbVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int extraout_ECX_01;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  byte *in_stack_ffffffa4;
  byte *in_stack_ffffffa8;
  uint3 uVar17;
  char *pcVar18;
  char *pcVar19;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pfVar6 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c7838;
  local_10 = ExceptionList;
  iVar5 = *param_1;
  if (iVar5 == 0) {
    param_3 = (float *)&stack0xffffffa4;
    ExceptionList = &local_10;
    FUN_004024e0(&stack0xffffffa4,param_1 + 1);
    local_8 = 0;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffa4);
    FUN_00591070(&DAT_005cdc70,"Set flag \'%s\'");
    ExceptionList = local_10;
    return;
  }
  if (iVar5 == 1) {
    param_3 = (float *)&stack0xffffffa4;
    ExceptionList = &local_10;
    FUN_004024e0(&stack0xffffffa4,param_1 + 1);
    local_8 = 1;
    puVar3 = FUN_00412df0();
    local_8 = 0xffffffff;
    FUN_004a0ee0(puVar3,in_stack_ffffffa4);
    FUN_00591070(&DAT_005cdc70,"Unset flag \'%s\'");
    ExceptionList = local_10;
    return;
  }
  uVar17 = (uint3)((uint)in_stack_ffffffa8 >> 8);
  if (iVar5 == 2) {
    pvVar4 = (void *)((uint)uVar17 << 8);
    ExceptionList = &local_10;
    FUN_00402690(&stack0xffffffa8,"Transfer",8);
    FUN_004817b0(param_3,extraout_ECX,param_1[8],pvVar4);
    FUN_00591070(&DAT_005cdc70,"Gave %d credits to player.");
    ExceptionList = local_10;
    return;
  }
  if (iVar5 == 9) {
    piVar15 = param_1 + 1;
    piVar13 = piVar15;
    piVar12 = piVar15;
    if (0xf < (uint)param_1[6]) {
      piVar12 = (int *)*piVar15;
      piVar13 = (int *)*piVar15;
    }
    piVar14 = piVar15;
    if (0xf < (uint)param_1[6]) {
      piVar14 = (int *)*piVar15;
    }
    ExceptionList = &local_10;
    FUN_00413ec0(&param_3,tolower_exref,(char *)piVar14,(char *)(param_1[5] + (int)piVar13),
                 (undefined1 *)piVar12);
    param_3 = (float *)&stack0xffffffa8;
    FUN_004024e0(&stack0xffffffa8,piVar15);
    local_8 = 2;
    pvVar4 = (void *)FUN_00412490();
    local_8 = 0xffffffff;
    iVar5 = FUN_004a0d10(pvVar4,in_stack_ffffffa8);
    if (iVar5 != 0) {
      FUN_004a00e0(iVar5);
      pcVar18 = "Gave player license for faction %s";
LAB_0055ab12:
      FUN_00591070(&DAT_005cdc70,pcVar18);
      FUN_00412d40();
      FUN_00486510();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (iVar5 != 10) {
      if (iVar5 == 3) {
        if (param_1[8] <= (int)param_3[7]) {
          pvVar4 = (void *)((uint)uVar17 << 8);
          ExceptionList = &local_10;
          FUN_00402690(&stack0xffffffa8,"Transfer",8);
          FUN_004817b0(pfVar6,extraout_ECX_00,-param_1[8],pvVar4);
          FUN_00591070(&DAT_005cdc70,"Took %d credits from player.");
          ExceptionList = local_10;
          return;
        }
        pcVar19 = "Not enough money to perform action.";
        pcVar18 = "ERROR";
        ExceptionList = &local_10;
      }
      else {
        if (iVar5 == 6) {
          if (*(int *)(*(int *)(DAT_0065b5cc[0x34] + 0x40) + 0x20) == 0) {
            return;
          }
          uVar11 = 0xffffffff;
          ExceptionList = &local_10;
          FUN_004024e0(&stack0xffffffa4,param_1 + 1);
          iVar5 = FUN_004a8180(in_stack_ffffffa4);
          FUN_0050f740((void *)DAT_0065b5cc[0x34],iVar5,uVar11);
          ExceptionList = local_10;
          return;
        }
        if (iVar5 == 7) {
          iVar5 = *(int *)(DAT_0065b5cc[0x34] + 0x1f8);
          iVar10 = *(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 2;
          if (*(int *)(iVar5 + 4) == iVar10 || *(int *)(iVar5 + 4) - iVar10 < 0) {
            return;
          }
          ExceptionList = &local_10;
          pfVar6 = (float *)FUN_005adb0f(8);
          piVar12 = param_1 + 1;
          if (0xf < (uint)param_1[6]) {
            piVar12 = (int *)*piVar12;
          }
          param_3 = pfVar6;
          param_3 = (float *)atoi((char *)piVar12);
          piVar12 = DAT_0065b5cc;
          uVar11 = 0;
          *pfVar6 = 100.0;
          piVar13 = DAT_0065b5cc;
          uVar16 = piVar12[1] - *piVar12 >> 2;
          if (uVar16 != 0) {
            local_18 = (undefined4 *)*piVar12;
            puVar3 = local_18;
            do {
              if (*(float **)*puVar3 == param_3) {
                fVar7 = (float)local_18[uVar11];
                goto LAB_0055aca6;
              }
              uVar11 = uVar11 + 1;
              puVar3 = puVar3 + 1;
            } while (uVar11 < uVar16);
          }
          fVar7 = 0.0;
LAB_0055aca6:
          pfVar6[1] = fVar7;
          FUN_005074d0(*(void **)(piVar13[0x34] + 0x1f8),pfVar6);
          FUN_00591070(&DAT_005cdc70,"gave player component of type \'%s\'");
          ExceptionList = local_10;
          return;
        }
        if (iVar5 == 8) {
          piVar12 = param_1 + 1;
          if (0xf < (uint)param_1[6]) {
            piVar12 = (int *)*piVar12;
          }
          ExceptionList = &local_10;
          ppfVar8 = (float **)atoi((char *)piVar12);
          pvVar4 = *(void **)(DAT_0065b5cc[0x34] + 0x1f8);
          uVar11 = FUN_00507670(pvVar4,(int)ppfVar8);
          if ((char)uVar11 == '\0') {
            FUN_00591070(&DAT_005cdc70,
                         "couldn\'t take component type \'%d\' from player as they don\'t have it");
            ExceptionList = local_10;
            return;
          }
          puVar3 = *(undefined4 **)((int)pvVar4 + 0x44);
          do {
            if (puVar3 == *(undefined4 **)((int)pvVar4 + 0x48)) {
LAB_0055ad5a:
              FUN_00591070(&DAT_005cdc70,"took component of type \'%d\' from player");
              ExceptionList = local_10;
              return;
            }
            if (*((float ****)*puVar3)[1] == ppfVar8) {
              FUN_005076c0(pvVar4,(float ****)*puVar3);
              goto LAB_0055ad5a;
            }
            puVar3 = puVar3 + 1;
          } while( true );
        }
        if (iVar5 == 4) {
          uVar11 = 0;
          puVar3 = (undefined4 *)DAT_0065b5cc[0x21];
          uVar16 = DAT_0065b5cc[0x22] - (int)puVar3 >> 2;
          if (uVar16 != 0) {
            do {
              if (*(int *)*puVar3 == param_1[7]) {
                piVar12 = *(int **)(DAT_0065b5cc[0x21] + uVar11 * 4);
                goto LAB_0055ade9;
              }
              uVar11 = uVar11 + 1;
              puVar3 = puVar3 + 1;
            } while (uVar11 < uVar16);
          }
          piVar12 = (int *)0x0;
LAB_0055ade9:
          iVar5 = param_1[8];
          pvVar4 = *(void **)(DAT_0065b5cc[0x34] + 0x1f8);
          ExceptionList = &local_10;
          iVar10 = FUN_00507200(pvVar4,piVar12);
          if (iVar5 <= iVar10) {
            FUN_00506db0(pvVar4,param_1[7],iVar5);
            FUN_00591070(&DAT_005cdc70,"Added %dx cargo of type \'%d\' to player hold");
            ExceptionList = local_10;
            return;
          }
          FUN_00591070(&DAT_005cdc70,
                       "WARNING: couldn\'t add %dx cargo of type \'%d\' to player hold");
          ExceptionList = local_10;
          return;
        }
        if (iVar5 == 5) {
          ExceptionList = &local_10;
          FUN_00506ed0(*(void **)(DAT_0065b5cc[0x34] + 0x1f8),param_1[7],param_1[8]);
          FUN_00591070(&DAT_005cdc70,"Removed %dx cargo of type \'%d\' from player hold");
          ExceptionList = local_10;
          return;
        }
        if (iVar5 == 0xc) {
          param_3 = (float *)(float)param_1[8];
          ExceptionList = &local_10;
          FUN_004024e0(&stack0xffffffa8,param_1 + 1);
          local_8 = 4;
          pvVar4 = (void *)FUN_00412770();
          local_8 = 0xffffffff;
          FUN_0051e8b0(pvVar4,in_stack_ffffffa8);
          FUN_00591070(&DAT_005cdc70,"Set stat %s to %d.");
          ExceptionList = local_10;
          return;
        }
        if (iVar5 == 0xb) {
          param_3 = (float *)(float)param_1[8];
          ExceptionList = &local_10;
          FUN_004024e0(local_30,param_1 + 1);
          local_8 = 5;
          iVar5 = FUN_00412770();
          local_8 = 6;
          pfVar6 = (float *)FUN_004a2a30((void *)(iVar5 + 0x10),(byte *)local_30);
          local_8 = 0xffffffff;
          *pfVar6 = (float)param_3 + *pfVar6;
          if (0xf < local_1c) {
            pvVar4 = local_30[0];
            if ((0xfff < local_1c + 1) &&
               (pvVar4 = *(void **)((int)local_30[0] + -4),
               0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar4);
          }
          param_3 = (float *)&stack0xffffffa8;
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          FUN_004024e0(&stack0xffffffa8,param_1 + 1);
          local_8 = 7;
          pvVar4 = (void *)FUN_00412770();
          local_8 = 0xffffffff;
          FUN_0051e820(pvVar4,in_stack_ffffffa8);
          FUN_00591070(&DAT_005cdc70,"Changed stat %s by %d, amount now %d.");
          ExceptionList = local_10;
          return;
        }
        if (iVar5 != 0xd) {
          return;
        }
        ExceptionList = &local_10;
        cVar2 = FUN_005124e0(DAT_0065b5cc[0x34]);
        if ((cVar2 != '\0') && (*(int *)(extraout_ECX_01 + 0x178) != 0)) {
          param_3 = (float *)&stack0xffffffa8;
          FUN_004024e0(&stack0xffffffa8,(undefined4 *)(*(int *)(extraout_ECX_01 + 0x178) + 0x238));
          cVar2 = '\0';
          local_8 = 8;
          pvVar4 = (void *)FUN_00412d40();
          local_8 = 0xffffffff;
          pbVar9 = FUN_00486270(pvVar4,cVar2,in_stack_ffffffa8);
          if (pbVar9 != (byte *)0x0) {
            FUN_0049e790(pbVar9);
          }
        }
        pcVar19 = "Reset contracts.";
        pcVar18 = "GAME";
      }
      FUN_00591070(pcVar18,pcVar19);
      ExceptionList = local_10;
      return;
    }
    piVar15 = param_1 + 1;
    piVar13 = piVar15;
    piVar12 = piVar15;
    if (0xf < (uint)param_1[6]) {
      piVar12 = (int *)*piVar15;
      piVar13 = (int *)*piVar15;
    }
    piVar14 = piVar15;
    if (0xf < (uint)param_1[6]) {
      piVar14 = (int *)*piVar15;
    }
    ExceptionList = &local_10;
    FUN_00413ec0(&param_3,tolower_exref,(char *)piVar14,(char *)(param_1[5] + (int)piVar13),
                 (undefined1 *)piVar12);
    param_3 = (float *)&stack0xffffffa8;
    FUN_004024e0(&stack0xffffffa8,piVar15);
    local_8 = 3;
    pvVar4 = (void *)FUN_00412490();
    local_8 = 0xffffffff;
    iVar5 = FUN_004a0d10(pvVar4,in_stack_ffffffa8);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xd8) = 0;
      *(undefined4 *)(iVar5 + 0xdc) = 5;
      pcVar18 = "Suspended player for faction %s";
      goto LAB_0055ab12;
    }
  }
  FUN_00591070("WORLD","Invalid faction \'%s\'");
  bVar1 = cc_assert_script_compatible("Invalid faction.");
  if (!bVar1) {
    cocos2d::log("Assert failed: %s");
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0055b0c0(void *this,int param_1)

{
  undefined4 *this_00;
  byte *pbVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  undefined4 *puVar11;
  void *pvVar12;
  uint uVar13;
  byte *in_stack_ffffff80;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 ***local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c7878;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this_00 = (undefined4 *)((int)this + 0x34);
  *(int *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xbf800000;
  FUN_004028b0((int *)*this_00,*(int **)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x38) = *this_00;
  FUN_004028b0(*(int **)((int)this + 0x40),*(int **)((int)this + 0x44));
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x40);
  uVar8 = 0;
  piVar4 = *(int **)(*(int *)((int)this + 0x20) + 0xa0);
  uVar13 = *(int *)(*(int *)((int)this + 0x20) + 0xa4) - (int)piVar4 >> 2;
  if (uVar13 != 0) {
    do {
      piVar2 = (int *)*piVar4;
      if (*piVar2 == param_1) {
        if (piVar2 != (int *)0x0) {
          pbVar1 = (byte *)(piVar2 + 9);
          pbVar9 = pbVar1;
          if (0xf < (uint)piVar2[0xe]) {
            pbVar9 = *(byte **)pbVar1;
          }
          uVar8 = FUN_004031f0(pbVar9,piVar2[0xd],(byte *)&PTR_005ce008,0);
          if ((char)uVar8 == '\0') {
            FUN_004024e0(&stack0xffffff80,(undefined4 *)pbVar1);
            iVar5 = FUN_00535d50(in_stack_ffffff80);
            *(int *)(*(int *)((int)this + 0x10) + 0x58) = iVar5;
          }
          pbVar1 = (byte *)(piVar2 + 3);
          pbVar9 = pbVar1;
          if (0xf < (uint)piVar2[8]) {
            pbVar9 = *(byte **)pbVar1;
          }
          uVar8 = FUN_004031f0(pbVar9,piVar2[7],(byte *)&PTR_005ce008,0);
          if ((char)uVar8 == '\0') {
            FUN_004024e0(&stack0xffffff80,(undefined4 *)pbVar1);
            iVar5 = FUN_00535cc0(in_stack_ffffff80);
            *(int *)(*(int *)((int)this + 0x10) + 0x54) = iVar5;
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
          uVar8 = 0;
          local_8 = 0;
          if (piVar2[0x13] == 0) goto LAB_0055b1a2;
          piVar4 = piVar2 + 0xf;
          goto LAB_0055b270;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar8 < uVar13);
  }
  FUN_00591070("ERROR","Invalid conversationElement \'%d\' in conversation %d with person %s");
  bVar3 = cc_assert_script_compatible("Unknown conversation element.");
  if (!bVar3) {
    cocos2d::log("Assert failed: %s");
  }
  goto LAB_0055b1a2;
LAB_0055b270:
  do {
    uVar13 = piVar2[0x14];
    piVar10 = piVar4;
    if (0xf < uVar13) {
      piVar10 = (int *)*piVar4;
    }
    if (*(char *)((int)piVar10 + uVar8) == ' ') {
LAB_0055b3df:
      if (local_20 != 0) {
        piVar10 = *(int **)((int)this + 0x38);
        if (*(int **)((int)this + 0x3c) == piVar10) {
          FUN_00403840(this_00,piVar10,local_30);
        }
        else {
          FUN_004024e0(piVar10,local_30);
          *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 0x18;
        }
        local_20 = 0;
        ppppuVar6 = local_30;
        if (0xf < local_1c) {
          ppppuVar6 = (undefined4 ****)local_30[0];
        }
        *(undefined1 *)ppppuVar6 = 0;
      }
    }
    else {
      piVar10 = piVar4;
      if (0xf < uVar13) {
        piVar10 = (int *)*piVar4;
      }
      if (*(char *)((int)piVar10 + uVar8) == '\t') goto LAB_0055b3df;
      piVar10 = piVar4;
      if (0xf < uVar13) {
        piVar10 = (int *)*piVar4;
      }
      if (*(char *)((int)piVar10 + uVar8) == '\n') {
        if (local_20 != 0) {
          piVar10 = *(int **)((int)this + 0x38);
          if (*(int **)((int)this + 0x3c) == piVar10) {
            FUN_00403840(this_00,piVar10,local_30);
          }
          else {
            FUN_004024e0(piVar10,local_30);
            *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 0x18;
          }
          local_20 = 0;
          ppppuVar6 = local_30;
          if (0xf < local_1c) {
            ppppuVar6 = (undefined4 ****)local_30[0];
          }
          *(undefined1 *)ppppuVar6 = 0;
        }
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
        FUN_00402690(local_48,&DAT_005e75f8,1);
        local_8._0_1_ = 1;
        FUN_00403330(this_00,(int *)local_48);
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_34) {
          pvVar12 = local_48[0];
          if ((0xfff < local_34 + 1) &&
             (pvVar12 = *(void **)((int)local_48[0] + -4),
             0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar12)))) goto LAB_0055b479;
          FUN_005adb3f(pvVar12);
        }
      }
      else {
        piVar10 = piVar4;
        if (0xf < uVar13) {
          piVar10 = (int *)*piVar4;
        }
        if (*(char *)((int)piVar10 + uVar8) != '\r') {
          puVar7 = (undefined4 *)FUN_00591e00((undefined1 *)local_48,&DAT_005ce018);
          local_8._0_1_ = 2;
          puVar11 = puVar7;
          if (0xf < (uint)puVar7[5]) {
            puVar11 = (undefined4 *)*puVar7;
          }
          FUN_00403640(local_30,puVar11,puVar7[4]);
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_34) {
            pvVar12 = local_48[0];
            if ((0xfff < local_34 + 1) &&
               (pvVar12 = *(void **)((int)local_48[0] + -4),
               0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar12)))) goto LAB_0055b479;
            FUN_005adb3f(pvVar12);
          }
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < (uint)piVar2[0x13]);
  if (local_20 != 0) {
    piVar4 = *(int **)((int)this + 0x38);
    if (*(int **)((int)this + 0x3c) == piVar4) {
      FUN_00403840(this_00,piVar4,local_30);
    }
    else {
      FUN_004024e0(piVar4,local_30);
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 0x18;
    }
  }
  if (0xf < local_1c) {
    ppppuVar6 = (undefined4 ****)local_30[0];
    if ((0xfff < local_1c + 1) &&
       (ppppuVar6 = (undefined4 ****)local_30[0][-1],
       (undefined1 *)0x1f < (undefined1 *)((int)local_30[0] + (-4 - (int)ppppuVar6)))) {
LAB_0055b479:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar6);
  }
LAB_0055b1a2:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __fastcall FUN_0055b490(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c78c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = TabletOmega::vftable;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x2133;
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_8 = 2;
  puVar1 = (undefined4 *)FUN_005adb0f(0x3c);
  local_14 = puVar1;
  memset(puVar1,0,0x3c);
  puVar1[2] = 0x20;
  puVar1[1] = 0x50;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0xf;
  *(undefined1 *)(puVar1 + 9) = 0;
  *puVar1 = CargoManager::vftable;
  puVar1[3] = puVar1[2] + -8;
  param_1[0x12] = puVar1;
  local_14 = (undefined4 *)FUN_005adb0f(4);
  *local_14 = 0xffffffff;
  param_1[0x13] = local_14;
  puVar1 = (undefined4 *)FUN_005adb0f(0x3c);
  local_14 = puVar1;
  memset(puVar1,0,0x3c);
  puVar1[2] = 0x20;
  puVar1[1] = 0x50;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0xf;
  *(undefined1 *)(puVar1 + 9) = 0;
  *puVar1 = TabletInterface::vftable;
  puVar1[3] = puVar1[2] + -8;
  param_1[0x14] = puVar1;
  puVar1 = (undefined4 *)FUN_005adb0f(0x3c);
  local_14 = puVar1;
  memset(puVar1,0,0x3c);
  puVar1[1] = 0x50;
  puVar1[2] = 0x20;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0xf;
  *(undefined1 *)(puVar1 + 9) = 0;
  *puVar1 = MultiplayerTabletManager::vftable;
  puVar1[3] = puVar1[2] + -8;
  param_1[0x15] = puVar1;
  puVar1 = FUN_00412870();
  param_1[0x16] = puVar1;
  local_14 = (undefined4 *)0x0;
  puVar1[1] = 0x1f;
  *(undefined4 *)(param_1[0x16] + 8) = 0x18;
  puVar1 = (undefined4 *)param_1[0xc];
  param_1[0xd] = puVar1;
  if ((undefined4 *)param_1[0xe] == puVar1) {
    FUN_004141e0(param_1 + 0xc,puVar1,&local_14);
  }
  else {
    *puVar1 = 0;
    param_1[0xd] = param_1[0xd] + 4;
  }
  puVar1 = (undefined4 *)param_1[0xd];
  local_14 = (undefined4 *)0x1;
  if ((undefined4 *)param_1[0xe] == puVar1) {
    FUN_004141e0(param_1 + 0xc,puVar1,&local_14);
  }
  else {
    *puVar1 = 1;
    param_1[0xd] = param_1[0xd] + 4;
  }
  puVar1 = (undefined4 *)param_1[0xd];
  local_14 = (undefined4 *)0x2;
  if ((undefined4 *)param_1[0xe] == puVar1) {
    FUN_004141e0(param_1 + 0xc,puVar1,&local_14);
  }
  else {
    *puVar1 = 2;
    param_1[0xd] = param_1[0xd] + 4;
  }
  param_1[1] = 0;
  FUN_0055be10((int)param_1);
  ExceptionList = local_10;
  return param_1;
}


void FUN_0055b740(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c78e8;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,&DAT_005e7d58);
  local_8 = 0;
  puVar2 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar2 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar2,puVar1[4]);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
    pvVar3 = local_30[0];
    if (0xfff < local_1c + 1) {
      pvVar3 = *(void **)((int)local_30[0] + -4);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_00403640(param_1,&DAT_00623e3c,3);
  iVar4 = 0x1d;
  do {
    FUN_00403640(param_1,&DAT_00623ea4,3);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00403640(param_1,&DAT_00623e9c,4);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0055b840(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c78e8;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,&DAT_005e7d58);
  local_8 = 0;
  puVar2 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar2 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar2,puVar1[4]);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
    pvVar3 = local_30[0];
    if (0xfff < local_1c + 1) {
      pvVar3 = *(void **)((int)local_30[0] + -4);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_00403640(param_1,&DAT_00623e98,3);
  iVar4 = 0x1d;
  do {
    FUN_00403640(param_1,&DAT_00623e94,3);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00403640(param_1,&DAT_00623e90,3);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0055b940(void *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  void *in_stack_ffffffa4;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c7930;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005e7d58);
  local_8._0_1_ = 1;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8._0_1_ = 0;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  FUN_00403640(param_1,&DAT_00623e8c,3);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005e7d58);
  local_8._0_1_ = 2;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  iVar6 = param_2;
  if (0 < param_2) {
    do {
      FUN_00403640(param_1,&DAT_005e7468,1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  ppuVar2 = &param_3;
  if (0xf < in_stack_00000020) {
    ppuVar2 = (undefined4 **)param_3;
  }
  FUN_00403640(param_1,ppuVar2,in_stack_0000001c);
  iVar6 = 0;
  while( true ) {
    FUN_004024e0(&stack0xffffffa4,&param_3);
    uVar3 = FUN_0055e9e0(in_stack_ffffffa4);
    if ((int)((0x1d - uVar3) - param_2) <= iVar6) break;
    FUN_00403640(param_1,&DAT_005e7468,1);
    iVar6 = iVar6 + 1;
  }
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c,&DAT_005e7d58);
  local_8._0_1_ = 3;
  puVar5 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar5 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar5,puVar1[4]);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_18) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  FUN_00403640(param_1,&DAT_00623e84,4);
  if (0xf < in_stack_00000020) {
    puVar5 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (puVar5 = (undefined4 *)param_3[-1], 0x1f < (uint)((int)param_3 + (-4 - (int)puVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0055bba0(void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 **ppuVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *in_stack_ffffff98;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c7980;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,&DAT_005e7d58);
  local_8._0_1_ = 1;
  puVar6 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar6 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar6,puVar1[4]);
  local_8._0_1_ = 0;
  if (0xf < local_1c) {
    pvVar5 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar5 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  FUN_00403640(param_1,&DAT_00623e8c,3);
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,&DAT_005e7d58);
  local_8._0_1_ = 2;
  puVar6 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar6 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar6,puVar1[4]);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_1c) {
    pvVar5 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar5 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  FUN_004024e0(&stack0xffffff98,&param_2);
  uVar2 = FUN_0055e9e0(in_stack_ffffff98);
  iVar3 = (int)(0x1d - uVar2) / 2;
  iVar7 = iVar3;
  if (0 < iVar3) {
    do {
      FUN_00403640(param_1,&DAT_005e7468,1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  ppuVar4 = &param_2;
  if (0xf < in_stack_0000001c) {
    ppuVar4 = (undefined4 **)param_2;
  }
  FUN_00403640(param_1,ppuVar4,in_stack_00000018);
  iVar7 = (0x1d - iVar3) - uVar2;
  if (0 < iVar7) {
    do {
      FUN_00403640(param_1,&DAT_005e7468,1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,&DAT_005e7d58);
  local_8._0_1_ = 3;
  puVar6 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar6 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar6,puVar1[4]);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_1c) {
    pvVar5 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar5 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  FUN_00403640(param_1,&DAT_00623e84,4);
  if (0xf < in_stack_0000001c) {
    puVar6 = param_2;
    if ((0xfff < in_stack_0000001c + 1) &&
       (puVar6 = (undefined4 *)param_2[-1], 0x1f < (uint)((int)param_2 + (-4 - (int)puVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(puVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0055be10(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  
  FUN_0055bf40(param_1);
  FUN_0055c290(param_1);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar1 = (undefined1 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (0xf < *(uint *)(param_1 + 0x20)) {
      puVar1 = *(undefined1 **)(param_1 + 0xc);
    }
    *puVar1 = 0;
    FUN_00403640((void *)(param_1 + 0xc),&DAT_005e75f8,1);
    uVar6 = 0;
    iVar7 = *(int *)(param_1 + 0x3c);
    uVar2 = *(int *)(param_1 + 0x40) - iVar7 >> 2;
    if (uVar2 != 0) {
      do {
        piVar8 = *(int **)(iVar7 + uVar6 * 4);
        if (*piVar8 == *(int *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 4) * 4))
        goto LAB_0055be87;
        iVar7 = *(int *)(param_1 + 0x3c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    piVar8 = (int *)0x0;
LAB_0055be87:
    (**(code **)(*(int *)piVar8[7] + 4))(*piVar8);
    iVar7 = piVar8[7];
    iVar9 = *(int *)(iVar7 + 0x10);
    pvVar4 = (void *)(iVar7 + 0x24);
    if (0xf < *(uint *)(iVar7 + 0x38)) {
      pvVar4 = *(void **)(iVar7 + 0x24);
    }
    FUN_00403640((void *)(param_1 + 0xc),pvVar4,*(uint *)(iVar7 + 0x34));
    iVar9 = 0x18 - iVar9;
    if (0 < iVar9) {
      do {
        FUN_00403640((void *)(param_1 + 0xc),&DAT_005e75f8,1);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    pbVar10 = *(byte **)(param_1 + 0x28);
    pbVar3 = pbVar10;
    if (0xf < *(uint *)(pbVar10 + 0x14)) {
      pbVar3 = *(byte **)pbVar10;
    }
    pbVar5 = (byte *)(param_1 + 0xc);
    if (0xf < *(uint *)(param_1 + 0x20)) {
      pbVar5 = *(byte **)(param_1 + 0xc);
    }
    uVar2 = FUN_004031f0(pbVar5,*(uint *)(param_1 + 0x1c),pbVar3,*(uint *)(pbVar10 + 0x10));
    if ((char)uVar2 == '\0') {
      pbVar10[0x10] = 0;
      pbVar10[0x11] = 0;
      pbVar10[0x12] = 0;
      pbVar10[0x13] = 0;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar10 = *(byte **)pbVar10;
      }
      *pbVar10 = 0;
      pvVar4 = (void *)(param_1 + 0xc);
      if (0xf < *(uint *)(param_1 + 0x20)) {
        pvVar4 = *(void **)(param_1 + 0xc);
      }
      FUN_00403640(*(void **)(param_1 + 0x28),pvVar4,*(uint *)(param_1 + 0x1c));
    }
  }
  return;
}


void __fastcall FUN_0055bf40(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  void *pvVar8;
  char ****ppppcVar9;
  char ****ppppcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *in_stack_ffffff5c;
  uint local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  char ***local_44 [4];
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_005c79d0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = *(undefined4 **)(param_1 + 0x24);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[4] = 0;
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
    FUN_0055b740(*(void **)(param_1 + 0x24));
    FUN_00591e00(&stack0xffffff5c,"`@O`^m`$e`0g`!a `9O`#S `3v1.01");
    FUN_0055bba0(*(void **)(param_1 + 0x24),in_stack_ffffff5c);
    pvVar8 = *(void **)(param_1 + 0x24);
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_74,&DAT_005e7d58);
    local_8 = 0;
    puVar4 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar4 = (undefined4 *)*puVar5;
    }
    FUN_00403640(pvVar8,puVar4,puVar5[4]);
    local_8._0_1_ = 0xff;
    local_8._1_3_ = 0xffffff;
    if (0xf < local_60) {
      pvVar6 = local_74[0];
      if ((0xfff < local_60 + 1) &&
         (pvVar6 = *(void **)((int)local_74[0] + -4), uVar3 = (undefined1)local_8,
         0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar6)))) {
LAB_0055c011:
        local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    FUN_00403640(pvVar8,&DAT_00623e8c,3);
    iVar12 = 0x1d;
    do {
      FUN_00403640(pvVar8,&DAT_005e7468,1);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    FUN_00403640(pvVar8,&DAT_00623e84,4);
    local_34 = iVar12;
    local_30 = 0xf;
    local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    local_78 = 0;
    if (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2 != 0) {
      do {
        if (local_78 != 0) {
          FUN_00403640(local_44," `3- ",5);
        }
        uVar11 = 0;
        piVar7 = *(int **)(param_1 + 0x3c);
        uVar13 = *(int *)(param_1 + 0x40) - (int)piVar7 >> 2;
        if (uVar13 != 0) {
          do {
            piVar2 = (int *)*piVar7;
            if (*piVar2 == *(int *)(*(int *)(param_1 + 0x30) + local_78 * 4)) {
              if (piVar2 != (int *)0x0) {
                FUN_004024e0(local_2c,piVar2 + 1);
                goto LAB_0055c0e6;
              }
              break;
            }
            uVar11 = uVar11 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar11 < uVar13);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        FUN_00402690(local_2c,"Unknown",7);
LAB_0055c0e6:
        local_8._0_1_ = 2;
        puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_5c,"`%c%s");
        local_8._0_1_ = 3;
        puVar4 = puVar5;
        if (0xf < (uint)puVar5[5]) {
          puVar4 = (undefined4 *)*puVar5;
        }
        FUN_00403640(local_44,puVar4,puVar5[4]);
        local_8._0_1_ = 2;
        uVar3 = (undefined1)local_8;
        local_8._0_1_ = 2;
        if (0xf < local_48) {
          pvVar8 = local_5c[0];
          if ((0xfff < local_48 + 1) &&
             (pvVar8 = *(void **)((int)local_5c[0] + -4),
             0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8)))) goto LAB_0055c011;
          FUN_005adb3f(pvVar8);
        }
        local_8._0_1_ = 1;
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        if (0xf < local_18) {
          pvVar8 = local_2c[0];
          if ((0xfff < local_18 + 1) &&
             (pvVar8 = *(void **)((int)local_2c[0] + -4), uVar3 = (undefined1)local_8,
             0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_0055c011;
          FUN_005adb3f(pvVar8);
        }
        local_78 = local_78 + 1;
      } while (local_78 < (uint)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2));
    }
    ppppcVar10 = local_44;
    if (0xf < local_30) {
      ppppcVar10 = (char ****)local_44[0];
    }
    in_stack_ffffff5c = (undefined4 *)((uint)in_stack_ffffff5c & 0xffffff00);
    ppppcVar9 = ppppcVar10;
    do {
      cVar1 = *(char *)ppppcVar9;
      ppppcVar9 = (char ****)((int)ppppcVar9 + 1);
    } while (cVar1 != '\0');
    FUN_00402690(&stack0xffffff5c,ppppcVar10,(int)ppppcVar9 - (int)((int)ppppcVar10 + 1));
    FUN_0055bba0(*(void **)(param_1 + 0x24),in_stack_ffffff5c);
    FUN_0055b840(*(void **)(param_1 + 0x24));
    if (0xf < local_30) {
      ppppcVar10 = (char ****)local_44[0];
      if ((0xfff < local_30 + 1) &&
         (ppppcVar10 = (char ****)local_44[0][-1],
         (char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppcVar10)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar10);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
