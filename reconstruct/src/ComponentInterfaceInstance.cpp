// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: int __thiscall ComponentInterfaceInstance::getComponentCount(ComponentInterfaceInstance *this)
int ComponentInterfaceInstance::getComponentCount()

{
  int iVar1;
  ComponentInterfaceInstance *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 4;
  pCVar2 = this + 8;
  do {
    iVar1 = iVar4 + 1;
    if (*(int *)(pCVar2 + -4) == 0) {
      iVar1 = iVar4;
    }
    iVar4 = iVar1 + 1;
    if (*(int *)pCVar2 == 0) {
      iVar4 = iVar1;
    }
    iVar1 = iVar4 + 1;
    if (*(int *)(pCVar2 + 4) == 0) {
      iVar1 = iVar4;
    }
    iVar3 = iVar1 + 1;
    if (*(int *)(pCVar2 + 8) == 0) {
      iVar3 = iVar1;
    }
    iVar4 = iVar3 + 1;
    if (*(int *)(pCVar2 + 0xc) == 0) {
      iVar4 = iVar3;
    }
    iVar5 = iVar5 + -1;
    pCVar2 = pCVar2 + 0x14;
  } while (iVar5 != 0);
  return iVar4;
}


// Ghidra: void __thiscall ComponentInterfaceInstance::applyConfiguration (ComponentInterfaceInstance *this,ModuleConfiguration *param_1)
void ComponentInterfaceInstance::applyConfiguration(ModuleConfiguration * param_1)

{
  int iVar1;
  GameData *pGVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_8;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  local_8 = 0;
  if (*(int *)(param_1 + 0x20) - iVar6 >> 2 != 0) {
    do {
      iVar1 = local_8 * 4;
      if (-1 < *(int *)(iVar1 + iVar6)) {
        puVar3 = operator_new(8);
        pGVar2 = g_gameData;
        iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
        uVar5 = 0;
        *puVar3 = 0x42c80000;
        uVar9 = *(int *)(pGVar2 + 4) - *(int *)pGVar2 >> 2;
        if (uVar9 != 0) {
          puVar7 = *(undefined4 **)pGVar2;
          do {
            if (*(int *)*puVar7 == iVar6) {
              uVar4 = (*(undefined4 **)pGVar2)[uVar5];
              goto LAB_004374cf;
            }
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar5 < uVar9);
        }
        uVar4 = 0;
LAB_004374cf:
        puVar3[1] = uVar4;
        *(undefined4 **)(this + iVar1 + 4) = puVar3;
      }
      if (0 < *(int *)(iVar1 + *(int *)(param_1 + 0x28))) {
        **(float **)(this + iVar1 + 4) = (float)*(int *)(iVar1 + *(int *)(param_1 + 0x28));
      }
      local_8 = local_8 + 1;
      iVar6 = *(int *)(param_1 + 0x1c);
    } while (local_8 < (uint)(*(int *)(param_1 + 0x20) - iVar6 >> 2));
  }
  uVar5 = 0;
  iVar6 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x38) - iVar6 >> 2 != 0) {
    do {
      if (-1 < *(int *)(iVar6 + uVar5 * 4)) {
        puVar3 = operator_new(8);
        pGVar2 = g_gameData;
        iVar6 = *(int *)(*(int *)(param_1 + 0x34) + uVar5 * 4);
        uVar9 = 0;
        *puVar3 = 0x42c80000;
        uVar8 = *(int *)(pGVar2 + 4) - *(int *)pGVar2 >> 2;
        if (uVar8 != 0) {
          puVar7 = *(undefined4 **)pGVar2;
          do {
            if (*(int *)*puVar7 == iVar6) {
              uVar4 = (*(undefined4 **)pGVar2)[uVar9];
              goto LAB_00437576;
            }
            uVar9 = uVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar9 < uVar8);
        }
        uVar4 = 0;
LAB_00437576:
        puVar3[1] = uVar4;
        *(undefined4 **)(this + uVar5 * 4 + 0x54) = puVar3;
      }
      uVar5 = uVar5 + 1;
      iVar6 = *(int *)(param_1 + 0x34);
    } while (uVar5 < (uint)(*(int *)(param_1 + 0x38) - iVar6 >> 2));
  }
  return;
}


// Ghidra: bool __thiscall ComponentInterfaceInstance::setActive(ComponentInterfaceInstance *this,int param_1)
bool ComponentInterfaceInstance::setActive(int param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)this_ + 0x50);
  uVar5 = *(int *)(*(int *)this_ + 0x54) - iVar1 >> 2;
  if (uVar5 != 0) {
    do {
      this_ = this_ + 4;
      iVar2 = *(int *)(iVar1 + uVar4 * 4);
      if ((*(int *)(iVar2 + 4) == param_1) &&
         (((pfVar3 = *(float **)this_, pfVar3 == (float *)0x0 ||
           (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) && (*(char *)(iVar2 + 8) == '\0'))))
      {
        return false;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return true;
}


// Ghidra: int __thiscall ComponentInterfaceInstance::damagePercent(ComponentInterfaceInstance *this)
int ComponentInterfaceInstance::damagePercent()

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  uVar6 = 0;
  iVar1 = *(int *)this;
  iVar7 = 100;
  iVar2 = *(int *)(iVar1 + 0x50);
  if (*(int *)(iVar1 + 0x54) - iVar2 >> 2 != 0) {
    do {
      if (0x13 < (int)uVar6) {
        debugPrint("GAME","ERROR: Too many components.");
        return 0;
      }
      iVar3 = *(int *)(iVar2 + uVar6 * 4);
      if ((*(char *)(iVar3 + 8) == '\0') &&
         (pfVar4 = *(float **)(this + uVar6 * 4 + 4), pfVar4 != (float *)0x0)) {
        fVar8 = *pfVar4;
        if ((fVar8 < (float)*(int *)((int)pfVar4[1] + 0x10)) ||
           (fVar8 < (float)*(int *)((int)pfVar4[1] + 0x14))) {
          iVar3 = *(int *)(iVar3 + 4);
          if (iVar3 != 0) {
            bVar5 = setActive(this,iVar3);
            if (!bVar5) goto LAB_004376aa;
          }
          if (fVar8 < (float)iVar7) {
            iVar7 = (int)fVar8;
          }
        }
      }
LAB_004376aa:
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(iVar1 + 0x54) - iVar2 >> 2));
  }
  return iVar7;
}


// Ghidra: void __thiscall ComponentInterfaceInstance::damageAtLocation (ComponentInterfaceInstance *this,int param_1,DamageType param_2,int param_3,int param_4)
void ComponentInterfaceInstance::damageAtLocation(int param_1, DamageType param_2, int param_3, int param_4)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float *pfVar1;
  float fVar2;
  DamageType DVar3;
  ComponentInterfaceInstance *pCVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  MetaGameAction *pMVar8;
  undefined4 *puVar9;
  MetaGameAction *pMVar10;
  nothrow_t *pnVar11;
  MetaGameAction *pMVar12;
  MetaGameAction *pMVar13;
  MetaGameAction *pMVar14;
  int iVar15;
  float fVar16;
  MetaGameAction *local_44;
  MetaGameAction *local_40;
  MetaGameAction *local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  ComponentInterfaceInstance *local_28;
  float local_24;
  MetaGameAction *local_20;
  MetaGameAction *local_1c;
  ComponentInterfaceInstance *local_18;
  char local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005b4c01;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_1c = (MetaGameAction *)0x0;
  local_44 = (MetaGameAction *)0x0;
  local_40 = (MetaGameAction *)0x0;
  local_20 = (MetaGameAction *)0x0;
  local_3c = (MetaGameAction *)0x0;
  // [seh] local_8 = 0;
  local_18 = this_;
  iVar6 = getComponentCount(this_);
  if (iVar6 == 0) {
    debugPrint("DETAIL","Unable to damage this_ module.");
  }
  else {
    local_11 = '\0';
    if (param_2 == 1) {
      iVar6 = 0x14;
      do {
        this_ = this_ + 4;
        pfVar1 = *(float **)this_;
        if (((pfVar1 != (float *)0x0) &&
            (fVar2 = pfVar1[1], (float)*(int *)((int)fVar2 + 0x10) <= *pfVar1)) &&
           (*(char *)((int)fVar2 + 0x2d) != '\0')) {
          piVar7 = (int *)((int)fVar2 + 0x38);
          if (0xf < *(uint *)((int)fVar2 + 0x4c)) {
            piVar7 = (int *)*piVar7;
          }
          debugPrint("GAME","EMP damage is absorbed by buffer \'%s\'",piVar7,uVar5);
          local_11 = '\x01';
          **(undefined4 **)this_ = 0x40a00000;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (0 < param_1) {
      local_2c = -4 - (int)local_18;
      pMVar10 = (MetaGameAction *)0x0;
      do {
        iVar6 = 0;
        if (0 < param_1) {
          iVar6 = rand();
          iVar6 = iVar6 % param_1 + 1;
        }
        local_24 = 9999999.0;
        local_30 = param_1;
        if (9 < param_1) {
          local_30 = iVar6;
        }
        if (0x3c < local_30) {
          local_30 = 0x3c;
        }
        param_1 = param_1 - local_30;
        local_28 = local_18 + 4;
        param_2 = 0xffffffff;
        pMVar14 = (MetaGameAction *)0x0;
        pMVar12 = (MetaGameAction *)0xffffffff;
        do {
          pMVar13 = pMVar12;
          fVar2 = local_24;
          if ((*(int *)local_28 != 0) &&
             (*(int *)(local_28 + *(int *)(*(int *)local_18 + 0x50) + local_2c) != 0)) {
            local_38 = (float)param_3;
            local_34 = (float)param_4;
            // [seh] local_8._0_1_ = 1;
            fVar16 = cocos2d::Vec2::getDistanceSq
                               ((Vec2 *)(*(int *)(local_28 +
                                                 *(int *)(*(int *)local_18 + 0x50) + local_2c) + 0xc
                                        ),(Vec2 *)&local_38);
            param_2 = 0x5f3759df - ((uint)fVar16 >> 1);
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
            fVar16 = (1.5 - fVar16 * 0.5 * (float)param_2 * (float)param_2) * (float)param_2 *
                     fVar16;
            fVar2 = local_24;
            if ((*(int *)local_28 != 0) && (fVar16 < local_24)) {
              pMVar8 = local_1c;
              if (local_1c == pMVar10) {
LAB_004378db:
                pMVar13 = pMVar14;
                fVar2 = fVar16;
              }
              else {
                do {
                  if (*(MetaGameAction **)pMVar8 == pMVar14) {
                    pMVar13 = pMVar12;
                    fVar2 = local_24;
                    if (pMVar8 == pMVar10) goto LAB_004378db;
                    break;
                  }
                  pMVar8 = pMVar8 + 4;
                  pMVar13 = pMVar14;
                  fVar2 = fVar16;
                } while (pMVar8 != pMVar10);
              }
            }
          }
          local_24 = fVar2;
          pCVar4 = local_18;
          pMVar8 = local_1c;
          pMVar14 = pMVar14 + 1;
          local_28 = local_28 + 4;
          pMVar12 = pMVar13;
        } while ((int)pMVar14 < 0x14);
        param_2 = (DamageType)pMVar13;
        if (pMVar13 == (MetaGameAction *)0xffffffff) {
          local_40 = local_1c;
          debugPrint("DETAIL",
                     "Run out of components to damage. Resetting damage set and trying again.");
        }
        else {
          if (*(float *)(*(int *)(*(int *)(local_18 + (int)pMVar13 * 4 + 4) + 4) + 0x1c) == 0.0) {
            puVar9 = (undefined4 *)(*(int *)(*(int *)(local_18 + (int)pMVar13 * 4 + 4) + 4) + 0x38);
            if (0xf < *(uint *)(*(int *)(*(int *)(local_18 + (int)pMVar13 * 4 + 4) + 4) + 0x4c)) {
              puVar9 = (undefined4 *)*puVar9;
            }
            debugPrint("ERROR","ERROR: sturdiness for component \'%s\' is zero.",puVar9);
            break;
          }
          if (local_20 == pMVar10) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)&local_44,(MetaGameAction **)pMVar10,(MetaGameAction **)&param_2)
            ;
            local_20 = local_3c;
            local_1c = local_44;
          }
          else {
            *(MetaGameAction **)pMVar10 = pMVar13;
            local_40 = pMVar10 + 4;
          }
          pMVar8 = local_40;
          DVar3 = param_2;
          pfVar1 = *(float **)(pCVar4 + param_2 * 4 + 0x54);
          if ((pfVar1 == (float *)0x0) || (*(int *)((int)pfVar1[1] + 0x80) != 0xb)) {
LAB_00437997:
            param_2 = param_2 & 0xffffff;
          }
          else {
            param_2 = CONCAT13(1,(undefined3)param_2);
            if (*pfVar1 < (float)*(int *)((int)pfVar1[1] + 0x10)) goto LAB_00437997;
          }
          iVar6 = *(int *)(pCVar4 + DVar3 * 4 + 4);
          iVar15 = local_30 / 2;
          if (param_2._3_1_ == 0) {
            iVar15 = local_30;
          }
          iVar15 = (int)((float)iVar15 / *(float *)(*(int *)(iVar6 + 4) + 0x1c));
          if (local_11 != '\0') {
            uVar5 = rand();
            uVar5 = uVar5 & 0x80000003;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
            }
            iVar15 = uVar5 + 1;
            iVar6 = *(int *)(local_18 + DVar3 * 4 + 4);
          }
          puVar9 = (undefined4 *)(*(int *)(iVar6 + 4) + 0x38);
          if (0xf < *(uint *)(*(int *)(iVar6 + 4) + 0x4c)) {
            puVar9 = (undefined4 *)*puVar9;
          }
          debugPrint("GAME","Component \'%s\' taking %d damage.",puVar9,iVar15);
          **(float **)(local_18 + DVar3 * 4 + 4) =
               **(float **)(local_18 + DVar3 * 4 + 4) - (float)iVar15;
          if (**(float **)(local_18 + DVar3 * 4 + 4) <= 0.0) {
            **(float **)(local_18 + DVar3 * 4 + 4) = 0.0;
          }
          if (*(int *)(local_18 + DVar3 * 4 + 0x54) != 0) {
            iVar6 = *(int *)(*(int *)(local_18 + DVar3 * 4 + 0x54) + 4);
            puVar9 = (undefined4 *)(iVar6 + 0x38);
            if (0xf < *(uint *)(iVar6 + 0x4c)) {
              puVar9 = (undefined4 *)*puVar9;
            }
            iVar6 = (iVar15 / 3) * 2;
            debugPrint("GAME","Addon \'%s\' taking %d damage.",puVar9,iVar6);
            **(float **)(local_18 + DVar3 * 4 + 0x54) =
                 **(float **)(local_18 + DVar3 * 4 + 0x54) - (float)iVar6;
            if (**(float **)(local_18 + DVar3 * 4 + 0x54) <= 0.0) {
              **(float **)(local_18 + DVar3 * 4 + 0x54) = 0.0;
            }
          }
        }
        pMVar10 = pMVar8;
      } while (0 < param_1);
      if (local_1c != (MetaGameAction *)0x0) {
        pnVar11 = (nothrow_t *)((int)local_20 - (int)local_1c & 0xfffffffc);
        pMVar10 = local_1c;
        if ((nothrow_t *)0xfff < pnVar11) {
          pMVar10 = *(MetaGameAction **)(local_1c + -4);
          pnVar11 = pnVar11 + 0x23;
          if ((MetaGameAction *)0x1f < local_1c + (-4 - (int)pMVar10)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pMVar10,pnVar11);
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall ComponentInterfaceInstance::damage(ComponentInterfaceInstance *this,int param_1,DamageType param_2)
void ComponentInterfaceInstance::damage(int param_1, DamageType param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float *pfVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  ComponentInterfaceInstance *pCVar11;
  int iVar12;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b4c28;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  iVar6 = getComponentCount(this);
  if (iVar6 == 0) {
    debugPrint("DETAIL","Unable to damage this module.");
    // [seh] ExceptionList = local_10;
    return;
  }
  bVar3 = false;
  if (param_2 == 1) {
    iVar6 = 0x14;
    pCVar11 = this;
    do {
      pCVar11 = pCVar11 + 4;
      pfVar1 = *(float **)pCVar11;
      if (((pfVar1 != (float *)0x0) &&
          (fVar2 = pfVar1[1], (float)*(int *)((int)fVar2 + 0x10) <= *pfVar1)) &&
         (*(char *)((int)fVar2 + 0x2d) != '\0')) {
        piVar7 = (int *)((int)fVar2 + 0x38);
        if (0xf < *(uint *)((int)fVar2 + 0x4c)) {
          piVar7 = (int *)*piVar7;
        }
        debugPrint("GAME","EMP damage is absorbed by buffer \'%s\'",piVar7,uVar5);
        bVar3 = true;
        **(undefined4 **)pCVar11 = 0x40a00000;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  do {
    if (param_1 < 1) {
      // [seh] ExceptionList = local_10;
      return;
    }
    iVar6 = 0;
    if (0 < param_1) {
      iVar6 = rand();
      iVar6 = iVar6 % param_1 + 1;
    }
    iVar12 = param_1;
    if (param_2 == 1) {
      if (9 < param_1) {
        iVar12 = iVar6;
      }
      if (0x32 < iVar12) {
        iVar12 = 0x32;
      }
    }
    else {
      if (9 < param_1) {
        iVar12 = iVar6;
      }
      if (0x3c < iVar12) {
        iVar12 = 0x3c;
      }
    }
    param_1 = param_1 - iVar12;
    iVar6 = 0;
    do {
      iVar8 = rand();
      iVar8 = iVar8 % 0x14;
      if (*(int *)(this + iVar8 * 4 + 4) == 0) {
        iVar8 = -1;
        iVar9 = getComponentCount(this);
        if (iVar9 == 0) {
          debugPrint("DETAIL",
                     "Run out of components to damage. Resetting damage set and trying again.");
        }
      }
      iVar6 = iVar6 + 1;
      if (0x1d < iVar6) {
        debugPrint("DETAIL","Unable to pick enough components to damage. Cancelling.");
        break;
      }
    } while (iVar8 == -1);
    if (0x1d < iVar6) {
      // [seh] ExceptionList = local_10;
      return;
    }
    if ((iVar8 != -1) && (iVar8 < 0x14)) {
      pfVar1 = *(float **)(this + iVar8 * 4 + 0x54);
      if ((pfVar1 == (float *)0x0) ||
         ((*(int *)((int)pfVar1[1] + 0x80) != 0xb ||
          (bVar4 = true, *pfVar1 < (float)*(int *)((int)pfVar1[1] + 0x10))))) {
        bVar4 = false;
      }
      iVar6 = *(int *)(this + iVar8 * 4 + 4);
      iVar9 = iVar12 / 2;
      if (!bVar4) {
        iVar9 = iVar12;
      }
      iVar12 = (int)((float)iVar9 / *(float *)(*(int *)(iVar6 + 4) + 0x1c));
      if (iVar6 != 0) {
        if (bVar3) {
          uVar5 = rand();
          uVar5 = uVar5 & 0x80000003;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
          }
          iVar6 = *(int *)(this + iVar8 * 4 + 4);
          iVar12 = uVar5 + 1;
        }
        puVar10 = (undefined4 *)(*(int *)(iVar6 + 4) + 0x38);
        if (0xf < *(uint *)(*(int *)(iVar6 + 4) + 0x4c)) {
          puVar10 = (undefined4 *)*puVar10;
        }
        debugPrint("GAME","Component \'%s\' taking %d damage.",puVar10,iVar12);
        **(float **)(this + iVar8 * 4 + 4) = **(float **)(this + iVar8 * 4 + 4) - (float)iVar12;
        if (**(float **)(this + iVar8 * 4 + 4) <= 0.0) {
          **(float **)(this + iVar8 * 4 + 4) = 0.0;
        }
      }
      if (*(int *)(this + iVar8 * 4 + 0x54) != 0) {
        iVar6 = *(int *)(*(int *)(this + iVar8 * 4 + 0x54) + 4);
        puVar10 = (undefined4 *)(iVar6 + 0x38);
        if (0xf < *(uint *)(iVar6 + 0x4c)) {
          puVar10 = (undefined4 *)*puVar10;
        }
        iVar6 = (iVar12 / 3) * 2;
        debugPrint("GAME","Addon \'%s\' taking %d damage.",puVar10,iVar6);
        **(float **)(this + iVar8 * 4 + 0x54) = **(float **)(this + iVar8 * 4 + 0x54) - (float)iVar6
        ;
        if (**(float **)(this + iVar8 * 4 + 0x54) <= 0.0) {
          **(float **)(this + iVar8 * 4 + 0x54) = 0.0;
        }
      }
    }
  } while( true );
}


// Ghidra: int __thiscall ComponentInterfaceInstance::getEfficiencyPercent(ComponentInterfaceInstance *this)
int ComponentInterfaceInstance::getEfficiencyPercent()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char cVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_18;
  char local_14 [8];
  int local_c;
  ComponentInterfaceInstance *local_8;
  
  local_c = *(int *)this_;
  fVar11 = 0.0;
  uVar9 = 0;
  local_8 = this_;
  local_18 = *(int *)(local_c + 0x54) - *(int *)(local_c + 0x50) >> 2;
  builtin_strncpy(local_14,"\x01\x01\x01\x01\x01\x01\x01\x01",8);
  if (local_18 != 0) {
    iVar5 = -4 - (int)this_;
    do {
      this_ = this_ + 4;
      if (0x13 < (int)uVar9) {
        debugPrint("GAME","ERROR: Too many components.");
        return 0;
      }
      if (*(char *)(*(int *)(this_ + *(int *)(local_c + 0x50) + iVar5) + 8) == '\0') {
        uVar2 = *(uint *)(*(int *)(this_ + *(int *)(local_c + 0x50) + iVar5) + 4);
        pfVar3 = *(float **)this_;
        if (uVar2 == 0) {
          if (pfVar3 == (float *)0x0) {
            return 0;
          }
          if (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10)) {
            return 0;
          }
        }
        else if ((int)uVar2 < 1) {
          if ((pfVar3 == (float *)0x0) || (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) {
            if (3 < ~uVar2) goto LAB_00438079;
            local_14[~uVar2] = '\0';
          }
        }
        else if ((pfVar3 == (float *)0x0) || (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) {
          if (3 < uVar2 - 1) {
LAB_00438079:
                    // WARNING: Subroutine does not return
            ___report_rangecheckfailure();
          }
          local_14[uVar2 + 3] = '\0';
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(local_c + 0x54) - *(int *)(local_c + 0x50) >> 2));
  }
  uVar9 = 0;
  if (local_18 != 0) {
    do {
      pfVar3 = *(float **)(local_8 + uVar9 * 4 + 4);
      if (pfVar3 != (float *)0x0) {
        iVar5 = *(int *)(*(int *)(*(int *)(local_c + 0x50) + uVar9 * 4) + 4);
        if (iVar5 != 0) {
          if (iVar5 < 1) {
            cVar1 = *(char *)((int)&local_18 + (3 - iVar5));
          }
          else {
            cVar1 = local_14[iVar5 + 3];
          }
          if (cVar1 == '\0') goto LAB_00437ff5;
        }
        fVar4 = pfVar3[1];
        if ((float)*(int *)((int)fVar4 + 0x10) <= *pfVar3) {
          fVar10 = 1.0;
          if (*pfVar3 < (float)*(int *)((int)fVar4 + 0x14)) {
            fVar10 = 1.0 - (float)*(int *)((int)fVar4 + 0x18) / 100.0;
          }
        }
        else {
          fVar10 = 0.0;
        }
        fVar11 = fVar11 + *(float *)((int)fVar4 + 8) * fVar10;
      }
LAB_00437ff5:
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_18);
  }
  iVar6 = 100;
  iVar5 = 0;
  if (0 < *(int *)(local_c + 0x30)) {
    iVar6 = 0;
    do {
      iVar8 = iVar5 + 1;
      if (local_14[iVar6 + 4] == '\0') {
        iVar8 = iVar5;
      }
      iVar5 = iVar8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_c + 0x30));
    if (iVar5 == 0) {
      return 0;
    }
    iVar6 = (iVar5 - *(int *)(local_c + 0x40)) * *(int *)(local_c + 0x38) + 100;
  }
  if (0 < *(int *)(local_c + 0x34)) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      iVar7 = iVar5 + 1;
      if (local_14[iVar8] == '\0') {
        iVar7 = iVar5;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar7;
    } while (iVar8 < *(int *)(local_c + 0x34));
    if (iVar7 == 0) {
      return 0;
    }
    iVar6 = iVar6 + (iVar7 - *(int *)(local_c + 0x44)) * *(int *)(local_c + 0x3c);
  }
  return (int)((float)iVar6 + fVar11);
}


// Ghidra: float __thiscall ComponentInterfaceInstance::getEmissionsModifier(ComponentInterfaceInstance *this)
float ComponentInterfaceInstance::getEmissionsModifier()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  ComponentInterfaceInstance *local_c;
  int local_8;
  
  local_18 = 0x1010101;
  uVar6 = 0;
  local_c = this_;
  local_10 = *(int *)this_;
  local_14 = 0x1010101;
  uVar5 = *(int *)(local_10 + 0x54) - *(int *)(local_10 + 0x50) >> 2;
  if (uVar5 != 0) {
    iVar4 = -4 - (int)this_;
    local_8 = iVar4;
    do {
      this_ = this_ + 4;
      if (0x13 < (int)uVar6) {
        debugPrint("GAME","ERROR: Too many components.");
        return (float)extraout_ST0;
      }
      iVar1 = *(int *)(local_10 + 0x50);
      if (*(char *)(*(int *)(this_ + iVar1 + iVar4) + 8) == '\0') {
        uVar2 = *(uint *)(*(int *)(this_ + iVar1 + iVar4) + 4);
        pfVar3 = *(float **)this_;
        iVar4 = local_8;
        if (uVar2 == 0) {
          if ((pfVar3 == (float *)0x0) || (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10)))
          goto LAB_004381f0;
        }
        else if ((int)uVar2 < 1) {
          if ((pfVar3 == (float *)0x0) || (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) {
            if (3 < ~uVar2) goto LAB_004381fa;
            *(undefined1 *)((int)&local_18 + ~uVar2) = 0;
            iVar4 = local_8;
          }
        }
        else if ((pfVar3 == (float *)0x0) || (*pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) {
          if (3 < uVar2 - 1) {
LAB_004381fa:
                    // WARNING: Subroutine does not return
            ___report_rangecheckfailure();
          }
          *(undefined1 *)((int)&local_18 + uVar2 + 3) = 0;
          iVar4 = local_8;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(local_10 + 0x54) - iVar1 >> 2));
  }
  uVar6 = 0;
  if (uVar5 != 0) {
    do {
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
LAB_004381f0:
  return (float)in_ST0;
}


// Ghidra: float __thiscall ComponentInterfaceInstance::getPowerModifier(ComponentInterfaceInstance *this)
float ComponentInterfaceInstance::getPowerModifier()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xffffffef[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float10 in_ST0;
  float10 extraout_ST0;
  undefined1 auStack_10 [4];
  int local_c;
  int local_8;
  
  iVar4 = *(int *)this_;
  uVar5 = 0;
  if (*(int *)(iVar4 + 0x54) - *(int *)(iVar4 + 0x50) >> 2 != 0) {
    local_c = -4 - (int)this_;
    local_8 = iVar4;
    do {
      this_ = this_ + 4;
      if (0x13 < (int)uVar5) {
        debugPrint("GAME","ERROR: Too many components.");
        in_ST0 = extraout_ST0;
LAB_00438304:
        return (float)in_ST0;
      }
      iVar1 = *(int *)(iVar4 + 0x50);
      if (*(char *)(*(int *)(this_ + iVar1 + local_c) + 8) == '\0') {
        uVar2 = *(uint *)(*(int *)(this_ + iVar1 + local_c) + 4);
        pfVar3 = *(float **)this_;
        if (uVar2 == 0) {
          if ((pfVar3 == (float *)0x0) ||
             (iVar4 = local_8, *pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) goto LAB_00438304;
        }
        else if ((int)uVar2 < 1) {
          if ((pfVar3 == (float *)0x0) ||
             (iVar4 = local_8, *pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) {
            if (3 < ~uVar2) goto LAB_00438320;
            auStack_10[~uVar2] = 0;
          }
        }
        else if ((pfVar3 == (float *)0x0) ||
                (iVar4 = local_8, *pfVar3 < (float)*(int *)((int)pfVar3[1] + 0x10))) {
          if (3 < uVar2 - 1) {
LAB_00438320:
                    // WARNING: Subroutine does not return
            ___report_rangecheckfailure();
          }
          (&stack0xffffffef)[uVar2] = 0;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(iVar4 + 0x54) - iVar1 >> 2));
  }
  return (float)in_ST0;
}
