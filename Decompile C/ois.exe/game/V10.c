#include "../ois.exe.h"


// void __cdecl V10::loadStatesActive(struct _iobuf *)

void __cdecl V10::loadStatesActive(_iobuf *param_1)

{
  _iobuf *p_Var1;
  word *pwVar2;
  StateModifier *pSVar3;
  FILE *in_ECX;
  void *pvVar4;
  nothrow_t *pnVar5;
  int iVar6;
  int local_58;
  void *local_54;
  undefined4 local_44;
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  _iobuf *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005bee38;
  local_1c = ExceptionList;
  p_Var1 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_24 = p_Var1;
  GameData::resetStateModifiers((GameData *)in_ECX);
  local_58 = 0;
  fread(&local_58,4,1,in_ECX);
  iVar6 = 0;
  if (0 < local_58) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      pwVar2 = (word *)SaveHandler::readLengthString(p_Var1);
      if ((word *)&local_3c != pwVar2) {
        word::~word((word *)&local_3c);
        local_3c = *(void **)pwVar2;
        uStack_38 = *(undefined4 *)(pwVar2 + 4);
        uStack_34 = *(undefined4 *)(pwVar2 + 8);
        uStack_30 = *(undefined4 *)(pwVar2 + 0xc);
        local_2c = *(undefined4 *)(pwVar2 + 0x10);
        uStack_28 = *(uint *)(pwVar2 + 0x14);
        *(undefined4 *)(pwVar2 + 0x10) = 0;
        *(undefined4 *)(pwVar2 + 0x14) = 0xf;
        *pwVar2 = (word)0x0;
      }
      if (0xf < local_40) {
        pnVar5 = (nothrow_t *)(local_40 + 1);
        pvVar4 = local_54;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_54 + -4);
          pnVar5 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar4))) goto LAB_004bc1ae;
        }
        operator_delete(pvVar4,pnVar5);
      }
      local_44 = 0;
      local_40 = 0xf;
      local_54 = (void *)((uint)local_54 & 0xffffff00);
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&stack0xffffff7c,(basic_string<> *)&local_3c);
      pSVar3 = GameData::getStateModifier();
      if (pSVar3 != (StateModifier *)0x0) {
        fread(pSVar3 + 0x18,1,1,in_ECX);
        fread(pSVar3 + 0x19,1,1,in_ECX);
      }
      debugPrint("SAVEHANDLER","..state %s loaded");
      local_14 = 0xffffffff;
      if (0xf < uStack_28) {
        pnVar5 = (nothrow_t *)(uStack_28 + 1);
        pvVar4 = local_3c;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_3c + -4);
          pnVar5 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar4))) {
LAB_004bc1ae:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_58);
  }
  debugPrint("SAVEHANDLER","..loaded %d game states");
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// void __cdecl V10::loadSpaceStationStates(struct _iobuf *)

void __cdecl V10::loadSpaceStationStates(_iobuf *param_1)

{
  Contract *this;
  int iVar1;
  MetaGameAction **ppMVar2;
  _iobuf *p_Var3;
  word *pwVar4;
  Ship *this_00;
  TradeItemInstance *pTVar5;
  FILE *in_ECX;
  uint uVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  basic_string<> abStack_9c [4];
  undefined4 uStack_98;
  int local_74;
  int local_6c;
  Contract *local_68;
  uint local_64;
  FILE *local_60;
  char local_59;
  int local_58;
  void *local_54;
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  _iobuf *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005bb6d8;
  local_1c = ExceptionList;
  p_Var3 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_6c = 0;
  uStack_98 = 0x4c82a9;
  local_60 = in_ECX;
  local_24 = p_Var3;
  fread(&local_6c,4,1,in_ECX);
  local_74 = 0;
  if (0 < local_6c) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
      if ((word *)&local_3c != pwVar4) {
        word::~word((word *)&local_3c);
        local_3c = *(void **)pwVar4;
        uStack_38 = *(undefined4 *)(pwVar4 + 4);
        uStack_34 = *(undefined4 *)(pwVar4 + 8);
        uStack_30 = *(undefined4 *)(pwVar4 + 0xc);
        local_2c = *(undefined4 *)(pwVar4 + 0x10);
        uStack_28 = *(uint *)(pwVar4 + 0x14);
        *(undefined4 *)(pwVar4 + 0x10) = 0;
        *(undefined4 *)(pwVar4 + 0x14) = 0xf;
        *pwVar4 = (word)0x0;
      }
      if (0xf < local_40) {
        pnVar8 = (nothrow_t *)(local_40 + 1);
        pvVar7 = local_54;
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_54 + -4);
          pnVar8 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar7))) goto LAB_004c866f;
        }
        operator_delete(pvVar7,pnVar8);
      }
      std::basic_string<>::basic_string<>(abStack_9c,(basic_string<> *)&local_3c);
      this_00 = GameData::getShipWithRego();
      debugPrint("SAVEHANDLER","...loading trade data for platform %s");
      if (this_00 == (Ship *)0x0) {
        debugPrint("ERROR","ERROR: No valid space station with this rego.");
        if (0xf < uStack_28) {
          pnVar8 = (nothrow_t *)(uStack_28 + 1);
          pvVar7 = local_3c;
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar7 = *(void **)((int)local_3c + -4);
            pnVar8 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar7))) {
LAB_004c866f:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,pnVar8);
        }
        goto LAB_004c8619;
      }
      local_68 = *(Contract **)(this_00 + 0x398);
      uVar11 = 0;
      puVar9 = *(undefined4 **)(local_68 + 0x94);
      uVar6 = (uint)((int)*(undefined4 **)(local_68 + 0x98) + (3 - (int)puVar9)) >> 2;
      if (*(undefined4 **)(local_68 + 0x98) < puVar9) {
        uVar6 = 0;
      }
      local_64 = uVar6;
      if (uVar6 != 0) {
        do {
          this = (Contract *)*puVar9;
          if (this != (Contract *)0x0) {
            Contract::_scalar_deleting_destructor_(this,(uint)this);
            uVar6 = local_64;
          }
          uVar11 = uVar11 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar11 != uVar6);
      }
      *(undefined4 *)(local_68 + 0x98) = *(undefined4 *)(local_68 + 0x94);
      local_58 = 0;
      uStack_98 = 0x4c83f4;
      fread(&local_58,4,1,local_60);
      iVar10 = 0;
      if (0 < local_58) {
        do {
          local_68 = V11::readContract(p_Var3);
          iVar1 = *(int *)(this_00 + 0x398);
          ppMVar2 = *(MetaGameAction ***)(iVar1 + 0x98);
          if (*(MetaGameAction ***)(iVar1 + 0x9c) == ppMVar2) {
            std::vector<>::_Emplace_reallocate<>
                      ((vector<> *)(iVar1 + 0x94),ppMVar2,(MetaGameAction **)&local_68);
          }
          else {
            *ppMVar2 = (MetaGameAction *)local_68;
            *(int *)(iVar1 + 0x98) = *(int *)(iVar1 + 0x98) + 4;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d contracts for platform");
      TradeLocation::clearGoods(*(TradeLocation **)(this_00 + 0x398),false);
      uStack_98 = 0x4c846d;
      fread(&local_58,4,1,local_60);
      iVar10 = 0;
      if (0 < local_58) {
        do {
          pTVar5 = V11::readTradeItem(p_Var3);
          if (pTVar5 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            TradeLocation::addTradeItemInstance(*(TradeLocation **)(this_00 + 0x398),pTVar5,false);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d trade item instances for platform");
      iVar10 = *(int *)(this_00 + 0x398);
      uVar6 = 0;
      if (*(int *)(iVar10 + 0x8c) - *(int *)(iVar10 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x88) + uVar6 * 4) + 0x10) = 0;
          iVar1 = uVar6 * 4;
          uVar6 = uVar6 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x88) + iVar1) + 0x30) = 0xffffffff;
        } while (uVar6 < (uint)(*(int *)(iVar10 + 0x8c) - *(int *)(iVar10 + 0x88) >> 2));
      }
      uStack_98 = 0x4c8535;
      fread(&local_58,4,1,local_60);
      iVar10 = 0;
      if (0 < local_58) {
        do {
          pTVar5 = V11::readTradeItem(p_Var3);
          if (pTVar5 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            TradeLocation::addTradeItemInstance(*(TradeLocation **)(this_00 + 0x398),pTVar5,true);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d wire item instances for platform");
      uStack_98 = 0x4c859c;
      fread(&local_59,1,1,local_60);
      if (local_59 != '\0') {
        SpaceStation::requestUndockingClearance
                  ((SpaceStation *)this_00,*(Ship **)(g_gameData + 0xd0),true);
      }
      local_14 = 0xffffffff;
      if (0xf < uStack_28) {
        pnVar8 = (nothrow_t *)(uStack_28 + 1);
        pvVar7 = local_3c;
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_3c + -4);
          pnVar8 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar7))) goto LAB_004c866f;
        }
        operator_delete(pvVar7,pnVar8);
      }
      local_74 = local_74 + 1;
    } while (local_74 < local_6c);
  }
  debugPrint("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c8619:
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}
