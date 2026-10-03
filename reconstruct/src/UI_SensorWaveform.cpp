// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_SensorWaveform::cleanupRender(UI_SensorWaveform *this)
void UI_SensorWaveform::cleanupRender()

{
  int *piVar1;
  int iVar2;
  UI_SensorWaveform *pUVar3;
  uint uVar4;
  
  iVar2 = 3;
  pUVar3 = this + 0x434;
  do {
    if (*(int **)pUVar3 != (int *)0x0) {
      (**(code **)(**(int **)pUVar3 + 0x138))(1);
      *(int *)pUVar3 = 0;
    }
    pUVar3 = pUVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar4 = 0;
  iVar2 = *(int *)((char *)this + 0x428);
  if (*(int *)((char *)this + 0x42c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x428) + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)((char *)this + 0x428);
    } while (uVar4 < (uint)(*(int *)((char *)this + 0x42c) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x42c) = iVar2;
  if (*(int **)((char *)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x440) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x440) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_SensorWaveform::render(UI_SensorWaveform *this)
void UI_SensorWaveform::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  char cVar3;
  std::string *pbVar4;
  Scale9Sprite *pSVar5;
  UIText *pUVar6;
  float *pfVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  float fVar10;
  char acStack_94 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  Size local_34 [4];
  float local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc3cc;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  if ((int *)**(int **)(*(int *)(g_gameData + 0xd0) + 0x40) != (int *)0x0) {
    cVar3 = (**(code **)(*(int *)**(int **)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x10))();
    if (cVar3 != '\0') {
      pbVar4 = (std::string *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 0;
      pSVar5 = cocos2d::ui::Scale9Sprite::create(pbVar4);
      // [seh] local_8 = 0xffffffff;
      *(Scale9Sprite **)((char *)this + 0x440) = pSVar5;
      if (0xf < local_18) {
        pnVar9 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar9 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
      (**(code **)(**(int **)((char *)this + 0x440) + 0x48))();
      local_3c = 0;
      local_38 = 0;
      // [seh] local_8 = 1;
      (**(code **)(**(int **)((char *)this + 0x440) + 0xa0))();
      // [seh] local_8 = 0xffffffff;
      iVar1 = **(int **)((char *)this + 0x440);
      cocos2d::Size::Size((Size *)&local_44,(float)*(int *)((char *)this + 0x2a0),
                          (float)(*(int *)((char *)this + 0x2a4) + -8));
      (**(code **)(iVar1 + 0xac))();
      (**(code **)(*(int *)this + 0x108))();
      if (*(int *)(*(int *)(**(int **)(*(int *)(g_gameData + 0xd0) + 0x40) + 8) + 0xb0) == 1) {
        renderAnalog(this);
      }
      else {
        renderDigital(this);
      }
      local_30 = 0.0;
      do {
        fVar10 = local_30;
        strUsingArgs(acStack_94,"`0%d",(&WAVEFORM_DESCRIPTORS)[(int)local_30]);
        pUVar6 = UIText::create();
        *(UIText **)(this + (int)fVar10 * 4 + 0x434) = pUVar6;
        if (fVar10 == 0.0) {
          // [seh] local_8 = 2;
          (**(code **)(*(int *)pUVar6 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          uStack_8c = 0x5892ee;
          fStack_88 = fVar10;
          (**(code **)(**(int **)((char *)this + 0x434) + 0x48))();
        }
        else if (fVar10 == 2.8026e-45) {
          // [seh] local_8 = 3;
          (**(code **)(*(int *)pUVar6 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          fStack_88 = (float)*(int *)((char *)this + 0x2a0);
          uStack_8c = 0x589346;
          (**(code **)(**(int **)((char *)this + 0x43c) + 0x48))();
        }
        else {
          local_44 = 0;
          local_40 = 0;
          // [seh] local_8 = 4;
          (**(code **)(*(int *)pUVar6 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          iVar1 = *(int *)((char *)this + 0x2a0);
          iVar2 = **(int **)(this + (int)fVar10 * 4 + 0x434);
          pfVar7 = (float *)(**(code **)(iVar2 + 0xb0))();
          fVar10 = local_30;
          fStack_88 = (float)(iVar1 / 2) - *pfVar7 * 0.5;
          uStack_8c = 0x5893c3;
          (**(code **)(iVar2 + 0x48))();
        }
        uStack_8c = 2;
        uStack_90 = *(undefined4 *)(this + (int)fVar10 * 4 + 0x434);
        builtin_strncpy(acStack_94,"֓X",4);
        (**(code **)(*(int *)this + 0x108))();
        local_30 = (float)((int)fVar10 + 1);
      } while ((int)local_30 < 3);
      **(undefined1 **)((char *)this + 0x288) = 1;
      iVar1 = *(int *)this;
      fStack_88 = 8.134654e-39;
      cocos2d::Size::Size(local_34,(float)*(int *)((char *)this + 0x2a0),(float)*(int *)((char *)this + 0x2a4));
      (**(code **)(iVar1 + 0xac))();
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_SensorWaveform::renderDigital(UI_SensorWaveform *this)
void UI_SensorWaveform::renderDigital()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffdac[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  bool bVar2;
  UI_SensorWaveform *pUVar3;
  uint uVar4;
  WaveformData *pWVar5;
  int iVar6;
  Sprite *pSVar7;
  Color3B *this_00;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uchar uVar13;
  std::string bVar14;
  uchar uVar15;
  Color3B local_229 [3];
  Color3B local_226 [3];
  Color3B local_223 [3];
  Color3B local_220 [3];
  Color3B local_21d [3];
  Color3B local_21a [3];
  Color3B local_217 [3];
  int local_214;
  undefined4 local_210;
  AnimationFrames *local_20c;
  int local_208;
  UI_SensorWaveform *local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  WaveformData *local_1ec;
  int local_1e8;
  int local_1e4;
  int aiStack_1e0 [100];
  int local_50 [16];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc40c;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_50[0xf] = uVar4;
  // [seh] ExceptionList = &local_10;
  local_1f8 = *(int *)((char *)this + 0x2a4) + -10;
  iVar11 = (int)((float)*(int *)((char *)this + 0x2a0) / 3.0);
  if (100 < iVar11) {
    iVar11 = 100;
  }
  uVar8 = 0;
  iVar9 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x194);
  local_214 = iVar9;
  local_208 = iVar11;
  local_204 = this;
  if (iVar9 == 0) goto LAB_005899ab;
  iVar12 = *(int *)(iVar9 + 0xe0);
  if (iVar12 == 1) {
    if (*(float *)(iVar9 + 0x114) == -1.0) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
  }
  else if (*(int *)(iVar9 + 0xf0) - *(int *)(iVar9 + 0xec) >> 3 == 0) {
    uVar8 = 1;
  }
  local_210 = 0;
  local_20c = (AnimationFrames *)0x41200000;
  // [seh] local_8 = 0;
  local_200 = uVar8;
  if (*(char *)(*(int *)(g_gameData + 0xd0) + 0x1b1) != '\0') {
    local_200 = 1;
  }
  if (iVar12 == 1) {
LAB_00589584:
    pWVar5 = operator_new(0xc);
    *(undefined4 *)pWVar5 = 0;
    *(undefined4 *)(pWVar5 + 4) = 0;
    *(undefined4 *)(pWVar5 + 8) = 0;
    local_1ec = pWVar5;
    (pWVar5)->addPeak(*(float *)(iVar9 + 0xe8), uVar4);
  }
  else {
    if ((((iVar12 == 5) || (iVar12 == 6)) || (iVar12 == 4)) || (iVar12 == 7)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) goto LAB_00589584;
    if ((char)local_200 == '\0') {
      pWVar5 = (WaveformData *)(iVar9 + 0xec);
      local_1ec = pWVar5;
    }
    else {
      pWVar5 = (WaveformData *)(iVar9 + 0xf8);
      local_1ec = pWVar5;
    }
  }
  // [seh] local_8 = 0xffffffff;
  iVar9 = 0;
  local_1e4 = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 1;
  local_50[0] = 0;
  local_50[1] = 4;
  local_50[2] = 3;
  local_50[3] = 1;
  local_50[4] = 2;
  local_50[5] = 4;
  local_50[6] = 0;
  local_50[7] = 1;
  local_50[8] = 5;
  local_50[9] = 3;
  local_50[10] = 1;
  local_50[0xb] = 2;
  if (0 < iVar11) {
    local_1fc = 1600.0 / (float)iVar11;
    do {
      iVar11 = *(int *)pWVar5;
      iVar12 = 0;
      uVar10 = *(int *)(pWVar5 + 4) - iVar11 >> 3;
      local_1f4 = (int)((float)iVar9 * local_1fc);
      local_1f0 = (int)((float)iVar9 * local_1fc + local_1fc);
      uVar4 = 0;
      if (uVar10 != 0) {
        do {
          iVar6 = *(int *)(iVar11 + uVar4 * 8);
          if ((local_1f4 <= iVar6) && (iVar6 <= local_1f0)) {
            iVar12 = (int)((float)iVar12 + *(float *)(iVar11 + 4 + uVar4 * 8));
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar10);
      }
      iVar11 = *(int *)(local_204 + 0x2a4);
      local_1e8 = local_1e4;
      if ((char)local_200 == '\0') {
        uVar4 = rand();
        uVar4 = uVar4 & 0x80000007;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
        }
        iVar6 = uVar4 - 3;
      }
      else {
        iVar6 = local_50[local_1e4];
      }
      iVar6 = iVar6 + (int)(((float)iVar12 / 120.0) * (float)(iVar11 + -10));
      aiStack_1e0[iVar9] = iVar6;
      if (iVar6 < 1) {
        aiStack_1e0[iVar9] = 1;
      }
      else if (0x32 < iVar6) {
        aiStack_1e0[iVar9] = 0x32;
      }
      iVar11 = local_1e4 + 1;
      iVar9 = iVar9 + 1;
      local_1e4 = 0;
      if (local_1e8 != 0xe) {
        local_1e4 = iVar11;
      }
      pWVar5 = local_1ec;
      iVar11 = local_208;
    } while (iVar9 < local_208);
  }
  local_1e4 = 0;
  if (0 < iVar11) {
    local_1f4 = (int)(local_1f8 + (local_1f8 >> 0x1f & 3U)) >> 2;
    local_1f0 = local_1f4 * 3;
    do {
      ghidra::str::assign((std::string *)&stack0xfffffdac,"white.png",9);
      pSVar7 = loadSprite();
      iVar11 = *(int *)pSVar7;
      local_20c = (AnimationFrames *)pSVar7;
      (**(code **)(iVar11 + 0xb0))();
      (**(code **)(iVar11 + 0x24))();
      iVar11 = *(int *)pSVar7;
      local_1e8 = aiStack_1e0[local_1e4];
      (**(code **)(iVar11 + 0xb0))();
      (**(code **)(iVar11 + 0x2c))();
      (**(code **)(*(int *)pSVar7 + 0x48))();
      if ((char)local_200 == '\0') {
        if (local_1e8 < local_1f0) {
          if (local_1e8 < local_1f8 / 2) {
            if (local_1e8 < local_1f4) {
              uVar15 = '%';
              bVar14 = (std::string)0x78;
              uVar13 = '\x19';
              this_00 = (Color3B *)((int)&local_1fc + 1);
            }
            else {
              uVar15 = '9';
              bVar14 = (std::string)0xa2;
              uVar13 = '\x1d';
              this_00 = local_229;
            }
          }
          else {
            uVar15 = 'Z';
            bVar14 = (std::string)0xd7;
            uVar13 = '\x1c';
            this_00 = local_226;
          }
        }
        else {
          uVar15 = 0x80;
          bVar14 = (std::string)0xff;
          uVar13 = '\0';
          this_00 = local_223;
        }
LAB_00589921:
        iVar11 = *(int *)pSVar7;
      }
      else {
        if (local_1f0 <= local_1e8) {
          uVar15 = 0xff;
          bVar14 = (std::string)0xff;
          uVar13 = 0xff;
          this_00 = local_217;
          goto LAB_00589921;
        }
        if (local_1f8 / 2 <= local_1e8) {
          uVar15 = 0xc0;
          bVar14 = (std::string)0xc0;
          uVar13 = 0xc0;
          this_00 = local_21a;
          goto LAB_00589921;
        }
        iVar11 = *(int *)pSVar7;
        if (local_1e8 < local_1f4) {
          uVar15 = '@';
          bVar14 = (std::string)0x40;
          uVar13 = '@';
          this_00 = local_220;
        }
        else {
          uVar15 = 0x80;
          bVar14 = (std::string)0x80;
          uVar13 = 0x80;
          this_00 = local_21d;
        }
      }
      cocos2d::Color3B::Color3B(this_00,uVar13,(uchar)bVar14,uVar15);
      (**(code **)(iVar11 + 0x25c))();
      pUVar3 = local_204;
      (**(code **)(*(int *)local_204 + 0x108))(pSVar7);
      ppAVar1 = *(AnimationFrames ***)(pUVar3 + 0x42c);
      if (*(AnimationFrames ***)(pUVar3 + 0x430) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar3 + 0x428),ppAVar1,&local_20c);
      }
      else {
        *ppAVar1 = (AnimationFrames *)pSVar7;
        *(int *)(pUVar3 + 0x42c) = *(int *)(pUVar3 + 0x42c) + 4;
      }
      local_1e4 = local_1e4 + 1;
    } while (local_1e4 < local_208);
  }
  pWVar5 = local_1ec;
  if ((*(int *)(local_214 + 0xe0) == 1) && (local_1ec != (WaveformData *)0x0)) {
    ghidra::lib::vector___x7evector((ghidra::vector *)local_1ec);
    operator_delete(pWVar5,(nothrow_t *)0xc);
  }
LAB_005899ab:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_50[0xf] ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_SensorWaveform::renderAnalog(UI_SensorWaveform *this)
void UI_SensorWaveform::renderAnalog()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined3 *puVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined1 extraout_var_01;
  undefined2 extraout_var;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined2 extraout_var_00;
  UI_SensorWaveform *pUVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  UI_SensorWaveform *local_18;
  undefined4 local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cc459;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar9 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x194);
  if (iVar9 != 0) {
    local_34 = 0;
    local_30 = 0x41200000;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    // [seh] local_8 = 1;
    local_14 = 0;
    iVar8 = *(int *)(iVar9 + 0xe0);
    if ((((iVar8 == 1) || (iVar8 == 5)) || (iVar8 == 6)) || ((iVar8 == 4 || (iVar8 == 7)))) {
      if (*(float *)(iVar9 + 0x114) == -1.0) {
        local_14 = 1;
      }
      else {
        local_14 = 0;
      }
    }
    else if ((uint)(*(int *)(iVar9 + 0xf0) - *(int *)(iVar9 + 0xec)) < 8) {
      local_14 = 1;
    }
    if (*(char *)(*(int *)(g_gameData + 0xd0) + 0x1b1) != '\0') {
      local_14 = 1;
    }
    iVar8 = 0;
    local_18 = this;
    do {
      uVar2 = rand();
      uVar2 = uVar2 & 0x80000007;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
      }
      fVar6 = 0.0;
      if ((char)local_14 == '\0') {
        fVar6 = (float)(uVar2 - 2);
      }
      ((WaveformData *)&local_40)->addPeak(fVar6, uVar1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x14);
    local_1c = 0;
    uVar2 = -(uint)((uint)(*(int *)(iVar9 + 0xf0) - *(int *)(iVar9 + 0xec)) < 8) & 0xc;
    local_20 = uVar2 + 0xec;
    if (*(int *)(uVar2 + 0xf0 + iVar9) - *(int *)(local_20 + iVar9) >> 3 != 0) {
      do {
        iVar3 = rand();
        rand();
        uVar2 = local_1c;
        iVar8 = 0;
        if ((char)local_14 == '\0') {
          iVar8 = iVar3 % 6 + -2;
        }
        fVar10 = (float)iVar8 + *(float *)(*(int *)(local_20 + iVar9) + 4 + local_1c * 8) + 10.0;
        fVar6 = 10.0;
        if (10.0 <= fVar10) {
          fVar6 = fVar10;
        }
        ((WaveformData *)&local_40)->addPeak((float)(int)fVar6, uVar1);
        local_1c = uVar2 + 1;
      } while (local_1c < (uint)(*(int *)(local_20 + 4 + iVar9) - *(int *)(local_20 + iVar9) >> 3));
    }
    iVar8 = *(int *)(iVar9 + 0xe0);
    if (((iVar8 == 1) || (iVar8 == 5)) || ((iVar8 == 6 || ((iVar8 == 4 || (iVar8 == 7)))))) {
      ((WaveformData *)&local_40)->addPeak(*(float *)(iVar9 + 0xe8), uVar1);
    }
    pUVar7 = local_18;
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
    if ((char)local_14 == '\0') {
      local_28 = local_3c - local_40 >> 3;
      if (local_28 != 0) {
        local_20 = local_40;
        local_1c = local_28;
        do {
          iVar9 = 4;
          do {
            rand();
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          rand();
          puVar4 = (undefined3 *)
                   cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
          iVar9 = local_20;
          renderPeak(local_18,&local_34,CONCAT13(extraout_var_02,*puVar4),0xfffffffd,0x40);
          local_20 = iVar9 + 8;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
        local_1c = 0;
      }
      uVar1 = local_28;
      iVar9 = local_40;
      puVar4 = (undefined3 *)
               cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
      renderPeak(local_18,&local_34,CONCAT13(extraout_var_03,*puVar4),0xfffffffd,0x40);
      local_24 = 0;
      local_20 = 0x41200000;
      local_34 = 0;
      local_30 = 0x41200000;
      if (uVar1 != 0) {
        local_20 = iVar9;
        local_1c = uVar1;
        do {
          iVar9 = 3;
          do {
            rand();
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          rand();
          puVar4 = (undefined3 *)
                   cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
          iVar9 = local_20;
          renderPeak(local_18,&local_34,CONCAT13(extraout_var_04,*puVar4),0xfffffffe,0x80);
          local_20 = iVar9 + 8;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
        local_1c = 0;
        uVar1 = local_28;
      }
      puVar4 = (undefined3 *)
               cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
      pUVar7 = local_18;
      renderPeak(local_18,&local_34,CONCAT13(extraout_var_05,*puVar4),0xfffffffe,0x80);
      local_2c = 0;
      uVar2 = 0;
      local_28 = 0x41200000;
      local_34 = 0;
      local_30 = 0x41200000;
      if (uVar1 != 0) {
        do {
          puVar4 = (undefined3 *)
                   cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
          renderPeak(pUVar7,&local_34,CONCAT13(extraout_var_06,*puVar4),0,0xff);
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      puVar5 = (undefined2 *)
               cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0',0x80,'\0');
      uVar11 = CONCAT22(extraout_var_00,*puVar5);
    }
    else {
      uVar2 = 0;
      uVar1 = local_3c - local_40 >> 3;
      if (uVar1 != 0) {
        do {
          puVar4 = (undefined3 *)
                   cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),0xff,0xff,0xff);
          renderPeak(pUVar7,&local_34,CONCAT13(extraout_var_01,*puVar4),0,0xff);
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      puVar5 = (undefined2 *)
               cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),0xff,0xff,0xff);
      uVar11 = CONCAT22(extraout_var,*puVar5);
    }
    renderPeak(pUVar7,&local_34,
               CONCAT13((char)((uint)uVar11 >> 0x18),
                        CONCAT12(*(undefined1 *)(puVar5 + 1),(short)uVar11)),0,0xff);
    ghidra::lib::vector___x7evector((ghidra::vector *)&local_40);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_SensorWaveform::specialDataCheckFunction(UI_SensorWaveform *this,float param_1)
void UI_SensorWaveform::specialDataCheckFunction(float param_1)

{
  float fVar1;
  
  if ((ShipData::currentlyBoardedShip != (Ship *)0x0) &&
     (fVar1 = *(float *)((char *)this + 0x444), *(float *)((char *)this + 0x444) = fVar1 - param_1,
     fVar1 - param_1 < 0.0)) {
    *(undefined4 *)((char *)this + 0x444) = 0x3f19999a;
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}
