// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_Sheet::mouseCancel(UI_Sheet *this)
void UI_Sheet::mouseCancel()

{
  int iVar1;
  bool bVar2;
  uint unaff_ESI;
  undefined4 *puVar3;
  char *unaff_EDI;
  
  iVar1 = *(int *)((char *)this + 0x278);
  puVar3 = (undefined4 *)(iVar1 + 0xfc);
  bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,unaff_EDI,unaff_ESI);
  if (!bVar2) {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar1 + 0x110)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
  }
  *(undefined2 *)((char *)this + 0x431) = 0;
                    // WARNING: Could not recover jumptable at 0x0056d851. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// Ghidra: void __thiscall UI_Sheet::UI_Sheet(UI_Sheet *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)
UI_Sheet::UI_Sheet(ScreenInterface * param_1, Widget * param_2, bool * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  MetaGameAction **ppMVar1;
  int *piVar2;
  ListData *pLVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  ghidra::vector *pvVar11;
  word *pwVar12;
  Size *pSVar13;
  MetaGameAction *pMVar14;
  void *pvVar15;
  nothrow_t *pnVar16;
  ListData *this_00;
  ghidra::vector *unaff_EDI;
  double dVar17;
  std::string local_9c [12];
  undefined4 uStack_90;
  std::string local_84 [8];
  undefined4 uStack_7c;
  int local_50;
  int local_4c;
  undefined4 local_48;
  MetaGameAction *pMStack_44;
  std::string local_3d;
  void *local_3c;
  int local_30 [2];
  uint local_28;
  char *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005cc4f2;
  // [seh] local_1c = ExceptionList;
  // [cookie] pcVar8 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  uStack_7c = 0x589ff8;
  local_24 = pcVar8;
  new ((void *)((ScreenElement *)this)) ScreenElement(param_1, param_2, param_3);
  // [vtable] *(undefined ***)this = vftable;
  *(undefined4 *)((char *)this + 0x428) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x42c) = 0;
  *(undefined2 *)((char *)this + 0x430) = 1;
  ((char *)this)[0x432] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x434) = 0;
  *(undefined4 *)((char *)this + 0x438) = 0;
  *(undefined4 *)((char *)this + 0x43c) = 1;
  *(undefined4 *)((char *)this + 0x440) = 1;
  *(undefined4 *)((char *)this + 0x444) = 0xc;
  *(undefined2 *)((char *)this + 0x448) = 0;
  *(undefined4 *)((char *)this + 0x450) = 0;
  *(undefined2 *)((char *)this + 0x454) = 0;
  *(undefined4 *)((char *)this + 0x468) = 0;
  *(undefined4 *)((char *)this + 0x46c) = 0xf;
  ((char *)this)[0x458] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x470) = 0;
  *(undefined4 *)((char *)this + 0x474) = 0;
  *(undefined4 *)((char *)this + 0x478) = 0;
  *(undefined4 *)((char *)this + 0x47c) = 0;
  *(undefined4 *)((char *)this + 0x480) = 0;
  *(undefined4 *)((char *)this + 0x484) = 0;
  *(undefined4 *)((char *)this + 0x488) = 0;
  *(int *)((char *)this + 0x48c) = 0;
  *(undefined4 *)((char *)this + 0x490) = 0;
  *(undefined4 *)((char *)this + 0x494) = 0;
  *(undefined4 *)((char *)this + 0x498) = 0;
  *(undefined4 *)((char *)this + 0x49c) = 0;
  *(undefined4 *)((char *)this + 0x4a0) = 0;
  *(undefined4 *)((char *)this + 0x4a4) = 0;
  *(undefined4 *)((char *)this + 0x4a8) = 0;
  *(undefined4 *)((char *)this + 0x4ac) = 0;
  *(undefined4 *)((char *)this + 0x4b0) = 0;
  *(undefined4 *)((char *)this + 0x4b4) = 0;
  *(undefined4 *)((char *)this + 0x4b8) = 0;
  local_14 = 7;
  *(undefined4 *)((char *)this + 0x4bc) = 0;
  ((char *)this)[0x284] = (byte)0x1;
  ((char *)this)[0x286] = (byte)0x1;
  ((char *)this)[0x2dc] = (byte)0x1;
  local_84[0] = (std::string)0x0;
  uStack_90 = 0x58a190;
  ghidra::str::assign(local_84,"cols",4);
  ((Widget *)((char *)this + 0x290))->getOption();
  local_3d = (std::string)ghidra::lib::_Traits_equal___x28_x29("",0,pcVar8,(uint)unaff_EDI);
  if (0xf < local_28) {
    pnVar16 = (nothrow_t *)(local_28 + 1);
    pvVar15 = local_3c;
    if ((nothrow_t *)0xfff < pnVar16) {
      pvVar15 = *(void **)((int)local_3c + -4);
      pnVar16 = (nothrow_t *)(local_28 + 0x24);
      if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar16);
  }
  if (local_3d == (std::string)0x0) {
    uStack_90 = 0x58a220;
    local_84[0] = local_3d;
    ghidra::str::assign(local_84,"cols",4);
    pcVar9 = (char *)((Widget *)((char *)this + 0x290))->getOption();
    if (0xf < *(uint *)(pcVar9 + 0x14)) {
      pcVar9 = *(char **)pcVar9;
    }
    iVar10 = atoi(pcVar9);
    *(int *)((char *)this + 0x43c) = iVar10;
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c;
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
  }
  else {
    *(undefined4 *)((char *)this + 0x43c) = 2;
  }
  *(int *)((char *)this + 0x434) = *(int *)((char *)this + 0x2a0) + -0xe;
  local_84[0] = (std::string)0x0;
  uStack_90 = 0x58a2ba;
  ghidra::str::assign(local_84,"titles",6);
  bVar7 = ((Widget *)((char *)this + 0x290))->hasOption();
  if (bVar7) {
    local_9c[0] = (std::string)0x0;
    ghidra::str::assign(local_9c,"titles",6);
    ((Widget *)((char *)this + 0x290))->getOption(local_84);
    pvVar11 = (ghidra::vector *)splitStringBy();
    if ((ghidra::vector *)((char *)this + 0x480) != pvVar11) {
      ghidra::lib::vector___Tidy((ghidra::vector *)((char *)this + 0x480));
      *(undefined4 *)((char *)this + 0x480) = *(undefined4 *)pvVar11;
      *(undefined4 *)((char *)this + 0x484) = *(undefined4 *)(pvVar11 + 4);
      *(undefined4 *)((char *)this + 0x488) = *(undefined4 *)(pvVar11 + 8);
      *(undefined4 *)pvVar11 = 0;
      *(undefined4 *)(pvVar11 + 4) = 0;
      *(undefined4 *)(pvVar11 + 8) = 0;
    }
    ghidra::lib::vector___Tidy((ghidra::vector *)local_30);
    ((char *)this)[0x454] = (byte)0x1;
  }
  local_84[0] = (std::string)0x0;
  uStack_90 = 0x58a383;
  ghidra::str::assign(local_84,"widths",6);
  bVar7 = ((Widget *)((char *)this + 0x290))->hasOption();
  if (bVar7) {
    local_9c[0] = (std::string)0x0;
    ghidra::str::assign(local_9c,"widths",6);
    ((Widget *)((char *)this + 0x290))->getOption(local_84);
    splitStringBy();
    local_14._0_1_ = 8;
    local_50 = 0;
    if (0 < *(int *)((char *)this + 0x43c)) {
      local_4c = 0;
      do {
        pcVar9 = (char *)(local_30[0] + local_4c);
        if (0xf < *(uint *)(pcVar9 + 0x14)) {
          pcVar9 = *(char **)pcVar9;
        }
        dVar17 = atof(pcVar9);
        ppMVar1 = *(MetaGameAction ***)((char *)this + 0x478);
        pMVar14 = (MetaGameAction *)(int)((double)*(int *)((char *)this + 0x434) * (dVar17 / 100.0));
        local_48 = SUB84(dVar17 / 100.0,0);
        _local_48 = CONCAT44(pMVar14,local_48);
        if (*(MetaGameAction ***)((char *)this + 0x47c) == ppMVar1) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x474),ppMVar1,&pMStack_44);
        }
        else {
          *ppMVar1 = pMVar14;
          *(int *)((char *)this + 0x478) = *(int *)((char *)this + 0x478) + 4;
        }
        local_50 = local_50 + 1;
        local_4c = local_4c + 0x18;
      } while (local_50 < *(int *)((char *)this + 0x43c));
    }
    local_14 = CONCAT31(local_14._1_3_,7);
    ghidra::lib::vector___Tidy((ghidra::vector *)local_30);
  }
  else {
    iVar10 = *(int *)((char *)this + 0x43c);
    local_4c = 0;
    if (0 < iVar10) {
      do {
        ppMVar1 = *(MetaGameAction ***)((char *)this + 0x478);
        _local_48 = CONCAT44((MetaGameAction *)(*(int *)((char *)this + 0x434) / iVar10),local_48);
        if (*(MetaGameAction ***)((char *)this + 0x47c) == ppMVar1) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this + 0x474),ppMVar1,&pMStack_44);
        }
        else {
          *ppMVar1 = (MetaGameAction *)(*(int *)((char *)this + 0x434) / iVar10);
          *(int *)((char *)this + 0x478) = *(int *)((char *)this + 0x478) + 4;
        }
        iVar10 = *(int *)((char *)this + 0x43c);
        local_4c = local_4c + 1;
      } while (local_4c < iVar10);
    }
  }
  local_84[0] = (std::string)0x0;
  uStack_90 = 0x58a4ed;
  ghidra::str::assign(local_84,"selecttext",10);
  bVar7 = ((Widget *)((char *)this + 0x290))->hasOption();
  if (bVar7) {
    ((char *)this)[0x455] = (byte)0x1;
    local_84[0] = (std::string)0x0;
    uStack_90 = 0x58a52b;
    ghidra::str::assign(local_84,"selecttext",10);
    pwVar12 = (word *)((Widget *)((char *)this + 0x290))->getOption();
    if ((word *)((char *)this + 0x458) != pwVar12) {
      // [mislabelled-dtor] word::~word((word *)((char *)this + 0x458));
      uVar4 = *(undefined4 *)(pwVar12 + 4);
      uVar5 = *(undefined4 *)(pwVar12 + 8);
      uVar6 = *(undefined4 *)(pwVar12 + 0xc);
      *(undefined4 *)((char *)this + 0x458) = *(undefined4 *)pwVar12;
      *(undefined4 *)((char *)this + 0x45c) = uVar4;
      *(undefined4 *)((char *)this + 0x460) = uVar5;
      *(undefined4 *)((char *)this + 0x464) = uVar6;
      *(undefined8 *)((char *)this + 0x468) = *(undefined8 *)(pwVar12 + 0x10);
      *(undefined4 *)(pwVar12 + 0x10) = 0;
      *(undefined4 *)(pwVar12 + 0x14) = 0xf;
      *pwVar12 = (word)0x0;
    }
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c;
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
  }
  local_84[0] = (std::string)0x0;
  uStack_90 = 0x58a5cd;
  ghidra::str::assign(local_84,"input",5);
  bVar7 = ((Widget *)((char *)this + 0x290))->hasOption();
  if (bVar7) {
    local_84[0] = (std::string)0x0;
    uStack_90 = 0x58a5fe;
    ghidra::str::assign(local_84,"input",5);
    ((Widget *)((char *)this + 0x290))->getOption();
    local_3d = (std::string)ghidra::lib::_Traits_equal___x28_x29("keymapping",10,pcVar8,(uint)unaff_EDI);
    if (0xf < local_28) {
      pnVar16 = (nothrow_t *)(local_28 + 1);
      pvVar15 = local_3c;
      if ((nothrow_t *)0xfff < pnVar16) {
        pvVar15 = *(void **)((int)local_3c + -4);
        pnVar16 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar16);
    }
    if (local_3d != (std::string)0x0) {
      *(undefined4 *)((char *)this + 0x470) = 1;
    }
  }
  iVar10 = *(int *)((char *)this + 0x2a4) / 0xc;
  *(int *)((char *)this + 0x440) = iVar10;
  if (*(int *)((char *)this + 0x2a4) % 0xc != 0) {
    *(int *)((char *)this + 0x29c) = *(int *)((char *)this + 0x29c) + (iVar10 * 0xc - *(int *)((char *)this + 0x2a4));
    *(int *)((char *)this + 0x2a4) = iVar10 * 0xc;
  }
  if (((char *)this)[0x455] != (byte)0x0) {
    *(int *)((char *)this + 0x440) = iVar10 + -1;
  }
  piVar2 = *(int **)((char *)this + 0x3f0);
  *(int **)((char *)this + 0x450) = piVar2;
  iVar10 = *piVar2;
  *(int *)((char *)this + 0x44c) = iVar10;
  if ((iVar10 != *piVar2) ||
     (bVar7 = checkListDataChanged((ShipDataInputType)pcVar8,unaff_EDI), bVar7)) {
    pLVar3 = *(ListData **)((char *)this + 0x490);
    this_00 = *(ListData **)((char *)this + 0x48c);
    if (this_00 != pLVar3) {
      do {
        (this_00)->~ListData();
        this_00 = this_00 + 0x60;
      } while (this_00 != pLVar3);
      this_00 = *(ListData **)((char *)this + 0x48c);
    }
    *(ListData **)((char *)this + 0x490) = this_00;
    populateListData((ShipDataInputType)pcVar8,unaff_EDI);
    (**(code **)(*(int *)this + 0x294))();
    *(undefined4 *)((char *)this + 0x44c) = **(undefined4 **)((char *)this + 0x450);
  }
  pSVar13 = (Size *)cocos2d::Size::Size((Size *)&local_48,(float)*(int *)((char *)this + 0x2a0),
                                        (float)*(int *)((char *)this + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this,pSVar13);
  // [seh] ExceptionList = local_1c;
  // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// Ghidra: void __thiscall UI_Sheet::~UI_Sheet(UI_Sheet *this)
UI_Sheet::~UI_Sheet()

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  ListData *this_00;
  ListData *pLVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca410;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  cleanupRender(this);
  pvVar1 = *(void **)((char *)this + 0x4b0);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x4b8) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0058aa7b;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x4b0) = 0;
    *(undefined4 *)((char *)this + 0x4b4) = 0;
    *(undefined4 *)((char *)this + 0x4b8) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x4a4);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x4ac) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0058aa7b;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x4a4) = 0;
    *(undefined4 *)((char *)this + 0x4a8) = 0;
    *(undefined4 *)((char *)this + 0x4ac) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x498);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x4a0) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0058aa7b;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x498) = 0;
    *(undefined4 *)((char *)this + 0x49c) = 0;
    *(undefined4 *)((char *)this + 0x4a0) = 0;
  }
  this_00 = *(ListData **)((char *)this + 0x48c);
  if (this_00 != (ListData *)0x0) {
    pLVar5 = *(ListData **)((char *)this + 0x490);
    if (this_00 != pLVar5) {
      do {
        (this_00)->~ListData();
        this_00 = this_00 + 0x60;
      } while (this_00 != pLVar5);
      this_00 = *(ListData **)((char *)this + 0x48c);
    }
    pnVar4 = (nothrow_t *)(((*(int *)((char *)this + 0x494) - (int)this_00) / 0x60) * 0x60);
    pLVar5 = this_00;
    if ((nothrow_t *)0xfff < pnVar4) {
      pLVar5 = *(ListData **)(this_00 + -4);
      pnVar4 = pnVar4 + 0x23;
      if ((ListData *)0x1f < this_00 + (-4 - (int)pLVar5)) goto LAB_0058aa7b;
    }
    operator_delete(pLVar5,pnVar4);
    *(undefined4 *)((char *)this + 0x48c) = 0;
    *(undefined4 *)((char *)this + 0x490) = 0;
    *(undefined4 *)((char *)this + 0x494) = 0;
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)((char *)this + 0x480));
  pvVar1 = *(void **)((char *)this + 0x474);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)((char *)this + 0x47c) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_0058aa7b;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)((char *)this + 0x474) = 0;
    *(undefined4 *)((char *)this + 0x478) = 0;
    *(undefined4 *)((char *)this + 0x47c) = 0;
  }
  uVar2 = *(uint *)((char *)this + 0x46c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)((char *)this + 0x458);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_0058aa7b:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)((char *)this + 0x468) = 0;
  *(undefined4 *)((char *)this + 0x46c) = 0xf;
  ((char *)this)[0x458] = (byte)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  ((Widget *)((char *)this + 0x290))->~Widget();
  cocos2d::Node::~Node((Node *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_Sheet::cleanupRender(UI_Sheet *this)
void UI_Sheet::cleanupRender()

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x4a4);
  if (*(int *)((char *)this + 0x4a8) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x4a4) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x4a4);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x4a8) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x4a8) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x4b0);
  if (*(int *)((char *)this + 0x4b4) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x4b0) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x4b0);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x4b4) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x4b4) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x498);
  if (*(int *)((char *)this + 0x49c) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x498) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x498);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x49c) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x49c) = iVar2;
  if (*(int **)((char *)this + 0x4bc) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x4bc) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x4bc) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_Sheet::render(UI_Sheet *this)
void UI_Sheet::render()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff1c[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  uint uVar2;
  float fVar3;
  UI_Sheet *pUVar4;
  AnimationFrames *pAVar5;
  Sprite *pSVar6;
  int iVar7;
  float *pfVar8;
  Scale9Sprite *pSVar9;
  void **ppvVar10;
  undefined4 ****ppppuVar11;
  UIText *pUVar12;
  std::string *pbVar13;
  void **ppvVar14;
  int iVar15;
  undefined4 ****ppppuVar16;
  void *pvVar17;
  undefined4 uVar18;
  nothrow_t *pnVar19;
  int iVar20;
  char acStack_f8 [4];
  Size local_bc [10];
  Color3B local_b2 [3];
  Color3B local_af [3];
  Size local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  UI_Sheet *local_8c;
  int local_88;
  int local_84;
  Scale9Sprite *local_80;
  uint local_7c;
  float local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  UI_Sheet *local_68;
  char local_61;
  AnimationFrames *local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc5b5;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_8c = this_;
  (**(code **)(*(int *)this_ + 0x290))();
  local_68 = this_ + 0x48c;
  if ((*(int *)((char *)this_ + 0x428) == -1) ||
     (*(int *)((char *)this_ + 0x428) != (*(int *)((char *)this_ + 0x490) - *(int *)local_68) / 0x60)) {
    *(undefined4 *)((char *)this_ + 0x42c) = 0;
    *(int *)((char *)this_ + 0x428) = (*(int *)((char *)this_ + 0x490) - *(int *)local_68) / 0x60;
  }
  iVar15 = 0;
  if (0 < *(int *)((char *)this_ + 0x440)) {
    do {
      local_7c = 0xffffffff;
      if ((((char *)this_)[0x454] == (byte)0x0) || (iVar15 != 0)) {
        local_7c = iVar15 + -1 + *(int *)((char *)this_ + 0x42c);
      }
      local_84 = iVar15 + 1;
      local_88 = *(int *)((char *)this_ + 0x2a4) - *(int *)((char *)this_ + 0x444) * local_84;
      if (local_7c == 0xffffffff) {
        local_61 = false;
      }
      else {
        local_61 = **(int **)((char *)this_ + 0x450) == *(int *)(local_7c * 0x60 + *(int *)local_68);
      }
      if (((((char *)this_)[0x454] != (byte)0x0) && (iVar15 == 0)) || ((bool)local_61 != false)) {
        ghidra::str::assign((std::string *)&stack0xffffff1c,"white.png",9);
        pSVar6 = loadSprite();
        iVar15 = *(int *)pSVar6;
        local_60 = (AnimationFrames *)pSVar6;
        if (local_61 == '\0') {
          cocos2d::Color3B::Color3B(local_b2,'\0',0xbf,0xff);
          (**(code **)(iVar15 + 0x25c))();
        }
        else {
          cocos2d::Color3B::Color3B(local_af,0xff,0xff,0xff);
          (**(code **)(iVar15 + 0x25c))();
        }
        (**(code **)(*(int *)pSVar6 + 0x244))();
        iVar15 = *(int *)pSVar6;
        iVar20 = *(int *)((char *)this_ + 0x444);
        iVar7 = (**(code **)(iVar15 + 0xb0))();
        local_78 = *(float *)(iVar7 + 4);
        iVar7 = *(int *)(local_8c + 0x434);
        pfVar8 = (float *)(**(code **)(*(int *)local_60 + 0xb0))();
        cocos2d::Size::Size(local_bc,(float)iVar7 / *pfVar8,(float)iVar20 / local_78);
        pAVar5 = local_60;
        (**(code **)(iVar15 + 0xac))();
        local_9c = 0;
        local_98 = 0;
        // [seh] local_8 = 0;
        (**(code **)(*(int *)pAVar5 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        (**(code **)(*(int *)pAVar5 + 0x48))();
        this_ = local_8c;
        (**(code **)(*(int *)local_8c + 0x10c))();
        ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x4a8);
        if (*(AnimationFrames ***)((char *)this_ + 0x4ac) == ppAVar1) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x4a4),ppAVar1,&local_60);
        }
        else {
          *ppAVar1 = pAVar5;
          *(int *)((char *)this_ + 0x4a8) = *(int *)((char *)this_ + 0x4a8) + 4;
        }
      }
      local_60 = (AnimationFrames *)0x0;
      local_78 = 0.0;
      if (0 < *(int *)((char *)this_ + 0x43c)) {
        do {
          fVar3 = local_78;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          ghidra::str::assign((std::string *)local_2c,"MenuBorder.png",0xe);
          // [seh] local_8 = 1;
          pSVar9 = cocos2d::ui::Scale9Sprite::create((std::string *)local_2c);
          // [seh] local_8 = 0xffffffff;
          local_80 = pSVar9;
          if (0xf < local_18) {
            pnVar19 = (nothrow_t *)(local_18 + 1);
            pvVar17 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar19) {
              pvVar17 = *(void **)((int)local_2c[0] + -4);
              pnVar19 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17))) goto LAB_0058b468;
            }
            operator_delete(pvVar17,pnVar19);
          }
          local_a4 = 0;
          local_a0 = 0;
          // [seh] local_8 = 2;
          (**(code **)(*(int *)pSVar9 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          (**(code **)(*(int *)pSVar9 + 0x48))();
          iVar15 = *(int *)(*(int *)((char *)this_ + 0x474) + (int)fVar3 * 4);
          local_60 = local_60 + iVar15;
          iVar20 = *(int *)pSVar9;
          cocos2d::Size::Size(local_ac,(float)(int)((uint)((int)local_78 <
                                                          *(int *)((char *)this_ + 0x43c) + -1) + iVar15),
                              12.0);
          (**(code **)(iVar20 + 0xac))();
          (**(code **)(*(int *)this_ + 0x108))();
          ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x4b4);
          if (*(AnimationFrames ***)((char *)this_ + 0x4b8) == ppAVar1) {
            ghidra::lib::vector___Emplace_reallocate
                      ((ghidra::vector *)((char *)this_ + 0x4b0),ppAVar1,(AnimationFrames **)&local_80);
          }
          else {
            *ppAVar1 = (AnimationFrames *)pSVar9;
            *(int *)((char *)this_ + 0x4b4) = *(int *)((char *)this_ + 0x4b4) + 4;
          }
          local_78 = (float)((int)local_78 + 1);
        } while ((int)local_78 < *(int *)((char *)this_ + 0x43c));
      }
      local_74 = CONCAT31(local_74._1_3_,0x37);
      local_4c = 0;
      local_48 = 0xf;
      local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
      // [seh] local_8._0_1_ = 4;
      // [seh] local_8._1_3_ = 0;
      if (local_7c == 0xffffffff) {
        ppvVar10 = *(void ***)((char *)this_ + 0x480);
        if (local_5c != ppvVar10) {
          ppvVar14 = ppvVar10;
          if ((void *)0xf < ppvVar10[5]) {
            ppvVar14 = *ppvVar10;
          }
          ghidra::str::assign((std::string *)local_5c,(char *)ppvVar14,(uint)ppvVar10[4])
          ;
          ppvVar10 = *(void ***)((char *)this_ + 0x480);
        }
        ppppuVar11 = ppvVar10 + 6;
        if (local_44 != ppppuVar11) {
          if ((void *)0xf < ppvVar10[0xb]) {
            ppppuVar11 = (undefined4 ****)*ppppuVar11;
          }
          ghidra::str::assign
                    ((std::string *)local_44,(char *)ppppuVar11,(uint)ppvVar10[10]);
        }
        local_74 = CONCAT31(local_74._1_3_,0x25);
      }
      else if ((-1 < (int)local_7c) &&
              (local_7c < (uint)((*(int *)(local_68 + 4) - *(int *)local_68) / 0x60))) {
        local_74 = 0x30;
        if (local_61 == '\0') {
          local_74 = 0x37;
        }
        iVar20 = local_7c * 0x60;
        iVar15 = *(int *)local_68;
        ppvVar10 = (void **)(iVar15 + 0x20 + iVar20);
        if (local_5c != ppvVar10) {
          ppvVar14 = ppvVar10;
          if ((void *)0xf < ppvVar10[5]) {
            ppvVar14 = *ppvVar10;
          }
          ghidra::str::assign((std::string *)local_5c,(char *)ppvVar14,(uint)ppvVar10[4])
          ;
          iVar15 = *(int *)local_68;
        }
        ppppuVar11 = (undefined4 ****)(iVar20 + 0x38 + iVar15);
        if (local_44 != ppppuVar11) {
          ppppuVar16 = ppppuVar11;
          if ((undefined4 ***)0xf < ppppuVar11[5]) {
            ppppuVar16 = (undefined4 ****)*ppppuVar11;
          }
          ghidra::str::assign
                    ((std::string *)local_44,(char *)ppppuVar16,(uint)ppppuVar11[4]);
        }
      }
      acStack_f8[0] = '\x15';
      acStack_f8[1] = -0x4f;
      acStack_f8[2] = 'X';
      acStack_f8[3] = '\0';
      strUsingArgs(&stack0xffffff1c);
      pUVar12 = UIText::create();
      local_94 = 0;
      local_90 = 0;
      // [seh] local_8._0_1_ = 5;
      local_60 = (AnimationFrames *)pUVar12;
      (**(code **)(*(int *)pUVar12 + 0xa0))();
      // [seh] local_8 = CONCAT31(local_8._1_3_,4);
      (**(code **)(*(int *)pUVar12 + 0x48))();
      (**(code **)(*(int *)this_ + 0x108))();
      ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x49c);
      if (*(AnimationFrames ***)((char *)this_ + 0x4a0) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x498),ppAVar1,&local_60);
      }
      else {
        *ppAVar1 = local_60;
        *(int *)((char *)this_ + 0x49c) = *(int *)((char *)this_ + 0x49c) + 4;
      }
      ppppuVar11 = local_44;
      if (0xf < local_30) {
        ppppuVar11 = (undefined4 ****)local_44[0];
      }
      strUsingArgs(acStack_f8,"`%c%s",local_74 & 0xff,ppppuVar11);
      local_60 = (AnimationFrames *)UIText::create();
      local_70 = 0;
      local_6c = 0;
      // [seh] local_8._0_1_ = 6;
      (**(code **)(*(int *)local_60 + 0xa0))();
      pAVar5 = local_60;
      // [seh] local_8 = CONCAT31(local_8._1_3_,4);
      (**(code **)(*(int *)local_60 + 0x48))();
      acStack_f8[0] = 'X';
      acStack_f8[1] = -0x4e;
      acStack_f8[2] = 'X';
      acStack_f8[3] = '\0';
      (**(code **)(*(int *)this_ + 0x108))();
      ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x49c);
      if (*(AnimationFrames ***)((char *)this_ + 0x4a0) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x498),ppAVar1,&local_60);
      }
      else {
        *ppAVar1 = pAVar5;
        *(int *)((char *)this_ + 0x49c) = *(int *)((char *)this_ + 0x49c) + 4;
      }
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      if (0xf < local_30) {
        pnVar19 = (nothrow_t *)(local_30 + 1);
        ppppuVar11 = (undefined4 ****)local_44[0];
        if ((nothrow_t *)0xfff < pnVar19) {
          ppppuVar11 = (undefined4 ****)local_44[0][-1];
          pnVar19 = (nothrow_t *)(local_30 + 0x24);
          if (0x1f < (uint)((int)local_44[0] + (-4 - (int)ppppuVar11))) goto LAB_0058b468;
        }
        operator_delete(ppppuVar11,pnVar19);
      }
      // [seh] local_8 = 0xffffffff;
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_48) {
        pnVar19 = (nothrow_t *)(local_48 + 1);
        pvVar17 = local_5c[0];
        if ((nothrow_t *)0xfff < pnVar19) {
          pvVar17 = *(void **)((int)local_5c[0] + -4);
          pnVar19 = (nothrow_t *)(local_48 + 0x24);
          if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar17))) goto LAB_0058b468;
        }
        operator_delete(pvVar17,pnVar19);
      }
      iVar15 = local_84;
    } while (local_84 < *(int *)((char *)this_ + 0x440));
  }
  pUVar4 = local_68;
  if ((((char *)this_)[0x455] != (byte)0x0) && (**(int **)((char *)this_ + 0x450) != -1)) {
    ghidra::str::ctor
              ((std::string *)&stack0xffffff1c,(std::string *)((char *)this_ + 0x458));
    pUVar12 = UIText::create();
    local_70 = 0;
    local_6c = 0;
    // [seh] local_8 = 7;
    local_60 = (AnimationFrames *)pUVar12;
    (**(code **)(*(int *)pUVar12 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    (**(code **)(*(int *)pUVar12 + 0x48))();
    (**(code **)(*(int *)this_ + 0x108))();
    ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x49c);
    if (*(AnimationFrames ***)((char *)this_ + 0x4a0) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x498),ppAVar1,&local_60);
    }
    else {
      *ppAVar1 = (AnimationFrames *)pUVar12;
      *(int *)((char *)this_ + 0x49c) = *(int *)((char *)this_ + 0x49c) + 4;
    }
  }
  if (((char *)this_)[0x430] != (byte)0x0) {
    if ((*(uint *)((char *)this_ + 0x440) < (uint)((*(int *)(pUVar4 + 4) - *(int *)pUVar4) / 0x60)) &&
       (0 < *(int *)((char *)this_ + 0x42c))) {
      pbVar13 = (std::string *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 8;
    }
    else {
      pbVar13 = (std::string *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 9;
    }
    pSVar9 = cocos2d::ui::Scale9Sprite::create(pbVar13);
    // [seh] local_8 = 0xffffffff;
    local_60 = (AnimationFrames *)pSVar9;
    if (0xf < local_18) {
      pnVar19 = (nothrow_t *)(local_18 + 1);
      pvVar17 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar17 = *(void **)((int)local_2c[0] + -4);
        pnVar19 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17))) goto LAB_0058b468;
      }
      operator_delete(pvVar17,pnVar19);
    }
    local_70 = 0;
    local_6c = 0x3f800000;
    // [seh] local_8 = 10;
    (**(code **)(*(int *)pSVar9 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    (**(code **)(*(int *)pSVar9 + 0x48))();
    iVar15 = *(int *)pSVar9;
    cocos2d::Size::Size(local_ac,12.0,12.0);
    (**(code **)(iVar15 + 0xac))();
    (**(code **)(*(int *)this_ + 0x10c))();
    ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x4a8);
    if (*(AnimationFrames ***)((char *)this_ + 0x4ac) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x4a4),ppAVar1,&local_60);
      pSVar9 = (Scale9Sprite *)local_60;
    }
    else {
      *ppAVar1 = (AnimationFrames *)pSVar9;
      *(int *)((char *)this_ + 0x4a8) = *(int *)((char *)this_ + 0x4a8) + 4;
    }
    if ((*(uint *)((char *)this_ + 0x440) < (uint)((*(int *)(local_68 + 4) - *(int *)local_68) / 0x60)) &&
       (0 < *(int *)((char *)this_ + 0x42c))) {
      uVar18 = 0x37;
      if (((char *)this_)[0x431] != (byte)0x0) {
        uVar18 = 0x25;
      }
    }
    else {
      uVar18 = 0x38;
    }
    strUsingArgs(acStack_f8,"`%c`a1",uVar18);
    pUVar12 = UIText::create();
    local_70 = 0x3f000000;
    local_6c = 0x3f000000;
    // [seh] local_8 = 0xb;
    local_60 = (AnimationFrames *)pUVar12;
    (**(code **)(*(int *)pUVar12 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    iVar15 = *(int *)pUVar12;
    (**(code **)(*(int *)pSVar9 + 0x74))();
    (**(code **)(*(int *)pSVar9 + 0x6c))();
    pAVar5 = local_60;
    (**(code **)(iVar15 + 0x48))();
    acStack_f8[0] = '+';
    acStack_f8[1] = -0x4a;
    acStack_f8[2] = 'X';
    acStack_f8[3] = '\0';
    (**(code **)(*(int *)this_ + 0x108))();
    ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x49c);
    if (*(AnimationFrames ***)((char *)this_ + 0x4a0) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x498),ppAVar1,&local_60);
    }
    else {
      *ppAVar1 = pAVar5;
      *(int *)((char *)this_ + 0x49c) = *(int *)((char *)this_ + 0x49c) + 4;
    }
    pUVar4 = local_68;
    uVar2 = (*(int *)(local_68 + 4) - *(int *)local_68) / 0x60;
    if ((*(uint *)((char *)this_ + 0x440) < uVar2) &&
       ((int)(*(int *)((char *)this_ + 0x42c) + *(uint *)((char *)this_ + 0x440)) < (int)uVar2)) {
      pbVar13 = (std::string *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 0xc;
    }
    else {
      pbVar13 = (std::string *)strUsingArgs((char *)local_2c);
      // [seh] local_8 = 0xd;
    }
    pSVar9 = cocos2d::ui::Scale9Sprite::create(pbVar13);
    // [seh] local_8 = 0xffffffff;
    local_60 = (AnimationFrames *)pSVar9;
    if (0xf < local_18) {
      pnVar19 = (nothrow_t *)(local_18 + 1);
      pvVar17 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pvVar17 = *(void **)((int)local_2c[0] + -4);
        pnVar19 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17))) {
LAB_0058b468:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar17,pnVar19);
    }
    uVar2 = (*(int *)(pUVar4 + 4) - *(int *)pUVar4) / 0x60;
    if ((*(uint *)((char *)this_ + 0x440) < uVar2) &&
       ((int)(*(int *)((char *)this_ + 0x42c) + *(uint *)((char *)this_ + 0x440)) < (int)uVar2)) {
      local_7c = 0x37;
      if (((char *)this_)[0x432] != (byte)0x0) {
        local_7c = 0x25;
      }
    }
    else {
      local_7c = 0x38;
    }
    local_70 = 0;
    local_6c = 0;
    // [seh] local_8 = 0xe;
    (**(code **)(*(int *)pSVar9 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    (**(code **)(*(int *)pSVar9 + 0x48))();
    iVar15 = *(int *)pSVar9;
    cocos2d::Size::Size(local_ac,12.0,12.0);
    (**(code **)(iVar15 + 0xac))();
    (**(code **)(*(int *)this_ + 0x10c))();
    ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x4a8);
    if (*(AnimationFrames ***)((char *)this_ + 0x4ac) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x4a4),ppAVar1,&local_60);
      pSVar9 = (Scale9Sprite *)local_60;
    }
    else {
      *ppAVar1 = (AnimationFrames *)pSVar9;
      *(int *)((char *)this_ + 0x4a8) = *(int *)((char *)this_ + 0x4a8) + 4;
    }
    strUsingArgs(acStack_f8,"`%c`a2",local_7c);
    pUVar12 = UIText::create();
    local_94 = 0x3f000000;
    local_90 = 0x3f000000;
    // [seh] local_8 = 0xf;
    local_60 = (AnimationFrames *)pUVar12;
    (**(code **)(*(int *)pUVar12 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    iVar15 = *(int *)pUVar12;
    (**(code **)(*(int *)pSVar9 + 0x74))();
    (**(code **)(*(int *)pSVar9 + 0x6c))();
    pAVar5 = local_60;
    (**(code **)(iVar15 + 0x48))();
    builtin_strncpy(acStack_f8,"8X",4);
    (**(code **)(*(int *)this_ + 0x108))();
    ppAVar1 = *(AnimationFrames ***)((char *)this_ + 0x49c);
    if (*(AnimationFrames ***)((char *)this_ + 0x4a0) == ppAVar1) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x498),ppAVar1,&local_60);
    }
    else {
      *ppAVar1 = pAVar5;
      *(int *)((char *)this_ + 0x49c) = *(int *)((char *)this_ + 0x49c) + 4;
    }
  }
  *(int *)((char *)this_ + 0x44c) = **(int **)((char *)this_ + 0x450);
  **(undefined1 **)((char *)this_ + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_Sheet::specialDataCheckFunction(UI_Sheet *this,float param_1)
void UI_Sheet::specialDataCheckFunction(float param_1)

{
  ListData *pLVar1;
  bool bVar2;
  ghidra::vector *unaff_ESI;
  ListData *this_00;
  ShipDataInputType unaff_EDI;
  
  if ((*(int *)((char *)this + 0x44c) == **(int **)((char *)this + 0x450)) &&
     (bVar2 = checkListDataChanged(unaff_EDI,unaff_ESI), !bVar2)) {
    return;
  }
  pLVar1 = *(ListData **)((char *)this + 0x490);
  this_00 = *(ListData **)((char *)this + 0x48c);
  if (this_00 != pLVar1) {
    do {
      (this_00)->~ListData();
      this_00 = this_00 + 0x60;
    } while (this_00 != pLVar1);
    this_00 = *(ListData **)((char *)this + 0x48c);
  }
  *(ListData **)((char *)this + 0x490) = this_00;
  populateListData(unaff_EDI,unaff_ESI);
  (**(code **)(*(int *)this + 0x294))();
  *(undefined4 *)((char *)this + 0x44c) = **(undefined4 **)((char *)this + 0x450);
  return;
}


// Ghidra: void __thiscall UI_Sheet::mouseMove(UI_Sheet *this,float param_2,float param_3)
void UI_Sheet::mouseMove(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  UI_Sheet UVar1;
  UI_Sheet UVar2;
  UI_Sheet UVar3;
  uint uVar4;
  UI_Sheet UVar5;
  uint uVar6;
  UI_Sheet UVar7;
  UI_Sheet UVar8;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ca559;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar6 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  UVar7 = (byte)0x0;
  UVar1 = ((char *)this)[0x431];
  UVar2 = ((char *)this)[0x432];
  UVar3 = (byte)0x0;
  uVar4 = (*(int *)((char *)this + 0x490) - *(int *)((char *)this + 0x48c)) / 0x60;
  if (*(uint *)((char *)this + 0x440) < uVar4) {
    if ((((0 < *(int *)((char *)this + 0x42c)) && ((float)(*(int *)((char *)this + 0x2a0) + -0xc) <= param_2)) &&
        (param_2 < (float)*(int *)((char *)this + 0x2a0))) && (param_3 < 12.0)) {
      UVar3 = (UI_Sheet)(0.0 <= param_3);
    }
    if (((*(int *)((char *)this + 0x440) + *(int *)((char *)this + 0x42c) < (int)uVar4) &&
        ((float)(*(int *)((char *)this + 0x2a0) + -0xc) <= param_2)) &&
       ((param_2 < (float)*(int *)((char *)this + 0x2a0) &&
        ((param_3 < (float)*(int *)((char *)this + 0x2a4) &&
         ((float)(*(int *)((char *)this + 0x2a4) + -0xc) <= param_3)))))) {
      UVar7 = (byte)0x1;
    }
  }
  if ((UVar3 != UVar1) || (UVar8 = UVar2, UVar5 = UVar1, UVar7 != UVar2)) {
    ((char *)this)[0x431] = UVar3;
    ((char *)this)[0x432] = UVar7;
    UVar8 = UVar7;
    UVar5 = UVar3;
  }
  if ((UVar1 != UVar5) || (UVar2 != UVar8)) {
    (**(code **)(*(int *)this + 0x294))(uVar6);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_Sheet::mouseUp(UI_Sheet *this,float param_2,float param_3)
void UI_Sheet::mouseUp(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ShipDataInputType SVar1;
  int iVar2;
  uint uVar3;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c45e9;
  // [seh] local_10 = ExceptionList;
  // [cookie] SVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if ((((char *)this)[0x430] == (byte)0x0) || (param_2 < (float)(*(int *)((char *)this + 0x434) + 1))) {
    iVar2 = (int)param_3;
    if ((iVar2 < 0) || (*(int *)((char *)this + 0x2a4) < iVar2)) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 / *(int *)((char *)this + 0x444);
    }
    uVar3 = (*(int *)((char *)this + 0x42c) + iVar2) - 1;
    if (((char *)this)[0x454] == (byte)0x0) {
      uVar3 = *(int *)((char *)this + 0x42c) + iVar2;
    }
    if (((int)uVar3 < 0) ||
       ((uint)((*(int *)((char *)this + 0x490) - *(int *)((char *)this + 0x48c)) / 0x60) <= uVar3)) {
      uVar3 = 0xffffffff;
    }
    debugPrint("DETAIL","item number %d selected",uVar3);
    if (uVar3 == 0xffffffff) {
      **(undefined4 **)((char *)this + 0x450) = 0xffffffff;
    }
    else {
      **(undefined4 **)((char *)this + 0x450) = *(undefined4 *)(uVar3 * 0x60 + *(int *)((char *)this + 0x48c));
    }
    runDataInputSync(SVar1);
    (**(code **)(*(int *)this + 0x294))();
    // [seh] ExceptionList = local_10;
    return;
  }
  if (((char *)this)[0x431] == (byte)0x0) {
    if (((char *)this)[0x432] == (byte)0x0) goto LAB_0058bc29;
    uVar3 = (*(int *)((char *)this + 0x490) - *(int *)((char *)this + 0x48c)) / 0x60;
    if ((uVar3 <= *(uint *)((char *)this + 0x440)) ||
       ((int)uVar3 <= (int)(*(int *)((char *)this + 0x42c) + *(uint *)((char *)this + 0x440)))) goto LAB_0058bc29;
    **(undefined4 **)((char *)this + 0x450) = 0xffffffff;
    *(int *)((char *)this + 0x42c) = *(int *)((char *)this + 0x42c) + 1;
  }
  else {
    if (((uint)((*(int *)((char *)this + 0x490) - *(int *)((char *)this + 0x48c)) / 0x60) <= *(uint *)((char *)this + 0x440)
        ) || (*(int *)((char *)this + 0x42c) < 1)) goto LAB_0058bc29;
    **(undefined4 **)((char *)this + 0x450) = 0xffffffff;
    *(int *)((char *)this + 0x42c) = *(int *)((char *)this + 0x42c) + -1;
  }
  (**(code **)(*(int *)this + 0x294))();
LAB_0058bc29:
  *(undefined2 *)((char *)this + 0x431) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall UI_Sheet::keyUp(UI_Sheet *this,KeyCode param_1)
bool UI_Sheet::keyUp(KeyCode param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  InputConfiguration *pIVar2;
  SoundEngine *this_00;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  Ship *pSVar7;
  Sound SVar8;
  ShipCommand SVar9;
  int iVar10;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc5ef;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)((char *)this + 0x470) != 1) {
    return true;
  }
  if (**(int **)((char *)this + 0x450) == -1) {
    return false;
  }
  // [seh] ExceptionList = &local_10;
  if (ghidra::Singleton<void>::instance == (InputConfiguration *)0x0) {
    pIVar2 = operator_new(0x24);
    // [seh] local_8 = 0;
    ghidra::Singleton<void>::instance = (InputConfiguration *)new ((void *)(pIVar2)) InputConfiguration();
  }
  // [seh] local_8 = 0xffffffff;
  if (param_1 != 0) {
    uVar4 = 0;
    puVar3 = *(undefined4 **)(ghidra::Singleton<void>::instance + 0x18);
    uVar5 = *(int *)(ghidra::Singleton<void>::instance + 0x1c) - (int)puVar3 >> 2;
    if (uVar5 != 0) {
      do {
        if (*(KeyCode *)*puVar3 == param_1) {
          iVar10 = **(int **)((char *)this + 0x450);
          pIVar2 = ghidra::any_singleton();
          SVar9 = *(ShipCommand *)(*(int *)(*(int *)(pIVar2 + 0xc) + iVar10 * 4) + 0x24);
          pIVar2 = ghidra::any_singleton();
          (pIVar2)->setOption(SVar9, param_1);
          OISConfiguration::save();
          SVar8 = 8;
          goto LAB_0058be5c;
        }
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 < uVar5);
    }
    if (param_1 == 6) {
      iVar10 = **(int **)((char *)this + 0x450);
      pIVar2 = ghidra::any_singleton();
      iVar10 = *(int *)(*(int *)(*(int *)(pIVar2 + 0xc) + iVar10 * 4) + 0x24);
      pIVar2 = ghidra::any_singleton();
      uVar4 = 0;
      iVar6 = *(int *)(pIVar2 + 0xc);
      if (*(int *)(pIVar2 + 0x10) - iVar6 >> 2 != 0) {
        do {
          iVar6 = *(int *)(iVar6 + uVar4 * 4);
          if (*(int *)(iVar6 + 0x24) == iVar10) {
            *(undefined4 *)(iVar6 + 0x1c) = 0;
          }
          uVar4 = uVar4 + 1;
          iVar6 = *(int *)(pIVar2 + 0xc);
        } while (uVar4 < (uint)(*(int *)(pIVar2 + 0x10) - iVar6 >> 2));
      }
      OISConfiguration::save();
      SVar8 = 8;
      goto LAB_0058be5c;
    }
  }
  SVar8 = 10;
LAB_0058be5c:
  iVar10 = -1;
  pSVar7 = ShipData::currentlyBoardedShip;
  this_00 = ghidra::any_singleton();
  (this_00)->playSound(pSVar7, SVar8, iVar10);
  **(undefined4 **)((char *)this + 0x450) = 0xffffffff;
  (**(code **)(*(int *)this + 0x294))(uVar1);
  // [seh] ExceptionList = local_10;
  return true;
}
