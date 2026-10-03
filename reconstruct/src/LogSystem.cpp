// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall LogSystem::runLogic(LogSystem *this,float param_1)
void LogSystem::runLogic(float param_1)

{
  std::string *pbVar1;
  LogLine *this_00;
  SoundEngine *this_01;
  undefined4 *puVar2;
  std::string *pbVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  nothrow_t *pnVar7;
  int *piVar8;
  std::string *unaff_ESI;
  uint uVar9;
  size_t sVar10;
  std::string *unaff_EDI;
  float fVar11;
  float in_XMM1_Da;
  Ship *pSVar12;
  Sound SVar13;
  int iVar14;
  std::string *pbVar15;
  undefined1 auStack_34 [4];
  float local_30;
  int *local_2c;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  // [cookie] local_c = ___security_cookie ^ (uint)auStack_34;
  fVar11 = *(float *)((char *)this + 0x48);
  local_30 = in_XMM1_Da;
  if ((fVar11 == -1.0) &&
     (iVar14 = *(int *)((char *)this + 0x50) - *(int *)((char *)this + 0x4c) >> 0x1f,
     (*(int *)((char *)this + 0x50) - *(int *)((char *)this + 0x4c)) / 0x18 + iVar14 != iVar14)) {
    iVar14 = -1;
    SVar13 = 0x2f;
    pSVar12 = *(Ship **)this;
    *(undefined4 *)((char *)this + 0x48) = 0x40800000;
    this_01 = ghidra::any_singleton();
    (this_01)->playSound(pSVar12, SVar13, iVar14);
    fVar11 = *(float *)((char *)this + 0x48);
  }
  if (fVar11 != -1.0) {
    *(float *)((char *)this + 0x48) = fVar11 - local_30;
    if (fVar11 - local_30 <= 0.0) {
      ghidra::str::ctor
                ((std::string *)local_24,*(std::string **)((char *)this + 0x4c));
      pbVar1 = *(std::string **)((char *)this + 0x50);
      puVar2 = (undefined4 *)ghidra::lib::remove___x28_x29(*(undefined4 *)((char *)this + 0x4c),pbVar1);
      pbVar15 = (std::string *)*puVar2;
      if (pbVar15 != pbVar1) {
        pbVar3 = ghidra::lib::_Move_unchecked___x28_x29(pbVar15,unaff_EDI,unaff_ESI);
        ghidra::lib::_Destroy_range_t
                  ((std::string *)pbVar15,(std::string *)unaff_EDI,(ghidra::lib::allocator_t *)unaff_ESI);
        *(std::string **)((char *)this + 0x50) = pbVar3;
      }
      *(undefined1 **)((char *)this + 0x48) = &DAT_bf800000;
      if (0xf < local_10) {
        pnVar7 = (nothrow_t *)(local_10 + 1);
        pvVar5 = local_24[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar5 = *(void **)((int)local_24[0] + -4);
          pnVar7 = (nothrow_t *)(local_10 + 0x24);
          if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar5,pnVar7);
      }
    }
    fVar11 = *(float *)((char *)this + 0x44);
    *(float *)((char *)this + 0x44) = fVar11 - local_30;
    if (fVar11 - local_30 < -0.5) {
      *(undefined4 *)((char *)this + 0x44) = 0x3f000000;
    }
  }
  if (*(int *)((char *)this + 0x10) == 0) {
    piVar8 = *(int **)((char *)this + 4);
    if (*(int *)((char *)this + 8) - (int)piVar8 >> 2 != 0) {
      iVar14 = *piVar8;
      *(int *)((char *)this + 0x10) = iVar14;
      local_2c = *(int **)((char *)this + 8);
      if (piVar8 != local_2c) {
        do {
          if (*piVar8 == iVar14) break;
          piVar8 = piVar8 + 1;
        } while (piVar8 != local_2c);
        if (piVar8 != local_2c) {
          piVar4 = piVar8 + 1;
          uVar6 = 0;
          uVar9 = (uint)((int)local_2c + (3 - (int)piVar4)) >> 2;
          if (local_2c < piVar4) {
            uVar9 = 0;
          }
          if (uVar9 != 0) {
            do {
              if (*piVar4 != *(int *)((char *)this + 0x10)) {
                *piVar8 = *piVar4;
                piVar8 = piVar8 + 1;
              }
              uVar6 = uVar6 + 1;
              piVar4 = piVar4 + 1;
            } while (uVar6 != uVar9);
          }
          if (piVar8 != local_2c) {
            sVar10 = *(int *)((char *)this + 8) - (int)local_2c;
            memmove(piVar8,local_2c,sVar10);
            *(size_t *)((char *)this + 8) = sVar10 + (int)piVar8;
          }
        }
      }
      renderWarning(this);
      *(undefined4 *)((char *)this + 0x30) = 0x40c00000;
    }
    if (*(int *)((char *)this + 0x10) == 0) {
      if (*(int **)((char *)this + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)((char *)this + 0x34) + 0x138))(1);
        this_00 = *(LogLine **)((char *)this + 0x10);
        *(undefined4 *)((char *)this + 0x34) = 0;
        if (this_00 != (LogLine *)0x0) {
          LogLine::_scalar_deleting_destructor_(this_00,(uint)this_00);
          *(undefined4 *)((char *)this + 0x10) = 0;
        }
      }
      if (*(int *)((char *)this + 0x58) != 0) {
        *(undefined1 *)(*(int *)((char *)this + 0x58) + 0x70) = 1;
      }
      if (*(int *)((char *)this + 0x5c) != 0) {
        *(undefined1 *)(*(int *)((char *)this + 0x5c) + 3) = 0;
        // [cookie] __security_check_cookie(local_c ^ (uint)auStack_34);
        return;
      }
      goto LAB_00528e4b;
    }
  }
  if (*(float *)((char *)this + 0x30) == -1.0) {
    if (*(int *)((char *)this + 0x5c) != 0) {
      *(undefined1 *)(*(int *)((char *)this + 0x5c) + 3) = 0;
    }
    cleanupWarning(this);
  }
  else {
    local_30 = *(float *)((char *)this + 0x30) - local_30;
    *(float *)((char *)this + 0x30) = local_30;
    if (local_30 <= 0.0) {
      *(undefined1 **)((char *)this + 0x30) = &DAT_bf800000;
      // [cookie] __security_check_cookie(local_c ^ (uint)auStack_34);
      return;
    }
    if (*(int *)((char *)this + 0x5c) != 0) {
      *(undefined1 *)(*(int *)((char *)this + 0x5c) + 3) = 1;
      // [cookie] __security_check_cookie(local_c ^ (uint)auStack_34);
      return;
    }
  }
LAB_00528e4b:
  // [cookie] __security_check_cookie(local_c ^ (uint)auStack_34);
  return;
}


// Ghidra: void __thiscall LogSystem::renderWarning(LogSystem *this)
void LogSystem::renderWarning()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  UIText *pUVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  std::string abStack_74 [8];
  undefined4 uStack_6c;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005c5861;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar1 = *(int *)((char *)this + 0x10);
  if (((iVar1 != 0) && (*(int *)((char *)this + 0x58) != 0)) && (*(int *)((char *)this + 0x5c) != 0)) {
    if (*(int **)((char *)this + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)((char *)this + 0x34) + 0x138))();
      iVar1 = *(int *)((char *)this + 0x10);
      *(undefined4 *)((char *)this + 0x34) = 0;
    }
    if (iVar1 != 0) {
      ghidra::str::ctor
                ((std::string *)local_2c,(std::string *)(iVar1 + 0x18));
      // [seh] local_8 = 0;
      ghidra::str::ctor(abStack_74,(std::string *)local_2c);
      strWithMaxLength();
      pUVar2 = UIText::create();
      *(UIText **)((char *)this + 0x34) = pUVar2;
      uStack_6c = 0x528f40;
      debugPrint("RENDER","RENDERING: %s");
      cocos2d::Ref::retain(*(Ref **)((char *)this + 0x34));
      // [seh] local_8._0_1_ = 1;
      (**(code **)(**(int **)((char *)this + 0x34) + 0xa0))();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      (**(code **)(**(int **)((char *)this + 0x34) + 0x48))();
      (**(code **)(**(int **)(*(int *)((char *)this + 0x5c) + 0x2c) + 0x108))();
      *(undefined1 *)(*(int *)((char *)this + 0x58) + 0x70) = 1;
      if (0xf < local_18) {
        pnVar4 = (nothrow_t *)(local_18 + 1);
        pvVar3 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar4) {
          pvVar3 = *(void **)((int)local_2c[0] + -4);
          pnVar4 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar3,pnVar4);
      }
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall LogSystem::addLogLine(LogSystem *this,LogPriority param_1,char *param_2,...)
void LogSystem::addLogLine(LogPriority param_1, char * param_2, ...)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000010[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffbf70[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  AnimationFrames **ppAVar2;
  std::string *pbVar3;
  std::string *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LogLine *pLVar7;
  std::string *pbVar8;
  NetworkServer *pNVar9;
  char *pcVar10;
  uint extraout_ECX;
  void *pvVar11;
  nothrow_t *pnVar12;
  va_list unaff_EDI;
  char *in_stack_0000000c;
  undefined4 uStack_408c;
  LogLine *local_4060;
  AnimationFrames *local_405c;
  void *local_4058 [4];
  undefined4 local_4048;
  uint local_4044;
  void *local_4040 [4];
  undefined4 local_4030;
  uint local_402c;
  char local_4028 [16388];
  char *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  int local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005c58c3;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  _vsnprintf(in_stack_0000000c,(size_t)&stack0x00000010,local_24,unaff_EDI);
  local_4030 = 0;
  local_402c = 0xf;
  local_4040[0] = (void *)((uint)local_4040[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_4040,"`%",2);
  pcVar10 = local_4028;
  local_14 = 0;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  ghidra::str::append
            ((std::string *)local_4040,local_4028,(int)pcVar10 - (int)(local_4028 + 1));
  pLVar7 = operator_new(0x34);
  local_14._0_1_ = 1;
  local_4060 = pLVar7;
  ghidra::str::ctor
            ((std::string *)&stack0xffffbf70,(std::string *)local_4040);
  local_4060 = (LogLine *)new ((void *)(pLVar7)) LogLine();
  local_14._0_1_ = 0;
  local_405c = (AnimationFrames *)local_4060;
  if (0 < (int)param_2) {
    ppAVar2 = *(AnimationFrames ***)(param_1 + 8);
    if (*(AnimationFrames ***)(param_1 + 0xc) == ppAVar2) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)(param_1 + 4),ppAVar2,(AnimationFrames **)&local_4060);
      local_405c = (AnimationFrames *)local_4060;
    }
    else {
      *ppAVar2 = (AnimationFrames *)local_4060;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    }
  }
  uStack_408c = 0x529171;
  local_4060 = (LogLine *)local_405c;
  pbVar8 = (std::string *)strUsingArgs((char *)local_4058);
  local_14._0_1_ = 2;
  pbVar3 = *(std::string **)(param_1 + 0x3c);
  if (*(std::string **)(param_1 + 0x40) == pbVar3) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(param_1 + 0x38),pbVar3,pbVar8);
  }
  else {
    *(undefined4 *)(pbVar3 + 0x10) = 0;
    *(undefined4 *)(pbVar3 + 0x14) = 0;
    uVar4 = *(undefined4 *)(pbVar8 + 4);
    uVar5 = *(undefined4 *)(pbVar8 + 8);
    uVar6 = *(undefined4 *)(pbVar8 + 0xc);
    *(undefined4 *)pbVar3 = *(undefined4 *)pbVar8;
    *(undefined4 *)(pbVar3 + 4) = uVar4;
    *(undefined4 *)(pbVar3 + 8) = uVar5;
    *(undefined4 *)(pbVar3 + 0xc) = uVar6;
    *(undefined8 *)(pbVar3 + 0x10) = *(undefined8 *)(pbVar8 + 0x10);
    *(undefined4 *)(pbVar8 + 0x10) = 0;
    *(undefined4 *)(pbVar8 + 0x14) = 0xf;
    *pbVar8 = (std::string)0x0;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 0x18;
  }
  local_14 = (uint)local_14._1_3_ << 8;
  if (0xf < local_4044) {
    pnVar12 = (nothrow_t *)(local_4044 + 1);
    pvVar11 = local_4058[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_4058[0] + -4);
      pnVar12 = (nothrow_t *)(local_4044 + 0x24);
      if (0x1f < (uint)((int)local_4058[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  local_4048 = 0;
  local_4044 = 0xf;
  local_4058[0] = (void *)((uint)local_4058[0] & 0xffffff00);
  if (0x3c < (uint)((*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38)) / 0x18)) {
    ghidra::lib::vector__erase((ghidra::vector *)(param_1 + 0x38));
    setHistoryItem((LogSystem *)param_1,*(int *)(param_1 + 0x14));
  }
  if (g_gameLogic[0x70] != (byte)0x0) {
    local_4060 = (LogLine *)&uStack_408c;
    ghidra::str::ctor
              ((std::string *)&uStack_408c,(std::string *)(*(int *)param_1 + 0x238));
    local_14._0_1_ = 3;
    pNVar9 = ghidra::any_singleton();
    local_14 = (uint)local_14._1_3_ << 8;
    (pNVar9)->sendLog();
    if (local_405c != (AnimationFrames *)0x0) {
      LogLine::_scalar_deleting_destructor_((LogLine *)local_405c,extraout_ECX);
    }
  }
  if ((*(int *)(param_1 + 0x14) == 0) &&
     ((*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38)) - 0x18U < 0x18)) {
    setHistoryItem((LogSystem *)param_1,0);
  }
  if (*(int *)(local_405c + 0x30) == 4) {
    this_00 = *(std::string **)(param_1 + 0x50);
    if (*(std::string **)(param_1 + 0x54) == this_00) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)(param_1 + 0x4c),(std::string *)this_00,
                 (std::string *)(local_405c + 0x18));
    }
    else {
      ghidra::str::ctor(this_00,(std::string *)(local_405c + 0x18));
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x18;
    }
  }
  if (0xf < local_402c) {
    pnVar12 = (nothrow_t *)(local_402c + 1);
    pvVar11 = local_4040[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_4040[0] + -4);
      pnVar12 = (nothrow_t *)(local_402c + 0x24);
      if (0x1f < (uint)((int)local_4040[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall LogSystem::cleanupWarning(LogSystem *this)
void LogSystem::cleanupWarning()

{
  LogLine *this_00;
  
  if (*(int **)((char *)this + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x34) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x34) = 0;
  }
  this_00 = *(LogLine **)((char *)this + 0x10);
  if (this_00 != (LogLine *)0x0) {
    LogLine::_scalar_deleting_destructor_(this_00,(uint)this_00);
    *(undefined4 *)((char *)this + 0x10) = 0;
  }
  if (*(int *)((char *)this + 0x58) != 0) {
    *(undefined1 *)(*(int *)((char *)this + 0x58) + 0x70) = 1;
  }
  return;
}


// Ghidra: void __thiscall LogSystem::setHistoryItem(LogSystem *this,int param_1)
void LogSystem::setHistoryItem(int param_1)

{
  std::string *pbVar1;
  int iVar2;
  uint uVar3;
  std::string *this_00;
  std::string *pbVar4;
  
  iVar2 = *(int *)((char *)this + 0x3c) - *(int *)((char *)this + 0x38) >> 0x1f;
  if ((*(int *)((char *)this + 0x3c) - *(int *)((char *)this + 0x38)) / 0x18 + iVar2 != iVar2) {
    *(int *)((char *)this + 0x14) = param_1;
    if (param_1 < 0) {
      *(undefined4 *)((char *)this + 0x14) = 0;
      param_1 = 0;
    }
    else {
      uVar3 = (*(int *)((char *)this + 0x3c) - *(int *)((char *)this + 0x38)) / 0x18;
      if (uVar3 <= (uint)param_1) {
        param_1 = uVar3 - 1;
        *(int *)((char *)this + 0x14) = param_1;
      }
    }
    this_00 = (std::string *)((char *)this + 0x18);
    pbVar1 = (std::string *)(*(int *)((char *)this + 0x38) + param_1 * 0x18);
    if (this_00 != pbVar1) {
      pbVar4 = pbVar1;
      if (0xf < *(uint *)(pbVar1 + 0x14)) {
        pbVar4 = *(std::string **)pbVar1;
      }
      ghidra::str::assign(this_00,(char *)pbVar4,*(uint *)(pbVar1 + 0x10));
    }
    if ((*(char *)(*(int *)this + 0x234) != '\0') && (this_00 != &ShipData::shipsLogCurrentItem)) {
      if (0xf < *(uint *)((char *)this + 0x2c)) {
        this_00 = *(std::string **)this_00;
      }
      ghidra::str::assign
                (&ShipData::shipsLogCurrentItem,(char *)this_00,*(uint *)((char *)this + 0x28));
    }
  }
  return;
}


// Ghidra: basic_string<> * __thiscall LogSystem::getLogAsStr(LogSystem *this)
std::string * LogSystem::getLogAsStr()

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  std::string *in_stack_00000004;
  int local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c5909;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  iVar3 = *(int *)((char *)this + 0x38);
  iVar4 = *(int *)((char *)this + 0x3c) - iVar3 >> 0x1f;
  local_14 = 0;
  if ((*(int *)((char *)this + 0x3c) - iVar3) / 0x18 + iVar4 != iVar4) {
    local_18 = 0;
    do {
      pcVar1 = (char *)(local_18 + iVar3);
      pcVar2 = pcVar1;
      if (0xf < *(uint *)(pcVar1 + 0x14)) {
        pcVar2 = *(char **)pcVar1;
      }
      ghidra::str::append(in_stack_00000004,pcVar2,*(uint *)(pcVar1 + 0x10));
      iVar4 = *(int *)((char *)this + 0x3c);
      if (local_14 < (iVar4 - *(int *)((char *)this + 0x38)) / 0x18 - 1U) {
        ghidra::str::append(in_stack_00000004,"\n",1);
        iVar4 = *(int *)((char *)this + 0x3c);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x18;
      iVar3 = *(int *)((char *)this + 0x38);
    } while (local_14 < (uint)((iVar4 - *(int *)((char *)this + 0x38)) / 0x18));
  }
  // [seh] ExceptionList = local_10;
  return in_stack_00000004;
}
