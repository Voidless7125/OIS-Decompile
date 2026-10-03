#include "../ois_server.exe.h"


void __fastcall FUN_0059c0e0(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    free((void *)*param_1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


int __thiscall FUN_0059c110(void *this,ushort *param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    iVar4 = 0;
    iVar5 = iVar1 / 2;
    uVar2 = FUN_005962b0(param_1,(int *)(*(int *)this + iVar5 * 4));
    iVar1 = iVar1 + -1;
    while( true ) {
      if (uVar2 == 0) {
        *param_2 = 1;
        return iVar5;
      }
      iVar3 = iVar5 + -1;
      if (-1 < (int)uVar2) {
        iVar3 = iVar1;
        iVar4 = iVar5 + 1;
      }
      iVar5 = (iVar3 - iVar4) / 2 + iVar4;
      if (iVar3 < iVar4) {
        *param_2 = 0;
        return iVar4;
      }
      if ((iVar5 < 0) || (*(int *)((int)this + 4) <= iVar5)) break;
      uVar2 = FUN_005962b0(param_1,(int *)(*(int *)this + iVar5 * 4));
      iVar1 = iVar3;
    }
  }
  *param_2 = 0;
  return 0;
}


uint __thiscall FUN_0059c1c0(void *this,ushort *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *_Memory;
  uint uVar5;
  undefined4 uStack_8;
  
  uStack_8 = this;
  uVar2 = FUN_0059c110(this,param_1,(undefined1 *)((int)&uStack_8 + 3));
  if (uStack_8._3_1_ != '\0') {
    return 0xffffffff;
  }
  uVar5 = *(uint *)((int)this + 4);
  uVar3 = *(uint *)((int)this + 8);
  if (uVar2 < uVar5) {
    if (uVar5 != uVar3) {
      iVar4 = *(int *)this;
      goto LAB_0059c2e0;
    }
    if (uVar3 == 0) {
      *(undefined4 *)((int)this + 8) = 0x10;
      uVar3 = 0x10;
LAB_0059c290:
      iVar4 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar3 * 4));
      uVar5 = *(uint *)((int)this + 4);
    }
    else {
      uVar3 = uVar3 * 2;
      *(uint *)((int)this + 8) = uVar3;
      if (uVar3 != 0) goto LAB_0059c290;
      iVar4 = 0;
    }
    uVar3 = 0;
    if (uVar5 != 0) {
      do {
        *(undefined4 *)(iVar4 + uVar3 * 4) = *(undefined4 *)(*(int *)this + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 4));
    }
    free(*(void **)this);
    uVar5 = *(uint *)((int)this + 4);
    *(int *)this = iVar4;
LAB_0059c2e0:
    if (uVar5 != uVar2) {
      do {
        puVar1 = (undefined4 *)(*(int *)this + uVar5 * 4);
        uVar5 = uVar5 - 1;
        *puVar1 = puVar1[-1];
      } while (uVar5 != uVar2);
      iVar4 = *(int *)this;
    }
    *(undefined4 *)(iVar4 + uVar2 * 4) = *param_2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    return uVar2;
  }
  if (uVar5 != uVar3) {
    iVar4 = *(int *)this;
    goto LAB_0059c25f;
  }
  if (uVar3 == 0) {
    *(undefined4 *)((int)this + 8) = 0x10;
    uVar3 = 0x10;
LAB_0059c20b:
    iVar4 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar3 * 4));
    uVar5 = *(uint *)((int)this + 4);
  }
  else {
    uVar3 = uVar3 * 2;
    *(uint *)((int)this + 8) = uVar3;
    if (uVar3 != 0) goto LAB_0059c20b;
    iVar4 = 0;
  }
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    uVar2 = 0;
    if (uVar5 != 0) {
      do {
        *(undefined4 *)(iVar4 + uVar2 * 4) = *(undefined4 *)(*(int *)this + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 4));
      _Memory = *(void **)this;
    }
    free(_Memory);
  }
  *(int *)this = iVar4;
LAB_0059c25f:
  *(undefined4 *)(iVar4 + *(int *)((int)this + 4) * 4) = *param_2;
  uVar2 = *(uint *)((int)this + 4);
  *(uint *)((int)this + 4) = uVar2 + 1;
  return uVar2;
}


void __thiscall FUN_0059c310(void *this,undefined1 *param_1)

{
  size_t sVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined1 *)(*(int *)((int)this + 8) + *(int *)this) = *param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar3 = *(int *)((int)this + 8);
    if (iVar3 == *(int *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 8) = 0;
      iVar3 = 0;
    }
    if (((iVar3 == *(int *)((int)this + 4)) && (sVar1 = *(int *)((int)this + 0xc) * 2, sVar1 != 0))
       && (iVar3 = FUN_005ae4ea(sVar1), iVar3 != 0)) {
      uVar4 = 0;
      if (*(int *)((int)this + 0xc) != 0) {
        do {
          *(undefined1 *)(uVar4 + iVar3) =
               *(undefined1 *)
                ((*(int *)((int)this + 4) + uVar4) % *(uint *)((int)this + 0xc) + *(int *)this);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((int)this + 0xc));
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 0xc);
      *(undefined4 *)((int)this + 4) = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) * 2;
      free(*(void **)this);
      *(int *)this = iVar3;
    }
    return;
  }
  puVar2 = (undefined1 *)FUN_005ae4ea(0x10);
  *(undefined1 **)this = puVar2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *puVar2 = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0x10;
  return;
}


int __fastcall FUN_0059c3d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 <= uVar1) {
    return uVar1 - uVar2;
  }
  return (*(int *)(param_1 + 0xc) - uVar2) + uVar1;
}


void __thiscall FUN_0059c3f0(void *this,undefined1 *param_1)

{
  size_t sVar1;
  int iVar2;
  void *_Memory;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  if (iVar4 != iVar2) {
    *(undefined1 *)(*(int *)this + *(int *)((int)this + 4)) = *param_1;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    return;
  }
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 8) = 0x10;
    sVar1 = 0x10;
  }
  else {
    sVar1 = iVar2 * 2;
    *(size_t *)((int)this + 8) = sVar1;
    if (sVar1 == 0) {
      iVar2 = 0;
      goto LAB_0059c41f;
    }
  }
  iVar2 = FUN_005ae4ea(sVar1);
  iVar4 = *(int *)((int)this + 4);
LAB_0059c41f:
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    uVar3 = 0;
    if (iVar4 != 0) {
      do {
        *(undefined1 *)(uVar3 + iVar2) = *(undefined1 *)(uVar3 + *(int *)this);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)this + 4));
      _Memory = *(void **)this;
    }
    free(_Memory);
  }
  *(int *)this = iVar2;
  *(undefined1 *)(iVar2 + *(int *)((int)this + 4)) = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


void __fastcall FUN_0059c480(int *param_1)

{
  uint uVar1;
  void *_Memory;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1[2];
  if (uVar2 == 0) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = uVar2;
    if (0x7f < uVar2) {
      return;
    }
  }
  do {
    uVar1 = uVar1 * 2;
  } while (uVar1 < 0x80);
  if (uVar2 < uVar1) {
    param_1[2] = uVar1;
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar1 * 4));
    }
    _Memory = (void *)*param_1;
    if (_Memory != (void *)0x0) {
      uVar2 = 0;
      if (param_1[1] != 0) {
        do {
          *(undefined4 *)(iVar3 + uVar2 * 4) = *(undefined4 *)(*param_1 + uVar2 * 4);
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)param_1[1]);
        _Memory = (void *)*param_1;
      }
      free(_Memory);
    }
    *param_1 = iVar3;
  }
  return;
}


void __fastcall FUN_0059c510(undefined4 *param_1)

{
  FUN_0059c720(param_1);
  FUN_0059cc30(param_1);
  return;
}


void __thiscall FUN_0059c520(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_14;
  uint local_10;
  char local_9 [5];
  
  uVar4 = *(uint *)((int)this + 4);
  if (uVar4 == 0) {
    local_14 = param_1;
    local_10 = param_1;
    FUN_0059ccc0(this,&param_1,local_9);
    if (local_9[0] == '\0') {
      FUN_0059ce20(this,&local_14);
      return;
    }
  }
  else {
    uVar2 = FUN_0059ccc0(this,&param_1,local_9);
    puVar5 = (uint *)(*(int *)this + uVar2 * 8);
    if (uVar2 == uVar4) {
      uVar2 = puVar5[-1] + 1 & 0xffffff;
      if (param_1 == uVar2) {
        puVar5[-1] = puVar5[-1] + 1;
        *(undefined1 *)((int)puVar5 + -1) = 0;
        return;
      }
      if (uVar2 < param_1) {
        local_14 = param_1;
        local_10 = param_1;
        uVar2 = FUN_0059ccc0(this,&param_1,local_9);
        if (local_9[0] == '\0') {
          if (uVar2 < uVar4) {
            FUN_0059cf00(this,&local_14,uVar2);
            return;
          }
          FUN_0059ce20(this,&local_14);
          return;
        }
      }
    }
    else {
      uVar4 = *puVar5 - 1;
      uVar3 = uVar4 & 0xffffff;
      if (param_1 < uVar3) {
        local_14 = param_1;
        local_10 = param_1;
        FUN_0059cf00(this,&local_14,uVar2);
        return;
      }
      if (param_1 == uVar3) {
        *puVar5 = uVar4;
        *(undefined1 *)((int)puVar5 + 3) = 0;
        if (uVar2 == 0) {
          return;
        }
        puVar5 = (uint *)(*(int *)this + uVar2 * 8);
        if ((puVar5[-1] + 1 & 0xffffff) != *puVar5) {
          return;
        }
        puVar5[-1] = puVar5[1];
        uVar4 = *(uint *)((int)this + 4);
        if (uVar4 <= uVar2) {
          return;
        }
        if (uVar2 < uVar4 - 1) {
          do {
            puVar1 = (undefined4 *)(*(int *)this + uVar2 * 8);
            uVar2 = uVar2 + 1;
            *puVar1 = puVar1[2];
            puVar1[1] = puVar1[3];
          } while (uVar2 < *(int *)((int)this + 4) - 1U);
          *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
          return;
        }
      }
      else {
        if ((*puVar5 <= param_1) && (param_1 <= puVar5[1])) {
          return;
        }
        if (param_1 != (puVar5[1] + 1 & 0xffffff)) {
          return;
        }
        puVar5[1] = puVar5[1] + 1;
        *(undefined1 *)((int)puVar5 + 7) = 0;
        if (*(int *)((int)this + 4) - 1U <= uVar2) {
          return;
        }
        puVar1 = (undefined4 *)(*(int *)this + uVar2 * 8);
        if (puVar1[2] != (puVar1[1] + 1 & 0xffffff)) {
          return;
        }
        puVar1[2] = *puVar1;
        uVar4 = *(uint *)((int)this + 4);
        if (uVar4 <= uVar2) {
          return;
        }
        if (uVar2 < uVar4 - 1) {
          do {
            puVar1 = (undefined4 *)(*(int *)this + uVar2 * 8);
            uVar2 = uVar2 + 1;
            *puVar1 = puVar1[2];
            puVar1[1] = puVar1[3];
            uVar4 = *(uint *)((int)this + 4);
          } while (uVar2 < uVar4 - 1);
        }
      }
      *(uint *)((int)this + 4) = uVar4 - 1;
    }
  }
  return;
}


void __fastcall FUN_0059c720(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1[2] != 0) {
    if (0x200 < (uint)param_1[2]) {
      pvVar1 = (void *)*param_1;
      if (pvVar1 != (void *)0x0) {
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar1,8,*(uint *)((int)pvVar1 + -4),guard_check_icall);
        FUN_005adb4d((uint *)((int)pvVar1 + -4));
      }
      param_1[2] = 0;
      *param_1 = 0;
    }
    param_1[1] = 0;
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0059c7b0(void *this,int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_130;
  uint local_124;
  uint local_120;
  uint local_11c;
  undefined4 local_118;
  undefined1 *local_114;
  char local_110;
  undefined1 local_10f [259];
  byte local_c;
  byte local_b [3];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  memset(local_10f,0,0x103);
  local_114 = local_10f;
  local_120 = 0;
  uVar6 = 0;
  local_11c = 0x800;
  local_118 = 0;
  local_110 = '\x01';
  local_124 = 0;
  local_130 = 0;
  uVar3 = local_124;
  if (*(int *)((int)this + 4) != 0) {
    local_124 = 0x51;
    do {
      uVar3 = uVar6;
      if (param_2 < local_124) break;
      iVar8 = local_130 * 8;
      local_b[0] = *(int *)(*(int *)this + iVar8) == *(int *)(*(int *)this + iVar8 + 4);
      FUN_005ab3f0(&local_120,local_b,8);
      FUN_00595820(&local_120,(undefined1 *)(*(int *)this + iVar8));
      local_124 = local_124 + 0x28;
      piVar4 = (int *)(*(int *)this + 4 + iVar8);
      if (*(int *)(*(int *)this + iVar8) != *piVar4) {
        FUN_00595820(&local_120,(undefined1 *)piVar4);
        local_124 = local_124 + 0x20;
      }
      uVar6 = uVar6 + 1;
      local_130 = local_130 + 1;
      uVar3 = uVar6;
    } while (local_130 < *(uint *)((int)this + 4));
  }
  local_124 = uVar3;
  uVar3 = local_124;
  uVar5 = (ushort)local_124;
  *param_1 = (*param_1 - (*param_1 - 1U & 7)) + 7;
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_0066086c) &&
     (FUN_005ade89(&DAT_0066086c), DAT_0066086c == -1)) {
    DAT_00660868 = htonl(0x3039);
    FUN_005ade3f(&DAT_0066086c);
  }
  if (DAT_00660868 == 0x3039) {
    FUN_005ab3f0(param_1,(byte *)&local_124,0x10);
    uVar5 = (ushort)local_124;
  }
  else {
    local_c = (byte)(uVar3 >> 8);
    local_b[0] = (byte)uVar3;
    FUN_005ab3f0(param_1,&local_c,0x10);
  }
  FUN_005ab2a0(param_1,&local_120,local_120);
  if (uVar5 != 0) {
    uVar3 = *(uint *)((int)this + 4);
    uVar6 = (uint)uVar5;
    uVar7 = 0;
    if (uVar3 != uVar6) {
      iVar8 = uVar6 * 8;
      do {
        puVar1 = (undefined4 *)(iVar8 + *(int *)this);
        puVar2 = (undefined4 *)(*(int *)this + uVar7 * 8);
        *puVar2 = *puVar1;
        iVar8 = iVar8 + 8;
        uVar7 = uVar7 + 1;
        puVar2[1] = puVar1[1];
      } while (uVar7 < uVar3 - uVar6);
      uVar3 = *(uint *)((int)this + 4);
    }
    *(uint *)((int)this + 4) = uVar3 - uVar6;
  }
  if ((local_110 != '\0') && (0x800 < local_11c)) {
    free(local_114);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059ca50(void *this,void *param_1)

{
  void *pvVar1;
  uint uVar2;
  ushort uVar3;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  ushort local_20 [3];
  char local_19;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb480;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(uint *)((int)this + 8) != 0) {
    if (0x200 < *(uint *)((int)this + 8)) {
      pvVar1 = *(void **)this;
      if (pvVar1 != (void *)0x0) {
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar1,8,*(uint *)((int)pvVar1 + -4),guard_check_icall);
        FUN_005adb4d((uint *)((int)pvVar1 + -4));
      }
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  local_8 = 0xffffffff;
  *(uint *)((int)param_1 + 8) =
       (*(int *)((int)param_1 + 8) - (*(int *)((int)param_1 + 8) - 1U & 7)) + 7;
  FUN_0059b8a0(param_1,(undefined1 *)local_20);
  local_19 = '\0';
  uVar3 = 0;
  if (local_20[0] != 0) {
    while( true ) {
      FUN_005ab4c0(param_1,&local_19,8);
      uVar2 = FUN_005958f0(param_1,(undefined1 *)&local_24);
      if ((char)uVar2 == '\0') break;
      if (local_19 == '\0') {
        uVar2 = FUN_005958f0(param_1,(undefined1 *)&local_28);
        if (((char)uVar2 == '\0') || (local_28 < local_24)) break;
      }
      else {
        local_28 = local_24;
      }
      local_30 = local_24;
      local_2c = local_28;
      FUN_0059ce20(this,&local_30);
      uVar3 = uVar3 + 1;
      if (local_20[0] <= uVar3) break;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059cb90(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  void *_Memory;
  int iVar8;
  
  iVar8 = *(int *)((int)this + 4);
  iVar7 = *(int *)((int)this + 8);
  if (iVar8 != iVar7) {
    iVar7 = *(int *)this;
    goto LAB_0059cc12;
  }
  if (iVar7 == 0) {
    *(undefined4 *)((int)this + 8) = 0x10;
    uVar6 = 0x10;
LAB_0059cbb2:
    iVar7 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar6 * 0x10));
    iVar8 = *(int *)((int)this + 4);
  }
  else {
    uVar6 = iVar7 * 2;
    *(uint *)((int)this + 8) = uVar6;
    if (uVar6 != 0) goto LAB_0059cbb2;
    iVar7 = 0;
  }
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    uVar6 = 0;
    if (iVar8 != 0) {
      iVar8 = 0;
      do {
        uVar6 = uVar6 + 1;
        puVar1 = (undefined4 *)(*(int *)this + -0x10 + iVar8 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (undefined4 *)(iVar8 + iVar7);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        iVar8 = iVar8 + 0x10;
      } while (uVar6 < *(uint *)((int)this + 4));
      _Memory = *(void **)this;
    }
    free(_Memory);
  }
  *(int *)this = iVar7;
LAB_0059cc12:
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  puVar1 = (undefined4 *)(iVar7 + *(int *)((int)this + 4) * 0x10);
  *puVar1 = *param_1;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


void __fastcall FUN_0059cc30(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b2450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1[2] != 0) {
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      local_8 = 0;
      _eh_vector_destructor_iterator_(pvVar1,8,*(uint *)((int)pvVar1 + -4),guard_check_icall);
      FUN_005adb4d((uint *)((int)pvVar1 + -4));
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  ExceptionList = local_10;
  return;
}


int __thiscall FUN_0059ccc0(void *this,uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    iVar6 = 0;
    iVar3 = iVar2 / 2;
    local_8 = iVar2 + -1;
    do {
      uVar1 = *(uint *)(*(int *)this + iVar3 * 8);
      if (*param_1 < uVar1) {
        iVar5 = -1;
      }
      else {
        if (*param_1 == uVar1) {
          *param_2 = 1;
          return iVar3;
        }
        iVar5 = 1;
      }
      iVar4 = iVar3 + -1;
      if (-1 < iVar5) {
        iVar4 = local_8;
        iVar6 = iVar3 + 1;
      }
      iVar3 = (iVar4 - iVar6) / 2 + iVar6;
      if (iVar4 < iVar6) {
        *param_2 = 0;
        return iVar6;
      }
    } while ((-1 < iVar3) && (local_8 = iVar4, iVar3 < iVar2));
  }
  *param_2 = 0;
  return 0;
}


uint * __fastcall FUN_0059cd60(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb4dd;
  local_10 = ExceptionList;
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x10)
  ;
  ExceptionList = &local_10;
  puVar1 = (uint *)FUN_005ae4ea(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  local_8 = 0;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    _eh_vector_constructor_iterator_(puVar1 + 1,0x10,param_1,FUN_004dcac0,guard_check_icall);
    ExceptionList = local_10;
    return puVar1 + 1;
  }
  ExceptionList = local_10;
  return (uint *)0x0;
}


void __thiscall FUN_0059ce20(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  if (iVar6 == iVar2) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 8) = 0x10;
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar2 * 2;
      *(uint *)((int)this + 8) = uVar5;
    }
    puVar3 = FUN_0059d000(uVar5);
    pvVar4 = *(void **)this;
    if (pvVar4 != (void *)0x0) {
      uVar5 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          puVar1 = (uint *)(*(int *)this + uVar5 * 8);
          puVar3[uVar5 * 2] = *puVar1;
          puVar3[uVar5 * 2 + 1] = puVar1[1];
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)((int)this + 4));
        pvVar4 = *(void **)this;
      }
      if (pvVar4 != (void *)0x0) {
        local_8 = 0;
        _eh_vector_destructor_iterator_(pvVar4,8,*(uint *)((int)pvVar4 + -4),guard_check_icall);
        FUN_005adb4d((uint *)((int)pvVar4 + -4));
      }
    }
    iVar6 = *(int *)((int)this + 4);
    *(uint **)this = puVar3;
  }
  else {
    puVar3 = *(uint **)this;
  }
  puVar3[iVar6 * 2] = *param_1;
  puVar3[iVar6 * 2 + 1] = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0059cf00(void *this,uint *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b1f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  if (iVar6 == iVar2) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 8) = 0x10;
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar2 * 2;
      *(uint *)((int)this + 8) = uVar5;
    }
    puVar4 = FUN_0059d000(uVar5);
    uVar5 = 0;
    if (*(int *)((int)this + 4) != 0) {
      do {
        iVar2 = *(int *)this;
        uVar7 = uVar5 + 1;
        puVar4[uVar5 * 2] = *(uint *)(iVar2 + uVar5 * 8);
        puVar4[uVar5 * 2 + 1] = *(uint *)(iVar2 + 4 + uVar5 * 8);
        uVar5 = uVar7;
      } while (uVar7 < *(uint *)((int)this + 4));
    }
    pvVar3 = *(void **)this;
    if (pvVar3 != (void *)0x0) {
      local_8 = 0;
      _eh_vector_destructor_iterator_(pvVar3,8,*(uint *)((int)pvVar3 + -4),guard_check_icall);
      FUN_005adb4d((uint *)((int)pvVar3 + -4));
    }
    iVar6 = *(int *)((int)this + 4);
    *(uint **)this = puVar4;
  }
  else {
    puVar4 = *(uint **)this;
  }
  if (iVar6 != param_2) {
    do {
      puVar1 = (undefined4 *)(*(int *)this + iVar6 * 8);
      iVar6 = iVar6 + -1;
      *puVar1 = puVar1[-2];
      puVar1[1] = puVar1[-1];
    } while (iVar6 != param_2);
    puVar4 = *(uint **)this;
  }
  puVar4[param_2 * 2] = *param_1;
  puVar4[param_2 * 2 + 1] = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  ExceptionList = local_10;
  return;
}


uint * __fastcall FUN_0059d000(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb52d;
  local_10 = ExceptionList;
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  uVar2 = -(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 8);
  ExceptionList = &local_10;
  puVar1 = (uint *)FUN_005ae4ea(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  local_8 = 0;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    _eh_vector_constructor_iterator_(puVar1 + 1,8,param_1,FUN_004dcac0,guard_check_icall);
    ExceptionList = local_10;
    return puVar1 + 1;
  }
  ExceptionList = local_10;
  return (uint *)0x0;
}


uint __thiscall FUN_0059d0c0(void *this,int param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)((int)this + 2));
  if (((*(short *)((int)this + 2) == *(short *)(param_1 + 2)) && (*(short *)this == 2)) &&
     (uVar1 = *(uint *)((int)this + 4), uVar1 == *(uint *)(param_1 + 4))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


void __thiscall FUN_0059d0f0(void *this,char param_1,char *param_2)

{
  char cVar1;
  u_short uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char local_c [4];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (((*(short *)((int)this + 2) == DAT_006558e2) && (*(short *)this == 2)) &&
     (*(int *)((int)this + 4) == DAT_006558e4)) {
    builtin_strncpy(param_2,"UNASSIGNED_SYSTEM_ADDRESS",0x1a);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_c[0] = '|';
  local_c[1] = '\0';
  pcVar3 = inet_ntoa((in_addr)((_union_1226 *)((int)this + 4))->S_un_b);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar5[(int)(param_2 + (-1 - (int)pcVar3))] = cVar1;
  } while (cVar1 != '\0');
  if (param_1 != '\0') {
    pcVar5 = local_c;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar5 - (int)local_c;
    pcVar5 = param_2 + -1;
    do {
      pcVar3 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar3 != '\0');
    pcVar3 = local_c;
    for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar5 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    }
    do {
      pcVar5 = param_2;
      param_2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    uVar2 = ntohs(*(u_short *)((int)this + 2));
    FUN_005ab9a0((uint)uVar2,pcVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059d1f0(void *this,short *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  byte local_88 [128];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  FUN_0059d0f0(this,'\0',(char *)local_88);
  pbVar4 = &DAT_0062eb60;
  pbVar2 = local_88;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_0059d240:
      uVar3 = -(uint)bVar5 | 1;
      goto LAB_0059d245;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_0059d240;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_0059d245:
  if ((uVar3 == 0) && (*param_1 == 2)) {
    FUN_0059d270(this,"127.0.0.1");
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_0059d270(void *this,char *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  u_short uVar6;
  ulong uVar7;
  int iVar8;
  hostent *phVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  char local_70 [68];
  char local_2c [24];
  char local_14 [12];
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  cVar1 = *param_1;
  cVar2 = cVar1;
  pcVar11 = param_1;
  while (cVar2 != '\0') {
    if ((('f' < cVar2) && (cVar2 < '{')) || (('@' < cVar2 && (cVar2 < '[')))) {
      iVar8 = _strnicmp(param_1,"localhost",9);
      if (iVar8 == 0) {
        uVar7 = inet_addr("127.0.0.1");
        *(ulong *)((int)this + 4) = uVar7;
        if (param_1[9] != '\0') {
          iVar8 = atoi(param_1 + 9);
          uVar6 = htons((u_short)iVar8);
          *(u_short *)((int)this + 2) = uVar6;
          *(u_short *)((int)this + 0x10) = (u_short)iVar8;
        }
      }
      else {
        local_70[0] = '\0';
        _DAT_00660870 = 0;
        phVar9 = gethostbyname(param_1);
        if ((phVar9 == (hostent *)0x0) ||
           ((_union_1226 *)*phVar9->h_addr_list == (_union_1226 *)0x0)) {
          memset(local_70,0,0x41);
        }
        else {
          _DAT_00660870 =
               (_union_1226)*(_union_1226 *)&((_union_1226 *)*phVar9->h_addr_list)->S_un_b;
          pcVar10 = inet_ntoa((in_addr)_DAT_00660870);
          pcVar11 = pcVar10;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar11[(int)(local_70 + (-1 - (int)pcVar10))] = cVar1;
          } while (cVar1 != '\0');
        }
        uVar5 = uRam006558ec;
        uVar4 = uRam006558e8;
        uVar3 = DAT_006558e4;
        if (local_70[0] == '\0') {
          *(undefined4 *)this = _DAT_006558e0;
          *(undefined4 *)((int)this + 4) = uVar3;
          *(undefined4 *)((int)this + 8) = uVar4;
          *(undefined4 *)((int)this + 0xc) = uVar5;
          *(undefined2 *)((int)this + 0x12) = DAT_006558f2;
          *(undefined2 *)((int)this + 0x10) = DAT_006558f0;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        uVar7 = inet_addr(local_70);
        *(ulong *)((int)this + 4) = uVar7;
      }
      goto LAB_0059d37b;
    }
    pcVar10 = pcVar11 + 1;
    pcVar11 = pcVar11 + 1;
    cVar2 = *pcVar10;
  }
  uVar12 = 0;
  if (cVar1 != '\0') {
    pcVar11 = param_1;
    while (((cVar1 != '\0' && ((int)uVar12 < 0x16)) &&
           ((cVar1 == '.' || ((byte)(cVar1 - 0x30U) < 10))))) {
      pcVar11[(int)(local_2c + -(int)param_1)] = cVar1;
      uVar12 = uVar12 + 1;
      pcVar10 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
      cVar1 = *pcVar10;
    }
    if (0x15 < uVar12) goto LAB_0059d47c;
  }
  cVar1 = param_1[uVar12];
  local_2c[uVar12] = '\0';
  local_14[0] = '\0';
  if ((cVar1 != '\0') && (param_1[uVar12 + 1] != '\0')) {
    uVar13 = 0;
    do {
      uVar12 = uVar12 + 1;
      cVar1 = param_1[uVar12];
      if (((cVar1 == '\0') || (0x1f < (int)uVar12)) || (9 < (byte)(cVar1 - 0x30U))) break;
      local_14[uVar13] = cVar1;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 10);
    if (9 < uVar13) {
LAB_0059d47c:
                    // WARNING: Subroutine does not return
      ___report_rangecheckfailure();
    }
    local_14[uVar13] = '\0';
  }
  if (local_2c[0] != '\0') {
    uVar7 = inet_addr(local_2c);
    *(ulong *)((int)this + 4) = uVar7;
  }
  if (local_14[0] != '\0') {
    iVar8 = atoi(local_14);
    uVar6 = htons((u_short)iVar8);
    *(u_short *)((int)this + 2) = uVar6;
    uVar6 = ntohs(uVar6);
    *(u_short *)((int)this + 0x10) = uVar6;
  }
LAB_0059d37b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __thiscall FUN_0059d490(void *this,char *param_1,u_short param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  u_short uVar5;
  uint uVar6;
  undefined2 extraout_var;
  
  cVar4 = FUN_0059d270(this,param_1);
  uVar3 = uRam006558ec;
  uVar2 = uRam006558e8;
  uVar1 = DAT_006558e4;
  if (cVar4 == '\0') {
    *(undefined4 *)this = _DAT_006558e0;
    *(undefined4 *)((int)this + 4) = uVar1;
    *(undefined4 *)((int)this + 8) = uVar2;
    *(undefined4 *)((int)this + 0xc) = uVar3;
    *(undefined2 *)((int)this + 0x12) = DAT_006558f2;
    uVar6 = (uint)DAT_006558f0;
    *(ushort *)((int)this + 0x10) = DAT_006558f0;
    return uVar6 & 0xffffff00;
  }
  uVar5 = htons(param_2);
  *(u_short *)((int)this + 2) = uVar5;
  uVar5 = ntohs(uVar5);
  *(u_short *)((int)this + 0x10) = uVar5;
  return CONCAT31((int3)(CONCAT22(extraout_var,uVar5) >> 8),1);
}


undefined4 * __fastcall FUN_0059d4f0(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *param_1 = DAT_006558d0;
  param_1[1] = DAT_006558d4;
  *(undefined2 *)(param_1 + 2) = DAT_006558d8;
  return param_1;
}


void __thiscall FUN_0059d520(void *this,undefined4 *param_1)

{
  if ((*(int *)this == DAT_006558d0) && (*(int *)((int)this + 4) == DAT_006558d4)) {
    *param_1 = 0x53414e55;
    builtin_strncpy((char *)(param_1 + 1),"SIGN",4);
    builtin_strncpy((char *)(param_1 + 2),"ED_R",4);
    builtin_strncpy((char *)(param_1 + 3),"AKNE",4);
    builtin_strncpy((char *)(param_1 + 4),"T_GU",4);
    *(undefined2 *)(param_1 + 5) = 0x4449;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    return;
  }
  FUN_00415730(param_1,"%I64u");
  return;
}


uint __fastcall FUN_0059d580(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((uVar1 == DAT_00655908) && (uVar1 = param_1[1], uVar1 == DAT_0065590c)) &&
      (uVar1 = CONCAT22((short)(uVar1 >> 0x10),*(short *)((int)param_1 + 0x12)),
      *(short *)((int)param_1 + 0x12) == DAT_006558f6)) &&
     (((short)param_1[4] == 2 && (uVar1 = param_1[5], uVar1 == DAT_006558f8)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


undefined4 * __thiscall FUN_0059d5c0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)this + 8) = 0xffff;
  *(undefined4 *)this = DAT_006558d0;
  *(undefined4 *)((int)this + 4) = DAT_006558d4;
  *(undefined2 *)((int)this + 8) = DAT_006558d8;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x10) = 2;
  *(undefined4 *)((int)this + 0x20) = 0xffff0000;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 2);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)((int)param_1 + 0x22);
  *(undefined2 *)((int)this + 0x20) = *(undefined2 *)(param_1 + 8);
  return this;
}


undefined4 * __thiscall FUN_0059d640(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)this + 8) = 0xffff;
  *(undefined4 *)this = DAT_006558d0;
  *(undefined4 *)((int)this + 4) = DAT_006558d4;
  *(undefined2 *)((int)this + 8) = DAT_006558d8;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x10) = 2;
  *(undefined4 *)((int)this + 0x20) = 0xffff0000;
  *(undefined4 *)this = DAT_00655908;
  *(undefined4 *)((int)this + 4) = DAT_0065590c;
  *(undefined2 *)((int)this + 8) = DAT_00655910;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)((int)param_1 + 0x12);
  *(undefined2 *)((int)this + 0x20) = *(undefined2 *)(param_1 + 4);
  return this;
}


undefined4 * __thiscall FUN_0059d6c0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = DAT_00655908;
  *(undefined4 *)((int)this + 4) = DAT_0065590c;
  *(undefined2 *)((int)this + 8) = DAT_00655910;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)((int)param_1 + 0x12);
  *(undefined2 *)((int)this + 0x20) = *(undefined2 *)(param_1 + 4);
  return this;
}


void __fastcall FUN_0059d700(undefined4 *param_1)

{
  *param_1 = RakNet::RNS2EventHandler::vftable;
  return;
}


void __fastcall FUN_0059d740(undefined4 *param_1)

{
  *param_1 = RakNet::RakPeerInterface::vftable;
  return;
}


undefined4 * __thiscall FUN_0059d780(void *this,size_t param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x570));
  puVar1 = (undefined4 *)FUN_005aabf0((int *)((int)this + 0x588));
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x570));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffff0000;
  *(undefined2 *)puVar1 = 2;
  *(undefined2 *)(puVar1 + 8) = 0xffff;
  puVar1[6] = DAT_006558d0;
  puVar1[7] = DAT_006558d4;
  *(undefined2 *)(puVar1 + 8) = DAT_006558d8;
  pvVar2 = malloc(param_1);
  puVar1[0xc] = pvVar2;
  puVar1[10] = param_1;
  puVar1[0xb] = param_1 * 8;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  puVar1[6] = DAT_00655908;
  puVar1[7] = DAT_0065590c;
  *(undefined2 *)(puVar1 + 8) = DAT_00655910;
  *(undefined1 *)((int)puVar1 + 0x35) = 0;
  return puVar1;
}


undefined4 * __thiscall FUN_0059d830(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x570));
  puVar1 = (undefined4 *)FUN_005aabf0((int *)((int)this + 0x588));
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x570));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)puVar1 = 2;
  puVar1[4] = 0xffff0000;
  *(undefined2 *)(puVar1 + 8) = 0xffff;
  puVar1[6] = DAT_006558d0;
  puVar1[7] = DAT_006558d4;
  *(undefined2 *)(puVar1 + 8) = DAT_006558d8;
  puVar1[0xc] = param_2;
  puVar1[10] = param_1;
  puVar1[0xb] = param_1 << 3;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  puVar1[6] = DAT_00655908;
  puVar1[7] = DAT_0065590c;
  *(undefined2 *)(puVar1 + 8) = DAT_00655910;
  *(undefined1 *)((int)puVar1 + 0x35) = 0;
  return puVar1;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __fastcall FUN_0059d8e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  HANDLE pvVar6;
  int iVar7;
  undefined8 uVar8;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_18 = &LAB_005cb6ba;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[1] = RakNet::RNS2EventHandler::vftable;
  *param_1 = RakNet::RakPeer::vftable;
  param_1[1] = RakNet::RakPeer::vftable;
  param_1[5] = 0;
  param_1[6] = 0x800;
  param_1[7] = 0;
  param_1[8] = (int)param_1 + 0x25;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0x4000;
  local_14 = 3;
  uStack_13 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x94,0x18,2,FUN_005ac7b0,FUN_005ac7c0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xaa));
  param_1[0xb2] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb5] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb8] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xbc] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbd));
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0x4000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  param_1[0xd1] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd2));
  param_1[0xdb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc));
  param_1[0xe5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe6));
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0x4000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf1));
  param_1[0xfa] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xfb));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x101));
  param_1[0x10b] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  *(undefined2 *)(param_1 + 0x10d) = 2;
  param_1[0x111] = 0xffff0000;
  *(undefined2 *)(param_1 + 0x116) = 0xffff;
  param_1[0x114] = DAT_006558d0;
  param_1[0x115] = DAT_006558d4;
  *(undefined2 *)(param_1 + 0x116) = DAT_006558d8;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  *(undefined2 *)(param_1 + 0x11a) = 2;
  param_1[0x11e] = 0xffff0000;
  param_1[0x124] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  iVar7 = 10;
  puVar4 = param_1 + 0x125;
  do {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined2 *)puVar4 = 2;
    puVar4[4] = 0xffff0000;
    iVar7 = iVar7 + -1;
    puVar4 = puVar4 + 5;
  } while (iVar7 != 0);
  param_1[0x15a] = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15c));
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0x4000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x167));
  param_1[0x170] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x171));
  _local_14 = CONCAT31(uStack_13,0x19);
  FUN_005ac7d0();
  DAT_0065b414 = DAT_0065b414 + 1;
  if (DAT_0065b414 == 1) {
    puVar5 = (undefined8 *)FUN_005adb0f(0xc);
    DAT_0065b410 = puVar5;
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined4 *)puVar5 = 0;
    *(undefined4 *)((int)puVar5 + 4) = 0;
  }
  FUN_005ac140();
  param_1[0x107] = 0x240;
  *(undefined1 *)(param_1 + 0x108) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 9) = 0;
  param_1[0x121] = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x157) = 0;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x125] = _DAT_006558f4;
  param_1[0x126] = uVar1;
  param_1[0x127] = uVar2;
  param_1[0x128] = uVar3;
  *(undefined2 *)((int)param_1 + 0x4a6) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x129) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x12a] = _DAT_006558f4;
  param_1[299] = uVar1;
  param_1[300] = uVar2;
  param_1[0x12d] = uVar3;
  *(undefined2 *)((int)param_1 + 0x4ba) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x12e) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x12f] = _DAT_006558f4;
  param_1[0x130] = uVar1;
  param_1[0x131] = uVar2;
  param_1[0x132] = uVar3;
  *(undefined2 *)((int)param_1 + 0x4ce) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x133) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x134] = _DAT_006558f4;
  param_1[0x135] = uVar1;
  param_1[0x136] = uVar2;
  param_1[0x137] = uVar3;
  *(undefined2 *)((int)param_1 + 0x4e2) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x138) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x139] = _DAT_006558f4;
  param_1[0x13a] = uVar1;
  param_1[0x13b] = uVar2;
  param_1[0x13c] = uVar3;
  *(undefined2 *)((int)param_1 + 0x4f6) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x13d) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x13e] = _DAT_006558f4;
  param_1[0x13f] = uVar1;
  param_1[0x140] = uVar2;
  param_1[0x141] = uVar3;
  *(undefined2 *)((int)param_1 + 0x50a) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x142) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x143] = _DAT_006558f4;
  param_1[0x144] = uVar1;
  param_1[0x145] = uVar2;
  param_1[0x146] = uVar3;
  *(undefined2 *)((int)param_1 + 0x51e) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x147) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x148] = _DAT_006558f4;
  param_1[0x149] = uVar1;
  param_1[0x14a] = uVar2;
  param_1[0x14b] = uVar3;
  *(undefined2 *)((int)param_1 + 0x532) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x14c) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x14d] = _DAT_006558f4;
  param_1[0x14e] = uVar1;
  param_1[0x14f] = uVar2;
  param_1[0x150] = uVar3;
  *(undefined2 *)((int)param_1 + 0x546) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x151) = DAT_00655904;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x152] = _DAT_006558f4;
  param_1[0x153] = uVar1;
  param_1[0x154] = uVar2;
  param_1[0x155] = uVar3;
  *(undefined2 *)((int)param_1 + 0x55a) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x156) = DAT_00655904;
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 1000;
  param_1[0x118] = 0;
  uVar3 = uRam00655900;
  uVar2 = uRam006558fc;
  uVar1 = DAT_006558f8;
  param_1[0x11a] = _DAT_006558f4;
  param_1[0x11b] = uVar1;
  param_1[0x11c] = uVar2;
  param_1[0x11d] = uVar3;
  *(undefined2 *)((int)param_1 + 0x47a) = DAT_00655906;
  *(undefined2 *)(param_1 + 0x11e) = DAT_00655904;
  param_1[0x114] = DAT_00655908;
  param_1[0x115] = DAT_0065590c;
  *(undefined2 *)(param_1 + 0x116) = DAT_00655910;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x113] = 10000;
  param_1[199] = 0x700;
  param_1[0xf0] = 0x60;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15c));
  param_1[0x166] = 0x800;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15c));
  param_1[0x93] = 0x180;
  uVar8 = FUN_005a5440();
  *(undefined8 *)(param_1 + 0x114) = uVar8;
  pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  param_1[0x15a] = pvVar6;
  *(undefined1 *)(param_1 + 0x15b) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x171));
  param_1[0x177] = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x171));
  ExceptionList = local_1c;
  return param_1;
}


undefined4 * __thiscall FUN_0059e060(void *this,byte param_1)

{
  FUN_0059e0d0(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0059e090(int *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    free((void *)param_1[0xb]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_0059bdd0(param_1);
  return;
}


void __fastcall FUN_0059e0d0(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb6e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = RakNet::RakPeer::vftable;
  param_1[1] = RakNet::RakPeer::vftable;
  FUN_0059f0b0(param_1,0,0,3);
  uVar2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xaa));
  if (param_1[0xb1] != 0) {
    do {
      free((void *)**(undefined4 **)(param_1[0xb0] + uVar2 * 4));
      FUN_005adb3f(*(void **)(param_1[0xb0] + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0xb1]);
  }
  if (param_1[0xb2] != 0) {
    free((void *)param_1[0xb0]);
    param_1[0xb2] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xaa));
  FUN_005ac8f0();
  FUN_005acc90();
  if (DAT_0065b404 != 0) {
    if (DAT_0065b404 < 2) {
      WSACleanup();
      DAT_0065b404 = 0;
    }
    else {
      DAT_0065b404 = DAT_0065b404 + -1;
    }
  }
  if ((HANDLE)param_1[0x15a] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[0x15a]);
    param_1[0x15a] = 0xffffffff;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x171));
  if (param_1[0x170] != 0) {
    free((void *)param_1[0x16d]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x167));
  FUN_0059bdd0(param_1 + 0x162);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15c));
  if ((param_1[0x124] != 0) && (pvVar1 = (void *)param_1[0x122], pvVar1 != (void *)0x0)) {
    local_8 = 0;
    _eh_vector_destructor_iterator_(pvVar1,4,*(uint *)((int)pvVar1 + -4),FUN_005ac220);
    FUN_005adb4d((uint *)((int)pvVar1 + -4));
    local_8 = 0xffffffff;
  }
  if (param_1[0x10b] != 0) {
    free((void *)param_1[0x109]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x101));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xfb));
  if (param_1[0xfa] != 0) {
    free((void *)param_1[0xf7]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf1));
  FUN_0059bdd0(param_1 + 0xec);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe6));
  if (param_1[0xe5] != 0) {
    free((void *)param_1[0xe2]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc));
  if (param_1[0xdb] != 0) {
    free((void *)param_1[0xd8]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd2));
  if (param_1[0xd1] != 0) {
    free((void *)param_1[0xce]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  FUN_0059bdd0(param_1 + 0xc3);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbd));
  if (param_1[0xbc] != 0) {
    free((void *)param_1[0xb9]);
  }
  if (param_1[0xb8] != 0) {
    free((void *)param_1[0xb6]);
  }
  if (param_1[0xb5] != 0) {
    free((void *)param_1[0xb3]);
  }
  if (param_1[0xb2] != 0) {
    free((void *)param_1[0xb0]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xaa));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa4));
  _eh_vector_destructor_iterator_(param_1 + 0x94,0x18,2,FUN_005ac7c0);
  FUN_0059bdd0(param_1 + 0x8f);
  if ((*(char *)(param_1 + 9) != '\0') && (0x800 < (uint)param_1[6])) {
    free((void *)param_1[8]);
  }
  param_1[1] = RakNet::RNS2EventHandler::vftable;
  *param_1 = RakNet::RakPeerInterface::vftable;
  ExceptionList = local_10;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_0059e420(void *this,uint param_1,uint *param_2,uint *param_3,int param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  u_short hostshort;
  u_short uVar7;
  uint *puVar8;
  int *_Dst;
  undefined4 uVar9;
  HANDLE hThread;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int *local_6c;
  int local_68;
  uint *local_64;
  uint *local_60;
  u_short local_5c [2];
  u_short *local_58;
  u_short local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  u_short local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005cb72d;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_64 = param_2;
  cVar6 = (**(code **)(*(int *)this + 0x3c))(local_24);
  if (cVar6 == '\0') {
    if (*(int *)((int)this + 0x450) == 0 && *(int *)((int)this + 0x454) == 0) {
      lVar13 = FUN_005a5440();
      *(longlong *)((int)this + 0x450) = lVar13;
      if (lVar13 == 0) goto LAB_0059eb45;
    }
    local_68 = 0;
    if (param_4 != -99999) {
      local_68 = param_4;
    }
    FUN_005a9e90((int)this);
    pvVar2 = *(void **)((int)this + 0x450);
    uVar12 = *(uint *)((int)this + 0x454);
    if ((pvVar2 == DAT_00655908) && (uVar12 == DAT_0065590c)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_00421a10(pvVar2,&DAT_0062ef64);
      _DAT_006562e0 = 0;
      uVar12 = uVar12 ^ (uint)pvVar2 | 1;
      puVar8 = &DAT_0065591c;
      iVar10 = 0x26f;
      _DAT_00655918 = uVar12;
      do {
        uVar12 = uVar12 * 0x10dcd;
        *puVar8 = uVar12;
        puVar8 = puVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (((local_64 != (uint *)0x0) && (param_3 != (uint *)0x0)) && (param_1 != 0)) {
      FUN_005a7a10((int)this);
      local_60 = (uint *)0x0;
      if (param_3 != (uint *)0x0) {
        local_64 = local_64 + 0xc;
        do {
          _Dst = (int *)FUN_005adb0f(100);
          memset(_Dst,0,100);
          _Dst[3] = 0;
          _Dst[4] = 0;
          _Dst[5] = 0;
          _Dst[6] = 0;
          _Dst[7] = -0x10000;
          *(undefined2 *)(_Dst + 3) = 2;
          *_Dst = (int)RakNet::RNS2_Berkley::vftable;
          _Dst[1] = 0;
          _Dst[0x16] = 0;
          _Dst[9] = -1;
          *_Dst = (int)RakNet::RNS2_Windows::vftable;
          _Dst[0x18] = 0;
          _Dst[2] = 7;
          _Dst[8] = (int)local_60;
          if ((_Dst[2] == 3) || (_Dst[2] == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          local_6c = _Dst;
          if (bVar3) {
            local_50 = 2;
            local_48 = 0;
            local_44 = 1;
            local_5c[0] = (u_short)local_64[-0xc];
            local_58 = (u_short *)((int)local_64 + -0x2e);
            local_54 = *(u_short *)((int)local_64 + -0xe);
            local_4c = *local_64;
            local_38 = local_68;
            local_34 = (int)this + 4;
            local_30 = (u_short)local_64[-3];
            local_40 = 0;
            local_3c = 0;
            iVar10 = (**(code **)(*_Dst + 8))
                               (local_5c,"f:\\src\\ois\\libs\\raknet\\code\\rakpeer.cpp",0x1ff);
            if ((*(u_short *)((int)local_64 + -0xe) != 2) || (iVar10 == 1)) {
              (**(code **)*_Dst)(1);
              FUN_005a7a10((int)this);
              goto LAB_0059eb45;
            }
            if (iVar10 == 2) {
              (**(code **)*_Dst)(1);
              FUN_005a7a10((int)this);
              goto LAB_0059eb45;
            }
            if (iVar10 == 3) {
              (**(code **)*_Dst)(1);
              FUN_005a7a10((int)this);
              goto LAB_0059eb45;
            }
          }
          FUN_0059b980((void *)((int)this + 0x424),&local_6c);
          local_64 = local_64 + 0xd;
          local_60 = (uint *)((int)local_60 + 1);
        } while (local_60 < param_3);
      }
      puVar8 = (uint *)0x0;
      if (param_3 != (uint *)0x0) {
        do {
          pvVar2 = *(void **)(*(int *)((int)this + 0x424) + (int)puVar8 * 4);
          if ((*(int *)((int)pvVar2 + 8) == 3) || (*(int *)((int)pvVar2 + 8) == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            *(undefined1 *)((int)pvVar2 + 0x5c) = 0;
            local_28 = 0;
            local_60 = (uint *)_beginthreadex((void *)0x0,0x200000,_StartAddress_005abca0,pvVar2,0,
                                              &local_28);
            SetThreadPriority(local_60,local_68);
            if (local_60 != (uint *)0x0) {
              CloseHandle(local_60);
            }
          }
          puVar8 = (uint *)((int)puVar8 + 1);
        } while (puVar8 < param_3);
      }
      local_64 = (uint *)((int)this + 0x496);
      local_60 = (uint *)0x0;
      do {
        if ((u_short)*local_64 == DAT_006558f6) {
          if ((*(u_short *)((int)local_64 + -2) == 2) &&
             (*(int *)((int)local_64 + 2) == DAT_006558f8)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (!bVar3) goto LAB_0059e7bc;
          bVar3 = true;
        }
        else {
LAB_0059e7bc:
          bVar3 = false;
        }
        if (bVar3) break;
        iVar10 = *(int *)(**(int **)((int)this + 0x424) + 8);
        if ((iVar10 == 3) || (iVar10 == 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          hostshort = ntohs((u_short)((uint)*(undefined4 *)(**(int **)((int)this + 0x424) + 0xc) >>
                                     0x10));
          uVar7 = htons(hostshort);
          *(u_short *)local_64 = uVar7;
          *(u_short *)((int)local_64 + 0xe) = hostshort;
        }
        local_64 = local_64 + 5;
        local_60 = (uint *)((int)local_60 + 1);
      } while ((int)local_60 < 10);
      if (*(int *)((int)this + 0xc) == 0) {
        if (param_1 < *(uint *)((int)this + 0x10)) {
          *(uint *)((int)this + 0x10) = param_1;
        }
        *(uint *)((int)this + 0xc) = param_1;
        if (param_1 == 0) {
          puVar8 = (uint *)0x0;
          uVar12 = 0;
        }
        else {
          uVar12 = -(uint)((int)((ulonglong)param_1 * 0x1210 >> 0x20) != 0) |
                   (uint)((ulonglong)param_1 * 0x1210);
          local_64 = (uint *)FUN_005ae4ea(-(uint)(0xfffffffb < uVar12) | uVar12 + 4);
          local_14 = 0;
          if (local_64 == (uint *)0x0) {
            puVar8 = (uint *)0x0;
          }
          else {
            *local_64 = param_1;
            local_60 = local_64 + 1;
            _eh_vector_constructor_iterator_
                      (local_60,0x1210,param_1,FUN_005aadf0,(_func_void_void_ptr *)&LAB_005aae90);
            puVar8 = local_60;
          }
          local_14 = 0xffffffff;
          uVar12 = *(uint *)((int)this + 0xc);
        }
        *(uint **)((int)this + 0x22c) = puVar8;
        uVar9 = 0;
        if (uVar12 * 8 != 0) {
          lVar13 = (ulonglong)(uVar12 * 8) * 4;
          uVar9 = FUN_005ae4ea(-(uint)((int)((ulonglong)lVar13 >> 0x20) != 0) | (uint)lVar13);
          uVar12 = *(uint *)((int)this + 0xc);
        }
        *(undefined4 *)((int)this + 0x238) = uVar9;
        if (uVar12 == 0) {
          uVar9 = 0;
          iVar10 = 0;
        }
        else {
          uVar9 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar12 * 4 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar12 * 4));
          iVar10 = *(int *)((int)this + 0xc);
        }
        *(undefined4 *)((int)this + 0x230) = uVar9;
        local_60 = (uint *)0x0;
        puVar8 = (uint *)0x0;
        if (iVar10 != 0) {
          iVar10 = 0;
          do {
            *(undefined1 *)(iVar10 + *(int *)((int)this + 0x22c)) = 0;
            uVar5 = uRam00655900;
            uVar9 = uRam006558fc;
            iVar4 = DAT_006558f8;
            iVar11 = *(int *)((int)this + 0x22c);
            puVar1 = (undefined4 *)(iVar11 + 4 + iVar10);
            *puVar1 = _DAT_006558f4;
            puVar1[1] = iVar4;
            puVar1[2] = uVar9;
            puVar1[3] = uVar5;
            *(undefined2 *)(iVar11 + 0x16 + iVar10) = DAT_00655906;
            *(undefined2 *)(iVar11 + 0x14 + iVar10) = DAT_00655904;
            iVar11 = *(int *)((int)this + 0x22c);
            *(void **)(iVar11 + 0x11f0 + iVar10) = DAT_00655908;
            *(uint *)(iVar11 + 0x11f4 + iVar10) = DAT_0065590c;
            *(undefined2 *)(iVar11 + 0x11f8 + iVar10) = DAT_00655910;
            uVar5 = uRam00655900;
            uVar9 = uRam006558fc;
            iVar4 = DAT_006558f8;
            iVar11 = *(int *)((int)this + 0x22c);
            puVar1 = (undefined4 *)(iVar11 + 0x18 + iVar10);
            *puVar1 = _DAT_006558f4;
            puVar1[1] = iVar4;
            puVar1[2] = uVar9;
            puVar1[3] = uVar5;
            *(undefined2 *)(iVar11 + 0x2a + iVar10) = DAT_00655906;
            *(undefined2 *)(iVar11 + 0x28 + iVar10) = DAT_00655904;
            *(undefined4 *)(iVar10 + 0x120c + *(int *)((int)this + 0x22c)) = 0;
            *(undefined4 *)(iVar10 + 0x1200 + *(int *)((int)this + 0x22c)) =
                 *(undefined4 *)((int)this + 0x41c);
            *(short *)(iVar10 + 0x1208 + *(int *)((int)this + 0x22c)) = (short)local_60;
            iVar11 = *(int *)((int)this + 0x22c) + iVar10;
            iVar10 = iVar10 + 0x1210;
            *(int *)(*(int *)((int)this + 0x230) + (int)local_60 * 4) = iVar11;
            local_60 = (uint *)((int)local_60 + 1);
            puVar8 = *(uint **)((int)this + 0xc);
          } while (local_60 < puVar8);
        }
        uVar12 = 0;
        if (((uint)puVar8 & 0x1fffffff) != 0) {
          do {
            *(undefined4 *)(*(int *)((int)this + 0x238) + uVar12 * 4) = 0;
            uVar12 = uVar12 + 1;
          } while (uVar12 < (uint)(*(int *)((int)this + 0xc) << 3));
        }
      }
      if (*(char *)((int)this + 8) != '\0') {
        *(undefined1 *)((int)this + 0x280) = 0;
        *(undefined1 *)((int)this + 8) = 0;
        uVar5 = uRam00655900;
        uVar9 = uRam006558fc;
        iVar10 = DAT_006558f8;
        *(undefined4 *)((int)this + 0x468) = _DAT_006558f4;
        *(int *)((int)this + 0x46c) = iVar10;
        *(undefined4 *)((int)this + 0x470) = uVar9;
        *(undefined4 *)((int)this + 0x474) = uVar5;
        *(undefined2 *)((int)this + 0x47a) = DAT_00655906;
        *(undefined2 *)((int)this + 0x478) = DAT_00655904;
        FUN_005a51a0((int)this);
        FUN_005a4520((int)this);
        FUN_005a5320((int)this);
        if (*(char *)((int)this + 9) == '\0') {
          local_2c = 0;
          hThread = (HANDLE)_beginthreadex((void *)0x0,0x200000,_StartAddress_005a9c80,this,0,
                                           &local_2c);
          SetThreadPriority(hThread,local_68);
          if (hThread == (HANDLE)0x0) {
            (**(code **)(*(int *)this + 0x38))(0,0,3);
            goto LAB_0059eb45;
          }
          CloseHandle(hThread);
          cVar6 = *(char *)((int)this + 9);
          while (cVar6 == '\0') {
            Sleep(10);
            cVar6 = *(char *)((int)this + 9);
          }
        }
      }
      uVar12 = 0;
      if (*(int *)((int)this + 0x2d0) != 0) {
        do {
          (**(code **)(**(int **)(*(int *)((int)this + 0x2cc) + uVar12 * 4) + 0x14))();
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)((int)this + 0x2d0));
      }
      uVar12 = 0;
      if (*(int *)((int)this + 0x2dc) != 0) {
        do {
          (**(code **)(**(int **)(*(int *)((int)this + 0x2d8) + uVar12 * 4) + 0x14))();
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)((int)this + 0x2dc));
      }
    }
  }
LAB_0059eb45:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


undefined1 FUN_0059eb70(void)

{
  return 0;
}


void __thiscall FUN_0059eb80(void *this,char *param_1)

{
  uint *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb768;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x404));
  puVar1 = FUN_005ac200(&param_1,param_1);
  local_8 = 0;
  FUN_005aaa30((void *)((int)this + 0x488),puVar1);
  local_8 = 1;
  FUN_005ac670((int *)&param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x404));
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0059ec00(void *this,char *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)((int)this + 0x48c) != 0) {
    if (param_1 == (char *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x404));
      if (*(int *)((int)this + 0x490) != 0) {
        pvVar2 = *(void **)((int)this + 0x488);
        if (pvVar2 != (void *)0x0) {
          local_8 = 0;
          _eh_vector_destructor_iterator_(pvVar2,4,*(uint *)((int)pvVar2 + -4),FUN_005ac220);
          FUN_005adb4d((uint *)((int)pvVar2 + -4));
        }
        *(undefined4 *)((int)this + 0x490) = 0;
        *(undefined4 *)((int)this + 0x488) = 0;
        *(undefined4 *)((int)this + 0x48c) = 0;
      }
    }
    else {
      local_14 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x404));
      uVar7 = *(uint *)((int)this + 0x48c);
      if (uVar7 != 0) {
        do {
          iVar3 = *(int *)((int)this + 0x488);
          piVar1 = (int *)(iVar3 + local_14 * 4);
          uVar6 = FUN_005ac260(piVar1,param_1);
          if ((char)uVar6 == '\0') {
            local_14 = local_14 + 1;
          }
          else {
            FUN_005ac670(piVar1);
            puVar4 = *(undefined4 **)(iVar3 + -4 + uVar7 * 4);
            if (puVar4 != (undefined4 *)&DAT_006550b0) {
              EnterCriticalSection((LPCRITICAL_SECTION)*puVar4);
              iVar5 = *(int *)(iVar3 + -4 + uVar7 * 4);
              if (*(int *)(iVar5 + 4) == 0) {
                *piVar1 = (int)&DAT_006550b0;
              }
              else {
                *piVar1 = iVar5;
                *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)**(undefined4 **)(iVar3 + -4 + uVar7 * 4));
            }
            uVar7 = *(uint *)((int)this + 0x48c);
            uVar8 = *(int *)((int)this + 0x48c) - 1;
            if (uVar8 < uVar7) {
              if (uVar8 < uVar7 - 1) {
                do {
                  piVar1 = (int *)(*(int *)((int)this + 0x488) + uVar8 * 4);
                  FUN_005ac670(piVar1);
                  if ((undefined4 *)piVar1[1] != (undefined4 *)&DAT_006550b0) {
                    EnterCriticalSection(*(LPCRITICAL_SECTION *)piVar1[1]);
                    iVar3 = piVar1[1];
                    if (*(int *)(iVar3 + 4) == 0) {
                      *piVar1 = (int)&DAT_006550b0;
                    }
                    else {
                      *piVar1 = iVar3;
                      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
                    }
                    LeaveCriticalSection(*(LPCRITICAL_SECTION *)piVar1[1]);
                  }
                  uVar7 = *(uint *)((int)this + 0x48c);
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar7 - 1);
              }
              *(uint *)((int)this + 0x48c) = uVar7 - 1;
            }
          }
          uVar7 = *(uint *)((int)this + 0x48c);
        } while (local_14 < uVar7);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x404));
  }
  ExceptionList = local_10;
  return;
}


uint __thiscall FUN_0059edf0(void *this,char *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint in_EAX;
  undefined4 uVar2;
  uint extraout_EAX;
  undefined4 extraout_EAX_00;
  uint uVar3;
  void *this_00;
  
  if (*(int *)((int)this + 0x48c) == 0) {
    return in_EAX & 0xffffff00;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x404);
  uVar3 = 0;
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)((int)this + 0x48c);
  if (uVar1 != 0) {
    this_00 = *(void **)((int)this + 0x488);
    do {
      uVar2 = FUN_005ac260(this_00,param_1);
      if ((char)uVar2 != '\0') {
        LeaveCriticalSection(lpCriticalSection);
        return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
      }
      uVar3 = uVar3 + 1;
      this_00 = (void *)((int)this_00 + 4);
    } while (uVar3 < uVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return extraout_EAX & 0xffffff00;
}


void __thiscall FUN_0059ee70(void *this,ushort param_1)

{
  *(uint *)((int)this + 0x10) = (uint)param_1;
  return;
}


void __fastcall FUN_0059ee80(int *param_1)

{
  undefined8 local_2c;
  int local_24;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005cb7c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  local_8 = 1;
  (**(code **)(*param_1 + 0x80))(&local_20,&local_2c,local_14);
  if (local_24 != 0) {
    free((void *)local_2c);
  }
  if (local_18 != 0) {
    free((void *)local_20);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059ef50(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0xff;
  if ((int)param_2 < 0x100) {
    uVar1 = param_2;
  }
  uVar1 = -(uint)(param_1 != (void *)0x0) & uVar1;
  if (0 < (int)uVar1) {
    memcpy((void *)((int)this + 0x128),param_1,uVar1);
  }
  *(char *)((int)this + 0x228) = (char)uVar1;
  return;
}


void __thiscall FUN_0059ef90(void *this,void *param_1,size_t *param_2)

{
  size_t _Size;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((int)this + 0x228);
  if (param_1 == (void *)0x0) {
    *param_2 = uVar1;
    return;
  }
  _Size = *param_2;
  if ((int)uVar1 < (int)*param_2) {
    *param_2 = uVar1;
    _Size = uVar1;
  }
  if (0 < (int)_Size) {
    memcpy(param_1,(void *)((int)this + 0x128),_Size);
  }
  return;
}


undefined4 __thiscall
FUN_0059efe0(void *this,char *param_1,u_short param_2,void *param_3,uint param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  
  if (((param_1 != (char *)0x0) && (*(char *)((int)this + 8) == '\0')) &&
     (param_6 < *(uint *)((int)this + 0x428))) {
    uVar1 = FUN_005a7a80(this,param_6);
    uVar3 = 0xff;
    if ((int)param_4 < 0x100) {
      uVar3 = param_4;
    }
    uVar2 = FUN_005a2d70(this,param_1,param_2,param_3,-(uint)(param_3 != (void *)0x0) & uVar3,
                         extraout_ECX,uVar1,extraout_ECX,param_7,param_8,param_9);
    return uVar2;
  }
  return 1;
}


undefined4 __thiscall
FUN_0059f050(void *this,char *param_1,u_short param_2,void *param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (((param_1 != (char *)0x0) && (*(char *)((int)this + 8) == '\0')) && (param_5 != 0)) {
    uVar2 = 0xff;
    if ((int)param_4 < 0x100) {
      uVar2 = param_4;
    }
    uVar1 = FUN_005a2f80(this,param_1,param_2,param_3,-(uint)(param_3 != (void *)0x0) & uVar2);
    return uVar1;
  }
  return 1;
}


void __thiscall FUN_0059f0b0(void *this,uint param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_30;
  uint local_28;
  void *local_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb7f8;
  local_10 = ExceptionList;
  uVar4 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar11 = *(uint *)((int)this + 0xc);
  local_28 = uVar11;
  local_14 = uVar4;
  if (param_1 != 0) {
    if (uVar11 != 0) {
      local_30 = 0;
      uVar8 = uVar11;
      do {
        pcVar5 = (char *)(*(int *)((int)this + 0x22c) + local_30);
        if (*pcVar5 != '\0') {
          FUN_005a3990(this,*(undefined4 *)(pcVar5 + 4),*(int *)(pcVar5 + 8),
                       *(undefined4 *)(pcVar5 + 0xc),*(undefined4 *)(pcVar5 + 0x10),
                       *(undefined4 *)(pcVar5 + 0x14),'\0',param_2,param_3);
        }
        local_30 = local_30 + 0x1210;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar12 = FUN_005ab130();
    uVar12 = __aulldiv((uint)uVar12,(uint)((ulonglong)uVar12 >> 0x20),1000,0);
    if (param_1 != 0) {
      while (uVar8 = 0, uVar11 != 0) {
        pcVar5 = *(char **)((int)this + 0x22c);
        while (*pcVar5 == '\0') {
          uVar8 = uVar8 + 1;
          pcVar5 = pcVar5 + 0x1210;
          if (uVar11 <= uVar8) goto LAB_0059f1a4;
        }
        Sleep(0xf);
        uVar13 = FUN_005ab130();
        uVar13 = __aulldiv((uint)uVar13,(uint)((ulonglong)uVar13 >> 0x20),1000,0);
        if (param_1 <= (uint)((int)uVar13 - (int)uVar12)) break;
      }
    }
  }
LAB_0059f1a4:
  if (*(int *)((int)this + 0x2d0) != 0) {
    uVar8 = 0;
    do {
      (**(code **)(**(int **)(*(int *)((int)this + 0x2cc) + uVar8 * 4) + 0x18))(uVar4);
      uVar8 = uVar8 + 1;
      uVar11 = local_28;
    } while (uVar8 < *(uint *)((int)this + 0x2d0));
  }
  if (*(int *)((int)this + 0x2dc) != 0) {
    uVar4 = 0;
    do {
      (**(code **)(**(int **)(*(int *)((int)this + 0x2d8) + uVar4 * 4) + 0x18))();
      uVar4 = uVar4 + 1;
      uVar11 = local_28;
    } while (uVar4 < *(uint *)((int)this + 0x2dc));
  }
  *(undefined4 *)((int)this + 0x234) = 0;
  SetEvent(*(HANDLE *)((int)this + 0x568));
  uVar4 = 0;
  *(undefined1 *)((int)this + 8) = 1;
  if (*(int *)((int)this + 0x428) != 0) {
    do {
      iVar6 = *(int *)(*(int *)((int)this + 0x424) + uVar4 * 4);
      iVar9 = *(int *)(iVar6 + 8);
      if ((iVar9 != 3) && (iVar9 != 0)) {
        *(undefined1 *)(iVar6 + 0x5c) = 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0x428));
  }
  cVar1 = *(char *)((int)this + 9);
  while (cVar1 != '\0') {
    *(undefined1 *)((int)this + 8) = 1;
    Sleep(0xf);
    cVar1 = *(char *)((int)this + 9);
  }
  local_28 = 0;
  if (*(int *)((int)this + 0x428) != 0) {
    do {
      piVar2 = *(int **)(*(int *)((int)this + 0x424) + local_28 * 4);
      iVar6 = piVar2[2];
      if ((iVar6 != 3) && (iVar6 != 0)) {
        FUN_005abe00(piVar2);
      }
      local_28 = local_28 + 1;
    } while (local_28 < *(uint *)((int)this + 0x428));
  }
  if (uVar11 != 0) {
    local_28 = 0;
    do {
      *(undefined1 *)(local_28 + *(int *)((int)this + 0x22c)) = 0;
      FUN_00596760((void *)(local_28 + *(int *)((int)this + 0x22c) + 0xf8),'\0',
                   *(int *)(local_28 + 0x1200 + *(int *)((int)this + 0x22c)));
      *(undefined4 *)(local_28 + 0x1204 + *(int *)((int)this + 0x22c)) = 0;
      local_28 = local_28 + 0x1210;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
  uVar11 = 0;
  while( true ) {
    uVar4 = *(uint *)((int)this + 0x5b8);
    if (*(uint *)((int)this + 0x5bc) < uVar4) {
      iVar6 = *(int *)((int)this + 0x5c0) - uVar4;
    }
    else {
      iVar6 = -uVar4;
    }
    uVar8 = *(uint *)((int)this + 0x5c0);
    if (*(uint *)((int)this + 0x5bc) + iVar6 <= uVar11) break;
    if (uVar4 + uVar11 < uVar8) {
      (**(code **)(*(int *)this + 0x60))
                (*(undefined4 *)(*(int *)((int)this + 0x5b4) + (uVar4 + uVar11) * 4));
      uVar11 = uVar11 + 1;
    }
    else {
      (**(code **)(*(int *)this + 0x60))
                (*(undefined4 *)(*(int *)((int)this + 0x5b4) + ((uVar4 - uVar8) + uVar11) * 4));
      uVar11 = uVar11 + 1;
    }
  }
  if (uVar8 != 0) {
    if (0x20 < uVar8) {
      free(*(void **)((int)this + 0x5b4));
      *(undefined4 *)((int)this + 0x5c0) = 0;
    }
    *(undefined4 *)((int)this + 0x5b8) = 0;
    *(undefined4 *)((int)this + 0x5bc) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x570));
  FUN_0059bdd0((int *)((int)this + 0x588));
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x570));
  FUN_005a7a10((int)this);
  FUN_005a51a0((int)this);
  FUN_005a4520((int)this);
  FUN_005a5320((int)this);
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  uStack_18 = 0;
  local_24 = (void *)0x0;
  uStack_20 = 0;
  uStack_1c = 0;
  local_8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
  while( true ) {
    uVar11 = *(uint *)((int)this + 0x2e8);
    if (*(uint *)((int)this + 0x2ec) < uVar11) {
      iVar6 = *(int *)((int)this + 0x2f0) - uVar11;
    }
    else {
      iVar6 = -uVar11;
    }
    if (*(uint *)((int)this + 0x2ec) + iVar6 == 0) break;
    iVar6 = *(int *)((int)this + 0x2f0);
    iVar9 = uVar11 + 1;
    *(int *)((int)this + 0x2e8) = iVar9;
    if (iVar9 == iVar6) {
      *(undefined4 *)((int)this + 0x2e8) = 0;
      local_28 = *(uint *)(*(int *)((int)this + 0x2e4) + -4 + iVar6 * 4);
    }
    else if (iVar9 == 0) {
      local_28 = *(uint *)(*(int *)((int)this + 0x2e4) + -4 + iVar6 * 4);
    }
    else {
      local_28 = *(uint *)(*(int *)((int)this + 0x2e4) + -4 + iVar9 * 4);
    }
    FUN_0059bac0(&local_24,&local_28);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
  uVar11 = uStack_20;
  local_28 = 0;
  puVar10 = (undefined4 *)((int)local_24 + uStack_20 * 4);
  while( true ) {
    if (uStack_1c < uVar11) {
      uVar4 = (uStack_1c - uVar11) + uStack_18;
    }
    else {
      uVar4 = uStack_1c - uVar11;
    }
    if (uVar4 <= local_28) break;
    puVar7 = puVar10;
    if (uStack_18 <= uVar11 + local_28) {
      puVar7 = (undefined4 *)((int)local_24 + ((uVar11 - uStack_18) + local_28) * 4);
    }
    FUN_005adb3f((void *)*puVar7);
    local_28 = local_28 + 1;
    puVar10 = puVar10 + 1;
  }
  local_8 = 0xffffffff;
  if (uStack_18 != 0) {
    free(local_24);
  }
  pvVar3 = *(void **)((int)this + 0x22c);
  *(undefined4 *)((int)this + 0x22c) = 0;
  if (pvVar3 != (void *)0x0) {
    local_8 = 1;
    _eh_vector_destructor_iterator_
              (pvVar3,0x1210,*(uint *)((int)pvVar3 + -4),(_func_void_void_ptr *)&LAB_005aae90);
    FUN_005adb4d((uint *)((int)pvVar3 + -4));
  }
  free(*(void **)((int)this + 0x230));
  *(undefined4 *)((int)this + 0x230) = 0;
  FUN_0059bdd0((int *)((int)this + 0x23c));
  free(*(void **)((int)this + 0x238));
  *(undefined4 *)((int)this + 0x238) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c4));
  *(undefined4 *)((int)this + 0x5dc) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c4));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


bool __fastcall FUN_0059f5d0(int param_1)

{
  return *(char *)(param_1 + 8) == '\0';
}


void __thiscall FUN_0059f5e0(void *this,int param_1,ushort *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ushort uVar8;
  undefined8 local_2c;
  int local_24;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cb830;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 != (ushort *)0x0) {
    if ((*(int *)((int)this + 0x22c) == 0) || (*(char *)((int)this + 8) == '\x01')) {
      *param_2 = 0;
    }
    else {
      local_18 = 0;
      local_20 = 0;
      local_24 = 0;
      local_2c = 0;
      local_8 = 1;
      (**(code **)(*(int *)this + 0x80))(&local_20,&local_2c,local_14);
      if (param_1 == 0) {
        *param_2 = local_20._4_2_;
      }
      else {
        uVar8 = 0;
        if (*param_2 != 0) {
          do {
            uVar4 = (uint)uVar8;
            if (local_20._4_4_ <= uVar4) break;
            uVar8 = uVar8 + 1;
            iVar5 = uVar4 * 0x14;
            puVar7 = (undefined4 *)((int)(void *)local_20 + iVar5);
            puVar6 = (undefined4 *)(param_1 + iVar5);
            uVar1 = puVar7[1];
            uVar2 = puVar7[2];
            uVar3 = puVar7[3];
            *puVar6 = *puVar7;
            puVar6[1] = uVar1;
            puVar6[2] = uVar2;
            puVar6[3] = uVar3;
            *(undefined2 *)((int)puVar6 + 0x12) = *(undefined2 *)((int)puVar7 + 0x12);
            *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(puVar7 + 4);
          } while (uVar8 < *param_2);
        }
        *param_2 = uVar8;
      }
      if (local_24 != 0) {
        free((void *)local_2c);
      }
      if (local_18 != 0) {
        free((void *)local_20);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __fastcall FUN_0059f730(int param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c4));
  uVar1 = *(undefined4 *)(param_1 + 0x5dc);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c4));
  return uVar1;
}


int __fastcall FUN_0059f760(int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c4));
  iVar2 = *(int *)(param_1 + 0x5dc);
  iVar1 = iVar2 + 1;
  *(int *)(param_1 + 0x5dc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5dc) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5c4));
  return iVar2;
}


void __thiscall
FUN_0059f7a0(void *this,void *param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char in_stack_00000040;
  int in_stack_00000044;
  int in_stack_ffffffac;
  int in_stack_ffffffb0;
  undefined2 in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  int in_stack_ffffffbc;
  int in_stack_ffffffc0;
  int in_stack_ffffffc4;
  int in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  char cVar4;
  int iVar5;
  
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if (((((param_1 == (void *)0x0) || (param_2 < 0)) || (*(int *)((int)this + 0x22c) == 0)) ||
      (*(char *)((int)this + 8) == '\x01')) ||
     ((in_stack_00000040 == '\0' &&
      (uVar2 = FUN_0059d580((uint *)&stack0x00000018), (char)uVar2 != '\0')))) {
    __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar3 = in_stack_00000044;
  if (in_stack_00000044 == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x48))();
  }
  cVar4 = in_stack_00000040;
  if ((in_stack_00000040 == '\0') &&
     (uVar2 = FUN_005a42d0(this,(int *)&stack0x00000018,'\x01'), cVar4 = in_stack_00000040,
     (char)uVar2 != '\0')) {
    (**(code **)(*(int *)this + 0x54))();
    if (4 < param_4) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c4));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c4));
      (**(code **)(*(int *)this + 0x54))();
    }
    __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar5 = 0;
  FUN_0059d5c0(&stack0xffffffac,(undefined4 *)&stack0x00000018);
  FUN_005a4a80(this,param_1,param_2 * 8,param_3,param_4,param_5,in_stack_ffffffac,in_stack_ffffffb0,
               in_stack_ffffffb4,in_stack_ffffffb8,in_stack_ffffffbc,in_stack_ffffffc0,
               in_stack_ffffffc4,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,cVar4,iVar5,
               iVar3);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059f8e0(void *this,void *param_1,size_t param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if ((param_1 != (void *)0x0) && (-1 < (int)param_2)) {
    puVar6 = FUN_0059d780(this,param_2);
    memcpy((void *)puVar6[0xc],param_1,param_2);
    uVar1 = *(undefined4 *)((int)this + 0x4a4);
    uVar2 = *(undefined4 *)((int)this + 0x494);
    uVar3 = *(undefined4 *)((int)this + 0x498);
    uVar4 = *(undefined4 *)((int)this + 0x49c);
    uVar5 = *(undefined4 *)((int)this + 0x4a0);
    *(short *)(puVar6 + 4) = (short)uVar1;
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    *(short *)((int)puVar6 + 0x12) = (short)((uint)uVar1 >> 0x10);
    puVar6[6] = *(undefined4 *)((int)this + 0x450);
    puVar6[7] = *(undefined4 *)((int)this + 0x454);
    *(undefined2 *)(puVar6 + 8) = *(undefined2 *)((int)this + 0x458);
    (**(code **)(*(int *)this + 0x114))(puVar6,0);
  }
  return;
}


void __thiscall FUN_0059f960(void *this,int *param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  char in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_ffffffac;
  int in_stack_ffffffb0;
  undefined2 in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  int in_stack_ffffffbc;
  int in_stack_ffffffc0;
  int in_stack_ffffffc4;
  int in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  char cVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  if ((((*param_1 + 7U < 8) || (*(int *)((int)this + 0x22c) == 0)) ||
      (*(char *)((int)this + 8) == '\x01')) ||
     ((in_stack_0000003c == '\0' &&
      (uVar4 = FUN_0059d580((uint *)&stack0x00000014), (char)uVar4 != '\0')))) {
    __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (in_stack_00000040 == 0) {
    in_stack_00000040 = (**(code **)(*(int *)this + 0x48))();
  }
  cVar5 = in_stack_0000003c;
  if ((in_stack_0000003c == '\0') &&
     (uVar4 = FUN_005a42d0(this,(int *)&stack0x00000014,'\x01'), cVar5 = in_stack_0000003c,
     (char)uVar4 != '\0')) {
    (**(code **)(*(int *)this + 0x54))();
    if (4 < param_3) {
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c4));
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x5c4));
      (**(code **)(*(int *)this + 0x54))();
    }
    __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = *param_1;
  iVar6 = 0;
  pvVar2 = (void *)param_1[3];
  iVar7 = in_stack_00000040;
  FUN_0059d5c0(&stack0xffffffac,(undefined4 *)&stack0x00000014);
  FUN_005a4a80(this,pvVar2,iVar1,param_2,param_3,param_4,in_stack_ffffffac,in_stack_ffffffb0,
               in_stack_ffffffb4,in_stack_ffffffb8,in_stack_ffffffbc,in_stack_ffffffc0,
               in_stack_ffffffc4,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,cVar5,iVar6,
               iVar7);
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


int __thiscall
FUN_0059faa0(void *this,int param_1,size_t *param_2,uint param_3,int param_4,int param_5,
            undefined1 param_6)

{
  uint uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  char in_stack_00000044;
  int in_stack_00000048;
  int in_stack_ffffffb8;
  int in_stack_ffffffbc;
  undefined2 in_stack_ffffffc0;
  undefined4 in_stack_ffffffc4;
  int in_stack_ffffffc8;
  int in_stack_ffffffcc;
  int in_stack_ffffffd0;
  int in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  int iVar3;
  
  if ((((param_1 != 0) && (param_2 != (size_t *)0x0)) && (*(int *)((int)this + 0x22c) != 0)) &&
     ((*(char *)((int)this + 8) != '\x01' && (param_3 != 0)))) {
    iVar2 = param_1;
    if ((in_stack_00000044 == '\0') &&
       (uVar1 = FUN_0059d580((uint *)&stack0x0000001c), iVar2 = extraout_ECX, (char)uVar1 != '\0'))
    {
      return 0;
    }
    if (in_stack_00000048 == 0) {
      in_stack_00000048 = (**(code **)(*(int *)this + 0x48))();
      iVar2 = extraout_ECX_00;
    }
    iVar3 = in_stack_00000048;
    FUN_0059d5c0(&stack0xffffffb8,(undefined4 *)&stack0x0000001c);
    FUN_005a4b80(this,param_1,param_2,param_3,param_4,param_5,param_6,in_stack_ffffffb8,
                 in_stack_ffffffbc,in_stack_ffffffc0,in_stack_ffffffc4,in_stack_ffffffc8,
                 in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8,
                 in_stack_ffffffdc,in_stack_00000044,iVar2,iVar3);
    return in_stack_00000048;
  }
  return 0;
}


void __fastcall FUN_0059fb40(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  short *psVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 local_138;
  uint local_134;
  undefined4 local_130;
  char *local_12c;
  char local_128;
  undefined1 local_127 [259];
  short local_24;
  short sStack_22;
  int iStack_20;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  undefined4 local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 == '\0') {
LAB_0059fde9:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar5 = 0;
  if (param_1[0xb4] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0xb3] + uVar5 * 4) + 0xc))();
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[0xb4]);
  }
  uVar5 = 0;
  if (param_1[0xb7] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0xb6] + uVar5 * 4) + 0xc))();
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[0xb7]);
  }
LAB_0059fbb0:
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x167));
    if (param_1[0x16e] == param_1[0x16f]) {
      psVar4 = (short *)0x0;
    }
    else {
      iVar2 = param_1[0x16e] + 1;
      param_1[0x16e] = iVar2;
      if (iVar2 == param_1[0x170]) {
        param_1[0x16e] = 0;
        iVar2 = 0;
      }
      if (iVar2 == 0) {
        psVar4 = *(short **)(param_1[0x16d] + -4 + param_1[0x170] * 4);
      }
      else {
        psVar4 = *(short **)(param_1[0x16d] + -4 + iVar2 * 4);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x167));
    if (psVar4 == (short *)0x0) goto LAB_0059fde9;
    if ((8 < *(uint *)(psVar4 + 0x14)) && (pcVar3 = *(char **)(psVar4 + 0x18), *pcVar3 == '\x1b')) {
      memset(local_127,0,0x103);
      local_138 = 0x40;
      local_130 = 0;
      local_128 = '\0';
      local_134 = 0x40;
      local_12c = pcVar3 + 1;
      FUN_005aa1f0(&local_138,(undefined1 *)&local_10);
      local_24 = *psVar4;
      sStack_22 = psVar4[1];
      iStack_20 = *(int *)(psVar4 + 2);
      sStack_1c = psVar4[4];
      sStack_1a = psVar4[5];
      sStack_18 = psVar4[6];
      sStack_16 = psVar4[7];
      local_14 = *(undefined4 *)(psVar4 + 8);
      if ((((sStack_22 == DAT_006558f6) && ((local_24 == 2 && (iStack_20 == DAT_006558f8)))) ||
          (iVar2 = FUN_005a4230(param_1,(int)&local_24), iVar2 == -1)) ||
         ((pcVar3 = (char *)(param_1[0x8b] + iVar2 * 0x1210), *pcVar3 != '\x01' ||
          (pcVar3 == (char *)0x0)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_005a0fd0((int)pcVar3);
      }
      bVar6 = local_10 < (uint)uVar7;
      local_10 = local_10 - (uint)uVar7;
      local_138 = 0;
      local_c = (local_c - (int)((ulonglong)uVar7 >> 0x20)) - (uint)bVar6;
      FUN_005aa070(&local_138,(byte *)&local_10);
      if ((local_128 != '\0') && (0x800 < local_134)) {
        free(local_12c);
      }
    }
    FUN_005a9da0(param_1 + 0xb3,(int)psVar4);
    FUN_005a9da0(param_1 + 0xb6,(int)psVar4);
    uVar5 = 0;
    if (param_1[0xb4] != 0) {
      do {
        iVar2 = (**(code **)(**(int **)(param_1[0xb3] + uVar5 * 4) + 0x10))(psVar4);
        if (iVar2 == 0) {
          (**(code **)(*param_1 + 0x60))(psVar4);
LAB_0059fd7e:
          psVar4 = (short *)0x0;
          break;
        }
        if (iVar2 == 2) goto LAB_0059fd7e;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)param_1[0xb4]);
    }
    uVar5 = 0;
    if (param_1[0xb7] != 0) {
      do {
        iVar2 = (**(code **)(**(int **)(param_1[0xb6] + uVar5 * 4) + 0x10))(psVar4);
        if (iVar2 == 0) {
          (**(code **)(*param_1 + 0x60))(psVar4);
          goto LAB_0059fbb0;
        }
        if (iVar2 == 2) goto LAB_0059fbb0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)param_1[0xb7]);
    }
    if (psVar4 != (short *)0x0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


void __thiscall FUN_0059fe00(void *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(char *)((int)param_1 + 0x34) != '\0') {
      free(*(void **)((int)param_1 + 0x30));
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x570));
      FUN_005aad20((void *)((int)this + 0x588),(int)param_1);
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x570));
      return;
    }
    free(param_1);
  }
  return;
}


undefined4 __fastcall FUN_0059fe60(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


void __thiscall
FUN_0059fe70(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 auStack_4c [16];
  undefined4 uStack_3c;
  undefined4 local_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  uStack_3c = 0x59fe8e;
  FUN_005a47e0(this,&param_1,(char)param_11,'\0',param_12,param_13);
  if ((char)param_11 == '\0') {
    FUN_0059d5c0(auStack_4c,&param_1);
    iVar5 = (**(code **)(*(int *)this + 0x6c))();
    if (iVar5 == 2) {
      puVar6 = FUN_0059d780(this,1);
      *(undefined1 *)puVar6[0xc] = 0x16;
      if ((param_1 == DAT_00655908) && (param_2 == DAT_0065590c)) {
        piVar7 = (int *)(**(code **)(*(int *)this + 0xd0))(param_5,param_6,param_7,param_8,param_9);
      }
      else {
        piVar7 = &param_1;
      }
      puVar6[6] = *piVar7;
      puVar6[7] = piVar7[1];
      *(short *)(puVar6 + 8) = (short)piVar7[2];
      if (((param_5._2_2_ == DAT_006558f6) && ((short)param_5 == 2)) && (param_6 == DAT_006558f8)) {
        puVar8 = (undefined4 *)
                 (**(code **)(*(int *)this + 0xd4))(&local_1c,param_1,param_2,param_3,param_4);
      }
      else {
        puVar8 = &local_1c;
        local_c = param_9;
        local_1c = param_5;
        iStack_18 = param_6;
        uStack_14 = param_7;
        uStack_10 = param_8;
      }
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      *puVar6 = *puVar8;
      puVar6[1] = uVar1;
      puVar6[2] = uVar2;
      puVar6[3] = uVar3;
      *(undefined2 *)((int)puVar6 + 0x12) = *(undefined2 *)((int)puVar8 + 0x12);
      *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(puVar8 + 4);
      uVar4 = (**(code **)(*(int *)this + 0x74))(*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6[4]);
      *(undefined2 *)((int)puVar6 + 0x12) = uVar4;
      *(undefined2 *)(puVar6 + 8) = uVar4;
      *(undefined1 *)((int)puVar6 + 0x35) = 1;
      local_8 = puVar6;
      EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
      FUN_0059bac0((void *)((int)this + 0x5b4),&local_8);
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x59c));
    }
  }
  return;
}


void __thiscall FUN_0059ffe0(void *this,undefined4 param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
  uVar3 = *(uint *)((int)this + 0x2e8);
  iVar6 = uVar3 * 4;
  uVar4 = uVar3;
  while( true ) {
    if (*(uint *)((int)this + 0x2ec) < uVar3) {
      iVar2 = *(int *)((int)this + 0x2f0) - uVar3;
    }
    else {
      iVar2 = -uVar3;
    }
    if (*(uint *)((int)this + 0x2ec) + iVar2 <= uVar5) goto LAB_005a00cb;
    iVar2 = iVar6;
    if (*(uint *)((int)this + 0x2f0) <= uVar4) {
      iVar2 = ((uVar3 - *(int *)((int)this + 0x2f0)) + uVar5) * 4;
    }
    psVar1 = *(short **)(iVar2 + *(int *)((int)this + 0x2e4));
    if (((psVar1[1] == param_1._2_2_) && (*psVar1 == 2)) && (*(int *)(psVar1 + 2) == param_2))
    break;
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 4;
    uVar4 = uVar4 + 1;
  }
  if (*(uint *)((int)this + 0x2f0) <= uVar4) {
    uVar3 = uVar3 - *(int *)((int)this + 0x2f0);
  }
  FUN_005adb3f(*(void **)(*(int *)((int)this + 0x2e4) + (uVar5 + uVar3) * 4));
  FUN_005aa580((void *)((int)this + 0x2e4),uVar5);
LAB_005a00cb:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f4));
  return;
}
