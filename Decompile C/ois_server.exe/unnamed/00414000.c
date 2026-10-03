#include "../ois_server.exe.h"


undefined4 * __fastcall FUN_00414000(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != param_4) {
    do {
      if (*param_3 == *param_2) break;
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
    if (param_3 != param_4) {
      piVar1 = param_3 + 1;
      uVar2 = 0;
      uVar3 = (uint)((int)param_4 + (3 - (int)piVar1)) >> 2;
      if (param_4 < piVar1) {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        do {
          if (*piVar1 != *param_2) {
            *param_3 = *piVar1;
            param_3 = param_3 + 1;
          }
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 1;
        } while (uVar2 != uVar3);
      }
      *param_1 = param_3;
      return param_1;
    }
  }
  *param_1 = param_3;
  return param_1;
}


int __thiscall FUN_00414080(void *this,void *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  void *_Dst;
  
  iVar2 = *(int *)this;
  iVar4 = *(int *)((int)this + 4) - iVar2 >> 2;
  if (iVar4 == 0x3fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar4 + 1;
  uVar8 = *(int *)((int)this + 8) - iVar2 >> 2;
  uVar5 = uVar1;
  if ((uVar8 <= 0x3fffffff - (uVar8 >> 1)) && (uVar5 = (uVar8 >> 1) + uVar8, uVar5 < uVar1)) {
    uVar5 = uVar1;
  }
  uVar8 = uVar5 * 4;
  if (uVar5 < 0x40000000) {
    uVar5 = uVar8;
    if (0xfff < uVar8) goto LAB_004140ef;
    if (uVar8 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_005adb0f(uVar8);
    }
  }
  else {
    uVar5 = 0xffffffff;
LAB_004140ef:
    uVar6 = uVar5 + 0x23;
    if (uVar6 <= uVar5) {
      uVar6 = 0xffffffff;
    }
    iVar4 = FUN_005adb0f(uVar6);
    if (iVar4 == 0) goto LAB_004141cf;
    _Dst = (void *)(iVar4 + 0x23U & 0xffffffe0);
    *(int *)((int)_Dst - 4) = iVar4;
  }
  iVar2 = ((int)param_1 - iVar2 >> 2) * 4;
  *(undefined4 *)(iVar2 + (int)_Dst) = *param_2;
  pvVar3 = *(void **)this;
  if (param_1 == *(void **)((int)this + 4)) {
    memmove(_Dst,pvVar3,(int)*(void **)((int)this + 4) - (int)pvVar3);
  }
  else {
    memmove(_Dst,pvVar3,(int)param_1 - (int)pvVar3);
    memmove((void *)(iVar2 + 4 + (int)_Dst),param_1,*(int *)((int)this + 4) - (int)param_1);
  }
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    pvVar7 = pvVar3;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar3 & 0xfffffffcU)) &&
       (pvVar7 = *(void **)((int)pvVar3 + -4), 0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar7)))) {
LAB_004141cf:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar7);
  }
  *(void **)this = _Dst;
  *(void **)((int)this + 4) = (void *)((int)_Dst + uVar1 * 4);
  *(void **)((int)this + 8) = (void *)(uVar8 + (int)_Dst);
  return *(int *)this + iVar2;
}


int __thiscall FUN_004141e0(void *this,void *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *_Src;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  uint uVar7;
  
  iVar5 = *(int *)this;
  iVar3 = *(int *)((int)this + 4) - iVar5 >> 2;
  if (iVar3 == 0x3fffffff) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar3 + 1;
  uVar6 = *(int *)((int)this + 8) - iVar5 >> 2;
  uVar7 = uVar1;
  if ((uVar6 <= 0x3fffffff - (uVar6 >> 1)) && (uVar7 = (uVar6 >> 1) + uVar6, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  uVar6 = uVar7 * 4;
  if (uVar7 < 0x40000000) {
    if (uVar6 < 0x1000) {
      if (uVar6 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_005adb0f(uVar6);
      }
      goto LAB_0041428c;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  uVar4 = uVar6 + 0x23;
  if (uVar4 <= uVar6) {
    uVar4 = 0xffffffff;
  }
  iVar3 = FUN_005adb0f(uVar4);
  if (iVar3 == 0) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(iVar3 + 0x23U & 0xffffffe0);
  *(int *)((int)_Dst - 4) = iVar3;
LAB_0041428c:
  iVar5 = ((int)param_1 - iVar5 >> 2) * 4;
  puVar2 = (undefined4 *)(iVar5 + (int)_Dst);
  *puVar2 = *param_2;
  _Src = *(void **)this;
  if (param_1 == *(void **)((int)this + 4)) {
    memmove(_Dst,_Src,(int)*(void **)((int)this + 4) - (int)_Src);
  }
  else {
    memmove(_Dst,_Src,(int)param_1 - (int)_Src);
    memmove(puVar2 + 1,param_1,*(int *)((int)this + 4) - (int)param_1);
  }
  FUN_00414350(this,(int)_Dst,uVar1,uVar7);
  return *(int *)this + iVar5;
}


int * __fastcall FUN_00414300(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    if (param_3 != param_1) {
      FUN_00401b20(param_3);
      iVar1 = param_1[1];
      iVar2 = param_1[2];
      iVar3 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = iVar1;
      param_3[2] = iVar2;
      param_3[3] = iVar3;
      iVar1 = param_1[5];
      param_3[4] = param_1[4];
      param_3[5] = iVar1;
      param_1[4] = 0;
      param_1[5] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    param_3 = param_3 + 6;
  }
  return param_3;
}


void __thiscall FUN_00414350(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(int *)((int)this + 8) - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1 + param_2 * 4;
  *(int *)((int)this + 8) = param_1 + param_3 * 4;
  return;
}


void __thiscall FUN_004143b0(void *this,byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar1 = *(byte **)param_1;
  }
  pbVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pbVar2 = *(byte **)this;
  }
  FUN_004031f0(pbVar2,*(uint *)((int)this + 0x10),pbVar1,*(uint *)(param_1 + 0x10));
  return;
}


byte * __fastcall FUN_004143f0(byte *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  do {
    pbVar1 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pbVar1 = *(byte **)param_3;
    }
    pbVar3 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pbVar3 = *(byte **)param_1;
    }
    uVar2 = FUN_004031f0(pbVar3,*(uint *)(param_1 + 0x10),pbVar1,*(uint *)(param_3 + 0x10));
  } while (((char)uVar2 == '\0') && (param_1 = param_1 + 0x18, param_1 != param_2));
  return param_1;
}


int __thiscall FUN_00414440(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b09a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00414d60(this);
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  FUN_004024e0((void *)(iVar1 + 0x10),(undefined4 *)*param_2);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  ExceptionList = local_10;
  return iVar1;
}


undefined4 * __thiscall
FUN_004144c0(void *this,undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  uint uStack_38;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b09c0;
  local_10 = ExceptionList;
  uStack_38 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_38;
    FUN_00414e70(this,param_1,'\x01',*(undefined4 **)this,this,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  local_24 = *(int **)this;
  if (param_2 != (int *)*local_24) {
    if (param_2 != local_24) {
      pbVar13 = (byte *)(param_2 + 4);
      if (0xf < (uint)param_2[9]) {
        pbVar13 = (byte *)param_2[4];
      }
      pbVar12 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar12 = *(byte **)param_3;
      }
      local_1c = *(uint *)(param_3 + 0x10);
      uVar9 = local_1c;
      if ((uint)param_2[8] < local_1c) {
        uVar9 = param_2[8];
      }
      while (uVar7 = uVar9 - 4, 3 < uVar9) {
        if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_00414707;
        pbVar12 = pbVar12 + 4;
        pbVar13 = pbVar13 + 4;
        uVar9 = uVar7;
      }
      if (uVar7 == 0xfffffffc) {
LAB_0041473b:
        uVar9 = 0;
      }
      else {
LAB_00414707:
        bVar14 = *pbVar12 < *pbVar13;
        if ((*pbVar12 == *pbVar13) &&
           ((uVar7 == 0xfffffffd ||
            ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
             ((uVar7 == 0xfffffffe ||
              ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
               ((uVar7 == 0xffffffff || (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3])
                ))))))))))) goto LAB_0041473b;
        uVar9 = -(uint)bVar14 | 1;
      }
      if (uVar9 == 0) {
        if (*(uint *)(param_3 + 0x10) < (uint)param_2[8]) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)((uint)param_2[8] < *(uint *)(param_3 + 0x10));
        }
      }
      if ((int)uVar9 < 0) {
        if (*(char *)((int)param_2 + 0xd) == '\0') {
          piVar10 = (int *)*param_2;
          if (*(char *)((int)piVar10 + 0xd) == '\0') {
            cVar1 = *(char *)(piVar10[2] + 0xd);
            piVar4 = (int *)piVar10[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(piVar4[2] + 0xd);
              piVar10 = piVar4;
              piVar4 = (int *)piVar4[2];
            }
          }
          else {
            cVar1 = *(char *)(param_2[1] + 0xd);
            piVar4 = (int *)param_2[1];
            piVar10 = param_2;
            while ((piVar5 = piVar4, cVar1 == '\0' && (piVar10 == (int *)*piVar5))) {
              cVar1 = *(char *)(piVar5[1] + 0xd);
              piVar4 = (int *)piVar5[1];
              piVar10 = piVar5;
            }
            if (*(char *)((int)piVar10 + 0xd) == '\0') {
              piVar10 = piVar5;
            }
          }
        }
        else {
          piVar10 = (int *)param_2[2];
        }
        pbVar13 = param_3;
        if (0xf < *(uint *)(param_3 + 0x14)) {
          pbVar13 = *(byte **)param_3;
        }
        pbVar12 = (byte *)(piVar10 + 4);
        if (0xf < (uint)piVar10[9]) {
          pbVar12 = (byte *)piVar10[4];
        }
        uVar9 = piVar10[8];
        if (local_1c < (uint)piVar10[8]) {
          uVar9 = local_1c;
        }
        while (uVar7 = uVar9 - 4, 3 < uVar9) {
          if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_004147f8;
          pbVar12 = pbVar12 + 4;
          pbVar13 = pbVar13 + 4;
          uVar9 = uVar7;
        }
        if (uVar7 == 0xfffffffc) {
LAB_0041482c:
          uVar9 = 0;
        }
        else {
LAB_004147f8:
          bVar14 = *pbVar12 < *pbVar13;
          if ((*pbVar12 == *pbVar13) &&
             ((uVar7 == 0xfffffffd ||
              ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
               ((uVar7 == 0xfffffffe ||
                ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
                 ((uVar7 == 0xffffffff ||
                  (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3]))))))))))))
          goto LAB_0041482c;
          uVar9 = -(uint)bVar14 | 1;
        }
        if (uVar9 == 0) {
          if ((uint)piVar10[8] < local_1c) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(local_1c < (uint)piVar10[8]);
          }
        }
        if ((int)uVar9 < 0) {
          iVar2 = piVar10[2];
          if (*(char *)(iVar2 + 0xd) != '\0') {
            local_14 = (undefined1 *)&uStack_38;
            FUN_00414e70(this,param_1,'\0',piVar10,iVar2,param_4);
            ExceptionList = local_10;
            return param_1;
          }
          local_14 = (undefined1 *)&uStack_38;
          FUN_00414e70(this,param_1,'\x01',param_2,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
      }
      pbVar13 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar13 = *(byte **)param_3;
      }
      pbVar12 = (byte *)(param_2 + 4);
      if (0xf < (uint)param_2[9]) {
        pbVar12 = (byte *)param_2[4];
      }
      uVar9 = param_2[8];
      if (*(uint *)(param_3 + 0x10) < (uint)param_2[8]) {
        uVar9 = *(uint *)(param_3 + 0x10);
      }
      while (uVar7 = uVar9 - 4, 3 < uVar9) {
        if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_004148e6;
        pbVar12 = pbVar12 + 4;
        pbVar13 = pbVar13 + 4;
        uVar9 = uVar7;
      }
      if (uVar7 == 0xfffffffc) {
LAB_0041491a:
        uVar9 = 0;
      }
      else {
LAB_004148e6:
        bVar14 = *pbVar12 < *pbVar13;
        if ((*pbVar12 == *pbVar13) &&
           ((uVar7 == 0xfffffffd ||
            ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
             ((uVar7 == 0xfffffffe ||
              ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
               ((uVar7 == 0xffffffff || (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3])
                ))))))))))) goto LAB_0041491a;
        uVar9 = -(uint)bVar14 | 1;
      }
      if (uVar9 == 0) {
        pbVar12 = (byte *)(param_2 + 4);
        if ((uint)param_2[8] < *(uint *)(param_3 + 0x10)) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(*(uint *)(param_3 + 0x10) < (uint)param_2[8]);
        }
      }
      puVar6 = &uStack_38;
      if (-1 < (int)uVar9) goto LAB_00414a41;
      local_20 = param_2;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_20);
      if (local_20 == local_24) goto LAB_004149ea;
      pbVar13 = (byte *)(local_20 + 4);
      if (0xf < (uint)local_20[9]) {
        pbVar13 = (byte *)local_20[4];
      }
      pbVar12 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar12 = *(byte **)param_3;
      }
      uVar9 = local_1c;
      if ((uint)local_20[8] < local_1c) {
        uVar9 = local_20[8];
      }
      while (uVar7 = uVar9 - 4, 3 < uVar9) {
        if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_00414996;
        pbVar12 = pbVar12 + 4;
        pbVar13 = pbVar13 + 4;
        uVar9 = uVar7;
      }
      if (uVar7 == 0xfffffffc) {
LAB_004149ca:
        uVar9 = 0;
      }
      else {
LAB_00414996:
        bVar14 = *pbVar12 < *pbVar13;
        if ((*pbVar12 == *pbVar13) &&
           ((uVar7 == 0xfffffffd ||
            ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
             ((uVar7 == 0xfffffffe ||
              ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
               ((uVar7 == 0xffffffff || (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3])
                ))))))))))) goto LAB_004149ca;
        uVar9 = -(uint)bVar14 | 1;
      }
      if (uVar9 == 0) {
        if (local_1c < (uint)local_20[8]) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)((uint)local_20[8] < local_1c);
        }
      }
      pbVar12 = (byte *)(uVar9 >> 0x1f);
      puVar6 = (uint *)local_14;
      if ((int)uVar9 < 0) {
LAB_004149ea:
        iVar2 = param_2[2];
        if (*(char *)(iVar2 + 0xd) != '\0') {
          FUN_00414e70(local_18,param_1,'\0',param_2,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00414e70(local_18,param_1,'\x01',local_20,iVar2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      goto LAB_00414a41;
    }
    iVar2 = local_24[2];
    pbVar13 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pbVar13 = *(byte **)param_3;
    }
    pbVar12 = (byte *)(iVar2 + 0x10);
    if (0xf < *(uint *)(iVar2 + 0x24)) {
      pbVar12 = *(byte **)(iVar2 + 0x10);
    }
    uVar9 = *(uint *)(param_3 + 0x10);
    uVar7 = *(uint *)(iVar2 + 0x20);
    uVar8 = uVar7;
    if (uVar9 < uVar7) {
      uVar8 = uVar9;
    }
    while (uVar3 = uVar8 - 4, 3 < uVar8) {
      if (*(int *)pbVar12 != *(int *)pbVar13) goto LAB_00414646;
      pbVar12 = pbVar12 + 4;
      pbVar13 = pbVar13 + 4;
      uVar8 = uVar3;
    }
    if (uVar3 == 0xfffffffc) {
LAB_0041467a:
      uVar8 = 0;
    }
    else {
LAB_00414646:
      bVar14 = *pbVar12 < *pbVar13;
      if ((*pbVar12 == *pbVar13) &&
         ((uVar3 == 0xfffffffd ||
          ((bVar14 = pbVar12[1] < pbVar13[1], pbVar12[1] == pbVar13[1] &&
           ((uVar3 == 0xfffffffe ||
            ((bVar14 = pbVar12[2] < pbVar13[2], pbVar12[2] == pbVar13[2] &&
             ((uVar3 == 0xffffffff || (bVar14 = pbVar12[3] < pbVar13[3], pbVar12[3] == pbVar13[3])))
             ))))))))) goto LAB_0041467a;
      uVar8 = -(uint)bVar14 | 1;
    }
    if (uVar8 == 0) {
      if (uVar7 < uVar9) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(uVar9 < uVar7);
      }
    }
    puVar6 = &uStack_38;
    if ((int)uVar8 < 0) {
      local_14 = (undefined1 *)&uStack_38;
      FUN_00414e70(this,param_1,'\0',(undefined4 *)local_24[2],pbVar12,param_4);
      ExceptionList = local_10;
      return param_1;
    }
    goto LAB_00414a41;
  }
  pbVar12 = (byte *)(param_2 + 4);
  if (0xf < (uint)param_2[9]) {
    pbVar12 = (byte *)param_2[4];
  }
  pbVar13 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar13 = *(byte **)param_3;
  }
  uVar9 = param_2[8];
  uVar7 = *(uint *)(param_3 + 0x10);
  if (uVar9 < *(uint *)(param_3 + 0x10)) {
    uVar7 = uVar9;
  }
  while (uVar8 = uVar7 - 4, 3 < uVar7) {
    if (*(int *)pbVar13 != *(int *)pbVar12) goto LAB_00414576;
    pbVar13 = pbVar13 + 4;
    pbVar12 = pbVar12 + 4;
    uVar7 = uVar8;
  }
  if (uVar8 == 0xfffffffc) {
LAB_004145aa:
    uVar7 = 0;
  }
  else {
LAB_00414576:
    bVar14 = *pbVar13 < *pbVar12;
    if ((*pbVar13 == *pbVar12) &&
       ((uVar8 == 0xfffffffd ||
        ((bVar14 = pbVar13[1] < pbVar12[1], pbVar13[1] == pbVar12[1] &&
         ((uVar8 == 0xfffffffe ||
          ((bVar14 = pbVar13[2] < pbVar12[2], pbVar13[2] == pbVar12[2] &&
           ((uVar8 == 0xffffffff || (bVar14 = pbVar13[3] < pbVar12[3], pbVar13[3] == pbVar12[3])))))
          ))))))) goto LAB_004145aa;
    uVar7 = -(uint)bVar14 | 1;
  }
  if (uVar7 == 0) {
    pbVar12 = param_3;
    if (*(uint *)(param_3 + 0x10) < uVar9) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)(uVar9 < *(uint *)(param_3 + 0x10));
    }
  }
  puVar6 = &uStack_38;
  if ((int)uVar7 < 0) {
    local_14 = (undefined1 *)&uStack_38;
    FUN_00414e70(this,param_1,'\x01',param_2,pbVar12,param_4);
    ExceptionList = local_10;
    return param_1;
  }
LAB_00414a41:
  local_14 = (undefined1 *)puVar6;
  local_8 = 0xffffffff;
  puVar11 = (undefined4 *)FUN_004150a0(local_18,&local_28,pbVar12,param_3,param_4);
  *param_1 = *puVar11;
  ExceptionList = local_10;
  return param_1;
}


void FUN_00414a90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00414de0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)*param_2;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0xf;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  return;
}


undefined4 * __thiscall
FUN_00414ac0(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uStack_2c;
  undefined4 local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b09e0;
  local_10 = ExceptionList;
  uStack_2c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (DAT_0065b44c == 0) {
    local_14 = (undefined1 *)&uStack_2c;
    FUN_00415330(param_1,'\x01',DAT_0065b448,this,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 == (int *)*DAT_0065b448) {
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_2c;
      FUN_00415330(param_1,'\x01',param_2,param_2,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == DAT_0065b448) {
    param_2 = (int *)DAT_0065b448[2];
    if (param_2[4] < *param_3) {
      local_14 = (undefined1 *)&uStack_2c;
      FUN_00415330(param_1,'\0',param_2,param_2,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    if (iVar2 < param_2[4]) {
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        piVar5 = (int *)*param_2;
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          cVar1 = *(char *)(piVar5[2] + 0xd);
          piVar6 = (int *)piVar5[2];
          while (cVar1 == '\0') {
            cVar1 = *(char *)(piVar6[2] + 0xd);
            piVar5 = piVar6;
            piVar6 = (int *)piVar6[2];
          }
        }
        else {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar3 = (int *)param_2[1];
          piVar6 = param_2;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar6 == (int *)*piVar5))) {
            cVar1 = *(char *)(piVar5[1] + 0xd);
            piVar3 = (int *)piVar5[1];
            piVar6 = piVar5;
          }
          if (*(char *)((int)piVar6 + 0xd) != '\0') {
            piVar5 = piVar6;
          }
        }
      }
      else {
        piVar5 = (int *)param_2[2];
      }
      iVar2 = *param_3;
      if (piVar5[4] < iVar2) {
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          local_14 = (undefined1 *)&uStack_2c;
          FUN_00415330(param_1,'\x01',param_2,param_2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_2c;
        FUN_00415330(param_1,'\0',piVar5,param_2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    if (param_2[4] < iVar2) {
      piVar5 = (int *)param_2[2];
      if (*(char *)((int)piVar5 + 0xd) == '\0') {
        cVar1 = *(char *)(*piVar5 + 0xd);
        piVar6 = piVar5;
        piVar3 = (int *)*piVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(param_2[1] + 0xd);
        piVar4 = (int *)param_2[1];
        piVar3 = param_2;
        while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0xd);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
      if ((piVar6 == DAT_0065b448) || (*param_3 < piVar6[4])) {
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          FUN_00415330(param_1,'\x01',piVar6,param_2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_2c;
        FUN_00415330(param_1,'\0',param_2,param_2,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_2c;
  puVar7 = (undefined4 *)FUN_00415570(local_1c,param_2,param_3,param_4);
  *param_1 = *puVar7;
  ExceptionList = local_10;
  return param_1;
}


void FUN_00414d40(void *param_1)

{
  FUN_005adb3f(param_1);
  return;
}


void __fastcall FUN_00414d60(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005adb0f(0x2c);
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}


void FUN_00414d80(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)param_1 + 0x24)) {
    pvVar1 = *(void **)((int)param_1 + 0x10);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x24) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0xf;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
  FUN_005adb3f(param_1);
  return;
}


void FUN_00414de0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005adb0f(0x2c);
  *puVar1 = DAT_0065b448;
  puVar1[1] = DAT_0065b448;
  puVar1[2] = DAT_0065b448;
  return;
}


void FUN_00414e10(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)((int)param_1 + 0x28)) {
    pvVar1 = *(void **)((int)param_1 + 0x14);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)((int)param_1 + 0x28) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0xf;
  *(undefined1 *)((int)param_1 + 0x14) = 0;
  FUN_005adb3f(param_1);
  return;
}


void __thiscall
FUN_00414e70(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if (0x5d1745b < *(uint *)((int)this + 4)) {
    FUN_00414d80(param_5);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar7 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar8 = (int *)piVar7[1];
    piVar6 = piVar7 + 1;
    piVar9 = piVar8 + 1;
    iVar4 = *(int *)piVar8[1];
    if (piVar8 == (int *)iVar4) {
      iVar4 = ((int *)piVar8[1])[2];
      if (*(char *)(iVar4 + 0xc) != '\0') {
        piVar2 = (int *)piVar8[2];
        if (piVar7 == piVar2) {
          piVar8[2] = *piVar2;
          if (*(char *)(*piVar2 + 0xd) == '\0') {
            *(int **)(*piVar2 + 4) = piVar8;
          }
          piVar2[1] = *piVar9;
          if (piVar8 == (int *)*(int *)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar2;
            *piVar2 = (int)piVar8;
            *piVar9 = (int)piVar2;
            piVar7 = piVar8;
            piVar8 = piVar2;
            piVar6 = piVar9;
          }
          else {
            piVar7 = (int *)*piVar9;
            if (piVar8 == (int *)*piVar7) {
              *piVar7 = (int)piVar2;
              *piVar2 = (int)piVar8;
              *piVar9 = (int)piVar2;
              piVar7 = piVar8;
              piVar8 = piVar2;
              piVar6 = piVar9;
            }
            else {
              piVar7[2] = (int)piVar2;
              *piVar2 = (int)piVar8;
              *piVar9 = (int)piVar2;
              piVar7 = piVar8;
              piVar8 = piVar2;
              piVar6 = piVar9;
            }
          }
        }
        *(undefined1 *)(piVar8 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
        piVar6 = *(int **)(*piVar6 + 4);
        piVar9 = (int *)*piVar6;
        *piVar6 = piVar9[2];
        if (*(char *)(piVar9[2] + 0xd) == '\0') {
          *(int **)(piVar9[2] + 4) = piVar6;
        }
        piVar9[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar9;
          piVar9[2] = (int)piVar6;
        }
        else {
          piVar8 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar8[2]) {
            piVar8[2] = (int)piVar9;
            piVar9[2] = (int)piVar6;
          }
          else {
            *piVar8 = (int)piVar9;
            piVar9[2] = (int)piVar6;
          }
        }
        goto LAB_00415065;
      }
LAB_00414fbc:
      *(undefined1 *)(piVar8 + 3) = 1;
      *(undefined1 *)(iVar4 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (*(char *)(iVar4 + 0xc) == '\0') goto LAB_00414fbc;
      piVar2 = (int *)*piVar8;
      piVar5 = piVar8;
      if (piVar7 == piVar2) {
        *piVar8 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar8;
        }
        piVar2[1] = *piVar9;
        if (piVar8 == (int *)*(int *)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar2;
        }
        else {
          puVar3 = (undefined4 *)*piVar9;
          if (piVar8 == (int *)puVar3[2]) {
            puVar3[2] = piVar2;
          }
          else {
            *puVar3 = piVar2;
          }
        }
        piVar2[2] = (int)piVar8;
        *piVar9 = (int)piVar2;
        piVar5 = piVar2;
        piVar7 = piVar8;
        piVar6 = piVar9;
      }
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar6 = *(int **)(*piVar6 + 4);
      piVar9 = (int *)piVar6[2];
      piVar6[2] = *piVar9;
      if (*(char *)(*piVar9 + 0xd) == '\0') {
        *(int **)(*piVar9 + 4) = piVar6;
      }
      piVar9[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar9;
      }
      else {
        piVar8 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar8) {
          *piVar8 = (int)piVar9;
        }
        else {
          piVar8[2] = (int)piVar9;
        }
      }
      *piVar9 = (int)piVar6;
LAB_00415065:
      piVar6[1] = (int)piVar9;
    }
    cVar1 = *(char *)(piVar7[1] + 0xc);
  } while( true );
}


void __thiscall
FUN_004150a0(void *this,undefined4 *param_1,undefined4 param_2,byte *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  byte local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar3 = 1;
  pbVar9 = *(byte **)this;
  local_20 = 1;
  pbVar8 = pbVar9;
  if ((*(byte **)(pbVar9 + 4))[0xd] == 0) {
    uVar1 = *(uint *)(param_3 + 0x10);
    pbVar10 = *(byte **)(pbVar9 + 4);
    do {
      pbVar8 = pbVar10;
      pbVar10 = pbVar8 + 0x10;
      if (0xf < *(uint *)(pbVar8 + 0x24)) {
        pbVar10 = *(byte **)(pbVar8 + 0x10);
      }
      pbVar7 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar7 = *(byte **)param_3;
      }
      uVar6 = *(uint *)(pbVar8 + 0x20);
      uVar4 = uVar1;
      if (uVar6 < uVar1) {
        uVar4 = uVar6;
      }
      while (uVar2 = uVar4 - 4, 3 < uVar4) {
        if (*(int *)pbVar7 != *(int *)pbVar10) goto LAB_0041513d;
        pbVar7 = pbVar7 + 4;
        pbVar10 = pbVar10 + 4;
        uVar4 = uVar2;
      }
      if (uVar2 == 0xfffffffc) {
LAB_00415171:
        uVar4 = 0;
      }
      else {
LAB_0041513d:
        bVar11 = *pbVar7 < *pbVar10;
        if ((*pbVar7 == *pbVar10) &&
           ((uVar2 == 0xfffffffd ||
            ((bVar11 = pbVar7[1] < pbVar10[1], pbVar7[1] == pbVar10[1] &&
             ((uVar2 == 0xfffffffe ||
              ((bVar11 = pbVar7[2] < pbVar10[2], pbVar7[2] == pbVar10[2] &&
               ((uVar2 == 0xffffffff || (bVar11 = pbVar7[3] < pbVar10[3], pbVar7[3] == pbVar10[3])))
               ))))))))) goto LAB_00415171;
        uVar4 = -(uint)bVar11 | 1;
      }
      if (uVar4 == 0) {
        if (uVar1 < uVar6) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar6 < uVar1);
        }
      }
      local_20 = (byte)(uVar4 >> 0x18);
      bVar3 = local_20 >> 7;
      local_20 = local_20 >> 7;
      if ((int)uVar4 < 0) {
        pbVar10 = *(byte **)pbVar8;
      }
      else {
        pbVar10 = *(byte **)(pbVar8 + 8);
      }
    } while (pbVar10[0xd] == 0);
  }
  pbVar10 = pbVar8;
  if (bVar3 != 0) {
    if (pbVar8 == *(byte **)pbVar9) {
      local_20 = 1;
      pbVar9 = pbVar8;
      goto LAB_004151c5;
    }
    if (pbVar8[0xd] == 0) {
      pbVar10 = *(byte **)pbVar8;
      if (pbVar10[0xd] == 0) {
        bVar3 = (*(byte **)(pbVar10 + 8))[0xd];
        pbVar9 = *(byte **)(pbVar10 + 8);
        while (bVar3 == 0) {
          bVar3 = (*(byte **)(pbVar9 + 8))[0xd];
          pbVar10 = pbVar9;
          pbVar9 = *(byte **)(pbVar9 + 8);
        }
      }
      else {
        bVar3 = (*(byte **)(pbVar8 + 4))[0xd];
        pbVar9 = *(byte **)(pbVar8 + 4);
        pbVar10 = pbVar8;
        while ((pbVar7 = pbVar9, bVar3 == 0 && (pbVar10 == *(byte **)pbVar7))) {
          bVar3 = (*(byte **)(pbVar7 + 4))[0xd];
          pbVar9 = *(byte **)(pbVar7 + 4);
          pbVar10 = pbVar7;
        }
        if (pbVar10[0xd] == 0) {
          pbVar10 = pbVar7;
        }
      }
    }
    else {
      pbVar10 = *(byte **)(pbVar8 + 8);
    }
  }
  pbVar7 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar7 = *(byte **)param_3;
  }
  pbVar9 = pbVar10 + 0x10;
  if (0xf < *(uint *)(pbVar10 + 0x24)) {
    pbVar9 = *(byte **)(pbVar10 + 0x10);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar6 = *(uint *)(pbVar10 + 0x20);
  if (uVar1 < *(uint *)(pbVar10 + 0x20)) {
    uVar6 = uVar1;
  }
  while (uVar4 = uVar6 - 4, 3 < uVar6) {
    if (*(int *)pbVar9 != *(int *)pbVar7) goto LAB_0041528a;
    pbVar9 = pbVar9 + 4;
    pbVar7 = pbVar7 + 4;
    uVar6 = uVar4;
  }
  if (uVar4 == 0xfffffffc) {
LAB_004152be:
    uVar6 = 0;
  }
  else {
LAB_0041528a:
    bVar11 = *pbVar9 < *pbVar7;
    if ((*pbVar9 == *pbVar7) &&
       ((uVar4 == 0xfffffffd ||
        ((bVar11 = pbVar9[1] < pbVar7[1], pbVar9[1] == pbVar7[1] &&
         ((uVar4 == 0xfffffffe ||
          ((bVar11 = pbVar9[2] < pbVar7[2], pbVar9[2] == pbVar7[2] &&
           ((uVar4 == 0xffffffff || (bVar11 = pbVar9[3] < pbVar7[3], pbVar9[3] == pbVar7[3])))))))))
        ))) goto LAB_004152be;
    uVar6 = -(uint)bVar11 | 1;
  }
  if (uVar6 == 0) {
    if (*(uint *)(pbVar10 + 0x20) < uVar1) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)(uVar1 < *(uint *)(pbVar10 + 0x20));
    }
  }
  if (-1 < (int)uVar6) {
    FUN_00414d80(param_4);
    *param_1 = pbVar10;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_004151c5:
  puVar5 = (undefined4 *)FUN_00414e70(this,&param_3,local_20,(undefined4 *)pbVar8,pbVar9,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


void FUN_00415330(undefined4 *param_1,char param_2,int *param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if (0x5d1745b < DAT_0065b44c) {
    FUN_00414e10(param_5);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  DAT_0065b44c = DAT_0065b44c + 1;
  param_5[1] = (int)param_3;
  if (param_3 == DAT_0065b448) {
    DAT_0065b448[1] = (int)param_5;
    *DAT_0065b448 = (int)param_5;
    DAT_0065b448[2] = (int)param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int)param_5;
    if (param_3 == (int *)DAT_0065b448[2]) {
      DAT_0065b448[2] = (int)param_5;
    }
  }
  else {
    *param_3 = (int)param_5;
    if (param_3 == (int *)*DAT_0065b448) {
      *DAT_0065b448 = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar7 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(DAT_0065b448[1] + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar8 = (int *)piVar7[1];
    piVar6 = piVar7 + 1;
    piVar9 = piVar8 + 1;
    iVar4 = *(int *)piVar8[1];
    if (piVar8 == (int *)iVar4) {
      iVar4 = ((int *)piVar8[1])[2];
      if (*(char *)(iVar4 + 0xc) != '\0') {
        piVar2 = (int *)piVar8[2];
        if (piVar7 == piVar2) {
          piVar8[2] = *piVar2;
          if (*(char *)(*piVar2 + 0xd) == '\0') {
            *(int **)(*piVar2 + 4) = piVar8;
          }
          piVar2[1] = *piVar9;
          if (piVar8 == (int *)DAT_0065b448[1]) {
            DAT_0065b448[1] = (int)piVar2;
            *piVar2 = (int)piVar8;
            *piVar9 = (int)piVar2;
            piVar7 = piVar8;
            piVar8 = piVar2;
            piVar6 = piVar9;
          }
          else {
            piVar7 = (int *)*piVar9;
            if (piVar8 == (int *)*piVar7) {
              *piVar7 = (int)piVar2;
              *piVar2 = (int)piVar8;
              *piVar9 = (int)piVar2;
              piVar7 = piVar8;
              piVar8 = piVar2;
              piVar6 = piVar9;
            }
            else {
              piVar7[2] = (int)piVar2;
              *piVar2 = (int)piVar8;
              *piVar9 = (int)piVar2;
              piVar7 = piVar8;
              piVar8 = piVar2;
              piVar6 = piVar9;
            }
          }
        }
        *(undefined1 *)(piVar8 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
        piVar6 = *(int **)(*piVar6 + 4);
        piVar9 = (int *)*piVar6;
        *piVar6 = piVar9[2];
        if (*(char *)(piVar9[2] + 0xd) == '\0') {
          *(int **)(piVar9[2] + 4) = piVar6;
        }
        piVar9[1] = piVar6[1];
        if (piVar6 == (int *)DAT_0065b448[1]) {
          DAT_0065b448[1] = (int)piVar9;
          piVar9[2] = (int)piVar6;
        }
        else {
          piVar8 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar8[2]) {
            piVar8[2] = (int)piVar9;
            piVar9[2] = (int)piVar6;
          }
          else {
            *piVar8 = (int)piVar9;
            piVar9[2] = (int)piVar6;
          }
        }
        goto LAB_0041553f;
      }
LAB_00415496:
      *(undefined1 *)(piVar8 + 3) = 1;
      *(undefined1 *)(iVar4 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (*(char *)(iVar4 + 0xc) == '\0') goto LAB_00415496;
      piVar2 = (int *)*piVar8;
      piVar5 = piVar8;
      if (piVar7 == piVar2) {
        *piVar8 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar8;
        }
        piVar2[1] = *piVar9;
        if (piVar8 == (int *)DAT_0065b448[1]) {
          DAT_0065b448[1] = (int)piVar2;
        }
        else {
          puVar3 = (undefined4 *)*piVar9;
          if (piVar8 == (int *)puVar3[2]) {
            puVar3[2] = piVar2;
          }
          else {
            *puVar3 = piVar2;
          }
        }
        piVar2[2] = (int)piVar8;
        *piVar9 = (int)piVar2;
        piVar5 = piVar2;
        piVar7 = piVar8;
        piVar6 = piVar9;
      }
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar6 = *(int **)(*piVar6 + 4);
      piVar9 = (int *)piVar6[2];
      piVar6[2] = *piVar9;
      if (*(char *)(*piVar9 + 0xd) == '\0') {
        *(int **)(*piVar9 + 4) = piVar6;
      }
      piVar9[1] = piVar6[1];
      if (piVar6 == (int *)DAT_0065b448[1]) {
        DAT_0065b448[1] = (int)piVar9;
      }
      else {
        piVar8 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar8) {
          *piVar8 = (int)piVar9;
        }
        else {
          piVar8[2] = (int)piVar9;
        }
      }
      *piVar9 = (int)piVar6;
LAB_0041553f:
      piVar6[1] = (int)piVar9;
    }
    cVar1 = *(char *)(piVar7[1] + 0xc);
  } while( true );
}


void FUN_00415570(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = true;
  piVar4 = (int *)DAT_0065b448[1];
  piVar5 = DAT_0065b448;
  if (*(char *)((int)piVar4 + 0xd) == '\0') {
    do {
      piVar5 = piVar4;
      local_18 = *param_3 < piVar5[4];
      if (*param_3 < piVar5[4]) {
        piVar4 = (int *)*piVar5;
      }
      else {
        piVar4 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar4 + 0xd) == '\0');
  }
  piVar6 = piVar5;
  if (local_18) {
    if (piVar5 == (int *)*DAT_0065b448) {
      puVar3 = (undefined4 *)FUN_00415330(&param_3,'\x01',piVar5,piVar4,param_4);
      *param_1 = *puVar3;
      *(undefined1 *)(param_1 + 1) = 1;
      ExceptionList = local_10;
      return;
    }
    if (*(char *)((int)piVar5 + 0xd) == '\0') {
      piVar6 = (int *)*piVar5;
      if (*(char *)((int)piVar6 + 0xd) == '\0') {
        cVar1 = *(char *)(piVar6[2] + 0xd);
        piVar4 = (int *)piVar6[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(piVar4[2] + 0xd);
          piVar6 = piVar4;
          piVar4 = (int *)piVar4[2];
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0xd);
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
        while ((piVar2 = piVar4, cVar1 == '\0' && (piVar6 == (int *)*piVar2))) {
          cVar1 = *(char *)(piVar2[1] + 0xd);
          piVar4 = (int *)piVar2[1];
          piVar6 = piVar2;
        }
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          piVar6 = piVar2;
        }
      }
    }
    else {
      piVar6 = (int *)piVar5[2];
    }
  }
  if (*param_3 <= piVar6[4]) {
    FUN_00414e10(param_4);
    *param_1 = piVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  puVar3 = (undefined4 *)FUN_00415330(&param_3,local_18,piVar5,param_3,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


undefined * FUN_004156e0(void)

{
  return &DAT_0065c2d0;
}


int __fastcall
FUN_004156f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  puVar1 = (uint *)FUN_004156e0();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,param_2,param_3,uVar3,param_5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


int __cdecl FUN_00415730(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar5 = &stack0x0000000c;
  uVar4 = 0;
  uVar3 = 0xffffffff;
  puVar1 = (uint *)FUN_004156e0();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 1,puVar1[1],param_1,uVar3,param_2,uVar4,puVar5);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}


void __fastcall FUN_00415770(int *param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1,DAT_0065500c ^ (uint)&stack0xfffffffc);
    param_1[9] = 0;
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_004157d0(void *this,int param_1,int param_2,void *param_3)

{
  undefined3 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint in_stack_00000020;
  byte *in_stack_ffffff94;
  undefined4 local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b0a8e;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(int *)this = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  *(undefined4 *)((int)this + 0x58) = 0xbf800000;
  *(int *)((int)this + 0x5c) = param_1;
  if (param_2 == 0) {
    FUN_004024e0(&stack0xffffff94,&param_3);
    iVar2 = FUN_004dba70(in_stack_ffffff94);
    piVar3 = (int *)FUN_004da1b0((undefined *)local_3c,iVar2);
    local_8 = 3;
    FUN_004175d0((void *)((int)this + 8),piVar3);
    local_8 = 4;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    iVar2 = 0;
    iVar6 = 2;
    do {
      uVar4 = rand();
      uVar4 = uVar4 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      iVar2 = iVar2 + 1 + uVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar2 = iVar2 + 4;
  }
  else {
    uStack_7 = uVar1;
    if ((param_2 != 1) && (param_2 != 2)) {
      FUN_00591070("HARDWARE","Data request type error from hardware.");
      goto LAB_00415938;
    }
    FUN_004024e0(&stack0xffffff94,&param_3);
    iVar2 = FUN_004db9e0(in_stack_ffffff94);
    piVar3 = FUN_004eb9e0(local_3c,iVar2);
    local_8 = 5;
    FUN_004175d0((void *)((int)this + 0x30),piVar3);
    local_8 = 6;
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x10))();
    }
    iVar2 = 0;
    iVar6 = 2;
    do {
      uVar4 = rand();
      uVar4 = uVar4 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      iVar2 = iVar2 + 1 + uVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(float *)((int)this + 0x58) = (float)iVar2;
LAB_00415938:
  if (0xf < in_stack_00000020) {
    pvVar5 = param_3;
    if ((0xfff < in_stack_00000020 + 1) &&
       (pvVar5 = *(void **)((int)param_3 + -4), 0x1f < (uint)((int)param_3 + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00415990(int param_1)

{
  int iVar1;
  HANDLE hObject;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2 != 0) {
    uVar2 = 0;
    do {
      FUN_00591070("HARDWARE","Shutting down interface %d");
      iVar1 = *(int *)(*(int *)(param_1 + 8) + uVar2 * 4);
      hObject = *(HANDLE *)(iVar1 + 0x78);
      if (hObject != (HANDLE)0x0) {
        CloseHandle(hObject);
        *(undefined4 *)(iVar1 + 0x78) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2));
  }
  return;
}


void __fastcall FUN_004159f0(void *param_1)

{
  undefined4 *puVar1;
  byte ***pppbVar2;
  HANDLE hObject;
  uint uVar3;
  byte ****ppppbVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 *puVar8;
  wchar_t *pwVar9;
  byte ***local_4c [4];
  uint local_3c;
  uint local_38;
  WCHAR local_34 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0ac8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar8 = *(undefined4 **)((int)param_1 + 8);
  uVar5 = 0;
  uVar3 = (*(int *)((int)param_1 + 0xc) - (int)puVar8) + 3U >> 2;
  if (*(undefined4 **)((int)param_1 + 0xc) < puVar8) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    do {
      puVar1 = (undefined4 *)*puVar8;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00415da0(puVar1);
        FUN_005adb3f(puVar1);
      }
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar5 != uVar3);
  }
  bVar7 = DAT_0065507c != '\0';
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)param_1 + 8);
  iVar6 = (uint)bVar7 * 2 + 1;
  do {
    if (iVar6 < 10) {
      pwVar9 = L"COM%d";
    }
    else {
      pwVar9 = L"\\\\.\\COM%d";
    }
    wsprintfW(local_34,pwVar9);
    puVar8 = (undefined4 *)0xc0000000;
    hObject = CreateFileW(local_34,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      FUN_00591070("HARDWARE","USB Serial TTY interface found: %S");
      FUN_00591e00((undefined1 *)local_4c,&DAT_005e3ea8);
      pppbVar2 = local_4c[0];
      local_8 = 0;
      ppppbVar4 = local_4c;
      if (0xf < local_38) {
        ppppbVar4 = (byte ****)local_4c[0];
      }
      uVar3 = FUN_004031f0((byte *)ppppbVar4,local_3c,&DAT_005e3eac,4);
      if ((char)uVar3 == '\0') {
        FUN_00591e00(&stack0xffffff84,&DAT_005e3ea8);
        FUN_00417380(param_1,puVar8);
      }
      else {
        FUN_00591070("HARDWARE","Ignoring COM1");
      }
      CloseHandle(hObject);
      local_8 = 0xffffffff;
      if (0xf < local_38) {
        ppppbVar4 = (byte ****)pppbVar2;
        if ((0xfff < local_38 + 1) &&
           (ppppbVar4 = (byte ****)pppbVar2[-1],
           (byte *)0x1f < (byte *)((int)pppbVar2 + (-4 - (int)ppppbVar4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppbVar4);
      }
    }
    iVar6 = iVar6 + 1;
    if (100 < iVar6) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}


void __thiscall FUN_00415bc0(void *this,int param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  LPCSTR lpFileName;
  HANDLE hFile;
  DWORD DVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  _DCB local_28;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  uVar6 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  if (uVar6 != 0) {
    do {
      iVar7 = *(int *)(*(int *)((int)this + 8) + uVar3 * 4);
      if (*(int *)(iVar7 + 0x74) == param_1) {
        if (iVar7 != 0) goto LAB_00415c28;
        goto LAB_00415c03;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  iVar7 = 0;
LAB_00415c03:
  bVar2 = cc_assert_script_compatible("Hardware port doesn\'t exist.");
  if (!bVar2) {
    cocos2d::log("Assert failed: %s","Hardware port doesn\'t exist.");
  }
LAB_00415c28:
  lpFileName = (LPCSTR)(iVar7 + 0x18);
  if (0xf < *(uint *)(iVar7 + 0x2c)) {
    lpFileName = *(LPCSTR *)lpFileName;
  }
  hFile = CreateFileA(lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  *(HANDLE *)(iVar7 + 0x78) = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    if (DVar4 == 2) {
      *(undefined4 *)(iVar7 + 100) = 0;
      FUN_00591070("HARDWARE","Unable to open port \'%s\'");
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    local_28.EofChar = '\0';
    local_28.EvtChar = '\0';
    local_28.wReserved1 = 0;
    local_28.DCBlength = 0;
    local_28.BaudRate = 0;
    local_28.fDummy2 = 0;
    local_28.fAbortOnError = 0;
    local_28.fRtsControl = 0;
    local_28.fNull = 0;
    local_28.fErrorChar = 0;
    local_28.fInX = 0;
    local_28.fOutX = 0;
    local_28.fTXContinueOnXoff = 0;
    local_28.fDsrSensitivity = 0;
    local_28.fDtrControl = 0;
    local_28.fOutxDsrFlow = 0;
    local_28.fOutxCtsFlow = 0;
    local_28.fParity = 0;
    local_28.fBinary = 0;
    local_28.wReserved = 0;
    local_28.XonLim = 0;
    local_28.XoffLim = 0;
    local_28.ByteSize = '\0';
    local_28.Parity = '\0';
    local_28.StopBits = '\0';
    local_28.XonChar = '\0';
    local_28.XoffChar = '\0';
    local_28.ErrorChar = '\0';
    BVar5 = GetCommState(hFile,&local_28);
    uVar1 = local_28._16_8_;
    if (BVar5 == 0) {
      *(undefined4 *)(iVar7 + 100) = 0;
      FUN_00591070("HARDWARE","Could not get serial parameters for port \'%s\'");
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    local_28.BaudRate = 0x2580;
    local_28._8_4_ = local_28._8_4_ & 0xffffffdf | 0x10;
    local_28.ByteSize = '\b';
    local_28.Parity = '\0';
    local_28._21_3_ = SUB83(uVar1,5);
    local_28.StopBits = '\0';
    BVar5 = SetCommState(*(HANDLE *)(iVar7 + 0x78),&local_28);
    if (BVar5 == 0) {
      *(undefined4 *)(iVar7 + 100) = 0;
      FUN_00591070("HARDWARE","Could not set serial parameters for port \'%s\'");
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    PurgeComm(*(HANDLE *)(iVar7 + 0x78),0xc);
  }
  FUN_00591070("HARDWARE","Initialised port \'%s\' with ID %d at speed \'%d\'");
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00415da0(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = HardwareInterface::vftable;
  if ((HANDLE)param_1[0x1e] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  pvVar1 = (void *)param_1[0x1a];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[0x1c] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00415f63;
    FUN_005adb3f(pvVar2);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  if ((undefined4 *)param_1[0x15] != (undefined4 *)0x0) {
    FUN_00417c10((undefined4 *)param_1[0x15],(undefined4 *)param_1[0x16]);
    pvVar1 = (void *)param_1[0x15];
    pvVar2 = pvVar1;
    if ((0xfff < (uint)(((param_1[0x17] - (int)pvVar1) / 0x38) * 0x38)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00415f63;
    FUN_005adb3f(pvVar2);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  FUN_004025a0(param_1 + 0x12);
  if (0xf < (uint)param_1[0x11]) {
    pvVar1 = (void *)param_1[0xc];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x11] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00415f63;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0xf < (uint)param_1[0xb]) {
    pvVar1 = (void *)param_1[6];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0xb] + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00415f63;
    FUN_005adb3f(pvVar2);
  }
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = Interface::vftable;
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[5] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00415f63:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}


void FUN_00415f70(void)

{
  undefined1 *puVar1;
  
  if (DAT_0065b3a4 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)FUN_005adb0f(0x14);
    DAT_0065b3a4 = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
  }
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __cdecl FUN_00415fc0(int param_1,undefined4 param_2)

{
  char cVar1;
  uint *puVar2;
  BOOL BVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  DWORD DStack_4114;
  char acStack_4110 [256];
  undefined1 local_4010 [16388];
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&DStack_4114;
  if (*(int *)(param_1 + 0x74) != -1) {
    puVar8 = &stack0x0000000c;
    uVar7 = 0;
    puVar5 = local_4010;
    uVar6 = 0xffffffff;
    puVar2 = (uint *)FUN_004156e0();
    __stdio_common_vsprintf(*puVar2 | 1,puVar2[1],puVar5,uVar6,param_2,uVar7,puVar8);
    if (DAT_0065b3d2 == '\0') {
      FUN_00415730(acStack_4110,&DAT_005e3f98);
    }
    else {
      FUN_00415730(acStack_4110,"%s%c%c");
    }
    pcVar4 = acStack_4110;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    BVar3 = WriteFile(*(HANDLE *)(param_1 + 0x78),acStack_4110,(int)pcVar4 - (int)(acStack_4110 + 1)
                      ,&DStack_4114,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      ClearCommError(*(HANDLE *)(param_1 + 0x78),(LPDWORD)(param_1 + 0x88),
                     (LPCOMSTAT)(param_1 + 0x7c));
      __security_check_cookie(local_c ^ (uint)&DStack_4114);
      return;
    }
    FUN_00591070("HARDWARE","Sent \'%s\'");
  }
  __security_check_cookie(local_c ^ (uint)&DStack_4114);
  return;
}


void __fastcall FUN_004160e0(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  float in_XMM1_Da;
  byte *in_stack_fffffedc;
  int local_fc [9];
  int *local_d8;
  int local_d4 [9];
  int *local_b0;
  void *local_ac;
  void *local_a8;
  void *local_a4;
  byte *local_a0;
  int local_9c;
  int *local_94;
  uint local_90;
  undefined4 *local_8c [3];
  int local_80;
  char local_79;
  int *local_78 [10];
  int *local_50;
  int local_4c [2];
  int local_44 [9];
  int *local_20;
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0b85;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar1 = (float)param_1[0x18];
  param_1[0x18] = (int)(in_XMM1_Da + fVar1);
  if (5.0 < in_XMM1_Da + fVar1) {
    param_1[0x18] = 0;
    (**(code **)(*param_1 + 4))();
  }
  piVar12 = (int *)param_1[0x13];
  piVar11 = (int *)param_1[0x12];
  local_90 = 0;
  iVar7 = (int)piVar12 - (int)piVar11 >> 0x1f;
  if (((int)piVar12 - (int)piVar11) / 0x18 + iVar7 != iVar7) {
    local_80 = 0;
    do {
      FUN_00591070("HARDWARE","Port %d: received \'%s\'");
      FUN_004024e0(&stack0xfffffedc,(undefined4 *)(param_1[0x12] + local_80));
      FUN_00592d70(&local_a0,'=',(undefined4 *)in_stack_fffffedc);
      local_8 = 0;
      iVar7 = local_9c - (int)local_a0 >> 0x1f;
      iVar10 = (local_9c - (int)local_a0) / 0x18 + iVar7;
      if ((uint)(iVar10 - iVar7) < 2) {
        if (iVar10 == iVar7) {
          FUN_00591070("HARDWARE","Got null data.");
        }
        else {
          pbVar9 = local_a0;
          if (0xf < *(uint *)(local_a0 + 0x14)) {
            pbVar9 = *(byte **)local_a0;
          }
          uVar5 = FUN_004031f0(pbVar9,*(uint *)(local_a0 + 0x10),&DAT_005e4198,3);
          if ((char)uVar5 != '\0') {
            param_1[0x19] = 3;
            FUN_00591070("HARDWARE","Port %d: entered ACTIVE state");
            FUN_00416f10(param_1);
            FUN_004025a0((int *)&local_a0);
            goto LAB_0041683f;
          }
          FUN_00591070("HARDWARE","command = \'%s\'");
        }
      }
      else {
        FUN_004024e0(&stack0xfffffedc,(undefined4 *)(local_a0 + 0x18));
        FUN_00592d70(local_8c,',',(undefined4 *)in_stack_fffffedc);
        pbVar3 = local_a0;
        local_8._0_1_ = 1;
        pbVar9 = local_a0;
        if (0xf < *(uint *)(local_a0 + 0x14)) {
          pbVar9 = *(byte **)local_a0;
        }
        uVar5 = FUN_004031f0(pbVar9,*(uint *)(local_a0 + 0x10),&DAT_005e4058,3);
        if ((char)uVar5 == '\0') {
          pbVar9 = pbVar3;
          if (0xf < *(uint *)(pbVar3 + 0x14)) {
            pbVar9 = *(byte **)pbVar3;
          }
          uVar5 = FUN_004031f0(pbVar9,*(uint *)(pbVar3 + 0x10),&DAT_005e4090,3);
          if ((char)uVar5 == '\0') {
            pbVar9 = pbVar3;
            if (0xf < *(uint *)(pbVar3 + 0x14)) {
              pbVar9 = *(byte **)pbVar3;
            }
            uVar5 = FUN_004031f0(pbVar9,*(uint *)(pbVar3 + 0x10),&DAT_005e40f8,3);
            if ((char)uVar5 == '\0') {
              pbVar9 = pbVar3;
              if (0xf < *(uint *)(pbVar3 + 0x14)) {
                pbVar9 = *(byte **)pbVar3;
              }
              uVar5 = FUN_004031f0(pbVar9,*(uint *)(pbVar3 + 0x10),&DAT_005e4130,3);
              if ((char)uVar5 == '\0') {
                pbVar9 = pbVar3;
                if (0xf < *(uint *)(pbVar3 + 0x14)) {
                  pbVar9 = *(byte **)pbVar3;
                }
                uVar5 = FUN_004031f0(pbVar9,*(uint *)(pbVar3 + 0x10),&DAT_005e4164,3);
                if ((char)uVar5 != '\0') {
                  FUN_00591070("HARDWARE","HARDWARE DEBUG [port %d]: \'%s\'");
                }
                goto LAB_00416780;
              }
              pvVar6 = (void *)FUN_005adb0f(0x68);
              local_8._0_1_ = 0x11;
              local_ac = pvVar6;
              FUN_004024e0(&stack0xfffffedc,local_8c[0]);
              pcVar8 = (char *)(local_8c[0] + 6);
              if (0xf < (uint)local_8c[0][0xb]) {
                pcVar8 = *(char **)pcVar8;
              }
              iVar10 = 2;
              iVar7 = atoi(pcVar8);
              local_78[0] = (int *)FUN_004157d0(pvVar6,iVar7,iVar10,in_stack_fffffedc);
              local_8 = CONCAT31(local_8._1_3_,1);
              puVar2 = (undefined4 *)param_1[0x1b];
              if ((undefined4 *)param_1[0x1c] == puVar2) {
                FUN_00414080(param_1 + 0x1a,puVar2,local_78);
              }
              else {
                *puVar2 = local_78[0];
                param_1[0x1b] = param_1[0x1b] + 4;
              }
              pcVar8 = (char *)(local_8c[0] + 6);
              if (0xf < (uint)local_8c[0][0xb]) {
                pcVar8 = *(char **)pcVar8;
              }
              atoi(pcVar8);
              in_stack_fffffedc = (byte *)0x41672c;
              FUN_00591070("HARDWARE","Added Float Data Request on port %d (\'%s\', %d)");
              FUN_004025a0((int *)local_8c);
            }
            else {
              pvVar6 = (void *)FUN_005adb0f(0x68);
              local_8._0_1_ = 0x10;
              local_a8 = pvVar6;
              FUN_004024e0(&stack0xfffffedc,local_8c[0]);
              pcVar8 = (char *)(local_8c[0] + 6);
              if (0xf < (uint)local_8c[0][0xb]) {
                pcVar8 = *(char **)pcVar8;
              }
              iVar10 = 1;
              iVar7 = atoi(pcVar8);
              local_78[0] = (int *)FUN_004157d0(pvVar6,iVar7,iVar10,in_stack_fffffedc);
              local_8 = CONCAT31(local_8._1_3_,1);
              puVar2 = (undefined4 *)param_1[0x1b];
              if ((undefined4 *)param_1[0x1c] == puVar2) {
                FUN_00414080(param_1 + 0x1a,puVar2,local_78);
              }
              else {
                *puVar2 = local_78[0];
                param_1[0x1b] = param_1[0x1b] + 4;
              }
              pcVar8 = (char *)(local_8c[0] + 6);
              if (0xf < (uint)local_8c[0][0xb]) {
                pcVar8 = *(char **)pcVar8;
              }
              atoi(pcVar8);
              in_stack_fffffedc = (byte *)0x416654;
              FUN_00591070("HARDWARE","Added Integer Data Request on port %d (\'%s\', %d)");
              FUN_004025a0((int *)local_8c);
            }
          }
          else {
            FUN_004024e0(&stack0xfffffedc,local_8c[0]);
            iVar7 = FUN_004eb4d0(in_stack_fffffedc);
            FUN_004ea270(local_fc,iVar7);
            local_50 = (int *)0x0;
            local_8._0_1_ = 4;
            if (local_d8 != (int *)0x0) {
              local_50 = FUN_00417fe0(local_fc);
            }
            piVar12 = local_50;
            local_8._0_1_ = 5;
            if (local_d8 != (int *)0x0) {
              (**(code **)(*local_d8 + 0x10))();
              local_d8 = (int *)0x0;
            }
            local_79 = piVar12 == (int *)0x0;
            local_8._0_1_ = 6;
            if ((piVar12 == (int *)0x0) &&
               (bVar4 = cc_assert_script_compatible
                                  ("Unknown command function attempted from serial device."), !bVar4
               )) {
              cocos2d::log("Assert failed: %s");
            }
            local_78[0] = local_d4;
            local_b0 = (int *)0x0;
            local_8._0_1_ = 7;
            if (local_79 == '\0') {
              local_b0 = (int *)(**(code **)*piVar12)();
            }
            pcVar8 = (char *)(local_8c[0] + 6);
            if (0xf < (uint)local_8c[0][0xb]) {
              pcVar8 = *(char **)pcVar8;
            }
            local_4c[0] = atoi(pcVar8);
            local_78[0] = local_44;
            local_20 = (int *)0x0;
            local_8._0_1_ = 9;
            if (local_b0 != (int *)0x0) {
              local_20 = (int *)(**(code **)*local_b0)();
            }
            local_1c = 0;
            local_8._0_1_ = 10;
            if (local_b0 != (int *)0x0) {
              (**(code **)(*local_b0 + 0x10))();
              local_b0 = (int *)0x0;
            }
            local_8._0_1_ = 0xb;
            local_78[0] = (int *)param_1[0x16];
            if ((int *)param_1[0x17] == local_78[0]) {
              FUN_004178f0(param_1 + 0x15,local_78[0],local_4c);
            }
            else {
              *local_78[0] = local_4c[0];
              local_94 = local_78[0] + 2;
              local_78[0][0xb] = 0;
              local_8._0_1_ = 0xc;
              if (local_20 != (int *)0x0) {
                if (local_20 != local_44) {
                  local_78[0][0xb] = (int)local_20;
                  local_20 = (int *)0x0;
                  local_78[0][0xc] = local_1c;
                  param_1[0x16] = param_1[0x16] + 0x38;
                  goto LAB_00416504;
                }
                iVar7 = (**(code **)(*local_20 + 4))();
                local_94[9] = iVar7;
                local_8._0_1_ = 0xd;
                if (local_20 != (int *)0x0) {
                  (**(code **)(*local_20 + 0x10))();
                  local_20 = (int *)0x0;
                }
              }
              local_78[0][0xc] = local_1c;
              param_1[0x16] = param_1[0x16] + 0x38;
            }
LAB_00416504:
            local_8._0_1_ = 0xe;
            if (local_20 != (int *)0x0) {
              (**(code **)(*local_20 + 0x10))();
            }
            local_8._0_1_ = 6;
            pcVar8 = (char *)(local_8c[0] + 6);
            if (0xf < (uint)local_8c[0][0xb]) {
              pcVar8 = *(char **)pcVar8;
            }
            atoi(pcVar8);
            in_stack_fffffedc = (byte *)0x41655b;
            FUN_00591070("HARDWARE","Added input command on port %d (\'%s\', %d)");
            local_8._0_1_ = 0xf;
            if (local_79 == '\0') {
              (**(code **)(*piVar12 + 0x10))();
              FUN_004025a0((int *)local_8c);
            }
            else {
LAB_00416780:
              FUN_004025a0((int *)local_8c);
            }
          }
        }
        else {
          pvVar6 = (void *)FUN_005adb0f(0x68);
          local_8._0_1_ = 2;
          local_a4 = pvVar6;
          FUN_004024e0(&stack0xfffffedc,local_8c[0]);
          pcVar8 = (char *)(local_8c[0] + 6);
          if (0xf < (uint)local_8c[0][0xb]) {
            pcVar8 = *(char **)pcVar8;
          }
          iVar10 = 0;
          iVar7 = atoi(pcVar8);
          local_78[0] = (int *)FUN_004157d0(pvVar6,iVar7,iVar10,in_stack_fffffedc);
          local_8 = CONCAT31(local_8._1_3_,1);
          puVar2 = (undefined4 *)param_1[0x1b];
          if ((undefined4 *)param_1[0x1c] == puVar2) {
            FUN_00414080(param_1 + 0x1a,puVar2,local_78);
          }
          else {
            *puVar2 = local_78[0];
            param_1[0x1b] = param_1[0x1b] + 4;
          }
          pcVar8 = (char *)(local_8c[0] + 6);
          if (0xf < (uint)local_8c[0][0xb]) {
            pcVar8 = *(char **)pcVar8;
          }
          atoi(pcVar8);
          in_stack_fffffedc = (byte *)0x4162ce;
          FUN_00591070("HARDWARE","Added Boolean Data Request on port %d (\'%s\', %d)");
          FUN_004025a0((int *)local_8c);
        }
      }
      local_8 = 0xffffffff;
      FUN_004025a0((int *)&local_a0);
      piVar12 = (int *)param_1[0x13];
      piVar11 = (int *)param_1[0x12];
      local_90 = local_90 + 1;
      local_80 = local_80 + 0x18;
    } while (local_90 < (uint)(((int)piVar12 - (int)piVar11) / 0x18));
  }
  FUN_004028b0(piVar11,piVar12);
  param_1[0x13] = param_1[0x12];
LAB_0041683f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00416890(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0a40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1 != (int *)(param_1 + 8),DAT_0065500c ^ (uint)&stack0xfffffffc);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_004168f0(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float in_XMM1_Da;
  undefined4 *in_stack_ffffff84;
  byte *local_50;
  int local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0bb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = param_1[0x15];
  uVar3 = 0;
  iVar4 = param_1[0x16] - iVar7 >> 0x1f;
  if ((param_1[0x16] - iVar7) / 0x38 + iVar4 != iVar4) {
    iVar4 = 0;
    do {
      fVar9 = *(float *)(iVar7 + 0x30 + iVar4);
      if ((0.0 < fVar9) &&
         (fVar9 = fVar9 - in_XMM1_Da, *(float *)(iVar7 + 0x30 + iVar4) = fVar9, fVar9 <= 0.0)) {
        *(undefined4 *)(iVar7 + 0x30 + iVar4) = 0;
      }
      iVar7 = param_1[0x15];
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x38;
      local_1c = uVar3;
    } while (uVar3 < (uint)((param_1[0x16] - iVar7) / 0x38));
  }
  piVar8 = (int *)param_1[0x13];
  piVar6 = (int *)param_1[0x12];
  local_18 = 0;
  iVar7 = (int)piVar8 - (int)piVar6 >> 0x1f;
  if (((int)piVar8 - (int)piVar6) / 0x18 + iVar7 != iVar7) {
    local_1c = 0;
    do {
      FUN_004024e0(&stack0xffffff84,(undefined4 *)(local_1c + (int)piVar6));
      FUN_00592d70(&local_50,'=',in_stack_ffffff84);
      pbVar1 = local_50;
      local_8 = 0;
      if (1 < (uint)((local_4c - (int)local_50) / 0x18)) {
        uVar3 = *(uint *)(local_50 + 0x14);
        pbVar5 = local_50;
        if (0xf < uVar3) {
          pbVar5 = *(byte **)local_50;
        }
        uVar2 = FUN_004031f0(pbVar5,*(uint *)(local_50 + 0x10),&DAT_005e41cc,3);
        if ((char)uVar2 == '\0') {
          pbVar5 = pbVar1;
          if (0xf < uVar3) {
            pbVar5 = *(byte **)pbVar1;
          }
          uVar3 = FUN_004031f0(pbVar5,*(uint *)(pbVar1 + 0x10),&DAT_005e4164,3);
          if ((char)uVar3 != '\0') {
            FUN_00591070("HARDWARE","HARDWARE DEBUG [port %d]: \'%s\'");
          }
        }
        else {
          pbVar5 = pbVar1 + 0x18;
          if (0xf < *(uint *)(pbVar1 + 0x2c)) {
            pbVar5 = *(byte **)pbVar5;
          }
          local_20 = atoi((char *)pbVar5);
          FUN_00591070("HARDWARE","Port %d: Executing command %d");
          iVar7 = param_1[0x15];
          local_14 = 0;
          iVar4 = param_1[0x16] - iVar7 >> 0x1f;
          if ((param_1[0x16] - iVar7) / 0x38 + iVar4 != iVar4) {
            iVar4 = 0;
            do {
              if ((*(int *)(iVar7 + iVar4) == local_20) && (*(float *)(iVar7 + 0x30 + iVar4) == 0.0)
                 ) {
                local_24 = *(undefined4 *)(DAT_0065b5cc + 0xd0);
                local_44 = 0;
                local_3c = 0;
                local_34 = 0;
                piVar8 = *(int **)(iVar7 + 0x2c + iVar4);
                if (piVar8 == (int *)0x0) {
                    // WARNING: Subroutine does not return
                  std::_Xbad_function_call();
                }
                (**(code **)(*piVar8 + 8))();
                *(undefined4 *)(iVar4 + 0x30 + param_1[0x15]) = 0x3f000000;
              }
              iVar7 = param_1[0x15];
              iVar4 = iVar4 + 0x38;
              local_14 = local_14 + 1;
            } while (local_14 < (uint)((param_1[0x16] - iVar7) / 0x38));
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_004025a0((int *)&local_50);
      piVar8 = (int *)param_1[0x13];
      piVar6 = (int *)param_1[0x12];
      local_18 = local_18 + 1;
      local_1c = local_1c + 0x18;
    } while (local_18 < (uint)(((int)piVar8 - (int)piVar6) / 0x18));
  }
  FUN_004028b0(piVar6,piVar8);
  param_1[0x13] = param_1[0x12];
  FUN_00416be0(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_00416be0(int *param_1)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float in_XMM1_Da;
  void *in_stack_ffffffb4;
  uint uStack_10;
  code *pcVar6;
  
  iVar7 = param_1[0x1a];
  uStack_10 = 0;
  if (param_1[0x1b] - iVar7 >> 2 != 0) {
    do {
      pcVar6 = rand_exref;
      piVar2 = *(int **)(uStack_10 * 4 + iVar7);
      bVar3 = false;
      fVar1 = (float)piVar2[0x16];
      piVar2[0x16] = (int)(fVar1 - in_XMM1_Da);
      if (fVar1 - in_XMM1_Da <= 0.0) {
        bVar3 = true;
        if ((*piVar2 == 1) || (*piVar2 == 2)) {
          iVar7 = 0;
          iVar8 = 2;
          do {
            uVar5 = (*pcVar6)();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            iVar7 = iVar7 + uVar5 + 1;
            iVar8 = iVar8 + -1;
            pcVar6 = rand_exref;
          } while (iVar8 != 0);
          iVar8 = *(int *)(uStack_10 * 4 + param_1[0x1a]);
        }
        else {
          iVar7 = 0;
          iVar8 = 2;
          do {
            uVar5 = (*pcVar6)();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            iVar7 = iVar7 + uVar5 + 1;
            iVar8 = iVar8 + -1;
            pcVar6 = rand_exref;
          } while (iVar8 != 0);
          iVar7 = iVar7 + 4;
          iVar8 = *(int *)(uStack_10 * 4 + param_1[0x1a]);
        }
        *(float *)(iVar8 + 0x58) = (float)iVar7;
      }
      iVar8 = uStack_10 * 4;
      piVar2 = *(int **)(iVar8 + param_1[0x1a]);
      iVar7 = *piVar2;
      if (iVar7 == 1) {
        if ((int *)piVar2[0x15] == (int *)0x0) {
LAB_00416eff:
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        fVar9 = (float10)(**(code **)(*(int *)piVar2[0x15] + 8))();
        if (((double)fVar9 != *(double *)(*(int *)(iVar8 + param_1[0x1a]) + 0x60)) || (bVar3)) {
          *(double *)(*(int *)(iVar8 + param_1[0x1a]) + 0x60) = (double)fVar9;
          FUN_00591070("HARDWARE","Sending identifier %d, state = %f, as %f");
          in_stack_ffffffb4 = (void *)0x416d78;
          (**(code **)(*param_1 + 4))();
        }
      }
      else if (iVar7 == 2) {
        if ((int *)piVar2[0x15] == (int *)0x0) goto LAB_00416eff;
        fVar9 = (float10)(**(code **)(*(int *)piVar2[0x15] + 8))();
        if (((double)fVar9 != *(double *)(*(int *)(iVar8 + param_1[0x1a]) + 0x60)) || (bVar3)) {
          *(double *)(*(int *)(iVar8 + param_1[0x1a]) + 0x60) = (double)fVar9;
          FUN_00591070("HARDWARE","Sending identifier %d, state = %f, as %f");
          in_stack_ffffffb4 = (void *)0x416e3f;
          (**(code **)(*param_1 + 4))();
        }
      }
      else if (iVar7 == 0) {
        in_stack_ffffffb4 = (void *)((uint)in_stack_ffffffb4 & 0xffffff00);
        FUN_00402690(&stack0xffffffb4,&PTR_005ce008,0);
        bVar4 = FUN_00417780((void *)(*(int *)(param_1[0x1a] + iVar8) + 8),
                             *(undefined4 *)(DAT_0065b5cc + 0xd0),0,in_stack_ffffffb4);
        if (((double)bVar4 != *(double *)(*(int *)(iVar8 + param_1[0x1a]) + 0x60)) || (bVar3)) {
          *(double *)(*(int *)(iVar8 + param_1[0x1a]) + 0x60) = (double)bVar4;
          (**(code **)(*param_1 + 4))();
        }
      }
      uStack_10 = uStack_10 + 1;
      iVar7 = param_1[0x1a];
    } while (uStack_10 < (uint)(param_1[0x1b] - iVar7 >> 2));
  }
  return;
}


void __fastcall FUN_00416f10(int *param_1)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  char *in_stack_ffffffc4;
  
  uVar5 = 0;
  iVar4 = param_1[0x1a];
  if (param_1[0x1b] - iVar4 >> 2 != 0) {
    do {
      iVar1 = uVar5 * 4;
      piVar2 = *(int **)(iVar1 + iVar4);
      iVar4 = *piVar2;
      if (iVar4 == 1) {
        if ((int *)piVar2[0x15] == (int *)0x0) {
LAB_004170c9:
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        fVar6 = (float10)(**(code **)(*(int *)piVar2[0x15] + 8))();
        *(double *)(*(int *)(iVar1 + param_1[0x1a]) + 0x60) = (double)fVar6;
        in_stack_ffffffc4 = "%d=%.0f";
        (**(code **)(*param_1 + 4))(param_1);
      }
      else if (iVar4 == 2) {
        if ((int *)piVar2[0x15] == (int *)0x0) goto LAB_004170c9;
        fVar6 = (float10)(**(code **)(*(int *)piVar2[0x15] + 8))();
        *(double *)(*(int *)(iVar1 + param_1[0x1a]) + 0x60) = (double)fVar6;
        in_stack_ffffffc4 = "%d=%.0f";
        (**(code **)(*param_1 + 4))(param_1);
      }
      else if (iVar4 == 0) {
        in_stack_ffffffc4 = (char *)((uint)in_stack_ffffffc4 & 0xffffff00);
        FUN_00402690(&stack0xffffffc4,&PTR_005ce008,0);
        bVar3 = FUN_00417780((void *)(*(int *)(param_1[0x1a] + iVar1) + 8),
                             *(undefined4 *)(DAT_0065b5cc + 0xd0),0,in_stack_ffffffc4);
        *(double *)(*(int *)(iVar1 + param_1[0x1a]) + 0x60) = (double)bVar3;
        (**(code **)(*param_1 + 4))();
      }
      uVar5 = uVar5 + 1;
      iVar4 = param_1[0x1a];
    } while (uVar5 < (uint)(param_1[0x1b] - iVar4 >> 2));
  }
  return;
}


void __fastcall FUN_004170d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  BOOL BVar3;
  char *_Str;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint local_18;
  int *local_14;
  int *local_10;
  int *local_c [2];
  
  if (param_1[0x19] != 0) {
    ClearCommError((HANDLE)param_1[0x1e],(LPDWORD)(param_1 + 0x22),(LPCOMSTAT)(param_1 + 0x1f));
    iVar5 = param_1[0x20];
    if ((iVar5 != 0) && (FUN_00591070("HARDWARE","%lu bytes available from COM port."), 0 < iVar5))
    {
      ClearCommError((HANDLE)param_1[0x1e],(LPDWORD)(param_1 + 0x22),(LPCOMSTAT)(param_1 + 0x1f));
      piVar6 = (int *)param_1[0x20];
      piVar2 = local_c[0];
      if ((piVar6 != (int *)0x0) && (piVar2 = piVar6, (int *)0x100 < piVar6)) {
        piVar2 = (int *)0x100;
      }
      BVar3 = ReadFile((HANDLE)param_1[0x1e],&lpBuffer_0065c318,(DWORD)piVar2,(LPDWORD)&local_14,
                       (LPOVERLAPPED)0x0);
      piVar6 = local_14;
      if (BVar3 == 0) {
        local_14 = (int *)0xffffffff;
      }
      else {
        local_c[0] = local_14;
        if (local_14 != (int *)0xffffffff) {
          if ((int *)0xff < local_14) {
                    // WARNING: Subroutine does not return
            ___report_rangecheckfailure();
          }
          *(undefined1 *)((int)&lpBuffer_0065c318 + (int)local_14) = 0;
          FUN_00591070("HARDWARE","getInput(): got %d chars from port %d (\'%s\')");
          local_10 = (int *)0x0;
          if (0 < (int)piVar6) {
            do {
              piVar2 = local_10;
              cVar1 = *(char *)((int)&lpBuffer_0065c318 + (int)local_10);
              if (cVar1 == '\n') {
                piVar2 = (int *)param_1[0x13];
                piVar6 = param_1 + 0xc;
                if ((int *)param_1[0x14] == piVar2) {
                  FUN_00403840(param_1 + 0x12,piVar2,piVar6);
                }
                else {
                  FUN_004024e0(piVar2,piVar6);
                  param_1[0x13] = param_1[0x13] + 0x18;
                }
                param_1[0x10] = 0;
                if (0xf < (uint)param_1[0x11]) {
                  piVar6 = (int *)*piVar6;
                }
                *(undefined1 *)piVar6 = 0;
                piVar2 = local_10;
                piVar6 = local_c[0];
              }
              else if (cVar1 != '\r') {
                FUN_004034f0(param_1 + 0xc,cVar1);
              }
              local_10 = (int *)((int)piVar2 + 1);
            } while ((int)local_10 < (int)piVar6);
          }
          goto LAB_004171a5;
        }
      }
      FUN_00591070("HARDWARE","Unable to find data from port %d");
    }
  }
LAB_004171a5:
  iVar5 = param_1[0x19];
  if (iVar5 != 1) {
    if (iVar5 != 2) {
      if (iVar5 == 3) {
        FUN_004168f0(param_1);
      }
      return;
    }
    FUN_004160e0(param_1);
    return;
  }
  local_10 = (int *)param_1[0x13];
  local_c[0] = param_1 + 0x12;
  piVar6 = (int *)*local_c[0];
  local_18 = 0;
  iVar5 = (int)local_10 - (int)piVar6 >> 0x1f;
  if (((int)local_10 - (int)piVar6) / 0x18 + iVar5 != iVar5) {
    iVar5 = 0;
    do {
      _Str = (char *)(iVar5 + (int)piVar6);
      if (0xf < *(uint *)(iVar5 + 0x14 + (int)piVar6)) {
        _Str = *(char **)_Str;
      }
      iVar4 = atoi(_Str);
      if (iVar4 == 0x1c3) {
        param_1[0x19] = 2;
        FUN_00591070("HARDWARE","Port %d: entered SYNC state");
        (**(code **)(*param_1 + 4))(param_1,&DAT_005e1d38,0x1c4);
        FUN_00417680(param_1 + 0x12,local_c,(int *)(param_1[0x12] + local_18 * 0x18));
        return;
      }
      local_10 = (int *)param_1[0x13];
      piVar6 = (int *)param_1[0x12];
      iVar5 = iVar5 + 0x18;
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(((int)local_10 - (int)piVar6) / 0x18));
  }
  piVar2 = local_c[0];
  FUN_004028b0(piVar6,local_10);
  piVar2[1] = *piVar2;
  return;
}


void __thiscall FUN_00417380(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_4c [5];
  uint local_38;
  undefined1 *local_34;
  undefined4 *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c12;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_34 = this;
  FUN_00402690(local_2c,&PTR_005ce008,0);
  local_8._0_1_ = 1;
  ppuVar4 = &param_1;
  if (0xf < in_stack_00000018) {
    ppuVar4 = (undefined4 **)param_1;
  }
  FUN_00403640(local_2c,ppuVar4,in_stack_00000014);
  puVar5 = (undefined4 *)FUN_005adb0f(0x8c);
  local_8._0_1_ = 2;
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 8);
  local_30 = puVar5;
  FUN_004024e0(local_4c,local_2c);
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  local_8._0_1_ = 4;
  *puVar5 = HardwareInterface::vftable;
  FUN_004024e0(puVar5 + 6,local_4c);
  puVar5[0x10] = 0;
  puVar5[0x11] = 0xf;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 1;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = iVar1 - iVar2 >> 2;
  local_8._0_1_ = 2;
  if (0xf < local_38) {
    pvVar6 = local_4c[0];
    if (0xfff < local_38 + 1) {
      pvVar6 = *(void **)((int)local_4c[0] + -4);
      if (0x1f < (uint)((int)local_4c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar3 = *(undefined4 **)((int)this + 0xc);
  if (*(undefined4 **)((int)this + 0x10) == puVar3) {
    local_30 = puVar5;
    FUN_00414080((void *)((int)this + 8),puVar3,&local_30);
  }
  else {
    *puVar3 = puVar5;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 4;
    local_30 = puVar5;
  }
  *local_34 = 1;
  *(undefined4 **)(local_34 + 4) = local_30;
  if (0xf < local_18) {
    pvVar6 = local_2c[0];
    if (0xfff < local_18 + 1) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < in_stack_00000018) {
    puVar5 = param_1;
    if (0xfff < in_stack_00000018 + 1) {
      puVar5 = (undefined4 *)param_1[-1];
      if (0x1f < (uint)((int)param_1 + (-4 - (int)puVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(puVar5);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


bool __fastcall FUN_004175c0(int param_1)

{
  return *(int *)(param_1 + 0x24) != 0;
}


int * __thiscall FUN_004175d0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    local_8 = 0;
    piVar1 = *(int **)((int)this + 0x24);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1 != this,DAT_0065500c ^ (uint)&stack0xfffffffc);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    local_8 = 0xffffffff;
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      if (piVar1 == param_1) {
        uVar2 = (**(code **)(*piVar1 + 4))(this);
        *(undefined4 *)((int)this + 0x24) = uVar2;
        local_8 = 1;
        piVar1 = (int *)param_1[9];
        if (piVar1 == (int *)0x0) {
          ExceptionList = local_10;
          return this;
        }
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
      }
      else {
        *(int **)((int)this + 0x24) = piVar1;
      }
      param_1[9] = 0;
    }
  }
  ExceptionList = local_10;
  return this;
}


void __thiscall FUN_00417680(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  FUN_00414300(param_2 + 6,*(int **)((int)this + 4),param_2);
  iVar1 = *(int *)((int)this + 4);
  if (0xf < *(uint *)(iVar1 + -4)) {
    pvVar2 = *(void **)(iVar1 + -0x18);
    pvVar3 = pvVar2;
    if ((0xfff < *(uint *)(iVar1 + -4) + 1) &&
       (pvVar3 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0xf;
  *(undefined1 *)(iVar1 + -0x18) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0x18;
  *param_1 = param_2;
  return;
}


void FUN_00417700(undefined4 *param_1,undefined4 *param_2)

{
  FUN_00417c10(param_1,param_2);
  return;
}


void FUN_00417720(void *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  if ((0xfff < (uint)(param_2 * 0x38)) &&
     (pvVar1 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1)))) {
                    // WARNING: Subroutine does not return
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_005adb3f(pvVar1);
  return;
}


void __thiscall FUN_00417770(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x24) = param_1;
  return;
}


undefined1 __thiscall FUN_00417780(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined1 uVar1;
  void *pvVar2;
  uint in_stack_00000020;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  local_8 = 0;
  if (*(int **)((int)this + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  uVar1 = (**(code **)(**(int **)((int)this + 0x24) + 8))
                    (&local_14,&param_2,&param_3,DAT_0065500c ^ (uint)&stack0xfffffffc);
  if (0xf < in_stack_00000020) {
    pvVar2 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar2 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar2);
  }
  ExceptionList = local_10;
  return uVar1;
}


void __fastcall FUN_00417820(int param_1)

{
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (*(int **)(param_1 + 0x24) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004,local_14,local_c,&stack0x00000008);
  return;
}


int __thiscall FUN_00417860(void *this)

{
  uint uVar1;
  void *pvVar2;
  int *in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0ca0;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_8 = 1;
  if (in_stack_00000028 != (int *)0x0) {
    pvVar2 = FUN_00417fe0((int *)&stack0x00000004);
    *(void **)((int)this + 0x24) = pvVar2;
  }
  local_8 = 2;
  if (in_stack_00000028 != (int *)0x0) {
    (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028 != (int *)&stack0x00000004,uVar1);
  }
  ExceptionList = local_10;
  return (int)this;
}


int __thiscall FUN_004178f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined3 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_005b0cd8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar9 = *(int *)this;
  iVar5 = ((int)param_1 - iVar9) / 0x38;
  iVar6 = (*(int *)((int)this + 4) - iVar9) / 0x38;
  if (iVar6 == 0x4924924) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar1 = iVar6 + 1;
  uVar12 = (*(int *)((int)this + 8) - iVar9) / 0x38;
  uVar14 = uVar1;
  if ((uVar12 <= 0x4924924 - (uVar12 >> 1)) && (uVar14 = (uVar12 >> 1) + uVar12, uVar14 < uVar1)) {
    uVar14 = uVar1;
  }
  uVar12 = uVar14 * 0x38;
  if (uVar14 < 0x4924925) {
    if (0xfff < uVar12) goto LAB_004179bb;
    if (uVar12 == 0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = (undefined4 *)FUN_005adb0f(uVar12);
    }
  }
  else {
    uVar12 = 0xffffffff;
LAB_004179bb:
    uVar8 = uVar12 + 0x23;
    if (uVar8 <= uVar12) {
      uVar8 = 0xffffffff;
    }
    iVar9 = FUN_005adb0f(uVar8);
    if (iVar9 == 0) goto LAB_004179de;
    puVar13 = (undefined4 *)(iVar9 + 0x23U & 0xffffffe0);
    puVar13[-1] = iVar9;
  }
  puVar16 = puVar13 + iVar5 * 0xe;
  *puVar16 = *param_2;
  puVar16[0xb] = 0;
  uStack_7 = 0;
  uVar7 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    if (piVar2 == param_2 + 2) {
      uVar10 = (**(code **)(*piVar2 + 4))(puVar16 + 2);
      puVar16[0xb] = uVar10;
      local_8 = 2;
      piVar2 = (int *)param_2[0xb];
      uVar7 = uStack_7;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))(piVar2 != param_2 + 2);
        param_2[0xb] = 0;
        uVar7 = uStack_7;
      }
    }
    else {
      puVar16[0xb] = piVar2;
      param_2[0xb] = 0;
      uVar7 = uStack_7;
    }
  }
  uStack_7 = uVar7;
  local_8 = 0;
  puVar16[0xc] = param_2[0xc];
  puVar3 = *(undefined4 **)((int)this + 4);
  if (param_1 == puVar3) {
    puVar15 = puVar13;
    for (puVar16 = *(undefined4 **)this; local_8 = 3, puVar16 != puVar3; puVar16 = puVar16 + 0xe) {
      *puVar15 = *puVar16;
      puVar15[0xb] = 0;
      local_8 = 4;
      if ((undefined4 *)puVar16[0xb] != (undefined4 *)0x0) {
        uVar10 = (*(code *)**(undefined4 **)puVar16[0xb])(puVar15 + 2);
        puVar15[0xb] = uVar10;
      }
      puVar15[0xc] = puVar16[0xc];
      puVar15 = puVar15 + 0xe;
    }
    FUN_00417c10(puVar15,puVar15);
  }
  else {
    FUN_00417c90(*(undefined4 **)this,param_1,puVar13);
    FUN_00417c90(param_1,*(undefined4 **)((int)this + 4),puVar16 + 0xe);
  }
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    FUN_00417c10(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
    pvVar4 = *(void **)this;
    pvVar11 = pvVar4;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - *(int *)this) / 0x38) * 0x38)) &&
       (pvVar11 = *(void **)((int)pvVar4 + -4), 0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar11)))) {
LAB_004179de:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar11);
  }
  *(undefined4 **)this = puVar13;
  *(undefined4 **)((int)this + 4) = puVar13 + uVar1 * 0xe;
  *(undefined4 **)((int)this + 8) = puVar13 + uVar14 * 0xe;
  ExceptionList = local_10;
  return *(int *)this + iVar5 * 0x38;
}


void __fastcall FUN_00417c10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0980;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != param_2) {
    puVar4 = param_1 + 0xb;
    do {
      local_8 = 0;
      piVar2 = (int *)*puVar4;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))(piVar2 != puVar4 + -9,uVar3);
        *puVar4 = 0;
      }
      puVar1 = puVar4 + 3;
      puVar4 = puVar4 + 0xe;
    } while (puVar1 != param_2);
  }
  ExceptionList = local_10;
  return;
}


undefined4 * FUN_00417c90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b0d10;
  local_10 = ExceptionList;
  uVar3 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_7 = 0;
  if (param_1 != param_2) {
    puVar5 = param_1 + 0xb;
    do {
      *param_3 = puVar5[-0xb];
      param_3[0xb] = 0;
      local_8 = 1;
      piVar2 = (int *)*puVar5;
      if (piVar2 != (int *)0x0) {
        if (piVar2 == puVar5 + -9) {
          uVar4 = (**(code **)(*piVar2 + 4))(param_3 + 2,uVar3);
          param_3[0xb] = uVar4;
          local_8 = 2;
          piVar2 = (int *)*puVar5;
          if (piVar2 == (int *)0x0) goto LAB_00417d28;
          (**(code **)(*piVar2 + 0x10))(piVar2 != puVar5 + -9);
        }
        else {
          param_3[0xb] = piVar2;
        }
        *puVar5 = 0;
      }
LAB_00417d28:
      param_3[0xc] = puVar5[1];
      param_3 = param_3 + 0xe;
      puVar1 = puVar5 + 3;
      puVar5 = puVar5 + 0xe;
    } while (puVar1 != param_2);
  }
  local_8 = 0;
  FUN_00417c10(param_3,param_3);
  ExceptionList = local_10;
  return param_3;
}


void __thiscall FUN_00417d70(void *this,char param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005af9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar1 = *(int **)((int)this + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1 != (int *)((int)this + 8),DAT_0065500c ^ (uint)&stack0xfffffffc);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  if (param_1 != '\0') {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return;
}


int __fastcall FUN_00417de0(int param_1)

{
  return param_1 + 8;
}


TypeDescriptor * FUN_00417df0(void)

{
  return &std::function<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_00417e00(void *this,void *param_1)

{
  FUN_00417e90(param_1,(int *)((int)this + 8));
  return;
}


void __fastcall FUN_00417e20(int param_1)

{
  FUN_00417f30(param_1 + 8);
  return;
}


void __thiscall
FUN_00417e30(void *this,undefined4 *param_1,double *param_2,double *param_3,double *param_4)

{
  param_4 = (double *)(int)*param_4;
  param_3 = (double *)(int)*param_3;
  param_2 = (double *)(int)*param_2;
  param_1 = (undefined4 *)*param_1;
  if (*(int **)((int)this + 0x2c) == (int *)0x0) {
                    // WARNING: Subroutine does not return
    std::_Xbad_function_call();
  }
  (**(code **)(**(int **)((int)this + 0x2c) + 8))(&param_1,&param_2,&param_3,&param_4);
  return;
}


undefined4 * __thiscall FUN_00417e90(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b0d38;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = std::_Func_impl_no_alloc<>::vftable;
  *(undefined4 *)((int)this + 0x2c) = 0;
  local_8 = 0;
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1) {
      uVar3 = (**(code **)(*piVar1 + 4))((int)this + 8,uVar2);
      *(undefined4 *)((int)this + 0x2c) = uVar3;
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar1 = (int *)param_1[9];
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_10;
        return this;
      }
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    }
    else {
      *(int **)((int)this + 0x2c) = piVar1;
    }
    param_1[9] = 0;
  }
  ExceptionList = local_10;
  return this;
}


undefined4 * __fastcall FUN_00417f30(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0d68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_005adb0f(0x30);
  *puVar1 = std::_Func_impl_no_alloc<>::vftable;
  puVar1[0xb] = 0;
  local_8 = 1;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    uVar2 = (**(code **)**(undefined4 **)(param_1 + 0x24))(puVar1 + 2);
    puVar1[0xb] = uVar2;
  }
  ExceptionList = local_10;
  return puVar1;
}


void __fastcall FUN_00417fd0(undefined4 *param_1)

{
  FUN_00417c10((undefined4 *)*param_1,(undefined4 *)param_1[1]);
  return;
}


void * __fastcall FUN_00417fe0(int *param_1)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b0d90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_005adb0f(0x30);
  local_8 = 0;
  FUN_00417e90(this,param_1);
  ExceptionList = local_10;
  return this;
}
