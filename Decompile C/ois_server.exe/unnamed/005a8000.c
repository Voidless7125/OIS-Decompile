#include "../ois_server.exe.h"


void __thiscall FUN_005a9c20(void *this,int param_1)

{
  char cVar1;
  void *local_8;
  
  if ((*(code **)((int)this + 0x480) != (code *)0x0) &&
     (local_8 = this, cVar1 = (**(code **)((int)this + 0x480))(param_1), cVar1 != '\x01')) {
    return;
  }
  local_8 = (void *)param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x394));
  FUN_0059bac0((void *)((int)this + 900),&local_8);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x394));
  SetEvent(*(HANDLE *)((int)this + 0x564));
  return;
}


void FUN_005a9da0(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    do {
      switch(**(undefined1 **)(param_2 + 0x30)) {
      case 10:
        uVar2 = 8;
        break;
      case 0xb:
        uVar2 = 9;
        break;
      case 0xc:
        uVar2 = 10;
        break;
      default:
        goto switchD_005a9dc5_caseD_d;
      case 0x10:
        uVar2 = 0;
        goto LAB_005a9ded;
      case 0x11:
        uVar2 = 0;
        break;
      case 0x12:
        uVar2 = 1;
        break;
      case 0x13:
        uVar2 = 1;
LAB_005a9ded:
        (**(code **)(**(int **)(*param_1 + uVar1 * 4) + 0x20))
                  (param_2,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                   *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),uVar2);
        goto switchD_005a9dc5_caseD_d;
      case 0x14:
        uVar2 = 2;
        break;
      case 0x15:
        uVar2 = 1;
        goto LAB_005a9dce;
      case 0x16:
        uVar2 = 2;
LAB_005a9dce:
        (**(code **)(**(int **)(*param_1 + uVar1 * 4) + 0x1c))
                  (param_2,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                   *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),uVar2);
        goto switchD_005a9dc5_caseD_d;
      case 0x17:
        uVar2 = 4;
        break;
      case 0x18:
        uVar2 = 5;
        break;
      case 0x19:
        uVar2 = 6;
        break;
      case 0x1a:
        uVar2 = 7;
      }
      (**(code **)(**(int **)(*param_1 + uVar1 * 4) + 0x24))(param_2,uVar2);
switchD_005a9dc5_caseD_d:
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_005a9e90(int param_1)

{
  char **ppcVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  hostent *phVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  undefined2 *puVar19;
  int iVar20;
  ushort uVar21;
  undefined4 *puVar22;
  uint *puVar23;
  bool bVar24;
  int local_64;
  int local_5c;
  char local_58 [80];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (((*(ushort *)(param_1 + 0x496) == DAT_006558f6) && (*(short *)(param_1 + 0x494) == 2)) &&
     (puVar22 = (undefined4 *)(param_1 + 0x498), *(uint *)(param_1 + 0x498) == DAT_006558f8)) {
    gethostname(local_58,0x50);
    phVar15 = gethostbyname(local_58);
    if (phVar15 != (hostent *)0x0) {
      iVar18 = 0;
      do {
        ppcVar1 = phVar15->h_addr_list + iVar18;
        if (*ppcVar1 == (char *)0x0) {
          if (iVar18 < 10) {
            iVar16 = 10 - iVar18;
            puVar19 = (undefined2 *)(param_1 + (iVar18 * 5 + 0x129) * 4);
            do {
              uVar14 = uRam006562f0;
              uVar13 = uRam006562ec;
              uVar12 = uRam006562e8;
              *(undefined4 *)(puVar19 + -8) = _DAT_006562e4;
              *(undefined4 *)(puVar19 + -6) = uVar12;
              *(undefined4 *)(puVar19 + -4) = uVar13;
              *(undefined4 *)(puVar19 + -2) = uVar14;
              puVar19[1] = DAT_006562f6;
              *puVar19 = DAT_006562f4;
              iVar16 = iVar16 + -1;
              puVar19 = puVar19 + 10;
            } while (iVar16 != 0);
          }
          break;
        }
        iVar18 = iVar18 + 1;
        *puVar22 = *(undefined4 *)*ppcVar1;
        puVar22 = puVar22 + 5;
      } while (iVar18 < 10);
    }
    local_64 = 0;
    puVar23 = (uint *)(param_1 + 0x498);
    do {
      uVar21 = *(ushort *)((int)puVar23 + -2);
      if (((uVar21 == DAT_006558f6) && ((short)puVar23[-1] == 2)) && (*puVar23 == DAT_006558f8))
      break;
      iVar16 = local_64 + 1;
      iVar18 = iVar16;
      puVar4 = puVar23;
      local_5c = local_64;
      if (iVar16 < 9) {
        do {
          puVar17 = puVar4 + 5;
          uVar2 = *(ushort *)((int)puVar4 + 0x12);
          if (((uVar2 == DAT_006558f6) && ((short)puVar4[4] == 2)) &&
             (uVar21 = *(ushort *)((int)puVar23 + -2), *puVar17 == DAT_006558f8)) break;
          bVar24 = uVar2 < uVar21;
          if (uVar2 == uVar21) {
            bVar24 = *puVar17 < *puVar23;
          }
          iVar20 = iVar18 + 1;
          if (!bVar24) {
            iVar18 = local_5c;
          }
          local_5c = iVar18;
          iVar18 = iVar20;
          puVar4 = puVar17;
        } while (iVar20 < 9);
        if (local_64 != local_5c) {
          uVar3 = puVar23[3];
          uVar5 = puVar23[-1];
          uVar6 = *puVar23;
          uVar7 = puVar23[1];
          uVar8 = puVar23[2];
          iVar18 = param_1 + local_5c * 0x14;
          uVar9 = *(uint *)(iVar18 + 0x498);
          uVar10 = *(uint *)(iVar18 + 0x49c);
          uVar11 = *(uint *)(iVar18 + 0x4a0);
          puVar23[-1] = *(uint *)(iVar18 + 0x494);
          *puVar23 = uVar9;
          puVar23[1] = uVar10;
          puVar23[2] = uVar11;
          *(undefined2 *)((int)puVar23 + 0xe) = *(undefined2 *)(iVar18 + 0x4a6);
          *(undefined2 *)(puVar23 + 3) = *(undefined2 *)(iVar18 + 0x4a4);
          *(uint *)(iVar18 + 0x494) = uVar5;
          *(uint *)(iVar18 + 0x498) = uVar6;
          *(uint *)(iVar18 + 0x49c) = uVar7;
          *(uint *)(iVar18 + 0x4a0) = uVar8;
          *(short *)(iVar18 + 0x4a6) = (short)(uVar3 >> 0x10);
          *(short *)(iVar18 + 0x4a4) = (short)uVar3;
        }
      }
      puVar23 = puVar23 + 5;
      local_64 = iVar16;
    } while (iVar16 < 9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005aa070(void *this,byte *param_1)

{
  byte local_10 [5];
  byte local_b;
  byte local_a;
  byte local_9;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) &&
     (FUN_005ade89(&DAT_0066086c), DAT_0066086c == -1)) {
    DAT_00660868 = htonl(0x3039);
    FUN_005ade3f(&DAT_0066086c);
  }
  if (DAT_00660868 != 0x3039) {
    local_10[1] = param_1[6];
    local_10[0] = param_1[7];
    local_10[2] = param_1[5];
    local_10[3] = param_1[4];
    local_10[4] = param_1[3];
    local_b = param_1[2];
    local_a = param_1[1];
    local_9 = *param_1;
    param_1 = local_10;
  }
  FUN_005ab3f0(this,param_1,0x40);
  local_10[0] = 0x2f;
  local_10[1] = 0xa1;
  local_10[2] = 0x5a;
  local_10[3] = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005aa140(void *this,byte *param_1)

{
  byte local_c [4];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) &&
     (FUN_005ade89(&DAT_0066086c), DAT_0066086c == -1)) {
    DAT_00660868 = htonl(0x3039);
    FUN_005ade3f(&DAT_0066086c);
  }
  if (DAT_00660868 != 0x3039) {
    local_c[1] = param_1[2];
    local_c[0] = param_1[3];
    local_c[2] = param_1[1];
    local_c[3] = *param_1;
    param_1 = local_c;
  }
  FUN_005ab3f0(this,param_1,0x20);
  local_c[0] = 0xe3;
  local_c[1] = 0xa1;
  local_c[2] = 0x5a;
  local_c[3] = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005aa1f0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
    FUN_005ade89(&DAT_0066086c);
    if (DAT_0066086c == -1) {
      DAT_00660868 = htonl(0x3039);
      FUN_005ade3f(&DAT_0066086c);
    }
  }
  if (DAT_00660868 != 0x3039) {
    uVar1 = FUN_005ab4c0(this,&local_10,0x40);
    if ((char)uVar1 != '\0') {
      *param_1 = local_9;
      param_1[1] = local_a;
      param_1[2] = local_b;
      param_1[3] = local_c;
      param_1[4] = local_10._3_1_;
      param_1[5] = local_10._2_1_;
      param_1[6] = local_10._1_1_;
      param_1[7] = (undefined1)local_10;
      local_10 = 0x5aa2aa;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_10 = 0x5aa2be;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_005ab4c0(this,param_1,0x40);
  local_10 = 0x5aa2d6;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005aa2e0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *_Memory;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar8 = *(int *)((int)this + 4);
  iVar1 = *(int *)((int)this + 8);
  if (iVar8 == iVar1) {
    uVar6 = 0x10;
    if (iVar1 != 0) {
      uVar6 = iVar1 * 2;
    }
    *(uint *)((int)this + 8) = uVar6;
    puVar5 = FUN_005ab050(uVar6);
    _Memory = *(void **)this;
    if (_Memory != (void *)0x0) {
      uVar6 = 0;
      if (*(int *)((int)this + 4) != 0) {
        puVar9 = puVar5 + 4;
        do {
          uVar6 = uVar6 + 1;
          puVar7 = (undefined4 *)((int)puVar9 + *(int *)this + (-0x10 - (int)puVar5));
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          uVar4 = puVar7[3];
          puVar9[-4] = *puVar7;
          puVar9[-3] = uVar2;
          puVar9[-2] = uVar3;
          puVar9[-1] = uVar4;
          *(undefined2 *)((int)puVar9 + 2) = *(undefined2 *)((int)puVar7 + 0x12);
          *(undefined2 *)puVar9 = *(undefined2 *)(puVar7 + 4);
          puVar9 = puVar9 + 5;
        } while (uVar6 < *(uint *)((int)this + 4));
        _Memory = *(void **)this;
      }
      free(_Memory);
    }
    iVar8 = *(int *)((int)this + 4);
    *(undefined4 **)this = puVar5;
  }
  else {
    puVar5 = *(undefined4 **)this;
  }
  puVar5 = puVar5 + iVar8 * 5;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *puVar5 = *param_1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined2 *)((int)puVar5 + 0x12) = *(undefined2 *)((int)param_1 + 0x12);
  *(undefined2 *)(puVar5 + 4) = *(undefined2 *)(param_1 + 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


void __thiscall FUN_005aa3a0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Memory;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)((int)this + 4);
  iVar3 = *(int *)((int)this + 8);
  if (iVar5 != iVar3) {
    iVar3 = *(int *)this;
    goto LAB_005aa47b;
  }
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 8) = 0x10;
    uVar6 = 0x10;
LAB_005aa3c7:
    iVar3 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar6 * 0x10));
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else if (uVar6 != 0) {
      puVar4 = (undefined2 *)(iVar3 + 8);
      do {
        *puVar4 = 0xffff;
        *(undefined4 *)(puVar4 + -4) = DAT_006558d0;
        *(undefined4 *)(puVar4 + -2) = DAT_006558d4;
        *puVar4 = DAT_006558d8;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 8;
      } while (uVar6 != 0);
    }
    iVar5 = *(int *)((int)this + 4);
  }
  else {
    uVar6 = iVar3 * 2;
    *(uint *)((int)this + 8) = uVar6;
    if (uVar6 != 0) goto LAB_005aa3c7;
    iVar3 = 0;
  }
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    uVar6 = 0;
    if (iVar5 != 0) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)this;
        iVar1 = iVar5 + 0x10;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(iVar5 + iVar3) = *(undefined4 *)(iVar2 + -0x10 + iVar1);
        *(undefined4 *)(iVar5 + 4 + iVar3) = *(undefined4 *)(iVar2 + -0xc + iVar1);
        *(undefined2 *)(iVar5 + 8 + iVar3) = *(undefined2 *)(iVar2 + -8 + iVar1);
        iVar5 = iVar1;
      } while (uVar6 < *(uint *)((int)this + 4));
      _Memory = *(void **)this;
    }
    free(_Memory);
  }
  *(int *)this = iVar3;
LAB_005aa47b:
  iVar5 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar3 + iVar5 * 0x10) = *param_1;
  *(undefined4 *)(iVar3 + 4 + iVar5 * 0x10) = param_1[1];
  *(undefined2 *)(iVar3 + 8 + iVar5 * 0x10) = *(undefined2 *)(param_1 + 2);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


int * __thiscall FUN_005aa4b0(void *this,int *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 8) != 0) {
      free(*(void **)this);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 4) = 0;
    }
    if (param_1[1] == 0) {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return this;
    }
    lVar1 = (ulonglong)(uint)param_1[1] * 4;
    uVar2 = FUN_005ae4ea(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(undefined4 *)this = uVar2;
    uVar4 = 0;
    uVar3 = 0;
    if (param_1[1] != 0) {
      do {
        *(undefined4 *)(*(int *)this + uVar4 * 4) = *(undefined4 *)(*param_1 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        uVar3 = param_1[1];
      } while (uVar4 < uVar3);
    }
    *(uint *)((int)this + 8) = uVar3;
    *(uint *)((int)this + 4) = uVar3;
  }
  return this;
}


void __thiscall FUN_005aa540(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if (param_1 < uVar2) {
    if (param_1 < uVar2 - 1) {
      do {
        puVar1 = (undefined4 *)(*(int *)this + param_1 * 4);
        param_1 = param_1 + 1;
        *puVar1 = puVar1[1];
        uVar2 = *(uint *)((int)this + 4);
      } while (param_1 < uVar2 - 1);
    }
    *(uint *)((int)this + 4) = uVar2 - 1;
  }
  return;
}


void __thiscall FUN_005aa580(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 8);
  if (uVar3 != uVar4) {
    if (uVar3 < uVar4) {
      iVar1 = -uVar3;
    }
    else {
      iVar1 = *(int *)((int)this + 0xc) - uVar3;
    }
    if (param_1 < uVar4 + iVar1) {
      uVar6 = *(uint *)((int)this + 0xc);
      uVar5 = uVar3 - uVar6;
      if (uVar3 + param_1 < uVar6) {
        uVar5 = uVar3;
      }
      uVar5 = param_1 + uVar5;
      uVar3 = 0;
      if (uVar5 + 1 != uVar6) {
        uVar3 = uVar5 + 1;
      }
      if (uVar3 != uVar4) {
        do {
          uVar2 = uVar3;
          *(undefined4 *)(*(int *)this + uVar5 * 4) = *(undefined4 *)(*(int *)this + uVar2 * 4);
          uVar6 = *(uint *)((int)this + 0xc);
          uVar4 = *(uint *)((int)this + 8);
          uVar3 = 0;
          if (uVar2 + 1 != uVar6) {
            uVar3 = uVar2 + 1;
          }
          uVar5 = uVar2;
        } while (uVar3 != uVar4);
      }
      if (uVar4 != 0) {
        uVar6 = uVar4;
      }
      *(uint *)((int)this + 8) = uVar6 - 1;
    }
  }
  return;
}


void __thiscall FUN_005aa610(void *this,undefined4 param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x3c);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0x38) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x2c) + *(int *)((int)this + 0x34) * 4) = param_1;
    iVar3 = *(int *)((int)this + 0x34) + 1;
    *(int *)((int)this + 0x34) = iVar3;
    if (iVar3 == *(int *)((int)this + 0x38)) {
      *(undefined4 *)((int)this + 0x34) = 0;
      iVar3 = 0;
    }
    if (((iVar3 == *(int *)((int)this + 0x30)) &&
        (uVar4 = *(int *)((int)this + 0x38) * 2, uVar4 != 0)) &&
       (lVar1 = (ulonglong)uVar4 * 4,
       iVar3 = FUN_005ae4ea(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1), iVar3 != 0
       )) {
      uVar4 = 0;
      if (*(int *)((int)this + 0x38) != 0) {
        do {
          *(undefined4 *)(iVar3 + uVar4 * 4) =
               *(undefined4 *)
                (*(int *)((int)this + 0x2c) +
                ((*(int *)((int)this + 0x30) + uVar4) % *(uint *)((int)this + 0x38)) * 4);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((int)this + 0x38));
      }
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x38);
      *(undefined4 *)((int)this + 0x30) = 0;
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) * 2;
      free(*(void **)((int)this + 0x2c));
      *(int *)((int)this + 0x2c) = iVar3;
    }
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  puVar2 = (undefined4 *)FUN_005ae4ea(0x40);
  *(undefined4 **)((int)this + 0x2c) = puVar2;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 1;
  *puVar2 = param_1;
  *(undefined4 *)((int)this + 0x38) = 0x10;
  LeaveCriticalSection(lpCriticalSection);
  return;
}


int __fastcall FUN_005aa700(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[2] < 1) {
    puVar2 = malloc(0x14);
    iVar7 = 0;
    *param_1 = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      param_1[2] = 1;
      uVar3 = (uint)param_1[4] / 0x78;
      pvVar4 = malloc(param_1[4]);
      puVar2[2] = pvVar4;
      if (pvVar4 != (void *)0x0) {
        pvVar5 = malloc(uVar3 << 2);
        pvVar4 = (void *)puVar2[2];
        *puVar2 = pvVar5;
        if (pvVar5 != (void *)0x0) {
          if (uVar3 != 0) {
            do {
              *(undefined4 **)((int)pvVar4 + 0x70) = puVar2;
              *(void **)((int)pvVar5 + iVar7 * 4) = pvVar4;
              iVar7 = iVar7 + 1;
              pvVar4 = (void *)((int)pvVar4 + 0x78);
            } while (iVar7 < (int)uVar3);
          }
          puVar2[1] = uVar3;
          puVar2[3] = *param_1;
          puVar2[4] = puVar2;
          iVar7 = *param_1;
          piVar1 = (int *)(iVar7 + 4);
          *piVar1 = *piVar1 + -1;
          iVar7 = *(int *)(*(int *)*param_1 + *(int *)(iVar7 + 4) * 4);
          goto LAB_005aa7f0;
        }
        free(pvVar4);
      }
      iVar7 = 0;
    }
  }
  else {
    piVar1 = (int *)*param_1;
    iVar6 = piVar1[1] + -1;
    piVar1[1] = iVar6;
    iVar7 = *(int *)(*piVar1 + iVar6 * 4);
    if (iVar6 == 0) {
      param_1[2] = param_1[2] + -1;
      *param_1 = piVar1[3];
      *(int *)(piVar1[3] + 0x10) = piVar1[4];
      *(int *)(piVar1[4] + 0xc) = piVar1[3];
      iVar6 = param_1[3];
      param_1[3] = iVar6 + 1;
      if (iVar6 == 0) {
        param_1[1] = (int)piVar1;
        piVar1[3] = (int)piVar1;
        piVar1[4] = (int)piVar1;
      }
      else {
        piVar1[3] = param_1[1];
        piVar1[4] = *(int *)(param_1[1] + 0x10);
        *(int **)(*(int *)(param_1[1] + 0x10) + 0xc) = piVar1;
        *(int **)(param_1[1] + 0x10) = piVar1;
      }
    }
  }
LAB_005aa7f0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  *(undefined2 *)(iVar7 + 0x18) = 0xffff;
  *(undefined4 *)(iVar7 + 0x10) = DAT_006558d0;
  *(undefined4 *)(iVar7 + 0x14) = DAT_006558d4;
  *(undefined2 *)(iVar7 + 0x18) = DAT_006558d8;
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(iVar7 + 0x28) = 0;
  *(undefined4 *)(iVar7 + 0x2c) = 0;
  *(undefined2 *)(iVar7 + 0x20) = 2;
  *(undefined4 *)(iVar7 + 0x30) = 0xffff0000;
  return iVar7;
}


undefined4 * __fastcall FUN_005aa870(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[2] < 1) {
    puVar2 = malloc(0x14);
    puVar7 = (undefined4 *)0x0;
    *param_1 = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      uVar6 = (uint)param_1[4] >> 4;
      param_1[2] = 1;
      pvVar3 = malloc(param_1[4]);
      puVar2[2] = pvVar3;
      if (pvVar3 != (void *)0x0) {
        pvVar4 = malloc(uVar6 << 2);
        pvVar3 = (void *)puVar2[2];
        *puVar2 = pvVar4;
        if (pvVar4 != (void *)0x0) {
          if (uVar6 != 0) {
            do {
              *(undefined4 **)((int)pvVar3 + 0xc) = puVar2;
              *(void **)((int)pvVar4 + (int)puVar7 * 4) = pvVar3;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              pvVar3 = (void *)((int)pvVar3 + 0x10);
            } while ((int)puVar7 < (int)uVar6);
          }
          puVar2[1] = uVar6;
          puVar2[3] = *param_1;
          puVar2[4] = puVar2;
          iVar5 = *param_1;
          piVar1 = (int *)(iVar5 + 4);
          *piVar1 = *piVar1 + -1;
          puVar7 = *(undefined4 **)(*(int *)*param_1 + *(int *)(iVar5 + 4) * 4);
          goto LAB_005aa959;
        }
        free(pvVar3);
      }
      puVar7 = (undefined4 *)0x0;
    }
  }
  else {
    piVar1 = (int *)*param_1;
    iVar5 = piVar1[1] + -1;
    piVar1[1] = iVar5;
    puVar7 = *(undefined4 **)(*piVar1 + iVar5 * 4);
    if (iVar5 == 0) {
      param_1[2] = param_1[2] + -1;
      *param_1 = piVar1[3];
      *(int *)(piVar1[3] + 0x10) = piVar1[4];
      *(int *)(piVar1[4] + 0xc) = piVar1[3];
      iVar5 = param_1[3];
      param_1[3] = iVar5 + 1;
      if (iVar5 == 0) {
        param_1[1] = (int)piVar1;
        piVar1[3] = (int)piVar1;
        piVar1[4] = (int)piVar1;
      }
      else {
        piVar1[3] = param_1[1];
        piVar1[4] = *(int *)(param_1[1] + 0x10);
        *(int **)(*(int *)(param_1[1] + 0x10) + 0xc) = piVar1;
        *(int **)(param_1[1] + 0x10) = piVar1;
      }
    }
  }
LAB_005aa959:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  return puVar7;
}


void __fastcall FUN_005aa9c0(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cbc20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1[2] != 0) && (pvVar1 = (void *)*param_1, pvVar1 != (void *)0x0)) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(pvVar1,4,*(uint *)((int)pvVar1 + -4),FUN_005ac220);
    FUN_005adb4d((uint *)((int)pvVar1 + -4));
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005aaa30(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cbc6d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  if (iVar6 != iVar2) {
    local_14 = *(uint **)this;
    goto LAB_005aab90;
  }
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 8) = 0x10;
    uVar7 = 0x10;
LAB_005aaa78:
    uVar5 = -(uint)((int)((ulonglong)uVar7 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 4);
    puVar3 = (uint *)FUN_005ae4ea(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    local_8 = 0;
    if (puVar3 == (uint *)0x0) {
      local_14 = (uint *)0x0;
    }
    else {
      local_14 = puVar3 + 1;
      *puVar3 = uVar7;
      _eh_vector_constructor_iterator_
                (local_14,4,uVar7,(_func_void_void_ptr *)&LAB_005ac1f0,FUN_005ac220);
    }
    iVar6 = *(int *)((int)this + 4);
  }
  else {
    uVar7 = iVar2 * 2;
    *(uint *)((int)this + 8) = uVar7;
    if (uVar7 != 0) goto LAB_005aaa78;
    local_14 = (uint *)0x0;
  }
  local_8 = 0xffffffff;
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    uVar7 = 0;
    puVar3 = local_14;
    if (iVar6 != 0) {
      do {
        puVar1 = (uint *)(*(int *)this + uVar7 * 4);
        FUN_005ac670((int *)puVar3);
        if ((undefined4 *)*puVar1 != (undefined4 *)&DAT_006550b0) {
          EnterCriticalSection(*(LPCRITICAL_SECTION *)*puVar1);
          uVar5 = *puVar1;
          if (*(int *)(uVar5 + 4) == 0) {
            *puVar3 = (uint)&DAT_006550b0;
          }
          else {
            *puVar3 = uVar5;
            *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
          }
          LeaveCriticalSection(*(LPCRITICAL_SECTION *)*puVar1);
        }
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar7 < *(uint *)((int)this + 4));
      pvVar4 = *(void **)this;
    }
    if (pvVar4 != (void *)0x0) {
      local_8 = 1;
      _eh_vector_destructor_iterator_(pvVar4,4,*(uint *)((int)pvVar4 + -4),FUN_005ac220);
      FUN_005adb4d((uint *)((int)pvVar4 + -4));
      local_8 = 0xffffffff;
    }
  }
  *(uint **)this = local_14;
LAB_005aab90:
  local_14 = local_14 + *(int *)((int)this + 4);
  FUN_005ac670((int *)local_14);
  if ((undefined4 *)*param_1 != (undefined4 *)&DAT_006550b0) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)*param_1);
    uVar7 = *param_1;
    if (*(int *)(uVar7 + 4) == 0) {
      *local_14 = (uint)&DAT_006550b0;
    }
    else {
      *local_14 = uVar7;
      *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
    }
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)*param_1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_10;
  return;
}


undefined4 __fastcall FUN_005aabf0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  
  if (param_1[2] < 1) {
    puVar3 = malloc(0x14);
    *param_1 = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      iVar7 = 0;
      param_1[2] = 1;
      uVar4 = (uint)param_1[4] >> 6;
      pvVar5 = malloc(param_1[4]);
      puVar3[2] = pvVar5;
      if (pvVar5 != (void *)0x0) {
        pvVar6 = malloc(uVar4 << 2);
        pvVar5 = (void *)puVar3[2];
        *puVar3 = pvVar6;
        if (pvVar6 != (void *)0x0) {
          if (uVar4 != 0) {
            do {
              *(undefined4 **)((int)pvVar5 + 0x38) = puVar3;
              *(void **)((int)pvVar6 + iVar7 * 4) = pvVar5;
              iVar7 = iVar7 + 1;
              pvVar5 = (void *)((int)pvVar5 + 0x40);
            } while (iVar7 < (int)uVar4);
          }
          puVar3[1] = uVar4;
          puVar3[3] = *param_1;
          puVar3[4] = puVar3;
          iVar7 = *param_1;
          piVar1 = (int *)(iVar7 + 4);
          *piVar1 = *piVar1 + -1;
          return *(undefined4 *)(*(int *)*param_1 + *(int *)(iVar7 + 4) * 4);
        }
        free(pvVar5);
      }
    }
    return 0;
  }
  piVar1 = (int *)*param_1;
  iVar7 = piVar1[1] + -1;
  piVar1[1] = iVar7;
  uVar2 = *(undefined4 *)(*piVar1 + iVar7 * 4);
  if (iVar7 == 0) {
    param_1[2] = param_1[2] + -1;
    *param_1 = piVar1[3];
    *(int *)(piVar1[3] + 0x10) = piVar1[4];
    *(int *)(piVar1[4] + 0xc) = piVar1[3];
    iVar7 = param_1[3];
    param_1[3] = iVar7 + 1;
    if (iVar7 == 0) {
      param_1[1] = (int)piVar1;
      piVar1[3] = (int)piVar1;
      piVar1[4] = (int)piVar1;
      return uVar2;
    }
    piVar1[3] = param_1[1];
    piVar1[4] = *(int *)(param_1[1] + 0x10);
    *(int **)(*(int *)(param_1[1] + 0x10) + 0xc) = piVar1;
    *(int **)(param_1[1] + 0x10) = piVar1;
  }
  return uVar2;
}


void __thiscall FUN_005aad20(void *this,int param_1)

{
  int *_Memory;
  int iVar1;
  
  _Memory = *(int **)(param_1 + 0x38);
  if (_Memory[1] != 0) {
    ((int *)*_Memory)[_Memory[1]] = param_1;
    _Memory[1] = _Memory[1] + 1;
    if ((_Memory[1] == *(uint *)((int)this + 0x10) >> 6) && (3 < *(int *)((int)this + 8))) {
      if (_Memory == *(int **)this) {
        *(int *)this = _Memory[3];
      }
      *(int *)(_Memory[4] + 0xc) = _Memory[3];
      *(int *)(_Memory[3] + 0x10) = _Memory[4];
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
      free((void *)*_Memory);
      free((void *)_Memory[2]);
      free(_Memory);
    }
    return;
  }
  *(int *)*_Memory = param_1;
  _Memory[1] = _Memory[1] + 1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  *(int *)(_Memory[3] + 0x10) = _Memory[4];
  *(int *)(_Memory[4] + 0xc) = _Memory[3];
  if ((0 < *(int *)((int)this + 0xc)) && (_Memory == *(int **)((int)this + 4))) {
    *(int *)((int)this + 4) = (*(int **)((int)this + 4))[3];
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  if (iVar1 == 0) {
    *(int **)this = _Memory;
    _Memory[3] = (int)_Memory;
    _Memory[4] = (int)_Memory;
    return;
  }
  _Memory[3] = *(int *)this;
  _Memory[4] = *(int *)(*(int *)this + 0x10);
  *(int **)(*(int *)(*(int *)this + 0x10) + 0xc) = _Memory;
  *(int **)(*(int *)this + 0x10) = _Memory;
  return;
}


int __fastcall FUN_005aadf0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x14) = 0xffff0000;
  iVar2 = 10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x18) = 2;
  *(undefined4 *)(param_1 + 0x28) = 0xffff0000;
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)puVar1 = 2;
    puVar1[4] = 0xffff0000;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 5;
  } while (iVar2 != 0);
  FUN_005962e0((undefined4 *)(param_1 + 0xf8));
  *(undefined2 *)(param_1 + 0x11f8) = 0xffff;
  *(undefined4 *)(param_1 + 0x11f0) = DAT_006558d0;
  *(undefined4 *)(param_1 + 0x11f4) = DAT_006558d4;
  *(undefined2 *)(param_1 + 0x11f8) = DAT_006558d8;
  return param_1;
}


void __thiscall FUN_005aaea0(void *this,int param_1)

{
  int *_Memory;
  int iVar1;
  
  _Memory = *(int **)(param_1 + 0x70);
  if (_Memory[1] != 0) {
    ((int *)*_Memory)[_Memory[1]] = param_1;
    _Memory[1] = _Memory[1] + 1;
    if ((_Memory[1] == *(uint *)((int)this + 0x10) / 0x78) && (3 < *(int *)((int)this + 8))) {
      if (_Memory == *(int **)this) {
        *(int *)this = _Memory[3];
      }
      *(int *)(_Memory[4] + 0xc) = _Memory[3];
      *(int *)(_Memory[3] + 0x10) = _Memory[4];
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
      free((void *)*_Memory);
      free((void *)_Memory[2]);
      free(_Memory);
    }
    return;
  }
  *(int *)*_Memory = param_1;
  _Memory[1] = _Memory[1] + 1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  *(int *)(_Memory[3] + 0x10) = _Memory[4];
  *(int *)(_Memory[4] + 0xc) = _Memory[3];
  if ((0 < *(int *)((int)this + 0xc)) && (_Memory == *(int **)((int)this + 4))) {
    *(int *)((int)this + 4) = (*(int **)((int)this + 4))[3];
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  if (iVar1 == 0) {
    *(int **)this = _Memory;
    _Memory[3] = (int)_Memory;
    _Memory[4] = (int)_Memory;
    return;
  }
  _Memory[3] = *(int *)this;
  _Memory[4] = *(int *)(*(int *)this + 0x10);
  *(int **)(*(int *)(*(int *)this + 0x10) + 0xc) = _Memory;
  *(int **)(*(int *)this + 0x10) = _Memory;
  return;
}


void __thiscall FUN_005aaf80(void *this,int param_1)

{
  int *_Memory;
  int iVar1;
  
  _Memory = *(int **)(param_1 + 0xc);
  if (_Memory[1] != 0) {
    ((int *)*_Memory)[_Memory[1]] = param_1;
    _Memory[1] = _Memory[1] + 1;
    if ((_Memory[1] == *(uint *)((int)this + 0x10) >> 4) && (3 < *(int *)((int)this + 8))) {
      if (_Memory == *(int **)this) {
        *(int *)this = _Memory[3];
      }
      *(int *)(_Memory[4] + 0xc) = _Memory[3];
      *(int *)(_Memory[3] + 0x10) = _Memory[4];
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
      free((void *)*_Memory);
      free((void *)_Memory[2]);
      free(_Memory);
    }
    return;
  }
  *(int *)*_Memory = param_1;
  _Memory[1] = _Memory[1] + 1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  *(int *)(_Memory[3] + 0x10) = _Memory[4];
  *(int *)(_Memory[4] + 0xc) = _Memory[3];
  if ((0 < *(int *)((int)this + 0xc)) && (_Memory == *(int **)((int)this + 4))) {
    *(int *)((int)this + 4) = (*(int **)((int)this + 4))[3];
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  if (iVar1 == 0) {
    *(int **)this = _Memory;
    _Memory[3] = (int)_Memory;
    _Memory[4] = (int)_Memory;
    return;
  }
  _Memory[3] = *(int *)this;
  _Memory[4] = *(int *)(*(int *)this + 0x10);
  *(int **)(*(int *)(*(int *)this + 0x10) + 0xc) = _Memory;
  *(int **)(*(int *)this + 0x10) = _Memory;
  return;
}


undefined4 * __fastcall FUN_005ab050(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)
           FUN_005ae4ea(-(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 0x14));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1;
    if (param_1 != 0) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined2 *)puVar2 = 2;
        puVar2[4] = 0xffff0000;
        param_1 = param_1 - 1;
        puVar2 = puVar2 + 5;
      } while (param_1 != 0);
      return puVar1;
    }
  }
  return puVar1;
}


void __thiscall FUN_005ab0bd(void *this,byte param_1)

{
  FUN_0059e060((void *)((int)this + -4),param_1);
  return;
}


void __cdecl FUN_005ab0d0(size_t param_1)

{
  malloc(param_1);
  return;
}


void __cdecl FUN_005ab0f0(void *param_1,size_t param_2)

{
  realloc(param_1,param_2);
  return;
}


void __cdecl FUN_005ab110(void *param_1)

{
  free(param_1);
  return;
}


void FUN_005ab130(void)

{
  uint extraout_ECX;
  int unaff_EBX;
  undefined8 uVar1;
  undefined1 auStack_24 [4];
  LARGE_INTEGER local_20;
  LARGE_INTEGER local_18;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_24;
  if (DAT_0065b727 == '\0') {
    DAT_0065b727 = '\x01';
  }
  QueryPerformanceFrequency(&local_18);
  QueryPerformanceCounter(&local_20);
  uVar1 = __alldvrm(local_20.s.LowPart,local_20.s.HighPart,local_18.s.LowPart,local_18.s.HighPart);
  local_20.s.LowPart = (DWORD)uVar1;
  __aulldiv((uint)((ulonglong)extraout_ECX * 1000000),
            unaff_EBX * 1000000 + (int)((ulonglong)extraout_ECX * 1000000 >> 0x20),
            local_18.s.LowPart,local_18.s.HighPart);
  __security_check_cookie(local_c ^ (uint)auStack_24);
  return;
}


undefined4 * __fastcall FUN_005ab1f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[3] = (int)param_1 + 0x11;
  param_1[1] = 0x800;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
}


void __fastcall FUN_005ab220(int param_1)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (0x800 < *(uint *)(param_1 + 4))) {
    free(*(void **)(param_1 + 0xc));
  }
  return;
}


void __thiscall FUN_005ab240(void *this,byte *param_1,size_t param_2)

{
  if (param_2 != 0) {
    if ((*(byte *)this & 7) == 0) {
      FUN_005ab5d0(this,param_2 * 8);
      memcpy((void *)((*(int *)this + 7U >> 3) + *(int *)((int)this + 0xc)),param_1,param_2);
      *(size_t *)this = *(int *)this + param_2 * 8;
      return;
    }
    FUN_005ab3f0(this,param_1,param_2 * 8);
  }
  return;
}


void __thiscall FUN_005ab2a0(void *this,uint *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_005ab5d0(this,param_2);
  if (((param_1[2] & 7) == 0) && ((*(uint *)this & 7) == 0)) {
    uVar3 = param_1[2] >> 3;
    uVar4 = param_2 >> 3;
    memcpy((void *)((*(uint *)this >> 3) + *(int *)((int)this + 0xc)),(void *)(param_1[3] + uVar3),
           uVar4);
    param_2 = param_2 + uVar4 * -8;
    param_1[2] = (uVar3 + uVar4) * 8;
    *(uint *)this = *(int *)this + uVar4 * 8;
  }
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar3 = param_1[2];
    uVar4 = param_2 - 1;
    if (*param_1 < uVar3 + 1) break;
    uVar1 = *(uint *)this;
    pbVar2 = (byte *)((uVar3 >> 3) + param_1[3]);
    param_2._0_1_ = (byte)(0x80 >> ((byte)uVar3 & 7));
    if ((uVar1 & 7) == 0) {
      *(byte *)((uVar1 >> 3) + *(int *)((int)this + 0xc)) = -((*pbVar2 & (byte)param_2) != 0) & 0x80
      ;
    }
    else if ((*pbVar2 & (byte)param_2) != 0) {
      pbVar2 = (byte *)((uVar1 >> 3) + *(int *)((int)this + 0xc));
      *pbVar2 = *pbVar2 | (byte)(0x80 >> (sbyte)(uVar1 & 7));
    }
    param_1[2] = param_1[2] + 1;
    *(int *)this = *(int *)this + 1;
    param_2 = uVar4;
  }
  return;
}


void __thiscall FUN_005ab380(void *this,byte *param_1,size_t param_2)

{
  uint uVar1;
  
  uVar1 = (*(int *)this - (*(int *)this - 1U & 7)) + 7;
  *(uint *)this = uVar1;
  if (param_2 != 0) {
    if ((uVar1 & 7) == 0) {
      FUN_005ab5d0(this,param_2 * 8);
      memcpy((void *)((*(int *)this + 7U >> 3) + *(int *)((int)this + 0xc)),param_1,param_2);
      *(size_t *)this = *(int *)this + param_2 * 8;
      return;
    }
    FUN_005ab3f0(this,param_1,param_2 * 8);
  }
  return;
}


void __thiscall FUN_005ab3f0(void *this,byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  
  FUN_005ab5d0(this,param_2);
  uVar4 = *(uint *)this;
  uVar2 = uVar4 & 7;
  if ((uVar2 == 0) && ((param_2 & 7) == 0)) {
    memcpy((void *)((uVar4 >> 3) + *(int *)((int)this + 0xc)),param_1,param_2 >> 3);
    *(uint *)this = *(int *)this + param_2;
    return;
  }
  while (param_2 != 0) {
    bVar3 = *param_1;
    param_1 = param_1 + 1;
    if (param_2 < 8) {
      bVar3 = bVar3 << (8U - (char)param_2 & 0x1f);
    }
    pbVar1 = (byte *)((uVar4 >> 3) + *(int *)((int)this + 0xc));
    if (uVar2 == 0) {
      *pbVar1 = bVar3;
    }
    else {
      uVar4 = 8 - uVar2;
      *pbVar1 = *pbVar1 | bVar3 >> (sbyte)uVar2;
      if ((uVar4 < 8) && (uVar4 < param_2)) {
        *(byte *)((*(uint *)this >> 3) + 1 + *(int *)((int)this + 0xc)) =
             bVar3 << ((byte)uVar4 & 0x1f);
      }
    }
    uVar4 = param_2;
    if (7 < param_2) {
      uVar4 = 8;
    }
    bVar5 = param_2 < 8;
    uVar4 = *(int *)this + uVar4;
    *(uint *)this = uVar4;
    param_2 = param_2 - 8;
    if (bVar5) {
      param_2 = 0;
    }
  }
  return;
}


uint __thiscall FUN_005ab4c0(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined3 uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte local_8;
  
  uVar4 = *(uint *)((int)this + 8);
  if (*(uint *)this < uVar4 + param_2) {
    return uVar4 + param_2 & 0xffffff00;
  }
  uVar1 = uVar4 & 7;
  if ((uVar1 == 0) && ((param_2 & 7) == 0)) {
    pvVar2 = memcpy(param_1,(void *)((uVar4 >> 3) + *(int *)((int)this + 0xc)),param_2 >> 3);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
    return CONCAT31((int3)((uint)pvVar2 >> 8),1);
  }
  iVar6 = 0;
  memset(param_1,0,param_2 + 7 >> 3);
  uVar4 = *(uint *)((int)this + 8);
  while( true ) {
    bVar5 = *(char *)((uVar4 >> 3) + *(int *)((int)this + 0xc)) << (sbyte)uVar1 |
            *(byte *)(iVar6 + (int)param_1);
    *(byte *)(iVar6 + (int)param_1) = bVar5;
    uVar3 = (undefined3)((uint)param_1 >> 8);
    if ((uVar1 != 0) && (8 - uVar1 < param_2)) {
      uVar3 = (undefined3)((uint)*(int *)((int)this + 0xc) >> 8);
      local_8 = (byte)(8 - uVar1);
      bVar5 = *(byte *)((*(uint *)((int)this + 8) >> 3) + 1 + *(int *)((int)this + 0xc)) >>
              (local_8 & 0x1f) | bVar5;
      *(byte *)(iVar6 + (int)param_1) = bVar5;
    }
    if (param_2 < 8) break;
    iVar6 = iVar6 + 1;
    uVar4 = *(int *)((int)this + 8) + 8;
    *(uint *)((int)this + 8) = uVar4;
    param_2 = param_2 - 8;
    if (param_2 == 0) {
      return CONCAT31(uVar3,1);
    }
  }
  if (-1 < (int)(param_2 - 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 8;
    return CONCAT31(uVar3,1);
  }
  *(byte *)(iVar6 + (int)param_1) = bVar5 >> (-(char)(param_2 - 8) & 0x1fU);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
  return CONCAT31((int3)(param_2 >> 8),1);
}


void __thiscall FUN_005ab5d0(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = *(int *)this + param_1;
  if ((uVar3 != 0) && ((*(int *)((int)this + 4) - 1U & 0xfffffff8) < (uVar3 - 1 & 0xfffffff8))) {
    uVar1 = uVar3 * 2;
    uVar3 = uVar3 + 0x100000;
    if ((uVar1 - *(int *)this) - param_1 < 0x100001) {
      uVar3 = uVar1;
    }
    uVar1 = uVar3 + 7 >> 3;
    if (*(void **)((int)this + 0xc) == (void *)((int)this + 0x11)) {
      if (0x100 < uVar1) {
        pvVar2 = malloc(uVar1);
        *(void **)((int)this + 0xc) = pvVar2;
        memcpy(pvVar2,(void *)((int)this + 0x11),*(int *)((int)this + 4) + 7U >> 3);
      }
    }
    else {
      pvVar2 = realloc(*(void **)((int)this + 0xc),uVar1);
      *(void **)((int)this + 0xc) = pvVar2;
    }
  }
  if (*(uint *)((int)this + 4) < uVar3) {
    *(uint *)((int)this + 4) = uVar3;
  }
  return;
}


void __thiscall FUN_005ab660(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  FUN_005ab5d0(this,0x10);
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
    FUN_005ade89(&DAT_0066086c);
    if (DAT_0066086c == -1) {
      DAT_00660868 = htonl(0x3039);
      FUN_005ade3f(&DAT_0066086c);
    }
  }
  puVar2 = (undefined1 *)((*(uint *)this >> 3) + *(int *)((int)this + 0xc));
  if (DAT_00660868 == 0x3039) {
    *puVar2 = *param_1;
    uVar1 = param_1[1];
  }
  else {
    *puVar2 = param_1[1];
    uVar1 = *param_1;
  }
  *(undefined1 *)((*(uint *)this >> 3) + 1 + *(int *)((int)this + 0xc)) = uVar1;
  *(int *)this = *(int *)this + 0x10;
  return;
}


uint __thiscall FUN_005ab700(void *this,undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = *(int *)((int)this + 8) + 0x10;
  if (*(uint *)this < uVar2) {
    return uVar2 & 0xffffff00;
  }
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
    FUN_005ade89(&DAT_0066086c);
    if (DAT_0066086c == -1) {
      DAT_00660868 = htonl(0x3039);
      FUN_005ade3f(&DAT_0066086c);
    }
  }
  puVar3 = (undefined1 *)((*(uint *)((int)this + 8) >> 3) + *(int *)((int)this + 0xc));
  if (DAT_00660868 != 0x3039) {
    *param_1 = puVar3[1];
    iVar1 = *(int *)((int)this + 0xc);
    param_1[1] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + iVar1);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x10;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  *param_1 = *puVar3;
  iVar1 = *(int *)((int)this + 0xc);
  param_1[1] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 1 + iVar1);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x10;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


void __thiscall FUN_005ab7c0(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  
  FUN_005ab5d0(this,0x20);
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
    FUN_005ade89(&DAT_0066086c);
    if (DAT_0066086c == -1) {
      DAT_00660868 = htonl(0x3039);
      FUN_005ade3f(&DAT_0066086c);
    }
  }
  if (DAT_00660868 == 0x3039) {
    *(undefined1 *)((*(uint *)this >> 3) + *(int *)((int)this + 0xc)) = *param_1;
    *(undefined1 *)((*(uint *)this >> 3) + 1 + *(int *)((int)this + 0xc)) = param_1[1];
    *(undefined1 *)((*(uint *)this >> 3) + 2 + *(int *)((int)this + 0xc)) = param_1[2];
    uVar1 = param_1[3];
  }
  else {
    *(undefined1 *)((*(uint *)this >> 3) + *(int *)((int)this + 0xc)) = param_1[3];
    *(undefined1 *)((*(uint *)this >> 3) + 1 + *(int *)((int)this + 0xc)) = param_1[2];
    *(undefined1 *)((*(uint *)this >> 3) + 2 + *(int *)((int)this + 0xc)) = param_1[1];
    uVar1 = *param_1;
  }
  *(undefined1 *)((*(uint *)this >> 3) + 3 + *(int *)((int)this + 0xc)) = uVar1;
  *(int *)this = *(int *)this + 0x20;
  return;
}


uint __thiscall FUN_005ab8a0(void *this,undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = *(int *)((int)this + 8) + 0x20;
  if (*(uint *)this < uVar2) {
    return uVar2 & 0xffffff00;
  }
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) {
    FUN_005ade89(&DAT_0066086c);
    if (DAT_0066086c == -1) {
      DAT_00660868 = htonl(0x3039);
      FUN_005ade3f(&DAT_0066086c);
    }
  }
  puVar3 = (undefined1 *)((*(uint *)((int)this + 8) >> 3) + *(int *)((int)this + 0xc));
  if (DAT_00660868 != 0x3039) {
    *param_1 = puVar3[3];
    param_1[1] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 2 + *(int *)((int)this + 0xc));
    param_1[2] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 1 + *(int *)((int)this + 0xc));
    iVar1 = *(int *)((int)this + 0xc);
    param_1[3] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + iVar1);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x20;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  *param_1 = *puVar3;
  param_1[1] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 1 + *(int *)((int)this + 0xc));
  param_1[2] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 2 + *(int *)((int)this + 0xc));
  iVar1 = *(int *)((int)this + 0xc);
  param_1[3] = *(undefined1 *)((*(uint *)((int)this + 8) >> 3) + 3 + iVar1);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x20;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


char * __fastcall FUN_005ab9a0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar2 = param_1;
  pcVar5 = param_2;
  do {
    pcVar4 = pcVar5;
    uVar3 = iVar2 % 10 >> 0x1f;
    *pcVar4 = "0123456789abcdef"[(iVar2 % 10 ^ uVar3) - uVar3];
    pcVar5 = pcVar4 + 1;
    iVar2 = iVar2 / 10;
  } while (iVar2 != 0);
  if (param_1 < 0) {
    *pcVar5 = '-';
    pcVar5 = pcVar4 + 2;
  }
  *pcVar5 = '\0';
  pcVar5 = pcVar5 + -1;
  pcVar4 = param_2;
  if (param_2 < pcVar5) {
    do {
      cVar1 = *pcVar4;
      *pcVar4 = *pcVar5;
      pcVar4 = pcVar4 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + -1;
    } while (pcVar4 < pcVar5);
  }
  return param_2;
}


void __thiscall FUN_005aba10(void *this,u_short *param_1)

{
  char *cp;
  u_short uVar1;
  SOCKET s;
  ulong uVar2;
  uint uVar3;
  sockaddr local_20;
  u_long local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = htons(*param_1);
  *(u_short *)((int)this + 0xe) = uVar1;
  s = socket((uint)param_1[4],*(int *)(param_1 + 6),*(int *)(param_1 + 8));
  *(SOCKET *)((int)this + 0x24) = s;
  if (s != 0xffffffff) {
    local_10 = 0x40000;
    setsockopt(s,0xffff,0x1002,(char *)&local_10,4);
    local_10 = 0;
    setsockopt(*(SOCKET *)((int)this + 0x24),0xffff,0x80,(char *)&local_10,4);
    local_10 = 0x4000;
    setsockopt(*(SOCKET *)((int)this + 0x24),0xffff,0x1001,(char *)&local_10,4);
    local_10 = (u_long)(byte)param_1[10];
    ioctlsocket(*(SOCKET *)((int)this + 0x24),-0x7ffb9982,&local_10);
    local_10 = *(u_long *)(param_1 + 0xc);
    setsockopt(*(SOCKET *)((int)this + 0x24),0xffff,0x20,(char *)&local_10,4);
    local_10 = *(u_long *)(param_1 + 0xe);
    setsockopt(*(SOCKET *)((int)this + 0x24),0,2,(char *)&local_10,4);
    *(undefined2 *)((int)this + 0xc) = 2;
    cp = *(char **)(param_1 + 2);
    if ((cp == (char *)0x0) || (*cp == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = inet_addr(cp);
    }
    *(ulong *)((int)this + 0x10) = uVar2;
    uVar3 = bind(*(SOCKET *)((int)this + 0x24),(sockaddr *)((int)this + 0xc),0x10);
    if (uVar3 < 0x80000000) {
      local_10 = 0x10;
      local_20.sa_family = 0;
      local_20.sa_data[0] = '\0';
      local_20.sa_data[1] = '\0';
      local_20.sa_data[2] = '\0';
      local_20.sa_data[3] = '\0';
      local_20.sa_data[4] = '\0';
      local_20.sa_data[5] = '\0';
      local_20.sa_data[6] = '\0';
      local_20.sa_data[7] = '\0';
      local_20.sa_data[8] = '\0';
      local_20.sa_data[9] = '\0';
      local_20.sa_data[10] = '\0';
      local_20.sa_data[0xb] = '\0';
      local_20.sa_data[0xc] = '\0';
      local_20.sa_data[0xd] = '\0';
      getsockname(*(SOCKET *)((int)this + 0x24),&local_20,(int *)&local_10);
      *(undefined2 *)((int)this + 0xe) = local_20.sa_data._0_2_;
      uVar1 = ntohs(local_20.sa_data._0_2_);
      *(u_short *)((int)this + 0x1c) = uVar1;
      *(int *)((int)this + 0x10) = CONCAT22(local_20.sa_data._4_2_,local_20.sa_data._2_2_);
      if (CONCAT22(local_20.sa_data._4_2_,local_20.sa_data._2_2_) == 0) {
        uVar2 = inet_addr("127.0.0.1");
        *(ulong *)((int)this + 0x10) = uVar2;
      }
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    closesocket(*(SOCKET *)((int)this + 0x24));
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005abbe0(void *this,u_short *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  iVar4 = FUN_005aba10(this,param_1);
  if (iVar4 == 0) {
    local_30 = &local_10;
    local_2c = 4;
    local_16 = *(undefined2 *)((int)this + 0x1e);
    local_18 = *(undefined2 *)((int)this + 0x1c);
    local_28 = *(undefined4 *)((int)this + 0xc);
    uStack_24 = *(undefined4 *)((int)this + 0x10);
    uStack_20 = *(undefined4 *)((int)this + 0x14);
    uStack_1c = *(undefined4 *)((int)this + 0x18);
    local_14 = 0;
    local_10 = iVar4;
    iVar4 = (**(code **)(*(int *)this + 4))
                      (&local_30,"f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x140);
    if (iVar4 < 0) {
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 2);
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)param_1;
    *(undefined4 *)((int)this + 0x2c) = uVar1;
    *(undefined4 *)((int)this + 0x30) = uVar2;
    *(undefined4 *)((int)this + 0x34) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 10);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0xe);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x3c) = uVar1;
    *(undefined4 *)((int)this + 0x40) = uVar2;
    *(undefined4 *)((int)this + 0x44) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x12);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x16);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)this + 0x4c) = uVar1;
    *(undefined4 *)((int)this + 0x50) = uVar2;
    *(undefined4 *)((int)this + 0x54) = uVar3;
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall FUN_005abdc0(void *this,byte param_1)

{
  *(undefined ***)this = RakNet::RNS2_Berkley::vftable;
  if (*(SOCKET *)((int)this + 0x24) != 0xffffffff) {
    closesocket(*(SOCKET *)((int)this + 0x24));
  }
  *(undefined ***)this = RakNet::RakNetSocket2::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_005abe00(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_34 [4];
  undefined4 *local_30;
  undefined4 local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_34;
  local_10 = 0;
  local_30 = &local_10;
  local_2c = 4;
  *(undefined1 *)(param_1 + 0x17) = 1;
  local_18 = param_1[7];
  local_28 = param_1[3];
  iStack_24 = param_1[4];
  iStack_20 = param_1[5];
  iStack_1c = param_1[6];
  local_14 = 0;
  (**(code **)(*param_1 + 4))(&local_30,"f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x1a9)
  ;
  uVar2 = FUN_005ab130();
  uVar2 = __aulldiv((uint)uVar2,(uint)((ulonglong)uVar2 >> 0x20),1000,0);
  iVar1 = param_1[0x16];
  while (iVar1 != 0) {
    uVar3 = FUN_005ab130();
    uVar3 = __aulldiv((uint)uVar3,(uint)((ulonglong)uVar3 >> 0x20),1000,0);
    if ((int)uVar2 + 1000U <= (uint)uVar3) break;
    (**(code **)(*param_1 + 4))
              (&stack0xffffffc4,"f:\\src\\ois\\libs\\raknet\\code\\raknetsocket2.cpp",0x1af);
    Sleep(0x1e);
    iVar1 = param_1[0x16];
  }
  __security_check_cookie(local_18 ^ (uint)&stack0xffffffc0);
  return;
}


undefined4 * __thiscall FUN_005abef0(void *this,byte param_1)

{
  *(undefined ***)this = RakNet::RNS2_Berkley::vftable;
  if (*(SOCKET *)((int)this + 0x24) != 0xffffffff) {
    closesocket(*(SOCKET *)((int)this + 0x24));
  }
  *(undefined ***)this = RakNet::RakNetSocket2::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __thiscall FUN_005abf30(void *this,u_short *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005abbe0(this,param_1);
  if (iVar1 == 2) {
    Sleep(100);
    FUN_005abbe0(this,param_1);
  }
  return;
}


void __thiscall FUN_005abf70(void *this,undefined4 *param_1)

{
  SOCKET s;
  int iVar1;
  int iVar2;
  undefined4 local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if ((*(int **)((int)this + 0x60) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)((int)this + 0x60) + 4))(*param_1,param_1[1],param_1 + 2),
     iVar1 < 0)) {
    s = *(SOCKET *)((int)this + 0x24);
    iVar1 = 0;
    do {
      local_c = -1;
      if (0 < (int)param_1[7]) {
        local_10 = 4;
        iVar2 = getsockopt(s,0,4,(char *)&local_c,&local_10);
        if (iVar2 != -1) {
          local_14 = param_1[7];
          setsockopt(s,0,4,(char *)&local_14,4);
        }
      }
      if (((sockaddr *)(param_1 + 2))->sa_family == 2) {
        iVar1 = sendto(s,(char *)*param_1,param_1[1],0,(sockaddr *)(param_1 + 2),0x10);
      }
      if (iVar1 < 0) {
        FUN_00421a10((void *)(int)*(char *)*param_1,
                     "sendto failed with code %i for char %i and length %i.\n");
      }
      if (local_c != -1) {
        setsockopt(s,0,4,(char *)&local_c,4);
      }
    } while (iVar1 == 0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}
