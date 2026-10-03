// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall SensorDataStates::checkWaveform(SensorDataStates *this)
bool SensorDataStates::checkWaveform()

{
  AnimationFrames **ppAVar1;
  MetaGameAction **ppMVar2;
  AnimationFrames **ppAVar3;
  MetaGameAction **ppMVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_c;
  
  iVar8 = *(int *)this;
  iVar7 = *(int *)(iVar8 + 0xec);
  uVar9 = *(int *)(iVar8 + 0xf0) - iVar7 >> 3;
  if (uVar9 == *(int *)((char *)this + 0x110) - *(int *)((char *)this + 0x10c) >> 2) {
    uVar5 = *(int *)(iVar8 + 0xfc) - *(int *)(*(int *)this + 0xf8) >> 3;
    if (uVar5 == *(int *)((char *)this + 0x128) - *(int *)((char *)this + 0x124) >> 2) {
      uVar6 = 0;
      if (uVar9 != 0) {
        do {
          if ((*(int *)(iVar7 + uVar6 * 8) != *(int *)(*(int *)((char *)this + 0x118) + uVar6 * 4)) ||
             (*(float *)(iVar7 + 4 + uVar6 * 8) != *(float *)(*(int *)((char *)this + 0x10c) + uVar6 * 4)))
          goto LAB_004222d2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar9);
      }
      uVar9 = 0;
      if (uVar5 == 0) {
        return false;
      }
      iVar7 = *(int *)((char *)this + 0x130);
      while ((*(int *)(*(int *)(iVar8 + 0xf8) + uVar9 * 8) == *(int *)(iVar7 + uVar9 * 4) &&
             (*(float *)(*(int *)(iVar8 + 0xf8) + 4 + uVar9 * 8) ==
              *(float *)(*(int *)((char *)this + 0x124) + uVar9 * 4)))) {
        iVar7 = *(int *)((char *)this + 0x130);
        uVar9 = uVar9 + 1;
        if (uVar5 <= uVar9) {
          return false;
        }
      }
    }
  }
LAB_004222d2:
  *(int *)((char *)this + 0x110) = *(int *)((char *)this + 0x10c);
  uVar9 = 0;
  *(undefined4 *)((char *)this + 0x11c) = *(undefined4 *)((char *)this + 0x118);
  iVar8 = *(int *)this;
  if (*(int *)(iVar8 + 0xf0) - *(int *)(iVar8 + 0xec) >> 3 != 0) {
    do {
      ppAVar1 = *(AnimationFrames ***)((char *)this + 0x110);
      ppAVar3 = (AnimationFrames **)(*(int *)(iVar8 + 0xec) + uVar9 * 8 + 4);
      if (*(AnimationFrames ***)((char *)this + 0x114) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x10c),ppAVar1,ppAVar3);
      }
      else {
        *ppAVar1 = *ppAVar3;
        *(AnimationFrames ***)((char *)this + 0x110) = ppAVar1 + 1;
      }
      ppMVar4 = (MetaGameAction **)(*(int *)(*(int *)this + 0xec) + uVar9 * 8);
      ppMVar2 = *(MetaGameAction ***)((char *)this + 0x11c);
      if (*(MetaGameAction ***)((char *)this + 0x120) == ppMVar2) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x118),ppMVar2,ppMVar4);
      }
      else {
        *ppMVar2 = *ppMVar4;
        *(int *)((char *)this + 0x11c) = *(int *)((char *)this + 0x11c) + 4;
      }
      iVar8 = *(int *)this;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(iVar8 + 0xf0) - *(int *)(iVar8 + 0xec) >> 3));
  }
  *(undefined4 *)((char *)this + 0x128) = *(undefined4 *)((char *)this + 0x124);
  *(undefined4 *)((char *)this + 0x134) = *(undefined4 *)((char *)this + 0x130);
  iVar8 = *(int *)this;
  local_c = 0;
  if (*(int *)(iVar8 + 0xfc) - *(int *)(iVar8 + 0xf8) >> 3 == 0) {
    return true;
  }
  do {
    ppAVar1 = *(AnimationFrames ***)((char *)this + 0x128);
    ppAVar3 = (AnimationFrames **)(*(int *)(iVar8 + 0xf8) + local_c * 8 + 4);
    if (*(AnimationFrames ***)((char *)this + 300) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x124),ppAVar1,ppAVar3);
    }
    else {
      *ppAVar1 = *ppAVar3;
      *(AnimationFrames ***)((char *)this + 0x128) = ppAVar1 + 1;
    }
    ppMVar4 = (MetaGameAction **)(*(int *)(*(int *)this + 0xf8) + local_c * 8);
    ppMVar2 = *(MetaGameAction ***)((char *)this + 0x134);
    if (*(MetaGameAction ***)((char *)this + 0x138) == ppMVar2) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x130),ppMVar2,ppMVar4);
    }
    else {
      *ppMVar2 = *ppMVar4;
      *(int *)((char *)this + 0x134) = *(int *)((char *)this + 0x134) + 4;
    }
    iVar8 = *(int *)this;
    local_c = local_c + 1;
  } while (local_c < (uint)(*(int *)(iVar8 + 0xfc) - *(int *)(iVar8 + 0xf8) >> 3));
  return true;
}


// Ghidra: bool __thiscall SensorDataStates::checkAdvancedDetails(SensorDataStates *this)
bool SensorDataStates::checkAdvancedDetails()

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  std::string *pbVar4;
  uint unaff_ESI;
  char *unaff_EDI;
  int iVar5;
  bool bVar6;
  char *local_c;
  std::string *local_8;
  
  iVar5 = *(int *)this;
  bVar6 = *(int *)((char *)this + 8) != *(int *)(iVar5 + 0x124);
  if (bVar6) {
    *(int *)((char *)this + 8) = *(int *)(iVar5 + 0x124);
  }
  pbVar4 = (std::string *)(iVar5 + 0x48);
  local_8 = pbVar4;
  if (0xf < *(uint *)(iVar5 + 0x5c)) {
    local_8 = *(std::string **)pbVar4;
  }
  uVar1 = *(uint *)(iVar5 + 0x58);
  bVar3 = ghidra::lib::_Traits_equal___x28_x29((char *)local_8,uVar1,unaff_EDI,unaff_ESI);
  if (!bVar3) {
    if ((std::string *)((char *)this + 0x4c) != pbVar4) {
      if (0xf < *(uint *)(iVar5 + 0x5c)) {
        pbVar4 = *(std::string **)pbVar4;
      }
      ghidra::str::assign((std::string *)((char *)this + 0x4c),(char *)pbVar4,uVar1);
      iVar5 = *(int *)this;
    }
    bVar6 = true;
  }
  if (*(int *)((char *)this + 0xe0) != *(int *)(iVar5 + 0xe4)) {
    *(int *)((char *)this + 0xe0) = *(int *)(iVar5 + 0xe4);
    bVar6 = true;
  }
  if (*(int *)((char *)this + 0xe4) != *(int *)(iVar5 + 0xe8)) {
    *(int *)((char *)this + 0xe4) = *(int *)(iVar5 + 0xe8);
    bVar6 = true;
  }
  uVar1 = *(uint *)(iVar5 + 0x74);
  local_c = (char *)(iVar5 + 0x60);
  if (0xf < uVar1) {
    local_c = *(char **)local_c;
  }
  uVar2 = *(uint *)(iVar5 + 0x70);
  bVar3 = ghidra::lib::_Traits_equal___x28_x29(local_c,uVar2,unaff_EDI,unaff_ESI);
  if (!bVar3) {
    pbVar4 = (std::string *)(iVar5 + 0x60);
    if ((std::string *)((char *)this + 100) != pbVar4) {
      if (0xf < uVar1) {
        pbVar4 = *(std::string **)pbVar4;
      }
      ghidra::str::assign((std::string *)((char *)this + 100),(char *)pbVar4,uVar2);
      iVar5 = *(int *)this;
    }
    bVar6 = true;
  }
  if (*(double *)((char *)this + 0x28) != *(double *)(iVar5 + 0x28)) {
    *(double *)((char *)this + 0x28) = *(double *)(iVar5 + 0x28);
    bVar6 = true;
  }
  if (*(double *)((char *)this + 0x30) != *(double *)(iVar5 + 0x20)) {
    *(double *)((char *)this + 0x30) = *(double *)(iVar5 + 0x20);
    bVar6 = true;
  }
  uVar1 = *(uint *)(iVar5 + 0x8c);
  local_c = (char *)(iVar5 + 0x78);
  if (0xf < uVar1) {
    local_c = *(char **)local_c;
  }
  uVar2 = *(uint *)(iVar5 + 0x88);
  bVar3 = ghidra::lib::_Traits_equal___x28_x29(local_c,uVar2,unaff_EDI,unaff_ESI);
  if (!bVar3) {
    pbVar4 = (std::string *)(iVar5 + 0x78);
    if ((std::string *)((char *)this + 0x7c) != pbVar4) {
      if (0xf < uVar1) {
        pbVar4 = *(std::string **)pbVar4;
      }
      ghidra::str::assign((std::string *)((char *)this + 0x7c),(char *)pbVar4,uVar2);
      iVar5 = *(int *)this;
    }
    bVar6 = true;
  }
  uVar1 = *(uint *)(iVar5 + 0xa4);
  local_c = (char *)(iVar5 + 0x90);
  if (0xf < uVar1) {
    local_c = *(char **)local_c;
  }
  uVar2 = *(uint *)(iVar5 + 0xa0);
  bVar3 = ghidra::lib::_Traits_equal___x28_x29(local_c,uVar2,unaff_EDI,unaff_ESI);
  if (!bVar3) {
    pbVar4 = (std::string *)(iVar5 + 0x90);
    if ((std::string *)((char *)this + 0x94) != pbVar4) {
      if (0xf < uVar1) {
        pbVar4 = *(std::string **)pbVar4;
      }
      ghidra::str::assign((std::string *)((char *)this + 0x94),(char *)pbVar4,uVar2);
      iVar5 = *(int *)this;
    }
    bVar6 = true;
  }
  uVar1 = *(uint *)(iVar5 + 0xbc);
  local_c = (char *)(iVar5 + 0xa8);
  if (0xf < uVar1) {
    local_c = *(char **)local_c;
  }
  uVar2 = *(uint *)(iVar5 + 0xb8);
  bVar3 = ghidra::lib::_Traits_equal___x28_x29(local_c,uVar2,unaff_EDI,unaff_ESI);
  if (!bVar3) {
    pbVar4 = (std::string *)(iVar5 + 0xa8);
    if ((std::string *)((char *)this + 0xac) != pbVar4) {
      if (0xf < uVar1) {
        pbVar4 = *(std::string **)pbVar4;
      }
      ghidra::str::assign((std::string *)((char *)this + 0xac),(char *)pbVar4,uVar2);
      iVar5 = *(int *)this;
    }
    bVar6 = true;
  }
  uVar1 = *(uint *)(iVar5 + 0xd4);
  local_c = (char *)(iVar5 + 0xc0);
  if (0xf < uVar1) {
    local_c = *(char **)local_c;
  }
  uVar2 = *(uint *)(iVar5 + 0xd0);
  bVar3 = ghidra::lib::_Traits_equal___x28_x29(local_c,uVar2,unaff_EDI,unaff_ESI);
  if (!bVar3) {
    pbVar4 = (std::string *)(iVar5 + 0xc0);
    if ((std::string *)((char *)this + 0xc4) != pbVar4) {
      if (0xf < uVar1) {
        pbVar4 = *(std::string **)pbVar4;
      }
      ghidra::str::assign((std::string *)((char *)this + 0xc4),(char *)pbVar4,uVar2);
      iVar5 = *(int *)this;
    }
    bVar6 = true;
  }
  if (((char *)this)[0xfb] != *(SensorDataStates *)(iVar5 + 0x45)) {
    ((char *)this)[0xfb] = *(SensorDataStates *)(iVar5 + 0x45);
    bVar6 = true;
  }
  if (*(int *)((char *)this + 0x104) != *(int *)(iVar5 + 0xdc)) {
    *(int *)((char *)this + 0x104) = *(int *)(iVar5 + 0xdc);
    bVar6 = true;
  }
  if (*(int *)((char *)this + 0xdc) != *(int *)(iVar5 + 0xe0)) {
    *(int *)((char *)this + 0xdc) = *(int *)(iVar5 + 0xe0);
    bVar6 = true;
  }
  if (*(int *)((char *)this + 0xfc) != *(int *)(iVar5 + 0x11c)) {
    *(int *)((char *)this + 0xfc) = *(int *)(iVar5 + 0x11c);
    bVar6 = true;
  }
  if (((char *)this)[0xf4] != *(SensorDataStates *)(iVar5 + 0x10c)) {
    ((char *)this)[0xf4] = *(SensorDataStates *)(iVar5 + 0x10c);
    bVar6 = true;
  }
  if (((char *)this)[0xf5] != *(SensorDataStates *)(iVar5 + 0x10f)) {
    ((char *)this)[0xf5] = *(SensorDataStates *)(iVar5 + 0x10f);
    bVar6 = true;
  }
  if (((char *)this)[0xf6] != *(SensorDataStates *)(iVar5 + 0x10e)) {
    ((char *)this)[0xf6] = *(SensorDataStates *)(iVar5 + 0x10e);
    bVar6 = true;
  }
  if (((char *)this)[0xf7] != *(SensorDataStates *)(iVar5 + 0x10d)) {
    ((char *)this)[0xf7] = *(SensorDataStates *)(iVar5 + 0x10d);
    bVar6 = true;
  }
  if (((char *)this)[0xf8] != *(SensorDataStates *)(iVar5 + 0x110)) {
    ((char *)this)[0xf8] = *(SensorDataStates *)(iVar5 + 0x110);
    bVar6 = true;
  }
  if (((char *)this)[0xfa] != *(SensorDataStates *)(iVar5 + 0x112)) {
    ((char *)this)[0xfa] = *(SensorDataStates *)(iVar5 + 0x112);
    bVar6 = true;
  }
  if (((char *)this)[0xf9] != *(SensorDataStates *)(iVar5 + 0x111)) {
    ((char *)this)[0xf9] = *(SensorDataStates *)(iVar5 + 0x111);
    bVar6 = true;
  }
  if (*(int *)((char *)this + 0x100) != *(int *)(iVar5 + 0xd8)) {
    *(int *)((char *)this + 0x100) = *(int *)(iVar5 + 0xd8);
    bVar6 = true;
  }
  if (*(int *)((char *)this + 0x140) != *(int *)(iVar5 + 300)) {
    *(int *)((char *)this + 0x140) = *(int *)(iVar5 + 300);
    bVar6 = true;
  }
  if (((char *)this)[0x108] != *(SensorDataStates *)(iVar5 + 0x120)) {
    ((char *)this)[0x108] = *(SensorDataStates *)(iVar5 + 0x120);
    bVar6 = true;
  }
  if (((char *)this)[0x109] != *(SensorDataStates *)(iVar5 + 0x121)) {
    ((char *)this)[0x109] = *(SensorDataStates *)(iVar5 + 0x121);
    bVar6 = true;
  }
  if (((char *)this)[0x10a] != *(SensorDataStates *)(iVar5 + 0x122)) {
    ((char *)this)[0x10a] = *(SensorDataStates *)(iVar5 + 0x122);
    return true;
  }
  return bVar6;
}


// Ghidra: void __thiscall SensorDataStates::~SensorDataStates(SensorDataStates *this)
SensorDataStates::~SensorDataStates()

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  pvVar1 = *(void **)((char *)this + 0x130);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x138) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x130) = 0;
    *(undefined4 *)((char *)this + 0x134) = 0;
    *(undefined4 *)((char *)this + 0x138) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x124);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 300) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x124) = 0;
    *(undefined4 *)((char *)this + 0x128) = 0;
    *(undefined4 *)((char *)this + 300) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x118);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x120) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x118) = 0;
    *(undefined4 *)((char *)this + 0x11c) = 0;
    *(undefined4 *)((char *)this + 0x120) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x10c);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x114) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x10c) = 0;
    *(undefined4 *)((char *)this + 0x110) = 0;
    *(undefined4 *)((char *)this + 0x114) = 0;
  }
  uVar2 = *(uint *)((char *)this + 0xd8);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0xc4);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0xd4) = 0;
  *(undefined4 *)((char *)this + 0xd8) = 0xf;
  ((char *)this)[0xc4] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0xc0);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0xac);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0xbc) = 0;
  *(undefined4 *)((char *)this + 0xc0) = 0xf;
  ((char *)this)[0xac] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0xa8);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x94);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0xa4) = 0;
  *(undefined4 *)((char *)this + 0xa8) = 0xf;
  ((char *)this)[0x94] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x90);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x7c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x8c) = 0;
  *(undefined4 *)((char *)this + 0x90) = 0xf;
  ((char *)this)[0x7c] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x78);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 100);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0042a7e3;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x74) = 0;
  *(undefined4 *)((char *)this + 0x78) = 0xf;
  ((char *)this)[100] = (byte)0x0;
  uVar2 = *(uint *)((char *)this + 0x60);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x4c);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0042a7e3:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x5c) = 0;
  *(undefined4 *)((char *)this + 0x60) = 0xf;
  ((char *)this)[0x4c] = (byte)0x0;
  return;
}
