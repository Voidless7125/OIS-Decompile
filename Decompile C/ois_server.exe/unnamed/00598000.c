#include "../ois_server.exe.h"


undefined4 __thiscall
FUN_005984e0(void *this,void *param_1,int param_2,int param_3,uint param_4,byte param_5,char param_6
            ,undefined4 param_7,uint param_8,uint param_9,undefined4 param_10)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *_Dst;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  uint _Size;
  int local_1c;
  undefined8 local_18;
  undefined4 *local_c [2];
  
  if ((7 < (int)param_4) || ((int)param_4 < 0)) {
    local_18._0_4_ = 2;
    param_4 = (uint)local_18;
  }
  local_18 = CONCAT44(local_18._4_4_,param_4);
  local_1c = param_3;
  if ((4 < param_3) || (param_3 < 0)) {
    local_1c = 1;
  }
  bVar7 = -(param_5 < 0x20) & param_5;
  _Size = param_2 + 7U >> 3;
  if (param_2 != 0) {
    puVar4 = FUN_0059af10((int)this);
    if (puVar4 != (undefined4 *)0x0) {
      local_c[0] = puVar4;
      FUN_00595a20((void *)((int)this + 0xf90),param_8,param_9,_Size,0);
      puVar4[10] = param_8;
      puVar4[0xb] = param_9;
      if (param_6 == '\0') {
        puVar4[0x12] = 0;
        puVar4[0x11] = param_1;
      }
      else {
        if (_Size < 0x81) {
          puVar4[0x12] = 2;
          _Dst = puVar4 + 0x1b;
        }
        else {
          puVar4[0x12] = 0;
          _Dst = malloc(_Size);
        }
        puVar4[0x11] = _Dst;
        memcpy(_Dst,param_1,_Size);
      }
      puVar4[6] = param_2;
      uVar5 = *(uint *)((int)this + 0x8b8);
      *(uint *)((int)this + 0x8b8) = uVar5 + 1;
      *(undefined1 *)((int)this + 0x8bb) = 0;
      puVar4[8] = uVar5 & 0xffffff;
      puVar4[0x15] = local_1c;
      puVar4[7] = (uint)local_18;
      puVar4[0x16] = param_10;
      uVar5 = *(int *)((int)this + 0xea0) - 0x20;
      local_18 = CONCAT44(local_18._4_4_,uVar5);
      if (uVar5 < _Size) {
        iVar2 = puVar4[7];
        if (iVar2 == 0) {
          puVar4[7] = 2;
        }
        else if (iVar2 == 5) {
          puVar4[7] = 6;
        }
        else if (iVar2 == 1) {
          puVar4[7] = 4;
        }
      }
      iVar2 = puVar4[7];
      if ((iVar2 == 4) || (iVar2 == 1)) {
        uVar8 = (uint)bVar7;
        *(byte *)(puVar4 + 3) = bVar7;
        puVar4[1] = *(undefined4 *)((int)this + uVar8 * 4 + 0x9a8);
        uVar3 = *(uint *)((int)this + uVar8 * 4 + 0xa28);
        *(uint *)((int)this + uVar8 * 4 + 0xa28) = uVar3 + 1;
        *(undefined1 *)((int)this + uVar8 * 4 + 0xa2b) = 0;
        puVar4[2] = uVar3 & 0xffffff;
      }
      else if ((iVar2 == 3) || (iVar2 == 7)) {
        uVar8 = (uint)bVar7;
        *(byte *)(puVar4 + 3) = bVar7;
        uVar3 = *(uint *)((int)this + uVar8 * 4 + 0x9a8);
        *(uint *)((int)this + uVar8 * 4 + 0x9a8) = uVar3 + 1;
        *(undefined1 *)((int)this + uVar8 * 4 + 0x9ab) = 0;
        puVar4[1] = uVar3 & 0xffffff;
        *(undefined4 *)((int)this + uVar8 * 4 + 0xa28) = 0;
      }
      if (uVar5 < _Size) {
        uVar6 = FUN_0059a2a0(this,puVar4);
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      iVar2 = puVar4[7];
      if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 5)) {
        if (*(int *)((int)this + 0x86c) == 0) {
          puVar4[0x1a] = puVar4;
          puVar4[0x19] = puVar4;
          *(undefined4 **)((int)this + 0x86c) = puVar4;
        }
        else {
          puVar4[0x1a] = *(int *)((int)this + 0x86c);
          iVar2 = *(int *)(*(int *)((int)this + 0x86c) + 100);
          puVar4[0x19] = iVar2;
          *(undefined4 **)(iVar2 + 0x68) = puVar4;
          *(undefined4 **)(*(int *)((int)this + 0x86c) + 100) = puVar4;
        }
      }
      local_18 = FUN_0059b6f0(this,puVar4[0x15]);
      FUN_0059bf00((void *)((int)this + 0x874),(uint *)&local_18,local_c);
      piVar1 = (int *)((int)this + puVar4[0x15] * 4 + 0x960);
      *piVar1 = *piVar1 + 1;
      *(double *)((int)this + puVar4[0x15] * 8 + 0x970) =
           (double)(puVar4[6] + 7 >> 3) + 0.0 + *(double *)((int)this + puVar4[0x15] * 8 + 0x970);
      return 1;
    }
  }
  return 0;
}


void __thiscall
FUN_005987a0(void *this,int *param_1,undefined1 (*param_2) [16],undefined4 param_3,uint param_4,
            uint param_5,int param_6,int *param_7,undefined4 param_8,uint *param_9)

{
  undefined1 auVar1 [16];
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  code cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint extraout_ECX;
  code *pcVar14;
  void *_Memory;
  int iVar15;
  int iVar16;
  int *piVar17;
  code *pcVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  undefined1 auStack_c0 [6];
  byte bStack_ba;
  byte bStack_b9;
  uint local_b8;
  uint local_b4;
  undefined1 local_ad;
  uint *local_ac;
  code *local_a8;
  int *local_a4;
  int *piStack_a0;
  uint *local_9c;
  undefined1 (*local_98) [16];
  uint uStack_94;
  int *local_90;
  code *pcStack_8c;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *puStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint *puStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  uint uStack_3c;
  uint uStack_38;
  undefined1 auStack_34 [16];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  int local_1c [2];
  undefined2 local_14;
  undefined1 local_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 local_f;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)auStack_c0;
  local_90 = param_1;
  local_98 = param_2;
  local_b8 = param_5;
  local_a4 = param_7;
  local_ac = (uint *)0x0;
  local_9c = param_9;
  uVar10 = *(uint *)((int)this + 0xe44);
  uVar11 = *(uint *)((int)this + 0xe40);
  local_b4 = param_4;
  local_a8 = this;
  if ((param_5 <= uVar10) && ((param_5 < uVar10 || (param_4 <= uVar11)))) {
    *(uint *)((int)this + 0xe40) = param_4;
    *(uint *)((int)this + 0xe44) = param_5;
    __security_check_cookie(local_c ^ (uint)auStack_c0);
    return;
  }
  *(uint *)((int)this + 0xe40) = param_4;
  uVar9 = param_4 - uVar11;
  *(uint *)((int)this + 0xe44) = param_5;
  if ((param_5 - uVar10 != (uint)(param_4 < uVar11)) || (100000 < uVar9)) {
    uVar9 = 100000;
  }
  uVar10 = 0;
  if ((*(int *)((int)this + 0x1c) != 0) || (*(int *)((int)this + 0x18) != 0)) {
    uVar11 = *(uint *)((int)this + 0xf48);
    if ((*(int *)((int)this + 0xf4c) == 0) && (uVar11 <= uVar9)) {
      puVar12 = *(uint **)((int)this + 0x86c);
      if (puVar12 != (uint *)0x0) {
        local_68 = (uint *)puVar12[0x19];
        uVar10 = puVar12[0xb] + *(int *)((int)this + 0x1c) +
                 (uint)CARRY4(puVar12[10],*(uint *)((int)this + 0x18));
        if ((uVar10 <= param_5) &&
           ((param_5 != uVar10 || (puVar12[10] + *(uint *)((int)this + 0x18) < param_4)))) {
          do {
            FUN_0059b560(this,(int)puVar12);
            uVar10 = puVar12[7];
            puVar2 = (uint *)puVar12[0x1a];
            puVar12[0x11] = 0;
            if ((uVar10 == 0) || ((uVar10 == 1 || (uVar10 == 5)))) {
              *(uint **)(puVar12[0x19] + 0x68) = puVar2;
              *(uint *)(puVar12[0x1a] + 100) = puVar12[0x19];
              if ((*(uint **)((int)this + 0x86c) == puVar12) &&
                 (puVar3 = (uint *)puVar12[0x1a], *(uint **)((int)this + 0x86c) = puVar3,
                 puVar3 == puVar12)) {
                *(undefined4 *)((int)this + 0x86c) = 0;
              }
            }
            if (puVar12 == local_68) break;
            uVar10 = puVar2[0xb] + *(int *)((int)this + 0x1c) +
                     (uint)CARRY4(puVar2[10],*(uint *)((int)this + 0x18));
            puVar12 = puVar2;
          } while ((uVar10 < local_b8) ||
                  ((uVar10 <= local_b8 && (puVar2[10] + *(uint *)((int)this + 0x18) < local_b4))));
        }
      }
      uVar10 = *(uint *)((int)this + 0x1c) >> 1;
      *(uint *)((int)this + 0xf48) =
           *(uint *)((int)this + 0x18) >> 1 | *(uint *)((int)this + 0x1c) << 0x1f;
      *(uint *)((int)this + 0xf4c) = uVar10;
    }
    else {
      *(uint *)((int)this + 0xf48) = uVar11 - uVar9;
      *(uint *)((int)this + 0xf4c) = *(int *)((int)this + 0xf4c) - (uint)(uVar11 < uVar9);
    }
  }
  if (*(int *)((int)this + 0x990) != 0) {
    uVar21 = __aulldiv(local_b4,local_b8,1000,0);
    uVar11 = (uint)uVar21;
    uVar10 = -(uint)(*(uint *)((int)this + 0x870) < uVar11);
    local_88 = (double)CONCAT44(uVar10,(uint)local_88);
    if (((uVar10 != 0) || (10000 < *(uint *)((int)this + 0x870) - uVar11)) &&
       ((uVar11 < *(uint *)((int)this + 0x870) ||
        (*(uint *)((int)this + 0x8c0) < uVar11 - *(uint *)((int)this + 0x870))))) {
      *(undefined1 *)((int)this + 0x8bc) = 1;
      __security_check_cookie(local_c ^ (uint)auStack_c0);
      return;
    }
  }
  local_88 = -1.0;
  if ((*(double *)((int)this + 0xed8) != -1.0) &&
     (uVar22 = FUN_005af240(), uVar10 = extraout_ECX, uVar22 != 0xffffffffffffffff)) {
    uVar10 = *(uint *)((int)this + 0xeb8) + 10000;
    uVar11 = *(int *)((int)this + 0xebc) + (uint)(0xffffd8ef < *(uint *)((int)this + 0xeb8));
    puVar12 = local_9c;
    if ((local_b8 < uVar11) || ((local_b8 <= uVar11 && (local_b4 < uVar10)))) goto LAB_00598a46;
  }
  puVar12 = local_9c;
  FUN_0059ade0(this,local_90,(undefined4 *)local_98,local_b4,local_b8,uVar10,local_9c);
LAB_00598a46:
  if (*(int *)((int)this + 0xf70) != 0) {
    *puVar12 = 0;
    puVar12[2] = 0;
    local_14 = 0x100;
    local_12 = (code)0x0;
    FUN_00595d20(local_1c,puVar12);
    FUN_0059c7b0((void *)((int)this + 0xf6c),(int *)puVar12,*(int *)((int)this + 0xea0) * 8 - 0x48);
    uVar10 = *puVar12 + 7 >> 3;
    FUN_00595a20((void *)((int)this + 0x1030),local_b4,local_b8,uVar10,0);
    local_58 = *(uint *)*local_98;
    uStack_54 = *(uint *)(*local_98 + 4);
    uStack_50 = *(undefined4 *)(*local_98 + 8);
    uStack_4c = *(undefined4 *)(*local_98 + 0xc);
    local_60 = local_9c[3];
    local_46 = *(undefined2 *)(local_98[1] + 2);
    local_48 = *(undefined2 *)local_98[1];
    local_44 = 0;
    local_5c = uVar10;
    (**(code **)(*local_90 + 4))
              (&local_60,"f:\\src\\ois\\libs\\raknet\\code\\reliabilitylayer.cpp",0x922);
  }
  if ((*(double *)((int)this + 0xea8) <= *(double *)((int)this + 0xeb0)) ||
     (local_f = 0, *(double *)((int)this + 0xeb0) == 0.0)) {
    local_f = 1;
  }
  local_ad = *(code *)((int)this + 0xe78);
  *(bool *)((int)this + 0xe78) = *(int *)((int)this + 0x878) != 0;
  if ((*(int *)((int)this + 0x868) != 0) || (bStack_ba = 0, *(int *)((int)this + 0x878) != 0)) {
    bStack_ba = 1;
  }
  *(undefined4 *)((int)this + 0x95c) = 0;
  uStack_80 = param_6 + 7U >> 3;
  *(undefined4 *)((int)this + 0x948) = 0;
  *(undefined4 *)((int)this + 0x94c) = 0;
  *(uint *)((int)this + 0x958) = uStack_80;
  uVar10 = *(int *)((int)this + 0x1074) + (uint)(0xfffe795f < *(uint *)((int)this + 0x1070));
  if ((uVar10 <= local_b8) &&
     ((uVar10 < local_b8 || (*(uint *)((int)this + 0x1070) + 100000 < local_b4)))) {
    piVar17 = (int *)((int)this + 0xfa4);
    piStack_a0 = (int *)0x7;
LAB_00598be0:
    do {
      iVar16 = *piVar17;
      if (iVar16 == piVar17[1]) {
LAB_00598c48:
        bVar7 = false;
      }
      else {
        local_ac = (uint *)((uint)local_ac | 1);
        auVar1 = *(undefined1 (*) [16])(iVar16 * 0x10 + piVar17[-1]);
        uVar11 = auVar1._8_4_;
        uVar10 = auVar1._12_4_ + (uint)(0xfff0bdbf < uVar11);
        if ((local_b8 < uVar10) || ((local_b8 <= uVar10 && (local_b4 <= uVar11 + 1000000))))
        goto LAB_00598c48;
        bVar7 = true;
      }
      if (((uint)local_ac & 1) != 0) {
        local_ac = (uint *)((uint)local_ac & 0xfffffffe);
      }
      if (bVar7) {
        auVar1 = *(undefined1 (*) [16])(iVar16 * 0x10 + piVar17[-1]);
        uVar11 = auVar1._0_4_;
        puVar12 = (uint *)(piVar17 + -3);
        uVar10 = *puVar12;
        *puVar12 = *puVar12 - uVar11;
        piVar17[-2] = (piVar17[-2] - auVar1._4_4_) - (uint)(uVar10 < uVar11);
        *piVar17 = *piVar17 + 1;
        if (*piVar17 == piVar17[2]) {
          *piVar17 = 0;
        }
        goto LAB_00598be0;
      }
      piVar17 = piVar17 + 8;
      piStack_a0 = (int *)((int)piStack_a0 + -1);
    } while (piStack_a0 != (int *)0x0);
    *(uint *)(local_a8 + 0x1070) = local_b4;
    *(uint *)(local_a8 + 0x1074) = local_b8;
    piStack_a0 = (int *)0x0;
    this = local_a8;
  }
  if (*(int *)((int)this + 0x48) != 0) {
    piVar17 = (int *)0x0;
    local_a8 = malloc_exref;
    piStack_a0 = (int *)0x0;
    local_ac = (uint *)0x0;
    do {
      puVar12 = (uint *)(*(int *)((int)this + 0x44) + 8 + (int)local_ac);
      local_68 = (uint *)(local_b4 - *puVar12);
      uVar10 = (local_b8 - *(int *)(*(int *)((int)this + 0x44) + 0xc + (int)local_ac)) -
               (uint)(local_b4 < *puVar12);
      if ((uVar10 < 0x80000000) && ((uVar10 < 0x7fffffff || (local_68 != (uint *)0xffffffff)))) {
        puVar12 = FUN_0059af10((int)this);
        puVar12[0x12] = 0;
        local_68 = puVar12;
        puVar13 = (undefined1 *)(*local_a8)(5);
        puVar12[0x11] = (uint)puVar13;
        puVar12[6] = 0x28;
        *puVar13 = 0xf;
        *(undefined4 *)(puVar12[0x11] + 1) =
             *(undefined4 *)(*(int *)((int)this + 0x44) + 4 + (int)local_ac);
        FUN_0059bac0(this,&local_68);
        piVar17 = piStack_a0;
        FUN_0059be80((code *)((int)this + 0x44),(uint)piStack_a0);
      }
      else {
        piVar17 = (int *)((int)piVar17 + 1);
        local_ac = local_ac + 4;
        piStack_a0 = piVar17;
      }
    } while (piVar17 < *(int **)((int)this + 0x48));
  }
  if (bStack_ba == 1) {
    local_14 = 0;
    uStack_11 = 0;
    if (*(uint *)((int)this + 0xefc) != 0) {
      if (0x200 < *(uint *)((int)this + 0xefc)) {
        free(*(void **)((int)this + 0xef4));
        *(undefined4 *)((int)this + 0xefc) = 0;
        *(undefined4 *)((int)this + 0xef4) = 0;
      }
      *(undefined4 *)((int)this + 0xef8) = 0;
    }
    if (*(uint *)((int)this + 0xf08) != 0) {
      if (0x200 < *(uint *)((int)this + 0xf08)) {
        free(*(void **)((int)this + 0xf00));
        *(undefined4 *)((int)this + 0xf08) = 0;
        *(undefined4 *)((int)this + 0xf00) = 0;
      }
      *(undefined4 *)((int)this + 0xf04) = 0;
    }
    if (*(uint *)((int)this + 0xf14) != 0) {
      if (0x200 < *(uint *)((int)this + 0xf14)) {
        free(*(void **)((int)this + 0xf0c));
        *(undefined4 *)((int)this + 0xf14) = 0;
        *(undefined4 *)((int)this + 0xf0c) = 0;
      }
      *(undefined4 *)((int)this + 0xf10) = 0;
    }
    if (*(uint *)((int)this + 0xf20) != 0) {
      if (0x200 < *(uint *)((int)this + 0xf20)) {
        free(*(void **)((int)this + 0xf18));
        *(undefined4 *)((int)this + 0xf20) = 0;
        *(undefined4 *)((int)this + 0xf18) = 0;
      }
      *(undefined4 *)((int)this + 0xf1c) = 0;
    }
    if (*(uint *)((int)this + 0xf2c) != 0) {
      if (0x200 < *(uint *)((int)this + 0xf2c)) {
        free(*(void **)((int)this + 0xf24));
        *(undefined4 *)((int)this + 0xf2c) = 0;
        *(undefined4 *)((int)this + 0xf24) = 0;
      }
      *(undefined4 *)((int)this + 0xf28) = 0;
    }
    *(undefined4 *)((int)this + 0xf30) = 0;
    *(code *)((int)this + 0xed0) = local_ad;
    dVar19 = (double)*(int *)((int)this + 0xef0) +
             *(double *)(&DAT_0062f350 + (*(int *)((int)this + 0xef0) >> 0x1f) * -8);
    if (*(double *)((int)this + 0xea8) < dVar19) {
      piStack_a0 = (int *)0x0;
    }
    else {
      piStack_a0 = (int *)(int)(*(double *)((int)this + 0xea8) - dVar19);
    }
    uStack_94 = *(uint *)((int)this + 0xef0);
    if (((int)uStack_94 < 1) && ((int)piStack_a0 < 1)) {
      *(code *)((int)this + 0x940) = (code)0x1;
    }
    else {
      *(code *)((int)this + 0x940) = (code)0x0;
      *(undefined4 *)((int)this + 0xf34) = 0;
      if (0 < (int)uStack_94) {
        while( true ) {
          puVar12 = *(uint **)((int)this + 0x868);
          bStack_ba = 0;
          local_ac = puVar12;
          if (puVar12 == (uint *)0x0) break;
          do {
            uVar10 = (local_b8 - puVar12[0xd]) - (uint)(local_b4 < puVar12[0xc]);
            local_ac = puVar12;
            if ((0x7fffffff < uVar10) || ((0x7ffffffe < uVar10 && (local_b4 - puVar12[0xc] == -1))))
            {
              iVar16 = *(int *)((int)this + 0xf30);
joined_r0x00599225:
              if (iVar16 != 0) {
                local_68 = *(uint **)((int)this + 0xef8);
                FUN_0059b980((code *)((int)this + 0xf0c),&local_68);
                bStack_b9 = 0;
                FUN_0059c3f0((code *)((int)this + 0xf18),&bStack_b9);
                local_68 = (uint *)(*(int *)((int)this + 0xf30) + 7U >> 3);
                FUN_0059b980((code *)((int)this + 0xf24),&local_68);
                *(undefined4 *)((int)this + 0xf30) = 0;
              }
              if (bStack_ba == 0) goto LAB_005992ae;
              break;
            }
            iVar16 = *(int *)((int)this + 0xf30);
            if (*(int *)((int)this + 0xea0) * 8 - 0x48U < puVar12[0x10] + iVar16 + puVar12[6])
            goto joined_r0x00599225;
            *(uint *)(puVar12[0x17] + 0x60) = puVar12[0x18];
            *(uint *)(puVar12[0x18] + 0x5c) = puVar12[0x17];
            if ((*(uint **)((int)this + 0x868) == puVar12) &&
               (puVar2 = (uint *)puVar12[0x18], *(uint **)((int)this + 0x868) = puVar2,
               puVar2 == puVar12)) {
              *(undefined4 *)((int)this + 0x868) = 0;
            }
            FUN_00595a20((code *)((int)this + 0xfd0),local_b4,local_b8,puVar12[6] + 7 >> 3,0);
            iVar16 = (puVar12[0x10] + 7 & 0xfffffff8) + (puVar12[6] + 7 & 0xfffffff8);
            *(int *)((int)this + 0xf30) = *(int *)((int)this + 0xf30) + iVar16;
            *(int *)((int)this + 0xf34) = *(int *)((int)this + 0xf34) + iVar16;
            local_68 = puVar12;
            FUN_0059b980((code *)((int)this + 0xef4),&local_68);
            bStack_ba = 0;
            FUN_0059c3f0((code *)((int)this + 0xf00),&bStack_ba);
            *(char *)(puVar12 + 0x14) = (char)puVar12[0x14] + '\x01';
            if ((*(code *)((int)this + 0xed0) != (code)0x0) &&
               (*(code *)((int)this + 0xec8) == (code)0x0)) {
              iVar16 = *(int *)((int)this + 0xea0);
              if ((double)(iVar16 * 2) + *(double *)(&DAT_0062f350 + (iVar16 * 2 >> 0x1f) * -8) <
                  *(double *)((int)this + 0xea8)) {
                dVar20 = *(double *)((int)this + 0xea8) * 0.5;
                *(double *)((int)this + 0xeb0) = dVar20;
                dVar19 = (double)iVar16 + *(double *)(&DAT_0062f350 + (iVar16 >> 0x1f) * -8);
                if (dVar20 < dVar19) {
                  *(double *)((int)this + 0xeb0) = dVar19;
                }
                *(double *)((int)this + 0xea8) = dVar19;
                *(undefined4 *)((int)this + 0xec4) = *(undefined4 *)((int)this + 0xec0);
                *(code *)((int)this + 0xec8) = (code)0x1;
              }
            }
            if (*(double *)((int)this + 0xee0) == local_88) {
LAB_0059912b:
              lVar5 = 2000000;
            }
            else {
              uVar22 = FUN_005af240();
              lVar5 = uVar22 + 30000;
              if (((int)((ulonglong)lVar5 >> 0x20) != 0) || (2000000 < (uint)lVar5))
              goto LAB_0059912b;
            }
            *(longlong *)(puVar12 + 0xe) = lVar5;
            *(longlong *)(puVar12 + 0xc) = lVar5 + CONCAT44(local_b8,local_b4);
            bStack_ba = 1;
            local_a8 = (code *)0x0;
            if (local_a4[1] != 0) {
              uVar21 = __aulldiv(local_b4,local_b8,1000,0);
              do {
                uStack_74 = (undefined4)((ulonglong)uVar21 >> 0x20);
                local_68 = (uint *)uVar21;
                (**(code **)(**(int **)(*local_a4 + (int)local_a8 * 4) + 0x38))
                          (local_ac,*(int *)((int)this + 0xec0) + *(int *)((int)this + 0xf10));
                uVar21 = CONCAT44(uStack_74,local_68);
                local_a8 = local_a8 + 1;
                puVar12 = local_ac;
              } while (local_a8 < (code *)local_a4[1]);
            }
            if (*(uint *)((int)this + 0x868) == 0) {
              puVar12[0x18] = (uint)puVar12;
              puVar12[0x17] = (uint)puVar12;
              *(uint **)((int)this + 0x868) = puVar12;
            }
            else {
              puVar12[0x18] = *(uint *)((int)this + 0x868);
              uVar10 = *(uint *)(*(int *)((int)this + 0x868) + 0x5c);
              puVar12[0x17] = uVar10;
              *(uint **)(uVar10 + 0x60) = puVar12;
              *(uint **)(*(int *)((int)this + 0x868) + 0x5c) = puVar12;
              puVar12 = *(uint **)((int)this + 0x868);
            }
            local_ac = puVar12;
          } while (puVar12 != (uint *)0x0);
          if ((int)uStack_94 <= (int)(*(int *)((int)this + 0xf34) + 7U >> 3)) break;
        }
      }
    }
LAB_005992ae:
    if (((int)(*(int *)((int)this + 0xf34) + 7U >> 3) < (int)piStack_a0) &&
       (*(undefined4 *)((int)this + 0xf34) = 0,
       *(int *)((int)this + (*(uint *)((int)this + 0x8b4) & 0x1ff) * 4 + 0x68) == 0)) {
LAB_005992f0:
      if (((int)(*(int *)((int)this + 0xf34) + 7U >> 3) < (int)piStack_a0) ||
         ((*(int *)((int)this + 0xf5c) == 0 && (*(int *)((int)this + 0xf1c) == 1)))) {
        if ((param_6 == 0) ||
           ((*(int *)((int)this + 0xfbc) == 0 && (*(uint *)((int)this + 0xfb8) <= uStack_80)))) {
          cVar8 = (code)0x0;
        }
        else {
          cVar8 = (code)0x1;
        }
        iVar16 = *(int *)((int)this + 0x878);
        *(code *)((int)this + 0x950) = cVar8;
        do {
          if ((iVar16 == 0) || (*(code *)((int)this + 0x950) != (code)0x0)) goto LAB_0059983d;
          puVar12 = *(uint **)(*(int *)((int)this + 0x874) + 8);
          local_68 = puVar12;
          if (puVar12[0x11] == 0) {
            FUN_0059bf80((int *)((int)this + 0x874));
            *(int *)((int)this + puVar12[0x15] * 4 + 0x960) =
                 *(int *)((int)this + puVar12[0x15] * 4 + 0x960) + -1;
            *(double *)((int)this + puVar12[0x15] * 8 + 0x970) =
                 *(double *)((int)this + puVar12[0x15] * 8 + 0x970) -
                 ((double)(puVar12[6] + 7 >> 3) + 0.0);
            FUN_0059b080(this,(int)puVar12);
          }
          else {
            uVar10 = puVar12[7];
            uVar11 = 0x18;
            if ((((uVar10 == 2) || (uVar10 == 4)) || (uVar10 == 3)) ||
               ((uVar10 == 6 || (uVar10 == 7)))) {
              uVar11 = 0x30;
            }
            if ((uVar10 == 1) || (uVar10 == 4)) {
              uVar11 = uVar11 + 0x18;
            }
            if ((((uVar10 == 1) || (uVar10 == 4)) || (uVar10 == 3)) || (uVar10 == 7)) {
              uVar11 = uVar11 + 0x20;
            }
            uVar9 = uVar11 + 0x50;
            if (puVar12[5] == 0) {
              uVar9 = uVar11;
            }
            puVar12[0x10] = uVar9;
            if (*(int *)((int)this + 0xea0) * 8 - 0x48U <
                *(int *)((int)this + 0xf30) + puVar12[6] + uVar9) goto LAB_0059983d;
            if (((uVar10 == 2) || (uVar10 == 4)) ||
               ((uVar10 == 3 || ((uVar10 == 6 || (bStack_ba = 0, uVar10 == 7)))))) {
              bStack_ba = 1;
            }
            FUN_0059bf80((int *)((int)this + 0x874));
            lVar5 = CONCAT44(puStack_64,puStack_78);
            *(int *)((int)this + puVar12[0x15] * 4 + 0x960) =
                 *(int *)((int)this + puVar12[0x15] * 4 + 0x960) + -1;
            *(double *)((int)this + puVar12[0x15] * 8 + 0x970) =
                 *(double *)((int)this + puVar12[0x15] * 8 + 0x970) -
                 ((double)(puVar12[6] + 7 >> 3) + 0.0);
            if (bStack_ba == 0) {
              if (puVar12[7] == 5) {
                if (*(double *)((int)this + 0xee0) == local_88) {
LAB_00599603:
                  lVar5 = 2000000;
                }
                else {
                  uVar22 = FUN_005af240();
                  lVar5 = uVar22 + 30000;
                  if (((int)((ulonglong)lVar5 >> 0x20) != 0) || (2000000 < (uint)lVar5))
                  goto LAB_00599603;
                }
                uStack_7c = puVar12[0x16];
                lVar5 = lVar5 + CONCAT44(local_b8,local_b4);
                puStack_78 = (uint *)lVar5;
                local_ac = (uint *)(*(int *)((int)this + 0xec0) + *(int *)((int)this + 0xf10) &
                                   0xffffff);
                puStack_64 = (uint *)((ulonglong)lVar5 >> 0x20);
                iVar15 = *(int *)((int)this + 0x48);
                iVar16 = *(int *)((int)this + 0x4c);
                if (iVar15 == iVar16) {
                  if (iVar16 == 0) {
                    *(undefined4 *)((int)this + 0x4c) = 0x10;
                    uVar10 = 0x10;
LAB_0059965c:
                    local_a8 = (code *)FUN_005ae4ea(-(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20)
                                                           != 0) | (uint)((ulonglong)uVar10 * 0x10))
                    ;
                    lVar5 = CONCAT44(puStack_64,puStack_78);
                    iVar15 = *(int *)((int)this + 0x48);
                    pcStack_8c = local_a8;
                  }
                  else {
                    uVar10 = iVar16 * 2;
                    *(uint *)((int)this + 0x4c) = uVar10;
                    if (uVar10 != 0) goto LAB_0059965c;
                    local_a8 = (code *)0x0;
                  }
                  puStack_64 = (uint *)((ulonglong)lVar5 >> 0x20);
                  puStack_78 = (uint *)lVar5;
                  _Memory = *(void **)((int)this + 0x44);
                  if (_Memory != (void *)0x0) {
                    uStack_94 = 0;
                    if (iVar15 != 0) {
                      uVar10 = 0;
                      pcVar18 = local_a8 + 8;
                      pcStack_8c = (code *)(-8 - (int)local_a8);
                      do {
                        uVar10 = uVar10 + 1;
                        pcVar14 = pcStack_8c + *(int *)((int)this + 0x44) + (int)pcVar18;
                        *(undefined4 *)(pcVar18 + -8) =
                             *(undefined4 *)(pcStack_8c + *(int *)((int)this + 0x44) + (int)pcVar18)
                        ;
                        *(undefined4 *)(pcVar18 + -4) = *(undefined4 *)(pcVar14 + 4);
                        *(undefined4 *)pcVar18 = *(undefined4 *)(pcVar14 + 8);
                        *(undefined4 *)(pcVar18 + 4) = *(undefined4 *)(pcVar14 + 0xc);
                        pcVar18 = pcVar18 + 0x10;
                      } while (uVar10 < *(uint *)((int)this + 0x48));
                      _Memory = *(void **)((int)this + 0x44);
                      puVar12 = local_68;
                    }
                    free(_Memory);
                    lVar5 = CONCAT44(puStack_64,puStack_78);
                  }
                  *(code **)((int)this + 0x44) = local_a8;
                  pcVar18 = local_a8;
                }
                else {
                  pcVar18 = *(code **)((int)this + 0x44);
                }
                pcVar18 = pcVar18 + *(int *)((int)this + 0x48) * 0x10;
                *(uint **)pcVar18 = local_ac;
                *(uint *)(pcVar18 + 4) = uStack_7c;
                *(longlong *)(pcVar18 + 8) = lVar5;
                *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 1;
              }
            }
            else {
              *(undefined1 *)(puVar12 + 9) = 1;
              uStack_94 = *(uint *)((int)this + 0x8b4);
              *puVar12 = uStack_94;
              if (*(double *)((int)this + 0xee0) == local_88) {
LAB_00599509:
                lVar6 = 2000000;
              }
              else {
                uVar22 = FUN_005af240();
                lVar6 = uVar22 + 30000;
                if (((int)((ulonglong)lVar6 >> 0x20) != 0) || (2000000 < (uint)lVar6))
                goto LAB_00599509;
              }
              lVar5 = CONCAT44(puStack_64,puStack_78);
              *(longlong *)(puVar12 + 0xe) = lVar6;
              *(longlong *)(puVar12 + 0xc) = lVar6 + CONCAT44(local_b8,local_b4);
              *(uint **)((int)this + (uStack_94 & 0x1ff) * 4 + 0x68) = puVar12;
              *(int *)((int)this + 0x990) = *(int *)((int)this + 0x990) + 1;
              uVar11 = puVar12[6] + 7 >> 3;
              pcVar18 = (code *)((int)this + 0x998);
              uVar10 = *(uint *)pcVar18;
              *(uint *)pcVar18 = *(uint *)pcVar18 + uVar11;
              *(uint *)((int)this + 0x99c) =
                   *(int *)((int)this + 0x99c) + (uint)CARRY4(uVar10,uVar11);
              *(uint *)((int)this + 0xef0) =
                   *(int *)((int)this + 0xef0) + (puVar12[0x10] + 7 + puVar12[6] >> 3);
              if (*(uint *)((int)this + 0x868) == 0) {
                puVar12[0x18] = (uint)puVar12;
                puVar12[0x17] = (uint)puVar12;
                *(uint **)((int)this + 0x868) = puVar12;
                *(int *)((int)this + 0x8b4) = *(int *)((int)this + 0x8b4) + 1;
                *(code *)((int)this + 0x8b7) = (code)0x0;
                lVar5 = CONCAT44(puStack_64,puStack_78);
              }
              else {
                puVar12[0x18] = *(uint *)((int)this + 0x868);
                uVar10 = *(uint *)(*(int *)((int)this + 0x868) + 0x5c);
                puVar12[0x17] = uVar10;
                *(uint **)(uVar10 + 0x60) = puVar12;
                *(uint **)(*(int *)((int)this + 0x868) + 0x5c) = puVar12;
                *(int *)((int)this + 0x8b4) = *(int *)((int)this + 0x8b4) + 1;
                *(code *)((int)this + 0x8b7) = (code)0x0;
              }
            }
            puStack_64 = (uint *)((ulonglong)lVar5 >> 0x20);
            puStack_78 = (uint *)lVar5;
            FUN_00595a20((code *)((int)this + 0xfb0),local_b4,local_b8,puVar12[6] + 7 >> 3,0);
            iVar16 = (puVar12[6] + 7 & 0xfffffff8) + (puVar12[0x10] + 7 & 0xfffffff8);
            *(int *)((int)this + 0xf30) = *(int *)((int)this + 0xf30) + iVar16;
            *(int *)((int)this + 0xf34) = *(int *)((int)this + 0xf34) + iVar16;
            puStack_64 = puVar12;
            FUN_0059b980((code *)((int)this + 0xef4),&puStack_64);
            bStack_b9 = bStack_ba ^ 1;
            FUN_0059c3f0((code *)((int)this + 0xf00),&bStack_b9);
            *(char *)(puVar12 + 0x14) = (char)puVar12[0x14] + '\x01';
            pcVar18 = (code *)0x0;
            local_a8 = (code *)0x0;
            if (local_a4[1] != 0) {
              uVar21 = __aulldiv(local_b4,local_b8,1000,0);
              puStack_64 = (uint *)uVar21;
              do {
                uStack_74 = (undefined4)((ulonglong)uVar21 >> 0x20);
                (**(code **)(**(int **)(*local_a4 + (int)pcVar18 * 4) + 0x38))
                          (local_68,*(int *)((int)this + 0xec0) + *(int *)((int)this + 0xf10));
                uVar21 = CONCAT44(uStack_74,puStack_64);
                pcVar18 = local_a8 + 1;
                local_a8 = pcVar18;
              } while (pcVar18 < (code *)local_a4[1]);
            }
            if (*(int *)((int)this + (*(uint *)((int)this + 0x8b4) & 0x1ff) * 4 + 0x68) != 0)
            goto LAB_0059983d;
          }
          iVar16 = *(int *)((int)this + 0x878);
        } while( true );
      }
    }
LAB_005998cf:
    local_a8 = (code *)0x0;
    cVar8 = local_ad;
    if (*(int *)((int)this + 0xf10) != 0) {
      do {
        if (local_a8 != (code *)0x0) {
          cVar8 = (code)0x1;
        }
        local_1c[0] = *(int *)((int)this + 0xec0);
        puVar12 = (uint *)0x0;
        local_ac = (uint *)0x0;
        *(int *)((int)this + 0xec0) = local_1c[0] + 1;
        *(code *)((int)this + 0xec3) = (code)0x0;
        local_12 = local_a8[*(int *)((int)this + 0xf18)];
        if (((local_12 == (code)0x0) || (local_a8 == (code *)0x0)) ||
           (local_ad = (code)0x1, local_a8[*(int *)((int)this + 0xf18) + -1] == (code)0x0)) {
          local_ad = (code)0x0;
        }
        puVar4 = *(undefined4 **)((int)this + 0xf0c);
        if (local_a8 == (code *)0x0) {
          piStack_a0 = (int *)*puVar4;
          local_a4 = (int *)0x0;
        }
        else {
          local_a4 = (int *)puVar4[(int)(local_a8 + -1)];
          piStack_a0 = (int *)puVar4[(int)local_a8];
        }
        *local_9c = 0;
        local_9c[2] = 0;
        uStack_10 = cVar8;
        FUN_00595d20(local_1c,local_9c);
        if (local_a4 < piStack_a0) {
          do {
            puVar2 = *(uint **)(*(int *)((int)this + 0xef4) + (int)local_a4 * 4);
            uVar10 = puVar2[7];
            if ((uVar10 != 0) && (uVar10 != 1)) {
              uVar10 = *puVar2;
              if (local_ac == (uint *)0x0) {
                uVar11 = *(uint *)((int)this + 0x24);
                if (*(uint *)((int)this + 0x28) < uVar11) {
                  iVar16 = *(int *)((int)this + 0x2c) - uVar11;
                }
                else {
                  iVar16 = -uVar11;
                }
                if (0x200 < *(uint *)((int)this + 0x28) + iVar16) {
                  FUN_0059b260(this,*(int *)((int)this + 0x50));
                  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
                  if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x2c)) {
                    *(undefined4 *)((int)this + 0x24) = 0;
                  }
                  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
                  *(code *)((int)this + 0x53) = (code)0x0;
                }
                local_ac = (uint *)FUN_0059bc90((int *)((int)this + 0x30));
                local_ac[1] = 0;
                *local_ac = uVar10;
                uStack_70 = local_b4;
                uStack_6c = local_b8;
                puStack_78 = local_ac;
                FUN_0059bb90((code *)((int)this + 0x20),&puStack_78);
                puVar12 = local_ac;
              }
              else {
                puVar12 = (uint *)FUN_0059bc90((int *)((int)this + 0x30));
                local_ac[1] = (uint)puVar12;
                *puVar12 = uVar10;
                *(undefined4 *)(local_ac[1] + 4) = 0;
                puVar12 = (uint *)local_ac[1];
                local_ac = puVar12;
              }
            }
            FUN_00599e70(local_9c,*(undefined1 **)(*(int *)((int)this + 0xef4) + (int)local_a4 * 4))
            ;
            local_a4 = (int *)((int)local_a4 + 1);
          } while (local_a4 < piStack_a0);
        }
        if (local_ad != (code)0x0) {
          uVar10 = *(uint *)(*(int *)((int)this + 0xf24) + -4 + (int)local_a8 * 4);
          uVar11 = *local_9c;
          if (uVar11 + 7 >> 3 < uVar10) {
            iVar16 = uVar11 - (uVar11 - 1 & 7);
            *local_9c = iVar16 + 7;
            local_68 = (uint *)(uVar10 - (iVar16 + 0xeU >> 3));
            FUN_005ab5d0(local_9c,(int)local_68 * 8);
            memset((void *)((*local_9c + 7 >> 3) + local_9c[3]),0,(size_t)local_68);
            *local_9c = *local_9c + (int)local_68 * 8;
          }
        }
        if (puVar12 == (uint *)0x0) {
          uVar10 = *(uint *)((int)this + 0x24);
          if (*(uint *)((int)this + 0x28) < uVar10) {
            iVar16 = *(int *)((int)this + 0x2c) - uVar10;
          }
          else {
            iVar16 = -uVar10;
          }
          if (0x200 < *(uint *)((int)this + 0x28) + iVar16) {
            FUN_0059b260(this,*(int *)((int)this + 0x50));
            *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
            if (*(int *)((int)this + 0x24) == *(int *)((int)this + 0x2c)) {
              *(undefined4 *)((int)this + 0x24) = 0;
            }
            *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
            *(code *)((int)this + 0x53) = (code)0x0;
          }
          local_58 = local_b4;
          uStack_54 = local_b8;
          local_60 = 0;
          FUN_0059bb90((code *)((int)this + 0x20),&local_60);
        }
        uVar10 = *local_9c + 7 >> 3;
        FUN_00595a20((code *)((int)this + 0x1030),local_b4,local_b8,uVar10,0);
        auStack_34 = *local_98;
        uStack_3c = local_9c[3];
        uStack_22 = *(undefined2 *)(local_98[1] + 2);
        uStack_24 = *(undefined2 *)local_98[1];
        uStack_20 = 0;
        uStack_38 = uVar10;
        (**(code **)(*local_90 + 4))
                  (&uStack_3c,"f:\\src\\ois\\libs\\raknet\\code\\reliabilitylayer.cpp",0x922);
        *(bool *)((int)this + 0xe78) = *(int *)((int)this + 0x878) != 0;
        uVar10 = local_b4;
        uVar11 = local_b8;
        if (*(int *)((int)this + 0x878) == 0) {
          local_88 = 0.0;
          local_88._4_4_ = 0;
          local_88._0_4_ = 0;
          uVar10 = (uint)local_88;
          uVar11 = local_88._4_4_;
        }
        *(uint *)((int)this + 0xf40) = uVar10;
        local_a8 = local_a8 + 1;
        *(uint *)((int)this + 0xf44) = uVar11;
        cVar8 = uStack_10;
      } while (local_a8 < *(code **)((int)this + 0xf10));
    }
    FUN_0059ad00(this);
    *(bool *)((int)this + 0xe78) = *(int *)((int)this + 0x878) != 0;
  }
  __security_check_cookie(local_c ^ (uint)auStack_c0);
  return;
LAB_0059983d:
  if (*(int *)((int)this + 0xf30) == 0) goto LAB_005998cf;
  puStack_64 = *(uint **)((int)this + 0xef8);
  FUN_0059b980((code *)((int)this + 0xf0c),&puStack_64);
  bStack_b9 = 0;
  FUN_0059c3f0((code *)((int)this + 0xf18),&bStack_b9);
  puStack_64 = (uint *)(*(int *)((int)this + 0xf30) + 7U >> 3);
  FUN_0059b980((code *)((int)this + 0xf24),&puStack_64);
  *(undefined4 *)((int)this + 0xf30) = 0;
  if (*(int *)((int)this + (*(uint *)((int)this + 0x8b4) & 0x1ff) * 4 + 0x68) != 0)
  goto LAB_005998cf;
  goto LAB_005992f0;
}


undefined4 __thiscall
FUN_00599ca0(void *this,uint param_1,uint param_2,uint param_3,int *param_4,undefined4 *param_5)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined4 *this_00;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *local_8;
  
  uVar9 = 0;
  local_8 = this;
  if (param_4[1] != 0) {
    uVar10 = __aulldiv(param_2,param_3,1000,0);
    uVar4 = uVar10;
    do {
      uVar5 = (undefined4)uVar4;
      uVar4 = uVar10 & 0xffffffff;
      (**(code **)(**(int **)(*param_4 + uVar9 * 4) + 0x3c))
                (param_1,*param_5,param_5[1],param_5[2],param_5[3],param_5[4],uVar5);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)param_4[1]);
  }
  this_00 = local_8;
  puVar1 = (uint *)local_8[(param_1 & 0x1ff) + 0x1a];
  if ((puVar1 != (uint *)0x0) && (*puVar1 == param_1)) {
    local_8[(param_1 & 0x1ff) + 0x1a] = 0;
    local_8[0x264] = local_8[0x264] + -1;
    uVar6 = puVar1[6] + 7 >> 3;
    puVar2 = local_8 + 0x266;
    uVar9 = *puVar2;
    *puVar2 = *puVar2 - uVar6;
    local_8[0x267] = local_8[0x267] - (uint)(uVar9 < uVar6);
    *(double *)(local_8 + 0x3ce) =
         (double)(puVar1[0x10] + puVar1[6] + 7 >> 3) + 0.0 + *(double *)(local_8 + 0x3ce);
    uVar9 = puVar1[7];
    if ((5 < (int)uVar9) && ((puVar1[5] == 0 || (puVar1[4] + 1 == puVar1[5])))) {
      puVar7 = FUN_0059af10((int)local_8);
      puVar7[0x12] = 0;
      local_8 = puVar7;
      puVar8 = malloc(5);
      puVar7[0x11] = puVar8;
      puVar7[6] = 0x28;
      *puVar8 = 0xe;
      *(uint *)(puVar7[0x11] + 1) = puVar1[0x16];
      FUN_0059bac0(this_00,&local_8);
      uVar9 = puVar1[7];
    }
    if ((((uVar9 == 2) || (uVar9 == 4)) || (uVar9 == 3)) || ((uVar9 == 6 || (uVar9 == 7)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    *(uint *)(puVar1[0x17] + 0x60) = puVar1[0x18];
    *(uint *)(puVar1[0x18] + 0x5c) = puVar1[0x17];
    if (((uint *)this_00[0x21a] == puVar1) &&
       (puVar2 = (uint *)puVar1[0x18], this_00[0x21a] = puVar2, puVar2 == puVar1)) {
      this_00[0x21a] = 0;
    }
    if (bVar3) {
      this_00[0x3bc] = this_00[0x3bc] - (puVar1[0x10] + 7 + puVar1[6] >> 3);
    }
    FUN_0059b560(this_00,(int)puVar1);
    FUN_0059b080(this_00,(int)puVar1);
    return 0;
  }
  return 0xffffffff;
}


void FUN_00599e70(uint *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint local_10;
  byte local_9;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  *param_1 = (*param_1 - (*param_1 - 1 & 7)) + 7;
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 5) {
    local_9 = 0;
  }
  else if (iVar2 == 6) {
    local_9 = 2;
  }
  else {
    local_9 = (byte)iVar2;
    if (iVar2 == 7) {
      local_9 = 3;
    }
  }
  FUN_005ab3f0(param_1,&local_9,3);
  iVar2 = *(int *)(param_2 + 0x14);
  FUN_005ab5d0(param_1,1);
  uVar5 = *param_1;
  uVar3 = uVar5 & 7;
  if (iVar2 == 0) {
    if (uVar3 != 0) goto LAB_00599f13;
    *(undefined1 *)((uVar5 >> 3) + param_1[3]) = 0;
  }
  else {
    pbVar4 = (byte *)((uVar5 >> 3) + param_1[3]);
    if (uVar3 == 0) {
      *pbVar4 = 0x80;
    }
    else {
      *pbVar4 = *pbVar4 | (byte)(0x80 >> (sbyte)uVar3);
    }
  }
  uVar5 = *param_1;
LAB_00599f13:
  *param_1 = (uVar5 - (uVar5 & 7)) + 8;
  local_10 = (uint)*(ushort *)(param_2 + 0x18);
  FUN_005ab660(param_1,(undefined1 *)&local_10);
  iVar2 = *(int *)(param_2 + 0x1c);
  if ((((iVar2 == 2) || (iVar2 == 4)) || (iVar2 == 3)) || ((iVar2 == 6 || (iVar2 == 7)))) {
    FUN_00595820(param_1,param_2);
  }
  *param_1 = (*param_1 - (*param_1 - 1 & 7)) + 7;
  iVar2 = *(int *)(param_2 + 0x1c);
  if ((iVar2 == 1) || (iVar2 == 4)) {
    FUN_00595820(param_1,param_2 + 8);
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if ((((iVar2 == 1) || (iVar2 == 4)) || (iVar2 == 3)) || (iVar2 == 7)) {
    FUN_00595820(param_1,param_2 + 4);
    uVar1 = param_2[0xc];
    FUN_005ab5d0(param_1,8);
    *(undefined1 *)((*param_1 >> 3) + param_1[3]) = uVar1;
    *param_1 = *param_1 + 8;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_005ab7c0(param_1,param_2 + 0x14);
    FUN_005ab660(param_1,param_2 + 0xe);
    FUN_005ab7c0(param_1,param_2 + 0x10);
  }
  FUN_005ab380(param_1,*(byte **)(param_2 + 0x44),*(int *)(param_2 + 0x18) + 7U >> 3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059a010(void *this,uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar6;
  uint uVar7;
  void *local_10;
  char local_a;
  byte local_9;
  uint local_8;
  uint uVar5;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_a = '\0';
  if ((0x1f < *param_1 - param_1[2]) &&
     (puVar3 = FUN_0059af10((int)this), puVar3 != (undefined4 *)0x0)) {
    puVar3[10] = param_2;
    puVar3[0xb] = param_3;
    param_1[2] = (param_1[2] - (param_1[2] - 1 & 7)) + 7;
    FUN_005ab4c0(param_1,&local_9,3);
    puVar3[7] = (uint)local_9;
    pvVar6 = (void *)param_1[2];
    local_10 = (void *)((int)pvVar6 + 1);
    local_9 = local_10 <= (void *)*param_1;
    if ((bool)local_9) {
      local_a = (*(byte *)(((uint)pvVar6 >> 3) + param_1[3]) & (byte)(0x80 >> ((byte)pvVar6 & 7)))
                != 0;
      pvVar6 = local_10;
    }
    param_1[2] = (int)pvVar6 + (7 - ((int)pvVar6 - 1U & 7));
    FUN_005ab700(param_1,(undefined1 *)&local_10);
    puVar3[6] = (uint)local_10 & 0xffff;
    iVar4 = puVar3[7];
    if (((iVar4 == 2) || (iVar4 == 4)) || (iVar4 == 3)) {
      FUN_005958f0(param_1,(undefined1 *)puVar3);
    }
    else {
      *puVar3 = 0xffffff;
    }
    param_1[2] = (param_1[2] - (param_1[2] - 1 & 7)) + 7;
    iVar4 = puVar3[7];
    if ((iVar4 == 1) || (iVar4 == 4)) {
      FUN_005958f0(param_1,(undefined1 *)(puVar3 + 2));
      iVar4 = puVar3[7];
    }
    if (((iVar4 == 1) || (iVar4 == 4)) || ((iVar4 == 3 || (iVar4 == 7)))) {
      FUN_005958f0(param_1,(undefined1 *)(puVar3 + 1));
      if (*param_1 < param_1[2] + 8) {
        bVar2 = 0;
      }
      else {
        *(undefined1 *)(puVar3 + 3) = *(undefined1 *)((param_1[2] >> 3) + param_1[3]);
        bVar2 = 1;
        param_1[2] = param_1[2] + 8;
      }
    }
    else {
      *(undefined1 *)(puVar3 + 3) = 0;
      bVar2 = local_9;
    }
    puVar1 = puVar3 + 5;
    if (local_a == '\0') {
      *puVar1 = 0;
    }
    else {
      FUN_005ab8a0(param_1,(undefined1 *)puVar1);
      FUN_005ab700(param_1,(undefined1 *)((int)puVar3 + 0xe));
      uVar5 = FUN_005ab8a0(param_1,(undefined1 *)(puVar3 + 4));
      bVar2 = (byte)uVar5;
    }
    if (((((bVar2 != 0) && (puVar3[6] != 0)) && ((int)puVar3[7] < 8)) &&
        (*(byte *)(puVar3 + 3) < 0x20)) && ((local_a == '\0' || ((uint)puVar3[4] < *puVar1)))) {
      puVar3[0x12] = 0;
      pvVar6 = malloc(puVar3[6] + 7 >> 3);
      puVar3[0x11] = pvVar6;
      if (pvVar6 != (void *)0x0) {
        *(undefined1 *)(((puVar3[6] + 7 >> 3) - 1) + (int)pvVar6) = 0;
        local_10 = (void *)puVar3[0x11];
        uVar5 = puVar3[6] + 7 >> 3;
        if (uVar5 != 0) {
          uVar7 = (param_1[2] - (param_1[2] - 1 & 7)) + 7;
          param_1[2] = uVar7;
          if (uVar7 + uVar5 * 8 <= *param_1) {
            memcpy(local_10,(void *)((uVar7 >> 3) + param_1[3]),uVar5);
            param_1[2] = param_1[2] + uVar5 * 8;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
        FUN_0059b560(this,(int)puVar3);
      }
    }
    FUN_0059b080(this,(int)puVar3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe

void __thiscall FUN_0059a2a0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined8 local_58;
  int local_50;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  uint local_1c;
  int *local_18;
  undefined4 *local_14;
  char local_d;
  uint local_c;
  
  local_c = DAT_0065500c ^ (uint)&stack0xfffffffc;
  iVar5 = 0x18;
  iVar7 = param_1[7];
  param_1[5] = 1;
  if ((((iVar7 == 2) || (iVar7 == 4)) || (iVar7 == 3)) || ((iVar7 == 6 || (iVar7 == 7)))) {
    iVar5 = 0x30;
  }
  if ((iVar7 == 1) || (iVar7 == 4)) {
    iVar5 = iVar5 + 0x18;
  }
  if ((((iVar7 == 1) || (iVar7 == 4)) || (iVar7 == 3)) || (iVar7 == 7)) {
    iVar5 = iVar5 + 0x20;
  }
  local_30 = *(int *)((int)this + 0xea0) - 0x20;
  local_1c = param_1[6] + 7 >> 3;
  local_34 = iVar5 + 0x57U >> 3;
  local_d = '\0';
  puVar2 = (undefined4 *)((local_1c - 1) / local_30 + 1);
  param_1[5] = puVar2;
  local_14 = puVar2;
  if ((uint)((int)puVar2 * 4) < 0x100000) {
    local_18 = (int *)&stack0xffffff98;
    local_d = '\x01';
  }
  else {
    local_18 = malloc((int)puVar2 * 4);
    puVar2 = (undefined4 *)param_1[5];
  }
  iVar7 = 0;
  if (0 < (int)puVar2) {
    do {
      puVar3 = FUN_0059af10((int)this);
      local_18[iVar7] = (int)puVar3;
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(param_1 + 3);
      *(undefined2 *)((int)puVar3 + 0xe) = *(undefined2 *)((int)param_1 + 0xe);
      puVar3[4] = param_1[4];
      puVar3[5] = param_1[5];
      puVar3[6] = param_1[6];
      puVar3[7] = param_1[7];
      puVar3[8] = param_1[8];
      *(undefined1 *)(puVar3 + 9) = *(undefined1 *)(param_1 + 9);
      puVar3[10] = param_1[10];
      puVar3[0xb] = param_1[0xb];
      puVar3[0xc] = param_1[0xc];
      puVar3[0xd] = param_1[0xd];
      puVar3[0xe] = param_1[0xe];
      puVar3[0xf] = param_1[0xf];
      puVar3[0x10] = param_1[0x10];
      puVar3[0x11] = param_1[0x11];
      puVar3[0x12] = param_1[0x12];
      puVar3[0x13] = param_1[0x13];
      *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(param_1 + 0x14);
      puVar3[0x15] = param_1[0x15];
      puVar3[0x16] = param_1[0x16];
      puVar3[0x17] = param_1[0x17];
      puVar3[0x18] = param_1[0x18];
      puVar3[0x19] = param_1[0x19];
      puVar3[0x1a] = param_1[0x1a];
      iVar5 = 0x80;
      puVar2 = puVar3 + 0x1b;
      do {
        *(undefined1 *)puVar2 = *(undefined1 *)(((int)param_1 - (int)puVar3) + (int)puVar2);
        iVar5 = iVar5 + -1;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      } while (iVar5 != 0);
      *(undefined1 *)(local_18[iVar7] + 0x24) = 0;
      if (iVar7 != 0) {
        uVar8 = *(uint *)((int)this + 0x8b8);
        *(uint *)((int)this + 0x8b8) = uVar8 + 1;
        *(undefined1 *)((int)this + 0x8bb) = 0;
        param_1[8] = uVar8 & 0xffffff;
      }
      iVar7 = iVar7 + 1;
      local_14 = param_1;
    } while (iVar7 < (int)param_1[5]);
  }
  uVar8 = 0;
  local_28 = (ulonglong)(uint)local_28;
  local_14 = (undefined4 *)0x0;
  do {
    local_2c = local_30;
    if ((int)local_1c <= (int)local_30) {
      local_2c = local_1c;
    }
    FUN_0059b3c0(this,local_18[uVar8],(int *)((int)&local_28 + 4),param_1[0x11],
                 (int)local_14 + param_1[0x11]);
    if (local_2c == local_30) {
      iVar7 = local_2c << 3;
    }
    else {
      iVar7 = param_1[6] - local_30 * 8 * uVar8;
    }
    *(int *)(local_18[uVar8] + 0x18) = iVar7;
    *(uint *)(local_18[uVar8] + 0x10) = uVar8;
    *(undefined2 *)(local_18[uVar8] + 0xe) = *(undefined2 *)((int)this + 0x8be);
    piVar9 = local_18 + uVar8;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(*piVar9 + 0x14) = param_1[5];
    local_14 = (undefined4 *)((int)local_14 + local_30);
    local_1c = local_1c - local_30;
  } while (uVar8 < (uint)param_1[5]);
  *(short *)((int)this + 0x8be) = *(short *)((int)this + 0x8be) + 1;
  *(undefined1 *)((int)this + 0x880) = 0;
  local_1c = 0;
  piVar9 = local_18;
  if (0 < (int)param_1[5]) {
    do {
      *(uint *)(*piVar9 + 0x40) = local_34;
      iVar7 = *piVar9;
      iVar5 = *(int *)(iVar7 + 0x1c);
      if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 5)) {
        if (*(int *)((int)this + 0x86c) == 0) {
          *(int *)(iVar7 + 0x68) = iVar7;
          *(int *)(iVar7 + 100) = iVar7;
          *(int *)((int)this + 0x86c) = iVar7;
        }
        else {
          *(int *)(iVar7 + 0x68) = *(int *)((int)this + 0x86c);
          iVar5 = *(int *)(*(int *)((int)this + 0x86c) + 100);
          *(int *)(iVar7 + 100) = iVar5;
          *(int *)(iVar5 + 0x68) = iVar7;
          *(int *)(*(int *)((int)this + 0x86c) + 100) = iVar7;
        }
      }
      uVar10 = FUN_0059b6f0(this,*(uint *)(*piVar9 + 0x54));
      local_28 = uVar10;
      if (*(char *)((int)this + 0x880) == '\0') {
        uVar8 = *(uint *)((int)this + 0x878);
        local_28._4_4_ = (uint)(uVar10 >> 0x20);
        if ((uVar8 != 0) && (uVar6 = uVar8 - 1 >> 1, uVar6 < uVar8)) {
          puVar4 = (uint *)(uVar6 * 0x10 + *(int *)((int)this + 0x874));
          do {
            if ((local_28._4_4_ < puVar4[1]) ||
               ((local_28._4_4_ == puVar4[1] && ((uint)uVar10 < *puVar4)))) {
              FUN_0059bf00((void *)((int)this + 0x874),(uint *)&local_28,piVar9);
              goto LAB_0059a637;
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 4;
          } while (uVar6 < uVar8);
        }
        local_44 = local_28._4_4_;
        local_40 = *piVar9;
        local_48 = (uint)uVar10;
        FUN_0059cb90((void *)((int)this + 0x874),&local_48);
        *(undefined1 *)((int)this + 0x880) = 1;
      }
      else {
        local_50 = *piVar9;
        local_58 = uVar10;
        FUN_0059cb90((void *)((int)this + 0x874),(undefined4 *)&local_58);
      }
LAB_0059a637:
      piVar1 = (int *)((int)this + *(int *)(*piVar9 + 0x54) * 4 + 0x960);
      *piVar1 = *piVar1 + 1;
      iVar7 = *(int *)(*piVar9 + 0x54);
      local_1c = local_1c + 1;
      *(double *)((int)this + iVar7 * 8 + 0x970) =
           (double)(*(int *)(*piVar9 + 0x18) + 7U >> 3) + 0.0 +
           *(double *)((int)this + iVar7 * 8 + 0x970);
      piVar9 = piVar9 + 1;
    } while ((int)local_1c < (int)param_1[5]);
  }
  FUN_0059b080(this,(int)param_1);
  if (local_d == '\0') {
    free(local_18);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059a6c0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  size_t _Size;
  int local_18;
  uint local_14;
  char local_d;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  this_00 = (int *)((int)this + 0x8a8);
  local_14 = FUN_0059c110(this_00,(ushort *)((int)param_1 + 0xe),&local_d);
  if (local_d == '\0') {
    local_18 = FUN_005adb0f(0x18);
    *(undefined4 *)(local_18 + 0x10) = 0;
    *(undefined4 *)(local_18 + 8) = 0;
    *(undefined4 *)(local_18 + 0xc) = 0;
    *(undefined4 *)(local_18 + 0x14) = 0;
    local_14 = FUN_0059c1c0(this_00,(ushort *)((int)param_1 + 0xe),&local_18);
    FUN_0059ba20((void *)(local_18 + 8),param_1[5]);
  }
  FUN_0059b980((void *)(*(int *)(*this_00 + local_14 * 4) + 8),&local_c);
  puVar4 = *(undefined4 **)(*this_00 + local_14 * 4);
  *puVar4 = param_2;
  puVar4[1] = param_3;
  if (param_1[4] == 0) {
    *(undefined4 **)(*(int *)(*this_00 + local_14 * 4) + 0x14) = param_1;
  }
  if (*(uint *)((int)this + 0x10) != 0) {
    iVar1 = *(int *)(*this_00 + local_14 * 4);
    iVar2 = *(int *)(iVar1 + 0x14);
    if (((iVar2 != 0) && (uVar3 = *(uint *)(iVar1 + 0xc), uVar3 != *(uint *)(iVar2 + 0x14))) &&
       (uVar3 % *(uint *)((int)this + 0x10) == 0)) {
      puVar4 = FUN_0059af10((int)this);
      iVar1 = *(int *)(*(int *)(*(int *)(*this_00 + local_14 * 4) + 0x14) + 0x18);
      puVar4[0x12] = 0;
      _Size = (iVar1 + 7U >> 3) + 0xd;
      local_c = puVar4;
      pvVar5 = malloc(_Size);
      puVar4[0x11] = pvVar5;
      puVar4[6] = _Size * 8;
      *(undefined1 *)puVar4[0x11] = 0x1e;
      *(undefined4 *)(puVar4[0x11] + 1) = *(undefined4 *)(*(int *)(*this_00 + local_14 * 4) + 0xc);
      *(undefined4 *)(puVar4[0x11] + 5) = param_1[5];
      *(uint *)(puVar4[0x11] + 9) =
           *(int *)(*(int *)(*(int *)(*this_00 + local_14 * 4) + 0x14) + 0x18) + 7U >> 3;
      iVar1 = *(int *)(*(int *)(*this_00 + local_14 * 4) + 0x14);
      memcpy((void *)(puVar4[0x11] + 0xd),*(void **)(iVar1 + 0x44),*(int *)(iVar1 + 0x18) + 7U >> 3)
      ;
      FUN_0059bac0(this,&local_c);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __thiscall
FUN_0059a880(void *this,undefined4 param_1,uint param_2,uint param_3,int *param_4,
            undefined4 *param_5,undefined4 param_6,uint *param_7)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  int *local_8;
  
  puVar3 = param_7;
  local_8 = param_4;
  local_10 = param_5;
  local_c = this;
  uVar4 = FUN_0059c110((int *)((int)this + 0x8a8),(ushort *)&param_1,&local_11);
  uVar9 = param_3;
  uVar7 = param_2;
  pvVar2 = *(void **)(*(int *)((int)this + 0x8a8) + uVar4 * 4);
  if (*(int *)((int)pvVar2 + 0xc) != *(int *)(**(int **)((int)pvVar2 + 8) + 0x14)) {
    return (undefined4 *)0x0;
  }
  FUN_0059ade0(local_c,local_8,local_10,param_2,param_3,**(int **)((int)pvVar2 + 8),puVar3);
  local_8 = (int *)**(undefined4 **)((int)pvVar2 + 8);
  puVar5 = FUN_0059af10((int)local_c);
  iVar8 = 0;
  puVar5[0xb] = uVar9;
  puVar5[6] = 0;
  puVar5[0x11] = 0;
  puVar5[10] = uVar7;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[1] = local_8[1];
  puVar5[2] = local_8[2];
  *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(local_8 + 3);
  *puVar5 = *local_8;
  puVar5[0x15] = local_8[0x15];
  uVar7 = 0;
  puVar5[7] = local_8[7];
  puVar5[6] = 0;
  if (*(int *)((int)pvVar2 + 0xc) != 0) {
    do {
      iVar1 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + *(int *)(*(int *)(*(int *)((int)pvVar2 + 8) + iVar1) + 0x18);
      puVar5[6] = iVar8;
    } while (uVar7 < *(uint *)((int)pvVar2 + 0xc));
  }
  local_10 = puVar5;
  pvVar6 = malloc(iVar8 + 7U >> 3);
  puVar5[0x11] = pvVar6;
  puVar5[0x12] = 0;
  uVar9 = 0;
  local_8 = (int *)0x0;
  uVar7 = 0;
  if (*(int *)((int)pvVar2 + 0xc) != 0) {
    do {
      iVar8 = *(int *)(*(int *)((int)pvVar2 + 8) + uVar9 * 4);
      memcpy((void *)(((int)local_8 + 7U >> 3) + puVar5[0x11]),*(void **)(iVar8 + 0x44),
             *(int *)(iVar8 + 0x18) + 7U >> 3);
      iVar8 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      local_8 = (int *)((int)local_8 + *(int *)(*(int *)(*(int *)((int)pvVar2 + 8) + iVar8) + 0x18))
      ;
      uVar7 = *(uint *)((int)pvVar2 + 0xc);
    } while (uVar9 < uVar7);
  }
  pvVar6 = local_c;
  uVar9 = 0;
  if (uVar7 != 0) {
    do {
      FUN_0059b560(pvVar6,*(int *)(*(int *)((int)pvVar2 + 8) + uVar9 * 4));
      FUN_0059b080(pvVar6,*(int *)(*(int *)((int)pvVar2 + 8) + uVar9 * 4));
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)((int)pvVar2 + 0xc));
  }
  if (*(int *)((int)pvVar2 + 0x10) != 0) {
    free(*(void **)((int)pvVar2 + 8));
  }
  FUN_005adb3f(pvVar2);
  uVar7 = *(uint *)((int)local_c + 0x8ac);
  if (uVar4 < uVar7) {
    if (uVar4 < uVar7 - 1) {
      do {
        puVar5 = (undefined4 *)(*(int *)((int)local_c + 0x8a8) + uVar4 * 4);
        uVar4 = uVar4 + 1;
        *puVar5 = puVar5[1];
        uVar7 = *(uint *)((int)local_c + 0x8ac);
      } while (uVar4 < uVar7 - 1);
    }
    *(uint *)((int)local_c + 0x8ac) = uVar7 - 1;
  }
  return local_10;
}


undefined4 * __thiscall FUN_0059aa70(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  
  FUN_005ab130();
  *(undefined4 *)((int)this + 0x8c8) = *(undefined4 *)((int)this + 0xf98);
  dVar7 = 0.0;
  *(undefined4 *)((int)this + 0x8cc) = *(undefined4 *)((int)this + 0xf9c);
  *(undefined4 *)((int)this + 0x900) = *(undefined4 *)((int)this + 0xf90);
  *(undefined4 *)((int)this + 0x904) = *(undefined4 *)((int)this + 0xf94);
  *(undefined4 *)((int)this + 0x8d0) = *(undefined4 *)((int)this + 0xfb8);
  *(undefined4 *)((int)this + 0x8d4) = *(undefined4 *)((int)this + 0xfbc);
  *(undefined4 *)((int)this + 0x908) = *(undefined4 *)((int)this + 0xfb0);
  *(undefined4 *)((int)this + 0x90c) = *(undefined4 *)((int)this + 0xfb4);
  *(undefined4 *)((int)this + 0x8d8) = *(undefined4 *)((int)this + 0xfd8);
  *(undefined4 *)((int)this + 0x8dc) = *(undefined4 *)((int)this + 0xfdc);
  *(undefined4 *)((int)this + 0x910) = *(undefined4 *)((int)this + 0xfd0);
  *(undefined4 *)((int)this + 0x914) = *(undefined4 *)((int)this + 0xfd4);
  *(undefined4 *)((int)this + 0x8e0) = *(undefined4 *)((int)this + 0xff8);
  *(undefined4 *)((int)this + 0x8e4) = *(undefined4 *)((int)this + 0xffc);
  *(undefined4 *)((int)this + 0x918) = *(undefined4 *)((int)this + 0xff0);
  *(undefined4 *)((int)this + 0x91c) = *(undefined4 *)((int)this + 0xff4);
  *(undefined4 *)((int)this + 0x8e8) = *(undefined4 *)((int)this + 0x1018);
  *(undefined4 *)((int)this + 0x8ec) = *(undefined4 *)((int)this + 0x101c);
  *(undefined4 *)((int)this + 0x920) = *(undefined4 *)((int)this + 0x1010);
  *(undefined4 *)((int)this + 0x924) = *(undefined4 *)((int)this + 0x1014);
  *(undefined4 *)((int)this + 0x8f0) = *(undefined4 *)((int)this + 0x1038);
  *(undefined4 *)((int)this + 0x8f4) = *(undefined4 *)((int)this + 0x103c);
  *(undefined4 *)((int)this + 0x928) = *(undefined4 *)((int)this + 0x1030);
  *(undefined4 *)((int)this + 0x92c) = *(undefined4 *)((int)this + 0x1034);
  *(undefined4 *)((int)this + 0x8f8) = *(undefined4 *)((int)this + 0x1058);
  *(undefined4 *)((int)this + 0x8fc) = *(undefined4 *)((int)this + 0x105c);
  *(undefined4 *)((int)this + 0x930) = *(undefined4 *)((int)this + 0x1050);
  *(undefined4 *)((int)this + 0x934) = *(undefined4 *)((int)this + 0x1054);
  puVar5 = (undefined4 *)((int)this + 0x8c8);
  puVar6 = param_1;
  for (iVar2 = 0x38; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((param_1[3] + param_1[5] + (uint)CARRY4(param_1[2],param_1[4]) != 0) ||
     (param_1[2] + param_1[4] != 0)) {
    FUN_005af360();
    dVar8 = dVar7;
    FUN_005af360();
    dVar7 = (double)(ulonglong)(uint)(float)(dVar7 / (dVar8 + dVar7));
  }
  param_1[0x36] = SUB84(dVar7,0);
  param_1[0x37] = 0;
  uVar1 = param_1[0x10];
  uVar3 = uVar1 + param_1[0x12];
  uVar4 = param_1[0x11] + param_1[0x13] + (uint)CARRY4(uVar1,param_1[0x12]);
  if ((uVar3 != 0 || uVar4 != 0) && (lVar9 = __aulldiv(uVar1,param_1[0x11],uVar3,uVar4), lVar9 != 0)
     ) {
    FUN_005af360();
    dVar8 = dVar7;
    FUN_005af360();
    if (dVar8 + dVar7 != 0.0) {
      param_1[0x37] = (float)(dVar7 / (dVar8 + dVar7));
    }
  }
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)((int)this + 0x940);
  param_1[0x20] = *(undefined4 *)((int)this + 0x948);
  param_1[0x21] = *(undefined4 *)((int)this + 0x94c);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((int)this + 0x950);
  param_1[0x24] = *(undefined4 *)((int)this + 0x958);
  param_1[0x25] = *(undefined4 *)((int)this + 0x95c);
  return param_1;
}


void __fastcall FUN_0059ad00(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)param_1 + 0xf04) != 0) {
    do {
      if (*(char *)(uVar3 + *(int *)((int)param_1 + 0xf00)) != '\0') {
        iVar1 = *(int *)(*(int *)((int)param_1 + 0xef4) + uVar3 * 4);
        iVar2 = *(int *)(iVar1 + 0x1c);
        if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 5)) {
          *(undefined4 *)(*(int *)(iVar1 + 100) + 0x68) = *(undefined4 *)(iVar1 + 0x68);
          *(undefined4 *)(*(int *)(iVar1 + 0x68) + 100) = *(undefined4 *)(iVar1 + 100);
          if ((*(int *)((int)param_1 + 0x86c) == iVar1) &&
             (iVar2 = *(int *)(iVar1 + 0x68), *(int *)((int)param_1 + 0x86c) = iVar2, iVar2 == iVar1
             )) {
            *(undefined4 *)((int)param_1 + 0x86c) = 0;
          }
        }
        FUN_0059b560(param_1,*(int *)(*(int *)((int)param_1 + 0xef4) + uVar3 * 4));
        FUN_0059b080(param_1,*(int *)(*(int *)((int)param_1 + 0xef4) + uVar3 * 4));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)param_1 + 0xf04));
  }
  if (*(uint *)((int)param_1 + 0xf08) != 0) {
    if (0x200 < *(uint *)((int)param_1 + 0xf08)) {
      free(*(void **)((int)param_1 + 0xf00));
      *(undefined4 *)((int)param_1 + 0xf08) = 0;
      *(undefined4 *)((int)param_1 + 0xf00) = 0;
    }
    *(undefined4 *)((int)param_1 + 0xf04) = 0;
  }
  return;
}


void __thiscall
FUN_0059ade0(void *this,int *param_1,undefined4 *param_2,uint param_3,uint param_4,
            undefined4 param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_44;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined1 local_18 [4];
  float local_14;
  undefined2 local_10;
  undefined1 local_e;
  undefined1 local_d;
  uint local_8;
  
  local_8 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  uVar1 = *(int *)((int)this + 0xea0) * 8 - 0x48;
  iVar2 = *(int *)((int)this + 0xf64);
  while (iVar2 != 0) {
    *param_6 = 0;
    param_6[2] = 0;
    local_10 = 1;
    local_e = 0;
    local_d = 0;
    if (*(char *)((int)this + 0xf78) != '\0') {
      local_14 = (float)(double)CONCAT44(uVar1,local_44);
    }
    FUN_00595d20(local_18,param_6);
    FUN_0059c7b0((void *)((int)this + 0xf60),(int *)param_6,uVar1);
    uVar3 = *param_6 + 7 >> 3;
    FUN_00595a20((void *)((int)this + 0x1030),param_3,param_4,uVar3,0);
    local_38 = param_6[3];
    local_1e = *(undefined2 *)((int)param_2 + 0x12);
    local_20 = *(undefined2 *)(param_2 + 4);
    local_30 = *param_2;
    uStack_2c = param_2[1];
    uStack_28 = param_2[2];
    uStack_24 = param_2[3];
    local_1c = 0;
    local_34 = uVar3;
    (**(code **)(*param_1 + 4))
              (&local_38,"f:\\src\\ois\\libs\\raknet\\code\\reliabilitylayer.cpp",0x922);
    *(undefined4 *)((int)this + 0xeb8) = 0;
    *(undefined4 *)((int)this + 0xebc) = 0;
    iVar2 = *(int *)((int)this + 0xf64);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 * __fastcall FUN_0059af10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x5c) < 1) {
    puVar2 = malloc(0x14);
    *(undefined4 **)(param_1 + 0x54) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
      iVar6 = 0;
      uVar3 = *(uint *)(param_1 + 100) / 0xf8;
      pvVar4 = malloc(*(uint *)(param_1 + 100));
      puVar2[2] = pvVar4;
      if (pvVar4 != (void *)0x0) {
        pvVar5 = malloc(uVar3 << 2);
        pvVar4 = (void *)puVar2[2];
        *puVar2 = pvVar5;
        if (pvVar5 != (void *)0x0) {
          if (uVar3 != 0) {
            do {
              *(undefined4 **)((int)pvVar4 + 0xf0) = puVar2;
              *(void **)((int)pvVar5 + iVar6 * 4) = pvVar4;
              iVar6 = iVar6 + 1;
              pvVar4 = (void *)((int)pvVar4 + 0xf8);
            } while (iVar6 < (int)uVar3);
          }
          puVar2[1] = uVar3;
          puVar2[3] = *(undefined4 *)(param_1 + 0x54);
          puVar2[4] = puVar2;
          iVar6 = *(int *)(param_1 + 0x54);
          piVar1 = (int *)(iVar6 + 4);
          *piVar1 = *piVar1 + -1;
          puVar2 = *(undefined4 **)(**(int **)(param_1 + 0x54) + *(int *)(iVar6 + 4) * 4);
          goto LAB_0059affa;
        }
        free(pvVar4);
      }
    }
    puVar2 = (undefined4 *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x54);
    iVar6 = piVar1[1] + -1;
    piVar1[1] = iVar6;
    puVar2 = *(undefined4 **)(*piVar1 + iVar6 * 4);
    if (iVar6 == 0) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      *(int *)(param_1 + 0x54) = piVar1[3];
      *(int *)(piVar1[3] + 0x10) = piVar1[4];
      *(int *)(piVar1[4] + 0xc) = piVar1[3];
      iVar6 = *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = iVar6 + 1;
      if (iVar6 == 0) {
        *(int **)(param_1 + 0x58) = piVar1;
        piVar1[3] = (int)piVar1;
        piVar1[4] = (int)piVar1;
      }
      else {
        piVar1[3] = *(int *)(param_1 + 0x58);
        piVar1[4] = *(int *)(*(int *)(param_1 + 0x58) + 0x10);
        *(int **)(*(int *)(*(int *)(param_1 + 0x58) + 0x10) + 0xc) = piVar1;
        *(int **)(*(int *)(param_1 + 0x58) + 0x10) = piVar1;
      }
    }
  }
LAB_0059affa:
  *puVar2 = 0xffffff;
  *(undefined2 *)((int)puVar2 + 0xe) = 0;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  *(undefined1 *)(puVar2 + 0x14) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  return puVar2;
}


void __thiscall FUN_0059b080(void *this,int param_1)

{
  int *_Memory;
  int iVar1;
  
  _Memory = *(int **)(param_1 + 0xf0);
  if (_Memory[1] != 0) {
    ((int *)*_Memory)[_Memory[1]] = param_1;
    _Memory[1] = _Memory[1] + 1;
    if ((_Memory[1] == *(uint *)((int)this + 100) / 0xf8) && (3 < *(int *)((int)this + 0x5c))) {
      if (_Memory == *(int **)((int)this + 0x54)) {
        *(int *)((int)this + 0x54) = _Memory[3];
      }
      *(int *)(_Memory[4] + 0xc) = _Memory[3];
      *(int *)(_Memory[3] + 0x10) = _Memory[4];
      *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + -1;
      free((void *)*_Memory);
      free((void *)_Memory[2]);
      free(_Memory);
    }
    return;
  }
  *(int *)*_Memory = param_1;
  _Memory[1] = _Memory[1] + 1;
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + -1;
  *(int *)(_Memory[3] + 0x10) = _Memory[4];
  *(int *)(_Memory[4] + 0xc) = _Memory[3];
  if ((0 < *(int *)((int)this + 0x60)) && (_Memory == *(int **)((int)this + 0x58))) {
    *(int *)((int)this + 0x58) = (*(int **)((int)this + 0x58))[3];
  }
  iVar1 = *(int *)((int)this + 0x5c);
  *(int *)((int)this + 0x5c) = iVar1 + 1;
  if (iVar1 == 0) {
    *(int **)((int)this + 0x54) = _Memory;
    _Memory[3] = (int)_Memory;
    _Memory[4] = (int)_Memory;
    return;
  }
  _Memory[3] = *(int *)((int)this + 0x54);
  _Memory[4] = *(int *)(*(int *)((int)this + 0x54) + 0x10);
  *(int **)(*(int *)(*(int *)((int)this + 0x54) + 0x10) + 0xc) = _Memory;
  *(int **)(*(int *)((int)this + 0x54) + 0x10) = _Memory;
  return;
}


void __thiscall FUN_0059b170(void *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  uVar1 = *(uint *)((int)this + 0x24);
  uVar5 = *(uint *)((int)this + 0x28);
  if ((uVar1 != uVar5) &&
     ((iVar4 = *(int *)((int)this + 0x50), iVar4 == param_1 ||
      (0x7ffffe < (iVar4 - param_1 & 0xffffffU))))) {
    uVar3 = param_1 - iVar4 & 0xffffff;
    if (uVar5 < uVar1) {
      iVar4 = *(int *)((int)this + 0x2c) - uVar1;
    }
    else {
      iVar4 = -uVar1;
    }
    if (uVar3 < uVar5 + iVar4) {
      uVar5 = uVar1 + uVar3;
      iVar4 = *(int *)((int)this + 0x20);
      if (*(uint *)((int)this + 0x2c) <= uVar5) {
        uVar5 = (uVar1 - *(uint *)((int)this + 0x2c)) + uVar3;
      }
      *param_2 = *(undefined4 *)(iVar4 + 8 + uVar5 * 0x10);
      param_2[1] = *(undefined4 *)(iVar4 + 0xc + uVar5 * 0x10);
      if (*(int *)((int)this + 0x24) + uVar3 < *(uint *)((int)this + 0x2c)) {
        __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
        return;
      }
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059b260(void *this,int param_1)

{
  int *_Memory;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)((int)this + 0x24);
  uVar5 = param_1 - *(int *)((int)this + 0x50) & 0xffffff;
  uVar4 = *(uint *)((int)this + 0x2c);
  uVar1 = iVar3 + uVar5;
  if (uVar4 <= uVar1) {
    uVar1 = (iVar3 - uVar4) + uVar5;
  }
  iVar2 = *(int *)(*(int *)((int)this + 0x20) + uVar1 * 0x10);
  if (iVar2 != 0) {
    do {
      _Memory = *(int **)(iVar2 + 8);
      iVar3 = *(int *)(iVar2 + 4);
      if (_Memory[1] == 0) {
        *(int *)*_Memory = iVar2;
        _Memory[1] = _Memory[1] + 1;
        *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + -1;
        *(int *)(_Memory[3] + 0x10) = _Memory[4];
        *(int *)(_Memory[4] + 0xc) = _Memory[3];
        if ((0 < *(int *)((int)this + 0x3c)) && (_Memory == *(int **)((int)this + 0x34))) {
          *(int *)((int)this + 0x34) = (*(int **)((int)this + 0x34))[3];
        }
        iVar2 = *(int *)((int)this + 0x38);
        *(int *)((int)this + 0x38) = iVar2 + 1;
        if (iVar2 == 0) {
          *(int **)((int)this + 0x30) = _Memory;
          _Memory[3] = (int)_Memory;
          _Memory[4] = (int)_Memory;
        }
        else {
          _Memory[3] = *(int *)((int)this + 0x30);
          _Memory[4] = *(int *)(*(int *)((int)this + 0x30) + 0x10);
          *(int **)(*(int *)(*(int *)((int)this + 0x30) + 0x10) + 0xc) = _Memory;
          *(int **)(*(int *)((int)this + 0x30) + 0x10) = _Memory;
        }
      }
      else {
        ((int *)*_Memory)[_Memory[1]] = iVar2;
        _Memory[1] = _Memory[1] + 1;
        if ((_Memory[1] == *(uint *)((int)this + 0x40) / 0xc) && (3 < *(int *)((int)this + 0x38))) {
          if (_Memory == *(int **)((int)this + 0x30)) {
            *(int *)((int)this + 0x30) = _Memory[3];
          }
          *(int *)(_Memory[4] + 0xc) = _Memory[3];
          *(int *)(_Memory[3] + 0x10) = _Memory[4];
          *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
          free((void *)*_Memory);
          free((void *)_Memory[2]);
          free(_Memory);
        }
      }
      iVar2 = iVar3;
    } while (iVar3 != 0);
    iVar3 = *(int *)((int)this + 0x24);
    uVar4 = *(uint *)((int)this + 0x2c);
  }
  if (iVar3 + uVar5 < uVar4) {
    *(undefined4 *)(*(int *)((int)this + 0x20) + (iVar3 + uVar5) * 0x10) = 0;
    return;
  }
  *(undefined4 *)(*(int *)((int)this + 0x20) + ((iVar3 - uVar4) + uVar5) * 0x10) = 0;
  return;
}


void __thiscall
FUN_0059b3c0(void *this,int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 0x44) = param_4;
  *(undefined4 *)(param_1 + 0x48) = 1;
  iVar6 = *param_2;
  if (iVar6 != 0) {
    *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
    *(int *)(param_1 + 0x4c) = iVar6;
    return;
  }
  if (*(int *)((int)this + 0xf84) < 1) {
    puVar2 = malloc(0x14);
    puVar7 = (undefined4 *)0x0;
    *(undefined4 **)((int)this + 0xf7c) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0xf84) = 1;
      uVar3 = *(uint *)((int)this + 0xf8c) / 0xc;
      pvVar4 = malloc(*(uint *)((int)this + 0xf8c));
      puVar2[2] = pvVar4;
      if (pvVar4 != (void *)0x0) {
        pvVar5 = malloc(uVar3 << 2);
        pvVar4 = (void *)puVar2[2];
        *puVar2 = pvVar5;
        if (pvVar5 != (void *)0x0) {
          if (uVar3 != 0) {
            do {
              *(undefined4 **)((int)pvVar4 + 8) = puVar2;
              *(void **)((int)pvVar5 + (int)puVar7 * 4) = pvVar4;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              pvVar4 = (void *)((int)pvVar4 + 0xc);
            } while ((int)puVar7 < (int)uVar3);
          }
          puVar2[1] = uVar3;
          puVar2[3] = *(undefined4 *)((int)this + 0xf7c);
          puVar2[4] = puVar2;
          iVar6 = *(int *)((int)this + 0xf7c);
          piVar1 = (int *)(iVar6 + 4);
          *piVar1 = *piVar1 + -1;
          puVar7 = *(undefined4 **)(**(int **)((int)this + 0xf7c) + *(int *)(iVar6 + 4) * 4);
          goto LAB_0059b4ed;
        }
        free(pvVar4);
      }
      puVar7 = (undefined4 *)0x0;
    }
  }
  else {
    piVar1 = *(int **)((int)this + 0xf7c);
    iVar6 = piVar1[1] + -1;
    piVar1[1] = iVar6;
    puVar7 = *(undefined4 **)(*piVar1 + iVar6 * 4);
    if (iVar6 == 0) {
      *(int *)((int)this + 0xf84) = *(int *)((int)this + 0xf84) + -1;
      *(int *)((int)this + 0xf7c) = piVar1[3];
      *(int *)(piVar1[3] + 0x10) = piVar1[4];
      *(int *)(piVar1[4] + 0xc) = piVar1[3];
      iVar6 = *(int *)((int)this + 0xf88);
      *(int *)((int)this + 0xf88) = iVar6 + 1;
      if (iVar6 == 0) {
        *(int **)((int)this + 0xf80) = piVar1;
        piVar1[3] = (int)piVar1;
        piVar1[4] = (int)piVar1;
      }
      else {
        piVar1[3] = *(int *)((int)this + 0xf80);
        piVar1[4] = *(int *)(*(int *)((int)this + 0xf80) + 0x10);
        *(int **)(*(int *)(*(int *)((int)this + 0xf80) + 0x10) + 0xc) = piVar1;
        *(int **)(*(int *)((int)this + 0xf80) + 0x10) = piVar1;
      }
    }
  }
LAB_0059b4ed:
  puVar7[1] = 1;
  *param_2 = (int)puVar7;
  *puVar7 = param_3;
  *(undefined4 **)(param_1 + 0x4c) = puVar7;
  return;
}


void __thiscall FUN_0059b560(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *_Memory;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x48) == 1) {
      if (*(int *)(param_1 + 0x4c) != 0) {
        piVar1 = (int *)(*(int *)(param_1 + 0x4c) + 4);
        *piVar1 = *piVar1 + -1;
        if ((*(undefined4 **)(param_1 + 0x4c))[1] == 0) {
          free((void *)**(undefined4 **)(param_1 + 0x4c));
          **(undefined4 **)(param_1 + 0x4c) = 0;
          iVar2 = *(int *)(param_1 + 0x4c);
          _Memory = *(undefined4 **)(iVar2 + 8);
          if (_Memory[1] != 0) {
            ((int *)*_Memory)[_Memory[1]] = iVar2;
            _Memory[1] = _Memory[1] + 1;
            if ((_Memory[1] == *(uint *)((int)this + 0xf8c) / 0xc) &&
               (3 < *(int *)((int)this + 0xf84))) {
              if (_Memory == *(undefined4 **)((int)this + 0xf7c)) {
                *(undefined4 *)((int)this + 0xf7c) = _Memory[3];
              }
              *(undefined4 *)(_Memory[4] + 0xc) = _Memory[3];
              *(undefined4 *)(_Memory[3] + 0x10) = _Memory[4];
              *(int *)((int)this + 0xf84) = *(int *)((int)this + 0xf84) + -1;
              free((void *)*_Memory);
              free((void *)_Memory[2]);
              free(_Memory);
            }
            *(undefined4 *)(param_1 + 0x4c) = 0;
            return;
          }
          *(int *)*_Memory = iVar2;
          _Memory[1] = _Memory[1] + 1;
          *(int *)((int)this + 0xf88) = *(int *)((int)this + 0xf88) + -1;
          *(undefined4 *)(_Memory[3] + 0x10) = _Memory[4];
          *(undefined4 *)(_Memory[4] + 0xc) = _Memory[3];
          if ((0 < *(int *)((int)this + 0xf88)) && (_Memory == *(undefined4 **)((int)this + 0xf80)))
          {
            *(undefined4 *)((int)this + 0xf80) = (*(undefined4 **)((int)this + 0xf80))[3];
          }
          iVar2 = *(int *)((int)this + 0xf84);
          *(int *)((int)this + 0xf84) = iVar2 + 1;
          if (iVar2 != 0) {
            _Memory[3] = *(undefined4 *)((int)this + 0xf7c);
            _Memory[4] = *(undefined4 *)(*(int *)((int)this + 0xf7c) + 0x10);
            *(undefined4 **)(*(int *)(*(int *)((int)this + 0xf7c) + 0x10) + 0xc) = _Memory;
            *(undefined4 **)(*(int *)((int)this + 0xf7c) + 0x10) = _Memory;
            *(undefined4 *)(param_1 + 0x4c) = 0;
            return;
          }
          *(undefined4 **)((int)this + 0xf7c) = _Memory;
          _Memory[3] = _Memory;
          _Memory[4] = _Memory;
          *(undefined4 *)(param_1 + 0x4c) = 0;
          return;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x48) == 0) {
        if (*(void **)(param_1 + 0x44) == (void *)0x0) {
          return;
        }
        free(*(void **)(param_1 + 0x44));
      }
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  return;
}


undefined8 __thiscall FUN_0059b6f0(void *this,uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = (uint *)((int)this + (param_1 + 0x111) * 8);
  uVar7 = *puVar1;
  uVar6 = puVar1[1];
  uVar3 = *(undefined8 *)puVar1;
  if (*(int *)((int)this + 0x878) == 0) {
    *(undefined4 *)((int)this + 0x888) = 0;
    *(undefined4 *)((int)this + 0x88c) = 0;
    *(undefined4 *)((int)this + 0x890) = 3;
    *(undefined4 *)((int)this + 0x894) = 0;
    *(undefined4 *)((int)this + 0x898) = 10;
    *(undefined4 *)((int)this + 0x89c) = 0;
    *(undefined4 *)((int)this + 0x8a0) = 0x1b;
    *(undefined4 *)((int)this + 0x8a4) = 0;
    return uVar3;
  }
  puVar2 = *(uint **)((int)this + 0x874);
  uVar5 = *(uint *)(puVar2[2] + 0x54);
  uVar4 = uVar5 << ((byte)uVar5 & 0x1f);
  uVar8 = (uVar5 - uVar4) + *puVar2;
  uVar5 = ((((int)uVar5 >> 0x1f) - ((int)uVar4 >> 0x1f)) - (uint)(uVar5 < uVar4)) + puVar2[1] +
          (uint)CARRY4(uVar5 - uVar4,*puVar2);
  if ((uVar6 <= uVar5) && ((uVar6 < uVar5 || (uVar7 < uVar8)))) {
    uVar6 = param_1 << ((byte)param_1 & 0x1f);
    uVar7 = uVar6 + param_1 + uVar8;
    uVar6 = ((int)uVar6 >> 0x1f) + ((int)param_1 >> 0x1f) + (uint)CARRY4(uVar6,param_1) + uVar5 +
            (uint)CARRY4(uVar6 + param_1,uVar8);
  }
  uVar5 = param_1 + 1 << ((byte)param_1 & 0x1f);
  *puVar1 = uVar5 + param_1 + uVar7;
  puVar1[1] = ((int)uVar5 >> 0x1f) + ((int)param_1 >> 0x1f) + (uint)CARRY4(uVar5,param_1) + uVar6 +
              (uint)CARRY4(uVar5 + param_1,uVar7);
  return CONCAT44(uVar6,uVar7);
}


void __thiscall FUN_0059b800(void *this,byte *param_1)

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
    local_c[1] = *param_1;
    local_c[0] = param_1[1];
    param_1 = local_c;
  }
  FUN_005ab3f0(this,param_1,0x10);
  local_c[0] = 0x95;
  local_c[1] = 0xb8;
  local_c[2] = 0x59;
  local_c[3] = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0059b8a0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 local_c;
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
    uVar1 = FUN_005ab4c0(this,&local_c,0x10);
    if ((char)uVar1 != '\0') {
      param_1[1] = (char)(undefined2)local_c;
      *param_1 = (char)((ushort)(undefined2)local_c >> 8);
      local_c = 0x59b934;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_c = 0x59b948;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_005ab4c0(this,param_1,0x10);
  local_c = 0x59b960;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_0059b970(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    free((void *)*param_1);
  }
  return;
}


void __thiscall FUN_0059b980(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  void *_Memory;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  if (iVar3 != iVar2) {
    *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = *param_1;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    return;
  }
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 8) = 0x10;
    uVar1 = 0x10;
  }
  else {
    uVar1 = iVar2 * 2;
    *(uint *)((int)this + 8) = uVar1;
    if (uVar1 == 0) {
      iVar2 = 0;
      goto LAB_0059b9bf;
    }
  }
  iVar2 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar1 * 4));
  iVar3 = *(int *)((int)this + 4);
LAB_0059b9bf:
  _Memory = *(void **)this;
  if (_Memory != (void *)0x0) {
    uVar1 = 0;
    if (iVar3 != 0) {
      do {
        *(undefined4 *)(iVar2 + uVar1 * 4) = *(undefined4 *)(*(int *)this + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)this + 4));
      _Memory = *(void **)this;
    }
    free(_Memory);
  }
  *(int *)this = iVar2;
  *(undefined4 *)(iVar2 + *(int *)((int)this + 4) * 4) = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return;
}


void __thiscall FUN_0059ba20(void *this,uint param_1)

{
  uint uVar1;
  void *_Memory;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this + 8);
  uVar1 = uVar2;
  if (uVar2 == 0) {
    uVar1 = 0x10;
  }
  for (; uVar1 < param_1; uVar1 = uVar1 * 2) {
  }
  if (uVar2 < uVar1) {
    *(uint *)((int)this + 8) = uVar1;
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005ae4ea(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar1 * 4));
    }
    _Memory = *(void **)this;
    if (_Memory != (void *)0x0) {
      uVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          *(undefined4 *)(iVar3 + uVar2 * 4) = *(undefined4 *)(*(int *)this + uVar2 * 4);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)((int)this + 4));
        _Memory = *(void **)this;
      }
      free(_Memory);
    }
    *(int *)this = iVar3;
  }
  return;
}


void __fastcall FUN_0059bab0(undefined4 *param_1)

{
  if (param_1[3] != 0) {
    free((void *)*param_1);
  }
  return;
}


void __thiscall FUN_0059bac0(void *this,undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xc) != 0) {
    *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = *param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar3 = *(int *)((int)this + 8);
    if (iVar3 == *(int *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 8) = 0;
      iVar3 = 0;
    }
    if (((iVar3 == *(int *)((int)this + 4)) && (uVar4 = *(int *)((int)this + 0xc) * 2, uVar4 != 0))
       && (lVar1 = (ulonglong)uVar4 * 4,
          iVar3 = FUN_005ae4ea(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1),
          iVar3 != 0)) {
      uVar4 = 0;
      if (*(int *)((int)this + 0xc) != 0) {
        do {
          *(undefined4 *)(iVar3 + uVar4 * 4) =
               *(undefined4 *)
                (*(int *)this + ((*(int *)((int)this + 4) + uVar4) % *(uint *)((int)this + 0xc)) * 4
                );
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
  puVar2 = (undefined4 *)FUN_005ae4ea(0x40);
  *(undefined4 **)this = puVar2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *puVar2 = *param_1;
  *(undefined4 *)((int)this + 0xc) = 0x10;
  return;
}


void __thiscall FUN_0059bb90(void *this,undefined4 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (*(int *)((int)this + 0xc) != 0) {
    puVar5 = (undefined4 *)(*(int *)((int)this + 8) * 0x10 + *(int *)this);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *puVar5 = *param_1;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar6 = *(int *)((int)this + 8);
    if (iVar6 == *(int *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 8) = 0;
      iVar6 = 0;
    }
    if (((iVar6 == *(int *)((int)this + 4)) && (uVar8 = *(int *)((int)this + 0xc) * 2, uVar8 != 0))
       && (lVar1 = (ulonglong)uVar8 * 0x10,
          puVar5 = (undefined4 *)
                   FUN_005ae4ea(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1),
          puVar5 != (undefined4 *)0x0)) {
      uVar8 = 0;
      puVar10 = puVar5;
      if (*(int *)((int)this + 0xc) != 0) {
        do {
          uVar7 = *(int *)((int)this + 4) + uVar8;
          uVar8 = uVar8 + 1;
          puVar9 = (undefined4 *)((uVar7 % *(uint *)((int)this + 0xc)) * 0x10 + *(int *)this);
          uVar2 = puVar9[1];
          uVar3 = puVar9[2];
          uVar4 = puVar9[3];
          *puVar10 = *puVar9;
          puVar10[1] = uVar2;
          puVar10[2] = uVar3;
          puVar10[3] = uVar4;
          puVar10 = puVar10 + 4;
        } while (uVar8 < *(uint *)((int)this + 0xc));
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 0xc);
      *(undefined4 *)((int)this + 4) = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) * 2;
      free(*(void **)this);
      *(undefined4 **)this = puVar5;
    }
    return;
  }
  puVar5 = (undefined4 *)FUN_005ae4ea(0x100);
  *(undefined4 **)this = puVar5;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  *puVar5 = *param_1;
  puVar5[1] = uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined4 *)((int)this + 0xc) = 0x10;
  return;
}


void __fastcall FUN_0059bc80(int *param_1)

{
  FUN_0059bdd0(param_1);
  return;
}


undefined4 __fastcall FUN_0059bc90(int *param_1)

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
      param_1[2] = 1;
      uVar4 = (uint)param_1[4] / 0xc;
      iVar7 = 0;
      pvVar5 = malloc(param_1[4]);
      puVar3[2] = pvVar5;
      if (pvVar5 != (void *)0x0) {
        pvVar6 = malloc(uVar4 << 2);
        pvVar5 = (void *)puVar3[2];
        *puVar3 = pvVar6;
        if (pvVar6 != (void *)0x0) {
          if (uVar4 != 0) {
            do {
              *(undefined4 **)((int)pvVar5 + 8) = puVar3;
              *(void **)((int)pvVar6 + iVar7 * 4) = pvVar5;
              iVar7 = iVar7 + 1;
              pvVar5 = (void *)((int)pvVar5 + 0xc);
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


void __fastcall FUN_0059bdd0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_1[2]) {
    puVar3 = (undefined4 *)*param_1;
    free((void *)*puVar3);
    free((void *)puVar3[2]);
    puVar2 = puVar3;
    puVar1 = (undefined4 *)puVar3[3];
    if ((undefined4 *)puVar3[3] != (undefined4 *)*param_1) {
      do {
        puVar3 = puVar1;
        free(puVar2);
        free((void *)*puVar3);
        free((void *)puVar3[2]);
        puVar2 = puVar3;
        puVar1 = (undefined4 *)puVar3[3];
      } while ((undefined4 *)puVar3[3] != (undefined4 *)*param_1);
    }
    free(puVar3);
  }
  if (0 < param_1[3]) {
    puVar3 = (undefined4 *)param_1[1];
    free((void *)*puVar3);
    free((void *)puVar3[2]);
    puVar2 = puVar3;
    puVar1 = (undefined4 *)puVar3[3];
    if ((undefined4 *)puVar3[3] != (undefined4 *)param_1[1]) {
      do {
        puVar3 = puVar1;
        free(puVar2);
        free((void *)*puVar3);
        free((void *)puVar3[2]);
        puVar2 = puVar3;
        puVar1 = (undefined4 *)puVar3[3];
      } while ((undefined4 *)puVar3[3] != (undefined4 *)param_1[1]);
    }
    free(puVar3);
  }
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


void __thiscall FUN_0059be80(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this + 4);
  if (param_1 < uVar2) {
    if (param_1 < uVar2 - 1) {
      iVar3 = param_1 << 4;
      do {
        param_1 = param_1 + 1;
        puVar1 = (undefined4 *)(*(int *)this + iVar3);
        iVar3 = iVar3 + 0x10;
        *puVar1 = puVar1[4];
        puVar1[1] = puVar1[5];
        puVar1[2] = puVar1[6];
        puVar1[3] = puVar1[7];
        uVar2 = *(uint *)((int)this + 4);
      } while (param_1 < uVar2 - 1);
    }
    *(uint *)((int)this + 4) = uVar2 - 1;
  }
  return;
}


void __thiscall FUN_0059bf00(void *this,uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  int *local_8;
  
  local_1c = *param_1;
  uVar3 = *(uint *)((int)this + 4);
  local_18 = param_1[1];
  local_14 = *param_2;
  local_8 = this;
  FUN_0059cb90(this,&local_1c);
  while( true ) {
    if (uVar3 == 0) {
      return;
    }
    iVar4 = *(int *)this;
    uVar13 = uVar3 - 1 >> 1;
    uVar5 = *(uint *)(iVar4 + 4 + uVar13 * 0x10);
    if (uVar5 < param_1[1]) break;
    if ((uVar5 == param_1[1]) && (*(uint *)(iVar4 + uVar13 * 0x10) <= *param_1)) {
      return;
    }
    puVar1 = (undefined4 *)(iVar4 + uVar13 * 0x10);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(iVar4 + uVar3 * 0x10);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar2 = (undefined4 *)(iVar4 + uVar3 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)(*local_8 + uVar13 * 0x10);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    uVar3 = uVar13;
    this = local_8;
  }
  return;
}


undefined4 __fastcall FUN_0059bf80(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint local_18;
  
  uVar21 = 0;
  puVar2 = (undefined4 *)*param_1;
  uVar23 = 2;
  uVar3 = puVar2[2];
  puVar1 = puVar2 + param_1[1] * 4 + -4;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  *puVar2 = *puVar1;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  uVar4 = *(uint *)*param_1;
  uVar5 = ((uint *)*param_1)[1];
  param_1[1] = param_1[1] + -1;
  uVar19 = param_1[1];
  local_18 = 1;
  if (uVar19 < 2) {
    return uVar3;
  }
  do {
    iVar6 = *param_1;
    puVar24 = (uint *)(local_18 * 0x10 + iVar6);
    if (uVar19 <= uVar23) {
      if ((puVar24[1] <= uVar5) && ((uVar5 != puVar24[1] || (*puVar24 < uVar4)))) {
        puVar1 = (undefined4 *)(iVar6 + uVar21 * 0x10);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar2 = (undefined4 *)(iVar6 + local_18 * 0x10);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
        puVar2 = (undefined4 *)(iVar6 + local_18 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        puVar1 = (undefined4 *)(*param_1 + uVar21 * 0x10);
        *puVar1 = uVar15;
        puVar1[1] = uVar16;
        puVar1[2] = uVar17;
        puVar1[3] = uVar18;
      }
      return uVar3;
    }
    if ((uVar5 <= puVar24[1]) && ((puVar24[1] != uVar5 || (uVar4 <= *puVar24)))) {
      uVar19 = *(uint *)(iVar6 + 4 + uVar23 * 0x10);
      if (uVar5 < uVar19) {
        return uVar3;
      }
      if ((uVar5 <= uVar19) && (uVar4 <= *(uint *)(iVar6 + uVar23 * 0x10))) {
        return uVar3;
      }
    }
    puVar20 = (uint *)(uVar23 * 0x10 + iVar6);
    iVar22 = uVar21 * 0x10;
    puVar25 = (uint *)(iVar6 + iVar22);
    if ((puVar20[1] < puVar24[1]) || ((puVar20[1] <= puVar24[1] && (*puVar20 <= *puVar24)))) {
      uVar19 = puVar25[1];
      uVar21 = puVar25[2];
      uVar10 = puVar25[3];
      uVar11 = *puVar20;
      uVar12 = puVar20[1];
      uVar13 = puVar20[2];
      uVar14 = puVar20[3];
      *puVar20 = *puVar25;
      puVar20[1] = uVar19;
      puVar20[2] = uVar21;
      puVar20[3] = uVar10;
      puVar24 = (uint *)(*param_1 + iVar22);
      *puVar24 = uVar11;
      puVar24[1] = uVar12;
      puVar24[2] = uVar13;
      puVar24[3] = uVar14;
    }
    else {
      uVar23 = puVar25[1];
      uVar19 = puVar25[2];
      uVar21 = puVar25[3];
      uVar10 = *puVar24;
      uVar11 = puVar24[1];
      uVar12 = puVar24[2];
      uVar13 = puVar24[3];
      *puVar24 = *puVar25;
      puVar24[1] = uVar23;
      puVar24[2] = uVar19;
      puVar24[3] = uVar21;
      puVar24 = (uint *)(*param_1 + iVar22);
      *puVar24 = uVar10;
      puVar24[1] = uVar11;
      puVar24[2] = uVar12;
      puVar24[3] = uVar13;
      uVar23 = local_18;
    }
    uVar19 = param_1[1];
    local_18 = uVar23 * 2 + 1;
    uVar21 = uVar23;
    uVar23 = uVar23 * 2 + 2;
    if (uVar19 <= local_18) {
      return uVar3;
    }
  } while( true );
}
