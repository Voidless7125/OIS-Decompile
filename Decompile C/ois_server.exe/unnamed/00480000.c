#include "../ois_server.exe.h"


void __fastcall FUN_00480020(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 7;
    do {
      if (0xf < *puVar4) {
        pvVar2 = (void *)puVar4[-5];
        pvVar3 = pvVar2;
        if ((0xfff < *puVar4 + 1) &&
           (pvVar3 = *(void **)((int)pvVar2 - 4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      puVar4[-1] = 0;
      *puVar4 = 0xf;
      *(undefined1 *)(puVar4 + -5) = 0;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 9;
    } while (puVar1 != param_2);
  }
  return;
}


void __fastcall FUN_00480090(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 8;
    do {
      if (0xf < *puVar4) {
        pvVar2 = (void *)puVar4[-5];
        pvVar3 = pvVar2;
        if ((0xfff < *puVar4 + 1) &&
           (pvVar3 = *(void **)((int)pvVar2 - 4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      puVar4[-1] = 0;
      *puVar4 = 0xf;
      *(undefined1 *)(puVar4 + -5) = 0;
      puVar1 = puVar4 + 3;
      puVar4 = puVar4 + 0xb;
    } while (puVar1 != param_2);
  }
  return;
}


uint * __fastcall FUN_00480100(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  puVar6 = param_3;
  if (param_1 != param_2) {
    puVar5 = param_1 + 8;
    do {
      *puVar6 = puVar5[-8];
      puVar6[1] = puVar5[-7];
      puVar6[2] = puVar5[-6];
      puVar6[7] = 0;
      *(undefined4 *)((int)param_3 + (-0x2c - (int)param_1) + (int)(puVar5 + 0xb)) = 0;
      uVar2 = puVar5[-4];
      uVar3 = puVar5[-3];
      uVar4 = puVar5[-2];
      puVar6[3] = puVar5[-5];
      puVar6[4] = uVar2;
      puVar6[5] = uVar3;
      puVar6[6] = uVar4;
      *(undefined8 *)(puVar6 + 7) = *(undefined8 *)(puVar5 + -1);
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      puVar6[9] = puVar5[1];
      *(undefined1 *)(puVar6 + 10) = *(undefined1 *)(puVar5 + 2);
      puVar1 = puVar5 + 3;
      puVar6 = puVar6 + 0xb;
      puVar5 = puVar5 + 0xb;
    } while (puVar1 != param_2);
  }
  FUN_00480090(puVar6,puVar6);
  return puVar6;
}


void __fastcall FUN_00480190(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 7;
    do {
      if (0xf < *puVar4) {
        pvVar2 = (void *)puVar4[-5];
        pvVar3 = pvVar2;
        if ((0xfff < *puVar4 + 1) &&
           (pvVar3 = *(void **)((int)pvVar2 - 4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      puVar4[-1] = 0;
      *puVar4 = 0xf;
      *(undefined1 *)(puVar4 + -5) = 0;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 8;
    } while (puVar1 != param_2);
  }
  return;
}


uint * __fastcall FUN_00480200(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  puVar6 = param_3;
  if (param_1 != param_2) {
    puVar5 = param_1 + 7;
    do {
      *puVar6 = puVar5[-7];
      puVar6[1] = puVar5[-6];
      puVar1 = puVar5 + 1;
      puVar6[6] = 0;
      *(undefined4 *)((int)param_3 + (-0x20 - (int)param_1) + (int)(puVar5 + 8)) = 0;
      uVar2 = puVar5[-4];
      uVar3 = puVar5[-3];
      uVar4 = puVar5[-2];
      puVar6[2] = puVar5[-5];
      puVar6[3] = uVar2;
      puVar6[4] = uVar3;
      puVar6[5] = uVar4;
      *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar5 + -1);
      puVar6 = puVar6 + 8;
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      puVar5 = puVar5 + 8;
    } while (puVar1 != param_2);
  }
  FUN_00480190(puVar6,puVar6);
  return puVar6;
}


int * __thiscall FUN_00480280(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8be8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  iVar6 = FUN_0047d950();
  *(int *)this = iVar6;
  local_8 = 1;
  puVar7 = FUN_00480ce0(this,*(undefined4 **)(*param_1 + 4),iVar6,param_1);
  *(undefined4 **)(iVar6 + 4) = puVar7;
  piVar2 = *(int **)this;
  *(int *)((int)this + 4) = param_1[1];
  piVar3 = (int *)piVar2[1];
  if (*(char *)((int)piVar3 + 0xd) == '\0') {
    cVar1 = *(char *)(*piVar3 + 0xd);
    piVar5 = (int *)*piVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar5 + 0xd);
      piVar3 = piVar5;
      piVar5 = (int *)*piVar5;
    }
    *piVar2 = (int)piVar3;
    iVar6 = *(int *)(*(int *)this + 4);
    iVar4 = *(int *)(iVar6 + 8);
    cVar1 = *(char *)(iVar4 + 0xd);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
      iVar6 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    *(int *)(*(int *)this + 8) = iVar6;
  }
  else {
    *piVar2 = (int)piVar2;
    *(int *)(*(int *)this + 8) = *(int *)this;
  }
  ExceptionList = local_10;
  return this;
}


Rect * __fastcall FUN_00480360(Rect *param_1,Rect *param_2,Rect *param_3)

{
  void **ppvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b8c21;
  uStack_7 = 0;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 0x28) {
    local_8 = 0;
    cocos2d::Rect::Rect(param_3,param_1);
    local_8 = 1;
    FUN_004024e0(param_3 + 0x10,(undefined4 *)(param_1 + 0x10));
    param_3 = param_3 + 0x28;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_10;
  return param_3;
}


void FUN_004803f0(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *local_c;
  
  local_c = DAT_0065b544;
  if (*(char *)((int)DAT_0065b544[1] + 0xd) == '\0') {
    uVar1 = *(uint *)(param_2 + 0x10);
    puVar7 = (undefined4 *)DAT_0065b544[1];
    do {
      pbVar6 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar6 = *(byte **)param_2;
      }
      pbVar4 = (byte *)(puVar7 + 4);
      if (0xf < (uint)puVar7[9]) {
        pbVar4 = (byte *)puVar7[4];
      }
      uVar2 = puVar7[8];
      uVar5 = uVar2;
      if (uVar1 < uVar2) {
        uVar5 = uVar1;
      }
      while (uVar3 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar4 != *(int *)pbVar6) goto LAB_00480456;
        pbVar4 = pbVar4 + 4;
        pbVar6 = pbVar6 + 4;
        uVar5 = uVar3;
      }
      if (uVar3 == 0xfffffffc) {
LAB_0048048a:
        uVar5 = 0;
      }
      else {
LAB_00480456:
        bVar9 = *pbVar4 < *pbVar6;
        if ((*pbVar4 == *pbVar6) &&
           ((uVar3 == 0xfffffffd ||
            ((bVar9 = pbVar4[1] < pbVar6[1], pbVar4[1] == pbVar6[1] &&
             ((uVar3 == 0xfffffffe ||
              ((bVar9 = pbVar4[2] < pbVar6[2], pbVar4[2] == pbVar6[2] &&
               ((uVar3 == 0xffffffff || (bVar9 = pbVar4[3] < pbVar6[3], pbVar4[3] == pbVar6[3]))))))
             )))))) goto LAB_0048048a;
        uVar5 = -(uint)bVar9 | 1;
      }
      if (uVar5 == 0) {
        if (uVar1 <= uVar2) goto LAB_00480495;
LAB_004804b9:
        puVar8 = (undefined4 *)puVar7[2];
      }
      else {
        if ((int)uVar5 < 0) goto LAB_004804b9;
LAB_00480495:
        puVar8 = (undefined4 *)*puVar7;
        local_c = puVar7;
      }
      puVar7 = puVar8;
    } while (*(char *)((int)puVar8 + 0xd) == '\0');
  }
  *param_1 = local_c;
  return;
}


void __fastcall FUN_004804d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = *param_1; iVar2 != iVar1; iVar2 = iVar2 + 0x188) {
    FUN_00465e40(iVar2);
  }
  return;
}


void __fastcall FUN_00480500(undefined4 *param_1)

{
  Rect *pRVar1;
  Rect *pRVar2;
  
  pRVar1 = (Rect *)param_1[1];
  for (pRVar2 = (Rect *)*param_1; pRVar2 != pRVar1; pRVar2 = pRVar2 + 0x28) {
    FUN_00467a60(pRVar2);
  }
  return;
}


void __fastcall FUN_00480530(undefined4 *param_1)

{
  FUN_00480020((uint *)*param_1,(uint *)param_1[1]);
  return;
}


void __fastcall FUN_00480540(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  for (iVar2 = *param_1; iVar2 != iVar1; iVar2 = iVar2 + 0x50) {
    FUN_0047c010(iVar2);
  }
  return;
}


void __fastcall FUN_00480570(undefined4 *param_1)

{
  FUN_0047ffb0((uint *)*param_1,(uint *)param_1[1]);
  return;
}


void FUN_00480580(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = FUN_00480dc0();
  *(undefined2 *)(iVar5 + 0xc) = 0;
  puVar1 = (undefined4 *)*param_2;
  *(undefined4 *)(iVar5 + 0x20) = 0;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(iVar5 + 0x10) = *puVar1;
  *(undefined4 *)(iVar5 + 0x14) = uVar2;
  *(undefined4 *)(iVar5 + 0x18) = uVar3;
  *(undefined4 *)(iVar5 + 0x1c) = uVar4;
  *(undefined8 *)(iVar5 + 0x20) = *(undefined8 *)(puVar1 + 4);
  puVar1[4] = 0;
  puVar1[5] = 0xf;
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(iVar5 + 0x28) = 0;
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined4 *)(iVar5 + 0x30) = 0;
  return;
}


undefined4 * __thiscall
FUN_004805e0(void *this,undefined4 *param_1,byte *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  uint uStack_34;
  undefined4 local_24 [2];
  uint local_1c;
  byte local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b8c40;
  local_10 = ExceptionList;
  uStack_34 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (DAT_0065b548 == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_00480e10(param_1,'\x01',(int *)DAT_0065b544,this,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 != *(byte **)DAT_0065b544) {
    if (param_2 != DAT_0065b544) {
      pbVar9 = param_2 + 0x10;
      if (0xf < *(uint *)(param_2 + 0x24)) {
        pbVar9 = *(byte **)(param_2 + 0x10);
      }
      pbVar8 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar8 = *(byte **)param_3;
      }
      local_1c = *(uint *)(param_3 + 0x10);
      uVar5 = local_1c;
      if (*(uint *)(param_2 + 0x20) < local_1c) {
        uVar5 = *(uint *)(param_2 + 0x20);
      }
      while (uVar4 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar8 != *(int *)pbVar9) goto LAB_0048082a;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
        uVar5 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_0048085e:
        uVar5 = 0;
      }
      else {
LAB_0048082a:
        bVar11 = *pbVar8 < *pbVar9;
        if ((*pbVar8 == *pbVar9) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar11 = pbVar8[1] < pbVar9[1], pbVar8[1] == pbVar9[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar11 = pbVar8[2] < pbVar9[2], pbVar8[2] == pbVar9[2] &&
               ((uVar4 == 0xffffffff || (bVar11 = pbVar8[3] < pbVar9[3], pbVar8[3] == pbVar9[3])))))
              ))))))) goto LAB_0048085e;
        uVar5 = -(uint)bVar11 | 1;
      }
      if (uVar5 == 0) {
        if (*(uint *)(param_3 + 0x10) < *(uint *)(param_2 + 0x20)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(*(uint *)(param_2 + 0x20) < *(uint *)(param_3 + 0x10));
        }
      }
      if ((int)uVar5 < 0) {
        if (param_2[0xd] == 0) {
          pbVar9 = *(byte **)param_2;
          if (pbVar9[0xd] == 0) {
            bVar1 = (*(byte **)(pbVar9 + 8))[0xd];
            pbVar8 = *(byte **)(pbVar9 + 8);
            while (bVar1 == 0) {
              bVar1 = (*(byte **)(pbVar8 + 8))[0xd];
              pbVar9 = pbVar8;
              pbVar8 = *(byte **)(pbVar8 + 8);
            }
          }
          else {
            bVar1 = (*(byte **)(param_2 + 4))[0xd];
            pbVar10 = *(byte **)(param_2 + 4);
            pbVar8 = param_2;
            while ((pbVar9 = pbVar10, bVar1 == 0 && (pbVar8 == *(byte **)pbVar9))) {
              bVar1 = (*(byte **)(pbVar9 + 4))[0xd];
              pbVar10 = *(byte **)(pbVar9 + 4);
              pbVar8 = pbVar9;
            }
            if (pbVar8[0xd] != 0) {
              pbVar9 = pbVar8;
            }
          }
        }
        else {
          pbVar9 = *(byte **)(param_2 + 8);
        }
        pbVar8 = param_3;
        if (0xf < *(uint *)(param_3 + 0x14)) {
          pbVar8 = *(byte **)param_3;
        }
        pbVar10 = pbVar9 + 0x10;
        if (0xf < *(uint *)(pbVar9 + 0x24)) {
          pbVar10 = *(byte **)(pbVar9 + 0x10);
        }
        uVar5 = *(uint *)(pbVar9 + 0x20);
        if (local_1c < *(uint *)(pbVar9 + 0x20)) {
          uVar5 = local_1c;
        }
        while (uVar4 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)pbVar10 != *(int *)pbVar8) goto LAB_00480909;
          pbVar10 = pbVar10 + 4;
          pbVar8 = pbVar8 + 4;
          uVar5 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_0048093d:
          uVar5 = 0;
        }
        else {
LAB_00480909:
          bVar11 = *pbVar10 < *pbVar8;
          if ((*pbVar10 == *pbVar8) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar11 = pbVar10[1] < pbVar8[1], pbVar10[1] == pbVar8[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar11 = pbVar10[2] < pbVar8[2], pbVar10[2] == pbVar8[2] &&
                 ((uVar4 == 0xffffffff || (bVar11 = pbVar10[3] < pbVar8[3], pbVar10[3] == pbVar8[3])
                  ))))))))))) goto LAB_0048093d;
          uVar5 = -(uint)bVar11 | 1;
        }
        if (uVar5 == 0) {
          if (*(uint *)(pbVar9 + 0x20) < local_1c) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(local_1c < *(uint *)(pbVar9 + 0x20));
          }
        }
        if ((int)uVar5 < 0) {
          iVar2 = *(int *)(pbVar9 + 8);
          if (*(char *)(iVar2 + 0xd) == '\0') {
            local_14 = (undefined1 *)&uStack_34;
            FUN_00480e10(param_1,'\x01',(int *)param_2,iVar2,param_4);
            ExceptionList = local_10;
            return param_1;
          }
          local_14 = (undefined1 *)&uStack_34;
          FUN_00480e10(param_1,'\0',(int *)pbVar9,iVar2,param_4);
          ExceptionList = local_10;
          return param_1;
        }
      }
      pbVar9 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar9 = *(byte **)param_3;
      }
      pbVar8 = param_2 + 0x10;
      if (0xf < *(uint *)(param_2 + 0x24)) {
        pbVar8 = *(byte **)(param_2 + 0x10);
      }
      uVar5 = *(uint *)(param_2 + 0x20);
      if (*(uint *)(param_3 + 0x10) < *(uint *)(param_2 + 0x20)) {
        uVar5 = *(uint *)(param_3 + 0x10);
      }
      while (uVar4 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar8 != *(int *)pbVar9) goto LAB_004809eb;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
        uVar5 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_00480a1f:
        uVar5 = 0;
      }
      else {
LAB_004809eb:
        bVar11 = *pbVar8 < *pbVar9;
        if ((*pbVar8 == *pbVar9) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar11 = pbVar8[1] < pbVar9[1], pbVar8[1] == pbVar9[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar11 = pbVar8[2] < pbVar9[2], pbVar8[2] == pbVar9[2] &&
               ((uVar4 == 0xffffffff || (bVar11 = pbVar8[3] < pbVar9[3], pbVar8[3] == pbVar9[3])))))
              ))))))) goto LAB_00480a1f;
        uVar5 = -(uint)bVar11 | 1;
      }
      if (uVar5 == 0) {
        pbVar8 = param_2 + 0x10;
        if (*(uint *)(param_2 + 0x20) < *(uint *)(param_3 + 0x10)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(*(uint *)(param_3 + 0x10) < *(uint *)(param_2 + 0x20));
        }
      }
      if (-1 < (int)uVar5) goto LAB_00480b7b;
      pbVar9 = *(byte **)(param_2 + 8);
      local_15 = pbVar9[0xd];
      if (local_15 == 0) {
        bVar1 = (*(byte **)pbVar9)[0xd];
        pbVar8 = *(byte **)pbVar9;
        while (bVar1 == 0) {
          bVar1 = (*(byte **)pbVar8)[0xd];
          pbVar9 = pbVar8;
          pbVar8 = *(byte **)pbVar8;
        }
      }
      else {
        bVar1 = (*(byte **)(param_2 + 4))[0xd];
        pbVar10 = *(byte **)(param_2 + 4);
        pbVar8 = param_2;
        while ((pbVar9 = pbVar10, bVar1 == 0 && (pbVar8 == *(byte **)(pbVar9 + 8)))) {
          bVar1 = (*(byte **)(pbVar9 + 4))[0xd];
          pbVar10 = *(byte **)(pbVar9 + 4);
          pbVar8 = pbVar9;
        }
      }
      pbVar8 = DAT_0065b544;
      if (pbVar9 == DAT_0065b544) goto LAB_00480b2d;
      pbVar8 = pbVar9 + 0x10;
      if (0xf < *(uint *)(pbVar9 + 0x24)) {
        pbVar8 = *(byte **)(pbVar9 + 0x10);
      }
      pbVar10 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar10 = *(byte **)param_3;
      }
      uVar5 = local_1c;
      if (*(uint *)(pbVar9 + 0x20) < local_1c) {
        uVar5 = *(uint *)(pbVar9 + 0x20);
      }
      while (uVar4 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)pbVar10 != *(int *)pbVar8) goto LAB_00480ad9;
        pbVar10 = pbVar10 + 4;
        pbVar8 = pbVar8 + 4;
        uVar5 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_00480b0d:
        uVar5 = 0;
      }
      else {
LAB_00480ad9:
        bVar11 = *pbVar10 < *pbVar8;
        if ((*pbVar10 == *pbVar8) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar11 = pbVar10[1] < pbVar8[1], pbVar10[1] == pbVar8[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar11 = pbVar10[2] < pbVar8[2], pbVar10[2] == pbVar8[2] &&
               ((uVar4 == 0xffffffff || (bVar11 = pbVar10[3] < pbVar8[3], pbVar10[3] == pbVar8[3])))
               ))))))))) goto LAB_00480b0d;
        uVar5 = -(uint)bVar11 | 1;
      }
      if (uVar5 == 0) {
        if (local_1c < *(uint *)(pbVar9 + 0x20)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(*(uint *)(pbVar9 + 0x20) < local_1c);
        }
      }
      pbVar8 = (byte *)(uVar5 >> 0x1f);
      if ((int)uVar5 < 0) {
LAB_00480b2d:
        if (local_15 == 0) {
          FUN_00480e10(param_1,'\x01',(int *)pbVar9,pbVar8,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_34;
        FUN_00480e10(param_1,'\0',(int *)param_2,pbVar8,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      goto LAB_00480b7b;
    }
    iVar2 = *(int *)(DAT_0065b544 + 8);
    pbVar9 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      pbVar9 = *(byte **)param_3;
    }
    pbVar8 = (byte *)(iVar2 + 0x10);
    if (0xf < *(uint *)(iVar2 + 0x24)) {
      pbVar8 = *(byte **)(iVar2 + 0x10);
    }
    uVar5 = *(uint *)(iVar2 + 0x20);
    uVar4 = *(uint *)(param_3 + 0x10);
    uVar6 = uVar5;
    if (uVar4 < uVar5) {
      uVar6 = uVar4;
    }
    while (uVar3 = uVar6 - 4, 3 < uVar6) {
      if (*(int *)pbVar8 != *(int *)pbVar9) goto LAB_00480766;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
      uVar6 = uVar3;
    }
    if (uVar3 == 0xfffffffc) {
LAB_0048079a:
      uVar6 = 0;
    }
    else {
LAB_00480766:
      bVar11 = *pbVar8 < *pbVar9;
      if ((*pbVar8 == *pbVar9) &&
         ((uVar3 == 0xfffffffd ||
          ((bVar11 = pbVar8[1] < pbVar9[1], pbVar8[1] == pbVar9[1] &&
           ((uVar3 == 0xfffffffe ||
            ((bVar11 = pbVar8[2] < pbVar9[2], pbVar8[2] == pbVar9[2] &&
             ((uVar3 == 0xffffffff || (bVar11 = pbVar8[3] < pbVar9[3], pbVar8[3] == pbVar9[3])))))))
           ))))) goto LAB_0048079a;
      uVar6 = -(uint)bVar11 | 1;
    }
    if (uVar6 == 0) {
      if (uVar5 < uVar4) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar4 < uVar5);
      }
    }
    if ((int)uVar6 < 0) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_00480e10(param_1,'\0',*(int **)(DAT_0065b544 + 8),pbVar8,param_4);
      ExceptionList = local_10;
      return param_1;
    }
    goto LAB_00480b7b;
  }
  pbVar8 = param_2 + 0x10;
  if (0xf < *(uint *)(param_2 + 0x24)) {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  pbVar9 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar9 = *(byte **)param_3;
  }
  uVar5 = *(uint *)(param_3 + 0x10);
  if (*(uint *)(param_2 + 0x20) < *(uint *)(param_3 + 0x10)) {
    uVar5 = *(uint *)(param_2 + 0x20);
  }
  while (uVar4 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)pbVar9 != *(int *)pbVar8) goto LAB_00480696;
    pbVar9 = pbVar9 + 4;
    pbVar8 = pbVar8 + 4;
    uVar5 = uVar4;
  }
  if (uVar4 == 0xfffffffc) {
LAB_004806ca:
    uVar5 = 0;
  }
  else {
LAB_00480696:
    bVar11 = *pbVar9 < *pbVar8;
    if ((*pbVar9 == *pbVar8) &&
       ((uVar4 == 0xfffffffd ||
        ((bVar11 = pbVar9[1] < pbVar8[1], pbVar9[1] == pbVar8[1] &&
         ((uVar4 == 0xfffffffe ||
          ((bVar11 = pbVar9[2] < pbVar8[2], pbVar9[2] == pbVar8[2] &&
           ((uVar4 == 0xffffffff || (bVar11 = pbVar9[3] < pbVar8[3], pbVar9[3] == pbVar8[3])))))))))
        ))) goto LAB_004806ca;
    uVar5 = -(uint)bVar11 | 1;
  }
  if (uVar5 == 0) {
    pbVar8 = *(byte **)(param_3 + 0x10);
    if (pbVar8 < *(byte **)(param_2 + 0x20)) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)(*(byte **)(param_2 + 0x20) < pbVar8);
    }
  }
  if ((int)uVar5 < 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_00480e10(param_1,'\x01',(int *)param_2,pbVar8,param_4);
    ExceptionList = local_10;
    return param_1;
  }
LAB_00480b7b:
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_34;
  puVar7 = (undefined4 *)FUN_00481050(local_24,pbVar8,param_3,param_4);
  *param_1 = *puVar7;
  ExceptionList = local_10;
  return param_1;
}


int FUN_00480bc0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8c60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00480dc0();
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  FUN_004024e0((void *)(iVar1 + 0x10),(undefined4 *)*param_2);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  ExceptionList = local_10;
  return iVar1;
}


int __thiscall FUN_00480c50(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8c80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0041a660(this);
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  FUN_004024e0((void *)(iVar1 + 0x10),(undefined4 *)*param_2);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0xf;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  ExceptionList = local_10;
  return iVar1;
}


undefined4 * __thiscall
FUN_00480ce0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8ca0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_00481720(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    local_8 = 0;
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_00480ce0(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_00480ce0(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


void FUN_00480da0(void *param_1)

{
  FUN_005adb3f(param_1);
  return;
}


void FUN_00480dc0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005adb0f(0x34);
  *puVar1 = DAT_0065b544;
  puVar1[1] = DAT_0065b544;
  puVar1[2] = DAT_0065b544;
  return;
}


void FUN_00480df0(void *param_1)

{
  FUN_0047f780((int *)((int)param_1 + 0x10));
  FUN_005adb3f(param_1);
  return;
}


void FUN_00480e10(undefined4 *param_1,char param_2,int *param_3,undefined4 param_4,int *param_5)

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
  
  if (0x4ec4ec2 < DAT_0065b548) {
    FUN_00480df0(param_5);
                    // WARNING: Subroutine does not return
    std::_Xlength_error("map/set<T> too long");
  }
  DAT_0065b548 = DAT_0065b548 + 1;
  param_5[1] = (int)param_3;
  if (param_3 == DAT_0065b544) {
    DAT_0065b544[1] = (int)param_5;
    *DAT_0065b544 = (int)param_5;
    DAT_0065b544[2] = (int)param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int)param_5;
    if (param_3 == (int *)DAT_0065b544[2]) {
      DAT_0065b544[2] = (int)param_5;
    }
  }
  else {
    *param_3 = (int)param_5;
    if (param_3 == (int *)*DAT_0065b544) {
      *DAT_0065b544 = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar7 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(DAT_0065b544[1] + 0xc) = 1;
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
          if (piVar8 == (int *)DAT_0065b544[1]) {
            DAT_0065b544[1] = (int)piVar2;
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
        if (piVar6 == (int *)DAT_0065b544[1]) {
          DAT_0065b544[1] = (int)piVar9;
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
        goto LAB_0048101f;
      }
LAB_00480f76:
      *(undefined1 *)(piVar8 + 3) = 1;
      *(undefined1 *)(iVar4 + 0xc) = 1;
      *(undefined1 *)(*(int *)(*piVar6 + 4) + 0xc) = 0;
      piVar7 = *(int **)(*piVar6 + 4);
    }
    else {
      if (*(char *)(iVar4 + 0xc) == '\0') goto LAB_00480f76;
      piVar2 = (int *)*piVar8;
      piVar5 = piVar8;
      if (piVar7 == piVar2) {
        *piVar8 = piVar2[2];
        if (*(char *)(piVar2[2] + 0xd) == '\0') {
          *(int **)(piVar2[2] + 4) = piVar8;
        }
        piVar2[1] = *piVar9;
        if (piVar8 == (int *)DAT_0065b544[1]) {
          DAT_0065b544[1] = (int)piVar2;
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
      if (piVar6 == (int *)DAT_0065b544[1]) {
        DAT_0065b544[1] = (int)piVar9;
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
LAB_0048101f:
      piVar6[1] = (int)piVar9;
    }
    cVar1 = *(char *)(piVar7[1] + 0xc);
  } while( true );
}


void FUN_00481050(undefined4 *param_1,undefined4 param_2,byte *param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int *piVar13;
  bool bVar14;
  byte local_20;
  int *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar6 = param_4;
  puStack_c = &LAB_005b8cc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar7 = 1;
  local_1c = DAT_0065b544;
  local_20 = 1;
  if (*(char *)(DAT_0065b544[1] + 0xd) == '\0') {
    uVar2 = *(uint *)(param_3 + 0x10);
    piVar13 = (int *)DAT_0065b544[1];
    do {
      local_1c = piVar13;
      pbVar12 = (byte *)(local_1c + 4);
      if (0xf < (uint)local_1c[9]) {
        pbVar12 = (byte *)local_1c[4];
      }
      pbVar11 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar11 = *(byte **)param_3;
      }
      uVar10 = local_1c[8];
      uVar8 = uVar2;
      if (uVar10 < uVar2) {
        uVar8 = uVar10;
      }
      while (uVar3 = uVar8 - 4, 3 < uVar8) {
        if (*(int *)pbVar11 != *(int *)pbVar12) goto LAB_004810ed;
        pbVar11 = pbVar11 + 4;
        pbVar12 = pbVar12 + 4;
        uVar8 = uVar3;
      }
      if (uVar3 == 0xfffffffc) {
LAB_00481121:
        uVar8 = 0;
      }
      else {
LAB_004810ed:
        bVar14 = *pbVar11 < *pbVar12;
        if ((*pbVar11 == *pbVar12) &&
           ((uVar3 == 0xfffffffd ||
            ((bVar14 = pbVar11[1] < pbVar12[1], pbVar11[1] == pbVar12[1] &&
             ((uVar3 == 0xfffffffe ||
              ((bVar14 = pbVar11[2] < pbVar12[2], pbVar11[2] == pbVar12[2] &&
               ((uVar3 == 0xffffffff || (bVar14 = pbVar11[3] < pbVar12[3], pbVar11[3] == pbVar12[3])
                ))))))))))) goto LAB_00481121;
        uVar8 = -(uint)bVar14 | 1;
      }
      if (uVar8 == 0) {
        if (uVar2 < uVar10) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (uint)(uVar10 < uVar2);
        }
      }
      local_20 = (byte)(uVar8 >> 0x18);
      bVar7 = local_20 >> 7;
      local_20 = local_20 >> 7;
      if ((int)uVar8 < 0) {
        piVar13 = (int *)*local_1c;
      }
      else {
        piVar13 = (int *)local_1c[2];
      }
    } while (*(char *)((int)piVar13 + 0xd) == '\0');
  }
  piVar13 = local_1c;
  if (bVar7 != 0) {
    if (local_1c == (int *)*DAT_0065b544) {
      puVar9 = (undefined4 *)FUN_00480e10(&param_3,'\x01',local_1c,local_1c,param_4);
      *param_1 = *puVar9;
      *(undefined1 *)(param_1 + 1) = 1;
      ExceptionList = local_10;
      return;
    }
    if (*(char *)((int)local_1c + 0xd) == '\0') {
      piVar13 = (int *)*local_1c;
      if (*(char *)((int)piVar13 + 0xd) == '\0') {
        cVar1 = *(char *)(piVar13[2] + 0xd);
        piVar4 = (int *)piVar13[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(piVar4[2] + 0xd);
          piVar13 = piVar4;
          piVar4 = (int *)piVar4[2];
        }
      }
      else {
        cVar1 = *(char *)(local_1c[1] + 0xd);
        piVar4 = (int *)local_1c[1];
        piVar13 = local_1c;
        while ((piVar5 = piVar4, cVar1 == '\0' && (piVar13 == (int *)*piVar5))) {
          cVar1 = *(char *)(piVar5[1] + 0xd);
          piVar4 = (int *)piVar5[1];
          piVar13 = piVar5;
        }
        if (*(char *)((int)piVar13 + 0xd) == '\0') {
          piVar13 = piVar5;
        }
      }
    }
    else {
      piVar13 = (int *)local_1c[2];
    }
  }
  pbVar12 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar12 = *(byte **)param_3;
  }
  pbVar11 = (byte *)(piVar13 + 4);
  if (0xf < (uint)piVar13[9]) {
    pbVar11 = (byte *)piVar13[4];
  }
  uVar2 = *(uint *)(param_3 + 0x10);
  uVar10 = piVar13[8];
  if (uVar2 < (uint)piVar13[8]) {
    uVar10 = uVar2;
  }
  while (uVar8 = uVar10 - 4, 3 < uVar10) {
    if (*(int *)pbVar11 != *(int *)pbVar12) goto LAB_0048122a;
    pbVar11 = pbVar11 + 4;
    pbVar12 = pbVar12 + 4;
    uVar10 = uVar8;
  }
  if (uVar8 != 0xfffffffc) {
LAB_0048122a:
    bVar14 = *pbVar11 < *pbVar12;
    if ((*pbVar11 != *pbVar12) ||
       ((uVar8 != 0xfffffffd &&
        ((bVar14 = pbVar11[1] < pbVar12[1], pbVar11[1] != pbVar12[1] ||
         ((uVar8 != 0xfffffffe &&
          ((bVar14 = pbVar11[2] < pbVar12[2], pbVar11[2] != pbVar12[2] ||
           ((uVar8 != 0xffffffff && (bVar14 = pbVar11[3] < pbVar12[3], pbVar11[3] != pbVar12[3])))))
          ))))))) {
      uVar10 = -(uint)bVar14 | 1;
      goto LAB_00481260;
    }
  }
  uVar10 = 0;
LAB_00481260:
  if (uVar10 == 0) {
    if ((uint)piVar13[8] < uVar2) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)(uVar2 < (uint)piVar13[8]);
    }
  }
  if ((int)uVar10 < 0) {
    puVar9 = (undefined4 *)FUN_00480e10(&param_3,local_20,local_1c,pbVar11,param_4);
    *param_1 = *puVar9;
    *(undefined1 *)(param_1 + 1) = 1;
    ExceptionList = local_10;
    return;
  }
  FUN_0047f780(param_4 + 4);
  FUN_005adb3f(piVar6);
  *param_1 = piVar13;
  *(undefined1 *)(param_1 + 1) = 0;
  ExceptionList = local_10;
  return;
}


undefined4 * __thiscall FUN_00481300(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005b8d6f;
  local_10 = ExceptionList;
  uVar5 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined1 *)((int)this + 0x18) = *(undefined1 *)(param_1 + 6);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar6 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_1[10];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = uVar6;
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = uVar3;
  *(undefined8 *)((int)this + 0x2c) = *(undefined8 *)(param_1 + 0xb);
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  uVar6 = param_1[0xe];
  uVar2 = param_1[0xf];
  uVar3 = param_1[0x10];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = uVar6;
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  *(undefined4 *)((int)this + 0x40) = uVar3;
  *(undefined8 *)((int)this + 0x44) = *(undefined8 *)(param_1 + 0x11);
  param_1[0x11] = 0;
  param_1[0x12] = 0xf;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)this + 0x4c) = *(undefined1 *)(param_1 + 0x13);
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x7c) = 0;
  uStack_7 = 0;
  uVar4 = uStack_7;
  local_8 = 2;
  uStack_7 = 0;
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1 + 0x16) {
      uVar6 = (**(code **)(*piVar1 + 4))((int)this + 0x58,uVar5);
      *(undefined4 *)((int)this + 0x7c) = uVar6;
      local_8 = 3;
      piVar1 = (int *)param_1[0x1f];
      uVar4 = uStack_7;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x16);
        param_1[0x1f] = 0;
        uVar4 = uStack_7;
      }
    }
    else {
      *(int **)((int)this + 0x7c) = piVar1;
      param_1[0x1f] = 0;
      uVar4 = uStack_7;
    }
  }
  uStack_7 = uVar4;
  *(undefined4 *)((int)this + 0x80) = param_1[0x20];
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  *(undefined4 *)((int)this + 0xac) = 0;
  local_8 = 5;
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1 + 0x22) {
      uVar6 = (**(code **)(*piVar1 + 4))((int)this + 0x88);
      *(undefined4 *)((int)this + 0xac) = uVar6;
      local_8 = 6;
      piVar1 = (int *)param_1[0x2b];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x22);
        param_1[0x2b] = 0;
      }
    }
    else {
      *(int **)((int)this + 0xac) = piVar1;
      param_1[0x2b] = 0;
    }
  }
  *(undefined1 *)((int)this + 0xb0) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)((int)this + 0xb1) = *(undefined1 *)((int)param_1 + 0xb1);
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  uVar6 = param_1[0x2f];
  uVar2 = param_1[0x30];
  uVar3 = param_1[0x31];
  *(undefined4 *)((int)this + 0xb8) = param_1[0x2e];
  *(undefined4 *)((int)this + 0xbc) = uVar6;
  *(undefined4 *)((int)this + 0xc0) = uVar2;
  *(undefined4 *)((int)this + 0xc4) = uVar3;
  *(undefined8 *)((int)this + 200) = *(undefined8 *)(param_1 + 0x32);
  param_1[0x32] = 0;
  param_1[0x33] = 0xf;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  local_8 = 9;
  piVar1 = (int *)param_1[0x3d];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1 + 0x34) {
      uVar6 = (**(code **)(*piVar1 + 4))((int)this + 0xd0);
      *(undefined4 *)((int)this + 0xf4) = uVar6;
      local_8 = 10;
      piVar1 = (int *)param_1[0x3d];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x34);
        param_1[0x3d] = 0;
      }
    }
    else {
      *(int **)((int)this + 0xf4) = piVar1;
      param_1[0x3d] = 0;
    }
  }
  *(undefined1 *)((int)this + 0xf8) = *(undefined1 *)(param_1 + 0x3e);
  *(undefined4 *)((int)this + 0x124) = 0;
  local_8 = 0xc;
  piVar1 = (int *)param_1[0x49];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1 + 0x40) {
      uVar6 = (**(code **)(*piVar1 + 4))((int)this + 0x100);
      *(undefined4 *)((int)this + 0x124) = uVar6;
      local_8 = 0xd;
      piVar1 = (int *)param_1[0x49];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x40);
        param_1[0x49] = 0;
      }
    }
    else {
      *(int **)((int)this + 0x124) = piVar1;
      param_1[0x49] = 0;
    }
  }
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined4 *)((int)this + 0x154) = 0;
  local_8 = 0xf;
  piVar1 = (int *)param_1[0x55];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_1 + 0x4c) {
      uVar6 = (**(code **)(*piVar1 + 4))((int)this + 0x130);
      *(undefined4 *)((int)this + 0x154) = uVar6;
      local_8 = 0x10;
      piVar1 = (int *)param_1[0x55];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1 != param_1 + 0x4c);
        param_1[0x55] = 0;
      }
    }
    else {
      *(int **)((int)this + 0x154) = piVar1;
      param_1[0x55] = 0;
    }
  }
  _local_8 = CONCAT31(uStack_7,0x11);
  *(undefined4 *)((int)this + 0x158) = param_1[0x56];
  *(undefined4 *)((int)this + 0x15c) = param_1[0x57];
  *(undefined4 *)((int)this + 0x160) = param_1[0x58];
  *(undefined4 *)((int)this + 0x164) = param_1[0x59];
  puVar7 = (undefined4 *)((int)this + 0x168);
  *puVar7 = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  uVar6 = FUN_0047d950();
  *puVar7 = uVar6;
  *puVar7 = param_1[0x5a];
  param_1[0x5a] = uVar6;
  uVar6 = *(undefined4 *)((int)this + 0x16c);
  *(undefined4 *)((int)this + 0x16c) = param_1[0x5b];
  param_1[0x5b] = uVar6;
  *(undefined1 *)((int)this + 0x170) = *(undefined1 *)(param_1 + 0x5c);
  uVar6 = param_1[0x5e];
  uVar2 = param_1[0x5f];
  uVar3 = param_1[0x60];
  *(undefined4 *)((int)this + 0x174) = param_1[0x5d];
  *(undefined4 *)((int)this + 0x178) = uVar6;
  *(undefined4 *)((int)this + 0x17c) = uVar2;
  *(undefined4 *)((int)this + 0x180) = uVar3;
  ExceptionList = local_10;
  return this;
}


int __thiscall FUN_00481720(void *this,undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0041a660(this);
  local_8 = 0;
  *(undefined2 *)(iVar1 + 0xc) = 0;
  FUN_004024e0((void *)(iVar1 + 0x10),param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004024e0((void *)(iVar1 + 0x28),param_1 + 6);
  ExceptionList = local_10;
  return iVar1;
}


void __thiscall FUN_004817b0(void *this,undefined4 param_1,uint param_2,void *param_3)

{
  uint *puVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar2;
  void *pvVar3;
  uint in_stack_00000020;
  uint in_stack_ffffff30;
  undefined4 local_b8 [3];
  undefined4 uStack_ac;
  uint in_stack_ffffff64;
  void *local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined4 *local_54;
  undefined1 local_4d;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  void *local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b8e29;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_14 = 0;
  if ((int)(*(int *)((int)this + 0x1c) + param_2) < 0) {
    local_4d = 0;
    puStack_20 = &stack0xfffffffc;
  }
  else {
    FUN_004024e0(local_78,&param_3);
    if (0xf < local_64) {
      pvVar3 = local_78[0];
      if (0xfff < local_64 + 1) {
        pvVar3 = *(void **)((int)local_78[0] + -4);
        if (0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar3);
    }
    pvVar3 = (void *)(in_stack_ffffff64 & 0xffffff00);
    if ((int)param_2 < 1) {
      local_5c = &stack0xffffff64;
      FUN_00402690(&stack0xffffff64,"money_spent",0xb);
      local_14._0_1_ = 5;
      uVar2 = extraout_ECX_01;
      if (DAT_0065c294 == 0) {
        local_54 = (undefined4 *)FUN_005adb0f(0x28);
        local_14._0_1_ = 6;
        DAT_0065c294 = FUN_0051e500(local_54);
        uVar2 = extraout_ECX_02;
      }
      local_14._0_1_ = 0;
      FUN_0051e750(uVar2,pvVar3);
      local_5c = &stack0xffffff60;
      uStack_ac = 0x481974;
      FUN_00402690(&stack0xffffff60,&PTR_005ce008,0);
      local_54 = local_b8;
      local_14._0_1_ = 7;
      local_b8[0]._0_1_ = 0;
      FUN_00402690(local_b8,"money_spent",0xb);
      local_14._0_1_ = 8;
    }
    else {
      local_58 = &stack0xffffff64;
      FUN_00402690(&stack0xffffff64,"money_made",10);
      local_14._0_1_ = 1;
      uVar2 = extraout_ECX;
      if (DAT_0065c294 == 0) {
        local_54 = (undefined4 *)FUN_005adb0f(0x28);
        local_14._0_1_ = 2;
        DAT_0065c294 = FUN_0051e500(local_54);
        uVar2 = extraout_ECX_00;
      }
      local_14._0_1_ = 0;
      FUN_0051e750(uVar2,pvVar3);
      local_54 = (undefined4 *)&stack0xffffff60;
      uStack_ac = 0x4818d6;
      FUN_00402690(&stack0xffffff60,&PTR_005ce008,0);
      local_58 = (undefined1 *)local_b8;
      local_14._0_1_ = 3;
      local_b8[0]._0_1_ = 0;
      FUN_00402690(local_b8,"money_made",10);
      local_14._0_1_ = 4;
    }
    pvVar3 = (void *)(in_stack_ffffff30 & 0xffffff00);
    FUN_00402690(&stack0xffffff30,"commerce",8);
    local_14._0_1_ = 0;
    FUN_00401a50(pvVar3);
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + param_2;
    FUN_004024e0(local_78,&param_3);
    local_40 = *(uint *)((int)this + 0x1c);
    local_48 = *(uint *)this;
    local_14._0_1_ = 9;
    local_4c = 0xffffffff;
    local_44 = param_2;
    FUN_004024e0(&local_3c,local_78);
    local_14._0_1_ = 0;
    if (0xf < local_64) {
      pvVar3 = local_78[0];
      if (0xfff < local_64 + 1) {
        pvVar3 = *(void **)((int)local_78[0] + -4);
        if (0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_005adb3f(pvVar3);
    }
    local_68 = 0;
    local_64 = 0xf;
    local_78[0] = (void *)((uint)local_78[0] & 0xffffff00);
    local_14 = CONCAT31(local_14._1_3_,10);
    puVar1 = *(uint **)((int)this + 0x24);
    if (*(uint **)((int)this + 0x28) == puVar1) {
      FUN_00481d00((void *)((int)this + 0x20),puVar1,&local_4c);
      if (0xf < uStack_28) {
        pvVar3 = local_3c;
        if (0xfff < uStack_28 + 1) {
          pvVar3 = *(void **)((int)local_3c + -4);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_005adb3f(pvVar3);
      }
    }
    else {
      *puVar1 = local_4c;
      puVar1[1] = local_48;
      puVar1[2] = local_44;
      puVar1[3] = local_40;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[4] = (uint)local_3c;
      puVar1[5] = uStack_38;
      puVar1[6] = uStack_34;
      puVar1[7] = uStack_30;
      *(ulonglong *)(puVar1 + 8) = CONCAT44(uStack_28,local_2c);
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 0x28;
    }
    local_4d = 1;
  }
  if (0xf < in_stack_00000020) {
    pvVar3 = param_3;
    if (0xfff < in_stack_00000020 + 1) {
      pvVar3 = *(void **)((int)param_3 + -4);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_00481b40(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(uint *)(param_1 + 0x24)) {
    pvVar1 = *(void **)(param_1 + 0x10);
    pvVar2 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 0x24) + 1) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


int * __thiscall FUN_00481b90(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint in_stack_00000018;
  int in_stack_0000001c;
  void *local_34 [5];
  uint local_20;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b8e6f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = this;
  local_18 = (int *)FUN_005adb0f(0x2c);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004024e0(local_34,&param_1);
LAB_00481be6:
  do {
    iVar4 = rand();
    piVar3 = local_18;
    piVar1 = *(int **)this;
    uVar8 = 0;
    iVar4 = iVar4 % 26000 + 0x2711;
    iVar2 = local_14[1] - (int)piVar1 >> 0x1f;
    iVar7 = (local_14[1] - (int)piVar1) / 0x2c + iVar2;
    piVar5 = piVar1;
    this = local_14;
    if (iVar7 != iVar2) {
      do {
        if (*piVar5 == iVar4) {
          if (piVar1 + uVar8 * 0xb != (int *)0x0) goto LAB_00481be6;
          break;
        }
        uVar8 = uVar8 + 1;
        piVar5 = piVar5 + 0xb;
      } while (uVar8 < (uint)(iVar7 - iVar2));
    }
    if (iVar4 != -1) {
      local_8 = CONCAT31(local_8._1_3_,2);
      *local_18 = iVar4;
      FUN_004024e0(local_18 + 1,local_34);
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar3[10] = 0;
      if (0xf < local_20) {
        pvVar6 = local_34[0];
        if ((0xfff < local_20 + 1) &&
           (pvVar6 = *(void **)((int)local_34[0] + -4),
           0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      piVar3[7] = in_stack_0000001c;
      if (0xf < in_stack_00000018) {
        pvVar6 = param_1;
        if ((0xfff < in_stack_00000018 + 1) &&
           (pvVar6 = *(void **)((int)param_1 + -4), 0x1f < (uint)((int)param_1 + (-4 - (int)pvVar6))
           )) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar6);
      }
      ExceptionList = local_10;
      return piVar3;
    }
  } while( true );
}


int __thiscall FUN_00481d00(void *this,undefined4 *param_1,uint *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  void *pvVar12;
  uint *puVar13;
  uint *puVar14;
  
  iVar1 = *(int *)this;
  iVar3 = ((int)param_1 - iVar1) / 0x28;
  iVar4 = (*(int *)((int)this + 4) - iVar1) / 0x28;
  if (iVar4 == 0x6666666) {
                    // WARNING: Subroutine does not return
    FUN_00403b30();
  }
  uVar11 = iVar4 + 1;
  uVar8 = (*(int *)((int)this + 8) - iVar1) / 0x28;
  uVar6 = uVar11;
  if ((uVar8 <= 0x6666666 - (uVar8 >> 1)) && (uVar6 = (uVar8 >> 1) + uVar8, uVar6 < uVar11)) {
    uVar6 = uVar11;
  }
  uVar8 = uVar6 * 0x28;
  if (uVar6 < 0x6666667) {
    if (0xfff < uVar8) goto LAB_00481d9a;
    if (uVar8 == 0) {
      puVar13 = (uint *)0x0;
    }
    else {
      puVar13 = (uint *)FUN_005adb0f(uVar8);
    }
  }
  else {
    uVar8 = 0xffffffff;
LAB_00481d9a:
    uVar7 = uVar8 + 0x23;
    if (uVar7 <= uVar8) {
      uVar7 = 0xffffffff;
    }
    uVar8 = FUN_005adb0f(uVar7);
    if (uVar8 == 0) goto LAB_00481eda;
    puVar13 = (uint *)(uVar8 + 0x23 & 0xffffffe0);
    puVar13[-1] = uVar8;
  }
  puVar13[iVar3 * 10] = *param_2;
  puVar13[iVar3 * 10 + 1] = param_2[1];
  puVar13[iVar3 * 10 + 2] = param_2[2];
  puVar13[iVar3 * 10 + 3] = param_2[3];
  puVar13[iVar3 * 10 + 8] = 0;
  puVar13[iVar3 * 10 + 9] = 0;
  uVar8 = param_2[5];
  uVar7 = param_2[6];
  uVar5 = param_2[7];
  puVar14 = puVar13 + iVar3 * 10 + 4;
  *puVar14 = param_2[4];
  puVar14[1] = uVar8;
  puVar14[2] = uVar7;
  puVar14[3] = uVar5;
  *(undefined8 *)(puVar13 + iVar3 * 10 + 8) = *(undefined8 *)(param_2 + 8);
  param_2[8] = 0;
  param_2[9] = 0xf;
  *(undefined1 *)(param_2 + 4) = 0;
  puVar10 = *(undefined4 **)((int)this + 4);
  puVar9 = *(undefined4 **)this;
  puVar14 = puVar13;
  if (param_1 != puVar10) {
    FUN_00481f60(*(undefined4 **)this,param_1,puVar13);
    puVar10 = *(undefined4 **)((int)this + 4);
    puVar14 = puVar13 + iVar3 * 10 + 10;
    puVar9 = param_1;
  }
  FUN_00481f60(puVar9,puVar10,puVar14);
  if (*(uint **)this != (uint *)0x0) {
    FUN_00481ef0(*(uint **)this,*(uint **)((int)this + 4));
    pvVar2 = *(void **)this;
    pvVar12 = pvVar2;
    if ((0xfff < (uint)(((*(int *)((int)this + 8) - (int)pvVar2) / 0x28) * 0x28)) &&
       (pvVar12 = *(void **)((int)pvVar2 + -4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar12)))) {
LAB_00481eda:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar12);
  }
  *(uint **)this = puVar13;
  *(uint **)((int)this + 4) = puVar13 + uVar11 * 10;
  *(uint **)((int)this + 8) = puVar13 + uVar6 * 10;
  return *(int *)this + iVar3 * 0x28;
}


void __fastcall FUN_00481ef0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 9;
    do {
      if (0xf < *puVar4) {
        pvVar2 = (void *)puVar4[-5];
        pvVar3 = pvVar2;
        if ((0xfff < *puVar4 + 1) &&
           (pvVar3 = *(void **)((int)pvVar2 - 4), 0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))))
        {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar3);
      }
      puVar4[-1] = 0;
      *puVar4 = 0xf;
      *(undefined1 *)(puVar4 + -5) = 0;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 10;
    } while (puVar1 != param_2);
  }
  return;
}


uint * __fastcall FUN_00481f60(undefined4 *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  puVar6 = param_3;
  if (param_1 != param_2) {
    puVar5 = param_1 + 9;
    do {
      *puVar6 = puVar5[-9];
      puVar6[1] = puVar5[-8];
      puVar6[2] = puVar5[-7];
      puVar6[3] = puVar5[-6];
      puVar1 = puVar5 + 1;
      puVar6[8] = 0;
      *(undefined4 *)((int)param_3 + (-0x28 - (int)param_1) + (int)(puVar5 + 10)) = 0;
      uVar2 = puVar5[-4];
      uVar3 = puVar5[-3];
      uVar4 = puVar5[-2];
      puVar6[4] = puVar5[-5];
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar5 + -1);
      puVar6 = puVar6 + 10;
      puVar5[-1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + -5) = 0;
      puVar5 = puVar5 + 10;
    } while (puVar1 != param_2);
  }
  FUN_00481ef0(puVar6,puVar6);
  return puVar6;
}


void __thiscall FUN_00481ff0(void *this,undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005b8ec1;
  local_10 = ExceptionList;
  local_18 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar2 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar2 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      if (*(int *)*puVar2 == *(int *)(*(int *)((int)this + 0x4c) + 0x18)) break;
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,"`$Bounty\n");
  local_8 = 1;
  puVar2 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar2 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar2,puVar1[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    pvVar3 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar3 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,"`7in `!%s\n");
  local_8 = 2;
  puVar2 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar2 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar2,puVar1[4]);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
    pvVar3 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar3 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  puVar1 = (undefined4 *)FUN_00591e00((undefined1 *)local_30,"Reward: `$%dc");
  local_8 = 3;
  puVar2 = puVar1;
  if (0xf < (uint)puVar1[5]) {
    puVar2 = (undefined4 *)*puVar1;
  }
  FUN_00403640(param_1,puVar2,puVar1[4]);
  if (0xf < local_1c) {
    pvVar3 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar3 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


int * __fastcall FUN_004821d0(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005b8f06;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = DAT_0065505c;
  DAT_0065505c = DAT_0065505c + 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = -0x40800000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xf;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_8 = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xf;
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_00402690(param_1 + 0x15,&DAT_005eb58c,3);
  ExceptionList = local_10;
  return param_1;
}


void FUN_00482290(uint *param_1)

{
  int *_Dst;
  uint *puVar1;
  int iVar2;
  void **ppvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint uVar6;
  uint local_9c;
  int *piVar7;
  undefined4 *local_50;
  uint *local_4c;
  uint local_48;
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
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b8fa9;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = param_1;
  FUN_00591070(&DAT_005cdc70,"Bounty complete on vessel %s");
  piVar7 = *(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
  FUN_00527550(piVar7,2,"Bounty complete.");
  pvVar4 = (void *)((uint)piVar7 & 0xffffff00);
  FUN_00402690(&stack0xffffff7c,"Bounty",6);
  FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,*param_1,pvVar4);
  puVar5 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar5 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      puVar1 = (uint *)*puVar5;
      if (*puVar1 == param_1[0x14]) goto LAB_00482356;
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  puVar1 = (uint *)0x0;
LAB_00482356:
  iVar2 = FUN_0051f090((int)puVar1);
  if (iVar2 == 0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    FUN_00402690(local_2c,"Unknown",7);
    ppvVar3 = local_2c;
    local_48 = 2;
  }
  else {
    ppvVar3 = (void **)FUN_004024e0(local_44,(undefined4 *)(iVar2 + 0x20));
    local_48 = 1;
  }
  local_8 = (uint)(iVar2 == 0);
  local_9c = 0x4823eb;
  FUN_00591e00(&stack0xffffff7c,
               "%s,\n\nThank you for neutralising the noted pirate and lawbreaker %s.\n\n%d credits have been transferred into your account."
              );
  local_8 = 2;
  local_9c = extraout_ECX_00 & 0xffffff00;
  FUN_00402690(&local_9c,"Bounty Earned",0xd);
  local_50 = (undefined4 *)&stack0xffffff4c;
  puVar5 = *ppvVar3;
  ppvVar3[4] = (void *)0x0;
  ppvVar3[5] = (void *)0xf;
  *(undefined1 *)ppvVar3 = 0;
  local_8._0_1_ = 4;
  pvVar4 = (void *)FUN_00412700();
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar6 = 0x482460;
  FUN_0043aad0(pvVar4,puVar5);
  local_8 = 0;
  if (((local_48 & 2) != 0) && (local_48 = local_48 & 0xfffffffd, 0xf < local_18)) {
    pvVar4 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar4 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  local_8 = 0xffffffff;
  if ((local_48 & 1) != 0) {
    if (0xf < local_30) {
      pvVar4 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar4 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar4);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
  *(undefined1 *)(param_1[0x13] + 4) = 0;
  *(undefined4 *)(param_1[0x13] + 8) = 0x4728c000;
  piVar7 = *(int **)(DAT_0065b5cc + 0x134);
  puVar5 = FUN_00414000(&local_50,(int *)&local_4c,*(int **)(DAT_0065b5cc + 0x130),piVar7);
  _Dst = (int *)*puVar5;
  if (_Dst != piVar7) {
    local_4c = (uint *)(*(int *)(DAT_0065b5cc + 0x134) - (int)piVar7);
    memmove(_Dst,piVar7,(size_t)local_4c);
    *(int *)(DAT_0065b5cc + 0x134) = (int)local_4c + (int)_Dst;
  }
  FUN_00405e80(param_1);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(local_2c,"bounties_completed",0x12);
  local_8 = 5;
  if (DAT_0065c294 == 0) {
    local_50 = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = CONCAT31(local_8._1_3_,6);
    DAT_0065c294 = FUN_0051e500(local_50);
  }
  local_8 = 0xffffffff;
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
  local_50 = (undefined4 *)&stack0xffffff78;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_00402690(&stack0xffffff78,&PTR_005ce008,0);
  local_8 = 8;
  FUN_00402690(&stack0xffffff60,"bounties_completed",0x12);
  local_8 = CONCAT31(local_8._1_3_,9);
  pvVar4 = (void *)(uVar6 & 0xffffff00);
  FUN_00402690(&stack0xffffff48,"commerce",8);
  local_8 = 0xffffffff;
  FUN_00401a50(pvVar4);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


int * __fastcall FUN_004826b0(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (uint)param_1[0x11]) {
    pvVar1 = (void *)param_1[0xc];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[0x11] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))))
    goto LAB_00482746;
    FUN_005adb3f(pvVar2);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0xf < (uint)param_1[5]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[5] + 1U) &&
       (pvVar2 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2)))) {
LAB_00482746:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar2);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  FUN_005adb3f(param_1);
  return param_1;
}


int __fastcall FUN_00482750(int param_1)

{
  if (*(float *)(param_1 + 0x18) == -1.0) {
    return -1;
  }
  return (int)(*(float *)(param_1 + 0x1c) -
              ((float)(*(int *)(DAT_0065b444 + 0x184) +
                      ((*(int *)(DAT_0065b444 + 0x18c) + *(int *)(DAT_0065b444 + 400) * 0xc) * 0x1f
                      + *(int *)(DAT_0065b444 + 0x188)) * 0x18) - *(float *)(param_1 + 0x18)));
}


void __thiscall FUN_004827c0(void *this,undefined4 *param_1,undefined4 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  byte *in_stack_ffffff64;
  char *pcVar6;
  uint uVar7;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  void *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint uStack_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_005b9030;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_44 = 0;
  uStack_40 = 0xf;
  local_54 = (void *)((uint)local_54 & 0xffffff00);
  local_14 = 0;
  uStack_13 = 0;
  FUN_004024e0(&stack0xffffff64,*(undefined4 **)((int)this + 0x58));
  iVar2 = FUN_004a8380(in_stack_ffffff64);
  if (iVar2 == 0) {
    FUN_00591070("ERROR","Unknown good type \'%s\'");
    bVar1 = cc_assert_script_compatible("Unknown good type.");
    if (!bVar1) {
      cocos2d::log("Assert failed: %s");
    }
    param_1[4] = 0;
    param_1[5] = 0xf;
    *(undefined1 *)param_1 = 0;
    FUN_00402690(param_1,"Error: unknown good.",0x14);
    if (0xf < uStack_40) {
      pvVar5 = local_54;
      if ((0xfff < uStack_40 + 1) &&
         (pvVar5 = *(void **)((int)local_54 + -4), 0x1f < (uint)((int)local_54 + (-4 - (int)pvVar5))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar5);
    }
    goto LAB_00482e20;
  }
  puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`0%d`7x `%%%s ");
  local_14 = 1;
  puVar4 = puVar3;
  if (0xf < (uint)puVar3[5]) {
    puVar4 = (undefined4 *)*puVar3;
  }
  FUN_00403640(&local_54,puVar4,puVar3[4]);
  local_14 = 0;
  if (0xf < local_28) {
    pvVar5 = local_3c[0];
    if ((0xfff < local_28 + 1) &&
       (pvVar5 = *(void **)((int)local_3c[0] + -4),
       0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  iVar2 = *(int *)(*(int *)((int)this + 0x54) + 0x18);
  if (iVar2 == 1) {
    FUN_004024e0(&stack0xffffff64,(undefined4 *)((int)this + 0x20));
    iVar2 = FUN_004a7100(in_stack_ffffff64);
    if (iVar2 == 0) {
      uVar7 = 0x1d;
      pcVar6 = "Error - unknown destination.\n";
      goto LAB_00482d44;
    }
    FUN_00591e00((undefined1 *)local_3c,"`%c%s");
    local_14 = 2;
    if (iVar2 == DAT_0065b3d4) {
      FUN_00403640(&local_54,"`7needed at `%[here]\n",0x15);
    }
    else {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_6c,"`7needed at %s\n");
      local_14 = 3;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_54,puVar4,puVar3[4]);
      local_14 = 2;
      if (0xf < local_58) {
        pvVar5 = local_6c[0];
        if ((0xfff < local_58 + 1) &&
           (pvVar5 = *(void **)((int)local_6c[0] + -4),
           0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
      local_5c = 0;
      local_58 = 0xf;
      local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
    }
    if ((param_3 != '\0') && (*(int *)(iVar2 + 0x24) != *(int *)(DAT_0065b5cc + 0xd8))) {
      puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_6c,"`7in `$%s\n");
      local_14 = 4;
      FUN_00403490(&local_54,puVar4);
      local_14 = 2;
LAB_00482a94:
      if (0xf < local_58) {
        pvVar5 = local_6c[0];
        if ((0xfff < local_58 + 1) &&
           (pvVar5 = *(void **)((int)local_6c[0] + -4),
           0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar5)))) goto LAB_00482aba;
        FUN_005adb3f(pvVar5);
      }
    }
LAB_00482aca:
    local_14 = 0;
    if (0xf < local_28) {
      pvVar5 = local_3c[0];
      if ((0xfff < local_28 + 1) &&
         (pvVar5 = *(void **)((int)local_3c[0] + -4),
         0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
LAB_00482d31:
      local_14 = 0;
      FUN_005adb3f(pvVar5);
    }
  }
  else {
    if (iVar2 == 2) {
      FUN_004024e0(&stack0xffffff64,(undefined4 *)((int)this + 0x20));
      iVar2 = FUN_004a7100(in_stack_ffffff64);
      if (iVar2 != 0) {
        FUN_00591e00((undefined1 *)local_6c,"`%c%s");
        local_14 = 5;
        if (iVar2 == DAT_0065b3d4) {
          FUN_00403640(&local_54,"`7to `%[here]\n",0xe);
        }
        else {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7to %s\n");
          local_14 = 6;
          FUN_00403490(&local_54,puVar4);
          local_14 = 5;
          if (0xf < local_28) {
            pvVar5 = local_3c[0];
            if ((0xfff < local_28 + 1) &&
               (pvVar5 = *(void **)((int)local_3c[0] + -4),
               0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar5);
          }
          local_2c = 0;
          local_28 = 0xf;
          local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
        }
        if ((param_3 != '\0') && (*(int *)(iVar2 + 0x24) != *(int *)(DAT_0065b5cc + 0xd8))) {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`7in `$%s\n");
          local_14 = 7;
          FUN_00403490(&local_54,puVar4);
          local_14 = 5;
          if (0xf < local_28) {
            pvVar5 = local_3c[0];
            if ((0xfff < local_28 + 1) &&
               (pvVar5 = *(void **)((int)local_3c[0] + -4),
               0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar5);
          }
        }
        local_14 = 0;
        if (0xf < local_58) {
          pvVar5 = local_6c[0];
          if ((0xfff < local_58 + 1) &&
             (pvVar5 = *(void **)((int)local_6c[0] + -4),
             0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          goto LAB_00482d31;
        }
        goto LAB_00482d4c;
      }
      uVar7 = 0x1c;
      pcVar6 = "Error: Unknown destination.\n";
    }
    else {
      FUN_004024e0(&stack0xffffff64,(undefined4 *)((int)this + 0x38));
      iVar2 = FUN_004a7100(in_stack_ffffff64);
      if (iVar2 != 0) {
        FUN_00591e00((undefined1 *)local_3c,"`%c%s");
        local_14 = 8;
        if (iVar2 != DAT_0065b3d4) {
          puVar4 = (undefined4 *)FUN_00591e00((undefined1 *)local_6c,"`7from %s\n");
          local_14 = 9;
          FUN_00403490(&local_54,puVar4);
          local_14 = 8;
          goto LAB_00482a94;
        }
        FUN_00403640(&local_54,"`7from `%[here]",0xf);
        goto LAB_00482aca;
      }
      uVar7 = 0x17;
      pcVar6 = "Error: unknown origin.\n";
    }
LAB_00482d44:
    FUN_00403640(&local_54,pcVar6,uVar7);
  }
LAB_00482d4c:
  if (param_3 == '\0') {
    FUN_004024e0(&stack0xffffff64,(undefined4 *)(*(int *)((int)this + 0x54) + 0x48));
    local_14 = 10;
    pvVar5 = (void *)FUN_00412490();
    local_14 = 0;
    iVar2 = FUN_004a0d10(pvVar5,in_stack_ffffff64);
    if (iVar2 == 0) {
      FUN_00403640(&local_54,"Error: unknown faction.",0x17);
    }
    else {
      puVar3 = (undefined4 *)FUN_00591e00((undefined1 *)local_3c,"`$[%s]");
      local_14 = 0xb;
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      FUN_00403640(&local_54,puVar4,puVar3[4]);
      if (0xf < local_28) {
        pvVar5 = local_3c[0];
        if ((0xfff < local_28 + 1) &&
           (pvVar5 = *(void **)((int)local_3c[0] + -4),
           0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar5)))) {
LAB_00482aba:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(pvVar5);
      }
    }
  }
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = local_54;
  param_1[1] = uStack_50;
  param_1[2] = uStack_4c;
  param_1[3] = uStack_48;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_40,local_44);
LAB_00482e20:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __thiscall FUN_00482e50(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  byte *in_stack_ffffffa0;
  char *pcVar8;
  uint uVar9;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005b9081;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffa0,*(undefined4 **)((int)this + 0x58));
  iVar3 = FUN_004a8380(in_stack_ffffffa0);
  if (iVar3 == 0) {
    FUN_00591070("ERROR","Unknown good: \'%s\'");
  }
  piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,"`7%d`8x`!%s");
  if (param_1 != piVar4) {
    FUN_00401b20(param_1);
    iVar3 = piVar4[1];
    iVar1 = piVar4[2];
    iVar2 = piVar4[3];
    *param_1 = *piVar4;
    param_1[1] = iVar3;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(piVar4 + 4);
    piVar4[4] = 0;
    piVar4[5] = 0xf;
    *(undefined1 *)piVar4 = 0;
  }
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
  FUN_00403640(param_1,&DAT_005e7468,1);
  iVar3 = *(int *)(*(int *)((int)this + 0x54) + 0x18);
  if ((iVar3 == 0) || (iVar3 == 2)) {
    puVar5 = (undefined4 *)FUN_00591e00((undefined1 *)local_2c," `2from `7");
    local_8 = 1;
    puVar6 = puVar5;
    if (0xf < (uint)puVar5[5]) {
      puVar6 = (undefined4 *)*puVar5;
    }
    FUN_00403640(param_1,puVar6,puVar5[4]);
    local_8 = local_8 & 0xffffff00;
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
    FUN_004024e0(&stack0xffffffa0,(undefined4 *)((int)this + 0x38));
    iVar3 = FUN_004a7100(in_stack_ffffffa0);
    if (iVar3 == DAT_0065b3d4) {
      uVar9 = 8;
      pcVar8 = "`2[here]";
    }
    else {
      pvVar7 = (void *)(iVar3 + 8);
      if (0xf < *(uint *)(iVar3 + 0x1c)) {
        pvVar7 = *(void **)(iVar3 + 8);
      }
      FUN_00403640(param_1,pvVar7,*(uint *)(iVar3 + 0x18));
      FUN_00403640(param_1,"`2 (`!",6);
      iVar3 = *(int *)(iVar3 + 0x24);
      pvVar7 = (void *)(iVar3 + 0x1c);
      if (0xf < *(uint *)(iVar3 + 0x30)) {
        pvVar7 = *(void **)(iVar3 + 0x1c);
      }
      FUN_00403640(param_1,pvVar7,*(uint *)(iVar3 + 0x2c));
      uVar9 = 3;
      pcVar8 = "`2)";
    }
  }
  else {
    uVar9 = 0xd;
    pcVar8 = "`2[anywhere] ";
  }
  FUN_00403640(param_1,pcVar8,uVar9);
  FUN_00403640(param_1," `2to `7",8);
  iVar3 = *(int *)(*(int *)((int)this + 0x54) + 0x18);
  if ((iVar3 == 1) || (iVar3 == 2)) {
    FUN_004024e0(&stack0xffffffa0,(undefined4 *)((int)this + 0x20));
    iVar3 = FUN_004a7100(in_stack_ffffffa0);
    pvVar7 = (void *)(iVar3 + 8);
    if (0xf < *(uint *)(iVar3 + 0x1c)) {
      pvVar7 = *(void **)(iVar3 + 8);
    }
    FUN_00403640(param_1,pvVar7,*(uint *)(iVar3 + 0x18));
    FUN_00403640(param_1,"`2 (`!",6);
    iVar3 = *(int *)(iVar3 + 0x24);
    pvVar7 = (void *)(iVar3 + 0x1c);
    if (0xf < *(uint *)(iVar3 + 0x30)) {
      pvVar7 = *(void **)(iVar3 + 0x1c);
    }
    FUN_00403640(param_1,pvVar7,*(uint *)(iVar3 + 0x2c));
    uVar9 = 3;
    pcVar8 = "`2)";
  }
  else {
    uVar9 = 0xd;
    pcVar8 = "`2[anywhere] ";
  }
  FUN_00403640(param_1,pcVar8,uVar9);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00483120(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  byte *in_stack_ffffffa4;
  void *local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 local_1c;
  uint uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005b9109;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  FUN_004024e0(&stack0xffffffa4,*(undefined4 **)((int)this + 0x58));
  iVar3 = FUN_004a8380(in_stack_ffffffa4);
  if (iVar3 == 0) {
    FUN_00591070("ERROR","Unknown good: \'%s\'");
  }
  piVar4 = (int *)FUN_00591e00((undefined1 *)&local_2c,"`7%d`8x`!%s");
  local_8 = 1;
  piVar5 = (int *)param_1[1];
  if ((int *)param_1[2] == piVar5) {
    FUN_004036d0(param_1,piVar5,piVar4);
  }
  else {
    piVar5[4] = 0;
    piVar5[5] = 0;
    iVar3 = piVar4[1];
    iVar1 = piVar4[2];
    iVar2 = piVar4[3];
    *piVar5 = *piVar4;
    piVar5[1] = iVar3;
    piVar5[2] = iVar1;
    piVar5[3] = iVar2;
    *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(piVar4 + 4);
    piVar4[4] = 0;
    piVar4[5] = 0xf;
    *(undefined1 *)piVar4 = 0;
    param_1[1] = param_1[1] + 0x18;
  }
  local_8 = local_8 & 0xffffff00;
  if (0xf < uStack_18) {
    pvVar6 = local_2c;
    if ((0xfff < uStack_18 + 1) &&
       (pvVar6 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  local_1c = 0;
  uStack_18 = 0xf;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  FUN_00402690(&local_2c,&DAT_005e7468,1);
  pvVar6 = local_2c;
  local_8 = 2;
  piVar5 = (int *)param_1[1];
  if ((int *)param_1[2] == piVar5) {
    FUN_004036d0(param_1,piVar5,(int *)&local_2c);
    uVar7 = uStack_18;
  }
  else {
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    *piVar5 = (int)pvVar6;
    piVar5[1] = iStack_28;
    piVar5[2] = iStack_24;
    piVar5[3] = iStack_20;
    *(ulonglong *)(piVar5 + 4) = CONCAT44(uStack_18,local_1c);
    param_1[1] = param_1[1] + 0x18;
    uVar7 = 0xf;
  }
  local_8 = local_8 & 0xffffff00;
  if (0xf < uVar7) {
    pvVar6 = local_2c;
    if ((0xfff < uVar7 + 1) &&
       (pvVar6 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  iVar3 = *(int *)(*(int *)((int)this + 0x54) + 0x18);
  if ((iVar3 == 0) || (iVar3 == 2)) {
    piVar5 = (int *)FUN_00591e00((undefined1 *)&local_2c," `2from `7");
    local_8 = 3;
    FUN_00403330(param_1,piVar5);
    local_8 = local_8 & 0xffffff00;
    if (0xf < uStack_18) {
      pvVar6 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    FUN_004024e0(&stack0xffffffa4,(undefined4 *)((int)this + 0x38));
    iVar3 = FUN_004a7100(in_stack_ffffffa4);
    piVar5 = (int *)param_1[1];
    if ((int *)param_1[2] == piVar5) {
      FUN_00403840(param_1,piVar5,(undefined4 *)(iVar3 + 8));
    }
    else {
      FUN_004024e0(piVar5,(undefined4 *)(iVar3 + 8));
      param_1[1] = param_1[1] + 0x18;
    }
  }
  else {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c,"`2[anywhere] ",0xd);
    local_8 = 4;
    FUN_00403330(param_1,(int *)&local_2c);
    local_8 = local_8 & 0xffffff00;
    if (0xf < uStack_18) {
      pvVar6 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
  }
  iVar3 = *(int *)((int)this + 0x54);
  if ((*(int *)(iVar3 + 0x18) == 1) || (*(int *)(iVar3 + 0x18) == 2)) {
    local_1c = 0;
    uStack_18 = 0xf;
    local_2c = (void *)((uint)local_2c & 0xffffff00);
    FUN_00402690(&local_2c," `2to `7",8);
    pvVar6 = local_2c;
    local_8 = 5;
    piVar5 = (int *)param_1[1];
    if ((int *)param_1[2] == piVar5) {
      FUN_004036d0(param_1,piVar5,(int *)&local_2c);
      uVar7 = uStack_18;
    }
    else {
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      *piVar5 = (int)pvVar6;
      piVar5[1] = iStack_28;
      piVar5[2] = iStack_24;
      piVar5[3] = iStack_20;
      *(ulonglong *)(piVar5 + 4) = CONCAT44(uStack_18,local_1c);
      param_1[1] = param_1[1] + 0x18;
      uVar7 = 0xf;
    }
    local_8 = local_8 & 0xffffff00;
    if (0xf < uVar7) {
      pvVar6 = local_2c;
      if ((0xfff < uVar7 + 1) &&
         (pvVar6 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    FUN_004024e0(&stack0xffffffa4,(undefined4 *)((int)this + 0x20));
    iVar3 = FUN_004a7100(in_stack_ffffffa4);
    piVar5 = (int *)param_1[1];
    if ((int *)param_1[2] == piVar5) {
      FUN_00403840(param_1,piVar5,(undefined4 *)(iVar3 + 8));
    }
    else {
      FUN_004024e0(piVar5,(undefined4 *)(iVar3 + 8));
      param_1[1] = param_1[1] + 0x18;
    }
    FUN_004024e0(&stack0xffffffa4,(undefined4 *)((int)this + 0x20));
    FUN_004a6f80(in_stack_ffffffa4);
    piVar5 = (int *)FUN_00591e00((undefined1 *)&local_2c," `2(in `0%s`2)");
    local_8 = 6;
    FUN_00403330(param_1,piVar5);
    local_8 = local_8 & 0xffffff00;
    if (0xf < uStack_18) {
      pvVar6 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar6);
    }
    iVar3 = *(int *)((int)this + 0x54);
  }
  if (0 < *(int *)(iVar3 + 0x44)) {
    iVar3 = FUN_00482750((int)this);
    if (iVar3 < 1) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = (void *)((uint)local_2c & 0xffffff00);
      FUN_00402690(&local_2c,"`$** expired **",0xf);
      local_8 = 8;
      FUN_00403330(param_1,(int *)&local_2c);
      if (uStack_18 < 0x10) goto LAB_00483644;
      pvVar6 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c + -4), 0x1f < (uint)((int)local_2c + (-4 - (int)pvVar6))
         )) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      piVar5 = (int *)FUN_00591e00((undefined1 *)&local_2c,"`%%%d`7 hour%s left");
      local_8 = 7;
      FUN_00403330(param_1,piVar5);
      if (uStack_18 < 0x10) goto LAB_00483644;
      pvVar6 = local_2c;
      if ((0xfff < uStack_18 + 1) &&
         (pvVar6 = *(void **)((int)local_2c + -4),
         0x1f < (uint)((int)local_2c + (-4 - (int)*(void **)((int)local_2c + -4))))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar6);
  }
LAB_00483644:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00483670(int param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  undefined1 *this;
  int iVar3;
  undefined4 extraout_ECX;
  int iVar4;
  undefined4 extraout_ECX_00;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_stack_ffffff44;
  undefined1 local_a4 [8];
  undefined4 uStack_9c;
  byte *in_stack_ffffff70;
  byte *in_stack_ffffff74;
  int local_64;
  uint local_60;
  void *local_5c;
  void *local_58 [4];
  undefined4 local_48;
  uint local_44;
  void *local_3c;
  void *pvStack_38;
  void *pvStack_34;
  void *pvStack_30;
  undefined8 local_2c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_005b918f;
  local_1c = ExceptionList;
  local_24 = DAT_0065500c ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  iVar6 = *(int *)(param_1 + 0x54);
  local_60 = 0;
  local_64 = 0;
  iVar3 = *(int *)(iVar6 + 0x80) - *(int *)(iVar6 + 0x7c);
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x18 + iVar4 != iVar4) {
    local_5c = (void *)0x0;
    puStack_20 = &stack0xfffffffc;
    do {
      FUN_004024e0(&stack0xffffff70,(undefined4 *)(*(int *)(iVar6 + 0x7c) + (int)local_5c));
      local_14 = 0;
      puVar1 = FUN_00412df0();
      local_14 = 0xffffffff;
      FUN_004a0ee0(puVar1,in_stack_ffffff70);
      local_60 = local_60 + 1;
      local_5c = (void *)((int)local_5c + 0x18);
      iVar6 = *(int *)(param_1 + 0x54);
    } while (local_60 < (uint)((*(int *)(iVar6 + 0x80) - *(int *)(iVar6 + 0x7c)) / 0x18));
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    in_stack_ffffff74 = (byte *)((uint)in_stack_ffffff74 & 0xffffff00);
    FUN_00402690(&stack0xffffff74,"Contract Bonus",0xe);
    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,*(uint *)(param_1 + 0x50),
                 in_stack_ffffff74);
    local_64 = *(int *)(param_1 + 0x50);
    FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,"Contract completion bonus: %dc"
                );
    iVar6 = *(int *)(param_1 + 0x54);
  }
  local_5c = (void *)0x0;
  if (0 < *(int *)(iVar6 + 0x60)) {
    FUN_004024e0(&stack0xffffff74,(undefined4 *)(iVar6 + 0x48));
    local_14 = 1;
    if (DAT_0065c290 == (undefined4 *)0x0) {
      DAT_0065c290 = (undefined4 *)FUN_005adb0f(0x18);
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
      *DAT_0065c290 = 0;
      DAT_0065c290[1] = 0;
      DAT_0065c290[2] = 0;
      DAT_0065c290[3] = 0;
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
    }
    local_14 = 0xffffffff;
    local_5c = (void *)FUN_004a0d10(DAT_0065c290,in_stack_ffffff74);
    FUN_004a0580(local_5c,*(int *)(*(int *)(param_1 + 0x54) + 0x60));
    iVar6 = *(int *)(param_1 + 0x54);
  }
  iVar4 = *(int *)(iVar6 + 0xa4);
  if (0 < iVar4) {
    if (*(float *)(param_1 + 0x18) == -1.0) {
      iVar3 = -1;
    }
    else {
      iVar4 = *(int *)(iVar6 + 0xa4);
      iVar3 = (int)(*(float *)(param_1 + 0x1c) -
                   ((float)(*(int *)(DAT_0065b444 + 0x184) +
                           ((*(int *)(DAT_0065b444 + 0x18c) + *(int *)(DAT_0065b444 + 400) * 0xc) *
                            0x1f + *(int *)(DAT_0065b444 + 0x188)) * 0x18) -
                   *(float *)(param_1 + 0x18)));
    }
    if (*(int *)(iVar6 + 0x44) <= iVar3) {
      local_64 = local_64 + iVar4;
      in_stack_ffffff74 = (byte *)((uint)in_stack_ffffff74 & 0xffffff00);
      FUN_00402690(&stack0xffffff74,"Contract Time Bonus",0x13);
      FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,
                   *(uint *)(*(int *)(param_1 + 0x54) + 0xa4),in_stack_ffffff74);
      FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,"Contract time bonus: %dc");
    }
  }
  FUN_004024e0(&stack0xffffff74,(undefined4 *)(param_1 + 0x38));
  FUN_004a7100(in_stack_ffffff74);
  FUN_004024e0(&stack0xffffff74,(undefined4 *)(param_1 + 0x20));
  FUN_004a7100(in_stack_ffffff74);
  local_2c = 0xf00000000;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  local_14 = 2;
  if (local_64 < 1) {
    ppvVar2 = (void **)FUN_00591e00((undefined1 *)local_58,
                                    "%s,\n\nThank you for your recent completion of a contract we offered to transport goods from %s to %s."
                                   );
    if (&local_3c != ppvVar2) {
      FUN_00401b20((int *)&local_3c);
      local_3c = *ppvVar2;
      pvStack_38 = ppvVar2[1];
      pvStack_34 = ppvVar2[2];
      pvStack_30 = ppvVar2[3];
      local_2c = *(undefined8 *)(ppvVar2 + 4);
      ppvVar2[4] = (void *)0x0;
      ppvVar2[5] = (void *)0xf;
      *(undefined1 *)ppvVar2 = 0;
    }
    if (local_44 < 0x10) goto LAB_00483ac1;
    pvVar5 = local_58[0];
    if ((0xfff < local_44 + 1) &&
       (pvVar5 = *(void **)((int)local_58[0] + -4),
       0x1f < (uint)((int)local_58[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    ppvVar2 = (void **)FUN_00591e00((undefined1 *)local_58,
                                    "%s,\n\nThank you for your recent completion of a contract we offered to transport goods from %s to %s.\n\n%d credits has been transferred into your account."
                                   );
    if (&local_3c != ppvVar2) {
      FUN_00401b20((int *)&local_3c);
      local_3c = *ppvVar2;
      pvStack_38 = ppvVar2[1];
      pvStack_34 = ppvVar2[2];
      pvStack_30 = ppvVar2[3];
      local_2c = *(undefined8 *)(ppvVar2 + 4);
      ppvVar2[4] = (void *)0x0;
      ppvVar2[5] = (void *)0xf;
      *(undefined1 *)ppvVar2 = 0;
    }
    if (local_44 < 0x10) goto LAB_00483ac1;
    pvVar5 = local_58[0];
    if ((0xfff < local_44 + 1) &&
       (pvVar5 = *(void **)((int)local_58[0] + -4),
       0x1f < (uint)((int)local_58[0] + (-4 - (int)*(void **)((int)local_58[0] + -4))))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FUN_005adb3f(pvVar5);
LAB_00483ac1:
  FUN_004024e0(&stack0xffffff74,&local_3c);
  local_14._0_1_ = 3;
  local_a4[0] = 0;
  FUN_00402690(local_a4,"Contract Complete",0x11);
  local_14._0_1_ = 4;
  FUN_004024e0(&stack0xffffff44,(undefined4 *)((int)local_5c + 0x20));
  local_14._0_1_ = 5;
  this = DAT_0065c270;
  if (DAT_0065c270 == (undefined1 *)0x0) {
    this = (undefined1 *)FUN_005adb0f(0x2c);
    DAT_0065c270 = this;
    *this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  local_14._0_1_ = 2;
  uVar7 = 0x483b86;
  FUN_0043aad0(this,in_stack_ffffff44);
  FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),1,"Contract complete.");
  FUN_00591070(&DAT_005cdc70,"Contract completed; flags and rewards set/given.");
  local_48 = 0;
  local_44 = 0xf;
  local_58[0] = (void *)((uint)local_58[0] & 0xffffff00);
  FUN_00402690(local_58,"contracts_completed",0x13);
  local_14._0_1_ = 6;
  if (DAT_0065c294 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x28);
    local_14._0_1_ = 7;
    DAT_0065c294 = FUN_0051e500(puVar1);
  }
  local_14._0_1_ = 2;
  if (0xf < local_44) {
    pvVar5 = local_58[0];
    if ((0xfff < local_44 + 1) &&
       (pvVar5 = *(void **)((int)local_58[0] + -4),
       0x1f < (uint)((int)local_58[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  uStack_9c = 0x483c62;
  FUN_00402690(&stack0xffffff70,&PTR_005ce008,0);
  local_14._0_1_ = 9;
  FUN_00402690(&stack0xffffff58,"contracts_completed",0x13);
  local_14._0_1_ = 10;
  pvVar5 = (void *)(uVar7 & 0xffffff00);
  FUN_00402690(&stack0xffffff40,"commerce",8);
  local_14 = CONCAT31(local_14._1_3_,2);
  FUN_00401a50(pvVar5);
  if (0xf < local_2c._4_4_) {
    pvVar5 = local_3c;
    if ((0xfff < local_2c._4_4_ + 1) &&
       (pvVar5 = *(void **)((int)local_3c + -4), 0x1f < (uint)((int)local_3c + (-4 - (int)pvVar5))))
    {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


void __fastcall FUN_00483d10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint extraout_ECX;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *in_stack_ffffff74;
  uint local_74;
  byte *in_stack_ffffffa0;
  byte *in_stack_ffffffa4;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b9207;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c28c == 0) {
    DAT_0065c28c = FUN_005adb0f(1);
  }
  DAT_00655060 = 0xffffffff;
  iVar5 = *(int *)(param_1 + 0x54);
  local_14 = (undefined1 *)0x0;
  iVar2 = *(int *)(iVar5 + 0x8c) - *(int *)(iVar5 + 0x88);
  iVar3 = iVar2 >> 0x1f;
  if (iVar2 / 0x18 + iVar3 != iVar3) {
    iVar3 = 0;
    do {
      local_18 = &stack0xffffffa0;
      FUN_004024e0(&stack0xffffffa0,(undefined4 *)(*(int *)(iVar5 + 0x88) + iVar3));
      local_8 = 0;
      puVar1 = FUN_00412df0();
      local_8 = 0xffffffff;
      FUN_004a0ee0(puVar1,in_stack_ffffffa0);
      iVar5 = *(int *)(param_1 + 0x54);
      local_14 = (undefined1 *)((int)local_14 + 1);
      iVar3 = iVar3 + 0x18;
    } while (local_14 < (uint)((*(int *)(iVar5 + 0x8c) - *(int *)(iVar5 + 0x88)) / 0x18));
  }
  pvVar4 = (void *)0x0;
  if (0 < *(int *)(iVar5 + 100)) {
    local_18 = &stack0xffffffa4;
    FUN_004024e0(&stack0xffffffa4,(undefined4 *)(iVar5 + 0x48));
    local_8 = 1;
    if (DAT_0065c290 == (undefined4 *)0x0) {
      DAT_0065c290 = (undefined4 *)FUN_005adb0f(0x18);
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
      *DAT_0065c290 = 0;
      DAT_0065c290[1] = 0;
      DAT_0065c290[2] = 0;
      DAT_0065c290[3] = 0;
      DAT_0065c290[4] = 0;
      DAT_0065c290[5] = 0;
    }
    local_8 = 0xffffffff;
    pvVar4 = (void *)FUN_004a0d10(DAT_0065c290,in_stack_ffffffa4);
    FUN_004a0580(pvVar4,-*(int *)(*(int *)(param_1 + 0x54) + 100));
  }
  FUN_004024e0(&stack0xffffffa4,(undefined4 *)(param_1 + 0x38));
  local_14 = (undefined1 *)FUN_004a7100(in_stack_ffffffa4);
  FUN_004024e0(&stack0xffffffa4,(undefined4 *)(param_1 + 0x20));
  FUN_004a7100(in_stack_ffffffa4);
  local_18 = &stack0xffffffa4;
  local_74 = 0x483ec0;
  FUN_00591e00(&stack0xffffffa4,
               "%s,\n\nTo our dismay, you recently failed to complete a contract you had with us to transport goods from %s to %s.\n\nThis failure has gone on our record and may affect which contracts we offer you in future."
              );
  local_14 = (undefined1 *)&local_74;
  local_8 = 2;
  local_74 = extraout_ECX & 0xffffff00;
  FUN_00402690(&local_74,"Contract Failed",0xf);
  local_1c = (undefined4 *)&stack0xffffff74;
  local_8._0_1_ = 3;
  FUN_004024e0(&stack0xffffff74,(undefined4 *)((int)pvVar4 + 0x20));
  local_8 = CONCAT31(local_8._1_3_,4);
  puVar1 = DAT_0065c270;
  if (DAT_0065c270 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(0x2c);
    DAT_0065c270 = puVar1;
    *(undefined1 *)puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    local_1c = puVar1;
  }
  local_8 = 0xffffffff;
  FUN_0043aad0(puVar1,in_stack_ffffff74);
  FUN_00527550(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224),2,"Contract failed.");
  FUN_00591070(&DAT_005cdc70,"Contract failed; flags and rewards set/given.");
  local_24 = 0;
  local_20 = 0xf;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  FUN_00402690(local_34,"contracts_failed",0x10);
  local_8 = 5;
  if (DAT_0065c294 == 0) {
    local_1c = (undefined4 *)FUN_005adb0f(0x28);
    local_8 = CONCAT31(local_8._1_3_,6);
    DAT_0065c294 = FUN_0051e500(local_1c);
  }
  if (0xf < local_20) {
    pvVar4 = local_34[0];
    if ((0xfff < local_20 + 1) &&
       (pvVar4 = *(void **)((int)local_34[0] + -4),
       0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  ExceptionList = local_10;
  return;
}
