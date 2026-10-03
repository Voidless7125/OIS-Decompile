#include "../ois_server.exe.h"


undefined4 __thiscall
FUN_005a00e0(void *this,int param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  short *psVar1;
  short sVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_8;
  
  sVar2 = (short)((uint)param_5 >> 0x10);
  if (((sVar2 != DAT_006558f6) || ((short)param_5 != 2)) || (param_6 != DAT_006558f8)) {
    uVar7 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
    uVar6 = *(uint *)((int)this + 0x2e8);
    iVar8 = uVar6 * 4;
    local_8 = uVar6;
    while( true ) {
      if (*(uint *)((int)this + 0x2ec) < uVar6) {
        iVar5 = *(int *)((int)this + 0x2f0) - uVar6;
      }
      else {
        iVar5 = -uVar6;
      }
      if (*(uint *)((int)this + 0x2ec) + iVar5 <= uVar7) break;
      iVar5 = iVar8;
      if (*(uint *)((int)this + 0x2f0) <= local_8) {
        iVar5 = ((uVar6 - *(uint *)((int)this + 0x2f0)) + uVar7) * 4;
      }
      psVar1 = *(short **)(iVar5 + *(int *)((int)this + 0x2e4));
      if (((psVar1[1] == sVar2) && (*psVar1 == 2)) && (*(int *)(psVar1 + 2) == param_6)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
        return 0;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
      local_8 = local_8 + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
  }
  if (((sVar2 == DAT_006558f6) && ((short)param_5 == 2)) && (param_6 == DAT_006558f8)) {
    if ((param_1 == DAT_00655908) && (param_2 == DAT_0065590c)) {
      return 6;
    }
    if ((param_3 != 0xffff) && (uVar6 = (uint)param_3, uVar6 < *(uint *)((int)this + 0xc))) {
      iVar8 = *(int *)((int)this + 0x22c);
      iVar5 = uVar6 * 0x1210;
      if ((*(int *)(iVar5 + 0x11f0 + iVar8) == param_1) &&
         ((*(int *)(iVar5 + 0x11f4 + iVar8) == param_2 && (*(char *)(iVar5 + iVar8) != '\0'))))
      goto LAB_005a02be;
    }
    uVar7 = *(uint *)((int)this + 0xc);
    uVar6 = 0;
    if (uVar7 != 0) {
      pcVar3 = *(char **)((int)this + 0x22c);
      do {
        if (((*pcVar3 != '\0') && (*(int *)(pcVar3 + 0x11f0) == param_1)) &&
           (*(int *)(pcVar3 + 0x11f4) == param_2)) goto LAB_005a02be;
        uVar6 = uVar6 + 1;
        pcVar3 = pcVar3 + 0x1210;
      } while (uVar6 < uVar7);
    }
    uVar6 = 0;
    if (uVar7 != 0) {
      piVar4 = (int *)(*(int *)((int)this + 0x22c) + 0x11f0);
      do {
        if ((*piVar4 == param_1) && (piVar4[1] == param_2)) goto LAB_005a02be;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 0x484;
      } while (uVar6 < uVar7);
    }
  }
  else {
    uVar6 = FUN_005a2c60(this,param_5,param_6,param_7,param_8,param_9,'\0');
LAB_005a02be:
    if (uVar6 != 0xffffffff) {
      if (*(char *)(*(int *)((int)this + 0x22c) + uVar6 * 0x1210) == '\0') {
        return 5;
      }
      switch(*(undefined4 *)(*(int *)((int)this + 0x22c) + 0x120c + uVar6 * 0x1210)) {
      case 1:
      case 3:
        return 3;
      case 2:
        return 4;
      case 4:
      case 5:
      case 6:
        return 1;
      case 7:
        return 2;
      }
    }
  }
  return 6;
}


void __thiscall
FUN_005a0350(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  FUN_005a2c60(this,param_1,param_2,param_3,param_4,param_5,'\0');
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005a0370(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  uVar4 = _DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  if (((param_2 < *(uint *)((int)this + 0xc)) &&
      (pcVar5 = (char *)(*(int *)((int)this + 0x22c) + param_2 * 0x1210), *pcVar5 != '\0')) &&
     (*(int *)(pcVar5 + 0x120c) == 7)) {
    uVar2 = *(undefined4 *)(pcVar5 + 8);
    uVar3 = *(undefined4 *)(pcVar5 + 0xc);
    uVar4 = *(undefined4 *)(pcVar5 + 0x10);
    uVar1 = *(undefined4 *)(pcVar5 + 0x14);
    *param_1 = *(undefined4 *)(pcVar5 + 4);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar1;
    return;
  }
  *param_1 = _DAT_006558f4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005a03d0(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = uRam00655914;
  uVar4 = _DAT_00655910;
  uVar3 = DAT_0065590c;
  if (param_2 < *(uint *)((int)this + 0xc)) {
    iVar6 = param_2 * 0x1210;
    iVar2 = *(int *)((int)this + 0x22c);
    if ((*(char *)(iVar6 + iVar2) != '\0') && (*(int *)(iVar6 + 0x120c + iVar2) == 7)) {
      puVar1 = (undefined4 *)(iVar6 + 0x11f0 + iVar2);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *param_1 = *puVar1;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      return;
    }
  }
  *param_1 = DAT_00655908;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  return;
}


void __thiscall FUN_005a0420(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_1[2] != 0) {
    free((void *)*param_1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (param_2[2] != 0) {
    free((void *)*param_2);
    param_2[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  if (((*(int *)((int)this + 0x22c) != 0) && (*(char *)((int)this + 8) != '\x01')) &&
     (uVar2 = 0, *(int *)((int)this + 0x234) != 0)) {
    do {
      pcVar1 = *(char **)(*(int *)((int)this + 0x230) + uVar2 * 4);
      if ((*pcVar1 != '\0') && (*(int *)(pcVar1 + 0x120c) == 7)) {
        FUN_005aa2e0(param_1,(undefined4 *)(pcVar1 + 4));
        FUN_005aa3a0(param_2,(undefined4 *)
                             (*(int *)(*(int *)((int)this + 0x230) + uVar2 * 4) + 0x11f0));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x234));
  }
  return;
}


void __thiscall FUN_005a04e0(void *this,byte *param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *_Memory;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_005ab130();
  uVar10 = __aulldiv((uint)uVar10,(uint)((ulonglong)uVar10 >> 0x20),1000,0);
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    pbVar7 = param_1;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    if ((uint)((int)pbVar7 - (int)(param_1 + 1)) < 0x10) {
      lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2a8);
      uVar8 = 0;
      EnterCriticalSection(lpCriticalSection);
      if (*(int *)((int)this + 0x2c4) != 0) {
        puVar4 = *(undefined4 **)((int)this + 0x2c0);
        do {
          pbVar7 = *(byte **)*puVar4;
          pbVar2 = param_1;
          do {
            bVar1 = *pbVar2;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_005a0586:
              uVar3 = -(uint)bVar9 | 1;
              goto LAB_005a058b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_005a0586;
            pbVar2 = pbVar2 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          uVar3 = 0;
LAB_005a058b:
          if (uVar3 == 0) {
            iVar5 = *(int *)(*(int *)((int)this + 0x2c0) + uVar8 * 4);
            if (param_2 == 0) {
              *(undefined4 *)(iVar5 + 4) = 0;
              LeaveCriticalSection(lpCriticalSection);
              return;
            }
            *(int *)(iVar5 + 4) = param_2 + (int)uVar10;
            LeaveCriticalSection(lpCriticalSection);
            return;
          }
          uVar8 = uVar8 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar8 < *(uint *)((int)this + 0x2c4));
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2a8));
      puVar4 = (undefined4 *)FUN_005adb0f(8);
      pbVar7 = malloc(0x10);
      *puVar4 = pbVar7;
      if (param_2 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)uVar10 + param_2;
      }
      puVar4[1] = iVar5;
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        *pbVar7 = bVar1;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2a8));
      iVar6 = *(int *)((int)this + 0x2c4);
      iVar5 = *(int *)((int)this + 0x2c8);
      if (iVar6 == iVar5) {
        uVar8 = 0x10;
        if (iVar5 != 0) {
          uVar8 = iVar5 * 2;
        }
        *(uint *)((int)this + 0x2c8) = uVar8;
        if (uVar8 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar8 * 4));
        }
        _Memory = *(void **)((int)this + 0x2c0);
        if (_Memory != (void *)0x0) {
          uVar8 = 0;
          if (*(int *)((int)this + 0x2c4) != 0) {
            do {
              *(undefined4 *)(iVar5 + uVar8 * 4) =
                   *(undefined4 *)(*(int *)((int)this + 0x2c0) + uVar8 * 4);
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(uint *)((int)this + 0x2c4));
            _Memory = *(void **)((int)this + 0x2c0);
          }
          free(_Memory);
        }
        iVar6 = *(int *)((int)this + 0x2c4);
        *(int *)((int)this + 0x2c0) = iVar5;
      }
      else {
        iVar5 = *(int *)((int)this + 0x2c0);
      }
      *(undefined4 **)(iVar5 + iVar6 * 4) = puVar4;
      *(int *)((int)this + 0x2c4) = *(int *)((int)this + 0x2c4) + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2a8));
    }
  }
  return;
}


void __thiscall FUN_005a06f0(void *this,byte *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    pbVar6 = param_1;
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
    if ((uint)((int)pbVar6 - (int)(param_1 + 1)) < 0x10) {
      uVar8 = 0;
      puVar7 = (undefined4 *)0x0;
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2a8));
      if (*(int *)((int)this + 0x2c4) != 0) {
        puVar7 = *(undefined4 **)((int)this + 0x2c0);
        do {
          pbVar6 = *(byte **)*puVar7;
          pbVar4 = param_1;
          do {
            bVar2 = *pbVar4;
            bVar9 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_005a0777:
              uVar5 = -(uint)bVar9 | 1;
              goto LAB_005a077c;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar9 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_005a0777;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_005a077c:
          if (uVar5 == 0) {
            iVar3 = *(int *)((int)this + 0x2c0);
            puVar7 = *(undefined4 **)(iVar3 + uVar8 * 4);
            *(undefined4 *)(iVar3 + uVar8 * 4) =
                 *(undefined4 *)(iVar3 + -4 + *(int *)((int)this + 0x2c4) * 4);
            uVar8 = *(uint *)((int)this + 0x2c4);
            uVar5 = *(int *)((int)this + 0x2c4) - 1;
            if (uVar5 < uVar8) {
              if (uVar5 < uVar8 - 1) {
                do {
                  puVar1 = (undefined4 *)(*(int *)((int)this + 0x2c0) + uVar5 * 4);
                  uVar5 = uVar5 + 1;
                  *puVar1 = puVar1[1];
                  uVar8 = *(uint *)((int)this + 0x2c4);
                } while (uVar5 < uVar8 - 1);
              }
              *(uint *)((int)this + 0x2c4) = uVar8 - 1;
            }
            goto LAB_005a07e5;
          }
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 < *(uint *)((int)this + 0x2c4));
        puVar7 = (undefined4 *)0x0;
      }
LAB_005a07e5:
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2a8));
      if (puVar7 != (undefined4 *)0x0) {
        free((void *)*puVar7);
        FUN_005adb3f(puVar7);
      }
    }
  }
  return;
}


void __fastcall FUN_005a0810(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a8));
  if (*(int *)(param_1 + 0x2c4) != 0) {
    do {
      free((void *)**(undefined4 **)(*(int *)(param_1 + 0x2c0) + uVar1 * 4));
      FUN_005adb3f(*(void **)(*(int *)(param_1 + 0x2c0) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x2c4));
  }
  if (*(int *)(param_1 + 0x2c8) != 0) {
    free(*(void **)(param_1 + 0x2c0));
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2a8));
  return;
}


void __thiscall FUN_005a08a0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x56c) = param_1;
  return;
}


uint __thiscall FUN_005a08b0(void *this,char *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  uint in_EAX;
  int iVar2;
  undefined4 extraout_EAX;
  uint extraout_EAX_00;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar5 = param_1;
    do {
      cVar3 = *pcVar5;
      in_EAX = CONCAT31((int3)(in_EAX >> 8),cVar3);
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    if (((uint)((int)pcVar5 - (int)(param_1 + 1)) < 0x10) &&
       (uVar6 = 0, *(int *)((int)this + 0x2c4) != 0)) {
      uVar7 = FUN_005ab130();
      uVar7 = __aulldiv((uint)uVar7,(uint)((ulonglong)uVar7 >> 0x20),1000,0);
      lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2a8);
      EnterCriticalSection(lpCriticalSection);
      uVar4 = *(uint *)((int)this + 0x2c4);
      if (uVar4 != 0) {
        do {
          iVar2 = *(int *)((int)this + 0x2c0);
          puVar1 = *(undefined4 **)(iVar2 + uVar6 * 4);
          if ((puVar1[1] == 0) || ((uint)uVar7 <= (uint)puVar1[1])) {
            pcVar5 = (char *)*puVar1;
            iVar2 = 0;
            cVar3 = *param_1;
            if (*pcVar5 == cVar3) {
              do {
                if (cVar3 == '\0') goto LAB_005a09b3;
                cVar3 = param_1[iVar2 + 1];
                iVar2 = iVar2 + 1;
              } while (pcVar5[iVar2] == cVar3);
            }
            if (((pcVar5[iVar2] != '\0') && (param_1[iVar2] != '\0')) && (pcVar5[iVar2] == '*')) {
LAB_005a09b3:
              LeaveCriticalSection(lpCriticalSection);
              return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
            }
            uVar6 = uVar6 + 1;
          }
          else {
            *(undefined4 *)(iVar2 + uVar6 * 4) = *(undefined4 *)(iVar2 + -4 + uVar4 * 4);
            FUN_005aa540((int *)((int)this + 0x2c0),*(int *)((int)this + 0x2c4) - 1);
            free((void *)*puVar1);
            FUN_005adb3f(puVar1);
          }
          uVar4 = *(uint *)((int)this + 0x2c4);
        } while (uVar6 < uVar4);
      }
      LeaveCriticalSection(lpCriticalSection);
      in_EAX = extraout_EAX_00;
    }
  }
  return in_EAX & 0xffffff00;
}


void __fastcall FUN_005a09e0(void *param_1)

{
  FUN_005a4640(param_1);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005a0a10(void *this,char *param_1,u_short param_2,char param_3,int param_4)

{
  int iVar1;
  char cVar2;
  u_short uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined1 local_160 [8];
  undefined8 local_158;
  void *local_150;
  byte local_149;
  undefined1 *local_148;
  uint local_144;
  short local_140;
  u_short uStack_13e;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int local_130;
  undefined4 local_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  char local_118;
  undefined1 local_117 [259];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb86b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_150 = this;
  if (param_1 != (char *)0x0) {
    memset(&local_128,0,0x114);
    local_11c = local_117;
    local_128 = 0;
    local_120 = 0;
    local_124 = 0x800;
    local_118 = '\x01';
    local_8 = 0;
    local_149 = 2;
    if (param_3 == '\0') {
      local_149 = 1;
    }
    FUN_005ab3f0(&local_128,&local_149,8);
    uVar7 = FUN_005ab130();
    local_158 = __aulldiv((uint)uVar7,(uint)((ulonglong)uVar7 >> 0x20),1000,0);
    FUN_005aa070(&local_128,(byte *)&local_158);
    local_128 = local_128 + (7 - (local_128 - 1 & 7));
    if ((local_128 & 7) == 0) {
      FUN_005ab5d0(&local_128,0x80);
      puVar4 = (undefined4 *)(local_11c + (local_128 + 7 >> 3));
      *puVar4 = 0xffff00;
      puVar4[1] = 0xfefefefe;
      puVar4[2] = 0xfdfdfdfd;
      puVar4[3] = 0x78563412;
      local_128 = local_128 + 0x80;
    }
    else {
      FUN_005ab3f0(&local_128,(byte *)&DAT_005e0e24,0x80);
    }
    pbVar5 = (byte *)(**(code **)(*(int *)this + 200))(local_160);
    FUN_005aa070(&local_128,pbVar5);
    uVar6 = FUN_005a7a80(this,param_4);
    local_158 = CONCAT44(uVar6,(undefined4)local_158);
    local_130 = -0x10000;
    uStack_13e = 0;
    uStack_13c = 0;
    uStack_13a = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    local_140 = 2;
    local_148 = local_11c;
    local_12c = 0;
    local_144 = local_128 + 7 >> 3;
    cVar2 = FUN_0059d270(&local_140,param_1);
    if (cVar2 == '\0') {
      local_130 = (uint)DAT_006558f2 << 0x10;
      local_140 = (short)_DAT_006558e0;
      uStack_13e = (u_short)((uint)_DAT_006558e0 >> 0x10);
      uStack_13c = (undefined2)DAT_006558e4;
      uStack_13a = (undefined2)((uint)DAT_006558e4 >> 0x10);
      uStack_138 = uRam006558e8;
      uStack_134 = uRam006558ec;
      uVar3 = DAT_006558f0;
    }
    else {
      uStack_13e = htons(param_2);
      uVar3 = ntohs(uStack_13e);
    }
    local_130 = CONCAT22(local_130._2_2_,uVar3);
    if (((uStack_13e == DAT_006558f6) && (local_140 == 2)) &&
       (CONCAT22(uStack_13a,uStack_13c) == DAT_006558f8)) {
      local_149 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)((int)this + 0x424) + local_158._4_4_ * 4);
      local_174 = *(undefined4 *)(iVar1 + 0xc);
      uStack_170 = *(undefined4 *)(iVar1 + 0x10);
      uStack_16c = *(undefined4 *)(iVar1 + 0x14);
      uStack_168 = *(undefined4 *)(iVar1 + 0x18);
      local_164 = *(undefined4 *)(iVar1 + 0x1c);
      FUN_0059d1f0(&local_140,(short *)&local_174);
      uVar6 = 0;
      if (*(int *)((int)this + 0x2dc) != 0) {
        do {
          (**(code **)(**(int **)(*(int *)((int)this + 0x2d8) + uVar6 * 4) + 0x2c))
                    (local_11c,local_128,CONCAT22(uStack_13e,local_140),
                     CONCAT22(uStack_13a,uStack_13c),uStack_138,uStack_134,local_130);
          uVar6 = uVar6 + 1;
          this = local_150;
        } while (uVar6 < *(uint *)((int)local_150 + 0x2dc));
      }
      (**(code **)(**(int **)(*(int *)((int)this + 0x424) + local_158._4_4_ * 4) + 4))
                (&local_148,"f:\\src\\ois\\libs\\raknet\\code\\rakpeer.cpp",0x859);
      local_149 = 1;
    }
    if ((local_118 != '\0') && (0x800 < local_124)) {
      free(local_11c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int __fastcall FUN_005a0d70(void *param_1)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int local_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int iStack_18;
  
  FUN_0059d5c0(&local_2c,(undefined4 *)&stack0x00000004);
  if ((local_2c == DAT_00655908) && (iStack_28 == DAT_0065590c)) {
    piVar1 = FUN_005a3210(param_1,local_1c,iStack_18);
  }
  else {
    piVar1 = (int *)FUN_005a3300(param_1,local_2c,iStack_28,uStack_24,uStack_20,'\0');
  }
  if (piVar1 != (int *)0x0) {
    iVar4 = 0;
    puVar3 = (ushort *)(piVar1 + 0x45e);
    iVar2 = 0;
    do {
      if (*puVar3 == 0xffff) break;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + (uint)*puVar3;
      puVar3 = puVar3 + 8;
    } while (iVar2 < 5);
    if (0 < iVar2) {
      return iVar4 / iVar2;
    }
  }
  return -1;
}


uint __fastcall FUN_005a0e20(void *param_1)

{
  int *piVar1;
  int local_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int iStack_18;
  
  FUN_0059d5c0(&local_2c,(undefined4 *)&stack0x00000004);
  if ((local_2c == DAT_00655908) && (iStack_28 == DAT_0065590c)) {
    piVar1 = FUN_005a3210(param_1,local_1c,iStack_18);
  }
  else {
    piVar1 = (int *)FUN_005a3300(param_1,local_2c,iStack_28,uStack_24,uStack_20,'\0');
  }
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (piVar1[0x472] == 0 && piVar1[0x473] == 0) {
    return (uint)*(ushort *)(piVar1 + 0x46e);
  }
  return (uint)*(ushort *)(piVar1 + piVar1[0x472] * 4 + 0x45a);
}


uint __fastcall FUN_005a0ec0(void *param_1)

{
  int *piVar1;
  int local_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int iStack_18;
  
  FUN_0059d5c0(&local_2c,(undefined4 *)&stack0x00000004);
  if ((local_2c == DAT_00655908) && (iStack_28 == DAT_0065590c)) {
    piVar1 = FUN_005a3210(param_1,local_1c,iStack_18);
  }
  else {
    piVar1 = (int *)FUN_005a3300(param_1,local_2c,iStack_28,uStack_24,uStack_20,'\0');
  }
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(piVar1 + 0x474);
}


void __thiscall FUN_005a0f40(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 10) = param_1;
  return;
}


undefined8 __fastcall FUN_005a0f50(void *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int local_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int iStack_18;
  
  FUN_0059d5c0(&local_2c,(undefined4 *)&stack0x00000004);
  if ((local_2c == DAT_00655908) && (iStack_28 == DAT_0065590c)) {
    piVar1 = FUN_005a3210(param_1,local_1c,iStack_18);
  }
  else {
    piVar1 = (int *)FUN_005a3300(param_1,local_2c,iStack_28,uStack_24,uStack_20,'\0');
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = FUN_005a0fd0((int)piVar1);
  return uVar2;
}


undefined8 FUN_005a0fd0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  int local_8;
  
  iVar4 = 0;
  uVar3 = 0xffff;
  piVar2 = (int *)(param_1 + 0x1180);
  local_8 = 0;
  param_1 = 0;
  do {
    uVar1 = *(ushort *)(piVar2 + -2);
    if (uVar1 == 0xffff) {
      return CONCAT44(local_8,param_1);
    }
    if (uVar1 < uVar3) {
      param_1 = *piVar2;
      local_8 = piVar2[1];
      uVar3 = uVar1;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar4 < 5);
  return CONCAT44(local_8,param_1);
}


void __thiscall FUN_005a1060(void *this,byte *param_1,size_t param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x268));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    FUN_005ab240((undefined4 *)((int)this + 0x14),param_1,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x268));
  return;
}


void __thiscall FUN_005a10b0(void *this,undefined4 *param_1,uint *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x268));
  *param_1 = *(undefined4 *)((int)this + 0x20);
  *param_2 = *(int *)((int)this + 0x14) + 7U >> 3;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x268));
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __thiscall FUN_005a10f0(void *this,int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_stack_0000001c;
  
  if ((((short)((uint)param_2 >> 0x10) == DAT_006558f6) && ((short)param_2 == 2)) &&
     (param_3 == DAT_006558f8)) {
    piVar5 = (int *)((int)this + in_stack_0000001c * 0x14 + 0x494);
    iVar2 = piVar5[1];
    iVar3 = piVar5[2];
    iVar4 = piVar5[3];
    *param_1 = *piVar5;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1[4] = *(int *)((int)this + in_stack_0000001c * 0x14 + 0x4a4);
    return param_1;
  }
  piVar5 = FUN_005a3210(this,param_2,param_3);
  iVar4 = iRam00655900;
  iVar3 = iRam006558fc;
  iVar2 = DAT_006558f8;
  if (piVar5 == (int *)0x0) {
    *param_1 = _DAT_006558f4;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1[4] = _DAT_00655904;
    return param_1;
  }
  piVar1 = piVar5 + in_stack_0000001c * 5 + 0xb;
  iVar2 = piVar1[1];
  iVar3 = piVar1[2];
  iVar4 = piVar1[3];
  *param_1 = *piVar1;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  param_1[3] = iVar4;
  param_1[4] = piVar5[in_stack_0000001c * 5 + 0xf];
  return param_1;
}


void __thiscall
FUN_005a11a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  *(short *)((int)this + param_6 * 0x14 + 0x4a4) = (short)param_5;
  *(undefined4 *)((int)this + param_6 * 0x14 + 0x494) = param_1;
  *(undefined4 *)((int)this + param_6 * 0x14 + 0x498) = param_2;
  *(undefined4 *)((int)this + param_6 * 0x14 + 0x49c) = param_3;
  *(undefined4 *)((int)this + param_6 * 0x14 + 0x4a0) = param_4;
  *(short *)((int)this + param_6 * 0x14 + 0x4a6) = (short)((uint)param_5 >> 0x10);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * __thiscall FUN_005a11e0(void *this,int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  uint uVar7;
  undefined2 uVar8;
  short sVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined4 local_14;
  
  local_14 = CONCAT22(DAT_00655906,DAT_00655904);
  sVar5 = (short)((uint)param_2 >> 0x10);
  if (((sVar5 == DAT_006558f6) && ((short)param_2 == 2)) && (param_3 == DAT_006558f8)) {
    iVar2 = *(int *)((int)this + 0x46c);
    iVar3 = *(int *)((int)this + 0x470);
    iVar4 = *(int *)((int)this + 0x474);
    *param_1 = *(int *)((int)this + 0x468);
    param_1[1] = iVar2;
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    param_1[4] = *(int *)((int)this + 0x478);
    return param_1;
  }
  uVar7 = 0;
  uVar14 = uRam00655900;
  uVar15 = uRam00655902;
  uVar8 = _DAT_006558f4;
  sVar9 = DAT_006558f6;
  uVar10 = (undefined2)DAT_006558f8;
  uVar11 = DAT_006558f8._2_2_;
  uVar12 = uRam006558fc;
  uVar13 = uRam006558fe;
  if (*(uint *)((int)this + 0xc) != 0) {
    piVar6 = (int *)(*(int *)((int)this + 0x22c) + 8);
    do {
      if (((*(short *)((int)piVar6 + -2) == sVar5) && ((short)piVar6[-1] == 2)) &&
         (*piVar6 == param_3)) {
        if ((char)piVar6[-2] != '\0') {
          piVar1 = piVar6 + 4;
          iVar2 = piVar1[1];
          iVar3 = piVar1[2];
          iVar4 = piVar1[3];
          *param_1 = *piVar1;
          param_1[1] = iVar2;
          param_1[2] = iVar3;
          param_1[3] = iVar4;
          param_1[4] = piVar6[8];
          return param_1;
        }
        if (((*(short *)((int)piVar6 + 0x12) != DAT_006558f6) || ((short)piVar6[4] != 2)) ||
           (piVar6[5] != DAT_006558f8)) {
          uVar8 = (undefined2)piVar6[4];
          sVar9 = *(short *)((int)piVar6 + 0x12);
          uVar10 = (undefined2)piVar6[5];
          uVar11 = *(undefined2 *)((int)piVar6 + 0x16);
          uVar12 = (undefined2)piVar6[6];
          uVar13 = *(undefined2 *)((int)piVar6 + 0x1a);
          uVar14 = (undefined2)piVar6[7];
          uVar15 = *(undefined2 *)((int)piVar6 + 0x1e);
          local_14 = piVar6[8];
        }
      }
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x484;
    } while (uVar7 < *(uint *)((int)this + 0xc));
  }
  *(undefined2 *)param_1 = uVar8;
  *(short *)((int)param_1 + 2) = sVar9;
  *(undefined2 *)(param_1 + 1) = uVar10;
  *(undefined2 *)((int)param_1 + 6) = uVar11;
  *(undefined2 *)(param_1 + 2) = uVar12;
  *(undefined2 *)((int)param_1 + 10) = uVar13;
  *(undefined2 *)(param_1 + 3) = uVar14;
  *(undefined2 *)((int)param_1 + 0xe) = uVar15;
  param_1[4] = local_14;
  return param_1;
}


void __thiscall FUN_005a1310(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0x454);
  uVar2 = *(undefined4 *)((int)this + 0x458);
  uVar3 = *(undefined4 *)((int)this + 0x45c);
  *param_1 = *(undefined4 *)((int)this + 0x450);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005a1330(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb8a8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_20 = 0;
  local_8 = 0;
  (**(code **)(*(int *)this + 0x124))(&local_20,local_14);
  uVar4 = uRam00655900;
  uVar3 = uRam006558fc;
  uVar2 = DAT_006558f8;
  if (local_20._4_4_ == 0) {
    *param_1 = _DAT_006558f4;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = _DAT_00655904;
  }
  else {
    iVar1 = *(int *)((int)(void *)local_20 + param_2 * 4);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    *param_1 = *(undefined4 *)(iVar1 + 0xc);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = *(undefined4 *)(iVar1 + 0x1c);
  }
  if (local_18 != 0) {
    free((void *)local_20);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall
FUN_005a1400(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  
  sVar4 = (short)((uint)param_1 >> 0x10);
  if (((sVar4 == DAT_006558f6) && ((short)param_1 == 2)) && (param_2 == DAT_006558f8)) {
    return (undefined4 *)((int)this + 0x450);
  }
  if (((short)(param_5 >> 0x10) != -1) && (param_5 >> 0x10 < *(uint *)((int)this + 0xc))) {
    iVar3 = (param_5 >> 0x10) * 0x1210;
    iVar1 = *(int *)((int)this + 0x22c);
    if ((*(short *)(iVar3 + 6 + iVar1) == sVar4) &&
       ((*(short *)(iVar3 + 4 + iVar1) == 2 && (*(int *)(iVar3 + 8 + iVar1) == param_2)))) {
      return (undefined4 *)(iVar1 + 0x11f0 + iVar3);
    }
  }
  uVar5 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    piVar2 = (int *)(*(int *)((int)this + 0x22c) + 8);
    do {
      if (((*(short *)((int)piVar2 + -2) == sVar4) && ((short)piVar2[-1] == 2)) &&
         (*piVar2 == param_2)) {
        *(short *)(uVar5 * 0x1210 + 0x11f8 + *(int *)((int)this + 0x22c)) = (short)uVar5;
        return (undefined4 *)(*(int *)((int)this + 0x22c) + 0x11f0 + uVar5 * 0x1210);
      }
      uVar5 = uVar5 + 1;
      piVar2 = piVar2 + 0x484;
    } while (uVar5 < *(uint *)((int)this + 0xc));
  }
  return &DAT_00655908;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __thiscall
FUN_005a14f0(void *this,undefined4 *param_1,int param_2,int param_3,ushort param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = uRam00655900;
  uVar3 = uRam006558fc;
  uVar2 = DAT_006558f8;
  if ((param_2 != DAT_00655908) || (param_3 != DAT_0065590c)) {
    if ((param_2 == *(int *)((int)this + 0x450)) && (param_3 == *(int *)((int)this + 0x454))) {
      (**(code **)(*(int *)this + 0xbc))
                (param_1,_DAT_006558f4,DAT_006558f8,uRam006558fc,uRam00655900,_DAT_00655904,0);
      return param_1;
    }
    if ((param_4 != 0xffff) && ((uint)param_4 < *(uint *)((int)this + 0xc))) {
      iVar5 = *(int *)((int)this + 0x22c) + (uint)param_4 * 0x1210;
      if ((*(int *)(iVar5 + 0x11f0) == param_2) && (*(int *)(iVar5 + 0x11f4) == param_3)) {
        uVar2 = *(undefined4 *)(iVar5 + 8);
        uVar3 = *(undefined4 *)(iVar5 + 0xc);
        uVar4 = *(undefined4 *)(iVar5 + 0x10);
        *param_1 = *(undefined4 *)(iVar5 + 4);
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        param_1[4] = *(undefined4 *)(iVar5 + 0x14);
        return param_1;
      }
    }
    uVar8 = 0;
    if (*(int *)((int)this + 0xc) != 0) {
      piVar6 = (int *)(*(int *)((int)this + 0x22c) + 0x11f0);
      do {
        if ((*piVar6 == param_2) && (piVar6[1] == param_3)) {
          iVar7 = uVar8 * 0x1210;
          *(short *)(iVar7 + 0x11f8 + *(int *)((int)this + 0x22c)) = (short)uVar8;
          iVar5 = *(int *)((int)this + 0x22c);
          puVar1 = (undefined4 *)(iVar5 + 4 + iVar7);
          uVar2 = puVar1[1];
          uVar3 = puVar1[2];
          uVar4 = puVar1[3];
          *param_1 = *puVar1;
          param_1[1] = uVar2;
          param_1[2] = uVar3;
          param_1[3] = uVar4;
          param_1[4] = *(undefined4 *)(iVar5 + 0x14 + iVar7);
          return param_1;
        }
        uVar8 = uVar8 + 1;
        piVar6 = piVar6 + 0x484;
      } while (uVar8 < *(uint *)((int)this + 0xc));
    }
  }
  *param_1 = _DAT_006558f4;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = _DAT_00655904;
  return param_1;
}


undefined1 FUN_005a1630(void)

{
  return 0;
}


void __thiscall FUN_005a1640(void *this,int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  if ((((short)((uint)param_2 >> 0x10) == DAT_006558f6) && ((short)param_2 == 2)) &&
     (param_3 == DAT_006558f8)) {
    uVar2 = 0;
    *(int *)((int)this + 0x44c) = param_1;
    if (*(int *)((int)this + 0xc) != 0) {
      iVar3 = 0;
      do {
        if (*(char *)(*(int *)((int)this + 0x22c) + iVar3) != '\0') {
          *(int *)(*(int *)((int)this + 0x22c) + 0x9b8 + iVar3) = param_1;
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x1210;
      } while (uVar2 < *(uint *)((int)this + 0xc));
      return;
    }
  }
  else {
    piVar1 = FUN_005a3210(this,param_2,param_3);
    if (piVar1 != (int *)0x0) {
      piVar1[0x26e] = param_1;
    }
  }
  return;
}


undefined4 __fastcall FUN_005a16e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44c);
}


int __thiscall FUN_005a1710(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  
  if ((((short)((uint)param_1 >> 0x10) != DAT_006558f6) || ((short)param_1 != 2)) ||
     (param_2 != DAT_006558f8)) {
    piVar1 = FUN_005a3210(this,param_1,param_2);
    if (piVar1 != (int *)0x0) {
      return piVar1[0x480];
    }
  }
  return *(int *)((int)this + 0x41c);
}


int __fastcall FUN_005a1770(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 == '\0') {
    FUN_005a9e90((int)param_1);
  }
  iVar3 = 0;
  for (piVar2 = param_1 + 0x126;
      ((*(short *)((int)piVar2 + -2) != DAT_006558f6 || ((short)piVar2[-1] != 2)) ||
      (*piVar2 != DAT_006558f8)); piVar2 = piVar2 + 5) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


undefined * __thiscall FUN_005a17c0(void *this,int param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)this + 0x3c))();
  if (cVar1 == '\0') {
    FUN_005a9e90((int)this);
  }
  FUN_0059d0f0((void *)((int)this + (param_1 * 5 + 0x125) * 4),'\0',&DAT_006607e8);
  return &DAT_006607e8;
}


uint __thiscall FUN_005a1800(void *this,byte *param_1)

{
  byte bVar1;
  uint in_EAX;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
LAB_005a18de:
    return in_EAX & 0xffffff00;
  }
  pbVar5 = &cp_005e4640;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_005a1847:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_005a184c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_005a1847;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_005a184c:
  if (uVar3 != 0) {
    pcVar4 = "localhost";
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_005a1880:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_005a1885;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_005a1880;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_005a1885:
    if (uVar3 != 0) {
      uVar3 = (**(code **)(*(int *)this + 0xe8))();
      iVar6 = 0;
      in_EAX = uVar3;
      if (0 < (int)uVar3) {
        do {
          pbVar5 = (byte *)(**(code **)(*(int *)this + 0xec))(iVar6);
          pbVar2 = param_1;
          do {
            bVar1 = *pbVar2;
            bVar7 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_005a18d0:
              in_EAX = -(uint)bVar7 | 1;
              goto LAB_005a18d5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar7 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_005a18d0;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          in_EAX = 0;
LAB_005a18d5:
          if (in_EAX == 0) {
            return 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uVar3);
      }
      goto LAB_005a18de;
    }
  }
  return 1;
}


void __thiscall FUN_005a1900(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x464) = param_1;
  return;
}


void __thiscall
FUN_005a1910(void *this,undefined4 param_1,undefined4 param_2,byte *param_3,size_t param_4,
            undefined4 param_5)

{
  uint uVar1;
  byte local_129;
  int local_128;
  uint local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  char local_118;
  undefined1 local_117 [259];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb8db;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  memset(&local_128,0,0x114);
  local_11c = local_117;
  local_128 = 0;
  local_124 = 0x800;
  local_120 = 0;
  local_118 = '\x01';
  local_8 = 0;
  local_129 = 0x1d;
  FUN_005ab3f0(&local_128,&local_129,8);
  FUN_005ab380(&local_128,param_3,param_4);
  (**(code **)(*(int *)this + 0x158))(param_1,param_2,local_11c,local_128 + 7U >> 3,param_5,uVar1);
  if ((local_118 != '\0') && (0x800 < local_124)) {
    free(local_11c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005a1a30(void *this,undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x47c) = param_1;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar2 + 1;
      *(undefined4 *)(uVar1 * 0x1210 + 0x108 + *(int *)((int)this + 0x22c)) =
           *(undefined4 *)((int)this + 0x47c);
      uVar1 = uVar2 & 0xffff;
    } while (uVar1 < *(uint *)((int)this + 0xc));
  }
  return;
}


undefined4 __fastcall FUN_005a1a80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x47c);
}


void __thiscall FUN_005a1a90(void *this,undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  *(undefined4 *)((int)this + 0x480) = param_1;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar4 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar1 = *(int *)((int)this + 0x22c);
      lVar2 = (ulonglong)*(uint *)((int)this + 0x480) * 1000;
      *(int *)(uVar4 * 0x1210 + 0x114 + iVar1) = (int)((ulonglong)lVar2 >> 0x20);
      *(int *)(uVar4 * 0x1210 + 0x110 + iVar1) = (int)lVar2;
      uVar4 = uVar3 & 0xffff;
    } while (uVar4 < *(uint *)((int)this + 0xc));
  }
  return;
}


void __thiscall
FUN_005a1af0(void *this,char *param_1,u_short param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_78 [12];
  char *local_6c;
  void *local_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 *local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18 [2];
  uint local_14;
  
  local_14 = DAT_0065500c ^ (uint)auStack_78;
  local_6c = param_1;
  local_18[0] = 0x100;
  local_68 = this;
  uVar3 = FUN_005a7a80(this,param_4);
  iVar1 = uVar3 * 4;
  iVar2 = *(int *)(*(int *)(iVar1 + *(int *)((int)this + 0x424)) + 8);
  local_64 = iVar1;
  if ((iVar2 != 3) && (iVar2 != 0)) {
    local_20 = 0xffff0000;
    local_1c = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    local_30 = 2;
    local_38 = local_18;
    local_34 = 2;
    FUN_0059d490(&local_30,local_6c,param_2);
    iVar1 = *(int *)(iVar1 + *(int *)((int)this + 0x424));
    local_60 = *(undefined4 *)(iVar1 + 0xc);
    uStack_5c = *(undefined4 *)(iVar1 + 0x10);
    uStack_58 = *(undefined4 *)(iVar1 + 0x14);
    uStack_54 = *(undefined4 *)(iVar1 + 0x18);
    local_50 = *(undefined4 *)(iVar1 + 0x1c);
    FUN_0059d1f0(&local_30,(short *)&local_60);
    uVar3 = 0;
    local_1c = param_3;
    if (*(int *)((int)this + 0x2dc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x2d8) + uVar3 * 4) + 0x2c))
                  (local_38,local_34 << 3,local_30,uStack_2c,uStack_28,uStack_24,local_20);
        uVar3 = uVar3 + 1;
        this = local_68;
      } while (uVar3 < *(uint *)((int)local_68 + 0x2dc));
    }
    (**(code **)(**(int **)(local_64 + *(int *)((int)this + 0x424)) + 4))
              (&local_38,"f:\\src\\ois\\libs\\raknet\\code\\rakpeer.cpp",0xabd);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_78);
  return;
}


void __thiscall FUN_005a1c40(void *this,int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  void *this_00;
  int *local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 0x2d0) != 0) {
      piVar3 = *(int **)((int)this + 0x2cc);
      do {
        if ((int *)*piVar3 == param_1) {
          if (uVar2 != 0xffffffff) goto LAB_005a1ce6;
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *(uint *)((int)this + 0x2d0));
    }
    param_1[1] = (int)this;
    (**(code **)(*param_1 + 4))();
    this_00 = (void *)((int)this + 0x2cc);
  }
  else {
    uVar2 = 0;
    if (*(uint *)((int)this + 0x2dc) != 0) {
      piVar3 = *(int **)((int)this + 0x2d8);
      do {
        if ((int *)*piVar3 == param_1) {
          if (uVar2 != 0xffffffff) goto LAB_005a1ce6;
          break;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *(uint *)((int)this + 0x2dc));
    }
    param_1[1] = (int)this;
    (**(code **)(*param_1 + 4))();
    this_00 = (void *)((int)this + 0x2d8);
  }
  FUN_0059b980(this_00,&local_c);
LAB_005a1ce6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005a1d00(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x28))();
    uVar3 = 0;
    if (cVar1 == '\0') {
      if (*(uint *)((int)this + 0x2d0) != 0) {
        piVar2 = *(int **)((int)this + 0x2cc);
        while ((int *)*piVar2 != param_1) {
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 1;
          if (*(uint *)((int)this + 0x2d0) <= uVar3) {
            (**(code **)(*param_1 + 8))();
            param_1[1] = 0;
            return;
          }
        }
        if (uVar3 != 0xffffffff) {
          *(undefined4 *)(*(int *)((int)this + 0x2cc) + uVar3 * 4) =
               *(undefined4 *)(*(int *)((int)this + 0x2cc) + -4 + *(int *)((int)this + 0x2d0) * 4);
          *(int *)((int)this + 0x2d0) = *(int *)((int)this + 0x2d0) + -1;
        }
      }
    }
    else if (*(uint *)((int)this + 0x2dc) != 0) {
      piVar2 = *(int **)((int)this + 0x2d8);
      while ((int *)*piVar2 != param_1) {
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
        if (*(uint *)((int)this + 0x2dc) <= uVar3) {
          (**(code **)(*param_1 + 8))();
          param_1[1] = 0;
          return;
        }
      }
      if (uVar3 != 0xffffffff) {
        *(undefined4 *)(*(int *)((int)this + 0x2d8) + uVar3 * 4) =
             *(undefined4 *)(*(int *)((int)this + 0x2d8) + -4 + *(int *)((int)this + 0x2dc) * 4);
        *(int *)((int)this + 0x2dc) = *(int *)((int)this + 0x2dc) + -1;
        (**(code **)(*param_1 + 8))();
        param_1[1] = 0;
        return;
      }
    }
    (**(code **)(*param_1 + 8))();
    param_1[1] = 0;
  }
  return;
}


void __thiscall FUN_005a1df0(void *this,undefined4 *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *this_00;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  if (param_1 != (undefined4 *)0x0) {
    local_10 = 0;
    if (*(int *)((int)this + 0x2d0) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x2cc) + local_10 * 4) + 0x40))
                  (param_1[0xc],param_1[0xb],*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
        local_10 = local_10 + 1;
      } while (local_10 < *(uint *)((int)this + 0x2d0));
    }
    local_10 = 0;
    if (*(int *)((int)this + 0x2dc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x2d8) + local_10 * 4) + 0x40))
                  (param_1[0xc],param_1[0xb],*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
        local_10 = local_10 + 1;
      } while (local_10 < *(uint *)((int)this + 0x2dc));
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
    this_00 = (int *)((int)this + 0x5b4);
    FUN_0059bac0(this_00,&local_c);
    if (param_2 != '\0') {
      uVar1 = *(uint *)((int)this + 0x5bc);
      uVar6 = *(uint *)((int)this + 0x5b8);
      puVar8 = (undefined4 *)(uVar1 - uVar6);
      puVar3 = puVar8;
      if (uVar1 < uVar6) {
        puVar3 = (undefined4 *)((*(int *)((int)this + 0x5c0) - uVar6) + uVar1);
      }
      if (puVar3 != (undefined4 *)0x1) {
        if (uVar1 < uVar6) {
          puVar8 = (undefined4 *)((*(int *)((int)this + 0x5c0) - uVar6) + uVar1);
        }
        iVar4 = (int)puVar8 + -2;
        while( true ) {
          puVar8 = (undefined4 *)((int)puVar8 + -1);
          iVar2 = *(int *)((int)this + 0x5b8);
          uVar1 = *(uint *)((int)this + 0x5c0);
          iVar7 = iVar2 - uVar1;
          if ((uint)(iVar4 + iVar2) < uVar1) {
            iVar7 = iVar2;
          }
          iVar5 = iVar2 - uVar1;
          if ((uint)(iVar2 + (int)puVar8) < uVar1) {
            iVar5 = *(int *)((int)this + 0x5b8);
          }
          *(undefined4 *)(*this_00 + (iVar5 + (int)puVar8) * 4) =
               *(undefined4 *)(*this_00 + (iVar7 + iVar4) * 4);
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
        }
        uVar1 = *(uint *)((int)this + 0x5b8);
        uVar6 = uVar1 - *(int *)((int)this + 0x5c0);
        if (uVar1 < *(uint *)((int)this + 0x5c0)) {
          uVar6 = uVar1;
        }
        *(undefined4 **)(*this_00 + uVar6 * 4) = param_1;
        local_c = puVar8;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall
FUN_005a1f70(void *this,undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = FUN_005aa700((int *)((int)this + 0x30c));
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(iVar4 + 0x20) = *param_5;
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)((int)param_5 + 0x12);
  *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(param_5 + 4);
  *(undefined4 *)(iVar4 + 0x10) = param_1;
  *(undefined4 *)(iVar4 + 0x14) = param_2;
  *(undefined2 *)(iVar4 + 0x18) = param_3;
  *(undefined4 *)(iVar4 + 0x6c) = 3;
  FUN_005aa610((int *)((int)this + 0x30c),iVar4);
  return;
}


void __thiscall FUN_005a1fe0(void *this,size_t param_1)

{
  FUN_0059d780(this,param_1);
  return;
}


// WARNING: Removing unreachable block (ram,0x005a2205)

void __thiscall
FUN_005a2000(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb918;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_005aa700((int *)((int)this + 0x30c));
  *(undefined4 *)(iVar2 + 0x6c) = 2;
  *(undefined4 *)(iVar2 + 0x10) = DAT_00655908;
  *(undefined4 *)(iVar2 + 0x14) = DAT_0065590c;
  *(undefined2 *)(iVar2 + 0x18) = DAT_00655910;
  *(undefined4 *)(iVar2 + 0x20) = param_1;
  *(undefined4 *)(iVar2 + 0x24) = param_2;
  *(undefined4 *)(iVar2 + 0x28) = param_3;
  *(undefined4 *)(iVar2 + 0x2c) = param_4;
  *(undefined4 *)(iVar2 + 0x30) = param_5;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  FUN_005aa610((void *)((int)this + 0x30c),iVar2);
  uVar5 = FUN_005ab130();
  uVar5 = __aulldiv((uint)uVar5,(uint)((ulonglong)uVar5 >> 0x20),1000,0);
  local_18 = 0;
  local_20 = 0;
  local_8 = 0;
  uVar6 = FUN_005ab130();
  uVar6 = __aulldiv((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),1000,0);
  uVar3 = (uint)uVar6;
  do {
    if (((int)uVar5 + 1000U <= uVar3) || (*(char *)((int)this + 9) == '\0')) goto LAB_005a21a1;
    Sleep(0);
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3ec));
    if (*(int *)((int)this + 0x3e0) == *(int *)((int)this + 0x3e4)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3ec));
    }
    else {
      iVar2 = *(int *)((int)this + 0x3e0) + 1;
      *(int *)((int)this + 0x3e0) = iVar2;
      iVar1 = *(int *)((int)this + 1000);
      if (iVar2 == iVar1) {
        *(undefined4 *)((int)this + 0x3e0) = 0;
        piVar4 = *(int **)(*(int *)((int)this + 0x3dc) + -4 + iVar1 * 4);
      }
      else if (iVar2 == 0) {
        piVar4 = *(int **)(*(int *)((int)this + 0x3dc) + -4 + iVar1 * 4);
      }
      else {
        piVar4 = *(int **)(*(int *)((int)this + 0x3dc) + -4 + iVar2 * 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3ec));
      if (piVar4 != (int *)0x0) {
        FUN_005aa4b0(&local_20,piVar4);
        if (piVar4[2] != 0) {
          free((void *)*piVar4);
          piVar4[2] = 0;
          *piVar4 = 0;
          piVar4[1] = 0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c4));
        FUN_005aaf80((void *)((int)this + 0x3b0),(int)piVar4);
        LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c4));
LAB_005a21a1:
        if (local_18 != 0) {
          free((void *)local_20);
        }
        ExceptionList = local_10;
        __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    uVar6 = FUN_005ab130();
    uVar6 = __aulldiv((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),1000,0);
    uVar3 = (uint)uVar6;
  } while( true );
}


// WARNING: Removing unreachable block (ram,0x005a239a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005a2250(void *this,undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1[2] != 0) {
    free((void *)*param_1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  iVar4 = FUN_005aa700((int *)((int)this + 0x30c));
  *(undefined4 *)(iVar4 + 0x6c) = 2;
  *(undefined4 *)(iVar4 + 0x10) = DAT_00655908;
  *(undefined4 *)(iVar4 + 0x14) = DAT_0065590c;
  *(undefined2 *)(iVar4 + 0x18) = DAT_00655910;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  *(undefined4 *)(iVar4 + 0x20) = _DAT_006558f4;
  *(undefined4 *)(iVar4 + 0x24) = uVar1;
  *(undefined4 *)(iVar4 + 0x28) = uVar2;
  *(undefined4 *)(iVar4 + 0x2c) = uVar3;
  *(undefined2 *)(iVar4 + 0x32) = DAT_00655906;
  *(undefined2 *)(iVar4 + 0x30) = DAT_00655904;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  FUN_005aa610((void *)((int)this + 0x30c),iVar4);
  if (*(char *)((int)this + 9) == '\0') {
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x3ec);
  do {
    Sleep(0);
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)((int)this + 0x3e0) == *(int *)((int)this + 0x3e4)) {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      iVar4 = *(int *)((int)this + 0x3e0) + 1;
      *(int *)((int)this + 0x3e0) = iVar4;
      if (iVar4 == *(int *)((int)this + 1000)) {
        *(undefined4 *)((int)this + 0x3e0) = 0;
        iVar4 = 0;
      }
      if (iVar4 == 0) {
        piVar5 = *(int **)(*(int *)((int)this + 0x3dc) + -4 + *(int *)((int)this + 1000) * 4);
      }
      else {
        piVar5 = *(int **)(*(int *)((int)this + 0x3dc) + -4 + iVar4 * 4);
      }
      LeaveCriticalSection(lpCriticalSection);
      if (piVar5 != (int *)0x0) {
        FUN_005aa4b0(param_1,piVar5);
        if (piVar5[2] != 0) {
          free((void *)*piVar5);
          piVar5[2] = 0;
          *piVar5 = 0;
          piVar5[1] = 0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c4));
        FUN_005aaf80((void *)((int)this + 0x3b0),(int)piVar5);
        LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c4));
        return;
      }
    }
    if (*(char *)((int)this + 9) == '\0') {
      return;
    }
  } while( true );
}


void FUN_005a23d0(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    free((void *)*param_1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


void __thiscall FUN_005a2400(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x460) = param_1;
  return;
}


void __thiscall FUN_005a2410(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  byte local_5;
  
  FUN_005ab3f0(param_1,&local_5,8);
  FUN_005aa070(param_1,(byte *)((int)this + 0x450));
  uVar1 = (*param_1 - (*param_1 - 1 & 7)) + 7;
  *param_1 = uVar1;
  if ((uVar1 & 7) == 0) {
    FUN_005ab5d0(param_1,0x80);
    puVar2 = (undefined4 *)((*param_1 + 7 >> 3) + param_1[3]);
    *puVar2 = 0xffff00;
    puVar2[1] = 0xfefefefe;
    puVar2[2] = 0xfdfdfdfd;
    puVar2[3] = 0x78563412;
    *param_1 = *param_1 + 0x80;
    return;
  }
  FUN_005ab3f0(param_1,(byte *)&DAT_005e0e24,0x80);
  return;
}


void __thiscall FUN_005a24a0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x560) = param_1;
  *(undefined4 *)((int)this + 0x564) = param_2;
  return;
}


void __thiscall FUN_005a24c0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x484) = param_1;
  return;
}


void __thiscall
FUN_005a24d0(void *this,char *param_1,u_short param_2,byte *param_3,size_t param_4,int param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  char *local_150;
  byte *local_14c;
  undefined1 *local_148;
  uint local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  uint local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  char local_118;
  undefined1 local_117 [259];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb94b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14c = param_3;
  local_150 = param_1;
  cVar2 = (**(code **)(*(int *)this + 0x3c))(local_14);
  if (((cVar2 != '\0') && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    memset(&local_128,0,0x114);
    local_11c = local_117;
    local_128 = 0;
    local_124 = 0x800;
    local_120 = 0;
    local_118 = '\x01';
    local_8 = 0;
    (**(code **)(*(int *)this + 300))(&local_128);
    if (param_4 != 0) {
      FUN_005ab240(&local_128,local_14c,param_4);
    }
    uVar3 = FUN_005a7a80(this,param_5);
    local_130 = 0xffff0000;
    local_12c = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    local_140 = 2;
    local_148 = local_11c;
    local_144 = local_128 + 7U >> 3;
    FUN_0059d490(&local_140,local_150,param_2);
    local_150 = (char *)(uVar3 * 4);
    iVar1 = *(int *)(local_150 + *(int *)((int)this + 0x424));
    local_164 = *(undefined4 *)(iVar1 + 0xc);
    uStack_160 = *(undefined4 *)(iVar1 + 0x10);
    uStack_15c = *(undefined4 *)(iVar1 + 0x14);
    uStack_158 = *(undefined4 *)(iVar1 + 0x18);
    local_154 = *(undefined4 *)(iVar1 + 0x1c);
    FUN_0059d1f0(&local_140,(short *)&local_164);
    local_14c = (byte *)0x0;
    if (*(int *)((int)this + 0x2dc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x2d8) + (int)local_14c * 4) + 0x2c))
                  (local_148,local_144 << 3,local_140,uStack_13c,uStack_138,uStack_134,local_130);
        local_14c = local_14c + 1;
      } while (local_14c < *(byte **)((int)this + 0x2dc));
    }
    (**(code **)(**(int **)(local_150 + *(int *)((int)this + 0x424)) + 4))
              (&local_148,"f:\\src\\ois\\libs\\raknet\\code\\rakpeer.cpp",0xbe5);
    if ((local_118 != '\0') && (0x800 < local_124)) {
      free(local_11c);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005a2720(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *in_stack_00000018;
  undefined1 auStack_fc [3];
  char local_f9;
  uint local_f8;
  void *local_f4;
  uint local_f0 [4];
  uint local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  int local_84;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_fc;
  puVar5 = (uint *)&DAT_00660708;
  if (in_stack_00000018 != (uint *)0x0) {
    puVar5 = in_stack_00000018;
  }
  local_f4 = this;
  if ((((short)((uint)param_1 >> 0x10) == DAT_006558f6) && ((short)param_1 == 2)) &&
     (param_2 == DAT_006558f8)) {
    local_f9 = '\0';
    local_f8 = 0;
    if (*(int *)((int)this + 0xc) != 0) {
      uVar2 = 0;
      do {
        uVar1 = local_f8;
        local_f8 = uVar1;
        if (*(char *)(uVar2 * 0x1210 + *(int *)((int)this + 0x22c)) != '\0') {
          FUN_0059aa70((void *)(*(int *)((int)this + 0x22c) + uVar2 * 0x1210 + 0xf8),local_f0);
          if (local_f9 == '\0') {
            local_f9 = '\x01';
            puVar6 = local_f0;
            puVar7 = puVar5;
            for (iVar4 = 0x38; this = local_f4, iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            puVar5[0x26] = puVar5[0x26] + local_58;
            *(double *)(puVar5 + 0x2a) = *(double *)(puVar5 + 0x2a) + local_48;
            puVar5[0x27] = puVar5[0x27] + local_54;
            *(double *)(puVar5 + 0x2c) = local_40 + *(double *)(puVar5 + 0x2c);
            puVar5[0x28] = puVar5[0x28] + local_50;
            *(double *)(puVar5 + 0x2e) = *(double *)(puVar5 + 0x2e) + local_38;
            puVar5[0x29] = puVar5[0x29] + local_4c;
            *(double *)(puVar5 + 0x30) = local_30 + *(double *)(puVar5 + 0x30);
            uVar2 = *puVar5;
            *puVar5 = *puVar5 + local_f0[0];
            puVar5[1] = puVar5[1] + local_f0[1] + (uint)CARRY4(uVar2,local_f0[0]);
            puVar6 = puVar5 + 0xe;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_b8;
            puVar5[0xf] = puVar5[0xf] + local_b4 + (uint)CARRY4(uVar2,local_b8);
            puVar6 = puVar5 + 2;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_f0[2];
            puVar5[3] = puVar5[3] + local_f0[3] + (uint)CARRY4(uVar2,local_f0[2]);
            puVar6 = puVar5 + 0x10;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_b0;
            puVar5[0x11] = puVar5[0x11] + local_ac + (uint)CARRY4(uVar2,local_b0);
            puVar6 = puVar5 + 4;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_e0;
            puVar5[5] = puVar5[5] + local_dc + (uint)CARRY4(uVar2,local_e0);
            puVar6 = puVar5 + 0x12;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_a8;
            puVar5[0x13] = puVar5[0x13] + local_a4 + (uint)CARRY4(uVar2,local_a8);
            puVar6 = puVar5 + 6;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_d8;
            puVar5[7] = puVar5[7] + local_d4 + (uint)CARRY4(uVar2,local_d8);
            puVar6 = puVar5 + 0x14;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_a0;
            puVar5[0x15] = puVar5[0x15] + local_9c + (uint)CARRY4(uVar2,local_a0);
            puVar6 = puVar5 + 8;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_d0;
            puVar5[9] = puVar5[9] + local_cc + (uint)CARRY4(uVar2,local_d0);
            puVar6 = puVar5 + 0x16;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_98;
            puVar5[0x17] = puVar5[0x17] + local_94 + (uint)CARRY4(uVar2,local_98);
            puVar6 = puVar5 + 10;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_c8;
            puVar5[0xb] = puVar5[0xb] + local_c4 + (uint)CARRY4(uVar2,local_c8);
            puVar6 = puVar5 + 0x18;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_90;
            puVar5[0x19] = puVar5[0x19] + local_8c + (uint)CARRY4(uVar2,local_90);
            puVar6 = puVar5 + 0xc;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_c0;
            puVar5[0xd] = puVar5[0xd] + local_bc + (uint)CARRY4(uVar2,local_c0);
            puVar6 = puVar5 + 0x1a;
            uVar2 = *puVar6;
            *puVar6 = *puVar6 + local_88;
            puVar5[0x1b] = puVar5[0x1b] + local_84 + (uint)CARRY4(uVar2,local_88);
            local_f8 = uVar1;
          }
        }
        local_f8 = local_f8 + 1;
        uVar2 = local_f8 & 0xffff;
      } while (uVar2 < *(uint *)((int)this + 0xc));
    }
    __security_check_cookie(local_c ^ (uint)auStack_fc);
    return;
  }
  piVar3 = FUN_005a3210(this,param_1,param_2);
  if ((piVar3 != (int *)0x0) && (*(char *)((int)this + 8) == '\0')) {
    FUN_0059aa70(piVar3 + 0x3e,puVar5);
    __security_check_cookie(local_c ^ (uint)auStack_fc);
    return;
  }
  __security_check_cookie(local_c ^ (uint)auStack_fc);
  return;
}


void __thiscall FUN_005a29e0(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *_Memory;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint local_f0;
  undefined4 local_e8 [57];
  
  if (param_1[2] != 0) {
    free((void *)*param_1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (param_2[2] != 0) {
    free((void *)*param_2);
    param_2[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  if (param_3[2] != 0) {
    free((void *)*param_3);
    param_3[2] = 0;
    *param_3 = 0;
    param_3[1] = 0;
  }
  if (((*(int *)((int)this + 0x22c) != 0) && (*(char *)((int)this + 8) != '\x01')) &&
     (local_f0 = 0, *(int *)((int)this + 0x234) != 0)) {
    do {
      iVar3 = local_f0 * 4;
      pcVar1 = *(char **)(iVar3 + *(int *)((int)this + 0x230));
      if ((*pcVar1 != '\0') && (*(int *)(pcVar1 + 0x120c) == 7)) {
        FUN_005aa2e0(param_1,(undefined4 *)(pcVar1 + 4));
        FUN_005aa3a0(param_2,(undefined4 *)(*(int *)(*(int *)((int)this + 0x230) + iVar3) + 0x11f0))
        ;
        FUN_0059aa70((void *)(*(int *)(*(int *)((int)this + 0x230) + iVar3) + 0xf8),local_e8);
        iVar4 = param_3[1];
        iVar3 = param_3[2];
        if (iVar4 == iVar3) {
          if (iVar3 == 0) {
            param_3[2] = 0x10;
            uVar2 = 0x10;
LAB_005a2b22:
            iVar3 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar2 * 0xe0 >> 0x20) != 0) |
                                 (uint)((ulonglong)uVar2 * 0xe0));
            iVar4 = param_3[1];
          }
          else {
            uVar2 = iVar3 * 2;
            param_3[2] = uVar2;
            if (uVar2 != 0) goto LAB_005a2b22;
            iVar3 = 0;
          }
          _Memory = (void *)*param_3;
          if (_Memory != (void *)0x0) {
            uVar2 = 0;
            if (iVar4 != 0) {
              iVar4 = 0;
              do {
                puVar6 = (undefined4 *)(*param_3 + iVar4);
                puVar7 = (undefined4 *)(iVar4 + iVar3);
                for (iVar5 = 0x38; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                uVar2 = uVar2 + 1;
                iVar4 = iVar4 + 0xe0;
              } while (uVar2 < (uint)param_3[1]);
              _Memory = (void *)*param_3;
            }
            free(_Memory);
          }
          *param_3 = iVar3;
        }
        else {
          iVar3 = *param_3;
        }
        puVar6 = local_e8;
        puVar7 = (undefined4 *)(param_3[1] * 0xe0 + iVar3);
        for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        param_3[1] = param_3[1] + 1;
      }
      local_f0 = local_f0 + 1;
    } while (local_f0 < *(uint *)((int)this + 0x234));
  }
  return;
}


undefined4 __thiscall FUN_005a2bd0(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 < *(uint *)((int)this + 0xc)) {
    iVar2 = param_1 * 0x1210;
    param_1 = *(uint *)((int)this + 0x22c);
    if (*(char *)(iVar2 + param_1) != '\0') {
      puVar1 = FUN_0059aa70((void *)(param_1 + 0xf8 + iVar2),param_2);
      return CONCAT31((int3)((uint)puVar1 >> 8),1);
    }
  }
  return param_1 & 0xffffff00;
}


int __fastcall FUN_005a2c10(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x59c);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)(param_1 + 0x5b8);
  uVar2 = *(uint *)(param_1 + 0x5bc);
  if (uVar1 <= uVar2) {
    LeaveCriticalSection(lpCriticalSection);
    return uVar2 - uVar1;
  }
  iVar3 = *(int *)(param_1 + 0x5c0);
  LeaveCriticalSection(lpCriticalSection);
  return uVar2 + (iVar3 - uVar1);
}


uint __thiscall
FUN_005a2c60(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  
  sVar6 = (short)((uint)param_1 >> 0x10);
  if (((sVar6 != DAT_006558f6) || ((short)param_1 != 2)) || (param_2 != DAT_006558f8)) {
    uVar2 = param_5 >> 0x10;
    if (((short)(param_5 >> 0x10) != -1) && (uVar2 < *(uint *)((int)this + 0xc))) {
      iVar1 = *(int *)((int)this + 0x22c);
      iVar4 = uVar2 * 0x1210;
      if (((*(short *)(iVar4 + 6 + iVar1) == sVar6) &&
          ((*(short *)(iVar4 + 4 + iVar1) == 2 && (*(int *)(iVar4 + 8 + iVar1) == param_2)))) &&
         (*(char *)(iVar4 + iVar1) != '\0')) {
        return uVar2;
      }
    }
    if (param_6 != '\0') {
      uVar2 = FUN_005a4230(this,(int)&param_1);
      return uVar2;
    }
    uVar2 = *(uint *)((int)this + 0xc);
    uVar5 = 0;
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)((int)this + 0x22c) + 8);
      do {
        if (((((char)piVar3[-2] != '\0') && (*(short *)((int)piVar3 + -2) == sVar6)) &&
            ((short)piVar3[-1] == 2)) && (*piVar3 == param_2)) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 0x484;
      } while (uVar5 < uVar2);
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)((int)this + 0x22c) + 8);
      do {
        if (((*(short *)((int)piVar3 + -2) == sVar6) && ((short)piVar3[-1] == 2)) &&
           (*piVar3 == param_2)) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 0x484;
      } while (uVar5 < uVar2);
    }
  }
  return 0xffffffff;
}


undefined4 __thiscall
FUN_005a2d70(void *this,char *param_1,u_short param_2,void *param_3,size_t param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  short *psVar2;
  bool bVar3;
  char cVar4;
  u_short uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined2 local_1c;
  u_short uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_c = 0xffff0000;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  local_1c = 2;
  cVar4 = FUN_0059d270(&local_1c,param_1);
  if (cVar4 == '\0') {
    return 2;
  }
  uStack_1a = htons(param_2);
  uVar5 = ntohs(uStack_1a);
  local_c._0_2_ = uVar5;
  piVar6 = FUN_005a3210(this,CONCAT22(uStack_1a,local_1c),CONCAT22(uStack_16,uStack_18));
  if (piVar6 != (int *)0x0) {
    return 3;
  }
  puVar7 = (undefined4 *)FUN_005adb0f(0x150);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0xffff0000;
  *(undefined2 *)((int)puVar7 + 0x12) = local_c._2_2_;
  *(u_short *)(puVar7 + 4) = uVar5;
  *puVar7 = CONCAT22(uStack_1a,local_1c);
  puVar7[1] = CONCAT22(uStack_16,uStack_18);
  puVar7[2] = uStack_14;
  puVar7[3] = uStack_10;
  local_8 = puVar7;
  uVar11 = FUN_005ab130();
  uVar11 = __aulldiv((uint)uVar11,(uint)((ulonglong)uVar11 >> 0x20),1000,0);
  puVar7[6] = (int)uVar11;
  puVar7[7] = 0;
  *(undefined1 *)(puVar7 + 8) = 0;
  puVar7[9] = 0;
  puVar7[0x51] = 0;
  puVar7[0x4c] = 0;
  puVar7[0x4b] = param_6;
  puVar7[0x52] = 1;
  puVar7[0x4d] = param_8;
  puVar7[0x4e] = param_9;
  memcpy((void *)((int)puVar7 + 0x2a),param_3,param_4);
  *(char *)((int)puVar7 + 0x12a) = (char)param_4;
  puVar7[0x4f] = param_10;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2f4);
  uVar10 = 0;
  EnterCriticalSection(lpCriticalSection);
  do {
    uVar1 = *(uint *)((int)this + 0x2e8);
    if (*(uint *)((int)this + 0x2ec) < uVar1) {
      iVar9 = *(int *)((int)this + 0x2f0) - uVar1;
    }
    else {
      iVar9 = -uVar1;
    }
    if (*(uint *)((int)this + 0x2ec) + iVar9 <= uVar10) {
      FUN_0059bac0((int *)((int)this + 0x2e4),&local_8);
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    uVar8 = uVar1 + uVar10;
    if (*(uint *)((int)this + 0x2f0) <= uVar8) {
      uVar8 = (uVar1 - *(uint *)((int)this + 0x2f0)) + uVar10;
    }
    psVar2 = *(short **)(*(int *)((int)this + 0x2e4) + uVar8 * 4);
    if (psVar2[1] == uStack_1a) {
      if ((*psVar2 == 2) && (*(int *)(psVar2 + 2) == CONCAT22(uStack_16,uStack_18))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) goto LAB_005a2f21;
      bVar3 = true;
    }
    else {
LAB_005a2f21:
      bVar3 = false;
    }
    if (bVar3) {
      LeaveCriticalSection(lpCriticalSection);
      FUN_005adb3f(puVar7);
      return 4;
    }
    uVar10 = uVar10 + 1;
  } while( true );
}


undefined4 FUN_005a2f51(void)

{
  void *unaff_EBX;
  int unaff_EBP;
  
  FUN_0059bac0(unaff_EBX,(undefined4 *)(unaff_EBP + -4));
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + 8));
  return 0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __thiscall
FUN_005a2f80(void *this,char *param_1,u_short param_2,void *param_3,size_t param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  short *psVar2;
  bool bVar3;
  char cVar4;
  u_short uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined2 local_2c;
  u_short uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 *local_8;
  
  local_1c = -0x10000;
  uStack_2a = 0;
  uStack_28 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_2c = 2;
  cVar4 = FUN_0059d270(&local_2c,param_1);
  if (cVar4 == '\0') {
    local_2c = (undefined2)_DAT_006558e0;
    uStack_2a = (u_short)((uint)_DAT_006558e0 >> 0x10);
    uStack_28 = (undefined2)DAT_006558e4;
    uStack_26 = (undefined2)((uint)DAT_006558e4 >> 0x10);
    uStack_24 = uRam006558e8;
    uStack_20 = uRam006558ec;
    local_1c = (uint)DAT_006558f2 << 0x10;
    local_18 = _DAT_006558e0;
    iStack_14 = DAT_006558e4;
    uVar10 = DAT_006558f2;
    uVar5 = DAT_006558f0;
  }
  else {
    uStack_2a = htons(param_2);
    uVar5 = ntohs(uStack_2a);
    local_18 = CONCAT22(uStack_2a,local_2c);
    iStack_14 = CONCAT22(uStack_26,uStack_28);
    uVar10 = local_1c._2_2_;
  }
  local_1c = CONCAT22(local_1c._2_2_,uVar5);
  uStack_10 = uStack_24;
  uStack_c = uStack_20;
  piVar6 = FUN_005a3210(this,local_18,iStack_14);
  if (piVar6 != (int *)0x0) {
    return 3;
  }
  puVar7 = (undefined4 *)FUN_005adb0f(0x150);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0xffff0000;
  *(ushort *)((int)puVar7 + 0x12) = uVar10;
  *(u_short *)(puVar7 + 4) = uVar5;
  *puVar7 = local_18;
  puVar7[1] = iStack_14;
  puVar7[2] = uStack_10;
  puVar7[3] = uStack_c;
  local_8 = puVar7;
  uVar12 = FUN_005ab130();
  uVar12 = __aulldiv((uint)uVar12,(uint)((ulonglong)uVar12 >> 0x20),1000,0);
  puVar7[6] = (int)uVar12;
  puVar7[7] = 0;
  *(undefined1 *)(puVar7 + 8) = 0;
  puVar7[9] = 0;
  puVar7[0x51] = 0;
  puVar7[0x4c] = 0;
  puVar7[0x4b] = 0;
  puVar7[0x52] = 1;
  puVar7[0x4d] = in_stack_00000020;
  puVar7[0x4e] = in_stack_00000024;
  memcpy((void *)((int)puVar7 + 0x2a),param_3,param_4);
  *(char *)((int)puVar7 + 0x12a) = (char)param_4;
  puVar7[0x4f] = in_stack_00000028;
  puVar7[0x51] = in_stack_0000002c;
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2f4);
  uVar11 = 0;
  EnterCriticalSection(lpCriticalSection);
  do {
    uVar1 = *(uint *)((int)this + 0x2e8);
    if (*(uint *)((int)this + 0x2ec) < uVar1) {
      iVar9 = *(int *)((int)this + 0x2f0) - uVar1;
    }
    else {
      iVar9 = -uVar1;
    }
    if (*(uint *)((int)this + 0x2ec) + iVar9 <= uVar11) {
      FUN_0059bac0((int *)((int)this + 0x2e4),&local_8);
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    uVar8 = uVar1 + uVar11;
    if (*(uint *)((int)this + 0x2f0) <= uVar8) {
      uVar8 = (uVar1 - *(uint *)((int)this + 0x2f0)) + uVar11;
    }
    psVar2 = *(short **)(*(int *)((int)this + 0x2e4) + uVar8 * 4);
    if (psVar2[1] == uStack_2a) {
      if ((*psVar2 == 2) && (*(int *)(psVar2 + 2) == CONCAT22(uStack_26,uStack_28))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) goto LAB_005a315b;
      bVar3 = true;
    }
    else {
LAB_005a315b:
      bVar3 = false;
    }
    if (bVar3) {
      LeaveCriticalSection(lpCriticalSection);
      FUN_005adb3f(puVar7);
      return 4;
    }
    uVar11 = uVar11 + 1;
  } while( true );
}


undefined4 FUN_005a318c(void)

{
  void *unaff_EBX;
  int unaff_EBP;
  
  FUN_0059bac0(unaff_EBX,(undefined4 *)(unaff_EBP + -4));
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + 0xc));
  return 0;
}


void __thiscall
FUN_005a31b0(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  char in_stack_00000030;
  
  if ((param_1 == DAT_00655908) && (param_2 == DAT_0065590c)) {
    FUN_005a3210(this,param_5,param_6);
    return;
  }
  FUN_005a3300(this,param_1,param_2,param_3,param_4,in_stack_00000030);
  return;
}


int * __thiscall FUN_005a3210(void *this,undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char in_stack_00000018;
  char in_stack_0000001c;
  
  sVar1 = (short)((uint)param_1 >> 0x10);
  if (((sVar1 != DAT_006558f6) || ((short)param_1 != 2)) || (param_2 != DAT_006558f8)) {
    if (in_stack_00000018 == '\0') {
      uVar4 = 0xffffffff;
      uVar5 = 0;
      if (*(uint *)((int)this + 0xc) != 0) {
        piVar3 = (int *)(*(int *)((int)this + 0x22c) + 8);
        do {
          if (((*(short *)((int)piVar3 + -2) == sVar1) && ((short)piVar3[-1] == 2)) &&
             (*piVar3 == param_2)) {
            if ((char)piVar3[-2] != '\0') {
              return piVar3 + -2;
            }
            if (uVar4 == 0xffffffff) {
              uVar4 = uVar5;
            }
          }
          uVar5 = uVar5 + 1;
          piVar3 = piVar3 + 0x484;
        } while (uVar5 < *(uint *)((int)this + 0xc));
        if ((uVar4 != 0xffffffff) && (in_stack_0000001c == '\0')) {
          return (int *)(uVar4 * 0x1210 + *(int *)((int)this + 0x22c));
        }
      }
    }
    else {
      iVar2 = FUN_005a4230(this,(int)&param_1);
      if (iVar2 != -1) {
        if ((in_stack_0000001c == '\0') ||
           (*(char *)(iVar2 * 0x1210 + *(int *)((int)this + 0x22c)) == '\x01')) {
          return (int *)(*(int *)((int)this + 0x22c) + iVar2 * 0x1210);
        }
      }
    }
  }
  return (int *)0x0;
}


char * __thiscall
FUN_005a3300(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  char *pcVar1;
  uint uVar2;
  
  if ((param_1 != DAT_00655908) || (param_2 != DAT_0065590c)) {
    uVar2 = 0;
    if (*(uint *)((int)this + 0xc) != 0) {
      pcVar1 = *(char **)((int)this + 0x22c);
      do {
        if ((*(int *)(pcVar1 + 0x11f0) == param_1) && (*(int *)(pcVar1 + 0x11f4) == param_2)) {
          if (param_5 == '\0') {
            return pcVar1;
          }
          if (*pcVar1 != '\0') {
            return pcVar1;
          }
        }
        uVar2 = uVar2 + 1;
        pcVar1 = pcVar1 + 0x1210;
      } while (uVar2 < *(uint *)((int)this + 0xc));
    }
  }
  return (char *)0x0;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005a3360(void *this,int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  undefined8 uVar7;
  int in_stack_fffffd6c;
  int in_stack_fffffd70;
  ushort in_stack_fffffd74;
  undefined4 in_stack_fffffd78;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint local_250;
  uint local_24c;
  int local_248;
  int local_244;
  char local_240;
  int local_13c;
  uint local_138;
  undefined4 local_134;
  undefined1 *local_130;
  char local_12c;
  undefined1 local_12b [259];
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [5];
  byte local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb996;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  memset(&local_250,0,0x114);
  local_250 = param_4 * 8;
  local_240 = '\0';
  local_244 = param_3;
  local_8 = 0;
  local_28 = DAT_006558d0;
  local_24 = DAT_006558d4;
  local_20[0] = DAT_006558d8;
  local_248 = 8;
  local_24c = local_250;
  FUN_005aa1f0(&local_250,(undefined1 *)&local_28);
  FUN_005aa1f0(&local_250,(undefined1 *)local_20);
  FUN_005ab4c0(&local_250,&local_15,8);
  uVar4 = local_248 + 7U >> 3;
  piVar5 = (int *)(local_244 + uVar4);
  if ((uint)*(byte *)((int)this + 0x228) == param_4 - uVar4) {
    piVar2 = (int *)((int)this + 0x128);
    uVar4 = (uint)*(byte *)((int)this + 0x228);
    while (uVar12 = uVar4 - 4, 3 < uVar4) {
      if (*piVar5 != *piVar2) goto LAB_005a3486;
      piVar5 = piVar5 + 1;
      piVar2 = piVar2 + 1;
      uVar4 = uVar12;
    }
    if (uVar12 != 0xfffffffc) {
LAB_005a3486:
      if (((char)*piVar5 != (char)*piVar2) ||
         ((uVar12 != 0xfffffffd &&
          ((*(char *)((int)piVar5 + 1) != *(char *)((int)piVar2 + 1) ||
           ((uVar12 != 0xfffffffe &&
            ((*(char *)((int)piVar5 + 2) != *(char *)((int)piVar2 + 2) ||
             ((uVar12 != 0xffffffff && (*(char *)((int)piVar5 + 3) != *(char *)((int)piVar2 + 3)))))
            )))))))) goto LAB_005a3518;
    }
    *(undefined4 *)(param_1 + 0x120c) = 5;
    FUN_005a3650(this,param_1);
    pcVar6 = free_exref;
  }
  else {
LAB_005a3518:
    memset(&local_13c,0,0x114);
    local_130 = local_12b;
    local_13c = 0;
    local_138 = 0x800;
    local_134 = 0;
    local_12c = '\x01';
    local_8 = CONCAT31(local_8._1_3_,1);
    local_15 = 0x18;
    FUN_005ab3f0(&local_13c,&local_15,8);
    uVar8 = 0x5a359b;
    iVar9 = _DAT_006558f4;
    uVar10 = DAT_006558f8;
    uVar11 = uRam006558fc;
    pbVar3 = (byte *)(**(code **)(*(int *)this + 0xd0))();
    uVar12 = 0x5a35a7;
    FUN_005aa070(&local_13c,pbVar3);
    uVar7 = FUN_005ab130();
    puVar1 = local_130;
    uVar4 = local_13c + 7;
    FUN_0059d640(&stack0xfffffd6c,param_2);
    FUN_005a4d90(this,puVar1,uVar4 >> 3,0,2,0,'\0','\0',(uint)uVar7,(uint)((ulonglong)uVar7 >> 0x20)
                 ,0,in_stack_fffffd6c,in_stack_fffffd70,in_stack_fffffd74,in_stack_fffffd78,uVar8,
                 iVar9,uVar10,uVar11,uVar12);
    *(undefined4 *)(param_1 + 0x120c) = 2;
    pcVar6 = free_exref;
    if ((local_12c != '\0') && (0x800 < local_138)) {
      free(local_130);
    }
  }
  if ((local_240 != '\0') && (0x800 < local_24c)) {
    (*pcVar6)();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005a3650(void *this,int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined2 uVar3;
  short *psVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 uStack_146;
  int local_130;
  uint local_12c;
  undefined4 local_128;
  undefined1 *local_124;
  char local_120;
  undefined1 local_11f [259];
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb9cb;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  memset(&local_130,0,0x114);
  local_124 = local_11f;
  local_130 = 0;
  local_12c = 0x800;
  local_128 = 0;
  local_120 = '\x01';
  local_8 = 0;
  local_1c = CONCAT17(0x10,(undefined7)local_1c);
  FUN_005ab3f0(&local_130,(byte *)((int)&local_1c + 7),8);
  local_1c = CONCAT17((*(short *)(param_1 + 4) != 2) * '\x02' + '\x04',(undefined7)local_1c);
  FUN_005ab3f0(&local_130,(byte *)((int)&local_1c + 7),8);
  if (*(short *)(param_1 + 4) == 2) {
    uVar10 = *(undefined4 *)(param_1 + 4);
    local_1c = CONCAT44(~*(uint *)(param_1 + 8),(undefined4)local_1c);
    FUN_005ab3f0(&local_130,(byte *)((int)&local_1c + 4),0x20);
    uStack_146 = (undefined2)((uint)uVar10 >> 0x10);
    local_1c = (ulonglong)CONCAT24(uStack_146,(undefined4)local_1c);
    FUN_005ab3f0(&local_130,(byte *)((int)&local_1c + 4),0x10);
  }
  uVar10 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_005a2c60(this,uVar10,*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 0x10),*(uint *)(param_1 + 0x14),'\x01');
  local_1c = CONCAT44(uVar2,(undefined4)local_1c) & 0xffffffffffff;
  uVar3 = (short)uVar2;
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
    FUN_005ade89(&DAT_0066086c);
    if (DAT_0066086c == -1) {
      DAT_00660868 = htonl(0x3039);
      FUN_005ade3f(&DAT_0066086c);
    }
    uVar3 = local_1c._4_2_;
  }
  uVar1 = local_1c;
  if (DAT_00660868 != 0x3039) {
    local_1c._6_2_ = SUB82(uVar1,6);
    local_1c._0_6_ = CONCAT15((char)uVar3,CONCAT14((char)((ushort)uVar3 >> 8),(undefined4)local_1c))
    ;
  }
  FUN_005ab3f0(&local_130,(byte *)((int)&local_1c + 4),0x10);
  psVar4 = (short *)((int)this + 0x494);
  iVar5 = 10;
  do {
    local_1c = CONCAT17((*psVar4 != 2) * '\x02' + '\x04',(undefined7)local_1c);
    FUN_005ab3f0(&local_130,(byte *)((int)&local_1c + 7),8);
    if (*psVar4 == 2) {
      uVar11 = *(undefined4 *)psVar4;
      local_1c = CONCAT44(~*(uint *)(psVar4 + 2),(undefined4)local_1c);
      FUN_005ab3f0(&local_130,(byte *)((int)&local_1c + 4),0x20);
      uStack_146 = (undefined2)((uint)uVar11 >> 0x10);
      local_1c = (ulonglong)CONCAT24(uStack_146,(undefined4)local_1c);
      FUN_005ab3f0(&local_130,(byte *)((int)&local_1c + 4),0x10);
    }
    psVar4 = psVar4 + 10;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_005aa070(&local_130,&stack0x00000008);
  uVar6 = FUN_005ab130();
  local_1c = __aulldiv((uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20),1000,0);
  FUN_005aa070(&local_130,(byte *)&local_1c);
  uVar11 = *(undefined4 *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  uVar12 = *(undefined4 *)(param_1 + 0xc);
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar7 = DAT_00655908;
  iVar8 = DAT_0065590c;
  uVar9 = DAT_00655910;
  uVar6 = FUN_005ab130();
  FUN_005a4d90(this,local_124,local_130,0,3,0,'\0','\0',(uint)uVar6,(uint)((ulonglong)uVar6 >> 0x20)
               ,0,iVar7,iVar8,uVar9,uVar10,uVar11,iVar5,uVar12,uVar13,uVar2);
  if ((local_120 != '\0') && (0x800 < local_12c)) {
    free(local_124);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall
FUN_005a3990(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int in_stack_fffffe84;
  int in_stack_fffffe88;
  undefined2 in_stack_fffffe8c;
  int in_stack_fffffe90;
  int in_stack_fffffe94;
  ushort uVar5;
  int in_stack_fffffe98;
  int in_stack_fffffe9c;
  int in_stack_fffffea0;
  int in_stack_fffffea4;
  undefined4 uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte local_129;
  int local_128;
  uint local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  char local_118;
  undefined1 local_117 [259];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cba0b;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  memset(&local_128,0,0x114);
  local_11c = local_117;
  local_128 = 0;
  local_120 = 0;
  local_124 = 0x800;
  local_118 = '\x01';
  local_8 = 0;
  pbVar8 = &local_129;
  local_129 = 0x15;
  uVar9 = 8;
  uVar6 = 0x5a3a2c;
  FUN_005ab3f0(&local_128,pbVar8,8);
  puVar2 = local_11c;
  iVar1 = local_128;
  if (param_6 == '\0') {
    iVar11 = 0;
    iVar10 = 1;
    uVar7 = 0;
    FUN_0059d640(&stack0xfffffe84,&param_1);
    FUN_005a4a80(this,puVar2,iVar1,param_8,3,(char)param_7,in_stack_fffffe84,in_stack_fffffe88,
                 in_stack_fffffe8c,in_stack_fffffe90,in_stack_fffffe94,in_stack_fffffe98,
                 in_stack_fffffe9c,in_stack_fffffea0,in_stack_fffffea4,uVar6,uVar7,iVar10,iVar11);
  }
  else {
    uVar4 = FUN_005ab130();
    puVar2 = local_11c;
    iVar1 = local_128;
    uVar5 = (ushort)in_stack_fffffe98;
    FUN_0059d640(&stack0xfffffe90,&param_1);
    FUN_005a4d90(this,puVar2,iVar1,param_8,3,(byte)param_7,'\0','\0',(uint)uVar4,
                 (uint)((ulonglong)uVar4 >> 0x20),0,in_stack_fffffe90,in_stack_fffffe94,uVar5,
                 in_stack_fffffe9c,in_stack_fffffea0,in_stack_fffffea4,uVar6,pbVar8,uVar9);
    piVar3 = FUN_005a3210(this,param_1,param_2);
    piVar3[0x483] = 1;
  }
  if ((local_118 != '\0') && (0x800 < local_124)) {
    free(local_11c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_005a3b30(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  short in_stack_00000024;
  short in_stack_00000026;
  int in_stack_00000028;
  undefined2 in_stack_00000034;
  int in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined2 in_stack_00000048;
  int local_150 [5];
  short local_13c;
  short sStack_13a;
  int iStack_138;
  undefined2 uStack_134;
  undefined2 uStack_132;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  int local_124;
  void *local_120;
  char *local_11c;
  uint local_118;
  uint local_114;
  char local_110 [260];
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_11c = in_stack_00000020;
  local_120 = this;
  uVar9 = FUN_005ab130();
  uVar9 = __aulldiv((uint)uVar9,(uint)((ulonglong)uVar9 >> 0x20),1000,0);
  uVar3 = (uint)uVar9;
  local_118 = uVar3;
  if (*(char *)((int)this + 0x56c) != '\0') {
    FUN_0059d640(local_150,&param_1);
    uVar4 = FUN_005a42d0(this,local_150,'\0');
    if ((char)uVar4 == '\0') {
      local_114 = *(uint *)((int)this + 0xc);
      uVar4 = 0;
      if (local_114 != 0) {
        psVar5 = (short *)(*(int *)((int)this + 0x22c) + 4);
        do {
          if (((((char)psVar5[-2] == '\x01') && (*psVar5 == 2)) && (*(int *)(psVar5 + 2) == param_2)
              ) && ((uVar3 = *(uint *)(psVar5 + 0x8f2), *(int *)(psVar5 + 0x8f4) == 0 &&
                    (uVar3 <= local_118)))) {
            local_124 = -(uint)(local_118 < uVar3);
            if ((local_124 == 0) && (local_118 - uVar3 < 100)) {
              *local_11c = 1;
              goto LAB_005a3c61;
            }
          }
          uVar4 = uVar4 + 1;
          psVar5 = psVar5 + 0x908;
          this = local_120;
          uVar3 = local_118;
        } while (uVar4 < local_114);
      }
    }
  }
  in_stack_00000026 = (short)((uint)*(undefined4 *)(in_stack_0000001c + 0xc) >> 0x10);
  in_stack_00000034 = (undefined2)*(undefined4 *)(in_stack_0000001c + 0x1c);
  *local_11c = 0;
  uVar4 = 0;
  if (*(uint *)((int)this + 0xc) != 0) {
    pcVar7 = *(char **)((int)this + 0x22c);
    do {
      if (*pcVar7 == '\0') {
        local_120 = (void *)(uVar4 * 0x1210);
        pcVar7 = *(char **)((int)this + 0x22c) + (int)local_120;
        local_11c = pcVar7;
        FUN_005a3f00(this,&param_1,uVar4);
        *(undefined4 *)(pcVar7 + 0x1200) = *(undefined4 *)((int)this + 0x41c);
        *(undefined4 *)(pcVar7 + 0x11f0) = in_stack_00000040;
        *(undefined4 *)(pcVar7 + 0x11f4) = in_stack_00000044;
        *(undefined2 *)(pcVar7 + 0x11f8) = in_stack_00000048;
        *pcVar7 = '\x01';
        iVar8 = *(int *)(pcVar7 + 0x1200);
        if (*(int *)(pcVar7 + 0x1200) < in_stack_00000038) {
          *(int *)(pcVar7 + 0x1200) = in_stack_00000038;
          iVar8 = in_stack_00000038;
        }
        FUN_00596760(pcVar7 + 0xf8,'\x01',iVar8);
        *(undefined4 *)(pcVar7 + 0x108) = *(undefined4 *)((int)this + 0x47c);
        *(ulonglong *)(pcVar7 + 0x110) = (ulonglong)*(uint *)((int)this + 0x480) * 1000;
        *(undefined4 *)(pcVar7 + 0x9b8) = *(undefined4 *)((int)this + 0x44c);
        *(int *)(*(int *)((int)this + 0x230) + *(int *)((int)this + 0x234) * 4) =
             *(int *)((int)this + 0x22c) + (int)local_120;
        *(int *)((int)this + 0x234) = *(int *)((int)this + 0x234) + 1;
        local_13c = *(short *)(in_stack_0000001c + 0xc);
        sStack_13a = *(short *)(in_stack_0000001c + 0xe);
        iStack_138 = *(int *)(in_stack_0000001c + 0x10);
        uStack_134 = *(undefined2 *)(in_stack_0000001c + 0x14);
        uStack_132 = *(undefined2 *)(in_stack_0000001c + 0x16);
        uStack_130 = *(undefined2 *)(in_stack_0000001c + 0x18);
        uStack_12e = *(undefined2 *)(in_stack_0000001c + 0x1a);
        if (((sStack_13a == in_stack_00000026) && (local_13c == 2)) &&
           (iStack_138 == in_stack_00000028)) goto LAB_005a3dd0;
        FUN_0059d0f0(&stack0x00000024,'\x01',local_110);
        piVar6 = (int *)((int)this + 0x498);
        uVar4 = 0;
        goto LAB_005a3da0;
      }
      uVar4 = uVar4 + 1;
      pcVar7 = pcVar7 + 0x1210;
    } while (uVar4 < *(uint *)((int)this + 0xc));
  }
LAB_005a3c61:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    uVar4 = uVar4 + 1;
    piVar6 = piVar6 + 5;
    if (9 < uVar4) break;
LAB_005a3da0:
    pcVar7 = local_11c;
    uVar3 = local_118;
    if ((((*(short *)((int)piVar6 + -2) == DAT_006558f6) && ((short)piVar6[-1] == 2)) &&
        (*piVar6 == DAT_006558f8)) || ((in_stack_00000024 == 2 && (in_stack_00000028 == *piVar6))))
    break;
  }
LAB_005a3dd0:
  *(int *)(pcVar7 + 0x1204) = in_stack_0000001c;
  pcVar7[0x1178] = -1;
  pcVar7[0x1179] = -1;
  pcVar7[0x1188] = -1;
  pcVar7[0x1189] = -1;
  pcVar7[0x1198] = -1;
  pcVar7[0x1199] = -1;
  pcVar7[0x11a8] = -1;
  pcVar7[0x11a9] = -1;
  pcVar7[0x11b8] = -1;
  pcVar7[0x11b9] = -1;
  pcVar7[0x1180] = '\0';
  pcVar7[0x1181] = '\0';
  pcVar7[0x1182] = '\0';
  pcVar7[0x1183] = '\0';
  pcVar7[0x1184] = '\0';
  pcVar7[0x1185] = '\0';
  pcVar7[0x1186] = '\0';
  pcVar7[0x1187] = '\0';
  pcVar7[0x1190] = '\0';
  pcVar7[0x1191] = '\0';
  pcVar7[0x1192] = '\0';
  pcVar7[0x1193] = '\0';
  pcVar7[0x1194] = '\0';
  pcVar7[0x1195] = '\0';
  pcVar7[0x1196] = '\0';
  pcVar7[0x1197] = '\0';
  pcVar7[0x11a0] = '\0';
  pcVar7[0x11a1] = '\0';
  pcVar7[0x11a2] = '\0';
  pcVar7[0x11a3] = '\0';
  pcVar7[0x11a4] = '\0';
  pcVar7[0x11a5] = '\0';
  pcVar7[0x11a6] = '\0';
  pcVar7[0x11a7] = '\0';
  pcVar7[0x11b0] = '\0';
  pcVar7[0x11b1] = '\0';
  pcVar7[0x11b2] = '\0';
  pcVar7[0x11b3] = '\0';
  pcVar7[0x11b4] = '\0';
  pcVar7[0x11b5] = '\0';
  pcVar7[0x11b6] = '\0';
  pcVar7[0x11b7] = '\0';
  pcVar7[0x11c0] = '\0';
  pcVar7[0x11c1] = '\0';
  pcVar7[0x11c2] = '\0';
  pcVar7[0x11c3] = '\0';
  pcVar7[0x11c4] = '\0';
  pcVar7[0x11c5] = '\0';
  pcVar7[0x11c6] = '\0';
  pcVar7[0x11c7] = '\0';
  pcVar7[0x11d0] = -1;
  pcVar7[0x11d1] = -1;
  *(uint *)(pcVar7 + 0x11e8) = uVar3;
  pcVar7[0x11ec] = '\0';
  pcVar7[0x11ed] = '\0';
  pcVar7[0x11ee] = '\0';
  pcVar7[0x11ef] = '\0';
  pcVar7[0x120c] = '\x06';
  pcVar7[0x120d] = '\0';
  pcVar7[0x120e] = '\0';
  pcVar7[0x120f] = '\0';
  pcVar7[0x11c8] = '\0';
  pcVar7[0x11c9] = '\0';
  pcVar7[0x11ca] = '\0';
  pcVar7[0x11cb] = '\0';
  pcVar7[0x11cc] = '\0';
  pcVar7[0x11cd] = '\0';
  pcVar7[0x11ce] = '\0';
  pcVar7[0x11cf] = '\0';
  pcVar7[0x11d8] = '\0';
  pcVar7[0x11d9] = '\0';
  pcVar7[0x11da] = '\0';
  pcVar7[0x11db] = '\0';
  pcVar7[0x11dc] = '\0';
  pcVar7[0x11dd] = '\0';
  pcVar7[0x11de] = '\0';
  pcVar7[0x11df] = '\0';
  pcVar7[0x1170] = '\0';
  uVar2 = uRam00655900;
  uVar1 = uRam006558fc;
  iVar8 = DAT_006558f8;
  *(undefined4 *)(pcVar7 + 0x18) = _DAT_006558f4;
  *(int *)(pcVar7 + 0x1c) = iVar8;
  *(undefined4 *)(pcVar7 + 0x20) = uVar1;
  *(undefined4 *)(pcVar7 + 0x24) = uVar2;
  *(undefined2 *)(pcVar7 + 0x2a) = DAT_00655906;
  *(undefined2 *)(pcVar7 + 0x28) = DAT_00655904;
  *(uint *)(pcVar7 + 0x11e0) = uVar3;
  pcVar7[0x11e4] = '\0';
  pcVar7[0x11e5] = '\0';
  pcVar7[0x11e6] = '\0';
  pcVar7[0x11e7] = '\0';
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005a3f00(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  short local_1c;
  short sStack_1a;
  int iStack_18;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  iVar7 = *(int *)((int)this + 0x22c) + param_2 * 0x1210;
  local_1c = *(short *)(iVar7 + 4);
  sStack_1a = *(short *)(iVar7 + 6);
  iStack_18 = *(int *)(iVar7 + 8);
  uStack_14 = *(undefined2 *)(iVar7 + 0xc);
  uStack_12 = *(undefined2 *)(iVar7 + 0xe);
  uStack_10 = *(undefined2 *)(iVar7 + 0x10);
  uStack_e = *(undefined2 *)(iVar7 + 0x12);
  local_c = *(undefined4 *)(iVar7 + 0x14);
  if (((sStack_1a != DAT_006558f6) || (local_1c != 2)) || (iStack_18 != DAT_006558f8)) {
    iVar4 = FUN_005a4230(this,(int)&local_1c);
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 * 0x1210 + *(int *)((int)this + 0x22c);
    }
    if (iVar4 == iVar7) {
      FUN_005a4070(this,(int)&local_1c);
    }
  }
  FUN_005a4070(this,(int)param_1);
  iVar7 = param_2 * 0x1210 + *(int *)((int)this + 0x22c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(iVar7 + 4) = *param_1;
  *(undefined4 *)(iVar7 + 8) = uVar1;
  *(undefined4 *)(iVar7 + 0xc) = uVar2;
  *(undefined4 *)(iVar7 + 0x10) = uVar3;
  *(undefined2 *)(iVar7 + 0x16) = *(undefined2 *)((int)param_1 + 0x12);
  *(undefined2 *)(iVar7 + 0x14) = *(undefined2 *)(param_1 + 4);
  uVar5 = FUN_005ac070((ushort *)((int)param_1 + 2),2,2);
  uVar5 = FUN_005ac070((ushort *)(param_1 + 1),4,uVar5);
  iVar7 = *(int *)((int)this + 0xc);
  piVar6 = (int *)FUN_0059bc90((int *)((int)this + 0x23c));
  iVar7 = (uVar5 % (uint)(iVar7 << 3)) * 4;
  iVar4 = *(int *)(iVar7 + *(int *)((int)this + 0x238));
  if (iVar4 != 0) {
    for (iVar7 = *(int *)(iVar4 + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
      iVar4 = iVar7;
    }
    piVar6 = (int *)FUN_0059bc90((int *)((int)this + 0x23c));
    *piVar6 = param_2;
    piVar6[1] = 0;
    *(int **)(iVar4 + 4) = piVar6;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  piVar6[1] = 0;
  *piVar6 = param_2;
  *(int **)(iVar7 + *(int *)((int)this + 0x238)) = piVar6;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}
