// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_IconTray::UI_IconTray(UI_IconTray *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)
UI_IconTray::UI_IconTray(ScreenInterface * param_1, Widget * param_2, bool * param_3)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Widget *pWVar1;
  int iVar2;
  int *piVar3;
  ListData *pLVar4;
  bool bVar5;
  UI_IconTray UVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  ShipCommand SVar10;
  int iVar11;
  int iVar12;
  Size *pSVar13;
  void *pvVar14;
  nothrow_t *pnVar15;
  ListData *this_00;
  ghidra::vector *unaff_EDI;
  std::string local_88 [12];
  undefined4 uStack_7c;
  std::string local_70 [8];
  undefined4 uStack_68;
  Size local_48 [8];
  UI_IconTray *local_40;
  UI_IconTray *local_3c;
  Widget *local_38;
  UI_IconTray *local_34;
  void *local_30;
  uint local_1c;
  undefined1 *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca660;
  // [seh] local_10 = ExceptionList;
  // [cookie] puVar7 = (undefined1 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_38 = param_2;
  uStack_68 = 0x56af18;
  local_40 = this_;
  local_3c = this_;
  local_34 = this_;
  local_18 = puVar7;
  new ((void *)((ScreenElement *)this_)) ScreenElement(param_1, param_2, param_3);
  // [vtable] *(undefined ***)this_ = vftable;
  *(undefined4 *)((char *)this_ + 0x428) = 0xffffffff;
  *(undefined4 *)((char *)this_ + 0x42c) = 0;
  *(undefined2 *)((char *)this_ + 0x430) = 1;
  ((char *)this_)[0x432] = (byte)0x0;
  *(undefined4 *)((char *)this_ + 0x434) = 0;
  *(undefined4 *)((char *)this_ + 0x438) = 0;
  *(undefined4 *)((char *)this_ + 0x43c) = 1;
  *(undefined4 *)((char *)this_ + 0x440) = 1;
  *(undefined4 *)((char *)this_ + 0x444) = 0x20;
  *(undefined4 *)((char *)this_ + 0x448) = 0x20;
  *(undefined4 *)((char *)this_ + 0x44c) = 0x20;
  *(undefined4 *)((char *)this_ + 0x450) = 0x20;
  *(undefined2 *)((char *)this_ + 0x454) = 0;
  ((char *)this_)[0x456] = (byte)0x0;
  *(undefined2 *)((char *)this_ + 0x458) = 0;
  *(undefined4 *)((char *)this_ + 0x45c) = 0;
  *(undefined4 *)((char *)this_ + 0x464) = 0;
  *(undefined4 *)((char *)this_ + 0x468) = 0;
  *(undefined4 *)((char *)this_ + 0x46c) = 0;
  *(undefined4 *)((char *)this_ + 0x470) = 0;
  *(undefined4 *)((char *)this_ + 0x474) = 0;
  *(undefined4 *)((char *)this_ + 0x478) = 0;
  *(undefined4 *)((char *)this_ + 0x47c) = 0;
  *(undefined4 *)((char *)this_ + 0x480) = 0;
  *(undefined4 *)((char *)this_ + 0x484) = 0;
  *(undefined4 *)((char *)this_ + 0x488) = 0;
  *(undefined4 *)((char *)this_ + 0x48c) = 0;
  *(undefined4 *)((char *)this_ + 0x490) = 0;
  *(undefined4 *)((char *)this_ + 0x494) = 0;
  // [seh] local_8 = 4;
  *(undefined4 *)((char *)this_ + 0x498) = 0;
  ((char *)this_)[0x284] = (byte)0x1;
  ((char *)this_)[0x286] = (byte)0x1;
  ((char *)this_)[0x2dc] = (byte)0x1;
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b083;
  ghidra::str::assign(local_70,"cellwidth",9);
  pWVar1 = (Widget *)((char *)this_ + 0x290);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b0c0;
    ghidra::str::assign(local_70,"cellwidth",9);
    pcVar8 = (char *)(pWVar1)->getOption();
    if (0xf < *(uint *)(pcVar8 + 0x14)) {
      pcVar8 = *(char **)pcVar8;
    }
    iVar9 = atoi(pcVar8);
    *(int *)((char *)this_ + 0x444) = iVar9;
    if (0xf < local_1c) {
      pnVar15 = (nothrow_t *)(local_1c + 1);
      pvVar14 = local_30;
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar14 = *(void **)((int)local_30 + -4);
        pnVar15 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30 + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar14,pnVar15);
    }
    *(undefined4 *)((char *)this_ + 0x44c) = *(undefined4 *)((char *)this_ + 0x444);
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b143;
  ghidra::str::assign(local_70,"cellheight",10);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b174;
    ghidra::str::assign(local_70,"cellheight",10);
    pcVar8 = (char *)(pWVar1)->getOption();
    if (0xf < *(uint *)(pcVar8 + 0x14)) {
      pcVar8 = *(char **)pcVar8;
    }
    iVar9 = atoi(pcVar8);
    *(int *)((char *)this_ + 0x448) = iVar9;
    if (0xf < local_1c) {
      pnVar15 = (nothrow_t *)(local_1c + 1);
      pvVar14 = local_30;
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar14 = *(void **)((int)local_30 + -4);
        pnVar15 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30 + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar14,pnVar15);
    }
    *(undefined4 *)((char *)this_ + 0x450) = *(undefined4 *)((char *)this_ + 0x448);
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b1f7;
  ghidra::str::assign(local_70,"iconwidth",9);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b224;
    ghidra::str::assign(local_70,"iconwidth",9);
    pcVar8 = (char *)(pWVar1)->getOption();
    if (0xf < *(uint *)(pcVar8 + 0x14)) {
      pcVar8 = *(char **)pcVar8;
    }
    iVar9 = atoi(pcVar8);
    *(int *)((char *)this_ + 0x44c) = iVar9;
    if (0xf < local_1c) {
      pnVar15 = (nothrow_t *)(local_1c + 1);
      pvVar14 = local_30;
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar14 = *(void **)((int)local_30 + -4);
        pnVar15 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30 + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar14,pnVar15);
    }
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b29b;
  ghidra::str::assign(local_70,"iconheight",10);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b2c8;
    ghidra::str::assign(local_70,"iconheight",10);
    pcVar8 = (char *)(pWVar1)->getOption();
    if (0xf < *(uint *)(pcVar8 + 0x14)) {
      pcVar8 = *(char **)pcVar8;
    }
    iVar9 = atoi(pcVar8);
    *(int *)((char *)this_ + 0x450) = iVar9;
    if (0xf < local_1c) {
      pnVar15 = (nothrow_t *)(local_1c + 1);
      pvVar14 = local_30;
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar14 = *(void **)((int)local_30 + -4);
        pnVar15 = (nothrow_t *)(local_1c + 0x24);
        if (0x1f < (uint)((int)local_30 + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar14,pnVar15);
    }
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b33f;
  ghidra::str::assign(local_70,"showtext",8);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b36c;
    ghidra::str::assign(local_70,"showtext",8);
    UVar6 = (UI_IconTray)(pWVar1)->getOptionAsBool();
    ((char *)this_)[0x454] = UVar6;
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b39b;
  ghidra::str::assign(local_70,"centreicon",10);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b3c8;
    ghidra::str::assign(local_70,"centreicon",10);
    UVar6 = (UI_IconTray)(pWVar1)->getOptionAsBool();
    ((char *)this_)[0x459] = UVar6;
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b3f7;
  ghidra::str::assign(local_70,"centretext",10);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b424;
    ghidra::str::assign(local_70,"centretext",10);
    UVar6 = (UI_IconTray)(pWVar1)->getOptionAsBool();
    ((char *)this_)[0x456] = UVar6;
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b453;
  ghidra::str::assign(local_70,"bottomcentretext",0x10);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b480;
    ghidra::str::assign(local_70,"bottomcentretext",0x10);
    UVar6 = (UI_IconTray)(pWVar1)->getOptionAsBool();
    ((char *)this_)[0x455] = UVar6;
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b4af;
  ghidra::str::assign(local_70,"honourshipcolours",0x11);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    local_70[0] = (std::string)0x0;
    uStack_7c = 0x56b4dc;
    ghidra::str::assign(local_70,"honourshipcolours",0x11);
    UVar6 = (UI_IconTray)(pWVar1)->getOptionAsBool();
    ((char *)this_)[0x458] = UVar6;
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b50b;
  ghidra::str::assign(local_70,"draghook",8);
  bVar5 = (pWVar1)->hasOption();
  if (bVar5) {
    *(undefined4 *)((char *)this_ + 0x41c) = 300;
    local_88[0] = (std::string)0x0;
    ghidra::str::assign(local_88,"draghook",8);
    (pWVar1)->getOption(local_70);
    SVar10 = getShipCommandType();
    *(ShipCommand *)((char *)this_ + 0x45c) = SVar10;
  }
  local_70[0] = (std::string)0x0;
  uStack_7c = 0x56b57f;
  ghidra::str::assign(local_70,"noscroll",8);
  bVar5 = (pWVar1)->getOptionAsBool();
  if (bVar5) {
    *(undefined4 *)((char *)this_ + 0x434) = *(undefined4 *)((char *)this_ + 0x2a0);
    *(undefined4 *)((char *)this_ + 0x438) = *(undefined4 *)((char *)this_ + 0x2a4);
    ((char *)this_)[0x430] = (byte)0x0;
    *(int *)((char *)this_ + 0x440) = *(int *)(local_38 + 0x14) / *(int *)((char *)this_ + 0x444);
    *(int *)((char *)this_ + 0x43c) = *(int *)(local_38 + 0x10) / *(int *)((char *)this_ + 0x448);
  }
  else {
    iVar9 = *(int *)((char *)this_ + 0x444);
    ((char *)this_)[0x430] = (byte)0x1;
    iVar11 = (*(int *)(local_38 + 0x10) + -0xd) / iVar9;
    *(int *)((char *)this_ + 0x43c) = iVar11;
    iVar2 = *(int *)((char *)this_ + 0x448);
    iVar12 = *(int *)(local_38 + 0x14) / iVar2;
    *(int *)(local_3c + 0x440) = iVar12;
    *(int *)(local_3c + 0x434) = (iVar9 + 1) * iVar11 + 1;
    *(int *)(local_3c + 0x438) = (iVar2 + 1) * iVar12 + 1;
    this_ = local_3c;
  }
  piVar3 = *(int **)((char *)this_ + 0x3f0);
  *(int **)((char *)this_ + 0x464) = piVar3;
  iVar9 = *piVar3;
  *(int *)((char *)this_ + 0x460) = iVar9;
  if (iVar9 == *piVar3) {
    bVar5 = checkListDataChanged((ShipDataInputType)puVar7,unaff_EDI);
    if (!bVar5) goto LAB_0056b694;
  }
  pLVar4 = *(ListData **)((char *)this_ + 0x46c);
  this_00 = *(ListData **)((char *)this_ + 0x468);
  if (this_00 != pLVar4) {
    do {
      (this_00)->~ListData();
      this_00 = this_00 + 0x60;
    } while (this_00 != pLVar4);
    this_00 = *(ListData **)((char *)this_ + 0x468);
  }
  *(ListData **)((char *)this_ + 0x46c) = this_00;
  populateListData((ShipDataInputType)puVar7,unaff_EDI);
  (**(code **)(*(int *)this_ + 0x294))();
LAB_0056b694:
  pSVar13 = (Size *)cocos2d::Size::Size(local_48,(float)*(int *)((char *)this_ + 0x2a0),
                                        (float)*(int *)((char *)this_ + 0x2a4));
  cocos2d::Node::setContentSize((Node *)this_,pSVar13);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((int)((uint)local_18 ^ (uint)&stack0xfffffffc));
  return;
}


// Ghidra: void __thiscall UI_IconTray::~UI_IconTray(UI_IconTray *this)
UI_IconTray::~UI_IconTray()

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  ListData *this_00;
  ListData *pLVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca410;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  cleanupRender(this);
  pvVar1 = *(void **)((char *)this + 0x48c);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)((char *)this + 0x494) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) goto LAB_0056b920;
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)((char *)this + 0x48c) = 0;
    *(undefined4 *)((char *)this + 0x490) = 0;
    *(undefined4 *)((char *)this + 0x494) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x480);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)((char *)this + 0x488) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) goto LAB_0056b920;
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)((char *)this + 0x480) = 0;
    *(undefined4 *)((char *)this + 0x484) = 0;
    *(undefined4 *)((char *)this + 0x488) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x474);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)((char *)this + 0x47c) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) goto LAB_0056b920;
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)((char *)this + 0x474) = 0;
    *(undefined4 *)((char *)this + 0x478) = 0;
    *(undefined4 *)((char *)this + 0x47c) = 0;
  }
  this_00 = *(ListData **)((char *)this + 0x468);
  if (this_00 != (ListData *)0x0) {
    pLVar4 = *(ListData **)((char *)this + 0x46c);
    if (this_00 != pLVar4) {
      do {
        (this_00)->~ListData();
        this_00 = this_00 + 0x60;
      } while (this_00 != pLVar4);
      this_00 = *(ListData **)((char *)this + 0x468);
    }
    pnVar3 = (nothrow_t *)(((*(int *)((char *)this + 0x470) - (int)this_00) / 0x60) * 0x60);
    pLVar4 = this_00;
    if ((nothrow_t *)0xfff < pnVar3) {
      pLVar4 = *(ListData **)(this_00 + -4);
      pnVar3 = pnVar3 + 0x23;
      if ((ListData *)0x1f < this_00 + (-4 - (int)pLVar4)) {
LAB_0056b920:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pLVar4,pnVar3);
    *(undefined4 *)((char *)this + 0x468) = 0;
    *(undefined4 *)((char *)this + 0x46c) = 0;
    *(undefined4 *)((char *)this + 0x470) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  ((Widget *)((char *)this + 0x290))->~Widget();
  cocos2d::Node::~Node((Node *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_IconTray::cleanupRender(UI_IconTray *this)
void UI_IconTray::cleanupRender()

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x480);
  if (*(int *)((char *)this + 0x484) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x480) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x480);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x484) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x484) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x48c);
  if (*(int *)((char *)this + 0x490) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x48c) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x48c);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x490) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x490) = iVar2;
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x474);
  if (*(int *)((char *)this + 0x478) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x474) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x474);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x478) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x478) = iVar2;
  if (*(int **)((char *)this + 0x498) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x498) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x498) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_IconTray::render(UI_IconTray *this)
void UI_IconTray::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff18[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff00[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  AnimationFrames *pAVar2;
  bool bVar3;
  Sprite *pSVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  _TexParams *p_Var8;
  AnimationFrames *pAVar9;
  undefined4 *puVar10;
  AnimationFrames **ppAVar11;
  std::string *pbVar12;
  Scale9Sprite *pSVar13;
  UIText *pUVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  UI_IconTray *pUVar18;
  undefined4 uVar19;
  void *pvVar20;
  nothrow_t *pnVar21;
  UI_IconTray *pUVar22;
  float10 fVar23;
  float fVar24;
  undefined4 uStack_114;
  AnimationFrames *pAStack_110;
  char *pcVar25;
  Color3B local_c0 [3];
  Color3B local_bd [3];
  Color3B local_ba [3];
  Color3B local_b7 [3];
  Size local_b4 [8];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  AnimationFrames *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  UI_IconTray *local_4c;
  int local_48;
  int local_44;
  float local_40;
  UI_IconTray *local_3c;
  AnimationFrames *local_38;
  AnimationFrames *local_34;
  AnimationFrames *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca745;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_3c = this;
  (**(code **)(*(int *)this + 0x290))();
  local_4c = this + 0x468;
  if ((*(int *)((char *)this + 0x428) == -1) ||
     (*(int *)((char *)this + 0x428) != (*(int *)((char *)this + 0x46c) - *(int *)local_4c) / 0x60)) {
    *(undefined4 *)((char *)this + 0x42c) = 0;
    *(int *)((char *)this + 0x428) = (*(int *)((char *)this + 0x46c) - *(int *)local_4c) / 0x60;
  }
  ghidra::str::assign((std::string *)&stack0xffffff18,"white.png",9);
  pSVar4 = loadSprite();
  local_64 = 0;
  *(Sprite **)((char *)this + 0x498) = pSVar4;
  local_60 = (AnimationFrames *)0x0;
  // [seh] local_8 = 0;
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x498) + 0x48))();
  if (((char *)this)[0x458] != (byte)0x0) {
    (**(code **)(**(int **)((char *)this + 0x498) + 0x25c))();
  }
  iVar17 = **(int **)((char *)this + 0x498);
  iVar5 = (**(code **)(iVar17 + 0xb0))();
  iVar7 = *(int *)((char *)this + 0x434);
  local_54 = *(undefined4 *)(iVar5 + 4);
  pfVar6 = (float *)(**(code **)(**(int **)(local_3c + 0x498) + 0xb0))();
  pUVar22 = local_3c;
  fVar24 = (float)iVar7 / *pfVar6;
  (**(code **)(iVar17 + 0x3c))();
  pcVar25 = *(char **)(pUVar22 + 0x498);
  (**(code **)(*(int *)pUVar22 + 0x10c))();
  iVar17 = *(int *)(pUVar22 + 0x43c);
  iVar7 = *(int *)(pUVar22 + 0x440);
  local_68 = 0;
  local_54 = 0;
  pAVar9 = (AnimationFrames *)0x0;
  if (0 < iVar17 * iVar7) {
    do {
      local_48 = (*(int *)(pUVar22 + 0x444) + 1) * local_68 + 1;
      local_38 = (AnimationFrames *)(*(int *)(pUVar22 + 0x42c) * iVar17 + local_54);
      local_44 = (*(int *)(pUVar22 + 0x448) + 1) * (iVar7 - (int)pAVar9) - *(int *)(pUVar22 + 0x448)
      ;
      local_34 = pAVar9;
      if (pUVar22[0x457] != (byte)0x0) {
        ghidra::str::assign((std::string *)&stack0xffffff00,"white.png",9);
        local_30 = (AnimationFrames *)loadSprite();
        iVar17 = *(int *)local_30;
        iVar7 = (**(code **)(iVar17 + 0xb0))();
        local_50 = *(int *)(iVar7 + 4);
        (**(code **)(*(int *)local_30 + 0xb0))();
        (**(code **)(iVar17 + 0x3c))();
        pAVar9 = local_30;
        iVar17 = *(int *)local_30;
        cocos2d::Color3B::Color3B(local_b7,' ',' ',' ');
        (**(code **)(iVar17 + 0x25c))();
        (**(code **)(*(int *)pAVar9 + 0x48))();
        pUVar22 = local_3c;
        (**(code **)(*(int *)local_3c + 0x108))();
        ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x484);
        if (*(AnimationFrames ***)(pUVar22 + 0x488) == ppAVar11) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x480),ppAVar11,&local_30);
        }
        else {
          *ppAVar11 = pAVar9;
          *(int *)(pUVar22 + 0x484) = *(int *)(pUVar22 + 0x484) + 4;
        }
      }
      iVar17 = local_68 + 1;
      local_60 = local_34 + 1;
      if (iVar17 < *(int *)(pUVar22 + 0x43c)) {
        local_60 = local_34;
      }
      local_68 = 0;
      if (iVar17 < *(int *)(pUVar22 + 0x43c)) {
        local_68 = iVar17;
      }
      if (local_38 < (AnimationFrames *)((*(int *)(local_4c + 4) - *(int *)local_4c) / 0x60)) {
        local_50 = (int)local_38 * 0x60;
        iVar17 = *(int *)(local_50 + *(int *)local_4c);
        if ((iVar17 == **(int **)(pUVar22 + 0x464)) && (-1 < iVar17)) {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          ghidra::str::assign((std::string *)local_2c,"GeneralBorder.png",0x11);
          // [seh] local_8 = 1;
          pSVar13 = cocos2d::ui::Scale9Sprite::create((std::string *)local_2c);
          // [seh] local_8 = 0xffffffff;
          local_34 = (AnimationFrames *)pSVar13;
          if (0xf < local_18) {
            pnVar21 = (nothrow_t *)(local_18 + 1);
            pvVar20 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar21) {
              pvVar20 = *(void **)((int)local_2c[0] + -4);
              pnVar21 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20))) goto LAB_0056cd27;
            }
            operator_delete(pvVar20,pnVar21);
          }
          local_38 = (AnimationFrames *)(**(code **)(*(int *)(pSVar13 + 0x278) + 0xc))();
          p_Var8 = this_0065d534;
          if (this_0065d534 == (_TexParams *)0x0) {
            p_Var8 = operator_new(0x10);
            this_0065d534 = p_Var8;
            *(undefined4 *)(p_Var8 + 4) = 0x2600;
            *(undefined4 *)p_Var8 = 0x2600;
            *(undefined4 *)(p_Var8 + 8) = 0x812f;
            *(undefined4 *)(p_Var8 + 0xc) = 0x812f;
          }
          cocos2d::Texture2D::setTexParameters((Texture2D *)local_38,p_Var8);
          iVar17 = *(int *)pSVar13;
          cocos2d::Size::Size(local_b4,(float)*(int *)(pUVar22 + 0x444),
                              (float)*(int *)(pUVar22 + 0x448));
          (**(code **)(iVar17 + 0xac))();
          pAVar9 = local_34;
          local_74 = 0;
          local_70 = 0;
          // [seh] local_8 = 2;
          (**(code **)(*(int *)local_34 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          (**(code **)(*(int *)pAVar9 + 0x48))();
          iVar17 = *(int *)pAVar9;
          cocos2d::Color3B::Color3B(local_bd,'\0',0xff,0xbf);
          (**(code **)(iVar17 + 0x25c))();
          pAVar9 = local_34;
          (**(code **)(*(int *)pUVar22 + 0x108))();
          ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x490);
          if (*(AnimationFrames ***)(pUVar22 + 0x494) == ppAVar11) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x48c),ppAVar11,&local_34);
          }
          else {
            *ppAVar11 = pAVar9;
            *(int *)(pUVar22 + 0x490) = *(int *)(pUVar22 + 0x490) + 4;
          }
        }
        ghidra::str::assign((std::string *)&stack0xffffff00,"white.png",9);
        pSVar4 = loadSprite();
        local_30 = (AnimationFrames *)pSVar4;
        (**(code **)(*(int *)pSVar4 + 0x25c))();
        iVar17 = *(int *)pSVar4;
        iVar7 = (**(code **)(iVar17 + 0xb0))();
        local_38 = *(AnimationFrames **)(iVar7 + 4);
        (**(code **)(*(int *)local_30 + 0xb0))();
        pAVar9 = local_30;
        (**(code **)(iVar17 + 0x3c))();
        local_38 = (AnimationFrames *)(float)local_48;
        (**(code **)(*(int *)pAVar9 + 0x48))();
        pUVar22 = local_3c;
        (**(code **)(*(int *)local_3c + 0x108))();
        ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x484);
        if (*(AnimationFrames ***)(pUVar22 + 0x488) == ppAVar11) {
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x480),ppAVar11,&local_30);
        }
        else {
          *ppAVar11 = pAVar9;
          *(int *)(pUVar22 + 0x484) = *(int *)(pUVar22 + 0x484) + 4;
        }
        iVar17 = local_50;
        if (pUVar22[0x454] != (byte)0x0) {
          iVar7 = *(int *)local_4c;
          bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar25,(uint)fVar24);
          if (!bVar3) {
            if (pUVar22[0x455] == (byte)0x0) {
              if (pUVar22[0x456] != (byte)0x0) {
                ghidra::str::ctor
                          ((std::string *)&stack0xffffff00,
                           (std::string *)(iVar17 + 0x20 + iVar7));
                pUVar14 = UIText::create();
                local_84 = 0x3f000000;
                local_80 = 0x3f000000;
                // [seh] local_8 = 4;
                local_34 = (AnimationFrames *)pUVar14;
                (**(code **)(*(int *)pUVar14 + 0xa0))();
                goto LAB_0056c27d;
              }
              ghidra::str::ctor
                        ((std::string *)&stack0xffffff00,
                         (std::string *)(iVar7 + 0x20 + iVar17));
              pUVar14 = UIText::create();
              local_8c = 0;
              local_88 = 0;
              // [seh] local_8 = 5;
              local_34 = (AnimationFrames *)pUVar14;
              (**(code **)(*(int *)pUVar14 + 0xa0))();
              // [seh] local_8 = 0xffffffff;
              (**(code **)(*(int *)pUVar14 + 0x48))();
            }
            else {
              ghidra::str::ctor
                        ((std::string *)&stack0xffffff00,
                         (std::string *)(iVar17 + 0x20 + iVar7));
              pUVar14 = UIText::create();
              local_7c = 0x3f000000;
              local_78 = 0;
              // [seh] local_8 = 3;
              local_34 = (AnimationFrames *)pUVar14;
              (**(code **)(*(int *)pUVar14 + 0xa0))();
LAB_0056c27d:
              // [seh] local_8 = 0xffffffff;
              (**(code **)(*(int *)pUVar14 + 0x48))();
              iVar17 = local_50;
            }
            if (*(char *)(iVar17 + 0x5e + *(int *)local_4c) != '\0') {
              (**(code **)(*(int *)pUVar14 + 0x244))();
            }
            (**(code **)(*(int *)pUVar22 + 0x108))();
            ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x478);
            if (*(AnimationFrames ***)(pUVar22 + 0x47c) == ppAVar11) {
              ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x474),ppAVar11,&local_34)
              ;
            }
            else {
              *ppAVar11 = (AnimationFrames *)pUVar14;
              *(int *)(pUVar22 + 0x478) = *(int *)(pUVar22 + 0x478) + 4;
            }
          }
        }
        iVar7 = *(int *)local_4c;
        bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar25,(uint)fVar24);
        if (bVar3) {
          pUVar18 = pUVar22 + 0x480;
        }
        else {
          ghidra::str::ctor
                    ((std::string *)&stack0xffffff00,(std::string *)(iVar7 + 4 + iVar17));
          pAVar9 = (AnimationFrames *)loadSprite();
          local_30 = pAVar9;
          if (pUVar22[0x459] == (byte)0x0) {
            pfVar6 = (float *)(**(code **)(*(int *)pAVar9 + 0xb0))();
            if ((*pfVar6 == (float)*(int *)(pUVar22 + 0x44c)) &&
               (iVar17 = (**(code **)(*(int *)pAVar9 + 0xb0))(),
               *(float *)(iVar17 + 4) == (float)*(int *)(pUVar22 + 0x450))) {
              pfVar6 = (float *)(**(code **)(*(int *)pAVar9 + 0xb0))();
              iVar17 = (**(code **)(*(int *)pAVar9 + 0xb0))();
              if (*pfVar6 < *(float *)(iVar17 + 4) || *pfVar6 == *(float *)(iVar17 + 4)) {
                iVar17 = *(int *)pAVar9;
                local_38 = (AnimationFrames *)(float)*(int *)(pUVar22 + 0x450);
                local_34 = (AnimationFrames *)(float)*(int *)(pUVar22 + 0x450);
                (**(code **)(iVar17 + 0xb0))();
                (**(code **)(*(int *)pAVar9 + 0xb0))();
                (**(code **)(iVar17 + 0x3c))();
                iVar17 = *(int *)pAVar9;
                pfVar6 = (float *)(**(code **)(iVar17 + 0xb0))();
                local_34 = (AnimationFrames *)(*pfVar6 * 0.5);
                fVar23 = (float10)(**(code **)(*(int *)pAVar9 + 0x44))();
                local_38 = (AnimationFrames *)(float)fVar23;
LAB_0056c771:
                (**(code **)(iVar17 + 0x48))();
                pUVar22 = local_3c;
              }
              else {
                iVar17 = *(int *)pAVar9;
                puVar10 = (undefined4 *)(**(code **)(iVar17 + 0xb0))();
                local_34 = (AnimationFrames *)*puVar10;
                (**(code **)(*(int *)local_30 + 0xb0))();
                (**(code **)(iVar17 + 0x3c))();
                pAVar9 = local_30;
                (**(code **)(*(int *)local_30 + 0x48))();
                pUVar22 = local_3c;
              }
            }
            else {
              pfVar6 = (float *)(**(code **)(*(int *)pAVar9 + 0xb0))();
              iVar17 = (**(code **)(*(int *)pAVar9 + 0xb0))();
              if (*pfVar6 < *(float *)(iVar17 + 4) || *pfVar6 == *(float *)(iVar17 + 4)) {
                iVar17 = *(int *)pAVar9;
                local_34 = (AnimationFrames *)(float)*(int *)(pUVar22 + 0x450);
                local_40 = (float)*(int *)(pUVar22 + 0x450);
                (**(code **)(iVar17 + 0xb0))();
                (**(code **)(*(int *)pAVar9 + 0xb0))();
                (**(code **)(iVar17 + 0x3c))();
                iVar17 = *(int *)pAVar9;
                pfVar6 = (float *)(**(code **)(iVar17 + 0xb0))();
                local_34 = (AnimationFrames *)(*pfVar6 * 0.5);
                fVar23 = (float10)(**(code **)(*(int *)pAVar9 + 0x44))();
                local_40 = (float)fVar23;
                goto LAB_0056c771;
              }
              iVar17 = *(int *)pAVar9;
              puVar10 = (undefined4 *)(**(code **)(iVar17 + 0xb0))();
              local_34 = (AnimationFrames *)*puVar10;
              (**(code **)(*(int *)local_30 + 0xb0))();
              (**(code **)(iVar17 + 0x3c))();
              pAVar9 = local_30;
              (**(code **)(*(int *)local_30 + 0x48))();
              pUVar22 = local_3c;
            }
          }
          else {
            local_94 = 0x3f000000;
            local_90 = 0x3f000000;
            // [seh] local_8 = 6;
            (**(code **)(*(int *)pAVar9 + 0xa0))();
            // [seh] local_8 = 0xffffffff;
            (**(code **)(*(int *)pAVar9 + 0x48))();
          }
          iVar17 = local_50;
          if (*(char *)(local_50 + 0x5e + *(int *)local_4c) != '\0') {
            (**(code **)(*(int *)pAVar9 + 0x244))();
          }
          (**(code **)(*(int *)pUVar22 + 0x108))();
          ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x484);
          if (*(AnimationFrames ***)(pUVar22 + 0x488) == ppAVar11) {
            pUVar18 = pUVar22 + 0x480;
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)pUVar18,ppAVar11,&local_30);
          }
          else {
            *ppAVar11 = pAVar9;
            pUVar18 = pUVar22 + 0x480;
            *(int *)(pUVar22 + 0x484) = *(int *)(pUVar22 + 0x484) + 4;
          }
        }
        iVar7 = *(int *)(iVar17 + 0x50 + *(int *)local_4c);
        if ((iVar7 != -999) && (iVar7 != 0)) {
          pAStack_110 = (AnimationFrames *)0x56c80e;
          strUsingArgs(&stack0xffffff00);
          local_34 = (AnimationFrames *)UIText::create();
          local_9c = 0x3f800000;
          local_98 = 0x3f800000;
          // [seh] local_8 = 7;
          (**(code **)(*(int *)local_34 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          (**(code **)(*(int *)local_34 + 0x48))();
          (**(code **)(*(int *)pUVar22 + 0x108))();
          ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x478);
          if (*(AnimationFrames ***)(pUVar22 + 0x47c) == ppAVar11) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x474),ppAVar11,&local_34);
          }
          else {
            *ppAVar11 = local_34;
            *(int *)(pUVar22 + 0x478) = *(int *)(pUVar22 + 0x478) + 4;
          }
        }
        if (-1 < *(int *)(*(int *)local_4c + 0x1c + iVar17)) {
          pAStack_110 = (AnimationFrames *)0x56c8f0;
          strUsingArgs(&stack0xffffff00);
          local_34 = (AnimationFrames *)UIText::create();
          local_a4 = 0x3f800000;
          local_a0 = 0;
          // [seh] local_8 = 8;
          (**(code **)(*(int *)local_34 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          (**(code **)(*(int *)local_34 + 0x48))();
          (**(code **)(*(int *)pUVar22 + 0x108))();
          ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x478);
          if (*(AnimationFrames ***)(pUVar22 + 0x47c) == ppAVar11) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x474),ppAVar11,&local_34);
          }
          else {
            *ppAVar11 = local_34;
            *(int *)(pUVar22 + 0x478) = *(int *)(pUVar22 + 0x478) + 4;
          }
        }
        fVar1 = *(float *)(iVar17 + 0x54 + *(int *)local_4c);
        if (fVar1 != -1.0) {
          local_34 = (AnimationFrames *)(float)(*(int *)(pUVar22 + 0x444) + -4);
          pAVar9 = (AnimationFrames *)((float)local_34 * fVar1);
          if (1.0 <= (float)pAVar9) {
            local_38 = local_34;
            if ((float)pAVar9 <= (float)local_34) {
              local_38 = pAVar9;
            }
          }
          else {
            local_38 = (AnimationFrames *)0x0;
          }
          ghidra::str::assign((std::string *)&stack0xffffff00,"white.png",9);
          local_30 = (AnimationFrames *)loadSprite();
          iVar17 = *(int *)local_30;
          cocos2d::Color3B::Color3B(local_c0,'\0','\0','\0');
          (**(code **)(iVar17 + 0x25c))();
          iVar17 = *(int *)local_30;
          iVar7 = (**(code **)(iVar17 + 0xb0))();
          local_40 = *(float *)(iVar7 + 4);
          (**(code **)(*(int *)local_30 + 0xb0))();
          (**(code **)(iVar17 + 0x3c))();
          local_ac = 0;
          local_a8 = 0x3f800000;
          // [seh] local_8 = 9;
          (**(code **)(*(int *)local_30 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          (**(code **)(*(int *)local_30 + 0x48))();
          (**(code **)(*(int *)pUVar22 + 0x108))();
          ppAVar11 = *(AnimationFrames ***)(pUVar18 + 4);
          if (*(AnimationFrames ***)(pUVar18 + 8) == ppAVar11) {
            ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)pUVar18,ppAVar11,&local_30);
          }
          else {
            *ppAVar11 = local_30;
            *(int *)(pUVar18 + 4) = *(int *)(pUVar18 + 4) + 4;
          }
          if (0.0 < (float)local_38) {
            ghidra::str::assign((std::string *)&stack0xffffff00,"white.png",9);
            pSVar4 = loadSprite();
            local_30 = (AnimationFrames *)pSVar4;
            (**(code **)(*(int *)pSVar4 + 0x25c))();
            iVar17 = *(int *)pSVar4;
            iVar7 = (**(code **)(iVar17 + 0xb0))();
            local_40 = *(float *)(iVar7 + 4);
            (**(code **)(*(int *)local_30 + 0xb0))();
            (**(code **)(iVar17 + 0x3c))();
            pAVar9 = local_30;
            local_5c = 0;
            local_58 = 0x3f800000;
            // [seh] local_8 = 10;
            (**(code **)(*(int *)local_30 + 0xa0))();
            pAVar2 = local_30;
            pUVar22 = local_3c;
            // [seh] local_8 = 0xffffffff;
            (**(code **)(*(int *)pAVar9 + 0x48))();
            (**(code **)(*(int *)pUVar22 + 0x108))();
            ppAVar11 = *(AnimationFrames ***)(pUVar18 + 4);
            if (*(AnimationFrames ***)(pUVar18 + 8) == ppAVar11) goto LAB_0056cc59;
            *ppAVar11 = pAVar2;
            *(int *)(pUVar18 + 4) = *(int *)(pUVar18 + 4) + 4;
          }
        }
      }
      else {
        ghidra::str::assign((std::string *)&stack0xffffff00,"white.png",9);
        pSVar4 = loadSprite();
        iVar17 = *(int *)pSVar4;
        local_30 = (AnimationFrames *)pSVar4;
        cocos2d::Color3B::Color3B(local_ba,'\0','\0','\0');
        (**(code **)(iVar17 + 0x25c))();
        iVar17 = *(int *)pSVar4;
        iVar7 = (**(code **)(iVar17 + 0xb0))();
        local_38 = *(AnimationFrames **)(iVar7 + 4);
        (**(code **)(*(int *)local_30 + 0xb0))();
        pAVar9 = local_30;
        (**(code **)(iVar17 + 0x3c))();
        (**(code **)(*(int *)pAVar9 + 0x48))();
        pUVar22 = local_3c;
        (**(code **)(*(int *)local_3c + 0x108))();
        ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x484);
        pUVar18 = pUVar22 + 0x480;
        if (*(AnimationFrames ***)(pUVar22 + 0x488) == ppAVar11) {
LAB_0056cc59:
          ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)pUVar18,ppAVar11,&local_30);
        }
        else {
          *ppAVar11 = pAVar9;
          *(int *)(pUVar22 + 0x484) = *(int *)(pUVar22 + 0x484) + 4;
        }
      }
      iVar17 = *(int *)(pUVar22 + 0x43c);
      iVar7 = *(int *)(pUVar22 + 0x440);
      local_54 = local_54 + 1;
      pAVar9 = local_60;
    } while (local_54 < iVar17 * iVar7);
  }
  pUVar18 = local_4c;
  if (pUVar22[0x430] == (byte)0x0) goto LAB_0056d21d;
  if (((uint)(iVar17 * iVar7) < (uint)((*(int *)(local_4c + 4) - *(int *)local_4c) / 0x60)) &&
     (0 < *(int *)(pUVar22 + 0x42c))) {
    pbVar12 = (std::string *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0xb;
  }
  else {
    pbVar12 = (std::string *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0xc;
  }
  pSVar13 = cocos2d::ui::Scale9Sprite::create(pbVar12);
  // [seh] local_8 = 0xffffffff;
  local_30 = (AnimationFrames *)pSVar13;
  if (0xf < local_18) {
    pnVar21 = (nothrow_t *)(local_18 + 1);
    pvVar20 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar21) {
      pvVar20 = *(void **)((int)local_2c[0] + -4);
      pnVar21 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar20))) goto LAB_0056cd27;
    }
    operator_delete(pvVar20,pnVar21);
  }
  local_5c = 0;
  local_58 = 0x3f800000;
  // [seh] local_8 = 0xd;
  (**(code **)(*(int *)pSVar13 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)pSVar13 + 0x48))();
  iVar17 = *(int *)pSVar13;
  cocos2d::Size::Size(local_b4,12.0,12.0);
  (**(code **)(iVar17 + 0xac))();
  pAVar9 = local_30;
  (**(code **)(*(int *)pUVar22 + 0x10c))();
  ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x484);
  if (*(AnimationFrames ***)(pUVar22 + 0x488) == ppAVar11) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x480),ppAVar11,&local_30);
  }
  else {
    *ppAVar11 = pAVar9;
    *(int *)(pUVar22 + 0x484) = *(int *)(pUVar22 + 0x484) + 4;
  }
  if (((uint)(*(int *)(pUVar22 + 0x43c) * *(int *)(pUVar22 + 0x440)) <
       (uint)((*(int *)(pUVar18 + 4) - *(int *)pUVar18) / 0x60)) && (0 < *(int *)(pUVar22 + 0x42c)))
  {
    uVar19 = 0x37;
    if (pUVar22[0x431] != (byte)0x0) {
      uVar19 = 0x25;
    }
  }
  else {
    uVar19 = 0x38;
  }
  strUsingArgs((char *)&uStack_114,"`%c`a1",uVar19);
  pUVar14 = UIText::create();
  local_5c = 0x3f000000;
  local_58 = 0x3f000000;
  // [seh] local_8 = 0xe;
  local_34 = (AnimationFrames *)pUVar14;
  (**(code **)(*(int *)pUVar14 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  iVar17 = *(int *)pUVar14;
  (**(code **)(*(int *)local_30 + 0x74))();
  (**(code **)(*(int *)local_30 + 0x6c))();
  (**(code **)(iVar17 + 0x48))();
  pAVar9 = local_34;
  pAStack_110 = local_34;
  uStack_114 = 0x56cef4;
  (**(code **)(*(int *)pUVar22 + 0x108))();
  ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x478);
  if (*(AnimationFrames ***)(pUVar22 + 0x47c) == ppAVar11) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x474),ppAVar11,&local_34);
  }
  else {
    *ppAVar11 = pAVar9;
    *(int *)(pUVar22 + 0x478) = *(int *)(pUVar22 + 0x478) + 4;
  }
  uVar16 = (*(int *)(pUVar18 + 4) - *(int *)pUVar18) / 0x60;
  if ((uint)(*(int *)(pUVar22 + 0x43c) * *(int *)(pUVar22 + 0x440)) < uVar16) {
    uVar15 = uVar16 / *(uint *)(pUVar22 + 0x43c);
    if (*(uint *)(pUVar22 + 0x43c) * uVar15 < uVar16) {
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 <= *(int *)(pUVar22 + 0x42c) + *(int *)(pUVar22 + 0x440)) goto LAB_0056cfe3;
    pbVar12 = (std::string *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0xf;
    local_30 = (AnimationFrames *)cocos2d::ui::Scale9Sprite::create(pbVar12);
    if (0xf < local_18) {
      pnVar21 = (nothrow_t *)(local_18 + 1);
      pvVar20 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar21) {
        pvVar20 = *(void **)((int)local_2c[0] + -4);
        uVar16 = (int)local_2c[0] + (-4 - (int)pvVar20);
        goto joined_r0x0056d03d;
      }
      goto LAB_0056d043;
    }
  }
  else {
LAB_0056cfe3:
    pbVar12 = (std::string *)strUsingArgs((char *)local_2c);
    // [seh] local_8 = 0x10;
    local_30 = (AnimationFrames *)cocos2d::ui::Scale9Sprite::create(pbVar12);
    if (0xf < local_18) {
      pnVar21 = (nothrow_t *)(local_18 + 1);
      pvVar20 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar21) {
        pvVar20 = *(void **)((int)local_2c[0] + -4);
        uVar16 = (int)local_2c[0] + (-4 - (int)pvVar20);
joined_r0x0056d03d:
        pnVar21 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < uVar16) {
LAB_0056cd27:
          // [seh] local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_0056d043:
      // [seh] local_8 = 0xffffffff;
      operator_delete(pvVar20,pnVar21);
    }
  }
  pAVar9 = local_30;
  uVar16 = (*(int *)(pUVar18 + 4) - *(int *)pUVar18) / 0x60;
  if ((uint)(*(int *)(pUVar22 + 0x43c) * *(int *)(pUVar22 + 0x440)) < uVar16) {
    uVar15 = uVar16 / *(uint *)(pUVar22 + 0x43c);
    if (*(uint *)(pUVar22 + 0x43c) * uVar15 < uVar16) {
      uVar15 = uVar15 + 1;
    }
    if ((int)uVar15 <= *(int *)(pUVar22 + 0x42c) + *(int *)(pUVar22 + 0x440)) goto LAB_0056d0b3;
    local_54 = 0x37;
    if (pUVar22[0x432] != (byte)0x0) {
      local_54 = 0x25;
    }
  }
  else {
LAB_0056d0b3:
    local_54 = 0x38;
  }
  local_5c = 0;
  local_58 = 0;
  // [seh] local_8 = 0x11;
  (**(code **)(*(int *)local_30 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)pAVar9 + 0x48))();
  iVar17 = *(int *)pAVar9;
  cocos2d::Size::Size(local_b4,12.0,12.0);
  (**(code **)(iVar17 + 0xac))();
  (**(code **)(*(int *)pUVar22 + 0x10c))();
  ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x484);
  if (*(AnimationFrames ***)(pUVar22 + 0x488) == ppAVar11) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x480),ppAVar11,&local_30);
    pAVar9 = local_30;
  }
  else {
    *ppAVar11 = pAVar9;
    *(int *)(pUVar22 + 0x484) = *(int *)(pUVar22 + 0x484) + 4;
  }
  strUsingArgs((char *)&uStack_114,"`%c`a2",local_54);
  pUVar14 = UIText::create();
  local_6c = 0x3f000000;
  local_68 = 0x3f000000;
  // [seh] local_8 = 0x12;
  local_34 = (AnimationFrames *)pUVar14;
  (**(code **)(*(int *)pUVar14 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  iVar17 = *(int *)pUVar14;
  (**(code **)(*(int *)pAVar9 + 0x74))();
  (**(code **)(*(int *)pAVar9 + 0x6c))();
  pAVar9 = local_34;
  (**(code **)(iVar17 + 0x48))();
  pAStack_110 = pAVar9;
  uStack_114 = 0x56d1fa;
  (**(code **)(*(int *)pUVar22 + 0x108))();
  ppAVar11 = *(AnimationFrames ***)(pUVar22 + 0x478);
  if (*(AnimationFrames ***)(pUVar22 + 0x47c) == ppAVar11) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar22 + 0x474),ppAVar11,&local_34);
  }
  else {
    *ppAVar11 = pAVar9;
    *(int *)(pUVar22 + 0x478) = *(int *)(pUVar22 + 0x478) + 4;
  }
LAB_0056d21d:
  *(int *)(pUVar22 + 0x460) = **(int **)(pUVar22 + 0x464);
  **(undefined1 **)(pUVar22 + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_IconTray::specialDataCheckFunction(UI_IconTray *this,float param_1)
void UI_IconTray::specialDataCheckFunction(float param_1)

{
  ListData *pLVar1;
  bool bVar2;
  ghidra::vector *unaff_ESI;
  ListData *this_00;
  ShipDataInputType unaff_EDI;
  
  if ((*(int *)((char *)this + 0x460) == **(int **)((char *)this + 0x464)) &&
     (bVar2 = checkListDataChanged(unaff_EDI,unaff_ESI), !bVar2)) {
    return;
  }
  pLVar1 = *(ListData **)((char *)this + 0x46c);
  this_00 = *(ListData **)((char *)this + 0x468);
  if (this_00 != pLVar1) {
    do {
      (this_00)->~ListData();
      this_00 = this_00 + 0x60;
    } while (this_00 != pLVar1);
    this_00 = *(ListData **)((char *)this + 0x468);
  }
  *(ListData **)((char *)this + 0x46c) = this_00;
  populateListData(unaff_EDI,unaff_ESI);
  (**(code **)(*(int *)this + 0x294))();
  return;
}


// Ghidra: void __thiscall UI_IconTray::mouseHoverUpdate(UI_IconTray *this,float param_2,float param_3)
void UI_IconTray::mouseHoverUpdate(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  ScreenInterface *this_00;
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint unaff_EDI;
  uint uVar6;
  undefined4 *puVar7;
  char acStack_40 [16];
  undefined4 uStack_30;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c3eb9;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (((char *)this)[0x454] == (byte)0x0) {
    iVar3 = (int)param_2;
    if ((iVar3 < 0) || (*(int *)((char *)this + 0x2a0) < iVar3)) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar3 / (*(int *)((char *)this + 0x444) + 1);
    }
    iVar4 = (int)param_3;
    if ((iVar4 < 0) || (*(int *)((char *)this + 0x2a4) < iVar4)) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar4 / (*(int *)((char *)this + 0x448) + 1);
    }
    uVar6 = (*(int *)((char *)this + 0x42c) + iVar4) * *(int *)((char *)this + 0x43c) + iVar3;
    if (uVar6 < (uint)((*(int *)((char *)this + 0x46c) - *(int *)((char *)this + 0x468)) / 0x60)) {
      iVar3 = uVar6 * 0x60;
      puVar7 = (undefined4 *)(*(int *)((char *)this + 0x468) + 0x20 + iVar3);
      uStack_30 = 0x56d3ae;
      bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
      if (!bVar1) {
        if (0xf < (uint)puVar7[5]) {
          puVar7 = (undefined4 *)*puVar7;
        }
        uVar5 = 0x25;
        if (*(char *)(iVar3 + 0x5e + *(int *)((char *)this + 0x468)) != '\0') {
          uVar5 = 0x38;
        }
        strUsingArgs(acStack_40,"`%c%s",uVar5,puVar7);
        (*(ScreenInterface **)((char *)this + 0x278))->setToolTip();
        // [seh] ExceptionList = local_10;
        return;
      }
    }
    this_00 = *(ScreenInterface **)((char *)this + 0x278);
    uStack_30 = 0x56d44b;
    bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_EDI);
    if (!bVar1) {
      (this_00)->clearToolTip();
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_IconTray::mouseHoverCancel(UI_IconTray *this)
void UI_IconTray::mouseHoverCancel()

{
  int iVar1;
  bool bVar2;
  char *unaff_ESI;
  undefined4 *puVar3;
  uint unaff_retaddr;
  
  iVar1 = *(int *)((char *)this + 0x278);
  puVar3 = (undefined4 *)(iVar1 + 0xfc);
  bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,unaff_ESI,unaff_retaddr);
  if (!bVar2) {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar1 + 0x110)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_IconTray::mouseMove(UI_IconTray *this,float param_2,float param_3)
void UI_IconTray::mouseMove(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  UI_IconTray UVar1;
  UI_IconTray UVar2;
  bool bVar3;
  UI_IconTray UVar4;
  UI_IconTray UVar5;
  uint uVar6;
  UI_IconTray UVar7;
  UI_IconTray UVar8;
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
  if ((((((uint)(*(int *)((char *)this + 0x440) * *(int *)((char *)this + 0x43c)) <
          (uint)((*(int *)((char *)this + 0x46c) - *(int *)((char *)this + 0x468)) / 0x60)) &&
        (0 < *(int *)((char *)this + 0x42c))) && ((float)(*(int *)((char *)this + 0x2a0) + -0xc) <= param_2)) &&
      ((param_2 < (float)*(int *)((char *)this + 0x2a0) && (param_3 < 12.0)))) &&
     (UVar7 = (byte)0x0, 0.0 <= param_3)) {
    UVar7 = (byte)0x1;
  }
  bVar3 = canNext(this);
  UVar4 = (byte)0x0;
  if (((bVar3) && ((float)(*(int *)((char *)this + 0x2a0) + -0xc) <= param_2)) &&
     ((param_2 < (float)*(int *)((char *)this + 0x2a0) && (param_3 < (float)*(int *)((char *)this + 0x2a4))))) {
    UVar4 = (UI_IconTray)((float)(*(int *)((char *)this + 0x2a4) + -0xc) <= param_3);
  }
  if ((UVar7 != UVar1) || (UVar8 = UVar1, UVar5 = UVar2, UVar4 != UVar2)) {
    ((char *)this)[0x431] = UVar7;
    ((char *)this)[0x432] = UVar4;
    UVar8 = UVar7;
    UVar5 = UVar4;
  }
  if ((UVar1 != UVar8) || (UVar2 != UVar5)) {
    (**(code **)(*(int *)this + 0x294))(uVar6);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_IconTray::mouseUp(UI_IconTray *this,float param_2,float param_3)
void UI_IconTray::mouseUp(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c9299;
  // [seh] local_10 = ExceptionList;
  // [cookie] puVar2 = (undefined1 *)((uint)___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if ((((char *)this)[0x430] == (byte)0x0) || (param_2 < (float)(*(int *)((char *)this + 0x434) + 1))) {
    iVar3 = (int)param_2;
    if ((iVar3 < 0) || (*(int *)((char *)this + 0x2a0) < iVar3)) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar3 / (*(int *)((char *)this + 0x444) + 1);
    }
    iVar4 = (int)param_3;
    if ((iVar4 < 0) || (*(int *)((char *)this + 0x2a4) < iVar4)) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar4 / (*(int *)((char *)this + 0x448) + 1);
    }
    uVar5 = (*(int *)((char *)this + 0x42c) + iVar4) * *(int *)((char *)this + 0x43c) + iVar3;
    iVar3 = *(int *)((char *)this + 0x468);
    if ((uint)((*(int *)((char *)this + 0x46c) - iVar3) / 0x60) <= uVar5) {
      debugPrint("DETAIL","Invalid option to selected.");
      // [seh] ExceptionList = local_10;
      return;
    }
    iVar4 = uVar5 * 0x60;
    if (*(char *)(iVar4 + 0x5e + iVar3) == '\0') {
      iVar3 = *(int *)(iVar4 + iVar3);
      if (**(int **)((char *)this + 0x464) == iVar3) {
        iVar3 = -1;
      }
      **(int **)((char *)this + 0x464) = iVar3;
      runDataInputSync((ShipDataInputType)puVar2);
      (**(code **)(*(int *)this + 0x294))();
    }
    // [seh] ExceptionList = local_10;
    return;
  }
  if (((char *)this)[0x431] == (byte)0x0) {
    if (((char *)this)[0x432] == (byte)0x0) goto LAB_0056d6f5;
    bVar1 = canNext(this);
    if (!bVar1) goto LAB_0056d6f5;
    *(int *)((char *)this + 0x42c) = *(int *)((char *)this + 0x42c) + 1;
  }
  else {
    if (((uint)((*(int *)((char *)this + 0x46c) - *(int *)((char *)this + 0x468)) / 0x60) <=
         (uint)(*(int *)((char *)this + 0x440) * *(int *)((char *)this + 0x43c))) || (*(int *)((char *)this + 0x42c) < 1))
    goto LAB_0056d6f5;
    *(int *)((char *)this + 0x42c) = *(int *)((char *)this + 0x42c) + -1;
  }
  (**(code **)(*(int *)this + 0x294))();
LAB_0056d6f5:
  *(undefined2 *)((char *)this + 0x431) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall UI_IconTray::canNext(UI_IconTray *this)
bool UI_IconTray::canNext()

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((char *)this + 0x43c);
  uVar2 = (*(int *)((char *)this + 0x46c) - *(int *)((char *)this + 0x468)) / 0x60;
  if (uVar1 * *(int *)((char *)this + 0x440) < uVar2) {
    uVar3 = uVar2 / uVar1;
    if (uVar1 * uVar3 < uVar2) {
      uVar3 = uVar3 + 1;
    }
    if (*(int *)((char *)this + 0x42c) + *(int *)((char *)this + 0x440) < (int)uVar3) {
      return true;
    }
  }
  return false;
}


// Ghidra: basic_string<> * __thiscall UI_IconTray::getDragLook(UI_IconTray *this,basic_string<> *param_2,float param_3,float param_4)
std::string * UI_IconTray::getDragLook(std::string * param_2, float param_3, float param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  Good *pGVar5;
  Good *pGVar6;
  GameData *this_00;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c39b9;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  if (((*(int *)((char *)this + 0x45c) != 0) &&
      (iVar1 = *(int *)(g_gameData + 0xd0), *(int *)(iVar1 + 0xd4) == 3)) &&
     (*(int *)(iVar1 + 0xf8) == 2)) {
    iVar3 = (int)param_3;
    if ((iVar3 < 0) || (*(int *)((char *)this + 0x2a0) < iVar3)) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar3 / (*(int *)((char *)this + 0x444) + 1);
    }
    iVar4 = (int)param_4;
    if ((iVar4 < 0) || (*(int *)((char *)this + 0x2a4) < iVar4)) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar4 / (*(int *)((char *)this + 0x448) + 1);
    }
    this_00 = (GameData *)((*(int *)((char *)this + 0x42c) + iVar4) * *(int *)((char *)this + 0x43c) + iVar3);
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1f8) + 0xc + (int)this_00 * 4);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) &&
       (pGVar5 = (this_00)->getGood(*(int *)(iVar1 + 4)), pGVar5 != (Good *)0x0)) {
      pGVar6 = pGVar5 + 0x28;
      if (0xf < *(uint *)(pGVar5 + 0x3c)) {
        pGVar6 = *(Good **)pGVar6;
      }
      strUsingArgs((char *)param_2,"%s_Detail.png",pGVar6,uVar2);
      // [seh] ExceptionList = local_10;
      return param_2;
    }
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (std::string)0x0;
  ghidra::str::assign(param_2,"",0);
  // [seh] ExceptionList = local_10;
  return param_2;
}


// Ghidra: int __thiscall UI_IconTray::getDragValue(UI_IconTray *this,float param_2,float param_3)
int UI_IconTray::getDragValue(float param_2, float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)((char *)this + 0x45c) == 0) ||
      (iVar1 = *(int *)(g_gameData + 0xd0), *(int *)(iVar1 + 0xd4) != 3)) ||
     (*(int *)(iVar1 + 0xf8) != 2)) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)param_2;
    if ((iVar2 < 0) || (*(int *)((char *)this + 0x2a0) < iVar2)) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 / (*(int *)((char *)this + 0x444) + 1);
    }
    iVar3 = (int)param_3;
    if ((iVar3 < 0) || (*(int *)((char *)this + 0x2a4) < iVar3)) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar3 / (*(int *)((char *)this + 0x448) + 1);
    }
    iVar2 = (*(int *)((char *)this + 0x42c) + iVar3) * *(int *)((char *)this + 0x43c) + iVar2;
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1f8) + 0xc + iVar2 * 4);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) {
      return -1;
    }
  }
  return iVar2;
}


// Ghidra: void __thiscall UI_IconTray::dragOnto(UI_IconTray *this,undefined4 param_1,int param_2,float param_4,float param_5)
void UI_IconTray::dragOnto(undefined4 param_1, int param_2, float param_4, float param_5)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  int iVar2;
  ShipCommand in_stack_ffffff74;
  double local_58;
  double local_50 [2];
  int local_40;
  ghidra::lib::function_t local_3c [36];
  ghidra::lib::function_t *local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005ca781;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_14 = uVar1;
  if (((*(int *)((char *)this + 0x45c) != 0) && (*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)(g_gameData + 0xd0) + 0xf8) == 2)) {
    local_40 = (int)param_4;
    if ((local_40 < 0) || (*(int *)((char *)this + 0x2a0) < local_40)) {
      local_40 = -1;
    }
    else {
      local_40 = local_40 / (*(int *)((char *)this + 0x444) + 1);
    }
    iVar2 = (int)param_5;
    if ((iVar2 < 0) || (*(int *)((char *)this + 0x2a4) < iVar2)) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar2 / (*(int *)((char *)this + 0x448) + 1);
    }
    iVar2 = (*(int *)((char *)this + 0x42c) + iVar2) * *(int *)((char *)this + 0x43c) + local_40;
    ShipInterface::getShipCommandFunction(in_stack_ffffff74);
    std::function<>::ghidra::lib::function_t<>(local_3c,in_stack_ffffff74);
    // [seh] local_8._0_1_ = 1;
    if (local_18 != (ghidra::lib::function_t *)0x0) {
      local_58 = (double)param_2;
      local_40 = *(int *)(g_gameData + 0xd0);
      local_50[0] = (double)iVar2;
      local_50[1] = 0.0;
      (**(code **)(*(int *)local_18 + 8))(&local_40,&local_58,local_50,local_50 + 1,uVar1);
    }
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
    if (local_18 != (ghidra::lib::function_t *)0x0) {
      (**(code **)(*(int *)local_18 + 0x10))(local_18 != local_3c);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
