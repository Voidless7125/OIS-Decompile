#include "../ois.exe.h"


// public: __thiscall TradeLocation::~TradeLocation(void)

void __thiscall TradeLocation::~TradeLocation(TradeLocation *this)

{
  TradeItemInstance *this_00;
  undefined4 *puVar1;
  void *pvVar2;
  Faction *this_01;
  ContractClass *this_02;
  void *pvVar3;
  uint uVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_8;
  
  uVar6 = 0;
  puVar8 = *(undefined4 **)(this + 0x70);
  uVar4 = (*(int *)(this + 0x74) - (int)puVar8) + 3U >> 2;
  if (*(undefined4 **)(this + 0x74) < puVar8) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      this_00 = (TradeItemInstance *)*puVar8;
      if (this_00 != (TradeItemInstance *)0x0) {
        TradeItemInstance::_scalar_deleting_destructor_(this_00,(uint)this_00);
      }
      uVar6 = uVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar6 != uVar4);
  }
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x70);
  puVar8 = *(undefined4 **)(this + 0x80);
  for (puVar7 = *(undefined4 **)(this + 0x7c); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    puVar1 = (undefined4 *)*puVar7;
    if (puVar1 != (undefined4 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        operator_delete((void *)*puVar1,(nothrow_t *)0x2c);
      }
      uVar4 = puVar1[0xb];
      if (0xf < uVar4) {
        pvVar2 = (void *)puVar1[6];
        pnVar5 = (nothrow_t *)(uVar4 + 1);
        pvVar3 = pvVar2;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar3 = *(void **)((int)pvVar2 + -4);
          pnVar5 = (nothrow_t *)(uVar4 + 0x24);
          if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
        }
        operator_delete(pvVar3,pnVar5);
      }
      puVar1[10] = 0;
      puVar1[0xb] = 0xf;
      *(undefined1 *)(puVar1 + 6) = 0;
      operator_delete(puVar1,(nothrow_t *)0x34);
    }
  }
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(this + 0x7c);
  puVar8 = *(undefined4 **)(this + 0x8c);
  for (puVar7 = *(undefined4 **)(this + 0x88); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    puVar1 = (undefined4 *)*puVar7;
    if (puVar1 != (undefined4 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        operator_delete((void *)*puVar1,(nothrow_t *)0x2c);
      }
      uVar4 = puVar1[0xb];
      if (0xf < uVar4) {
        pvVar2 = (void *)puVar1[6];
        pnVar5 = (nothrow_t *)(uVar4 + 1);
        pvVar3 = pvVar2;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar3 = *(void **)((int)pvVar2 + -4);
          pnVar5 = (nothrow_t *)(uVar4 + 0x24);
          if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
        }
        operator_delete(pvVar3,pnVar5);
      }
      puVar1[10] = 0;
      puVar1[0xb] = 0xf;
      *(undefined1 *)(puVar1 + 6) = 0;
      operator_delete(puVar1,(nothrow_t *)0x34);
    }
  }
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(this + 0x88);
  puVar8 = *(undefined4 **)(this + 0x4c);
  local_8 = 0;
  uVar4 = (*(int *)(this + 0x50) - (int)puVar8) + 3U >> 2;
  if (*(undefined4 **)(this + 0x50) < puVar8) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      this_01 = (Faction *)*puVar8;
      if (this_01 != (Faction *)0x0) {
        Faction::~Faction(this_01);
        operator_delete(this_01,(nothrow_t *)0xe4);
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 1;
    } while (local_8 != uVar4);
  }
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x4c);
  puVar8 = *(undefined4 **)(this + 0xa0);
  local_8 = 0;
  uVar4 = (uint)((int)*(undefined4 **)(this + 0xa4) + (3 - (int)puVar8)) >> 2;
  if (*(undefined4 **)(this + 0xa4) < puVar8) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    do {
      this_02 = (ContractClass *)*puVar8;
      if (this_02 != (ContractClass *)0x0) {
        ContractClass::~ContractClass(this_02);
        operator_delete(this_02,(nothrow_t *)0xac);
      }
      local_8 = local_8 + 1;
      puVar8 = puVar8 + 1;
    } while (local_8 != uVar4);
  }
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(this + 0xa0);
  pvVar2 = *(void **)(this + 0xa0);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0xa8) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0xa0) = 0;
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0xa8) = 0;
  }
  pvVar2 = *(void **)(this + 0x94);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x9c) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
  }
  pvVar2 = *(void **)(this + 0x88);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x90) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    *(undefined4 *)(this + 0x90) = 0;
  }
  pvVar2 = *(void **)(this + 0x7c);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x84) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x7c) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x84) = 0;
  }
  pvVar2 = *(void **)(this + 0x70);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x78) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
  }
  pvVar2 = *(void **)(this + 100);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x6c) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
  }
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x60) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  pvVar2 = *(void **)(this + 0x4c);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x54) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x54) = 0;
  }
  pvVar2 = *(void **)(this + 0x3c);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x44) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 != (void *)0x0) {
    pnVar5 = (nothrow_t *)(*(int *)(this + 0x38) - (int)pvVar2 & 0xfffffffc);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = pnVar5 + 0x23;
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  uVar4 = *(uint *)(this + 0x2c);
  if (0xf < uVar4) {
    pvVar2 = *(void **)(this + 0x18);
    pnVar5 = (nothrow_t *)(uVar4 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar4 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0049c2cf;
    }
    operator_delete(pvVar3,pnVar5);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (TradeLocation)0x0;
  uVar4 = *(uint *)(this + 0x14);
  if (0xf < uVar4) {
    pvVar2 = *(void **)this;
    pnVar5 = (nothrow_t *)(uVar4 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar5 = (nothrow_t *)(uVar4 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0049c2cf:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar5);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0xf;
  *this = (TradeLocation)0x0;
  return;
}


// public: void __thiscall TradeLocation::addTradeItemInstance(class TradeItemInstance *,bool)

void __thiscall
TradeLocation::addTradeItemInstance(TradeLocation *this,TradeItemInstance *param_1,bool param_2)

{
  int iVar1;
  TradeLocation *pTVar2;
  TradeLocation *pTVar3;
  AnimationFrames **ppAVar4;
  undefined4 *puVar5;
  TradeLocation *pTVar6;
  uint uVar7;
  TradeItemInstance *this_00;
  uint uVar8;
  TradeLocation *this_01;
  undefined3 in_stack_00000009;
  
  if (param_2) {
    iVar1 = *(int *)(this + 0x88);
    this_01 = this + 0x88;
    uVar7 = 0;
    uVar8 = *(int *)(this + 0x8c) - iVar1 >> 2;
    if (uVar8 != 0) {
      do {
        this_00 = *(TradeItemInstance **)(iVar1 + uVar7 * 4);
        if (*(int *)(this_00 + 0x14) == *(int *)(param_1 + 0x14)) {
          pTVar6 = *(TradeLocation **)(this + 0x8c);
          _param_2 = this_00;
          puVar5 = (undefined4 *)std::remove<>(iVar1,pTVar6);
          pTVar2 = (TradeLocation *)*puVar5;
          if (pTVar2 != pTVar6) {
            iVar1 = *(int *)(this + 0x8c);
            memmove(pTVar2,pTVar6,iVar1 - (int)pTVar6);
            *(TradeLocation **)(this + 0x8c) = pTVar2 + (iVar1 - (int)pTVar6);
            pTVar6 = this;
          }
LAB_0049c76c:
          if (this_00 != (TradeItemInstance *)0x0) {
            TradeItemInstance::_scalar_deleting_destructor_(this_00,(uint)pTVar6);
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  else {
    pTVar2 = this + 0x70;
    iVar1 = *(int *)pTVar2;
    uVar7 = 0;
    uVar8 = *(int *)(this + 0x74) - iVar1 >> 2;
    this_01 = pTVar2;
    if (uVar8 != 0) {
      do {
        this_00 = *(TradeItemInstance **)(iVar1 + uVar7 * 4);
        this_01 = this + 0x70;
        if (*(int *)(this_00 + 0x14) == *(int *)(param_1 + 0x14)) {
          pTVar6 = *(TradeLocation **)(this + 0x74);
          _param_2 = this_00;
          puVar5 = (undefined4 *)std::remove<>(iVar1,pTVar6);
          pTVar3 = (TradeLocation *)*puVar5;
          if (pTVar3 != pTVar6) {
            iVar1 = *(int *)(this + 0x74);
            memmove(pTVar3,pTVar6,iVar1 - (int)pTVar6);
            *(TradeLocation **)(this + 0x74) = pTVar3 + (iVar1 - (int)pTVar6);
            pTVar6 = this;
            this_01 = pTVar2;
          }
          goto LAB_0049c76c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
  }
  ppAVar4 = *(AnimationFrames ***)(this_01 + 4);
  if (*(AnimationFrames ***)(this_01 + 8) == ppAVar4) {
    std::vector<>::_Emplace_reallocate<>((vector<> *)this_01,ppAVar4,(AnimationFrames **)&param_1);
    return;
  }
  *ppAVar4 = (AnimationFrames *)param_1;
  *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 4;
  return;
}


// public: void __thiscall TradeLocation::addContractGoods(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,int)

void __thiscall TradeLocation::addContractGoods(TradeLocation *this,char *param_2)

{
  vector<> *this_00;
  AnimationFrames **ppAVar1;
  int iVar2;
  bool bVar3;
  Dice *pDVar4;
  char *pcVar5;
  Good *pGVar6;
  int *piVar7;
  int iVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  uint unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int in_stack_0000001c;
  basic_string<> abStack_54 [12];
  undefined4 uStack_48;
  TradeItemInstance *local_1c;
  AnimationFrames *local_18;
  Dice *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bcb27;
  local_10 = ExceptionList;
  pDVar4 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = pDVar4;
  if (-1 < in_stack_0000001c) {
    this_00 = (vector<> *)(this + 0x7c);
    uVar10 = 0;
    if (*(int *)(this + 0x80) - *(int *)this_00 >> 2 != 0) {
      do {
        pcVar5 = (char *)&param_2;
        if (0xf < in_stack_00000018) {
          pcVar5 = param_2;
        }
        uStack_48 = 0x49c82a;
        bVar3 = std::_Traits_equal<>(pcVar5,in_stack_00000014,(char *)pDVar4,unaff_EDI);
        if (bVar3) {
          piVar7 = (int *)(*(int *)(*(int *)this_00 + uVar10 * 4) + 0x10);
          *piVar7 = *piVar7 + in_stack_0000001c;
          goto LAB_0049c948;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)(*(int *)(this + 0x80) - *(int *)this_00 >> 2));
    }
    iVar2 = in_stack_0000001c;
    std::basic_string<>::basic_string<>(abStack_54,(basic_string<> *)&param_2);
    pGVar6 = GameData::getGoodWithShortName();
    local_1c = operator_new(0x34);
    local_8._0_1_ = 1;
    local_1c = (TradeItemInstance *)TradeItemInstance::TradeItemInstance(local_1c,*(int *)pGVar6);
    local_8 = (uint)local_8._1_3_ << 8;
    *(undefined8 *)(local_1c + 4) = 0x100000001;
    *(undefined4 *)(local_1c + 0xc) = 1;
    local_18 = (AnimationFrames *)local_1c;
    piVar7 = operator_new(0x2c);
    piVar7[2] = 1;
    piVar7[3] = 1;
    *piVar7 = iVar2;
    piVar7[1] = 1;
    piVar7[4] = 0;
    piVar7[6] = 0x3c;
    piVar7[7] = 5;
    piVar7[8] = 3;
    piVar7[9] = 3;
    piVar7[10] = 0;
    iVar8 = diceRoll(pDVar4);
    piVar7[5] = iVar8;
    iVar8 = (piVar7[7] * iVar8) / 2;
    piVar7[8] = iVar8;
    piVar7[9] = iVar8;
    *(int **)local_18 = piVar7;
    *(int *)(local_18 + 0x10) = iVar2;
    ppAVar1 = *(AnimationFrames ***)(this + 0x80);
    if (*(AnimationFrames ***)(this + 0x84) == ppAVar1) {
      uStack_48 = 0x49c948;
      std::vector<>::_Emplace_reallocate<>(this_00,ppAVar1,(AnimationFrames **)&local_1c);
    }
    else {
      *ppAVar1 = local_18;
      *(int *)(this + 0x80) = *(int *)(this + 0x80) + 4;
    }
  }
LAB_0049c948:
  if (0xf < in_stack_00000018) {
    pnVar9 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar5 = param_2;
    if ((nothrow_t *)0xfff < pnVar9) {
      pcVar5 = *(char **)(param_2 + -4);
      pnVar9 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar5)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_48 = 0x49c97b;
    operator_delete(pcVar5,pnVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall TradeLocation::removeGoods(int,int)

void __thiscall TradeLocation::removeGoods(TradeLocation *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (-1 < param_2) {
    uVar3 = 0;
    uVar5 = *(int *)(this + 0x74) - *(int *)(this + 0x70) >> 2;
    if (uVar5 != 0) {
      while (iVar4 = *(int *)(*(int *)(this + 0x70) + uVar3 * 4), *(int *)(iVar4 + 0x14) != param_1)
      {
        uVar3 = uVar3 + 1;
        if (uVar5 <= uVar3) {
          return;
        }
      }
      piVar1 = (int *)(iVar4 + 0x10);
      *piVar1 = *piVar1 - param_2;
      iVar4 = *(int *)(this + 0x70);
      iVar2 = *(int *)(iVar4 + uVar3 * 4);
      if (*(int *)(iVar2 + 0x10) < 0) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
        iVar4 = *(int *)(this + 0x70);
      }
      *(undefined4 *)(*(int *)(uVar3 * 4 + iVar4) + 0x30) = 0xffffffff;
    }
  }
  return;
}


// public: void __thiscall TradeLocation::soldGood(int,int)

void __thiscall TradeLocation::soldGood(TradeLocation *this,int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = *(int *)(this + 0x74) - *(int *)(this + 0x70) >> 2;
  if (uVar3 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(this + 0x70) + uVar1 * 4);
      if (piVar2[5] == param_1) goto LAB_0049ca68;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  uVar1 = 0;
  uVar3 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
  if (uVar3 != 0) {
    while (piVar2 = *(int **)(*(int *)(this + 0x88) + uVar1 * 4), piVar2[5] != param_1) {
      uVar1 = uVar1 + 1;
      if (uVar3 <= uVar1) {
        return;
      }
    }
LAB_0049ca68:
    *(int *)(*piVar2 + 0x24) = *(int *)(*piVar2 + 0x24) - param_2;
  }
  return;
}


// public: int __thiscall TradeLocation::goodAmountWire(int)

int __thiscall TradeLocation::goodAmountWire(TradeLocation *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x88) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x14) == param_1) {
        return *(int *)(iVar1 + 0x10);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


// public: bool __thiscall TradeLocation::doesBuyWire(int)

bool __thiscall TradeLocation::doesBuyWire(TradeLocation *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = 0;
  uVar4 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
  if (uVar4 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0x88) + uVar3 * 4);
      if (piVar1[5] == param_1) {
        piVar1 = (int *)*piVar1;
        iVar2 = piVar1[7];
        iVar5 = iVar2 + -1;
        if (piVar1[9] / piVar1[5] < iVar2) {
          iVar5 = piVar1[9] / piVar1[5];
        }
        return (bool)((byte)((uint)((iVar5 - iVar2 / 2) * piVar1[1] + *piVar1) >> 0x1f) ^ 1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return false;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall TradeLocation::itemiseSaleDetailsWire(int,int)

void __thiscall TradeLocation::itemiseSaleDetailsWire(TradeLocation *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  void *pvVar13;
  uint uVar14;
  nothrow_t *pnVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int in_stack_0000000c;
  int local_6c;
  int *local_68;
  int local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bcb70;
  local_1c = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar14 = 0;
  puVar10 = *(undefined4 **)(g_gameData + 0x84);
  uVar5 = *(int *)(g_gameData + 0x88) - (int)puVar10 >> 2;
  if (uVar5 != 0) {
    do {
      local_68 = (int *)*puVar10;
      if (*local_68 == param_2) goto LAB_0049cbb8;
      uVar14 = uVar14 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar14 < uVar5);
  }
  local_68 = (int *)0x0;
LAB_0049cbb8:
  local_6c = 0;
  local_2c = 0;
  uStack_28 = 0xf;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  uVar5 = 0;
  local_14 = 0;
  uStack_13 = 0;
  piVar9 = *(int **)(this + 0x88);
  uVar14 = *(int *)(this + 0x8c) - (int)piVar9 >> 2;
  local_24 = uVar4;
  if (uVar14 != 0) {
    do {
      piVar2 = (int *)*piVar9;
      if (piVar2[5] == param_2) {
        if (piVar2 != (int *)0x0) {
          local_58 = 0;
          iVar18 = *(int *)(*piVar2 + 0x24);
          iVar8 = -1;
          puStack_20 = &stack0xfffffffc;
          puVar3 = &stack0xfffffffc;
          if (0 < in_stack_0000000c) goto LAB_0049cc98;
          goto LAB_0049cee8;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar5 < uVar14);
  }
  debugPrint("WORLD","No valid cost for this item.");
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined1 *)param_1 = 0;
  std::basic_string<>::assign((basic_string<> *)param_1,"",0);
  if (0xf < uStack_28) {
    pnVar15 = (nothrow_t *)(uStack_28 + 1);
    pvVar13 = local_3c;
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar13 = *(void **)((int)local_3c + -4);
      pnVar15 = (nothrow_t *)(uStack_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar15);
  }
  goto LAB_0049cf7c;
LAB_0049cc98:
  do {
    puStack_20 = puVar3;
    piVar9 = (int *)*piVar2;
    if (piVar9[5] == 0) {
      iVar16 = piVar9[7];
      iVar11 = 0;
    }
    else {
      iVar17 = iVar18 / piVar9[5];
      iVar16 = piVar9[7];
      iVar11 = iVar16 + -1;
      if (iVar17 < iVar16) {
        iVar11 = iVar17;
      }
    }
    iVar17 = 0;
    if (-1 < iVar11 + -1) {
      iVar17 = iVar11 + -1;
    }
    iVar17 = piVar9[1] * (iVar17 - iVar16 / 2) + *piVar9;
    if (iVar17 == 0) {
      iVar17 = 1;
    }
    iVar19 = iVar17;
    if ((iVar17 == iVar8) || (iVar8 == -1)) {
      local_58 = local_58 + 1;
      if (iVar8 != -1) {
        iVar19 = iVar8;
      }
    }
    else {
      iVar1 = iVar11 + 1;
      if ((double)iVar1 < (double)(piVar9[7] / 5) * 2.5) {
        if (iVar1 < iVar16 / 2) {
          uVar6 = 0x5e;
          if (piVar9[7] / 5 <= iVar1) {
            uVar6 = 0x24;
          }
        }
        else {
          uVar6 = 0x21;
        }
      }
      else {
        uVar6 = 0x30;
      }
      piVar9 = local_68 + 1;
      if (0xf < (uint)local_68[6]) {
        piVar9 = (int *)*piVar9;
      }
      pcVar7 = (char *)strUsingArgs((char *)local_54,"`0%s `7@ `%c%d`$c `%%x %d\n",piVar9,uVar6,
                                    iVar8,local_58,uVar4);
      local_14 = 1;
      pcVar12 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar12 = *(char **)pcVar7;
      }
      std::basic_string<>::append((basic_string<> *)&local_3c,pcVar12,*(uint *)(pcVar7 + 0x10));
      local_14 = 0;
      if (0xf < local_40) {
        pnVar15 = (nothrow_t *)(local_40 + 1);
        pvVar13 = local_54[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar13 = *(void **)((int)local_54[0] + -4);
          pnVar15 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar13))) goto LAB_0049ced8;
        }
        operator_delete(pvVar13,pnVar15);
      }
      local_58 = 1;
    }
    local_6c = local_6c + iVar17;
    in_stack_0000000c = in_stack_0000000c + -1;
    iVar8 = iVar18 + -1;
    iVar18 = 0;
    if (-1 < iVar8) {
      iVar18 = iVar8;
    }
    iVar8 = iVar19;
    puVar3 = puStack_20;
  } while (0 < in_stack_0000000c);
  if (0 < local_58) {
    iVar18 = *(int *)(*piVar2 + 0x1c) / 5;
    if ((double)iVar11 < (double)iVar18 * 2.5) {
      if (iVar11 < *(int *)(*piVar2 + 0x1c) / 2) {
        uVar6 = 0x5e;
        if (iVar18 <= iVar11) {
          uVar6 = 0x24;
        }
      }
      else {
        uVar6 = 0x21;
      }
    }
    else {
      uVar6 = 0x30;
    }
    piVar9 = local_68 + 1;
    if (0xf < (uint)local_68[6]) {
      piVar9 = (int *)*piVar9;
    }
    pcVar7 = (char *)strUsingArgs((char *)local_54,"`0%s `7@ `%c%d`$c `%%x %d\n",piVar9,uVar6,iVar19
                                  ,local_58,uVar4);
    local_14 = 2;
    pcVar12 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar12 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_3c,pcVar12,*(uint *)(pcVar7 + 0x10));
    local_14 = 0;
    if (0xf < local_40) {
      pnVar15 = (nothrow_t *)(local_40 + 1);
      pvVar13 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar13 = *(void **)((int)local_54[0] + -4);
        pnVar15 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar13))) {
LAB_0049ced8:
          local_14 = 0;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar13,pnVar15);
    }
  }
LAB_0049cee8:
  pcVar7 = (char *)strUsingArgs((char *)local_54,"\n`0Total: `$%dc\n",local_6c);
  local_14 = 3;
  pcVar12 = pcVar7;
  if (0xf < *(uint *)(pcVar7 + 0x14)) {
    pcVar12 = *(char **)pcVar7;
  }
  std::basic_string<>::append((basic_string<> *)&local_3c,pcVar12,*(uint *)(pcVar7 + 0x10));
  if (0xf < local_40) {
    pnVar15 = (nothrow_t *)(local_40 + 1);
    pvVar13 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar13 = *(void **)((int)local_54[0] + -4);
      pnVar15 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar15);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(void **)param_1 = local_3c;
  *(undefined4 *)(param_1 + 4) = uStack_38;
  *(undefined4 *)(param_1 + 8) = uStack_34;
  *(undefined4 *)(param_1 + 0xc) = uStack_30;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_28,local_2c);
LAB_0049cf7c:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: int __thiscall TradeLocation::goodAmount(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

int __thiscall TradeLocation::goodAmount(TradeLocation *this,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  nothrow_t *pnVar4;
  uint unaff_ESI;
  uint uVar5;
  int iVar6;
  char *unaff_EDI;
  uint uVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  int local_8;
  
  pcVar1 = param_2;
  uVar5 = 0;
  local_8 = *(int *)(this + 0x7c);
  uVar7 = *(int *)(this + 0x80) - local_8 >> 2;
  if (uVar7 != 0) {
    do {
      pcVar3 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar3 = pcVar1;
      }
      bVar2 = std::_Traits_equal<>(pcVar3,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar2) goto LAB_0049d081;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  local_8 = *(int *)(this + 0x70);
  uVar5 = 0;
  uVar7 = *(int *)(this + 0x74) - local_8 >> 2;
  if (uVar7 != 0) {
    do {
      pcVar3 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar3 = pcVar1;
      }
      bVar2 = std::_Traits_equal<>(pcVar3,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar2) goto LAB_0049d081;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  iVar6 = 0;
LAB_0049d056:
  if (0xf < in_stack_00000018) {
    pnVar4 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar3 = pcVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pcVar3 = *(char **)(pcVar1 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar1 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar4);
  }
  return iVar6;
LAB_0049d081:
  iVar6 = *(int *)(*(int *)(local_8 + uVar5 * 4) + 0x10);
  goto LAB_0049d056;
}


// public: int __thiscall TradeLocation::goodAmount(int)

int __thiscall TradeLocation::goodAmount(TradeLocation *this,int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  uVar3 = *(int *)(this + 0x80) - *(int *)(this + 0x7c) >> 2;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(this + 0x7c) + uVar1 * 4);
      if (*(int *)(iVar2 + 0x14) == param_1) goto LAB_0049d0f6;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  uVar1 = 0;
  uVar3 = *(int *)(this + 0x74) - *(int *)(this + 0x70) >> 2;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(this + 0x70) + uVar1 * 4);
      if (*(int *)(iVar2 + 0x14) == param_1) {
LAB_0049d0f6:
        return *(int *)(iVar2 + 0x10);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  return 0;
}


// public: void __thiscall TradeLocation::clearGoods(bool)

void __thiscall TradeLocation::clearGoods(TradeLocation *this,bool param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1) {
    if (*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2 != 0) {
      do {
        *(undefined4 *)(*(int *)(*(int *)(this + 0x88) + uVar2 * 4) + 0x10) = 0;
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(*(int *)(*(int *)(this + 0x88) + iVar1) + 0x30) = 0xffffffff;
      } while (uVar2 < (uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2));
      return;
    }
  }
  else {
    if (*(int *)(this + 0x74) - *(int *)(this + 0x70) >> 2 != 0) {
      do {
        *(undefined4 *)(*(int *)(*(int *)(this + 0x70) + uVar2 * 4) + 0x10) = 0;
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(*(int *)(*(int *)(this + 0x70) + iVar1) + 0x30) = 0xffffffff;
      } while (uVar2 < (uint)(*(int *)(this + 0x74) - *(int *)(this + 0x70) >> 2));
    }
    uVar2 = 0;
    if (*(int *)(this + 0x80) - *(int *)(this + 0x7c) >> 2 != 0) {
      do {
        *(undefined4 *)(*(int *)(*(int *)(this + 0x7c) + uVar2 * 4) + 0x10) = 0;
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(*(int *)(*(int *)(this + 0x7c) + iVar1) + 0x30) = 0xffffffff;
      } while (uVar2 < (uint)(*(int *)(this + 0x80) - *(int *)(this + 0x7c) >> 2));
    }
  }
  return;
}


// public: int __thiscall TradeLocation::singleBaseGoodCost(int,bool)

int __thiscall TradeLocation::singleBaseGoodCost(TradeLocation *this,int param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar3 = 0;
  uVar5 = *(int *)(this + 0x74) - *(int *)(this + 0x70) >> 2;
  if (uVar5 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0x70) + uVar3 * 4);
      if (piVar1[5] == param_1) {
        if (piVar1[0xc] != -1) {
          return piVar1[0xc];
        }
        uVar3 = 0;
        puVar6 = *(undefined4 **)(g_gameData + 0x84);
        uVar5 = *(int *)(g_gameData + 0x88) - (int)puVar6 >> 2;
        if (uVar5 != 0) goto LAB_0049d250;
        goto LAB_0049d25e;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  return -1;
  while( true ) {
    uVar3 = uVar3 + 1;
    puVar6 = puVar6 + 1;
    if (uVar5 <= uVar3) break;
LAB_0049d250:
    piVar4 = (int *)*puVar6;
    if (*piVar4 == piVar1[5]) goto LAB_0049d260;
  }
LAB_0049d25e:
  piVar4 = (int *)0x0;
LAB_0049d260:
  if (piVar4[0x16] < 0) {
    return piVar4[0x16];
  }
  piVar1 = (int *)*piVar1;
  iVar2 = piVar1[7];
  iVar7 = iVar2 + -1;
  if (piVar1[9] / piVar1[5] < iVar2) {
    iVar7 = piVar1[9] / piVar1[5];
  }
  return (iVar7 - iVar2 / 2) * piVar1[1] + *piVar1;
}


// public: int __thiscall TradeLocation::singleGoodCost(int,bool)

int __thiscall TradeLocation::singleGoodCost(TradeLocation *this,int param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  GameData *pGVar3;
  Good *pGVar4;
  GameData *this_00;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  basic_string<> abStack_5c [16];
  undefined4 uStack_4c;
  basic_string<> abStack_44 [16];
  undefined4 uStack_34;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bcbb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar7 = 0;
  puVar6 = *(undefined4 **)(g_gameData + 0x84);
  uVar9 = *(int *)(g_gameData + 0x88) - (int)puVar6 >> 2;
  if (uVar9 != 0) {
    do {
      piVar1 = (int *)*puVar6;
      if (*piVar1 == param_1) goto LAB_0049d300;
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 < uVar9);
  }
  piVar1 = (int *)0x0;
LAB_0049d300:
  uStack_4c = 0x49d313;
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)piVar1[7]);
  if (param_2) {
    local_8 = 0;
    std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)this);
    local_8 = 0xffffffff;
    iVar2 = GameLogic::getPurchaseGoodValueInPlayerContracts();
  }
  else {
    local_8 = 1;
    std::basic_string<>::basic_string<>(abStack_5c,(basic_string<> *)this);
    local_8 = 0xffffffff;
    iVar2 = GameLogic::getDeliveringGoodValueInPlayerContracts();
  }
  if (iVar2 == -1) {
    pGVar3 = (GameData *)0x0;
    this_00 = (GameData *)(*(int *)(this + 0x74) - *(int *)(this + 0x70) >> 2);
    if (this_00 != (GameData *)0x0) {
      do {
        piVar1 = *(int **)(*(int *)(this + 0x70) + (int)pGVar3 * 4);
        if (piVar1[5] == param_1) {
          if (piVar1[0xc] != -1) {
            ExceptionList = local_10;
            return piVar1[0xc];
          }
          if (param_2) {
            uStack_34 = 0x49d3ad;
            pGVar4 = GameData::getGood(this_00,piVar1[5]);
            if (*(int *)(pGVar4 + 0x58) < 0) {
              ExceptionList = local_10;
              return *(int *)(pGVar4 + 0x58);
            }
            piVar1 = (int *)*piVar1;
            iVar2 = piVar1[7];
            iVar5 = iVar2 + -1;
            if (piVar1[9] / piVar1[5] < iVar2) {
              iVar5 = piVar1[9] / piVar1[5];
            }
            ExceptionList = local_10;
            return (iVar5 - iVar2 / 2) * piVar1[1] + *piVar1;
          }
          piVar1 = (int *)*piVar1;
          iVar2 = piVar1[7];
          iVar5 = iVar2 + -1;
          if (piVar1[9] / piVar1[5] < iVar2) {
            iVar5 = piVar1[9] / piVar1[5];
          }
          iVar8 = 0;
          if (-1 < iVar5 + -1) {
            iVar8 = iVar5 + -1;
          }
          ExceptionList = local_10;
          return (iVar8 - iVar2 / 2) * piVar1[1] + *piVar1;
        }
        pGVar3 = pGVar3 + 1;
      } while (pGVar3 < this_00);
    }
    iVar2 = -1;
  }
  ExceptionList = local_10;
  return iVar2;
}


// public: int __thiscall TradeLocation::goodCost(int,int,bool)

int __thiscall TradeLocation::goodCost(TradeLocation *this,int param_1,int param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  Good *pGVar5;
  int iVar6;
  uint uVar7;
  GameData *pGVar8;
  int iVar9;
  undefined4 *puVar10;
  GameData *pGVar11;
  uint uVar12;
  int iVar13;
  basic_string<> abStack_58 [16];
  undefined4 uStack_48;
  basic_string<> abStack_40 [12];
  undefined4 uStack_34;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bcbe0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar12 = 0;
  puVar10 = *(undefined4 **)(g_gameData + 0x84);
  uVar7 = *(int *)(g_gameData + 0x88) - (int)puVar10 >> 2;
  if (uVar7 != 0) {
    do {
      piVar3 = (int *)*puVar10;
      if (*piVar3 == param_1) goto LAB_0049d490;
      uVar12 = uVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar12 < uVar7);
  }
  piVar3 = (int *)0x0;
LAB_0049d490:
  uStack_48 = 0x49d4a3;
  std::basic_string<>::basic_string<>(abStack_40,(basic_string<> *)piVar3[7]);
  if (param_3) {
    local_8 = 0;
    std::basic_string<>::basic_string<>(abStack_58,(basic_string<> *)this);
    local_8 = 0xffffffff;
    iVar4 = GameLogic::getPurchaseGoodValueInPlayerContracts();
  }
  else {
    local_8 = 1;
    std::basic_string<>::basic_string<>(abStack_58,(basic_string<> *)this);
    local_8 = 0xffffffff;
    iVar4 = GameLogic::getDeliveringGoodValueInPlayerContracts();
  }
  if (iVar4 == -1) {
    pGVar8 = (GameData *)0x0;
    piVar3 = *(int **)(this + 0x70);
    pGVar11 = (GameData *)(*(int *)(this + 0x74) - (int)piVar3 >> 2);
    if (pGVar11 != (GameData *)0x0) {
      do {
        if (*(int *)(piVar3[(int)pGVar8] + 0x14) == param_1) {
          pGVar8 = *(GameData **)(piVar3[(int)pGVar8] + 0x30);
          if (pGVar8 != (GameData *)0xffffffff) {
            ExceptionList = local_10;
            return (int)pGVar8 * param_2;
          }
          break;
        }
        pGVar8 = pGVar8 + 1;
      } while (pGVar8 < pGVar11);
    }
    iVar4 = 0;
    if (!param_3) {
      pGVar8 = (GameData *)0x0;
      if (pGVar11 != (GameData *)0x0) {
        do {
          piVar1 = (int *)*piVar3;
          if (piVar1[5] == param_1) {
            if (piVar1 == (int *)0x0) {
              ExceptionList = local_10;
              return 0;
            }
            piVar1 = (int *)*piVar1;
            _param_3 = param_2;
            iVar13 = piVar1[9];
            if (0 < param_2) {
              iVar2 = piVar1[7];
              do {
                if (piVar1[5] == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar6 = iVar13 / piVar1[5];
                  iVar9 = iVar2 + -1;
                  if (iVar6 < iVar2) {
                    iVar9 = iVar6;
                  }
                }
                iVar6 = 0;
                if (-1 < iVar9 + -1) {
                  iVar6 = iVar9 + -1;
                }
                iVar9 = (iVar6 - iVar2 / 2) * piVar1[1] + *piVar1;
                if (iVar9 < 1) {
                  iVar9 = 1;
                }
                iVar4 = iVar4 + iVar9;
                _param_3 = _param_3 + -1;
                iVar9 = iVar13 + -1;
                iVar13 = 0;
                if (-1 < iVar9) {
                  iVar13 = iVar9;
                }
              } while (0 < _param_3);
            }
            ExceptionList = local_10;
            return iVar4;
          }
          pGVar8 = pGVar8 + 1;
          piVar3 = piVar3 + 1;
        } while (pGVar8 < pGVar11);
      }
      ExceptionList = local_10;
      return 0;
    }
    pGVar5 = GameData::getGood(pGVar8,param_1);
    iVar4 = *(int *)(pGVar5 + 0x58);
    if (-1 < iVar4) {
      uStack_34 = 0x49d541;
      iVar4 = singleGoodCost(this,param_1,true);
      ExceptionList = local_10;
      return iVar4 * param_2;
    }
  }
  ExceptionList = local_10;
  return iVar4 * param_2;
}


// public: int __thiscall TradeLocation::singleGoodCostWire(int,bool)

int __thiscall TradeLocation::singleGoodCostWire(TradeLocation *this,int param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
  if (uVar6 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0x88) + uVar3 * 4);
      if (piVar1[5] == param_1) {
        if (piVar1[0xc] != -1) {
          return piVar1[0xc];
        }
        piVar1 = (int *)*piVar1;
        iVar4 = piVar1[9] / piVar1[5];
        if (param_2) {
          iVar2 = piVar1[7];
          iVar5 = iVar2 + -1;
          if (iVar4 < iVar2) {
            iVar5 = iVar4;
          }
          return (iVar5 - iVar2 / 2) * piVar1[1] + *piVar1;
        }
        iVar2 = piVar1[7];
        iVar5 = iVar2 + -1;
        if (iVar4 < iVar2) {
          iVar5 = iVar4;
        }
        iVar4 = 0;
        if (-1 < iVar5 + -1) {
          iVar4 = iVar5 + -1;
        }
        return (iVar4 - iVar2 / 2) * piVar1[1] + *piVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  return -1;
}


// public: int __thiscall TradeLocation::goodCostWire(int,int,bool)

int __thiscall TradeLocation::goodCostWire(TradeLocation *this,int param_1,int param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = 0;
  iVar8 = 0;
  if (!param_3) {
    uVar5 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
    if (uVar5 != 0) {
      do {
        piVar1 = *(int **)(*(int *)(this + 0x88) + uVar3 * 4);
        if (piVar1[5] == param_1) {
          if (piVar1 == (int *)0x0) {
            return 0;
          }
          piVar1 = (int *)*piVar1;
          param_1 = param_2;
          iVar7 = piVar1[9];
          if (0 < param_2) {
            iVar2 = piVar1[7];
            do {
              if (piVar1[5] == 0) {
                iVar6 = 0;
              }
              else {
                iVar4 = iVar7 / piVar1[5];
                iVar6 = iVar2 + -1;
                if (iVar4 < iVar2) {
                  iVar6 = iVar4;
                }
              }
              iVar4 = 0;
              if (-1 < iVar6 + -1) {
                iVar4 = iVar6 + -1;
              }
              param_1 = param_1 + -1;
              iVar8 = iVar8 + (iVar4 - iVar2 / 2) * piVar1[1] + *piVar1;
              iVar6 = iVar7 + -1;
              iVar7 = 0;
              if (-1 < iVar6) {
                iVar7 = iVar6;
              }
            } while (0 < param_1);
          }
          return iVar8;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar5);
    }
    return 0;
  }
  uVar5 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
  if (uVar5 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0x88) + uVar3 * 4);
      if (piVar1[5] == param_1) {
        iVar8 = piVar1[0xc];
        if (iVar8 == -1) {
          piVar1 = (int *)*piVar1;
          iVar8 = piVar1[7];
          iVar7 = iVar8 + -1;
          if (piVar1[9] / piVar1[5] < iVar8) {
            iVar7 = piVar1[9] / piVar1[5];
          }
          return ((iVar7 - iVar8 / 2) * piVar1[1] + *piVar1) * param_2;
        }
        goto LAB_0049d730;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  iVar8 = -1;
LAB_0049d730:
  return iVar8 * param_2;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall TradeLocation::itemiseSaleDetails(int,int)

void __thiscall TradeLocation::itemiseSaleDetails(TradeLocation *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  void *pvVar10;
  uint uVar11;
  nothrow_t *pnVar12;
  int iVar13;
  int iVar14;
  int in_stack_0000000c;
  basic_string<> abStack_bc [16];
  undefined4 uStack_ac;
  int *local_70;
  int local_68;
  int local_64;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005bcc28;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  uVar11 = 0;
  local_68 = in_stack_0000000c;
  puVar8 = *(undefined4 **)(g_gameData + 0x84);
  uVar3 = *(int *)(g_gameData + 0x88) - (int)puVar8 >> 2;
  if (uVar3 != 0) {
    do {
      local_70 = (int *)*puVar8;
      if (*local_70 == param_2) goto LAB_0049d8b6;
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 < uVar3);
  }
  local_70 = (int *)0x0;
LAB_0049d8b6:
  uStack_ac = 0x49d8c9;
  std::basic_string<>::basic_string<>
            ((basic_string<> *)&stack0xffffff5c,(basic_string<> *)local_70[7]);
  local_14 = 0;
  std::basic_string<>::basic_string<>(abStack_bc,(basic_string<> *)this);
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  iVar4 = GameLogic::getPurchaseGoodValueInPlayerContracts();
  if (iVar4 == -1) {
    local_2c = 0;
    uStack_28 = 0xf;
    local_3c = (void *)((uint)local_3c & 0xffffff00);
    uVar3 = 0;
    local_14._0_1_ = 1;
    local_14._1_3_ = 0;
    piVar5 = *(int **)(this + 0x70);
    uVar11 = *(int *)(this + 0x74) - (int)piVar5 >> 2;
    if (uVar11 != 0) {
      do {
        piVar1 = (int *)*piVar5;
        if (piVar1[5] == param_2) {
          if (piVar1 != (int *)0x0) {
            iVar14 = -1;
            local_64 = 0;
            iVar4 = *(int *)(*piVar1 + 0x24);
            if (0 < in_stack_0000000c) goto LAB_0049d9e4;
            goto LAB_0049dc38;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar3 < uVar11);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined1 *)param_1 = 0;
    std::basic_string<>::assign((basic_string<> *)param_1,"",0);
    if (0xf < uStack_28) {
      pnVar12 = (nothrow_t *)(uStack_28 + 1);
      pvVar10 = local_3c;
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar10 = *(void **)((int)local_3c + -4);
        pnVar12 = (nothrow_t *)(uStack_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar12);
    }
  }
  else {
    strUsingArgs((char *)param_1);
  }
  goto LAB_0049dccc;
LAB_0049d9e4:
  do {
    iVar6 = *(int *)(*piVar1 + 0x14);
    iVar2 = *(int *)(*piVar1 + 0x1c);
    if (iVar6 == 0) {
      iVar13 = 0;
    }
    else {
      iVar6 = iVar4 / iVar6;
      iVar13 = iVar2 + -1;
      if (iVar6 < iVar2) {
        iVar13 = iVar6;
      }
    }
    iVar6 = 0;
    if (-1 < iVar13 + -1) {
      iVar6 = iVar13 + -1;
    }
    iVar6 = ((int *)*piVar1)[1] * (iVar6 - iVar2 / 2) + *(int *)*piVar1;
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    if ((iVar6 == iVar14) || (iVar14 == -1)) {
      local_64 = local_64 + 1;
      if (iVar14 != -1) {
        iVar6 = iVar14;
      }
    }
    else {
      pcVar7 = (char *)strUsingArgs((char *)local_54);
      local_14._0_1_ = 2;
      pcVar9 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar9 = *(char **)pcVar7;
      }
      std::basic_string<>::append((basic_string<> *)&local_3c,pcVar9,*(uint *)(pcVar7 + 0x10));
      local_14._0_1_ = 1;
      if (0xf < local_40) {
        pnVar12 = (nothrow_t *)(local_40 + 1);
        pvVar10 = local_54[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar10 = *(void **)((int)local_54[0] + -4);
          pnVar12 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) goto LAB_0049dc28;
        }
        operator_delete(pvVar10,pnVar12);
      }
      local_64 = 1;
    }
    local_68 = local_68 + -1;
    iVar14 = iVar4 + -1;
    iVar4 = 0;
    if (-1 < iVar14) {
      iVar4 = iVar14;
    }
    iVar14 = iVar6;
  } while (0 < local_68);
  if (0 < local_64) {
    pcVar7 = (char *)strUsingArgs((char *)local_54);
    local_14._0_1_ = 3;
    pcVar9 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar9 = *(char **)pcVar7;
    }
    std::basic_string<>::append((basic_string<> *)&local_3c,pcVar9,*(uint *)(pcVar7 + 0x10));
    local_14._0_1_ = 1;
    if (0xf < local_40) {
      pnVar12 = (nothrow_t *)(local_40 + 1);
      pvVar10 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar10 = *(void **)((int)local_54[0] + -4);
        pnVar12 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) {
LAB_0049dc28:
          local_14._0_1_ = 1;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar12);
    }
  }
LAB_0049dc38:
  pcVar7 = (char *)strUsingArgs((char *)local_54);
  local_14._0_1_ = 4;
  pcVar9 = pcVar7;
  if (0xf < *(uint *)(pcVar7 + 0x14)) {
    pcVar9 = *(char **)pcVar7;
  }
  std::basic_string<>::append((basic_string<> *)&local_3c,pcVar9,*(uint *)(pcVar7 + 0x10));
  if (0xf < local_40) {
    pnVar12 = (nothrow_t *)(local_40 + 1);
    pvVar10 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar10 = *(void **)((int)local_54[0] + -4);
      pnVar12 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar12);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(void **)param_1 = local_3c;
  *(undefined4 *)(param_1 + 4) = uStack_38;
  *(undefined4 *)(param_1 + 8) = uStack_34;
  *(undefined4 *)(param_1 + 0xc) = uStack_30;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_28,local_2c);
LAB_0049dccc:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall TradeLocation::getCurrentTradeSummary(void)

void __thiscall TradeLocation::getCurrentTradeSummary(TradeLocation *this)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  void *pvVar11;
  int *piVar12;
  int iVar13;
  nothrow_t *pnVar14;
  uint uVar15;
  undefined4 uVar16;
  basic_string<> *in_stack_00000004;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &DAT_005bcc71;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  local_8 = 0;
  bVar3 = true;
  std::basic_string<>::append(in_stack_00000004,"`%Available:\n\n",0xe);
  piVar12 = *(int **)(g_gameData + 0x84);
  piVar1 = *(int **)(g_gameData + 0x88);
joined_r0x0049dd7a:
  if (piVar12 == piVar1) {
    ExceptionList = local_10;
    __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
    return;
  }
  piVar2 = (int *)*piVar12;
  uVar8 = 0;
  piVar5 = *(int **)(this + 0x7c);
  uVar15 = *(int *)(this + 0x80) - (int)piVar5 >> 2;
  if (uVar15 != 0) {
    do {
      iVar13 = *piVar5;
      if (*(int *)(iVar13 + 0x14) == *piVar2) goto LAB_0049ddd8;
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar8 < uVar15);
  }
  uVar8 = 0;
  piVar5 = *(int **)(this + 0x70);
  uVar15 = *(int *)(this + 0x74) - (int)piVar5 >> 2;
  if (uVar15 != 0) {
    do {
      iVar13 = *piVar5;
      if (*(int *)(iVar13 + 0x14) == *piVar2) goto LAB_0049ddd8;
      uVar8 = uVar8 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar8 < uVar15);
  }
  goto LAB_0049deda;
LAB_0049ddd8:
  iVar13 = *(int *)(iVar13 + 0x10);
  if (0 < iVar13) {
    if (!bVar3) {
      std::basic_string<>::append(in_stack_00000004,"\n",1);
    }
    iVar6 = *piVar2;
    iVar4 = singleGoodCost(this,iVar6,false);
    uVar8 = 0;
    puVar9 = *(undefined4 **)(g_gameData + 0x84);
    uVar15 = *(int *)(g_gameData + 0x88) - (int)puVar9 >> 2;
    if (uVar15 != 0) {
      do {
        piVar5 = (int *)*puVar9;
        if (*piVar5 == iVar6) goto LAB_0049de37;
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar8 < uVar15);
    }
    piVar5 = (int *)0x0;
LAB_0049de37:
    if (piVar5[0x16] < iVar4) {
      uVar16 = 0x40;
    }
    else {
      uVar16 = 0x24;
      if (iVar4 < piVar5[0x16]) {
        uVar16 = 0x30;
      }
    }
    piVar5 = piVar2 + 1;
    if (0xf < (uint)piVar2[6]) {
      piVar5 = (int *)*piVar5;
    }
    iVar6 = singleGoodCost(this,*piVar2,true);
    pcVar7 = (char *)strUsingArgs((char *)local_30,"`7%s x%d @ `%c%dc",piVar5,iVar13,uVar16,iVar6);
    local_8 = 1;
    pcVar10 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar10 = *(char **)pcVar7;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar10,*(uint *)(pcVar7 + 0x10));
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
      pnVar14 = (nothrow_t *)(local_1c + 1);
      pvVar11 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar14) {
        pvVar11 = *(void **)((int)local_30[0] + -4);
        pnVar14 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar14);
    }
    bVar3 = false;
  }
LAB_0049deda:
  piVar12 = piVar12 + 1;
  goto joined_r0x0049dd7a;
}


// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __thiscall
// TradeLocation::getCurrentBuyPrices(void)

void __thiscall TradeLocation::getCurrentBuyPrices(TradeLocation *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  basic_string<> *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  basic_string<> *pbVar12;
  bool extraout_CL;
  int *piVar13;
  undefined4 uVar14;
  void *pvVar15;
  int *piVar16;
  uint uVar17;
  nothrow_t *pnVar18;
  uint uVar19;
  vector<> *in_stack_00000004;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  uint local_14;
  
  local_1c = ExceptionList;
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005bccc1;
  uVar8 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  local_14 = 0;
  piVar16 = *(int **)(g_gameData + 0x84);
  piVar1 = *(int **)(g_gameData + 0x88);
  local_24 = uVar8;
  do {
    if (piVar16 == piVar1) {
      ExceptionList = local_1c;
      __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    piVar2 = (int *)*piVar16;
    bVar7 = doesBuy(this,*piVar2);
    if (bVar7) {
      iVar3 = *piVar2;
      iVar9 = singleBaseGoodCost(this,iVar3,extraout_CL);
      iVar10 = singleGoodCost(this,iVar3,true);
      uVar17 = 0;
      puVar11 = *(undefined4 **)(g_gameData + 0x84);
      uVar19 = *(int *)(g_gameData + 0x88) - (int)puVar11 >> 2;
      if (uVar19 != 0) {
        do {
          piVar13 = (int *)*puVar11;
          if (*piVar13 == iVar3) goto LAB_0049e01d;
          uVar17 = uVar17 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar17 < uVar19);
      }
      piVar13 = (int *)0x0;
LAB_0049e01d:
      if (piVar13[0x16] < iVar10) {
        uVar14 = 0x30;
      }
      else {
        uVar14 = 0x24;
        if (iVar10 < piVar13[0x16]) {
          uVar14 = 0x40;
        }
      }
      piVar13 = piVar2 + 1;
      if (0xf < (uint)piVar2[6]) {
        piVar13 = (int *)*piVar13;
      }
      pbVar12 = (basic_string<> *)
                strUsingArgs((char *)local_3c,"`7%s @ ~`%c%dc",piVar13,uVar14,iVar9,uVar8);
      local_14 = 1;
      pbVar4 = *(basic_string<> **)(in_stack_00000004 + 4);
      if (*(basic_string<> **)(in_stack_00000004 + 8) == pbVar4) {
        std::vector<>::_Emplace_reallocate<>(in_stack_00000004,pbVar4,pbVar12);
      }
      else {
        *(undefined4 *)(pbVar4 + 0x10) = 0;
        *(undefined4 *)(pbVar4 + 0x14) = 0;
        uVar14 = *(undefined4 *)(pbVar12 + 4);
        uVar5 = *(undefined4 *)(pbVar12 + 8);
        uVar6 = *(undefined4 *)(pbVar12 + 0xc);
        *(undefined4 *)pbVar4 = *(undefined4 *)pbVar12;
        *(undefined4 *)(pbVar4 + 4) = uVar14;
        *(undefined4 *)(pbVar4 + 8) = uVar5;
        *(undefined4 *)(pbVar4 + 0xc) = uVar6;
        uVar14 = *(undefined4 *)(pbVar12 + 0x14);
        *(undefined4 *)(pbVar4 + 0x10) = *(undefined4 *)(pbVar12 + 0x10);
        *(undefined4 *)(pbVar4 + 0x14) = uVar14;
        *(undefined4 *)(pbVar12 + 0x10) = 0;
        *(undefined4 *)(pbVar12 + 0x14) = 0xf;
        *pbVar12 = (basic_string<>)0x0;
        *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + 0x18;
      }
      local_14 = local_14 & 0xffffff00;
      if (0xf < local_28) {
        pnVar18 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar18) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar18 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar18);
      }
    }
    piVar16 = piVar16 + 1;
  } while( true );
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall TradeLocation::getCurrentContractSummary(void)

void __thiscall TradeLocation::getCurrentContractSummary(TradeLocation *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  Good *pGVar5;
  SpaceStation *pSVar6;
  SpaceStation *pSVar7;
  char *pcVar8;
  int *piVar9;
  char *pcVar10;
  void *pvVar11;
  nothrow_t *pnVar12;
  int *piVar13;
  basic_string<> *in_stack_00000004;
  void *local_60 [5];
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bcd32;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  bVar3 = false;
  piVar9 = *(int **)(this + 0x98);
  if ((uint)((int)piVar9 - *(int *)(this + 0x94)) < 4) {
    std::basic_string<>::append
              (in_stack_00000004,"`7No contracts available to you at present.",0x2b);
    piVar9 = *(int **)(this + 0x98);
  }
  piVar13 = *(int **)(this + 0x94);
  bVar2 = true;
  do {
    if (piVar13 == piVar9) {
      ExceptionList = local_10;
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar1 = *piVar13;
    if (!bVar2) {
      std::basic_string<>::append(in_stack_00000004,"\n",1);
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff58,*(basic_string<> **)(iVar1 + 0x58));
    pGVar5 = GameData::getGoodWithShortName();
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff58,(basic_string<> *)(iVar1 + 0x38));
    pSVar6 = GameData::getSpaceStation();
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff58,(basic_string<> *)(iVar1 + 0x20));
    pSVar7 = GameData::getSpaceStation();
    if ((pSVar6 == (SpaceStation *)0x0) || (pSVar7 == (SpaceStation *)0x0)) {
      std::basic_string<>::append(in_stack_00000004,"[invalid contract]",0x12);
    }
    else {
      if (*(int *)(pSVar7 + 0x24) != *(int *)(g_gameData + 0xd8)) {
        strUsingArgs((char *)local_60);
        local_8._0_1_ = 1;
        local_8._1_3_ = 0;
        bVar3 = true;
      }
      std::basic_string<>::basic_string<>
                ((basic_string<> *)local_30,*(basic_string<> **)(pGVar5 + 0x1c));
      local_8 = 2;
      pcVar8 = (char *)strUsingArgs((char *)local_48);
      local_8._0_1_ = 3;
      pcVar10 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar10 = *(char **)pcVar8;
      }
      std::basic_string<>::append(in_stack_00000004,pcVar10,*(uint *)(pcVar8 + 0x10));
      local_8._0_1_ = 2;
      uVar4 = (undefined1)local_8;
      local_8._0_1_ = 2;
      if (0xf < local_34) {
        pnVar12 = (nothrow_t *)(local_34 + 1);
        pvVar11 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_48[0] + -4);
          pnVar12 = (nothrow_t *)(local_34 + 0x24);
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar11))) goto LAB_0049e40b;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_8._0_1_ = 1;
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      if (0xf < local_1c) {
        pnVar12 = (nothrow_t *)(local_1c + 1);
        pvVar11 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_30[0] + -4);
          pnVar12 = (nothrow_t *)(local_1c + 0x24);
          uVar4 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar11))) goto LAB_0049e40b;
        }
        operator_delete(pvVar11,pnVar12);
      }
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      local_8._0_1_ = 0;
      local_8._1_3_ = 0;
      if ((bVar3) && (bVar3 = false, 0xf < local_4c)) {
        pnVar12 = (nothrow_t *)(local_4c + 1);
        pvVar11 = local_60[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_60[0] + -4);
          pnVar12 = (nothrow_t *)(local_4c + 0x24);
          uVar4 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar11))) {
LAB_0049e40b:
            local_8._0_1_ = uVar4;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
    }
    piVar13 = piVar13 + 1;
    bVar2 = false;
  } while( true );
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall TradeLocation::getCurrentPassengerSummary(void)

void __thiscall TradeLocation::getCurrentPassengerSummary(TradeLocation *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  SpaceStation *pSVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  int *piVar8;
  nothrow_t *pnVar9;
  int *piVar10;
  basic_string<> *in_stack_00000004;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005bcd9a;
  local_10 = ExceptionList;
  local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffff78,(basic_string<> *)this);
  pSVar4 = GameData::getSpaceStation();
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  local_8 = 0;
  bVar3 = false;
  piVar8 = *(int **)(pSVar4 + 0x40c);
  if ((uint)((int)piVar8 - *(int *)(pSVar4 + 0x408)) < 4) {
    std::basic_string<>::append(in_stack_00000004,"`7No passengers waiting at this station.",0x28);
    piVar8 = *(int **)(pSVar4 + 0x40c);
  }
  piVar10 = *(int **)(pSVar4 + 0x408);
  bVar2 = true;
  do {
    if (piVar10 == piVar8) {
      ExceptionList = local_10;
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar1 = *piVar10;
    if (!bVar2) {
      std::basic_string<>::append(in_stack_00000004,"\n",1);
    }
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&stack0xffffff78,(basic_string<> *)(*(int *)(iVar1 + 0xc) + 0x18));
    pSVar4 = GameData::getSpaceStation();
    if (*(int *)(pSVar4 + 0x24) != *(int *)(g_gameData + 0xd8)) {
      strUsingArgs((char *)local_48);
      local_8 = 1;
      bVar3 = true;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_30);
    local_8 = 2;
    pcVar6 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar6 = *(char **)pcVar5;
    }
    std::basic_string<>::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_1c) {
      pnVar9 = (nothrow_t *)(local_1c + 1);
      pvVar7 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar7 = *(void **)((int)local_30[0] + -4);
        pnVar9 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7))) goto LAB_0049e635;
      }
      operator_delete(pvVar7,pnVar9);
    }
    local_20 = 0;
    local_1c = 0xf;
    local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    local_8 = 0;
    if ((bVar3) && (bVar3 = false, 0xf < local_34)) {
      pnVar9 = (nothrow_t *)(local_34 + 1);
      pvVar7 = local_48[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar7 = *(void **)((int)local_48[0] + -4);
        pnVar9 = (nothrow_t *)(local_34 + 0x24);
        if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar7))) {
LAB_0049e635:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar9);
    }
    piVar10 = piVar10 + 1;
    bVar2 = false;
  } while( true );
}


// public: bool __thiscall TradeLocation::doesBuy(int)

bool __thiscall TradeLocation::doesBuy(TradeLocation *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  basic_string<> abStack_54 [16];
  undefined4 uStack_44;
  basic_string<> abStack_3c [24];
  uint uStack_24;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bcdc8;
  local_10 = ExceptionList;
  uStack_24 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar6 = 0;
  puVar4 = *(undefined4 **)(g_gameData + 0x84);
  uVar3 = *(int *)(g_gameData + 0x88) - (int)puVar4 >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = (int *)*puVar4;
      if (*piVar1 == param_1) goto LAB_0049e6b7;
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 < uVar3);
  }
  piVar1 = (int *)0x0;
LAB_0049e6b7:
  uStack_44 = 0x49e6ca;
  std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)piVar1[7]);
  local_8 = 0;
  std::basic_string<>::basic_string<>(abStack_54,(basic_string<> *)this);
  local_8 = 0xffffffff;
  iVar2 = GameLogic::getDeliveringGoodValueInPlayerContracts();
  if (iVar2 != -1) {
    ExceptionList = local_10;
    return true;
  }
  uVar3 = 0;
  piVar1 = *(int **)(this + 0x70);
  uVar6 = *(int *)(this + 0x74) - (int)piVar1 >> 2;
  if (uVar6 != 0) {
    do {
      if (((int *)*piVar1)[5] == param_1) {
        piVar1 = *(int **)*piVar1;
        iVar2 = piVar1[7];
        iVar5 = iVar2 + -1;
        if (piVar1[9] / piVar1[5] < iVar2) {
          iVar5 = piVar1[9] / piVar1[5];
        }
        ExceptionList = local_10;
        return (bool)((byte)((uint)((iVar5 - iVar2 / 2) * piVar1[1] + *piVar1) >> 0x1f) ^ 1);
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar3 < uVar6);
  }
  ExceptionList = local_10;
  return false;
}


// public: void __thiscall TradeLocation::resetAndRepopulate(void)

void __thiscall TradeLocation::resetAndRepopulate(TradeLocation *this)

{
  int iVar1;
  int iVar2;
  TradeLocation *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_c;
  uint local_8;
  
  clearGoods(this,false);
  clearGoods(this_00,true);
  iVar2 = *(int *)(this + 0x70);
  local_c = 0;
  if (*(int *)(this + 0x74) - iVar2 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_c * 4 + iVar2);
      iVar4 = *(int *)(iVar1 + 4);
      iVar3 = *(int *)(iVar1 + 0xc);
      if ((iVar4 != 0) || (iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 8);
        iVar5 = 0;
        if ((0 < iVar1) && (0 < iVar4)) {
          do {
            iVar2 = rand();
            iVar5 = iVar5 + iVar2 % iVar1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar2 = *(int *)(this + 0x70);
        }
        iVar3 = iVar3 + iVar5;
      }
      *(int *)(*(int *)(local_c * 4 + iVar2) + 0x10) = iVar3;
      iVar2 = *(int *)(this + 0x70);
      local_c = local_c + 1;
    } while (local_c < (uint)(*(int *)(this + 0x74) - iVar2 >> 2));
  }
  iVar2 = *(int *)(this + 0x88);
  local_8 = 0;
  if (*(int *)(this + 0x8c) - iVar2 >> 2 != 0) {
    do {
      iVar1 = *(int *)(local_8 * 4 + iVar2);
      iVar4 = *(int *)(iVar1 + 4);
      iVar3 = *(int *)(iVar1 + 0xc);
      if ((iVar4 != 0) || (iVar3 != 0)) {
        iVar1 = *(int *)(iVar1 + 8);
        iVar5 = 0;
        if ((0 < iVar1) && (0 < iVar4)) {
          do {
            iVar2 = rand();
            iVar5 = iVar5 + iVar2 % iVar1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar2 = *(int *)(this + 0x88);
        }
        iVar3 = iVar3 + iVar5;
      }
      *(int *)(*(int *)(local_8 * 4 + iVar2) + 0x10) = iVar3;
      iVar2 = *(int *)(this + 0x88);
      local_8 = local_8 + 1;
    } while (local_8 < (uint)(*(int *)(this + 0x8c) - iVar2 >> 2));
  }
  clearContracts(this);
  populateContracts(this);
  restockWithContracts(this);
  return;
}


// public: void __thiscall TradeLocation::resetContracts(void)

void __thiscall TradeLocation::resetContracts(TradeLocation *this)

{
  clearContracts(this);
  populateContracts(this);
  restockWithContracts(this);
  return;
}


// public: void __thiscall TradeLocation::clearContracts(void)

void __thiscall TradeLocation::clearContracts(TradeLocation *this)

{
  Contract *this_00;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(this + 0x94);
  uVar1 = (uint)((int)*(undefined4 **)(this + 0x98) + (3 - (int)puVar2)) >> 2;
  uVar3 = 0;
  if (*(undefined4 **)(this + 0x98) < puVar2) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      this_00 = (Contract *)*puVar2;
      if (this_00 != (Contract *)0x0) {
        Contract::_scalar_deleting_destructor_(this_00,(uint)this_00);
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != uVar1);
  }
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(this + 0x94);
  return;
}


// public: void __thiscall TradeLocation::populateContracts(void)

void __thiscall TradeLocation::populateContracts(TradeLocation *this)

{
  int iVar1;
  int iVar2;
  MetaGameAction **ppMVar3;
  basic_string<> *pbVar4;
  TradeLocation *pTVar5;
  Dice *pDVar6;
  int *piVar7;
  ContractManager *extraout_ECX;
  ContractManager *pCVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  vector<> avStack_68 [4];
  undefined4 uStack_64;
  MetaGameAction aMStack_5c [8];
  undefined4 uStack_54;
  undefined4 local_30;
  basic_string<> *local_2c;
  basic_string<> *local_28;
  undefined1 *local_24;
  int local_20;
  Contract *local_1c;
  TradeLocation *local_18;
  ContractManager *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bce08;
  local_10 = ExceptionList;
  pDVar6 = (Dice *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar9 = *(int *)(this + 0x4c);
  local_14 = (ContractManager *)0x0;
  local_18 = this;
  if (*(int *)(this + 0x50) - iVar9 >> 2 != 0) {
    do {
      iVar11 = *(int *)((int)local_14 * 4 + iVar9);
      local_1c = (Contract *)((int)local_14 * 4 + iVar9);
      if (*(char *)(iVar11 + 0xe0) != '\0') {
        uVar10 = 0;
        piVar7 = *(int **)(iVar11 + 0x80);
        iVar9 = *(int *)(iVar11 + 0xd8);
        uVar12 = *(int *)(iVar11 + 0x84) - (int)piVar7 >> 2;
        if (uVar12 != 0) {
          do {
            if (iVar9 < *piVar7) goto LAB_0049e9e3;
            uVar10 = uVar10 + 1;
            iVar9 = iVar9 - *piVar7;
            piVar7 = piVar7 + 1;
          } while (uVar10 < uVar12);
        }
        uVar10 = uVar12 - 1;
LAB_0049e9e3:
        if (uVar10 < (uint)((*(int *)(iVar11 + 0xa8) - *(int *)(iVar11 + 0xa4)) / 0xc)) {
          iVar9 = *(int *)local_1c;
          uVar10 = 0;
          piVar7 = *(int **)(iVar9 + 0x80);
          iVar11 = *(int *)(iVar9 + 0xd8);
          uVar12 = *(int *)(iVar9 + 0x84) - (int)piVar7 >> 2;
          if (uVar12 != 0) {
            do {
              if (iVar11 < *piVar7) break;
              uVar10 = uVar10 + 1;
              iVar11 = iVar11 - *piVar7;
              piVar7 = piVar7 + 1;
            } while (uVar10 < uVar12);
          }
          local_20 = diceRoll(pDVar6);
          iVar11 = 0;
          iVar9 = 0;
          local_30 = 0;
          local_2c = (basic_string<> *)0x0;
          local_28 = (basic_string<> *)0x0;
          local_8 = 0;
          do {
            pTVar5 = local_18;
            if (local_20 <= iVar9) break;
            local_1c = (Contract *)aMStack_5c;
            uStack_64 = 0x49ea99;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)aMStack_5c,(basic_string<> *)local_18);
            local_24 = avStack_68;
            local_8._0_1_ = 1;
            std::vector<>::vector<>(avStack_68,(vector<> *)&local_30);
            local_8._0_1_ = 2;
            iVar2 = *(int *)(pTVar5 + 0x4c);
            iVar1 = (int)local_14 * 4;
            pCVar8 = local_14;
            if (Singleton<>::instance == (ContractManager *)0x0) {
              Singleton<>::instance = operator_new(1);
              pCVar8 = extraout_ECX;
            }
            local_8 = (uint)local_8._1_3_ << 8;
            local_1c = ContractManager::generateContract(pCVar8,**(undefined4 **)(iVar2 + iVar1));
            if (local_1c == (Contract *)0x0) {
              iVar11 = iVar11 + 1;
            }
            else {
              ppMVar3 = *(MetaGameAction ***)(local_18 + 0x98);
              if (*(MetaGameAction ***)(local_18 + 0x9c) == ppMVar3) {
                std::vector<>::_Emplace_reallocate<>
                          ((vector<> *)(local_18 + 0x94),ppMVar3,(MetaGameAction **)&local_1c);
              }
              else {
                *ppMVar3 = (MetaGameAction *)local_1c;
                *(int *)(local_18 + 0x98) = *(int *)(local_18 + 0x98) + 4;
              }
              pbVar4 = local_2c;
              if (local_28 == local_2c) {
                std::vector<>::_Emplace_reallocate<>
                          ((vector<> *)&local_30,(basic_string<> *)local_2c,
                           *(basic_string<> **)(local_1c + 0x54));
                iVar9 = iVar9 + 1;
              }
              else {
                std::basic_string<>::basic_string<>(local_2c,*(basic_string<> **)(local_1c + 0x54));
                local_2c = pbVar4 + 0x18;
                iVar9 = iVar9 + 1;
              }
            }
          } while (iVar11 < 100);
          local_8 = 0xffffffff;
          std::vector<>::_Tidy((vector<> *)&local_30);
        }
        else {
          uStack_54 = 0x49ea1e;
          debugPrint("ERROR",
                     "Unable to generate contracts for %s, no information as to how many to spawn.")
          ;
        }
      }
      local_14 = local_14 + 1;
      iVar9 = *(int *)(local_18 + 0x4c);
    } while (local_14 < (ContractManager *)(*(int *)(local_18 + 0x50) - iVar9 >> 2));
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall TradeLocation::restockWithContracts(void)

void __thiscall TradeLocation::restockWithContracts(TradeLocation *this)

{
  basic_string<> *pbVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  TradeLocation *pTVar5;
  int iVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  GameData *pGVar10;
  uint unaff_EDI;
  basic_string<> abStack_54 [12];
  undefined4 uStack_48;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bce38;
  local_10 = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uVar9 = 0;
  pGVar10 = g_gameData + 0x13c;
  if (*(int *)(g_gameData + 0x140) - *(int *)pGVar10 >> 2 != 0) {
    do {
      pTVar5 = this;
      if (0xf < *(uint *)(this + 0x14)) {
        pTVar5 = *(TradeLocation **)this;
      }
      uStack_48 = 0x49ec07;
      bVar3 = std::_Traits_equal<>((char *)pTVar5,*(uint *)(this + 0x10),pcVar4,unaff_EDI);
      if (bVar3) {
        pbVar1 = *(basic_string<> **)(*(int *)(*(int *)pGVar10 + uVar9 * 4) + 0x58);
        iVar2 = *(int *)(pbVar1 + 0x18);
        std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar1);
        local_8 = 0;
        std::basic_string<>::basic_string<>(abStack_54,(basic_string<> *)local_2c);
        iVar6 = goodAmount(this);
        local_8 = 0xffffffff;
        if ((iVar6 == 0) || (iVar6 < iVar2)) {
          if (0xf < local_18) {
            pnVar8 = (nothrow_t *)(local_18 + 1);
            pvVar7 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pvVar7 = *(void **)((int)local_2c[0] + -4);
              pnVar8 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_0049ed2d;
            }
            uStack_48 = 0x49ec82;
            operator_delete(pvVar7,pnVar8);
          }
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_18 = 0xf;
          local_1c = 0;
          std::basic_string<>::basic_string<>
                    ((basic_string<> *)&stack0xffffffa8,
                     *(basic_string<> **)(*(int *)(*(int *)(g_gameData + 0x13c) + uVar9 * 4) + 0x58)
                    );
          addContractGoods(this);
        }
        else {
          if (0xf < local_18) {
            pnVar8 = (nothrow_t *)(local_18 + 1);
            pvVar7 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pvVar7 = *(void **)((int)local_2c[0] + -4);
              pnVar8 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
LAB_0049ed2d:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            uStack_48 = 0x49ece9;
            operator_delete(pvVar7,pnVar8);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        }
      }
      uVar9 = uVar9 + 1;
      pGVar10 = g_gameData + 0x13c;
    } while (uVar9 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)pGVar10 >> 2));
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall TradeLocation::addRandomComponents(void)

void __thiscall TradeLocation::addRandomComponents(TradeLocation *this)

{
  undefined4 uVar1;
  AnimationFrames **ppAVar2;
  GameData *pGVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  AnimationFrames *pAVar7;
  AnimationFrames *pAVar8;
  uint unaff_ESI;
  int iVar9;
  uint uVar10;
  char *unaff_EDI;
  int iVar11;
  AnimationFrames *local_18;
  TradeLocation *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar9 = 0;
  iVar11 = 2;
  local_14 = this;
  do {
    uVar5 = rand();
    uVar5 = uVar5 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    iVar9 = iVar9 + 1 + uVar5;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  local_10 = iVar9 + 0x1e;
  local_8 = 0;
  local_c = 0;
  iVar11 = 0;
  do {
    do {
      if ((99 < local_8) && (local_10 <= iVar11)) {
        return;
      }
      iVar11 = *(int *)(g_gameData + 4);
      iVar9 = *(int *)g_gameData;
      local_8 = local_8 + 1;
      iVar6 = rand();
      iVar9 = **(int **)(*(int *)g_gameData + (iVar6 % (iVar11 - iVar9 >> 2)) * 4);
      bVar4 = std::_Traits_equal<>("OP-LASSLS",9,unaff_EDI,unaff_ESI);
    } while ((bVar4) && (iVar11 = local_c, iVar9 == 0x5d));
    pAVar7 = operator_new(8);
    pGVar3 = g_gameData;
    uVar5 = 0;
    *(undefined4 *)pAVar7 = 0x42c80000;
    uVar10 = *(int *)(pGVar3 + 4) - *(int *)pGVar3 >> 2;
    local_18 = pAVar7;
    if (uVar10 != 0) {
      local_18 = *(AnimationFrames **)pGVar3;
      pAVar8 = local_18;
      do {
        if (**(int **)pAVar8 == iVar9) {
          iVar11 = *(int *)(local_18 + uVar5 * 4);
          goto LAB_0049ee22;
        }
        uVar5 = uVar5 + 1;
        pAVar8 = pAVar8 + 4;
      } while (uVar5 < uVar10);
    }
    iVar11 = 0;
LAB_0049ee22:
    *(int *)(pAVar7 + 4) = iVar11;
    if ((*(int *)(iVar11 + 0x80) == 10) || (*(int *)(iVar11 + 0x80) == 0xb)) {
      operator_delete(pAVar7,(nothrow_t *)0x8);
      iVar11 = local_c;
    }
    else {
      iVar11 = local_c + 1;
      local_c = iVar11;
      local_18 = operator_new(8);
      uVar1 = *(undefined4 *)(*(int *)(pAVar7 + 4) + 0x20);
      *(AnimationFrames **)local_18 = pAVar7;
      *(undefined4 *)(local_18 + 4) = uVar1;
      ppAVar2 = *(AnimationFrames ***)(local_14 + 0x68);
      if (*(AnimationFrames ***)(local_14 + 0x6c) == ppAVar2) {
        std::vector<>::_Emplace_reallocate<>((vector<> *)(local_14 + 100),ppAVar2,&local_18);
      }
      else {
        *ppAVar2 = local_18;
        *(int *)(local_14 + 0x68) = *(int *)(local_14 + 0x68) + 4;
      }
    }
  } while( true );
}


// public: void __thiscall TradeLocation::addRandomModules(void)

void __thiscall TradeLocation::addRandomModules(TradeLocation *this)

{
  ShipModuleClass *pSVar1;
  AnimationFrames **ppAVar2;
  float *pfVar3;
  undefined4 uVar4;
  TradeLocation *pTVar5;
  int iVar6;
  ShipModule *pSVar7;
  int iVar8;
  AnimationFrames *pAVar9;
  ModuleConfiguration *pMVar10;
  uint uVar11;
  int iVar12;
  int extraout_ECX;
  AnimationFrames *pAVar13;
  undefined4 *puVar14;
  int iVar15;
  AnimationFrames *local_24;
  TradeLocation *local_20;
  GameData *local_1c;
  int local_18;
  AnimationFrames *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bce84;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pTVar5 = this;
  if (0xf < *(uint *)(this + 0x14)) {
    pTVar5 = *(TradeLocation **)this;
  }
  local_20 = this;
  debugPrint("DETAIL","Populating modules for station %s",pTVar5,
             ___security_cookie ^ (uint)&stack0xfffffffc);
  local_18 = 1;
  do {
    if (local_18 != 0xf) {
      iVar15 = 200;
      local_1c = g_gameData;
      do {
        if (iVar15 < 1) goto LAB_0049f26c;
        iVar8 = *(int *)(local_1c + 0x10);
        iVar15 = iVar15 + -1;
        iVar12 = *(int *)(local_1c + 0xc);
        iVar6 = rand();
        pSVar1 = *(ShipModuleClass **)
                  (*(int *)(local_1c + 0xc) + (iVar6 % ((iVar8 - iVar12 >> 2) + -1)) * 4);
      } while ((*(int *)(pSVar1 + 4) != local_18) || (*(int *)(pSVar1 + 0x90) < 1));
      if (pSVar1 != (ShipModuleClass *)0x0) {
        pSVar7 = operator_new(0x88);
        local_8 = 0;
        pSVar7 = (ShipModule *)ShipModule::ShipModule(pSVar7,pSVar1);
        local_8 = 0xffffffff;
        local_1c = (GameData *)
                   ShipModuleClass::getRandomConfigurationOfType
                             (*(ShipModuleClass **)(pSVar7 + 8),extraout_ECX);
        if (local_1c != (GameData *)0x0) {
          ComponentInterfaceInstance::applyConfiguration
                    (*(ComponentInterfaceInstance **)(pSVar7 + 0xc),(ModuleConfiguration *)local_1c)
          ;
          iVar15 = ShipModule::getValue(pSVar7);
          iVar8 = rand();
          pAVar13 = (AnimationFrames *)
                    (int)((((float)(iVar8 % 100) / 100.0) * 0.2 + 0.9) * (float)iVar15);
          local_24 = pAVar13;
          pAVar9 = operator_new(0xc);
          iVar15 = *(int *)local_1c;
          *(AnimationFrames **)(pAVar9 + 4) = pAVar13;
          *(int *)(pAVar9 + 8) = iVar15;
          *(ShipModule **)pAVar9 = pSVar7;
          *(int *)(pAVar9 + 8) = *(int *)local_1c;
          puVar14 = (undefined4 *)(*(int *)(pSVar7 + 8) + 8);
          if (0xf < *(uint *)(*(int *)(pSVar7 + 8) + 0x1c)) {
            puVar14 = (undefined4 *)*puVar14;
          }
          local_14 = pAVar9;
          iVar15 = ComponentInterfaceInstance::getComponentCount
                             (*(ComponentInterfaceInstance **)(pSVar7 + 0xc));
          debugPrint("DETAIL","Populating module %s with config %s: value %d, with %d components.",
                     puVar14,(&PTR_s___Brand_New_005dfb70)[*(int *)local_1c],local_24,iVar15);
          ppAVar2 = *(AnimationFrames ***)(local_20 + 0x5c);
          if (*(AnimationFrames ***)(local_20 + 0x60) == ppAVar2) {
            std::vector<>::_Emplace_reallocate<>((vector<> *)(local_20 + 0x58),ppAVar2,&local_14);
          }
          else {
            *ppAVar2 = pAVar9;
            *(int *)(local_20 + 0x5c) = *(int *)(local_20 + 0x5c) + 4;
          }
        }
        rand();
        pAVar9 = (AnimationFrames *)0x0;
        iVar15 = 0;
        local_14 = (AnimationFrames *)0x0;
        do {
          if (99 < iVar15) break;
          iVar15 = iVar15 + 1;
          pSVar7 = operator_new(0x88);
          local_8 = 1;
          pSVar7 = (ShipModule *)ShipModule::ShipModule(pSVar7,pSVar1);
          local_8 = 0xffffffff;
          local_24 = (AnimationFrames *)pSVar7;
          iVar8 = rand();
          if (iVar8 % 6 == 0) {
            pMVar10 = ShipModuleClass::getRandomConfigurationOfType
                                (*(ShipModuleClass **)(pSVar7 + 8),6);
            if (pMVar10 != (ModuleConfiguration *)0x0) {
              ComponentInterfaceInstance::applyConfiguration
                        (*(ComponentInterfaceInstance **)(pSVar7 + 0xc),pMVar10);
              iVar8 = 0;
              do {
                if (*(int *)(iVar8 + 4 + *(int *)(pSVar7 + 0xc)) != 0) {
                  uVar11 = rand();
                  uVar11 = uVar11 & 0x80000003;
                  if ((int)uVar11 < 0) {
                    uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
                  }
                  if (uVar11 == 0) {
                    iVar12 = rand();
                    iVar12 = iVar12 % 0xc + 0x4d;
LAB_0049f173:
                    pfVar3 = *(float **)(iVar8 + 4 + *(int *)(pSVar7 + 0xc));
                    *pfVar3 = *pfVar3 - (float)iVar12;
                  }
                  else {
                    if (uVar11 == 1) {
                      iVar12 = rand();
                      iVar12 = iVar12 % 0xc + 0x39;
                      goto LAB_0049f173;
                    }
                    if (uVar11 == 2) {
                      uVar11 = rand();
                      uVar11 = uVar11 & 0x80000003;
                      if ((int)uVar11 < 0) {
                        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
                      }
                      pfVar3 = *(float **)(iVar8 + 4 + *(int *)(pSVar7 + 0xc));
                      *pfVar3 = *pfVar3 - (float)(int)(uVar11 + 1);
                    }
                  }
                  rand();
                }
                iVar8 = iVar8 + 4;
              } while (iVar8 < 0x50);
              iVar8 = ShipModule::getValue(pSVar7);
              iVar12 = rand();
              local_24 = operator_new(0xc);
              *(int *)(local_24 + 4) =
                   (int)((((float)(iVar12 % 100) / 100.0) * 0.15 + 0.75) * (float)iVar8);
              *(undefined4 *)(local_24 + 8) = 1;
LAB_0049f1fb:
              *(ShipModule **)local_24 = pSVar7;
              ppAVar2 = *(AnimationFrames ***)(local_20 + 0x5c);
              if (*(AnimationFrames ***)(local_20 + 0x60) == ppAVar2) {
                std::vector<>::_Emplace_reallocate<>
                          ((vector<> *)(local_20 + 0x58),ppAVar2,&local_24);
                local_14 = local_14 + 1;
                pAVar9 = local_14;
              }
              else {
                *ppAVar2 = local_24;
                *(int *)(local_20 + 0x5c) = *(int *)(local_20 + 0x5c) + 4;
                local_14 = local_14 + 1;
                pAVar9 = local_14;
              }
            }
          }
          else {
            local_1c = *(GameData **)(pSVar7 + 8);
            puVar14 = *(undefined4 **)(local_1c + 0x120);
            iVar8 = *(int *)(local_1c + 0x124) - (int)puVar14 >> 2;
            if (iVar8 != 0) {
              if (iVar8 == 1) {
                pMVar10 = (ModuleConfiguration *)*puVar14;
                pAVar9 = local_14;
                if (*(int *)pMVar10 == 0) goto LAB_0049f25d;
              }
              else {
                iVar8 = 100;
                do {
                  pMVar10 = (ModuleConfiguration *)0x0;
                  pSVar7 = (ShipModule *)local_24;
                  if (iVar8 < 1) break;
                  iVar8 = iVar8 + -1;
                  iVar6 = *(int *)(local_1c + 0x124) - (int)puVar14;
                  iVar12 = rand();
                  puVar14 = *(undefined4 **)(local_1c + 0x120);
                  pMVar10 = (ModuleConfiguration *)puVar14[iVar12 % (iVar6 >> 2)];
                  pSVar7 = (ShipModule *)local_24;
                } while (*(int *)pMVar10 == 0);
              }
              pAVar9 = local_14;
              if (pMVar10 != (ModuleConfiguration *)0x0) {
                ComponentInterfaceInstance::applyConfiguration
                          (*(ComponentInterfaceInstance **)(pSVar7 + 0xc),pMVar10);
                local_1c = (GameData *)ShipModule::getValue(pSVar7);
                if (*(int *)pMVar10 == 1) {
                  iVar8 = rand();
                  local_1c = (GameData *)
                             (int)((((float)(iVar8 % 100) / 100.0) * 0.1 + 0.85) *
                                  (float)(int)local_1c);
                }
                else {
                  local_24 = (AnimationFrames *)(*(int *)(pSVar7 + 8) + 8);
                  if (0xf < *(uint *)(*(int *)(pSVar7 + 8) + 0x1c)) {
                    local_24 = *(AnimationFrames **)local_24;
                  }
                  iVar8 = ComponentInterfaceInstance::getComponentCount
                                    (*(ComponentInterfaceInstance **)(pSVar7 + 0xc));
                  debugPrint("DETAIL",
                             "Populating module %s with config %s: value %d, with %d components.",
                             local_24,(&PTR_s___Brand_New_005dfb70)[*(int *)pMVar10],local_1c,iVar8)
                  ;
                }
                local_24 = operator_new(0xc);
                uVar4 = *(undefined4 *)pMVar10;
                *(GameData **)(local_24 + 4) = local_1c;
                *(undefined4 *)(local_24 + 8) = uVar4;
                goto LAB_0049f1fb;
              }
            }
          }
LAB_0049f25d:
        } while ((int)pAVar9 < 1);
      }
    }
LAB_0049f26c:
    local_18 = local_18 + 1;
    if (0x11 < local_18) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}


// public: void __thiscall TradeLocation::clearShipsForSale(void)

void __thiscall TradeLocation::clearShipsForSale(TradeLocation *this)

{
  char cVar1;
  basic_string<> *pbVar2;
  Ship *this_00;
  basic_string<> *pbVar3;
  char *pcVar4;
  undefined4 *puVar5;
  basic_string<> *pbVar6;
  void *pvVar7;
  int iVar8;
  char *pcVar9;
  nothrow_t *pnVar10;
  basic_string<> *unaff_EDI;
  uint uVar11;
  basic_string<> *pbVar12;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  NameManager *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005bcea8;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  uVar11 = 0;
  iVar8 = *(int *)(this + 0x3c);
  if (*(int *)(this + 0x40) - iVar8 >> 2 != 0) {
    do {
      iVar8 = *(int *)(iVar8 + uVar11 * 4);
      pcVar9 = (char *)(iVar8 + 8);
      if (0xf < *(uint *)(iVar8 + 0x1c)) {
        pcVar9 = *(char **)pcVar9;
      }
      local_24 = 0;
      local_20 = 0xf;
      local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
      pcVar4 = pcVar9;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      std::basic_string<>::assign((basic_string<> *)local_34,pcVar9,(int)pcVar4 - (int)(pcVar9 + 1))
      ;
      local_8 = 0;
      local_14 = Singleton<>::getInstance();
      local_8 = 0xffffffff;
      pbVar2 = *(basic_string<> **)(local_14 + 0x88);
      puVar5 = (undefined4 *)std::remove<>(*(undefined4 *)(local_14 + 0x84),pbVar2);
      pbVar12 = (basic_string<> *)*puVar5;
      if (pbVar12 != pbVar2) {
        pbVar6 = std::_Move_unchecked<>(pbVar12,pbVar3,unaff_EDI);
        std::_Destroy_range<>
                  ((basic_string<> *)pbVar12,(basic_string<> *)pbVar3,(allocator<> *)unaff_EDI);
        *(basic_string<> **)(local_14 + 0x88) = pbVar6;
      }
      if (0xf < local_20) {
        pnVar10 = (nothrow_t *)(local_20 + 1);
        pvVar7 = local_34[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar7 = *(void **)((int)local_34[0] + -4);
          pnVar10 = (nothrow_t *)(local_20 + 0x24);
          if (0x1f < (uint)((int)local_34[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar10);
      }
      this_00 = *(Ship **)(*(int *)(this + 0x3c) + uVar11 * 4);
      if (this_00 != (Ship *)0x0) {
        Ship::~Ship(this_00);
        operator_delete(this_00,(nothrow_t *)0x388);
      }
      uVar11 = uVar11 + 1;
      iVar8 = *(int *)(this + 0x3c);
    } while (uVar11 < (uint)(*(int *)(this + 0x40) - iVar8 >> 2));
  }
  *(int *)(this + 0x40) = iVar8;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall TradeLocation::regenerateShipsForSale(void)

void __thiscall TradeLocation::regenerateShipsForSale(TradeLocation *this)

{
  int *piVar1;
  int iVar2;
  AnimationFrames **ppAVar3;
  uint3 uVar4;
  uint uVar5;
  TradeLocation *pTVar6;
  int iVar7;
  MetaGameAction *pMVar8;
  nothrow_t *pnVar9;
  AnimationFrames **ppAVar10;
  MetaGameAction *pMVar11;
  MetaGameAction **ppMVar12;
  void *pvVar13;
  void *pvVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  AnimationFrames **ppAVar19;
  MetaGameAction *local_4c;
  MetaGameAction **local_48;
  MetaGameAction **local_44;
  void *local_40;
  AnimationFrames **local_3c;
  AnimationFrames **local_38;
  MetaGameAction *local_34;
  int local_30;
  uint local_2c;
  MetaGameAction **local_28;
  AnimationFrames **local_24;
  void *local_20;
  MetaGameAction *local_1c;
  uint local_18;
  TradeLocation *local_14;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &DAT_005bcee0;
  local_10 = ExceptionList;
  uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = this;
  clearShipsForSale(this);
  if (3 < (uint)(*(int *)(this + 0x34) - *(int *)(this + 0x30))) {
    pTVar6 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pTVar6 = *(TradeLocation **)this;
    }
    debugPrint("WORLD","Cleared ships for sale at %s, generating fresh ones.",pTVar6,uVar5);
    iVar15 = *(int *)(this + 0x30);
    local_30 = 0;
    local_18 = 0;
    if (*(int *)(this + 0x34) - iVar15 >> 2 != 0) {
      do {
        piVar1 = *(int **)(local_18 * 4 + iVar15);
        iVar15 = *piVar1;
        if ((iVar15 != 0) || (piVar1[2] != 0)) {
          local_28 = (MetaGameAction **)piVar1[2];
          iVar18 = 0;
          iVar2 = piVar1[1];
          if ((0 < iVar2) && (local_2c = iVar2, 0 < iVar15)) {
            do {
              iVar7 = rand();
              iVar18 = iVar18 + 1 + iVar7 % iVar2;
              iVar15 = iVar15 + -1;
              this = local_14;
            } while (iVar15 != 0);
          }
          local_2c = (int)local_28 + iVar18;
          if (local_2c != 0) {
            ppAVar10 = (AnimationFrames **)0x0;
            ppAVar19 = (AnimationFrames **)0x0;
            local_20 = (void *)0x0;
            local_40 = (void *)0x0;
            local_3c = (AnimationFrames **)0x0;
            local_24 = (AnimationFrames **)0x0;
            local_38 = (AnimationFrames **)0x0;
            local_8 = 0;
            uVar17 = *(uint *)(local_14 + 0x30);
            iVar15 = *(int *)(uVar17 + local_18 * 4);
            local_28 = (MetaGameAction **)(*(int *)(iVar15 + 0x10) - *(int *)(iVar15 + 0xc));
            if (local_2c < (uint)((int)local_28 >> 2)) {
              ppMVar12 = (MetaGameAction **)0x0;
              local_1c = (MetaGameAction *)0x0;
              local_4c = (MetaGameAction *)0x0;
              local_48 = (MetaGameAction **)0x0;
              local_28 = (MetaGameAction **)0x0;
              local_44 = (MetaGameAction **)0x0;
              local_8._1_3_ = 0;
              uVar4 = local_8._1_3_;
              local_8._0_1_ = 1;
              local_8._1_3_ = 0;
              if (local_2c != 0) {
                do {
                  iVar15 = *(int *)(*(int *)(local_14 + 0x30) + local_18 * 4);
                  iVar2 = *(int *)(iVar15 + 0x10);
                  iVar15 = *(int *)(iVar15 + 0xc);
                  iVar18 = rand();
                  pMVar11 = (MetaGameAction *)(iVar18 % (iVar2 - iVar15 >> 2));
                  for (pMVar8 = local_1c; local_34 = pMVar11, pMVar8 != (MetaGameAction *)ppMVar12;
                      pMVar8 = pMVar8 + 4) {
                    if (*(MetaGameAction **)pMVar8 == pMVar11) {
                      if (pMVar8 != (MetaGameAction *)ppMVar12) goto LAB_0049f746;
                      break;
                    }
                  }
                  ppAVar10 = (AnimationFrames **)
                             (*(int *)(*(int *)(local_18 * 4 + *(int *)(local_14 + 0x30)) + 0xc) +
                             (int)pMVar11 * 4);
                  if (local_24 == ppAVar19) {
                    std::vector<>::_Emplace_reallocate<>((vector<> *)&local_40,ppAVar19,ppAVar10);
                    local_24 = local_38;
                    local_20 = local_40;
                  }
                  else {
                    *ppAVar19 = *ppAVar10;
                    local_3c = ppAVar19 + 1;
                  }
                  ppAVar19 = local_3c;
                  if (local_28 == ppMVar12) {
                    std::vector<>::_Emplace_reallocate<>((vector<> *)&local_4c,ppMVar12,&local_34);
                    local_28 = local_44;
                    local_1c = local_4c;
                    ppMVar12 = local_48;
                  }
                  else {
                    *ppMVar12 = pMVar11;
                    local_48 = ppMVar12 + 1;
                    ppMVar12 = local_48;
                  }
LAB_0049f746:
                  uVar4 = local_8._1_3_;
                } while ((uint)((int)ppAVar19 - (int)local_20 >> 2) < local_2c);
              }
              local_8._1_3_ = uVar4;
              local_8 = (uint)local_8._1_3_ << 8;
              pvVar13 = local_20;
              ppAVar3 = local_24;
              if (local_1c != (MetaGameAction *)0x0) {
                pnVar9 = (nothrow_t *)((int)local_28 - (int)local_1c & 0xfffffffc);
                pMVar8 = local_1c;
                if ((nothrow_t *)0xfff < pnVar9) {
                  pMVar8 = *(MetaGameAction **)(local_1c + -4);
                  pnVar9 = pnVar9 + 0x23;
                  if ((MetaGameAction *)0x1f < local_1c + (-4 - (int)pMVar8)) goto LAB_0049f854;
                }
                operator_delete(pMVar8,pnVar9);
                local_4c = (MetaGameAction *)0x0;
                local_48 = (MetaGameAction **)0x0;
                local_44 = (MetaGameAction **)0x0;
                pvVar13 = local_20;
                ppAVar3 = local_24;
              }
            }
            else {
              uVar16 = 0;
              pvVar13 = (void *)0x0;
              ppAVar3 = local_24;
              if ((int)local_28 >> 2 != 0) {
                do {
                  ppAVar19 = (AnimationFrames **)
                             (*(int *)(*(int *)(uVar17 + local_18 * 4) + 0xc) + uVar16 * 4);
                  if (ppAVar10 == local_3c) {
                    std::vector<>::_Emplace_reallocate<>((vector<> *)&local_40,local_3c,ppAVar19);
                    ppAVar10 = local_38;
                  }
                  else {
                    *local_3c = *ppAVar19;
                    local_3c = local_3c + 1;
                  }
                  uVar16 = uVar16 + 1;
                  uVar17 = *(uint *)(local_14 + 0x30);
                  iVar15 = *(int *)(uVar17 + local_18 * 4);
                  pvVar13 = local_40;
                  ppAVar19 = local_3c;
                  local_2c = uVar17;
                  ppAVar3 = ppAVar10;
                } while (uVar16 < (uint)(*(int *)(iVar15 + 0x10) - *(int *)(iVar15 + 0xc) >> 2));
              }
            }
            local_24 = ppAVar3;
            uVar17 = 0;
            uVar16 = (int)ppAVar19 - (int)pvVar13 >> 2;
            if (uVar16 != 0) {
              do {
                local_30 = local_30 + 1;
                generateShip(local_14,*(ShipSale **)((int)pvVar13 + uVar17 * 4));
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar16);
            }
            local_8 = -1;
            this = local_14;
            if (pvVar13 != (void *)0x0) {
              pnVar9 = (nothrow_t *)((int)local_24 - (int)pvVar13 & 0xfffffffc);
              pvVar14 = pvVar13;
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar14 = *(void **)((int)pvVar13 + -4);
                pnVar9 = pnVar9 + 0x23;
                if (0x1f < (uint)((int)pvVar13 + (-4 - (int)pvVar14))) {
LAB_0049f854:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar14,pnVar9);
              local_40 = (void *)0x0;
              local_3c = (AnimationFrames **)0x0;
              local_38 = (AnimationFrames **)0x0;
              this = local_14;
            }
          }
        }
        iVar15 = *(int *)(this + 0x30);
        local_18 = local_18 + 1;
      } while (local_18 < (uint)(*(int *)(this + 0x34) - iVar15 >> 2));
    }
    debugPrint("WORLD","Generated %d ships.",local_30,uVar5);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall TradeLocation::generateShip(class ShipSale *)

void __thiscall TradeLocation::generateShip(TradeLocation *this,ShipSale *param_1)

{
  uint uVar1;
  ShipModuleClass *pSVar2;
  SystemManager *this_00;
  GameData *pGVar3;
  ShipSale *pSVar4;
  ShipClass *pSVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  basic_string<> *pbVar11;
  Ship *pSVar12;
  NameManager *pNVar13;
  ShipClass *pSVar14;
  ShipModule *pSVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  void *pvVar19;
  AnimationFrames **ppAVar20;
  nothrow_t *pnVar21;
  ShipConfiguration *pSVar22;
  basic_string<> *pbVar23;
  AnimationFrames **ppAVar24;
  int iVar25;
  uint unaff_EDI;
  void *pvVar26;
  float fVar27;
  undefined4 uStack_88;
  void *local_58;
  AnimationFrames **local_54;
  AnimationFrames **local_50;
  ShipSale *local_4c;
  AnimationFrames *local_48;
  Ship *local_44;
  ModuleType local_40;
  ModuleType local_3c;
  ShipClass *local_38;
  ShipClass *local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char *local_18;
  void *local_10;
  undefined *puStack_c;
  int local_8;
  
  puStack_c = &DAT_005bcf3c;
  local_10 = ExceptionList;
  local_18 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_4c = param_1;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  local_8 = 0;
  uVar10 = *(uint *)(param_1 + 0x14);
  local_40 = 0;
  local_3c = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  bVar6 = std::_Traits_equal<>("secondhand",10,local_18,unaff_EDI);
  pSVar4 = local_4c;
  if (bVar6) {
    ppAVar24 = (AnimationFrames **)0x0;
    local_58 = (void *)0x0;
    ppAVar20 = (AnimationFrames **)0x0;
    local_54 = (AnimationFrames **)0x0;
    local_50 = (AnimationFrames **)0x0;
    local_8._0_1_ = 1;
    local_44 = *(Ship **)(g_gameData + 0x18);
    local_34 = (ShipClass *)0x0;
    local_38 = (ShipClass *)((uint)(*(Ship **)(g_gameData + 0x1c) + (3 - (int)local_44)) >> 2);
    local_48 = (AnimationFrames *)0x0;
    if (*(Ship **)(g_gameData + 0x1c) < local_44) {
      local_38 = (ShipClass *)0x0;
    }
    if (local_38 != (ShipClass *)0x0) {
      do {
        local_48 = *(AnimationFrames **)local_44;
        for (piVar17 = *(int **)(local_48 + 0x184); piVar17 != *(int **)(local_48 + 0x188);
            piVar17 = piVar17 + 1) {
          if (*(char *)(*piVar17 + 0x31) != '\0') {
            if (ppAVar20 == ppAVar24) {
              std::vector<>::_Emplace_reallocate<>((vector<> *)&local_58,ppAVar24,&local_48);
              ppAVar20 = local_50;
              ppAVar24 = local_54;
            }
            else {
              *ppAVar24 = local_48;
              local_54 = ppAVar24 + 1;
              ppAVar24 = local_54;
            }
            break;
          }
        }
        local_34 = local_34 + 1;
        local_44 = local_44 + 4;
      } while (local_34 != local_38);
    }
    pvVar19 = local_58;
    iVar25 = (int)ppAVar24 - (int)local_58 >> 2;
    if (iVar25 == 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_58 != (void *)0x0) {
        pnVar21 = (nothrow_t *)((int)ppAVar20 - (int)local_58 & 0xfffffffc);
        if ((nothrow_t *)0xfff < pnVar21) {
          pvVar19 = *(void **)((int)local_58 + -4);
          pnVar21 = pnVar21 + 0x23;
          if (0x1f < (uint)((int)local_58 + (-4 - (int)pvVar19))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar19,pnVar21);
        debugPrint("WARNING","Unable to generate valid second-hand ship.");
        goto LAB_0049fec6;
      }
    }
    else {
      iVar8 = rand();
      local_34 = *(ShipClass **)((int)pvVar19 + (iVar8 % iVar25) * 4);
      local_8 = (uint)local_8._1_3_ << 8;
      if (pvVar19 != (void *)0x0) {
        pnVar21 = (nothrow_t *)((int)ppAVar20 - (int)pvVar19 & 0xfffffffc);
        pvVar26 = pvVar19;
        if ((nothrow_t *)0xfff < pnVar21) {
          pvVar26 = *(void **)((int)pvVar19 + -4);
          pnVar21 = pnVar21 + 0x23;
          if (0x1f < (uint)((int)pvVar19 + (-4 - (int)pvVar26))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar26,pnVar21);
      }
      if (local_34 != (ShipClass *)0x0) {
        pSVar14 = local_34 + 0x60;
        if ((ShipClass *)local_30 != pSVar14) {
          if (0xf < *(uint *)(local_34 + 0x74)) {
            pSVar14 = *(ShipClass **)pSVar14;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)local_30,(char *)pSVar14,*(uint *)(local_34 + 0x70));
        }
        iVar25 = 100;
        do {
          pSVar22 = (ShipConfiguration *)0x0;
          if (iVar25 < 1) break;
          iVar8 = *(int *)(local_34 + 0x188);
          iVar25 = iVar25 + 1;
          iVar16 = *(int *)(local_34 + 0x184);
          iVar9 = rand();
          pSVar22 = *(ShipConfiguration **)
                     (*(int *)(local_34 + 0x184) + (iVar9 % (iVar8 - iVar16 >> 2)) * 4);
        } while (pSVar22[0x31] == (ShipConfiguration)0x0);
        pSVar14 = local_34;
        uVar10 = rand();
        uVar10 = uVar10 & 0x80000001;
        bVar6 = uVar10 == 0;
        if ((int)uVar10 < 0) {
          bVar6 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar6) {
          iVar25 = rand();
          if (iVar25 % 6 < 2) {
            iVar25 = rand();
            switch(iVar25 % 6) {
            case 0:
              local_3c = 3;
              break;
            case 1:
              local_3c = 4;
              break;
            case 2:
              local_3c = 1;
              break;
            case 3:
              local_3c = 7;
              break;
            case 4:
              local_3c = 0xe;
              break;
            default:
              local_3c = 9;
            }
          }
          else {
            iVar25 = rand();
            switch(iVar25 % 6) {
            case 0:
            case 1:
              local_40 = 10;
              break;
            case 2:
              local_40 = 0x10;
              break;
            case 3:
            case 4:
              local_40 = 0x11;
              break;
            default:
              local_40 = 0xd;
            }
          }
        }
        goto LAB_0049fba5;
      }
    }
    debugPrint("WARNING","Unable to generate valid second-hand ship.");
  }
  else {
    if ((basic_string<> *)local_30 != (basic_string<> *)local_4c) {
      pbVar11 = (basic_string<> *)local_4c;
      if (0xf < uVar10) {
        pbVar11 = *(basic_string<> **)local_4c;
      }
      std::basic_string<>::assign((basic_string<> *)local_30,(char *)pbVar11,uVar1);
    }
    std::basic_string<>::basic_string<>((basic_string<> *)&uStack_88,(basic_string<> *)pSVar4);
    pSVar14 = GameData::getShipClassWithIdentifier();
    local_34 = pSVar14;
    std::basic_string<>::basic_string<>
              ((basic_string<> *)&uStack_88,(basic_string<> *)(pSVar4 + 0x18));
    pSVar22 = ShipClass::getShipConfiguration(pSVar14);
LAB_0049fba5:
    if (pSVar14 != (ShipClass *)0x0) {
      pSVar12 = operator_new(0x388);
      local_48 = (AnimationFrames *)&uStack_88;
      local_8._0_1_ = 2;
      local_38 = (ShipClass *)pSVar12;
      pNVar13 = Singleton<>::getInstance();
      NameManager::generateGeneralRego(pNVar13);
      local_8._0_1_ = 3;
      pNVar13 = Singleton<>::getInstance();
      NameManager::generateBuyableName(pNVar13);
      local_8._0_1_ = 2;
      pSVar14 = (ShipClass *)Ship::Ship(pSVar12,local_34,9);
      local_8 = (uint)local_8._1_3_ << 8;
      local_48 = (AnimationFrames *)(local_4c + 0x18);
      local_44 = (Ship *)pSVar14;
      local_34 = pSVar14;
      std::basic_string<>::basic_string<>((basic_string<> *)&uStack_88,(basic_string<> *)local_48);
      Ship::addModulesWithConfig((Ship *)pSVar14);
      pGVar3 = g_gameData;
      if (pSVar22[0x31] == (ShipConfiguration)0x0) {
        pbVar23 = (basic_string<> *)(pSVar22 + 0x18);
        if ((basic_string<> *)(pSVar14 + 0x32c) != pbVar23) {
          if (0xf < *(uint *)(pSVar22 + 0x2c)) {
            pbVar23 = *(basic_string<> **)pbVar23;
          }
          std::basic_string<>::assign
                    ((basic_string<> *)(pSVar14 + 0x32c),(char *)pbVar23,*(uint *)(pSVar22 + 0x28));
        }
      }
      else {
        if (local_40 != 0) {
          iVar25 = 100;
          do {
            pSVar14 = local_34;
            if (iVar25 < 1) goto LAB_0049fca9;
            iVar8 = *(int *)(pGVar3 + 0x10);
            iVar25 = iVar25 + -1;
            iVar16 = *(int *)(pGVar3 + 0xc);
            iVar9 = rand();
            pSVar2 = *(ShipModuleClass **)
                      (*(int *)(pGVar3 + 0xc) + (iVar9 % (iVar8 - iVar16 >> 2)) * 4);
          } while (*(ModuleType *)(pSVar2 + 4) != local_40);
          pSVar14 = local_34;
          if (pSVar2 != (ShipModuleClass *)0x0) {
            local_38 = operator_new(0x88);
            local_8._0_1_ = 4;
            pSVar15 = (ShipModule *)ShipModule::ShipModule((ShipModule *)local_38,pSVar2);
            pSVar14 = local_34;
            local_8 = (uint)local_8._1_3_ << 8;
            if (pSVar15 == (ShipModule *)0x0) {
              local_40 = 0;
            }
            else {
              SystemManager::addModule(*(SystemManager **)(local_34 + 0x40),pSVar15,-1);
            }
          }
        }
LAB_0049fca9:
        pSVar5 = local_34;
        if (local_3c != 0) {
          this_00 = *(SystemManager **)(pSVar14 + 0x40);
          for (puVar18 = *(undefined4 **)(this_00 + 0x3c);
              puVar18 != *(undefined4 **)(this_00 + 0x40); puVar18 = puVar18 + 1) {
            pSVar15 = (ShipModule *)*puVar18;
            if (*(ModuleType *)(*(int *)(pSVar15 + 8) + 4) == local_3c) {
              SystemManager::removeModule(this_00,pSVar15);
              *(undefined ***)pSVar15 = ShipModule::vftable;
              operator_delete(pSVar15,(nothrow_t *)0x88);
              pSVar14 = pSVar5;
              goto LAB_0049fce2;
            }
            pSVar14 = local_34;
          }
          local_3c = 0;
        }
LAB_0049fce2:
        uVar10 = rand();
        uVar10 = uVar10 & 0x80000001;
        bVar6 = uVar10 == 0;
        if ((int)uVar10 < 0) {
          bVar6 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar6) {
          iVar25 = rand();
          local_38 = (ShipClass *)(iVar25 % 5);
          iVar8 = 0;
          iVar25 = 2;
          do {
            iVar16 = rand();
            pSVar14 = local_34;
            iVar8 = iVar8 + 1 + iVar16 % 6;
            iVar25 = iVar25 + -1;
          } while (iVar25 != 0);
          piVar17 = std::map<>::operator[]((map<> *)(local_34 + 0x14c),(int *)&local_38);
          *piVar17 = iVar8;
        }
        local_38 = *(ShipClass **)(*(int *)(pSVar14 + 0x40) + 0x40);
        pSVar14 = *(ShipClass **)(*(int *)(pSVar14 + 0x40) + 0x3c);
        if (pSVar14 != local_38) {
          do {
            piVar17 = *(int **)pSVar14;
            uVar10 = rand();
            uVar10 = uVar10 & 0x80000001;
            bVar6 = uVar10 == 0;
            if ((int)uVar10 < 0) {
              bVar6 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
            }
            if (bVar6) {
              iVar25 = rand();
              ComponentInterfaceInstance::damage
                        ((ComponentInterfaceInstance *)piVar17[3],iVar25 % 6 + 1,3);
              if ((*(char *)((int)piVar17 + 99) == '\0') ||
                 (cVar7 = (**(code **)(*piVar17 + 0x14))(), cVar7 != '\0')) {
                fVar27 = 0.0;
              }
              else {
                iVar25 = ComponentInterfaceInstance::getEfficiencyPercent
                                   ((ComponentInterfaceInstance *)piVar17[3]);
                fVar27 = *(float *)(piVar17[2] + 0xc4) * ((float)iVar25 / 100.0);
              }
              if (fVar27 < (float)piVar17[0x17]) {
                piVar17[0x17] = (int)fVar27;
              }
            }
            pSVar14 = pSVar14 + 4;
          } while (pSVar14 != local_38);
        }
        pSVar14 = local_34;
        Ship::generateSaleDescription((Ship *)local_34,local_40,local_3c);
      }
      *(ShipSale **)(pSVar14 + 0x328) = local_4c;
      ppAVar20 = *(AnimationFrames ***)(this + 0x40);
      if (*(AnimationFrames ***)(this + 0x44) == ppAVar20) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)(this + 0x3c),ppAVar20,(AnimationFrames **)&local_44);
      }
      else {
        *ppAVar20 = (AnimationFrames *)pSVar14;
        *(int *)(this + 0x40) = *(int *)(this + 0x40) + 4;
      }
      uStack_88 = 0x49fe8d;
      debugPrint("WORLD","Generated ship: %s, %s-class, configuration %s");
    }
    if (0xf < local_1c) {
      pnVar21 = (nothrow_t *)(local_1c + 1);
      pvVar19 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar21) {
        pvVar19 = *(void **)((int)local_30[0] + -4);
        pnVar21 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar19))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar19,pnVar21);
    }
  }
LAB_0049fec6:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}
