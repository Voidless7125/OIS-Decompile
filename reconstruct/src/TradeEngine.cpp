// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall TradeEngine::TradeEngine(TradeEngine *this)
TradeEngine::TradeEngine()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Shop *pSVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  Shop *unaff_EDI;
  int iVar4;
  allocator<Shop> local_58 [4];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  void *local_30;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  Shop *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bb34f;
  // [seh] local_10 = ExceptionList;
  // [cookie] pSVar1 = (Shop *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  // [seh] local_8 = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x20) = 0xf;
  ((char *)this)[0xc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0xf;
  ((char *)this)[0x24] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x4c) = 0;
  *(undefined4 *)((char *)this + 0x50) = 0xf;
  ((char *)this)[0x3c] = (byte)0x0;
  *(undefined4 *)((char *)this + 100) = 0;
  *(undefined4 *)((char *)this + 0x68) = 0xf;
  ((char *)this)[0x54] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x7c) = 0;
  *(undefined4 *)((char *)this + 0x80) = 0xf;
  ((char *)this)[0x6c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x94) = 0;
  *(undefined4 *)((char *)this + 0x98) = 0xf;
  ((char *)this)[0x84] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xac) = 0;
  *(undefined4 *)((char *)this + 0xb0) = 0xf;
  ((char *)this)[0x9c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xc4) = 0;
  *(undefined4 *)((char *)this + 200) = 0xf;
  ((char *)this)[0xb4] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xcc) = 0;
  *(undefined4 *)((char *)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xd4) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xe0) = 1;
  *(undefined4 *)((char *)this + 0xe4) = 0xffffffff;
  *(undefined2 *)((char *)this + 0xe8) = 0;
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xf0) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xf4) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xf8) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xfc) = 0xffffffff;
  ((char *)this)[0x100] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x104) = 0xffffffff;
  *(undefined2 *)((char *)this + 0x108) = 0;
  *(undefined4 *)((char *)this + 0x10c) = 0;
  *(undefined4 *)((char *)this + 0x110) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x114) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x118) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x11c) = 0;
  *(undefined4 *)((char *)this + 0x120) = 0;
  *(undefined4 *)((char *)this + 0x124) = 0;
  ((char *)this)[0x128] = (byte)0x0;
  iVar4 = 0;
  local_14 = pSVar1;
  do {
    local_54 = 0;
    uStack_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    uStack_48 = 0xffffffff;
    local_58[0] = (allocator<Shop>)0x0;
    local_44 = 0xffffffff;
    uStack_40 = 0xffffffff;
    uStack_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
    local_20 = 0;
    local_1c = 0xf;
    local_30 = (void *)((uint)local_30 & 0xffffff00);
    local_18 = 0;
    // [seh] local_8 = CONCAT31(local_8._1_3_,10);
    if (*(Shop **)((char *)this + 0x124) == *(Shop **)((char *)this + 0x120)) {
      std::vector<>::_Emplace_reallocate<Shop>
                ((ghidra::vector *)((char *)this + 0x11c),*(Shop **)((char *)this + 0x120),(Shop *)local_58);
    }
    else {
      std::_Default_allocator_traits<>::construct<Shop,Shop>(local_58,pSVar1,unaff_EDI);
      *(int *)((char *)this + 0x120) = *(int *)((char *)this + 0x120) + 0x44;
    }
    // [seh] local_8 = CONCAT31(local_8._1_3_,9);
    if (0xf < local_1c) {
      pnVar3 = (nothrow_t *)(local_1c + 1);
      pvVar2 = local_30;
      if ((nothrow_t *)0xfff < pnVar3) {
        pvVar2 = *(void **)((int)local_30 + -4);
        pnVar3 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30 + (-4 - (int)pvVar2))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar2,pnVar3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: TradeLocation * __thiscall TradeEngine::getTradeLocation(TradeEngine *this,char param_2,char *param_3)
TradeLocation * TradeEngine::getTradeLocation(char param_2, char * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  TradeEngine *this_00;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  char *pcVar7;
  std::string *pbVar8;
  uint unaff_EDI;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  void *local_38 [5];
  uint local_24;
  TradeEngine *local_20;
  std::string *local_1c;
  std::string *local_18 [2];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  pcVar7 = param_3;
  // [seh] puStack_c = &DAT_005bb3a2;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  pbVar8 = (std::string *)0x0;
  local_1c = *(std::string **)this;
  local_18[0] = (std::string *)(*(int *)((char *)this + 4) - (int)local_1c >> 2);
  local_20 = this;
  if (local_18[0] != (std::string *)0x0) {
    do {
      pcVar4 = (char *)&param_3;
      if (0xf < in_stack_0000001c) {
        pcVar4 = pcVar7;
      }
      bVar2 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000018,pcVar3,unaff_EDI);
      if (bVar2) {
        pbVar8 = *(std::string **)(local_1c + (int)pbVar8 * 4);
        goto LAB_00486650;
      }
      pbVar8 = pbVar8 + 1;
    } while (pbVar8 < local_18[0]);
  }
  this_00 = local_20;
  if (param_2 == '\0') {
    pbVar8 = (std::string *)0x0;
  }
  else {
    pbVar8 = operator_new(0xac);
    // [seh] local_8._0_1_ = 1;
    local_1c = pbVar8;
    ghidra::str::ctor((std::string *)local_38,(std::string *)&param_3);
    // [seh] local_8._0_1_ = 2;
    ghidra::str::ctor(pbVar8,(std::string *)local_38);
    *(undefined4 *)(pbVar8 + 0x28) = 0;
    *(undefined4 *)(pbVar8 + 0x2c) = 0xf;
    pbVar8[0x18] = (std::string)0x0;
    *(undefined4 *)(pbVar8 + 0x30) = 0;
    *(undefined4 *)(pbVar8 + 0x34) = 0;
    *(undefined4 *)(pbVar8 + 0x38) = 0;
    *(undefined4 *)(pbVar8 + 0x3c) = 0;
    *(undefined4 *)(pbVar8 + 0x40) = 0;
    *(undefined4 *)(pbVar8 + 0x44) = 0;
    *(undefined4 *)(pbVar8 + 0x48) = 0x3f19999a;
    *(undefined4 *)(pbVar8 + 0x4c) = 0;
    *(undefined4 *)(pbVar8 + 0x50) = 0;
    *(undefined4 *)(pbVar8 + 0x54) = 0;
    *(undefined4 *)(pbVar8 + 0x58) = 0;
    *(undefined4 *)(pbVar8 + 0x5c) = 0;
    *(undefined4 *)(pbVar8 + 0x60) = 0;
    *(undefined4 *)(pbVar8 + 100) = 0;
    *(undefined4 *)(pbVar8 + 0x68) = 0;
    *(undefined4 *)(pbVar8 + 0x6c) = 0;
    *(undefined4 *)(pbVar8 + 0x70) = 0;
    *(undefined4 *)(pbVar8 + 0x74) = 0;
    *(undefined4 *)(pbVar8 + 0x78) = 0;
    *(undefined4 *)(pbVar8 + 0x7c) = 0;
    *(undefined4 *)(pbVar8 + 0x80) = 0;
    *(undefined4 *)(pbVar8 + 0x84) = 0;
    *(undefined4 *)(pbVar8 + 0x88) = 0;
    *(undefined4 *)(pbVar8 + 0x8c) = 0;
    *(undefined4 *)(pbVar8 + 0x90) = 0;
    *(undefined4 *)(pbVar8 + 0x94) = 0;
    *(undefined4 *)(pbVar8 + 0x98) = 0;
    *(undefined4 *)(pbVar8 + 0x9c) = 0;
    *(undefined4 *)(pbVar8 + 0xa0) = 0;
    *(undefined4 *)(pbVar8 + 0xa4) = 0;
    *(undefined4 *)(pbVar8 + 0xa8) = 0;
    // [seh] local_8._0_1_ = 1;
    if (0xf < local_24) {
      pnVar6 = (nothrow_t *)(local_24 + 1);
      pvVar5 = local_38[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_38[0] + -4);
        pnVar6 = (nothrow_t *)(local_24 + 0x24);
        if (0x1f < (uint)((int)local_38[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    local_18[0] = pbVar8;
    ((TradeLocation *)pbVar8)->addRandomModules();
    ((TradeLocation *)pbVar8)->addRandomComponents();
    ppAVar1 = *(AnimationFrames ***)(this_00 + 4);
    if (*(AnimationFrames ***)(this_00 + 8) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)this_00,ppAVar1,(AnimationFrames **)local_18)
      ;
      pcVar7 = param_3;
      pbVar8 = local_18[0];
    }
    else {
      *ppAVar1 = (AnimationFrames *)pbVar8;
      *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 4;
      pcVar7 = param_3;
    }
  }
LAB_00486650:
  if (0xf < in_stack_0000001c) {
    pnVar6 = (nothrow_t *)(in_stack_0000001c + 1);
    pcVar3 = pcVar7;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar3 = *(char **)(pcVar7 + -4);
      pnVar6 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if ((char *)0x1f < pcVar7 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar6);
  }
  // [seh] ExceptionList = local_10;
  return (TradeLocation *)pbVar8;
}


// Ghidra: void __thiscall TradeEngine::repopulateCurrentContracts(TradeEngine *this)
void TradeEngine::repopulateCurrentContracts()

{
  TradeLocation *this_00;
  
  if ((*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) != 0) &&
     (this_00 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398),
     this_00 != (TradeLocation *)0x0)) {
    (this_00)->clearContracts();
    (this_00)->populateContracts();
    (this_00)->restockWithContracts();
    return;
  }
  return;
}


// Ghidra: void __thiscall TradeEngine::getShopHeader(TradeEngine *this,Shop param_1)
void TradeEngine::getShopHeader(Shop param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  std::string *pbVar5;
  char *pcVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  bool bVar9;
  int in_stack_00000008;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb3e0;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178), iVar1 != 0)) {
    bVar9 = false;
    if (*(int *)(iVar1 + 0x254) != 0) {
      bVar9 = *(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1;
    }
    if (bVar9) {
      iVar1 = *(int *)(iVar1 + 0x398);
      local_34 = 0;
      uStack_30 = 0xf;
      local_44 = local_44 & 0xffffff00;
      // [seh] local_8 = 0;
      if (in_stack_00000008 == 0) {
        piVar4 = (int *)(iVar1 + 0x18);
        if (0xf < *(uint *)(iVar1 + 0x2c)) {
          piVar4 = (int *)*piVar4;
        }
        pcVar3 = (char *)strUsingArgs((char *)local_2c,"`!%s\n`0Commodities Trading Terminal\n",
                                      piVar4,local_14);
        // [seh] local_8._0_1_ = 1;
        pcVar6 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar6 = *(char **)pcVar3;
        }
        ghidra::str::append((std::string *)&local_44,pcVar6,*(uint *)(pcVar3 + 0x10));
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar7 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            pvVar7 = *(void **)((int)local_2c[0] + -4);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
LAB_0048683e:
          operator_delete(pvVar7,pnVar8);
        }
LAB_00486848:
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      else {
        if (in_stack_00000008 == 1) {
          piVar4 = (int *)(iVar1 + 0x18);
          if (0xf < *(uint *)(iVar1 + 0x2c)) {
            piVar4 = (int *)*piVar4;
          }
          pbVar5 = (std::string *)
                   strUsingArgs((char *)local_2c,"`!%s\n`!Component Trading Terminal\n",piVar4,
                                local_14);
          // [seh] local_8._0_1_ = 2;
          ghidra::str::append((std::string *)&local_44,pbVar5);
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_18) {
            pnVar8 = (nothrow_t *)(local_18 + 1);
            pvVar7 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pvVar7 = *(void **)((int)local_2c[0] + -4);
              pnVar8 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            goto LAB_0048683e;
          }
          goto LAB_00486848;
        }
        if (in_stack_00000008 == 2) {
          ghidra::str::append
                    ((std::string *)&local_44,
                     "`8[DBG 0x0012] `7exec wirenode.com\n`@Specialised Commodity Terminal\n",0x44);
        }
      }
      puVar2 = *(undefined4 **)(g_gameData + 0x124);
      piVar4 = puVar2 + 1;
      if (0xf < (uint)puVar2[6]) {
        piVar4 = (int *)*piVar4;
      }
      pcVar3 = (char *)strUsingArgs((char *)local_2c,
                                    "`%%User: `7%s `%%Acc: `7%d\n`%%Balance: `$%dc\n",piVar4,*puVar2
                                    ,puVar2[7]);
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      pcVar6 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar6 = *(char **)pcVar3;
      }
      ghidra::str::append((std::string *)&local_44,pcVar6,*(uint *)(pcVar3 + 0x10));
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(uint *)param_1 = local_44;
      *(undefined4 *)(param_1 + 4) = uStack_40;
      *(undefined4 *)(param_1 + 8) = uStack_3c;
      *(undefined4 *)(param_1 + 0xc) = uStack_38;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
      goto LAB_0048692d;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined1 *)param_1 = 0;
  ghidra::str::assign
            ((std::string *)param_1,
             "**not docked with space station: this screen should never appear",0x40);
LAB_0048692d:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::populateCargoItems(TradeEngine *this,vector<> *param_1,bool param_2)
void TradeEngine::populateCargoItems(ghidra::vector * param_1, bool param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  ListData *pLVar2;
  allocator<ListData> *paVar3;
  undefined2 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  Color3B *this_00;
  nothrow_t *pnVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  ListData *unaff_EDI;
  uint uVar12;
  std::string local_1dc [12];
  undefined4 uStack_1d0;
  std::string local_1c0 [8];
  undefined4 uStack_1b8;
  uchar uVar13;
  Color3B local_181 [3];
  Color3B local_17e [3];
  Color3B local_17b [3];
  Color3B local_178 [3];
  Color3B local_175 [3];
  Color3B local_172 [3];
  Color3B local_16f [3];
  bool local_16c;
  undefined3 uStack_16b;
  TradeLocation *local_168;
  undefined1 *local_164;
  int local_160;
  undefined1 *local_15c;
  undefined2 local_158;
  undefined1 local_156;
  bool local_151;
  undefined2 local_150;
  undefined1 local_14e;
  ListData local_14c [96];
  ListData local_ec [96];
  ListData local_8c [96];
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  ListData *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb45a;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar2 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_151 = param_2;
  _local_16c = CONCAT31(uStack_16b,param_2);
  local_14 = pLVar2;
  if (*(int *)(g_gameData + 0xd0) == 0) {
LAB_00486ef8:
    // [seh] ExceptionList = local_10;
    // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
  local_168 = (TradeLocation *)0x0;
  if (iVar1 != 0) {
    local_168 = *(TradeLocation **)(iVar1 + 0x398);
  }
  local_164 = (undefined1 *)0x0;
  local_160 = 0xc;
LAB_004869e0:
  iVar1 = local_160;
  local_15c = *(undefined1 **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if (*(int *)((int)local_15c + local_160) != 0) {
    if (*(int *)(*(int *)((int)local_15c + local_160) + 4) != -1) {
      puVar7 = *(undefined4 **)(g_gameData + 0x84);
      uVar9 = 0;
      uVar12 = *(int *)(g_gameData + 0x88) - (int)puVar7 >> 2;
      if (uVar12 != 0) {
        do {
          piVar10 = (int *)*puVar7;
          if (*piVar10 == *(int *)(*(int *)(local_160 + (int)local_15c) + 4)) goto LAB_00486d70;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar9 < uVar12);
      }
      piVar10 = (int *)0x0;
LAB_00486d70:
      cocos2d::Color3B::Color3B((Color3B *)&local_158,'@','@','@');
      if (piVar10[0x17] == 1) {
        uVar13 = '@';
        this_00 = local_17e;
LAB_00486da6:
        puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(this_00,0x80,'@',uVar13);
        local_158 = *puVar4;
        local_156 = *(undefined1 *)(puVar4 + 1);
      }
      else if (piVar10[0x17] == 2) {
        uVar13 = 0x80;
        this_00 = local_181;
        goto LAB_00486da6;
      }
      if (local_168 != (TradeLocation *)0x0) {
        (local_168)->singleGoodCost(*piVar10, false);
      }
      local_15c = local_164;
      if (local_151 == false) {
        local_15c = *(undefined1 **)
                     (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + local_160) + 4);
      }
      ghidra::str::ctor(local_1c0,(std::string *)(piVar10 + 1));
      // [seh] local_8 = 5;
      piVar11 = piVar10 + 10;
      if (0xf < (uint)piVar10[0xf]) {
        piVar11 = (int *)*piVar11;
      }
      strUsingArgs((char *)local_1dc,"%s_Detail.png",piVar11);
      // [seh] local_8 = 0xffffffff;
      paVar3 = (allocator<ListData> *)new ((void *)(local_14c)) ListData(local_15c);
      // [seh] local_8 = 6;
      if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar3);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar3,pLVar2,unaff_EDI);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
      }
      // [seh] local_8 = 0xffffffff;
      (local_14c)->~ListData();
      goto LAB_00486ed3;
    }
    cocos2d::Color3B::Color3B((Color3B *)&local_150,'@','@','@');
    iVar5 = 1;
    local_15c = *(undefined1 **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
    do {
      if (*(char *)(iVar5 + *(int *)((int)local_15c + iVar1)) == '\0') {
        iVar5 = 1;
        goto LAB_00486b60;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_172,'@',0x80,'@');
    local_150 = *puVar4;
    local_14e = *(undefined1 *)(puVar4 + 1);
    goto LAB_00486c00;
  }
  cocos2d::Color3B::Color3B(local_16f,'\0','\0','\0');
  local_15c = local_1c0;
  local_1c0[0] = (std::string)0x0;
  ghidra::str::assign(local_1c0,"No Pod",6);
  // [seh] local_8 = 0;
  local_1dc[0] = (std::string)0x0;
  ghidra::str::assign(local_1dc,"",0);
  // [seh] local_8 = 0xffffffff;
  paVar3 = (allocator<ListData> *)new ((void *)(local_8c)) ListData(local_164);
  // [seh] local_8 = 1;
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar3);
    // [seh] local_8 = 0xffffffff;
    (local_8c)->~ListData();
    local_160 = iVar1;
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar3,pLVar2,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
    // [seh] local_8 = 0xffffffff;
    (local_8c)->~ListData();
    local_160 = iVar1;
  }
  goto LAB_00486ed3;
  while (iVar5 = iVar5 + 1, iVar5 < 3) {
LAB_00486b60:
    if (*(char *)(iVar5 + *(int *)((int)local_15c + iVar1)) != '\0') {
      if (*(char *)(*(int *)((int)local_15c + iVar1) + 1) == '\0') {
        if (*(char *)(*(int *)((int)local_15c + iVar1) + 2) != '\0') {
          puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_17b,0x80,'@',0x80);
          local_150 = *puVar4;
          local_14e = *(undefined1 *)(puVar4 + 1);
        }
      }
      else {
        puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_178,0x80,'@','@');
        local_150 = *puVar4;
        local_14e = *(undefined1 *)(puVar4 + 1);
      }
      goto LAB_00486c00;
    }
  }
  puVar4 = (undefined2 *)cocos2d::Color3B::Color3B(local_175,'@','@','@');
  local_150 = *puVar4;
  local_14e = *(undefined1 *)(puVar4 + 1);
LAB_00486c00:
  uStack_1b8 = 0x486c3d;
  CargoHold::describePod
            (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),(int)local_2c,SUB41(local_164,0));
  // [seh] local_8 = 2;
  local_15c = local_1c0;
  uStack_1d0 = 0x486c65;
  strUsingArgs((char *)local_1c0);
  // [seh] local_8._0_1_ = 3;
  local_1dc[0] = (std::string)0x0;
  ghidra::str::assign(local_1dc,"",0);
  // [seh] local_8._0_1_ = 2;
  paVar3 = (allocator<ListData> *)
           new ((void *)(local_ec)) ListData(*(undefined4 *)
                                        (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) +
                                                 iVar1) + 4));
  // [seh] local_8 = CONCAT31(local_8._1_3_,4);
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar3);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar3,pLVar2,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
  }
  (local_ec)->~ListData();
  // [seh] local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pvVar6 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar8);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_160 = iVar1;
LAB_00486ed3:
  local_164 = local_164 + 1;
  local_160 = local_160 + 4;
  if (0x43 < local_160) goto LAB_00486ef8;
  goto LAB_004869e0;
}


// Ghidra: bool __thiscall TradeEngine::checkCargoItems(TradeEngine *this,vector<> *param_1,bool param_2)
bool TradeEngine::checkCargoItems(ghidra::vector * param_1, bool param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *pvVar1;
  bool bVar2;
  undefined1 uVar3;
  std::string *pbVar4;
  Color3B *pCVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  Good *pGVar8;
  int iVar9;
  Good *pGVar10;
  char *pcVar11;
  int iVar12;
  void *pvVar13;
  nothrow_t *pnVar14;
  int iVar15;
  char *pcVar16;
  std::string *unaff_EDI;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  Color3B local_91 [3];
  Color3B local_8e [3];
  Color3B local_8b [3];
  Color3B local_88 [3];
  Color3B local_85 [3];
  Color3B local_82 [3];
  Color3B local_7f [3];
  TradeLocation *local_7c;
  int local_78;
  int local_74;
  ghidra::vector *local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  GameData *local_68;
  undefined2 local_64;
  undefined1 local_62;
  char local_5d;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  std::string *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb498;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar4 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_70 = param_1;
  local_14 = pbVar4;
  if ((*(int *)(g_gameData + 0xd0) == 0) ||
     (iVar12 = *(int *)param_1, (*(int *)(param_1 + 4) - iVar12) / 0x60 != 0xe)) {
LAB_0048729b:
    // [seh] ExceptionList = local_10;
    // [cookie] uVar3 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
    return (bool)uVar3;
  }
  local_7c = (TradeLocation *)0x0;
  iVar15 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
  if (iVar15 != 0) {
    local_7c = *(TradeLocation **)(iVar15 + 0x398);
  }
  local_74 = 0;
  local_78 = 0;
  local_68 = (GameData *)0xc;
LAB_00486fc0:
  iVar15 = local_78;
  if (*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) == 0) {
    if ((((*(int *)(iVar12 + local_78) == local_74) &&
         (bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar4,(uint)unaff_EDI), bVar2)) &&
        (*(int *)(iVar12 + 0x1c + iVar15) == -1)) &&
       (bVar2 = ghidra::lib::_Traits_equal___x28_x29("No Pod",6,(char *)pbVar4,(uint)unaff_EDI), bVar2)) {
      pCVar5 = (Color3B *)cocos2d::Color3B::Color3B(local_7f,'\0','\0','\0');
      bVar2 = cocos2d::Color3B::operator!=((Color3B *)(iVar15 + 0x58 + iVar12),pCVar5);
      if ((!bVar2) && (iVar12 = *(int *)local_70, *(int *)(iVar12 + 0x50 + iVar15) == -999)) {
        bVar2 = *(char *)(iVar12 + 0x5e + iVar15) == '\0';
LAB_00487480:
        if (bVar2) goto LAB_00487486;
      }
    }
  }
  else {
    iVar12 = *(int *)(*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 4);
    if (iVar12 == -1) {
      cocos2d::Color3B::Color3B((Color3B *)&local_64,'@','@','@');
      iVar12 = 1;
      do {
        if (*(char *)(*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + iVar12)
            == '\0') {
          iVar12 = 1;
          goto LAB_004870d6;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 3);
      uVar19 = '@';
      uVar18 = 0x80;
      uVar17 = '@';
      pCVar5 = local_82;
      goto LAB_0048711e;
    }
    pGVar8 = (local_68)->getGood(iVar12);
    cocos2d::Color3B::Color3B((Color3B *)&local_6c,'@','@','@');
    if (*(int *)(pGVar8 + 0x5c) == 1) {
      uVar19 = '@';
      pCVar5 = local_8e;
LAB_004872f4:
      puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar5,0x80,'@',uVar19);
      local_6c = *puVar6;
      local_6a = *(undefined1 *)(puVar6 + 1);
    }
    else if (*(int *)(pGVar8 + 0x5c) == 2) {
      uVar19 = 0x80;
      pCVar5 = local_91;
      goto LAB_004872f4;
    }
    if (local_7c == (TradeLocation *)0x0) {
      iVar9 = -1;
    }
    else {
      iVar9 = (local_7c)->singleGoodCost(*(int *)pGVar8, false);
    }
    if (param_2) {
      iVar9 = -1;
    }
    iVar12 = local_74;
    if (*(uint *)(local_78 + *(int *)local_70) == (uint)param_2) {
      iVar12 = *(int *)(*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 4);
    }
    if (iVar12 == 0) {
      pGVar10 = pGVar8 + 0x28;
      if (0xf < *(uint *)(pGVar8 + 0x3c)) {
        pGVar10 = *(Good **)pGVar10;
      }
      pcVar11 = (char *)strUsingArgs((char *)local_44,"%s_Detail.png",pGVar10);
      pcVar16 = pcVar11;
      if (0xf < *(uint *)(pcVar11 + 0x14)) {
        pcVar16 = *(char **)pcVar11;
      }
      local_5d = ghidra::lib::_Traits_equal_t
                           (pcVar16,*(uint *)(pcVar11 + 0x10),(char *)pbVar4,(uint)unaff_EDI);
      if (0xf < local_30) {
        pnVar14 = (nothrow_t *)(local_30 + 1);
        pvVar13 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar14) {
          pvVar13 = *(void **)((int)local_44[0] + -4);
          pnVar14 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar13))) goto LAB_004874b0;
        }
        operator_delete(pvVar13,pnVar14);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (((local_5d != '\0') &&
          (iVar12 = *(int *)local_70 + local_78,
          *(int *)(iVar12 + 0x1c) ==
          *(int *)(*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 8))) &&
         ((bVar2 = std::operator!=<>(pbVar4,unaff_EDI), !bVar2 &&
          (bVar2 = cocos2d::Color3B::operator!=((Color3B *)(iVar12 + 0x58),(Color3B *)&local_6c),
          !bVar2)))) {
        iVar12 = *(int *)local_70;
        if (*(int *)(iVar12 + 0x50 + local_78) == iVar9) {
          iVar15 = local_78;
          if (param_2) {
            bVar2 = *(char *)(iVar12 + local_78 + 0x5e) == '\0';
          }
          else {
            bVar2 = (bool)*(char *)(iVar12 + local_78 + 0x5e) == iVar9 < 1;
          }
          goto LAB_00487480;
        }
      }
    }
  }
  goto LAB_0048729b;
  while (iVar12 = iVar12 + 1, iVar12 < 3) {
LAB_004870d6:
    if (*(char *)(*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + iVar12) !=
        '\0') {
      if (*(char *)(*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 1) == '\0')
      {
        if (*(char *)(*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 2) ==
            '\0') goto LAB_00487130;
        uVar19 = 0x80;
        pCVar5 = local_8b;
      }
      else {
        uVar19 = '@';
        pCVar5 = local_88;
      }
      uVar18 = '@';
      uVar17 = 0x80;
      goto LAB_0048711e;
    }
  }
  uVar19 = '@';
  uVar18 = '@';
  uVar17 = '@';
  pCVar5 = local_85;
LAB_0048711e:
  puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar5,uVar17,uVar18,uVar19);
  local_64 = *puVar6;
  local_62 = *(undefined1 *)(puVar6 + 1);
LAB_00487130:
  pvVar1 = local_70;
  iVar12 = *(int *)local_70;
  iVar9 = local_74;
  if (*(uint *)(iVar12 + iVar15) == (uint)param_2) {
    iVar9 = *(int *)(*(int *)(local_68 + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 4);
  }
  if (((iVar9 != 0) || (bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar4,(uint)unaff_EDI), !bVar2))
     || (((uint *)(iVar12 + iVar15))[7] != 0xffffffff)) goto LAB_0048729b;
  puVar7 = (undefined4 *)
           CargoHold::describePod
                     (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),(int)local_5c,
                      SUB41(local_74,0));
  // [seh] local_8 = 0;
  if (0xf < (uint)puVar7[5]) {
    puVar7 = (undefined4 *)*puVar7;
  }
  strUsingArgs((char *)local_2c,"empty %s pod",puVar7);
  local_5d = std::operator!=<>(pbVar4,unaff_EDI);
  if (0xf < local_18) {
    pnVar14 = (nothrow_t *)(local_18 + 1);
    pvVar13 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_2c[0] + -4);
      pnVar14 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) goto LAB_004874b0;
    }
    operator_delete(pvVar13,pnVar14);
  }
  // [seh] local_8 = 0xffffffff;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_48) {
    pnVar14 = (nothrow_t *)(local_48 + 1);
    pvVar13 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar14) {
      pvVar13 = *(void **)((int)local_5c[0] + -4);
      pnVar14 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar13))) {
LAB_004874b0:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar14);
  }
  if (((local_5d != '\0') ||
      (bVar2 = cocos2d::Color3B::operator!=
                         ((Color3B *)(*(int *)pvVar1 + 0x58 + iVar15),(Color3B *)&local_64), bVar2))
     || ((iVar12 = *(int *)pvVar1, *(int *)(iVar12 + 0x50 + iVar15) != -999 ||
         ((bool)*(char *)(iVar12 + 0x5e + iVar15) == param_2)))) goto LAB_0048729b;
LAB_00487486:
  local_78 = iVar15 + 0x60;
  local_68 = local_68 + 4;
  local_74 = local_74 + 1;
  if (0x43 < (int)local_68) goto LAB_0048729b;
  goto LAB_00486fc0;
}


// Ghidra: void __thiscall TradeEngine::populateCargoComponentItems(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateCargoComponentItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  ListData *pLVar5;
  undefined2 *puVar6;
  allocator<ListData> *paVar7;
  int iVar8;
  undefined4 *puVar9;
  ListData *unaff_EDI;
  uint uVar10;
  float fVar11;
  char acStack_e0 [20];
  undefined4 uStack_cc;
  std::string abStack_c4 [20];
  undefined4 uStack_b0;
  Color3B local_86 [3];
  Color3B local_83 [3];
  undefined1 *local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  ListData local_78 [96];
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb4d0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar5 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  uVar10 = 0;
  iVar2 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  iVar8 = *(int *)(iVar2 + 0x44);
  local_18 = pLVar5;
  if (*(int *)(iVar2 + 0x48) - iVar8 >> 2 != 0) {
    do {
      pfVar3 = *(float **)(uVar10 * 4 + iVar8);
      fVar4 = pfVar3[1];
      fVar1 = *pfVar3;
      if ((float)*(int *)((int)fVar4 + 0x10) <= fVar1) {
        fVar11 = 1.0;
        if (fVar1 < (float)*(int *)((int)fVar4 + 0x14)) {
          fVar11 = 1.0 - (float)*(int *)((int)fVar4 + 0x18) / 100.0;
        }
      }
      else {
        fVar11 = 0.0;
      }
      local_80 = (undefined1 *)(int)((float)*(int *)((int)fVar4 + 0x20) * 0.5 * fVar11);
      if ((int)local_80 < 1) {
        local_80 = (undefined1 *)1;
      }
      uStack_b0 = 0x48759c;
      cocos2d::Color3B::Color3B((Color3B *)&local_7c,'\0',0x80,'\0');
      pfVar3 = *(float **)(*(int *)(iVar2 + 0x44) + uVar10 * 4);
      fVar4 = pfVar3[1];
      fVar1 = *pfVar3;
      if ((float)*(int *)((int)fVar4 + 0x10) <= fVar1) {
        if (fVar1 < (float)*(int *)((int)fVar4 + 0x14)) {
          uStack_b0 = 0x4875fe;
          puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_86,0x80,0x80,'\0');
          local_7c = *puVar6;
          local_7a = *(undefined1 *)(puVar6 + 1);
        }
      }
      else {
        uStack_b0 = 0x4875c9;
        puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_83,0x80,'\0','\0');
        local_7c = *puVar6;
        local_7a = *(undefined1 *)(puVar6 + 1);
      }
      local_80 = abStack_c4;
      uStack_cc = 0x487644;
      ghidra::str::ctor
                (abStack_c4,
                 (std::string *)
                 (*(int *)(*(int *)(*(int *)(iVar2 + 0x44) + uVar10 * 4) + 4) + 0x38));
      // [seh] local_8 = 0;
      iVar8 = *(int *)(*(int *)(*(int *)(iVar2 + 0x44) + uVar10 * 4) + 4);
      puVar9 = (undefined4 *)(iVar8 + 0x68);
      if (0xf < *(uint *)(iVar8 + 0x7c)) {
        puVar9 = (undefined4 *)*puVar9;
      }
      strUsingArgs(acStack_e0,"%s.png",puVar9);
      // [seh] local_8 = 0xffffffff;
      paVar7 = (allocator<ListData> *)new ((void *)(local_78)) ListData(uVar10);
      // [seh] local_8 = 1;
      if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar7);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar7,pLVar5,unaff_EDI);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
      }
      // [seh] local_8 = 0xffffffff;
      (local_78)->~ListData();
      uVar10 = uVar10 + 1;
      iVar8 = *(int *)(iVar2 + 0x44);
    } while (uVar10 < (uint)(*(int *)(iVar2 + 0x48) - iVar8 >> 2));
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkCargoComponentItems(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkCargoComponentItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  ghidra::vector *pvVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  Color3B *this_00;
  void *pvVar11;
  nothrow_t *pnVar12;
  int iVar13;
  uint unaff_ESI;
  int iVar14;
  char *unaff_EDI;
  uint uVar15;
  uchar uVar16;
  Color3B local_42 [3];
  Color3B local_3f [3];
  int local_3c;
  ghidra::vector *local_38;
  char *local_34;
  int local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  char local_25;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  // [cookie] local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_38 = param_1;
  local_30 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  iVar13 = *(int *)(local_30 + 0x44);
  iVar14 = *(int *)(local_30 + 0x48) - iVar13 >> 2;
  if (iVar14 == (*(int *)(param_1 + 4) - *(int *)param_1) / 0x60) {
    uVar15 = 0;
    if (iVar14 != 0) {
      iVar14 = 0;
      do {
        pfVar2 = *(float **)(iVar13 + uVar15 * 4);
        local_3c = (int)((float)*(int *)((int)pfVar2[1] + 0x20) * 0.9 * (*pfVar2 / 100.0));
        if (local_3c < 1) {
          local_3c = 1;
        }
        cocos2d::Color3B::Color3B((Color3B *)&local_2c,'\0',0x80,'\0');
        pfVar2 = *(float **)(*(int *)(local_30 + 0x44) + uVar15 * 4);
        fVar3 = pfVar2[1];
        fVar1 = *pfVar2;
        if ((float)*(int *)((int)fVar3 + 0x10) <= fVar1) {
          if (fVar1 < (float)*(int *)((int)fVar3 + 0x14)) {
            uVar16 = 0x80;
            this_00 = local_42;
            goto LAB_004877f0;
          }
        }
        else {
          uVar16 = '\0';
          this_00 = local_3f;
LAB_004877f0:
          puVar8 = (undefined2 *)cocos2d::Color3B::Color3B(this_00,0x80,uVar16,'\0');
          local_2c = *puVar8;
          local_2a = *(undefined1 *)(puVar8 + 1);
        }
        pvVar5 = local_38;
        if (*(uint *)(iVar14 + *(int *)local_38) != uVar15) goto LAB_00487957;
        iVar13 = *(int *)(*(int *)(*(int *)(local_30 + 0x44) + uVar15 * 4) + 4);
        puVar9 = (undefined4 *)(iVar13 + 0x68);
        if (0xf < *(uint *)(iVar13 + 0x7c)) {
          puVar9 = (undefined4 *)*puVar9;
        }
        pcVar10 = (char *)strUsingArgs((char *)local_24,"%s.png",puVar9);
        local_34 = pcVar10;
        if (0xf < *(uint *)(pcVar10 + 0x14)) {
          local_34 = *(char **)pcVar10;
        }
        local_25 = ghidra::lib::_Traits_equal___x28_x29(local_34,*(uint *)(pcVar10 + 0x10),unaff_EDI,unaff_ESI);
        if (0xf < local_10) {
          pnVar12 = (nothrow_t *)(local_10 + 1);
          pvVar11 = local_24[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar11 = *(void **)((int)local_24[0] + -4);
            pnVar12 = (nothrow_t *)(local_10 + 0x24);
            if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar12);
        }
        if ((local_25 == '\0') || (iVar13 = *(int *)pvVar5, *(int *)(iVar13 + 0x1c + iVar14) != 1))
        goto LAB_00487957;
        iVar4 = *(int *)(*(int *)(*(int *)(local_30 + 0x44) + uVar15 * 4) + 4);
        local_34 = (char *)(iVar4 + 0x38);
        if (0xf < *(uint *)(iVar4 + 0x4c)) {
          local_34 = *(char **)local_34;
        }
        bVar6 = ghidra::lib::_Traits_equal___x28_x29(local_34,*(uint *)(iVar4 + 0x48),unaff_EDI,unaff_ESI);
        if ((((!bVar6) ||
             (bVar6 = cocos2d::Color3B::operator!=
                                ((Color3B *)(iVar13 + 0x58 + iVar14),(Color3B *)&local_2c), bVar6))
            || (*(int *)(*(int *)local_38 + 0x50 + iVar14) != local_3c)) ||
           (*(char *)(*(int *)local_38 + 0x5e + iVar14) != '\0')) goto LAB_00487957;
        uVar15 = uVar15 + 1;
        iVar14 = iVar14 + 0x60;
        iVar13 = *(int *)(local_30 + 0x44);
      } while (uVar15 < (uint)(*(int *)(local_30 + 0x48) - iVar13 >> 2));
    }
    // [cookie] uVar7 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
    return (bool)uVar7;
  }
LAB_00487957:
  // [cookie] uVar7 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return (bool)uVar7;
}


// Ghidra: void __thiscall TradeEngine::populateShopItems(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateShopItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Good **ppGVar1;
  ListData *pLVar2;
  int iVar3;
  TradeLocation *pTVar4;
  allocator<ListData> *paVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined1 extraout_CL;
  undefined1 uVar8;
  Good *pGVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  TradeLocation *pTVar13;
  ListData *unaff_EDI;
  uint uVar14;
  GameData *pGVar15;
  bool bVar16;
  char acStack_150 [16];
  undefined4 uStack_140;
  std::string local_134 [4];
  undefined4 uStack_130;
  undefined4 uStack_128;
  uchar uVar17;
  Color3B local_fb [3];
  TradeLocation *local_f8;
  char *local_f4;
  Good *local_f0;
  Good *local_ec;
  uint local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined1 local_d9;
  ListData local_d8 [96];
  ListData local_78 [96];
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb529;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar2 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_18 = pLVar2;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar3 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178), iVar3 != 0)) {
    bVar16 = false;
    if (*(int *)(iVar3 + 0x254) != 0) {
      bVar16 = *(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 1;
    }
    if (bVar16) {
      local_f4 = *(char **)((char *)this + 0x11c);
      pTVar13 = *(TradeLocation **)(iVar3 + 0x398);
      iVar3 = *(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2;
      pGVar15 = g_gameData;
      local_f8 = pTVar13;
      if ((iVar3 != 0) && (local_e8 = 0, iVar3 != 0)) {
        do {
          local_f0 = (Good *)(local_e8 * 4);
          local_ec = *(Good **)(local_f0 + *(int *)(pGVar15 + 0x13c));
          pTVar4 = pTVar13;
          if (0xf < *(uint *)(pTVar13 + 0x14)) {
            pTVar4 = *(TradeLocation **)pTVar13;
          }
          bVar16 = ghidra::lib::_Traits_equal_t
                             ((char *)pTVar4,*(uint *)(pTVar13 + 0x10),(char *)pLVar2,
                              (uint)unaff_EDI);
          if (bVar16) {
            uStack_130 = 0x487a7b;
            ghidra::str::ctor
                      ((std::string *)&uStack_128,*(std::string **)(local_ec + 0x58));
            local_ec = GameData::getGoodWithShortName();
            pGVar15 = g_gameData;
            if (0 < *(int *)(*(int *)(*(int *)(local_f0 + *(int *)(g_gameData + 0x13c)) + 0x58) +
                            0x18)) {
              uStack_128 = 0x487ad3;
              cocos2d::Color3B::Color3B(local_fb,'@','@','\0');
              local_e0 = local_134;
              local_134[0] = (std::string)0x0;
              uStack_140 = 0x487b0a;
              ghidra::str::assign(local_134,"",0);
              // [seh] local_8 = 0;
              pGVar9 = local_ec + 0x28;
              if (0xf < *(uint *)(local_ec + 0x3c)) {
                pGVar9 = *(Good **)pGVar9;
              }
              strUsingArgs(acStack_150,"%s_Detail.png",pGVar9);
              // [seh] local_8 = 0xffffffff;
              paVar5 = (allocator<ListData> *)new ((void *)(local_78)) ListData(local_e8 + 1000);
              // [seh] local_8 = 1;
              if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
                std::vector<>::_Emplace_reallocate<ListData>
                          (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar5);
              }
              else {
                ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar2,unaff_EDI);
                *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
              }
              // [seh] local_8 = 0xffffffff;
              (local_78)->~ListData();
              pGVar15 = g_gameData;
            }
          }
          local_e8 = local_e8 + 1;
        } while (local_e8 < (uint)(*(int *)(pGVar15 + 0x140) - *(int *)(pGVar15 + 0x13c) >> 2));
      }
      local_e0 = *(std::string **)(pTVar13 + 0x70);
      local_e8 = 0;
      if (*(int *)(pTVar13 + 0x74) - (int)local_e0 >> 2 != 0) {
        do {
          if ((*local_f4 != '\0') || (0 < *(int *)(*(int *)(local_e0 + local_e8 * 4) + 0x10))) {
            puVar6 = *(undefined4 **)(pGVar15 + 0x84);
            uVar11 = 0;
            uVar14 = *(int *)(pGVar15 + 0x88) - (int)puVar6 >> 2;
            if (uVar14 != 0) {
              do {
                piVar12 = (int *)*puVar6;
                if (*piVar12 == *(int *)(*(int *)(local_e0 + local_e8 * 4) + 0x14))
                goto LAB_00487c40;
                uVar11 = uVar11 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar11 < uVar14);
            }
            piVar12 = (int *)0x0;
LAB_00487c40:
            cocos2d::Color3B::Color3B((Color3B *)&local_e4,'@','@','@');
            if (piVar12[0x17] == 1) {
              uVar17 = '@';
              ppGVar1 = &local_ec;
LAB_00487c64:
              puVar7 = (undefined2 *)
                       cocos2d::Color3B::Color3B((Color3B *)((int)ppGVar1 + 1),0x80,'@',uVar17);
              local_e4 = *puVar7;
              uVar8 = (undefined1)local_e4;
              local_e2 = *(undefined1 *)(puVar7 + 1);
            }
            else {
              if (piVar12[0x17] == 2) {
                uVar17 = 0x80;
                ppGVar1 = &local_f0;
                goto LAB_00487c64;
              }
              uVar8 = extraout_CL;
            }
            local_d9 = local_e2;
            local_e0._2_2_ = local_e4;
            (local_f8)->singleBaseGoodCost(*piVar12, (bool)uVar8);
            local_e0 = local_134;
            ghidra::str::ctor(local_134,(std::string *)(piVar12 + 1));
            // [seh] local_8 = 2;
            piVar10 = piVar12 + 10;
            if (0xf < (uint)piVar12[0xf]) {
              piVar10 = (int *)*piVar10;
            }
            strUsingArgs(acStack_150,"%s_Detail.png",piVar10);
            // [seh] local_8 = 0xffffffff;
            paVar5 = (allocator<ListData> *)new ((void *)(local_d8)) ListData(*piVar12);
            // [seh] local_8 = 3;
            if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
              std::vector<>::_Emplace_reallocate<ListData>
                        (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar5);
            }
            else {
              ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar2,unaff_EDI);
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
            }
            // [seh] local_8 = 0xffffffff;
            (local_d8)->~ListData();
            pTVar13 = local_f8;
            pGVar15 = g_gameData;
          }
          local_e0 = *(std::string **)(pTVar13 + 0x70);
          local_e8 = local_e8 + 1;
        } while (local_e8 < (uint)(*(int *)(pTVar13 + 0x74) - (int)local_e0 >> 2));
      }
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkShopItems(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkShopItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *pvVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  TradeLocation *pTVar5;
  Good *pGVar6;
  char *pcVar7;
  Color3B *pCVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined1 extraout_CL;
  int iVar11;
  undefined4 *puVar12;
  void *pvVar13;
  nothrow_t *pnVar14;
  uint uVar15;
  uint unaff_ESI;
  char *pcVar16;
  int *piVar17;
  GameData *pGVar18;
  char *unaff_EDI;
  int iVar19;
  uint uVar20;
  bool bVar21;
  std::string abStack_70 [8];
  undefined4 uStack_68;
  uchar uVar22;
  Color3B local_4a [3];
  Color3B local_47 [4];
  Color3B local_43 [3];
  char *local_40;
  ghidra::vector *local_3c;
  undefined2 local_38;
  undefined1 local_36;
  int local_34;
  TradeLocation *local_30;
  uint local_2c;
  bool local_25;
  void *local_24 [4];
  undefined4 local_14;
  uint local_10;
  uint local_c;
  
  // [cookie] local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar3 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178), iVar3 != 0)) {
    bVar21 = false;
    if (*(int *)(iVar3 + 0x254) != 0) {
      bVar21 = *(int *)(*(int *)(iVar3 + 0x254) + 0x158) == 1;
    }
    if (bVar21) {
      local_40 = *(char **)((char *)this + 0x11c);
      iVar19 = 0;
      iVar4 = *(int *)(g_gameData + 0x13c);
      local_30 = *(TradeLocation **)(iVar3 + 0x398);
      iVar3 = *(int *)(g_gameData + 0x140) - iVar4 >> 2;
      if ((iVar3 != 0) && (uVar15 = 0, iVar3 != 0)) {
        do {
          local_2c = *(uint *)(iVar4 + uVar15 * 4);
          pTVar5 = local_30;
          if (0xf < *(uint *)(local_30 + 0x14)) {
            pTVar5 = *(TradeLocation **)local_30;
          }
          bVar21 = ghidra::lib::_Traits_equal_t
                             ((char *)pTVar5,*(uint *)(local_30 + 0x10),unaff_EDI,unaff_ESI);
          if (bVar21) {
            ghidra::str::ctor(abStack_70,*(std::string **)(local_2c + 0x58));
            GameData::getGoodWithShortName();
            iVar4 = *(int *)(g_gameData + 0x13c);
            if (0 < *(int *)(*(int *)(*(int *)(iVar4 + uVar15 * 4) + 0x58) + 0x18)) {
              iVar19 = iVar19 + 1;
            }
          }
          else {
            iVar4 = *(int *)(g_gameData + 0x13c);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2));
      }
      piVar17 = *(int **)(local_30 + 0x70);
      for (iVar3 = *(int *)(local_30 + 0x74) - (int)piVar17 >> 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar4 = *piVar17;
        piVar17 = piVar17 + 1;
        iVar11 = iVar19 + 1;
        if (*(int *)(iVar4 + 0x10) < 1) {
          iVar11 = iVar19;
        }
        iVar19 = iVar11;
      }
      if ((*(int *)(local_3c + 4) - *(int *)local_3c) / 0x60 != iVar19) {
LAB_00488394:
        // [cookie] uVar2 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return (bool)uVar2;
      }
      iVar3 = *(int *)(g_gameData + 0x13c);
      iVar4 = *(int *)(g_gameData + 0x140) - iVar3 >> 2;
      if ((iVar4 != 0) && (local_2c = 0, iVar4 != 0)) {
        do {
          iVar4 = local_2c * 4;
          iVar3 = *(int *)(iVar4 + iVar3);
          pTVar5 = local_30;
          if (0xf < *(uint *)(local_30 + 0x14)) {
            pTVar5 = *(TradeLocation **)local_30;
          }
          local_34 = iVar4;
          bVar21 = ghidra::lib::_Traits_equal_t
                             ((char *)pTVar5,*(uint *)(local_30 + 0x10),unaff_EDI,unaff_ESI);
          if (bVar21) {
            ghidra::str::ctor(abStack_70,*(std::string **)(iVar3 + 0x58));
            pGVar6 = GameData::getGoodWithShortName();
            pvVar1 = local_3c;
            iVar3 = *(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + iVar4) + 0x58);
            if (0 < *(int *)(iVar3 + 0x18)) {
              iVar3 = *(int *)(iVar3 + 0x28);
              if (iVar3 == -1) {
                iVar3 = *(int *)(pGVar6 + 0x58);
              }
              if (**(int **)local_3c != local_2c + 1000) goto LAB_00488394;
              uStack_68 = 0x488041;
              pcVar7 = (char *)strUsingArgs((char *)local_24);
              pcVar16 = pcVar7;
              if (0xf < *(uint *)(pcVar7 + 0x14)) {
                pcVar16 = *(char **)pcVar7;
              }
              local_25 = ghidra::lib::_Traits_equal___x28_x29(pcVar16,*(uint *)(pcVar7 + 0x10),unaff_EDI,unaff_ESI);
              if (0xf < local_10) {
                pnVar14 = (nothrow_t *)(local_10 + 1);
                pvVar13 = local_24[0];
                if ((nothrow_t *)0xfff < pnVar14) {
                  pvVar13 = *(void **)((int)local_24[0] + -4);
                  pnVar14 = (nothrow_t *)(local_10 + 0x24);
                  if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar13))) goto LAB_004881e8;
                }
                operator_delete(pvVar13,pnVar14);
              }
              local_14 = 0;
              local_10 = 0xf;
              local_24[0] = (void *)((uint)local_24[0] & 0xffffff00);
              if (((local_25 == false) ||
                  (iVar4 = *(int *)pvVar1,
                  *(int *)(iVar4 + 0x1c) !=
                  *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + local_34) + 0x58) + 0x18
                          ))) || (bVar21 = ghidra::lib::_Traits_equal___x28_x29("",0,unaff_EDI,unaff_ESI), !bVar21))
              goto LAB_00488394;
              uStack_68 = 0x488116;
              pCVar8 = (Color3B *)cocos2d::Color3B::Color3B(local_47,'@','@','\0');
              bVar21 = cocos2d::Color3B::operator!=((Color3B *)(iVar4 + 0x58),pCVar8);
              if (((bVar21) || (iVar4 = *(int *)pvVar1, *(int *)(iVar4 + 0x50) != iVar3)) ||
                 (*(char *)(iVar4 + 0x5e) != (char)-(char)(iVar3 >> 0x1f))) goto LAB_00488394;
            }
          }
          iVar3 = *(int *)(g_gameData + 0x13c);
          local_2c = local_2c + 1;
        } while (local_2c < (uint)(*(int *)(g_gameData + 0x140) - iVar3 >> 2));
      }
      local_2c = 0;
      iVar3 = *(int *)(local_30 + 0x70);
      if (*(int *)(local_30 + 0x74) - iVar3 >> 2 != 0) {
        local_34 = 0;
        pTVar5 = local_30;
        pGVar18 = g_gameData;
        pcVar16 = local_40;
        do {
          if ((*pcVar16 != '\0') || (0 < *(int *)(*(int *)(iVar3 + local_2c * 4) + 0x10))) {
            uVar15 = 0;
            puVar12 = *(undefined4 **)(pGVar18 + 0x84);
            uVar20 = *(int *)(pGVar18 + 0x88) - (int)puVar12 >> 2;
            if (uVar20 != 0) {
              do {
                piVar17 = (int *)*puVar12;
                if (*piVar17 == *(int *)(*(int *)(iVar3 + local_2c * 4) + 0x14)) goto LAB_004881c8;
                uVar15 = uVar15 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar15 < uVar20);
            }
            piVar17 = (int *)0x0;
LAB_004881c8:
            uStack_68 = 0x4881d9;
            cocos2d::Color3B::Color3B((Color3B *)&local_38,'@','@','@');
            if (piVar17[0x17] == 1) {
              uVar22 = '@';
              pCVar8 = local_4a;
LAB_004881fb:
              uStack_68 = 0x488204;
              puVar9 = (undefined2 *)cocos2d::Color3B::Color3B(pCVar8,0x80,'@',uVar22);
              local_38 = *puVar9;
              uVar2 = (undefined1)local_38;
              local_36 = *(undefined1 *)(puVar9 + 1);
            }
            else {
              uVar2 = extraout_CL;
              if (piVar17[0x17] == 2) {
                uVar22 = 0x80;
                pCVar8 = local_43;
                goto LAB_004881fb;
              }
            }
            iVar3 = *piVar17;
            iVar4 = (local_30)->singleBaseGoodCost(iVar3, (bool)uVar2);
            if ((*local_40 != '\0') &&
               (*(int *)(*(int *)(*(int *)(local_30 + 0x70) + local_2c * 4) + 0x10) == 0)) {
              iVar4 = -999;
            }
            if (*(int *)(local_34 + *(int *)local_3c) != iVar3) goto LAB_00488394;
            uStack_68 = 0x48826a;
            pcVar7 = (char *)strUsingArgs((char *)local_24);
            pcVar16 = pcVar7;
            if (0xf < *(uint *)(pcVar7 + 0x14)) {
              pcVar16 = *(char **)pcVar7;
            }
            local_25 = ghidra::lib::_Traits_equal___x28_x29(pcVar16,*(uint *)(pcVar7 + 0x10),unaff_EDI,unaff_ESI);
            if (0xf < local_10) {
              pnVar14 = (nothrow_t *)(local_10 + 1);
              pvVar13 = local_24[0];
              if ((nothrow_t *)0xfff < pnVar14) {
                pvVar13 = *(void **)((int)local_24[0] + -4);
                pnVar14 = (nothrow_t *)(local_10 + 0x24);
                if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar13))) {
LAB_004881e8:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar13,pnVar14);
            }
            if ((local_25 == false) ||
               (iVar3 = local_34 + *(int *)local_3c,
               *(int *)(iVar3 + 0x1c) !=
               *(int *)(*(int *)(*(int *)(local_30 + 0x70) + local_2c * 4) + 0x10)))
            goto LAB_00488394;
            piVar10 = piVar17 + 1;
            if (0xf < (uint)piVar17[6]) {
              piVar10 = (int *)piVar17[1];
            }
            bVar21 = ghidra::lib::_Traits_equal___x28_x29((char *)piVar10,piVar17[5],unaff_EDI,unaff_ESI);
            if ((((!bVar21) ||
                 (bVar21 = cocos2d::Color3B::operator!=
                                     ((Color3B *)(iVar3 + 0x58),(Color3B *)&local_38), bVar21)) ||
                (*(int *)(local_34 + 0x50 + *(int *)local_3c) != iVar4)) ||
               (*(char *)(local_34 + 0x5e + *(int *)local_3c) != (char)-(char)(iVar4 >> 0x1f)))
            goto LAB_00488394;
            local_34 = local_34 + 0x60;
            pTVar5 = local_30;
            pGVar18 = g_gameData;
            pcVar16 = local_40;
          }
          local_2c = local_2c + 1;
          iVar3 = *(int *)(pTVar5 + 0x70);
        } while (local_2c < (uint)(*(int *)(pTVar5 + 0x74) - iVar3 >> 2));
      }
    }
  }
  // [cookie] uVar2 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: void __thiscall TradeEngine::populateWireItems(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateWireItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *pvVar1;
  Good *pGVar2;
  ListData *pLVar3;
  Good *pGVar4;
  undefined2 *puVar5;
  int *piVar6;
  allocator<ListData> *paVar7;
  uint uVar8;
  GameData *this_00;
  int iVar9;
  uint uVar10;
  int iVar11;
  ListData *unaff_EDI;
  char *pcVar12;
  bool bVar13;
  char acStack_f8 [20];
  undefined4 uStack_e4;
  std::string abStack_dc [20];
  undefined4 uStack_c8;
  Color3B local_9e [3];
  Color3B local_9b [3];
  char *local_98;
  ghidra::vector *local_94;
  Good *local_90;
  int local_8c;
  uint local_88;
  int local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_79;
  ListData local_78 [96];
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb573;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar3 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_94 = param_1;
  local_18 = pLVar3;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar11 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178), iVar11 != 0)) {
    bVar13 = false;
    if (*(int *)(iVar11 + 0x254) != 0) {
      bVar13 = *(int *)(*(int *)(iVar11 + 0x254) + 0x158) == 1;
    }
    if (bVar13) {
      iVar11 = *(int *)(iVar11 + 0x398);
      pcVar12 = (char *)(*(int *)((char *)this + 0x11c) + 0x88);
      this_00 = *(GameData **)(iVar11 + 0x8c);
      iVar9 = *(int *)(iVar11 + 0x88);
      local_88 = 0;
      local_98 = pcVar12;
      local_84 = iVar11;
      if ((int)this_00 - iVar9 >> 2 != 0) {
        do {
          if ((*pcVar12 != '\0') || (0 < *(int *)(*(int *)(iVar9 + local_88 * 4) + 0x10))) {
            local_8c = local_88 * 4;
            pGVar4 = (this_00)->getGood(*(int *)(*(int *)(local_8c + iVar9) + 0x14));
            uStack_c8 = 0x4884a9;
            local_90 = pGVar4;
            cocos2d::Color3B::Color3B((Color3B *)&local_80,'@','@','@');
            if (*(int *)(pGVar4 + 0x5c) == 1) {
              uStack_c8 = 0x4884c2;
              puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_9b,0x80,'@','@');
              local_80 = *puVar5;
              local_7e = *(undefined1 *)(puVar5 + 1);
            }
            else if (*(int *)(pGVar4 + 0x5c) == 2) {
              uStack_c8 = 0x4884ea;
              puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_9e,0x80,'@',0x80);
              local_80 = *puVar5;
              local_7e = *(undefined1 *)(puVar5 + 1);
            }
            pGVar2 = local_90;
            uVar8 = 0;
            piVar6 = *(int **)(iVar11 + 0x88);
            uVar10 = *(int *)(iVar11 + 0x8c) - (int)piVar6 >> 2;
            if (uVar10 != 0) {
              do {
                iVar11 = local_84;
                if (*(int *)(*piVar6 + 0x14) == *(int *)pGVar4) break;
                uVar8 = uVar8 + 1;
                piVar6 = piVar6 + 1;
              } while (uVar8 < uVar10);
            }
            uStack_e4 = 0x488566;
            local_79 = local_7e;
            ghidra::str::ctor(abStack_dc,(std::string *)(local_90 + 4));
            // [seh] local_8 = 0;
            pGVar4 = pGVar2 + 0x28;
            if (0xf < *(uint *)(pGVar2 + 0x3c)) {
              pGVar4 = *(Good **)pGVar4;
            }
            strUsingArgs(acStack_f8,"%s_Detail.png",pGVar4);
            // [seh] local_8 = 0xffffffff;
            paVar7 = (allocator<ListData> *)new ((void *)(local_78)) ListData(*(undefined4 *)pGVar2);
            pvVar1 = local_94;
            // [seh] local_8 = 1;
            if (*(ListData **)(local_94 + 8) == *(ListData **)(local_94 + 4)) {
              std::vector<>::_Emplace_reallocate<ListData>
                        (local_94,*(ListData **)(local_94 + 4),(ListData *)paVar7);
            }
            else {
              ghidra::lib::_Default_allocator_traits__construct(paVar7,pLVar3,unaff_EDI);
              *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x60;
            }
            // [seh] local_8 = 0xffffffff;
            (local_78)->~ListData();
            this_00 = *(GameData **)(iVar11 + 0x8c);
            pcVar12 = local_98;
          }
          iVar9 = *(int *)(iVar11 + 0x88);
          local_88 = local_88 + 1;
        } while (local_88 < (uint)((int)this_00 - iVar9 >> 2));
      }
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkWireItems(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkWireItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 uVar1;
  undefined2 *puVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  Color3B *this_00;
  void *pvVar7;
  uint uVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  int iVar11;
  uint unaff_ESI;
  char *pcVar12;
  int iVar13;
  GameData *pGVar14;
  char *unaff_EDI;
  int *piVar15;
  bool bVar16;
  uchar uVar17;
  Color3B local_46 [3];
  Color3B local_43 [3];
  char *local_40;
  int local_3c;
  int local_38;
  ghidra::vector *local_34;
  uint local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  char local_25;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  // [cookie] local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar11 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178), iVar11 != 0)) {
    bVar16 = false;
    if (*(int *)(iVar11 + 0x254) != 0) {
      bVar16 = *(int *)(*(int *)(iVar11 + 0x254) + 0x158) == 1;
    }
    if (bVar16) {
      iVar11 = *(int *)(iVar11 + 0x398);
      uVar8 = 0;
      local_40 = (char *)(*(int *)((char *)this + 0x11c) + 0x88);
      uVar5 = 0;
      iVar13 = *(int *)(iVar11 + 0x88);
      uVar10 = *(int *)(iVar11 + 0x8c) - iVar13 >> 2;
      local_30 = 0;
      if (uVar10 != 0) {
        local_25 = *local_40;
        do {
          if ((local_25 != '\0') || (0 < *(int *)(*(int *)(iVar13 + uVar5 * 4) + 0x10))) {
            uVar8 = uVar8 + 1;
          }
          uVar5 = uVar5 + 1;
          local_30 = uVar8;
        } while (uVar5 < uVar10);
      }
      local_3c = iVar11;
      if (local_30 != (*(int *)(param_1 + 4) - *(int *)param_1) / 0x60) {
LAB_004889c4:
        // [cookie] uVar1 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
        return (bool)uVar1;
      }
      local_30 = 0;
      if (uVar10 != 0) {
        local_38 = 0;
        pGVar14 = g_gameData;
        do {
          if ((*local_40 != '\0') || (0 < *(int *)(*(int *)(iVar13 + local_30 * 4) + 0x10))) {
            puVar6 = *(undefined4 **)(pGVar14 + 0x84);
            uVar5 = 0;
            uVar8 = *(int *)(pGVar14 + 0x88) - (int)puVar6 >> 2;
            if (uVar8 != 0) {
              do {
                piVar15 = (int *)*puVar6;
                if (*piVar15 == *(int *)(*(int *)(iVar13 + local_30 * 4) + 0x14)) goto LAB_004887b0;
                uVar5 = uVar5 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar5 < uVar8);
            }
            piVar15 = (int *)0x0;
LAB_004887b0:
            cocos2d::Color3B::Color3B((Color3B *)&local_2c,'@','@','@');
            if (piVar15[0x17] == 1) {
              uVar17 = '@';
              this_00 = local_43;
LAB_004887dd:
              puVar2 = (undefined2 *)cocos2d::Color3B::Color3B(this_00,0x80,'@',uVar17);
              local_2c = *puVar2;
              local_2a = *(undefined1 *)(puVar2 + 1);
            }
            else if (piVar15[0x17] == 2) {
              uVar17 = 0x80;
              this_00 = local_46;
              goto LAB_004887dd;
            }
            uVar5 = 0;
            uVar8 = *(int *)(iVar11 + 0x8c) - *(int *)(iVar11 + 0x88) >> 2;
            if (uVar8 != 0) {
              do {
                piVar4 = *(int **)(*(int *)(iVar11 + 0x88) + uVar5 * 4);
                if (piVar4[5] == *piVar15) {
                  iVar11 = piVar4[0xc];
                  if (iVar11 == -1) {
                    piVar4 = (int *)*piVar4;
                    iVar11 = piVar4[7];
                    iVar13 = iVar11 + -1;
                    if (piVar4[9] / piVar4[5] < iVar11) {
                      iVar13 = piVar4[9] / piVar4[5];
                    }
                    iVar11 = (iVar13 - iVar11 / 2) * piVar4[1] + *piVar4;
                  }
                  goto LAB_00488824;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar8);
            }
            iVar11 = -1;
LAB_00488824:
            if (*(int *)(local_38 + *(int *)local_34) != *piVar15) goto LAB_004889c4;
            piVar4 = piVar15 + 10;
            if (0xf < (uint)piVar15[0xf]) {
              piVar4 = (int *)*piVar4;
            }
            pcVar3 = (char *)strUsingArgs((char *)local_24,"%s_Detail.png",piVar4);
            pcVar12 = pcVar3;
            if (0xf < *(uint *)(pcVar3 + 0x14)) {
              pcVar12 = *(char **)pcVar3;
            }
            local_25 = ghidra::lib::_Traits_equal___x28_x29(pcVar12,*(uint *)(pcVar3 + 0x10),unaff_EDI,unaff_ESI);
            if (0xf < local_10) {
              pnVar9 = (nothrow_t *)(local_10 + 1);
              pvVar7 = local_24[0];
              if ((nothrow_t *)0xfff < pnVar9) {
                pvVar7 = *(void **)((int)local_24[0] + -4);
                pnVar9 = (nothrow_t *)(local_10 + 0x24);
                if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar7,pnVar9);
            }
            if ((local_25 == '\0') ||
               (iVar13 = local_38 + *(int *)local_34,
               *(int *)(iVar13 + 0x1c) !=
               *(int *)(*(int *)(*(int *)(local_3c + 0x88) + local_30 * 4) + 0x10)))
            goto LAB_004889c4;
            piVar4 = piVar15 + 1;
            if (0xf < (uint)piVar15[6]) {
              piVar4 = (int *)piVar15[1];
            }
            bVar16 = ghidra::lib::_Traits_equal___x28_x29((char *)piVar4,piVar15[5],unaff_EDI,unaff_ESI);
            if ((((!bVar16) ||
                 (bVar16 = cocos2d::Color3B::operator!=
                                     ((Color3B *)(iVar13 + 0x58),(Color3B *)&local_2c), bVar16)) ||
                (*(int *)(local_38 + 0x50 + *(int *)local_34) != iVar11)) ||
               (*(char *)(local_38 + 0x5e + *(int *)local_34) != (char)-(char)(iVar11 >> 0x1f)))
            goto LAB_004889c4;
            local_38 = local_38 + 0x60;
            iVar11 = local_3c;
            pGVar14 = g_gameData;
          }
          local_30 = local_30 + 1;
          iVar13 = *(int *)(iVar11 + 0x88);
        } while (local_30 < (uint)(*(int *)(iVar11 + 0x8c) - iVar13 >> 2));
      }
    }
  }
  // [cookie] uVar1 = __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// Ghidra: void __thiscall TradeEngine::populateWireCargoItems(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateWireCargoItems(ghidra::vector * param_1)

{
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *pGVar1;
  ListData *pLVar2;
  allocator<ListData> *paVar3;
  int iVar4;
  undefined2 *puVar5;
  uint *puVar6;
  int extraout_ECX;
  Color3B *this_00;
  Good *pGVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  uint uVar10;
  ListData *unaff_EDI;
  bool bVar11;
  std::string local_1fc [16];
  undefined4 local_1ec;
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uchar uVar12;
  Color3B local_1ad [3];
  Color3B local_1aa [3];
  Color3B local_1a7 [3];
  Color3B local_1a4 [3];
  Color3B local_1a1 [3];
  Color3B local_19e [3];
  Color3B local_19b [3];
  TradeLocation *local_198;
  int local_194;
  undefined1 *local_190;
  GameData *local_18c;
  uint local_188;
  undefined2 local_184;
  undefined1 local_182;
  Good *local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  ListData local_178 [96];
  ListData local_118 [96];
  ListData local_b8 [100];
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  ListData *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bb620;
  // [seh] local_1c = ExceptionList;
  // [cookie] pLVar2 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  uVar10 = 0;
  local_188 = 0;
  local_24 = pLVar2;
  // [seh] puStack_20 = &stack0xfffffffc;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar4 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178), puStack_20 = &stack0xfffffffc,
     iVar4 != 0)) {
    bVar11 = false;
    if (*(int *)(iVar4 + 0x254) != 0) {
      bVar11 = *(int *)(*(int *)(iVar4 + 0x254) + 0x158) == 1;
    }
    // [seh] puStack_20 = &stack0xfffffffc;
    if (bVar11) {
      local_198 = *(TradeLocation **)(iVar4 + 0x398);
      local_194 = 0;
      local_18c = (GameData *)0xc;
      // [seh] puStack_20 = &stack0xfffffffc;
      do {
        if (*(int *)(local_18c + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) == 0) {
          uStack_1d4 = 0x488ac0;
          cocos2d::Color3B::Color3B(local_19b,'\0','\0','\0');
          local_190 = (undefined1 *)&local_1e0;
          local_1e0 = local_1e0 & 0xffffff00;
          local_1ec = 0x488af7;
          ghidra::str::assign((std::string *)&local_1e0,"",0);
          local_14 = 0;
          local_1ec = 0;
          local_1fc[0] = (std::string)0x0;
          ghidra::str::assign(local_1fc,"",0);
          local_14 = 0xffffffff;
          paVar3 = (allocator<ListData> *)new ((void *)(local_b8)) ListData(local_194);
          local_14 = 1;
          if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
            std::vector<>::_Emplace_reallocate<ListData>
                      (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar3);
            local_14 = 0xffffffff;
            (local_b8)->~ListData();
          }
          else {
            ghidra::lib::_Default_allocator_traits__construct(paVar3,pLVar2,unaff_EDI);
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
            local_14 = 0xffffffff;
            (local_b8)->~ListData();
          }
        }
        else {
          iVar4 = *(int *)(*(int *)(local_18c + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 4);
          if (iVar4 == -1) {
            cocos2d::Color3B::Color3B((Color3B *)&local_17c,'@','@','@');
            iVar4 = 1;
            local_180 = *(Good **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
            do {
              if (*(char *)(*(int *)(local_180 + (int)local_18c) + iVar4) == '\0') {
                bVar11 = (*(CargoPod **)(local_180 + (int)local_18c))->hasNoOptions();
                if (bVar11) {
                  puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_1a1,'@','@','@');
                  local_17c = *puVar5;
                  local_17a = *(undefined1 *)(puVar5 + 1);
                }
                else if (*(char *)(extraout_ECX + 1) == '\0') {
                  if (*(char *)(extraout_ECX + 2) != '\0') {
                    puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_1a7,0x80,'@',0x80);
                    local_17c = *puVar5;
                    local_17a = *(undefined1 *)(puVar5 + 1);
                  }
                }
                else {
                  puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_1a4,0x80,'@','@');
                  local_17c = *puVar5;
                  local_17a = *(undefined1 *)(puVar5 + 1);
                }
                goto LAB_00488cb6;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 3);
            puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_19e,'@',0x80,'@');
            local_17c = *puVar5;
            local_17a = *(undefined1 *)(puVar5 + 1);
LAB_00488cb6:
            local_190 = (undefined1 *)&local_1e0;
            local_1e0 = local_1e0 & 0xffffff00;
            local_1ec = 0x488cee;
            ghidra::str::assign((std::string *)&local_1e0,"",0);
            local_14 = 2;
            local_1ec = 0;
            local_1fc[0] = (std::string)0x0;
            ghidra::str::assign(local_1fc,"",0);
            local_14 = 0xffffffff;
            paVar3 = (allocator<ListData> *)
                     new ((void *)(local_118)) ListData(*(undefined4 *)
                                         (*(int *)(local_18c +
                                                  *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 4
                                         ));
            local_14 = 3;
            if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
              std::vector<>::_Emplace_reallocate<ListData>
                        (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar3);
              local_14 = 0xffffffff;
              (local_118)->~ListData();
            }
            else {
              ghidra::lib::_Default_allocator_traits__construct(paVar3,pLVar2,unaff_EDI);
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
              local_14 = 0xffffffff;
              (local_118)->~ListData();
            }
          }
          else {
            local_180 = (local_18c)->getGood(iVar4);
            cocos2d::Color3B::Color3B((Color3B *)&local_184,'@','@','@');
            if (*(int *)(local_180 + 0x5c) == 1) {
              uVar12 = '@';
              this_00 = local_1aa;
LAB_00488de1:
              puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(this_00,0x80,'@',uVar12);
              local_184 = *puVar5;
              local_182 = *(undefined1 *)(puVar5 + 1);
            }
            else if (*(int *)(local_180 + 0x5c) == 2) {
              uVar12 = 0x80;
              this_00 = local_1ad;
              goto LAB_00488de1;
            }
            local_190 = (undefined1 *)
                        (local_198)->singleGoodCostWire(*(int *)local_180, false);
            if ((int)local_190 < 0) {
              puVar6 = (uint *)strUsingArgs((char *)local_54);
              local_188 = uVar10 | 1;
            }
            else {
              puVar6 = (uint *)ghidra::str::ctor
                                         ((std::string *)local_3c,
                                          (std::string *)(local_180 + 4));
              local_188 = uVar10 | 2;
            }
            pGVar1 = local_18c;
            local_190 = (undefined1 *)&local_1e0;
            local_1e0 = *puVar6;
            uStack_1dc = puVar6[1];
            uStack_1d8 = puVar6[2];
            uStack_1d4 = puVar6[3];
            puVar6[4] = 0;
            puVar6[5] = 0xf;
            *(undefined1 *)puVar6 = 0;
            local_14 = 6;
            pGVar7 = local_180 + 0x28;
            if (0xf < *(uint *)(local_180 + 0x3c)) {
              pGVar7 = *(Good **)pGVar7;
            }
            strUsingArgs((char *)local_1fc,"%s_Detail.png",pGVar7);
            local_14 = CONCAT31(local_14._1_3_,5);
            paVar3 = (allocator<ListData> *)
                     new ((void *)(local_178)) ListData(*(undefined4 *)
                                         (*(int *)(pGVar1 + *(int *)(*(int *)(g_gameData + 0xd0) +
                                                                    0x1f8)) + 4));
            local_14 = 7;
            if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
              std::vector<>::_Emplace_reallocate<ListData>
                        (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar3);
            }
            else {
              ghidra::lib::_Default_allocator_traits__construct(paVar3,pLVar2,unaff_EDI);
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
            }
            (local_178)->~ListData();
            local_14 = 4;
            if ((local_188 & 2) != 0) {
              local_188 = local_188 & 0xfffffffd;
              if (0xf < local_28) {
                pnVar9 = (nothrow_t *)(local_28 + 1);
                pvVar8 = local_3c[0];
                if ((nothrow_t *)0xfff < pnVar9) {
                  pvVar8 = *(void **)((int)local_3c[0] + -4);
                  pnVar9 = (nothrow_t *)(local_28 + 0x24);
                  if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar8))) goto LAB_0048904a;
                }
                operator_delete(pvVar8,pnVar9);
              }
              local_2c = 0;
              local_28 = 0xf;
              local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
            }
            local_14 = 0xffffffff;
            uVar10 = local_188;
            if ((local_188 & 1) != 0) {
              local_188 = local_188 & 0xfffffffe;
              if (0xf < local_40) {
                pnVar9 = (nothrow_t *)(local_40 + 1);
                pvVar8 = local_54[0];
                if ((nothrow_t *)0xfff < pnVar9) {
                  pvVar8 = *(void **)((int)local_54[0] + -4);
                  pnVar9 = (nothrow_t *)(local_40 + 0x24);
                  if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar8))) {
LAB_0048904a:
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar8,pnVar9);
              }
              local_44 = 0;
              local_40 = 0xf;
              local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
              uVar10 = local_188;
            }
          }
        }
        local_194 = local_194 + 1;
        local_18c = local_18c + 4;
      } while ((int)local_18c < 0x44);
    }
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkWireCargoItems(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkWireCargoItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  TradeLocation *this_00;
  int iVar1;
  undefined1 uVar2;
  std::string *pbVar3;
  Color3B *pCVar4;
  undefined2 *puVar5;
  Good *pGVar6;
  int iVar7;
  std::string *pbVar8;
  Good *pGVar9;
  CargoPod *this_01;
  int extraout_ECX;
  void *pvVar10;
  nothrow_t *pnVar11;
  code *pcVar12;
  int *piVar13;
  std::string *unaff_EDI;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_60;
  GameData *local_5c;
  undefined2 local_54;
  undefined1 local_52;
  char local_4d;
  undefined2 local_4c;
  undefined1 local_4a;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  std::string *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb658;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar3 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_18 = pbVar3;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar14 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178), iVar14 != 0)) {
    bVar15 = false;
    if (*(int *)(iVar14 + 0x254) != 0) {
      bVar15 = *(int *)(*(int *)(iVar14 + 0x254) + 0x158) == 1;
    }
    if ((bVar15) && ((*(int *)(param_1 + 4) - *(int *)param_1) / 0x60 == 0xe)) {
      this_00 = *(TradeLocation **)(iVar14 + 0x398);
      iVar14 = 0;
      local_60 = 0;
      local_5c = (GameData *)0xc;
      pcVar12 = Color3B_exref;
      do {
        if (*(int *)(local_5c + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) == 0) {
          piVar13 = (int *)(*(int *)param_1 + iVar14);
          if ((((*piVar13 != local_60) ||
               (bVar15 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar3,(uint)unaff_EDI), !bVar15)) ||
              (piVar13[7] != -1)) ||
             (bVar15 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar3,(uint)unaff_EDI), !bVar15)) break;
          pCVar4 = (Color3B *)(*pcVar12)(0,0,0);
LAB_004892b4:
          bVar15 = cocos2d::Color3B::operator!=((Color3B *)(piVar13 + 0x16),pCVar4);
          if (((bVar15) || (*(int *)(iVar14 + 0x50 + *(int *)param_1) != -999)) ||
             (*(char *)(iVar14 + 0x5e + *(int *)param_1) != '\x01')) break;
        }
        else {
          iVar7 = *(int *)(*(int *)(local_5c + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 4);
          if (iVar7 == -1) {
            (*pcVar12)(0x40,0x40,0x40);
            bVar15 = CargoPod::hasAllOptions
                               (*(CargoPod **)
                                 (local_5c + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)));
            if (bVar15) {
              uVar18 = 0x40;
              uVar17 = 0x80;
              uVar16 = 0x40;
LAB_00489223:
              puVar5 = (undefined2 *)(*pcVar12)(uVar16,uVar17,uVar18);
              local_4c = *puVar5;
              local_4a = *(undefined1 *)(puVar5 + 1);
            }
            else {
              bVar15 = (this_01)->hasNoOptions();
              if (bVar15) {
                uVar18 = 0x40;
                uVar17 = 0x40;
                uVar16 = 0x40;
                goto LAB_00489223;
              }
              if (*(char *)(extraout_ECX + 1) != '\0') {
                uVar18 = 0x40;
LAB_0048921c:
                uVar17 = 0x40;
                uVar16 = 0x80;
                goto LAB_00489223;
              }
              if (*(char *)(extraout_ECX + 2) != '\0') {
                uVar18 = 0x80;
                goto LAB_0048921c;
              }
            }
            piVar13 = (int *)(*(int *)param_1 + iVar14);
            if ((((*piVar13 ==
                   *(int *)(*(int *)(local_5c + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 4))
                 && (bVar15 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar3,(uint)unaff_EDI), bVar15)) &&
                (piVar13[7] == -1)) &&
               (bVar15 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar3,(uint)unaff_EDI), bVar15)) {
              pCVar4 = (Color3B *)&local_4c;
              goto LAB_004892b4;
            }
            break;
          }
          pGVar6 = (local_5c)->getGood(iVar7);
          (*pcVar12)(0x40,0x40,0x40);
          if (*(int *)(pGVar6 + 0x5c) == 1) {
            uVar16 = 0x40;
LAB_00489318:
            puVar5 = (undefined2 *)(*pcVar12)(0x80,0x40,uVar16);
            local_54 = *puVar5;
            local_52 = *(undefined1 *)(puVar5 + 1);
          }
          else if (*(int *)(pGVar6 + 0x5c) == 2) {
            uVar16 = 0x80;
            goto LAB_00489318;
          }
          iVar7 = (this_00)->singleGoodCostWire(*(int *)pGVar6, false);
          local_38 = 0;
          local_34 = 0xf;
          local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
          // [seh] local_8 = 0;
          pbVar8 = (std::string *)(pGVar6 + 4);
          if (iVar7 < 0) {
            if (0xf < *(uint *)(pGVar6 + 0x18)) {
              pbVar8 = *(std::string **)pbVar8;
            }
            pbVar8 = (std::string *)
                     strUsingArgs((char *)local_30,"%s - will not buy here",pbVar8);
            ghidra::lib::basic_string__operator_x3d((std::string *)local_48,pbVar8);
            if (0xf < local_1c) {
              pnVar11 = (nothrow_t *)(local_1c + 1);
              pvVar10 = local_30[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_30[0] + -4);
                pnVar11 = (nothrow_t *)(local_1c + 0x24);
                if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10))) goto LAB_00489566;
              }
              operator_delete(pvVar10,pnVar11);
            }
            local_20 = 0;
            local_1c = 0xf;
            local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          }
          else {
            ghidra::lib::basic_string__operator_x3d((std::string *)local_48,pbVar8);
          }
          if (*(int *)(iVar14 + *(int *)param_1) !=
              *(int *)(*(int *)(local_5c + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 4)) {
LAB_00489540:
            if (0xf < local_34) {
              pnVar11 = (nothrow_t *)(local_34 + 1);
              pvVar10 = local_48[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_48[0] + -4);
                pnVar11 = (nothrow_t *)(local_34 + 0x24);
                if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) {
LAB_00489566:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            break;
          }
          pGVar9 = pGVar6 + 0x28;
          if (0xf < *(uint *)(pGVar6 + 0x3c)) {
            pGVar9 = *(Good **)pGVar9;
          }
          strUsingArgs((char *)local_30,"%s_Detail.png",pGVar9);
          local_4d = std::operator!=<>(pbVar3,unaff_EDI);
          if (0xf < local_1c) {
            pnVar11 = (nothrow_t *)(local_1c + 1);
            pvVar10 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar10 = *(void **)((int)local_30[0] + -4);
              pnVar11 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10))) goto LAB_00489566;
            }
            operator_delete(pvVar10,pnVar11);
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          if ((((local_4d != '\0') ||
               (iVar1 = *(int *)param_1,
               *(int *)(iVar1 + 0x1c + iVar14) !=
               *(int *)(*(int *)(local_5c + *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8)) + 8))) ||
              ((bVar15 = std::operator!=<>(pbVar3,unaff_EDI), bVar15 ||
               ((bVar15 = cocos2d::Color3B::operator!=
                                    ((Color3B *)(iVar1 + 0x58 + iVar14),(Color3B *)&local_54),
                bVar15 || (*(int *)(iVar14 + 0x50 + *(int *)param_1) != iVar7)))))) ||
             ((bool)*(char *)(iVar14 + *(int *)param_1 + 0x5e) != iVar7 < 1)) goto LAB_00489540;
          // [seh] local_8 = 0xffffffff;
          pcVar12 = Color3B_exref;
          if (0xf < local_34) {
            pnVar11 = (nothrow_t *)(local_34 + 1);
            pvVar10 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar10 = *(void **)((int)local_48[0] + -4);
              pnVar11 = (nothrow_t *)(local_34 + 0x24);
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) goto LAB_00489566;
            }
            operator_delete(pvVar10,pnVar11);
            pcVar12 = Color3B_exref;
          }
        }
        iVar14 = iVar14 + 0x60;
        local_5c = local_5c + 4;
        local_60 = local_60 + 1;
      } while ((int)local_5c < 0x44);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: void __thiscall TradeEngine::populateShopComponentItems(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateShopComponentItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *pvVar1;
  undefined1 *puVar2;
  bool bVar3;
  ListData *pLVar4;
  word *pwVar5;
  allocator<ListData> *paVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  int iVar9;
  int iVar10;
  ListData *unaff_EDI;
  uint uVar11;
  std::string abStack_124 [20];
  undefined4 uStack_110;
  TradeEngine aTStack_108 [12];
  undefined4 uStack_fc;
  Color3B local_cf [3];
  ghidra::vector *local_cc;
  TradeEngine *local_c8;
  TradeEngine *local_c4;
  int local_c0;
  int local_bc;
  ListData local_b8 [100];
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  ListData *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bb69e;
  // [seh] local_1c = ExceptionList;
  // [cookie] pLVar4 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  uVar11 = 0;
  iVar9 = *(int *)((char *)this + 0x11c);
  local_cc = param_1;
  local_bc = *(int *)(ShipData::currentlyBoardedShip + 0x398);
  iVar10 = *(int *)(local_bc + 100);
  local_c8 = this;
  local_c0 = iVar9;
  local_24 = pLVar4;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(local_bc + 0x68) - iVar10 >> 2 != 0) {
    do {
      if ((*(int *)(iVar9 + 0x54) == -1) ||
         (*(int *)(*(int *)(**(int **)(iVar10 + uVar11 * 4) + 4) + 0x80) == *(int *)(iVar9 + 0x54)))
      {
        if (*(int *)(iVar9 + 0x58) != -1) {
          local_c4 = local_c8 + 0x84;
          if (0xf < *(uint *)(local_c8 + 0x98)) {
            local_c4 = *(TradeEngine **)local_c4;
          }
          bVar3 = ghidra::lib::_Traits_equal_t
                            ((char *)local_c4,*(uint *)(local_c8 + 0x94),(char *)pLVar4,
                             (uint)unaff_EDI);
          iVar9 = local_c0;
          if (!bVar3) goto LAB_0048985b;
        }
        strUsingArgs((char *)&local_3c);
        local_14 = 0;
        if (*(int *)(*(int *)(**(int **)(*(int *)(local_bc + 100) + uVar11 * 4) + 4) + 0x30) < 2) {
          pwVar5 = (word *)strUsingArgs((char *)local_54);
          if ((word *)&local_3c != pwVar5) {
            // [mislabelled-dtor] word::~word((word *)&local_3c);
            local_3c = *(void **)pwVar5;
            uStack_38 = *(undefined4 *)(pwVar5 + 4);
            uStack_34 = *(undefined4 *)(pwVar5 + 8);
            uStack_30 = *(undefined4 *)(pwVar5 + 0xc);
            local_2c = *(undefined4 *)(pwVar5 + 0x10);
            uStack_28 = *(uint *)(pwVar5 + 0x14);
            *(undefined4 *)(pwVar5 + 0x10) = 0;
            *(undefined4 *)(pwVar5 + 0x14) = 0xf;
            *pwVar5 = (word)0x0;
          }
          if (0xf < local_40) {
            pnVar8 = (nothrow_t *)(local_40 + 1);
            pvVar7 = local_54[0];
            if ((nothrow_t *)0xfff < pnVar8) {
              pvVar7 = *(void **)((int)local_54[0] + -4);
              pnVar8 = (nothrow_t *)(local_40 + 0x24);
              if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar7))) goto LAB_00489895;
            }
            operator_delete(pvVar7,pnVar8);
          }
        }
        uStack_fc = 0x48978a;
        cocos2d::Color3B::Color3B(local_cf,'\0',0x80,'\0');
        local_c4 = aTStack_108;
        uStack_110 = 0x4897c6;
        ghidra::str::ctor
                  ((std::string *)aTStack_108,
                   (std::string *)
                   (*(int *)(**(int **)(*(int *)(local_bc + 100) + uVar11 * 4) + 4) + 0x38));
        local_14._0_1_ = 1;
        ghidra::str::ctor(abStack_124,(std::string *)&local_3c);
        local_14._0_1_ = 0;
        paVar6 = (allocator<ListData> *)new ((void *)(local_b8)) ListData(uVar11);
        pvVar1 = local_cc;
        local_14 = CONCAT31(local_14._1_3_,2);
        if (*(ListData **)(local_cc + 8) == *(ListData **)(local_cc + 4)) {
          std::vector<>::_Emplace_reallocate<ListData>
                    (local_cc,*(ListData **)(local_cc + 4),(ListData *)paVar6);
        }
        else {
          ghidra::lib::_Default_allocator_traits__construct(paVar6,pLVar4,unaff_EDI);
          *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x60;
        }
        (local_b8)->~ListData();
        local_14 = 0xffffffff;
        iVar9 = local_c0;
        if (0xf < uStack_28) {
          pnVar8 = (nothrow_t *)(uStack_28 + 1);
          pvVar7 = local_3c;
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar7 = *(void **)((int)local_3c + -4);
            pnVar8 = (nothrow_t *)(uStack_28 + 0x24);
            if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar7))) {
LAB_00489895:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,pnVar8);
          iVar9 = local_c0;
        }
      }
LAB_0048985b:
      uVar11 = uVar11 + 1;
      iVar10 = *(int *)(local_bc + 100);
      puVar2 = puStack_20;
    } while (uVar11 < (uint)(*(int *)(local_bc + 0x68) - iVar10 >> 2));
  }
  // [seh] puStack_20 = puVar2;
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkShopComponentItems(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkShopComponentItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char ***pppcVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  word *pwVar6;
  char ****ppppcVar7;
  Color3B *pCVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  int iVar11;
  uint unaff_EDI;
  uint uVar12;
  TradeEngine *pTVar13;
  int iVar14;
  bool bVar15;
  char *local_78;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  int local_60;
  TradeEngine *local_5c;
  uint local_58;
  void *local_54 [5];
  uint local_40;
  char ***local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  uint uStack_28;
  char *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bb6d8;
  // [seh] local_1c = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_24 = pcVar4;
  puVar2 = &stack0xfffffffc;
  if ((*(int *)(g_gameData + 0xd0) != 0) &&
     (iVar11 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178), puVar2 = &stack0xfffffffc, iVar11 != 0
     )) {
    iVar11 = *(int *)(iVar11 + 0x254);
    bVar15 = false;
    if (iVar11 != 0) {
      bVar15 = *(int *)(iVar11 + 0x158) == 1;
    }
    puVar2 = &stack0xfffffffc;
    if (bVar15) {
      uVar12 = 0;
      local_60 = *(int *)((char *)this + 0x11c);
      local_58 = 0;
      local_68 = *(int *)(ShipData::currentlyBoardedShip + 0x398);
      puVar5 = *(undefined4 **)(local_68 + 100);
      local_64 = (uint)((int)*(undefined4 **)(local_68 + 0x68) + (3 - (int)puVar5)) >> 2;
      if (*(undefined4 **)(local_68 + 0x68) < puVar5) {
        local_64 = 0;
      }
      if (local_64 != 0) {
        local_6c = *(int *)(local_60 + 0x54);
        // [seh] puStack_20 = &stack0xfffffffc;
        do {
          if ((local_6c == -1) || (*(int *)(*(int *)(*(int *)*puVar5 + 4) + 0x80) == local_6c)) {
            if (*(int *)(local_60 + 0x58) != -1) {
              local_5c = this + 0x84;
              if (0xf < *(uint *)((char *)this + 0x98)) {
                local_5c = *(TradeEngine **)local_5c;
              }
              bVar15 = ghidra::lib::_Traits_equal_t
                                 ((char *)local_5c,*(uint *)((char *)this + 0x94),pcVar4,unaff_EDI);
              if (!bVar15) goto LAB_004899d6;
            }
            local_58 = local_58 + 1;
          }
LAB_004899d6:
          uVar12 = uVar12 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar12 != local_64);
      }
      puVar2 = puStack_20;
      if (local_58 == (*(int *)(param_1 + 4) - *(int *)param_1) / 0x60) {
        local_58 = 0;
        iVar11 = *(int *)(local_68 + 100);
        if (*(int *)(local_68 + 0x68) - iVar11 >> 2 != 0) {
          local_5c = (TradeEngine *)0x0;
          iVar14 = local_60;
          do {
            if ((*(int *)(iVar14 + 0x54) == -1) ||
               (*(int *)(*(int *)(**(int **)(iVar11 + local_58 * 4) + 4) + 0x80) ==
                *(int *)(iVar14 + 0x54))) {
              if (*(int *)(iVar14 + 0x58) != -1) {
                pTVar13 = this + 0x84;
                if (0xf < *(uint *)((char *)this + 0x98)) {
                  pTVar13 = *(TradeEngine **)((char *)this + 0x84);
                }
                bVar15 = ghidra::lib::_Traits_equal_t
                                   ((char *)pTVar13,*(uint *)((char *)this + 0x94),pcVar4,unaff_EDI);
                iVar14 = local_60;
                if (!bVar15) goto LAB_00489c83;
              }
              uVar12 = local_58 * 4;
              iVar11 = *(int *)(**(int **)(uVar12 + iVar11) + 4);
              puVar5 = (undefined4 *)(iVar11 + 0x68);
              if (0xf < *(uint *)(iVar11 + 0x7c)) {
                puVar5 = (undefined4 *)*puVar5;
              }
              local_64 = uVar12;
              strUsingArgs((char *)&local_3c,"%s.png",puVar5);
              local_14 = 0;
              iVar11 = *(int *)(**(int **)(uVar12 + *(int *)(local_68 + 100)) + 4);
              if (*(int *)(iVar11 + 0x30) < 1) {
                puVar5 = (undefined4 *)(iVar11 + 0x68);
                if (0xf < *(uint *)(iVar11 + 0x7c)) {
                  puVar5 = (undefined4 *)*puVar5;
                }
                pwVar6 = (word *)strUsingArgs((char *)local_54,"%s.png",puVar5);
                if ((word *)&local_3c != pwVar6) {
                  // [mislabelled-dtor] word::~word((word *)&local_3c);
                  local_3c = *(char ****)pwVar6;
                  uStack_38 = *(undefined4 *)(pwVar6 + 4);
                  uStack_34 = *(undefined4 *)(pwVar6 + 8);
                  uStack_30 = *(undefined4 *)(pwVar6 + 0xc);
                  local_2c = *(uint *)(pwVar6 + 0x10);
                  uStack_28 = *(uint *)(pwVar6 + 0x14);
                  *(undefined4 *)(pwVar6 + 0x10) = 0;
                  *(undefined4 *)(pwVar6 + 0x14) = 0xf;
                  *pwVar6 = (word)0x0;
                }
                if (0xf < local_40) {
                  pnVar10 = (nothrow_t *)(local_40 + 1);
                  pvVar9 = local_54[0];
                  if ((nothrow_t *)0xfff < pnVar10) {
                    pvVar9 = *(void **)((int)local_54[0] + -4);
                    pnVar10 = (nothrow_t *)(local_40 + 0x24);
                    if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar9))) goto LAB_00489ce8;
                  }
                  operator_delete(pvVar9,pnVar10);
                }
              }
              pppcVar1 = local_3c;
              pTVar13 = local_5c + *(int *)param_1;
              if (*(uint *)pTVar13 == local_58) {
                ppppcVar7 = &local_3c;
                if (0xf < uStack_28) {
                  ppppcVar7 = (char ****)local_3c;
                }
                bVar15 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar7,local_2c,pcVar4,unaff_EDI);
                if ((bVar15) && (*(int *)(pTVar13 + 0x1c) == -1)) {
                  iVar11 = *(int *)(**(int **)(local_64 + *(int *)(local_68 + 100)) + 4);
                  local_78 = (char *)(iVar11 + 0x38);
                  if (0xf < *(uint *)(iVar11 + 0x4c)) {
                    local_78 = *(char **)local_78;
                  }
                  bVar15 = ghidra::lib::_Traits_equal___x28_x29(local_78,*(uint *)(iVar11 + 0x48),pcVar4,unaff_EDI);
                  if (bVar15) {
                    pCVar8 = (Color3B *)
                             cocos2d::Color3B::Color3B
                                       ((Color3B *)((int)&local_6c + 1),'\0',0x80,'\0');
                    bVar15 = cocos2d::Color3B::operator!=((Color3B *)(pTVar13 + 0x58),pCVar8);
                    if (((!bVar15) &&
                        (*(int *)(local_5c + *(int *)param_1 + 0x50) ==
                         *(int *)(*(int *)(local_64 + *(int *)(local_68 + 100)) + 4))) &&
                       (local_5c[*(int *)param_1 + 0x5e] == (byte)0x0)) {
                      local_14 = 0xffffffff;
                      iVar14 = local_60;
                      if (0xf < uStack_28) {
                        pnVar10 = (nothrow_t *)(uStack_28 + 1);
                        ppppcVar7 = (char ****)pppcVar1;
                        if ((nothrow_t *)0xfff < pnVar10) {
                          ppppcVar7 = (char ****)pppcVar1[-1];
                          pnVar10 = (nothrow_t *)(uStack_28 + 0x24);
                          if ((char *)0x1f < (char *)((int)pppcVar1 + (-4 - (int)ppppcVar7)))
                          goto LAB_00489ce8;
                        }
                        operator_delete(ppppcVar7,pnVar10);
                        iVar14 = local_60;
                      }
                      goto LAB_00489c83;
                    }
                  }
                }
              }
              puVar2 = puStack_20;
              if (0xf < uStack_28) {
                pnVar10 = (nothrow_t *)(uStack_28 + 1);
                ppppcVar7 = (char ****)pppcVar1;
                if ((nothrow_t *)0xfff < pnVar10) {
                  ppppcVar7 = (char ****)pppcVar1[-1];
                  pnVar10 = (nothrow_t *)(uStack_28 + 0x24);
                  if ((char *)0x1f < (char *)((int)pppcVar1 + (-4 - (int)ppppcVar7))) {
LAB_00489ce8:
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(ppppcVar7,pnVar10);
                puVar2 = puStack_20;
              }
              break;
            }
LAB_00489c83:
            local_58 = local_58 + 1;
            local_5c = local_5c + 0x60;
            iVar11 = *(int *)(local_68 + 100);
            puVar2 = puStack_20;
          } while (local_58 < (uint)(*(int *)(local_68 + 0x68) - iVar11 >> 2));
        }
      }
    }
  }
  // [seh] puStack_20 = puVar2;
  // [seh] ExceptionList = local_1c;
  // [cookie] uVar3 = __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return (bool)uVar3;
}


// Ghidra: void __thiscall TradeEngine::clearComponentSelection(TradeEngine *this)
void TradeEngine::clearComponentSelection()

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((char *)this + 0x11c) != -0x44) {
    *(undefined4 *)(*(int *)((char *)this + 0x11c) + 0x50) = 0xffffffff;
    iVar1 = *(int *)((char *)this + 0x11c);
    iVar2 = *(int *)(iVar1 + 0x50);
    if (iVar2 < 0) {
      iVar2 = *(int *)(iVar1 + 0x5c);
    }
    else {
      *(int *)(iVar1 + 0x5c) = iVar2;
      *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
    }
    if (-1 < iVar2) {
      *(undefined4 *)(iVar1 + 0x48) = 1;
      *(undefined4 *)(iVar1 + 0x60) = 1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  return;
}


// Ghidra: void __thiscall TradeEngine::resetModuleFilter(TradeEngine *this)
void TradeEngine::resetModuleFilter()

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar2 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar2 + 0xdc) == -1) {
    uVar5 = 3;
    pcVar4 = "All";
  }
  else {
    pcVar4 = (&PTR_s___Brand_New_005df96c)[*(int *)(iVar2 + 0xdc)];
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)(pcVar4 + 1);
  }
  ghidra::str::assign((std::string *)((char *)this + 0x9c),pcVar4,uVar5);
  if (*(int *)(iVar2 + 0xe0) == -1) {
    uVar5 = 0x10;
    pcVar4 = "All Module Types";
  }
  else {
    pcVar4 = (&PTR_s_Unknown_005dfb28)[*(int *)(&DAT_005dfd2c + *(int *)(iVar2 + 0xe0) * 4)];
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)(pcVar4 + 1);
  }
  ghidra::str::assign((std::string *)((char *)this + 0xb4),pcVar4,uVar5);
  *(undefined4 *)(iVar2 + 0xe4) = 0xffffffff;
  return;
}


// Ghidra: void __thiscall TradeEngine::clearModuleSelection(TradeEngine *this)
void TradeEngine::clearModuleSelection()

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((char *)this + 0x11c) != -0xcc) {
    *(undefined4 *)(*(int *)((char *)this + 0x11c) + 0xd8) = 0xffffffff;
    iVar1 = *(int *)((char *)this + 0x11c);
    iVar2 = *(int *)(iVar1 + 0xd8);
    if (-1 < iVar2) {
      *(int *)(iVar1 + 0xe4) = iVar2;
      *(undefined4 *)(iVar1 + 0xd4) = 0xffffffff;
      *(uint *)(iVar1 + 0xd0) = (uint)(-1 < iVar2);
      return;
    }
    *(uint *)(iVar1 + 0xd0) = (uint)(-1 < *(int *)(iVar1 + 0xe4));
  }
  return;
}


// Ghidra: void __thiscall TradeEngine::resetComponentFilter(TradeEngine *this)
void TradeEngine::resetComponentFilter()

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar2 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar2 + 0x54) == -1) {
    uVar5 = 3;
    pcVar4 = "Any";
  }
  else {
    pcVar4 = (&PTR_s_Hap_Node_005df9f4)[*(int *)(iVar2 + 0x54)];
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)(pcVar4 + 1);
  }
  ghidra::str::assign((std::string *)((char *)this + 0x6c),pcVar4,uVar5);
  if (*(int *)(iVar2 + 0x58) == -1) {
    uVar5 = 10;
    pcVar4 = "All Brands";
  }
  else {
    pcVar4 = (&PTR_s_ConnexT_005df9d8)[*(int *)(iVar2 + 0x58)];
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)(pcVar4 + 1);
  }
  ghidra::str::assign((std::string *)((char *)this + 0x84),pcVar4,uVar5);
  *(undefined4 *)(iVar2 + 0x5c) = 0xffffffff;
  return;
}


// Ghidra: void __thiscall TradeEngine::resetStates(TradeEngine *this)
void TradeEngine::resetStates()

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)((char *)this + 0x120) - *(int *)((char *)this + 0x11c) >> 0x1f;
  if ((*(int *)((char *)this + 0x120) - *(int *)((char *)this + 0x11c)) / 0x44 + iVar2 != iVar2) {
    iVar2 = 0;
    do {
      uVar1 = uVar1 + 1;
      *(undefined4 *)(iVar2 + 0x1c + *(int *)((char *)this + 0x11c)) = 0;
      *(undefined4 *)(iVar2 + 4 + *(int *)((char *)this + 0x11c)) = 0;
      *(undefined4 *)(iVar2 + 0x18 + *(int *)((char *)this + 0x11c)) = 0;
      *(undefined4 *)(iVar2 + 8 + *(int *)((char *)this + 0x11c)) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0xc + *(int *)((char *)this + 0x11c)) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x10 + *(int *)((char *)this + 0x11c)) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x14 + *(int *)((char *)this + 0x11c)) = 0xffffffff;
      iVar2 = iVar2 + 0x44;
    } while (uVar1 < (uint)((*(int *)((char *)this + 0x120) - *(int *)((char *)this + 0x11c)) / 0x44));
  }
  *(undefined4 *)((char *)this + 0x118) = 0xffffffff;
  uVar1 = 0;
  *(undefined4 *)((char *)this + 0x110) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x114) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x10c) = 0;
  *(undefined4 *)((char *)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xf4) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xe4) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xd4) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xcc) = 0;
  *(undefined4 *)((char *)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xec) = 0;
  *(undefined4 *)((char *)this + 0xfc) = 0xffffffff;
  ((char *)this)[0x100] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xf8) = 0xffffffff;
  *(undefined2 *)((char *)this + 0xe8) = 0;
  ((char *)this)[0x128] = (byte)0x0;
  if (*(int *)((char *)this + 4) - *(int *)this >> 2 != 0) {
    do {
      (*(TradeLocation **)(*(int *)this + uVar1 * 4))->regenerateShipsForSale();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)((char *)this + 4) - *(int *)this >> 2));
  }
  resetComponentFilter(this);
  resetModuleFilter(this);
  return;
}


// Ghidra: void __thiscall TradeEngine::regenerateAllShipsForSale(TradeEngine *this)
void TradeEngine::regenerateAllShipsForSale()

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((char *)this + 4) - *(int *)this >> 2 != 0) {
    do {
      (*(TradeLocation **)(*(int *)this + uVar1 * 4))->regenerateShipsForSale();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)((char *)this + 4) - *(int *)this >> 2));
  }
  return;
}


// Ghidra: bool __thiscall TradeEngine::currentCommodityPurchaseValid(TradeEngine *this,TextEngine *param_1)
bool TradeEngine::currentCommodityPurchaseValid(TextEngine * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff60[1] = {0};  // [pseudo] address of an unnamed stack slot
  TradeLocation *pTVar1;
  undefined1 uVar2;
  bool bVar3;
  Good *pGVar4;
  Good *pGVar5;
  std::string *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  int iVar10;
  TextEngine *this_00;
  TextEngine *extraout_ECX_01;
  TextEngine *extraout_ECX_02;
  TextEngine *pTVar11;
  TextEngine *this_01;
  TextEngine *this_02;
  TextEngine *this_03;
  TextEngine *extraout_ECX_03;
  TextEngine *extraout_ECX_04;
  TextEngine *this_04;
  TextEngine *extraout_ECX_05;
  TextEngine *extraout_ECX_06;
  TextEngine *this_05;
  TextEngine *this_06;
  void *pvVar12;
  TextEngine *this_07;
  TextEngine *this_08;
  nothrow_t *pnVar13;
  char *pcVar14;
  uint uVar15;
  void *local_60 [5];
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb718;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar9 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar9 + 4) == 1) {
    iVar10 = *(int *)(iVar9 + 0x18);
    if (iVar10 < 1000) {
      if ((iVar10 == -1) || (*(int *)(iVar9 + 0x1c) == 0)) goto LAB_0048a40f;
      pGVar4 = ((GameData *)this)->getGood(iVar10);
      iVar7 = iVar10;
    }
    else {
      if (*(int *)(iVar9 + 0x1c) == 0) goto LAB_0048a40f;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff60,
                 *(std::string **)
                  (*(int *)(*(int *)(g_gameData + 0x13c) + (iVar10 + -1000) * 4) + 0x58));
      pGVar4 = GameData::getGoodWithShortName();
      iVar7 = iVar10 + -1000;
    }
    if (pGVar4 == (Good *)0x0) goto LAB_0048a40f;
    pTVar1 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    if (999 < iVar10) {
      iVar10 = *(int *)(*(int *)(g_gameData + 0x13c) + iVar7 * 4);
      ghidra::str::ctor
                ((std::string *)&stack0xffffff60,*(std::string **)(iVar10 + 0x58));
      pGVar5 = GameData::getGoodWithShortName();
      if (pGVar5 == pGVar4) {
        iVar10 = *(int *)(iVar10 + 0x58);
        iVar9 = *(int *)(iVar9 + 0x1c);
        if (*(int *)(iVar10 + 0x18) < iVar9) {
          pbVar6 = (std::string *)strUsingArgs((char *)local_30);
          ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
          pTVar11 = extraout_ECX;
          if (0xf < local_1c) {
            pnVar13 = (nothrow_t *)(local_1c + 1);
            pvVar12 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar12 = *(void **)((int)local_30[0] + -4);
              pnVar13 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar12,pnVar13);
            pTVar11 = extraout_ECX_00;
          }
          if (param_1 != (TextEngine *)0x0) {
            (pTVar11)->addLinef((char *)param_1);
          }
          goto LAB_0048a40f;
        }
        iVar10 = *(int *)(iVar10 + 0x28);
        if (iVar10 == -1) {
          iVar10 = *(int *)(pGVar4 + 0x58);
        }
        iVar10 = iVar9 * iVar10;
        if (iVar10 - *(int *)(*(int *)(g_gameData + 0x124) + 0x1c) != 0 &&
            *(int *)(*(int *)(g_gameData + 0x124) + 0x1c) <= iVar10) {
          ghidra::str::assign
                    ((std::string *)((char *)this + 0x54),"`^Error: not enough credit in your account",
                     0x2a);
          if (param_1 != (TextEngine *)0x0) {
            (this_00)->addLinef((char *)param_1);
          }
          goto LAB_0048a40f;
        }
        iVar7 = CargoHold::amountCanHold
                          (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),pGVar4);
        if (iVar7 < iVar9) {
          if (*(int *)(pGVar4 + 0x5c) == 0) {
            ghidra::str::assign
                      ((std::string *)((char *)this + 0x54),"`^Error: not enough room in your hold",0x25)
            ;
            if (param_1 != (TextEngine *)0x0) {
              (this_01)->addLinef((char *)param_1);
            }
            ghidra::str::assign
                      ((std::string *)((char *)this + 0x54),
                       "`!Note : not enough room available in cargo pods",0x30);
            if (param_1 != (TextEngine *)0x0) {
              (this_02)->addLinef((char *)param_1);
            }
          }
          else {
            pbVar6 = (std::string *)strUsingArgs((char *)local_30);
            ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
            pTVar11 = extraout_ECX_01;
            if (0xf < local_1c) {
              pnVar13 = (nothrow_t *)(local_1c + 1);
              pvVar12 = local_30[0];
              if ((nothrow_t *)0xfff < pnVar13) {
                pvVar12 = *(void **)((int)local_30[0] + -4);
                pnVar13 = (nothrow_t *)(local_1c + 0x24);
                if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar12,pnVar13);
              pTVar11 = extraout_ECX_02;
            }
            if (param_1 != (TextEngine *)0x0) {
              (pTVar11)->addLinef((char *)param_1);
            }
          }
          goto LAB_0048a40f;
        }
        if (iVar10 == 0) {
          pbVar6 = (std::string *)strUsingArgs((char *)local_30);
        }
        else {
          pbVar6 = (std::string *)strUsingArgs((char *)local_30);
        }
        ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
        goto LAB_0048a3ab;
      }
    }
    iVar10 = (pTVar1)->goodCost(*(int *)pGVar4, *(int *)(iVar9 + 0x1c), true);
    iVar8 = (pTVar1)->singleGoodCost(*(int *)pGVar4, true);
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    // [seh] local_8 = 0;
    if (iVar8 == *(int *)(pGVar4 + 0x58)) {
      uVar15 = 0x24;
      pcVar14 = "`7Price here is at market average.\n\n";
    }
    else if (*(int *)(pGVar4 + 0x58) < iVar8) {
      uVar15 = 0x4c;
      pcVar14 = "`7Price here is `@above`7 market average. Purchase is `@not `7recommended.\n\n";
    }
    else {
      uVar15 = 0x44;
      pcVar14 = "`7Price here is `0below`7 market average. Purchase is recommended.\n\n";
    }
    ghidra::str::assign((std::string *)local_48,pcVar14,uVar15);
    iVar7 = (pTVar1)->goodAmount(iVar7);
    iVar9 = *(int *)(iVar9 + 0x1c);
    if (iVar7 < iVar9) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x54),"`^Error: not enough goods available on station",
                 0x2e);
      if (param_1 != (TextEngine *)0x0) {
        (this_03)->addLinef((char *)param_1);
      }
    }
    else {
      iVar7 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountCanHold(pGVar4);
      if (iVar7 < iVar9) {
        if (*(int *)(pGVar4 + 0x5c) == 0) {
          pbVar6 = (std::string *)strUsingArgs((char *)local_30);
          ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
          pTVar11 = extraout_ECX_05;
          if (0xf < local_1c) {
            pnVar13 = (nothrow_t *)(local_1c + 1);
            pvVar12 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar12 = *(void **)((int)local_30[0] + -4);
              pnVar13 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12))) goto LAB_0048a3d1;
            }
            operator_delete(pvVar12,pnVar13);
            pTVar11 = extraout_ECX_06;
          }
          if (param_1 != (TextEngine *)0x0) {
            (pTVar11)->addLinef((char *)param_1);
            (this_05)->addLinef((char *)param_1);
          }
        }
        else {
          pbVar6 = (std::string *)strUsingArgs((char *)local_30);
          ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
          pTVar11 = extraout_ECX_03;
          if (0xf < local_1c) {
            pnVar13 = (nothrow_t *)(local_1c + 1);
            pvVar12 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar12 = *(void **)((int)local_30[0] + -4);
              pnVar13 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12))) goto LAB_0048a3d1;
            }
            operator_delete(pvVar12,pnVar13);
            pTVar11 = extraout_ECX_04;
          }
          if (param_1 != (TextEngine *)0x0) {
            (pTVar11)->addLinef((char *)param_1);
            (this_04)->addLinef((char *)param_1);
          }
        }
      }
      else if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar10) {
        ghidra::str::assign
                  ((std::string *)((char *)this + 0x54),"`^Error: not enough credit in your account",0x2a
                  );
        if (param_1 != (TextEngine *)0x0) {
          (this_06)->addLinef((char *)param_1);
        }
      }
      else {
        if (iVar10 == 0) {
          pbVar6 = (std::string *)strUsingArgs((char *)local_30);
          ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
        }
        else {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          // [seh] local_8 = CONCAT31(local_8._1_3_,1);
          if (iVar8 == *(int *)(pGVar4 + 0x58)) {
            uVar15 = 0x24;
            pcVar14 = "`7Price here is at market average.\n\n";
          }
          else if (*(int *)(pGVar4 + 0x58) < iVar8) {
            uVar15 = 0x4c;
            pcVar14 = 
            "`7Price here is `@above`7 market average. Purchase is `@not `7recommended.\n\n";
          }
          else {
            uVar15 = 0x44;
            pcVar14 = "`7Price here is `0below`7 market average. Purchase is recommended.\n\n";
          }
          ghidra::str::assign((std::string *)local_30,pcVar14,uVar15);
          pbVar6 = (std::string *)strUsingArgs((char *)local_60);
          ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
          if (0xf < local_4c) {
            pnVar13 = (nothrow_t *)(local_4c + 1);
            pvVar12 = local_60[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar12 = *(void **)((int)local_60[0] + -4);
              pnVar13 = (nothrow_t *)(local_4c + 0x24);
              if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar12))) goto LAB_0048a3d1;
            }
            operator_delete(pvVar12,pnVar13);
          }
        }
        if (0xf < local_1c) {
          pnVar13 = (nothrow_t *)(local_1c + 1);
          pvVar12 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar12 = *(void **)((int)local_30[0] + -4);
            pnVar13 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12))) goto LAB_0048a3d1;
          }
          operator_delete(pvVar12,pnVar13);
        }
      }
    }
    if (0xf < local_34) {
      pnVar13 = (nothrow_t *)(local_34 + 1);
      pvVar12 = local_48[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_48[0] + -4);
        pnVar13 = (nothrow_t *)(local_34 + 0x24);
        if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar12))) {
LAB_0048a3d1:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar12,pnVar13);
    }
  }
  else {
    if ((((*(int *)(iVar9 + 4) != 2) || (*(int *)(iVar9 + 0x18) == -1)) ||
        (*(int *)(iVar9 + 0x1c) == 0)) ||
       (pGVar4 = ((GameData *)this)->getGood(*(int *)(iVar9 + 0x18)), pGVar4 == (Good *)0x0))
    goto LAB_0048a40f;
    iVar10 = *(int *)pGVar4;
    iVar7 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountHeld(iVar10);
    if (iVar7 < *(int *)(iVar9 + 0x1c)) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x54),"`^Error: not enough goods available on ship",0x2b)
      ;
      if (param_1 != (TextEngine *)0x0) {
        (this_07)->addLinef((char *)param_1);
      }
      goto LAB_0048a40f;
    }
    pTVar1 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
    bVar3 = (pTVar1)->doesBuy(iVar10);
    if (!bVar3) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x54),"`^Error: station does not want this good",0x28);
      if (param_1 != (TextEngine *)0x0) {
        (this_08)->addLinef((char *)param_1);
      }
      goto LAB_0048a40f;
    }
    iVar9 = (pTVar1)->goodCost(*(int *)pGVar4, *(int *)(iVar9 + 0x1c), false);
    if (iVar9 < 1) goto LAB_0048a40f;
    (pTVar1)->itemiseSaleDetails((int)local_30, *(int *)pGVar4);
    // [seh] local_8 = 2;
    if (param_1 != (TextEngine *)0x0) {
      ghidra::str::ctor
                ((std::string *)&stack0xffffff60,(std::string *)local_30);
      (param_1)->addLine();
    }
LAB_0048a3ab:
    if (0xf < local_1c) {
      pnVar13 = (nothrow_t *)(local_1c + 1);
      pvVar12 = local_30[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_30[0] + -4);
        pnVar13 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar12))) goto LAB_0048a3d1;
      }
      operator_delete(pvVar12,pnVar13);
    }
  }
LAB_0048a40f:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: bool __thiscall TradeEngine::currentBlackMarketPurchaseValid(TradeEngine *this,TextEngine *param_1)
bool TradeEngine::currentBlackMarketPurchaseValid(TextEngine * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *this_00;
  TradeLocation *pTVar1;
  undefined1 uVar2;
  bool bVar3;
  Good *pGVar4;
  int iVar5;
  std::string *pbVar6;
  int iVar7;
  int iVar8;
  TextEngine *this_01;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *extraout_ECX_01;
  TextEngine *this_02;
  TextEngine *extraout_ECX_02;
  TextEngine *pTVar9;
  TextEngine *this_03;
  void *pvVar10;
  TextEngine *this_04;
  TextEngine *this_05;
  GameData *pGVar11;
  nothrow_t *pnVar12;
  char *pcStack_88;
  char *pcVar13;
  uint uVar14;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb750;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar7 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar7 + 0x8c) == 1) {
    this_00 = *(GameData **)(iVar7 + 0xa0);
    if ((this_00 == (GameData *)0xffffffff) || (iVar7 = *(int *)(iVar7 + 0xa4), iVar7 == 0))
    goto LAB_0048ac48;
    pGVar11 = this_00 + -1000;
    if ((int)this_00 < 1000) {
      pGVar11 = this_00;
    }
    pTVar1 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    pGVar4 = (this_00)->getGood((int)pGVar11);
    if (pGVar4 == (Good *)0x0) goto LAB_0048ac48;
    iVar5 = (pTVar1)->goodAmountWire((int)pGVar11);
    if (iVar5 < iVar7) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x54),"`^Error: not enough goods available on station",
                 0x2e);
      if (param_1 != (TextEngine *)0x0) {
        (this_01)->addLinef((char *)param_1);
      }
      goto LAB_0048ac48;
    }
    iVar5 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountCanHold(pGVar4);
    if (iVar5 < iVar7) {
      if (*(int *)(pGVar4 + 0x5c) == 0) {
        ghidra::str::assign
                  ((std::string *)((char *)this + 0x54),
                   "`^Error: not enough room in your hold.\n`!Note : not enough room available in cargo pods"
                   ,0x57);
        if (param_1 == (TextEngine *)0x0) goto LAB_0048ac48;
        (this_02)->addLinef((char *)param_1);
        pTVar9 = extraout_ECX_02;
      }
      else {
        pbVar6 = (std::string *)strUsingArgs((char *)local_30);
        ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
        pTVar9 = extraout_ECX;
        if (0xf < local_1c) {
          pnVar12 = (nothrow_t *)(local_1c + 1);
          pvVar10 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar10 = *(void **)((int)local_30[0] + -4);
            pnVar12 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar12);
          pTVar9 = extraout_ECX_00;
        }
        if (param_1 == (TextEngine *)0x0) goto LAB_0048ac48;
        (pTVar9)->addLinef((char *)param_1);
        pTVar9 = extraout_ECX_01;
      }
      (pTVar9)->addLinef((char *)param_1);
      goto LAB_0048ac48;
    }
    iVar5 = *(int *)pGVar4;
    iVar7 = (pTVar1)->goodCostWire(iVar5, iVar7, true);
    iVar5 = (pTVar1)->singleGoodCostWire(iVar5, true);
    if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < iVar7) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x54),"`^Error: not enough credit in your account",0x2a);
      if (param_1 != (TextEngine *)0x0) {
        (this_03)->addLinef((char *)param_1);
      }
      goto LAB_0048ac48;
    }
    if (iVar7 == 0) {
      pcStack_88 = (char *)0x48ab2b;
      pbVar6 = (std::string *)strUsingArgs((char *)local_30);
      ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
    }
    else {
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      // [seh] local_8 = 0;
      if (iVar5 == *(int *)(pGVar4 + 0x58)) {
        uVar14 = 0x24;
        pcVar13 = "`7Price here is at market average.\n\n";
      }
      else if (*(int *)(pGVar4 + 0x58) < iVar5) {
        uVar14 = 0x4c;
        pcVar13 = "`7Price here is `@above`7 market average. Purchase is `@not `7recommended.\n\n";
      }
      else {
        uVar14 = 0x44;
        pcVar13 = "`7Price here is `0below`7 market average. Purchase is recommended.\n\n";
      }
      ghidra::str::assign((std::string *)local_30,pcVar13,uVar14);
      pcStack_88 = "%s`7You will purchase `%%%dx `%c%s for `$%d `7credits.";
      pbVar6 = (std::string *)strUsingArgs((char *)local_48);
      ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x54),pbVar6);
      if (0xf < local_34) {
        pnVar12 = (nothrow_t *)(local_34 + 1);
        pvVar10 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar10 = *(void **)((int)local_48[0] + -4);
          pnVar12 = (nothrow_t *)(local_34 + 0x24);
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar12);
      }
    }
  }
  else {
    if ((((*(int *)(iVar7 + 0x8c) != 2) || (*(int *)(iVar7 + 0xa0) == -1)) ||
        (*(int *)(iVar7 + 0xa4) == 0)) ||
       (pGVar4 = ((GameData *)this)->getGood(*(int *)(iVar7 + 0xa0)), pGVar4 == (Good *)0x0))
    goto LAB_0048ac48;
    iVar5 = *(int *)pGVar4;
    iVar8 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountHeld(iVar5);
    if (iVar8 < *(int *)(iVar7 + 0xa4)) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x54),"`^Error: not enough goods available on ship",0x2b)
      ;
      if (param_1 != (TextEngine *)0x0) {
        (this_04)->addLinef((char *)param_1);
      }
      goto LAB_0048ac48;
    }
    pTVar1 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
    bVar3 = (pTVar1)->doesBuyWire(iVar5);
    if (!bVar3) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x54),"`^Error: station does not want this good",0x28);
      if (param_1 != (TextEngine *)0x0) {
        (this_05)->addLinef((char *)param_1);
      }
      goto LAB_0048ac48;
    }
    iVar7 = (pTVar1)->goodCost(iVar5, *(int *)(iVar7 + 0xa4), false);
    if (iVar7 < 1) goto LAB_0048ac48;
    (pTVar1)->itemiseSaleDetails((int)local_30, *(int *)pGVar4);
    // [seh] local_8 = 1;
    if (param_1 != (TextEngine *)0x0) {
      ghidra::str::ctor((std::string *)&pcStack_88,(std::string *)local_30);
      (param_1)->addLine();
    }
  }
  if (0xf < local_1c) {
    pnVar12 = (nothrow_t *)(local_1c + 1);
    pvVar10 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar10 = *(void **)((int)local_30[0] + -4);
      pnVar12 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar12);
  }
LAB_0048ac48:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: bool __thiscall TradeEngine::currentComponentPurchaseValid(TradeEngine *this,TextEngine *param_1)
bool TradeEngine::currentComponentPurchaseValid(TextEngine * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  int iVar2;
  TradeLocation *this_00;
  bool bVar3;
  undefined1 uVar4;
  Good *pGVar5;
  int iVar6;
  int iVar7;
  TextEngine *this_01;
  TextEngine *this_02;
  void *pvVar8;
  nothrow_t *pnVar9;
  std::string local_68 [8];
  undefined4 uStack_60;
  void *local_30 [5];
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb788;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar7 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar7 + 0x48) == 1) {
    uVar1 = *(uint *)(iVar7 + 0x5c);
    if ((uVar1 != 0xffffffff) && (*(int *)(iVar7 + 0x60) != 0)) {
      if (((int)uVar1 < 0) ||
         (iVar7 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398),
         iVar2 = *(int *)(iVar7 + 100), (uint)(*(int *)(iVar7 + 0x68) - iVar2 >> 2) <= uVar1)) {
        if (param_1 != (TextEngine *)0x0) {
          local_68[0] = (std::string)0x0;
          ghidra::str::assign(local_68,"`$Error:`3 Invalid component.",0x1d);
          (param_1)->addLine();
        }
        ghidra::str::assign
                  ((std::string *)((char *)this + 0x54),"`$Error:`3 Invalid component.",0x1d);
      }
      else {
        iVar7 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
        if (*(int *)(iVar7 + 4) - (*(int *)(iVar7 + 0x48) - *(int *)(iVar7 + 0x44) >> 2) < 1) {
          if (param_1 != (TextEngine *)0x0) {
            local_68[0] = (std::string)0x0;
            ghidra::str::assign(local_68,"`$Error:`3 No room in hold for component.",0x29);
            (param_1)->addLine();
          }
          ghidra::str::assign
                    ((std::string *)((char *)this + 0x54),"`$Error:`3 No room in hold for component.",
                     0x29);
        }
        else if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) <
                 *(int *)(*(int *)(iVar2 + uVar1 * 4) + 4)) {
          if (param_1 != (TextEngine *)0x0) {
            local_68[0] = (std::string)0x0;
            ghidra::str::assign(local_68,"`$Error:`3 cannot afford this component.",0x28);
            (param_1)->addLine();
          }
          ghidra::str::assign
                    ((std::string *)((char *)this + 0x54),"`$Error:`3 cannot afford this component.",0x28
                    );
        }
      }
    }
  }
  else if ((((*(int *)(iVar7 + 0x48) == 2) && (*(int *)(iVar7 + 0x5c) != -1)) &&
           (*(int *)(iVar7 + 0x60) != 0)) &&
          (pGVar5 = ((GameData *)this)->getGood(*(int *)(iVar7 + 0x5c)),
          pGVar5 != (Good *)0x0)) {
    iVar2 = *(int *)pGVar5;
    iVar6 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountHeld(iVar2);
    if (iVar6 < *(int *)(iVar7 + 0x60)) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x54),"`^Error: not enough goods available on ship",0x2b)
      ;
      if (param_1 != (TextEngine *)0x0) {
        (this_01)->addLinef((char *)param_1);
      }
    }
    else {
      this_00 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
      bVar3 = (this_00)->doesBuy(iVar2);
      if (bVar3) {
        uStack_60 = 0x48afde;
        iVar7 = (this_00)->goodCost(*(int *)pGVar5, *(int *)(iVar7 + 0x60), false);
        if (0 < iVar7) {
          uStack_60 = 0x48aff3;
          (this_00)->itemiseSaleDetails((int)local_30, *(int *)pGVar5);
          // [seh] local_8 = 0;
          if (param_1 != (TextEngine *)0x0) {
            ghidra::str::ctor(local_68,(std::string *)local_30);
            (param_1)->addLine();
          }
          if (0xf < local_1c) {
            pnVar9 = (nothrow_t *)(local_1c + 1);
            pvVar8 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar8 = *(void **)((int)local_30[0] + -4);
              pnVar9 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar8,pnVar9);
          }
        }
      }
      else {
        ghidra::str::assign
                  ((std::string *)((char *)this + 0x54),"`^Error: station does not want this good",0x28);
        if (param_1 != (TextEngine *)0x0) {
          (this_02)->addLinef((char *)param_1);
        }
      }
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar4 = __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}


// Ghidra: bool __thiscall TradeEngine::currentPurchaseValid(TradeEngine *this,Shop param_1,TextEngine *param_2)
bool TradeEngine::currentPurchaseValid(Shop param_1, TextEngine * param_2)

{
  bool bVar1;
  
  ghidra::str::assign((std::string *)((char *)this + 0x54),"",0);
  if (*(int *)(*(int *)((char *)this + 0x11c) + 4 + param_1 * 0x44) == 1) {
    if (param_1 == 0) {
      bVar1 = currentCommodityPurchaseValid(this,param_2);
      return bVar1;
    }
    if (param_1 == 2) {
      bVar1 = currentBlackMarketPurchaseValid(this,param_2);
      return bVar1;
    }
    if (param_1 == 1) {
      bVar1 = currentComponentPurchaseValid(this,param_2);
      return bVar1;
    }
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::currentCommoditySaleValid(TradeEngine *this,TextEngine *param_1)
bool TradeEngine::currentCommoditySaleValid(TextEngine * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Good *pGVar1;
  TradeLocation *this_00;
  TextEngine *this_01;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char ******ppppppcVar8;
  int iVar9;
  std::string *pbVar10;
  Good *pGVar11;
  uint uVar12;
  TextEngine *extraout_ECX;
  nothrow_t *pnVar13;
  TextEngine *extraout_ECX_00;
  char *****pppppcVar14;
  GameData *pGVar15;
  char ******ppppppcVar16;
  uint uVar17;
  int iVar18;
  uint unaff_EDI;
  Ship *pSVar19;
  std::string abStack_a8 [12];
  undefined4 uStack_9c;
  std::string local_90 [4];
  undefined4 uStack_8c;
  char *pcVar20;
  char *****local_48 [4];
  uint local_38;
  uint local_34;
  char *****local_30 [4];
  uint local_20;
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb7d8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar18 = *(int *)((char *)this + 0x11c);
  local_18 = pcVar5;
  if (*(int *)(iVar18 + 0x18) != -1) {
    uVar12 = 0;
    piVar6 = *(int **)(g_gameData + 0x84);
    uVar17 = *(int *)(g_gameData + 0x88) - (int)piVar6 >> 2;
    if (uVar17 != 0) {
      do {
        pGVar1 = (Good *)*piVar6;
        if (*(int *)pGVar1 == *(int *)(iVar18 + 0x18)) {
          if (pGVar1 != (Good *)0x0) {
            iVar7 = CargoHold::amountHeld
                              (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar1);
            if (iVar7 < *(int *)(iVar18 + 0x1c)) {
              ghidra::str::assign
                        ((std::string *)((char *)this + 0x3c),
                         "`^Error: not enough goods available on ship",0x2b);
              this_01 = extraout_ECX;
              goto joined_r0x0048b3c2;
            }
            ghidra::str::ctor
                      ((std::string *)local_30,
                       (std::string *)(ShipData::currentlyBoardedShip + 0x238));
            // [seh] local_8 = 0;
            ghidra::str::ctor
                      ((std::string *)local_48,*(std::string **)(pGVar1 + 0x1c));
            ppppppcVar16 = (char ******)local_30[0];
            pppppcVar14 = local_48[0];
            // [seh] local_8 = 0xffffffff;
            uVar17 = 0;
            uVar12 = *(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2;
            if (uVar12 != 0) goto LAB_0048b230;
            goto LAB_0048b30a;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar12 < uVar17);
    }
  }
  goto LAB_0048b1b4;
LAB_0048b230:
  do {
    ppppppcVar8 = local_48;
    if (0xf < local_34) {
      ppppppcVar8 = (char ******)pppppcVar14;
    }
    bVar3 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppppcVar8,local_38,pcVar5,unaff_EDI);
    if (bVar3) {
      ppppppcVar8 = local_30;
      if (0xf < local_1c) {
        ppppppcVar8 = ppppppcVar16;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppppcVar8,local_20,pcVar5,unaff_EDI);
      if (bVar3) {
        if (0xf < local_34) {
          pnVar13 = (nothrow_t *)(local_34 + 1);
          ppppppcVar16 = (char ******)pppppcVar14;
          if ((nothrow_t *)0xfff < pnVar13) {
            ppppppcVar16 = (char ******)pppppcVar14[-1];
            pnVar13 = (nothrow_t *)(local_34 + 0x24);
            if ((char *)0x1f < (char *)((int)pppppcVar14 + (-4 - (int)ppppppcVar16))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppppcVar16,pnVar13);
          ppppppcVar16 = (char ******)local_30[0];
        }
        if (0xf < local_1c) {
          pnVar13 = (nothrow_t *)(local_1c + 1);
          ppppppcVar8 = ppppppcVar16;
          if ((nothrow_t *)0xfff < pnVar13) {
            ppppppcVar8 = (char ******)ppppppcVar16[-1];
            pnVar13 = (nothrow_t *)(local_1c + 0x24);
            if ((char *)0x1f < (char *)((int)ppppppcVar16 + (-4 - (int)ppppppcVar8))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppppcVar8,pnVar13);
        }
        bVar3 = true;
        goto LAB_0048b37b;
      }
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 < uVar12);
LAB_0048b30a:
  if (0xf < local_34) {
    pnVar13 = (nothrow_t *)(local_34 + 1);
    ppppppcVar16 = (char ******)pppppcVar14;
    if ((nothrow_t *)0xfff < pnVar13) {
      ppppppcVar16 = (char ******)pppppcVar14[-1];
      pnVar13 = (nothrow_t *)(local_34 + 0x24);
      if ((char *)0x1f < (char *)((int)pppppcVar14 + (-4 - (int)ppppppcVar16))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppppcVar16,pnVar13);
    ppppppcVar16 = (char ******)local_30[0];
  }
  if (0xf < local_1c) {
    pnVar13 = (nothrow_t *)(local_1c + 1);
    ppppppcVar8 = ppppppcVar16;
    if ((nothrow_t *)0xfff < pnVar13) {
      ppppppcVar8 = (char ******)ppppppcVar16[-1];
      pnVar13 = (nothrow_t *)(local_1c + 0x24);
      if ((char *)0x1f < (char *)((int)ppppppcVar16 + (-4 - (int)ppppppcVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppppcVar8,pnVar13);
  }
  bVar3 = false;
LAB_0048b37b:
  local_30[0] = (char *****)((uint)local_30[0] & 0xffffff00);
  local_1c = 0xf;
  local_20 = 0;
  this_00 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
  bVar4 = (this_00)->doesBuy(*(int *)pGVar1);
  if (bVar4) {
    iVar7 = (this_00)->goodCost(*(int *)pGVar1, *(int *)(iVar18 + 0x1c), false);
    if (-1 < iVar7) {
      local_20 = 0;
      local_1c = 0xf;
      iVar18 = *(int *)(pGVar1 + 0x58) * *(int *)(iVar18 + 0x1c);
      local_30[0] = (char *****)((uint)local_30[0] & 0xffffff00);
      // [seh] local_8 = 1;
      if (bVar3) {
        local_90[0] = (std::string)0x0;
        uStack_9c = 0x48b43f;
        ghidra::str::assign(local_90,"",0);
        // [seh] local_8._0_1_ = 2;
        ghidra::str::ctor(abStack_a8,*(std::string **)(pGVar1 + 0x1c));
        // [seh] local_8 = CONCAT31(local_8._1_3_,1);
        iVar9 = GameLogic::contractAmountLeftToDeliver();
        if (0 < iVar9) {
          pbVar10 = (std::string *)strUsingArgs((char *)local_48);
          ghidra::lib::basic_string__operator_x3d((std::string *)local_30,pbVar10);
          if (0xf < local_34) {
            pnVar13 = (nothrow_t *)(local_34 + 1);
            ppppppcVar16 = (char ******)local_48[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              ppppppcVar16 = (char ******)local_48[0][-1];
              pnVar13 = (nothrow_t *)(local_34 + 0x24);
              if ((char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)ppppppcVar16))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(ppppppcVar16,pnVar13);
          }
        }
      }
      if (iVar7 == iVar18) {
        uVar12 = 0x24;
        pcVar20 = "`7Price here is at market average.\n\n";
      }
      else if (iVar18 < iVar7) {
        uVar12 = 0x40;
        pcVar20 = "`7Price here is `0above`7 market average. Sale is recommended.\n\n";
      }
      else {
        uVar12 = 0x48;
        pcVar20 = "`7Price here is `@below`7 market average. Sale is `@not `7recommended.\n\n";
      }
      ghidra::str::append((std::string *)local_30,pcVar20,uVar12);
      pbVar10 = (std::string *)
                (this_00)->itemiseSaleDetails((int)local_48, *(int *)pGVar1);
      // [seh] local_8._0_1_ = 3;
      ghidra::str::append((std::string *)local_30,pbVar10);
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_34) {
        pnVar13 = (nothrow_t *)(local_34 + 1);
        ppppppcVar16 = (char ******)local_48[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          ppppppcVar16 = (char ******)local_48[0][-1];
          pnVar13 = (nothrow_t *)(local_34 + 0x24);
          if ((char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)ppppppcVar16))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(ppppppcVar16,pnVar13);
      }
      ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x3c),(std::string *)local_30);
      if (param_1 != (TextEngine *)0x0) {
        ghidra::str::ctor(local_90,(std::string *)local_30);
        (param_1)->addLine();
      }
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pnVar13 = (nothrow_t *)(local_1c + 1);
        pppppcVar14 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pppppcVar14 = (char *****)local_30[0][-1];
          pnVar13 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pppppcVar14))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pppppcVar14,pnVar13);
      }
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (char *****)((uint)local_30[0] & 0xffffff00);
    }
    uVar12 = 0;
    pGVar15 = g_gameData + 0x13c;
    if (*(int *)(g_gameData + 0x140) - *(int *)pGVar15 >> 2 != 0) {
      do {
        ghidra::str::ctor
                  (local_90,*(std::string **)(*(int *)(*(int *)pGVar15 + uVar12 * 4) + 0x58));
        pGVar11 = GameData::getGoodWithShortName();
        if (pGVar1 == pGVar11) {
          iVar18 = *(int *)(uVar12 * 4 + *(int *)(g_gameData + 0x13c));
          pSVar19 = ShipData::currentlyBoardedShip + 0x238;
          if (0xf < *(uint *)(ShipData::currentlyBoardedShip + 0x24c)) {
            pSVar19 = *(Ship **)(ShipData::currentlyBoardedShip + 0x238);
          }
          bVar3 = ghidra::lib::_Traits_equal_t
                            ((char *)pSVar19,*(uint *)(ShipData::currentlyBoardedShip + 0x248),
                             pcVar5,unaff_EDI);
          if (!bVar3) {
            ghidra::str::ctor(local_90,(std::string *)(iVar18 + 0x20));
            GameData::getSpaceStation();
            local_90[0] = (std::string)0x0;
            uStack_9c = 0x48b6a1;
            ghidra::str::assign(local_90,"",0);
            // [seh] local_8 = 4;
            ghidra::str::ctor(abStack_a8,*(std::string **)(pGVar1 + 0x1c));
            // [seh] local_8 = 0xffffffff;
            iVar18 = GameLogic::contractAmountLeftToDeliver();
            if (0 < iVar18) {
              uStack_8c = 0x48b6e3;
              pbVar10 = (std::string *)strUsingArgs((char *)local_48);
              ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x3c),pbVar10);
              if (0xf < local_34) {
                pnVar13 = (nothrow_t *)(local_34 + 1);
                ppppppcVar16 = (char ******)local_48[0];
                if ((nothrow_t *)0xfff < pnVar13) {
                  ppppppcVar16 = (char ******)local_48[0][-1];
                  pnVar13 = (nothrow_t *)(local_34 + 0x24);
                  if ((char *)0x1f < (char *)((int)local_48[0] + (-4 - (int)ppppppcVar16))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(ppppppcVar16,pnVar13);
              }
              local_38 = 0;
              local_34 = 0xf;
              local_48[0] = (char *****)((uint)local_48[0] & 0xffffff00);
            }
            if (param_1 != (TextEngine *)0x0) {
              (param_1)->addLinef((char *)param_1);
            }
            break;
          }
        }
        uVar12 = uVar12 + 1;
        pGVar15 = g_gameData + 0x13c;
      } while (uVar12 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)pGVar15 >> 2));
    }
  }
  else {
    ghidra::str::assign
              ((std::string *)((char *)this + 0x3c),"`^Error: station does not want this good",0x28);
    this_01 = extraout_ECX_00;
joined_r0x0048b3c2:
    if (param_1 != (TextEngine *)0x0) {
      (this_01)->addLinef((char *)param_1);
    }
  }
LAB_0048b1b4:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: bool __thiscall TradeEngine::currentBlackMarketSaleValid(TradeEngine *this,TextEngine *param_1)
bool TradeEngine::currentBlackMarketSaleValid(TextEngine * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  TradeLocation *this_00;
  TextEngine *this_01;
  undefined1 uVar1;
  bool bVar2;
  Good *pGVar3;
  int iVar4;
  int iVar5;
  std::string *pbVar6;
  TextEngine *extraout_ECX;
  TextEngine *extraout_ECX_00;
  int iVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  std::string abStack_80 [8];
  undefined4 uStack_78;
  char *pcVar10;
  uint uVar11;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005bb810;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar7 = *(int *)((char *)this + 0x11c);
  if (((*(int *)(iVar7 + 0xa0) != -1) && (*(int *)(iVar7 + 0xa4) != 0)) &&
     (pGVar3 = ((GameData *)this)->getGood(*(int *)(iVar7 + 0xa0)), pGVar3 != (Good *)0x0)) {
    iVar5 = *(int *)pGVar3;
    iVar4 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountHeld(iVar5);
    if (iVar4 < *(int *)(iVar7 + 0xa4)) {
      ghidra::str::assign
                ((std::string *)((char *)this + 0x3c),"`^Error: not enough goods available on ship",0x2b)
      ;
      this_01 = extraout_ECX;
    }
    else {
      this_00 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
      bVar2 = (this_00)->doesBuyWire(iVar5);
      if (bVar2) {
        uStack_78 = 0x48b875;
        iVar5 = (this_00)->goodCost(iVar5, *(int *)(iVar7 + 0xa4), false);
        if (-1 < iVar5) {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          iVar7 = *(int *)(pGVar3 + 0x58) * *(int *)(iVar7 + 0xa4);
          // [seh] local_8 = 0;
          if (iVar5 == iVar7) {
            uVar11 = 0x24;
            pcVar10 = "`7Price here is at market average.\n\n";
          }
          else if (iVar7 < iVar5) {
            uVar11 = 0x40;
            pcVar10 = "`7Price here is `0above`7 market average. Sale is recommended.\n\n";
          }
          else {
            uVar11 = 0x48;
            pcVar10 = "`7Price here is `@below`7 market average. Sale is `@not `7recommended.\n\n";
          }
          ghidra::str::assign((std::string *)local_30,pcVar10,uVar11);
          uStack_78 = 0x48b8e1;
          pbVar6 = (std::string *)
                   (this_00)->itemiseSaleDetailsWire((int)local_48, *(int *)pGVar3);
          // [seh] local_8._0_1_ = 1;
          ghidra::str::append((std::string *)local_30,pbVar6);
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_34) {
            pnVar9 = (nothrow_t *)(local_34 + 1);
            pvVar8 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar8 = *(void **)((int)local_48[0] + -4);
              pnVar9 = (nothrow_t *)(local_34 + 0x24);
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar8,pnVar9);
          }
          ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x3c),(std::string *)local_30)
          ;
          if (param_1 != (TextEngine *)0x0) {
            ghidra::str::ctor(abStack_80,(std::string *)local_30);
            (param_1)->addLine();
          }
          if (0xf < local_1c) {
            pnVar9 = (nothrow_t *)(local_1c + 1);
            pvVar8 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar8 = *(void **)((int)local_30[0] + -4);
              pnVar9 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar8,pnVar9);
          }
        }
        goto LAB_0048b80e;
      }
      ghidra::str::assign
                ((std::string *)((char *)this + 0x3c),"`^Error: station does not want this good",0x28);
      this_01 = extraout_ECX_00;
    }
    if (param_1 != (TextEngine *)0x0) {
      (this_01)->addLinef((char *)param_1);
    }
  }
LAB_0048b80e:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar1 = __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// Ghidra: bool __thiscall TradeEngine::currentSaleValid(TradeEngine *this,Shop param_1,TextEngine *param_2)
bool TradeEngine::currentSaleValid(Shop param_1, TextEngine * param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar1 + 4 + param_1 * 0x44) == 2) {
    if (param_1 == 0) {
      bVar3 = currentCommoditySaleValid(this,param_2);
      return bVar3;
    }
    if (param_1 == 2) {
      bVar3 = currentBlackMarketSaleValid(this,param_2);
      return bVar3;
    }
    if ((((param_1 == 1) && (uVar2 = *(uint *)(iVar1 + 0x5c), uVar2 != 0xffffffff)) &&
        (*(int *)(iVar1 + 0x60) != 0)) &&
       ((-1 < (int)uVar2 &&
        (uVar2 < (uint)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x48) -
                        *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) >> 2))))) {
      return true;
    }
  }
  return false;
}


// Ghidra: int __thiscall TradeEngine::maxCanAffordForCurrentTrade(TradeEngine *this,Shop param_1)
int TradeEngine::maxCanAffordForCurrentTrade(Shop param_1)

{
  TradeLocation *this_00;
  Good *pGVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool extraout_CL;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  GameData *pGVar8;
  std::string abStack_5c [16];
  undefined4 uStack_4c;
  std::string abStack_44 [12];
  undefined4 uStack_38;
  int local_1c;
  int local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  pGVar8 = g_gameData;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bb848;
  // [seh] local_10 = ExceptionList;
  iVar4 = *(int *)(*(int *)((char *)this + 0x11c) + 4 + param_1 * 0x44);
  iVar3 = *(int *)((char *)this + 0x11c) + param_1 * 0x44;
  if (iVar4 != 1) {
    if (((iVar4 == 2) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != -1)) &&
       (ExceptionList = &local_10, pGVar1 = ((GameData *)&DAT_00000002)->getGood(iVar3),
       pGVar1 != (Good *)0x0)) {
      iVar3 = CargoHold::amountHeld
                        (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar1);
      // [seh] ExceptionList = local_10;
      return iVar3;
    }
    // [seh] ExceptionList = local_10;
    return 0;
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 == -1) {
    return 0;
  }
  local_18 = -1;
  this_00 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  if (iVar3 < 1000) {
    // [seh] ExceptionList = &local_10;
    pGVar1 = ((GameData *)&DAT_00000001)->getGood(iVar3);
  }
  else {
    local_18 = iVar3 + -1000;
    uStack_4c = 0x48bac0;
    // [seh] ExceptionList = &local_10;
    ghidra::str::ctor
              (abStack_44,
               *(std::string **)(*(int *)(*(int *)(g_gameData + 0x13c) + local_18 * 4) + 0x58));
    pGVar1 = GameData::getGoodWithShortName();
    pGVar8 = g_gameData;
  }
  if (pGVar1 == (Good *)0x0) {
    // [seh] ExceptionList = local_10;
    return 0;
  }
  local_1c = (this_00)->goodAmount(iVar3);
  if (iVar3 < 1000) {
    uStack_38 = 0x48bbb1;
    iVar3 = (this_00)->singleBaseGoodCost(iVar3, extraout_CL);
LAB_0048bbb6:
    if (0 < iVar3) {
      iVar3 = *(int *)(*(int *)(pGVar8 + 0x124) + 0x1c) / iVar3;
      goto LAB_0048bb75;
    }
  }
  else {
    uVar5 = 0;
    local_1c = *(int *)(*(int *)(*(int *)(*(int *)(pGVar8 + 0x13c) + local_18 * 4) + 0x58) + 0x18);
    puVar2 = *(undefined4 **)(pGVar8 + 0x84);
    uVar7 = *(int *)(pGVar8 + 0x88) - (int)puVar2 >> 2;
    if (uVar7 != 0) {
      do {
        piVar6 = (int *)*puVar2;
        if (*piVar6 == *(int *)pGVar1) goto LAB_0048bb33;
        uVar5 = uVar5 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar5 < uVar7);
    }
    piVar6 = (int *)0x0;
LAB_0048bb33:
    uStack_4c = 0x48bb46;
    ghidra::str::ctor(abStack_44,(std::string *)piVar6[7]);
    // [seh] local_8 = 0;
    ghidra::str::ctor(abStack_5c,(std::string *)this_00);
    // [seh] local_8 = 0xffffffff;
    iVar3 = GameLogic::getPurchaseGoodValueInPlayerContracts();
    pGVar8 = g_gameData;
    if (iVar3 != -1) goto LAB_0048bbb6;
  }
  iVar3 = 0;
LAB_0048bb75:
  if (local_1c <= iVar3) {
    iVar3 = local_1c;
  }
  iVar4 = (*(CargoHold **)(*(int *)(pGVar8 + 0xd0) + 0x1f8))->amountCanHold(pGVar1);
  if (iVar3 <= iVar4) {
    iVar4 = iVar3;
  }
  // [seh] ExceptionList = local_10;
  return iVar4;
}


// Ghidra: int __thiscall TradeEngine::maxForCurrentTrade(TradeEngine *this,Shop param_1)
int TradeEngine::maxForCurrentTrade(Shop param_1)

{
  int iVar1;
  TradeLocation *this_00;
  Good *pGVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  std::string abStack_24 [16];
  undefined4 uStack_14;
  
  iVar3 = *(int *)((char *)this + 0x11c) + param_1 * 0x44;
  if (param_1 == 0) {
    iVar5 = *(int *)(iVar3 + 4);
    if (iVar5 == 1) {
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == -1) {
        return 0;
      }
      if (999 < iVar3) {
        return *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + -4000 + iVar3 * 4) + 0x58)
                       + 0x18);
      }
      uStack_14 = 0x48bc8c;
      pGVar2 = ((GameData *)&DAT_00000001)->getGood(iVar3);
      if (pGVar2 == (Good *)0x0) {
        return 0;
      }
      uVar4 = 0;
      iVar5 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
      iVar1 = *(int *)(iVar5 + 0x70);
      uVar6 = *(int *)(iVar5 + 0x74) - iVar1 >> 2;
      if (uVar6 == 0) {
        return 0;
      }
      do {
        iVar5 = *(int *)(iVar1 + uVar4 * 4);
        if (*(int *)(iVar5 + 0x14) == iVar3) {
          return *(int *)(iVar5 + 0x10);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar6);
      return 0;
    }
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    iVar5 = *(int *)(iVar3 + 4);
    if (iVar5 == 1) {
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == -1) {
        return 0;
      }
      this_00 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
      if (iVar3 < 1000) {
        uStack_14 = 0x48bd67;
        pGVar2 = (g_gameData)->getGood(iVar3);
      }
      else {
        ghidra::str::ctor
                  (abStack_24,
                   *(std::string **)
                    (*(int *)(*(int *)(g_gameData + 0x13c) + -4000 + iVar3 * 4) + 0x58));
        pGVar2 = GameData::getGoodWithShortName();
      }
      if (pGVar2 == (Good *)0x0) {
        return 0;
      }
      uStack_14 = 0x48bd77;
      iVar3 = (this_00)->goodAmountWire(iVar3);
      return iVar3;
    }
  }
  if ((iVar5 == 2) && (*(int *)(iVar3 + 0x18) != -1)) {
    uStack_14 = 0x48bce9;
    pGVar2 = ((GameData *)&DAT_00000002)->getGood(*(int *)(iVar3 + 0x18));
    if (pGVar2 != (Good *)0x0) {
      uStack_14 = 0x48bd05;
      iVar3 = CargoHold::amountHeld
                        (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar2);
      return iVar3;
    }
  }
  return 0;
}


// Ghidra: void __thiscall TradeEngine::selectRightSide(TradeEngine *this,Shop param_1)
void TradeEngine::selectRightSide(Shop param_1)

{
  int iVar1;
  TradeLocation *this_00;
  GameData *pGVar2;
  int iVar3;
  std::string abStack_2c [16];
  undefined4 uStack_1c;
  
  iVar1 = *(int *)((char *)this + 0x11c) + param_1 * 0x44;
  iVar3 = *(int *)(iVar1 + 0xc);
  if (iVar3 < 0) {
    iVar3 = *(int *)(iVar1 + 0x18);
  }
  else {
    *(int *)(iVar1 + 0x18) = iVar3;
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  pGVar2 = g_gameData;
  this_00 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = 1;
    if (param_1 == 0) {
      if (999 < iVar3) {
        ghidra::str::ctor
                  (abStack_2c,
                   *(std::string **)
                    (*(int *)(*(int *)(pGVar2 + 0x13c) + -4000 + iVar3 * 4) + 0x58));
        GameData::getGoodWithShortName();
      }
      uStack_1c = 0x48be10;
      iVar3 = maxForCurrentTrade(this,0);
      *(int *)(iVar1 + 0x1c) = iVar3;
      return;
    }
    if (param_1 == 2) {
      if (999 < iVar3) {
        ghidra::str::ctor
                  (abStack_2c,
                   *(std::string **)
                    (*(int *)(*(int *)(pGVar2 + 0x13c) + -4000 + iVar3 * 4) + 0x58));
        GameData::getGoodWithShortName();
      }
      uStack_1c = 0x48be53;
      iVar3 = (this_00)->goodAmountWire(iVar3);
      *(int *)(iVar1 + 0x1c) = iVar3;
      return;
    }
    if (param_1 == 1) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      return;
    }
  }
  return;
}


// Ghidra: void __thiscall TradeEngine::selectLeftSide(TradeEngine *this,Shop param_1)
void TradeEngine::selectLeftSide(Shop param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((char *)this + 0x11c) + param_1 * 0x44;
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 < 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
  }
  else {
    *(int *)(iVar1 + 0x18) = iVar2;
    *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = 2;
    if (param_1 == 0) {
      iVar2 = getBestAmountToSellOf(this,iVar2);
      *(int *)(iVar1 + 0x1c) = iVar2;
      return;
    }
    if (param_1 == 2) {
      iVar2 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountHeld(iVar2);
      *(int *)(iVar1 + 0x1c) = iVar2;
      return;
    }
    if (param_1 == 1) {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
      return;
    }
  }
  return;
}


// Ghidra: int __thiscall TradeEngine::getBestAmountToSellOf(TradeEngine *this,int param_1)
int TradeEngine::getBestAmountToSellOf(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  Good *pGVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_ESI;
  GameData *pGVar8;
  char *unaff_EDI;
  std::string abStack_3c [12];
  undefined4 uStack_30;
  Good *local_18;
  Ship *local_10;
  int local_c;
  int local_8;
  
  pGVar8 = g_gameData;
  local_8 = 0;
  local_c = 0;
  iVar2 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountHeld(param_1);
  uVar6 = 0;
  puVar3 = *(undefined4 **)(pGVar8 + 0x84);
  uVar7 = *(int *)(pGVar8 + 0x88) - (int)puVar3 >> 2;
  if (uVar7 != 0) {
    do {
      local_18 = (Good *)*puVar3;
      if (*(int *)local_18 == param_1) goto LAB_0048bf76;
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar7);
  }
  local_18 = (Good *)0x0;
LAB_0048bf76:
  uVar6 = 0;
  iVar5 = *(int *)(pGVar8 + 0x13c);
  if (*(int *)(pGVar8 + 0x140) - iVar5 >> 2 != 0) {
    do {
      iVar5 = *(int *)(iVar5 + uVar6 * 4);
      if (*(int *)(*(int *)(iVar5 + 0x54) + 0x18) != 0) {
        ghidra::str::ctor(abStack_3c,*(std::string **)(iVar5 + 0x58));
        pGVar4 = GameData::getGoodWithShortName();
        pGVar8 = g_gameData;
        if (pGVar4 == local_18) {
          local_10 = ShipData::currentlyBoardedShip + 0x238;
          if (0xf < *(uint *)(ShipData::currentlyBoardedShip + 0x24c)) {
            local_10 = *(Ship **)local_10;
          }
          iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + uVar6 * 4) + 0x58) +
                          0x20);
          uStack_30 = 0x48c008;
          bVar1 = ghidra::lib::_Traits_equal_t
                            ((char *)local_10,*(uint *)(ShipData::currentlyBoardedShip + 0x248),
                             unaff_EDI,unaff_ESI);
          if (bVar1) {
            local_8 = local_8 + iVar5;
          }
          else {
            local_c = local_c + iVar5;
          }
        }
      }
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(pGVar8 + 0x13c);
    } while (uVar6 < (uint)(*(int *)(pGVar8 + 0x140) - iVar5 >> 2));
    if (local_8 < 1) {
      if (0 < local_c) {
        iVar5 = 0;
        if (-1 < iVar2 - local_c) {
          iVar5 = iVar2 - local_c;
        }
        return iVar5;
      }
    }
    else if (local_8 <= iVar2) {
      return local_8;
    }
  }
  return iVar2;
}


// Ghidra: void __thiscall TradeEngine::getCurrentTopStr(TradeEngine *this,Shop param_1)
void TradeEngine::getCurrentTopStr(Shop param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  TradeLocation *pTVar3;
  int *piVar4;
  ShipComponent *this_00;
  undefined1 uVar5;
  bool bVar6;
  Good *pGVar7;
  char *pcVar8;
  char *pcVar9;
  std::string *pbVar10;
  void *pvVar11;
  int extraout_ECX;
  TradeEngine *pTVar12;
  nothrow_t *pnVar13;
  ComponentClass *this_01;
  int in_stack_00000008;
  undefined4 uStack_8c;
  uint uVar14;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005bb9d8;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar1 = *(int *)((char *)this + 0x11c);
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = local_44 & 0xffffff00;
  // [seh] local_8 = 0;
  uStack_7 = 0;
  if (in_stack_00000008 == 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 == 1) {
      pTVar3 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 < 1000) {
        pGVar7 = (g_gameData)->getGood(iVar1);
        (pTVar3)->goodAmount(*(int *)pGVar7);
      }
      else {
        ghidra::str::ctor
                  ((std::string *)&uStack_8c,
                   *(std::string **)
                    (*(int *)(*(int *)(g_gameData + 0x13c) + iVar1 * 4 + -4000) + 0x58));
        GameData::getGoodWithShortName();
      }
      pcVar8 = (char *)strUsingArgs((char *)local_5c);
      // [seh] local_8 = 1;
      pcVar9 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar9 = *(char **)pcVar8;
      }
      ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
      // [seh] local_8 = 0;
      if (0xf < local_48) {
        pnVar13 = (nothrow_t *)(local_48 + 1);
        pvVar11 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)local_5c[0] + -4);
          pnVar13 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar13);
      }
      pcVar8 = (char *)strUsingArgs((char *)local_5c);
      // [seh] local_8 = 2;
      pcVar9 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar9 = *(char **)pcVar8;
      }
      ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
      // [seh] local_8 = 0;
      if (0xf < local_48) {
        pnVar13 = (nothrow_t *)(local_48 + 1);
        pvVar11 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)local_5c[0] + -4);
          pnVar13 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar13);
      }
      pcVar8 = (char *)strUsingArgs((char *)local_5c);
      // [seh] local_8 = 3;
      pcVar9 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar9 = *(char **)pcVar8;
      }
      ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
      if (0xf < local_48) {
        pnVar13 = (nothrow_t *)(local_48 + 1);
        pvVar11 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)local_5c[0] + -4);
          pnVar13 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_0048cb55;
      }
    }
    else {
      if (iVar2 == 2) {
        pGVar7 = ((GameData *)this)->getGood(*(int *)(iVar1 + 0x18));
        pcVar8 = (char *)strUsingArgs((char *)local_5c);
        // [seh] local_8 = 4;
        pcVar9 = pcVar8;
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar9 = *(char **)pcVar8;
        }
        ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
        // [seh] local_8 = 0;
        if (0xf < local_48) {
          pnVar13 = (nothrow_t *)(local_48 + 1);
          pvVar11 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_5c[0] + -4);
            pnVar13 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar13);
        }
        pcVar8 = (char *)strUsingArgs((char *)local_5c);
        // [seh] local_8 = 5;
        pcVar9 = pcVar8;
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar9 = *(char **)pcVar8;
        }
        ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
        // [seh] local_8 = 0;
        if (0xf < local_48) {
          pnVar13 = (nothrow_t *)(local_48 + 1);
          pvVar11 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_5c[0] + -4);
            pnVar13 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar13);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountHeld(*(int *)pGVar7);
        pcVar9 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 6;
        uVar14 = *(uint *)(pcVar9 + 0x14);
        goto joined_r0x0048c817;
      }
      if (iVar2 == 3) {
        ((GameData *)this)->getGood(*(int *)(iVar1 + 0x20));
        pcVar8 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 7;
        pcVar9 = pcVar8;
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar9 = *(char **)pcVar8;
        }
        ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar13);
        }
        pcVar8 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 8;
        pcVar9 = pcVar8;
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar9 = *(char **)pcVar8;
        }
        ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar13);
        }
        pcVar8 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 9;
        pcVar9 = pcVar8;
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar9 = *(char **)pcVar8;
        }
        ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_0048cb55;
        }
      }
      else if (iVar2 == 4) {
        ((GameData *)this)->getGood(*(int *)(iVar1 + 0x20));
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 10;
        ghidra::str::append((std::string *)&local_44,pbVar10);
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar13);
        }
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0xb;
        ghidra::str::append((std::string *)&local_44,pbVar10);
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar13);
        }
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0xc;
        ghidra::str::append((std::string *)&local_44,pbVar10);
        goto LAB_0048c413;
      }
    }
  }
  else {
    if (in_stack_00000008 != 2) {
      if (in_stack_00000008 == 1) {
        iVar2 = *(int *)(iVar1 + 0x48);
        if (iVar2 == 1) {
          piVar4 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398
                                              ) + 100) + *(int *)(iVar1 + 0x5c) * 4);
          iVar1 = *(int *)(*(int *)(*piVar4 + 4) + 0x80);
          if ((iVar1 == 10) || (iVar1 == 0xb)) {
            pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8 = 0x19;
          }
          else {
            pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8 = 0x1a;
          }
          ghidra::str::append((std::string *)&local_44,pbVar10);
          // [seh] local_8 = 0;
          if (0xf < local_18) {
            pnVar13 = (nothrow_t *)(local_18 + 1);
            pvVar11 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar11 = *(void **)((int)local_2c[0] + -4);
              pnVar13 = (nothrow_t *)(local_18 + 0x24);
              uVar5 = local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
            }
            operator_delete(pvVar11,pnVar13);
          }
          pcVar8 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x1b;
          pcVar9 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar9 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
          // [seh] local_8 = 0;
          if (0xf < local_18) {
            pnVar13 = (nothrow_t *)(local_18 + 1);
            pvVar11 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar11 = *(void **)((int)local_2c[0] + -4);
              pnVar13 = (nothrow_t *)(local_18 + 0x24);
              uVar5 = local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
            }
            operator_delete(pvVar11,pnVar13);
          }
          pcVar8 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x1c;
          pcVar9 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar9 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
          // [seh] local_8 = 0;
          if (0xf < local_18) {
            pnVar13 = (nothrow_t *)(local_18 + 1);
            pvVar11 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar11 = *(void **)((int)local_2c[0] + -4);
              pnVar13 = (nothrow_t *)(local_18 + 0x24);
              uVar5 = local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
            }
            operator_delete(pvVar11,pnVar13);
          }
          if (*(int *)(*(int *)(*piVar4 + 4) + 0x80) == 10) {
            pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8 = 0x1d;
            ghidra::str::append((std::string *)&local_44,pbVar10);
            // [seh] local_8 = 0;
            if (0xf < local_18) {
              pnVar13 = (nothrow_t *)(local_18 + 1);
              pvVar11 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar13) {
                pvVar11 = *(void **)((int)local_2c[0] + -4);
                pnVar13 = (nothrow_t *)(local_18 + 0x24);
                uVar5 = local_8;
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
              }
              operator_delete(pvVar11,pnVar13);
            }
          }
          ghidra::str::append((std::string *)&local_44,"\n",1);
          uStack_8c = 0x48cdcb;
          pcVar8 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x1e;
          pcVar9 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar9 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
          // [seh] local_8 = 0;
          if (0xf < local_18) {
            pnVar13 = (nothrow_t *)(local_18 + 1);
            pvVar11 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar11 = *(void **)((int)local_2c[0] + -4);
              pnVar13 = (nothrow_t *)(local_18 + 0x24);
              uVar5 = local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
            }
            operator_delete(pvVar11,pnVar13);
          }
          uStack_8c = 0x48ce59;
          pcVar8 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x1f;
          pcVar9 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar9 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
          // [seh] local_8 = 0;
          if (0xf < local_18) {
            pnVar13 = (nothrow_t *)(local_18 + 1);
            pvVar11 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar13) {
              pvVar11 = *(void **)((int)local_2c[0] + -4);
              pnVar13 = (nothrow_t *)(local_18 + 0x24);
              uVar5 = local_8;
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
            }
            operator_delete(pvVar11,pnVar13);
          }
          uStack_8c = 0x48cee0;
          pcVar8 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x20;
          pcVar9 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar9 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          pcVar8 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x21;
          pcVar9 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar9 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          ghidra::str::append
                    ((std::string *)&local_44,"`7State     : `0undamaged\n",0x1a);
          pcVar8 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x22;
          pcVar9 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar9 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
        }
        else {
          if (iVar2 != 2) {
            if (iVar2 == 3) {
              pTVar12 = this + 0xc;
            }
            else {
              if (iVar2 != 4) goto LAB_0048cf9a;
              pTVar12 = this + 0x24;
            }
            ghidra::str::ctor((std::string *)param_1,(std::string *)pTVar12)
            ;
            // [mislabelled-dtor] word::~word((word *)&local_44);
            goto LAB_0048cfbe;
          }
          this_00 = *(ShipComponent **)
                     (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) +
                     *(int *)(iVar1 + 0x5c) * 4);
          (this_00)->getDamageAsModifier();
          bVar6 = (this_01)->isAddon();
          if (bVar6) {
            pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8 = 0x23;
          }
          else {
            pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8 = 0x24;
          }
          ghidra::str::append((std::string *)&local_44,pbVar10);
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x25;
          ghidra::str::append((std::string *)&local_44,pbVar10);
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x26;
          ghidra::str::append((std::string *)&local_44,pbVar10);
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          bVar6 = (*(ComponentClass **)(this_00 + 4))->isAddon();
          if ((bVar6) && (*(int *)(extraout_ECX + 0x80) == 10)) {
            pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
            // [seh] local_8 = 0x27;
            ghidra::str::append((std::string *)&local_44,pbVar10);
            // [seh] local_8 = 0;
            // [mislabelled-dtor] word::~word((word *)local_2c);
          }
          ghidra::str::append((std::string *)&local_44,"\n",1);
          uStack_8c = 0x48d1ac;
          pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x28;
          ghidra::str::append((std::string *)&local_44,pbVar10);
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          uStack_8c = 0x48d1ff;
          pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x29;
          ghidra::str::append((std::string *)&local_44,pbVar10);
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          uStack_8c = 0x48d24b;
          pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x2a;
          ghidra::str::append((std::string *)&local_44,pbVar10);
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x2b;
          ghidra::str::append((std::string *)&local_44,pbVar10);
          // [seh] local_8 = 0;
          // [mislabelled-dtor] word::~word((word *)local_2c);
          if ((float)*(int *)(*(int *)(this_00 + 4) + 0x14) <= *(float *)this_00) {
            if ((float)*(int *)(*(int *)(this_00 + 4) + 0x10) <= *(float *)this_00) {
              pcVar9 = "`7State     : `0undamaged\n";
              uVar14 = 0x1a;
            }
            else {
              pcVar9 = "`7State     : `@non-functional\n";
              uVar14 = 0x1f;
            }
          }
          else {
            uVar14 = 0x18;
            pcVar9 = "`7State     : `^damaged\n";
          }
          ghidra::str::append((std::string *)&local_44,pcVar9,uVar14);
          pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 0x2c;
          ghidra::str::append((std::string *)&local_44,pbVar10);
        }
        // [mislabelled-dtor] word::~word((word *)local_2c);
      }
      goto LAB_0048cf9a;
    }
    iVar2 = *(int *)(iVar1 + 0x8c);
    if (iVar2 == 1) {
      iVar1 = *(int *)(iVar1 + 0xa0);
      pTVar3 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
      if (iVar1 < 1000) {
        pGVar7 = (g_gameData)->getGood(iVar1);
      }
      else {
        ghidra::str::ctor
                  ((std::string *)&uStack_8c,
                   *(std::string **)
                    (*(int *)(*(int *)(g_gameData + 0x13c) + -4000 + iVar1 * 4) + 0x58));
        pGVar7 = GameData::getGoodWithShortName();
      }
      pcVar8 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 0xd;
      pcVar9 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar9 = *(char **)pcVar8;
      }
      ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
      // [seh] local_8 = 0;
      uVar5 = local_8;
      // [seh] local_8 = 0;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
        }
        operator_delete(pvVar11,pnVar13);
      }
      pcVar8 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 0xe;
      pcVar9 = pcVar8;
      if (0xf < *(uint *)(pcVar8 + 0x14)) {
        pcVar9 = *(char **)pcVar8;
      }
      ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
      // [seh] local_8 = 0;
      if (0xf < local_18) {
        pnVar13 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar13 = (nothrow_t *)(local_18 + 0x24);
          uVar5 = local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
        }
        operator_delete(pvVar11,pnVar13);
      }
      (pTVar3)->goodAmountWire(*(int *)pGVar7);
      pcVar9 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 0xf;
      uVar14 = *(uint *)(pcVar9 + 0x14);
joined_r0x0048c817:
      pcVar8 = pcVar9;
      if (0xf < uVar14) {
        pcVar8 = *(char **)pcVar9;
      }
      ghidra::str::append((std::string *)&local_44,pcVar8,*(uint *)(pcVar9 + 0x10));
    }
    else {
      if (iVar2 == 2) {
        pGVar7 = ((GameData *)this)->getGood(*(int *)(iVar1 + 0xa0));
        pcVar8 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0x10;
        pcVar9 = pcVar8;
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar9 = *(char **)pcVar8;
        }
        ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            uVar5 = local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
          }
          operator_delete(pvVar11,pnVar13);
        }
        pcVar8 = (char *)strUsingArgs((char *)local_5c);
        // [seh] local_8 = 0x11;
        pcVar9 = pcVar8;
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar9 = *(char **)pcVar8;
        }
        ghidra::str::append((std::string *)&local_44,pcVar9,*(uint *)(pcVar8 + 0x10));
        // [seh] local_8 = 0;
        if (0xf < local_48) {
          pnVar13 = (nothrow_t *)(local_48 + 1);
          pvVar11 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_5c[0] + -4);
            pnVar13 = (nothrow_t *)(local_48 + 0x24);
            uVar5 = local_8;
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
          }
          operator_delete(pvVar11,pnVar13);
        }
        local_4c = 0;
        local_48 = 0xf;
        local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
        (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountHeld(*(int *)pGVar7);
        pcVar9 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0x12;
        uVar14 = *(uint *)(pcVar9 + 0x14);
        goto joined_r0x0048c817;
      }
      if (iVar2 == 3) {
        ((GameData *)this)->getGood(*(int *)(iVar1 + 0xa8));
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0x13;
        ghidra::str::append((std::string *)&local_44,pbVar10);
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            uVar5 = local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
          }
          operator_delete(pvVar11,pnVar13);
        }
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0x14;
        ghidra::str::append((std::string *)&local_44,pbVar10);
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            uVar5 = local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
          }
          operator_delete(pvVar11,pnVar13);
        }
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0x15;
        ghidra::str::append((std::string *)&local_44,pbVar10);
      }
      else {
        if (iVar2 != 4) goto LAB_0048cf9a;
        ((GameData *)this)->getGood(*(int *)(iVar1 + 0xa8));
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0x16;
        ghidra::str::append((std::string *)&local_44,pbVar10);
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            uVar5 = local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
          }
          operator_delete(pvVar11,pnVar13);
        }
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0x17;
        ghidra::str::append((std::string *)&local_44,pbVar10);
        // [seh] local_8 = 0;
        if (0xf < local_18) {
          pnVar13 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar13) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar13 = (nothrow_t *)(local_18 + 0x24);
            uVar5 = local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0048c445;
          }
          operator_delete(pvVar11,pnVar13);
        }
        pbVar10 = (std::string *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 0x18;
        ghidra::str::append((std::string *)&local_44,pbVar10);
      }
    }
LAB_0048c413:
    if (0xf < local_18) {
      pnVar13 = (nothrow_t *)(local_18 + 1);
      pvVar11 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar11 = *(void **)((int)local_2c[0] + -4);
        pnVar13 = (nothrow_t *)(local_18 + 0x24);
        uVar5 = local_8;
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
LAB_0048c445:
          // [seh] local_8 = uVar5;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_0048cb55:
      operator_delete(pvVar11,pnVar13);
    }
  }
LAB_0048cf9a:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)param_1 = local_44;
  *(undefined4 *)(param_1 + 4) = uStack_40;
  *(undefined4 *)(param_1 + 8) = uStack_3c;
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_30,local_34);
LAB_0048cfbe:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: Shop __thiscall TradeEngine::getCurrentIcon(TradeEngine *this,Shop param_1)
Shop TradeEngine::getCurrentIcon(Shop param_1)

{
  int iVar1;
  GameData *this_00;
  int iVar2;
  int in_stack_00000008;
  std::string abStack_24 [4];
  undefined4 uStack_20;
  
  iVar2 = *(int *)((char *)this + 0x11c) + in_stack_00000008 * 0x44;
  if ((in_stack_00000008 == 0) || (in_stack_00000008 == 2)) {
    this_00 = *(GameData **)(iVar2 + 4);
    if ((this_00 == (GameData *)&DAT_00000004) || (this_00 == (GameData *)0x3)) {
      iVar2 = *(int *)(iVar2 + 0x20);
      if (999 < iVar2) {
        (this_00)->getGood(iVar2 + -1000);
        strUsingArgs((char *)param_1);
        return param_1;
      }
      if (iVar2 != -1) {
        (this_00)->getGood(iVar2);
        strUsingArgs((char *)param_1);
        return param_1;
      }
    }
    else if (((this_00 == (GameData *)&DAT_00000002) || (this_00 == (GameData *)&DAT_00000001)) &&
            (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != -1)) {
      if (iVar2 < 1000) {
        (this_00)->getGood(iVar2);
      }
      else {
        ghidra::str::ctor
                  (abStack_24,
                   *(std::string **)
                    (*(int *)(*(int *)(g_gameData + 0x13c) + -4000 + iVar2 * 4) + 0x58));
        GameData::getGoodWithShortName();
      }
      strUsingArgs((char *)param_1);
      return param_1;
    }
  }
  else if (in_stack_00000008 == 1) {
    iVar1 = *(int *)(iVar2 + 4);
    if ((iVar1 == 4) || (iVar1 == 3)) {
      ghidra::str::ctor
                ((std::string *)param_1,(std::string *)(iVar2 + 0x28));
      return param_1;
    }
    if (iVar1 == 2) {
      if (*(int *)(iVar2 + 0x18) != -1) {
        iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) +
                        *(int *)(iVar2 + 0x18) * 4);
LAB_0048d3af:
        (*(ComponentClass **)(iVar2 + 4))->isAddon();
        uStack_20 = 0x48d3e1;
        strUsingArgs((char *)param_1);
        return param_1;
      }
    }
    else if ((iVar1 == 1) && (*(int *)(iVar2 + 0x18) != -1)) {
      iVar2 = **(int **)(*(int *)(*(int *)(ShipData::currentlyBoardedShip + 0x398) + 100) +
                        *(int *)(iVar2 + 0x18) * 4);
      goto LAB_0048d3af;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined1 *)param_1 = 0;
  ghidra::str::assign((std::string *)param_1,"",0);
  return param_1;
}


// Ghidra: void __thiscall TradeEngine::performCommodityTrade(TradeEngine *this,TextEngine *param_1)
void TradeEngine::performCommodityTrade(TextEngine * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff50[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  TradeLocation *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  word *pwVar9;
  Stats *pSVar10;
  Good *pGVar11;
  int iVar12;
  uint uVar13;
  int extraout_ECX;
  TextEngine *pTVar14;
  TextEngine *extraout_ECX_00;
  TextEngine *this_00;
  uint extraout_ECX_01;
  Good *pGVar15;
  void *pvVar16;
  TextEngine *extraout_ECX_02;
  TextEngine *this_01;
  uint extraout_ECX_03;
  nothrow_t *pnVar17;
  uint uVar18;
  std::string local_c8 [12];
  undefined4 uStack_bc;
  std::string abStack_ac [8];
  undefined4 uStack_a4;
  uint local_94;
  Good *local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bba56;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  iVar1 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar1 + 4) == 1) {
    iVar12 = *(int *)(iVar1 + 0x18);
    pTVar2 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
    if (iVar12 < 1000) {
      // [seh] puStack_20 = &stack0xfffffffc;
      local_58 = ((GameData *)this)->getGood(iVar12);
    }
    else {
      // [seh] puStack_20 = &stack0xfffffffc;
      ghidra::str::ctor
                ((std::string *)&local_94,
                 *(std::string **)
                  (*(int *)(*(int *)(g_gameData + 0x13c) + -4000 + iVar12 * 4) + 0x58));
      local_58 = GameData::getGoodWithShortName();
      iVar12 = *(int *)local_58;
    }
    iVar8 = (pTVar2)->goodCost(iVar12, *(int *)(iVar1 + 0x1c), true);
    *(int *)(iVar1 + 0x40) = iVar8;
    ghidra::str::ctor
              ((std::string *)&local_94,*(std::string **)(local_58 + 0x1c));
    local_14 = 0;
    ghidra::str::ctor(abStack_ac,(std::string *)pTVar2);
    local_14 = 0xffffffff;
    GameLogic::trackGoodsBought();
    bVar7 = CargoHold::addToHold
                      (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),iVar12,
                       *(int *)(iVar1 + 0x1c),extraout_ECX);
    if (bVar7) {
      (pTVar2)->removeGoods(iVar12, *(int *)(iVar1 + 0x1c));
      ghidra::str::ctor
                ((std::string *)&local_94,(std::string *)(local_58 + 4));
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
      local_94 = 0x48d6ea;
      pwVar9 = (word *)strUsingArgs((char *)local_54);
      pTVar14 = (TextEngine *)((char *)this + 0xc);
      if (pTVar14 != (TextEngine *)pwVar9) {
        // [mislabelled-dtor] word::~word((word *)pTVar14);
        uVar3 = *(undefined4 *)(pwVar9 + 4);
        uVar4 = *(undefined4 *)(pwVar9 + 8);
        uVar5 = *(undefined4 *)(pwVar9 + 0xc);
        *(undefined4 *)((char *)this + 0xc) = *(undefined4 *)pwVar9;
        *(undefined4 *)((char *)this + 0x10) = uVar3;
        *(undefined4 *)((char *)this + 0x14) = uVar4;
        *(undefined4 *)((char *)this + 0x18) = uVar5;
        *(undefined8 *)((char *)this + 0x1c) = *(undefined8 *)(pwVar9 + 0x10);
        *(undefined4 *)(pwVar9 + 0x10) = 0;
        *(undefined4 *)(pwVar9 + 0x14) = 0xf;
        *pwVar9 = (word)0x0;
        pTVar14 = (TextEngine *)this;
      }
      if (0xf < local_40) {
        pnVar17 = (nothrow_t *)(local_40 + 1);
        pvVar16 = local_54[0];
        if ((nothrow_t *)0xfff < pnVar17) {
          pvVar16 = *(void **)((int)local_54[0] + -4);
          pnVar17 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar16,pnVar17);
        pTVar14 = extraout_ECX_00;
      }
      if (param_1 != (TextEngine *)0x0) {
        (pTVar14)->addLinef((char *)param_1);
        (this_00)->addLinef((char *)param_1);
      }
      local_94 = 0x48d7b1;
      debugPrint("DETAIL","Bought %dx%s for %dc");
      local_94 = extraout_ECX_01 & 0xffffff00;
      ghidra::str::assign((std::string *)&local_94,"non_contract_trades",0x13);
      local_14 = 1;
      if (Singleton<Stats>::instance == (Stats *)0x0) {
        pSVar10 = operator_new(0x58);
        local_14 = CONCAT31(local_14._1_3_,2);
        Singleton<Stats>::instance = (Stats *)new ((void *)(pSVar10)) Stats();
      }
      local_14 = 0xffffffff;
      (Singleton<Stats>::instance)->addStat();
      uStack_a4 = 0x48d83a;
      ghidra::str::assign((std::string *)&stack0xffffff68,"",0);
      local_14 = 3;
      uStack_bc = 0x48d866;
      ghidra::str::assign((std::string *)&stack0xffffff50,"non_contract_trades",0x13);
      local_14 = CONCAT31(local_14._1_3_,4);
      local_c8[0] = (std::string)0x0;
      ghidra::str::assign(local_c8,"commerce",8);
      local_14 = 0xffffffff;
      Analytics::logEvent();
      *(int *)(iVar1 + 0x20) = iVar12;
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      *(undefined4 *)(iVar1 + 4) = 3;
    }
    else if (param_1 != (TextEngine *)0x0) {
      local_94 = local_94 & 0xffffff00;
      ghidra::str::assign
                ((std::string *)&local_94,"`^Error: unable to put cargo in hold. Cancelling.",
                 0x31);
      (param_1)->addLine();
    }
  }
  else {
    puVar6 = &stack0xfffffffc;
    if (*(int *)(iVar1 + 4) != 2) goto LAB_0048db77;
    iVar12 = *(int *)(iVar1 + 0x18);
    pTVar2 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
    pGVar11 = ((GameData *)this)->getGood(iVar12);
    iVar12 = (pTVar2)->goodCost(iVar12, *(int *)(iVar1 + 0x1c), false);
    *(int *)(iVar1 + 0x40) = iVar12;
    (pTVar2)->soldGood(*(int *)pGVar11, *(int *)(iVar1 + 0x1c));
    uVar18 = *(int *)(g_gameData + 0x88) - *(int *)(g_gameData + 0x84) >> 2;
    uVar13 = 0;
    if (uVar18 != 0) {
      do {
        pGVar15 = *(Good **)(*(int *)(g_gameData + 0x84) + uVar13 * 4);
        if (*(int *)pGVar15 == *(int *)(iVar1 + 0x18)) goto LAB_0048d944;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar18);
    }
    pGVar15 = (Good *)0x0;
LAB_0048d944:
    CargoHold::removeFromHold
              (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),pGVar15,*(int *)(iVar1 + 0x1c),
               (int)pGVar15);
    ghidra::str::ctor((std::string *)&local_94,(std::string *)(pGVar11 + 4))
    ;
    (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
    local_94 = 0x48d996;
    pwVar9 = (word *)strUsingArgs((char *)local_3c);
    pTVar14 = (TextEngine *)((char *)this + 0x24);
    if (pTVar14 != (TextEngine *)pwVar9) {
      // [mislabelled-dtor] word::~word((word *)pTVar14);
      uVar3 = *(undefined4 *)(pwVar9 + 4);
      uVar4 = *(undefined4 *)(pwVar9 + 8);
      uVar5 = *(undefined4 *)(pwVar9 + 0xc);
      *(undefined4 *)((char *)this + 0x24) = *(undefined4 *)pwVar9;
      *(undefined4 *)((char *)this + 0x28) = uVar3;
      *(undefined4 *)((char *)this + 0x2c) = uVar4;
      *(undefined4 *)((char *)this + 0x30) = uVar5;
      *(undefined8 *)((char *)this + 0x34) = *(undefined8 *)(pwVar9 + 0x10);
      *(undefined4 *)(pwVar9 + 0x10) = 0;
      *(undefined4 *)(pwVar9 + 0x14) = 0xf;
      *pwVar9 = (word)0x0;
      pTVar14 = (TextEngine *)this;
    }
    if (0xf < local_28) {
      pnVar17 = (nothrow_t *)(local_28 + 1);
      pvVar16 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar16 = *(void **)((int)local_3c[0] + -4);
        pnVar17 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar16))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar16,pnVar17);
      pTVar14 = extraout_ECX_02;
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
    if (param_1 != (TextEngine *)0x0) {
      (pTVar14)->addLinef((char *)param_1);
      (this_01)->addLinef((char *)param_1);
    }
    local_94 = 0x48da6f;
    debugPrint("DETAIL","Sold %dx%s for %dc");
    local_94 = extraout_ECX_03 & 0xffffff00;
    ghidra::str::assign((std::string *)&local_94,"non_contract_sales",0x12);
    local_14 = 5;
    if (Singleton<Stats>::instance == (Stats *)0x0) {
      pSVar10 = operator_new(0x58);
      local_14 = CONCAT31(local_14._1_3_,6);
      Singleton<Stats>::instance = (Stats *)new ((void *)(pSVar10)) Stats();
    }
    local_14 = 0xffffffff;
    (Singleton<Stats>::instance)->addStat();
    uStack_a4 = 0x48daf8;
    ghidra::str::assign((std::string *)&stack0xffffff68,"",0);
    local_14 = 7;
    uStack_bc = 0x48db24;
    ghidra::str::assign((std::string *)&stack0xffffff50,"non_contract_sales",0x12);
    local_14 = CONCAT31(local_14._1_3_,8);
    local_c8[0] = (std::string)0x0;
    ghidra::str::assign(local_c8,"commerce",8);
    local_14 = 0xffffffff;
    Analytics::logEvent();
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 4) = 4;
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
  puVar6 = puStack_20;
LAB_0048db77:
  // [seh] puStack_20 = puVar6;
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall TradeEngine::performBlackMarketTrade(TradeEngine *this,TextEngine *param_1)
void TradeEngine::performBlackMarketTrade(TextEngine * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  int iVar2;
  TradeLocation *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GameData *pGVar7;
  bool bVar8;
  Good *pGVar9;
  int iVar10;
  uint uVar11;
  std::string *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  word *pwVar15;
  int iVar16;
  TextEngine *this_00;
  undefined4 extraout_ECX;
  TextEngine *extraout_ECX_00;
  TextEngine *this_01;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  TextEngine *extraout_ECX_03;
  TextEngine *extraout_ECX_04;
  TextEngine *this_02;
  Good *pGVar17;
  undefined4 extraout_ECX_05;
  TextEngine *pTVar18;
  void *pvVar19;
  TextEngine *extraout_ECX_06;
  TextEngine *this_03;
  uint uVar20;
  nothrow_t *pnVar21;
  uint local_60;
  void *local_24 [5];
  uint local_10;
  uint local_c;
  
  // [cookie] local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar2 + 0x8c) == 1) {
    iVar13 = *(int *)(iVar2 + 0xa0);
    pTVar3 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
    if (999 < iVar13) {
      ghidra::str::ctor
                ((std::string *)&local_60,
                 *(std::string **)
                  (*(int *)(*(int *)(g_gameData + 0x13c) + iVar13 * 4 + -4000) + 0x58));
      pGVar9 = GameData::getGoodWithShortName();
      pGVar7 = g_gameData;
      iVar16 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0x13c) + -4000 + iVar13 * 4) + 0x58)
                       + 0x28);
      if (iVar16 == -1) {
        iVar16 = *(int *)(pGVar9 + 0x58);
      }
      iVar16 = *(int *)(iVar2 + 0xa4) * iVar16;
      *(int *)(iVar2 + 200) = iVar16;
      if (iVar16 - *(int *)(*(int *)(pGVar7 + 0x124) + 0x1c) != 0 &&
          *(int *)(*(int *)(pGVar7 + 0x124) + 0x1c) <= iVar16) {
        if (param_1 != (TextEngine *)0x0) {
          ghidra::str::assign
                    ((std::string *)((char *)this + 0x54),"`^Error: not enough credit in your account",
                     0x2a);
          (this_00)->addLinef((char *)param_1);
          // [cookie] __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_0048e1b5;
      }
      bVar8 = CargoHold::addToHold
                        (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar9,
                         *(int *)(iVar2 + 0xa4),iVar16);
      pGVar7 = g_gameData;
      if (!bVar8) {
        if (param_1 != (TextEngine *)0x0) {
          local_60 = CONCAT31(local_60._1_3_,bVar8);
          ghidra::str::assign
                    ((std::string *)&local_60,"`^Error: unable to put cargo in hold. Cancelling."
                     ,0x31);
          (param_1)->addLine();
          // [cookie] __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_0048e1b5;
      }
      iVar16 = *(int *)(g_gameData + 0x13c);
      if (*(int *)(*(int *)(*(int *)(iVar16 + -4000 + iVar13 * 4) + 0x54) + 0x18) == 0) {
        piVar1 = (int *)(*(int *)(*(int *)(iVar16 + -4000 + iVar13 * 4) + 0x58) + 0x18);
        *piVar1 = *piVar1 - *(int *)(iVar2 + 0xa4);
        piVar1 = (int *)(*(int *)(*(int *)(*(int *)(pGVar7 + 0x13c) + -4000 + iVar13 * 4) + 0x58) +
                        0x20);
        *piVar1 = *piVar1 - *(int *)(iVar2 + 0xa4);
        iVar16 = *(int *)(pGVar7 + 0x13c);
      }
      pTVar18 = *(TextEngine **)(iVar16 + -4000 + iVar13 * 4);
      if (*(int *)(*(int *)(pTVar18 + 0x54) + 0x18) == 2) {
        pTVar18 = *(TextEngine **)(pTVar18 + 0x58);
        *(int *)(pTVar18 + 0x18) = *(int *)(pTVar18 + 0x18) - *(int *)(iVar2 + 0xa4);
      }
      if (0 < *(int *)(iVar2 + 200)) {
        ghidra::str::ctor
                  ((std::string *)&local_60,(std::string *)(pGVar9 + 4));
        BankAccount::addTransaction
                  (*(BankAccount **)(g_gameData + 0x124),extraout_ECX,-*(int *)(iVar2 + 200));
        pTVar18 = extraout_ECX_00;
      }
      if (param_1 != (TextEngine *)0x0) {
        (pTVar18)->addLinef((char *)param_1);
        (this_01)->addLinef((char *)param_1);
      }
      *(int *)(iVar2 + 0xa8) = iVar13;
      *(undefined4 *)(iVar2 + 0x94) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x8c) = 3;
      goto LAB_0048e19f;
    }
    pGVar9 = ((GameData *)this)->getGood(iVar13);
    iVar16 = *(int *)(iVar2 + 0xa4);
    iVar10 = (pTVar3)->goodCostWire(iVar13, iVar16, true);
    *(int *)(iVar2 + 200) = iVar10;
    bVar8 = CargoHold::addToHold
                      (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),iVar13,iVar16,
                       extraout_ECX_01);
    if (bVar8) {
      if (-1 < *(int *)(iVar2 + 0xa4)) {
        uVar11 = 0;
        uVar20 = *(int *)(pTVar3 + 0x8c) - *(int *)(pTVar3 + 0x88) >> 2;
        if (uVar20 != 0) {
          do {
            iVar16 = *(int *)(*(int *)(pTVar3 + 0x88) + uVar11 * 4);
            if (*(int *)(iVar16 + 0x14) == iVar13) {
              piVar1 = (int *)(iVar16 + 0x10);
              *piVar1 = *piVar1 - *(int *)(iVar2 + 0xa4);
              iVar16 = *(int *)(pTVar3 + 0x88);
              iVar10 = *(int *)(iVar16 + uVar11 * 4);
              if (*(int *)(iVar10 + 0x10) < 0) {
                *(undefined4 *)(iVar10 + 0x10) = 0;
                iVar16 = *(int *)(pTVar3 + 0x88);
              }
              *(undefined4 *)(*(int *)(uVar11 * 4 + iVar16) + 0x30) = 0xffffffff;
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar20);
        }
      }
      ghidra::str::ctor
                ((std::string *)&local_60,(std::string *)(pGVar9 + 4));
      BankAccount::addTransaction
                (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_02,-*(int *)(iVar2 + 200));
      local_60 = 0x48df39;
      pbVar12 = (std::string *)strUsingArgs((char *)local_24);
      ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0xc),pbVar12);
      pTVar18 = extraout_ECX_03;
      if (0xf < local_10) {
        pnVar21 = (nothrow_t *)(local_10 + 1);
        pvVar19 = local_24[0];
        if ((nothrow_t *)0xfff < pnVar21) {
          pvVar19 = *(void **)((int)local_24[0] + -4);
          pnVar21 = (nothrow_t *)(local_10 + 0x24);
          if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar19))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar19,pnVar21);
        pTVar18 = extraout_ECX_04;
      }
      if (param_1 != (TextEngine *)0x0) {
        (pTVar18)->addLinef((char *)param_1);
        (this_02)->addLinef((char *)param_1);
      }
      *(int *)(iVar2 + 0xa8) = iVar13;
      *(undefined4 *)(iVar2 + 200) = *(undefined4 *)(iVar2 + 0xa4);
      *(undefined4 *)(iVar2 + 0x94) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x8c) = 3;
    }
    else if (param_1 != (TextEngine *)0x0) {
      local_60 = local_60 & 0xffffff00;
      ghidra::str::assign
                ((std::string *)&local_60,"`^Error: unable to put cargo in hold. Cancelling.",
                 0x31);
      (param_1)->addLine();
    }
  }
  else {
    if (*(int *)(iVar2 + 0x8c) != 2) goto LAB_0048e1b5;
    iVar13 = *(int *)(iVar2 + 0xa0);
    pTVar3 = *(TradeLocation **)(ShipData::currentlyBoardedShip + 0x398);
    pGVar9 = ((GameData *)this)->getGood(iVar13);
    iVar13 = (pTVar3)->goodCostWire(iVar13, *(int *)(iVar2 + 0xa4), false);
    pGVar7 = g_gameData;
    uVar11 = 0;
    *(int *)(iVar2 + 200) = iVar13;
    puVar14 = *(undefined4 **)(pGVar7 + 0x84);
    uVar20 = *(int *)(pGVar7 + 0x88) - (int)puVar14 >> 2;
    if (uVar20 != 0) {
      do {
        pGVar17 = (Good *)*puVar14;
        if (*(int *)pGVar17 == *(int *)(iVar2 + 0xa0)) goto LAB_0048e069;
        uVar11 = uVar11 + 1;
        puVar14 = puVar14 + 1;
      } while (uVar11 < uVar20);
    }
    pGVar17 = (Good *)0x0;
LAB_0048e069:
    CargoHold::removeFromHold
              (*(CargoHold **)(*(int *)(pGVar7 + 0xd0) + 0x1f8),pGVar17,*(int *)(iVar2 + 0xa4),
               (int)pGVar17);
    (pTVar3)->soldGood(*(int *)pGVar9, *(int *)(iVar2 + 0xa4));
    ghidra::str::ctor((std::string *)&local_60,(std::string *)(pGVar9 + 4));
    BankAccount::addTransaction
              (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_05,*(undefined4 *)(iVar2 + 200));
    local_60 = 0x48e0d7;
    pwVar15 = (word *)strUsingArgs((char *)local_24);
    pTVar18 = (TextEngine *)((char *)this + 0x24);
    if (pTVar18 != (TextEngine *)pwVar15) {
      // [mislabelled-dtor] word::~word((word *)pTVar18);
      uVar4 = *(undefined4 *)(pwVar15 + 4);
      uVar5 = *(undefined4 *)(pwVar15 + 8);
      uVar6 = *(undefined4 *)(pwVar15 + 0xc);
      *(undefined4 *)((char *)this + 0x24) = *(undefined4 *)pwVar15;
      *(undefined4 *)((char *)this + 0x28) = uVar4;
      *(undefined4 *)((char *)this + 0x2c) = uVar5;
      *(undefined4 *)((char *)this + 0x30) = uVar6;
      *(undefined8 *)((char *)this + 0x34) = *(undefined8 *)(pwVar15 + 0x10);
      *(undefined4 *)(pwVar15 + 0x10) = 0;
      *(undefined4 *)(pwVar15 + 0x14) = 0xf;
      *pwVar15 = (word)0x0;
      pTVar18 = (TextEngine *)this;
    }
    if (0xf < local_10) {
      pnVar21 = (nothrow_t *)(local_10 + 1);
      pvVar19 = local_24[0];
      if ((nothrow_t *)0xfff < pnVar21) {
        pvVar19 = *(void **)((int)local_24[0] + -4);
        pnVar21 = (nothrow_t *)(local_10 + 0x24);
        if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar19))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar19,pnVar21);
      pTVar18 = extraout_ECX_06;
    }
    if (param_1 != (TextEngine *)0x0) {
      (pTVar18)->addLinef((char *)param_1);
      (this_03)->addLinef((char *)param_1);
    }
    *(undefined4 *)(iVar2 + 0xa8) = *(undefined4 *)(iVar2 + 0xa0);
    *(undefined4 *)(iVar2 + 0x90) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x8c) = 4;
LAB_0048e19f:
    *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(iVar2 + 0xa4);
  }
  *(undefined4 *)(iVar2 + 0xa0) = 0xffffffff;
LAB_0048e1b5:
  // [cookie] __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::performComponentTrade(TradeEngine *this,TextEngine *param_1)
void TradeEngine::performComponentTrade(TextEngine * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int iVar2;
  int *piVar3;
  ShipComponent *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  bool bVar9;
  char *pcVar10;
  Stats *this_00;
  word *pwVar11;
  std::string *pbVar12;
  TextEngine *this_01;
  int *piVar13;
  int iVar14;
  void *pvVar15;
  nothrow_t *pnVar16;
  uint uVar17;
  uint uVar18;
  size_t sVar19;
  std::string *pbVar20;
  int *piVar21;
  std::string local_c8 [12];
  undefined4 uStack_bc;
  std::string local_b0 [12];
  undefined4 uStack_a4;
  std::string local_94 [4];
  undefined4 uStack_90;
  char *pcVar22;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c [5];
  uint local_28;
  uint local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bbb17;
  // [seh] local_1c = ExceptionList;
  // [cookie] local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  // [seh] ExceptionList = &local_1c;
  iVar1 = *(int *)((char *)this + 0x11c);
  if (*(int *)(iVar1 + 0x48) != 1) {
    puVar8 = &stack0xfffffffc;
    if ((*(int *)(iVar1 + 0x48) != 2) ||
       (bVar9 = currentSaleValid(this,1,(TextEngine *)0x0), puVar8 = puStack_20, !bVar9))
    goto LAB_0048eea8;
    ghidra::str::ctor
              (local_94,(std::string *)
                        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) +
                                                   0x44) + *(int *)(iVar1 + 0x5c) * 4) + 4) + 0x38))
    ;
    (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
    pSVar4 = *(ShipComponent **)
              (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x44) +
              (int)*(TextEngine **)(iVar1 + 0x5c) * 4);
    if (param_1 != (TextEngine *)0x0) {
      uStack_90 = 0x48ea38;
      (*(TextEngine **)(iVar1 + 0x5c))->addLinef((char *)param_1);
    }
    pbVar20 = (std::string *)((char *)this + 0x24);
    ghidra::str::assign(pbVar20,"",0);
    if ((*(int *)(*(int *)(pSVar4 + 4) + 0x80) == 10) ||
       (*(int *)(*(int *)(pSVar4 + 4) + 0x80) == 0xb)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      pcVar10 = (char *)strUsingArgs((char *)local_3c);
      local_14 = 0xb;
      pcVar22 = pcVar10;
      if (0xf < *(uint *)(pcVar10 + 0x14)) {
        pcVar22 = *(char **)pcVar10;
      }
      ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar16 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          pnVar16 = (nothrow_t *)(local_28 + 0x24);
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_0048eb48:
        local_14 = 0xffffffff;
        operator_delete(pvVar15,pnVar16);
      }
    }
    else {
      pcVar10 = (char *)strUsingArgs((char *)local_3c);
      local_14 = 0xc;
      pcVar22 = pcVar10;
      if (0xf < *(uint *)(pcVar10 + 0x14)) {
        pcVar22 = *(char **)pcVar10;
      }
      ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar16 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar16 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_0048eb48;
      }
    }
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 0xd;
    pcVar22 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar22 = *(char **)pcVar10;
    }
    ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c[0] + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 0xe;
    pcVar22 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar22 = *(char **)pcVar10;
    }
    ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c[0] + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 0xf;
    pcVar22 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar22 = *(char **)pcVar10;
    }
    ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c[0] + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
    iVar14 = *(int *)(*(int *)(pSVar4 + 4) + 0x80);
    if ((iVar14 == 10) || (iVar14 == 0xb)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((bVar9) && (iVar14 == 10)) {
      pbVar12 = (std::string *)strUsingArgs((char *)local_3c);
      local_14 = 0x10;
      ghidra::str::append(pbVar20,pbVar12);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar16 = (nothrow_t *)(local_28 + 1);
        pvVar15 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          pvVar15 = *(void **)((int)local_3c[0] + -4);
          pnVar16 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar15,pnVar16);
      }
    }
    if ((float)*(int *)(*(int *)(pSVar4 + 4) + 0x14) <= *(float *)pSVar4) {
      if ((float)*(int *)(*(int *)(pSVar4 + 4) + 0x10) <= *(float *)pSVar4) {
        uVar17 = 0x16;
        pcVar22 = "`7State : `0undamaged\n";
      }
      else {
        uVar17 = 0x1b;
        pcVar22 = "`7State : `@non-functional\n";
      }
    }
    else {
      uVar17 = 0x14;
      pcVar22 = "`7State : `^damaged\n";
    }
    ghidra::str::append(pbVar20,pcVar22,uVar17);
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 0x11;
    pcVar22 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar22 = *(char **)pcVar10;
    }
    ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c[0] + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
    pbVar12 = (std::string *)getCurrentIcon(this,(Shop)local_54);
    ghidra::lib::basic_string__operator_x3d((std::string *)(iVar1 + 0x6c),pbVar12);
    if (0xf < local_40) {
      pnVar16 = (nothrow_t *)(local_40 + 1);
      pvVar15 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_54[0] + -4);
        pnVar16 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(iVar1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar1 + 0x60);
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
    (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->removeComponent(pSVar4);
    *(undefined4 *)(iVar1 + 0x5c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x48) = 4;
    *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
    puVar8 = puStack_20;
    goto LAB_0048eea8;
  }
  iVar14 = *(int *)(ShipData::currentlyBoardedShip + 0x398);
  // [seh] puStack_20 = &stack0xfffffffc;
  bVar9 = currentPurchaseValid(this,1,(TextEngine *)0x0);
  puVar8 = puStack_20;
  if (!bVar9) goto LAB_0048eea8;
  ghidra::str::ctor
            (local_94,(std::string *)
                      (*(int *)(**(int **)(*(int *)(iVar14 + 100) + *(int *)(iVar1 + 0x5c) * 4) + 4)
                      + 0x38));
  (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
  CargoHold::addComponent
            (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
             (ShipComponent *)**(undefined4 **)(*(int *)(iVar14 + 100) + *(int *)(iVar1 + 0x5c) * 4)
            );
  if (param_1 != (TextEngine *)0x0) {
    iVar2 = *(int *)(**(int **)(*(int *)(iVar14 + 100) + *(int *)(iVar1 + 0x5c) * 4) + 4);
    this_01 = (TextEngine *)(iVar2 + 0x38);
    if (0xf < *(uint *)(iVar2 + 0x4c)) {
      this_01 = *(TextEngine **)this_01;
    }
    uStack_90 = 0x48e32a;
    (this_01)->addLinef((char *)param_1);
  }
  pbVar20 = (std::string *)((char *)this + 0xc);
  ghidra::str::assign(pbVar20,"",0);
  piVar21 = *(int **)(*(int *)(iVar14 + 100) + *(int *)(iVar1 + 0x5c) * 4);
  iVar2 = *(int *)(*(int *)(*piVar21 + 4) + 0x80);
  if ((iVar2 == 10) || (iVar2 == 0xb)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 0;
    pcVar22 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar22 = *(char **)pcVar10;
    }
    ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        pvVar15 = *(void **)((int)local_3c[0] + -4);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)*(void **)((int)local_3c[0] + -4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_0048e448:
      local_14 = 0xffffffff;
      operator_delete(pvVar15,pnVar16);
    }
  }
  else {
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 1;
    pcVar22 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar22 = *(char **)pcVar10;
    }
    ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c[0] + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_0048e448;
    }
  }
  pcVar10 = (char *)strUsingArgs((char *)local_3c);
  local_14 = 2;
  pcVar22 = pcVar10;
  if (0xf < *(uint *)(pcVar10 + 0x14)) {
    pcVar22 = *(char **)pcVar10;
  }
  ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
  local_14 = 0xffffffff;
  if (0xf < local_28) {
    pnVar16 = (nothrow_t *)(local_28 + 1);
    pvVar15 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_3c[0] + -4);
      pnVar16 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  pcVar10 = (char *)strUsingArgs((char *)local_3c);
  local_14 = 3;
  pcVar22 = pcVar10;
  if (0xf < *(uint *)(pcVar10 + 0x14)) {
    pcVar22 = *(char **)pcVar10;
  }
  ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
  local_14 = 0xffffffff;
  if (0xf < local_28) {
    pnVar16 = (nothrow_t *)(local_28 + 1);
    pvVar15 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_3c[0] + -4);
      pnVar16 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  pcVar10 = (char *)strUsingArgs((char *)local_3c);
  local_14 = 4;
  pcVar22 = pcVar10;
  if (0xf < *(uint *)(pcVar10 + 0x14)) {
    pcVar22 = *(char **)pcVar10;
  }
  ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
  local_14 = 0xffffffff;
  if (0xf < local_28) {
    pnVar16 = (nothrow_t *)(local_28 + 1);
    pvVar15 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_3c[0] + -4);
      pnVar16 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  iVar2 = *(int *)(*(int *)(*piVar21 + 4) + 0x80);
  if ((iVar2 == 10) || (iVar2 == 0xb)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((bVar9) && (iVar2 == 10)) {
    pcVar10 = (char *)strUsingArgs((char *)local_3c);
    local_14 = 5;
    pcVar22 = pcVar10;
    if (0xf < *(uint *)(pcVar10 + 0x14)) {
      pcVar22 = *(char **)pcVar10;
    }
    ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
    local_14 = 0xffffffff;
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c[0] + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
  }
  pcVar10 = (char *)strUsingArgs((char *)local_3c);
  local_14 = 6;
  pcVar22 = pcVar10;
  if (0xf < *(uint *)(pcVar10 + 0x14)) {
    pcVar22 = *(char **)pcVar10;
  }
  ghidra::str::append(pbVar20,pcVar22,*(uint *)(pcVar10 + 0x10));
  local_14 = 0xffffffff;
  if (0xf < local_28) {
    pnVar16 = (nothrow_t *)(local_28 + 1);
    pvVar15 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_3c[0] + -4);
      pnVar16 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  local_94[0] = (std::string)0x0;
  ghidra::str::assign(local_94,"components_purchased",0x14);
  local_14 = 7;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_00 = operator_new(0x58);
    local_14 = CONCAT31(local_14._1_3_,8);
    Singleton<Stats>::instance = (Stats *)new ((void *)(this_00)) Stats();
  }
  local_14 = 0xffffffff;
  (Singleton<Stats>::instance)->addStat();
  uStack_a4 = 0x48e761;
  ghidra::str::assign((std::string *)&stack0xffffff68,"",0);
  local_14 = 9;
  local_b0[0] = (std::string)0x0;
  uStack_bc = 0x48e78d;
  ghidra::str::assign(local_b0,"components_purchased",0x14);
  local_14 = CONCAT31(local_14._1_3_,10);
  local_c8[0] = (std::string)0x0;
  ghidra::str::assign(local_c8,"commerce",8);
  local_14 = 0xffffffff;
  Analytics::logEvent();
  pwVar11 = (word *)getCurrentIcon(this,(Shop)local_3c);
  if ((word *)(iVar1 + 0x6c) != pwVar11) {
    // [mislabelled-dtor] word::~word((word *)(iVar1 + 0x6c));
    uVar5 = *(undefined4 *)(pwVar11 + 4);
    uVar6 = *(undefined4 *)(pwVar11 + 8);
    uVar7 = *(undefined4 *)(pwVar11 + 0xc);
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)pwVar11;
    *(undefined4 *)(iVar1 + 0x70) = uVar5;
    *(undefined4 *)(iVar1 + 0x74) = uVar6;
    *(undefined4 *)(iVar1 + 0x78) = uVar7;
    *(undefined8 *)(iVar1 + 0x7c) = *(undefined8 *)(pwVar11 + 0x10);
    *(undefined4 *)(pwVar11 + 0x10) = 0;
    *(undefined4 *)(pwVar11 + 0x14) = 0xf;
    *pwVar11 = (word)0x0;
  }
  if (0xf < local_28) {
    pnVar16 = (nothrow_t *)(local_28 + 1);
    pvVar15 = local_3c[0];
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_3c[0] + -4);
      pnVar16 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  *(int *)(iVar1 + 100) = *(int *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar1 + 0x60);
  piVar21 = *(int **)(iVar14 + 100);
  piVar3 = *(int **)(iVar14 + 0x68);
  iVar2 = piVar21[*(int *)(iVar1 + 0x5c)];
  if (piVar21 != piVar3) {
    do {
      if (*piVar21 == iVar2) break;
      piVar21 = piVar21 + 1;
    } while (piVar21 != piVar3);
    if (piVar21 != piVar3) {
      piVar13 = piVar21 + 1;
      uVar17 = 0;
      uVar18 = (uint)((int)piVar3 + (3 - (int)piVar13)) >> 2;
      if (piVar3 < piVar13) {
        uVar18 = 0;
      }
      if (uVar18 != 0) {
        do {
          if (*piVar13 != iVar2) {
            *piVar21 = *piVar13;
            piVar21 = piVar21 + 1;
          }
          uVar17 = uVar17 + 1;
          piVar13 = piVar13 + 1;
        } while (uVar17 != uVar18);
      }
      if (piVar21 != piVar3) {
        sVar19 = *(int *)(iVar14 + 0x68) - (int)piVar3;
        memmove(piVar21,piVar3,sVar19);
        *(size_t *)(iVar14 + 0x68) = sVar19 + (int)piVar21;
      }
    }
  }
  *(undefined4 *)(iVar1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
  puVar8 = puStack_20;
  if ((*(int *)(iVar14 + 0x68) - *(int *)(iVar14 + 100) >> 2 == 0) || (*(int *)(iVar1 + 0x50) != 0))
  {
    *(undefined4 *)(iVar1 + 0x48) = 3;
  }
  else {
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 1;
    iVar1 = *(int *)((char *)this + 0x11c);
    iVar14 = *(int *)(iVar1 + 0x50);
    if (iVar14 < 0) {
      iVar14 = *(int *)(iVar1 + 0x5c);
    }
    else {
      *(int *)(iVar1 + 0x5c) = iVar14;
      *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
    }
    if (iVar14 < 0) {
      *(undefined4 *)(iVar1 + 0x48) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x48) = 1;
      *(undefined4 *)(iVar1 + 0x60) = 1;
    }
  }
LAB_0048eea8:
  // [seh] puStack_20 = puVar8;
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall TradeEngine::performTrade(TradeEngine *this,Shop param_1,TextEngine *param_2)
void TradeEngine::performTrade(Shop param_1, TextEngine * param_2)

{
  SaveHandler *this_00;
  
  if (param_1 == 0) {
    performCommodityTrade(this,param_2);
  }
  else if (param_1 == 2) {
    performBlackMarketTrade(this,param_2);
  }
  else if (param_1 == 1) {
    performComponentTrade(this,param_2);
  }
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
    ghidra::any_singleton();
    (this_00)->saveGame();
  }
  return;
}


// Ghidra: int __thiscall TradeEngine::getMaxLoanSize(TradeEngine *this)
int TradeEngine::getMaxLoanSize()

{
  FictionData *pFVar1;
  Faction *this_00;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)((char *)this + 0xdc);
  if (iVar2 == -1) {
    return 0;
  }
  uVar5 = 0;
  pFVar1 = ghidra::any_singleton();
  puVar3 = *(undefined4 **)pFVar1;
  uVar4 = *(int *)(pFVar1 + 4) - (int)puVar3 >> 2;
  if (uVar4 != 0) {
    do {
      this_00 = (Faction *)*puVar3;
      if (*(int *)this_00 == iVar2) goto LAB_0048ef70;
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  this_00 = (Faction *)0x0;
LAB_0048ef70:
  if (((char *)this)[0xe9] == (byte)0x0) {
    iVar2 = (this_00)->amountCanBorrow();
    return iVar2;
  }
  return (int)*(float *)(this_00 + 0xd0);
}


// Ghidra: void __thiscall TradeEngine::populateCommerceMenu(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateCommerceMenu(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  std::string *pbVar2;
  Faction *this_00;
  ghidra::vector *this_01;
  bool bVar3;
  ListData *pLVar4;
  allocator<ListData> *paVar5;
  FictionData *pFVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  ListData *unaff_EDI;
  std::string local_140 [16];
  undefined4 local_130;
  std::string local_124 [12];
  undefined4 uStack_118;
  Color3B local_e7 [3];
  undefined1 *local_e4;
  ghidra::vector *local_e0;
  undefined4 local_dc;
  ListData local_d8 [96];
  ListData local_78 [96];
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bbbad;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar4 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_e0 = param_1;
  uStack_118 = 0x48efe7;
  local_18 = pLVar4;
  cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
  uVar10 = 0;
  local_dc = 0;
  pbVar2 = *(std::string **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  do {
    while( true ) {
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      this_01 = local_e0;
      if ((uint)(*(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2) <= uVar10
         ) {
        pcVar11 = "`!Licenses";
        if (local_dc < 1) {
          pcVar11 = "Licenses";
        }
        local_e4 = local_124;
        local_124[0] = (std::string)0x0;
        pcVar8 = pcVar11;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        local_130 = 0x48f1c7;
        ghidra::str::assign(local_124,pcVar11,(int)pcVar8 - (int)(pcVar11 + 1));
        // [seh] local_8 = 1;
        local_130 = 0;
        local_140[0] = (std::string)0x0;
        ghidra::str::assign(local_140,"",0);
        // [seh] local_8 = 0xffffffff;
        paVar5 = (allocator<ListData> *)new ((void *)(local_78)) ListData(1);
        // [seh] local_8 = 2;
        if (*(ListData **)(this_01 + 8) == *(ListData **)(this_01 + 4)) {
          std::vector<>::_Emplace_reallocate<ListData>
                    (this_01,*(ListData **)(this_01 + 4),(ListData *)paVar5);
        }
        else {
          ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar4,unaff_EDI);
          *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 0x60;
        }
        // [seh] local_8 = 0xffffffff;
        (local_78)->~ListData();
        uStack_118 = 0x48f251;
        cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
        uVar10 = 0;
        local_dc = 0;
        pFVar6 = ghidra::Singleton<void>::instance;
        while( true ) {
          if (pFVar6 == (FictionData *)0x0) {
            pFVar6 = operator_new(0x18);
            *(int *)(pFVar6 + 0x10) = 0;
            *(int *)(pFVar6 + 0x14) = 0;
            *(int *)pFVar6 = 0;
            *(int *)(pFVar6 + 4) = 0;
            *(int *)(pFVar6 + 8) = 0;
            *(int *)(pFVar6 + 0xc) = 0;
            *(int *)(pFVar6 + 0x10) = 0;
            *(int *)(pFVar6 + 0x14) = 0;
            ghidra::Singleton<void>::instance = pFVar6;
          }
          if ((uint)(*(int *)(pFVar6 + 4) - *(int *)pFVar6 >> 2) <= uVar10) break;
          if (pFVar6 == (FictionData *)0x0) {
            pFVar6 = operator_new(0x18);
            *(int *)(pFVar6 + 0x10) = 0;
            *(int *)(pFVar6 + 0x14) = 0;
            *(int *)pFVar6 = 0;
            *(int *)(pFVar6 + 4) = 0;
            *(int *)(pFVar6 + 8) = 0;
            *(int *)(pFVar6 + 0xc) = 0;
            *(int *)(pFVar6 + 0x10) = 0;
            *(int *)(pFVar6 + 0x14) = 0;
            ghidra::Singleton<void>::instance = pFVar6;
          }
          this_00 = *(Faction **)(*(int *)pFVar6 + uVar10 * 4);
          if ((*(int *)(this_00 + 0x90) - *(int *)(this_00 + 0x8c) >> 2 == 0) ||
             (iVar7 = (this_00)->amountCanBorrow(), iVar7 < 1)) {
            uVar10 = uVar10 + 1;
          }
          else {
            local_dc = local_dc + 1;
            uVar10 = uVar10 + 1;
          }
        }
        pcVar11 = "`!Loans";
        if (local_dc < 1) {
          pcVar11 = "Loans";
        }
        local_e4 = local_124;
        local_124[0] = (std::string)0x0;
        pcVar8 = pcVar11;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        local_130 = 0x48f3a2;
        ghidra::str::assign(local_124,pcVar11,(int)pcVar8 - (int)(pcVar11 + 1));
        // [seh] local_8 = 3;
        local_130 = 0;
        local_140[0] = (std::string)0x0;
        ghidra::str::assign(local_140,"",0);
        // [seh] local_8 = 0xffffffff;
        paVar5 = (allocator<ListData> *)new ((void *)(local_78)) ListData(2);
        // [seh] local_8 = 4;
        if (*(ListData **)(this_01 + 8) == *(ListData **)(this_01 + 4)) {
          std::vector<>::_Emplace_reallocate<ListData>
                    (this_01,*(ListData **)(this_01 + 4),(ListData *)paVar5);
        }
        else {
          ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar4,unaff_EDI);
          *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 0x60;
        }
        // [seh] local_8 = 0xffffffff;
        (local_78)->~ListData();
        uStack_118 = 0x48f42c;
        cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
        uVar10 = 0;
        iVar9 = 0;
        iVar7 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
        uVar12 = *(int *)(iVar7 + 0x98) - *(int *)(iVar7 + 0x94) >> 2;
        if (uVar12 != 0) {
          do {
            uVar10 = uVar10 + 1;
            iVar9 = iVar9 + 1;
          } while (uVar10 < uVar12);
        }
        pcVar11 = "`!Contracts";
        if (iVar9 < 1) {
          pcVar11 = "Contracts";
        }
        local_e4 = local_124;
        local_124[0] = (std::string)0x0;
        pcVar8 = pcVar11;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        local_130 = 0x48f4b8;
        ghidra::str::assign(local_124,pcVar11,(int)pcVar8 - (int)(pcVar11 + 1));
        // [seh] local_8 = 5;
        local_130 = 0;
        local_140[0] = (std::string)0x0;
        ghidra::str::assign(local_140,"",0);
        // [seh] local_8 = 0xffffffff;
        paVar5 = (allocator<ListData> *)new ((void *)(local_78)) ListData(3);
        // [seh] local_8 = 6;
        if (*(ListData **)(this_01 + 8) == *(ListData **)(this_01 + 4)) {
          std::vector<>::_Emplace_reallocate<ListData>
                    (this_01,*(ListData **)(this_01 + 4),(ListData *)paVar5);
        }
        else {
          ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar4,unaff_EDI);
          *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 0x60;
        }
        // [seh] local_8 = 0xffffffff;
        (local_78)->~ListData();
        uStack_118 = 0x48f542;
        cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
        pcVar11 = "`!Passengers";
        if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x40c) -
            *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x408) >> 2 < 1) {
          pcVar11 = "Passengers";
        }
        local_e4 = local_124;
        local_124[0] = (std::string)0x0;
        pcVar8 = pcVar11;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        local_130 = 0x48f5b3;
        ghidra::str::assign(local_124,pcVar11,(int)pcVar8 - (int)(pcVar11 + 1));
        // [seh] local_8 = 7;
        local_130 = 0;
        local_140[0] = (std::string)0x0;
        ghidra::str::assign(local_140,"",0);
        // [seh] local_8 = 0xffffffff;
        paVar5 = (allocator<ListData> *)new ((void *)(local_78)) ListData(4);
        // [seh] local_8 = 8;
        if (*(ListData **)(this_01 + 8) == *(ListData **)(this_01 + 4)) {
          std::vector<>::_Emplace_reallocate<ListData>
                    (this_01,*(ListData **)(this_01 + 4),(ListData *)paVar5);
        }
        else {
          ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar4,unaff_EDI);
          *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 0x60;
        }
        // [seh] local_8 = 0xffffffff;
        (local_78)->~ListData();
        uStack_118 = 0x48f63d;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_dc + 1),'\0','\0','\0');
        pcVar11 = "`!Bounties";
        if (*(int *)(*(int *)(g_gameData + 0xd8) + 0x120) -
            *(int *)(*(int *)(g_gameData + 0xd8) + 0x11c) >> 2 < 1) {
          pcVar11 = "Bounties";
        }
        local_e4 = local_124;
        local_124[0] = (std::string)0x0;
        pcVar8 = pcVar11;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        local_130 = 0x48f6a8;
        ghidra::str::assign(local_124,pcVar11,(int)pcVar8 - (int)(pcVar11 + 1));
        // [seh] local_8 = 9;
        local_130 = 0;
        local_140[0] = (std::string)0x0;
        ghidra::str::assign(local_140,"",0);
        // [seh] local_8 = 0xffffffff;
        paVar5 = (allocator<ListData> *)new ((void *)(local_d8)) ListData(5);
        // [seh] local_8 = 10;
        if (*(ListData **)(this_01 + 8) == *(ListData **)(this_01 + 4)) {
          std::vector<>::_Emplace_reallocate<ListData>
                    (this_01,*(ListData **)(this_01 + 4),(ListData *)paVar5);
        }
        else {
          ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar4,unaff_EDI);
          *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 0x60;
        }
        (local_d8)->~ListData();
        // [seh] ExceptionList = local_10;
        // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_e4 = local_124;
      ghidra::str::ctor(local_124,pbVar2);
      // [seh] local_8 = 0;
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      // [seh] local_8 = 0xffffffff;
      bVar3 = (*(Faction **)(*(int *)ghidra::Singleton<void>::instance + uVar10 * 4))->officeAtLocation();
      if (bVar3) break;
LAB_0048f179:
      uVar10 = uVar10 + 1;
    }
    if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
      ghidra::Singleton<void>::instance = operator_new(0x18);
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      *(undefined4 *)ghidra::Singleton<void>::instance = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
    }
    if (*(char *)(*(int *)(*(int *)ghidra::Singleton<void>::instance + uVar10 * 4) + 0xe0) != '\0')
    goto LAB_0048f179;
    local_dc = local_dc + 1;
    uVar10 = uVar10 + 1;
  } while( true );
}


// Ghidra: void __thiscall TradeEngine::populateCompanies(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateCompanies(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *pvVar1;
  bool bVar2;
  ListData *pLVar3;
  word *pwVar4;
  allocator<ListData> *paVar5;
  Color3B *this_00;
  void *pvVar6;
  nothrow_t *pnVar7;
  ListData *unaff_EDI;
  uint uVar8;
  std::string local_13c [16];
  undefined4 local_12c;
  undefined4 local_128;
  std::string abStack_120 [4];
  undefined4 uStack_11c;
  std::string abStack_114 [4];
  undefined4 uStack_110;
  uchar uVar9;
  uchar uVar10;
  Color3B local_ea [3];
  Color3B local_e7 [3];
  undefined1 *local_e4;
  ghidra::vector *local_e0;
  std::string *local_dc;
  uint local_d8;
  code *local_d4;
  ListData local_d0 [100];
  void *local_6c [4];
  undefined4 local_5c;
  uint local_58;
  void *local_54 [4];
  undefined4 local_44;
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  ListData *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bbc14;
  // [seh] local_1c = ExceptionList;
  // [cookie] pLVar3 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  uVar8 = 0;
  local_e0 = param_1;
  local_dc = *(std::string **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  local_d4 = Color3B_exref;
  local_24 = pLVar3;
  do {
    local_d8 = uVar8;
    if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
      ghidra::Singleton<void>::instance = operator_new(0x18);
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      *(undefined4 *)ghidra::Singleton<void>::instance = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
    }
    if ((uint)(*(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2) <= uVar8) {
      // [seh] ExceptionList = local_1c;
      // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    local_e4 = abStack_114;
    uStack_11c = 0x48f834;
    ghidra::str::ctor(abStack_114,local_dc);
    local_14 = 0;
    if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
      uStack_11c = 0x48f84b;
      ghidra::Singleton<void>::instance = operator_new(0x18);
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      *(undefined4 *)ghidra::Singleton<void>::instance = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
      *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
    }
    local_14 = 0xffffffff;
    bVar2 = (*(Faction **)(*(int *)ghidra::Singleton<void>::instance + uVar8 * 4))->officeAtLocation();
    if (bVar2) {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 1;
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      if (*(char *)(*(int *)(*(int *)ghidra::Singleton<void>::instance + uVar8 * 4) + 0xe0) == '\0') {
        uStack_110 = 0x48f9e0;
        pwVar4 = (word *)strUsingArgs((char *)local_6c);
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
        if (0xf < local_58) {
          pnVar7 = (nothrow_t *)(local_58 + 1);
          pvVar6 = local_6c[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_6c[0] + -4);
            pnVar7 = (nothrow_t *)(local_58 + 0x24);
            if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar6))) {
LAB_0048fc79:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar7);
        }
        local_5c = 0;
        local_58 = 0xf;
        local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
      }
      else {
        uStack_110 = 0x48f93d;
        pwVar4 = (word *)strUsingArgs((char *)local_54);
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
          pnVar7 = (nothrow_t *)(local_40 + 1);
          pvVar6 = local_54[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_54[0] + -4);
            pnVar7 = (nothrow_t *)(local_40 + 0x24);
            if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar6))) goto LAB_0048fc79;
          }
          operator_delete(pvVar6,pnVar7);
        }
        local_44 = 0;
        local_40 = 0xf;
        local_54[0] = (void *)((uint)local_54[0] & 0xffffff00);
      }
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      if (*(char *)(*(int *)(*(int *)ghidra::Singleton<void>::instance + uVar8 * 4) + 0xe0) == '\0') {
        uVar10 = ' ';
        uVar9 = '@';
        this_00 = local_ea;
      }
      else {
        uVar10 = '@';
        uVar9 = 0x80;
        this_00 = local_e7;
      }
      cocos2d::Color3B::Color3B(this_00,'@',uVar9,uVar10);
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      local_e4 = abStack_120;
      local_128 = 0x48fb65;
      ghidra::str::ctor(abStack_120,(std::string *)&local_3c);
      local_14._0_1_ = 2;
      local_12c = 0;
      local_128 = 0xf;
      local_13c[0] = (std::string)0x0;
      ghidra::str::assign(local_13c,"",0);
      local_14._0_1_ = 3;
      if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(0x18);
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        *(undefined4 *)ghidra::Singleton<void>::instance = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
        *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
      }
      local_14._0_1_ = 1;
      paVar5 = (allocator<ListData> *)
               new ((void *)(local_d0)) ListData(**(undefined4 **)
                                             (*(int *)ghidra::Singleton<void>::instance + uVar8 * 4));
      pvVar1 = local_e0;
      local_14 = CONCAT31(local_14._1_3_,4);
      if (*(ListData **)(local_e0 + 8) == *(ListData **)(local_e0 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (local_e0,*(ListData **)(local_e0 + 4),(ListData *)paVar5);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar3,unaff_EDI);
        *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x60;
      }
      (local_d0)->~ListData();
      local_14 = 0xffffffff;
      if (0xf < uStack_28) {
        pnVar7 = (nothrow_t *)(uStack_28 + 1);
        pvVar6 = local_3c;
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_3c + -4);
          pnVar7 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar6))) goto LAB_0048fc79;
        }
        operator_delete(pvVar6,pnVar7);
      }
    }
    uVar8 = local_d8 + 1;
  } while( true );
}


// Ghidra: void __thiscall TradeEngine::getCompanyStr(TradeEngine *this)
void TradeEngine::getCompanyStr()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  bool bVar2;
  FictionData *pFVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  nothrow_t *pnVar10;
  int *piVar11;
  std::string *pbVar12;
  std::string *in_stack_00000004;
  std::string abStack_80 [8];
  undefined4 uStack_78;
  char *pcVar13;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bbc81;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  iVar7 = *(int *)((char *)this + 0xd0);
  if (iVar7 == -1) {
    uVar4 = 0xf0;
    pcVar13 = 
    "Use this screen to acquire licenses which allow you to work for new employers.\n\nOnce a license is acquired, any contracts available from that employer will appear in the contracts section. Completing contracts makes more become available.\n\n"
    ;
  }
  else {
    pFVar3 = ghidra::any_singleton();
    uVar9 = 0;
    puVar6 = *(undefined4 **)pFVar3;
    uVar4 = *(int *)(pFVar3 + 4) - (int)puVar6 >> 2;
    if (uVar4 != 0) {
      do {
        piVar11 = (int *)*puVar6;
        if (*piVar11 == iVar7) goto LAB_0048fd30;
        uVar9 = uVar9 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar9 < uVar4);
    }
    piVar11 = (int *)0x0;
LAB_0048fd30:
    uStack_78 = 0x48fd4a;
    pcVar5 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 1;
    pcVar13 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar13 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar13,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar10 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar10 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
LAB_0048fd93:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar10);
    }
    uStack_78 = 0x48fdbd;
    pcVar5 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 2;
    pcVar13 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar13 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar13,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar10 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar10) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar10 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar8,pnVar10);
    }
    ghidra::str::append(in_stack_00000004,"`7Offices: ",0xb);
    iVar7 = 0xb0;
    bVar2 = true;
    if (g_gameLogic[0x11b] == (byte)0x0) {
      iVar7 = 0xbc;
    }
    pbVar1 = *(std::string **)(iVar7 + 4 + (int)piVar11);
    for (pbVar12 = *(std::string **)(iVar7 + (int)piVar11); pbVar12 != pbVar1;
        pbVar12 = pbVar12 + 0x18) {
      ghidra::str::ctor((std::string *)local_2c,pbVar12);
      // [seh] local_8 = 3;
      ghidra::str::ctor(abStack_80,(std::string *)local_2c);
      GameData::getSpaceStation();
      if (!bVar2) {
        ghidra::str::append(in_stack_00000004,"`7, ",4);
      }
      bVar2 = false;
      uStack_78 = 0x48feae;
      pcVar5 = (char *)strUsingArgs((char *)local_44);
      // [seh] local_8._0_1_ = 4;
      pcVar13 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar13 = *(char **)pcVar5;
      }
      ghidra::str::append(in_stack_00000004,pcVar13,*(uint *)(pcVar5 + 0x10));
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) goto LAB_0048fd93;
        }
        operator_delete(pvVar8,pnVar10);
      }
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar10 = (nothrow_t *)(local_18 + 1);
        pvVar8 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar8 = *(void **)((int)local_2c[0] + -4);
          pnVar10 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_0048fd93;
        }
        operator_delete(pvVar8,pnVar10);
      }
    }
    ghidra::str::append(in_stack_00000004,"\n\n",2);
    if ((char)piVar11[0x38] == '\0') {
      uStack_78 = 0x48ff7a;
      pcVar5 = (char *)strUsingArgs((char *)local_44);
      // [seh] local_8 = 5;
      pcVar13 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar13 = *(char **)pcVar5;
      }
      ghidra::str::append(in_stack_00000004,pcVar13,*(uint *)(pcVar5 + 0x10));
      if (0xf < local_30) {
        pnVar10 = (nothrow_t *)(local_30 + 1);
        pvVar8 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar8 = *(void **)((int)local_44[0] + -4);
          pnVar10 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar10);
      }
      goto LAB_0048ffe2;
    }
    uVar4 = 0xe;
    pcVar13 = "`!- licensed -";
  }
  ghidra::str::append(in_stack_00000004,pcVar13,uVar4);
LAB_0048ffe2:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::performPurchaseLicense(TradeEngine *this)
bool TradeEngine::performPurchaseLicense()

{
  TradeLocation *this_00;
  bool bVar1;
  FictionData *pFVar2;
  uint uVar3;
  Ship *pSVar4;
  SoundEngine *this_01;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  SaveHandler *this_02;
  bool bVar6;
  uint uVar7;
  Faction *this_03;
  std::string local_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  Sound SVar8;
  int iVar9;
  
  bVar6 = false;
  bVar1 = canPurchaseLicense(this);
  if (bVar1) {
    iVar9 = *(int *)((char *)this + 0xd0);
    uVar7 = 0;
    pFVar2 = ghidra::any_singleton();
    puVar5 = *(undefined4 **)pFVar2;
    uVar3 = *(int *)(pFVar2 + 4) - (int)puVar5 >> 2;
    if (uVar3 != 0) {
      do {
        this_03 = (Faction *)*puVar5;
        if (*(int *)this_03 == iVar9) goto LAB_00490056;
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar7 < uVar3);
    }
    this_03 = (Faction *)0x0;
LAB_00490056:
    (this_03)->getAccess();
    this_00 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    (this_00)->clearContracts();
    (this_00)->populateContracts();
    local_30[0] = (std::string)0x0;
    ghidra::str::assign(local_30,"License",7);
    BankAccount::addTransaction
              (*(BankAccount **)(g_gameData + 0x124),extraout_ECX,-*(int *)(this_03 + 0xcc));
    bVar6 = true;
    uStack_28 = 0x4900dc;
    debugPrint("WORLD","Player was given a license for %s");
    pSVar4 = ShipData::currentlyBoardedShip;
    if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
      pSVar4 = *(Ship **)(g_gameData + 0xd0);
    }
    iVar9 = -1;
    SVar8 = 0x2a;
    uStack_2c = 0x4900fe;
    this_01 = ghidra::any_singleton();
    uStack_28 = 0x490108;
    (this_01)->playSound(pSVar4, SVar8, iVar9);
  }
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
    ghidra::any_singleton();
    (this_02)->saveGame();
  }
  return bVar6;
}


// Ghidra: bool __thiscall TradeEngine::canPurchaseLicense(TradeEngine *this)
bool TradeEngine::canPurchaseLicense()

{
  int iVar1;
  FictionData *pFVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  
  if ((*(int *)((char *)this + 0xcc) == 1) && (iVar1 = *(int *)((char *)this + 0xd0), iVar1 != -1)) {
    uVar6 = 0;
    pFVar2 = ghidra::any_singleton();
    puVar4 = *(undefined4 **)pFVar2;
    uVar3 = *(int *)(pFVar2 + 4) - (int)puVar4 >> 2;
    if (uVar3 != 0) {
      do {
        piVar5 = (int *)*puVar4;
        if (*piVar5 == iVar1) goto LAB_00490170;
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 < uVar3);
    }
    piVar5 = (int *)0x0;
LAB_00490170:
    if (((char)piVar5[0x38] == '\0') &&
       (piVar5[0x33] <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
      return true;
    }
  }
  return false;
}


// Ghidra: void __thiscall TradeEngine::populateContracts(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateContracts(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  undefined1 *puVar2;
  ListData *pLVar3;
  word *pwVar4;
  allocator<ListData> *paVar5;
  GameData *pGVar6;
  int iVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  ListData *unaff_EDI;
  std::string local_134 [16];
  undefined4 local_124;
  undefined4 local_120;
  std::string abStack_118 [12];
  undefined4 uStack_10c;
  Color3B local_db [3];
  int local_d8;
  uint local_d4;
  ListData local_d0 [100];
  void *local_6c [5];
  uint local_58;
  void *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint uStack_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  ListData *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bbcec;
  // [seh] local_1c = ExceptionList;
  // [cookie] pLVar3 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_d4 = 0;
  pGVar6 = g_gameData + 0x13c;
  local_d8 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  local_24 = pLVar3;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(g_gameData + 0x140) - *(int *)pGVar6 >> 2 != 0) {
    do {
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      pwVar4 = (word *)Contract::describeThreeLines
                                 (*(Contract **)(*(int *)pGVar6 + local_d4 * 4),SUB41(local_6c,0),
                                  SUB41(pGVar6,0));
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
      if (0xf < local_58) {
        pnVar9 = (nothrow_t *)(local_58 + 1);
        pvVar8 = local_6c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_6c[0] + -4);
          pnVar9 = (nothrow_t *)(local_58 + 0x24);
          if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar8))) goto LAB_00490533;
        }
        operator_delete(pvVar8,pnVar9);
      }
      ghidra::str::append((std::string *)&local_3c," `![Taken]",10);
      uStack_10c = 0x4902d8;
      cocos2d::Color3B::Color3B(local_db,' ','@',' ');
      local_120 = 0x4902fb;
      ghidra::str::ctor(abStack_118,(std::string *)&local_3c);
      local_14._0_1_ = 1;
      local_124 = 0;
      local_120 = 0xf;
      local_134[0] = (std::string)0x0;
      ghidra::str::assign(local_134,"",0);
      uVar1 = local_d4;
      local_14._0_1_ = 0;
      paVar5 = (allocator<ListData> *)new ((void *)(local_d0)) ListData(local_d4 + 1000);
      local_14 = CONCAT31(local_14._1_3_,2);
      if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar5);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar3,unaff_EDI);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
      }
      (local_d0)->~ListData();
      local_14 = 0xffffffff;
      if (0xf < uStack_28) {
        pnVar9 = (nothrow_t *)(uStack_28 + 1);
        pvVar8 = local_3c;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_3c + -4);
          pnVar9 = (nothrow_t *)(uStack_28 + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar8))) goto LAB_00490533;
        }
        operator_delete(pvVar8,pnVar9);
      }
      local_d4 = uVar1 + 1;
      pGVar6 = g_gameData + 0x13c;
      local_2c = 0;
      uStack_28 = 0xf;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      puVar2 = puStack_20;
    } while (local_d4 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)pGVar6 >> 2));
  }
  // [seh] puStack_20 = puVar2;
  iVar7 = *(int *)(local_d8 + 0x94);
  local_d4 = 0;
  if (*(int *)(local_d8 + 0x98) - iVar7 >> 2 != 0) {
    do {
      local_44 = 0;
      uStack_40 = 0xf;
      local_54 = (void *)((uint)local_54 & 0xffffff00);
      local_14 = 3;
      pwVar4 = (word *)Contract::describeThreeLines
                                 (*(Contract **)(iVar7 + local_d4 * 4),SUB41(local_6c,0),
                                  SUB41(iVar7,0));
      if ((word *)&local_54 != pwVar4) {
        // [mislabelled-dtor] word::~word((word *)&local_54);
        local_54 = *(void **)pwVar4;
        uStack_50 = *(undefined4 *)(pwVar4 + 4);
        uStack_4c = *(undefined4 *)(pwVar4 + 8);
        uStack_48 = *(undefined4 *)(pwVar4 + 0xc);
        local_44 = *(undefined4 *)(pwVar4 + 0x10);
        uStack_40 = *(uint *)(pwVar4 + 0x14);
        *(undefined4 *)(pwVar4 + 0x10) = 0;
        *(undefined4 *)(pwVar4 + 0x14) = 0xf;
        *pwVar4 = (word)0x0;
      }
      if (0xf < local_58) {
        pnVar9 = (nothrow_t *)(local_58 + 1);
        pvVar8 = local_6c[0];
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_6c[0] + -4);
          pnVar9 = (nothrow_t *)(local_58 + 0x24);
          if (0x1f < (uint)((int)local_6c[0] + (-4 - (int)pvVar8))) {
LAB_00490533:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar8,pnVar9);
      }
      uStack_10c = 0x4904b7;
      cocos2d::Color3B::Color3B(local_db,'@','@',' ');
      local_120 = 0x4904da;
      ghidra::str::ctor(abStack_118,(std::string *)&local_54);
      local_14._0_1_ = 4;
      local_124 = 0;
      local_120 = 0xf;
      local_134[0] = (std::string)0x0;
      ghidra::str::assign(local_134,"",0);
      uVar1 = local_d4;
      local_14._0_1_ = 3;
      paVar5 = (allocator<ListData> *)new ((void *)(local_d0)) ListData(local_d4);
      local_14 = CONCAT31(local_14._1_3_,5);
      if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar5);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar5,pLVar3,unaff_EDI);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
      }
      (local_d0)->~ListData();
      local_14 = 0xffffffff;
      if (0xf < uStack_40) {
        pnVar9 = (nothrow_t *)(uStack_40 + 1);
        pvVar8 = local_54;
        if ((nothrow_t *)0xfff < pnVar9) {
          pvVar8 = *(void **)((int)local_54 + -4);
          pnVar9 = (nothrow_t *)(uStack_40 + 0x24);
          if (0x1f < (uint)((int)local_54 + (-4 - (int)pvVar8))) goto LAB_00490533;
        }
        operator_delete(pvVar8,pnVar9);
      }
      local_d4 = uVar1 + 1;
      iVar7 = *(int *)(local_d8 + 0x94);
    } while (local_d4 < (uint)(*(int *)(local_d8 + 0x98) - iVar7 >> 2));
  }
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: bool __thiscall TradeEngine::canTakeCurrentContract(TradeEngine *this)
bool TradeEngine::canTakeCurrentContract()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  Good *pGVar6;
  int iVar7;
  std::string abStack_58 [16];
  undefined4 uStack_48;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005bbd28;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  // [seh] local_8 = 0;
  iVar7 = 0;
  uVar2 = *(uint *)((char *)this + 0xd4);
  if ((int)uVar2 < 1000) {
    if ((uVar2 != 0xffffffff) &&
       (iVar3 = *(int *)(iVar1 + 0x94), uVar2 < (uint)(*(int *)(iVar1 + 0x98) - iVar3 >> 2))) {
      iVar7 = *(int *)(iVar3 + uVar2 * 4);
    }
    if ((((((char *)this)[0xe8] == (byte)0x0) ||
         (*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2 == 0)) && (iVar7 != 0))
       && (((char *)this)[0xe8] == (byte)0x0)) {
      ghidra::str::ctor(abStack_58,*(std::string **)(iVar7 + 0x58));
      pGVar6 = GameData::getGoodWithShortName();
      if (pGVar6 != (Good *)0x0) {
        uStack_48 = 0x4906c2;
        (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->amountCanHold(pGVar6);
      }
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar4 = __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}


// Ghidra: void __thiscall TradeEngine::getContractStr(TradeEngine *this)
void TradeEngine::getContractStr()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined1 uVar2;
  bool bVar3;
  Good *pGVar4;
  int iVar5;
  FictionData *pFVar6;
  char *pcVar7;
  char *pcVar8;
  std::string *pbVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  int iVar12;
  uint uVar13;
  SpaceStation *pSVar14;
  std::string *in_stack_00000004;
  undefined4 uStack_7c;
  SpaceStation *local_54;
  bool local_45;
  void *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005bbdc0;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  // [seh] local_8._0_1_ = 0;
  // [seh] local_8._1_3_ = 0;
  iVar12 = 0;
  uVar13 = *(uint *)((char *)this + 0xd4);
  bVar1 = false;
  pbVar9 = *(std::string **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  if ((int)uVar13 < 1000) {
    if (uVar13 != 0xffffffff) {
      if ((uint)(*(int *)(pbVar9 + 0x98) - *(int *)(pbVar9 + 0x94) >> 2) <= uVar13) {
        *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
        *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
        *in_stack_00000004 = (std::string)0x0;
        ghidra::str::assign(in_stack_00000004,"`^Error: invalid contract selected.",0x23);
        if (0xf < uStack_30) {
          pnVar11 = (nothrow_t *)(uStack_30 + 1);
          pvVar10 = local_44;
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_44 + -4);
            pnVar11 = (nothrow_t *)(uStack_30 + 0x24);
            if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
        goto LAB_00490f77;
      }
      iVar12 = *(int *)(*(int *)(pbVar9 + 0x94) + uVar13 * 4);
    }
  }
  else {
    bVar1 = true;
    iVar12 = *(int *)(*(int *)(g_gameData + 0x13c) + -4000 + uVar13 * 4);
  }
  local_45 = canTakeCurrentContract(this);
  if ((iVar12 == 0) || (*(int *)(iVar12 + 0x58) == 0)) {
LAB_00490857:
    local_45 = false;
  }
  else {
    bVar3 = canTakeCurrentContract(this);
    if (!bVar3) {
      ghidra::str::ctor
                ((std::string *)&uStack_7c,*(std::string **)(iVar12 + 0x58));
      pGVar4 = GameData::getGoodWithShortName();
      if ((pGVar4 == (Good *)0x0) ||
         (iVar5 = CargoHold::amountCanHold
                            (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                             *(GoodContainmentOption *)(pGVar4 + 0x5c)),
         iVar5 < *(int *)(*(int *)(iVar12 + 0x58) + 0x1c))) goto LAB_00490857;
    }
  }
  if (iVar12 == 0) {
    if (*(int *)(pbVar9 + 0x98) - *(int *)(pbVar9 + 0x94) >> 2 == 0) {
      bVar1 = false;
      uVar13 = 0;
      while( true ) {
        if (ghidra::Singleton<void>::instance == (FictionData *)0x0) {
          ghidra::Singleton<void>::instance = operator_new(0x18);
          *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
          *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
          *(undefined4 *)ghidra::Singleton<void>::instance = 0;
          *(undefined4 *)(ghidra::Singleton<void>::instance + 4) = 0;
          *(undefined4 *)(ghidra::Singleton<void>::instance + 8) = 0;
          *(undefined4 *)(ghidra::Singleton<void>::instance + 0xc) = 0;
          *(undefined4 *)(ghidra::Singleton<void>::instance + 0x10) = 0;
          *(undefined4 *)(ghidra::Singleton<void>::instance + 0x14) = 0;
        }
        if ((uint)(*(int *)(ghidra::Singleton<void>::instance + 4) - *(int *)ghidra::Singleton<void>::instance >> 2) <=
            uVar13) break;
        ghidra::str::ctor((std::string *)&uStack_7c,pbVar9);
        // [seh] local_8._0_1_ = 0xd;
        pFVar6 = ghidra::any_singleton();
        // [seh] local_8._0_1_ = 0;
        bVar3 = (*(Faction **)(*(int *)pFVar6 + uVar13 * 4))->officeAtLocation();
        if (bVar3) {
          pFVar6 = ghidra::any_singleton();
          if (*(char *)(*(int *)(*(int *)pFVar6 + uVar13 * 4) + 0xe0) == '\0') {
            bVar1 = true;
          }
          uVar13 = uVar13 + 1;
        }
        else {
          uVar13 = uVar13 + 1;
        }
      }
      if (bVar1) {
        uVar13 = 0x74;
        pcVar8 = 
        "`%Note: `7No contracts currently available\n\nTo complete existing contracts, sell your goods at the Trading Terminal."
        ;
      }
      else {
        uVar13 = 0x3f;
        pcVar8 = "`%Note: `7No contracts are presently available at this station.";
      }
      ghidra::str::append((std::string *)&local_44,pcVar8,uVar13);
    }
  }
  else {
    ghidra::str::ctor
              ((std::string *)&uStack_7c,(std::string *)(*(int *)(iVar12 + 0x54) + 0x48));
    // [seh] local_8._0_1_ = 1;
    pFVar6 = ghidra::any_singleton();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (pFVar6)->getFactionForID();
    ghidra::str::append((std::string *)&local_44,"`!CARGO CONTRACT\n",0x11);
    if (bVar1) {
      ghidra::str::append((std::string *)&local_44,"`%** Accepted **\n\n",0x12);
    }
    pcVar7 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8._0_1_ = 2;
    pcVar8 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar8 = *(char **)pcVar7;
    }
    ghidra::str::append((std::string *)&local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
    // [seh] local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    pcVar7 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8._0_1_ = 3;
    pcVar8 = pcVar7;
    if (0xf < *(uint *)(pcVar7 + 0x14)) {
      pcVar8 = *(char **)pcVar7;
    }
    ghidra::str::append((std::string *)&local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
    // [seh] local_8._0_1_ = 0;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    pSVar14 = (SpaceStation *)0x0;
    local_54 = (SpaceStation *)0x0;
    if ((*(int *)(iVar12 + 0x58) != 0) && (*(int *)(*(int *)(iVar12 + 0x54) + 0x18) == 2)) {
      ghidra::str::ctor
                ((std::string *)&uStack_7c,(std::string *)(iVar12 + 0x38));
      local_54 = GameData::getSpaceStation();
      ghidra::str::ctor
                ((std::string *)&uStack_7c,(std::string *)(iVar12 + 0x20));
      pSVar14 = GameData::getSpaceStation();
      ghidra::str::append((std::string *)&local_44,"\n",1);
      ghidra::str::ctor
                ((std::string *)&uStack_7c,*(std::string **)(iVar12 + 0x58));
      pGVar4 = GameData::getGoodWithShortName();
      pcVar7 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 4;
      pcVar8 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar8 = *(char **)pcVar7;
      }
      ghidra::str::append((std::string *)&local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (*(int *)(local_54 + 0x24) == *(int *)(g_gameData + 0xd8)) {
        pcVar8 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 5;
        uVar13 = *(uint *)(pcVar8 + 0x14);
      }
      else {
        pcVar8 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 6;
        uVar13 = *(uint *)(pcVar8 + 0x14);
      }
      pcVar7 = pcVar8;
      if (0xf < uVar13) {
        pcVar7 = *(char **)pcVar8;
      }
      ghidra::str::append((std::string *)&local_44,pcVar7,*(uint *)(pcVar8 + 0x10));
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          uVar2 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00490afd;
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      local_18 = 0xf;
      local_1c = 0;
      if (*(int *)(pSVar14 + 0x24) == *(int *)(g_gameData + 0xd8)) {
        pcVar8 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 7;
        uVar13 = *(uint *)(pcVar8 + 0x14);
      }
      else {
        pcVar8 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 8;
        uVar13 = *(uint *)(pcVar8 + 0x14);
      }
      pcVar7 = pcVar8;
      if (0xf < uVar13) {
        pcVar7 = *(char **)pcVar8;
      }
      ghidra::str::append((std::string *)&local_44,pcVar7,*(uint *)(pcVar8 + 0x10));
      // [seh] local_8._0_1_ = 0;
      uVar2 = (undefined1)local_8;
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00490afd;
        }
        operator_delete(pvVar10,pnVar11);
      }
      if (0 < *(int *)(*(int *)(iVar12 + 0x58) + 0x2c)) {
        pcVar7 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 9;
        pcVar8 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar8 = *(char **)pcVar7;
        }
        ghidra::str::append((std::string *)&local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            uVar2 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00490afd;
          }
          operator_delete(pvVar10,pnVar11);
        }
      }
      if ((((char *)this)[0xe8] == (byte)0x0) && (!bVar1)) {
        if (local_45 == false) {
          ghidra::str::append
                    ((std::string *)&local_44,"\n`$** Not enough space **`7\n",0x1c);
        }
        if (*(int *)(pGVar4 + 0x5c) == 0) {
          pbVar9 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 10;
        }
        else {
          uStack_7c = 0x490d99;
          pbVar9 = (std::string *)strUsingArgs((char *)local_2c);
          // [seh] local_8._0_1_ = 0xb;
        }
        ghidra::str::append((std::string *)&local_44,pbVar9);
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            uVar2 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00490afd;
          }
          operator_delete(pvVar10,pnVar11);
        }
      }
    }
    ghidra::str::append((std::string *)&local_44,"\n",1);
    ghidra::str::append((std::string *)&local_44,"`7Jump Required : ",0x12);
    iVar5 = *(int *)(*(int *)(iVar12 + 0x54) + 0x18);
    if ((iVar5 == 1) || (iVar5 == 2)) {
      if (*(int *)(pSVar14 + 0x24) != *(int *)(g_gameData + 0xd8)) goto LAB_00490dc1;
      pcVar8 = "`0no\n";
      uVar13 = 5;
    }
    else if (*(int *)(local_54 + 0x24) == *(int *)(g_gameData + 0xd8)) {
      uVar13 = 5;
      pcVar8 = "`0no\n";
    }
    else {
LAB_00490dc1:
      uVar13 = 6;
      pcVar8 = "`$yes\n";
    }
    ghidra::str::append((std::string *)&local_44,pcVar8,uVar13);
    if (0.0 < *(float *)(iVar12 + 0x1c)) {
      pcVar7 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8._0_1_ = 0xc;
      pcVar8 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar8 = *(char **)pcVar7;
      }
      ghidra::str::append((std::string *)&local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          uVar2 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
LAB_00490afd:
            // [seh] local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
  *(void **)in_stack_00000004 = local_44;
  *(undefined4 *)(in_stack_00000004 + 4) = uStack_40;
  *(undefined4 *)(in_stack_00000004 + 8) = uStack_3c;
  *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_38;
  *(ulonglong *)(in_stack_00000004 + 0x10) = CONCAT44(uStack_30,local_34);
LAB_00490f77:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::canDeliverContract(TradeEngine *this)
bool TradeEngine::canDeliverContract()

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  Good *pGVar4;
  int iVar5;
  std::string *unaff_ESI;
  std::string abStack_24 [16];
  undefined4 uStack_14;
  
  if ((((*(int *)((char *)this + 0xcc) == 3) && (999 < *(int *)((char *)this + 0xd4))) &&
      (uVar1 = *(int *)((char *)this + 0xd4) - 1000, -1 < (int)uVar1)) &&
     (uVar1 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2))) {
    iVar2 = *(int *)(*(int *)(g_gameData + 0x13c) + uVar1 * 4);
    bVar3 = std::operator!=<>(unaff_ESI,(std::string *)this);
    if (!bVar3) {
      ghidra::str::ctor(abStack_24,*(std::string **)(iVar2 + 0x58));
      pGVar4 = GameData::getGoodWithShortName();
      iVar5 = 0;
      if (pGVar4 != (Good *)0x0) {
        uStack_14 = 0x49102b;
        iVar5 = CargoHold::amountHeld
                          (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar4);
      }
      if (*(int *)(*(int *)(iVar2 + 0x58) + 0x1c) <= iVar5) {
        return true;
      }
    }
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::deliverContract(TradeEngine *this)
bool TradeEngine::deliverContract()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffbc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  ContractCargoInstance *this_00;
  bool bVar2;
  std::string *pbVar3;
  Good *pGVar4;
  int iVar5;
  int iVar6;
  FlagManager *pFVar7;
  undefined4 extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *this_01;
  uint uVar8;
  int *piVar9;
  std::string *unaff_EDI;
  std::string local_40 [8];
  undefined4 uStack_38;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bbdf8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar3 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if ((((999 < *(int *)((char *)this + 0xd4)) && (uVar8 = *(int *)((char *)this + 0xd4) - 1000, -1 < (int)uVar8)) &&
      (uVar8 < (uint)(*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2))) &&
     ((piVar9 = *(int **)(*(int *)(g_gameData + 0x13c) + uVar8 * 4), piVar9 != (int *)0x0 &&
      (bVar2 = std::operator!=<>(pbVar3,unaff_EDI), !bVar2)))) {
    piVar1 = piVar9 + 0x16;
    ghidra::str::ctor(local_40,(std::string *)*piVar1);
    pGVar4 = GameData::getGoodWithShortName();
    iVar5 = 0;
    if (pGVar4 != (Good *)0x0) {
      iVar5 = CargoHold::amountHeld
                        (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar4);
    }
    if (*(int *)((std::string *)*piVar1 + 0x18) <= iVar5) {
      ghidra::str::ctor(local_40,(std::string *)*piVar1);
      pGVar4 = GameData::getGoodWithShortName();
      iVar5 = *(int *)(*piVar1 + 0x20);
      iVar6 = 0;
      if (pGVar4 != (Good *)0x0) {
        iVar6 = CargoHold::amountHeld
                          (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar4);
      }
      if (iVar5 <= iVar6) {
        iVar6 = iVar5;
      }
      uStack_38 = 0x491172;
      CargoHold::removeFromHold
                (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),pGVar4,iVar6,iVar5);
      local_40[0] = (std::string)0x0;
      ghidra::str::assign(local_40,"Contract Bonus",0xe);
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX);
      uStack_38 = 0x4911c5;
      debugPrint("WORLD","Cargo %s completed from contract.");
      uVar8 = piVar9[5];
      bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar3,(uint)unaff_EDI);
      if (!bVar2) {
        if (0xf < uVar8) {
          piVar9 = (int *)*piVar9;
        }
        strUsingArgs(&stack0xffffffbc,"completed_contract_%s",piVar9);
        // [seh] local_8 = 0;
        pFVar7 = ghidra::any_singleton();
        // [seh] local_8 = 0xffffffff;
        (pFVar7)->setFlag();
      }
      this_00 = (ContractCargoInstance *)*piVar1;
      this_01 = (GameLogic *)0x0;
      if (this_00 != (ContractCargoInstance *)0x0) {
        ContractCargoInstance::_scalar_deleting_destructor_(this_00,(uint)this_00);
        this_01 = extraout_ECX_00;
      }
      *piVar1 = 0;
      (this_01)->checkContracts();
      *(undefined4 *)((char *)this + 0xd4) = 0xffffffff;
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __thiscall TradeEngine::canTakeContract(TradeEngine *this)
bool TradeEngine::canTakeContract()

{
  int iVar1;
  bool bVar2;
  
  if (((*(int *)((char *)this + 0xcc) == 3) && (*(int *)((char *)this + 0xd4) != -1)) &&
     (*(int *)((char *)this + 0xd4) < 1000)) {
    bVar2 = canTakeCurrentContract(this);
    if ((bVar2) &&
       (iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398),
       *(uint *)((char *)this + 0xd4) < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2))) {
      return true;
    }
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::takeContract(TradeEngine *this)
bool TradeEngine::takeContract()

{
  char stack0xffffffac[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  TradeLocation *this_00;
  MetaGameAction *pMVar2;
  MetaGameAction **ppMVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  GameData *pGVar7;
  bool bVar8;
  undefined4 *puVar9;
  Good *pGVar10;
  FlagManager *pFVar11;
  int extraout_ECX;
  LogSystem *this_01;
  std::string abStack_50 [4];
  undefined4 uStack_4c;
  MetaGameAction *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bbe28;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  bVar8 = canTakeCurrentContract(this);
  if (!bVar8) {
    // [seh] ExceptionList = local_10;
    return false;
  }
  this_00 = *(TradeLocation **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  pMVar2 = *(MetaGameAction **)(*(int *)(this_00 + 0x94) + *(int *)((char *)this + 0xd4) * 4);
  *(float *)(pMVar2 + 0x18) =
       (float)(*(int *)(g_gameLogic + 0x184) +
              ((*(int *)(g_gameLogic + 0x18c) + *(int *)(g_gameLogic + 400) * 0xc) * 0x1f +
              *(int *)(g_gameLogic + 0x188)) * 0x18);
  uStack_4c = 0x49139e;
  debugPrint("DETAIL","Begin time in hours: %f");
  fVar1 = *(float *)(*(int *)(pMVar2 + 0x54) + 0x9c);
  if (fVar1 != 0.0) {
    *(float *)(*(int *)(pMVar2 + 0x54) + 0xa8) = fVar1 * 60.0 * 60.0;
  }
  pGVar7 = g_gameData;
  ppMVar3 = *(MetaGameAction ***)(g_gameData + 0x140);
  local_14 = pMVar2;
  if (*(MetaGameAction ***)(g_gameData + 0x144) == ppMVar3) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(g_gameData + 0x13c),ppMVar3,&local_14);
  }
  else {
    *ppMVar3 = pMVar2;
    *(int *)(pGVar7 + 0x140) = *(int *)(pGVar7 + 0x140) + 4;
  }
  pvVar4 = *(void **)(this_00 + 0x98);
  puVar9 = (undefined4 *)ghidra::lib::remove___x28_x29();
  pvVar5 = (void *)*puVar9;
  if (pvVar5 != pvVar4) {
    iVar6 = *(int *)(this_00 + 0x98);
    memmove(pvVar5,pvVar4,iVar6 - (int)pvVar4);
    *(int *)(this_00 + 0x98) = (iVar6 - (int)pvVar4) + (int)pvVar5;
  }
  (this_00)->restockWithContracts();
  ((char *)this)[0xe8] = (byte)0x1;
  ghidra::str::ctor(abStack_50,*(std::string **)(pMVar2 + 0x58));
  pGVar10 = GameData::getGoodWithShortName();
  CargoHold::addToHold
            (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)pGVar10,
             *(int *)(*(int *)(pMVar2 + 0x58) + 0x1c),extraout_ECX);
  *(undefined4 *)(*(int *)(pMVar2 + 0x58) + 0x18) = 0;
  (this_01)->addLogLine(*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224), &DAT_00000001)
  ;
  ghidra::str::assign((std::string *)&stack0xffffffac,"has_contract",0xc);
  // [seh] local_8 = 0;
  pFVar11 = ghidra::any_singleton();
  // [seh] local_8 = 0xffffffff;
  (pFVar11)->setFlag();
  *(int *)((char *)this + 0xd4) = (*(int *)(g_gameData + 0x140) - *(int *)(g_gameData + 0x13c) >> 2) + 999;
  // [seh] ExceptionList = local_10;
  return true;
}


// Ghidra: void __thiscall TradeEngine::populateBanks(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateBanks(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  Faction *this_00;
  ghidra::vector *pvVar1;
  ListData *pLVar2;
  FictionData *pFVar3;
  word *pwVar4;
  char *pcVar5;
  undefined2 *puVar6;
  int iVar7;
  allocator<ListData> *paVar8;
  char *pcVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  ListData *unaff_EDI;
  std::string local_124 [16];
  undefined4 local_114;
  undefined4 local_110;
  std::string abStack_108 [16];
  undefined4 uStack_f8;
  Color3B local_ce [3];
  Color3B local_cb [3];
  ghidra::vector *local_c8;
  code *local_c4;
  uint local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  ListData local_b8 [100];
  void *local_54 [5];
  uint local_40;
  void *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  ListData *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  int local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  // [seh] puStack_18 = &DAT_005bbe7e;
  // [seh] local_1c = ExceptionList;
  // [cookie] pLVar2 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  uVar12 = 0;
  local_c8 = param_1;
  local_c4 = Color3B_exref;
  pFVar3 = ghidra::Singleton<void>::instance;
  local_24 = pLVar2;
  do {
    local_c0 = uVar12;
    if (pFVar3 == (FictionData *)0x0) {
      pFVar3 = operator_new(0x18);
      *(int *)(pFVar3 + 0x10) = 0;
      *(int *)(pFVar3 + 0x14) = 0;
      *(int *)pFVar3 = 0;
      *(int *)(pFVar3 + 4) = 0;
      *(int *)(pFVar3 + 8) = 0;
      *(int *)(pFVar3 + 0xc) = 0;
      *(int *)(pFVar3 + 0x10) = 0;
      *(int *)(pFVar3 + 0x14) = 0;
      ghidra::Singleton<void>::instance = pFVar3;
    }
    if ((uint)(*(int *)(pFVar3 + 4) - *(int *)pFVar3 >> 2) <= uVar12) {
      // [seh] ExceptionList = local_1c;
      // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    if (pFVar3 == (FictionData *)0x0) {
      pFVar3 = operator_new(0x18);
      *(int *)(pFVar3 + 0x10) = 0;
      *(int *)(pFVar3 + 0x14) = 0;
      *(int *)pFVar3 = 0;
      *(int *)(pFVar3 + 4) = 0;
      *(int *)(pFVar3 + 8) = 0;
      *(int *)(pFVar3 + 0xc) = 0;
      *(int *)(pFVar3 + 0x10) = 0;
      *(int *)(pFVar3 + 0x14) = 0;
      ghidra::Singleton<void>::instance = pFVar3;
    }
    iVar7 = *(int *)(*(int *)pFVar3 + uVar12 * 4);
    if (*(int *)(iVar7 + 0x90) - *(int *)(iVar7 + 0x8c) >> 2 != 0) {
      local_2c = 0xf00000000;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      local_14 = 0;
      this_00 = *(Faction **)(*(int *)pFVar3 + uVar12 * 4);
      pwVar4 = (word *)strUsingArgs((char *)local_54);
      if ((word *)&local_3c != pwVar4) {
        // [mislabelled-dtor] word::~word((word *)&local_3c);
        local_3c = *(void **)pwVar4;
        uStack_38 = *(undefined4 *)(pwVar4 + 4);
        uStack_34 = *(undefined4 *)(pwVar4 + 8);
        uStack_30 = *(undefined4 *)(pwVar4 + 0xc);
        local_2c = *(undefined8 *)(pwVar4 + 0x10);
        *(undefined4 *)(pwVar4 + 0x10) = 0;
        *(undefined4 *)(pwVar4 + 0x14) = 0xf;
        *pwVar4 = (word)0x0;
      }
      if (0xf < local_40) {
        pnVar11 = (nothrow_t *)(local_40 + 1);
        pvVar10 = local_54[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_54[0] + -4);
          pnVar11 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) goto LAB_00491939;
        }
        operator_delete(pvVar10,pnVar11);
      }
      cocos2d::Color3B::Color3B((Color3B *)&local_bc,'@','@','@');
      if (*(float *)(this_00 + 0xd0) <= 0.0) {
        (this_00)->amountCanBorrow();
        pcVar5 = (char *)strUsingArgs((char *)local_54);
        local_14._0_1_ = 2;
        pcVar9 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar9 = *(char **)pcVar5;
        }
        ghidra::str::append((std::string *)&local_3c,pcVar9,*(uint *)(pcVar5 + 0x10));
        local_14 = (uint)local_14._1_3_ << 8;
        if (0xf < local_40) {
          pnVar11 = (nothrow_t *)(local_40 + 1);
          pvVar10 = local_54[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_54[0] + -4);
            pnVar11 = (nothrow_t *)(local_40 + 0x24);
            if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) goto LAB_00491939;
          }
          operator_delete(pvVar10,pnVar11);
        }
        iVar7 = (this_00)->amountCanBorrow();
        if (0 < iVar7) {
          puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_ce,' ','@',' ');
          local_bc = *puVar6;
          local_ba = *(undefined1 *)(puVar6 + 1);
        }
      }
      else {
        uStack_f8 = 0x49172c;
        pcVar5 = (char *)strUsingArgs((char *)local_54);
        local_14._0_1_ = 1;
        pcVar9 = pcVar5;
        if (0xf < *(uint *)(pcVar5 + 0x14)) {
          pcVar9 = *(char **)pcVar5;
        }
        ghidra::str::append((std::string *)&local_3c,pcVar9,*(uint *)(pcVar5 + 0x10));
        local_14 = (uint)local_14._1_3_ << 8;
        if (0xf < local_40) {
          pnVar11 = (nothrow_t *)(local_40 + 1);
          pvVar10 = local_54[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_54[0] + -4);
            pnVar11 = (nothrow_t *)(local_40 + 0x24);
            if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar10))) goto LAB_00491939;
          }
          operator_delete(pvVar10,pnVar11);
        }
        puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_cb,' ',' ','@');
        local_bc = *puVar6;
        local_ba = *(undefined1 *)(puVar6 + 1);
      }
      local_110 = 0x491871;
      ghidra::str::ctor(abStack_108,(std::string *)&local_3c);
      local_14._0_1_ = 3;
      local_114 = 0;
      local_110 = 0xf;
      local_124[0] = (std::string)0x0;
      ghidra::str::assign(local_124,"",0);
      local_14._0_1_ = 0;
      paVar8 = (allocator<ListData> *)new ((void *)(local_b8)) ListData(*(undefined4 *)this_00);
      pvVar1 = local_c8;
      local_14 = CONCAT31(local_14._1_3_,4);
      if (*(ListData **)(local_c8 + 8) == *(ListData **)(local_c8 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (local_c8,*(ListData **)(local_c8 + 4),(ListData *)paVar8);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar8,pLVar2,unaff_EDI);
        *(int *)(pvVar1 + 4) = *(int *)(pvVar1 + 4) + 0x60;
      }
      (local_b8)->~ListData();
      local_14 = -1;
      if (0xf < local_2c._4_4_) {
        pnVar11 = (nothrow_t *)(local_2c._4_4_ + 1);
        pvVar10 = local_3c;
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_3c + -4);
          pnVar11 = (nothrow_t *)(local_2c._4_4_ + 0x24);
          if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar10))) {
LAB_00491939:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_2c = 0xf00000000;
      local_3c = (void *)((uint)local_3c & 0xffffff00);
      pFVar3 = ghidra::Singleton<void>::instance;
      uVar12 = local_c0;
    }
    uVar12 = uVar12 + 1;
  } while( true );
}


// Ghidra: bool __thiscall TradeEngine::checkBanks(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkBanks(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  FictionData *pFVar4;
  word *pwVar5;
  char *pcVar6;
  int iVar7;
  undefined2 *puVar8;
  char ****ppppcVar9;
  char *pcVar10;
  void *pvVar11;
  Color3B *this_00;
  nothrow_t *pnVar12;
  uint unaff_EDI;
  Faction *pFVar13;
  int iVar14;
  undefined8 uVar15;
  Color3B local_72 [3];
  Color3B local_6f [3];
  code *local_6c;
  ghidra::vector *local_68;
  code *local_64;
  Faction *local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  uint local_58;
  void *local_54 [5];
  uint local_40;
  char ***local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  char *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  int local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = -1;
  // [seh] puStack_18 = &DAT_005bbec8;
  // [seh] local_1c = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_58 = 0;
  local_68 = param_1;
  pFVar4 = ghidra::Singleton<void>::instance;
  pFVar13 = (Faction *)0x0;
  local_24 = pcVar3;
  while( true ) {
    local_60 = pFVar13;
    if (pFVar4 == (FictionData *)0x0) {
      pFVar4 = operator_new(0x18);
      *(int *)(pFVar4 + 0x10) = 0;
      *(int *)(pFVar4 + 0x14) = 0;
      *(int *)pFVar4 = 0;
      *(int *)(pFVar4 + 4) = 0;
      *(int *)(pFVar4 + 8) = 0;
      *(int *)(pFVar4 + 0xc) = 0;
      *(int *)(pFVar4 + 0x10) = 0;
      *(int *)(pFVar4 + 0x14) = 0;
      ghidra::Singleton<void>::instance = pFVar4;
    }
    if ((uint)(*(int *)(pFVar4 + 4) - *(int *)pFVar4 >> 2) <= local_58) break;
    if (pFVar4 == (FictionData *)0x0) {
      pFVar4 = operator_new(0x18);
      *(int *)(pFVar4 + 0x10) = 0;
      *(int *)(pFVar4 + 0x14) = 0;
      *(int *)pFVar4 = 0;
      *(int *)(pFVar4 + 4) = 0;
      *(int *)(pFVar4 + 8) = 0;
      *(int *)(pFVar4 + 0xc) = 0;
      *(int *)(pFVar4 + 0x10) = 0;
      *(int *)(pFVar4 + 0x14) = 0;
      ghidra::Singleton<void>::instance = pFVar4;
    }
    iVar14 = *(int *)(*(int *)pFVar4 + local_58 * 4);
    local_58 = local_58 + 1;
    pFVar13 = local_60 + 1;
    if (*(int *)(iVar14 + 0x90) - *(int *)(iVar14 + 0x8c) >> 2 == 0) {
      pFVar13 = local_60;
    }
  }
  if ((Faction *)((*(int *)(local_68 + 4) - *(int *)local_68) / 0x60) == pFVar13) {
    local_58 = 0;
    local_64 = Color3B_exref;
    iVar14 = 0;
    local_6c = operator!=_exref;
    while( true ) {
      if (pFVar4 == (FictionData *)0x0) {
        pFVar4 = operator_new(0x18);
        *(int *)(pFVar4 + 0x10) = 0;
        *(int *)(pFVar4 + 0x14) = 0;
        *(int *)pFVar4 = 0;
        *(int *)(pFVar4 + 4) = 0;
        *(int *)(pFVar4 + 8) = 0;
        *(int *)(pFVar4 + 0xc) = 0;
        *(int *)(pFVar4 + 0x10) = 0;
        *(int *)(pFVar4 + 0x14) = 0;
        ghidra::Singleton<void>::instance = pFVar4;
      }
      if ((uint)(*(int *)(pFVar4 + 4) - *(int *)pFVar4 >> 2) <= local_58) goto LAB_00491e8b;
      if (pFVar4 == (FictionData *)0x0) {
        pFVar4 = operator_new(0x18);
        *(int *)(pFVar4 + 0x10) = 0;
        *(int *)(pFVar4 + 0x14) = 0;
        *(int *)pFVar4 = 0;
        *(int *)(pFVar4 + 4) = 0;
        *(int *)(pFVar4 + 8) = 0;
        *(int *)(pFVar4 + 0xc) = 0;
        *(int *)(pFVar4 + 0x10) = 0;
        *(int *)(pFVar4 + 0x14) = 0;
        ghidra::Singleton<void>::instance = pFVar4;
      }
      iVar7 = *(int *)(*(int *)pFVar4 + local_58 * 4);
      if (*(int *)(iVar7 + 0x90) - *(int *)(iVar7 + 0x8c) >> 2 != 0) break;
LAB_00491e47:
      local_58 = local_58 + 1;
    }
    local_2c = 0xf00000000;
    local_3c = (char ***)((uint)local_3c & 0xffffff00);
    local_14 = 0;
    local_60 = *(Faction **)(*(int *)pFVar4 + local_58 * 4);
    pwVar5 = (word *)strUsingArgs((char *)local_54,"`!%s\n");
    if ((word *)&local_3c != pwVar5) {
      // [mislabelled-dtor] word::~word((word *)&local_3c);
      local_3c = *(char ****)pwVar5;
      uStack_38 = *(undefined4 *)(pwVar5 + 4);
      uStack_34 = *(undefined4 *)(pwVar5 + 8);
      uStack_30 = *(undefined4 *)(pwVar5 + 0xc);
      local_2c = *(undefined8 *)(pwVar5 + 0x10);
      *(undefined4 *)(pwVar5 + 0x10) = 0;
      *(undefined4 *)(pwVar5 + 0x14) = 0xf;
      *pwVar5 = (word)0x0;
    }
    if (0xf < local_40) {
      pnVar12 = (nothrow_t *)(local_40 + 1);
      pvVar11 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_54[0] + -4);
        pnVar12 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar11))) goto LAB_00491e75;
      }
      operator_delete(pvVar11,pnVar12);
    }
    cocos2d::Color3B::Color3B((Color3B *)&local_5c,'@','@','@');
    pFVar13 = local_60;
    if (*(float *)(local_60 + 0xd0) <= 0.0) {
      (local_60)->amountCanBorrow();
      pcVar6 = (char *)strUsingArgs((char *)local_54,"`%%Max. loan: `$%dc");
      local_14._0_1_ = 2;
      pcVar10 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar10 = *(char **)pcVar6;
      }
      ghidra::str::append((std::string *)&local_3c,pcVar10,*(uint *)(pcVar6 + 0x10));
      local_14 = (uint)local_14._1_3_ << 8;
      if (0xf < local_40) {
        pnVar12 = (nothrow_t *)(local_40 + 1);
        pvVar11 = local_54[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_54[0] + -4);
          pnVar12 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar11))) goto LAB_00491e75;
        }
        operator_delete(pvVar11,pnVar12);
      }
      iVar7 = (pFVar13)->amountCanBorrow();
      if (0 < iVar7) {
        uVar15 = 0x2000000040;
        this_00 = local_72;
        goto LAB_00491d41;
      }
    }
    else {
      pcVar6 = (char *)strUsingArgs((char *)local_54,"`^Cur. loan: `$%.0fc",
                                    (double)*(float *)(local_60 + 0xd0));
      local_14._0_1_ = 1;
      pcVar10 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar10 = *(char **)pcVar6;
      }
      ghidra::str::append((std::string *)&local_3c,pcVar10,*(uint *)(pcVar6 + 0x10));
      local_14 = (uint)local_14._1_3_ << 8;
      if (0xf < local_40) {
        pnVar12 = (nothrow_t *)(local_40 + 1);
        pvVar11 = local_54[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_54[0] + -4);
          pnVar12 = (nothrow_t *)(local_40 + 0x24);
          if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar11))) goto LAB_00491e75;
        }
        operator_delete(pvVar11,pnVar12);
      }
      uVar15 = 0x4000000020;
      this_00 = local_6f;
LAB_00491d41:
      puVar8 = (undefined2 *)
               cocos2d::Color3B::Color3B
                         (this_00,' ',(uchar)uVar15,(uchar)((ulonglong)uVar15 >> 0x20));
      local_5c = *puVar8;
      local_5a = *(undefined1 *)(puVar8 + 1);
    }
    iVar7 = *(int *)local_68;
    if (((*(int *)(iVar14 + iVar7) == *(int *)local_60) &&
        (bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI), bVar1)) &&
       (*(int *)(iVar14 + 0x1c + iVar7) == 1)) {
      ppppcVar9 = &local_3c;
      if (0xf < local_2c._4_4_) {
        ppppcVar9 = (char ****)local_3c;
      }
      bVar1 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar9,(uint)local_2c,pcVar3,unaff_EDI);
      if (((bVar1) &&
          (bVar1 = cocos2d::Color3B::operator!=
                             ((Color3B *)(iVar7 + 0x58 + iVar14),(Color3B *)&local_5c), !bVar1)) &&
         ((*(int *)(iVar14 + 0x50 + *(int *)local_68) == -999 &&
          (*(char *)(iVar14 + 0x5e + *(int *)local_68) == '\0')))) {
        local_14 = -1;
        iVar14 = iVar14 + 0x60;
        if (0xf < local_2c._4_4_) {
          pnVar12 = (nothrow_t *)(local_2c._4_4_ + 1);
          ppppcVar9 = (char ****)local_3c;
          if ((nothrow_t *)0xfff < pnVar12) {
            ppppcVar9 = (char ****)local_3c[-1];
            pnVar12 = (nothrow_t *)(local_2c._4_4_ + 0x24);
            if ((char *)0x1f < (char *)((int)local_3c + (-4 - (int)ppppcVar9))) goto LAB_00491e75;
          }
          operator_delete(ppppcVar9,pnVar12);
        }
        local_2c = 0xf00000000;
        local_3c = (char ***)((uint)local_3c & 0xffffff00);
        pFVar4 = ghidra::Singleton<void>::instance;
        goto LAB_00491e47;
      }
    }
    if (0xf < local_2c._4_4_) {
      pnVar12 = (nothrow_t *)(local_2c._4_4_ + 1);
      ppppcVar9 = (char ****)local_3c;
      if ((nothrow_t *)0xfff < pnVar12) {
        ppppcVar9 = (char ****)local_3c[-1];
        pnVar12 = (nothrow_t *)(local_2c._4_4_ + 0x24);
        if ((char *)0x1f < (char *)((int)local_3c + (-4 - (int)ppppcVar9))) {
LAB_00491e75:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppcVar9,pnVar12);
    }
  }
LAB_00491e8b:
  // [seh] ExceptionList = local_1c;
  // [cookie] uVar2 = __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return (bool)uVar2;
}


// Ghidra: void __thiscall TradeEngine::getLoanStr(TradeEngine *this)
void TradeEngine::getLoanStr()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  FictionData *pFVar2;
  uint uVar3;
  char *pcVar4;
  Faction *pFVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  void *pvVar10;
  uint uVar11;
  nothrow_t *pnVar12;
  Faction *this_00;
  std::string *in_stack_00000004;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bbf39;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  iVar6 = *(int *)((char *)this + 0xdc);
  local_14 = uVar1;
  if (iVar6 == -1) {
    ghidra::str::append
              (in_stack_00000004,
               "Use this screen to take out loans from various banks in the Apollo system.\n\nLoans accrue interest and unpaid debts can incur corrective measures.\n\n"
               ,0x93);
    goto LAB_00492285;
  }
  pFVar2 = ghidra::any_singleton();
  uVar11 = 0;
  puVar8 = *(undefined4 **)pFVar2;
  uVar3 = *(int *)(pFVar2 + 4) - (int)puVar8 >> 2;
  if (uVar3 != 0) {
    do {
      this_00 = (Faction *)*puVar8;
      if (*(int *)this_00 == iVar6) goto LAB_00491f43;
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 < uVar3);
  }
  this_00 = (Faction *)0x0;
LAB_00491f43:
  pFVar5 = this_00 + 0x20;
  if (0xf < *(uint *)(this_00 + 0x34)) {
    pFVar5 = *(Faction **)pFVar5;
  }
  pcVar4 = (char *)strUsingArgs((char *)local_2c,"`!%s\n\n",pFVar5,uVar1);
  // [seh] local_8 = 1;
  pcVar9 = pcVar4;
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar9 = *(char **)pcVar4;
  }
  ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar4 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar12);
  }
  pFVar5 = this_00 + 0x38;
  if (0xf < *(uint *)(this_00 + 0x4c)) {
    pFVar5 = *(Faction **)pFVar5;
  }
  pcVar4 = (char *)strUsingArgs((char *)local_2c,"`%%%s\n\n\n",pFVar5,uVar1);
  // [seh] local_8 = 2;
  pcVar9 = pcVar4;
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar9 = *(char **)pcVar4;
  }
  ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar4 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar12);
  }
  if (0.0 < *(float *)(this_00 + 0xd0)) {
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`^Existing loan:\n  `$%.0fc\n",
                                  (double)*(float *)(this_00 + 0xd0));
    // [seh] local_8 = 3;
    pcVar9 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar9 = *(char **)pcVar4;
    }
    ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar4 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar12 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar12 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar12);
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`0Original loan:\n  `$%dc\n");
    // [seh] local_8 = 4;
    pcVar9 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar9 = *(char **)pcVar4;
    }
    ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar4 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar12 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar12 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar12);
    }
  }
  if (((char *)this)[0xe9] == (byte)0x0) {
    iVar6 = (this_00)->amountCanBorrow();
    if (iVar6 < 1) goto LAB_00492285;
    uVar1 = 0;
    piVar7 = *(int **)(this_00 + 0x80);
    iVar6 = *(int *)(this_00 + 0xd8);
    uVar3 = *(int *)(this_00 + 0x84) - (int)piVar7 >> 2;
    if (uVar3 != 0) {
      do {
        if (iVar6 < *piVar7) break;
        uVar1 = uVar1 + 1;
        iVar6 = iVar6 - *piVar7;
        piVar7 = piVar7 + 1;
      } while (uVar1 < uVar3);
    }
    iVar6 = (this_00)->amountCanBorrow();
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`!Offered loan:\n  `$%dc`7 @ %d%% interest",
                                  iVar6);
    // [seh] local_8 = 6;
    pcVar9 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar9 = *(char **)pcVar4;
    }
    ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar4 + 0x10));
    if (local_18 < 0x10) goto LAB_00492285;
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    if (*(int *)((char *)this + 0xec) < 1) goto LAB_00492285;
    pcVar4 = (char *)strUsingArgs((char *)local_2c,"`%%REPAID:\n  `$%dc\n");
    // [seh] local_8 = 5;
    pcVar9 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar9 = *(char **)pcVar4;
    }
    ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar4 + 0x10));
    if (local_18 < 0x10) goto LAB_00492285;
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete(pvVar10,pnVar12);
LAB_00492285:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::currentLoanValid(TradeEngine *this)
bool TradeEngine::currentLoanValid()

{
  FictionData *pFVar1;
  Faction *this_00;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(int *)((char *)this + 0xcc) == 2) && (iVar2 = *(int *)((char *)this + 0xdc), iVar2 != -1)) &&
     (((char *)this)[0xe9] == (byte)0x0)) {
    uVar5 = 0;
    pFVar1 = ghidra::any_singleton();
    puVar3 = *(undefined4 **)pFVar1;
    uVar4 = *(int *)(pFVar1 + 4) - (int)puVar3 >> 2;
    if (uVar4 != 0) {
      do {
        this_00 = (Faction *)*puVar3;
        if (*(int *)this_00 == iVar2) goto LAB_004922f7;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 < uVar4);
    }
    this_00 = (Faction *)0x0;
LAB_004922f7:
    iVar2 = (this_00)->amountCanBorrow();
    if ((0 < iVar2) && (0 < *(int *)((char *)this + 0xe0))) {
      return true;
    }
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::currentRepaymentValid(TradeEngine *this)
bool TradeEngine::currentRepaymentValid()

{
  FictionData *this_00;
  Faction *pFVar1;
  int iVar2;
  
  if ((((*(int *)((char *)this + 0xcc) == 2) && (iVar2 = *(int *)((char *)this + 0xdc), iVar2 != -1)) &&
      (((char *)this)[0xe9] != (byte)0x0)) &&
     ((*(int *)((char *)this + 0xe0) != 0 &&
      (*(int *)((char *)this + 0xe0) <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))))) {
    this_00 = ghidra::any_singleton();
    pFVar1 = (this_00)->getFactionForNumber(iVar2);
    if ((*(int *)((char *)this + 0xe0) <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) &&
       (*(int *)((char *)this + 0xe0) <= (int)*(float *)(pFVar1 + 0xd0))) {
      return true;
    }
  }
  return false;
}


// Ghidra: void __thiscall TradeEngine::takeLoan(TradeEngine *this)
void TradeEngine::takeLoan()

{
  char stack0xffffffb8[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  FictionData *pFVar4;
  int iVar5;
  Stats *this_00;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  Faction *this_01;
  std::string local_78 [12];
  undefined4 uStack_6c;
  std::string local_60 [12];
  undefined4 uStack_54;
  std::string local_44 [12];
  undefined4 local_38;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bbf87;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  bVar3 = currentLoanValid(this);
  if (!bVar3) {
    // [seh] ExceptionList = local_10;
    return;
  }
  iVar1 = *(int *)((char *)this + 0xdc);
  pFVar4 = ghidra::any_singleton();
  uVar6 = 0;
  puVar2 = *(undefined4 **)pFVar4;
  uVar8 = *(int *)(pFVar4 + 4) - (int)puVar2 >> 2;
  puVar7 = puVar2;
  if (uVar8 != 0) {
    do {
      if (*(int *)*puVar7 == iVar1) {
        this_01 = (Faction *)puVar2[uVar6];
        goto LAB_00492405;
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 < uVar8);
  }
  this_01 = (Faction *)0x0;
LAB_00492405:
  iVar1 = *(int *)((char *)this + 0xe0);
  if ((iVar1 < 1) || (iVar5 = (this_01)->amountCanBorrow(), iVar5 < iVar1)) {
    local_38 = 0x492451;
    debugPrint("WORLD","Unable to borrow this amount of money.");
  }
  else {
    *(int *)(this_01 + 0xd4) = *(int *)(this_01 + 0xd4) + iVar1;
    *(float *)(this_01 + 0xd0) = (float)iVar1 + *(float *)(this_01 + 0xd0);
  }
  local_44[0] = (std::string)0x0;
  ghidra::str::assign(local_44,"Loan",4);
  (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
  local_44[0] = (std::string)0x0;
  ghidra::str::assign(local_44,"money_borrowed",0xe);
  // [seh] local_8 = 0;
  if (Singleton<Stats>::instance == (Stats *)0x0) {
    this_00 = operator_new(0x58);
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    Singleton<Stats>::instance = (Stats *)new ((void *)(this_00)) Stats();
  }
  // [seh] local_8 = 0xffffffff;
  (Singleton<Stats>::instance)->addStat();
  local_38 = 0;
  uStack_54 = 0x49251d;
  ghidra::str::assign((std::string *)&stack0xffffffb8,"",0);
  // [seh] local_8 = 2;
  local_60[0] = (std::string)0x0;
  uStack_6c = 0x492549;
  ghidra::str::assign(local_60,"money_borrowed",0xe);
  // [seh] local_8 = CONCAT31(local_8._1_3_,3);
  local_78[0] = (std::string)0x0;
  ghidra::str::assign(local_78,"commerce",8);
  // [seh] local_8 = 0xffffffff;
  Analytics::logEvent();
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall TradeEngine::repayLoan(TradeEngine *this)
void TradeEngine::repayLoan()

{
  char stack0xffffffb8[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  FictionData *pFVar4;
  Stats *this_00;
  uint uVar5;
  Faction *this_01;
  undefined4 *puVar6;
  uint uVar7;
  std::string local_78 [12];
  undefined4 uStack_6c;
  std::string local_60 [12];
  undefined4 uStack_54;
  std::string local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bbf87;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  bVar3 = currentRepaymentValid(this);
  if (bVar3) {
    iVar1 = *(int *)((char *)this + 0xdc);
    pFVar4 = ghidra::any_singleton();
    uVar5 = 0;
    puVar2 = *(undefined4 **)pFVar4;
    uVar7 = *(int *)(pFVar4 + 4) - (int)puVar2 >> 2;
    puVar6 = puVar2;
    if (uVar7 != 0) {
      do {
        if (*(int *)*puVar6 == iVar1) {
          this_01 = (Faction *)puVar2[uVar5];
          goto LAB_004925f9;
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < uVar7);
    }
    this_01 = (Faction *)0x0;
LAB_004925f9:
    local_34 = 0x492604;
    (this_01)->repay(*(int *)((char *)this + 0xe0));
    local_34 = 0;
    local_44[0] = (std::string)0x0;
    ghidra::str::assign(local_44,"money_repaid",0xc);
    // [seh] local_8 = 0;
    if (Singleton<Stats>::instance == (Stats *)0x0) {
      this_00 = operator_new(0x58);
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      Singleton<Stats>::instance = (Stats *)new ((void *)(this_00)) Stats();
    }
    // [seh] local_8 = 0xffffffff;
    (Singleton<Stats>::instance)->addStat();
    local_38 = 0;
    local_34 = 0xf;
    uStack_54 = 0x492693;
    ghidra::str::assign((std::string *)&stack0xffffffb8,"",0);
    // [seh] local_8 = 2;
    local_60[0] = (std::string)0x0;
    uStack_6c = 0x4926bf;
    ghidra::str::assign(local_60,"money_repaid",0xc);
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
    local_78[0] = (std::string)0x0;
    ghidra::str::assign(local_78,"commerce",8);
    // [seh] local_8 = 0xffffffff;
    Analytics::logEvent();
    local_34 = 0;
    local_44[0] = (std::string)0x0;
    ghidra::str::assign(local_44,"Loan",4);
    (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
    *(undefined4 *)((char *)this + 0xec) = *(undefined4 *)((char *)this + 0xe0);
    *(undefined4 *)((char *)this + 0xe0) = 0;
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall TradeEngine::mechanicCanUpgradePod(TradeEngine *this,int param_1)
bool TradeEngine::mechanicCanUpgradePod(int param_1)

{
  CargoPod *this_00;
  GameData *pGVar1;
  bool bVar2;
  
  pGVar1 = g_gameData;
  if ((*(int *)((char *)this + 0x10c) == 2) && (*(int *)((char *)this + 0x114) != -1)) {
    this_00 = *(CargoPod **)
               (*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc + *(int *)((char *)this + 0x114) * 4);
    if ((this_00 != (CargoPod *)0x0) && (param_1 - 1U < 2)) {
      bVar2 = (this_00)->hasOption(param_1);
      if ((!bVar2) &&
         ((int)(&goodContainmentOptionCost)[param_1] <= *(int *)(*(int *)(pGVar1 + 0x124) + 0x1c)))
      {
        return true;
      }
    }
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::mechanicCanBuyModule(TradeEngine *this)
bool TradeEngine::mechanicCanBuyModule()

{
  undefined4 *puVar1;
  bool bVar2;
  
  if (((*(int *)((char *)this + 0x10c) == 3) && (*(int *)((char *)this + 0x118) != -1)) &&
     (((char *)this)[0x109] == (byte)0x0)) {
    puVar1 = *(undefined4 **)
              (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398) + 0x58) +
              *(int *)((char *)this + 0x118) * 4);
    if (puVar1 == (undefined4 *)0x0) {
      debugPrint("DETAIL","ERROR: invalid module sale instance selected for some reason.");
    }
    else {
      bVar2 = SystemManager::canAddModule
                        (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),
                         (ShipModule *)*puVar1);
      if ((bVar2) && ((int)puVar1[1] <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
        return true;
      }
    }
  }
  return false;
}


// Ghidra: void __thiscall TradeEngine::getMechanicStatus(TradeEngine *this)
void TradeEngine::getMechanicStatus()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  undefined4 ***pppuVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  std::string *in_stack_00000004;
  char *pcVar12;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bc009;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  iVar7 = *(int *)(g_gameData + 0xd0);
  local_14 = uVar3;
  if (iVar7 == 0) {
    ghidra::str::append(in_stack_00000004,"`7Vessel: `8none",0x10);
  }
  else {
    puVar4 = (undefined4 *)(iVar7 + 8);
    if (0xf < *(uint *)(iVar7 + 0x1c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Vessel: `%%%s\n",puVar4,uVar3);
    // [seh] local_8 = 1;
    pcVar12 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar12 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar12,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pppuVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pppuVar9 = (undefined4 ***)local_2c[0][-1];
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppuVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppuVar9,pnVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    piVar6 = *(int **)(*(int *)(g_gameData + 0xd0) + 0x254);
    if (0xf < (uint)piVar6[5]) {
      piVar6 = (int *)*piVar6;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Class : `%%%s\n",piVar6,uVar3);
    // [seh] local_8 = 2;
    pcVar12 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar12 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar12,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pppuVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pppuVar9 = (undefined4 ***)local_2c[0][-1];
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppuVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppuVar9,pnVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    puVar4 = (undefined4 *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x78);
    if (0xf < *(uint *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x8c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Manu. : `%%%s\n",puVar4);
    // [seh] local_8 = 3;
    pcVar12 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar12 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar12,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pppuVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pppuVar9 = (undefined4 ***)local_2c[0][-1];
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppuVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppuVar9,pnVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    puVar4 = (undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x238);
    if (0xf < *(uint *)(*(int *)(g_gameData + 0xd0) + 0x24c)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Rego. : `0%s\n",puVar4);
    // [seh] local_8 = 4;
    pcVar12 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar12 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar12,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pppuVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pppuVar9 = (undefined4 ***)local_2c[0][-1];
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppuVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppuVar9,pnVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    puVar4 = (undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x80);
    if (0xf < *(uint *)(*(int *)(g_gameData + 0xd0) + 0x94)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Owner : `!%s\n",puVar4);
    // [seh] local_8 = 5;
    pcVar12 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar12 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar12,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pppuVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pppuVar9 = (undefined4 ***)local_2c[0][-1];
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppuVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppuVar9,pnVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    for (piVar6 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
        piVar6 != *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
        piVar6 = piVar6 + 1) {
      if (*(int *)(((int *)*piVar6)[2] + 4) == 1) {
        cVar1 = (**(code **)(*(int *)*piVar6 + 0x10))(0);
        if (cVar1 != '\0') {
          uVar3 = 0x10;
          pcVar12 = "`7Rct.  : `0Yes\n";
          goto LAB_00492c20;
        }
        break;
      }
    }
    for (piVar6 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
        piVar6 != *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
        piVar6 = piVar6 + 1) {
      if (*(int *)(*(int *)(*piVar6 + 8) + 4) == 1) {
        uVar3 = 0x10;
        pcVar12 = "`7Rct.  : `$Yes\n";
        goto LAB_00492c20;
      }
    }
    uVar3 = 0xf;
    pcVar12 = "`7Rct.  : `8No\n";
LAB_00492c20:
    ghidra::str::append(in_stack_00000004,pcVar12,uVar3);
    for (piVar6 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
        piVar6 != *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
        piVar6 = piVar6 + 1) {
      if (*(int *)(((int *)*piVar6)[2] + 4) == 0xd) {
        cVar1 = (**(code **)(*(int *)*piVar6 + 0x10))(0);
        if (cVar1 != '\0') {
          uVar3 = 0x10;
          pcVar12 = "`7Sol.  : `0Yes\n";
          goto LAB_00492ca9;
        }
        break;
      }
    }
    for (piVar6 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
        piVar6 != *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
        piVar6 = piVar6 + 1) {
      if (*(int *)(*(int *)(*piVar6 + 8) + 4) == 0xd) {
        uVar3 = 0x10;
        pcVar12 = "`7Sol.  : `$Yes\n";
        goto LAB_00492ca9;
      }
    }
    uVar3 = 0xf;
    pcVar12 = "`7Sol.  : `8No\n";
LAB_00492ca9:
    ghidra::str::append(in_stack_00000004,pcVar12,uVar3);
    for (piVar6 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
        piVar6 != *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
        piVar6 = piVar6 + 1) {
      if (*(int *)(((int *)*piVar6)[2] + 4) == 10) {
        cVar1 = (**(code **)(*(int *)*piVar6 + 0x10))(0);
        if (cVar1 != '\0') {
          uVar3 = 0x10;
          pcVar12 = "`7J/D   : `0Yes\n";
          goto LAB_00492d39;
        }
        break;
      }
    }
    for (piVar6 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
        piVar6 != *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
        piVar6 = piVar6 + 1) {
      if (*(int *)(*(int *)(*piVar6 + 8) + 4) == 10) {
        uVar3 = 0x10;
        pcVar12 = "`7J/D   : `$Yes\n";
        goto LAB_00492d39;
      }
    }
    uVar3 = 0xf;
    pcVar12 = "`7J/D   : `8No\n";
LAB_00492d39:
    ghidra::str::append(in_stack_00000004,pcVar12,uVar3);
    iVar7 = (*(Ship **)(g_gameData + 0xd0))->getHullDamagePercent();
    if (iVar7 < 4) {
      uVar3 = 9;
      pcVar12 = "`0nominal";
    }
    else if (iVar7 < 0x15) {
      uVar3 = 0xc;
      pcVar12 = "`3light dmg.";
    }
    else if (iVar7 < 0x33) {
      uVar3 = 0xb;
      pcVar12 = "`$med. dmg.";
    }
    else if (iVar7 < 0x4c) {
      uVar3 = 0xc;
      pcVar12 = "`^heavy dmg.";
    }
    else {
      uVar3 = 10;
      pcVar12 = "`@CRITICAL";
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_2c,pcVar12,uVar3);
    // [seh] local_8 = 6;
    ppppuVar8 = local_2c;
    if (0xf < local_18) {
      ppppuVar8 = (undefined4 ****)local_2c[0];
    }
    pcVar5 = (char *)strUsingArgs((char *)local_44,"`7Damage: %s\n",ppppuVar8);
    // [seh] local_8._0_1_ = 7;
    pcVar12 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar12 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar12,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8._0_1_ = 6;
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      ppppuVar8 = (undefined4 ****)local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        ppppuVar8 = (undefined4 ****)local_2c[0][-1];
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar8))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(ppppuVar8,pnVar11);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    bVar2 = (*(Ship **)(g_gameData + 0xd0))->isDisabled(false);
    pcVar12 = "`@disabled";
    if (!bVar2) {
      pcVar12 = "`%functional";
    }
    pcVar5 = (char *)strUsingArgs((char *)local_44,"`7Status: %s\n",pcVar12);
    // [seh] local_8 = 8;
    pcVar12 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar12 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar12,*(uint *)(pcVar5 + 0x10));
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::getPodStatus(TradeEngine *this)
void TradeEngine::getPodStatus()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  Good *pGVar5;
  Good *pGVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  std::string *in_stack_00000004;
  char *pcVar9;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bc081;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  local_14 = uVar2;
  if ((*(int *)((char *)this + 0x10c) == 2) && (*(int *)((char *)this + 0x114) != -1)) {
    pcVar3 = (char *)strUsingArgs((char *)local_2c,"`%%Cargo Slot #%d\n",*(int *)((char *)this + 0x114) + 1,
                                  uVar2);
    // [seh] local_8 = 1;
    pcVar9 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar9 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar8 = (nothrow_t *)(local_18 + 1);
      pvVar7 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar8) {
        pvVar7 = *(void **)((int)local_2c[0] + -4);
        pnVar8 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar7,pnVar8);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc + *(int *)((char *)this + 0x114) * 4)
        == 0) {
      pcVar3 = (char *)strUsingArgs((char *)local_2c,"`7Pod           : `8no `7(`$%dc`7)\n",100,
                                    uVar2);
      // [seh] local_8 = 7;
      pcVar9 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar9 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      ghidra::str::append(in_stack_00000004,"`7Temp. Control : `8n/a\n",0x18);
      uVar2 = 0x18;
      pcVar9 = "`7Shielded      : `8n/a\n";
    }
    else {
      ghidra::str::append(in_stack_00000004,"`7Pod           : `%yes\n",0x18);
      ghidra::str::append(in_stack_00000004,"`7Temp. Control : ",0x12);
      if (*(char *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                            *(int *)((char *)this + 0x114) * 4) + 1) == '\0') {
        pcVar3 = (char *)strUsingArgs((char *)local_2c,"`8no `7(`$%dc`7)\n",0xfa);
        // [seh] local_8 = 2;
        pcVar9 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar9 = *(char **)pcVar3;
        }
        ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar3 + 0x10));
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar7 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar7 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,pnVar8);
        }
      }
      else {
        ghidra::str::append(in_stack_00000004,"`%yes\n",6);
      }
      ghidra::str::append(in_stack_00000004,"`7Shielded      : ",0x12);
      if (*(char *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                            *(int *)((char *)this + 0x114) * 4) + 2) == '\0') {
        pcVar3 = (char *)strUsingArgs((char *)local_2c,"`8no `7(`$%dc`7)\n",0xfa);
        // [seh] local_8 = 3;
        pcVar9 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar9 = *(char **)pcVar3;
        }
        ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar3 + 0x10));
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar7 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar7 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,pnVar8);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      else {
        ghidra::str::append(in_stack_00000004,"`%yes\n",6);
      }
      iVar4 = CargoHold::getPodSellCost
                        (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),*(int *)((char *)this + 0x114)
                        );
      pcVar3 = (char *)strUsingArgs((char *)local_2c,"`7Sell Value    : `$%dc\n",iVar4);
      // [seh] local_8 = 4;
      pcVar9 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar9 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      pcVar3 = (char *)strUsingArgs((char *)local_2c,"`7Contents: \n",*(int *)((char *)this + 0x114) + 1);
      // [seh] local_8 = 5;
      pcVar9 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar9 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar8);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      iVar4 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                      (int)*(GameData **)((char *)this + 0x114) * 4);
      iVar1 = *(int *)(iVar4 + 4);
      if (-1 < iVar1) {
        pGVar5 = (*(GameData **)((char *)this + 0x114))->getGood(iVar1);
        pGVar6 = pGVar5 + 4;
        if (0xf < *(uint *)(pGVar5 + 0x18)) {
          pGVar6 = *(Good **)pGVar6;
        }
        pcVar3 = (char *)strUsingArgs((char *)local_2c,"`%%%d`7x `%%%s\n",*(undefined4 *)(iVar4 + 8)
                                      ,pGVar6);
        // [seh] local_8 = 6;
        pcVar9 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar9 = *(char **)pcVar3;
        }
        ghidra::str::append(in_stack_00000004,pcVar9,*(uint *)(pcVar3 + 0x10));
        if (0xf < local_18) {
          pnVar8 = (nothrow_t *)(local_18 + 1);
          pvVar7 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar8) {
            pvVar7 = *(void **)((int)local_2c[0] + -4);
            pnVar8 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,pnVar8);
        }
        goto LAB_00493403;
      }
      uVar2 = 6;
      pcVar9 = "`8n/a\n";
    }
    ghidra::str::append(in_stack_00000004,pcVar9,uVar2);
  }
LAB_00493403:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::getModuleStatus(TradeEngine *this)
void TradeEngine::getModuleStatus()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  std::string *pbVar8;
  void *pvVar9;
  void *pvVar10;
  word *this_00;
  nothrow_t *pnVar11;
  uint unaff_EDI;
  ShipModule *this_01;
  float fVar12;
  std::string *in_stack_00000004;
  uint uVar13;
  undefined4 *local_50;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bc259;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  local_50 = (undefined4 *)0x0;
  local_14 = pcVar4;
  if ((*(int *)((char *)this + 0x10c) != 3) || (iVar7 = *(int *)((char *)this + 0x118), iVar7 == -1))
  goto LAB_00494952;
  if (((char *)this)[0x109] == (byte)0x0) {
    local_50 = *(undefined4 **)
                (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398) + 0x58) +
                iVar7 * 4);
    this_01 = (ShipModule *)*local_50;
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Cat. : `%%%s\n");
    // [seh] local_8 = 5;
    pcVar6 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar6 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Type : `%%%s\n");
    // [seh] local_8 = 6;
    pcVar6 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar6 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Manu.: `%%%s\n");
    // [seh] local_8 = 7;
    pcVar6 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar6 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    if ((local_50[2] == -1) || (5 < (int)local_50[2])) {
      pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7State: %s\n");
      // [seh] local_8 = 8;
      pcVar6 = pcVar5;
      if (0xf < *(uint *)(pcVar5 + 0x14)) {
        pcVar6 = *(char **)pcVar5;
      }
      ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_00493934;
      }
    }
    else {
      pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7State: %s\n");
      // [seh] local_8 = 9;
      ghidra::str::append(in_stack_00000004,pbVar8);
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar9 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          pvVar9 = *(void **)((int)local_2c[0] + -4);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_00493934:
        operator_delete(pvVar9,pnVar11);
      }
    }
  }
  else {
    this_01 = *(ShipModule **)
               (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c) + iVar7 * 4);
    (this_01)->getValue();
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Cat. : `%%%s\n");
    // [seh] local_8 = 1;
    pcVar6 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar6 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Type : `%%%s\n");
    // [seh] local_8 = 2;
    pcVar6 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar6 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Manu.: `%%%s\n");
    // [seh] local_8 = 3;
    pcVar6 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar6 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar9,pnVar11);
    }
    ghidra::str::append(in_stack_00000004,"`7Stat.: ",9);
    cVar2 = (**(code **)(*(int *)this_01 + 0x14))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(int *)this_01 + 0x18))();
      if (cVar2 == '\0') {
        pcVar6 = "`0nominal\n";
        uVar13 = 10;
      }
      else {
        pcVar6 = "`^damaged\n";
        uVar13 = 10;
      }
    }
    else {
      uVar13 = 0x11;
      pcVar6 = "`@non-functional\n";
    }
    ghidra::str::append(in_stack_00000004,pcVar6,uVar13);
    pcVar5 = (char *)strUsingArgs((char *)local_2c,"`7Cost : `$%dc\n");
    // [seh] local_8 = 4;
    pcVar6 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar6 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar9 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        pvVar9 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_00493934;
    }
  }
  if (this_01 != (ShipModule *)0x0) {
    ghidra::str::append(in_stack_00000004,"\n",1);
    iVar7 = *(int *)(this_01 + 8);
    iVar1 = *(int *)(iVar7 + 4);
    if (iVar1 == 0x11) {
      pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7Speed     : `!%.0f\n",
                                    (double)*(float *)(iVar7 + 0x104));
      // [seh] local_8 = 10;
      pcVar4 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar4 = *(char **)pcVar6;
      }
      ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (local_18 < 0x10) goto LAB_00494689;
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_00494135:
      operator_delete(pvVar10,pnVar11);
    }
    else if (iVar1 == 2) {
      pbVar8 = (std::string *)
               strUsingArgs((char *)local_2c,"`7Storage   : `!%.0fkw\n",
                            (double)*(float *)(iVar7 + 0xc4));
      // [seh] local_8 = 0xb;
LAB_00493a0e:
      ghidra::str::append(in_stack_00000004,pbVar8);
      // [seh] local_8 = local_8 & 0xffffff00;
      pvVar9 = local_2c[0];
      uVar13 = local_18;
      if (0xf < local_18) {
LAB_00493a2a:
        pnVar11 = (nothrow_t *)(uVar13 + 1);
        pvVar10 = pvVar9;
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)pvVar9 + -4);
          pnVar11 = (nothrow_t *)(uVar13 + 0x24);
          if (0x1f < (uint)((int)pvVar9 + (-4 - (int)pvVar10))) {
LAB_00493a4c:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_00494135;
      }
    }
    else {
      if (iVar1 == 5) {
        pbVar8 = (std::string *)
                 strUsingArgs((char *)local_2c,"`7Ammo Slots: `!%.0f\n",
                              (double)*(float *)(iVar7 + 0x104));
        // [seh] local_8 = 0xc;
        ghidra::str::append(in_stack_00000004,pbVar8);
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar11);
        }
        pbVar8 = (std::string *)
                 strUsingArgs((char *)local_2c,"`7Reload    : `!%.0fs\n",
                              (double)*(float *)(*(int *)(this_01 + 8) + 0x108));
        // [seh] local_8 = 0xd;
        goto LAB_00493a0e;
      }
      if (iVar1 == 0xe) {
        pbVar8 = (std::string *)
                 strUsingArgs((char *)local_2c,"`7Sync Time : `!%.0f\n",
                              (double)*(float *)(iVar7 + 0x104));
        // [seh] local_8 = 0xe;
        goto LAB_00493a0e;
      }
      if (iVar1 == 1) goto LAB_00494689;
      if (iVar1 == 0x10) {
        pbVar8 = (std::string *)
                 strUsingArgs((char *)local_2c,"`7Range     : `!%.0fGm\n",
                              (double)*(float *)(iVar7 + 0x108));
        // [seh] local_8 = 0xf;
        ghidra::str::append(in_stack_00000004,pbVar8);
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_00493a4c;
          }
          operator_delete(pvVar9,pnVar11);
        }
        pbVar8 = (std::string *)
                 strUsingArgs((char *)local_2c,"`7Hack Time : `!%.0fs\n",
                              (double)*(float *)(*(int *)(this_01 + 8) + 0x104));
        // [seh] local_8 = 0x10;
        goto LAB_00493a0e;
      }
      if (iVar1 != 7) {
        if (iVar1 == 3) {
          bVar3 = ghidra::lib::_Traits_equal___x28_x29("NavMap1",7,pcVar4,unaff_EDI);
          if (bVar3) {
            ghidra::str::append(in_stack_00000004,"`7Interface : `0Green\n",0x16);
          }
          else {
            bVar3 = ghidra::lib::_Traits_equal___x28_x29("NavMap2",7,pcVar4,unaff_EDI);
            if (bVar3) {
              ghidra::str::append(in_stack_00000004,"`7Interface : `!Blue\n",0x15);
            }
            else {
              bVar3 = ghidra::lib::_Traits_equal___x28_x29("NavMap3",7,pcVar4,unaff_EDI);
              if (bVar3) {
                ghidra::str::append(in_stack_00000004,"`7Interface : `%Full Colour\n",0x1c);
              }
            }
          }
          goto LAB_00494689;
        }
        if (iVar1 != 4) {
          if (iVar1 == 8) {
            pbVar8 = (std::string *)
                     strUsingArgs((char *)local_2c,"`7Tubes     : `!%.0f\n",
                                  (double)*(float *)(iVar7 + 0x104));
            // [seh] local_8 = 0x18;
            ghidra::str::append(in_stack_00000004,pbVar8);
            // [seh] local_8 = local_8 & 0xffffff00;
            if (0xf < local_18) {
              pnVar11 = (nothrow_t *)(local_18 + 1);
              pvVar9 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar9 = *(void **)((int)local_2c[0] + -4);
                pnVar11 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_00493a4c;
              }
              operator_delete(pvVar9,pnVar11);
            }
            pbVar8 = (std::string *)
                     strUsingArgs((char *)local_2c,"`7Spinup Tm.: `!%.0fs\n",
                                  (double)*(float *)(*(int *)(this_01 + 8) + 0x108));
            // [seh] local_8 = 0x19;
            goto LAB_00493a0e;
          }
          if (iVar1 == 0xc) {
            fVar12 = (float)*(int *)(iVar7 + 0xec);
            if (fVar12 < 6.0) {
              if (fVar12 < 5.0) {
                if (fVar12 < 4.0) {
                  if (fVar12 < 3.0) {
                    pcVar4 = "`@V. Bad";
                  }
                  else {
                    pcVar4 = "`^Bad";
                  }
                }
                else {
                  pcVar4 = "`$Medium";
                }
              }
              else {
                pcVar4 = "`0Good";
              }
            }
            else {
              pcVar4 = "`!V. Good";
            }
            ghidra::str::ctor((std::string *)local_44,pcVar4);
            // [seh] local_8 = 0x1a;
            pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Accuracy  : %s\n");
            // [seh] local_8._0_1_ = 0x1b;
            ghidra::str::append(in_stack_00000004,pbVar8);
            // [mislabelled-dtor] word::~word((word *)local_2c);
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
            // [mislabelled-dtor] word::~word((word *)local_44);
            fVar12 = *(float *)(*(int *)(this_01 + 8) + 0x108);
            if (fVar12 < 4.0) {
              if (fVar12 < 3.5) {
                if (fVar12 < 3.0) {
                  if (fVar12 < 2.6) {
                    pcVar4 = "`!V. Good";
                  }
                  else {
                    pcVar4 = "`0Good";
                  }
                }
                else {
                  pcVar4 = "`$Medium";
                }
              }
              else {
                pcVar4 = "`^Bad";
              }
            }
            else {
              pcVar4 = "`@V. Bad";
            }
            ghidra::str::ctor((std::string *)local_44,pcVar4);
            // [seh] local_8 = 0x1c;
            pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Reload Spd: %s\n");
            // [seh] local_8._0_1_ = 0x1d;
            ghidra::str::append(in_stack_00000004,pbVar8);
            // [mislabelled-dtor] word::~word((word *)local_2c);
            // [seh] local_8 = (uint)local_8._1_3_ << 8;
            // [mislabelled-dtor] word::~word((word *)local_44);
            pbVar8 = (std::string *)
                     strUsingArgs((char *)local_2c,"`7Range     : `%%%.0fGm\n",
                                  (double)*(float *)(*(int *)(this_01 + 8) + 0x104));
            // [seh] local_8 = 0x1e;
            ghidra::str::append(in_stack_00000004,pbVar8);
            this_00 = (word *)local_2c;
          }
          else {
            if (iVar1 == 0xb) {
              fVar12 = *(float *)(iVar7 + 0x104);
              if (fVar12 < 1.1) {
                if (fVar12 < 0.8) {
                  if (fVar12 < 0.5) {
                    if (fVar12 < 0.2) {
                      pcVar4 = "`@V. Low";
                    }
                    else {
                      pcVar4 = "`^Low";
                    }
                  }
                  else {
                    pcVar4 = "`$Moderate";
                  }
                }
                else {
                  pcVar4 = "`0High";
                }
              }
              else {
                pcVar4 = "`!V. High";
              }
              ghidra::str::ctor((std::string *)local_44,pcVar4);
              // [seh] local_8 = 0x1f;
              pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Max. Thrst: %s\n");
              // [seh] local_8 = CONCAT31(local_8._1_3_,0x20);
            }
            else if (iVar1 == 9) {
              fVar12 = *(float *)(iVar7 + 0x104);
              if (fVar12 < 40.0) {
                if (fVar12 < 30.0) {
                  if (fVar12 < 20.0) {
                    if (fVar12 < 10.0) {
                      pcVar4 = "`@V. Low";
                    }
                    else {
                      pcVar4 = "`^Low";
                    }
                  }
                  else {
                    pcVar4 = "`$Moderate";
                  }
                }
                else {
                  pcVar4 = "`0High";
                }
              }
              else {
                pcVar4 = "`!V. High";
              }
              ghidra::str::ctor((std::string *)local_44,pcVar4);
              // [seh] local_8 = 0x21;
              pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Rot. Speed: %s\n");
              // [seh] local_8 = CONCAT31(local_8._1_3_,0x22);
            }
            else {
              if (iVar1 == 10) {
                fVar12 = *(float *)(iVar7 + 0x104);
                if (fVar12 < 360.0) {
                  if (fVar12 < 300.0) {
                    if (fVar12 < 280.0) {
                      if (fVar12 < 240.0) {
                        pcVar4 = "`@V. Bad";
                      }
                      else {
                        pcVar4 = "`^Bad";
                      }
                    }
                    else {
                      pcVar4 = "`$Medium";
                    }
                  }
                  else {
                    pcVar4 = "`0Good";
                  }
                }
                else {
                  pcVar4 = "`!V. Good";
                }
                ghidra::str::ctor((std::string *)local_44,pcVar4);
                // [seh] local_8 = 0x23;
                pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Range     : %s\n");
                // [seh] local_8._0_1_ = 0x24;
                ghidra::str::append(in_stack_00000004,pbVar8);
                // [mislabelled-dtor] word::~word((word *)local_2c);
                // [seh] local_8 = (uint)local_8._1_3_ << 8;
                // [mislabelled-dtor] word::~word((word *)local_44);
                pbVar8 = (std::string *)
                         strUsingArgs((char *)local_2c,"`7Spinup Tm.: `%%%.0f\n",
                                      (double)*(float *)(*(int *)(this_01 + 8) + 0x108));
                // [seh] local_8 = 0x25;
                ghidra::str::append(in_stack_00000004,pbVar8);
                // [seh] local_8 = local_8 & 0xffffff00;
                // [mislabelled-dtor] word::~word((word *)local_2c);
                pbVar8 = (std::string *)
                         strUsingArgs((char *)local_2c,"`7Calc. Time: `%%%.0f\n",
                                      (double)*(float *)(*(int *)(this_01 + 8) + 0x10c));
                // [seh] local_8 = 0x26;
                ghidra::str::append(in_stack_00000004,pbVar8);
                this_00 = (word *)local_2c;
                goto LAB_00494680;
              }
              if (iVar1 != 0xd) goto LAB_00494689;
              fVar12 = *(float *)(iVar7 + 0x104);
              if (fVar12 < 1.8) {
                if (fVar12 < 1.6) {
                  if (fVar12 < 1.4) {
                    if (fVar12 < 0.0) {
                      pcVar4 = "`@V. Bad";
                    }
                    else {
                      pcVar4 = "`^Bad";
                    }
                  }
                  else {
                    pcVar4 = "`$Medium";
                  }
                }
                else {
                  pcVar4 = "`0Good";
                }
              }
              else {
                pcVar4 = "`!V. Good";
              }
              ghidra::str::ctor((std::string *)local_44,pcVar4);
              // [seh] local_8 = 0x27;
              pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Range     : %s\n");
              // [seh] local_8._0_1_ = 0x28;
              ghidra::str::append(in_stack_00000004,pbVar8);
              // [mislabelled-dtor] word::~word((word *)local_2c);
              // [seh] local_8 = (uint)local_8._1_3_ << 8;
              // [mislabelled-dtor] word::~word((word *)local_44);
              fVar12 = *(float *)(*(int *)(this_01 + 8) + 200);
              if (fVar12 < 3.0) {
                if (fVar12 < 2.0) {
                  if (fVar12 < 1.5) {
                    if (fVar12 < 1.0) {
                      pcVar4 = "`@V. Bad";
                    }
                    else {
                      pcVar4 = "`^Bad";
                    }
                  }
                  else {
                    pcVar4 = "`$Medium";
                  }
                }
                else {
                  pcVar4 = "`0Good";
                }
              }
              else {
                pcVar4 = "`!V. Good";
              }
              ghidra::str::ctor((std::string *)local_44,pcVar4);
              // [seh] local_8 = 0x29;
              pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Gen. Rate : %s\n");
              // [seh] local_8 = CONCAT31(local_8._1_3_,0x2a);
            }
            ghidra::str::append(in_stack_00000004,pbVar8);
            // [mislabelled-dtor] word::~word((word *)local_2c);
            this_00 = (word *)local_44;
          }
LAB_00494680:
          // [seh] local_8 = local_8 & 0xffffff00;
          // [mislabelled-dtor] word::~word(this_00);
          goto LAB_00494689;
        }
        pbVar8 = (std::string *)
                 strUsingArgs((char *)local_2c,"`7Range     : `!%.0fGm\n",
                              (double)*(float *)(iVar7 + 0x108));
        // [seh] local_8 = 0x11;
        ghidra::str::append(in_stack_00000004,pbVar8);
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_00493a4c;
          }
          operator_delete(pvVar9,pnVar11);
        }
        iVar7 = *(int *)(this_01 + 8);
        fVar12 = (float)(((*(int *)(iVar7 + 0xec) + 1) / 2) * *(int *)(iVar7 + 0xe8) +
                        *(int *)(iVar7 + 0xf0));
        if (fVar12 < 170.0) {
          if (fVar12 < 135.0) {
            if (fVar12 < 115.0) {
              if (fVar12 < 90.0) {
                pcVar4 = "`@V. High";
              }
              else {
                pcVar4 = "`^High";
              }
            }
            else {
              pcVar4 = "`$Moderate";
            }
          }
          else {
            pcVar4 = "`0Low";
          }
        }
        else {
          pcVar4 = "`!V. Low";
        }
        ghidra::str::ctor((std::string *)local_44,pcVar4);
        // [seh] local_8 = 0x12;
        pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Sns. Ghsts: %s\n");
        // [seh] local_8._0_1_ = 0x13;
        ghidra::str::append(in_stack_00000004,pbVar8);
        // [seh] local_8 = CONCAT31(local_8._1_3_,0x12);
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_00493a4c;
          }
          operator_delete(pvVar9,pnVar11);
        }
        // [seh] local_8 = local_8 & 0xffffff00;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        if (0xf < local_30) {
          pnVar11 = (nothrow_t *)(local_30 + 1);
          pvVar9 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_44[0] + -4);
            pnVar11 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) goto LAB_00493a4c;
          }
          operator_delete(pvVar9,pnVar11);
        }
        iVar7 = *(int *)(this_01 + 8);
        fVar12 = (float)(((*(int *)(iVar7 + 0xf8) + 1) / 2) * *(int *)(iVar7 + 0xf4) +
                        *(int *)(iVar7 + 0xfc));
        if (fVar12 < 31.0) {
          if (fVar12 < 28.0) {
            if (fVar12 < 25.0) {
              if (fVar12 < 21.0) {
                pcVar4 = "`!V. Quick";
              }
              else {
                pcVar4 = "`0Quick";
              }
            }
            else {
              pcVar4 = "`$Moderate";
            }
          }
          else {
            pcVar4 = "`^Slow";
          }
          ghidra::str::ctor((std::string *)local_44,pcVar4);
        }
        else {
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          pcVar4 = "`@V. Slow";
          do {
            pcVar6 = pcVar4;
            pcVar4 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          ghidra::str::assign
                    ((std::string *)local_44,"`@V. Slow",(uint)(pcVar6 + -0x60c7d0));
        }
        // [seh] local_8 = 0x14;
        pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Analys. Tm: %s\n");
        // [seh] local_8._0_1_ = 0x15;
        ghidra::str::append(in_stack_00000004,pbVar8);
        // [seh] local_8 = CONCAT31(local_8._1_3_,0x14);
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_00493a4c;
          }
          operator_delete(pvVar9,pnVar11);
        }
        // [seh] local_8 = local_8 & 0xffffff00;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        if (0xf < local_30) {
          pnVar11 = (nothrow_t *)(local_30 + 1);
          pvVar9 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_44[0] + -4);
            pnVar11 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) goto LAB_00493a4c;
          }
          operator_delete(pvVar9,pnVar11);
        }
        fVar12 = *(float *)(*(int *)(this_01 + 8) + 0xe4);
        if (fVar12 < 1.4) {
          if (fVar12 < 1.2) {
            if (fVar12 < 1.0) {
              if (fVar12 < 0.8) {
                pcVar4 = "`@V. Bad";
              }
              else {
                pcVar4 = "`^Bad";
              }
            }
            else {
              pcVar4 = "`$Medium";
            }
          }
          else {
            pcVar4 = "`0Good";
          }
        }
        else {
          pcVar4 = "`!V. Good";
        }
        ghidra::str::ctor((std::string *)local_44,pcVar4);
        // [seh] local_8 = 0x16;
        pbVar8 = (std::string *)strUsingArgs((char *)local_2c,"`7Strength  : %s\n");
        // [seh] local_8._0_1_ = 0x17;
        ghidra::str::append(in_stack_00000004,pbVar8);
        // [seh] local_8 = CONCAT31(local_8._1_3_,0x16);
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar9 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar9 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_00493a4c;
          }
          operator_delete(pvVar9,pnVar11);
        }
        // [seh] local_8 = local_8 & 0xffffff00;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
        pvVar9 = local_44[0];
        uVar13 = local_30;
        if (local_30 < 0x10) goto LAB_00494689;
        goto LAB_00493a2a;
      }
    }
LAB_00494689:
    iVar7 = *(int *)(this_01 + 8);
    if (0 < *(int *)(iVar7 + 0xd4)) {
      pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7Emissions : `$%d @ %dhz\n",
                                    *(int *)(iVar7 + 0xd4));
      // [seh] local_8 = 0x2b;
      pcVar4 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar4 = *(char **)pcVar6;
      }
      ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      // [mislabelled-dtor] word::~word((word *)local_2c);
      iVar7 = *(int *)(this_01 + 8);
    }
    if (0 < *(int *)(iVar7 + 0xcc)) {
      pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7In Use Em.: `$%d @ %dhz\n",
                                    *(int *)(iVar7 + 0xcc));
      // [seh] local_8 = 0x2c;
      pcVar4 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar4 = *(char **)pcVar6;
      }
      ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      // [mislabelled-dtor] word::~word((word *)local_2c);
      iVar7 = *(int *)(this_01 + 8);
    }
    if (0.0 < *(float *)(iVar7 + 0xc0)) {
      pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7Power Drn.: `$%.2fkw/s\n",
                                    (double)*(float *)(iVar7 + 0xc0));
      // [seh] local_8 = 0x2d;
      pcVar4 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar4 = *(char **)pcVar6;
      }
      ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      // [mislabelled-dtor] word::~word((word *)local_2c);
      iVar7 = *(int *)(this_01 + 8);
    }
    if (0.0 < *(float *)(iVar7 + 0xbc)) {
      pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7In Use Pw.: `$%.2fkw/s\n",
                                    (double)*(float *)(iVar7 + 0xbc));
      // [seh] local_8 = 0x2e;
      pcVar4 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar4 = *(char **)pcVar6;
      }
      ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      // [mislabelled-dtor] word::~word((word *)local_2c);
      iVar7 = *(int *)(this_01 + 8);
    }
    if ((0.0 < *(float *)(iVar7 + 200)) && (*(int *)(iVar7 + 4) == 1)) {
      pbVar8 = (std::string *)
               strUsingArgs((char *)local_2c,"`7Pwr. Gen. : `$%.2fkw/s\n",
                            (double)*(float *)(iVar7 + 200));
      // [seh] local_8 = 0x2f;
      ghidra::str::append(in_stack_00000004,pbVar8);
      // [seh] local_8 = local_8 & 0xffffff00;
      // [mislabelled-dtor] word::~word((word *)local_2c);
      iVar7 = *(int *)(this_01 + 8);
    }
    if (0 < *(int *)(iVar7 + 0x8c)) {
      pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7Boot Time : `!%ds\n");
      // [seh] local_8 = 0x30;
      pcVar4 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar4 = *(char **)pcVar6;
      }
      ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      // [mislabelled-dtor] word::~word((word *)local_2c);
    }
  }
  if ((((char *)this)[0x109] == (byte)0x0) && (local_50 != (undefined4 *)0x0)) {
    ghidra::str::append(in_stack_00000004,"\n",1);
    pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7Cost : `$%dc\n");
    // [seh] local_8 = 0x31;
    pcVar4 = pcVar6;
    if (0xf < *(uint *)(pcVar6 + 0x14)) {
      pcVar4 = *(char **)pcVar6;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar6 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    // [mislabelled-dtor] word::~word((word *)local_2c);
    ghidra::str::append(in_stack_00000004,"\n",1);
    bVar3 = SystemManager::canAddModule
                      (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),this_01);
    if (!bVar3) {
      pbVar8 = (std::string *)
               strUsingArgs((char *)local_2c,"`$No free `^%s`$ slot for module.\n\n");
      // [seh] local_8 = 0x32;
      ghidra::str::append(in_stack_00000004,pbVar8);
      // [seh] local_8 = local_8 & 0xffffff00;
      // [mislabelled-dtor] word::~word((word *)local_2c);
    }
    if (*(int *)(*(int *)(g_gameData + 0x124) + 0x1c) < (int)local_50[1]) {
      ghidra::str::append(in_stack_00000004,"`$Cannot afford this module.",0x1c);
    }
  }
LAB_00494952:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::getHullSectionStatus(TradeEngine *this)
void TradeEngine::getHullSectionStatus()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Ship *this_00;
  bool bVar1;
  uint uVar2;
  HullLocation HVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  ShipMechanics *extraout_ECX;
  ShipMechanics *pSVar9;
  void *pvVar10;
  ShipMechanics *extraout_ECX_00;
  ShipMechanics *extraout_ECX_01;
  nothrow_t *pnVar11;
  std::string *in_stack_00000004;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bc2c9;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  local_14 = uVar2;
  if (*(int *)((char *)this + 0x10c) == 1) {
    HVar3 = *(HullLocation *)((char *)this + 0x110);
    if (HVar3 == 0xffffffff) {
      ghidra::str::append
                (in_stack_00000004,
                 "`%Select a hull segment on the left to repair specific subsections.\n",0x44);
      pSVar9 = extraout_ECX_00;
      if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
        pSVar9 = extraout_ECX_01;
      }
      iVar4 = (pSVar9)->getRepairPoints(*(Ship **)(g_gameData + 0xd0));
      iVar5 = (*(Ship **)(g_gameData + 0xd0))->getHullDamagePercent();
      pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7Damage : `^%d%%\n",iVar5,uVar2);
      // [seh] local_8 = 5;
      pcVar8 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar8 = *(char **)pcVar6;
      }
      ghidra::str::append(in_stack_00000004,pcVar8,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00494b55;
        }
        operator_delete(pvVar10,pnVar11);
      }
      pcVar8 = (char *)strUsingArgs((char *)local_2c,"`7Cost   : `$%dc\n",iVar4 * 5);
      // [seh] local_8 = 6;
      uVar2 = *(uint *)(pcVar8 + 0x14);
    }
    else {
      pSVar9 = (ShipMechanics *)this;
      if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
        HVar3 = *(HullLocation *)((char *)this + 0x110);
        pSVar9 = extraout_ECX;
      }
      iVar4 = (pSVar9)->hullRepairCost(*(Ship **)(g_gameData + 0xd0), HVar3);
      iVar5 = Ship::getDamageAmountForHullSection
                        (*(Ship **)(g_gameData + 0xd0),*(HullLocation *)((char *)this + 0x110));
      pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7Segment: `%%%s\n",
                                    (&PTR_s_Bow_005dfaa4)[*(int *)((char *)this + 0x110)],uVar2);
      // [seh] local_8 = 1;
      pcVar8 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar8 = *(char **)pcVar6;
      }
      ghidra::str::append(in_stack_00000004,pcVar8,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar11 = (nothrow_t *)(local_18 + 1);
        pvVar10 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar11) {
          pvVar10 = *(void **)((int)local_2c[0] + -4);
          pnVar11 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar10,pnVar11);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      iVar7 = Ship::getDamageAmountForHullSection
                        (*(Ship **)(g_gameData + 0xd0),*(HullLocation *)((char *)this + 0x110));
      if (iVar7 < 100) {
        HVar3 = *(HullLocation *)((char *)this + 0x110);
        this_00 = *(Ship **)(g_gameData + 0xd0);
        iVar7 = (this_00)->getDamageAmountForHullSection(HVar3);
        if ((iVar7 < 100) && (iVar7 = (this_00)->getDamageAmountForHullSection(HVar3), 0 < iVar7)
           ) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          ghidra::str::append(in_stack_00000004,"`7Damage : `8none\n",0x12);
          ghidra::str::append(in_stack_00000004,"`7Cost   : `8n/a\n",0x11);
          goto LAB_00494d31;
        }
        pcVar6 = (char *)strUsingArgs((char *)local_2c,"`7Damage : `^%d%%\n",iVar5);
        // [seh] local_8 = 3;
        pcVar8 = pcVar6;
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar8 = *(char **)pcVar6;
        }
        ghidra::str::append(in_stack_00000004,pcVar8,*(uint *)(pcVar6 + 0x10));
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar11 = (nothrow_t *)(local_18 + 1);
          pvVar10 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_2c[0] + -4);
            pnVar11 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
        pcVar8 = (char *)strUsingArgs((char *)local_2c,"`7Cost   : `$%dc\n",iVar4);
        // [seh] local_8 = 4;
        uVar2 = *(uint *)(pcVar8 + 0x14);
      }
      else {
        ghidra::str::append(in_stack_00000004,"`7Damage : `@TOTAL\n",0x13);
        pcVar8 = (char *)strUsingArgs((char *)local_2c,"`7Cost   : `$%d\n",iVar4);
        // [seh] local_8 = 2;
        uVar2 = *(uint *)(pcVar8 + 0x14);
      }
    }
    pcVar6 = pcVar8;
    if (0xf < uVar2) {
      pcVar6 = *(char **)pcVar8;
    }
    ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar8 + 0x10));
    if (0xf < local_18) {
      pnVar11 = (nothrow_t *)(local_18 + 1);
      pvVar10 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_2c[0] + -4);
        pnVar11 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
LAB_00494b55:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
  }
LAB_00494d31:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::canBuyArmament(TradeEngine *this,Ship *param_1,int param_2)
bool TradeEngine::canBuyArmament(Ship * param_1, int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  WeaponClass *pWVar4;
  std::string abStack_2c [20];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((param_1 != (Ship *)0x0) && (*(int *)((char *)this + 0x10c) == 4)) {
    if (param_2 == -1) {
      piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8);
      if (piVar1 != (int *)0x0) {
        uStack_14 = 0x494da8;
        cVar3 = (**(code **)(*piVar1 + 0x18))();
        if ((cVar3 == '\0') &&
           (iVar2 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8),
           (float)*(int *)(iVar2 + 0x68) < *(float *)(*(int *)(iVar2 + 8) + 0x104))) {
          uStack_14 = 0x494dde;
          ghidra::any_singleton();
          if (0x18 < *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
            return true;
          }
        }
      }
    }
    else if ((*(int *)((char *)this + 0xf4) != -1) &&
            (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
      uStack_14 = 0;
      uStack_18 = 0x494e14;
      cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))();
      if ((cVar3 != '\0') &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x3c + *(int *)((char *)this + 0xf4) * 4) ==
          0)) {
        ghidra::str::ctor(abStack_2c,(&PTR_s_m10_005dfacc)[param_2]);
        pWVar4 = GameData::getWeaponClassWithIdentifier();
        if ((pWVar4 != (WeaponClass *)0x0) &&
           (*(int *)(pWVar4 + 0x1a0) <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
          return true;
        }
      }
    }
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::canSellArmament(TradeEngine *this,Ship *param_1,int param_2)
bool TradeEngine::canSellArmament(Ship * param_1, int param_2)

{
  char cVar1;
  
  if ((((param_1 != (Ship *)0x0) && (*(int *)((char *)this + 0x10c) == 4)) && (*(int *)((char *)this + 0xf4) != -1))
     && (*(int **)(*(int *)(param_1 + 0x40) + 0x20) != (int *)0x0)) {
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + 0x20) + 0x10))(0);
    if ((cVar1 != '\0') &&
       (*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x3c + *(int *)((char *)this + 0xf4) * 4) != 0)
       ) {
      return true;
    }
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::performSellArmament(TradeEngine *this)
bool TradeEngine::performSellArmament()

{
  Weapon *this_00;
  undefined4 extraout_ECX;
  SaveHandler *this_01;
  undefined4 uStack_30;
  
  this_00 = *(Weapon **)
             (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20) + 0x3c +
             *(int *)((char *)this + 0xf4) * 4);
  ghidra::str::ctor
            ((std::string *)&uStack_30,*(std::string **)(this_00 + 0x388));
  BankAccount::addTransaction
            (*(BankAccount **)(g_gameData + 0x124),extraout_ECX,
             *(int *)(*(int *)(this_00 + 0x388) + 0x1a0) / 2);
  (*(Ship **)(g_gameData + 0xd0))->removeWeapon(this_00);
  (this_00)->~Weapon();
  operator_delete(this_00,(nothrow_t *)0x428);
  uStack_30 = 0x494f65;
  debugPrint("WORLD","Sold weapon from tube %d");
  if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
    ghidra::any_singleton();
    (this_01)->saveGame();
  }
  return true;
}


// Ghidra: void __thiscall TradeEngine::getArmamentStatus(TradeEngine *this)
void TradeEngine::getArmamentStatus()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff9c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  int iVar8;
  std::string *in_stack_00000004;
  uint uVar9;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bc341;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  if (*(int *)((char *)this + 0x10c) == 4) {
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 8) == 0) {
      ghidra::str::append(in_stack_00000004,"`7No countermeasure system installed.",0x25);
    }
    else {
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 1;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
LAB_00495202:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
    }
    ghidra::str::append(in_stack_00000004,"\n",1);
    bVar2 = false;
    if ((*(int *)((char *)this + 0xf4) == -1) ||
       (iVar8 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20), iVar8 == 0)) {
      piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
      if (piVar1 == (int *)0x0) {
        uVar9 = 0x2a;
        pcVar5 = "`@Probe Launcher / Weapon System required.";
      }
      else {
        cVar3 = (**(code **)(*piVar1 + 0x10))();
        if (cVar3 == '\0') {
          pcVar5 = "`$Weapon System damaged. Must be functional.";
          uVar9 = 0x2c;
        }
        else {
          pcVar5 = "`8[Select tube for armament options]\n\n";
          uVar9 = 0x26;
        }
      }
      ghidra::str::append(in_stack_00000004,pcVar5,uVar9);
    }
    else if (*(int *)(iVar8 + 0x3c + *(int *)((char *)this + 0xf4) * 4) == 0) {
      ghidra::str::append(in_stack_00000004,"`%Tube:`0 empty.\n\n",0x12);
      iVar8 = 0;
      do {
        if (iVar8 == 4) {
          pcVar4 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 2;
          pcVar5 = pcVar4;
          if (0xf < *(uint *)(pcVar4 + 0x14)) {
            pcVar5 = *(char **)pcVar4;
          }
          ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
          // [seh] local_8 = local_8 & 0xffffff00;
          if (0xf < local_18) {
            pnVar7 = (nothrow_t *)(local_18 + 1);
            pvVar6 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar7) {
              pvVar6 = *(void **)((int)local_2c[0] + -4);
              pnVar7 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) goto LAB_00495202;
            }
            operator_delete(pvVar6,pnVar7);
          }
          bVar2 = true;
        }
        else {
          pcVar5 = (&PTR_s_m10_005dfacc)[iVar8];
          pcVar4 = pcVar5;
          do {
            cVar3 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar3 != '\0');
          ghidra::str::assign
                    ((std::string *)&stack0xffffff9c,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
          GameData::getWeaponClassWithIdentifier();
          pcVar4 = (char *)strUsingArgs((char *)local_2c);
          // [seh] local_8 = 3;
          pcVar5 = pcVar4;
          if (0xf < *(uint *)(pcVar4 + 0x14)) {
            pcVar5 = *(char **)pcVar4;
          }
          ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
          // [seh] local_8 = local_8 & 0xffffff00;
          if (0xf < local_18) {
            pnVar7 = (nothrow_t *)(local_18 + 1);
            pvVar6 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar7) {
              pvVar6 = *(void **)((int)local_2c[0] + -4);
              pnVar7 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) goto LAB_00495202;
            }
            operator_delete(pvVar6,pnVar7);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      if (bVar2) goto LAB_004955f7;
    }
    else {
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 4;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 5;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 6;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
    }
    pcVar4 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 7;
    pcVar5 = pcVar4;
    if (0xf < *(uint *)(pcVar4 + 0x14)) {
      pcVar5 = *(char **)pcVar4;
    }
    ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
    if (0xf < local_18) {
      pnVar7 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar7 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar7);
    }
  }
LAB_004955f7:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::performRepair(TradeEngine *this)
bool TradeEngine::performRepair()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  TradeEngine *pTVar1;
  GameData *pGVar2;
  int iVar3;
  HullLocation HVar4;
  int *piVar5;
  ShipMechanics *extraout_ECX;
  undefined4 extraout_ECX_00;
  ShipMechanics *extraout_ECX_01;
  undefined4 extraout_ECX_02;
  std::string local_30 [12];
  undefined4 uStack_24;
  
  if (*(int *)((char *)this_ + 0x10c) == 1) {
    HVar4 = *(HullLocation *)((char *)this_ + 0x110);
    pTVar1 = this_ + 0x110;
    if (HVar4 == 0xffffffff) {
      if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
        this_ = (TradeEngine *)extraout_ECX;
      }
      iVar3 = ((ShipMechanics *)this_)->getRepairPoints(*(Ship **)(g_gameData + 0xd0));
      if (iVar3 * 5 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c)) {
        if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
          ghidra::Singleton<void>::instance = operator_new(1);
        }
        ShipMechanics::performHullRepairAll
                  ((ShipMechanics *)g_gameData,*(Ship **)(g_gameData + 0xd0));
        (*(Ship **)(g_gameData + 0xd0))->repairConsoleDamage();
        local_30[0] = (std::string)0x0;
        ghidra::str::assign(local_30,"Repair",6);
        BankAccount::addTransaction
                  (*(BankAccount **)(g_gameData + 0x124),extraout_ECX_00,iVar3 * -5);
        return true;
      }
    }
    else {
      if (ghidra::Singleton<void>::instance == (ShipMechanics *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
        HVar4 = *(HullLocation *)pTVar1;
        this_ = (TradeEngine *)extraout_ECX_01;
      }
      uStack_24 = 0x49573d;
      iVar3 = ShipMechanics::hullRepairCost
                        ((ShipMechanics *)this_,*(Ship **)(g_gameData + 0xd0),HVar4);
      if ((iVar3 != 0) && (iVar3 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
        local_30[0] = (std::string)0x0;
        ghidra::str::assign(local_30,"Repair",6);
        (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX_02, -iVar3);
        piVar5 = ghidra::lib::map__operator_x5b_x5d
                           ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x14c),(int *)pTVar1);
        pGVar2 = g_gameData;
        *piVar5 = 0;
        (*(Ship **)(pGVar2 + 0xd0))->repairConsoleDamage();
        *(HullLocation *)pTVar1 = 0xffffffff;
        return true;
      }
    }
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::performSellPod(TradeEngine *this)
bool TradeEngine::performSellPod()

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 extraout_ECX;
  GameData *pGVar4;
  SaveHandler *this_00;
  std::string local_30 [12];
  undefined4 uStack_24;
  
  if (((*(int *)((char *)this + 0x10c) == 2) && (iVar3 = *(int *)((char *)this + 0x114), iVar3 != -1)) &&
     (*(int *)(*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8) + iVar3 * 4 + 0xc) != 0)) {
    iVar3 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->getPodSellCost(iVar3);
    local_30[0] = (std::string)0x0;
    ghidra::str::assign(local_30,"Pod",3);
    (*(BankAccount **)(g_gameData + 0x124))->addTransaction(extraout_ECX, iVar3);
    iVar3 = *(int *)((char *)this + 0x114);
    iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
    pGVar4 = g_gameData;
    if (((-1 < iVar3) && ((*(int *)(iVar1 + 8) < 1 || (iVar3 < *(int *)(iVar1 + 8))))) &&
       (pvVar2 = *(void **)(iVar1 + 0xc + iVar3 * 4), pvVar2 != (void *)0x0)) {
      uStack_24 = 0x495899;
      operator_delete(pvVar2,(nothrow_t *)0xc);
      pGVar4 = g_gameData;
      *(undefined4 *)(iVar1 + 0xc + iVar3 * 4) = 0;
    }
    if (*(int *)(*(int *)(pGVar4 + 0xcc) + 0x70) == 2) {
      ghidra::any_singleton();
      (this_00)->saveGame();
    }
    return true;
  }
  return false;
}


// Ghidra: bool __thiscall TradeEngine::performModuleTransaction(TradeEngine *this)
bool TradeEngine::performModuleTransaction()

{
  char stack0xffffffb0[1] = {0};  // [pseudo] address of an unnamed stack slot
  SystemManager *this_00;
  ShipModule *this_01;
  ModuleConfiguration *pMVar1;
  AnimationFrames **ppAVar2;
  int *piVar3;
  undefined4 *puVar4;
  ShipModule *this_02;
  bool bVar5;
  int iVar6;
  int iVar7;
  Stats *pSVar8;
  SaveHandler *this_03;
  undefined4 *puVar9;
  int iVar10;
  std::string local_80 [12];
  undefined4 uStack_74;
  std::string local_68 [12];
  undefined4 uStack_5c;
  std::string local_4c [8];
  undefined4 uStack_44;
  AnimationFrames **local_40;
  AnimationFrames *local_20;
  int *local_1c;
  TradeEngine *local_18;
  ShipModule *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bc388;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (*(int *)((char *)this + 0x118) != -1) {
    local_18 = this;
    if (((char *)this)[0x109] == (byte)0x0) {
      bVar5 = mechanicCanBuyModule(this);
      if (bVar5) {
        iVar10 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
        piVar3 = *(int **)(*(int *)(iVar10 + 0x58) + *(int *)((char *)this + 0x118) * 4);
        local_40 = (AnimationFrames **)0x495ad8;
        local_1c = piVar3;
        SystemManager::addModule
                  (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),(ShipModule *)*piVar3,-1)
        ;
        ghidra::str::ctor(local_4c,(std::string *)(*(int *)(*piVar3 + 8) + 8));
        (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
        local_40 = (AnimationFrames **)0x495b15;
        ghidra::lib::remove___x28_x29();
        local_40 = &local_20;
        uStack_44 = 0x495b27;
        ghidra::lib::vector__erase((ghidra::vector *)(iVar10 + 0x58));
        *piVar3 = 0;
        local_40 = (AnimationFrames **)0x495b35;
        operator_delete(piVar3,(nothrow_t *)0xc);
        local_20 = (AnimationFrames *)local_4c;
        local_4c[0] = (std::string)0x0;
        ghidra::str::assign(local_4c,"modules_purchased",0x11);
        // [seh] local_8 = 0;
        pSVar8 = Singleton<Stats>::getInstance();
        // [seh] local_8 = 0xffffffff;
        (pSVar8)->addStat();
        local_40 = (AnimationFrames **)0x0;
        uStack_5c = 0x495b9b;
        local_20 = (AnimationFrames *)&stack0xffffffb0;
        ghidra::str::assign((std::string *)&stack0xffffffb0,"",0);
        local_1c = (int *)local_68;
        // [seh] local_8 = 1;
        local_68[0] = (std::string)0x0;
        uStack_74 = 0x495bc7;
        ghidra::str::assign(local_68,"modules_purchased",0x11);
        // [seh] local_8 = CONCAT31(local_8._1_3_,2);
        local_80[0] = (std::string)0x0;
        ghidra::str::assign(local_80,"commerce",8);
        // [seh] local_8 = 0xffffffff;
        Analytics::logEvent();
        goto LAB_00495bf9;
      }
    }
    else if (*(int *)((char *)this + 0x10c) == 3) {
      this_00 = *(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40);
      this_01 = *(ShipModule **)(*(int *)(this_00 + 0x3c) + *(int *)((char *)this + 0x118) * 4);
      local_1c = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
      local_14 = this_01;
      (this_00)->removeModule(this_01);
      ghidra::str::ctor(local_4c,(std::string *)(*(int *)(this_01 + 8) + 8));
      (this_01)->getValue();
      (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
      (this_01)->removeAllHousedObjects();
      iVar10 = 0x14;
      puVar4 = *(undefined4 **)(this_01 + 0xc);
      do {
        puVar9 = puVar4 + 1;
        if ((void *)*puVar9 != (void *)0x0) {
          local_40 = (AnimationFrames **)0x4959ae;
          operator_delete((void *)*puVar9,(nothrow_t *)0x8);
          *puVar9 = 0;
        }
        if ((void *)puVar4[0x15] != (void *)0x0) {
          local_40 = (AnimationFrames **)0x4959c6;
          operator_delete((void *)puVar4[0x15],(nothrow_t *)0x8);
          puVar4[0x15] = 0;
        }
        iVar10 = iVar10 + -1;
        puVar4 = puVar9;
      } while (iVar10 != 0);
      iVar10 = *(int *)(*(int *)(this_01 + 8) + 0x124);
      iVar7 = *(int *)(*(int *)(this_01 + 8) + 0x120);
      iVar6 = rand();
      this_02 = local_14;
      pMVar1 = *(ModuleConfiguration **)
                (*(int *)(*(int *)(this_01 + 8) + 0x120) + (iVar6 % (iVar10 - iVar7 >> 2)) * 4);
      ComponentInterfaceInstance::applyConfiguration
                (*(ComponentInterfaceInstance **)(local_14 + 0xc),pMVar1);
      iVar10 = (this_02)->getValue();
      iVar7 = rand();
      local_20 = operator_new(0xc);
      *(undefined4 *)(local_20 + 8) = *(undefined4 *)pMVar1;
      *(ShipModule **)local_20 = local_14;
      *(int *)(local_20 + 4) = (int)((((float)(iVar7 % 100) / 100.0) * 0.5 + 0.75) * (float)iVar10);
      ppAVar2 = *(AnimationFrames ***)((int)local_1c + 0x5c);
      local_14 = (ShipModule *)local_20;
      if (*(AnimationFrames ***)((int)local_1c + 0x60) == ppAVar2) {
        local_40 = (AnimationFrames **)0x495a94;
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)((int)local_1c + 0x58),ppAVar2,(AnimationFrames **)&local_14);
      }
      else {
        *ppAVar2 = local_20;
        *(int *)((int)local_1c + 0x5c) = *(int *)((int)local_1c + 0x5c) + 4;
      }
LAB_00495bf9:
      *(undefined4 *)(local_18 + 0x118) = 0xffffffff;
      if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
        ghidra::any_singleton();
        (this_03)->saveGame();
      }
      // [seh] ExceptionList = local_10;
      return true;
    }
  }
  // [seh] ExceptionList = local_10;
  return false;
}


// Ghidra: bool __thiscall TradeEngine::performUpgradePod(TradeEngine *this,int param_1)
bool TradeEngine::performUpgradePod(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  CargoHold *this_00;
  GameData *pGVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 extraout_ECX;
  SaveHandler *this_01;
  std::string local_30 [16];
  undefined4 local_20;
  
  local_20 = 0x495c55;
  bVar5 = mechanicCanUpgradePod(this,param_1);
  if (!bVar5) {
    return false;
  }
  pcVar2 = (&PTR_s_none_005df99c)[param_1];
  local_20 = 0;
  local_30[0] = (std::string)0x0;
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  ghidra::str::assign(local_30,pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  BankAccount::addTransaction
            (*(BankAccount **)(g_gameData + 0x124),extraout_ECX,
             -(int)(&goodContainmentOptionCost)[param_1]);
  iVar3 = *(int *)((char *)this + 0x114);
  this_00 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  if ((iVar3 < 0) ||
     (((0 < *(int *)(this_00 + 8) && (*(int *)(this_00 + 8) <= iVar3)) ||
      (*(int *)(this_00 + iVar3 * 4 + 0xc) == 0)))) {
    local_20 = 0x495cee;
    (this_00)->addPod(iVar3);
  }
  pGVar4 = g_gameData;
  if ((param_1 != 0) && (param_1 - 1U < 3)) {
    *(undefined1 *)(param_1 + *(int *)(this_00 + iVar3 * 4 + 0xc)) = 1;
  }
  if (*(int *)(*(int *)(pGVar4 + 0xcc) + 0x70) == 2) {
    ghidra::any_singleton();
    (this_01)->saveGame();
  }
  return true;
}


// Ghidra: void __thiscall TradeEngine::populateMechanicMenu(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateMechanicMenu(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ListData *pLVar1;
  allocator<ListData> *paVar2;
  ListData *unaff_EDI;
  std::string local_138 [16];
  undefined4 local_128;
  std::string local_11c [12];
  undefined4 uStack_110;
  Color3B local_e7 [3];
  undefined1 *local_e4;
  undefined1 *local_e0;
  Color3B local_db [3];
  ListData local_d8 [96];
  ListData local_78 [96];
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bc3ff;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar1 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  uStack_110 = 0x495d7b;
  local_18 = pLVar1;
  cocos2d::Color3B::Color3B(local_db,'\0','\0','\0');
  local_e0 = local_11c;
  local_11c[0] = (std::string)0x0;
  local_128 = 0x495db2;
  ghidra::str::assign(local_11c,"Repairs",7);
  // [seh] local_8 = 0;
  local_128 = 0;
  local_138[0] = (std::string)0x0;
  ghidra::str::assign(local_138,"",0);
  // [seh] local_8 = 0xffffffff;
  paVar2 = (allocator<ListData> *)new ((void *)(local_78)) ListData(1);
  // [seh] local_8 = 1;
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar2);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar2,pLVar1,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
  }
  // [seh] local_8 = 0xffffffff;
  (local_78)->~ListData();
  uStack_110 = 0x495e38;
  cocos2d::Color3B::Color3B(local_db,'\0','\0','\0');
  local_e4 = local_11c;
  local_11c[0] = (std::string)0x0;
  local_128 = 0x495e6f;
  ghidra::str::assign(local_11c,"Pods",4);
  // [seh] local_8 = 2;
  local_128 = 0;
  local_138[0] = (std::string)0x0;
  ghidra::str::assign(local_138,"",0);
  // [seh] local_8 = 0xffffffff;
  paVar2 = (allocator<ListData> *)new ((void *)(local_78)) ListData(2);
  // [seh] local_8 = 3;
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar2);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar2,pLVar1,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
  }
  // [seh] local_8 = 0xffffffff;
  (local_78)->~ListData();
  uStack_110 = 0x495ef5;
  cocos2d::Color3B::Color3B(local_db,'\0','\0','\0');
  local_e4 = local_11c;
  local_11c[0] = (std::string)0x0;
  local_128 = 0x495f2c;
  ghidra::str::assign(local_11c,"Modules",7);
  // [seh] local_8 = 4;
  local_128 = 0;
  local_138[0] = (std::string)0x0;
  ghidra::str::assign(local_138,"",0);
  // [seh] local_8 = 0xffffffff;
  paVar2 = (allocator<ListData> *)new ((void *)(local_78)) ListData(3);
  // [seh] local_8 = 5;
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar2);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar2,pLVar1,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
  }
  // [seh] local_8 = 0xffffffff;
  (local_78)->~ListData();
  uStack_110 = 0x495fb2;
  cocos2d::Color3B::Color3B(local_e7,'\0','\0','\0');
  local_e4 = local_11c;
  local_11c[0] = (std::string)0x0;
  local_128 = 0x495fe9;
  ghidra::str::assign(local_11c,"Armaments",9);
  // [seh] local_8 = 6;
  local_128 = 0;
  local_138[0] = (std::string)0x0;
  ghidra::str::assign(local_138,"",0);
  // [seh] local_8 = 0xffffffff;
  paVar2 = (allocator<ListData> *)new ((void *)(local_d8)) ListData(4);
  // [seh] local_8 = 7;
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar2);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar2,pLVar1,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
  }
  (local_d8)->~ListData();
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::populateMechanicHullParts(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateMechanicHullParts(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  Ship *this_00;
  undefined1 uVar2;
  ListData *pLVar3;
  char *pcVar4;
  int iVar5;
  undefined2 *puVar6;
  allocator<ListData> *paVar7;
  int iVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  HullLocation HVar11;
  ListData *unaff_EDI;
  code *pcVar12;
  std::string local_110 [16];
  undefined4 local_100;
  undefined4 local_fc;
  std::string abStack_f4 [20];
  undefined4 uStack_e0;
  char *pcVar13;
  uint uVar14;
  Color3B local_b9 [3];
  Color3B local_b6 [6];
  char *local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  ListData local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] local_8 = 0xff;
  uStack_7 = 0xffffff;
  // [seh] puStack_c = &DAT_005bc456;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar3 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  HVar11 = 0;
  iVar8 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x11c) -
          *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x118);
  iVar5 = iVar8 >> 0x1f;
  pcVar12 = Color3B_exref;
  local_18 = pLVar3;
  if (iVar8 / 0xc + iVar5 != iVar5) {
    do {
      uStack_e0 = 0x4960fe;
      (*pcVar12)();
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      // [seh] local_8 = 0;
      uStack_7 = 0;
      pcVar13 = (&PTR_s_Bow_005dfaa4)[HVar11];
      local_b0 = pcVar13 + 1;
      pcVar4 = pcVar13;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ghidra::str::append((std::string *)local_30,pcVar13,(int)pcVar4 - (int)local_b0);
      ghidra::str::append((std::string *)local_30,"\n",1);
      iVar5 = (*(Ship **)(g_gameData + 0xd0))->getDamageAmountForHullSection(HVar11);
      if (iVar5 < 100) {
        this_00 = *(Ship **)(g_gameData + 0xd0);
        iVar5 = (this_00)->getDamageAmountForHullSection(HVar11);
        if ((99 < iVar5) ||
           (iVar5 = (this_00)->getDamageAmountForHullSection(HVar11), pcVar12 = Color3B_exref,
           iVar5 < 1)) {
          pcVar12 = Color3B_exref;
          uStack_e0 = 0x496265;
          puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_b9,' ','@',' ');
          uVar14 = 0xc;
          pcVar13 = "`0undamaged\n";
          goto LAB_0049626c;
        }
        uStack_e0 = 0x4961c6;
        puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_b6,'@','@',' ');
        local_ac = *puVar6;
        local_aa = *(undefined1 *)(puVar6 + 1);
        (*(Ship **)(g_gameData + 0xd0))->getDamageAmountForHullSection(HVar11);
        uStack_e0 = 0x4961fa;
        pcVar4 = (char *)strUsingArgs((char *)local_48);
        // [seh] local_8 = 1;
        pcVar13 = pcVar4;
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar13 = *(char **)pcVar4;
        }
        ghidra::str::append((std::string *)local_30,pcVar13,*(uint *)(pcVar4 + 0x10));
        // [seh] local_8 = 0;
        uVar2 = local_8;
        // [seh] local_8 = 0;
        if (0xf < local_34) {
          pnVar10 = (nothrow_t *)(local_34 + 1);
          pvVar9 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_48[0] + -4);
            pnVar10 = (nothrow_t *)(local_34 + 0x24);
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_004963bb;
          }
          operator_delete(pvVar9,pnVar10);
        }
      }
      else {
        uStack_e0 = 0x49617a;
        puVar6 = (undefined2 *)(*pcVar12)();
        uVar14 = 0x12;
        pcVar13 = "`@-- destroyed --\n";
LAB_0049626c:
        local_ac = *puVar6;
        local_aa = *(undefined1 *)(puVar6 + 1);
        ghidra::str::append((std::string *)local_30,pcVar13,uVar14);
      }
      local_b0 = (char *)abStack_f4;
      local_fc = 0x4962b8;
      ghidra::str::ctor(abStack_f4,(std::string *)local_30);
      // [seh] local_8 = 2;
      local_100 = 0;
      local_fc = 0xf;
      local_110[0] = (std::string)0x0;
      ghidra::str::assign(local_110,"",0);
      // [seh] local_8 = 0;
      paVar7 = (allocator<ListData> *)new ((void *)(local_a8)) ListData(HVar11);
      _local_8 = CONCAT31(uStack_7,3);
      if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
        std::vector<>::_Emplace_reallocate<ListData>
                  (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar7);
      }
      else {
        ghidra::lib::_Default_allocator_traits__construct(paVar7,pLVar3,unaff_EDI);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
      }
      (local_a8)->~ListData();
      // [seh] local_8 = 0xff;
      uStack_7 = 0xffffff;
      if (0xf < local_1c) {
        pnVar10 = (nothrow_t *)(local_1c + 1);
        pvVar9 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_30[0] + -4);
          pnVar10 = (nothrow_t *)(local_1c + 0x24);
          uVar2 = local_8;
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
LAB_004963bb:
            // [seh] local_8 = uVar2;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
      }
      HVar11 = HVar11 + 1;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
    } while (HVar11 < (uint)((*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x11c) -
                             *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x118)) / 0xc)
            );
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkMechanicHullParts(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkMechanicHullParts(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  Ship *this_00;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char ****ppppcVar8;
  int iVar9;
  void *pvVar10;
  char ****ppppcVar11;
  nothrow_t *pnVar12;
  HullLocation *pHVar13;
  uint unaff_EDI;
  HullLocation HVar14;
  char *pcVar15;
  uint uVar16;
  Color3B local_61 [3];
  Color3B local_5e [3];
  Color3B local_5b [3];
  char *local_58;
  int local_54;
  ghidra::vector *local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  void *local_48 [5];
  uint local_34;
  char ***local_30 [4];
  uint local_20;
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005bc490;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_50 = param_1;
  iVar9 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x11c) -
          *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x118);
  iVar2 = iVar9 >> 0x1f;
  iVar9 = iVar9 / 0xc + iVar2;
  local_18 = pcVar5;
  if (((*(int *)(param_1 + 4) - *(int *)param_1) / 0x60 == iVar9 - iVar2) &&
     (HVar14 = 0, iVar9 != iVar2)) {
    local_54 = 0;
    do {
      iVar2 = local_54;
      cocos2d::Color3B::Color3B((Color3B *)&local_4c,' ',' ',' ');
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
      // [seh] local_8 = 0;
      pcVar15 = (&PTR_s_Bow_005dfaa4)[HVar14];
      local_58 = pcVar15 + 1;
      pcVar6 = pcVar15;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      ghidra::str::append((std::string *)local_30,pcVar15,(int)pcVar6 - (int)local_58);
      ghidra::str::append((std::string *)local_30,"\n",1);
      iVar9 = (*(Ship **)(g_gameData + 0xd0))->getDamageAmountForHullSection(HVar14);
      if (iVar9 < 100) {
        this_00 = *(Ship **)(g_gameData + 0xd0);
        iVar9 = (this_00)->getDamageAmountForHullSection(HVar14);
        if ((99 < iVar9) || (iVar9 = (this_00)->getDamageAmountForHullSection(HVar14), iVar9 < 1)
           ) {
          puVar7 = (undefined2 *)cocos2d::Color3B::Color3B(local_61,' ','@',' ');
          uVar16 = 0xc;
          pcVar15 = "`0undamaged\n";
          goto LAB_004965bc;
        }
        puVar7 = (undefined2 *)cocos2d::Color3B::Color3B(local_5e,'@','@',' ');
        local_4c = *puVar7;
        local_4a = *(undefined1 *)(puVar7 + 1);
        iVar9 = (*(Ship **)(g_gameData + 0xd0))->getDamageAmountForHullSection(HVar14);
        pcVar6 = (char *)strUsingArgs((char *)local_48,"`7damage: `$%d%%\n",iVar9);
        // [seh] local_8._0_1_ = 1;
        pcVar15 = pcVar6;
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar15 = *(char **)pcVar6;
        }
        ghidra::str::append((std::string *)local_30,pcVar15,*(uint *)(pcVar6 + 0x10));
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_34) {
          pnVar12 = (nothrow_t *)(local_34 + 1);
          pvVar10 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar10 = *(void **)((int)local_48[0] + -4);
            pnVar12 = (nothrow_t *)(local_34 + 0x24);
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) goto LAB_00496747;
          }
          operator_delete(pvVar10,pnVar12);
        }
      }
      else {
        puVar7 = (undefined2 *)cocos2d::Color3B::Color3B(local_5b,'@',' ',' ');
        uVar16 = 0x12;
        pcVar15 = "`@-- destroyed --\n";
LAB_004965bc:
        local_4c = *puVar7;
        local_4a = *(undefined1 *)(puVar7 + 1);
        ghidra::str::append((std::string *)local_30,pcVar15,uVar16);
      }
      pHVar13 = (HullLocation *)(*(int *)local_50 + iVar2);
      ppppcVar11 = (char ****)local_30[0];
      if (((*pHVar13 != HVar14) ||
          (bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI), ppppcVar11 = (char ****)local_30[0],
          !bVar3)) || (pHVar13[7] != 0xffffffff)) {
LAB_00496722:
        if (0xf < local_1c) {
          pnVar12 = (nothrow_t *)(local_1c + 1);
          ppppcVar8 = ppppcVar11;
          if ((nothrow_t *)0xfff < pnVar12) {
            ppppcVar8 = (char ****)ppppcVar11[-1];
            pnVar12 = (nothrow_t *)(local_1c + 0x24);
            if ((char *)0x1f < (char *)((int)ppppcVar11 + (-4 - (int)ppppcVar8))) {
LAB_00496747:
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppcVar8,pnVar12);
        }
        break;
      }
      ppppcVar8 = local_30;
      if (0xf < local_1c) {
        ppppcVar8 = (char ****)local_30[0];
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar8,local_20,pcVar5,unaff_EDI);
      if (((!bVar3) ||
          (bVar3 = cocos2d::Color3B::operator!=((Color3B *)(pHVar13 + 0x16),(Color3B *)&local_4c),
          iVar2 = local_54, ppppcVar11 = (char ****)local_30[0], bVar3)) ||
         ((*(int *)(*(int *)local_50 + 0x50 + local_54) != -999 ||
          (*(char *)(*(int *)local_50 + 0x5e + local_54) != '\0')))) goto LAB_00496722;
      // [seh] local_8 = -1;
      if (0xf < local_1c) {
        pnVar12 = (nothrow_t *)(local_1c + 1);
        if ((nothrow_t *)0xfff < pnVar12) {
          ppppcVar11 = (char ****)local_30[0][-1];
          pnVar12 = (nothrow_t *)(local_1c + 0x24);
          if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar11))) goto LAB_00496747;
        }
        operator_delete(ppppcVar11,pnVar12);
      }
      HVar14 = HVar14 + 1;
      local_20 = 0;
      local_54 = iVar2 + 0x60;
      local_1c = 0xf;
      local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
    } while (HVar14 < (uint)((*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x11c) -
                             *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0x118)) / 0xc)
            );
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar4 = __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}


// Ghidra: void __thiscall TradeEngine::populateMechanicPods(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateMechanicPods(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 uVar1;
  ListData *pLVar2;
  char *pcVar3;
  allocator<ListData> *paVar4;
  undefined2 *puVar5;
  GameData *pGVar6;
  void *pvVar7;
  int iVar8;
  ListData *this_00;
  nothrow_t *pnVar9;
  ListData *unaff_EDI;
  int iVar10;
  std::string local_178 [16];
  undefined4 local_168;
  undefined4 local_164;
  std::string abStack_15c [12];
  undefined4 uStack_150;
  char *pcVar11;
  uint uVar12;
  Color3B local_127 [3];
  Color3B local_124 [3];
  Color3B local_121 [3];
  Color3B local_11e [3];
  Color3B local_11b [3];
  undefined1 *local_118;
  int local_114;
  undefined1 *local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  ListData local_108 [96];
  ListData local_a8 [96];
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005bc504;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar2 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar10 = 0;
  pGVar6 = g_gameData + 0xd0;
  local_18 = pLVar2;
  if (*(int *)(*(int *)(*(int *)pGVar6 + 0x254) + 0xe4) < 1) {
LAB_00496b5d:
    // [seh] ExceptionList = local_10;
    // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_004967c0:
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  // [seh] local_8 = 0;
  if (*(int *)(*(int *)(*(int *)pGVar6 + 0x1f8) + 0xc + iVar10 * 4) != 0) {
    cocos2d::Color3B::Color3B((Color3B *)&local_10c,'@','@','@');
    local_114 = iVar10 + 1;
    pcVar3 = (char *)strUsingArgs((char *)local_48);
    // [seh] local_8._0_1_ = 4;
    pcVar11 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar11 = *(char **)pcVar3;
    }
    ghidra::str::append((std::string *)local_30,pcVar11,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8._0_1_ = 0;
    if (0xf < local_34) {
      pnVar9 = (nothrow_t *)(local_34 + 1);
      pvVar7 = local_48[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar7 = *(void **)((int)local_48[0] + -4);
        pnVar9 = (nothrow_t *)(local_34 + 0x24);
        uVar1 = (undefined1)local_8;
        if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar7))) goto LAB_00496b7b;
      }
      operator_delete(pvVar7,pnVar9);
    }
    iVar8 = 1;
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    local_110 = *(undefined1 **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
    do {
      if (*(char *)(*(int *)(local_110 + iVar10 * 4 + 0xc) + iVar8) == '\0') {
        iVar8 = 1;
        goto LAB_004969e0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_11e,'@',0x80,'@');
    uVar12 = 0xe;
    pcVar11 = "fully upgraded";
    goto LAB_00496a4e;
  }
  local_114 = iVar10 + 1;
  pcVar3 = (char *)strUsingArgs((char *)local_48);
  // [seh] local_8._0_1_ = 1;
  pcVar11 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar11 = *(char **)pcVar3;
  }
  ghidra::str::append((std::string *)local_30,pcVar11,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8._0_1_ = 0;
  uVar1 = (undefined1)local_8;
  // [seh] local_8._0_1_ = 0;
  if (0xf < local_34) {
    pnVar9 = (nothrow_t *)(local_34 + 1);
    pvVar7 = local_48[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)local_48[0] + -4);
      pnVar9 = (nothrow_t *)(local_34 + 0x24);
      if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar7))) goto LAB_00496b7b;
    }
    operator_delete(pvVar7,pnVar9);
  }
  uStack_150 = 0x49686e;
  cocos2d::Color3B::Color3B(local_11b,'\0','\0','\0');
  local_110 = abStack_15c;
  local_164 = 0x496891;
  ghidra::str::ctor(abStack_15c,(std::string *)local_30);
  // [seh] local_8._0_1_ = 2;
  local_168 = 0;
  local_164 = 0xf;
  local_178[0] = (std::string)0x0;
  ghidra::str::assign(local_178,"",0);
  // [seh] local_8._0_1_ = 0;
  paVar4 = (allocator<ListData> *)new ((void *)(local_a8)) ListData(iVar10);
  // [seh] local_8 = CONCAT31(local_8._1_3_,3);
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar4);
    this_00 = local_a8;
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar4,pLVar2,unaff_EDI);
    this_00 = local_a8;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
  }
  goto LAB_00496afb;
  while (iVar8 = iVar8 + 1, iVar8 < 3) {
LAB_004969e0:
    if (*(char *)(*(int *)(local_110 + iVar10 * 4 + 0xc) + iVar8) != '\0') {
      if (*(char *)(*(int *)(local_110 + iVar10 * 4 + 0xc) + 1) == '\0') {
        if (*(char *)(*(int *)(local_110 + iVar10 * 4 + 0xc) + 2) == '\0') goto LAB_00496a69;
        puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_127,0x80,'@',0x80);
        uVar12 = 0x12;
        pcVar11 = "radiation shielded";
      }
      else {
        puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_124,0x80,'@','@');
        uVar12 = 0x16;
        pcVar11 = "temperature controlled";
      }
      goto LAB_00496a4e;
    }
  }
  puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(local_121,'@','@','@');
  uVar12 = 0xb;
  pcVar11 = "no upgrades";
LAB_00496a4e:
  local_10c = *puVar5;
  local_10a = *(undefined1 *)(puVar5 + 1);
  ghidra::str::append((std::string *)local_30,pcVar11,uVar12);
LAB_00496a69:
  local_118 = abStack_15c;
  local_164 = 0x496a9a;
  ghidra::str::ctor(abStack_15c,(std::string *)local_30);
  // [seh] local_8._0_1_ = 5;
  local_168 = 0;
  local_164 = 0xf;
  local_178[0] = (std::string)0x0;
  ghidra::str::assign(local_178,"",0);
  // [seh] local_8._0_1_ = 0;
  paVar4 = (allocator<ListData> *)new ((void *)(local_108)) ListData(iVar10);
  // [seh] local_8 = CONCAT31(local_8._1_3_,6);
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar4);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar4,pLVar2,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
  }
  this_00 = local_108;
LAB_00496afb:
  (this_00)->~ListData();
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  if (0xf < local_1c) {
    pnVar9 = (nothrow_t *)(local_1c + 1);
    pvVar7 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar7 = *(void **)((int)local_30[0] + -4);
      pnVar9 = (nothrow_t *)(local_1c + 0x24);
      uVar1 = (undefined1)local_8;
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar7))) {
LAB_00496b7b:
        // [seh] local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar9);
  }
  pGVar6 = g_gameData + 0xd0;
  iVar10 = local_114;
  if (*(int *)(*(int *)(*(int *)pGVar6 + 0x254) + 0xe4) <= local_114) goto LAB_00496b5d;
  goto LAB_004967c0;
}


// Ghidra: bool __thiscall TradeEngine::checkMechanicPods(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkMechanicPods(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 *puVar6;
  char ****ppppcVar7;
  void *pvVar8;
  int iVar9;
  char ****ppppcVar10;
  nothrow_t *pnVar11;
  int *piVar12;
  uint unaff_EDI;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  Color3B local_67 [3];
  Color3B local_64 [3];
  Color3B local_61 [3];
  Color3B local_5e [3];
  Color3B local_5b [3];
  int local_58;
  ghidra::vector *local_54;
  int local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  char ***local_30 [4];
  uint local_20;
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005bbec8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_54 = param_1;
  iVar13 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe4);
  local_18 = pcVar4;
  if (((*(int *)(param_1 + 4) - *(int *)param_1) / 0x60 != iVar13) || (iVar13 < 1)) {
LAB_00496ef5:
    // [seh] ExceptionList = local_10;
    // [cookie] uVar3 = __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
    return (bool)uVar3;
  }
  local_50 = 0;
  iVar13 = 0;
LAB_00496c03:
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
  // [seh] local_8 = 0;
  cocos2d::Color3B::Color3B((Color3B *)&local_4c,'@','@','@');
  local_58 = iVar13 + 1;
  if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc + iVar13 * 4) != 0) {
    pcVar5 = (char *)strUsingArgs((char *)local_48,"`7Pod : `%%%d\n`7Cat.: `%%",local_58);
    // [seh] local_8._0_1_ = 2;
    pcVar14 = pcVar5;
    if (0xf < *(uint *)(pcVar5 + 0x14)) {
      pcVar14 = *(char **)pcVar5;
    }
    ghidra::str::append((std::string *)local_30,pcVar14,*(uint *)(pcVar5 + 0x10));
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_34) {
      pnVar11 = (nothrow_t *)(local_34 + 1);
      pvVar8 = local_48[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar8 = *(void **)((int)local_48[0] + -4);
        pnVar11 = (nothrow_t *)(local_34 + 0x24);
        if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8))) goto LAB_00496f39;
      }
      operator_delete(pvVar8,pnVar11);
    }
    iVar9 = 1;
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
    iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc + iVar13 * 4);
    do {
      if (*(char *)(iVar1 + iVar9) == '\0') {
        iVar9 = 1;
        goto LAB_00496d80;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_5e,'@',0x80,'@');
    uVar15 = 0xe;
    pcVar14 = "fully upgraded";
    goto LAB_00496ddd;
  }
  pcVar5 = (char *)strUsingArgs((char *)local_48,"`7Pod : `%%%d\n`8- none -",local_58);
  // [seh] local_8._0_1_ = 1;
  pcVar14 = pcVar5;
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar14 = *(char **)pcVar5;
  }
  ghidra::str::append((std::string *)local_30,pcVar14,*(uint *)(pcVar5 + 0x10));
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_34) {
    pnVar11 = (nothrow_t *)(local_34 + 1);
    pvVar8 = local_48[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar8 = *(void **)((int)local_48[0] + -4);
      pnVar11 = (nothrow_t *)(local_34 + 0x24);
      if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar8))) goto LAB_00496f39;
    }
    operator_delete(pvVar8,pnVar11);
  }
  puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_5b,'\0','\0','\0');
  local_4c = *puVar6;
  local_4a = *(undefined1 *)(puVar6 + 1);
  goto LAB_00496df2;
  while (iVar9 = iVar9 + 1, iVar9 < 3) {
LAB_00496d80:
    if (*(char *)(iVar1 + iVar9) != '\0') {
      if (*(char *)(iVar1 + 1) == '\0') {
        if (*(char *)(iVar1 + 2) == '\0') goto LAB_00496df2;
        puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_67,0x80,'@',0x80);
        uVar15 = 0x12;
        pcVar14 = "radiation shielded";
      }
      else {
        puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_64,0x80,'@','@');
        uVar15 = 0x16;
        pcVar14 = "temperature controlled";
      }
      goto LAB_00496ddd;
    }
  }
  puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_61,'@','@','@');
  uVar15 = 0xb;
  pcVar14 = "no upgrades";
LAB_00496ddd:
  local_4c = *puVar6;
  local_4a = *(undefined1 *)(puVar6 + 1);
  ghidra::str::append((std::string *)local_30,pcVar14,uVar15);
LAB_00496df2:
  piVar12 = (int *)(*(int *)local_54 + local_50);
  uVar15 = local_1c;
  ppppcVar10 = (char ****)local_30[0];
  if (((*piVar12 == iVar13) &&
      (bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar4,unaff_EDI), uVar15 = local_1c,
      ppppcVar10 = (char ****)local_30[0], bVar2)) && (piVar12[7] == -1)) {
    ppppcVar7 = local_30;
    if (0xf < local_1c) {
      ppppcVar7 = (char ****)local_30[0];
    }
    bVar2 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar7,local_20,pcVar4,unaff_EDI);
    if (((bVar2) &&
        (bVar2 = cocos2d::Color3B::operator!=((Color3B *)(piVar12 + 0x16),(Color3B *)&local_4c),
        iVar13 = local_50, uVar15 = local_1c, ppppcVar10 = (char ****)local_30[0], !bVar2)) &&
       ((*(int *)(*(int *)local_54 + 0x50 + local_50) == -999 &&
        (*(char *)(*(int *)local_54 + 0x5e + local_50) == '\0')))) {
      // [seh] local_8 = -1;
      if (0xf < local_1c) {
        pnVar11 = (nothrow_t *)(local_1c + 1);
        if ((nothrow_t *)0xfff < pnVar11) {
          ppppcVar10 = (char ****)local_30[0][-1];
          pnVar11 = (nothrow_t *)(local_1c + 0x24);
          if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar10))) goto LAB_00496f39;
        }
        operator_delete(ppppcVar10,pnVar11);
      }
      local_50 = iVar13 + 0x60;
      iVar13 = local_58;
      if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe4) <= local_58)
      goto LAB_00496ef5;
      goto LAB_00496c03;
    }
  }
  if (uVar15 < 0x10) goto LAB_00496ef5;
  pnVar11 = (nothrow_t *)(uVar15 + 1);
  ppppcVar7 = ppppcVar10;
  if ((nothrow_t *)0xfff < pnVar11) {
    ppppcVar7 = (char ****)ppppcVar10[-1];
    pnVar11 = (nothrow_t *)(uVar15 + 0x24);
    if ((char *)0x1f < (char *)((int)ppppcVar10 + (-4 - (int)ppppcVar7))) {
LAB_00496f39:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(ppppcVar7,pnVar11);
  goto LAB_00496ef5;
}


// Ghidra: void __thiscall TradeEngine::populateMechanicModules(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateMechanicModules(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipModule *this_00;
  undefined1 uVar1;
  char cVar2;
  ListData *pLVar3;
  char *pcVar4;
  undefined2 *puVar5;
  allocator<ListData> *paVar6;
  Color3B *this_01;
  int iVar7;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  GameData *pGVar11;
  uint uVar12;
  int iVar13;
  ListData *unaff_EDI;
  std::string local_110 [16];
  undefined4 local_100;
  undefined4 local_fc;
  std::string abStack_f4 [8];
  undefined4 uStack_ec;
  uchar uVar14;
  Color3B local_b7 [3];
  undefined4 local_b4;
  int local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  ListData local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005bc584;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar3 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar13 = *(int *)((char *)this + 0x11c);
  local_b0 = iVar13;
  local_18 = pLVar3;
  if (((char *)this)[0x109] == (byte)0x0) {
    uVar12 = 0;
    local_b4 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    iVar7 = *(int *)(local_b4 + 0x58);
    if (*(int *)(local_b4 + 0x5c) - iVar7 >> 2 != 0) {
      do {
        if (((*(int *)(iVar13 + 0xdc) == -1) ||
            (*(int *)(*(int *)(iVar7 + uVar12 * 4) + 8) == *(int *)(iVar13 + 0xdc))) &&
           ((*(int *)(iVar13 + 0xe0) == -1 ||
            (*(int *)(*(int *)(**(int **)(iVar7 + uVar12 * 4) + 8) + 4) ==
             *(int *)(&DAT_005dfd2c + *(int *)(iVar13 + 0xe0) * 4))))) {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          // [seh] local_8._0_1_ = 4;
          // [seh] local_8._1_3_ = 0;
          iVar13 = *(int *)(*(int *)(iVar7 + uVar12 * 4) + 8);
          if (iVar13 == -1) {
            uStack_ec = 0x4972f4;
            pcVar4 = (char *)strUsingArgs((char *)local_48);
            // [seh] local_8._0_1_ = 5;
            pcVar8 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar8 = *(char **)pcVar4;
            }
            ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar4 + 0x10));
            // [seh] local_8._0_1_ = 4;
            uVar1 = (undefined1)local_8;
            // [seh] local_8._0_1_ = 4;
            if (0xf < local_34) {
              pnVar10 = (nothrow_t *)(local_34 + 1);
              pvVar9 = local_48[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_48[0] + -4);
                pnVar10 = (nothrow_t *)(local_34 + 0x24);
                if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_00497222;
              }
              operator_delete(pvVar9,pnVar10);
            }
          }
          else if (iVar13 < 6) {
            uStack_ec = 0x49738e;
            pcVar4 = (char *)strUsingArgs((char *)local_48);
            // [seh] local_8._0_1_ = 6;
            pcVar8 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar8 = *(char **)pcVar4;
            }
            ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar4 + 0x10));
            // [seh] local_8._0_1_ = 4;
            if (0xf < local_34) {
              pnVar10 = (nothrow_t *)(local_34 + 1);
              pvVar9 = local_48[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_48[0] + -4);
                pnVar10 = (nothrow_t *)(local_34 + 0x24);
                uVar1 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_00497222;
              }
              operator_delete(pvVar9,pnVar10);
            }
          }
          else {
            ghidra::str::append
                      ((std::string *)local_30,"ERROR: invalid module rating",0x1c);
          }
          cocos2d::Color3B::Color3B(local_b7,'@','@','@');
          local_fc = 0x497430;
          ghidra::str::ctor(abStack_f4,(std::string *)local_30);
          // [seh] local_8._0_1_ = 7;
          local_100 = 0;
          local_fc = 0xf;
          local_110[0] = (std::string)0x0;
          ghidra::str::assign(local_110,"",0);
          // [seh] local_8._0_1_ = 4;
          paVar6 = (allocator<ListData> *)new ((void *)(local_a8)) ListData(uVar12);
          // [seh] local_8 = CONCAT31(local_8._1_3_,8);
          if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
            std::vector<>::_Emplace_reallocate<ListData>
                      (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar6);
          }
          else {
            ghidra::lib::_Default_allocator_traits__construct(paVar6,pLVar3,unaff_EDI);
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
          }
          (local_a8)->~ListData();
          // [seh] local_8._0_1_ = 0xff;
          // [seh] local_8._1_3_ = 0xffffff;
          iVar13 = local_b0;
          if (0xf < local_1c) {
            pnVar10 = (nothrow_t *)(local_1c + 1);
            pvVar9 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_30[0] + -4);
              pnVar10 = (nothrow_t *)(local_1c + 0x24);
              uVar1 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) goto LAB_00497222;
            }
            operator_delete(pvVar9,pnVar10);
            iVar13 = local_b0;
          }
        }
        uVar12 = uVar12 + 1;
        iVar7 = *(int *)(local_b4 + 0x58);
      } while (uVar12 < (uint)(*(int *)(local_b4 + 0x5c) - iVar7 >> 2));
    }
  }
  else {
    uVar12 = 0;
    pGVar11 = g_gameData;
    if (*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40) -
        *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c) >> 2 != 0) {
      do {
        this_00 = *(ShipModule **)
                   (*(int *)(*(int *)(*(int *)(pGVar11 + 0xd0) + 0x40) + 0x3c) + uVar12 * 4);
        if ((*(int *)(local_b0 + 0xe0) == -1) ||
           (*(int *)(*(int *)(this_00 + 8) + 4) ==
            *(int *)(&DAT_005dfd2c + *(int *)(local_b0 + 0xe0) * 4))) {
          (this_00)->getValue();
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          // [seh] local_8 = 0;
          pcVar4 = (char *)strUsingArgs((char *)local_48);
          // [seh] local_8._0_1_ = 1;
          pcVar8 = pcVar4;
          if (0xf < *(uint *)(pcVar4 + 0x14)) {
            pcVar8 = *(char **)pcVar4;
          }
          ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar4 + 0x10));
          // [seh] local_8._0_1_ = 0;
          if (0xf < local_34) {
            pnVar10 = (nothrow_t *)(local_34 + 1);
            pvVar9 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_48[0] + -4);
              pnVar10 = (nothrow_t *)(local_34 + 0x24);
              uVar1 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) {
LAB_00497222:
                // [seh] local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar9,pnVar10);
          }
          cocos2d::Color3B::Color3B((Color3B *)&local_ac,' ','@',' ');
          cVar2 = (**(code **)(*(int *)this_00 + 0x14))();
          if (cVar2 == '\0') {
            cVar2 = (**(code **)(*(int *)this_00 + 0x18))();
            if (cVar2 != '\0') {
              ghidra::str::append((std::string *)local_30,"`^- damaged -",0xd);
              uVar14 = '@';
              this_01 = local_b7;
              goto LAB_004970f5;
            }
            ghidra::str::append((std::string *)local_30,"`0- nominal -",0xd);
          }
          else {
            ghidra::str::append((std::string *)local_30,"`@- non-functional -",0x14);
            uVar14 = ' ';
            this_01 = (Color3B *)((int)&local_b4 + 1);
LAB_004970f5:
            puVar5 = (undefined2 *)cocos2d::Color3B::Color3B(this_01,'@',uVar14,' ');
            local_ac = *puVar5;
            local_aa = *(undefined1 *)(puVar5 + 1);
          }
          local_fc = 0x49714d;
          ghidra::str::ctor(abStack_f4,(std::string *)local_30);
          // [seh] local_8._0_1_ = 2;
          local_100 = 0;
          local_fc = 0xf;
          local_110[0] = (std::string)0x0;
          ghidra::str::assign(local_110,"",0);
          // [seh] local_8._0_1_ = 0;
          paVar6 = (allocator<ListData> *)new ((void *)(local_a8)) ListData(uVar12);
          // [seh] local_8 = CONCAT31(local_8._1_3_,3);
          if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
            std::vector<>::_Emplace_reallocate<ListData>
                      (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar6);
          }
          else {
            ghidra::lib::_Default_allocator_traits__construct(paVar6,pLVar3,unaff_EDI);
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
          }
          (local_a8)->~ListData();
          // [seh] local_8._0_1_ = 0xff;
          // [seh] local_8._1_3_ = 0xffffff;
          if (0xf < local_1c) {
            pnVar10 = (nothrow_t *)(local_1c + 1);
            pvVar9 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_30[0] + -4);
              pnVar10 = (nothrow_t *)(local_1c + 0x24);
              uVar1 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) goto LAB_00497222;
            }
            operator_delete(pvVar9,pnVar10);
          }
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          pGVar11 = g_gameData;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)(*(int *)(*(int *)(*(int *)(pGVar11 + 0xd0) + 0x40) + 0x40) -
                               *(int *)(*(int *)(*(int *)(pGVar11 + 0xd0) + 0x40) + 0x3c) >> 2));
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkMechanicModules(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkMechanicModules(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipModule *this_00;
  int *piVar1;
  ghidra::vector *pvVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  char ****ppppcVar10;
  Color3B *pCVar11;
  int *piVar12;
  char *pcVar13;
  void *pvVar14;
  char ****ppppcVar15;
  uint uVar16;
  nothrow_t *pnVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  uint unaff_EDI;
  GameData *pGVar21;
  Color3B local_63 [3];
  undefined4 local_60;
  int local_5c;
  ghidra::vector *local_58;
  int *local_54;
  undefined2 local_50;
  undefined1 local_4e;
  uint local_4c;
  void *local_48 [5];
  uint local_34;
  char ***local_30 [4];
  uint local_20;
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005bc5d0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_5c = *(int *)((char *)this + 0x11c);
  local_58 = param_1;
  local_18 = pcVar6;
  if (((char *)this)[0x109] == (byte)0x0) {
    local_5c = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    iVar19 = *(int *)(local_5c + 0x58);
    iVar7 = *(int *)(local_5c + 0x5c) - iVar19 >> 2;
    if (((*(int *)(param_1 + 4) - *(int *)param_1) / 0x60 == iVar7) && (uVar16 = 0, iVar7 != 0)) {
      local_4c = 0;
      do {
        uVar18 = local_4c;
        pvVar2 = local_58;
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
        // [seh] local_8 = 2;
        piVar1 = *(int **)(iVar19 + uVar16 * 4);
        iVar19 = *(int *)(*piVar1 + 8);
        piVar12 = (int *)(iVar19 + 8);
        if (0xf < *(uint *)(iVar19 + 0x1c)) {
          piVar12 = (int *)*piVar12;
        }
        pcVar8 = (char *)strUsingArgs((char *)local_48,
                                      "`%%%s\n`7%s\nCost: `$%dc\n`7Rating: `%%*****",piVar12,
                                      (&PTR_s_Unknown_005dfae0)[*(int *)(iVar19 + 4)],piVar1[1]);
        // [seh] local_8._0_1_ = 3;
        pcVar13 = pcVar8;
        if (0xf < *(uint *)(pcVar8 + 0x14)) {
          pcVar13 = *(char **)pcVar8;
        }
        ghidra::str::append((std::string *)local_30,pcVar13,*(uint *)(pcVar8 + 0x10));
        // [seh] local_8 = CONCAT31(local_8._1_3_,2);
        if (0xf < local_34) {
          pnVar17 = (nothrow_t *)(local_34 + 1);
          pvVar14 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar17) {
            pvVar14 = *(void **)((int)local_48[0] + -4);
            pnVar17 = (nothrow_t *)(local_34 + 0x24);
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar14))) goto LAB_004978bf;
          }
          operator_delete(pvVar14,pnVar17);
        }
        puVar20 = (uint *)(uVar18 + *(int *)pvVar2);
        ppppcVar15 = (char ****)local_30[0];
        if (((*puVar20 != uVar16) ||
            (bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI),
            ppppcVar15 = (char ****)local_30[0], !bVar4)) || (puVar20[7] != 0xffffffff)) {
LAB_00497ad0:
          if (0xf < local_1c) {
            pnVar17 = (nothrow_t *)(local_1c + 1);
            ppppcVar10 = ppppcVar15;
            if ((nothrow_t *)0xfff < pnVar17) {
              ppppcVar10 = (char ****)ppppcVar15[-1];
              pnVar17 = (nothrow_t *)(local_1c + 0x24);
              if ((char *)0x1f < (char *)((int)ppppcVar15 + (-4 - (int)ppppcVar10))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(ppppcVar10,pnVar17);
          }
          break;
        }
        ppppcVar10 = local_30;
        if (0xf < local_1c) {
          ppppcVar10 = (char ****)local_30[0];
        }
        bVar4 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar10,local_20,pcVar6,unaff_EDI);
        if (!bVar4) goto LAB_00497ad0;
        pCVar11 = (Color3B *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_60 + 1),'@','@','@');
        bVar4 = cocos2d::Color3B::operator!=((Color3B *)(puVar20 + 0x16),pCVar11);
        uVar18 = local_4c;
        ppppcVar15 = (char ****)local_30[0];
        if (((bVar4) || (*(int *)(local_4c + 0x50 + *(int *)local_58) != -999)) ||
           (*(char *)(local_4c + 0x5e + *(int *)local_58) != '\0')) goto LAB_00497ad0;
        // [seh] local_8 = -1;
        if (0xf < local_1c) {
          pnVar17 = (nothrow_t *)(local_1c + 1);
          if ((nothrow_t *)0xfff < pnVar17) {
            ppppcVar15 = (char ****)local_30[0][-1];
            pnVar17 = (nothrow_t *)(local_1c + 0x24);
            if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar15)))
            goto LAB_004978bf;
          }
          operator_delete(ppppcVar15,pnVar17);
        }
        uVar16 = uVar16 + 1;
        local_4c = uVar18 + 0x60;
        iVar19 = *(int *)(local_5c + 0x58);
      } while (uVar16 < (uint)(*(int *)(local_5c + 0x5c) - iVar19 >> 2));
    }
  }
  else {
    uVar16 = 0;
    iVar19 = 0;
    local_60 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x3c);
    local_54 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x40);
    uVar18 = (uint)((int)local_54 + (3 - (int)local_60)) >> 2;
    if (local_54 < local_60) {
      uVar18 = 0;
    }
    if (uVar18 != 0) {
      piVar12 = local_60;
      do {
        if ((*(int *)(local_5c + 0xe0) == -1) ||
           (*(int *)(*(int *)(*piVar12 + 8) + 4) ==
            *(int *)(&DAT_005dfd2c + *(int *)(local_5c + 0xe0) * 4))) {
          iVar19 = iVar19 + 1;
        }
        uVar16 = uVar16 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar16 != uVar18);
    }
    if ((iVar19 == (*(int *)(param_1 + 4) - *(int *)param_1) / 0x60) &&
       (local_4c = 0, (int)local_54 - (int)local_60 >> 2 != 0)) {
      local_54 = (int *)0x0;
      pGVar21 = g_gameData;
      do {
        uVar16 = local_4c;
        this_00 = *(ShipModule **)
                   (*(int *)(*(int *)(*(int *)(pGVar21 + 0xd0) + 0x40) + 0x3c) + local_4c * 4);
        if ((*(int *)(local_5c + 0xe0) == -1) ||
           (*(int *)(*(int *)(this_00 + 8) + 4) ==
            *(int *)(&DAT_005dfd2c + *(int *)(local_5c + 0xe0) * 4))) {
          iVar7 = (this_00)->getValue();
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
          // [seh] local_8 = 0;
          iVar19 = *(int *)(this_00 + 8);
          piVar12 = (int *)(iVar19 + 8);
          if (0xf < *(uint *)(iVar19 + 0x1c)) {
            piVar12 = (int *)*piVar12;
          }
          pcVar8 = (char *)strUsingArgs((char *)local_48,"`%%%s\n`7%s\nSell Value: `$%dc\n`7State: "
                                        ,piVar12,(&PTR_s_Unknown_005dfae0)[*(int *)(iVar19 + 4)],
                                        iVar7 / 2);
          // [seh] local_8._0_1_ = 1;
          pcVar13 = pcVar8;
          if (0xf < *(uint *)(pcVar8 + 0x14)) {
            pcVar13 = *(char **)pcVar8;
          }
          ghidra::str::append((std::string *)local_30,pcVar13,*(uint *)(pcVar8 + 0x10));
          // [seh] local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_34) {
            pnVar17 = (nothrow_t *)(local_34 + 1);
            pvVar14 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar17) {
              pvVar14 = *(void **)((int)local_48[0] + -4);
              pnVar17 = (nothrow_t *)(local_34 + 0x24);
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar14))) goto LAB_004978bf;
            }
            operator_delete(pvVar14,pnVar17);
          }
          cocos2d::Color3B::Color3B((Color3B *)&local_50,' ','@',' ');
          cVar3 = (**(code **)(*(int *)this_00 + 0x14))();
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*(int *)this_00 + 0x18))();
            if (cVar3 == '\0') {
              ghidra::str::append((std::string *)local_30,"`0- nominal -",0xd);
            }
            else {
              ghidra::str::append((std::string *)local_30,"`^- damaged -",0xd);
              puVar9 = (undefined2 *)
                       cocos2d::Color3B::Color3B((Color3B *)((int)&local_60 + 1),'@','@',' ');
              local_50 = *puVar9;
              local_4e = *(undefined1 *)(puVar9 + 1);
            }
          }
          else {
            ghidra::str::append((std::string *)local_30,"`@- non-functional -",0x14);
            puVar9 = (undefined2 *)cocos2d::Color3B::Color3B(local_63,'@',' ',' ');
            local_50 = *puVar9;
            local_4e = *(undefined1 *)(puVar9 + 1);
          }
          puVar20 = (uint *)((int)local_54 + *(int *)local_58);
          uVar18 = local_1c;
          ppppcVar15 = (char ****)local_30[0];
          if (((*puVar20 == uVar16) &&
              (bVar4 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI), uVar18 = local_1c,
              ppppcVar15 = (char ****)local_30[0], bVar4)) && (puVar20[7] == 0xffffffff)) {
            ppppcVar10 = local_30;
            if (0xf < local_1c) {
              ppppcVar10 = (char ****)local_30[0];
            }
            bVar4 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppcVar10,local_20,pcVar6,unaff_EDI);
            if (((bVar4) &&
                (bVar4 = cocos2d::Color3B::operator!=
                                   ((Color3B *)(puVar20 + 0x16),(Color3B *)&local_50),
                piVar12 = local_54, uVar18 = local_1c, ppppcVar15 = (char ****)local_30[0], !bVar4))
               && ((*(int *)((int)local_54 + *(int *)local_58 + 0x50) == -999 &&
                   (*(char *)((int)local_54 + *(int *)local_58 + 0x5e) == '\0')))) {
              // [seh] local_8 = -1;
              if (0xf < local_1c) {
                pnVar17 = (nothrow_t *)(local_1c + 1);
                if ((nothrow_t *)0xfff < pnVar17) {
                  ppppcVar15 = (char ****)local_30[0][-1];
                  pnVar17 = (nothrow_t *)(local_1c + 0x24);
                  if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppcVar15)))
                  goto LAB_004978bf;
                }
                operator_delete(ppppcVar15,pnVar17);
              }
              local_20 = 0;
              local_1c = 0xf;
              local_30[0] = (char ***)((uint)local_30[0] & 0xffffff00);
              local_54 = piVar12;
              pGVar21 = g_gameData;
              goto LAB_00497851;
            }
          }
          if (0xf < uVar18) {
            pnVar17 = (nothrow_t *)(uVar18 + 1);
            ppppcVar10 = ppppcVar15;
            if ((nothrow_t *)0xfff < pnVar17) {
              ppppcVar10 = (char ****)ppppcVar15[-1];
              pnVar17 = (nothrow_t *)(uVar18 + 0x24);
              if ((char *)0x1f < (char *)((int)ppppcVar15 + (-4 - (int)ppppcVar10))) {
LAB_004978bf:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(ppppcVar10,pnVar17);
          }
          break;
        }
LAB_00497851:
        local_4c = local_4c + 1;
        local_54 = local_54 + 0x18;
      } while (local_4c <
               (uint)(*(int *)(*(int *)(*(int *)(pGVar21 + 0xd0) + 0x40) + 0x40) -
                      *(int *)(*(int *)(*(int *)(pGVar21 + 0xd0) + 0x40) + 0x3c) >> 2));
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar5 = __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


// Ghidra: void __thiscall TradeEngine::populateMechanicArmaments(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateMechanicArmaments(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  char cVar2;
  ListData *pLVar3;
  allocator<ListData> *paVar4;
  int iVar5;
  ListData *this_00;
  GameData *pGVar6;
  ListData *unaff_EDI;
  int iVar7;
  std::string local_1a0 [4];
  undefined4 uStack_19c;
  std::string local_184 [12];
  undefined4 uStack_178;
  Color3B local_14f [3];
  undefined1 *local_14c;
  undefined1 *local_148;
  Color3B local_143 [4];
  Color3B local_13f [3];
  undefined1 *local_13c;
  ListData local_138 [96];
  ListData local_d8 [96];
  ListData local_78 [96];
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bc665;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar3 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x20);
  local_18 = pLVar3;
  if (piVar1 == (int *)0x0) {
    uStack_178 = 0x497b73;
    cocos2d::Color3B::Color3B(local_13f,'@','@',' ');
    local_13c = local_184;
    local_184[0] = (std::string)0x0;
    ghidra::str::assign(local_184,"`$no weapon system",0x12);
    // [seh] local_8 = 0;
    local_1a0[0] = (std::string)0x0;
    ghidra::str::assign(local_1a0,"",0);
    // [seh] local_8 = 0xffffffff;
    paVar4 = (allocator<ListData> *)new ((void *)(local_78)) ListData(0xffffffff);
    // [seh] local_8 = 1;
  }
  else {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if (cVar2 != '\0') {
      iVar7 = 0;
      pGVar6 = g_gameData + 0xd0;
      iVar5 = *(int *)(*(int *)(*(int *)pGVar6 + 0x40) + 0x20);
      if (0.0 < *(float *)(*(int *)(iVar5 + 8) + 0x104)) {
        local_13c = (undefined1 *)0x3c;
        do {
          if (*(int *)(local_13c + iVar5) == 0) {
            uStack_178 = 0x497d33;
            cocos2d::Color3B::Color3B(local_13f,'\0','\0','\0');
            local_148 = local_184;
            strUsingArgs((char *)local_184);
            // [seh] local_8 = 4;
            local_1a0[0] = (std::string)0x0;
            ghidra::str::assign(local_1a0,"",0);
            // [seh] local_8 = 0xffffffff;
            paVar4 = (allocator<ListData> *)new ((void *)(local_78)) ListData(iVar7);
            // [seh] local_8 = 5;
            if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
              std::vector<>::_Emplace_reallocate<ListData>
                        (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar4);
              this_00 = local_78;
            }
            else {
              ghidra::lib::_Default_allocator_traits__construct(paVar4,pLVar3,unaff_EDI);
              this_00 = local_78;
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
            }
          }
          else if (*(int *)(*(int *)(*(int *)(local_13c +
                                             *(int *)(*(int *)(*(int *)pGVar6 + 0x40) + 0x20)) +
                                    0x388) + 0x1b4) == 4) {
            uStack_178 = 0x497e02;
            cocos2d::Color3B::Color3B(local_143,'@','@',0x80);
            local_14c = local_184;
            uStack_19c = 0x497e5c;
            strUsingArgs((char *)local_184);
            // [seh] local_8 = 6;
            local_1a0[0] = (std::string)0x0;
            ghidra::str::assign(local_1a0,"",0);
            // [seh] local_8 = 0xffffffff;
            paVar4 = (allocator<ListData> *)new ((void *)(local_d8)) ListData(iVar7);
            // [seh] local_8 = 7;
            if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
              std::vector<>::_Emplace_reallocate<ListData>
                        (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar4);
              this_00 = local_d8;
            }
            else {
              ghidra::lib::_Default_allocator_traits__construct(paVar4,pLVar3,unaff_EDI);
              this_00 = local_d8;
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
            }
          }
          else {
            uStack_178 = 0x497ee8;
            cocos2d::Color3B::Color3B(local_14f,'@',0x80,'@');
            local_14c = local_184;
            uStack_19c = 0x497f42;
            strUsingArgs((char *)local_184);
            // [seh] local_8 = 8;
            local_1a0[0] = (std::string)0x0;
            ghidra::str::assign(local_1a0,"",0);
            // [seh] local_8 = 0xffffffff;
            paVar4 = (allocator<ListData> *)new ((void *)(local_138)) ListData(iVar7);
            // [seh] local_8 = 9;
            if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
              std::vector<>::_Emplace_reallocate<ListData>
                        (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar4);
            }
            else {
              ghidra::lib::_Default_allocator_traits__construct(paVar4,pLVar3,unaff_EDI);
              *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
            }
            this_00 = local_138;
          }
          iVar7 = iVar7 + 1;
          // [seh] local_8 = 0xffffffff;
          (this_00)->~ListData();
          pGVar6 = g_gameData + 0xd0;
          local_13c = local_13c + 4;
          iVar5 = *(int *)(*(int *)(*(int *)pGVar6 + 0x40) + 0x20);
        } while ((float)iVar7 < *(float *)(*(int *)(iVar5 + 8) + 0x104));
      }
      goto LAB_00497ffb;
    }
    uStack_178 = 0x497c4e;
    cocos2d::Color3B::Color3B(local_13f,'@',' ',' ');
    local_13c = local_184;
    local_184[0] = (std::string)0x0;
    ghidra::str::assign(local_184,"`@weapon system non-functional",0x1e);
    // [seh] local_8 = 2;
    local_1a0[0] = (std::string)0x0;
    ghidra::str::assign(local_1a0,"",0);
    // [seh] local_8 = 0xffffffff;
    paVar4 = (allocator<ListData> *)new ((void *)(local_78)) ListData(0xffffffff);
    // [seh] local_8 = 3;
  }
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar4);
    (local_78)->~ListData();
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar4,pLVar3,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
    (local_78)->~ListData();
  }
LAB_00497ffb:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::populateShips(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateShips(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  ghidra::vector *pvVar2;
  undefined1 uVar3;
  bool bVar4;
  ListData *pLVar5;
  undefined2 *puVar6;
  char *pcVar7;
  allocator<ListData> *paVar8;
  Color3B *this_00;
  char *pcVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  ListData *unaff_EDI;
  std::string local_118 [16];
  undefined4 local_108;
  undefined4 local_104;
  std::string abStack_fc [8];
  undefined4 uStack_f4;
  uchar uVar13;
  Color3B local_be [3];
  Color3B local_bb [3];
  ghidra::vector *local_b8;
  undefined1 *local_b4;
  undefined1 local_ad;
  undefined2 local_ac;
  undefined1 local_aa;
  ListData local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005bc6b6;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar5 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  uVar12 = 0;
  local_b8 = param_1;
  iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
  local_18 = pLVar5;
  if (*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2 != 0) {
    do {
      cocos2d::Color3B::Color3B((Color3B *)&local_ac);
      if (*(int *)(*(int *)(uVar12 * 4 + *(int *)(iVar1 + 0x3c)) + 0x328) != 0) {
        bVar4 = ghidra::lib::_Traits_equal___x28_x29("secondhand",10,(char *)pLVar5,(uint)unaff_EDI);
        if (bVar4) {
          uVar13 = '@';
          this_00 = local_bb;
        }
        else {
          uVar13 = '\0';
          this_00 = local_be;
        }
        puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(this_00,uVar13,'@','\0');
        local_ac = *puVar6;
        local_aa = *(undefined1 *)(puVar6 + 1);
        local_b4 = (undefined1 *)(*(Ship **)(*(int *)(iVar1 + 0x3c) + uVar12 * 4))->getValue();
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        // [seh] local_8 = 0;
        local_ad = ghidra::lib::_Traits_equal___x28_x29("secondhand",10,(char *)pLVar5,(uint)unaff_EDI);
        uStack_f4 = 0x498196;
        pcVar7 = (char *)strUsingArgs((char *)local_48);
        // [seh] local_8._0_1_ = 1;
        pcVar9 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar9 = *(char **)pcVar7;
        }
        ghidra::str::append((std::string *)local_30,pcVar9,*(uint *)(pcVar7 + 0x10));
        // [seh] local_8._0_1_ = 0;
        uVar3 = (undefined1)local_8;
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_34) {
          pnVar11 = (nothrow_t *)(local_34 + 1);
          pvVar10 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_48[0] + -4);
            pnVar11 = (nothrow_t *)(local_34 + 0x24);
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) goto LAB_004982ef;
          }
          operator_delete(pvVar10,pnVar11);
        }
        local_b4 = abStack_fc;
        local_104 = 0x49821c;
        ghidra::str::ctor(abStack_fc,(std::string *)local_30);
        // [seh] local_8._0_1_ = 2;
        local_108 = 0;
        local_104 = 0xf;
        local_118[0] = (std::string)0x0;
        ghidra::str::assign(local_118,"",0);
        // [seh] local_8._0_1_ = 0;
        paVar8 = (allocator<ListData> *)new ((void *)(local_a8)) ListData(uVar12);
        pvVar2 = local_b8;
        // [seh] local_8 = CONCAT31(local_8._1_3_,3);
        if (*(ListData **)(local_b8 + 8) == *(ListData **)(local_b8 + 4)) {
          std::vector<>::_Emplace_reallocate<ListData>
                    (local_b8,*(ListData **)(local_b8 + 4),(ListData *)paVar8);
        }
        else {
          ghidra::lib::_Default_allocator_traits__construct(paVar8,pLVar5,unaff_EDI);
          *(int *)(pvVar2 + 4) = *(int *)(pvVar2 + 4) + 0x60;
        }
        (local_a8)->~ListData();
        // [seh] local_8._0_1_ = 0xff;
        // [seh] local_8._1_3_ = 0xffffff;
        if (0xf < local_1c) {
          pnVar11 = (nothrow_t *)(local_1c + 1);
          pvVar10 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_30[0] + -4);
            pnVar11 = (nothrow_t *)(local_1c + 0x24);
            uVar3 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar10))) {
LAB_004982ef:
              // [seh] local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar10,pnVar11);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) >> 2));
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::getShipSelectedText(TradeEngine *this)
void TradeEngine::getShipSelectedText()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  uint unaff_EDI;
  int iVar7;
  std::string *in_stack_00000004;
  std::string abStack_88 [4];
  undefined4 uStack_84;
  uint uVar8;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bc799;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  if (*(int *)((char *)this + 0xf8) == -1) {
    if (*(char *)(*(int *)(g_gameData + 0xd0) + 0x325) == '\0') {
      ghidra::str::assign
                (in_stack_00000004,
                 "`7You can trade in your current ship for any vessel for sale on the left. Select a vessel to get information about it."
                 ,0x76);
    }
    else {
      ghidra::str::append
                (in_stack_00000004,"\n`%Ship purchased - return to airlock to view your ship",0x37);
    }
  }
  else {
    iVar7 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x398);
    iVar1 = *(int *)(*(int *)(iVar7 + 0x3c) + *(int *)((char *)this + 0xf8) * 4);
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("secondhand",10,local_14,unaff_EDI);
    if (bVar2) {
      uVar8 = 0x1b;
      pcVar4 = "`!FOR SALE - `0SECOND HAND\n";
    }
    else {
      uVar8 = 0x17;
      pcVar4 = "`!FOR SALE - BRAND NEW\n";
    }
    ghidra::str::append(in_stack_00000004,pcVar4,uVar8);
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 1;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 2;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 3;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    ghidra::str::append(in_stack_00000004,"\n",1);
    pcVar4 = (char *)(iVar1 + 0x32c);
    if (0xf < *(uint *)(iVar1 + 0x340)) {
      pcVar4 = *(char **)(iVar1 + 0x32c);
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(iVar1 + 0x33c));
    ghidra::str::append(in_stack_00000004,"\n\n",2);
    (*(Ship **)(g_gameData + 0xd0))->getValue();
    (*(Ship **)(*(int *)(iVar7 + 0x3c) + *(int *)((char *)this + 0xf8) * 4))->getValue();
    ghidra::str::append
              (in_stack_00000004,
               "`$Warning: your existing vessel and all contents and cargo will be sold.\n\n",0x4a);
    ghidra::str::append(in_stack_00000004,"`8- Transaction Information -\n",0x1e);
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 4;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 5;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 6;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 7;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 8;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    ghidra::str::append(in_stack_00000004,"`8- Registration Info -\n",0x18);
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 9;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 10;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    ghidra::str::ctor(abStack_88,(std::string *)(iVar1 + 0x238));
    // [seh] local_8 = 0xb;
    ghidra::any_singleton();
    // [seh] local_8 = local_8 & 0xffffff00;
    NameManager::getLocationForRego();
    // [seh] local_8 = 0xc;
    pcVar3 = (char *)strUsingArgs((char *)local_2c);
    // [seh] local_8._0_1_ = 0xd;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8._0_1_ = 0xc;
    if (0xf < local_18) {
      pnVar6 = (nothrow_t *)(local_18 + 1);
      pvVar5 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_2c[0] + -4);
        pnVar6 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    ghidra::str::append(in_stack_00000004,"`8- Vessel Information -\n",0x19);
    uStack_84 = 0x498a25;
    pcVar3 = (char *)strUsingArgs((char *)local_44);
    // [seh] local_8 = 0xe;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_44);
    // [seh] local_8 = 0xf;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_44);
    // [seh] local_8 = 0x10;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    for (iVar7 = (*(int *)(*(int *)(iVar1 + 0x254) + 0x140) -
                 *(int *)(*(int *)(iVar1 + 0x254) + 0x13c)) / 0x18; iVar7 != 0; iVar7 = iVar7 + -1)
    {
    }
    ghidra::str::append(in_stack_00000004,"`8- Slots -\n",0xc);
    pcVar3 = (char *)strUsingArgs((char *)local_44);
    // [seh] local_8 = 0x11;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_44);
    // [seh] local_8 = 0x12;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_44);
    // [seh] local_8 = 0x13;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
    pcVar3 = (char *)strUsingArgs((char *)local_44);
    // [seh] local_8 = 0x14;
    pcVar4 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar4 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar3 + 0x10));
    if (0xf < local_30) {
      pnVar6 = (nothrow_t *)(local_30 + 1);
      pvVar5 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar6) {
        pvVar5 = *(void **)((int)local_44[0] + -4);
        pnVar6 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar5,pnVar6);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::shipCanBuy(TradeEngine *this)
bool TradeEngine::shipCanBuy()

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((char *)this + 0xf8) != -1) {
    iVar3 = *(int *)(*(int *)(*(Ship **)(g_gameData + 0xd0) + 0x178) + 0x398);
    iVar2 = (*(Ship **)(g_gameData + 0xd0))->getValue();
    fVar1 = *(float *)(iVar3 + 0x48);
    iVar3 = (*(Ship **)(*(int *)(iVar3 + 0x3c) + *(int *)((char *)this + 0xf8) * 4))->getValue();
    iVar3 = iVar3 - (int)(fVar1 * (float)iVar2);
    if ((iVar3 < 0) || (iVar3 <= *(int *)(*(int *)(g_gameData + 0x124) + 0x1c))) {
      return true;
    }
  }
  return false;
}


// Ghidra: void __thiscall TradeEngine::performBuyShip(TradeEngine *this)
void TradeEngine::performBuyShip()

{
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  Ship *pSVar2;
  AnimationFrames **ppAVar3;
  void *pvVar4;
  void *pvVar5;
  ghidra::lib::map_t *this_00;
  bool bVar6;
  FlagManager *pFVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  GameLogic *extraout_ECX;
  GameLogic *extraout_ECX_00;
  GameLogic *this_01;
  SaveHandler *this_02;
  GameData *pGVar11;
  int iVar12;
  std::string *pbVar13;
  size_t sVar14;
  Ship *this_03;
  uint uVar15;
  std::string local_a4 [12];
  undefined4 uStack_98;
  std::string local_8c [8];
  undefined4 uStack_84;
  std::string local_70 [8];
  undefined4 uStack_68;
  int local_48;
  int local_44;
  Ship *local_40;
  ghidra::lib::map_t *local_3c;
  ghidra::lib::map_t *local_38;
  int *local_34;
  int local_30;
  AnimationFrames *local_2c;
  TradeEngine *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  Ship *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bc7f7;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_28 = this;
  bVar6 = shipCanBuy(this);
  if (bVar6) {
    local_40 = (Ship *)&stack0xffffff8c;
    uStack_84 = 0x498eac;
    strUsingArgs(&stack0xffffff8c);
    // [seh] local_8 = 0;
    pFVar7 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar7)->setFlag();
    iVar12 = *(int *)(*(int *)(*(Ship **)(g_gameData + 0xd0) + 0x178) + 0x398);
    local_18 = iVar12;
    (*(Ship **)(g_gameData + 0xd0))->getValue();
    (*(Ship **)(*(int *)(iVar12 + 0x3c) + *(int *)((char *)this + 0xf8) * 4))->getValue();
    ghidra::str::ctor
              (local_70,*(std::string **)(*(int *)(g_gameData + 0xd0) + 0x254));
    (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
    iVar12 = *(int *)(g_gameData + 0xd0);
    pSVar2 = *(Ship **)(*(int *)(local_18 + 0x3c) + *(int *)(local_28 + 0xf8) * 4);
    local_40 = pSVar2;
    local_14 = pSVar2;
    ghidra::str::ctor(local_70,*(std::string **)(pSVar2 + 0x254));
    (*(BankAccount **)(g_gameData + 0x124))->addTransaction();
    uVar15 = 0;
    piVar10 = (int *)(*(int *)(g_gameData + 0xd0) + 0x368);
    pGVar11 = g_gameData;
    this_03 = pSVar2;
    if (*(int *)(*(int *)(g_gameData + 0xd0) + 0x36c) - *piVar10 >> 2 != 0) {
      do {
        ppAVar3 = *(AnimationFrames ***)(pSVar2 + 0x36c);
        ppAVar1 = (AnimationFrames **)(*piVar10 + uVar15 * 4);
        if (*(AnimationFrames ***)(pSVar2 + 0x370) == ppAVar3) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pSVar2 + 0x368),ppAVar3,ppAVar1);
          pGVar11 = g_gameData;
        }
        else {
          *ppAVar3 = *ppAVar1;
          *(int *)(pSVar2 + 0x36c) = *(int *)(pSVar2 + 0x36c) + 4;
        }
        uVar15 = uVar15 + 1;
        piVar10 = (int *)(*(int *)(pGVar11 + 0xd0) + 0x368);
        this_03 = local_14;
      } while (uVar15 < (uint)(*(int *)(*(int *)(pGVar11 + 0xd0) + 0x36c) - *piVar10 >> 2));
    }
    *(undefined4 *)(*(int *)(pGVar11 + 0xd0) + 0x36c) =
         *(undefined4 *)(*(int *)(pGVar11 + 0xd0) + 0x368);
    (this_03)->setNoFog();
    this_01 = extraout_ECX;
    if (g_gameLogic[0x11a] == (byte)0x0) {
      local_34 = *(int **)(iVar12 + 0x348);
      local_38 = (ghidra::lib::map_t *)(iVar12 + 0x348);
      local_24 = (int *)*local_34;
      this_03 = local_14;
      if (local_24 != local_34) {
        local_3c = (ghidra::lib::map_t *)(local_14 + 0x348);
        do {
          this_00 = local_38;
          local_48 = local_24[4];
          local_44 = local_24[5];
          piVar10 = ghidra::lib::map__operator_x5b_x5d(local_3c,&local_48);
          iVar12 = *piVar10;
          piVar8 = ghidra::lib::map__operator_x5b_x5d(this_00,&local_48);
          piVar10 = (int *)(iVar12 + 4);
          local_20 = 8;
          piVar8 = (int *)*piVar8;
          iVar12 = (int)piVar8 - iVar12;
          local_30 = iVar12;
          do {
            local_1c = 8;
            do {
              uVar15 = 0;
              *piVar10 = piVar10[-1];
              if (*(int *)(iVar12 + (int)piVar10) - *piVar8 >> 2 != 0) {
                do {
                  local_2c = operator_new(0x14);
                  *(undefined4 *)local_2c = 0;
                  *(undefined4 *)(local_2c + 4) = 0;
                  *(undefined4 *)(local_2c + 8) = 0;
                  *(undefined4 *)(local_2c + 0xc) = 0;
                  *(undefined4 *)(local_2c + 0x10) = 0;
                  puVar9 = *(undefined4 **)(*piVar8 + uVar15 * 4);
                  *(undefined4 *)local_2c = *puVar9;
                  *(undefined4 *)(local_2c + 4) = puVar9[1];
                  *(undefined4 *)(local_2c + 8) =
                       *(undefined4 *)(*(int *)(*piVar8 + uVar15 * 4) + 8);
                  *(undefined4 *)(local_2c + 0xc) =
                       *(undefined4 *)(*(int *)(*piVar8 + uVar15 * 4) + 0xc);
                  *(undefined4 *)(local_2c + 0x10) =
                       *(undefined4 *)(*(int *)(*piVar8 + uVar15 * 4) + 0x10);
                  ppAVar1 = (AnimationFrames **)*piVar10;
                  if ((AnimationFrames **)piVar10[1] == ppAVar1) {
                    ghidra::lib::vector___Emplace_reallocate
                              ((ghidra::vector *)(piVar10 + -1),ppAVar1,&local_2c);
                  }
                  else {
                    *ppAVar1 = local_2c;
                    *piVar10 = *piVar10 + 4;
                  }
                  uVar15 = uVar15 + 1;
                  iVar12 = local_30;
                } while (uVar15 < (uint)(piVar8[1] - *piVar8 >> 2));
              }
              piVar10 = piVar10 + 3;
              piVar8 = piVar8 + 3;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            local_20 = local_20 + -1;
          } while (local_20 != 0);
          ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b
                    ((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_24);
          this_01 = extraout_ECX_00;
          this_03 = local_14;
        } while (local_24 != local_34);
      }
    }
    (this_01)->switchPlayerShipTo(this_03);
    iVar12 = local_18;
    *(undefined1 *)(*(int *)(this_03 + 0x40) + 0x34) = 1;
    *(undefined4 *)(this_03 + 0x378) = 0;
    *(undefined2 *)(this_03 + 0x280) = 0;
    *(undefined4 *)(this_03 + 100) = 1;
    *(undefined4 *)(local_28 + 0xf8) = 0xffffffff;
    this_03[0x325] = (byte)0x1;
    pvVar4 = *(void **)(local_18 + 0x40);
    puVar9 = (undefined4 *)ghidra::lib::remove___x28_x29();
    pvVar5 = (void *)*puVar9;
    if (pvVar5 != pvVar4) {
      sVar14 = *(int *)(iVar12 + 0x40) - (int)pvVar4;
      uStack_68 = 0x4991e5;
      memmove(pvVar5,pvVar4,sVar14);
      *(size_t *)(local_18 + 0x40) = sVar14 + (int)pvVar5;
    }
    debugPrint("WORLD","Player bought new ship.");
    pbVar13 = (std::string *)(local_14 + 8);
    if ((std::string *)(g_gameData + 0x10c) != pbVar13) {
      if (0xf < *(uint *)(local_14 + 0x1c)) {
        pbVar13 = *(std::string **)pbVar13;
      }
      ghidra::str::assign
                ((std::string *)(g_gameData + 0x10c),(char *)pbVar13,*(uint *)(local_14 + 0x18));
    }
    local_40 = (Ship *)local_70;
    local_70[0] = (std::string)0x0;
    ghidra::str::assign(local_70,"ships_sold",10);
    // [seh] local_8 = 1;
    if (Singleton<Stats>::instance == (Stats *)0x0) {
      local_3c = operator_new(0x58);
      // [seh] local_8 = CONCAT31(local_8._1_3_,2);
      Singleton<Stats>::instance = (Stats *)new ((void *)((Stats *)local_3c)) Stats();
    }
    // [seh] local_8 = 0xffffffff;
    (Singleton<Stats>::instance)->addStat();
    local_40 = (Ship *)&stack0xffffff8c;
    ghidra::str::assign((std::string *)&stack0xffffff8c,"",0);
    local_3c = (ghidra::lib::map_t *)local_8c;
    // [seh] local_8 = 3;
    local_8c[0] = (std::string)0x0;
    uStack_98 = 0x4992e3;
    ghidra::str::assign(local_8c,"ships_sold",10);
    // [seh] local_8 = CONCAT31(local_8._1_3_,4);
    local_a4[0] = (std::string)0x0;
    ghidra::str::assign(local_a4,"commerce",8);
    // [seh] local_8 = 0xffffffff;
    Analytics::logEvent();
    local_40 = (Ship *)&stack0xffffff8c;
    uStack_84 = 0x499347;
    strUsingArgs(&stack0xffffff8c);
    // [seh] local_8 = 5;
    pFVar7 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pFVar7)->setFlag();
    if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
      ghidra::any_singleton();
      (this_02)->saveGame();
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall TradeEngine::populatePassengers(TradeEngine *this,vector<> *param_1)
void TradeEngine::populatePassengers(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  ListData *pLVar4;
  FlagManager *pFVar5;
  char *pcVar6;
  allocator<ListData> *paVar7;
  char *pcVar8;
  void *pvVar9;
  int iVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  ListData *unaff_EDI;
  std::string local_168 [16];
  undefined4 local_158;
  uint local_14c;
  uint local_140;
  Color3B local_113 [3];
  undefined1 *local_110;
  undefined4 local_10c;
  ListData local_108 [96];
  ListData local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005bc877;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar4 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
  local_18 = pLVar4;
  if (3 < (uint)(*(int *)(iVar1 + 0x40c) - *(int *)(iVar1 + 0x408))) {
    local_10c = (SpaceStation *)&local_140;
    local_140 = local_140 & 0xffffff00;
    local_14c = 0x49941f;
    ghidra::str::assign((std::string *)&local_140,"no_procgen_passengers",0x15);
    // [seh] local_8 = 0;
    pFVar5 = ghidra::any_singleton();
    // [seh] local_8._0_1_ = 0xff;
    // [seh] local_8._1_3_ = 0xffffff;
    bVar3 = (pFVar5)->flagSet();
    if (!bVar3) {
      uVar12 = 0;
      iVar10 = *(int *)(iVar1 + 0x408);
      if (*(int *)(iVar1 + 0x40c) - iVar10 >> 2 != 0) {
        do {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          // [seh] local_8 = 3;
          ghidra::str::ctor
                    ((std::string *)&local_140,
                     (std::string *)(*(int *)(*(int *)(iVar10 + uVar12 * 4) + 0xc) + 0x18));
          local_10c = GameData::getSpaceStation();
          pcVar6 = (char *)strUsingArgs((char *)local_48);
          // [seh] local_8._0_1_ = 4;
          pcVar8 = pcVar6;
          if (0xf < *(uint *)(pcVar6 + 0x14)) {
            pcVar8 = *(char **)pcVar6;
          }
          ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar6 + 0x10));
          // [seh] local_8._0_1_ = 3;
          uVar2 = (undefined1)local_8;
          // [seh] local_8._0_1_ = 3;
          if (0xf < local_34) {
            pnVar11 = (nothrow_t *)(local_34 + 1);
            pvVar9 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_48[0] + -4);
              pnVar11 = (nothrow_t *)(local_34 + 0x24);
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_00499704;
            }
            operator_delete(pvVar9,pnVar11);
          }
          pcVar6 = (char *)strUsingArgs((char *)local_48);
          // [seh] local_8._0_1_ = 5;
          pcVar8 = pcVar6;
          if (0xf < *(uint *)(pcVar6 + 0x14)) {
            pcVar8 = *(char **)pcVar6;
          }
          ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar6 + 0x10));
          // [seh] local_8._0_1_ = 3;
          if (0xf < local_34) {
            pnVar11 = (nothrow_t *)(local_34 + 1);
            pvVar9 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_48[0] + -4);
              pnVar11 = (nothrow_t *)(local_34 + 0x24);
              uVar2 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_00499704;
            }
            operator_delete(pvVar9,pnVar11);
          }
          pcVar6 = (char *)strUsingArgs((char *)local_48);
          // [seh] local_8._0_1_ = 6;
          pcVar8 = pcVar6;
          if (0xf < *(uint *)(pcVar6 + 0x14)) {
            pcVar8 = *(char **)pcVar6;
          }
          ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar6 + 0x10));
          // [seh] local_8._0_1_ = 3;
          if (0xf < local_34) {
            pnVar11 = (nothrow_t *)(local_34 + 1);
            pvVar9 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_48[0] + -4);
              pnVar11 = (nothrow_t *)(local_34 + 0x24);
              uVar2 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_00499704;
            }
            operator_delete(pvVar9,pnVar11);
          }
          local_140 = 0x499625;
          cocos2d::Color3B::Color3B(local_113,'@','@',0x80);
          local_10c = (SpaceStation *)&local_14c;
          ghidra::str::ctor
                    ((std::string *)&local_14c,(std::string *)local_30);
          // [seh] local_8._0_1_ = 7;
          local_158 = 0;
          local_168[0] = (std::string)0x0;
          ghidra::str::assign(local_168,"",0);
          // [seh] local_8._0_1_ = 3;
          paVar7 = (allocator<ListData> *)new ((void *)(local_a8)) ListData(uVar12);
          // [seh] local_8 = CONCAT31(local_8._1_3_,8);
          if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
            std::vector<>::_Emplace_reallocate<ListData>
                      (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar7);
          }
          else {
            ghidra::lib::_Default_allocator_traits__construct(paVar7,pLVar4,unaff_EDI);
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
          }
          (local_a8)->~ListData();
          // [seh] local_8._0_1_ = 0xff;
          // [seh] local_8._1_3_ = 0xffffff;
          if (0xf < local_1c) {
            pnVar11 = (nothrow_t *)(local_1c + 1);
            pvVar9 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_30[0] + -4);
              pnVar11 = (nothrow_t *)(local_1c + 0x24);
              uVar2 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
LAB_00499704:
                // [seh] local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar9,pnVar11);
          }
          uVar12 = uVar12 + 1;
          iVar10 = *(int *)(iVar1 + 0x408);
        } while (uVar12 < (uint)(*(int *)(iVar1 + 0x40c) - iVar10 >> 2));
      }
      goto LAB_004997ca;
    }
  }
  local_140 = 0x499723;
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_10c + 1),'\0','\0','\0');
  local_110 = (undefined1 *)&local_14c;
  local_14c = local_14c & 0xffffff00;
  local_158 = 0x49975a;
  ghidra::str::assign((std::string *)&local_14c,"`8[no passengers here]",0x16);
  // [seh] local_8 = 1;
  local_158 = 0;
  local_168[0] = (std::string)0x0;
  ghidra::str::assign(local_168,"",0);
  // [seh] local_8 = 0xffffffff;
  paVar7 = (allocator<ListData> *)new ((void *)(local_108)) ListData(0xffffffff);
  // [seh] local_8._0_1_ = 2;
  // [seh] local_8._1_3_ = 0;
  if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
    std::vector<>::_Emplace_reallocate<ListData>
              (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar7);
  }
  else {
    ghidra::lib::_Default_allocator_traits__construct(paVar7,pLVar4,unaff_EDI);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
  }
  (local_108)->~ListData();
LAB_004997ca:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkPassengers(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkPassengers(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined1 uVar2;
  std::string *pbVar3;
  FlagManager *pFVar4;
  char *pcVar5;
  Color3B *pCVar6;
  int iVar7;
  char *pcVar8;
  void *pvVar9;
  int iVar10;
  nothrow_t *pnVar11;
  uint *puVar12;
  std::string *unaff_EDI;
  uint uVar13;
  SpaceStation local_80 [8];
  undefined4 uStack_78;
  Color3B local_57 [3];
  int local_54;
  ghidra::vector *local_50;
  SpaceStation *local_4c;
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  std::string *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005bc8c8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pbVar3 = (std::string *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_50 = param_1;
  iVar7 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x178);
  local_54 = iVar7;
  local_18 = pbVar3;
  if (3 < (uint)(*(int *)(iVar7 + 0x40c) - *(int *)(iVar7 + 0x408))) {
    local_4c = local_80;
    local_80[0] = (byte)0x0;
    ghidra::str::assign((std::string *)local_80,"no_procgen_passengers",0x15);
    // [seh] local_8 = 0;
    pFVar4 = ghidra::any_singleton();
    // [seh] local_8._0_1_ = 0xff;
    // [seh] local_8._1_3_ = 0xffffff;
    bVar1 = (pFVar4)->flagSet();
    if (!bVar1) {
      iVar10 = *(int *)(iVar7 + 0x408);
      iVar7 = *(int *)(iVar7 + 0x40c) - iVar10 >> 2;
      if (((*(int *)(param_1 + 4) - *(int *)param_1) / 0x60 == iVar7) && (uVar13 = 0, iVar7 != 0)) {
        iVar7 = 0;
        do {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          // [seh] local_8 = 1;
          ghidra::str::ctor
                    ((std::string *)local_80,
                     (std::string *)(*(int *)(*(int *)(iVar10 + uVar13 * 4) + 0xc) + 0x18));
          local_4c = GameData::getSpaceStation();
          uStack_78 = 0x499936;
          pcVar5 = (char *)strUsingArgs((char *)local_48);
          // [seh] local_8._0_1_ = 2;
          pcVar8 = pcVar5;
          if (0xf < *(uint *)(pcVar5 + 0x14)) {
            pcVar8 = *(char **)pcVar5;
          }
          ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar5 + 0x10));
          // [seh] local_8._0_1_ = 1;
          uVar2 = (undefined1)local_8;
          // [seh] local_8._0_1_ = 1;
          if (0xf < local_34) {
            pnVar11 = (nothrow_t *)(local_34 + 1);
            pvVar9 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_48[0] + -4);
              pnVar11 = (nothrow_t *)(local_34 + 0x24);
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_00499b7c;
            }
            operator_delete(pvVar9,pnVar11);
          }
          uStack_78 = 0x4999a8;
          pcVar5 = (char *)strUsingArgs((char *)local_48);
          // [seh] local_8._0_1_ = 3;
          pcVar8 = pcVar5;
          if (0xf < *(uint *)(pcVar5 + 0x14)) {
            pcVar8 = *(char **)pcVar5;
          }
          ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar5 + 0x10));
          // [seh] local_8._0_1_ = 1;
          if (0xf < local_34) {
            pnVar11 = (nothrow_t *)(local_34 + 1);
            pvVar9 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_48[0] + -4);
              pnVar11 = (nothrow_t *)(local_34 + 0x24);
              uVar2 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_00499b7c;
            }
            operator_delete(pvVar9,pnVar11);
          }
          uStack_78 = 0x499a1e;
          pcVar5 = (char *)strUsingArgs((char *)local_48);
          // [seh] local_8._0_1_ = 4;
          pcVar8 = pcVar5;
          if (0xf < *(uint *)(pcVar5 + 0x14)) {
            pcVar8 = *(char **)pcVar5;
          }
          ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar5 + 0x10));
          // [seh] local_8._0_1_ = 1;
          if (0xf < local_34) {
            pnVar11 = (nothrow_t *)(local_34 + 1);
            pvVar9 = local_48[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_48[0] + -4);
              pnVar11 = (nothrow_t *)(local_34 + 0x24);
              uVar2 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_00499b7c;
            }
            operator_delete(pvVar9,pnVar11);
          }
          puVar12 = (uint *)(*(int *)local_50 + iVar7);
          if ((((*puVar12 != uVar13) ||
               (bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pbVar3,(uint)unaff_EDI), !bVar1)) ||
              (puVar12[7] != 0xffffffff)) || (bVar1 = std::operator!=<>(pbVar3,unaff_EDI), bVar1)) {
LAB_00499b56:
            if (0xf < local_1c) {
              pnVar11 = (nothrow_t *)(local_1c + 1);
              pvVar9 = local_30[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar9 = *(void **)((int)local_30[0] + -4);
                pnVar11 = (nothrow_t *)(local_1c + 0x24);
                uVar2 = (undefined1)local_8;
                if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
LAB_00499b7c:
                  // [seh] local_8._0_1_ = uVar2;
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar9,pnVar11);
            }
            break;
          }
          uStack_78 = 0x499ad7;
          pCVar6 = (Color3B *)cocos2d::Color3B::Color3B(local_57,'@','@',0x80);
          bVar1 = cocos2d::Color3B::operator!=((Color3B *)(puVar12 + 0x16),pCVar6);
          if (((bVar1) || (*(int *)(iVar7 + 0x50 + *(int *)local_50) != -999)) ||
             (*(char *)(iVar7 + 0x5e + *(int *)local_50) != '\0')) goto LAB_00499b56;
          // [seh] local_8._0_1_ = 0xff;
          // [seh] local_8._1_3_ = 0xffffff;
          if (0xf < local_1c) {
            pnVar11 = (nothrow_t *)(local_1c + 1);
            pvVar9 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pvVar9 = *(void **)((int)local_30[0] + -4);
              pnVar11 = (nothrow_t *)(local_1c + 0x24);
              uVar2 = (undefined1)local_8;
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) goto LAB_00499b7c;
            }
            operator_delete(pvVar9,pnVar11);
          }
          uVar13 = uVar13 + 1;
          iVar7 = iVar7 + 0x60;
          iVar10 = *(int *)(local_54 + 0x408);
        } while (uVar13 < (uint)(*(int *)(local_54 + 0x40c) - iVar10 >> 2));
      }
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar2 = __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


// Ghidra: void __thiscall TradeEngine::getPassengerInfo(TradeEngine *this)
void TradeEngine::getPassengerInfo()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  bool bVar2;
  SpaceStation *pSVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  std::string *in_stack_00000004;
  std::string abStack_64 [8];
  undefined4 uStack_5c;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bc951;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  if (*(int *)((char *)this + 0xcc) == 4) {
    bVar2 = ((GameLogic *)this)->hasPassenger();
    if (bVar2) {
      ghidra::str::append(in_stack_00000004,"`!Current passenger:\n",0x15);
      if (*(int *)(g_gameData + 0x128) == 0) {
        ghidra::str::append
                  (in_stack_00000004,"`!*SPECIAL* `%(not booked through AutoTravel)\n",0x2e);
        goto LAB_0049a15a;
      }
      ghidra::str::ctor
                (abStack_64,*(std::string **)(*(int *)(g_gameData + 0x128) + 0xc));
      GameData::getSpaceStation();
      ghidra::str::ctor
                (abStack_64,(std::string *)(*(int *)(*(int *)(g_gameData + 0x128) + 0xc) + 0x18))
      ;
      pSVar3 = GameData::getSpaceStation();
      uStack_5c = 0x499ca0;
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 1;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      uStack_5c = 0x499d13;
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 2;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      uStack_5c = 0x499d86;
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 3;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (*(int *)(pSVar3 + 0x24) == *(int *)(g_gameData + 0xd8)) {
        ghidra::str::append(in_stack_00000004,"`%Sector: `#[this sector]\n",0x1a);
      }
      else {
        uStack_5c = 0x499e2e;
        pcVar4 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 4;
        pcVar5 = pcVar4;
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar5 = *(char **)pcVar4;
        }
        ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar7 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar7 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar7);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      }
      uStack_5c = 0x499eb5;
      pcVar5 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 5;
      uVar1 = *(uint *)(pcVar5 + 0x14);
    }
    else {
      if (*(int *)((char *)this + 0xd8) == -1) {
        ghidra::str::append
                  (in_stack_00000004,
                   "Use this screen to take passengers aboard your ship. \n\nYour ship can only take one passenger at once so make sure their destination is achievable for you. Passengers automatically get off and don\'t pay you if you take too long.\n\n"
                   ,0xe5);
        goto LAB_0049a15a;
      }
      ghidra::str::ctor
                (abStack_64,
                 (std::string *)
                 (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x178) + 0x408)
                                   + *(int *)((char *)this + 0xd8) * 4) + 0xc) + 0x18));
      pSVar3 = GameData::getSpaceStation();
      uStack_5c = 0x499fa1;
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 6;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      uStack_5c = 0x49a014;
      pcVar4 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 7;
      pcVar5 = pcVar4;
      if (0xf < *(uint *)(pcVar4 + 0x14)) {
        pcVar5 = *(char **)pcVar4;
      }
      ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar7 = (nothrow_t *)(local_18 + 1);
        pvVar6 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar7) {
          pvVar6 = *(void **)((int)local_2c[0] + -4);
          pnVar7 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar6,pnVar7);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      if (*(int *)(pSVar3 + 0x24) == *(int *)(g_gameData + 0xd8)) {
        ghidra::str::append(in_stack_00000004,"`%Sector: `#[this sector]\n",0x1a);
      }
      else {
        uStack_5c = 0x49a0b9;
        pcVar4 = (char *)strUsingArgs((char *)local_2c);
        // [seh] local_8 = 8;
        pcVar5 = pcVar4;
        if (0xf < *(uint *)(pcVar4 + 0x14)) {
          pcVar5 = *(char **)pcVar4;
        }
        ghidra::str::append(in_stack_00000004,pcVar5,*(uint *)(pcVar4 + 0x10));
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
          pnVar7 = (nothrow_t *)(local_18 + 1);
          pvVar6 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar7) {
            pvVar6 = *(void **)((int)local_2c[0] + -4);
            pnVar7 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar6,pnVar7);
        }
      }
      uStack_5c = 0x49a135;
      pcVar5 = (char *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 9;
      uVar1 = *(uint *)(pcVar5 + 0x14);
    }
    pcVar4 = pcVar5;
    if (0xf < uVar1) {
      pcVar4 = *(char **)pcVar5;
    }
    ghidra::str::append(in_stack_00000004,pcVar4,*(uint *)(pcVar5 + 0x10));
    if (0xf < local_18) {
      pnVar7 = (nothrow_t *)(local_18 + 1);
      pvVar6 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar7) {
        pvVar6 = *(void **)((int)local_2c[0] + -4);
        pnVar7 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar6,pnVar7);
    }
  }
LAB_0049a15a:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::getCargoViewText(TradeEngine *this)
void TradeEngine::getCargoViewText()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  CargoHold *this_00;
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  Good *pGVar5;
  Good *pGVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  GameData *extraout_ECX;
  GameData *extraout_ECX_00;
  GameData *extraout_ECX_01;
  GameData *this_01;
  void *pvVar11;
  nothrow_t *pnVar12;
  int iVar13;
  CargoHold *pCVar14;
  bool bVar15;
  std::string *in_stack_00000004;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bca19;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  puVar2 = (undefined4 *)(*(int *)(g_gameData + 0xd0) + 8);
  if (0xf < *(uint *)(*(int *)(g_gameData + 0xd0) + 0x1c)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  pcVar3 = (char *)strUsingArgs((char *)local_2c,"`!%s\n`%%Cargo Status\n\n",puVar2,local_14);
  // [seh] local_8 = 1;
  pcVar7 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar7 = *(char **)pcVar3;
  }
  ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  local_1c = 0;
  iVar8 = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar13 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  piVar10 = (int *)(iVar13 + 0xc);
  iVar9 = 0;
  do {
    if ((iVar8 < 0) || ((iVar4 = *(int *)(iVar13 + 8), 0 < iVar4 && (iVar4 <= iVar8)))) {
      bVar15 = false;
    }
    else {
      bVar15 = *piVar10 != 0;
    }
    iVar4 = iVar9 + 1;
    if (!bVar15) {
      iVar4 = iVar9;
    }
    iVar8 = iVar8 + 1;
    piVar10 = piVar10 + 1;
    iVar9 = iVar4;
  } while (iVar8 < 0xe);
  pcVar3 = (char *)strUsingArgs((char *)local_2c,"`7Pods   : `%%%d/%d\n",iVar4,
                                *(undefined4 *)
                                 (*(int *)(*(int *)(g_gameData + 0xd0) + 0x254) + 0xe4));
  // [seh] local_8 = 2;
  pcVar7 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar7 = *(char **)pcVar3;
  }
  ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  iVar9 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar13 = 7;
  piVar10 = (int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0x10);
  do {
    iVar8 = iVar9 + 0x14;
    if (piVar10[-1] == 0) {
      iVar8 = iVar9;
    }
    iVar9 = iVar8 + 0x14;
    if (*piVar10 == 0) {
      iVar9 = iVar8;
    }
    iVar13 = iVar13 + -1;
    piVar10 = piVar10 + 2;
  } while (iVar13 != 0);
  pcVar3 = (char *)strUsingArgs((char *)local_2c,"`7Solid  : `%%%d units\n",iVar9);
  // [seh] local_8 = 3;
  pcVar7 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar7 = *(char **)pcVar3;
  }
  ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  iVar9 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar13 = 0xe;
  piVar10 = (int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc);
  do {
    if ((*piVar10 != 0) && (*(char *)(*piVar10 + 1) != '\0')) {
      iVar9 = iVar9 + 0x14;
    }
    piVar10 = piVar10 + 1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  pcVar3 = (char *)strUsingArgs((char *)local_2c,"`7Temp   : `%%%d units\n",iVar9);
  // [seh] local_8 = 4;
  pcVar7 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar7 = *(char **)pcVar3;
  }
  ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  iVar9 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar13 = 0xe;
  piVar10 = (int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc);
  do {
    if ((*piVar10 != 0) && (*(char *)(*piVar10 + 2) != '\0')) {
      iVar9 = iVar9 + 0x14;
    }
    piVar10 = piVar10 + 1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  pcVar3 = (char *)strUsingArgs((char *)local_2c,"`7Shield : `%%%d units\n",iVar9);
  // [seh] local_8 = 5;
  pcVar7 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar7 = *(char **)pcVar3;
  }
  ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  local_1c = 0;
  iVar9 = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  this_00 = *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8);
  pCVar14 = this_00 + 0xc;
  iVar13 = 0;
  do {
    if ((iVar9 < 0) || ((0 < *(int *)(this_00 + 8) && (*(int *)(this_00 + 8) <= iVar9)))) {
      bVar15 = false;
    }
    else {
      bVar15 = *(int *)pCVar14 != 0;
    }
    iVar8 = iVar13 + 0x14;
    if (!bVar15) {
      iVar8 = iVar13;
    }
    iVar9 = iVar9 + 1;
    pCVar14 = pCVar14 + 4;
    iVar13 = iVar8;
  } while (iVar9 < 0xe);
  iVar13 = (this_00)->totalUnitsFree();
  iVar9 = (this_00)->totalUnitsFree();
  pcVar3 = (char *)strUsingArgs((char *)local_2c,"`7Cargo  : `%c%d`%%/%d units\n",
                                0x38 - (uint)(iVar9 != 0),iVar13,iVar8);
  // [seh] local_8 = 6;
  pcVar7 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar7 = *(char **)pcVar3;
  }
  ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar12 = (nothrow_t *)(local_18 + 1);
    pvVar11 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_2c[0] + -4);
      pnVar12 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  iVar13 = (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8))->totalBaseValue();
  pcVar3 = (char *)strUsingArgs((char *)local_44,"`7Value  : `%c%dc\n",0x38 - (uint)(iVar13 != 0),
                                iVar13);
  // [seh] local_8 = 7;
  pcVar7 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar7 = *(char **)pcVar3;
  }
  ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    pnVar12 = (nothrow_t *)(local_30 + 1);
    pvVar11 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_44[0] + -4);
      pnVar12 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (*(int *)((char *)this + 0xf0) != -1) {
    iVar13 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x1f8) + 0xc +
                     *(int *)((char *)this + 0xf0) * 4);
    ghidra::str::append(in_stack_00000004,"\n\n",2);
    pcVar3 = (char *)strUsingArgs((char *)local_44,"`%%Pod #%d\n\n",*(int *)((char *)this + 0xf0) + 1);
    // [seh] local_8 = 8;
    pcVar7 = pcVar3;
    if (0xf < *(uint *)(pcVar3 + 0x14)) {
      pcVar7 = *(char **)pcVar3;
    }
    ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
    // [seh] local_8 = local_8 & 0xffffff00;
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    if (iVar13 == 0) {
      pcVar7 = (char *)strUsingArgs((char *)local_44,"`7Type : `8none\n");
      // [seh] local_8 = 0x10;
      uVar1 = *(uint *)(pcVar7 + 0x14);
    }
    else {
      puVar2 = (undefined4 *)
               CargoHold::describePod
                         (*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),(int)local_2c,
                          SUB41(*(undefined4 *)((char *)this + 0xf0),0));
      // [seh] local_8 = 9;
      if (0xf < (uint)puVar2[5]) {
        puVar2 = (undefined4 *)*puVar2;
      }
      pcVar3 = (char *)strUsingArgs((char *)local_44,"`7Type : %s\n",puVar2);
      // [seh] local_8._0_1_ = 10;
      pcVar7 = pcVar3;
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar7 = *(char **)pcVar3;
      }
      ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
      // [seh] local_8._0_1_ = 9;
      this_01 = extraout_ECX;
      if (0xf < local_30) {
        pnVar12 = (nothrow_t *)(local_30 + 1);
        pvVar11 = local_44[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_44[0] + -4);
          pnVar12 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
        this_01 = extraout_ECX_00;
      }
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
        this_01 = extraout_ECX_01;
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      pGVar5 = (this_01)->getGood(*(int *)(iVar13 + 4));
      if ((*(int *)(iVar13 + 8) < 1) || (pGVar5 == (Good *)0x0)) {
        pcVar3 = (char *)strUsingArgs((char *)local_44,"`7Good : `8n/a\n");
        // [seh] local_8 = 0xe;
        pcVar7 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar7 = *(char **)pcVar3;
        }
        ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          pnVar12 = (nothrow_t *)(local_30 + 1);
          pvVar11 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar11 = *(void **)((int)local_44[0] + -4);
            pnVar12 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar12);
        }
        pcVar7 = (char *)strUsingArgs((char *)local_44,"`7Amt. : `8n/a\n");
        // [seh] local_8 = 0xf;
        uVar1 = *(uint *)(pcVar7 + 0x14);
      }
      else {
        pGVar6 = pGVar5 + 4;
        if (0xf < *(uint *)(pGVar5 + 0x18)) {
          pGVar6 = *(Good **)pGVar6;
        }
        pcVar3 = (char *)strUsingArgs((char *)local_44,"`7Good : `%%%s\n",pGVar6);
        // [seh] local_8 = 0xb;
        pcVar7 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar7 = *(char **)pcVar3;
        }
        ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          pnVar12 = (nothrow_t *)(local_30 + 1);
          pvVar11 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar11 = *(void **)((int)local_44[0] + -4);
            pnVar12 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar12);
        }
        pcVar3 = (char *)strUsingArgs((char *)local_44,"`7Amt. : `%%%d/%d\n",
                                      *(undefined4 *)(iVar13 + 8),0x14);
        // [seh] local_8 = 0xc;
        pcVar7 = pcVar3;
        if (0xf < *(uint *)(pcVar3 + 0x14)) {
          pcVar7 = *(char **)pcVar3;
        }
        ghidra::str::append(in_stack_00000004,pcVar7,*(uint *)(pcVar3 + 0x10));
        // [seh] local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          pnVar12 = (nothrow_t *)(local_30 + 1);
          pvVar11 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar11 = *(void **)((int)local_44[0] + -4);
            pnVar12 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar12);
        }
        pcVar7 = (char *)strUsingArgs((char *)local_44,"`7Value: `%%Apr. `$%dc",
                                      *(int *)(pGVar5 + 0x58) * *(int *)(iVar13 + 8));
        // [seh] local_8 = 0xd;
        uVar1 = *(uint *)(pcVar7 + 0x14);
      }
    }
    pcVar3 = pcVar7;
    if (0xf < uVar1) {
      pcVar3 = *(char **)pcVar7;
    }
    ghidra::str::append(in_stack_00000004,pcVar3,*(uint *)(pcVar7 + 0x10));
    if (0xf < local_30) {
      pnVar12 = (nothrow_t *)(local_30 + 1);
      pvVar11 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar12) {
        pvVar11 = *(void **)((int)local_44[0] + -4);
        pnVar12 = (nothrow_t *)(local_30 + 0x24);
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar11,pnVar12);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TradeEngine::populateBountyItems(TradeEngine *this,vector<> *param_1)
void TradeEngine::populateBountyItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 uVar1;
  ListData *pLVar2;
  int iVar3;
  allocator<ListData> *paVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  ListData *unaff_EDI;
  uint uVar11;
  std::string local_168 [16];
  undefined4 local_158;
  std::string local_14c [12];
  undefined4 uStack_140;
  Color3B local_117 [3];
  undefined1 *local_114;
  undefined1 *local_110;
  undefined4 local_10c;
  ListData local_108 [96];
  ListData local_a8 [96];
  void *local_48 [5];
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  ListData *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005bca8c;
  // [seh] local_10 = ExceptionList;
  // [cookie] pLVar2 = (ListData *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_10c = *(int *)(g_gameData + 0xd8);
  iVar7 = *(int *)(local_10c + 0x11c);
  iVar3 = *(int *)(local_10c + 0x120) - iVar7 >> 2;
  local_18 = pLVar2;
  if (iVar3 == 0) {
    uStack_140 = 0x49ab42;
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_10c + 1),'\0','\0','\0');
    local_110 = local_14c;
    local_14c[0] = (std::string)0x0;
    local_158 = 0x49ab79;
    ghidra::str::assign(local_14c,"`8[no bounties]",0xf);
    // [seh] local_8 = 0;
    local_158 = 0;
    local_168[0] = (std::string)0x0;
    ghidra::str::assign(local_168,"",0);
    // [seh] local_8 = 0xffffffff;
    paVar4 = (allocator<ListData> *)new ((void *)(local_a8)) ListData(0xffffffff);
    // [seh] local_8._0_1_ = 1;
    // [seh] local_8._1_3_ = 0;
    if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
      std::vector<>::_Emplace_reallocate<ListData>
                (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar4);
    }
    else {
      ghidra::lib::_Default_allocator_traits__construct(paVar4,pLVar2,unaff_EDI);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
    }
    (local_a8)->~ListData();
  }
  else {
    uVar11 = 0;
    if (iVar3 != 0) {
      do {
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        // [seh] local_8 = 2;
        puVar5 = *(undefined4 **)(g_gameData + 0x3c);
        if (puVar5 != *(undefined4 **)(g_gameData + 0x40)) {
          do {
            if (*(int *)*puVar5 == *(int *)(*(int *)(*(int *)(iVar7 + uVar11 * 4) + 0x4c) + 0x18))
            break;
            puVar5 = puVar5 + 1;
          } while (puVar5 != *(undefined4 **)(g_gameData + 0x40));
        }
        pcVar6 = (char *)strUsingArgs((char *)local_48);
        // [seh] local_8._0_1_ = 3;
        pcVar8 = pcVar6;
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar8 = *(char **)pcVar6;
        }
        ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar6 + 0x10));
        // [seh] local_8._0_1_ = 2;
        uVar1 = (undefined1)local_8;
        // [seh] local_8._0_1_ = 2;
        if (0xf < local_34) {
          pnVar10 = (nothrow_t *)(local_34 + 1);
          pvVar9 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_48[0] + -4);
            pnVar10 = (nothrow_t *)(local_34 + 0x24);
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_0049aebc;
          }
          operator_delete(pvVar9,pnVar10);
        }
        pcVar6 = (char *)strUsingArgs((char *)local_48);
        // [seh] local_8._0_1_ = 4;
        pcVar8 = pcVar6;
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar8 = *(char **)pcVar6;
        }
        ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar6 + 0x10));
        // [seh] local_8._0_1_ = 2;
        if (0xf < local_34) {
          pnVar10 = (nothrow_t *)(local_34 + 1);
          pvVar9 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_48[0] + -4);
            pnVar10 = (nothrow_t *)(local_34 + 0x24);
            uVar1 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_0049aebc;
          }
          operator_delete(pvVar9,pnVar10);
        }
        iVar3 = local_10c;
        pcVar6 = (char *)strUsingArgs((char *)local_48);
        // [seh] local_8._0_1_ = 5;
        pcVar8 = pcVar6;
        if (0xf < *(uint *)(pcVar6 + 0x14)) {
          pcVar8 = *(char **)pcVar6;
        }
        ghidra::str::append((std::string *)local_30,pcVar8,*(uint *)(pcVar6 + 0x10));
        // [seh] local_8._0_1_ = 2;
        if (0xf < local_34) {
          pnVar10 = (nothrow_t *)(local_34 + 1);
          pvVar9 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_48[0] + -4);
            pnVar10 = (nothrow_t *)(local_34 + 0x24);
            uVar1 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) goto LAB_0049aebc;
          }
          operator_delete(pvVar9,pnVar10);
        }
        uStack_140 = 0x49add7;
        cocos2d::Color3B::Color3B(local_117,'@','@',' ');
        local_114 = local_14c;
        ghidra::str::ctor(local_14c,(std::string *)local_30);
        // [seh] local_8._0_1_ = 6;
        local_158 = 0;
        local_168[0] = (std::string)0x0;
        ghidra::str::assign(local_168,"",0);
        // [seh] local_8._0_1_ = 2;
        paVar4 = (allocator<ListData> *)new ((void *)(local_108)) ListData(uVar11);
        // [seh] local_8 = CONCAT31(local_8._1_3_,7);
        if (*(ListData **)(param_1 + 8) == *(ListData **)(param_1 + 4)) {
          std::vector<>::_Emplace_reallocate<ListData>
                    (param_1,*(ListData **)(param_1 + 4),(ListData *)paVar4);
        }
        else {
          ghidra::lib::_Default_allocator_traits__construct(paVar4,pLVar2,unaff_EDI);
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
        }
        (local_108)->~ListData();
        // [seh] local_8._0_1_ = 0xff;
        // [seh] local_8._1_3_ = 0xffffff;
        if (0xf < local_1c) {
          pnVar10 = (nothrow_t *)(local_1c + 1);
          pvVar9 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_30[0] + -4);
            pnVar10 = (nothrow_t *)(local_1c + 0x24);
            uVar1 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) {
LAB_0049aebc:
              // [seh] local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar9,pnVar10);
        }
        uVar11 = uVar11 + 1;
        iVar7 = *(int *)(iVar3 + 0x11c);
      } while (uVar11 < (uint)(*(int *)(iVar3 + 0x120) - iVar7 >> 2));
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::checkBountyItems(TradeEngine *this,vector<> *param_1)
bool TradeEngine::checkBountyItems(ghidra::vector * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char ******ppppppcVar7;
  Color3B *pCVar8;
  char *pcVar9;
  void *pvVar10;
  char ******ppppppcVar11;
  nothrow_t *pnVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  uint unaff_EDI;
  int iVar18;
  Color3B local_5b [3];
  uint local_58;
  ghidra::vector *local_54;
  int local_50;
  int local_4c;
  void *local_48 [5];
  uint local_34;
  char *****local_30 [4];
  uint local_20;
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8._0_1_ = 0xff;
  // [seh] local_8._1_3_ = 0xffffff;
  // [seh] puStack_c = &DAT_005bcae0;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_54 = param_1;
  local_50 = *(int *)(g_gameData + 0xd8);
  iVar18 = *(int *)(local_50 + 0x11c);
  iVar13 = *(int *)(local_50 + 0x120) - iVar18 >> 2;
  local_18 = pcVar4;
  if (((iVar13 != 0) && ((*(int *)(param_1 + 4) - *(int *)param_1) / 0x60 == iVar13)) &&
     (local_58 = 0, iVar13 != 0)) {
    local_4c = 0;
    do {
      uVar1 = local_58;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (char *****)((uint)local_30[0] & 0xffffff00);
      // [seh] local_8 = 0;
      puVar5 = *(undefined4 **)(g_gameData + 0x3c);
      if (puVar5 != *(undefined4 **)(g_gameData + 0x40)) {
        do {
          piVar15 = (int *)*puVar5;
          if (*piVar15 == *(int *)(*(int *)(*(int *)(iVar18 + local_58 * 4) + 0x4c) + 0x18))
          goto LAB_0049afaf;
          puVar5 = puVar5 + 1;
        } while (puVar5 != *(undefined4 **)(g_gameData + 0x40));
      }
      piVar15 = (int *)0x0;
LAB_0049afaf:
      iVar18 = local_58 * 4;
      iVar13 = *(int *)(*(int *)(local_50 + 0x11c) + iVar18);
      puVar5 = (undefined4 *)(iVar13 + 4);
      if (0xf < *(uint *)(iVar13 + 0x18)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      pcVar6 = (char *)strUsingArgs((char *)local_48,"`%%Name : `7%s\n",puVar5);
      // [seh] local_8._0_1_ = 1;
      pcVar9 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar9 = *(char **)pcVar6;
      }
      ghidra::str::append((std::string *)local_30,pcVar9,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8._0_1_ = 0;
      uVar3 = (undefined1)local_8;
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_34) {
        pnVar12 = (nothrow_t *)(local_34 + 1);
        pvVar10 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar10 = *(void **)((int)local_48[0] + -4);
          pnVar12 = (nothrow_t *)(local_34 + 0x24);
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) goto LAB_0049b24c;
        }
        operator_delete(pvVar10,pnVar12);
      }
      piVar16 = piVar15 + 7;
      if (0xf < (uint)piVar15[0xc]) {
        piVar16 = (int *)*piVar16;
      }
      pcVar6 = (char *)strUsingArgs((char *)local_48,"`%%Sect.: `7%s\n",piVar16);
      // [seh] local_8._0_1_ = 2;
      pcVar9 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar9 = *(char **)pcVar6;
      }
      ghidra::str::append((std::string *)local_30,pcVar9,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_34) {
        pnVar12 = (nothrow_t *)(local_34 + 1);
        pvVar10 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar10 = *(void **)((int)local_48[0] + -4);
          pnVar12 = (nothrow_t *)(local_34 + 0x24);
          uVar3 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) goto LAB_0049b24c;
        }
        operator_delete(pvVar10,pnVar12);
      }
      pcVar6 = (char *)strUsingArgs((char *)local_48,"`%%Value: `$%dc",
                                    **(undefined4 **)(*(int *)(local_50 + 0x11c) + iVar18));
      // [seh] local_8._0_1_ = 3;
      pcVar9 = pcVar6;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar9 = *(char **)pcVar6;
      }
      ghidra::str::append((std::string *)local_30,pcVar9,*(uint *)(pcVar6 + 0x10));
      // [seh] local_8._0_1_ = 0;
      if (0xf < local_34) {
        pnVar12 = (nothrow_t *)(local_34 + 1);
        pvVar10 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar10 = *(void **)((int)local_48[0] + -4);
          pnVar12 = (nothrow_t *)(local_34 + 0x24);
          uVar3 = (undefined1)local_8;
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar10))) goto LAB_0049b24c;
        }
        operator_delete(pvVar10,pnVar12);
      }
      puVar17 = (uint *)(local_4c + *(int *)local_54);
      uVar14 = local_1c;
      ppppppcVar11 = (char ******)local_30[0];
      if (((*puVar17 != uVar1) ||
          (bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar4,unaff_EDI), uVar14 = local_1c,
          ppppppcVar11 = (char ******)local_30[0], !bVar2)) || (puVar17[7] != 0xffffffff)) {
LAB_0049b22c:
        if (0xf < uVar14) {
          pnVar12 = (nothrow_t *)(uVar14 + 1);
          ppppppcVar7 = ppppppcVar11;
          if ((nothrow_t *)0xfff < pnVar12) {
            ppppppcVar7 = (char ******)ppppppcVar11[-1];
            pnVar12 = (nothrow_t *)(uVar14 + 0x24);
            uVar3 = (undefined1)local_8;
            if ((char *)0x1f < (char *)((int)ppppppcVar11 + (-4 - (int)ppppppcVar7))) {
LAB_0049b24c:
              // [seh] local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppppcVar7,pnVar12);
        }
        break;
      }
      ppppppcVar7 = local_30;
      if (0xf < local_1c) {
        ppppppcVar7 = (char ******)local_30[0];
      }
      bVar2 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppppcVar7,local_20,pcVar4,unaff_EDI);
      if (!bVar2) goto LAB_0049b22c;
      pCVar8 = (Color3B *)cocos2d::Color3B::Color3B(local_5b,'@','@',' ');
      bVar2 = cocos2d::Color3B::operator!=((Color3B *)(puVar17 + 0x16),pCVar8);
      iVar18 = local_4c;
      uVar14 = local_1c;
      ppppppcVar11 = (char ******)local_30[0];
      if (((bVar2) || (*(int *)(local_4c + 0x50 + *(int *)local_54) != -999)) ||
         (*(char *)(local_4c + 0x5e + *(int *)local_54) != '\0')) goto LAB_0049b22c;
      // [seh] local_8._0_1_ = 0xff;
      // [seh] local_8._1_3_ = 0xffffff;
      if (0xf < local_1c) {
        pnVar12 = (nothrow_t *)(local_1c + 1);
        if ((nothrow_t *)0xfff < pnVar12) {
          ppppppcVar11 = (char ******)local_30[0][-1];
          pnVar12 = (nothrow_t *)(local_1c + 0x24);
          uVar3 = (undefined1)local_8;
          if ((char *)0x1f < (char *)((int)local_30[0] + (-4 - (int)ppppppcVar11)))
          goto LAB_0049b24c;
        }
        operator_delete(ppppppcVar11,pnVar12);
      }
      local_4c = iVar18 + 0x60;
      local_58 = local_58 + 1;
      iVar18 = *(int *)(local_50 + 0x11c);
    } while (local_58 < (uint)(*(int *)(local_50 + 0x120) - iVar18 >> 2));
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar3 = __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


// Ghidra: void __thiscall TradeEngine::getBountyStr(TradeEngine *this)
void TradeEngine::getBountyStr()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  void *pvVar4;
  nothrow_t *pnVar5;
  std::string *in_stack_00000004;
  std::string abStack_64 [8];
  undefined4 uStack_5c;
  char *pcVar6;
  uint uVar7;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bc341;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  // [seh] local_8 = 0;
  if (*(int *)((char *)this + 0xe4) == -1) goto LAB_0049b68f;
  iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd8) + 0x11c) + *(int *)((char *)this + 0xe4) * 4);
  ghidra::str::ctor(abStack_64,(std::string *)(*(int *)(iVar1 + 0x4c) + 0x24));
  GameData::getShipClassWithIdentifier();
  puVar3 = *(undefined4 **)(g_gameData + 0x3c);
  if (puVar3 != *(undefined4 **)(g_gameData + 0x40)) {
    do {
      if (*(int *)*puVar3 == *(int *)(*(int *)(iVar1 + 0x4c) + 0x18)) break;
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)(g_gameData + 0x40));
  }
  uStack_5c = 0x49b359;
  pcVar2 = (char *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 1;
  pcVar6 = pcVar2;
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar6 = *(char **)pcVar2;
  }
  ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar2 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  uStack_5c = 0x49b3ce;
  pcVar2 = (char *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 2;
  pcVar6 = pcVar2;
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar6 = *(char **)pcVar2;
  }
  ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar2 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  uStack_5c = 0x49b444;
  pcVar2 = (char *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 3;
  pcVar6 = pcVar2;
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar6 = *(char **)pcVar2;
  }
  ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar2 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  uStack_5c = 0x49b4b7;
  pcVar2 = (char *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 4;
  pcVar6 = pcVar2;
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar6 = *(char **)pcVar2;
  }
  ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar2 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  uStack_5c = 0x49b52a;
  pcVar2 = (char *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 5;
  pcVar6 = pcVar2;
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar6 = *(char **)pcVar2;
  }
  ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar2 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x1c);
  if (iVar1 == 0) {
    uVar7 = 0x14;
    pcVar6 = "`%Threat: `0Minimal\n";
LAB_0049b5b3:
    ghidra::str::append(in_stack_00000004,pcVar6,uVar7);
  }
  else {
    if (iVar1 == 1) {
      uVar7 = 0x15;
      pcVar6 = "`%Threat: `$Possible\n";
      goto LAB_0049b5b3;
    }
    if (iVar1 == 2) {
      uVar7 = 0x16;
      pcVar6 = "`%Threat: `@Dangerous\n";
      goto LAB_0049b5b3;
    }
  }
  uStack_5c = 0x49b5ca;
  pcVar2 = (char *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 6;
  pcVar6 = pcVar2;
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar6 = *(char **)pcVar2;
  }
  ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar2 + 0x10));
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
  uStack_5c = 0x49b63a;
  pcVar2 = (char *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 7;
  pcVar6 = pcVar2;
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar6 = *(char **)pcVar2;
  }
  ghidra::str::append(in_stack_00000004,pcVar6,*(uint *)(pcVar2 + 0x10));
  if (0xf < local_18) {
    pnVar5 = (nothrow_t *)(local_18 + 1);
    pvVar4 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar4 = *(void **)((int)local_2c[0] + -4);
      pnVar5 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar5);
  }
LAB_0049b68f:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall TradeEngine::performTakeBounty(TradeEngine *this)
bool TradeEngine::performTakeBounty()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  AnimationFrames **ppAVar1;
  void *pvVar2;
  GameData *pGVar3;
  AnimationFrames *pAVar4;
  undefined4 *puVar5;
  AnimationFrames *pAVar6;
  SaveHandler *this_00;
  size_t sVar7;
  AnimationFrames *local_18;
  void *local_14;
  TradeEngine *local_10;
  
  pGVar3 = g_gameData;
  if ((*(int *)((char *)this_ + 0xcc) == 5) && (*(int *)((char *)this_ + 0xe4) != -1)) {
    local_18 = *(AnimationFrames **)
                (*(int *)(*(int *)(g_gameData + 0xd8) + 0x11c) + *(int *)((char *)this_ + 0xe4) * 4);
    *(undefined1 *)(*(int *)(local_18 + 0x4c) + 4) = 1;
    *(undefined4 *)(local_18 + 0x50) = **(undefined4 **)(pGVar3 + 0xd8);
    ppAVar1 = *(AnimationFrames ***)(pGVar3 + 0x134);
    local_10 = this_;
    if (*(AnimationFrames ***)(pGVar3 + 0x138) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pGVar3 + 0x130),ppAVar1,&local_18);
    }
    else {
      *ppAVar1 = local_18;
      *(int *)(pGVar3 + 0x134) = *(int *)(pGVar3 + 0x134) + 4;
    }
    pAVar4 = local_18;
    local_14 = *(void **)(*(int *)(g_gameData + 0xd8) + 0x120);
    puVar5 = (undefined4 *)
             ghidra::lib::remove___x28_x29(*(undefined4 *)(*(int *)(g_gameData + 0xd8) + 0x11c),local_14);
    pvVar2 = (void *)*puVar5;
    local_18 = *(AnimationFrames **)(g_gameData + 0xd8);
    if (pvVar2 != local_14) {
      sVar7 = *(int *)(local_18 + 0x120) - (int)local_14;
      memmove(pvVar2,local_14,sVar7);
      *(size_t *)(local_18 + 0x120) = sVar7 + (int)pvVar2;
      this_ = local_10;
    }
    pAVar6 = pAVar4 + 4;
    if (0xf < *(uint *)(pAVar4 + 0x18)) {
      pAVar6 = *(AnimationFrames **)pAVar6;
    }
    debugPrint("GAME","Taken bounty for %s in sector %d",pAVar6,
               *(undefined4 *)(*(int *)(pAVar4 + 0x4c) + 0x18));
    if (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 2) {
      ghidra::any_singleton();
      (this_00)->saveGame();
    }
    *(undefined4 *)((char *)this_ + 0xe4) = 0xffffffff;
    return true;
  }
  return false;
}
