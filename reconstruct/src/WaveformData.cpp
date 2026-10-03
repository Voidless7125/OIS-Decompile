// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall WaveformData::~WaveformData(WaveformData *this)
WaveformData::~WaveformData()

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)((char *)this + 8) - (int)pvVar1 & 0xfffffff8);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)this = 0;
    *(undefined4 *)((char *)this + 4) = 0;
    *(undefined4 *)((char *)this + 8) = 0;
  }
  return;
}


// Ghidra: void __thiscall WaveformData::addPeak(WaveformData *this,float param_1,int param_2)
void WaveformData::addPeak(float param_1, int param_2)

{
  HullDamageChance *pHVar1;
  float *pfVar2;
  HullDamageChance *pHVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float in_XMM1_Da;
  int local_c;
  float local_8;
  
  fVar9 = 0.0;
  if (0.0 <= in_XMM1_Da) {
    fVar9 = in_XMM1_Da;
  }
  fVar5 = 0.0;
  if (-1 < (int)param_1) {
    fVar5 = param_1;
  }
  uVar7 = 0;
  pHVar3 = *(HullDamageChance **)((char *)this + 4);
  iVar4 = *(int *)this;
  uVar6 = (int)pHVar3 - iVar4 >> 3;
  iVar8 = (int)fVar9;
  if (uVar6 != 0) {
    do {
      if (iVar8 == *(int *)(iVar4 + uVar7 * 8)) {
        fVar9 = (float)(int)fVar5;
        pfVar2 = (float *)(iVar4 + 4 + uVar7 * 8);
        if (fVar9 < *pfVar2 || fVar9 == *pfVar2) {
          return;
        }
        *(float *)(iVar4 + 4 + uVar7 * 8) = fVar9;
        return;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  uVar7 = 0;
  local_c = iVar8;
  if (uVar6 != 0) {
    do {
      if (iVar8 < *(int *)(iVar4 + uVar7 * 8)) {
        pHVar1 = (HullDamageChance *)(iVar4 + uVar7 * 8);
        local_8 = (float)(int)fVar5;
        if (*(HullDamageChance **)((char *)this + 8) == pHVar3) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)this,pHVar1,(HullDamageChance *)&local_c)
          ;
          return;
        }
        if (pHVar1 != pHVar3) {
          *(undefined4 *)pHVar3 = *(undefined4 *)(pHVar3 + -8);
          *(undefined4 *)(pHVar3 + 4) = *(undefined4 *)(pHVar3 + -4);
          *(int *)((char *)this + 4) = *(int *)((char *)this + 4) + 8;
          memmove(pHVar3 + -(int)(pHVar3 + (-8 - (int)pHVar1)),pHVar1,
                  (size_t)(pHVar3 + (-8 - (int)pHVar1)));
          *(int *)pHVar1 = iVar8;
          *(float *)(pHVar1 + 4) = local_8;
          return;
        }
        goto LAB_00509263;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  local_8 = (float)(int)fVar5;
  if (*(HullDamageChance **)((char *)this + 8) == pHVar3) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)this,pHVar3,(HullDamageChance *)&local_c);
    return;
  }
LAB_00509263:
  local_8 = (float)(int)fVar5;
  *(int *)pHVar3 = iVar8;
  *(float *)(pHVar3 + 4) = local_8;
  *(int *)((char *)this + 4) = *(int *)((char *)this + 4) + 8;
  return;
}


// Ghidra: float __thiscall WaveformData::getStrength(WaveformData *this)
float WaveformData::getStrength()

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float10 in_ST0;
  
  uVar3 = 0;
  uVar1 = *(int *)((char *)this + 4) - *(int *)this >> 3;
  if (3 < uVar1) {
    iVar2 = (uVar1 - 4 >> 2) + 1;
    uVar3 = iVar2 * 4;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (uVar3 < uVar1) {
    iVar2 = uVar1 - uVar3;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (float)in_ST0;
}
