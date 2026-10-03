// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: UI_ModuleRepair * __thiscall UI_ModuleRepair::UI_ModuleRepair (UI_ModuleRepair *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)
UI_ModuleRepair::UI_ModuleRepair(ScreenInterface * param_1, Widget * param_2, bool * param_3)

{
  GameData *pGVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cacb0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  new ((void *)((ScreenElement *)this)) ScreenElement(param_1, param_2, param_3);
  // [vtable] *(undefined ***)this = vftable;
  *(undefined4 *)((char *)this + 0x428) = 0;
  *(undefined4 *)((char *)this + 0x42c) = 0xffffffff;
  ((char *)this)[0x430] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x438) = 0xffffffff;
  *(undefined2 *)((char *)this + 0x4dc) = 1;
  *(undefined1 **)((char *)this + 0x4e0) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x4e4) = 0;
  *(undefined2 *)((char *)this + 0x518) = 0x100;
  *(undefined1 **)((char *)this + 0x51c) = &DAT_bf800000;
  *(undefined4 *)((char *)this + 0x520) = 0;
  *(undefined4 *)((char *)this + 0x524) = 0;
  *(undefined4 *)((char *)this + 0x528) = 0;
  *(undefined4 *)((char *)this + 0x52c) = 0;
  *(undefined4 *)((char *)this + 0x530) = 0;
  *(undefined4 *)((char *)this + 0x534) = 0;
  *(undefined4 *)((char *)this + 0x538) = 0;
  *(undefined4 *)((char *)this + 0x53c) = 0;
  *(undefined4 *)((char *)this + 0x540) = 0;
  *(undefined4 *)((char *)this + 0x544) = 0;
  *(undefined4 *)((char *)this + 0x548) = 0;
  *(undefined4 *)((char *)this + 0x54c) = 0;
  *(undefined4 *)((char *)this + 0x550) = 0;
  *(undefined4 *)((char *)this + 0x554) = 0;
  *(undefined4 *)((char *)this + 0x558) = 0;
  *(undefined4 *)((char *)this + 0x55c) = 0;
  // [seh] local_8 = 4;
  ((char *)this)[0x2dc] = (byte)0x1;
  pGVar1 = g_gameData;
  uVar5 = 0;
  *(undefined4 *)((char *)this + 0x4f8) = 0;
  *(undefined4 *)((char *)this + 0x4fc) = 0;
  *(undefined4 *)((char *)this + 0x500) = 0;
  *(undefined4 *)((char *)this + 0x504) = 0;
  *(undefined4 *)((char *)this + 0x4e8) = 0xc0000000;
  *(undefined4 *)((char *)this + 0x4ec) = 0xc0000000;
  *(undefined4 *)((char *)this + 0x4f0) = 0xc0000000;
  *(undefined4 *)((char *)this + 0x4f4) = 0xc0000000;
  *(undefined4 *)((char *)this + 0x431) = 0x1010101;
  *(undefined4 *)((char *)this + 0x508) = 0;
  *(undefined4 *)((char *)this + 0x50c) = 0;
  *(undefined4 *)((char *)this + 0x510) = 0;
  *(undefined4 *)((char *)this + 0x514) = 0;
  *(undefined4 *)((char *)this + 0x43c) = 0;
  *(undefined4 *)((char *)this + 0x440) = 0;
  *(undefined4 *)((char *)this + 0x444) = 0;
  *(undefined4 *)((char *)this + 0x448) = 0;
  *(undefined4 *)((char *)this + 0x44c) = 0;
  *(undefined4 *)((char *)this + 0x450) = 0;
  *(undefined4 *)((char *)this + 0x454) = 0;
  *(undefined4 *)((char *)this + 0x458) = 0;
  *(undefined4 *)((char *)this + 0x45c) = 0;
  *(undefined4 *)((char *)this + 0x460) = 0;
  *(undefined4 *)((char *)this + 0x464) = 0;
  *(undefined4 *)((char *)this + 0x468) = 0;
  *(undefined4 *)((char *)this + 0x46c) = 0;
  *(undefined4 *)((char *)this + 0x470) = 0;
  *(undefined4 *)((char *)this + 0x474) = 0;
  *(undefined4 *)((char *)this + 0x478) = 0;
  *(undefined4 *)((char *)this + 0x47c) = 0;
  *(undefined4 *)((char *)this + 0x480) = 0;
  *(undefined4 *)((char *)this + 0x484) = 0;
  *(undefined4 *)((char *)this + 0x488) = 0;
  *(undefined4 *)((char *)this + 0x48c) = 0;
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
  *(undefined4 *)((char *)this + 0x4bc) = 0;
  *(undefined4 *)((char *)this + 0x4c0) = 0;
  *(undefined4 *)((char *)this + 0x4c4) = 0;
  *(undefined4 *)((char *)this + 0x4c8) = 0;
  *(undefined4 *)((char *)this + 0x4cc) = 0;
  *(undefined4 *)((char *)this + 0x4d0) = 0;
  *(undefined4 *)((char *)this + 0x4d4) = 0;
  *(undefined4 *)((char *)this + 0x4d8) = 0;
  iVar3 = *(int *)(*(int *)(pGVar1 + 0xd0) + 0x40);
  piVar4 = *(int **)(iVar3 + 0x3c);
  uVar2 = *(int *)(iVar3 + 0x40) - (int)piVar4 >> 2;
  if (uVar2 != 0) {
    do {
      iVar3 = *piVar4;
      if (*(int *)(iVar3 + 0x10) == *(int *)(*(int *)(pGVar1 + 0xd0) + 0x1d8)) goto LAB_00571b9a;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < uVar2);
  }
  iVar3 = 0;
LAB_00571b9a:
  *(int *)((char *)this + 0x428) = iVar3;
  if (iVar3 != 0) {
    ((char *)this)[0x430] = *(UI_ModuleRepair *)(iVar3 + 99);
    *(undefined4 *)((char *)this + 0x42c) = 0xffffffff;
  }
  iVar3 = 0;
  do {
    if (*(int *)((char *)this + 0x428) == 0) {
      this[iVar3 + 0x431] = (byte)0x1;
    }
    else {
      this[iVar3 + 0x431] = *(UI_ModuleRepair *)(*(int *)((char *)this + 0x428) + 0x1e + iVar3);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined4 *)((char *)this + 0x41c) = 0x65;
  ((char *)this)[0x286] = (byte)0x1;
  ((char *)this)[0x284] = (byte)0x1;
  syncAddonAndComponentStates(this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::~UI_ModuleRepair(UI_ModuleRepair *this)
UI_ModuleRepair::~UI_ModuleRepair()

{
  void *pvVar1;
  void *pvVar2;
  nothrow_t *pnVar3;
  Rect *this_00;
  Rect *pRVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca410;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  cleanupRender(this);
  this_00 = *(Rect **)((char *)this + 0x554);
  if (this_00 != (Rect *)0x0) {
    pRVar4 = *(Rect **)((char *)this + 0x558);
    if (this_00 != pRVar4) {
      do {
        cocos2d::Rect::~Rect(this_00);
        this_00 = this_00 + 0x14;
      } while (this_00 != pRVar4);
      this_00 = *(Rect **)((char *)this + 0x554);
    }
    pnVar3 = (nothrow_t *)(((*(int *)((char *)this + 0x55c) - (int)this_00) / 0x14) * 0x14);
    pRVar4 = this_00;
    if ((nothrow_t *)0xfff < pnVar3) {
      pRVar4 = *(Rect **)(this_00 + -4);
      pnVar3 = pnVar3 + 0x23;
      if ((Rect *)0x1f < this_00 + (-4 - (int)pRVar4)) goto LAB_00571e52;
    }
    operator_delete(pRVar4,pnVar3);
    *(undefined4 *)((char *)this + 0x554) = 0;
    *(undefined4 *)((char *)this + 0x558) = 0;
    *(undefined4 *)((char *)this + 0x55c) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x548);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)((char *)this + 0x550) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) goto LAB_00571e52;
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)((char *)this + 0x548) = 0;
    *(undefined4 *)((char *)this + 0x54c) = 0;
    *(undefined4 *)((char *)this + 0x550) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x53c);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)((char *)this + 0x544) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) goto LAB_00571e52;
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)((char *)this + 0x53c) = 0;
    *(undefined4 *)((char *)this + 0x540) = 0;
    *(undefined4 *)((char *)this + 0x544) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x530);
  if (pvVar1 != (void *)0x0) {
    pnVar3 = (nothrow_t *)(*(int *)((char *)this + 0x538) - (int)pvVar1 & 0xfffffffc);
    pvVar2 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar3) {
      pvVar2 = *(void **)((int)pvVar1 + -4);
      pnVar3 = pnVar3 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar2))) {
LAB_00571e52:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,pnVar3);
    *(undefined4 *)((char *)this + 0x530) = 0;
    *(undefined4 *)((char *)this + 0x534) = 0;
    *(undefined4 *)((char *)this + 0x538) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  ((Widget *)((char *)this + 0x290))->~Widget();
  cocos2d::Node::~Node((Node *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::cleanupRender(UI_ModuleRepair *this)
void UI_ModuleRepair::cleanupRender()

{
  Ref *this_00;
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  UI_ModuleRepair *pUVar5;
  
  uVar2 = 0;
  puVar3 = *(undefined4 **)((char *)this + 0x530);
  uVar1 = (uint)((int)*(undefined4 **)((char *)this + 0x534) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)((char *)this + 0x534) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      (**(code **)(*(int *)*puVar3 + 0x138))(1);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)((char *)this + 0x534) = *(undefined4 *)((char *)this + 0x530);
  uVar2 = 0;
  puVar3 = *(undefined4 **)((char *)this + 0x53c);
  uVar1 = (uint)((int)*(undefined4 **)((char *)this + 0x540) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)((char *)this + 0x540) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    do {
      (**(code **)(*(int *)*puVar3 + 0x138))(1);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  *(undefined4 *)((char *)this + 0x540) = *(undefined4 *)((char *)this + 0x53c);
  puVar3 = *(undefined4 **)((char *)this + 0x548);
  uVar1 = (uint)((int)*(undefined4 **)((char *)this + 0x54c) + (3 - (int)puVar3)) >> 2;
  if (*(undefined4 **)((char *)this + 0x54c) < puVar3) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      this_00 = (Ref *)*puVar3;
      (**(code **)(*(int *)this_00 + 0x138))(1);
      cocos2d::Ref::autorelease(this_00);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar1);
  }
  pUVar5 = this + 0x508;
  *(undefined4 *)((char *)this + 0x54c) = *(undefined4 *)((char *)this + 0x548);
  iVar4 = 4;
  do {
    if (*(int **)pUVar5 != (int *)0x0) {
      (**(code **)(**(int **)pUVar5 + 0x138))(1);
      *(int *)pUVar5 = 0;
    }
    pUVar5 = pUVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int **)((char *)this + 0x520) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x520) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x520) = 0;
  }
  if (*(int **)((char *)this + 0x524) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x524) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x524) = 0;
  }
  if (*(int **)((char *)this + 0x528) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x528) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x528) = 0;
  }
  if (*(int **)((char *)this + 0x52c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x52c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x52c) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::renderComponent(UI_ModuleRepair *this,int param_1,ShipModule *param_2,bool param_3)
void UI_ModuleRepair::renderComponent(int param_1, ShipModule * param_2, bool param_3)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff3c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff2c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  float fVar2;
  AnimationFrames **ppAVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  Rect *this_00;
  UI_ModuleRepair *pUVar7;
  AnimationFrames *pAVar8;
  bool bVar9;
  char *pcVar10;
  Node *this_01;
  float *pfVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  void *pvVar15;
  char cVar16;
  nothrow_t *pnVar17;
  uint unaff_EDI;
  char *pcVar18;
  uint uVar19;
  void *local_9c [5];
  uint local_88;
  UI_ModuleRepair *local_84;
  undefined4 local_80;
  Node *local_7c;
  float local_78;
  float local_74;
  float local_70;
  AnimationFrames *local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  AnimationFrames *local_58;
  char local_51;
  undefined4 local_50;
  AnimationFrames *local_4c;
  AnimationFrames *local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cad84;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar10 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  iVar1 = param_1 * 4;
  local_60 = param_1;
  local_4c = (AnimationFrames *)param_2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pcVar18 = (&PTR_s_Slot_HapNode_005e2134)
            [**(int **)(*(int *)(**(int **)(param_2 + 0xc) + 0x50) + iVar1)];
  local_58 = (AnimationFrames *)(pcVar18 + 1);
  pcVar13 = pcVar18;
  do {
    cVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar16 != '\0');
  local_84 = this_;
  local_14 = pcVar10;
  ghidra::str::assign((std::string *)local_2c,pcVar18,(int)pcVar13 - (int)local_58);
  // [seh] local_8 = 0;
  if (*(int *)(*(int *)(g_gameData + 0xd0) + 0x1dc) == local_60) {
    uVar19 = 0xd;
    pcVar18 = "_Selected.png";
LAB_005722e7:
    ghidra::str::append((std::string *)local_2c,pcVar18,uVar19);
  }
  else {
    pfVar11 = *(float **)(iVar1 + 4 + *(int *)(param_2 + 0xc));
    if (pfVar11 == (float *)0x0) {
      uVar19 = 0xe;
      pcVar18 = "_EmptyEdge.png";
      goto LAB_005722e7;
    }
    if (*pfVar11 < (float)*(int *)((int)pfVar11[1] + 0x10)) {
      uVar19 = 0xe;
      pcVar18 = "_Destroyed.png";
      goto LAB_005722e7;
    }
    if (*pfVar11 < (float)*(int *)((int)pfVar11[1] + 0x14)) {
      uVar19 = 0xc;
      pcVar18 = "_Damaged.png";
      goto LAB_005722e7;
    }
    ghidra::str::assign((std::string *)local_2c,"",0);
  }
  bVar9 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar10,unaff_EDI);
  if (!bVar9) {
    ghidra::str::ctor
              ((std::string *)&stack0xffffff3c,(std::string *)local_2c);
    local_48 = (AnimationFrames *)loadSprite();
    local_5c = 0x3f000000;
    local_58 = (AnimationFrames *)0x3f000000;
    // [seh] local_8._0_1_ = 1;
    (**(code **)(*(int *)local_48 + 0xa0))();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(*(int *)local_48 + 0x4c))();
    (**(code **)(*(int *)this_ + 0x108))();
    ppAVar3 = *(AnimationFrames ***)((char *)this_ + 0x534);
    local_58 = local_48;
    if (*(AnimationFrames ***)((char *)this_ + 0x538) == ppAVar3) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x530),ppAVar3,&local_58);
    }
    else {
      *ppAVar3 = local_48;
      *(int *)((char *)this_ + 0x534) = *(int *)((char *)this_ + 0x534) + 4;
    }
  }
  iVar12 = *(int *)(iVar1 + 4 + *(int *)(param_2 + 0xc));
  if (iVar12 == 0) {
    strUsingArgs(&stack0xffffff3c);
    local_48 = (AnimationFrames *)loadSprite();
    local_50 = 0x3f000000;
    local_4c = (AnimationFrames *)0x3f000000;
    // [seh] local_8._0_1_ = 8;
    (**(code **)(*(int *)local_48 + 0xa0))();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(*(int *)local_48 + 0x4c))();
    pfVar11 = (float *)(**(code **)(*(int *)local_48 + 0xb0))();
    local_7c = (Node *)*pfVar11;
    iVar12 = (**(code **)(*(int *)local_48 + 0xb0))();
    local_58 = *(AnimationFrames **)(iVar12 + 4);
    (**(code **)(*(int *)this_ + 0x108))();
    ppAVar3 = *(AnimationFrames ***)((char *)this_ + 0x534);
    local_4c = local_48;
    if (*(AnimationFrames ***)((char *)this_ + 0x538) == ppAVar3) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x530),ppAVar3,&local_4c);
    }
    else {
      *ppAVar3 = local_48;
      *(int *)((char *)this_ + 0x534) = *(int *)((char *)this_ + 0x534) + 4;
    }
    goto LAB_005727d6;
  }
  local_58 = *(AnimationFrames **)(iVar12 + 4);
  local_51 = '\x01';
  ghidra::str::ctor
            ((std::string *)local_44,(std::string *)(local_58 + 0x68));
  // [seh] local_8._0_1_ = 2;
  pfVar11 = *(float **)(iVar1 + 4 + *(int *)(param_2 + 0xc));
  fVar4 = pfVar11[1];
  fVar2 = *pfVar11;
  if ((float)*(int *)((int)fVar4 + 0x10) <= fVar2) {
    cVar16 = local_51;
    if (fVar2 < (float)*(int *)((int)fVar4 + 0x14)) {
      ghidra::str::append((std::string *)local_44,"_Damaged",8);
      cVar16 = local_51;
    }
  }
  else {
    ghidra::str::append((std::string *)local_44,"_Destroyed",10);
    cVar16 = '\0';
  }
  if ((param_3) ||
     (pfVar11 = *(float **)(iVar1 + 4 + *(int *)(param_2 + 0xc)),
     *pfVar11 <= (float)*(int *)((int)pfVar11[1] + 0x10) &&
     (float)*(int *)((int)pfVar11[1] + 0x10) != *pfVar11)) {
    if ((cVar16 == '\0') || (*(int *)(local_58 + 0x30) < 2)) goto LAB_00572447;
    this_01 = operator_new(0x2b8);
    // [seh] local_8._0_1_ = 3;
    uVar5 = *(undefined4 *)(local_58 + 0x30);
    local_7c = this_01;
    local_58 = *(AnimationFrames **)(local_58 + 0x34);
    ghidra::str::ctor((std::string *)local_9c,(std::string *)local_44);
    // [seh] local_8._0_1_ = 4;
    cocos2d::Node::Node(this_01);
    // [seh] local_8._0_1_ = 5;
    *(undefined ***)this_01 = UIAnimatedSprite::vftable;
    ghidra::str::ctor
              ((std::string *)(this_01 + 0x278),(std::string *)local_9c);
    *(undefined4 *)(this_01 + 0x290) = uVar5;
    *(undefined4 *)(this_01 + 0x294) = 0;
    *(AnimationFrames **)(this_01 + 0x298) = local_58;
    *(undefined4 *)(this_01 + 0x29c) = 0;
    *(undefined4 *)(this_01 + 0x2a0) = 0;
    *(undefined4 *)(this_01 + 0x2a4) = 0;
    *(undefined4 *)(this_01 + 0x2a8) = 0;
    *(undefined4 *)(this_01 + 0x2ac) = 0;
    *(undefined4 *)(this_01 + 0x2b0) = 0;
    // [seh] local_8._0_1_ = 3;
    if (0xf < local_88) {
      pnVar17 = (nothrow_t *)(local_88 + 1);
      pvVar15 = local_9c[0];
      if ((nothrow_t *)0xfff < pnVar17) {
        pvVar15 = *(void **)((int)local_9c[0] + -4);
        pnVar17 = (nothrow_t *)(local_88 + 0x24);
        if (0x1f < (uint)((int)local_9c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar15,pnVar17);
    }
    // [seh] local_8._0_1_ = 2;
    local_58 = (AnimationFrames *)this_01;
    ((UIAnimatedSprite *)this_01)->render();
    local_80 = 0x3f000000;
    local_7c = (Node *)0x3f000000;
    // [seh] local_8._0_1_ = 6;
    (**(code **)(*(int *)this_01 + 0xa0))();
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*(int *)this_01 + 0x4c))();
    this_ = local_84;
    (**(code **)(*(int *)local_84 + 0x108))();
    ppAVar3 = *(AnimationFrames ***)((char *)this_ + 0x54c);
    if (*(AnimationFrames ***)((char *)this_ + 0x550) == ppAVar3) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x548),ppAVar3,&local_58);
      this_01 = (Node *)local_58;
    }
    else {
      *ppAVar3 = (AnimationFrames *)this_01;
      *(int *)((char *)this_ + 0x54c) = *(int *)((char *)this_ + 0x54c) + 4;
    }
    pfVar11 = (float *)(**(code **)(*(int *)this_01 + 0xb0))();
    local_7c = (Node *)*pfVar11;
    iVar12 = (**(code **)(*(int *)this_01 + 0xb0))();
    param_2 = (ShipModule *)local_4c;
  }
  else {
    ghidra::str::append((std::string *)local_44,"_Offline",8);
LAB_00572447:
    strUsingArgs(&stack0xffffff3c);
    local_48 = (AnimationFrames *)loadSprite();
    local_50 = 0x3f000000;
    local_4c = (AnimationFrames *)0x3f000000;
    // [seh] local_8._0_1_ = 7;
    (**(code **)(*(int *)local_48 + 0xa0))();
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*(int *)local_48 + 0x4c))();
    (**(code **)(*(int *)this_ + 0x108))();
    ppAVar3 = *(AnimationFrames ***)((char *)this_ + 0x534);
    local_4c = local_48;
    if (*(AnimationFrames ***)((char *)this_ + 0x538) == ppAVar3) {
      ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x530),ppAVar3,&local_4c);
    }
    else {
      *ppAVar3 = local_48;
      *(int *)((char *)this_ + 0x534) = *(int *)((char *)this_ + 0x534) + 4;
    }
    pfVar11 = (float *)(**(code **)(*(int *)local_48 + 0xb0))();
    local_7c = (Node *)*pfVar11;
    iVar12 = (**(code **)(*(int *)local_48 + 0xb0))();
  }
  local_58 = *(AnimationFrames **)(iVar12 + 4);
  // [seh] local_8 = local_8 & 0xffffff00;
  if (0xf < local_30) {
    pnVar17 = (nothrow_t *)(local_30 + 1);
    pvVar15 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar17) {
      pvVar15 = *(void **)((int)local_44[0] + -4);
      pnVar17 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar17);
  }
LAB_005727d6:
  cocos2d::Rect::Rect((Rect *)&local_78);
  // [seh] local_8 = CONCAT31(local_8._1_3_,9);
  iVar12 = *(int *)(iVar1 + *(int *)(*(int *)(*(int *)(param_2 + 8) + 0xd8) + 0x50));
  local_78 = *(float *)(iVar12 + 0xc) - (float)local_7c * 0.5;
  local_68 = local_60;
  local_4c = *(AnimationFrames **)((char *)this_ + 0x558);
  local_74 = *(float *)(iVar12 + 0x10) - (float)local_58 * 0.5;
  local_70 = (float)local_7c;
  local_6c = local_58;
  if (*(Rect **)((char *)this_ + 0x55c) == (Rect *)local_4c) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this_ + 0x554),(Selectable *)local_4c,(Selectable *)&local_78);
  }
  else {
    cocos2d::Rect::Rect((Rect *)local_4c,(Rect *)&local_78);
    *(int *)(local_4c + 0x10) = local_68;
    *(int *)((char *)this_ + 0x558) = *(int *)((char *)this_ + 0x558) + 0x14;
  }
  piVar6 = *(int **)(param_2 + 0xc);
  local_68 = local_60 + 100;
  local_78 = *(float *)(*(int *)(iVar1 + *(int *)(*piVar6 + 0x50)) + 0xc) - local_70 * 0.5;
  local_74 = (float)local_6c * 0.5 + *(float *)(*(int *)(iVar1 + *(int *)(*piVar6 + 0x50)) + 0x10);
  if (piVar6[local_60 + 0x15] == 0) {
    ghidra::str::assign((std::string *)&stack0xffffff2c,"Addon_Empty.png",0xf);
    local_4c = (AnimationFrames *)loadSprite();
    // [seh] local_8._0_1_ = 0xb;
  }
  else {
    iVar1 = *(int *)(piVar6[local_60 + 0x15] + 4);
    puVar14 = (undefined4 *)(iVar1 + 0x68);
    if (0xf < *(uint *)(iVar1 + 0x7c)) {
      puVar14 = (undefined4 *)*puVar14;
    }
    strUsingArgs(&stack0xffffff2c,"%s.png",puVar14);
    local_4c = (AnimationFrames *)loadSprite();
    // [seh] local_8._0_1_ = 10;
  }
  local_60 = 0x3f000000;
  local_64 = 0x3f000000;
  (**(code **)(*(int *)local_4c + 0xa0))();
  pAVar8 = local_4c;
  // [seh] local_8 = CONCAT31(local_8._1_3_,9);
  (**(code **)(*(int *)local_4c + 0x48))();
  pUVar7 = local_84;
  (**(code **)(*(int *)local_84 + 0x108))();
  ppAVar3 = *(AnimationFrames ***)(pUVar7 + 0x534);
  local_4c = pAVar8;
  if (*(AnimationFrames ***)(pUVar7 + 0x538) == ppAVar3) {
    ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)(pUVar7 + 0x530),ppAVar3,&local_4c);
  }
  else {
    *ppAVar3 = pAVar8;
    *(int *)(pUVar7 + 0x534) = *(int *)(pUVar7 + 0x534) + 4;
  }
  this_00 = *(Rect **)((char *)this_ + 0x558);
  local_6c = (AnimationFrames *)0x41f00000;
  if (*(Rect **)((char *)this_ + 0x55c) == this_00) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this_ + 0x554),(Selectable *)this_00,(Selectable *)&local_78);
  }
  else {
    cocos2d::Rect::Rect(this_00,(Rect *)&local_78);
    *(int *)(this_00 + 0x10) = local_68;
    *(int *)((char *)this_ + 0x558) = *(int *)((char *)this_ + 0x558) + 0x14;
  }
  cocos2d::Rect::~Rect((Rect *)&local_78);
  if (0xf < local_18) {
    pnVar17 = (nothrow_t *)(local_18 + 1);
    pvVar15 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar17) {
      pvVar15 = *(void **)((int)local_2c[0] + -4);
      pnVar17 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar15))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar15,pnVar17);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::renderButton(UI_ModuleRepair *this)
void UI_ModuleRepair::renderButton()

{
  char cVar1;
  Sprite *pSVar2;
  float *pfVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  float fVar7;
  std::string local_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  undefined4 local_1c;
  
  if (*(int *)((char *)this + 0x520) != 0) {
    if (((char *)this)[0x518] == (byte)0x0) {
      pcVar5 = "ShieldSwitch_Off_Bright.png";
      if (((char *)this)[0x519] == (byte)0x0) {
        pcVar5 = "ShieldSwitch_Off.png";
      }
      local_20 = 0.0;
      local_1c = 0xf;
      local_30[0] = (std::string)0x0;
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ghidra::str::assign(local_30,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
      pSVar2 = loadSprite();
      *(Sprite **)((char *)this + 0x52c) = pSVar2;
      iVar6 = *(int *)pSVar2;
      local_1c = 0x572b80;
      pfVar3 = (float *)(**(code **)(**(int **)((char *)this + 0x520) + 0xb0))();
      fVar7 = *pfVar3;
      local_1c = 0x572b98;
      pfVar3 = (float *)(**(code **)(**(int **)((char *)this + 0x52c) + 0xb0))();
    }
    else {
      pcVar5 = "ShieldSwitch_On_Bright.png";
      if (((char *)this)[0x519] == (byte)0x0) {
        pcVar5 = "ShieldSwitch_On.png";
      }
      local_20 = 0.0;
      local_1c = 0xf;
      local_30[0] = (std::string)0x0;
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ghidra::str::assign(local_30,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
      pSVar2 = loadSprite();
      *(Sprite **)((char *)this + 0x52c) = pSVar2;
      iVar6 = *(int *)pSVar2;
      local_1c = 0x572b02;
      pfVar3 = (float *)(**(code **)(**(int **)((char *)this + 0x520) + 0xb0))();
      fVar7 = *pfVar3;
      local_1c = 0x572b1a;
      pfVar3 = (float *)(**(code **)(**(int **)((char *)this + 0x52c) + 0xb0))();
    }
    local_1c = 0x40400000;
    local_20 = fVar7 * 0.5 - *pfVar3 * 0.5;
    uStack_24 = 0x572bcf;
    (**(code **)(iVar6 + 0x48))();
    uStack_24 = 0xe;
    uStack_28 = *(undefined4 *)((char *)this + 0x52c);
    uStack_2c = 0x572be1;
    (**(code **)(*(int *)this + 0x108))();
  }
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::render(UI_ModuleRepair *this)
void UI_ModuleRepair::render()

{
  char stack0xffffffa8[1] = {0};  // [pseudo] address of an unnamed stack slot
  float fVar1;
  Rect *pRVar2;
  undefined4 *puVar3;
  bool bVar4;
  Sprite *pSVar5;
  Rect *this_00;
  ShipModule *pSVar6;
  uint uVar7;
  int iVar8;
  char *pcStack_50;
  Sprite *pSStack_4c;
  float fStack_48;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005ca249;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  pRVar2 = *(Rect **)((char *)this + 0x558);
  this_00 = *(Rect **)((char *)this + 0x554);
  if (this_00 != pRVar2) {
    do {
      cocos2d::Rect::~Rect(this_00);
      this_00 = this_00 + 0x14;
    } while (this_00 != pRVar2);
    this_00 = *(Rect **)((char *)this + 0x554);
  }
  *(Rect **)((char *)this + 0x558) = this_00;
  if (*(int *)((char *)this + 0x428) == 0) {
    // [seh] ExceptionList = local_10;
    return;
  }
  pSStack_4c = (Sprite *)**(undefined4 **)(*(int *)((char *)this + 0x428) + 0xc);
  if (0xf < *(uint *)((int)pSStack_4c + 0x14)) {
    pSStack_4c = *(Sprite **)pSStack_4c;
  }
  pcStack_50 = "%s.png";
  strUsingArgs((char *)&fStack_48);
  pSStack_4c = (Sprite *)0x572c81;
  pSVar5 = loadSprite();
  *(Sprite **)((char *)this + 0x520) = pSVar5;
  (**(code **)(*(int *)this + 0x108))();
  pSVar6 = *(ShipModule **)((char *)this + 0x428);
  local_14 = 0;
  if (*(int *)(*(int *)(*(int *)(pSVar6 + 8) + 0xd8) + 0x60) -
      *(int *)(*(int *)(*(int *)(pSVar6 + 8) + 0xd8) + 0x5c) >> 2 != 0) {
    do {
      ComponentInterfaceInstance::setActive
                (*(ComponentInterfaceInstance **)(*(int *)((char *)this + 0x428) + 0xc),
                 *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x428) + 8) + 0xd8) +
                                           0x5c) + local_14 * 4) + 0x10));
      puVar3 = *(undefined4 **)
                (*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x428) + 8) + 0xd8) + 0x5c) +
                local_14 * 4);
      pSStack_4c = (Sprite *)*puVar3;
      fStack_48 = (float)puVar3[1];
      pcStack_50 = (char *)0x572d2b;
      renderLine(this);
      pSVar6 = *(ShipModule **)((char *)this + 0x428);
      local_14 = local_14 + 1;
    } while (local_14 <
             (uint)(*(int *)(*(int *)(*(int *)(pSVar6 + 8) + 0xd8) + 0x60) -
                    *(int *)(*(int *)(*(int *)(pSVar6 + 8) + 0xd8) + 0x5c) >> 2));
  }
  uVar7 = 0;
  if (*(int *)(**(int **)(pSVar6 + 0xc) + 0x54) - *(int *)(**(int **)(pSVar6 + 0xc) + 0x50) >> 2 !=
      0) {
    do {
      if ((pSVar6[99] == (byte)0x0) ||
         (bVar4 = ComponentInterfaceInstance::setActive
                            (*(ComponentInterfaceInstance **)(pSVar6 + 0xc),
                             *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(pSVar6 + 8) + 0xd8) + 0x50
                                                       ) + uVar7 * 4) + 4)), !bVar4)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      fStack_48 = 8.006047e-39;
      renderComponent(this,uVar7,pSVar6,bVar4);
      pSVar6 = *(ShipModule **)((char *)this + 0x428);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(**(int **)(pSVar6 + 0xc) + 0x54) -
                            *(int *)(**(int **)(pSVar6 + 0xc) + 0x50) >> 2));
  }
  pcStack_50 = (char *)((uint)pcStack_50 & 0xffffff00);
  ghidra::str::assign((std::string *)&pcStack_50,"ComponentBackground_Border.png",0x1e);
  pSVar5 = loadSprite();
  *(Sprite **)((char *)this + 0x528) = pSVar5;
  (**(code **)(*(int *)this + 0x108))();
  renderButton(this);
  fVar1 = *(float *)((char *)this + 0x4e0);
  if (*(char *)(*(int *)((char *)this + 0x428) + 0x1c) == '\0') {
    if (fVar1 != -2.0) goto LAB_00572e48;
    *(undefined1 **)((char *)this + 0x4e0) = &DAT_bf800000;
  }
  else {
    if (fVar1 == -1.0) {
      *(undefined4 *)((char *)this + 0x4e0) = 0xc0000000;
      goto LAB_00572e9a;
    }
LAB_00572e48:
    if (fVar1 == -2.0) goto LAB_00572e9a;
  }
  fStack_48 = 0.0;
  ghidra::str::assign
            ((std::string *)&stack0xffffffa8,"ComponentBackground_Glass.png",0x1d);
  pSVar5 = loadSprite();
  *(Sprite **)((char *)this + 0x528) = pSVar5;
  setCoverState(this);
  fStack_48 = *(float *)((char *)this + 0x528);
  pSStack_4c = (Sprite *)0x572e9a;
  (**(code **)(*(int *)this + 0x108))();
LAB_00572e9a:
  iVar8 = 0;
  do {
    fStack_48 = 0.0;
    ghidra::str::assign
              ((std::string *)&stack0xffffffa8,"ComponentBackground_Screw.png",0x1d);
    pSVar5 = loadSprite();
    // [seh] local_8 = 0;
    fStack_48 = 8.006525e-39;
    (**(code **)(*(int *)pSVar5 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    switch(iVar8) {
    case 0:
      fStack_48 = (float)(*(int *)((char *)this + 0x2a4) + -0xb);
      pSStack_4c = (Sprite *)0x41300000;
      goto LAB_00572f7e;
    case 1:
      fStack_48 = 11.0;
      pSStack_4c = (Sprite *)0x41300000;
      pcStack_50 = (char *)0x572f41;
      (**(code **)(*(int *)pSVar5 + 0x48))();
      break;
    case 2:
      fStack_48 = 11.0;
      goto LAB_00572f69;
    case 3:
      fStack_48 = (float)(*(int *)((char *)this + 0x2a4) + -0xb);
LAB_00572f69:
      pSStack_4c = (Sprite *)(float)(*(int *)((char *)this + 0x2a0) + -10);
LAB_00572f7e:
      pcStack_50 = (char *)0x572f85;
      (**(code **)(*(int *)pSVar5 + 0x48))();
    }
    *(Sprite **)(this + iVar8 * 4 + 0x508) = pSVar5;
    fStack_48 = 1.96182e-44;
    pcStack_50 = (char *)0x572f99;
    pSStack_4c = pSVar5;
    (**(code **)(*(int *)this + 0x108))();
    iVar8 = iVar8 + 1;
    if (3 < iVar8) {
      setScrewState(this);
      **(undefined1 **)((char *)this + 0x288) = 1;
      iVar8 = *(int *)this;
      (**(code **)(**(int **)((char *)this + 0x520) + 0xb0))();
      fStack_48 = 8.006834e-39;
      (**(code **)(iVar8 + 0xac))();
      // [seh] ExceptionList = local_10;
      return;
    }
  } while( true );
}


// Ghidra: void __thiscall UI_ModuleRepair::specialDataCheckFunction(UI_ModuleRepair *this,float param_1)
void UI_ModuleRepair::specialDataCheckFunction(float param_1)

{
  int iVar1;
  UIAnimatedSprite *this_00;
  int *piVar2;
  float *pfVar3;
  bool bVar4;
  GameData *pGVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  UI_ModuleRepair *pUVar10;
  UI_ModuleRepair *pUVar11;
  float unaff_EDI;
  UI_ModuleRepair *pUVar12;
  UI_ModuleRepair UVar13;
  float fVar14;
  undefined4 uVar15;
  int local_10;
  int local_c;
  
  pGVar5 = g_gameData;
  if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
    return;
  }
  uVar8 = 0;
  bVar6 = false;
  iVar9 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40);
  iVar1 = *(int *)(iVar9 + 0x3c);
  uVar7 = *(int *)(iVar9 + 0x40) - iVar1 >> 2;
  if (uVar7 != 0) {
    do {
      local_10 = *(int *)(iVar1 + uVar8 * 4);
      if (*(int *)(local_10 + 0x10) == *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d8))
      goto LAB_0057304c;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  local_10 = 0;
LAB_0057304c:
  iVar9 = *(int *)((char *)this + 0x428);
  if (local_10 != iVar9) {
    *(int *)((char *)this + 0x428) = local_10;
    if (local_10 == 0) {
      UVar13 = (byte)0x0;
    }
    else {
      UVar13 = *(UI_ModuleRepair *)(local_10 + 99);
    }
    ((char *)this)[0x430] = UVar13;
    *(undefined4 *)((char *)this + 0x42c) = *(undefined4 *)(*(int *)(pGVar5 + 0xd0) + 0x1dc);
    if (local_10 == 0) {
      ((char *)this)[0x431] = (byte)0x1;
      fVar14 = -2.0;
    }
    else {
      ((char *)this)[0x431] = *(UI_ModuleRepair *)(local_10 + 0x1e);
      fVar14 = (float)(int)((*(char *)(local_10 + 0x1e) == '\0') - 2);
    }
    *(float *)((char *)this + 0x4e8) = fVar14;
    if (local_10 == 0) {
      ((char *)this)[0x432] = (byte)0x1;
      fVar14 = -2.0;
    }
    else {
      ((char *)this)[0x432] = *(UI_ModuleRepair *)(local_10 + 0x1f);
      fVar14 = (float)(int)((*(char *)(local_10 + 0x1f) == '\0') - 2);
    }
    *(float *)((char *)this + 0x4ec) = fVar14;
    if (local_10 == 0) {
      ((char *)this)[0x433] = (byte)0x1;
      fVar14 = -2.0;
    }
    else {
      ((char *)this)[0x433] = *(UI_ModuleRepair *)(local_10 + 0x20);
      fVar14 = (float)(int)((*(char *)(local_10 + 0x20) == '\0') - 2);
    }
    *(float *)((char *)this + 0x4f0) = fVar14;
    if (local_10 == 0) {
      ((char *)this)[0x434] = (byte)0x1;
      fVar14 = -2.0;
    }
    else {
      ((char *)this)[0x434] = *(UI_ModuleRepair *)(local_10 + 0x21);
      fVar14 = (float)(int)((*(char *)(local_10 + 0x21) == '\0') - 2);
    }
    *(float *)((char *)this + 0x4f4) = fVar14;
    if (local_10 == 0) {
      UVar13 = (byte)0x1;
    }
    else {
      UVar13 = (UI_ModuleRepair)(*(char *)(local_10 + 0x1c) == '\0');
    }
    ((char *)this)[0x4dc] = UVar13;
    *(undefined4 *)((char *)this + 0x438) = 0xffffffff;
    bVar6 = true;
    iVar9 = local_10;
  }
  iVar1 = *(int *)(pGVar5 + 0xd0);
  if (iVar9 == 0) {
    *(undefined4 *)(iVar1 + 0x1d8) = 0xffffffff;
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x1dc);
  if (*(int *)((char *)this + 0x42c) != iVar1) {
    *(int *)((char *)this + 0x42c) = iVar1;
    bVar6 = true;
  }
  if (((char *)this)[0x430] != *(UI_ModuleRepair *)(iVar9 + 99)) {
    ((char *)this)[0x430] = *(UI_ModuleRepair *)(iVar9 + 99);
    (**(code **)(*(int *)this + 0x294))();
    return;
  }
  uVar7 = 0;
  iVar9 = *(int *)((char *)this + 0x548);
  bVar4 = false;
  if (*(int *)((char *)this + 0x54c) - iVar9 >> 2 != 0) {
    do {
      this_00 = *(UIAnimatedSprite **)(iVar9 + uVar7 * 4);
      iVar9 = *(int *)(this_00 + 0x290);
      if (1 < iVar9) {
        fVar14 = *(float *)(this_00 + 0x29c) + param_1;
        *(float *)(this_00 + 0x29c) = fVar14;
        if (*(float *)(this_00 + 0x298) / (float)iVar9 <= fVar14) {
          *(int *)(this_00 + 0x294) = *(int *)(this_00 + 0x294) + 1;
          *(float *)(this_00 + 0x29c) = fVar14 - *(float *)(this_00 + 0x298) / (float)iVar9;
          if (iVar9 <= *(int *)(this_00 + 0x294)) {
            *(undefined4 *)(this_00 + 0x294) = 0;
          }
          (this_00)->render();
          bVar4 = true;
        }
      }
      uVar7 = uVar7 + 1;
      iVar9 = *(int *)((char *)this + 0x548);
    } while (uVar7 < (uint)(*(int *)((char *)this + 0x54c) - iVar9 >> 2));
  }
  pUVar11 = this + 0x431;
  pUVar10 = (UI_ModuleRepair *)(local_10 + 0x1e);
  pUVar12 = this + 0x4e8;
  local_c = 4;
  do {
    uVar15 = 0x43b40000;
    if (*pUVar11 != *pUVar10) {
      if (*pUVar10 == (byte)0x0) {
        uVar15 = 0;
      }
      *(undefined4 *)pUVar12 = uVar15;
      *pUVar11 = *pUVar10;
      debugPrint("DETAIL","Begun toggling screw %d",pUVar10 + (-0x1d - local_10));
    }
    pUVar12 = pUVar12 + 4;
    pUVar10 = pUVar10 + 1;
    pUVar11 = pUVar11 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar9 = *(int *)((char *)this + 0x438);
  if (iVar9 == -1) {
    *(uint *)((char *)this + 0x438) = (uint)(*(char *)(local_10 + 0x1c) != '\0');
  }
  else {
    if (iVar9 == 0) {
      if (*(char *)(local_10 + 0x1c) == '\0') goto LAB_005733bb;
      *(undefined4 *)((char *)this + 0x438) = 1;
      if (*(float *)((char *)this + 0x4e0) == -1.0) {
        *(undefined4 *)((char *)this + 0x4e0) = 0;
      }
      *(undefined2 *)((char *)this + 0x4dc) = 0;
    }
    else {
      if ((iVar9 != 1) || (*(char *)(local_10 + 0x1c) != '\0')) goto LAB_005733bb;
      if (*(float *)((char *)this + 0x4e0) == -2.0) {
        *(undefined4 *)((char *)this + 0x4e0) = 0;
      }
      *(undefined2 *)((char *)this + 0x4dc) = 0x101;
      *(undefined4 *)((char *)this + 0x438) = 0;
    }
    bVar6 = true;
  }
LAB_005733bb:
  if (*(int *)(*(int *)(g_gameData + 0xd0) + 0x1d8) != -1) {
    iVar9 = 0x54;
    do {
      piVar2 = *(int **)(this + iVar9 + 1000);
      pfVar3 = *(float **)(*(int *)(*(int *)((char *)this + 0x428) + 0xc) + -0x50 + iVar9);
      if (piVar2 != (int *)0x0) {
        if (((pfVar3 != (float *)0x0) && (*piVar2 == *(int *)pfVar3[1])) &&
           ((float)piVar2[1] == *pfVar3)) goto LAB_00573426;
LAB_005733ff:
        syncAddonAndComponentStates(this);
        goto LAB_00573466;
      }
      if (pfVar3 != (float *)0x0) goto LAB_005733ff;
LAB_00573426:
      piVar2 = *(int **)(this + iVar9 + 0x438);
      pfVar3 = *(float **)(*(int *)(*(int *)((char *)this + 0x428) + 0xc) + iVar9);
      if (piVar2 == (int *)0x0) {
        if (pfVar3 != (float *)0x0) goto LAB_005733ff;
      }
      else if (((pfVar3 == (float *)0x0) || (*piVar2 != *(int *)pfVar3[1])) ||
              ((float)piVar2[1] != *pfVar3)) goto LAB_005733ff;
      iVar9 = iVar9 + 4;
    } while (iVar9 < 0xa4);
  }
  if (bVar6) {
LAB_00573466:
    (**(code **)(*(int *)this + 0x294))();
  }
  bVar6 = runAnimations(this,unaff_EDI);
  if ((bVar6) || (bVar4)) {
    **(undefined1 **)((char *)this + 0x288) = 1;
  }
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::setScrewState(UI_ModuleRepair *this)
void UI_ModuleRepair::setScrewState()

{
  code *pcVar1;
  int *piVar2;
  UI_ModuleRepair *pUVar3;
  int iVar4;
  int iVar5;
  
  pUVar3 = this + 0x508;
  iVar4 = 4;
  do {
    if (*(int **)pUVar3 != (int *)0x0) {
      iVar5 = **(int **)pUVar3;
      if (*(float *)(pUVar3 + -0x20) == -1.0) {
        (**(code **)(iVar5 + 0xb4))(0);
      }
      else {
        pcVar1 = *(code **)(iVar5 + 0xb4);
        if (*(float *)(pUVar3 + -0x20) == -2.0) {
          (*pcVar1)(1);
          piVar2 = *(int **)pUVar3;
          iVar5 = 0;
        }
        else {
          (*pcVar1)(1);
          piVar2 = *(int **)pUVar3;
          iVar5 = *(int *)(pUVar3 + -0x20);
        }
        (**(code **)(*piVar2 + 0xbc))(iVar5);
      }
    }
    pUVar3 = pUVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::syncAddonAndComponentStates(UI_ModuleRepair *this)
void UI_ModuleRepair::syncAddonAndComponentStates()

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  UI_ModuleRepair *pUVar8;
  uint uVar9;
  int local_8;
  
  uVar9 = 0;
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40);
  piVar2 = *(int **)(iVar1 + 0x3c);
  uVar7 = *(int *)(iVar1 + 0x40) - (int)piVar2 >> 2;
  if (uVar7 != 0) {
    piVar6 = piVar2;
    while (*(int *)(*piVar6 + 0x10) != *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d8)) {
      uVar9 = uVar9 + 1;
      piVar6 = piVar6 + 1;
      if (uVar7 <= uVar9) {
        return;
      }
    }
    iVar1 = piVar2[uVar9];
    if (iVar1 != 0) {
      iVar4 = -0x438 - (int)this;
      local_8 = 0x14;
      iVar3 = -(int)this;
      pUVar8 = this + 0x48c;
      do {
        if (*(void **)(pUVar8 + -0x50) != (void *)0x0) {
          operator_delete(*(void **)(pUVar8 + -0x50),(nothrow_t *)0x8);
          *(int *)(pUVar8 + -0x50) = 0;
        }
        if (*(int *)(pUVar8 + *(int *)(iVar1 + 0xc) + iVar3 + -0x488) != 0) {
          puVar5 = operator_new(8);
          *puVar5 = 0;
          *(undefined8 **)(pUVar8 + -0x50) = puVar5;
          *(undefined4 *)puVar5 =
               **(undefined4 **)(*(int *)(pUVar8 + *(int *)(iVar1 + 0xc) + iVar3 + -0x488) + 4);
          *(undefined4 *)(*(int *)(pUVar8 + -0x50) + 4) =
               **(undefined4 **)(pUVar8 + *(int *)(iVar1 + 0xc) + iVar3 + -0x488);
        }
        if (*(void **)pUVar8 != (void *)0x0) {
          operator_delete(*(void **)pUVar8,(nothrow_t *)0x8);
          *(int *)pUVar8 = 0;
        }
        if (*(int *)(pUVar8 + *(int *)(iVar1 + 0xc) + iVar4) != 0) {
          puVar5 = operator_new(8);
          *puVar5 = 0;
          *(undefined8 **)pUVar8 = puVar5;
          *(undefined4 *)puVar5 =
               **(undefined4 **)(*(int *)(pUVar8 + *(int *)(iVar1 + 0xc) + iVar4) + 4);
          *(undefined4 *)(*(int *)pUVar8 + 4) =
               **(undefined4 **)(pUVar8 + *(int *)(iVar1 + 0xc) + iVar4);
        }
        pUVar8 = pUVar8 + 4;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::setCoverState(UI_ModuleRepair *this)
void UI_ModuleRepair::setCoverState()

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  
  if (*(float *)((char *)this + 0x4e0) == -1.0) {
    (**(code **)(**(int **)((char *)this + 0x528) + 0x48))(0,0);
    return;
  }
  iVar2 = **(int **)((char *)this + 0x528);
  if (*(float *)((char *)this + 0x4e0) != -2.0) {
    pcVar1 = *(code **)(iVar2 + 0xb0);
    if (((char *)this)[0x4dd] == (byte)0x0) {
      iVar2 = (*pcVar1)();
      fVar5 = *(float *)((char *)this + 0x4e0);
      piVar4 = *(int **)((char *)this + 0x528);
      if (*(float *)(iVar2 + 4) <= fVar5) {
        *(undefined4 *)((char *)this + 0x4e0) = 0xc0000000;
        (**(code **)(*piVar4 + 0xb4))(0);
        return;
      }
    }
    else {
      iVar2 = (*pcVar1)();
      piVar4 = *(int **)((char *)this + 0x528);
      if (*(float *)((char *)this + 0x4e0) < *(float *)(iVar2 + 4)) {
        iVar2 = *piVar4;
        iVar3 = (**(code **)(iVar2 + 0xb0))();
        (**(code **)(iVar2 + 0x48))(0,*(float *)(iVar3 + 4) - *(float *)((char *)this + 0x4e0));
        (**(code **)(**(int **)((char *)this + 0x528) + 0xb4))(1);
        return;
      }
      *(undefined1 **)((char *)this + 0x4e0) = &DAT_bf800000;
      fVar5 = 0.0;
    }
    (**(code **)(*piVar4 + 0x48))(0,fVar5);
    (**(code **)(**(int **)((char *)this + 0x528) + 0xb4))(1);
    return;
  }
  (**(code **)(iVar2 + 0xb4))(0);
  return;
}


// Ghidra: bool __thiscall UI_ModuleRepair::runAnimations(UI_ModuleRepair *this,float param_1)
bool UI_ModuleRepair::runAnimations(float param_1)

{
  UI_ModuleRepair UVar1;
  UI_ModuleRepair UVar2;
  bool bVar3;
  char cVar4;
  UI_ModuleRepair *pUVar5;
  int iVar6;
  int iVar7;
  UI_ModuleRepair *this_00;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  float fVar11;
  float in_XMM1_Da;
  undefined4 uVar12;
  bool local_5;
  
  iVar6 = *(int *)(g_gameData + 0xd0);
  this_00 = (UI_ModuleRepair *)0x0;
  local_5 = false;
  iVar7 = *(int *)(*(int *)(iVar6 + 0x40) + 0x3c);
  pUVar5 = (UI_ModuleRepair *)(*(int *)(*(int *)(iVar6 + 0x40) + 0x40) - iVar7 >> 2);
  if (pUVar5 != (UI_ModuleRepair *)0x0) {
    do {
      piVar9 = *(int **)(iVar7 + (int)this_00 * 4);
      if (piVar9[4] == *(int *)(iVar6 + 0x1d8)) goto LAB_005737df;
      this_00 = this_00 + 1;
    } while (this_00 < pUVar5);
  }
  piVar9 = (int *)0x0;
LAB_005737df:
  if ((*(int *)(iVar6 + 0x1d8) == -1) || (piVar9 == (int *)0x0)) {
    return false;
  }
  UVar1 = ((char *)this)[0x518];
  UVar2 = ((char *)this)[0x519];
  fVar11 = in_XMM1_Da;
  if (((char *)this)[0x4dc] == (byte)0x0) {
    ((char *)this)[0x518] = (byte)0x0;
    cVar4 = (**(code **)(*piVar9 + 0x14))();
    if (cVar4 == '\0') {
      puVar10 = *(undefined1 **)((char *)this + 0x51c);
      if ((float)puVar10 == -1.0) {
        *(undefined4 *)((char *)this + 0x51c) = 0;
        puVar10 = (undefined1 *)0x0;
      }
      goto LAB_00573898;
    }
    *(undefined1 **)((char *)this + 0x51c) = &DAT_bf800000;
  }
  else {
    ((char *)this)[0x518] = (byte)0x1;
    bVar3 = anyScrews(this_00);
    if (bVar3) {
      *(undefined1 **)((char *)this + 0x51c) = &DAT_bf800000;
      puVar10 = &DAT_bf800000;
    }
    else {
      puVar10 = *(undefined1 **)((char *)this + 0x51c);
      if ((float)puVar10 == -1.0) {
        *(undefined4 *)((char *)this + 0x51c) = 0;
        puVar10 = (undefined1 *)0x0;
      }
    }
LAB_00573898:
    if ((float)puVar10 != -1.0) {
      fVar11 = (float)puVar10 + fVar11;
      *(float *)((char *)this + 0x51c) = fVar11;
      if (fVar11 < 1.0) {
        ((char *)this)[0x519] = (UI_ModuleRepair)(0.7 <= fVar11);
      }
      else {
        ((char *)this)[0x519] = (byte)0x0;
        *(float *)((char *)this + 0x51c) = fVar11 - 1.0;
      }
    }
  }
  if ((UVar1 != ((char *)this)[0x518]) || (UVar2 != ((char *)this)[0x519])) {
    local_5 = true;
    renderButton(this);
  }
  if (*(float *)((char *)this + 0x4e0) < 0.0) goto LAB_00573a14;
  *(float *)((char *)this + 0x4e0) = in_XMM1_Da * 600.0 + *(float *)((char *)this + 0x4e0);
  if (((char *)this)[0x4dd] == (byte)0x0) {
    iVar6 = (**(code **)(**(int **)((char *)this + 0x528) + 0xb0))();
    fVar11 = *(float *)((char *)this + 0x4e0);
    piVar8 = *(int **)((char *)this + 0x528);
    if (fVar11 < *(float *)(iVar6 + 4)) goto LAB_005739e2;
    *(undefined4 *)((char *)this + 0x4e0) = 0xc0000000;
    uVar12 = 0;
  }
  else {
    iVar6 = (**(code **)(**(int **)((char *)this + 0x528) + 0xb0))();
    piVar8 = *(int **)((char *)this + 0x528);
    if (*(float *)((char *)this + 0x4e0) < *(float *)(iVar6 + 4)) {
      iVar6 = *piVar8;
      iVar7 = (**(code **)(iVar6 + 0xb0))();
      (**(code **)(iVar6 + 0x48))(0,*(float *)(iVar7 + 4) - *(float *)((char *)this + 0x4e0));
    }
    else {
      *(undefined1 **)((char *)this + 0x4e0) = &DAT_bf800000;
      fVar11 = 0.0;
LAB_005739e2:
      (**(code **)(*piVar8 + 0x48))(0,fVar11);
    }
    piVar8 = *(int **)((char *)this + 0x528);
    uVar12 = 1;
  }
  (**(code **)(*piVar8 + 0xb4))(uVar12);
  setCoverState(this);
  local_5 = true;
LAB_00573a14:
  fVar11 = *(float *)((char *)this + 0x4e4) + in_XMM1_Da;
  *(float *)((char *)this + 0x4e4) = fVar11;
  if (0.025 <= fVar11) {
    pUVar5 = this + 0x4e8;
    iVar6 = 0;
    *(float *)((char *)this + 0x4e4) = fVar11 - 0.025;
    do {
      fVar11 = *(float *)pUVar5;
      if ((fVar11 != -2.0) && (fVar11 != -1.0)) {
        if (*(char *)(iVar6 + 0x1e + (int)piVar9) == '\0') {
          fVar11 = fVar11 - 45.0;
          *(float *)pUVar5 = fVar11;
          if (fVar11 <= 0.0) {
            *(int *)(pUVar5 + 0x10) = (int)*(float *)(pUVar5 + 0x10) + 1;
            *(float *)pUVar5 = fVar11 + 360.0;
            if (1 < (int)*(float *)(pUVar5 + 0x10)) {
              *(undefined1 **)pUVar5 = &DAT_bf800000;
              goto LAB_00573acd;
            }
          }
        }
        else {
          fVar11 = fVar11 + 45.0;
          *(float *)pUVar5 = fVar11;
          if (360.0 <= fVar11) {
            *(int *)(pUVar5 + 0x10) = (int)*(float *)(pUVar5 + 0x10) + 1;
            *(float *)pUVar5 = fVar11 - 360.0;
            if (1 < (int)*(float *)(pUVar5 + 0x10)) {
              *(float *)pUVar5 = -2.0;
LAB_00573acd:
              *(float *)(pUVar5 + 0x10) = 0.0;
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      pUVar5 = pUVar5 + 4;
    } while (iVar6 < 4);
    setScrewState(this);
  }
  return local_5;
}


// Ghidra: bool __thiscall UI_ModuleRepair::anyScrews(UI_ModuleRepair *this)
bool UI_ModuleRepair::anyScrews()

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40);
  iVar2 = *(int *)(iVar4 + 0x3c);
  uVar1 = *(int *)(iVar4 + 0x40) - iVar2 >> 2;
  if (uVar1 != 0) {
    do {
      iVar4 = *(int *)(iVar2 + uVar3 * 4);
      if (*(int *)(iVar4 + 0x10) == *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d8))
      goto LAB_00573b36;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  iVar4 = 0;
LAB_00573b36:
  iVar2 = 0;
  do {
    if (*(char *)(iVar4 + 0x1e + iVar2) != '\0') {
      return true;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return false;
}


// Ghidra: void __thiscall UI_ModuleRepair::mouseHoverUpdate(UI_ModuleRepair *this,undefined4 param_2,float param_3)
void UI_ModuleRepair::mouseHoverUpdate(undefined4 param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  float *pfVar1;
  float fVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  Size *pSVar6;
  Vec2 *pVVar7;
  Rect *this_00;
  ShipModule *pSVar8;
  UI_ModuleRepair *this_01;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint unaff_EDI;
  float fVar12;
  std::string abStack_54 [16];
  undefined4 uStack_44;
  Rect local_28 [16];
  char *local_18;
  undefined1 local_11;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005cadc2;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  iVar5 = (**(code **)(*(int *)this + 0xb0))();
  piVar10 = *(int **)((char *)this + 0x52c);
  param_3 = *(float *)(iVar5 + 4) - param_3;
  pSVar6 = (Size *)(**(code **)(**(int **)((char *)this + 0x52c) + 0xb0))();
  pVVar7 = (Vec2 *)(**(code **)(*piVar10 + 0x5c))();
  uStack_44 = 0x573bd0;
  this_00 = (Rect *)cocos2d::Rect::Rect(local_28,pVVar7,pSVar6);
  // [seh] local_8._0_1_ = 1;
  bVar3 = cocos2d::Rect::containsPoint(this_00,(Vec2 *)&param_2);
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  cocos2d::Rect::~Rect(local_28);
  if (bVar3) {
    bVar3 = anyScrews(this_01);
    if (!bVar3) {
      uStack_44 = 0;
      abStack_54[0] = (std::string)0x0;
      ghidra::str::assign(abStack_54,"Module open/close switch",0x18);
      (*(ScreenInterface **)((char *)this + 0x278))->setToolTip();
      // [seh] ExceptionList = local_10;
      return;
    }
  }
  else {
    uStack_44 = 0x573c75;
    iVar5 = getComponentSlot(this);
    if (iVar5 != -1) {
      if (99 < iVar5) {
        (*(ScreenInterface **)((char *)this + 0x278))->clearToolTip();
        // [seh] ExceptionList = local_10;
        return;
      }
      pSVar8 = SystemManager::getModule
                         (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),
                          *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d8));
      local_18 = (char *)(iVar5 * 4);
      pfVar1 = *(float **)(*(int *)(pSVar8 + 0xc) + 4 + (int)local_18);
      if (pfVar1 != (float *)0x0) {
        fVar2 = pfVar1[1];
        fVar12 = (float)*(int *)((int)fVar2 + 0x14);
        piVar10 = (int *)((int)fVar2 + 0x38);
        local_11 = *pfVar1 <= fVar12 && fVar12 != *pfVar1;
        if (0xf < *(uint *)((int)fVar2 + 0x4c)) {
          piVar10 = (int *)*piVar10;
        }
        piVar9 = (int *)((int)fVar2 + 0x50);
        if (0xf < *(uint *)((int)fVar2 + 100)) {
          piVar9 = (int *)*piVar9;
        }
        local_18 = "";
        pcVar4 = " (damaged)";
        if (*pfVar1 > fVar12 || fVar12 == *pfVar1) {
          pcVar4 = "";
        }
        strUsingArgs((char *)abStack_54,"%s %s %s%s",piVar9,piVar10,
                     (&PTR_s_Hap_Node_005e2d68)[*(int *)((int)fVar2 + 0x80)],pcVar4);
        (*(ScreenInterface **)((char *)this + 0x278))->setToolTip();
        // [seh] ExceptionList = local_10;
        return;
      }
      strUsingArgs((char *)abStack_54,"%s slot",
                   (&PTR_s_Hap_Node_005e2d68)
                   [**(int **)(*(int *)(*(int *)(*(int *)(pSVar8 + 8) + 0xd8) + 0x50) +
                              (int)local_18)]);
      (*(ScreenInterface **)((char *)this + 0x278))->setToolTip();
      // [seh] ExceptionList = local_10;
      return;
    }
  }
  iVar5 = *(int *)((char *)this + 0x278);
  puVar11 = (undefined4 *)(iVar5 + 0xfc);
  uStack_44 = 0x573dd8;
  bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar4,unaff_EDI);
  if (!bVar3) {
    *(undefined4 *)(iVar5 + 0x10c) = 0;
    if (0xf < *(uint *)(iVar5 + 0x110)) {
      puVar11 = (undefined4 *)*puVar11;
    }
    *(undefined1 *)puVar11 = 0;
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_ModuleRepair::mouseUp(UI_ModuleRepair *this,float param_2,float param_3)
void UI_ModuleRepair::mouseUp(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffd8[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  Size *pSVar5;
  Vec2 *pVVar6;
  Rect *this_00;
  SoundEngine *this_01;
  uint uVar7;
  NetworkData *this_02;
  NetworkData *extraout_ECX;
  UI_ModuleRepair *this_03;
  LogSystem *extraout_ECX_00;
  NetworkData *extraout_ECX_01;
  LogSystem *this_04;
  LogSystem *this_05;
  NetworkData *this_06;
  NetworkData *this_07;
  int *piVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  uint uVar9;
  undefined4 unaff_EDI;
  Ship *pSVar10;
  Sound SVar11;
  char *pcVar12;
  undefined4 in_stack_ffffffd8;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005cadc2;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar3 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  iVar4 = (**(code **)(*(int *)this + 0xb0))();
  uVar7 = 0;
  param_3 = *(float *)(iVar4 + 4) - param_3;
  pSVar10 = *(Ship **)(g_gameData + 0xd0);
  piVar1 = *(int **)(*(int *)(pSVar10 + 0x40) + 0x3c);
  uVar9 = *(int *)(*(int *)(pSVar10 + 0x40) + 0x40) - (int)piVar1 >> 2;
  if (uVar9 != 0) {
    piVar8 = piVar1;
    do {
      if (*(int *)(*piVar8 + 0x10) == *(int *)(pSVar10 + 0x1d8)) {
        this_02 = (NetworkData *)piVar1[uVar7];
        goto LAB_00573e94;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar7 < uVar9);
  }
  this_02 = (NetworkData *)0x0;
LAB_00573e94:
  if (26.0 <= param_2) {
LAB_00573ed6:
    if ((float)(*(int *)((char *)this + 0x2a0) + -0x1a) <= param_2) {
      if (param_3 < (float)(*(int *)((char *)this + 0x2a4) + -0x1a)) {
        if ((param_2 < (float)(*(int *)((char *)this + 0x2a0) + -0x1a)) || (26.0 <= param_3))
        goto LAB_00573fd4;
        iVar4 = 2;
      }
      else {
        iVar4 = 3;
      }
      goto LAB_00573f22;
    }
LAB_00573fd4:
    piVar1 = *(int **)((char *)this + 0x52c);
    pSVar5 = (Size *)(**(code **)(**(int **)((char *)this + 0x52c) + 0xb0))();
    pVVar6 = (Vec2 *)(**(code **)(*piVar1 + 0x5c))();
    this_00 = (Rect *)cocos2d::Rect::Rect((Rect *)&stack0xffffffd8,pVVar6,pSVar5);
    // [seh] local_8._0_1_ = 1;
    bVar2 = cocos2d::Rect::containsPoint(this_00,(Vec2 *)&param_2);
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    cocos2d::Rect::~Rect((Rect *)&stack0xffffffd8);
    if (!bVar2) {
      if (this_02[0x1c] != (byte)0x0) {
        iVar4 = getComponentSlot(this,param_2,param_3);
        if (iVar4 == -1) {
          if (g_gameLogic[0x71] != (byte)0x0) {
            ghidra::any_singleton();
            NetworkData::sendShipCommand
                      (this_07,0x7d,(double)((ulonglong)uVar3 << 0x20),
                       (double)CONCAT44(unaff_ESI,unaff_EDI),
                       (double)CONCAT44(in_stack_ffffffd8,unaff_EBX));
            // [seh] ExceptionList = local_10;
            return;
          }
          iVar4 = -1;
        }
        else {
          if (99 < iVar4) {
            iVar4 = iVar4 + -100;
          }
          if (g_gameLogic[0x71] != (byte)0x0) {
            ghidra::any_singleton();
            NetworkData::sendShipCommand
                      (this_06,0x7d,(double)((ulonglong)uVar3 << 0x20),
                       (double)CONCAT44(unaff_ESI,unaff_EDI),
                       (double)CONCAT44(in_stack_ffffffd8,unaff_EBX));
            // [seh] ExceptionList = local_10;
            return;
          }
        }
        ShipInterface::doEngSelectComponent(*(Ship **)(g_gameData + 0xd0),iVar4,0,0);
        // [seh] ExceptionList = local_10;
        return;
      }
      debugPrint("DETAIL","shield not open");
      LogSystem::addLogLine
                (this_05,*(LogPriority *)(ShipData::currentlyBoardedShip + 0x224),(char *)0x3,
                 "Close shield first.");
      goto LAB_005740ea;
    }
    bVar2 = anyScrews(this_03);
    if (!bVar2) {
      if (g_gameLogic[0x71] == (byte)0x0) {
        ShipInterface::doEngToggleShield(*(Ship **)(g_gameData + 0xd0),0,0,0);
        // [seh] ExceptionList = local_10;
        return;
      }
      this_04 = extraout_ECX_00;
      if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
        ghidra::Singleton<void>::instance = operator_new(1);
        this_04 = (LogSystem *)extraout_ECX_01;
      }
      NetworkData::sendShipCommand
                ((NetworkData *)this_04,0x82,(double)((ulonglong)uVar3 << 0x20),
                 (double)CONCAT44(unaff_ESI,unaff_EDI),(double)CONCAT44(in_stack_ffffffd8,unaff_EBX)
                );
      // [seh] ExceptionList = local_10;
      return;
    }
    pcVar12 = "Remove screws first..";
    this_02 = (NetworkData *)extraout_ECX_00;
  }
  else {
    if (26.0 <= param_3) {
      if (param_3 < (float)(*(int *)((char *)this + 0x2a4) + -0x1a)) goto LAB_00573ed6;
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
LAB_00573f22:
    if (((char *)this)[0x4dc] == (byte)0x0) {
      pcVar12 = "Close shield first.";
    }
    else {
      if (this_02[99] == (byte)0x0) {
        if (g_gameLogic[0x71] != (byte)0x0) {
          if (ghidra::Singleton<void>::instance == (NetworkData *)0x0) {
            ghidra::Singleton<void>::instance = operator_new(1);
            this_02 = extraout_ECX;
          }
          NetworkData::sendShipCommand
                    (this_02,0x81,(double)((ulonglong)uVar3 << 0x20),
                     (double)CONCAT44(unaff_ESI,unaff_EDI),
                     (double)CONCAT44(in_stack_ffffffd8,unaff_EBX));
          (**(code **)(*(int *)this + 0x294))();
          // [seh] ExceptionList = local_10;
          return;
        }
        ShipInterface::doEngToggleScrew(pSVar10,iVar4,0,0);
        (**(code **)(*(int *)this + 0x294))();
        // [seh] ExceptionList = local_10;
        return;
      }
      pcVar12 = "Disconnect module from power before unscrewing.";
    }
  }
  LogSystem::addLogLine
            ((LogSystem *)this_02,*(LogPriority *)(ShipData::currentlyBoardedShip + 0x224),
             (char *)0x3,pcVar12);
LAB_005740ea:
  iVar4 = -1;
  SVar11 = 10;
  pSVar10 = ShipData::currentlyBoardedShip;
  this_01 = ghidra::any_singleton();
  (this_01)->playSound(pSVar10, SVar11, iVar4);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: int __thiscall UI_ModuleRepair::getComponentSlot(UI_ModuleRepair *this)
int UI_ModuleRepair::getComponentSlot()

{
  char stack0x00000004[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c3eb9;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uVar2 = 0;
  iVar4 = *(int *)((char *)this + 0x554);
  iVar3 = *(int *)((char *)this + 0x558) - iVar4 >> 0x1f;
  if ((*(int *)((char *)this + 0x558) - iVar4) / 0x14 + iVar3 != iVar3) {
    iVar3 = 0;
    do {
      bVar1 = cocos2d::Rect::containsPoint((Rect *)(iVar3 + iVar4),(Vec2 *)&stack0x00000004);
      if (bVar1) {
        // [seh] ExceptionList = local_10;
        return *(int *)(*(int *)((char *)this + 0x554) + 0x10 + uVar2 * 0x14);
      }
      uVar2 = uVar2 + 1;
      iVar4 = *(int *)((char *)this + 0x554);
      iVar3 = iVar3 + 0x14;
    } while (uVar2 < (uint)((*(int *)((char *)this + 0x558) - iVar4) / 0x14));
  }
  // [seh] ExceptionList = local_10;
  return -1;
}


// Ghidra: void __thiscall UI_ModuleRepair::dragOnto (UI_ModuleRepair *this,int param_1,int param_2,undefined4 param_4,float param_5)
void UI_ModuleRepair::dragOnto(int param_1, int param_2, undefined4 param_4, float param_5)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  uint uVar1;
  int iVar2;
  SoundEngine *pSVar3;
  int *piVar4;
  NetworkData *this_00;
  NetworkData *this_01;
  uint uVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  uint uVar6;
  undefined4 unaff_EDI;
  Ship *pSVar7;
  Sound SVar8;
  UI_ModuleRepair *pUVar9;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cade9;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar1 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uVar5 = 0;
  pSVar7 = *(Ship **)(g_gameData + 0xd0);
  piVar4 = *(int **)(*(int *)(pSVar7 + 0x40) + 0x3c);
  uVar6 = *(int *)(*(int *)(pSVar7 + 0x40) + 0x40) - (int)piVar4 >> 2;
  if (uVar6 != 0) {
    do {
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x10) == *(int *)(pSVar7 + 0x1d8)) goto LAB_00574336;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < uVar6);
  }
  iVar2 = 0;
LAB_00574336:
  if ((param_1 != 100) && (param_1 != 0x65)) {
    iVar2 = -1;
    SVar8 = 10;
    pSVar3 = ghidra::any_singleton();
    (pSVar3)->playSound(pSVar7, SVar8, iVar2);
    // [seh] ExceptionList = local_10;
    return;
  }
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    debugPrint("DETAIL","shield not open");
    iVar2 = -1;
    SVar8 = 10;
    pSVar7 = *(Ship **)(g_gameData + 0xd0);
    pSVar3 = ghidra::any_singleton();
    (pSVar3)->playSound(pSVar7, SVar8, iVar2);
    // [seh] ExceptionList = local_10;
    return;
  }
  pUVar9 = this;
  iVar2 = (**(code **)(*(int *)this + 0xb0))();
  iVar2 = getComponentSlot(this,param_4,*(float *)(iVar2 + 4) - param_5);
  if (iVar2 != -1) {
    if (param_1 == 0x65) {
      if (g_gameLogic[0x71] != (byte)0x0) {
        ghidra::any_singleton();
        NetworkData::sendShipCommand
                  (this_00,0x7f,(double)((ulonglong)uVar1 << 0x20),
                   (double)CONCAT44(unaff_ESI,unaff_EDI),(double)CONCAT44(pUVar9,unaff_EBX));
        // [seh] ExceptionList = local_10;
        return;
      }
      ShipInterface::doEngMoveComponent(*(Ship **)(g_gameData + 0xd0),iVar2,param_2,0);
    }
    else {
      if (99 < iVar2) {
        iVar2 = iVar2 + -100;
      }
      if (g_gameLogic[0x71] != (byte)0x0) {
        ghidra::any_singleton();
        NetworkData::sendShipCommand
                  (this_01,0x7e,(double)((ulonglong)uVar1 << 0x20),
                   (double)CONCAT44(unaff_ESI,unaff_EDI),(double)CONCAT44(pUVar9,unaff_EBX));
        // [seh] ExceptionList = local_10;
        return;
      }
      ShipInterface::doEngMountComponent(*(Ship **)(g_gameData + 0xd0),iVar2,param_2,0);
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: basic_string<> * __thiscall UI_ModuleRepair::getDragLook (UI_ModuleRepair *this,basic_string<> *param_2,undefined4 param_3,float param_4)
std::string * UI_ModuleRepair::getDragLook(std::string * param_2, undefined4 param_3, float param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  ShipModule *pSVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cae19;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  uVar5 = 0;
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40);
  piVar4 = *(int **)(iVar1 + 0x3c);
  uVar6 = *(int *)(iVar1 + 0x40) - (int)piVar4 >> 2;
  if (uVar6 != 0) {
    do {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x10) == *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d8))
      goto LAB_00574545;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < uVar6);
  }
  iVar1 = 0;
LAB_00574545:
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    // [cookie] iVar1 = (**(code **)(*(int *)this + 0xb0))(___security_cookie ^ (uint)&stack0xfffffffc);
    iVar1 = getComponentSlot(this,param_3,*(float *)(iVar1 + 4) - param_4);
    debugPrint("DETAIL","ELEMENT: %d",iVar1);
    if (iVar1 != -1) {
      pSVar2 = SystemManager::getModule
                         (*(SystemManager **)(*(int *)(g_gameData + 0xd0) + 0x40),
                          *(int *)(*(int *)(g_gameData + 0xd0) + 0x1e4));
      if (iVar1 < 100) {
        iVar1 = *(int *)(*(int *)(pSVar2 + 0xc) + 4 + iVar1 * 4);
        if (iVar1 != 0) {
          iVar1 = *(int *)(iVar1 + 4);
          puVar3 = (undefined4 *)(iVar1 + 0x68);
          if (0xf < *(uint *)(iVar1 + 0x7c)) {
            puVar3 = (undefined4 *)*puVar3;
          }
          strUsingArgs((char *)param_2,"%s_Icon.png",puVar3);
          // [seh] ExceptionList = local_10;
          return param_2;
        }
      }
      else {
        iVar1 = *(int *)(*(int *)(pSVar2 + 0xc) + -0x13c + iVar1 * 4);
        if (iVar1 != 0) {
          iVar1 = *(int *)(iVar1 + 4);
          puVar3 = (undefined4 *)(iVar1 + 0x68);
          if (0xf < *(uint *)(iVar1 + 0x7c)) {
            puVar3 = (undefined4 *)*puVar3;
          }
          strUsingArgs((char *)param_2,"%s_Icon.png",puVar3);
          // [seh] ExceptionList = local_10;
          return param_2;
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = (std::string)0x0;
  ghidra::str::assign(param_2,"",0);
  // [seh] ExceptionList = local_10;
  return param_2;
}


// Ghidra: int __thiscall UI_ModuleRepair::getDragValue(UI_ModuleRepair *this,undefined4 param_2,float param_3)
int UI_ModuleRepair::getDragValue(undefined4 param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c3eb9;
  // [seh] local_10 = ExceptionList;
  // [seh] local_8 = 0;
  uVar3 = 0;
  iVar1 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x40);
  piVar2 = *(int **)(iVar1 + 0x3c);
  uVar4 = *(int *)(iVar1 + 0x40) - (int)piVar2 >> 2;
  if (uVar4 != 0) {
    do {
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x10) == *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d8))
      goto LAB_005746c5;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < uVar4);
  }
  iVar1 = 0;
LAB_005746c5:
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    return -1;
  }
  // [seh] ExceptionList = &local_10;
  // [cookie] iVar1 = (**(code **)(*(int *)this + 0xb0))(___security_cookie ^ (uint)&stack0xfffffffc);
  iVar1 = getComponentSlot(this,param_2,*(float *)(iVar1 + 4) - param_3);
  debugPrint("DETAIL","ELEMENT: %d",iVar1);
  // [seh] ExceptionList = local_10;
  return iVar1;
}
