// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: TradeItemInstance * __cdecl V11::readTradeItem(_iobuf *param_1)
TradeItemInstance * V11::readTradeItem(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  word *pwVar5;
  undefined4 *puVar6;
  int iVar7;
  TradeItemInstance *pTVar8;
  FILE *in_ECX;
  void *pvVar9;
  nothrow_t *pnVar10;
  Dice *unaff_EDI;
  void *local_20;
  uint local_c;
  
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = operator_new(0x34);
  *piVar4 = 0;
  piVar4[1] = 0;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = -1;
  piVar4[10] = 0;
  piVar4[0xb] = 0xf;
  *(undefined1 *)(piVar4 + 6) = 0;
  piVar4[0xc] = -1;
  fread(piVar4 + 5,4,1,in_ECX);
  fread(piVar4 + 4,4,1,in_ECX);
  pwVar5 = (word *)SaveHandler::readLengthString((_iobuf *)unaff_EDI);
  if ((word *)(piVar4 + 6) != pwVar5) {
    // [mislabelled-dtor] word::~word((word *)(piVar4 + 6));
    iVar1 = *(int *)(pwVar5 + 4);
    iVar7 = *(int *)(pwVar5 + 8);
    iVar2 = *(int *)(pwVar5 + 0xc);
    piVar4[6] = *(int *)pwVar5;
    piVar4[7] = iVar1;
    piVar4[8] = iVar7;
    piVar4[9] = iVar2;
    *(undefined8 *)(piVar4 + 10) = *(undefined8 *)(pwVar5 + 0x10);
    *(undefined4 *)(pwVar5 + 0x10) = 0;
    *(undefined4 *)(pwVar5 + 0x14) = 0xf;
    *pwVar5 = (word)0x0;
  }
  if (0xf < local_c) {
    pnVar10 = (nothrow_t *)(local_c + 1);
    pvVar9 = local_20;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_20 + -4);
      pnVar10 = (nothrow_t *)(local_c + 0x24);
      if (0x1f < (uint)((int)local_20 + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
  fread(piVar4 + 0xc,4,1,in_ECX);
  fread(piVar4 + 1,4,1,in_ECX);
  fread(piVar4 + 2,4,1,in_ECX);
  fread(piVar4 + 3,4,1,in_ECX);
  if (*piVar4 == 0) {
    puVar6 = operator_new(0x2c);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 3;
    puVar6[10] = 0;
    puVar6[9] = 3;
    *piVar4 = (int)puVar6;
  }
  fread((void *)*piVar4,4,1,in_ECX);
  fread((void *)(*piVar4 + 4),4,1,in_ECX);
  fread((void *)(*piVar4 + 0x14),4,1,in_ECX);
  fread((void *)(*piVar4 + 0x18),4,1,in_ECX);
  fread((void *)(*piVar4 + 0x1c),4,1,in_ECX);
  fread((void *)(*piVar4 + 0x20),4,1,in_ECX);
  fread((void *)(*piVar4 + 0x24),4,1,in_ECX);
  fread((void *)(*piVar4 + 0x28),4,1,in_ECX);
  fread((void *)(*piVar4 + 8),4,1,in_ECX);
  fread((void *)(*piVar4 + 0xc),4,1,in_ECX);
  fread((void *)(*piVar4 + 0x10),4,1,in_ECX);
  iVar1 = *piVar4;
  iVar7 = diceRoll(unaff_EDI);
  *(int *)(iVar1 + 0x14) = iVar7;
  *(int *)(iVar1 + 0x20) = (*(int *)(iVar1 + 0x1c) * iVar7) / 2;
  // [cookie] pTVar8 = (TradeItemInstance *)__security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return pTVar8;
}


// Ghidra: Contract * __cdecl V11::readContract(_iobuf *param_1)
Contract * V11::readContract(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff7c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _iobuf *p_Var5;
  std::string *pbVar6;
  ContractClass *pCVar7;
  std::string *pbVar8;
  word *pwVar9;
  undefined1 *puVar10;
  word *pwVar11;
  Contract *pCVar12;
  FILE *in_ECX;
  void *pvVar13;
  nothrow_t *pnVar14;
  std::string *local_54 [4];
  uint local_44;
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
  pbVar6 = operator_new(0x5c);
  pwVar11 = (word *)(pbVar6 + 0x38);
  *(undefined4 *)(pbVar6 + 0x10) = 0;
  *(undefined4 *)(pbVar6 + 0x14) = 0xf;
  *pbVar6 = (std::string)0x0;
  *(undefined1 **)(pbVar6 + 0x18) = &DAT_bf800000;
  *(undefined4 *)(pbVar6 + 0x1c) = 0;
  *(undefined4 *)(pbVar6 + 0x30) = 0;
  *(undefined4 *)(pbVar6 + 0x34) = 0xf;
  pbVar6[0x20] = (std::string)0x0;
  *(undefined4 *)(pbVar6 + 0x48) = 0;
  *(undefined4 *)(pbVar6 + 0x4c) = 0xf;
  *pwVar11 = (word)0x0;
  *(undefined4 *)(pbVar6 + 0x50) = 0;
  *(undefined4 *)(pbVar6 + 0x54) = 0;
  *(undefined4 *)(pbVar6 + 0x58) = 0;
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
  *(ContractClass **)(pbVar6 + 0x54) = pCVar7;
  if (pbVar6 != (std::string *)local_54) {
    pbVar8 = (std::string *)local_54;
    if (0xf < local_40) {
      pbVar8 = local_54[0];
    }
    ghidra::str::assign(pbVar6,(char *)pbVar8,local_44);
  }
  fread(pbVar6 + 0x18,4,1,in_ECX);
  fread(pbVar6 + 0x1c,4,1,in_ECX);
  pwVar9 = (word *)SaveHandler::readLengthString(p_Var5);
  if ((word *)(pbVar6 + 0x20) != pwVar9) {
    // [mislabelled-dtor] word::~word((word *)(pbVar6 + 0x20));
    uVar2 = *(undefined4 *)(pwVar9 + 4);
    uVar3 = *(undefined4 *)(pwVar9 + 8);
    uVar4 = *(undefined4 *)(pwVar9 + 0xc);
    *(undefined4 *)(pbVar6 + 0x20) = *(undefined4 *)pwVar9;
    *(undefined4 *)(pbVar6 + 0x24) = uVar2;
    *(undefined4 *)(pbVar6 + 0x28) = uVar3;
    *(undefined4 *)(pbVar6 + 0x2c) = uVar4;
    *(undefined8 *)(pbVar6 + 0x30) = *(undefined8 *)(pwVar9 + 0x10);
    *(undefined4 *)(pwVar9 + 0x10) = 0;
    *(undefined4 *)(pwVar9 + 0x14) = 0xf;
    *pwVar9 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar14 = (nothrow_t *)(local_28 + 1);
    pvVar13 = local_3c;
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_3c + -4);
      pnVar14 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  pwVar9 = (word *)SaveHandler::readLengthString(p_Var5);
  if (pwVar11 != pwVar9) {
    // [mislabelled-dtor] word::~word(pwVar11);
    uVar2 = *(undefined4 *)(pwVar9 + 4);
    uVar3 = *(undefined4 *)(pwVar9 + 8);
    uVar4 = *(undefined4 *)(pwVar9 + 0xc);
    *(undefined4 *)pwVar11 = *(undefined4 *)pwVar9;
    *(undefined4 *)(pbVar6 + 0x3c) = uVar2;
    *(undefined4 *)(pbVar6 + 0x40) = uVar3;
    *(undefined4 *)(pbVar6 + 0x44) = uVar4;
    *(undefined8 *)(pbVar6 + 0x48) = *(undefined8 *)(pwVar9 + 0x10);
    *(undefined4 *)(pwVar9 + 0x10) = 0;
    *(undefined4 *)(pwVar9 + 0x14) = 0xf;
    *pwVar9 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar14 = (nothrow_t *)(local_28 + 1);
    pvVar13 = local_3c;
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_3c + -4);
      pnVar14 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  puVar10 = operator_new(0x48);
  *(undefined4 *)(puVar10 + 0x10) = 0;
  *(undefined4 *)(puVar10 + 0x14) = 0xf;
  *puVar10 = 0;
  *(undefined4 *)(puVar10 + 0x18) = 0;
  *(undefined4 *)(puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 0x20) = 0;
  *(undefined4 *)(puVar10 + 0x24) = 0;
  *(undefined4 *)(puVar10 + 0x28) = 0;
  *(undefined4 *)(puVar10 + 0x2c) = 0;
  *(undefined4 *)(puVar10 + 0x40) = 0;
  *(undefined4 *)(puVar10 + 0x44) = 0xf;
  puVar10[0x30] = 0;
  *(undefined1 **)(pbVar6 + 0x58) = puVar10;
  fread(puVar10 + 0x18,4,1,in_ECX);
  fread((void *)(*(int *)(pbVar6 + 0x58) + 0x1c),4,1,in_ECX);
  fread((void *)(*(int *)(pbVar6 + 0x58) + 0x20),4,1,in_ECX);
  fread((void *)(*(int *)(pbVar6 + 0x58) + 0x24),4,1,in_ECX);
  fread((void *)(*(int *)(pbVar6 + 0x58) + 0x28),4,1,in_ECX);
  fread((void *)(*(int *)(pbVar6 + 0x58) + 0x2c),4,1,in_ECX);
  pwVar9 = (word *)SaveHandler::readLengthString(p_Var5);
  pwVar11 = *(word **)(pbVar6 + 0x58);
  if (pwVar11 != pwVar9) {
    // [mislabelled-dtor] word::~word(pwVar11);
    uVar2 = *(undefined4 *)(pwVar9 + 4);
    uVar3 = *(undefined4 *)(pwVar9 + 8);
    uVar4 = *(undefined4 *)(pwVar9 + 0xc);
    *(undefined4 *)pwVar11 = *(undefined4 *)pwVar9;
    *(undefined4 *)(pwVar11 + 4) = uVar2;
    *(undefined4 *)(pwVar11 + 8) = uVar3;
    *(undefined4 *)(pwVar11 + 0xc) = uVar4;
    *(undefined8 *)(pwVar11 + 0x10) = *(undefined8 *)(pwVar9 + 0x10);
    *(undefined4 *)(pwVar9 + 0x10) = 0;
    *(undefined4 *)(pwVar9 + 0x14) = 0xf;
    *pwVar9 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar14 = (nothrow_t *)(local_28 + 1);
    pvVar13 = local_3c;
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_3c + -4);
      pnVar14 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  pwVar11 = (word *)SaveHandler::readLengthString(p_Var5);
  iVar1 = *(int *)(pbVar6 + 0x58);
  pwVar9 = (word *)(iVar1 + 0x30);
  if (pwVar9 != pwVar11) {
    // [mislabelled-dtor] word::~word(pwVar9);
    uVar2 = *(undefined4 *)(pwVar11 + 4);
    uVar3 = *(undefined4 *)(pwVar11 + 8);
    uVar4 = *(undefined4 *)(pwVar11 + 0xc);
    *(undefined4 *)pwVar9 = *(undefined4 *)pwVar11;
    *(undefined4 *)(iVar1 + 0x34) = uVar2;
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
    *(undefined4 *)(iVar1 + 0x3c) = uVar4;
    *(undefined8 *)(iVar1 + 0x40) = *(undefined8 *)(pwVar11 + 0x10);
    *(undefined4 *)(pwVar11 + 0x10) = 0;
    *(undefined4 *)(pwVar11 + 0x14) = 0xf;
    *pwVar11 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar14 = (nothrow_t *)(local_28 + 1);
    pvVar13 = local_3c;
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_3c + -4);
      pnVar14 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  debugPrint("SAVEHANDLER","...contract [%s -> %s, %s] loaded");
  if (0xf < local_40) {
    pnVar14 = (nothrow_t *)(local_40 + 1);
    pbVar6 = local_54[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pbVar6 = *(std::string **)(local_54[0] + -4);
      pnVar14 = (nothrow_t *)(local_40 + 0x24);
      if ((std::string *)0x1f < local_54[0] + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar6,pnVar14);
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] pCVar12 = (Contract *)__security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return pCVar12;
}


// Ghidra: void __cdecl V11::loadPassenger(_iobuf *param_1)
void V11::loadPassenger(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  PassengerInstance *this_;
  undefined4 uVar1;
  undefined4 uVar2;
  _iobuf *p_Var3;
  word *this_00;
  word *pwVar4;
  undefined4 uVar5;
  GameData *pGVar6;
  undefined4 *puVar7;
  FILE *in_ECX;
  void *pvVar8;
  nothrow_t *pnVar9;
  undefined1 local_5d;
  Passenger *local_5c;
  char local_55;
  void *local_54;
  undefined4 local_44;
  uint local_40;
  void *local_3c;
  uint local_28;
  _iobuf *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf0d2;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var3 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_24 = p_Var3;
  fread(&local_55,1,1,in_ECX);
  if (local_55 == '\0') {
    this_ = *(PassengerInstance **)(g_gameData + 0x128);
    if (this_ != (PassengerInstance *)0x0) {
      (this_)->~PassengerInstance();
      operator_delete(this_,(nothrow_t *)0x94);
      pGVar6 = g_gameData;
      *(undefined4 *)(g_gameData + 0x128) = 0;
      goto LAB_004c05aa;
    }
  }
  else {
    local_5c = operator_new(0x58);
    this_00 = (word *)new ((void *)(local_5c)) Passenger();
    pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
    if (this_00 != pwVar4) {
      // [mislabelled-dtor] word::~word(this_00);
      uVar5 = *(undefined4 *)(pwVar4 + 4);
      uVar1 = *(undefined4 *)(pwVar4 + 8);
      uVar2 = *(undefined4 *)(pwVar4 + 0xc);
      *(undefined4 *)this_00 = *(undefined4 *)pwVar4;
      *(undefined4 *)(this_00 + 4) = uVar5;
      *(undefined4 *)(this_00 + 8) = uVar1;
      *(undefined4 *)(this_00 + 0xc) = uVar2;
      *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(pwVar4 + 0x10);
      *(undefined4 *)(pwVar4 + 0x10) = 0;
      *(undefined4 *)(pwVar4 + 0x14) = 0xf;
      *pwVar4 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar9 = (nothrow_t *)(local_28 + 1);
      pvVar8 = local_3c;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_3c + -4);
        pnVar9 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
    if (this_00 + 0x18 != pwVar4) {
      // [mislabelled-dtor] word::~word(this_00 + 0x18);
      uVar5 = *(undefined4 *)(pwVar4 + 4);
      uVar1 = *(undefined4 *)(pwVar4 + 8);
      uVar2 = *(undefined4 *)(pwVar4 + 0xc);
      *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)pwVar4;
      *(undefined4 *)(this_00 + 0x1c) = uVar5;
      *(undefined4 *)(this_00 + 0x20) = uVar1;
      *(undefined4 *)(this_00 + 0x24) = uVar2;
      *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(pwVar4 + 0x10);
      *(undefined4 *)(pwVar4 + 0x10) = 0;
      *(undefined4 *)(pwVar4 + 0x14) = 0xf;
      *pwVar4 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar9 = (nothrow_t *)(local_28 + 1);
      pvVar8 = local_3c;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_3c + -4);
        pnVar9 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    local_5c = operator_new(0x94);
    local_14 = 0;
    uVar5 = new ((void *)((PassengerInstance *)local_5c)) PassengerInstance((Passenger *)this_00)
    ;
    local_14 = 0xffffffff;
    *(undefined4 *)(g_gameData + 0x128) = uVar5;
    pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
    local_5c = (Passenger *)(*(int *)(g_gameData + 0x128) + 0x28);
    if (local_5c != (Passenger *)pwVar4) {
      // [mislabelled-dtor] word::~word((word *)local_5c);
      uVar5 = *(undefined4 *)(pwVar4 + 4);
      uVar1 = *(undefined4 *)(pwVar4 + 8);
      uVar2 = *(undefined4 *)(pwVar4 + 0xc);
      *(undefined4 *)local_5c = *(undefined4 *)pwVar4;
      *(undefined4 *)(local_5c + 4) = uVar5;
      *(undefined4 *)(local_5c + 8) = uVar1;
      *(undefined4 *)(local_5c + 0xc) = uVar2;
      *(undefined8 *)(local_5c + 0x10) = *(undefined8 *)(pwVar4 + 0x10);
      *(undefined4 *)(pwVar4 + 0x10) = 0;
      *(undefined4 *)(pwVar4 + 0x14) = 0xf;
      *pwVar4 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar9 = (nothrow_t *)(local_28 + 1);
      pvVar8 = local_3c;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_3c + -4);
        pnVar9 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
    local_5c = (Passenger *)(*(int *)(g_gameData + 0x128) + 0x40);
    if (local_5c != (Passenger *)pwVar4) {
      // [mislabelled-dtor] word::~word((word *)local_5c);
      uVar5 = *(undefined4 *)(pwVar4 + 4);
      uVar1 = *(undefined4 *)(pwVar4 + 8);
      uVar2 = *(undefined4 *)(pwVar4 + 0xc);
      *(undefined4 *)local_5c = *(undefined4 *)pwVar4;
      *(undefined4 *)(local_5c + 4) = uVar5;
      *(undefined4 *)(local_5c + 8) = uVar1;
      *(undefined4 *)(local_5c + 0xc) = uVar2;
      *(undefined8 *)(local_5c + 0x10) = *(undefined8 *)(pwVar4 + 0x10);
      *(undefined4 *)(pwVar4 + 0x10) = 0;
      *(undefined4 *)(pwVar4 + 0x14) = 0xf;
      *pwVar4 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar9 = (nothrow_t *)(local_28 + 1);
      pvVar8 = local_3c;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_3c + -4);
        pnVar9 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
    local_5c = (Passenger *)(*(int *)(g_gameData + 0x128) + 0x10);
    if (local_5c != (Passenger *)pwVar4) {
      // [mislabelled-dtor] word::~word((word *)local_5c);
      uVar5 = *(undefined4 *)(pwVar4 + 4);
      uVar1 = *(undefined4 *)(pwVar4 + 8);
      uVar2 = *(undefined4 *)(pwVar4 + 0xc);
      *(undefined4 *)local_5c = *(undefined4 *)pwVar4;
      *(undefined4 *)(local_5c + 4) = uVar5;
      *(undefined4 *)(local_5c + 8) = uVar1;
      *(undefined4 *)(local_5c + 0xc) = uVar2;
      *(undefined8 *)(local_5c + 0x10) = *(undefined8 *)(pwVar4 + 0x10);
      *(undefined4 *)(pwVar4 + 0x10) = 0;
      *(undefined4 *)(pwVar4 + 0x14) = 0xf;
      *pwVar4 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar9 = (nothrow_t *)(local_28 + 1);
      pvVar8 = local_3c;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_3c + -4);
        pnVar9 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
    local_5c = (Passenger *)(*(int *)(g_gameData + 0x128) + 0x58);
    if (local_5c != (Passenger *)pwVar4) {
      // [mislabelled-dtor] word::~word((word *)local_5c);
      uVar5 = *(undefined4 *)(pwVar4 + 4);
      uVar1 = *(undefined4 *)(pwVar4 + 8);
      uVar2 = *(undefined4 *)(pwVar4 + 0xc);
      *(undefined4 *)local_5c = *(undefined4 *)pwVar4;
      *(undefined4 *)(local_5c + 4) = uVar5;
      *(undefined4 *)(local_5c + 8) = uVar1;
      *(undefined4 *)(local_5c + 0xc) = uVar2;
      *(undefined8 *)(local_5c + 0x10) = *(undefined8 *)(pwVar4 + 0x10);
      *(undefined4 *)(pwVar4 + 0x10) = 0;
      *(undefined4 *)(pwVar4 + 0x14) = 0xf;
      *pwVar4 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar9 = (nothrow_t *)(local_28 + 1);
      pvVar8 = local_3c;
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_3c + -4);
        pnVar9 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    pwVar4 = (word *)SaveHandler::readLengthString(p_Var3);
    local_5c = (Passenger *)(*(int *)(g_gameData + 0x128) + 0x70);
    if (local_5c != (Passenger *)pwVar4) {
      // [mislabelled-dtor] word::~word((word *)local_5c);
      uVar5 = *(undefined4 *)(pwVar4 + 4);
      uVar1 = *(undefined4 *)(pwVar4 + 8);
      uVar2 = *(undefined4 *)(pwVar4 + 0xc);
      *(undefined4 *)local_5c = *(undefined4 *)pwVar4;
      *(undefined4 *)(local_5c + 4) = uVar5;
      *(undefined4 *)(local_5c + 8) = uVar1;
      *(undefined4 *)(local_5c + 0xc) = uVar2;
      *(undefined8 *)(local_5c + 0x10) = *(undefined8 *)(pwVar4 + 0x10);
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
        if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar9);
    }
    pGVar6 = g_gameData;
    local_44 = 0;
    local_40 = 0xf;
    local_54 = (void *)((uint)local_54 & 0xffffff00);
    *(word **)(*(int *)(g_gameData + 0x128) + 0xc) = this_00;
    fread((void *)(*(int *)(pGVar6 + 0x128) + 4),4,1,in_ECX);
    fread((void *)(*(int *)(g_gameData + 0x128) + 0x90),1,1,in_ECX);
    fread((void *)(*(int *)(g_gameData + 0x128) + 0x88),1,1,in_ECX);
    fread((void *)(*(int *)(g_gameData + 0x128) + 0x8c),4,1,in_ECX);
    fread((void *)(*(int *)(g_gameData + 0x128) + 8),4,1,in_ECX);
    local_5d = 0;
    fread(&local_5d,1,1,in_ECX);
    pGVar6 = g_gameData;
LAB_004c05aa:
    if (local_55 != '\0') {
      puVar7 = (undefined4 *)(*(int *)(pGVar6 + 0x128) + 0x10);
      if (0xf < *(uint *)(*(int *)(pGVar6 + 0x128) + 0x24)) {
        puVar7 = (undefined4 *)*puVar7;
      }
      debugPrint("SAVEHANDLER","Loaded onboard passenger %s.",puVar7);
      goto LAB_004c05e8;
    }
  }
  debugPrint("SAVEHANDLER","Loaded no passenger.");
LAB_004c05e8:
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: CargoHold * __cdecl V11::readCargo(_iobuf *param_1)
CargoHold * V11::readCargo(_iobuf * param_1)

{
  AnimationFrames **ppAVar1;
  GameData *pGVar2;
  undefined4 uVar3;
  FILE *in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  CargoHold *pCVar6;
  CargoHold *pCVar7;
  int iVar8;
  FILE *_File;
  int iVar9;
  AnimationFrames *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  AnimationFrames *local_20;
  int local_1c;
  FILE *local_18;
  int local_14;
  CargoHold *local_10;
  CargoHold *local_c;
  char local_6;
  char local_5;
  
  local_18 = in_ECX;
  local_10 = operator_new(0x50);
  *(undefined4 *)(local_10 + 4) = 0x18;
  local_c = local_10 + 0x44;
  pCVar7 = local_10 + 0xc;
  pCVar6 = local_10 + 4;
  *(undefined4 *)(local_10 + 8) = 6;
  *(int *)local_c = 0;
  *(undefined4 *)(local_10 + 0x48) = 0;
  *(undefined4 *)(local_10 + 0x4c) = 0;
  pGVar2 = g_gameData;
  *(int *)pCVar7 = 0;
  *(undefined4 *)(local_10 + 0x10) = 0;
  *(undefined4 *)(local_10 + 0x14) = 0;
  *(undefined4 *)(local_10 + 0x18) = 0;
  *(undefined4 *)(local_10 + 0x1c) = 0;
  *(undefined4 *)(local_10 + 0x20) = 0;
  *(undefined4 *)(local_10 + 0x24) = 0;
  *(undefined4 *)(local_10 + 0x28) = 0;
  *(undefined4 *)(local_10 + 0x2c) = 0;
  *(undefined4 *)(local_10 + 0x30) = 0;
  *(undefined4 *)(local_10 + 0x34) = 0;
  *(undefined4 *)(local_10 + 0x38) = 0;
  *(undefined8 *)(local_10 + 0x3c) = 0;
  CargoHold::configureSlots
            (local_10,*(int *)(*(int *)(*(int *)(pGVar2 + 0xd0) + 0x254) + 0xe8),
             *(int *)(*(int *)(*(int *)(pGVar2 + 0xd0) + 0x254) + 0xe4));
  fread(pCVar6,4,1,in_ECX);
  _File = local_18;
  local_14 = 0;
  fread(&local_14,4,1,local_18);
  local_24 = 0;
  pCVar6 = local_c;
  if (local_14 < 1) {
    iVar9 = *(int *)(local_c + 4);
  }
  else {
    do {
      local_1c = -1;
      fread(&local_1c,4,1,_File);
      local_30 = operator_new(8);
      pGVar2 = g_gameData;
      *(undefined4 *)local_30 = 0x42c80000;
      local_2c = *(int *)(pGVar2 + 4) - *(int *)pGVar2 >> 2;
      local_28 = local_1c;
      uVar4 = 0;
      if (local_2c != 0) {
        puVar5 = *(undefined4 **)pGVar2;
        do {
          pCVar6 = local_c;
          if (*(int *)*puVar5 == local_1c) {
            uVar3 = (*(undefined4 **)pGVar2)[uVar4];
            goto LAB_004c29e7;
          }
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < local_2c);
      }
      uVar3 = 0;
LAB_004c29e7:
      *(undefined4 *)(local_30 + 4) = uVar3;
      local_20 = local_30;
      fread(local_30,4,1,_File);
      ppAVar1 = *(AnimationFrames ***)(pCVar6 + 4);
      if (*(AnimationFrames ***)(pCVar6 + 8) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)pCVar6,ppAVar1,&local_30);
      }
      else {
        *ppAVar1 = local_20;
        *(int *)(pCVar6 + 4) = *(int *)(pCVar6 + 4) + 4;
      }
      iVar9 = *(int *)(pCVar6 + 4);
      local_24 = local_24 + 1;
    } while (local_24 < local_14);
  }
  debugPrint("SAVEHANDLER","...%d components loaded from cargo",iVar9 - *(int *)local_c >> 2);
  local_c = (CargoHold *)0x0;
  iVar9 = 0;
  do {
    fread(&local_5,1,1,_File);
    if (local_5 != '\0') {
      local_c = (CargoHold *)((int)local_c + 1);
      (local_10)->addPod(iVar9);
      iVar8 = 1;
      do {
        fread(&local_6,1,1,local_18);
        if (local_6 != '\0') {
          if ((iVar9 < 0) ||
             (((0 < *(int *)(local_10 + 8) && (*(int *)(local_10 + 8) <= iVar9)) ||
              (*(int *)pCVar7 == 0)))) {
            (local_10)->addPod(iVar9);
          }
          if ((iVar8 != 0) && (iVar8 - 1U < 3)) {
            *(undefined1 *)(iVar8 + *(int *)pCVar7) = 1;
          }
        }
        _File = local_18;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      fread((void *)(*(int *)pCVar7 + 4),4,1,local_18);
      fread((void *)(*(int *)pCVar7 + 8),4,1,_File);
    }
    iVar9 = iVar9 + 1;
    pCVar7 = pCVar7 + 4;
  } while (iVar9 < 0xe);
  debugPrint("SAVEHANDLER","Loaded %d pods",local_c);
  return local_10;
}


// Ghidra: void __cdecl V11::loadShips(_iobuf *param_1)
void V11::loadShips(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff24[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff0c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff20[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipModule SVar1;
  MetaGameAction **ppMVar2;
  GameData *pGVar3;
  _iobuf *p_Var4;
  Ship *pSVar5;
  ConsoleDamage *pCVar6;
  ghidra::vector *pvVar7;
  ShipModule *pSVar8;
  SaveHandler *pSVar9;
  int iVar10;
  ghidra::lib::_Tree_node_t *p_Var11;
  WeaponClass *pWVar12;
  FILE *in_ECX;
  int *piVar13;
  ghidra::lib::_Tree_comp_alloc_t *this;
  void *pvVar14;
  nothrow_t *pnVar15;
  int iVar16;
  Ship *this_00;
  code *pcVar17;
  std::string *pbVar18;
  int iVar19;
  undefined4 *puVar20;
  bool bVar21;
  std::string abStack_124 [16];
  undefined4 uStack_114;
  ghidra::vector avStack_10c [4];
  undefined4 uStack_108;
  uint uVar22;
  _iobuf *p_Var23;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 local_a0 [4];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  FILE *local_8c;
  char local_86;
  Ship local_85;
  ghidra::vector *local_84;
  Ship *local_80;
  ghidra::vector *local_7c;
  ghidra::vector *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  ghidra::vector *local_2c [4];
  int local_1c;
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bf4d3;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var4 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_8c = in_ECX;
  local_14 = p_Var4;
  SaveHandler::readLengthString(p_Var4);
  // [seh] local_8 = 0;
  SaveHandler::readLengthString(p_Var4);
  // [seh] local_8._0_1_ = 1;
  SaveHandler::readLengthString(p_Var4);
  pcVar17 = fread_exref;
  // [seh] local_8._0_1_ = 2;
  fread(&local_b4,8,1,in_ECX);
  uVar22 = 0;
  fread(&local_ac,8,1,in_ECX);
  fread(local_a0,4,1,in_ECX);
  uStack_108 = 0x4c8731;
  fread(&local_85,1,1,in_ECX);
  local_78 = (ghidra::vector *)&stack0xffffff24;
  p_Var23 = (_iobuf *)(uVar22 & 0xffffff00);
  ghidra::str::assign((std::string *)&stack0xffffff24,"",0);
  // [seh] local_8._0_1_ = 3;
  local_7c = (ghidra::vector *)&stack0xffffff0c;
  ghidra::str::ctor((std::string *)&stack0xffffff0c,(std::string *)local_74)
  ;
  local_84 = avStack_10c;
  // [seh] local_8._0_1_ = 4;
  uStack_114 = 0x4c8780;
  ghidra::str::ctor((std::string *)avStack_10c,(std::string *)local_44);
  // [seh] local_8._0_1_ = 5;
  ghidra::str::ctor(abStack_124,(std::string *)local_5c);
  // [seh] local_8._0_1_ = 2;
  pSVar5 = GameLogic::generateShip();
  pGVar3 = g_gameData;
  local_80 = pSVar5;
  if (pSVar5 == (Ship *)0x0) {
    debugPrint("SAVEHANDLER","ERROR - Invalid ship type in save game, \'%s\'");
    goto LAB_004c8e04;
  }
  *(undefined8 *)(pSVar5 + 0x28) = local_b4;
  *(Ship **)(pGVar3 + 0xd0) = pSVar5;
  *(undefined8 *)(pSVar5 + 0x30) = local_ac;
  pSVar5[0x15c] = local_85;
  (pSVar5)->setSector(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x20));
  for (puVar20 = *(undefined4 **)(g_gameData + 0x3c); puVar20 != *(undefined4 **)(g_gameData + 0x40)
      ; puVar20 = puVar20 + 1) {
    piVar13 = (int *)*puVar20;
    in_ECX = local_8c;
    if (*piVar13 == *(int *)(pSVar5 + 0x20)) goto LAB_004c8839;
  }
  piVar13 = (int *)0x0;
LAB_004c8839:
  *(int **)(g_gameData + 0xd8) = piVar13;
  if (Singleton<Pather>::instance == (Pather *)0x0) {
    local_78 = operator_new(0x98);
    // [seh] local_8._0_1_ = 6;
    Singleton<Pather>::instance = (Pather *)new ((void *)((Pather *)local_78)) Pather();
    // [seh] local_8._0_1_ = 2;
  }
  (Singleton<Pather>::instance)->resetSector();
  fread(&local_90,4,1,in_ECX);
  if (0 < local_90) {
    local_84 = (ghidra::vector *)(pSVar5 + 0x14c);
    iVar16 = 0;
    do {
      fread(&local_7c,4,1,in_ECX);
      p_Var23 = (_iobuf *)&DAT_00000001;
      fread(&local_78,4,1,in_ECX);
      piVar13 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)local_84,(int *)&local_7c);
      iVar16 = iVar16 + 1;
      *piVar13 = (int)local_78;
      pSVar5 = local_80;
    } while (iVar16 < local_90);
  }
  fread(&local_94,4,1,in_ECX);
  (pSVar5)->repairConsoleDamage();
  local_7c = (ghidra::vector *)0x0;
  this_00 = pSVar5;
  if (0 < local_94) {
    local_78 = (ghidra::vector *)(pSVar5 + 0x228);
    do {
      pCVar6 = operator_new(0x28);
      // [seh] local_8._0_1_ = 7;
      local_78 = (ghidra::vector *)pCVar6;
      SaveHandler::readLengthString(p_Var23);
      pvVar7 = (ghidra::vector *)new ((void *)(pCVar6)) ConsoleDamage();
      // [seh] local_8._0_1_ = 2;
      local_84 = pvVar7;
      fread(pvVar7 + 0x20,4,1,in_ECX);
      p_Var23 = (_iobuf *)&DAT_00000001;
      fread(pvVar7 + 0x24,4,1,in_ECX);
      fread(pvVar7 + 0x18,4,1,in_ECX);
      uStack_108 = 0x4c8978;
      fread(pvVar7 + 0x1c,4,1,in_ECX);
      ppMVar2 = *(MetaGameAction ***)(pSVar5 + 0x22c);
      if (*(MetaGameAction ***)(pSVar5 + 0x230) == ppMVar2) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(pSVar5 + 0x228),ppMVar2,(MetaGameAction **)&local_84);
      }
      else {
        *ppMVar2 = (MetaGameAction *)pvVar7;
        *(int *)(pSVar5 + 0x22c) = *(int *)(pSVar5 + 0x22c) + 4;
      }
      debugPrint("SAVEHANDLER","  Console damage loaded for: %s");
      local_7c = local_7c + 1;
      this_00 = local_80;
      pcVar17 = fread_exref;
    } while ((int)local_7c < local_94);
  }
  (*pcVar17)();
  local_7c = (ghidra::vector *)0x0;
  if (0 < local_98) {
    do {
      pSVar8 = V12::readShipModule(p_Var4);
      SVar1 = pSVar8[99];
      (*(SystemManager **)(local_80 + 0x40))->addModule(pSVar8, *(int *)(pSVar8 + 0x10));
      local_7c = local_7c + 1;
      pSVar8[99] = SVar1;
      this_00 = local_80;
    } while ((int)local_7c < local_98);
  }
  if (*(int *)(*(int *)(this_00 + 0x24) + 0x118) == 2) {
    *(undefined1 *)(*(int *)(this_00 + 0x40) + 0x34) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(this_00 + 0x40) + 0x34) = 1;
  }
  local_78 = (ghidra::vector *)GameData::getShipWithinDistance();
  if (local_78 == (ghidra::vector *)0x0) {
    (**(code **)(**(int **)(this_00 + 0x178) + 4))();
    *(undefined4 *)(this_00 + 0x178) = 0;
    *(undefined4 *)(this_00 + 0xf8) = 0;
    *(undefined4 *)(this_00 + 0xd4) = 0;
    *(undefined4 *)(this_00 + 0x2c0) = 0;
    *(undefined4 *)(this_00 + 0x2c4) = 0;
  }
  else {
    (this_00)->setDocked((Ship *)local_78, true, true);
    iVar16 = *(int *)(this_00 + 0x178);
    if (iVar16 != 0) {
      pbVar18 = (std::string *)(iVar16 + 8);
      pSVar9 = ghidra::any_singleton();
      if ((std::string *)(pSVar9 + 0x14) != pbVar18) {
        if (0xf < *(uint *)(iVar16 + 0x1c)) {
          pbVar18 = *(std::string **)pbVar18;
        }
        ghidra::str::assign
                  ((std::string *)(pSVar9 + 0x14),(char *)pbVar18,*(uint *)(iVar16 + 0x18));
      }
      strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 8;
      local_84 = (ghidra::vector *)local_2c;
      if (0xf < local_18) {
        local_84 = local_2c[0];
      }
      pvVar7 = (ghidra::vector *)local_2c;
      if (0xf < local_18) {
        pvVar7 = local_2c[0];
      }
      iVar19 = 0;
      iVar16 = (int)(local_84 + local_1c) - (int)pvVar7;
      if (local_84 + local_1c < pvVar7) {
        iVar16 = 0;
      }
      local_7c = pvVar7;
      if (iVar16 != 0) {
        do {
          iVar10 = tolower((int)(char)pvVar7[iVar19]);
          local_84[iVar19] = SUB41(iVar10,0);
          iVar19 = iVar19 + 1;
          this_00 = local_80;
          in_ECX = local_8c;
        } while (iVar19 != iVar16);
      }
      local_8c = (FILE *)&stack0xffffff20;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff20,(std::string *)local_2c);
      // [seh] local_8._0_1_ = 9;
      if (ghidra::Singleton<void>::instance == (FlagManager *)0x0) {
        local_78 = operator_new(0x30);
        *(undefined4 *)local_78 = 0;
        *(undefined4 *)(local_78 + 4) = 0;
        *(undefined4 *)(local_78 + 8) = 0;
        pvVar7 = local_78 + 0xc;
        // [seh] local_8._0_1_ = 0xb;
        *(undefined4 *)pvVar7 = 0;
        *(undefined4 *)(local_78 + 0x10) = 0;
        local_7c = pvVar7;
        p_Var11 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this);
        *(ghidra::lib::_Tree_node_t **)pvVar7 = p_Var11;
        ghidra::Singleton<void>::instance = (FlagManager *)local_78;
        *(undefined4 *)(local_78 + 0x24) = 0;
        *(undefined4 *)(local_78 + 0x28) = 0xf;
        local_78[0x14] = (ghidra::vector)0x0;
      }
      // [seh] local_8._0_1_ = 8;
      FlagManager::setFlag();
      // [seh] local_8._0_1_ = 2;
      if (0xf < local_18) {
        pnVar15 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar7 = *(ghidra::vector **)(local_2c[0] + -4);
          pnVar15 = (nothrow_t *)(local_18 + 0x24);
          if ((ghidra::vector *)0x1f < local_2c[0] + (-4 - (int)pvVar7)) {
LAB_004c8bf7:
            // [seh] local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar15);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (ghidra::vector *)((uint)local_2c[0] & 0xffffff00);
    }
  }
  pGVar3 = g_gameData;
  *(undefined4 *)(this_00 + 0x378) = 0;
  iVar16 = *(int *)(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x40) + 0x20);
  if (iVar16 != 0) {
    puVar20 = (undefined4 *)(iVar16 + 0x3c);
    local_8c = (FILE *)0x8;
    do {
      local_78 = (ghidra::vector *)*puVar20;
      if (local_78 != (ghidra::vector *)0x0) {
        ((Weapon *)local_78)->~Weapon();
        operator_delete(local_78,(nothrow_t *)0x428);
      }
      *puVar20 = 0;
      puVar20 = puVar20 + 1;
      local_8c = (FILE *)((int)&local_8c[-1]._tmpfname + 3);
    } while (local_8c != (FILE *)0x0);
  }
  fread(&local_9c,4,1,in_ECX);
  local_80 = (Ship *)0x0;
  if (0 < local_9c) {
    do {
      fread(&local_86,1,1,in_ECX);
      if (local_86 != '\0') {
        SaveHandler::readLengthString(p_Var4);
        // [seh] local_8._0_1_ = 0xc;
        pSVar5 = local_80;
        ghidra::str::ctor
                  ((std::string *)&stack0xffffff20,(std::string *)local_2c);
        pWVar12 = GameData::getWeaponClassWithIdentifier();
        (*(Ship **)(g_gameData + 0xd0))->addWeapon(pWVar12, (int)pSVar5);
        debugPrint("SAVEHANDLER","Loaded weapon of class %s into player ship");
        // [seh] local_8._0_1_ = 2;
        if (0xf < local_18) {
          pnVar15 = (nothrow_t *)(local_18 + 1);
          pvVar7 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            pvVar7 = *(ghidra::vector **)(local_2c[0] + -4);
            pnVar15 = (nothrow_t *)(local_18 + 0x24);
            if ((ghidra::vector *)0x1f < local_2c[0] + (-4 - (int)pvVar7)) goto LAB_004c8bf7;
          }
          operator_delete(pvVar7,pnVar15);
        }
      }
      local_80 = local_80 + 1;
    } while ((int)local_80 < local_9c);
  }
  pGVar3 = g_gameData;
  *(undefined4 *)(this_00 + 100) = 1;
  this_00[0x234] = (byte)0x1;
  *(Ship **)(pGVar3 + 0xd0) = this_00;
  ShipData::currentlyBoardedShip = *(Ship **)(this_00 + 0x178);
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
LAB_004c8deb:
    ShipData::currentlyBoardedShip = this_00;
  }
  else {
    bVar21 = false;
    if (*(int *)(ShipData::currentlyBoardedShip + 0x254) != 0) {
      bVar21 = *(int *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0x158) == 1;
    }
    if (!bVar21) goto LAB_004c8deb;
  }
  pGVar3[0xd4] = *(GameData *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0xd0);
LAB_004c8e04:
  if (0xf < local_30) {
    pnVar15 = (nothrow_t *)(local_30 + 1);
    pvVar14 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_44[0] + -4);
      pnVar15 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pnVar15 = (nothrow_t *)(local_48 + 1);
    pvVar14 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_5c[0] + -4);
      pnVar15 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pnVar15 = (nothrow_t *)(local_60 + 1);
    pvVar14 = local_74[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_74[0] + -4);
      pnVar15 = (nothrow_t *)(local_60 + 0x24);
      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __cdecl V11::loadSpaceStationStates(_iobuf *param_1)
void V11::loadSpaceStationStates(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffedc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffec4[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  MetaGameAction **ppMVar3;
  AnimationFrames **ppAVar4;
  GameData *pGVar5;
  _iobuf *p_Var6;
  word *pwVar7;
  Ship *pSVar8;
  AnimationFrames *pAVar9;
  TradeItemInstance *pTVar10;
  ShipModule *pSVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  NameManager *pNVar14;
  std::string *pbVar15;
  FILE *in_ECX;
  uint uVar16;
  void *pvVar17;
  nothrow_t *pnVar18;
  undefined4 *puVar19;
  uint uVar20;
  std::string abStack_158 [16];
  undefined4 uStack_148;
  ShipClass *pSStack_144;
  _iobuf *_DstBuf;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 *local_f0;
  MetaGameAction *local_ec;
  undefined4 local_e8;
  int local_e4;
  _iobuf local_e0;
  int local_dc;
  FILE *local_d8;
  Ship *local_d4;
  undefined4 *local_d0;
  char local_c9;
  undefined4 *local_c8;
  AnimationFrames *local_c4;
  int local_c0;
  Contract *local_bc;
  AnimationFrames *local_b8;
  void *local_b4 [5];
  uint local_a0;
  void *local_9c [4];
  undefined4 local_8c;
  uint local_88;
  void *local_84 [4];
  undefined4 local_74;
  uint local_70;
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  std::string *local_54 [4];
  uint local_44;
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
  undefined1 local_14;
  undefined3 uStack_13;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xff;
  uStack_13 = 0xffffff;
  // [seh] puStack_18 = &DAT_005bf56c;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var6 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_dc = 0;
  local_d8 = in_ECX;
  local_24 = p_Var6;
  fread(&local_dc,4,1,in_ECX);
  local_e4 = 0;
  if (0 < local_dc) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      uStack_13 = 0;
      pwVar7 = (word *)SaveHandler::readLengthString(p_Var6);
      if ((word *)&local_3c != pwVar7) {
        // [mislabelled-dtor] word::~word((word *)&local_3c);
        local_3c = *(void **)pwVar7;
        uStack_38 = *(undefined4 *)(pwVar7 + 4);
        uStack_34 = *(undefined4 *)(pwVar7 + 8);
        uStack_30 = *(undefined4 *)(pwVar7 + 0xc);
        local_2c = *(undefined4 *)(pwVar7 + 0x10);
        uStack_28 = *(uint *)(pwVar7 + 0x14);
        *(undefined4 *)(pwVar7 + 0x10) = 0;
        *(undefined4 *)(pwVar7 + 0x14) = 0xf;
        *pwVar7 = (word)0x0;
      }
      if (0xf < local_a0) {
        pnVar18 = (nothrow_t *)(local_a0 + 1);
        pvVar17 = local_b4[0];
        if ((nothrow_t *)0xfff < pnVar18) {
          pvVar17 = *(void **)((int)local_b4[0] + -4);
          pnVar18 = (nothrow_t *)(local_a0 + 0x24);
          if (0x1f < (uint)((int)local_b4[0] + (-4 - (int)pvVar17))) goto LAB_004ca070;
        }
        operator_delete(pvVar17,pnVar18);
      }
      ghidra::str::ctor
                ((std::string *)&stack0xfffffedc,(std::string *)&local_3c);
      pSVar8 = GameData::getShipWithRego();
      local_d4 = pSVar8;
      debugPrint("SAVEHANDLER","...loaded trade data for platform %s");
      if (pSVar8 == (Ship *)0x0) {
        debugPrint("ERROR","ERROR: No valid space station with this rego.");
        if (0xf < uStack_28) {
          pnVar18 = (nothrow_t *)(uStack_28 + 1);
          pvVar17 = local_3c;
          if ((nothrow_t *)0xfff < pnVar18) {
            pvVar17 = *(void **)((int)local_3c + -4);
            pnVar18 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar17))) {
LAB_004ca070:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar17,pnVar18);
        }
        goto LAB_004ca01a;
      }
      local_bc = *(Contract **)(pSVar8 + 0x398);
      local_b8 = (AnimationFrames *)0x0;
      local_d0 = *(undefined4 **)(local_bc + 0x94);
      pAVar9 = (AnimationFrames *)
               ((uint)((int)*(undefined4 **)(local_bc + 0x98) + (3 - (int)local_d0)) >> 2);
      if (*(undefined4 **)(local_bc + 0x98) < local_d0) {
        pAVar9 = (AnimationFrames *)0x0;
      }
      local_c4 = pAVar9;
      if (pAVar9 != (AnimationFrames *)0x0) {
        do {
          if ((Contract *)*local_d0 != (Contract *)0x0) {
            Contract::_scalar_deleting_destructor_((Contract *)*local_d0,(uint)local_d0);
          }
          local_b8 = local_b8 + 1;
          local_d0 = local_d0 + 1;
          in_ECX = local_d8;
        } while (local_b8 != pAVar9);
      }
      *(undefined4 *)(local_bc + 0x98) = *(undefined4 *)(local_bc + 0x94);
      local_c0 = 0;
      fread(&local_c0,4,1,in_ECX);
      local_b8 = (AnimationFrames *)0x0;
      if (0 < local_c0) {
        do {
          local_bc = readContract(p_Var6);
          iVar2 = *(int *)(pSVar8 + 0x398);
          ppMVar3 = *(MetaGameAction ***)(iVar2 + 0x98);
          if (*(MetaGameAction ***)(iVar2 + 0x9c) == ppMVar3) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(iVar2 + 0x94),ppMVar3,(MetaGameAction **)&local_bc);
          }
          else {
            *ppMVar3 = (MetaGameAction *)local_bc;
            *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 4;
          }
          local_b8 = (AnimationFrames *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      debugPrint("SAVEHANDLER","...loaded %d contracts for platform");
      (*(TradeLocation **)(pSVar8 + 0x398))->clearGoods(false);
      fread(&local_c0,4,1,in_ECX);
      local_b8 = (AnimationFrames *)0x0;
      if (0 < local_c0) {
        do {
          pTVar10 = readTradeItem(p_Var6);
          if (pTVar10 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            (*(TradeLocation **)(pSVar8 + 0x398))->addTradeItemInstance(pTVar10, false);
          }
          local_b8 = (AnimationFrames *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      debugPrint("SAVEHANDLER","...loaded %d trade item instances for platform");
      iVar2 = *(int *)(pSVar8 + 0x398);
      uVar16 = 0;
      if (*(int *)(iVar2 + 0x8c) - *(int *)(iVar2 + 0x88) >> 2 != 0) {
        do {
          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x88) + uVar16 * 4) + 0x10) = 0;
          iVar1 = uVar16 * 4;
          uVar16 = uVar16 + 1;
          *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x88) + iVar1) + 0x30) = 0xffffffff;
        } while (uVar16 < (uint)(*(int *)(iVar2 + 0x8c) - *(int *)(iVar2 + 0x88) >> 2));
      }
      fread(&local_c0,4,1,in_ECX);
      local_b8 = (AnimationFrames *)0x0;
      if (0 < local_c0) {
        do {
          pTVar10 = readTradeItem(p_Var6);
          if (pTVar10 == (TradeItemInstance *)0x0) {
            debugPrint("SAVEHANDLER","Invalid trade item loaded.");
          }
          else {
            (*(TradeLocation **)(pSVar8 + 0x398))->addTradeItemInstance(pTVar10, true);
          }
          local_b8 = (AnimationFrames *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      debugPrint("SAVEHANDLER","...loaded %d wire item instances for platform");
      local_d0 = *(undefined4 **)(pSVar8 + 0x398);
      local_b8 = (AnimationFrames *)0x0;
      puVar12 = *(undefined4 **)((int)local_d0 + 0x58);
      local_bc = (Contract *)
                 ((uint)((int)*(undefined4 **)((int)local_d0 + 0x5c) + (3 - (int)puVar12)) >> 2);
      if (*(undefined4 **)((int)local_d0 + 0x5c) < puVar12) {
        local_bc = (Contract *)(AnimationFrames *)0x0;
      }
      local_c8 = puVar12;
      if (local_bc != (Contract *)0x0) {
        pAVar9 = (AnimationFrames *)0x0;
        do {
          operator_delete((void *)*puVar12,(nothrow_t *)0xc);
          pAVar9 = pAVar9 + 1;
          puVar12 = puVar12 + 1;
          pSVar8 = local_d4;
          in_ECX = local_d8;
        } while (pAVar9 != (AnimationFrames *)local_bc);
      }
      *(undefined4 *)((int)local_d0 + 0x5c) = *(undefined4 *)((int)local_d0 + 0x58);
      fread(&local_c0,4,1,in_ECX);
      local_b8 = (AnimationFrames *)0x0;
      if (0 < local_c0) {
        do {
          fread(&local_e8,4,1,in_ECX);
          fread(&local_e0,4,1,in_ECX);
          _DstBuf = &local_e0;
          fread(_DstBuf,4,1,in_ECX);
          pSVar11 = V12::readShipModule(_DstBuf);
          pSStack_144 = (ShipClass *)0x4c99c0;
          local_bc = operator_new(0xc);
          pSVar8 = local_d4;
          *(ShipModule **)local_bc = pSVar11;
          *(undefined4 *)(local_bc + 4) = local_e8;
          *(void **)(local_bc + 8) = local_e0._Placeholder;
          iVar2 = *(int *)(local_d4 + 0x398);
          ppAVar4 = *(AnimationFrames ***)(iVar2 + 0x5c);
          if (*(AnimationFrames ***)(iVar2 + 0x60) == ppAVar4) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(iVar2 + 0x58),ppAVar4,(AnimationFrames **)&local_bc);
          }
          else {
            *ppAVar4 = (AnimationFrames *)local_bc;
            *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 4;
          }
          local_b8 = (AnimationFrames *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      debugPrint("SAVEHANDLER","...loaded %d module sale instances for platform");
      local_d0 = *(undefined4 **)(pSVar8 + 0x398);
      local_b8 = (AnimationFrames *)0x0;
      puVar12 = *(undefined4 **)((int)local_d0 + 100);
      local_bc = (Contract *)
                 ((uint)((int)*(undefined4 **)((int)local_d0 + 0x68) + (3 - (int)puVar12)) >> 2);
      if (*(undefined4 **)((int)local_d0 + 0x68) < puVar12) {
        local_bc = (Contract *)(AnimationFrames *)0x0;
      }
      local_c8 = puVar12;
      if (local_bc != (Contract *)0x0) {
        pAVar9 = (AnimationFrames *)0x0;
        do {
          operator_delete((void *)*puVar12,(nothrow_t *)0x8);
          pAVar9 = pAVar9 + 1;
          puVar12 = puVar12 + 1;
          pSVar8 = local_d4;
          in_ECX = local_d8;
        } while (pAVar9 != (AnimationFrames *)local_bc);
      }
      *(undefined4 *)((int)local_d0 + 0x68) = *(undefined4 *)((int)local_d0 + 100);
      fread(&local_c0,4,1,in_ECX);
      local_b8 = (AnimationFrames *)0x0;
      if (0 < local_c0) {
        do {
          fread(&local_ec,4,1,in_ECX);
          fread(&local_f8,4,1,in_ECX);
          fread(&local_f4,4,1,in_ECX);
          pSStack_144 = (ShipClass *)0x4c9b27;
          puVar12 = operator_new(8);
          pGVar5 = g_gameData;
          local_bc = (Contract *)local_ec;
          *puVar12 = 0x42c80000;
          uVar16 = 0;
          uVar20 = *(int *)(pGVar5 + 4) - *(int *)pGVar5 >> 2;
          if (uVar20 != 0) {
            local_c8 = *(undefined4 **)pGVar5;
            puVar19 = local_c8;
            do {
              in_ECX = local_d8;
              if (*(MetaGameAction **)*puVar19 == local_ec) {
                uVar13 = local_c8[uVar16];
                goto LAB_004c9b7d;
              }
              uVar16 = uVar16 + 1;
              puVar19 = puVar19 + 1;
            } while (uVar16 < uVar20);
          }
          uVar13 = 0;
LAB_004c9b7d:
          puVar12[1] = uVar13;
          local_f0 = puVar12;
          local_bc = operator_new(8);
          pSVar8 = local_d4;
          *(undefined4 **)local_bc = puVar12;
          *(undefined4 *)(local_bc + 4) = local_f4;
          *puVar12 = local_f8;
          iVar2 = *(int *)(local_d4 + 0x398);
          ppAVar4 = *(AnimationFrames ***)(iVar2 + 0x68);
          if (*(AnimationFrames ***)(iVar2 + 0x6c) == ppAVar4) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(iVar2 + 100),ppAVar4,(AnimationFrames **)&local_bc);
          }
          else {
            *ppAVar4 = (AnimationFrames *)local_bc;
            *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 4;
          }
          local_b8 = (AnimationFrames *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      debugPrint("SAVEHANDLER","...loaded %d component sale instances for platform");
      (*(TradeLocation **)(pSVar8 + 0x398))->clearShipsForSale();
      fread(&local_c0,4,1,in_ECX);
      local_b8 = (AnimationFrames *)0x0;
      if (0 < local_c0) {
        do {
          SaveHandler::readLengthString(p_Var6);
          local_14 = 1;
          SaveHandler::readLengthString(p_Var6);
          local_14 = 2;
          SaveHandler::readLengthString(p_Var6);
          local_14 = 3;
          SaveHandler::readLengthString(p_Var6);
          local_14 = 4;
          SaveHandler::readLengthString(p_Var6);
          local_14 = 5;
          pSVar8 = operator_new(0x388);
          local_bc = (Contract *)&stack0xfffffedc;
          local_14 = 6;
          ghidra::str::ctor
                    ((std::string *)&stack0xfffffedc,(std::string *)local_84);
          local_c8 = (undefined4 *)&stack0xfffffec4;
          local_14 = 7;
          pSStack_144 = (ShipClass *)0x4c9cde;
          ghidra::str::ctor
                    ((std::string *)&stack0xfffffec4,(std::string *)local_6c);
          local_14 = 8;
          ghidra::str::ctor(abStack_158,(std::string *)local_b4);
          pSStack_144 = GameData::getShipClassWithIdentifier();
          local_14 = 6;
          uStack_148 = 0x4c9d06;
          local_c4 = (AnimationFrames *)new ((void *)(pSVar8)) Ship();
          _local_14 = CONCAT31(uStack_13,5);
          local_bc = (Contract *)local_c4;
          pNVar14 = ghidra::any_singleton();
          pbVar15 = *(std::string **)(pNVar14 + 0x88);
          if (*(std::string **)(pNVar14 + 0x8c) == pbVar15) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(pNVar14 + 0x84),(std::string *)pbVar15,
                       (std::string *)local_6c);
          }
          else {
            ghidra::str::ctor(pbVar15,(std::string *)local_6c);
            *(int *)(pNVar14 + 0x88) = *(int *)(pNVar14 + 0x88) + 0x18;
          }
          local_c8 = (undefined4 *)&stack0xfffffedc;
          ghidra::str::ctor
                    ((std::string *)&stack0xfffffedc,(std::string *)local_84);
          local_14 = 9;
          pNVar14 = ghidra::any_singleton();
          _local_14 = CONCAT31(uStack_13,5);
          (pNVar14)->addRego();
          ghidra::str::ctor
                    ((std::string *)&stack0xfffffedc,(std::string *)local_9c);
          ((Ship *)local_c4)->addModulesWithConfig();
          if ((std::string *)(local_c4 + 0x98) != (std::string *)local_54) {
            pbVar15 = (std::string *)local_54;
            if (0xf < local_40) {
              pbVar15 = local_54[0];
            }
            ghidra::str::assign
                      ((std::string *)(local_c4 + 0x98),(char *)pbVar15,local_44);
          }
          pSVar8 = local_d4;
          iVar2 = *(int *)(local_d4 + 0x398);
          ppAVar4 = *(AnimationFrames ***)(iVar2 + 0x40);
          if (*(AnimationFrames ***)(iVar2 + 0x44) == ppAVar4) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)(iVar2 + 0x3c),ppAVar4,(AnimationFrames **)&local_bc);
          }
          else {
            *ppAVar4 = local_c4;
            *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 4;
          }
          local_14 = 4;
          if (0xf < local_88) {
            pnVar18 = (nothrow_t *)(local_88 + 1);
            pvVar17 = local_9c[0];
            if ((nothrow_t *)0xfff < pnVar18) {
              pvVar17 = *(void **)((int)local_9c[0] + -4);
              pnVar18 = (nothrow_t *)(local_88 + 0x24);
              if (0x1f < (uint)((int)local_9c[0] + (-4 - (int)pvVar17))) goto LAB_004ca070;
            }
            operator_delete(pvVar17,pnVar18);
          }
          local_14 = 3;
          local_8c = 0;
          local_88 = 0xf;
          local_9c[0] = (void *)((uint)local_9c[0] & 0xffffff00);
          if (0xf < local_40) {
            pnVar18 = (nothrow_t *)(local_40 + 1);
            pbVar15 = local_54[0];
            if ((nothrow_t *)0xfff < pnVar18) {
              pbVar15 = *(std::string **)(local_54[0] + -4);
              pnVar18 = (nothrow_t *)(local_40 + 0x24);
              if ((std::string *)0x1f < local_54[0] + (-4 - (int)pbVar15)) goto LAB_004ca070;
            }
            operator_delete(pbVar15,pnVar18);
          }
          local_14 = 2;
          local_44 = 0;
          local_40 = 0xf;
          local_54[0] = (std::string *)((uint)local_54[0] & 0xffffff00);
          if (0xf < local_70) {
            pnVar18 = (nothrow_t *)(local_70 + 1);
            pvVar17 = local_84[0];
            if ((nothrow_t *)0xfff < pnVar18) {
              pvVar17 = *(void **)((int)local_84[0] + -4);
              pnVar18 = (nothrow_t *)(local_70 + 0x24);
              if (0x1f < (uint)((int)local_84[0] + (-4 - (int)pvVar17))) goto LAB_004ca070;
            }
            operator_delete(pvVar17,pnVar18);
          }
          local_14 = 1;
          local_74 = 0;
          local_70 = 0xf;
          local_84[0] = (void *)((uint)local_84[0] & 0xffffff00);
          if (0xf < local_58) {
            pnVar18 = (nothrow_t *)(local_58 + 1);
            pvVar17 = local_6c[0];
            if ((nothrow_t *)0xfff < pnVar18) {
              pvVar17 = *(void **)((int)local_6c[0] + -4);
              pnVar18 = (nothrow_t *)(local_58 + 0x24);
              if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar17))) goto LAB_004ca070;
            }
            operator_delete(pvVar17,pnVar18);
          }
          local_14 = 0;
          local_5c = 0;
          local_58 = 0xf;
          local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
          if (0xf < local_a0) {
            pnVar18 = (nothrow_t *)(local_a0 + 1);
            pvVar17 = local_b4[0];
            if ((nothrow_t *)0xfff < pnVar18) {
              pvVar17 = *(void **)((int)local_b4[0] + -4);
              pnVar18 = (nothrow_t *)(local_a0 + 0x24);
              if (0x1f < (uint)((int)local_b4[0] + (-4 - (int)pvVar17))) goto LAB_004ca070;
            }
            operator_delete(pvVar17,pnVar18);
          }
          local_b8 = (AnimationFrames *)((int)local_b8 + 1);
        } while ((int)local_b8 < local_c0);
      }
      debugPrint("SAVEHANDLER","...loaded %d ships for sale for platform");
      fread(&local_c9,1,1,in_ECX);
      if (local_c9 != '\0') {
        SpaceStation::requestUndockingClearance
                  ((SpaceStation *)pSVar8,*(Ship **)(g_gameData + 0xd0),true);
      }
      local_14 = 0xff;
      uStack_13 = 0xffffff;
      if (0xf < uStack_28) {
        pnVar18 = (nothrow_t *)(uStack_28 + 1);
        pvVar17 = local_3c;
        if ((nothrow_t *)0xfff < pnVar18) {
          pvVar17 = *(void **)((int)local_3c + -4);
          pnVar18 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar17))) goto LAB_004ca070;
        }
        operator_delete(pvVar17,pnVar18);
      }
      local_e4 = local_e4 + 1;
    } while (local_e4 < local_dc);
  }
  debugPrint("SAVEHANDLER","...loaded %d space station trade data sets");
LAB_004ca01a:
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}
