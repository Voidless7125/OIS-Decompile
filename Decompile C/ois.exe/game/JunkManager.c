#include "../ois.exe.h"


// public: class Junk * __thiscall JunkManager::getRandomJunkForSector(class Sector *)

Junk * __thiscall JunkManager::getRandomJunkForSector(JunkManager *this,Sector *param_1)

{
  AnimationFrames **ppAVar1;
  AnimationFrames *pAVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  AnimationFrames **ppAVar7;
  int iVar8;
  Junk *pJVar9;
  uint uVar10;
  nothrow_t *pnVar11;
  void *local_2c;
  AnimationFrames **local_28;
  AnimationFrames **local_24;
  void *local_20;
  AnimationFrames **local_1c;
  JunkManager *local_18;
  char local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bd978;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppAVar7 = (AnimationFrames **)0x0;
  local_20 = (void *)0x0;
  local_2c = (void *)0x0;
  local_28 = (AnimationFrames **)0x0;
  local_1c = (AnimationFrames **)0x0;
  local_24 = (AnimationFrames **)0x0;
  local_8 = 0;
  uVar6 = 0;
  iVar8 = *(int *)this;
  local_18 = this;
  if (*(int *)(this + 4) - iVar8 >> 2 != 0) {
    do {
      iVar4 = *(int *)(iVar8 + uVar6 * 4);
      if (*(float *)(iVar4 + 0x40) <= 0.0) {
        uVar10 = 0;
        local_11 = '\x01';
        if (*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) >> 2 != 0) {
          do {
            bVar3 = Requirement::checkReq
                              (*(Requirement **)
                                (*(int *)(*(int *)(iVar8 + uVar6 * 4) + 0x10) + uVar10 * 4),
                               *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                               *(BankAccount **)(g_gameData + 0x124));
            iVar8 = *(int *)local_18;
            if (!bVar3) {
              local_11 = '\0';
              break;
            }
            iVar4 = *(int *)(iVar8 + uVar6 * 4);
            uVar10 = uVar10 + 1;
          } while (uVar10 < (uint)(*(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x10) >> 2));
        }
        if (local_11 != '\0') {
          pAVar2 = *(AnimationFrames **)(iVar8 + uVar6 * 4);
          iVar4 = *(int *)(pAVar2 + 0x20) - *(int *)(pAVar2 + 0x1c) >> 2;
          if (iVar4 == 0) {
            if (local_1c == ppAVar7) {
              std::vector<>::_Emplace_reallocate<>
                        ((vector<> *)&local_2c,ppAVar7,(AnimationFrames **)(iVar8 + uVar6 * 4));
              local_1c = local_24;
              iVar8 = *(int *)local_18;
              ppAVar7 = local_28;
            }
            else {
              *ppAVar7 = pAVar2;
              local_28 = ppAVar7 + 1;
              iVar8 = *(int *)local_18;
              ppAVar7 = local_28;
            }
          }
          else {
            local_20 = (void *)0x0;
            if (iVar4 != 0) {
              do {
                ppAVar1 = (AnimationFrames **)(iVar8 + uVar6 * 4);
                pAVar2 = *ppAVar1;
                if (*(int *)(*(int *)(pAVar2 + 0x1c) + (int)local_20 * 4) == *(int *)param_1) {
                  if (local_1c == ppAVar7) {
                    std::vector<>::_Emplace_reallocate<>((vector<> *)&local_2c,ppAVar7,ppAVar1);
                    local_1c = local_24;
                    ppAVar7 = local_28;
                  }
                  else {
                    *ppAVar7 = pAVar2;
                    local_28 = ppAVar7 + 1;
                    ppAVar7 = local_28;
                  }
                }
                local_20 = (void *)((int)local_20 + 1);
                iVar8 = *(int *)local_18;
                iVar4 = *(int *)(iVar8 + uVar6 * 4);
              } while (local_20 < (void *)(*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 2));
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(local_18 + 4) - iVar8 >> 2));
    local_20 = local_2c;
  }
  ppAVar1 = local_1c;
  iVar8 = (int)ppAVar7 - (int)local_20 >> 2;
  pJVar9 = (Junk *)0x0;
  local_2c = local_20;
  if (iVar8 != 0) {
    iVar4 = rand();
    pJVar9 = *(Junk **)((int)local_20 + (iVar4 % iVar8) * 4);
  }
  if (local_20 != (void *)0x0) {
    pnVar11 = (nothrow_t *)((int)ppAVar1 - (int)local_20 & 0xfffffffc);
    pvVar5 = local_20;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar5 = *(void **)((int)local_20 - 4);
      pnVar11 = pnVar11 + 0x23;
      if (0x1f < (uint)((int)local_20 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,pnVar11);
  }
  ExceptionList = local_10;
  return pJVar9;
}


// public: void __thiscall JunkManager::generateJunkForSector(class Sector *,class cocos2d::Vec2)

void __thiscall
JunkManager::generateJunkForSector
          (JunkManager *this,Sector *param_1,undefined4 param_3,undefined4 param_4)

{
  AnimationFrames **ppAVar1;
  CargoHold *this_00;
  Junk *pJVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  AnimationFrames *pAVar7;
  AnimationFrames *pAVar8;
  nothrow_t *pnVar9;
  AnimationFrames *pAVar10;
  basic_string<> *pbVar11;
  uint uVar12;
  Vec2 *pVVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  AnimationFrames *local_7c;
  AnimationFrames *local_78;
  AnimationFrames *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_5c;
  AnimationFrames *local_58;
  AnimationFrames *local_54;
  Good *local_50;
  int local_4c;
  int local_48;
  int local_44;
  AnimationFrames *local_40;
  JunkManager *local_3c;
  basic_string<> *local_38;
  int local_34;
  int local_30;
  SyntheticObject *local_2c;
  AnimationFrames *local_28;
  AnimationFrames *local_24;
  int local_20;
  AnimationFrames *local_1c;
  Junk *local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bd9c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xd8) >> 2 != 0) {
    piVar16 = (int *)0x0;
    iVar5 = 0;
    local_3c = this;
LAB_004a917b:
    do {
      if (99 < iVar5) {
        if (piVar16 == (int *)0x0) goto LAB_004a9236;
        goto LAB_004a9215;
      }
      iVar14 = *(int *)(param_1 + 0xdc);
      iVar17 = *(int *)(param_1 + 0xd8);
      iVar4 = rand();
      uVar12 = 0;
      piVar16 = *(int **)(*(int *)(param_1 + 0xd8) + (iVar4 % (iVar14 - iVar17 >> 2)) * 4);
      iVar14 = piVar16[4];
      if (piVar16[5] - iVar14 >> 2 != 0) {
        do {
          bVar3 = Requirement::checkReq
                            (*(Requirement **)(iVar14 + uVar12 * 4),
                             *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(BankAccount **)(g_gameData + 0x124));
          if (!bVar3) {
            piVar16 = (int *)0x0;
            iVar5 = iVar5 + 1;
            goto LAB_004a917b;
          }
          uVar12 = uVar12 + 1;
          iVar14 = piVar16[4];
        } while (uVar12 < (uint)(piVar16[5] - iVar14 >> 2));
      }
      iVar5 = iVar5 + 1;
    } while (piVar16 == (int *)0x0);
    iVar5 = rand();
    if (*piVar16 < iVar5 % 100) {
LAB_004a9236:
      debugPrint("WORLD","No junk for this sector.");
    }
    else {
LAB_004a9215:
      iVar5 = piVar16[1];
      if ((iVar5 == 0) && (piVar16[3] == 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        local_40 = (AnimationFrames *)piVar16[3];
        iVar14 = piVar16[2];
        iVar17 = 0;
        if ((0 < iVar14) && (0 < iVar5)) {
          do {
            iVar4 = rand();
            iVar17 = iVar17 + 1 + iVar4 % iVar14;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_58 = local_40 + iVar17;
        local_30 = 0;
        local_5c = 0;
        if (0 < (int)local_58) {
          do {
            if (99 < local_5c) {
              ExceptionList = local_10;
              return;
            }
            local_5c = local_5c + 1;
            local_18 = getRandomJunkForSector(local_3c,param_1);
            if (local_18 != (Junk *)0x0) {
              iVar5 = *(int *)(local_18 + 0x28);
              local_70 = param_3;
              local_6c = param_4;
              local_8._0_1_ = 1;
              if (*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 2 == 0) {
                debugPrint("WORLD","NOTE: No junk spawners for sector \'%s\'");
              }
              else {
                iVar14 = 0;
                do {
                  do {
                    pVVar13 = (Vec2 *)0x0;
                    iVar17 = iVar14 + 1;
                    if (99 < iVar14) goto LAB_004a93ad;
                    iVar14 = *(int *)(param_1 + 0xc4);
                    iVar4 = *(int *)(param_1 + 0xc0);
                    iVar6 = rand();
                    pVVar13 = *(Vec2 **)(*(int *)(param_1 + 0xc0) +
                                        (iVar6 % (iVar14 - iVar4 >> 2)) * 4);
                    iVar14 = iVar17;
                  } while (*(int *)(pVVar13 + 0xc) < iVar5);
                  local_40 = (AnimationFrames *)
                             cocos2d::Vec2::getDistanceSq((Vec2 *)&local_70,pVVar13);
                  local_2c = (SyntheticObject *)(0x5f3759df - ((uint)local_40 >> 1));
                } while ((1.5 - (float)local_40 * 0.5 * (float)local_2c * (float)local_2c) *
                         (float)local_2c * (float)local_40 < 100.0);
LAB_004a93ad:
                local_8 = (uint)local_8._1_3_ << 8;
                if (pVVar13 == (Vec2 *)0x0) goto LAB_004a977e;
                randomPositionWithinRadius();
                local_8 = CONCAT31(local_8._1_3_,2);
                debugPrint("WORLD","Spawning junk at location %f, %f...");
                local_2c = Sector::addSyntheticObject(param_1,(uint)(*(int *)local_18 == 0));
                *(undefined1 **)(local_2c + 100) = &DAT_42f00000;
                GameObject::setLocation((GameObject *)(local_2c + 8));
                local_20 = 0;
                iVar5 = *(int *)(local_18 + 0x34);
                if ((iVar5 == 0) && (*(int *)(local_18 + 0x3c) == 0)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if (bVar3) {
                  local_1c = (AnimationFrames *)0x0;
                }
                else {
                  iVar14 = *(int *)(local_18 + 0x38);
                  iVar17 = 0;
                  local_40 = *(AnimationFrames **)(local_18 + 0x3c);
                  if ((0 < iVar14) && (0 < iVar5)) {
                    do {
                      iVar4 = rand();
                      iVar17 = iVar17 + iVar4 % iVar14 + 1;
                      iVar5 = iVar5 + -1;
                    } while (iVar5 != 0);
                  }
                  local_1c = (AnimationFrames *)((int)local_40 + iVar17);
                }
                pJVar2 = local_18;
                local_34 = 0;
                pAVar10 = (AnimationFrames *)0x0;
                local_28 = (AnimationFrames *)0x0;
                local_7c = (AnimationFrames *)0x0;
                local_24 = (AnimationFrames *)0x0;
                local_78 = (AnimationFrames *)0x0;
                local_40 = (AnimationFrames *)0x0;
                local_74 = (AnimationFrames *)0x0;
                uVar12 = 0;
                local_8 = CONCAT31(local_8._1_3_,3);
                iVar5 = *(int *)(local_18 + 4);
                if (*(int *)(local_18 + 8) - iVar5 >> 2 != 0) {
                  do {
                    ppAVar1 = (AnimationFrames **)(iVar5 + uVar12 * 4);
                    if (pAVar10 == local_78) {
                      std::vector<>::_Emplace_reallocate<>
                                ((vector<> *)&local_7c,(AnimationFrames **)local_78,ppAVar1);
                      pAVar10 = local_74;
                    }
                    else {
                      *(AnimationFrames **)local_78 = *ppAVar1;
                      local_78 = local_78 + 4;
                    }
                    uVar12 = uVar12 + 1;
                    iVar5 = *(int *)(pJVar2 + 4);
                  } while (uVar12 < (uint)(*(int *)(pJVar2 + 8) - iVar5 >> 2));
                  local_28 = local_7c;
                  local_40 = pAVar10;
                  local_24 = local_78;
                }
                local_54 = (AnimationFrames *)((int)local_24 - (int)local_28 >> 2);
                if (local_1c <= local_54) {
                  local_54 = local_1c;
                }
                local_7c = local_28;
                local_78 = local_24;
                if (0 < (int)local_54) {
                  local_1c = (AnimationFrames *)0xc;
                  pAVar10 = local_24;
                  do {
                    pAVar7 = local_28;
                    iVar5 = local_34 + 1;
                    bVar3 = 99 < local_34;
                    local_34 = iVar5;
                    if (bVar3) break;
                    iVar14 = (int)pAVar10 - (int)local_28;
                    iVar5 = rand();
                    pbVar11 = *(basic_string<> **)(pAVar7 + (iVar5 % (iVar14 >> 2)) * 4);
                    this_00 = *(CargoHold **)(local_2c + 0xe8);
                    local_44 = *(int *)(pbVar11 + 0x2c);
                    local_38 = pbVar11;
                    if ((local_20 < 0) ||
                       (((0 < *(int *)(this_00 + 8) && (*(int *)(this_00 + 8) <= local_20)) ||
                        (*(int *)(local_1c + (int)this_00) == 0)))) {
                      CargoHold::addPod(this_00,local_20);
                    }
                    if ((local_44 != 0) && (local_44 - 1U < 3)) {
                      *(undefined1 *)(*(int *)(local_1c + (int)this_00) + local_44) = 1;
                    }
                    std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff58,pbVar11);
                    local_50 = GameData::getGoodWithShortName();
                    *(undefined4 *)(*(int *)(local_1c + *(int *)(local_2c + 0xe8)) + 4) =
                         *(undefined4 *)local_50;
                    iVar5 = *(int *)(pbVar11 + 0x18);
                    if ((iVar5 == 0) && (*(int *)(pbVar11 + 0x20) == 0)) {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                    local_44 = iVar5;
                    if (bVar3) {
                      iVar17 = 0;
                    }
                    else {
                      local_4c = *(int *)(pbVar11 + 0x20);
                      iVar17 = 0;
                      iVar14 = *(int *)(pbVar11 + 0x1c);
                      local_48 = iVar14;
                      if ((0 < iVar14) && (0 < iVar5)) {
                        do {
                          iVar4 = rand();
                          iVar17 = iVar17 + 1 + iVar4 % iVar14;
                          iVar5 = iVar5 + -1;
                          pbVar11 = local_38;
                          pAVar10 = local_24;
                        } while (iVar5 != 0);
                      }
                      iVar17 = local_4c + iVar17;
                    }
                    pAVar7 = local_1c;
                    *(int *)(*(int *)(local_1c + *(int *)(local_2c + 0xe8)) + 8) = iVar17;
                    debugPrint("WORLD"," - added %dx %s");
                    local_1c = pAVar7 + 4;
                    local_20 = local_20 + 1;
                    pAVar7 = local_28;
                    if (local_28 != pAVar10) {
                      do {
                        if (*(basic_string<> **)pAVar7 == pbVar11) break;
                        pAVar7 = pAVar7 + 4;
                      } while (pAVar7 != pAVar10);
                      if (pAVar7 != pAVar10) {
                        pAVar8 = pAVar7 + 4;
                        uVar15 = 0;
                        uVar12 = (uint)(pAVar10 + (3 - (int)pAVar8)) >> 2;
                        if (pAVar10 < pAVar8) {
                          uVar12 = 0;
                        }
                        if (uVar12 != 0) {
                          do {
                            if (*(basic_string<> **)pAVar8 != local_38) {
                              *(basic_string<> **)pAVar7 = *(basic_string<> **)pAVar8;
                              pAVar7 = pAVar7 + 4;
                            }
                            uVar15 = uVar15 + 1;
                            pAVar8 = pAVar8 + 4;
                          } while (uVar15 != uVar12);
                        }
                        local_78 = pAVar10;
                        local_24 = pAVar10;
                        if (pAVar7 != pAVar10) {
                          pAVar10 = pAVar7;
                          local_78 = pAVar7;
                          local_24 = pAVar7;
                        }
                      }
                    }
                  } while (local_20 < (int)local_54);
                }
                pAVar10 = local_28;
                if (0.0 < *(float *)(local_18 + 0x30)) {
                  *(float *)(local_18 + 0x40) = *(float *)(local_18 + 0x30);
                }
                local_54 = operator_new(8);
                *(SyntheticObject **)local_54 = local_2c;
                *(Sector **)(local_54 + 4) = param_1;
                ppAVar1 = *(AnimationFrames ***)(local_3c + 0x10);
                if (*(AnimationFrames ***)(local_3c + 0x14) == ppAVar1) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)(local_3c + 0xc),ppAVar1,&local_54);
                }
                else {
                  *ppAVar1 = local_54;
                  *(int *)(local_3c + 0x10) = *(int *)(local_3c + 0x10) + 4;
                }
                local_30 = local_30 + 1;
                local_8._0_1_ = 2;
                if (pAVar10 != (AnimationFrames *)0x0) {
                  pnVar9 = (nothrow_t *)((int)local_40 - (int)pAVar10 & 0xfffffffc);
                  pAVar7 = pAVar10;
                  if ((nothrow_t *)0xfff < pnVar9) {
                    pAVar7 = *(AnimationFrames **)(pAVar10 + -4);
                    pnVar9 = pnVar9 + 0x23;
                    if ((AnimationFrames *)0x1f < pAVar10 + (-4 - (int)pAVar7)) {
                    // WARNING: Subroutine does not return
                      _invalid_parameter_noinfo_noreturn();
                    }
                  }
                  operator_delete(pAVar7,pnVar9);
                  local_7c = (AnimationFrames *)0x0;
                  local_78 = (AnimationFrames *)0x0;
                  local_74 = (AnimationFrames *)0x0;
                }
              }
              local_8 = (uint)local_8._1_3_ << 8;
            }
LAB_004a977e:
          } while (local_30 < (int)local_58);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}
