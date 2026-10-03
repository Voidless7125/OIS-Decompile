// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __cdecl V8::loadStats(_iobuf *param_1)
void V8::loadStats(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::lib::_Tree_t *this_;
  _iobuf *p_Var1;
  Stats *pSVar2;
  float *pfVar3;
  undefined4 ****ppppuVar4;
  FILE *in_ECX;
  nothrow_t *pnVar5;
  int iVar6;
  int local_34;
  Stats *local_30;
  undefined4 ***local_2c [5];
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005becb2;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var1 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = p_Var1;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_30 = operator_new(0x58);
    // [seh] local_8 = 0;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_30)) Stats();
  }
  // [seh] local_8 = 0xffffffff;
  fread(Singleton<Stats>::instance + 0x28,4,1,in_ECX);
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_30 = operator_new(0x58);
    // [seh] local_8 = 1;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_30)) Stats();
    // [seh] local_8 = 0xffffffff;
  }
  fread(Singleton<Stats>::instance + 0x2c,4,1,in_ECX);
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_30 = operator_new(0x58);
    // [seh] local_8 = 2;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_30)) Stats();
    // [seh] local_8 = 0xffffffff;
  }
  fread(Singleton<Stats>::instance + 0x30,4,1,in_ECX);
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_30 = operator_new(0x58);
    // [seh] local_8 = 3;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_30)) Stats();
    // [seh] local_8 = 0xffffffff;
  }
  fread(Singleton<Stats>::instance + 0x34,4,1,in_ECX);
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    local_30 = operator_new(0x58);
    // [seh] local_8 = 4;
    Singleton<Stats>::instance = (Stats *)new ((void *)(local_30)) Stats();
  }
  pSVar2 = Singleton<Stats>::instance;
  this_ = (ghidra::lib::_Tree_t *)(Singleton<Stats>::instance + 0x38);
  // [seh] local_8 = 5;
  iVar6 = *(int *)this_;
  ghidra::lib::_Tree___Erase(this_,*(ghidra::lib::_Tree_node_t **)(iVar6 + 4));
  *(int *)(*(int *)this_ + 4) = iVar6;
  **(int **)this_ = iVar6;
  // [seh] local_8 = 0xffffffff;
  *(int *)(*(int *)this_ + 8) = iVar6;
  *(undefined4 *)(pSVar2 + 0x3c) = 0;
  fread(&local_34,4,1,in_ECX);
  iVar6 = 0;
  if (0 < local_34) {
    do {
      SaveHandler::readLengthString(p_Var1);
      // [seh] local_8 = 6;
      fread(&local_30,4,1,in_ECX);
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        pSVar2 = operator_new(0x58);
        // [seh] local_8._0_1_ = 7;
        Singleton<Stats>::instance = (Stats *)new ((void *)(pSVar2)) Stats();
        // [seh] local_8 = CONCAT31(local_8._1_3_,6);
      }
      pfVar3 = ghidra::lib::map__operator_x5b_x5d
                         ((ghidra::lib::map_t *)(Singleton<Stats>::instance + 0x38),(std::string *)local_2c);
      *pfVar3 = (float)local_30;
      ppppuVar4 = local_2c;
      if (0xf < local_18) {
        ppppuVar4 = (undefined4 ****)local_2c[0];
      }
      debugPrint("SAVEHANDLER","  Stat: %s, %f",ppppuVar4,(double)(float)local_30);
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        ppppuVar4 = (undefined4 ****)local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          ppppuVar4 = (undefined4 ****)local_2c[0][-1];
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppuVar4,pnVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_34);
  }
  debugPrint("SAVEHANDLER","Loaded %d custom stats.");
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: Bounty * __cdecl V8::readBounty(_iobuf *param_1)
Bounty * V8::readBounty(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  word *this_;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  _iobuf *p_Var4;
  void *_DstBuf;
  word *pwVar5;
  word *pwVar6;
  BountyClass *this_00;
  undefined4 uVar7;
  Bounty *pBVar8;
  FILE *in_ECX;
  word *pwVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  _iobuf *p_Var12;
  void *local_54;
  uint local_40;
  void *local_3c;
  uint local_28;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005beebf;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var4 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  p_Var12 = p_Var4;
  _DstBuf = operator_new(0x54);
  memset(_DstBuf,0,0x54);
  *(undefined4 *)((int)_DstBuf + 0x14) = 0;
  pwVar6 = (word *)((int)_DstBuf + 4);
  *(undefined4 *)((int)_DstBuf + 0x18) = 0xf;
  *pwVar6 = (word)0x0;
  pwVar9 = (word *)((int)_DstBuf + 0x1c);
  *(undefined4 *)((int)_DstBuf + 0x2c) = 0;
  *(undefined4 *)((int)_DstBuf + 0x30) = 0xf;
  *pwVar9 = (word)0x0;
  this_ = (word *)((int)_DstBuf + 0x34);
  *(undefined4 *)((int)_DstBuf + 0x44) = 0;
  *(undefined4 *)((int)_DstBuf + 0x48) = 0xf;
  *this_ = (word)0x0;
  pwVar5 = (word *)SaveHandler::readLengthString(p_Var12);
  if (pwVar6 != pwVar5) {
    // [mislabelled-dtor] word::~word(pwVar6);
    uVar7 = *(undefined4 *)(pwVar5 + 4);
    uVar2 = *(undefined4 *)(pwVar5 + 8);
    uVar3 = *(undefined4 *)(pwVar5 + 0xc);
    *(undefined4 *)pwVar6 = *(undefined4 *)pwVar5;
    *(undefined4 *)((int)_DstBuf + 8) = uVar7;
    *(undefined4 *)((int)_DstBuf + 0xc) = uVar2;
    *(undefined4 *)((int)_DstBuf + 0x10) = uVar3;
    *(undefined8 *)((int)_DstBuf + 0x14) = *(undefined8 *)(pwVar5 + 0x10);
    *(undefined4 *)(pwVar5 + 0x10) = 0;
    *(undefined4 *)(pwVar5 + 0x14) = 0xf;
    *pwVar5 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  if (pwVar9 != pwVar6) {
    // [mislabelled-dtor] word::~word(pwVar9);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)pwVar9 = *(undefined4 *)pwVar6;
    *(undefined4 *)((int)_DstBuf + 0x20) = uVar7;
    *(undefined4 *)((int)_DstBuf + 0x24) = uVar2;
    *(undefined4 *)((int)_DstBuf + 0x28) = uVar3;
    *(undefined8 *)((int)_DstBuf + 0x2c) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  if (this_ != pwVar6) {
    // [mislabelled-dtor] word::~word(this_);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)this_ = *(undefined4 *)pwVar6;
    *(undefined4 *)((int)_DstBuf + 0x38) = uVar7;
    *(undefined4 *)((int)_DstBuf + 0x3c) = uVar2;
    *(undefined4 *)((int)_DstBuf + 0x40) = uVar3;
    *(undefined8 *)((int)_DstBuf + 0x44) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  fread((void *)((int)_DstBuf + 0x50),4,1,in_ECX);
  fread(_DstBuf,4,1,in_ECX);
  this_00 = operator_new(0x6c);
  local_14 = 0;
  uVar7 = new ((void *)(this_00)) BountyClass();
  local_14 = 0xffffffff;
  *(undefined4 *)((int)_DstBuf + 0x4c) = uVar7;
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  iVar1 = *(int *)((int)_DstBuf + 0x4c);
  pwVar9 = (word *)(iVar1 + 0x24);
  if (pwVar9 != pwVar6) {
    // [mislabelled-dtor] word::~word(pwVar9);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)pwVar9 = *(undefined4 *)pwVar6;
    *(undefined4 *)(iVar1 + 0x28) = uVar7;
    *(undefined4 *)(iVar1 + 0x2c) = uVar2;
    *(undefined4 *)(iVar1 + 0x30) = uVar3;
    *(undefined8 *)(iVar1 + 0x34) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  iVar1 = *(int *)((int)_DstBuf + 0x4c);
  pwVar9 = (word *)(iVar1 + 0x3c);
  if (pwVar9 != pwVar6) {
    // [mislabelled-dtor] word::~word(pwVar9);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)pwVar9 = *(undefined4 *)pwVar6;
    *(undefined4 *)(iVar1 + 0x40) = uVar7;
    *(undefined4 *)(iVar1 + 0x44) = uVar2;
    *(undefined4 *)(iVar1 + 0x48) = uVar3;
    *(undefined8 *)(iVar1 + 0x4c) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar11 = (nothrow_t *)(local_28 + 1);
    pvVar10 = local_3c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_3c + -4);
      pnVar11 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  pwVar6 = (word *)SaveHandler::readLengthString(p_Var12);
  iVar1 = *(int *)((int)_DstBuf + 0x4c);
  pwVar9 = (word *)(iVar1 + 0x54);
  if (pwVar9 != pwVar6) {
    // [mislabelled-dtor] word::~word(pwVar9);
    uVar7 = *(undefined4 *)(pwVar6 + 4);
    uVar2 = *(undefined4 *)(pwVar6 + 8);
    uVar3 = *(undefined4 *)(pwVar6 + 0xc);
    *(undefined4 *)pwVar9 = *(undefined4 *)pwVar6;
    *(undefined4 *)(iVar1 + 0x58) = uVar7;
    *(undefined4 *)(iVar1 + 0x5c) = uVar2;
    *(undefined4 *)(iVar1 + 0x60) = uVar3;
    *(undefined8 *)(iVar1 + 100) = *(undefined8 *)(pwVar6 + 0x10);
    *(undefined4 *)(pwVar6 + 0x10) = 0;
    *(undefined4 *)(pwVar6 + 0x14) = 0xf;
    *pwVar6 = (word)0x0;
  }
  if (0xf < local_40) {
    pnVar11 = (nothrow_t *)(local_40 + 1);
    pvVar10 = local_54;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_54 + -4);
      pnVar11 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 0x1c),4,1,in_ECX);
  fread(*(void **)((int)_DstBuf + 0x4c),4,1,in_ECX);
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 0x18),4,1,in_ECX);
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 0x20),4,1,in_ECX);
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 4),1,1,in_ECX);
  fread((void *)(*(int *)((int)_DstBuf + 0x4c) + 8),4,1,in_ECX);
  // [seh] ExceptionList = local_1c;
  // [cookie] pBVar8 = (Bounty *)__security_check_cookie((uint)p_Var4 ^ (uint)&stack0xfffffff0);
  return pBVar8;
}


// Ghidra: Contract * __cdecl V8::readContract(_iobuf *param_1)
Contract * V8::readContract(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff7c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _iobuf *p_Var5;
  undefined1 *puVar6;
  ContractClass *pCVar7;
  word *pwVar8;
  undefined1 *puVar9;
  word *pwVar10;
  Contract *pCVar11;
  FILE *in_ECX;
  void *pvVar12;
  nothrow_t *pnVar13;
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  uint local_28;
  _iobuf *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  int local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bef70;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var5 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_24 = p_Var5;
  puVar6 = operator_new(0x5c);
  pwVar10 = (word *)(puVar6 + 0x38);
  *(undefined4 *)(puVar6 + 0x10) = 0;
  *(undefined4 *)(puVar6 + 0x14) = 0xf;
  *puVar6 = 0;
  *(undefined1 **)(puVar6 + 0x18) = &DAT_bf800000;
  *(undefined4 *)(puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 0x30) = 0;
  *(undefined4 *)(puVar6 + 0x34) = 0xf;
  puVar6[0x20] = 0;
  *(undefined4 *)(puVar6 + 0x48) = 0;
  *(undefined4 *)(puVar6 + 0x4c) = 0xf;
  *pwVar10 = (word)0x0;
  *(undefined4 *)(puVar6 + 0x50) = 0;
  *(undefined4 *)(puVar6 + 0x54) = 0;
  *(undefined4 *)(puVar6 + 0x58) = 0;
  SaveHandler::readLengthString(p_Var5);
  local_14 = 0;
  ghidra::str::ctor((std::string *)&stack0xffffff7c,(std::string *)local_54)
  ;
  local_14._0_1_ = 1;
  if (ghidra::Singleton<void>::instance == (ContractManager *)0x0) {
    ghidra::Singleton<void>::instance = operator_new(1);
  }
  local_14 = (uint)local_14._1_3_ << 8;
  pCVar7 = ContractManager::getContractClassForIdentifier();
  *(ContractClass **)(puVar6 + 0x54) = pCVar7;
  fread(puVar6 + 0x18,4,1,in_ECX);
  fread(puVar6 + 0x1c,4,1,in_ECX);
  pwVar8 = (word *)SaveHandler::readLengthString(p_Var5);
  if ((word *)(puVar6 + 0x20) != pwVar8) {
    // [mislabelled-dtor] word::~word((word *)(puVar6 + 0x20));
    uVar2 = *(undefined4 *)(pwVar8 + 4);
    uVar3 = *(undefined4 *)(pwVar8 + 8);
    uVar4 = *(undefined4 *)(pwVar8 + 0xc);
    *(undefined4 *)(puVar6 + 0x20) = *(undefined4 *)pwVar8;
    *(undefined4 *)(puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 0x28) = uVar3;
    *(undefined4 *)(puVar6 + 0x2c) = uVar4;
    *(undefined8 *)(puVar6 + 0x30) = *(undefined8 *)(pwVar8 + 0x10);
    *(undefined4 *)(pwVar8 + 0x10) = 0;
    *(undefined4 *)(pwVar8 + 0x14) = 0xf;
    *pwVar8 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar13 = (nothrow_t *)(local_28 + 1);
    pvVar12 = local_3c;
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar12 = *(void **)((int)local_3c + -4);
      pnVar13 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar13);
  }
  pwVar8 = (word *)SaveHandler::readLengthString(p_Var5);
  if (pwVar10 != pwVar8) {
    // [mislabelled-dtor] word::~word(pwVar10);
    uVar2 = *(undefined4 *)(pwVar8 + 4);
    uVar3 = *(undefined4 *)(pwVar8 + 8);
    uVar4 = *(undefined4 *)(pwVar8 + 0xc);
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar8;
    *(undefined4 *)(puVar6 + 0x3c) = uVar2;
    *(undefined4 *)(puVar6 + 0x40) = uVar3;
    *(undefined4 *)(puVar6 + 0x44) = uVar4;
    *(undefined8 *)(puVar6 + 0x48) = *(undefined8 *)(pwVar8 + 0x10);
    *(undefined4 *)(pwVar8 + 0x10) = 0;
    *(undefined4 *)(pwVar8 + 0x14) = 0xf;
    *pwVar8 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar13 = (nothrow_t *)(local_28 + 1);
    pvVar12 = local_3c;
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar12 = *(void **)((int)local_3c + -4);
      pnVar13 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar13);
  }
  puVar9 = operator_new(0x48);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  *(undefined4 *)(puVar9 + 0x14) = 0xf;
  *puVar9 = 0;
  *(undefined4 *)(puVar9 + 0x18) = 0;
  *(undefined4 *)(puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 0x20) = 0;
  *(undefined4 *)(puVar9 + 0x24) = 0;
  *(undefined4 *)(puVar9 + 0x28) = 0;
  *(undefined4 *)(puVar9 + 0x2c) = 0;
  *(undefined4 *)(puVar9 + 0x40) = 0;
  *(undefined4 *)(puVar9 + 0x44) = 0xf;
  puVar9[0x30] = 0;
  *(undefined1 **)(puVar6 + 0x58) = puVar9;
  fread(puVar9 + 0x18,4,1,in_ECX);
  fread((void *)(*(int *)(puVar6 + 0x58) + 0x1c),4,1,in_ECX);
  fread((void *)(*(int *)(puVar6 + 0x58) + 0x20),4,1,in_ECX);
  fread((void *)(*(int *)(puVar6 + 0x58) + 0x24),4,1,in_ECX);
  fread((void *)(*(int *)(puVar6 + 0x58) + 0x28),4,1,in_ECX);
  fread((void *)(*(int *)(puVar6 + 0x58) + 0x2c),4,1,in_ECX);
  pwVar8 = (word *)SaveHandler::readLengthString(p_Var5);
  pwVar10 = *(word **)(puVar6 + 0x58);
  if (pwVar10 != pwVar8) {
    // [mislabelled-dtor] word::~word(pwVar10);
    uVar2 = *(undefined4 *)(pwVar8 + 4);
    uVar3 = *(undefined4 *)(pwVar8 + 8);
    uVar4 = *(undefined4 *)(pwVar8 + 0xc);
    *(undefined4 *)pwVar10 = *(undefined4 *)pwVar8;
    *(undefined4 *)(pwVar10 + 4) = uVar2;
    *(undefined4 *)(pwVar10 + 8) = uVar3;
    *(undefined4 *)(pwVar10 + 0xc) = uVar4;
    *(undefined8 *)(pwVar10 + 0x10) = *(undefined8 *)(pwVar8 + 0x10);
    *(undefined4 *)(pwVar8 + 0x10) = 0;
    *(undefined4 *)(pwVar8 + 0x14) = 0xf;
    *pwVar8 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar13 = (nothrow_t *)(local_28 + 1);
    pvVar12 = local_3c;
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar12 = *(void **)((int)local_3c + -4);
      pnVar13 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar13);
  }
  pwVar10 = (word *)SaveHandler::readLengthString(p_Var5);
  iVar1 = *(int *)(puVar6 + 0x58);
  pwVar8 = (word *)(iVar1 + 0x30);
  if (pwVar8 != pwVar10) {
    // [mislabelled-dtor] word::~word(pwVar8);
    uVar2 = *(undefined4 *)(pwVar10 + 4);
    uVar3 = *(undefined4 *)(pwVar10 + 8);
    uVar4 = *(undefined4 *)(pwVar10 + 0xc);
    *(undefined4 *)pwVar8 = *(undefined4 *)pwVar10;
    *(undefined4 *)(iVar1 + 0x34) = uVar2;
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
    *(undefined4 *)(iVar1 + 0x3c) = uVar4;
    *(undefined8 *)(iVar1 + 0x40) = *(undefined8 *)(pwVar10 + 0x10);
    *(undefined4 *)(pwVar10 + 0x10) = 0;
    *(undefined4 *)(pwVar10 + 0x14) = 0xf;
    *pwVar10 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar13 = (nothrow_t *)(local_28 + 1);
    pvVar12 = local_3c;
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar12 = *(void **)((int)local_3c + -4);
      pnVar13 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar13);
  }
  debugPrint("SAVEHANDLER","...contract [%s -> %s, %s] loaded");
  if (0xf < local_40) {
    pnVar13 = (nothrow_t *)(local_40 + 1);
    pvVar12 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar12 = *(void **)((int)local_54[0] + -4);
      pnVar13 = (nothrow_t *)(local_40 + 0x24);
      if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar12,pnVar13);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] pCVar11 = (Contract *)__security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return pCVar11;
}


// Ghidra: void __cdecl V8::loadSpaceStationStates(_iobuf *param_1)
void V8::loadSpaceStationStates(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  Contract *this_;
  int iVar1;
  MetaGameAction **ppMVar2;
  _iobuf *p_Var3;
  word *pwVar4;
  Ship *pSVar5;
  TradeItemInstance *pTVar6;
  FILE *in_ECX;
  uint uVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  std::string abStack_94 [4];
  undefined4 uStack_90;
  int local_70;
  int local_68;
  Contract *local_64;
  uint local_60;
  FILE *local_5c;
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
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf208;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var3 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_68 = 0;
  uStack_90 = 0x4c4729;
  local_5c = in_ECX;
  local_24 = p_Var3;
  fread(&local_68,4,1,in_ECX);
  local_70 = 0;
  if (0 < local_68) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
      if ((word *)&local_3c != pwVar4) {
        // [mislabelled-dtor] word::~word((word *)&local_3c);
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
        pnVar9 = (nothrow_t *)(local_40 + 1);
        pvVar8 = local_54;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_54 + -4);
          pnVar9 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar8))) goto LAB_004c4a8f;
        }
        operator_delete(pvVar8,pnVar9);
      }
      ghidra::str::ctor(abStack_94,(std::string *)&local_3c);
      pSVar5 = GameData::getShipWithRego();
      debugPrint("SAVEHANDLER","...loading trade data for platform %s");
      if (pSVar5 == (Ship *)0x0) {
        debugPrint("ERROR","ERROR: No valid space station with this_ rego.");
        if (0xf < uStack_28) {
          pnVar9 = (nothrow_t *)(uStack_28 + 1);
          pvVar8 = local_3c;
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar8 = *(void **)((int)local_3c + -4);
            pnVar9 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
LAB_004c4a8f:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,pnVar9);
        }
        goto LAB_004c4ab4;
      }
      local_64 = *(Contract **)(pSVar5 + 0x398);
      uVar12 = 0;
      puVar10 = *(undefined4 **)(local_64 + 0x94);
      uVar7 = (uint)((int)*(undefined4 **)(local_64 + 0x98) + (3 - (int)puVar10)) >> 2;
      if (*(undefined4 **)(local_64 + 0x98) < puVar10) {
        uVar7 = 0;
      }
      local_60 = uVar7;
      if (uVar7 != 0) {
        do {
          this_ = (Contract *)*puVar10;
          if (this_ != (Contract *)0x0) {
            Contract::_scalar_deleting_destructor_(this_,(uint)this_);
            uVar7 = local_60;
          }
          uVar12 = uVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (uVar12 != uVar7);
      }
      *(undefined4 *)(local_64 + 0x98) = *(undefined4 *)(local_64 + 0x94);
      local_58 = 0;
      uStack_90 = 0x4c4874;
      fread(&local_58,4,1,local_5c);
      iVar11 = 0;
      if (0 < local_58) {
        do {
          local_64 = readContract(p_Var3);
          iVar1 = *(int *)(pSVar5 + 0x398);
          ppMVar2 = *(MetaGameAction ***)(iVar1 + 0x98);
          if (*(MetaGameAction ***)(iVar1 + 0x9c) == ppMVar2) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(iVar1 + 0x94),ppMVar2,(MetaGameAction **)&local_64);
          }
          else {
            *ppMVar2 = (MetaGameAction *)local_64;
            *(int *)(iVar1 + 0x98) = *(int *)(iVar1 + 0x98) + 4;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d contracts for platform");
      (*(TradeLocation **)(pSVar5 + 0x398))->clearGoods(false);
      uStack_90 = 0x4c48ed;
      fread(&local_58,4,1,local_5c);
      iVar11 = 0;
      if (0 < local_58) {
        do {
          pTVar6 = V11::readTradeItem(p_Var3);
          if (pTVar6 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            (*(TradeLocation **)(pSVar5 + 0x398))->addTradeItemInstance(pTVar6, false);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d trade item instances for platform");
      iVar11 = *(int *)(pSVar5 + 0x398);
      uVar7 = 0;
      if (*(int *)(iVar11 + 0x8c) - *(int *)(iVar11 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x88) + uVar7 * 4) + 0x10) = 0;
          iVar1 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x88) + iVar1) + 0x30) = 0xffffffff;
        } while (uVar7 < (uint)(*(int *)(iVar11 + 0x8c) - *(int *)(iVar11 + 0x88) >> 2));
      }
      uStack_90 = 0x4c49b5;
      fread(&local_58,4,1,local_5c);
      iVar11 = 0;
      if (0 < local_58) {
        do {
          pTVar6 = V11::readTradeItem(p_Var3);
          if (pTVar6 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            (*(TradeLocation **)(pSVar5 + 0x398))->addTradeItemInstance(pTVar6, true);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < local_58);
      }
      debugPrint("SAVEHANDLER","...loading %d wire item instances for platform");
      local_14 = 0xffffffff;
      if (0xf < uStack_28) {
        pnVar9 = (nothrow_t *)(uStack_28 + 1);
        pvVar8 = local_3c;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_3c + -4);
          pnVar9 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) goto LAB_004c4a8f;
        }
        operator_delete(pvVar8,pnVar9);
      }
      local_70 = local_70 + 1;
    } while (local_70 < local_68);
  }
  debugPrint("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004c4ab4:
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __cdecl V8::loadEmails(_iobuf *param_1)
void V8::loadEmails(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff64[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_;
  AnimationFrames **ppAVar1;
  std::string *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _iobuf *p_Var6;
  EmailManager *pEVar7;
  AnimationFrames *_DstBuf;
  word *this_00;
  bool *pbVar8;
  Article *pAVar9;
  FILE *pFVar10;
  Email *pEVar11;
  FILE *in_ECX;
  void *pvVar12;
  nothrow_t *pnVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 local_74;
  AnimationFrames *local_70;
  FILE *local_6c;
  int local_68;
  Email local_62;
  Email local_61;
  EmailInstance *local_60;
  char local_59;
  int local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c [5];
  uint local_28;
  _iobuf *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf320;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var6 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_6c = in_ECX;
  local_24 = p_Var6;
  pEVar7 = ghidra::any_singleton();
  (pEVar7)->resetState();
  (*(CommsData **)(g_gameData + 300))->clearState();
  local_58 = 0;
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d emails...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      local_60 = operator_new(0xa0);
      _DstBuf = (AnimationFrames *)new ((void *)(local_60)) EmailInstance();
      local_70 = _DstBuf;
      fread(_DstBuf,4,1,in_ECX);
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      if ((word *)(_DstBuf + 4) != (word *)local_60) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 4));
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)(_DstBuf + 4) = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 8) = uVar3;
        *(undefined4 *)(_DstBuf + 0xc) = uVar4;
        *(undefined4 *)(_DstBuf + 0x10) = uVar5;
        *(undefined8 *)(_DstBuf + 0x14) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      if ((word *)(_DstBuf + 0x68) != (word *)local_60) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x68));
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)(_DstBuf + 0x68) = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x6c) = uVar3;
        *(undefined4 *)(_DstBuf + 0x70) = uVar4;
        *(undefined4 *)(_DstBuf + 0x74) = uVar5;
        *(undefined8 *)(_DstBuf + 0x78) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      this_00 = (word *)(_DstBuf + 0x1c);
      if (this_00 != (word *)local_60) {
        // [mislabelled-dtor] word::~word(this_00);
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)this_00 = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x20) = uVar3;
        *(undefined4 *)(_DstBuf + 0x24) = uVar4;
        *(undefined4 *)(_DstBuf + 0x28) = uVar5;
        *(undefined8 *)(_DstBuf + 0x2c) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      if ((std::string *)(_DstBuf + 0x4c) != (std::string *)this_00) {
        if (0xf < *(uint *)(_DstBuf + 0x30)) {
          this_00 = *(word **)this_00;
        }
        ghidra::str::assign
                  ((std::string *)(_DstBuf + 0x4c),(char *)this_00,*(uint *)(_DstBuf + 0x2c));
      }
      in_ECX = local_6c;
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      if ((word *)(_DstBuf + 0x34) != (word *)local_60) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x34));
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)(_DstBuf + 0x34) = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x38) = uVar3;
        *(undefined4 *)(_DstBuf + 0x3c) = uVar4;
        *(undefined4 *)(_DstBuf + 0x40) = uVar5;
        *(undefined8 *)(_DstBuf + 0x44) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      if ((word *)(_DstBuf + 0x80) != (word *)local_60) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x80));
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)(_DstBuf + 0x80) = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x84) = uVar3;
        *(undefined4 *)(_DstBuf + 0x88) = uVar4;
        *(undefined4 *)(_DstBuf + 0x8c) = uVar5;
        *(undefined8 *)(_DstBuf + 0x90) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      fread(_DstBuf + 0x98,4,1,in_ECX);
      fread(_DstBuf + 100,1,1,in_ECX);
      fread(_DstBuf + 0x9c,1,1,in_ECX);
      this_ = *(ghidra::vector **)(g_gameData + 300);
      ppAVar1 = *(AnimationFrames ***)((char *)this_ + 4);
      if (*(AnimationFrames ***)((char *)this_ + 8) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate(this_,ppAVar1,&local_70);
        _DstBuf = local_70;
      }
      else {
        *ppAVar1 = _DstBuf;
        *(int *)((char *)this_ + 4) = *(int *)((char *)this_ + 4) + 4;
      }
      local_60 = (EmailInstance *)&stack0xffffff64;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff64,(std::string *)(_DstBuf + 0x80));
      local_14 = 0;
      pEVar7 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar7 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar7;
        *pEVar7 = (byte)0x0;
        *(undefined4 *)(pEVar7 + 4) = 0;
        *(undefined4 *)(pEVar7 + 8) = 0;
        *(undefined4 *)(pEVar7 + 0xc) = 0;
        *(undefined4 *)(pEVar7 + 0x10) = 0;
        *(undefined4 *)(pEVar7 + 0x14) = 0;
        *(undefined4 *)(pEVar7 + 0x18) = 0;
        *(undefined4 *)(pEVar7 + 0x1c) = 0;
        *(undefined4 *)(pEVar7 + 0x20) = 0;
        *(undefined4 *)(pEVar7 + 0x24) = 0;
        *(undefined4 *)(pEVar7 + 0x28) = 0;
        local_60 = (EmailInstance *)pEVar7;
      }
      local_14 = 0xffffffff;
      (pEVar7)->markEmailSent();
      debugPrint("SAVEHANDLER"," - Loaded: \'%s\'");
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'read articles\'...");
  iVar14 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var6);
      local_14 = 1;
      pbVar8 = ghidra::lib::map__operator_x5b_x5d
                         ((ghidra::lib::map_t *)(*(int *)(g_gameData + 300) + 0xc),(std::string *)local_3c);
      *pbVar8 = true;
      debugPrint("SAVEHANDLER","Loaded read article \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_58);
  }
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'drafts sent\'...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var6);
      local_14 = 2;
      iVar14 = *(int *)(g_gameData + 300);
      pbVar2 = *(std::string **)(iVar14 + 0x24);
      if (*(std::string **)(iVar14 + 0x28) == pbVar2) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(iVar14 + 0x20),(std::string *)pbVar2,(std::string *)local_3c);
      }
      else {
        ghidra::str::ctor(pbVar2,(std::string *)local_3c);
        *(int *)(iVar14 + 0x24) = *(int *)(iVar14 + 0x24) + 0x18;
      }
      debugPrint("SAVEHANDLER","Loaded draft sent \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'articles downloaded\'...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var6);
      local_14 = 3;
      iVar14 = *(int *)(g_gameData + 300);
      pbVar2 = *(std::string **)(iVar14 + 0x18);
      if (*(std::string **)(iVar14 + 0x1c) == pbVar2) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(iVar14 + 0x14),(std::string *)pbVar2,(std::string *)local_3c);
      }
      else {
        ghidra::str::ctor(pbVar2,(std::string *)local_3c);
        *(int *)(iVar14 + 0x18) = *(int *)(iVar14 + 0x18) + 0x18;
      }
      ghidra::str::ctor
                ((std::string *)&stack0xffffff64,(std::string *)local_3c);
      pAVar9 = (*(ComputerSystem **)(g_gameLogic + 0xc))->getArticle();
      if (pAVar9 == (Article *)0x0) {
        pcVar15 = "Invalid article \'%s\' to download, ignoring.";
      }
      else {
        *(undefined4 *)(pAVar9 + 0xa0) = *(undefined4 *)(pAVar9 + 0x88);
        *(undefined4 *)(pAVar9 + 0xa4) = *(undefined4 *)(pAVar9 + 0x8c);
        *(undefined4 *)(pAVar9 + 0xa8) = *(undefined4 *)(pAVar9 + 0x90);
        *(undefined4 *)(pAVar9 + 0xac) = *(undefined4 *)(pAVar9 + 0x94);
        *(undefined8 *)(pAVar9 + 0xb0) = *(undefined8 *)(pAVar9 + 0x98);
        pcVar15 = "Loaded article downloaded \'%s\'";
      }
      debugPrint("SAVEHANDLER",pcVar15);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'sent emails\'...");
  iVar14 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var6);
      local_6c = (FILE *)&stack0xffffff64;
      local_14 = 4;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff64,(std::string *)local_3c);
      local_14._0_1_ = 5;
      pFVar10 = (FILE *)ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pFVar10 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = (EmailManager *)pFVar10;
        *(undefined1 *)&pFVar10->_ptr = 0;
        pFVar10->_cnt = 0;
        pFVar10->_base = (char *)0x0;
        pFVar10->_flag = 0;
        pFVar10->_file = 0;
        pFVar10->_charbuf = 0;
        pFVar10->_bufsiz = 0;
        pFVar10->_tmpfname = (char *)0x0;
        pFVar10[1]._ptr = (char *)0x0;
        pFVar10[1]._cnt = 0;
        pFVar10[1]._base = (char *)0x0;
        local_6c = pFVar10;
      }
      local_14 = CONCAT31(local_14._1_3_,4);
      pEVar11 = ((EmailManager *)pFVar10)->getEmail();
      if (pEVar11 == (Email *)0x0) {
        pcVar16 = "ERROR: invalid email \'%s\' loaded";
        pcVar15 = "ERROR";
      }
      else {
        *(undefined2 *)(pEVar11 + 100) = 0x100;
        *(undefined4 *)(pEVar11 + 0x98) = 0;
        pcVar16 = "Email \'%s\' marked as sent";
        pcVar15 = "SAVEHANDLER";
      }
      debugPrint(pcVar15,pcVar16);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c5705;
        }
        operator_delete(pvVar12,pnVar13);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_58);
  }
  fread(&local_59,1,1,in_ECX);
  do {
    if (local_59 == '\0') {
      debugPrint("SAVEHANDLER","Set %d emails to fired or ready to fire.");
      // [seh] ExceptionList = local_1c;
      // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    SaveHandler::readLengthString(p_Var6);
    local_14 = 6;
    fread(&local_74,4,1,in_ECX);
    fread(&local_62,1,1,in_ECX);
    fread(&local_61,1,1,in_ECX);
    local_6c = (FILE *)&stack0xffffff64;
    ghidra::str::ctor
              ((std::string *)&stack0xffffff64,(std::string *)local_54);
    local_14._0_1_ = 7;
    pFVar10 = (FILE *)ghidra::Singleton<void>::instance;
    if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
      pFVar10 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = (EmailManager *)pFVar10;
      *(undefined1 *)&pFVar10->_ptr = 0;
      pFVar10->_cnt = 0;
      pFVar10->_base = (char *)0x0;
      pFVar10->_flag = 0;
      pFVar10->_file = 0;
      pFVar10->_charbuf = 0;
      pFVar10->_bufsiz = 0;
      pFVar10->_tmpfname = (char *)0x0;
      pFVar10[1]._ptr = (char *)0x0;
      pFVar10[1]._cnt = 0;
      pFVar10[1]._base = (char *)0x0;
      local_6c = pFVar10;
    }
    local_14 = CONCAT31(local_14._1_3_,6);
    pEVar11 = ((EmailManager *)pFVar10)->getEmail();
    if (pEVar11 == (Email *)0x0) {
      debugPrint("ERROR","ERROR: invalid email \'%s\' loaded");
    }
    else {
      *(undefined4 *)(pEVar11 + 0x98) = local_74;
      pEVar11[100] = local_62;
      pEVar11[0x65] = local_61;
      debugPrint("SAVEHANDLER","Set email %s with RTF states (%f, %s, %s)");
    }
    local_14 = 0xffffffff;
    if (0xf < local_40) {
      pnVar13 = (nothrow_t *)(local_40 + 1);
      pvVar12 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_54[0] + -4);
        pnVar13 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar12))) {
LAB_004c5705:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar12,pnVar13);
    }
    fread(&local_59,1,1,in_ECX);
  } while( true );
}


// Ghidra: void __cdecl V8::loadShips(_iobuf *param_1)
void V8::loadShips(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff24[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff0c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff20[1] = {0};  // [pseudo] address of an unnamed stack slot
  FILE *pFVar1;
  GameData *pGVar2;
  _iobuf *p_Var3;
  Ship *this_;
  undefined4 *puVar4;
  ConsoleDamage *pCVar5;
  int iVar6;
  ShipModule *pSVar7;
  SaveHandler *pSVar8;
  int iVar9;
  ghidra::lib::_Tree_node_t *p_Var10;
  WeaponClass *pWVar11;
  FILE *in_ECX;
  int *piVar12;
  _iobuf *extraout_ECX;
  _iobuf *extraout_ECX_00;
  std::string *pbVar13;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  undefined4 *****pppppuVar14;
  void *pvVar15;
  nothrow_t *pnVar16;
  int iVar17;
  code *pcVar18;
  std::string abStack_124 [16];
  undefined4 uStack_114;
  std::string abStack_10c [4];
  undefined4 uStack_108;
  uint uVar19;
  _iobuf *p_Var20;
  Ship *pSVar21;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 local_a0 [4];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  Ship *local_8c;
  FILE *local_88;
  char local_82;
  Ship local_81;
  Ship *local_80;
  undefined4 ****local_7c;
  Weapon *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ****local_2c [4];
  int local_1c;
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bf3d6;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var3 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_88 = in_ECX;
  local_14 = p_Var3;
  SaveHandler::readLengthString(p_Var3);
  // [seh] local_8 = 0;
  SaveHandler::readLengthString(p_Var3);
  // [seh] local_8._0_1_ = 1;
  SaveHandler::readLengthString(p_Var3);
  pcVar18 = fread_exref;
  // [seh] local_8._0_1_ = 2;
  fread(&local_b4,8,1,in_ECX);
  uVar19 = 0;
  fread(&local_ac,8,1,in_ECX);
  fread(local_a0,4,1,in_ECX);
  uStack_108 = 0x4c5c9e;
  fread(&local_81,1,1,in_ECX);
  local_78 = (Weapon *)&stack0xffffff24;
  p_Var20 = (_iobuf *)(uVar19 & 0xffffff00);
  ghidra::str::assign((std::string *)&stack0xffffff24,"",0);
  // [seh] local_8._0_1_ = 3;
  local_8c = (Ship *)&stack0xffffff0c;
  ghidra::str::ctor((std::string *)&stack0xffffff0c,(std::string *)local_74)
  ;
  local_7c = (undefined4 ****)abStack_10c;
  // [seh] local_8._0_1_ = 4;
  uStack_114 = 0x4c5cf0;
  ghidra::str::ctor(abStack_10c,(std::string *)local_44);
  // [seh] local_8._0_1_ = 5;
  ghidra::str::ctor(abStack_124,(std::string *)local_5c);
  // [seh] local_8._0_1_ = 2;
  this_ = GameLogic::generateShip();
  pGVar2 = g_gameData;
  local_80 = this_;
  if (this_ == (Ship *)0x0) {
    debugPrint("SAVEHANDLER","ERROR - Invalid ship type in save game, \'%s\'");
  }
  else {
    *(undefined8 *)((char *)this_ + 0x28) = local_b4;
    *(Ship **)(pGVar2 + 0xd0) = this_;
    *(undefined8 *)((char *)this_ + 0x30) = local_ac;
    ((char *)this_)[0x15c] = local_81;
    (this_)->setSector(*(int *)(*(int *)(pGVar2 + 0xd0) + 0x20));
    for (puVar4 = *(undefined4 **)(g_gameData + 0x3c); puVar4 != *(undefined4 **)(g_gameData + 0x40)
        ; puVar4 = puVar4 + 1) {
      piVar12 = (int *)*puVar4;
      in_ECX = local_88;
      if (*piVar12 == *(int *)((char *)this_ + 0x20)) goto LAB_004c5da8;
    }
    piVar12 = (int *)0x0;
LAB_004c5da8:
    *(int **)(g_gameData + 0xd8) = piVar12;
    if (Singleton<Pather>::instance == (Pather *)0x0) {
      local_78 = operator_new(0x98);
      // [seh] local_8._0_1_ = 6;
      Singleton<Pather>::instance = (Pather *)new ((void *)((Pather *)local_78)) Pather();
      // [seh] local_8._0_1_ = 2;
    }
    (Singleton<Pather>::instance)->resetSector();
    fread(&local_90,4,1,in_ECX);
    if (0 < local_90) {
      local_8c = this_ + 0x14c;
      iVar17 = 0;
      do {
        fread(&local_7c,4,1,in_ECX);
        p_Var20 = (_iobuf *)&DAT_00000001;
        fread(&local_78,4,1,in_ECX);
        piVar12 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)local_8c,(int *)&local_7c);
        iVar17 = iVar17 + 1;
        *piVar12 = (int)local_78;
        this_ = local_80;
      } while (iVar17 < local_90);
    }
    fread(&local_94,4,1,in_ECX);
    (this_)->repairConsoleDamage();
    if (0 < local_94) {
      iVar17 = 0;
      do {
        pCVar5 = operator_new(0x28);
        // [seh] local_8._0_1_ = 7;
        local_78 = (Weapon *)pCVar5;
        SaveHandler::readLengthString(p_Var20);
        iVar6 = new ((void *)(pCVar5)) ConsoleDamage();
        // [seh] local_8._0_1_ = 2;
        fread((void *)(iVar6 + 0x20),4,1,in_ECX);
        p_Var20 = (_iobuf *)&DAT_00000001;
        fread((void *)(iVar6 + 0x24),4,1,in_ECX);
        fread((void *)(iVar6 + 0x18),4,1,in_ECX);
        uStack_108 = 0x4c5ed5;
        fread((void *)(iVar6 + 0x1c),4,1,in_ECX);
        debugPrint("SAVEHANDLER","  Console damage loaded for: %s");
        iVar17 = iVar17 + 1;
        this_ = local_80;
        pcVar18 = fread_exref;
      } while (iVar17 < local_94);
    }
    (*pcVar18)();
    local_7c = (undefined4 *****)0x0;
    p_Var20 = extraout_ECX;
    if (0 < local_98) {
      do {
        iVar17 = -1;
        pSVar7 = readShipModule(p_Var20);
        (*(SystemManager **)((char *)this_ + 0x40))->addModule(pSVar7, iVar17);
        local_7c = (undefined4 ****)((int)local_7c + 1);
        p_Var20 = extraout_ECX_00;
      } while ((int)local_7c < local_98);
    }
    *(undefined1 *)(*(int *)((char *)this_ + 0x40) + 0x34) = 0;
    local_78 = (Weapon *)GameData::getShipWithinDistance();
    if (local_78 == (Weapon *)0x0) {
      (**(code **)(**(int **)((char *)this_ + 0x178) + 4))();
      *(undefined4 *)((char *)this_ + 0x178) = 0;
      *(undefined4 *)((char *)this_ + 0xf8) = 0;
      *(undefined4 *)((char *)this_ + 0xd4) = 0;
      *(undefined4 *)((char *)this_ + 0x2c0) = 0;
      *(undefined4 *)((char *)this_ + 0x2c4) = 0;
    }
    else {
      (this_)->setDocked((Ship *)local_78, false, false);
      iVar17 = *(int *)((char *)this_ + 0x178);
      if (iVar17 != 0) {
        pbVar13 = (std::string *)(iVar17 + 8);
        pSVar8 = ghidra::any_singleton();
        if ((std::string *)(pSVar8 + 0x14) != pbVar13) {
          if (0xf < *(uint *)(iVar17 + 0x1c)) {
            pbVar13 = *(std::string **)pbVar13;
          }
          ghidra::str::assign
                    ((std::string *)(pSVar8 + 0x14),(char *)pbVar13,*(uint *)(iVar17 + 0x18));
        }
        strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 8;
        local_8c = (Ship *)local_2c;
        if (0xf < local_18) {
          local_8c = (Ship *)local_2c[0];
        }
        pppppuVar14 = local_2c;
        if (0xf < local_18) {
          pppppuVar14 = (undefined4 *****)local_2c[0];
        }
        iVar6 = 0;
        iVar17 = (local_1c + (int)local_8c) - (int)pppppuVar14;
        if ((undefined4 *****)(local_1c + (int)local_8c) < pppppuVar14) {
          iVar17 = 0;
        }
        local_7c = pppppuVar14;
        if (iVar17 != 0) {
          do {
            iVar9 = tolower((int)*(char *)(iVar6 + (int)pppppuVar14));
            *(char *)(iVar6 + (int)local_8c) = (char)iVar9;
            iVar6 = iVar6 + 1;
            this_ = local_80;
          } while (iVar6 != iVar17);
        }
        local_8c = (Ship *)&stack0xffffff20;
        ghidra::str::ctor
                  ((std::string *)&stack0xffffff20,(std::string *)local_2c);
        // [seh] local_8._0_1_ = 9;
        if (ghidra::Singleton<void>::instance == (FlagManager *)0x0) {
          local_78 = operator_new(0x30);
          *(undefined4 *)local_78 = 0;
          *(undefined4 *)(local_78 + 4) = 0;
          *(undefined4 *)(local_78 + 8) = 0;
          pFVar1 = (FILE *)(local_78 + 0xc);
          // [seh] local_8._0_1_ = 0xb;
          pFVar1->_ptr = (char *)0x0;
          *(undefined4 *)(local_78 + 0x10) = 0;
          local_88 = pFVar1;
          p_Var10 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
          pFVar1->_ptr = (char *)p_Var10;
          ghidra::Singleton<void>::instance = (FlagManager *)local_78;
          *(undefined4 *)(local_78 + 0x24) = 0;
          *(undefined4 *)(local_78 + 0x28) = 0xf;
          local_78[0x14] = (byte)0x0;
        }
        // [seh] local_8._0_1_ = 8;
        FlagManager::setFlag();
        // [seh] local_8._0_1_ = 2;
        if (0xf < local_18) {
          pnVar16 = (nothrow_t *)(local_18 + 1);
          pppppuVar14 = (undefined4 *****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar16) {
            pppppuVar14 = (undefined4 *****)local_2c[0][-1];
            pnVar16 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppuVar14))) {
LAB_004c611d:
              // [seh] local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pppppuVar14,pnVar16);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
        pcVar18 = fread_exref;
      }
    }
    pGVar2 = g_gameData;
    *(undefined4 *)((char *)this_ + 0x378) = 0;
    iVar17 = *(int *)(*(int *)(*(int *)(pGVar2 + 0xd0) + 0x40) + 0x20);
    if (iVar17 != 0) {
      local_88 = (FILE *)(iVar17 + 0x3c);
      local_7c = (undefined4 *****)0x8;
      do {
        local_78 = *(Weapon **)local_88;
        if (local_78 != (Weapon *)0x0) {
          (local_78)->~Weapon();
          operator_delete(local_78,(nothrow_t *)0x428);
        }
        local_88->_ptr = 0;
        local_88 = (FILE *)((int)local_88 + 4);
        local_7c = (undefined4 ****)((int)local_7c - 1);
      } while ((undefined4 *****)local_7c != (undefined4 *****)0x0);
    }
    (*pcVar18)();
    local_80 = (Ship *)0x0;
    if (0 < local_9c) {
      do {
        (*pcVar18)();
        if (local_82 != '\0') {
          SaveHandler::readLengthString(p_Var3);
          // [seh] local_8._0_1_ = 0xc;
          pSVar21 = local_80;
          ghidra::str::ctor
                    ((std::string *)&stack0xffffff20,(std::string *)local_2c);
          pWVar11 = GameData::getWeaponClassWithIdentifier();
          (*(Ship **)(g_gameData + 0xd0))->addWeapon(pWVar11, (int)pSVar21);
          debugPrint("SAVEHANDLER","Loaded weapon of class %s into player ship");
          // [seh] local_8._0_1_ = 2;
          if (0xf < local_18) {
            pnVar16 = (nothrow_t *)(local_18 + 1);
            pppppuVar14 = (undefined4 *****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar16) {
              pppppuVar14 = (undefined4 *****)local_2c[0][-1];
              pnVar16 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppuVar14))) goto LAB_004c611d;
            }
            operator_delete(pppppuVar14,pnVar16);
          }
        }
        local_80 = local_80 + 1;
      } while ((int)local_80 < local_9c);
    }
    pGVar2 = g_gameData;
    *(undefined4 *)((char *)this_ + 100) = 1;
    ((char *)this_)[0x234] = (byte)0x1;
    *(Ship **)(pGVar2 + 0xd0) = this_;
    ShipData::currentlyBoardedShip = this_;
    if (*(Ship **)((char *)this_ + 0x178) != (Ship *)0x0) {
      ShipData::currentlyBoardedShip = *(Ship **)((char *)this_ + 0x178);
    }
  }
  if (0xf < local_30) {
    pnVar16 = (nothrow_t *)(local_30 + 1);
    pvVar15 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_44[0] + -4);
      pnVar16 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pnVar16 = (nothrow_t *)(local_48 + 1);
    pvVar15 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_5c[0] + -4);
      pnVar16 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pnVar16 = (nothrow_t *)(local_60 + 1);
    pvVar15 = local_74[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_74[0] + -4);
      pnVar16 = (nothrow_t *)(local_60 + 0x24);
      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: ShipModule * __cdecl V8::readShipModule(_iobuf *param_1)
ShipModule * V8::readShipModule(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *pGVar1;
  bool bVar2;
  ShipModuleClass *pSVar3;
  undefined4 uVar4;
  ShipModule *pSVar5;
  FILE *in_ECX;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  undefined4 local_4c [2];
  undefined4 *local_44;
  undefined4 *local_40;
  int local_3c;
  ShipModule *local_38;
  int local_34;
  undefined1 local_2d;
  void *local_2c [5];
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bf11a;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  SaveHandler::readLengthString(local_14);
  pcVar11 = fread_exref;
  // [seh] local_8 = 0;
  fread(&local_2d,1,1,in_ECX);
  fread(local_4c,4,1,in_ECX);
  ghidra::str::ctor((std::string *)&stack0xffffff8c,(std::string *)local_2c)
  ;
  pSVar3 = GameData::getModuleClassWithIdentifier();
  if (pSVar3 == (ShipModuleClass *)0x0) {
    debugPrint("ERROR","Invalid module in save file.");
    bVar2 = cc_assert_script_compatible("Invalid module in save file.");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  else {
    local_38 = operator_new(0x88);
    // [seh] local_8._0_1_ = 1;
    local_3c = new ((void *)(local_38)) ShipModule(pSVar3);
    iVar12 = 0;
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    do {
      (*pcVar11)();
      (*pcVar11)(&local_38,4);
      if (local_34 != -1) {
        local_44 = operator_new(8);
        pGVar1 = g_gameData;
        uVar6 = 0;
        *local_44 = 0x42c80000;
        pcVar11 = fread_exref;
        uVar10 = *(int *)(pGVar1 + 4) - *(int *)pGVar1 >> 2;
        if (uVar10 != 0) {
          local_40 = *(undefined4 **)pGVar1;
          puVar8 = local_40;
          do {
            if (*(int *)*puVar8 == local_34) {
              uVar4 = local_40[uVar6];
              goto LAB_004c651a;
            }
            uVar6 = uVar6 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar6 < uVar10);
        }
        uVar4 = 0;
LAB_004c651a:
        local_44[1] = uVar4;
        *(undefined4 **)(iVar12 + 4 + *(int *)(local_3c + 0xc)) = local_44;
        **(int **)(iVar12 + 4 + *(int *)(local_3c + 0xc)) = (int)local_38;
      }
      iVar12 = iVar12 + 4;
    } while (iVar12 < 0x50);
    iVar12 = 0x54;
    do {
      (*pcVar11)();
      (*pcVar11)(&local_40,4);
      if (local_34 != -1) {
        local_44 = operator_new(8);
        pGVar1 = g_gameData;
        uVar6 = 0;
        *local_44 = 0x42c80000;
        pcVar11 = fread_exref;
        uVar10 = *(int *)(pGVar1 + 4) - *(int *)pGVar1 >> 2;
        if (uVar10 != 0) {
          local_38 = *(ShipModule **)pGVar1;
          pSVar5 = local_38;
          do {
            if (**(int **)pSVar5 == local_34) {
              uVar4 = *(undefined4 *)(local_38 + uVar6 * 4);
              goto LAB_004c65b8;
            }
            uVar6 = uVar6 + 1;
            pSVar5 = pSVar5 + 4;
          } while (uVar6 < uVar10);
        }
        uVar4 = 0;
LAB_004c65b8:
        local_44[1] = uVar4;
        *(undefined4 **)(iVar12 + *(int *)(local_3c + 0xc)) = local_44;
        **(int **)(iVar12 + *(int *)(local_3c + 0xc)) = (int)local_40;
      }
      iVar12 = iVar12 + 4;
    } while (iVar12 < 0xa4);
    *(undefined1 *)(local_3c + 99) = local_2d;
    *(undefined4 *)(local_3c + 0x68) = local_4c[0];
    debugPrint("DETAIL","Loaded module of type \'%s\'");
  }
  if (0xf < local_18) {
    pnVar9 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar9 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar9);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] pSVar5 = (ShipModule *)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return pSVar5;
}
