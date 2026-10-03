// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: UI_NavMap * __thiscall UI_NavMap::UI_NavMap(UI_NavMap *this,ScreenInterface *param_1,Widget *param_2,bool *param_3)
UI_NavMap::UI_NavMap(ScreenInterface * param_1, Widget * param_2, bool * param_3)

{
  int iVar1;
  int *piVar2;
  GameData *pGVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  uint local_40 [3];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005caf45;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_40[2] = 0x57532a;
  new ((void *)((ScreenElement *)this)) ScreenElement(param_1, param_2, param_3);
  // [vtable] *(undefined ***)this = vftable;
  *(undefined4 *)((char *)this + 0x428) = 0;
  *(undefined4 *)((char *)this + 0x42c) = 0;
  *(undefined4 *)((char *)this + 0x430) = 0;
  *(undefined4 *)((char *)this + 0x434) = 0;
  *(undefined4 *)((char *)this + 0x438) = 0;
  *(undefined4 *)((char *)this + 0x43c) = 0;
  *(undefined4 *)((char *)this + 0x440) = 0;
  *(undefined4 *)((char *)this + 0x444) = 0;
  *(undefined4 *)((char *)this + 0x448) = 0;
  *(undefined4 *)((char *)this + 0x44c) = 0;
  *(undefined4 *)((char *)this + 0x450) = 0;
  *(undefined4 *)((char *)this + 0x454) = 0;
  *(undefined4 *)((char *)this + 0x458) = 0;
  *(undefined2 *)((char *)this + 0x45c) = 0;
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
  *(undefined4 *)((char *)this + 0x4c8) = 0xffffffff;
  ((char *)this)[0x4cc] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x4d0) = 0;
  *(undefined4 *)((char *)this + 0x4d4) = 0;
  *(undefined4 *)((char *)this + 0x4d8) = 0;
  *(undefined4 *)((char *)this + 0x4dc) = 0;
  *(undefined4 *)((char *)this + 0x4e0) = 0;
  *(undefined4 *)((char *)this + 0x4f4) = 0;
  *(undefined4 *)((char *)this + 0x4f8) = 0xf;
  ((char *)this)[0x4e4] = (byte)0x0;
  // [seh] local_8 = 10;
  local_40[0] = local_40[0] & 0xffffff00;
  ghidra::str::assign((std::string *)local_40,"viewmode",8);
  bVar4 = ((Widget *)((char *)this + 0x290))->getOptionAsBool();
  if (bVar4) {
    ((char *)this)[0x45d] = (byte)0x1;
  }
  ((char *)this)[0x284] = (byte)0x1;
  ((char *)this)[0x286] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x460) = 0;
  *(undefined4 *)((char *)this + 0x464) = 0;
  *(undefined4 *)((char *)this + 0x468) = 0;
  *(undefined4 *)((char *)this + 0x46c) = 0;
  param_3 = (bool *)this;
  if (DAT_0065dabc == DAT_0065dab8) {
    std::vector<>::_Emplace_reallocate<UI_NavMap*>
              ((ghidra::vector *)&param_3,DAT_0065dab8,(UI_NavMap **)&param_3);
  }
  else {
    *DAT_0065dab8 = this;
    DAT_0065dab8 = DAT_0065dab8 + 1;
  }
  fVar7 = 0.0;
  iVar1 = *(int *)(g_gameData + 0xd0);
  if (((iVar1 == 0) || (piVar2 = *(int **)(*(int *)(iVar1 + 0x40) + 0x24), piVar2 == (int *)0x0)) ||
     (cVar5 = (**(code **)(*piVar2 + 0x10))(), cVar5 == '\0')) {
    dVar9 = 0.0;
  }
  else if ((*(float *)(iVar1 + 0x118) == 0.0) && (fVar7 = *(float *)(iVar1 + 0x11c), fVar7 == 0.0))
  {
    dVar9 = (double)*(float *)(iVar1 + 0x120);
  }
  else {
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[0] = 0x57561e;
    angleInDegreesFrom();
    dVar9 = (double)fVar7;
  }
  pGVar3 = g_gameData;
  dVar8 = 0.0;
  *(double *)((char *)this + 0x500) = dVar9;
  if (*(int *)(pGVar3 + 0xd0) != 0) {
    dVar8 = (double)*(float *)(*(int *)(pGVar3 + 0xd0) + 0x120);
  }
  *(double *)((char *)this + 0x508) = dVar8;
  if (((char *)this)[0x45d] == (byte)0x0) {
    pfVar6 = (&ZOOM_LEVELS)[PresentationData::m_mapZoomLevel];
  }
  else {
    pfVar6 = (&TABLET_ZOOM_LEVELS)[PresentationData::m_tabletMapZoomLevel];
  }
  *(float **)((char *)this + 0x4fc) = pfVar6;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NavMap::~UI_NavMap(UI_NavMap *this)
UI_NavMap::~UI_NavMap()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  void *pvVar1;
  int *piVar2;
  JumpGateRoute *pJVar3;
  void *pvVar4;
  int *piVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  ghidra::lib::allocator_t *unaff_EDI;
  int *piVar10;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005caf60;
  // [seh] local_10 = ExceptionList;
  // [cookie] pJVar3 = (JumpGateRoute *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  piVar2 = DAT_0065dab8;
  piVar10 = _s_navMaps;
  if (_s_navMaps != DAT_0065dab8) {
    do {
      if ((UI_NavMap *)*piVar10 == this) break;
      piVar10 = piVar10 + 1;
    } while (piVar10 != DAT_0065dab8);
    if (piVar10 != DAT_0065dab8) {
      piVar5 = piVar10 + 1;
      uVar7 = 0;
      uVar8 = (uint)((int)DAT_0065dab8 + (3 - (int)piVar5)) >> 2;
      if (DAT_0065dab8 < piVar5) {
        uVar8 = 0;
      }
      if (uVar8 != 0) {
        do {
          if ((UI_NavMap *)*piVar5 != this) {
            *piVar10 = *piVar5;
            piVar10 = piVar10 + 1;
          }
          uVar7 = uVar7 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar7 != uVar8);
      }
      if (piVar10 != piVar2) {
        sVar9 = (int)DAT_0065dab8 - (int)piVar2;
        memmove(piVar10,piVar2,sVar9);
        DAT_0065dab8 = (int *)(sVar9 + (int)piVar10);
      }
    }
  }
  cleanupRender(this);
  uVar7 = *(uint *)((char *)this + 0x4f8);
  if (0xf < uVar7) {
    pvVar1 = *(void **)((char *)this + 0x4e4);
    pnVar6 = (nothrow_t *)(uVar7 + 1);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = (nothrow_t *)(uVar7 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_00575afd;
    }
    operator_delete(pvVar4,pnVar6);
  }
  *(undefined4 *)((char *)this + 0x4f4) = 0;
  *(undefined4 *)((char *)this + 0x4f8) = 0xf;
  ((char *)this)[0x4e4] = (byte)0x0;
  pvVar1 = *(void **)((char *)this + 0x4b4);
  if (pvVar1 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x4bc) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_00575afd;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x4b4) = 0;
    *(undefined4 *)((char *)this + 0x4b8) = 0;
    *(undefined4 *)((char *)this + 0x4bc) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x4a4);
  if (pvVar1 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x4ac) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_00575afd;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x4a4) = 0;
    *(undefined4 *)((char *)this + 0x4a8) = 0;
    *(undefined4 *)((char *)this + 0x4ac) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x498);
  if (pvVar1 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x4a0) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_00575afd;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x498) = 0;
    *(undefined4 *)((char *)this + 0x49c) = 0;
    *(undefined4 *)((char *)this + 0x4a0) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x48c);
  if (pvVar1 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x494) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_00575afd;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x48c) = 0;
    *(undefined4 *)((char *)this + 0x490) = 0;
    *(undefined4 *)((char *)this + 0x494) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x480);
  if (pvVar1 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x488) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_00575afd;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x480) = 0;
    *(undefined4 *)((char *)this + 0x484) = 0;
    *(undefined4 *)((char *)this + 0x488) = 0;
  }
  if (*(JumpGateRoute **)((char *)this + 0x440) != (JumpGateRoute *)0x0) {
    ghidra::lib::_Destroy_range___x28_x29(*(JumpGateRoute **)((char *)this + 0x440),pJVar3,unaff_EDI);
    pvVar1 = *(void **)((char *)this + 0x440);
    pnVar6 = (nothrow_t *)(((*(int *)((char *)this + 0x448) - (int)pvVar1) / 0x14) * 0x14);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_00575afd;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x440) = 0;
    *(undefined4 *)((char *)this + 0x444) = 0;
    *(undefined4 *)((char *)this + 0x448) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x434);
  if (pvVar1 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x43c) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) goto LAB_00575afd;
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x434) = 0;
    *(undefined4 *)((char *)this + 0x438) = 0;
    *(undefined4 *)((char *)this + 0x43c) = 0;
  }
  pvVar1 = *(void **)((char *)this + 0x428);
  if (pvVar1 != (void *)0x0) {
    pnVar6 = (nothrow_t *)(*(int *)((char *)this + 0x430) - (int)pvVar1 & 0xfffffffc);
    pvVar4 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar4 = *(void **)((int)pvVar1 + -4);
      pnVar6 = pnVar6 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4))) {
LAB_00575afd:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar6);
    *(undefined4 *)((char *)this + 0x428) = 0;
    *(undefined4 *)((char *)this + 0x42c) = 0;
    *(undefined4 *)((char *)this + 0x430) = 0;
  }
  *(undefined ***)this = ScreenElement::vftable;
  ((Widget *)((char *)this + 0x290))->~Widget();
  cocos2d::Node::~Node((Node *)this);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NavMap::cleanupRender(UI_NavMap *this)
void UI_NavMap::cleanupRender()

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  nothrow_t *pnVar6;
  JumpGateRoute *pJVar7;
  JumpGateRoute *unaff_EBX;
  ghidra::lib::allocator_t *unaff_EDI;
  uint uVar8;
  int iVar9;
  JumpGateRoute *local_8;
  
  uVar8 = 0;
  iVar5 = *(int *)((char *)this + 0x4b4);
  if (*(int *)((char *)this + 0x4b8) - iVar5 >> 2 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((char *)this + 0x4b4) + uVar8 * 4) + 0x138))(1);
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)((char *)this + 0x4b4);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x4b8) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x4b8) = iVar5;
  if (*(int **)((char *)this + 0x460) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x460) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x460) = 0;
  }
  if (*(int **)((char *)this + 0x464) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x464) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x464) = 0;
  }
  if (*(int **)((char *)this + 0x468) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x468) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x468) = 0;
  }
  if (*(int **)((char *)this + 0x46c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x46c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x46c) = 0;
  }
  if (*(int **)((char *)this + 0x47c) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x47c) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x47c) = 0;
  }
  if (*(int **)((char *)this + 0x474) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x474) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x474) = 0;
  }
  if (*(int **)((char *)this + 0x470) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x470) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x470) = 0;
  }
  if (*(int **)((char *)this + 0x4b0) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x4b0) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x4b0) = 0;
  }
  if (*(int **)((char *)this + 0x4e0) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x4e0) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x4e0) = 0;
  }
  uVar8 = 0;
  iVar5 = *(int *)((char *)this + 0x480);
  if (*(int *)((char *)this + 0x484) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x480) + uVar8 * 4) = 0;
      }
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)((char *)this + 0x480);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x484) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x484) = iVar5;
  uVar8 = 0;
  iVar5 = *(int *)((char *)this + 0x48c);
  if (*(int *)((char *)this + 0x490) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x48c) + uVar8 * 4) = 0;
      }
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)((char *)this + 0x48c);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x490) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x490) = iVar5;
  uVar8 = 0;
  iVar5 = *(int *)((char *)this + 0x498);
  if (*(int *)((char *)this + 0x49c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x498) + uVar8 * 4) = 0;
      }
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)((char *)this + 0x498);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x49c) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x49c) = iVar5;
  if (*(int **)((char *)this + 0x4c0) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x4c0) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x4c0) = 0;
  }
  iVar5 = *(int *)((char *)this + 0x428);
  uVar8 = 0;
  if (*(int *)((char *)this + 0x42c) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar5 + uVar8 * 4) + 0x2c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x428) + uVar8 * 4) + 0x2c) = 0;
        iVar5 = *(int *)((char *)this + 0x428);
      }
      piVar1 = *(int **)(*(int *)(iVar5 + uVar8 * 4) + 0x28);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x428) + uVar8 * 4) + 0x28) = 0;
        iVar5 = *(int *)((char *)this + 0x428);
      }
      piVar1 = *(int **)(*(int *)(iVar5 + uVar8 * 4) + 0x20);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x428) + uVar8 * 4) + 0x20) = 0;
        iVar5 = *(int *)((char *)this + 0x428);
      }
      piVar1 = *(int **)(*(int *)(iVar5 + uVar8 * 4) + 0x24);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x428) + uVar8 * 4) + 0x24) = 0;
        iVar5 = *(int *)((char *)this + 0x428);
      }
      piVar1 = *(int **)(*(int *)(iVar5 + uVar8 * 4) + 0x30);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x428) + uVar8 * 4) + 0x30) = 0;
        iVar5 = *(int *)((char *)this + 0x428);
      }
      piVar1 = *(int **)(iVar5 + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        uVar2 = piVar1[5];
        if (0xf < uVar2) {
          pvVar3 = (void *)*piVar1;
          pnVar6 = (nothrow_t *)(uVar2 + 1);
          pvVar4 = pvVar3;
          if ((nothrow_t *)0xfff < pnVar6) {
            pvVar4 = *(void **)((int)pvVar3 + -4);
            pnVar6 = (nothrow_t *)(uVar2 + 0x24);
            if (0x1f < (uint)((int)pvVar3 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar4,pnVar6);
        }
        piVar1[4] = 0;
        piVar1[5] = 0xf;
        *(undefined1 *)piVar1 = 0;
        operator_delete(piVar1,(nothrow_t *)0x38);
      }
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)((char *)this + 0x428);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x42c) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x42c) = iVar5;
  iVar5 = *(int *)((char *)this + 0x440);
  local_8 = (JumpGateRoute *)0x0;
  pJVar7 = (JumpGateRoute *)(*(int *)((char *)this + 0x444) - iVar5);
  if ((int)pJVar7 / 0x14 + ((int)pJVar7 >> 0x1f) != (int)pJVar7 >> 0x1f) {
    iVar9 = 0;
    do {
      piVar1 = *(int **)(iVar5 + 0x10 + iVar9);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(iVar9 + 0x10 + *(int *)((char *)this + 0x440)) = 0;
      }
      iVar5 = *(int *)((char *)this + 0x440);
      iVar9 = iVar9 + 0x14;
      pJVar7 = local_8 + 1;
      local_8 = pJVar7;
    } while (pJVar7 < (JumpGateRoute *)((*(int *)((char *)this + 0x444) - iVar5) / 0x14));
  }
  ghidra::lib::_Destroy_range___x28_x29(pJVar7,unaff_EBX,unaff_EDI);
  *(undefined4 *)((char *)this + 0x444) = *(undefined4 *)((char *)this + 0x440);
  uVar8 = 0;
  iVar5 = *(int *)((char *)this + 0x434);
  if (*(int *)((char *)this + 0x438) - iVar5 >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar5 + uVar8 * 4) + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x434) + uVar8 * 4) + 4) = 0;
        iVar5 = *(int *)((char *)this + 0x434);
      }
      piVar1 = (int *)**(int **)(iVar5 + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        **(undefined4 **)(*(int *)((char *)this + 0x434) + uVar8 * 4) = 0;
        iVar5 = *(int *)((char *)this + 0x434);
      }
      piVar1 = *(int **)(*(int *)(iVar5 + uVar8 * 4) + 0xc);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x434) + uVar8 * 4) + 0xc) = 0;
      }
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)((char *)this + 0x434);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x438) - iVar5 >> 2));
  }
  *(int *)((char *)this + 0x438) = iVar5;
  return;
}


// Ghidra: float __thiscall UI_NavMap::getIconScale(UI_NavMap *this)
float UI_NavMap::getIconScale()

{
  float10 in_ST0;
  
  if (((char *)this)[0x45d] != (byte)0x0) {
    return (float)in_ST0;
  }
  return (float)in_ST0;
}


// Ghidra: float __thiscall UI_NavMap::getStellarScale(UI_NavMap *this)
float UI_NavMap::getStellarScale()

{
  float10 in_ST0;
  
  if (((char *)this)[0x45d] != (byte)0x0) {
    return (float)in_ST0;
  }
  return (float)in_ST0;
}


// Ghidra: void __thiscall UI_NavMap::render(UI_NavMap *this)
void UI_NavMap::render()

{
  char stack0xffffff3c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  AnimationFrames **ppAVar2;
  GameData *this_00;
  char cVar3;
  SectorEditor *pSVar4;
  Sprite *pSVar5;
  UIText *pUVar6;
  int iVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar8;
  uint uStack_e0;
  UIText *pUStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_b8;
  // [seh] undefined4 *puStack_a4;
  undefined4 uStack_a0;
  // [seh] undefined4 *puStack_90;
  undefined4 uStack_8c;
  // [seh] undefined4 *puStack_7c;
  undefined4 uStack_78;
  // [seh] undefined4 *puStack_68;
  undefined4 uStack_64;
  // [seh] undefined4 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  // [seh] undefined4 *puStack_40;
  Size local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  this_00 = g_gameData;
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cafc8;
  // [seh] local_10 = ExceptionList;
  if (*(int *)(g_gameData + 0xd0) == 0) {
    return;
  }
  // [seh] ExceptionList = &local_10;
  if (((char *)this)[0x45d] == (byte)0x0) {
    *(float **)((char *)this + 0x4fc) = (&ZOOM_LEVELS)[PresentationData::m_mapZoomLevel];
  }
  else {
    *(float **)((char *)this + 0x4fc) = (&TABLET_ZOOM_LEVELS)[PresentationData::m_tabletMapZoomLevel];
    if (PresentationData::m_tabletMapSelectedSector != -1) {
      // [seh] puStack_40 = (undefined4 *)0x576118;
      (this_00)->getSectorWithID(PresentationData::m_tabletMapSelectedSector);
    }
  }
  pSVar4 = ghidra::any_singleton();
  if ((*(int *)(pSVar4 + 0x278) == 0) && (((char *)this)[0x45d] == (byte)0x0)) {
    pSVar4 = ghidra::any_singleton();
    *(UI_NavMap **)(pSVar4 + 0x278) = this;
  }
  (**(code **)(*(int *)this + 0x290))();
  piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28);
  if (piVar1 == (int *)0x0) {
    // [seh] ExceptionList = local_10;
    return;
  }
  // [seh] puStack_40 = (undefined4 *)0x576182;
  cVar3 = (**(code **)(*piVar1 + 0x10))();
  if (cVar3 == '\0') {
    // [seh] ExceptionList = local_10;
    return;
  }
  uStack_64 = 0x5761a7;
  strUsingArgs((char *)&puStack_54);
  pSVar5 = loadSprite();
  *(Sprite **)((char *)this + 0x460) = pSVar5;
  local_18 = 0;
  local_14 = (UIText *)&DAT_3f800000;
  // [seh] local_8 = 0;
  // [seh] puStack_40 = &local_18;
  fStack_44 = 8.024792e-39;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  fStack_44 = (float)(*(int *)((char *)this + 0x2a4) + -1);
  uStack_48 = 0x3f800000;
  uStack_4c = 0x57620b;
  (**(code **)(**(int **)((char *)this + 0x460) + 0x48))();
  uStack_4c = 0x32;
  uStack_50 = *(undefined4 *)((char *)this + 0x460);
  // [seh] puStack_54 = (undefined4 *)0x57621d;
  (**(code **)(*(int *)this + 0x108))();
  uStack_78 = 0x57623a;
  strUsingArgs((char *)&puStack_68);
  pSVar5 = loadSprite();
  *(Sprite **)((char *)this + 0x464) = pSVar5;
  local_18 = 0x3f800000;
  local_14 = (UIText *)&DAT_3f800000;
  // [seh] local_8 = 1;
  // [seh] puStack_54 = &local_18;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x464) + 0x48))();
  uStack_64 = *(undefined4 *)((char *)this + 0x464);
  // [seh] puStack_68 = (undefined4 *)0x5762bc;
  (**(code **)(*(int *)this + 0x108))();
  uStack_8c = 0x5762d9;
  strUsingArgs((char *)&puStack_7c);
  pSVar5 = loadSprite();
  *(Sprite **)((char *)this + 0x468) = pSVar5;
  local_18 = 0;
  local_14 = (UIText *)0x0;
  // [seh] local_8 = 2;
  // [seh] puStack_68 = &local_18;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x468) + 0x48))();
  uStack_78 = *(undefined4 *)((char *)this + 0x468);
  // [seh] puStack_7c = (undefined4 *)0x576343;
  (**(code **)(*(int *)this + 0x108))();
  uStack_a0 = 0x576360;
  strUsingArgs((char *)&puStack_90);
  pSVar5 = loadSprite();
  *(Sprite **)((char *)this + 0x46c) = pSVar5;
  local_18 = 0x3f800000;
  local_14 = (UIText *)0x0;
  // [seh] local_8 = 3;
  // [seh] puStack_7c = &local_18;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x46c) + 0x48))();
  uStack_8c = *(undefined4 *)((char *)this + 0x46c);
  // [seh] puStack_90 = (undefined4 *)0x5763d6;
  (**(code **)(*(int *)this + 0x108))();
  // [seh] puStack_90 = (undefined4 *)0x5763db;
  pSVar4 = ghidra::any_singleton();
  if (pSVar4[0x285] == (byte)0x0) {
    if (((char *)this)[0x45d] == (byte)0x0) {
      iVar7 = *(int *)(g_gameData + 0xd0);
      if (*(int *)(iVar7 + 0x60) == -1) {
        ((GameObject *)(iVar7 + 8))->getQuadrant();
        fStack_b8 = *(float *)(extraout_EDX + 0x2c);
        strUsingArgs((char *)&puStack_a4);
      }
      else {
        ((GameObject *)(iVar7 + 8))->getQuadrant();
        fStack_b8 = *(float *)(extraout_EDX_00 + 0x30);
        strUsingArgs((char *)&puStack_a4);
      }
    }
    else if (PresentationData::m_tabletMapZoomLevel == 0) {
      // [seh] puStack_90 = (undefined4 *)0xf;
      // [seh] puStack_a4 = (undefined4 *)((uint)puStack_a4 & 0xffffff00);
      ghidra::str::assign((std::string *)&puStack_a4,"`7The Apollo Cluster",0x14);
    }
    else {
      strUsingArgs((char *)&puStack_a4);
    }
  }
  else {
    ghidra::str::ctor
              ((std::string *)&puStack_a4,(std::string *)((char *)this + 0x4e4));
  }
  pUVar6 = UIText::create();
  *(UIText **)((char *)this + 0x4e0) = pUVar6;
  local_18 = 0x3f000000;
  local_14 = (UIText *)0x0;
  // [seh] local_8 = 4;
  // [seh] puStack_90 = &local_18;
  (**(code **)(*(int *)pUVar6 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(**(int **)((char *)this + 0x4e0) + 0x48))();
  uStack_a0 = *(undefined4 *)((char *)this + 0x4e0);
  // [seh] puStack_a4 = (undefined4 *)0x57656d;
  (**(code **)(*(int *)this + 0x108))();
  if (*(int **)((char *)this + 0x478) != (int *)0x0) {
    // [seh] puStack_a4 = (undefined4 *)0x1;
    (**(code **)(**(int **)((char *)this + 0x478) + 0x138))();
    *(undefined4 *)((char *)this + 0x478) = 0;
  }
  strUsingArgs((char *)&fStack_b8);
  pSVar5 = loadSprite();
  *(Sprite **)((char *)this + 0x478) = pSVar5;
  local_18 = 0x3f000000;
  local_14 = (UIText *)0x3f000000;
  // [seh] local_8 = 5;
  // [seh] puStack_a4 = &local_18;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)this + 0x108))();
  uVar8 = 0;
  iVar7 = *(int *)((char *)this + 0x4a4);
  if (*(int *)((char *)this + 0x4a8) - iVar7 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar7 + uVar8 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))();
        *(undefined4 *)(*(int *)((char *)this + 0x4a4) + uVar8 * 4) = 0;
      }
      uVar8 = uVar8 + 1;
      iVar7 = *(int *)((char *)this + 0x4a4);
    } while (uVar8 < (uint)(*(int *)((char *)this + 0x4a8) - iVar7 >> 2));
  }
  *(int *)((char *)this + 0x4a8) = iVar7;
  if (((char *)this)[0x45d] == (byte)0x0) {
    if (PresentationData::m_mapZoomLevel != 0) goto LAB_00576676;
LAB_00576887:
    renderCluster(this);
  }
  else {
    if (PresentationData::m_tabletMapZoomLevel == 0) goto LAB_00576887;
LAB_00576676:
    renderSector(this);
    if (((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1))
       && (pSVar4 = ghidra::any_singleton(), pSVar4[0x285] == (byte)0x0)) {
      if (((char *)this)[0x45d] != (byte)0x0) goto LAB_0057689d;
      renderMiniMap(this);
    }
  }
  if (((((char *)this)[0x45d] == (byte)0x0) && (*(int *)(*(int *)(g_gameData + 0xd0) + 0xd4) == 3)) &&
     (*(int *)(*(int *)(g_gameData + 0xd0) + 0xf8) == 2)) {
    fStack_d0 = 8.026649e-39;
    ghidra::str::assign((std::string *)&stack0xffffff3c,"white.png",9);
    pSVar5 = loadSprite();
    *(Sprite **)((char *)this + 0x4b0) = pSVar5;
    local_18 = 0;
    local_14 = (UIText *)0x0;
    // [seh] local_8 = 6;
    (**(code **)(*(int *)pSVar5 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    fStack_b8 = (float)*(int *)((char *)this + 0x2a0);
    (**(code **)(**(int **)((char *)this + 0x4b0) + 0x3c))();
    iVar7 = **(int **)((char *)this + 0x4b0);
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),'\0','\0','\0');
    (**(code **)(iVar7 + 0x25c))();
    (**(code **)(**(int **)((char *)this + 0x4b0) + 0x244))();
    (**(code **)(*(int *)this + 0x108))();
    fStack_d0 = 0.0;
    uStack_e0 = uStack_e0 & 0xffffff00;
    ghidra::str::assign((std::string *)&uStack_e0,"`7** docked **",0xe);
    pUVar6 = UIText::create();
    local_20 = 0x3f000000;
    local_1c = 0x3f800000;
    // [seh] local_8 = 7;
    fStack_d0 = 8.027024e-39;
    local_14 = pUVar6;
    (**(code **)(*(int *)pUVar6 + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    fStack_d0 = (float)(*(int *)((char *)this + 0x2a4) / 2);
    fStack_d4 = (float)(*(int *)((char *)this + 0x2a0) / 2);
    uStack_d8 = 0x576854;
    (**(code **)(*(int *)pUVar6 + 0x48))();
    uStack_d8 = 0x32;
    uStack_e0 = 0x576861;
    pUStack_dc = pUVar6;
    (**(code **)(*(int *)this + 0x108))();
    ppAVar2 = *(AnimationFrames ***)((char *)this + 0x484);
    if (*(AnimationFrames ***)((char *)this + 0x488) == ppAVar2) {
      fStack_b8 = 8.027216e-39;
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)((char *)this + 0x480),ppAVar2,(AnimationFrames **)&local_14);
    }
    else {
      *ppAVar2 = (AnimationFrames *)pUVar6;
      *(int *)((char *)this + 0x484) = *(int *)((char *)this + 0x484) + 4;
    }
  }
LAB_0057689d:
  iVar7 = *(int *)this;
  fStack_b8 = 8.027282e-39;
  cocos2d::Size::Size(local_28,(float)*(int *)((char *)this + 0x2a0),(float)*(int *)((char *)this + 0x2a4));
  (**(code **)(iVar7 + 0xac))();
  **(undefined1 **)((char *)this + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NavMap::renderMiniMap(UI_NavMap *this)
void UI_NavMap::renderMiniMap()

{
  char stack0xffffff94[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff80[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff6c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff58[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff44[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_00;
  AnimationFrames **ppAVar1;
  int iVar2;
  Sprite *pSVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  AnimationFrames *pAVar7;
  uint uStack_cc;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uint local_28;
  AnimationFrames *local_20;
  Color3B local_19 [3];
  Color3B local_16 [3];
  Color3B local_13 [3];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cb036;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  ghidra::str::assign((std::string *)&stack0xffffff94,"UI_MiniMap_TopLeft.png",0x16);
  pSVar3 = loadSprite();
  local_20 = (AnimationFrames *)pSVar3;
  (**(code **)(*(int *)pSVar3 + 0x48))();
  if (*(int *)((char *)this + 0x4c8) == 0) {
    (**(code **)(*(int *)pSVar3 + 0x244))();
    iVar6 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B(local_13,0xff,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
  }
  else {
    iVar6 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B(local_13,0x80,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    (**(code **)(*(int *)pSVar3 + 0x244))();
  }
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x4b8);
  this_00 = (ghidra::vector *)((char *)this + 0x4b4);
  if (*(AnimationFrames ***)((char *)this + 0x4bc) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_20);
  }
  else {
    *ppAVar1 = local_20;
    *(int *)((char *)this + 0x4b8) = *(int *)((char *)this + 0x4b8) + 4;
  }
  (**(code **)(*(int *)this + 0x10c))();
  ghidra::str::assign((std::string *)&stack0xffffff80,"UI_MiniMap_TopRight.png",0x17);
  pSVar3 = loadSprite();
  local_20 = (AnimationFrames *)pSVar3;
  (**(code **)(*(int *)pSVar3 + 0x48))();
  if (*(int *)((char *)this + 0x4c8) == 1) {
    (**(code **)(*(int *)pSVar3 + 0x244))();
    iVar6 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B(local_13,0xff,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    pAVar7 = local_20;
  }
  else {
    iVar6 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B(local_13,0x80,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    pAVar7 = local_20;
    (**(code **)(*(int *)local_20 + 0x244))();
  }
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x4b8);
  if (*(AnimationFrames ***)((char *)this + 0x4bc) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_20);
  }
  else {
    *ppAVar1 = pAVar7;
    *(int *)((char *)this + 0x4b8) = *(int *)((char *)this + 0x4b8) + 4;
  }
  (**(code **)(*(int *)this + 0x10c))();
  ghidra::str::assign((std::string *)&stack0xffffff6c,"UI_MiniMap_BottomRight.png",0x1a);
  pSVar3 = loadSprite();
  local_20 = (AnimationFrames *)pSVar3;
  (**(code **)(*(int *)pSVar3 + 0x48))();
  if (*(int *)((char *)this + 0x4c8) == 2) {
    (**(code **)(*(int *)pSVar3 + 0x244))();
    iVar6 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B(local_13,0xff,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    pAVar7 = local_20;
  }
  else {
    iVar6 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B(local_13,0x80,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    pAVar7 = local_20;
    (**(code **)(*(int *)local_20 + 0x244))();
  }
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x4b8);
  if (*(AnimationFrames ***)((char *)this + 0x4bc) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_20);
  }
  else {
    *ppAVar1 = pAVar7;
    *(int *)((char *)this + 0x4b8) = *(int *)((char *)this + 0x4b8) + 4;
  }
  (**(code **)(*(int *)this + 0x10c))();
  ghidra::str::assign((std::string *)&stack0xffffff58,"UI_MiniMap_BottomLeft.png",0x19);
  pSVar3 = loadSprite();
  local_20 = (AnimationFrames *)pSVar3;
  (**(code **)(*(int *)pSVar3 + 0x48))();
  if (*(int *)((char *)this + 0x4c8) == 3) {
    (**(code **)(*(int *)pSVar3 + 0x244))();
    iVar6 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B(local_13,0xff,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    pAVar7 = local_20;
  }
  else {
    iVar6 = *(int *)pSVar3;
    cocos2d::Color3B::Color3B(local_13,0x80,0x80,0xff);
    (**(code **)(iVar6 + 0x25c))();
    pAVar7 = local_20;
    (**(code **)(*(int *)local_20 + 0x244))();
  }
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x4b8);
  if (*(AnimationFrames ***)((char *)this + 0x4bc) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_20);
  }
  else {
    *ppAVar1 = pAVar7;
    *(int *)((char *)this + 0x4b8) = *(int *)((char *)this + 0x4b8) + 4;
  }
  (**(code **)(*(int *)this + 0x10c))();
  uStack_cc = 0x576cf9;
  strUsingArgs(&stack0xffffff44);
  pSVar3 = loadSprite();
  local_20 = (AnimationFrames *)pSVar3;
  (**(code **)(*(int *)pSVar3 + 0x48))();
  (**(code **)(*(int *)pSVar3 + 0x244))();
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x4b8);
  if (*(AnimationFrames ***)((char *)this + 0x4bc) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_20);
  }
  else {
    *ppAVar1 = (AnimationFrames *)pSVar3;
    *(int *)((char *)this + 0x4b8) = *(int *)((char *)this + 0x4b8) + 4;
  }
  (**(code **)(*(int *)this + 0x10c))();
  if ((((char *)this)[0x45d] == (byte)0x0) || (PresentationData::m_tabletMapSelectedSector == -1)) {
    piVar4 = *(int **)(g_gameData + 0xd8);
  }
  else {
    for (puVar5 = *(undefined4 **)(g_gameData + 0x3c); puVar5 != *(undefined4 **)(g_gameData + 0x40)
        ; puVar5 = puVar5 + 1) {
      piVar4 = (int *)*puVar5;
      if (*piVar4 == PresentationData::m_tabletMapSelectedSector) goto LAB_00576d9a;
    }
    piVar4 = (int *)0x0;
  }
LAB_00576d9a:
  iVar6 = piVar4[0x21];
  local_28 = 0;
  if (piVar4[0x22] - iVar6 >> 2 != 0) {
    do {
      iVar6 = *(int *)(*(int *)(iVar6 + local_28 * 4) + 0x54);
      if (iVar6 == 1) {
        uStack_cc = (uint)uStack_cc._1_3_ << 8;
        ghidra::str::assign((std::string *)&uStack_cc,"white.png",9);
        local_20 = (AnimationFrames *)loadSprite();
        iVar6 = *(int *)local_20;
        cocos2d::Color3B::Color3B(local_13,0xff,0xff,'\0');
        (**(code **)(iVar6 + 0x25c))();
        // [seh] local_8 = 0;
LAB_00576f28:
        pAVar7 = local_20;
        (**(code **)(*(int *)local_20 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        ppAVar1 = *(AnimationFrames ***)((char *)this + 0x4b8);
        if (*(AnimationFrames ***)((char *)this + 0x4bc) == ppAVar1) {
          ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_20);
        }
        else {
          *ppAVar1 = pAVar7;
          *(int *)((char *)this + 0x4b8) = *(int *)((char *)this + 0x4b8) + 4;
        }
        (**(code **)(*(int *)this + 0x108))();
      }
      else if (iVar6 == 0) {
        uStack_cc = (uint)uStack_cc._1_3_ << 8;
        ghidra::str::assign((std::string *)&uStack_cc,"white.png",9);
        local_20 = (AnimationFrames *)loadSprite();
        iVar6 = *(int *)local_20;
        cocos2d::Color3B::Color3B(local_16,'\0',0xff,0xbf);
        (**(code **)(iVar6 + 0x25c))();
        // [seh] local_8 = 1;
        goto LAB_00576f28;
      }
      local_28 = local_28 + 1;
      iVar6 = piVar4[0x21];
    } while (local_28 < (uint)(piVar4[0x22] - iVar6 >> 2));
  }
  iVar6 = piVar4[0x33];
  local_28 = 0;
  if (piVar4[0x34] - iVar6 >> 2 != 0) {
    do {
      iVar6 = *(int *)(local_28 * 4 + iVar6);
      iVar2 = *(int *)(*(int *)(iVar6 + 0x254) + 0x158);
      if (iVar2 == 2) {
        uStack_cc = uStack_cc & 0xffffff00;
        ghidra::str::assign((std::string *)&uStack_cc,"white.png",9);
        local_20 = (AnimationFrames *)loadSprite();
        iVar6 = *(int *)local_20;
        cocos2d::Color3B::Color3B(local_16,0xff,'\0',0xff);
        (**(code **)(iVar6 + 0x25c))();
        // [seh] local_8 = 2;
LAB_00577211:
        pAVar7 = local_20;
        (**(code **)(*(int *)local_20 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        ppAVar1 = *(AnimationFrames ***)((char *)this + 0x4b8);
        if (*(AnimationFrames ***)((char *)this + 0x4bc) == ppAVar1) {
          ghidra::lib::vector___Emplace_reallocate(this_00,ppAVar1,&local_20);
        }
        else {
          *ppAVar1 = pAVar7;
          *(int *)((char *)this + 0x4b8) = *(int *)((char *)this + 0x4b8) + 4;
        }
        (**(code **)(*(int *)this + 0x108))();
      }
      else {
        if ((iVar2 == 1) && (*(char *)(iVar6 + 0x168) == '\0')) {
          uStack_cc = (uint)uStack_cc._1_3_ << 8;
          ghidra::str::assign((std::string *)&uStack_cc,"white.png",9);
          local_20 = (AnimationFrames *)loadSprite();
          iVar6 = *(int *)local_20;
          cocos2d::Color3B::Color3B(local_13,'\0',0xbf,0xff);
          (**(code **)(iVar6 + 0x25c))();
          // [seh] local_8 = 3;
          goto LAB_00577211;
        }
        if (iVar2 == 3) {
          uStack_cc = (uint)uStack_cc._1_3_ << 8;
          ghidra::str::assign((std::string *)&uStack_cc,"white.png",9);
          local_20 = (AnimationFrames *)loadSprite();
          iVar6 = *(int *)local_20;
          cocos2d::Color3B::Color3B(local_19,'\0',0xbf,0xff);
          (**(code **)(iVar6 + 0x25c))();
          // [seh] local_8 = 4;
          goto LAB_00577211;
        }
      }
      local_28 = local_28 + 1;
      iVar6 = piVar4[0x33];
    } while (local_28 < (uint)(piVar4[0x34] - iVar6 >> 2));
  }
  uStack_cc = uStack_cc & 0xffffff00;
  ghidra::str::assign((std::string *)&uStack_cc,"white.png",9);
  pSVar3 = loadSprite();
  *(Sprite **)((char *)this + 0x4c0) = pSVar3;
  iVar6 = *(int *)pSVar3;
  if (*(float *)((char *)this + 0x4d0) < 0.0) {
    uVar10 = '@';
    uVar9 = '@';
    uVar8 = '@';
  }
  else {
    uVar10 = 0xff;
    uVar9 = 0xff;
    uVar8 = 0xff;
  }
  cocos2d::Color3B::Color3B(local_19,uVar8,uVar9,uVar10);
  (**(code **)(iVar6 + 0x25c))();
  // [seh] local_8 = 5;
  (**(code **)(**(int **)((char *)this + 0x4c0) + 0x4c))();
  // [seh] local_8 = 0xffffffff;
  (**(code **)(*(int *)this + 0x108))();
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NavMap::sectorModeClick(UI_NavMap *this,float param_2,float param_3)
void UI_NavMap::sectorModeClick(float param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  GameData *pGVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005cb096;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  fVar5 = 0.2;
  if (((char *)this)[0x45d] == (byte)0x0) {
    local_20 = *(float *)((char *)this + 0x4fc);
  }
  else {
    local_20 = 0.2;
  }
  local_20 = (param_2 - (float)(*(int *)((char *)this + 0x2a0) / 2)) / local_20;
  if (((char *)this)[0x45d] == (byte)0x0) {
    fVar5 = *(float *)((char *)this + 0x4fc);
  }
  local_1c = ((param_3 - (float)(*(int *)((char *)this + 0x2a4) / 2)) / fVar5) * -1.0;
  // [seh] local_8 = 1;
  uStack_7 = 0;
  debugPrint("RENDER","World pos = %.2f, %.2f",(double)local_20,(double)local_1c,
             // [cookie] ___security_cookie ^ (uint)&stack0xfffffffc);
  pGVar1 = g_gameData;
  if (((char *)this)[0x45d] == (byte)0x0) {
    local_18 = 10.0;
  }
  else {
    local_18 = 40.0;
  }
  local_28 = local_20;
  local_24 = local_1c;
  uVar4 = 0;
  iVar2 = *(int *)(g_gameData + 0x3c);
  if (*(int *)(g_gameData + 0x40) - iVar2 >> 2 != 0) {
    do {
      iVar2 = *(int *)(iVar2 + uVar4 * 4);
      local_30 = (float)*(int *)(iVar2 + 0x7c);
      local_2c = (float)*(int *)(iVar2 + 0x80);
      // [seh] local_8 = 3;
      fVar5 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_30,(Vec2 *)&local_28);
      local_14 = (float)(0x5f3759df - ((uint)fVar5 >> 1));
      if ((1.5 - fVar5 * 0.5 * local_14 * local_14) * local_14 * fVar5 <= local_18) {
        piVar3 = *(int **)(*(int *)(pGVar1 + 0x3c) + uVar4 * 4);
        goto LAB_00577548;
      }
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(pGVar1 + 0x3c);
    } while (uVar4 < (uint)(*(int *)(pGVar1 + 0x40) - iVar2 >> 2));
  }
  piVar3 = (int *)0x0;
LAB_00577548:
  pGVar1 = g_gameData;
  if (((char *)this)[0x45d] == (byte)0x0) {
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1d0) = 0xffffffff;
    }
    else {
      *(int *)(*(int *)(g_gameData + 0xd0) + 0x1d0) = *piVar3;
      local_2c = (float)*(int *)(*(int *)(*(int *)(pGVar1 + 0xd0) + 0x24) + 0x80);
      local_30 = (float)*(int *)(*(int *)(*(int *)(pGVar1 + 0xd0) + 0x24) + 0x7c);
      local_24 = (float)piVar3[0x20];
      local_28 = (float)piVar3[0x1f];
      // [seh] local_8 = 5;
      local_18 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_28,(Vec2 *)&local_30);
      local_14 = (float)(0x5f3759df - ((uint)local_18 >> 1));
      debugPrint("RENDER","distance from current sector = %f",
                 (double)((1.5 - local_18 * 0.5 * local_14 * local_14) * local_14 * local_18));
    }
  }
  else if (piVar3 == (int *)0x0) {
    PresentationData::m_tabletMapSelectedSector = -1;
  }
  else {
    PresentationData::m_tabletMapSelectedSector = *piVar3;
    PresentationData::m_tabletMapZoomLevel = 3;
    _m_tabletMapCenterPoint = 0;
    DAT_0065e058 = 0;
  }
  // [seh] local_8 = 1;
  (**(code **)(*(int *)this + 0x294))();
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NavMap::editorModeClick(UI_NavMap *this)
void UI_NavMap::editorModeClick()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff94[1] = {0};  // [pseudo] address of an unnamed stack slot
  Ship *pSVar1;
  SectorEditor *pSVar2;
  int iVar3;
  SoundEngine *this_00;
  Zone *pZVar4;
  int iVar5;
  GameData *pGVar6;
  Vec2 *pVVar7;
  uint uVar8;
  Vec2 *pVVar9;
  Ship *pSVar10;
  Sound SVar11;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  float local_34;
  float local_30;
  Zone *local_2c;
  NavPoint *local_28;
  StellarObject *local_24;
  float local_20;
  SensorData *local_1c;
  UI_NavMap *local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cb0ed;
  // [seh] local_10 = ExceptionList;
  // [cookie] pSVar1 = (Ship *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_18 = this_;
  worldPositionForPosition();
  // [seh] local_8._0_1_ = 1;
  pSVar2 = ghidra::any_singleton();
  if (*(int *)(pSVar2 + 0x27c) == 3) {
    local_38 = &stack0xffffff94;
    // [seh] local_8._0_1_ = 2;
    pSVar2 = ghidra::any_singleton();
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    (pSVar2)->linkNavPoint();
    // [seh] ExceptionList = local_10;
    return;
  }
  local_1c = (SensorData *)0x0;
  local_28 = (NavPoint *)0x0;
  pVVar7 = (Vec2 *)0x0;
  local_2c = (Zone *)0x0;
  ghidra::any_singleton();
  local_24 = GameData::getStellarObjectWithinDistance();
  if (local_24 == (StellarObject *)0x0) {
    local_1c = (*(Ship **)(g_gameData + 0xd0))->getSensorDataNear();
    pGVar6 = g_gameData;
    if (local_1c == (SensorData *)0x0) {
      local_28 = (*(Sector **)(*(int *)(g_gameData + 0xd0) + 0x24))->getNavPointNear();
      if (local_28 == (NavPoint *)0x0) {
        local_30 = 5.0 / *(float *)((char *)this_ + 0x4fc);
        local_4c = local_44;
        local_48 = local_40;
        iVar3 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x24);
        // [seh] local_8._0_1_ = 3;
        uVar8 = 0;
        iVar5 = *(int *)(iVar3 + 0xc0);
        local_14 = (Vec2 *)0x0;
        pVVar7 = local_14;
        if (*(int *)(iVar3 + 0xc4) - iVar5 >> 2 != 0) {
          pVVar7 = (Vec2 *)0x0;
          do {
            local_20 = cocos2d::Vec2::getDistanceSq(*(Vec2 **)(iVar5 + uVar8 * 4),(Vec2 *)&local_4c)
            ;
            local_14 = (Vec2 *)(0x5f3759df - ((uint)local_20 >> 1));
            local_34 = (1.5 - local_20 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14
                       * local_20;
            if (local_34 <= local_30) {
              if (pVVar7 != (Vec2 *)0x0) {
                local_20 = cocos2d::Vec2::getDistanceSq(pVVar7,(Vec2 *)&local_4c);
                local_14 = (Vec2 *)(0x5f3759df - ((uint)local_20 >> 1));
                if (local_34 <=
                    (1.5 - local_20 * 0.5 * (float)local_14 * (float)local_14) * (float)local_14 *
                    local_20) goto LAB_00577b6f;
              }
              pVVar7 = *(Vec2 **)(*(int *)(iVar3 + 0xc0) + uVar8 * 4);
            }
LAB_00577b6f:
            uVar8 = uVar8 + 1;
            iVar5 = *(int *)(iVar3 + 0xc0);
          } while (uVar8 < (uint)(*(int *)(iVar3 + 0xc4) - iVar5 >> 2));
        }
        local_14 = pVVar7;
        pVVar9 = local_14;
        pVVar7 = (Vec2 *)0x0;
        // [seh] local_8._0_1_ = 1;
        if (local_14 == (Vec2 *)0x0) {
          local_30 = 5.0 / *(float *)(local_18 + 0x4fc);
          local_54 = local_44;
          local_50 = local_40;
          iVar3 = *(int *)(*(int *)(g_gameData + 0xd0) + 0x24);
          // [seh] local_8._0_1_ = 4;
          pVVar7 = (Vec2 *)0x0;
          uVar8 = 0;
          iVar5 = *(int *)(iVar3 + 0xb4);
          if (*(int *)(iVar3 + 0xb8) - iVar5 >> 2 != 0) {
            do {
              local_34 = cocos2d::Vec2::getDistanceSq
                                   (*(Vec2 **)(iVar5 + uVar8 * 4),(Vec2 *)&local_54);
              local_20 = (float)(0x5f3759df - ((uint)local_34 >> 1));
              local_38 = (undefined1 *)
                         ((1.5 - local_34 * 0.5 * local_20 * local_20) * local_20 * local_34);
              if ((float)local_38 <= local_30) {
                if (pVVar7 != (Vec2 *)0x0) {
                  local_34 = cocos2d::Vec2::getDistanceSq(pVVar7,(Vec2 *)&local_54);
                  local_20 = (float)(0x5f3759df - ((uint)local_34 >> 1));
                  if ((float)local_38 <=
                      (1.5 - local_34 * 0.5 * local_20 * local_20) * local_20 * local_34)
                  goto LAB_00577d57;
                }
                pVVar7 = *(Vec2 **)(*(int *)(iVar3 + 0xb4) + uVar8 * 4);
              }
LAB_00577d57:
              uVar8 = uVar8 + 1;
              iVar5 = *(int *)(iVar3 + 0xb4);
            } while (uVar8 < (uint)(*(int *)(iVar3 + 0xb8) - iVar5 >> 2));
          }
          // [seh] local_8._0_1_ = 1;
          if (pVVar7 == (Vec2 *)0x0) {
            pZVar4 = (*(Sector **)(*(int *)(g_gameData + 0xd0) + 0x24))->getZone();
            pVVar9 = local_14;
            this_ = local_18;
            local_2c = pZVar4;
            if (pZVar4 == (Zone *)0x0) goto LAB_00577eb2;
            pSVar2 = ghidra::any_singleton();
            pGVar6 = g_gameData;
            *(undefined4 *)(pSVar2 + 0x27c) = 5;
            *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b0) = 0;
            *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b4) = 0;
            *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b8) = 0;
            *(Zone **)(*(int *)(pGVar6 + 0xd0) + 700) = pZVar4;
          }
          else {
            pSVar2 = ghidra::any_singleton();
            pGVar6 = g_gameData;
            *(undefined4 *)(pSVar2 + 0x27c) = 6;
            *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b0) = 0;
            *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b4) = 0;
            *(Vec2 **)(*(int *)(pGVar6 + 0xd0) + 0x2b8) = pVVar7;
            *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 700) = 0;
          }
          local_54 = -9999.0;
          local_50 = 0xc61c3c00;
          *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a4) = 0;
          *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a0) = 0xffffffff;
          iVar3 = *(int *)(pGVar6 + 0xd0);
          *(undefined4 *)(iVar3 + 0x1b8) = 0xc61c3c00;
          *(undefined4 *)(iVar3 + 0x1bc) = 0xc61c3c00;
          ShipInterface::soundHigh(pSVar1);
          pVVar9 = local_14;
          this_ = local_18;
        }
        else {
          pSVar2 = ghidra::any_singleton();
          pGVar6 = g_gameData;
          local_4c = -9999.0;
          local_48 = 0xc61c3c00;
          *(undefined4 *)(pSVar2 + 0x27c) = 4;
          *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b0) = 0;
          *(Vec2 **)(*(int *)(pGVar6 + 0xd0) + 0x2b4) = pVVar9;
          *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 700) = 0;
          *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a4) = 0;
          *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a0) = 0xffffffff;
          iVar3 = *(int *)(pGVar6 + 0xd0);
          *(undefined4 *)(iVar3 + 0x1b8) = 0xc61c3c00;
          *(undefined4 *)(iVar3 + 0x1bc) = 0xc61c3c00;
          ShipInterface::soundHigh(pSVar1);
          this_ = local_18;
        }
        goto LAB_00577eb2;
      }
      pSVar2 = ghidra::any_singleton();
      pGVar6 = g_gameData;
      *(undefined4 *)(pSVar2 + 0x27c) = 2;
      *(NavPoint **)(*(int *)(pGVar6 + 0xd0) + 0x2b0) = local_28;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b4) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 700) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b8) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a4) = 0;
    }
    else {
      *(SensorData **)(*(int *)(g_gameData + 0xd0) + 0x19c) = local_1c;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x198) = *(undefined4 *)local_1c;
      iVar3 = *(int *)(pGVar6 + 0xd0);
      if (*(char *)(iVar3 + 0x1b0) != '\0') {
        *(SensorData **)(iVar3 + 0x194) = local_1c;
        *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 400) = *(undefined4 *)local_1c;
        iVar3 = *(int *)(pGVar6 + 0xd0);
      }
      *(undefined4 *)(iVar3 + 0x1a4) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b0) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b4) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b8) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 700) = 0;
    }
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a0) = 0xffffffff;
LAB_00577a00:
    iVar3 = *(int *)(pGVar6 + 0xd0);
  }
  else {
    debugPrint("RENDER","Selected stellar object.");
    pGVar6 = g_gameData;
    *(StellarObject **)(*(int *)(g_gameData + 0xd0) + 0x1a4) = local_24;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a0) = *(undefined4 *)(local_24 + 0x38);
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x19c) = 0;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x198) = 0xffffffff;
    iVar3 = *(int *)(pGVar6 + 0xd0);
    if (*(char *)(iVar3 + 0x1b0) != '\0') {
      *(undefined4 *)(iVar3 + 0x194) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b0) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b4) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b8) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 700) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 400) = 0xffffffff;
      goto LAB_00577a00;
    }
  }
  local_3c = 0xc61c3c00;
  *(undefined4 *)(iVar3 + 0x1b8) = 0xc61c3c00;
  local_38 = (undefined1 *)0xc61c3c00;
  *(undefined4 *)(iVar3 + 0x1bc) = 0xc61c3c00;
  iVar3 = -1;
  SVar11 = 8;
  pSVar10 = *(Ship **)(pGVar6 + 0xd0);
  this_00 = ghidra::any_singleton();
  (this_00)->playSound(pSVar10, SVar11, iVar3);
  pVVar9 = (Vec2 *)0x0;
LAB_00577eb2:
  debugPrint("RENDER","Clicked on %f, %f",(double)local_44);
  pGVar6 = g_gameData;
  if (((((local_24 == (StellarObject *)0x0) && (local_1c == (SensorData *)0x0)) &&
       (local_28 == (NavPoint *)0x0)) && ((pVVar9 == (Vec2 *)0x0 && (local_2c == (Zone *)0x0)))) &&
     (pVVar7 == (Vec2 *)0x0)) {
    local_54 = -9999.0;
    local_50 = 0xc61c3c00;
    *(undefined4 *)(*(int *)(g_gameData + 0xd0) + 0x1a4) = 0;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x1a0) = 0xffffffff;
    iVar3 = *(int *)(pGVar6 + 0xd0);
    *(undefined4 *)(iVar3 + 0x1b8) = 0xc61c3c00;
    *(undefined4 *)(iVar3 + 0x1bc) = 0xc61c3c00;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x19c) = 0;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b0) = 0;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b4) = 0;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x2b8) = 0;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 700) = 0;
    *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x198) = 0xffffffff;
    if (*(char *)(*(int *)(pGVar6 + 0xd0) + 0x1b0) != '\0') {
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 0x194) = 0;
      *(undefined4 *)(*(int *)(pGVar6 + 0xd0) + 400) = 0xffffffff;
    }
    ShipInterface::soundLow(pSVar1);
  }
  if ((*(int *)(*(int *)(g_gameData + 0xd0) + 0x2b0) == 0) &&
     (pSVar2 = ghidra::any_singleton(), *(int *)(pSVar2 + 0x27c) == 2)) {
    pSVar2 = ghidra::any_singleton();
    *(undefined4 *)(pSVar2 + 0x27c) = 0;
  }
  if ((*(int *)(*(int *)(g_gameData + 0xd0) + 0x2b8) == 0) &&
     (pSVar2 = ghidra::any_singleton(), *(int *)(pSVar2 + 0x27c) == 6)) {
    pSVar2 = ghidra::any_singleton();
    *(undefined4 *)(pSVar2 + 0x27c) = 0;
  }
  if ((*(int *)(*(int *)(g_gameData + 0xd0) + 700) == 0) &&
     (pSVar2 = ghidra::any_singleton(), *(int *)(pSVar2 + 0x27c) == 5)) {
    pSVar2 = ghidra::any_singleton();
    *(undefined4 *)(pSVar2 + 0x27c) = 0;
  }
  pSVar1 = *(Ship **)(g_gameData + 0xd0);
  (pSVar1)->clearWaypointFlags();
  *(undefined4 *)(pSVar1 + 0x1c8) = *(undefined4 *)(pSVar1 + 0x1c4);
  (**(code **)(*(int *)this_ + 0x294))();
  pSVar2 = ghidra::any_singleton();
  if (pSVar2[0x285] != (byte)0x0) {
    pSVar2 = ghidra::any_singleton();
    (pSVar2)->describeCurrentState();
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NavMap::mouseHoverUpdate(UI_NavMap *this,undefined4 param_2,undefined4 param_3)
void UI_NavMap::mouseHoverUpdate(undefined4 param_2, undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SectorEditor *pSVar3;
  undefined4 *puVar4;
  undefined1 local_18 [8];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cb122;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  *(undefined4 *)((char *)this + 0x4d4) = param_2;
  *(undefined4 *)((char *)this + 0x4d8) = param_3;
  pSVar3 = ghidra::any_singleton();
  if (pSVar3[0x285] != (byte)0x0) {
    puVar4 = (undefined4 *)worldPositionForPosition(this,local_18,param_2,param_3);
    // [seh] local_8 = CONCAT31(local_8._1_3_,1);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    pSVar3 = ghidra::any_singleton();
    *(undefined4 *)(pSVar3 + 0x288) = uVar1;
    *(undefined4 *)(pSVar3 + 0x28c) = uVar2;
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NavMap::mouseUp(UI_NavMap *this,undefined4 param_2,undefined4 param_3)
void UI_NavMap::mouseUp(undefined4 param_2, undefined4 param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffb8[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  word *pwVar7;
  SectorEditor *pSVar8;
  std::string *pbVar9;
  SoundEngine *this_00;
  void *pvVar10;
  NetworkData *this_01;
  NetworkData *extraout_ECX;
  NetworkData *extraout_ECX_00;
  NetworkData *this_02;
  nothrow_t *pnVar11;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  double dVar12;
  Ship *pSVar13;
  Sound SVar14;
  double in_stack_ffffffb8;
  float local_34;
  float local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005cb164;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_14 = uVar4;
  iVar5 = worldPositionForPosition();
  // [seh] local_8._0_1_ = 1;
  dVar12 = (double)*(float *)(iVar5 + 4);
  pfVar6 = (float *)worldPositionForPosition(this,&stack0xffffffb8,param_2,param_3);
  // [seh] local_8 = CONCAT31(local_8._1_3_,2);
  pwVar7 = (word *)strUsingArgs((char *)local_2c,"Loc: %f, %f",(double)*pfVar6,SUB84(dVar12,0),
                                (int)((ulonglong)dVar12 >> 0x20));
  if ((word *)((char *)this + 0x4e4) != pwVar7) {
    // [mislabelled-dtor] word::~word((word *)((char *)this + 0x4e4));
    uVar1 = *(undefined4 *)(pwVar7 + 4);
    uVar2 = *(undefined4 *)(pwVar7 + 8);
    uVar3 = *(undefined4 *)(pwVar7 + 0xc);
    *(undefined4 *)((char *)this + 0x4e4) = *(undefined4 *)pwVar7;
    *(undefined4 *)((char *)this + 0x4e8) = uVar1;
    *(undefined4 *)((char *)this + 0x4ec) = uVar2;
    *(undefined4 *)((char *)this + 0x4f0) = uVar3;
    *(undefined8 *)((char *)this + 0x4f4) = *(undefined8 *)(pwVar7 + 0x10);
    *(undefined4 *)(pwVar7 + 0x10) = 0;
    *(undefined4 *)(pwVar7 + 0x14) = 0xf;
    *pwVar7 = (word)0x0;
  }
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
  // [seh] local_8 = local_8 & 0xffffff00;
  if (((char *)this)[0x45d] == (byte)0x0) {
    if (PresentationData::m_mapZoomLevel != 0) {
      pSVar8 = ghidra::any_singleton();
      if (pSVar8[0x285] != (byte)0x0) {
        editorModeClick(this,param_2,param_3);
        goto LAB_00578503;
      }
      worldPositionForPosition(this);
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      if ((((char *)this)[0x45c] == (byte)0x0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) == 1)) {
        if (g_gameLogic[0x72] == (byte)0x0) {
          ghidra::any_singleton();
          dVar12 = (double)(PresentationData::m_mapZoomLevel + 1);
          iVar5 = 0x3a;
          this_02 = extraout_ECX_00;
          goto LAB_005784af;
        }
        ShipInterface::doMapClick
                  (*(Ship **)(g_gameData + 0xd0),(int)local_34,(int)local_30,
                   PresentationData::m_mapZoomLevel + 1);
      }
      else {
        pbVar9 = (std::string *)
                 strUsingArgs((char *)local_2c,"Loc: %f, %f",(double)local_34,
                              SUB84((double)local_30,0),(int)((ulonglong)(double)local_30 >> 0x20));
        ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x4e4),pbVar9);
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
        debugPrint("WORLD","Plotting point over: %f, %f",(double)local_34,SUB84((double)local_30,0),
                   (int)((ulonglong)(double)local_30 >> 0x20));
        if (g_gameLogic[0x72] == (byte)0x0) {
          ghidra::any_singleton();
          NetworkData::sendShipCommand
                    (this_01,0x3a,
                     (double)CONCAT44(uVar4,(int)((ulonglong)
                                                  (double)(PresentationData::m_mapZoomLevel + 1) >>
                                                 0x20)),(double)CONCAT44(unaff_ESI,unaff_EDI),
                     in_stack_ffffffb8);
        }
        else {
          ShipInterface::doMapClick
                    (*(Ship **)(g_gameData + 0xd0),(int)local_34,(int)local_30,
                     PresentationData::m_mapZoomLevel + 1);
        }
        if (g_gameLogic[0x72] == (byte)0x0) {
          ghidra::any_singleton();
          dVar12 = 0.0;
          iVar5 = 5;
          this_02 = extraout_ECX;
LAB_005784af:
          NetworkData::sendShipCommand
                    (this_02,iVar5,(double)CONCAT44(uVar4,(int)((ulonglong)dVar12 >> 0x20)),
                     (double)CONCAT44(unaff_ESI,unaff_EDI),in_stack_ffffffb8);
        }
        else {
          ShipInterface::doPlotCourse(*(Ship **)(g_gameData + 0xd0),1,0,0);
        }
      }
      (**(code **)(*(int *)this + 0x294))();
      iVar5 = -1;
      SVar14 = 9;
      pSVar13 = *(Ship **)(g_gameData + 0xd0);
      this_00 = ghidra::any_singleton();
      (this_00)->playSound(pSVar13, SVar14, iVar5);
      goto LAB_00578503;
    }
  }
  else if (PresentationData::m_tabletMapZoomLevel != 0) goto LAB_00578503;
  sectorModeClick(this,param_2,param_3);
LAB_00578503:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_NavMap::specialDataCheckFunction(UI_NavMap *this,float param_1)
void UI_NavMap::specialDataCheckFunction(float param_1)

{
  int iVar1;
  GameData *pGVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pGVar2 = g_gameData;
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    if (3 < (uint)(*(int *)((char *)this + 0x4b8) - *(int *)((char *)this + 0x4b4) >> 2)) {
      if (*(int *)((char *)this + 0x4c0) != 0) {
        fVar3 = *(float *)((char *)this + 0x4d0) + param_1;
        *(float *)((char *)this + 0x4d0) = fVar3;
        if (1.0 <= fVar3) {
          *(float *)((char *)this + 0x4d0) = fVar3 - 2.0;
        }
      }
      iVar1 = *(int *)(*(int *)(pGVar2 + 0xd0) + 0x60);
      *(int *)((char *)this + 0x4c8) = iVar1;
      if (iVar1 != -1) {
        if (((char *)this)[0x4cc] == (byte)0x1) {
          fVar3 = *(float *)((char *)this + 0x4c4) + param_1 * 212.49998;
          *(float *)((char *)this + 0x4c4) = fVar3;
          if (200.0 <= fVar3) {
            *(undefined4 *)((char *)this + 0x4c4) = 0x43480000;
            ((char *)this)[0x4cc] = (byte)0x0;
          }
        }
        else {
          fVar3 = *(float *)((char *)this + 0x4c4) - param_1 * 212.49998;
          *(float *)((char *)this + 0x4c4) = fVar3;
          if (fVar3 <= 40.0) {
            *(undefined4 *)((char *)this + 0x4c4) = 0x42200000;
            ((char *)this)[0x4cc] = (byte)0x1;
          }
        }
      }
    }
    fVar3 = *(float *)((char *)this + 0x44c);
    if ((fVar3 != 0.0) || (*(float *)((char *)this + 0x450) != 0.0)) {
      *(float *)((char *)this + 0x454) = *(float *)((char *)this + 0x454) + param_1;
      fVar4 = *(float *)((char *)this + 0x458) + param_1;
      *(float *)((char *)this + 0x458) = fVar4;
      if (0.01 <= fVar4) {
        fVar5 = 8.0;
        *(float *)((char *)this + 0x458) = fVar4 - 0.01;
        if (fVar3 != 0.0) {
          if (((char *)this)[0x45d] == (byte)0x0) {
            if (PresentationData::m_lockToShip != false) {
              PresentationData::m_lockToShip = false;
              _m_mapCenterPoint = (float)*(double *)(*(int *)(pGVar2 + 0xd0) + 0x28);
              DAT_0065e060 = (float)*(double *)(*(int *)(pGVar2 + 0xd0) + 0x30);
              fVar3 = *(float *)((char *)this + 0x44c);
            }
            if (((char *)this)[0x45c] == (byte)0x0) {
              fVar4 = 2.0;
            }
            else {
              fVar4 = 8.0;
            }
            _m_mapCenterPoint = fVar4 * fVar3 + _m_mapCenterPoint;
          }
          else {
            if (PresentationData::m_tabletLockToShip != false) {
              PresentationData::m_tabletLockToShip = false;
              _m_tabletMapCenterPoint = (float)*(double *)(*(int *)(pGVar2 + 0xd0) + 0x28);
              DAT_0065e058 = (float)*(double *)(*(int *)(pGVar2 + 0xd0) + 0x30);
              fVar3 = *(float *)((char *)this + 0x44c);
            }
            if (((char *)this)[0x45c] == (byte)0x0) {
              fVar4 = 2.0;
            }
            else {
              fVar4 = 8.0;
            }
            _m_tabletMapCenterPoint = fVar4 * fVar3 + _m_tabletMapCenterPoint;
          }
          **(undefined1 **)((char *)this + 0x288) = 1;
        }
        fVar3 = *(float *)((char *)this + 0x450);
        if (fVar3 != 0.0) {
          if (((char *)this)[0x45d] == (byte)0x0) {
            if (PresentationData::m_lockToShip != false) {
              PresentationData::m_lockToShip = false;
              _m_mapCenterPoint = (float)*(double *)(*(int *)(pGVar2 + 0xd0) + 0x28);
              DAT_0065e060 = (float)*(double *)(*(int *)(pGVar2 + 0xd0) + 0x30);
              fVar3 = *(float *)((char *)this + 0x450);
            }
            if (((char *)this)[0x45c] == (byte)0x0) {
              fVar5 = 2.0;
            }
            DAT_0065e060 = fVar5 * fVar3 + DAT_0065e060;
          }
          else {
            if (PresentationData::m_tabletLockToShip != false) {
              PresentationData::m_tabletLockToShip = false;
              _m_tabletMapCenterPoint = (float)*(double *)(*(int *)(pGVar2 + 0xd0) + 0x28);
              DAT_0065e058 = (float)*(double *)(*(int *)(pGVar2 + 0xd0) + 0x30);
              fVar3 = *(float *)((char *)this + 0x450);
            }
            if (((char *)this)[0x45c] == (byte)0x0) {
              fVar5 = 2.0;
            }
            DAT_0065e058 = fVar5 * fVar3 + DAT_0065e058;
          }
          **(undefined1 **)((char *)this + 0x288) = 1;
        }
      }
    }
    (**(code **)(*(int *)this + 0x294))();
  }
  return;
}


// Ghidra: StellarObject * __thiscall UI_NavMap::getStellarObjectLook(UI_NavMap *this,StellarObject *param_1)
StellarObject * UI_NavMap::getStellarObjectLook(StellarObject * param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint unaff_ESI;
  char *unaff_EDI;
  int *piVar4;
  int in_stack_00000008;
  
  piVar4 = (int *)(in_stack_00000008 + 0x8c);
  bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,unaff_EDI,unaff_ESI);
  if (bVar2) {
    switch(*(undefined4 *)(in_stack_00000008 + 0x54)) {
    case 0:
      goto switchD_00578921_caseD_0;
    case 1:
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      strUsingArgs((char *)param_1,"%s_Star.png",puVar3);
      return param_1;
    case 2:
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      strUsingArgs((char *)param_1,"%s_Moon.png",puVar3);
      return param_1;
    case 3:
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      strUsingArgs((char *)param_1,"%s_AsteroidSegment_Light_%02d.png",puVar3,
                   *(undefined4 *)(in_stack_00000008 + 0xac));
      return param_1;
    case 4:
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      strUsingArgs((char *)param_1,"%s_GasCloudSegment_%s_%02d.png",puVar3,
                   (&PTR_s_Dark_005e2df4)[*(int *)(in_stack_00000008 + 0xa8)],
                   *(undefined4 *)(in_stack_00000008 + 0xac));
      return param_1;
    default:
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *param_1 = (byte)0x0;
      ghidra::str::assign((std::string *)param_1,"",0);
      return param_1;
    }
  }
  if (0xf < *(uint *)(in_stack_00000008 + 0xa0)) {
    piVar4 = (int *)*piVar4;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
  puVar3 = (undefined4 *)(iVar1 + 0x98);
  if (0xf < *(uint *)(iVar1 + 0xac)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  strUsingArgs((char *)param_1,"%s_%s.png",puVar3,piVar4);
  return param_1;
switchD_00578921_caseD_0:
  if (0.0 < *(float *)(in_stack_00000008 + 0xc0)) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
    puVar3 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    strUsingArgs((char *)param_1,"%s_Planet_Lush.png",puVar3);
    return param_1;
  }
  if (*(int *)(in_stack_00000008 + 200) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
    if (*(int *)(in_stack_00000008 + 200) != 1) {
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      strUsingArgs((char *)param_1,"%s_Planet_Gas_Purple.png",puVar3);
      return param_1;
    }
    puVar3 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    strUsingArgs((char *)param_1,"%s_Planet_Gas_Purple.png",puVar3);
    return param_1;
  }
  iVar1 = *(int *)(in_stack_00000008 + 0xc4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
    puVar3 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    strUsingArgs((char *)param_1,"%s_Planet_Barren.png",puVar3);
    return param_1;
  }
  if ((iVar1 != 3) && (iVar1 != 2)) {
    if ((iVar1 != 4) && (iVar1 != 1)) {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      strUsingArgs((char *)param_1,"%s_Planet_Barren.png",puVar3);
      return param_1;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
    puVar3 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    strUsingArgs((char *)param_1,"%s_Planet_Red.png",puVar3);
    return param_1;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
  puVar3 = (undefined4 *)(iVar1 + 0x98);
  if (0xf < *(uint *)(iVar1 + 0xac)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  strUsingArgs((char *)param_1,"%s_Planet_Lush.png",puVar3);
  return param_1;
}


// Ghidra: SensorData * __thiscall UI_NavMap::getShipLook(UI_NavMap *this,SensorData *param_1,bool param_2)
SensorData * UI_NavMap::getShipLook(SensorData * param_1, bool param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int extraout_ECX;
  undefined3 in_stack_00000009;
  char in_stack_0000000c;
  
  iVar1 = *(int *)(_param_2 + 0xd8);
  if (iVar1 == 2) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
    puVar3 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    strUsingArgs((char *)param_1,"%s_JumpGate.png",puVar3);
    return param_1;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      if (iVar1 == 3) {
        iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
        puVar3 = (undefined4 *)(iVar1 + 0x98);
        if (0xf < *(uint *)(iVar1 + 0xac)) {
          puVar3 = (undefined4 *)*puVar3;
        }
        strUsingArgs((char *)param_1,"%s_Depot.png",puVar3);
        return param_1;
      }
      if (iVar1 == 4) {
        bVar2 = (_param_2)->analysed();
        if (bVar2) {
          iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
          if (*(int *)(extraout_ECX + 0xdc) == 0) {
            puVar3 = (undefined4 *)(iVar1 + 0x98);
            if (0xf < *(uint *)(iVar1 + 0xac)) {
              puVar3 = (undefined4 *)*puVar3;
            }
            pcVar4 = "";
            if (in_stack_0000000c == '\0') {
              pcVar4 = "_NoContact";
            }
            strUsingArgs((char *)param_1,"%s_FriendlyMissile%s.png",puVar3,pcVar4);
            return param_1;
          }
          puVar3 = (undefined4 *)(iVar1 + 0x98);
          if (0xf < *(uint *)(iVar1 + 0xac)) {
            puVar3 = (undefined4 *)*puVar3;
          }
          pcVar4 = "";
          if (in_stack_0000000c == '\0') {
            pcVar4 = "_NoContact";
          }
          strUsingArgs((char *)param_1,"%s_HostileMissile%s.png",puVar3,pcVar4);
          return param_1;
        }
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *param_1 = (byte)0x0;
      ghidra::str::assign((std::string *)param_1,"",0);
      return param_1;
    }
    if ((*(int *)(_param_2 + 0x130) != 0) && (*(char *)(*(int *)(_param_2 + 0x130) + 0x388) != '\0')
       ) {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      strUsingArgs((char *)param_1,"%s_ColonyShip.png",puVar3);
      return param_1;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
    puVar3 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    strUsingArgs((char *)param_1,"%s_Starbase.png",puVar3);
    return param_1;
  }
  if ((*(int *)(_param_2 + 0x130) != 0) &&
     (iVar1 = *(int *)(*(int *)(_param_2 + 0x130) + 0x44), iVar1 != 0)) {
    if ((*(int *)(iVar1 + 0x70) == 7) ||
       ((*(int *)(iVar1 + 0x124) != 0 && (*(int *)(*(int *)(iVar1 + 0x124) + 0x248) == 2)))) {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      pcVar4 = "";
      if (in_stack_0000000c == '\0') {
        pcVar4 = "_NoContact";
      }
      strUsingArgs((char *)param_1,"%s_Authority%s.png",puVar3,pcVar4);
      return param_1;
    }
    if ((iVar1 != 0) &&
       ((*(int *)(iVar1 + 0x70) == 8 ||
        ((*(int *)(iVar1 + 0x124) != 0 && (*(int *)(*(int *)(iVar1 + 0x124) + 0x248) == 1)))))) {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar3 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      pcVar4 = "";
      if (in_stack_0000000c == '\0') {
        pcVar4 = "_NoContact";
      }
      strUsingArgs((char *)param_1,"%s_Military%s.png",puVar3,pcVar4);
      return param_1;
    }
  }
  if (*(int *)(_param_2 + 0xdc) == 2) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
    puVar3 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    pcVar4 = "";
    if (in_stack_0000000c == '\0') {
      pcVar4 = "_NoContact";
    }
    strUsingArgs((char *)param_1,"%s_Hostile%s.png",puVar3,pcVar4);
    return param_1;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
  if (*(int *)(_param_2 + 0xdc) == 0) {
    puVar3 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    pcVar4 = "";
    if (in_stack_0000000c == '\0') {
      pcVar4 = "_NoContact";
    }
    strUsingArgs((char *)param_1,"%s_Friendly%s.png",puVar3,pcVar4);
    return param_1;
  }
  puVar3 = (undefined4 *)(iVar1 + 0x98);
  if (0xf < *(uint *)(iVar1 + 0xac)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  pcVar4 = "";
  if (in_stack_0000000c == '\0') {
    pcVar4 = "_NoContact";
  }
  strUsingArgs((char *)param_1,"%s_Neutral%s.png",puVar3,pcVar4);
  return param_1;
}


// Ghidra: Ship * __thiscall UI_NavMap::getShipLook(UI_NavMap *this,Ship *param_1,bool param_2)
Ship * UI_NavMap::getShipLook(Ship * param_1, bool param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined3 in_stack_00000009;
  
  iVar1 = *(int *)(*(int *)(_param_2 + 0x254) + 0x158);
  if (iVar1 == 2) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
    puVar2 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    strUsingArgs((char *)param_1,"%s_JumpGate.png",puVar2);
    return param_1;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar2 = (undefined4 *)(iVar1 + 0x98);
      if (*(char *)(_param_2 + 0x388) != '\0') {
        if (0xf < *(uint *)(iVar1 + 0xac)) {
          puVar2 = (undefined4 *)*puVar2;
        }
        strUsingArgs((char *)param_1,"%s_ColonyShip.png",puVar2);
        return param_1;
      }
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      strUsingArgs((char *)param_1,"%s_Starbase.png",puVar2);
      return param_1;
    }
    if (iVar1 == 3) {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar2 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      strUsingArgs((char *)param_1,"%s_Depot.png",puVar2);
      return param_1;
    }
    if (iVar1 == 4) {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar2 = (undefined4 *)(iVar1 + 0x98);
      if (*(int *)(_param_2 + 0x39c) == *(int *)(g_gameData + 0xd0)) {
        if (0xf < *(uint *)(iVar1 + 0xac)) {
          puVar2 = (undefined4 *)*puVar2;
        }
        strUsingArgs((char *)param_1,"%s_FriendlyMissile%s.png",puVar2,"");
        return param_1;
      }
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar2 = (undefined4 *)*puVar2;
      }
      strUsingArgs((char *)param_1,"%s_HostileMissile%s.png",puVar2,"");
      return param_1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *param_1 = (byte)0x0;
    ghidra::str::assign((std::string *)param_1,"",0);
    return param_1;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28);
  if (_param_2 == *(int *)(g_gameData + 0xd0)) {
    iVar1 = *(int *)(iVar1 + 8);
    puVar2 = (undefined4 *)(iVar1 + 0x98);
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    strUsingArgs((char *)param_1,"%s_OwnShip.png",puVar2);
    return param_1;
  }
  iVar1 = *(int *)(iVar1 + 8);
  piVar3 = (int *)(iVar1 + 0x98);
  if (*(char *)(*(int *)(_param_2 + 0x40) + 0x34) == '\0') {
    if (0xf < *(uint *)(iVar1 + 0xac)) {
      piVar3 = (int *)*piVar3;
    }
    strUsingArgs((char *)param_1,"%s_Hostile%s.png",piVar3,"");
    return param_1;
  }
  if (0xf < *(uint *)(iVar1 + 0xac)) {
    piVar3 = (int *)*piVar3;
  }
  strUsingArgs((char *)param_1,"%s_Neutral%s.png",piVar3,"");
  return param_1;
}


// Ghidra: void __thiscall UI_NavMap::centreOfMap(UI_NavMap *this)
void UI_NavMap::centreOfMap()

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  float *in_stack_00000004;
  void *local_1c [4];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0xf;
  local_1c[0] = (void *)((uint)local_1c[0] & 0xffffff00);
  ghidra::str::assign((std::string *)local_1c,"",0);
  bVar2 = PresentationData::m_lockToShip;
  if (*(int *)(g_gameData + 0xd0) == 0) {
    if (0xf < local_8) {
      pnVar4 = (nothrow_t *)(local_8 + 1);
      pvVar3 = local_1c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_1c[0] + -4);
        pnVar4 = (nothrow_t *)(local_8 + 0x24);
        if (0x1f < (uint)((int)local_1c[0] + (-4 - (int)pvVar3))) goto LAB_0057932e;
      }
      operator_delete(pvVar3,pnVar4);
    }
LAB_005792aa:
    *in_stack_00000004 = _m_mapCenterPoint;
    in_stack_00000004[1] = DAT_0065e060;
    return;
  }
  if (PresentationData::m_mapZoomLevel == 0) {
    if (0xf < local_8) {
      pnVar4 = (nothrow_t *)(local_8 + 1);
      pvVar3 = local_1c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_1c[0] + -4);
        pnVar4 = (nothrow_t *)(local_8 + 0x24);
        if (0x1f < (uint)((int)local_1c[0] + (-4 - (int)pvVar3))) {
LAB_0057932e:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,pnVar4);
    }
  }
  else {
    if (0xf < local_8) {
      pnVar4 = (nothrow_t *)(local_8 + 1);
      pvVar3 = local_1c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_1c[0] + -4);
        pnVar4 = (nothrow_t *)(local_8 + 0x24);
        if (0x1f < (uint)((int)local_1c[0] + (-4 - (int)pvVar3))) goto LAB_0057932e;
      }
      operator_delete(pvVar3,pnVar4);
    }
    if (bVar2 == false) goto LAB_005792aa;
  }
  iVar1 = *(int *)(g_gameData + 0xd0);
  *in_stack_00000004 = (float)*(double *)(iVar1 + 0x28);
  in_stack_00000004[1] = (float)*(double *)(iVar1 + 0x30);
  return;
}


// Ghidra: float * __thiscall UI_NavMap::positionForWorldPosition(UI_NavMap *this,float *param_2,float param_3,float param_4)
float * UI_NavMap::positionForWorldPosition(float * param_2, float param_3, float param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  double dVar1;
  int iVar2;
  bool bVar3;
  Vec2 *pVVar4;
  float fVar5;
  float fVar6;
  std::string local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  uint uStack_24;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cb1b3;
  // [seh] local_10 = ExceptionList;
  // [cookie] uStack_24 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  *param_2 = param_3;
  param_2[1] = param_4;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (std::string)0x0;
  ghidra::str::assign(local_3c,"",0);
  bVar3 = PresentationData::checkNavMapLockedToShip(*(undefined4 *)(g_gameData + 0xd0),((char *)this)[0x45d]);
  if (bVar3) {
    dVar1 = *(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
    *param_2 = *param_2 - (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
    fVar6 = param_2[1] - (float)dVar1;
  }
  else {
    pVVar4 = &PresentationData::m_tabletMapCenterPoint;
    if (((char *)this)[0x45d] == (byte)0x0) {
      pVVar4 = &PresentationData::m_mapCenterPoint;
    }
    *param_2 = *param_2 - *(float *)pVVar4;
    fVar6 = param_2[1] - *(float *)(pVVar4 + 4);
  }
  param_2[1] = fVar6;
  fVar5 = *param_2 * *(float *)((char *)this + 0x4fc);
  fVar6 = fVar6 * *(float *)((char *)this + 0x4fc);
  *param_2 = fVar5;
  param_2[1] = fVar6;
  fVar5 = (float)(*(int *)((char *)this + 0x2a0) / 2) + fVar5;
  *param_2 = fVar5;
  iVar2 = *(int *)((char *)this + 0x2a4);
  *param_2 = (float)(int)fVar5;
  param_2[1] = (float)(int)((float)(iVar2 / 2) + fVar6);
  // [seh] ExceptionList = local_10;
  return param_2;
}


// Ghidra: float * __thiscall UI_NavMap::worldPositionForPosition(UI_NavMap *this,float *param_2,float param_3,float param_4)
float * UI_NavMap::worldPositionForPosition(float * param_2, float param_3, float param_4)

{
  bool bVar1;
  float *pfVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  Vec2 local_24 [8];
  float local_1c;
  float local_18;
  undefined4 local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005cb1fc;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  *param_2 = param_3;
  param_2[1] = param_4;
  local_14 = 1;
  local_2c = 0;
  local_28 = 0xf;
  local_3c[0] = (void *)((uint)local_3c[0] & 0xffffff00);
  param_3 = param_3 - (float)(*(int *)((char *)this + 0x2a0) / 2);
  *param_2 = param_3;
  param_4 = param_4 - (float)(*(int *)((char *)this + 0x2a4) / 2);
  param_2[1] = param_4;
  *param_2 = param_3 / *(float *)((char *)this + 0x4fc);
  param_2[1] = (param_4 / *(float *)((char *)this + 0x4fc)) * -1.0;
  ghidra::str::assign((std::string *)local_3c,"",0);
  bVar1 = PresentationData::m_lockToShip;
  if (*(int *)(g_gameData + 0xd0) == 0) {
    if (0xf < local_28) {
      pnVar4 = (nothrow_t *)(local_28 + 1);
      pvVar3 = local_3c[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_3c[0] + -4);
        pnVar4 = (nothrow_t *)(local_28 + 0x24);
        if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,pnVar4);
    }
LAB_0057960d:
    pfVar2 = (float *)cocos2d::Vec2::operator+(&PresentationData::m_mapCenterPoint,local_24);
    *param_2 = *pfVar2;
    param_2[1] = pfVar2[1];
  }
  else {
    if (PresentationData::m_mapZoomLevel == 0) {
      if (0xf < local_28) {
        pnVar4 = (nothrow_t *)(local_28 + 1);
        pvVar3 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar4) {
          pvVar3 = *(void **)((int)local_3c[0] + -4);
          pnVar4 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar3,pnVar4);
      }
    }
    else {
      if (0xf < local_28) {
        pnVar4 = (nothrow_t *)(local_28 + 1);
        pvVar3 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar4) {
          pvVar3 = *(void **)((int)local_3c[0] + -4);
          pnVar4 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar3,pnVar4);
      }
      if (bVar1 == false) goto LAB_0057960d;
    }
    local_1c = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
    local_18 = (float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x30);
    // [seh] local_8 = CONCAT31(local_8._1_3_,2);
    pfVar2 = (float *)cocos2d::Vec2::operator+((Vec2 *)&local_1c,local_24);
    *param_2 = *pfVar2;
    param_2[1] = pfVar2[1];
  }
  // [seh] ExceptionList = local_10;
  return param_2;
}


// Ghidra: void __thiscall UI_NavMap::renderDetectionCone (UI_NavMap *this,SensorData *param_1,NM_MapObject *param_2,float param_3)
void UI_NavMap::renderDetectionCone(SensorData * param_1, NM_MapObject * param_2, float param_3)

{
  int *piVar1;
  int iVar2;
  NM_MapObject *pNVar3;
  Sprite *pSVar4;
  Vec2 *pVVar5;
  Vec2 *this_00;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  Color3B *this_01;
  float fVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  code *pcVar13;
  uint local_58;
  // [seh] undefined1 *puStack_54;
  undefined1 local_20 [4];
  undefined4 local_1c;
  float local_18;
  Color3B local_13 [3];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cb232;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  local_58 = local_58 & 0xffffff00;
  ghidra::str::assign((std::string *)&local_58,"beaconcone.png",0xe);
  pSVar4 = loadSprite();
  pNVar3 = param_2;
  *(Sprite **)(param_2 + 0x28) = pSVar4;
  // [seh] local_8 = 0;
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_54 = (undefined1 *)0x5797a5;
  (param_1)->getPresumedLocation();
  // [seh] puStack_54 = (undefined1 *)(float)*(double *)(*(int *)(g_gameData + 0xd0) + 0x28);
  local_58 = 0x5797d5;
  angleInDegreesFrom();
  (**(code **)(**(int **)(pNVar3 + 0x28) + 0xbc))();
  fVar9 = *(float *)(param_1 + 0x128);
  // [seh] puStack_54 = local_20;
  local_58 = 0x57984c;
  positionForWorldPosition(this);
  // [seh] local_8 = 1;
  (**(code **)(**(int **)(pNVar3 + 0x28) + 0x4c))();
  // [seh] local_8 = 0xffffffff;
  pVVar5 = (Vec2 *)(**(code **)(**(int **)(pNVar3 + 0x20) + 0x5c))();
  this_00 = (Vec2 *)(**(code **)(**(int **)(pNVar3 + 0x28) + 0x5c))();
  // [seh] puStack_54 = (undefined1 *)0x57987e;
  local_18 = cocos2d::Vec2::getDistanceSq(this_00,pVVar5);
  piVar1 = *(int **)(pNVar3 + 0x28);
  iVar2 = *piVar1;
  param_2 = (NM_MapObject *)(0x5f3759df - ((uint)local_18 >> 1));
  iVar6 = (**(code **)(iVar2 + 0xb0))();
  local_1c = *(undefined4 *)(iVar6 + 4);
  pfVar7 = (float *)(**(code **)(*piVar1 + 0xb0))();
  // [seh] puStack_54 = (undefined1 *)(((1.0 - fVar9 / 100.0) * 64.0) / *pfVar7);
  local_58 = 0x57990c;
  (**(code **)(iVar2 + 0x3c))();
  local_58 = (int)((fVar9 / 100.0) * 80.0 + 64.0) & 0xff;
  (**(code **)(**(int **)(pNVar3 + 0x28) + 0x244))();
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8) +
                  0xb0);
  if (iVar2 == 0) {
    uVar12 = '^';
    uVar11 = 0xa1;
    uVar10 = 'X';
    this_01 = (Color3B *)((int)&param_2 + 1);
  }
  else if (iVar2 == 1) {
    uVar12 = 0xff;
    uVar11 = '\0';
    uVar10 = '\0';
    this_01 = (Color3B *)((int)&param_2 + 1);
  }
  else {
    if (param_1[0x45] == (byte)0x0) {
switchD_0057999c_caseD_1:
      pcVar13 = YELLOW_exref;
LAB_00579a28:
      (**(code **)(**(int **)(pNVar3 + 0x28) + 0x25c))(pcVar13);
      goto switchD_0057999c_default;
    }
    switch(*(undefined4 *)(param_1 + 0xe0)) {
    case 0:
      iVar2 = *(int *)(param_1 + 0xdc);
      if (iVar2 != 0) {
        pcVar13 = GREEN_exref;
        if (((iVar2 != 1) && (pcVar13 = RED_exref, iVar2 != 2)) &&
           (pcVar13 = YELLOW_exref, iVar2 != 3)) goto switchD_0057999c_default;
        goto LAB_00579a28;
      }
      uVar12 = 0xd0;
      uVar11 = 0xf5;
      uVar10 = 0xf5;
      this_01 = (Color3B *)((int)&param_2 + 1);
      break;
    case 1:
    case 2:
      goto switchD_0057999c_caseD_1;
    case 3:
      pcVar13 = ORANGE_exref;
      goto LAB_00579a28;
    case 4:
    case 5:
    case 6:
    case 7:
      if (*(float *)(param_1 + 0x128) == 0.0) goto switchD_0057999c_default;
      uVar12 = '\"';
      uVar11 = 0x9f;
      uVar10 = 0xf9;
      this_01 = local_13;
      break;
    default:
      goto switchD_0057999c_default;
    }
  }
  iVar2 = **(int **)(pNVar3 + 0x28);
  uVar8 = cocos2d::Color3B::Color3B(this_01,uVar10,uVar11,uVar12);
  (**(code **)(iVar2 + 0x25c))(uVar8);
switchD_0057999c_default:
  (**(code **)(*(int *)this + 0x108))(*(undefined4 *)(pNVar3 + 0x28),5);
  fVar9 = *(float *)(param_1 + 0x128);
  if (fVar9 == 100.0) {
    (**(code **)(**(int **)(pNVar3 + 0x28) + 0xb4))(0);
    fVar9 = *(float *)(param_1 + 0x128);
  }
  if (25.0 <= fVar9) {
    if (50.0 <= fVar9) {
      if (75.0 <= fVar9) {
        if (90.0 <= fVar9) {
          uVar8 = 0xff;
        }
        else {
          uVar8 = 0xc0;
        }
      }
      else {
        uVar8 = 0x80;
      }
    }
    else {
      uVar8 = 0x40;
    }
  }
  else {
    uVar8 = 0x20;
  }
  (**(code **)(**(int **)(pNVar3 + 0x20) + 0x244))(uVar8);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall UI_NavMap::renderSensorObject(UI_NavMap *this,SensorData *param_1,float param_2)
void UI_NavMap::renderSensorObject(SensorData * param_1, float param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff68[1] = {0};  // [pseudo] address of an unnamed stack slot
  AnimationFrames **ppAVar1;
  UI_NavMap *pUVar2;
  undefined1 uVar3;
  bool bVar4;
  float fVar5;
  void **ppvVar6;
  word *pwVar7;
  NM_MapObject *pNVar8;
  std::string *pbVar9;
  Sprite *pSVar10;
  undefined4 *******pppppppuVar11;
  UIText *pUVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  undefined4 *puVar17;
  void *pvVar18;
  nothrow_t *pnVar19;
  SensorData *this_00;
  float in_XMM2_Da;
  undefined4 uVar20;
  NM_MapObject *local_74;
  Color3B local_6f [3];
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_54;
  SensorData *local_50;
  UI_NavMap *local_4c;
  char local_45;
  void *local_44;
  void *pvStack_40;
  void *pvStack_3c;
  void *pvStack_38;
  undefined8 local_34;
  undefined4 *******local_2c [4];
  undefined4 local_1c;
  uint local_18;
  float local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005cb2b7;
  // [seh] local_10 = ExceptionList;
  // [cookie] fVar5 = (float)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_50 = param_1;
  local_34 = 0xf00000000;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  // [seh] local_8 = 0;
  iVar14 = *(int *)(param_1 + 0xe0);
  local_64 = in_XMM2_Da;
  local_4c = this;
  local_14 = fVar5;
  if (iVar14 == 2) {
    ppvVar6 = (void **)strUsingArgs((char *)local_2c);
    if (&local_44 == ppvVar6) goto LAB_00579bc9;
LAB_00579b9f:
    // [mislabelled-dtor] word::~word((word *)&local_44);
    local_44 = *ppvVar6;
    pvStack_40 = ppvVar6[1];
    pvStack_3c = ppvVar6[2];
    pvStack_38 = ppvVar6[3];
    local_34 = *(undefined8 *)(ppvVar6 + 4);
    ppvVar6[4] = (void *)0x0;
    ppvVar6[5] = (void *)0xf;
    *(undefined1 *)ppvVar6 = 0;
LAB_00579bc9:
    if (0xf < local_18) {
      pnVar19 = (nothrow_t *)(local_18 + 1);
      pppppppuVar11 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pnVar19 = (nothrow_t *)(local_18 + 0x24);
        pppppppuVar11 = (undefined4 *******)local_2c[0][-1];
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)local_2c[0][-1]))) goto LAB_00579bfb;
      }
LAB_00579e70:
      operator_delete(pppppppuVar11,pnVar19);
    }
  }
  else {
    if (param_1[0x45] != (byte)0x0) {
      if (iVar14 == 1) {
LAB_00579e4c:
        ppvVar6 = (void **)strUsingArgs((char *)local_2c);
        if (&local_44 != ppvVar6) goto LAB_00579b9f;
      }
      else if (iVar14 == 0) {
        if (*(float *)(param_1 + 0x118) != 0.0) goto LAB_00579e4c;
        pbVar9 = (std::string *)
                 getShipLook((UI_NavMap *)0x0,(SensorData *)local_2c,SUB41(param_1,0));
        ghidra::lib::basic_string__operator_x3d((std::string *)&local_44,pbVar9);
      }
      else {
        if ((((iVar14 != 3) && (iVar14 != 5)) && (iVar14 != 6)) && ((iVar14 != 4 && (iVar14 != 7))))
        goto LAB_00579e7a;
        pbVar9 = (std::string *)strUsingArgs((char *)local_2c);
        ghidra::lib::basic_string__operator_x3d((std::string *)&local_44,pbVar9);
      }
      goto LAB_00579bc9;
    }
    pwVar7 = (word *)strUsingArgs((char *)local_2c);
    if ((word *)&local_44 != pwVar7) {
      // [mislabelled-dtor] word::~word((word *)&local_44);
      local_44 = *(void **)pwVar7;
      pvStack_40 = *(void **)(pwVar7 + 4);
      pvStack_3c = *(void **)(pwVar7 + 8);
      pvStack_38 = *(void **)(pwVar7 + 0xc);
      local_34 = *(undefined8 *)(pwVar7 + 0x10);
      *(undefined4 *)(pwVar7 + 0x10) = 0;
      *(undefined4 *)(pwVar7 + 0x14) = 0xf;
      *pwVar7 = (word)0x0;
    }
    if (0xf < local_18) {
      pnVar19 = (nothrow_t *)(local_18 + 1);
      pppppppuVar11 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pppppppuVar11 = (undefined4 *******)local_2c[0][-1];
        pnVar19 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar11))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_00579e70;
    }
  }
LAB_00579e7a:
  pNVar8 = operator_new(0x38);
  // [seh] local_8._0_1_ = 1;
  iVar14 = *(int *)(param_1 + 0x130);
  local_74 = pNVar8;
  ghidra::str::ctor
            ((std::string *)&stack0xffffff68,(std::string *)&local_44);
  pbVar9 = (std::string *)new ((void *)(pNVar8)) NM_MapObject(-(uint)(iVar14 != 0) & iVar14 + 8U);
  // [seh] local_8._0_1_ = 0;
  piVar15 = *(int **)(pbVar9 + 0x20);
  local_74 = (NM_MapObject *)pbVar9;
  if (piVar15 == (int *)0x0) {
    ghidra::str::ctor((std::string *)&stack0xffffff68,pbVar9);
    pSVar10 = loadSprite();
    *(Sprite **)(pbVar9 + 0x20) = pSVar10;
    (**(code **)(*(int *)local_4c + 0x108))();
    piVar15 = *(int **)(pbVar9 + 0x20);
  }
  (**(code **)(*piVar15 + 0x40))();
  local_6c = 0x3f000000;
  local_68 = 0x3f000000;
  // [seh] local_8._0_1_ = 2;
  (**(code **)(**(int **)(pbVar9 + 0x20) + 0xa0))();
  this_00 = local_50;
  // [seh] local_8._0_1_ = 0;
  (local_50)->getPresumedLocation();
  positionForWorldPosition(local_4c);
  // [seh] local_8._0_1_ = 3;
  (**(code **)(**(int **)(pbVar9 + 0x20) + 0x4c))();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  local_45 = *(float *)(this_00 + 0x118) < 120.0;
  (**(code **)(**(int **)(pbVar9 + 0x20) + 0xb4))();
  pUVar2 = local_4c;
  if (this_00 == *(SensorData **)(*(int *)(g_gameData + 0xd0) + 0x19c)) {
    (**(code **)(**(int **)(local_4c + 0x478) + 0x40))();
    iVar14 = **(int **)(pUVar2 + 0x478);
    (**(code **)(**(int **)(pbVar9 + 0x20) + 0x5c))();
    (**(code **)(iVar14 + 0x4c))();
    pUVar2 = local_4c;
    (**(code **)(**(int **)(local_4c + 0x478) + 0xb4))();
    iVar14 = **(int **)(pUVar2 + 0x478);
    cocos2d::Color3B::Color3B(local_6f,0x9e,0xd2,0xf9);
    (**(code **)(iVar14 + 0x25c))();
    this_00 = local_50;
  }
  if (*(int *)(this_00 + 0xe0) == 0) {
    iVar14 = *(int *)(this_00 + 0xd8);
    if (iVar14 == 1) {
      uVar16 = 0x25;
      if (local_4c[0x45d] == (byte)0x0) {
        uVar16 = 0x37;
      }
    }
    else {
      uVar3 = 0x38;
      if (iVar14 == 2) {
        uVar3 = 0x30;
      }
      uVar16 = CONCAT31((int3)((uint)iVar14 >> 8),uVar3);
    }
    iVar14 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28);
    if (iVar14 != 0) {
      local_54._1_3_ = (undefined3)(uVar16 >> 8);
      if (*(int *)(*(int *)(iVar14 + 8) + 0xb0) == 0) {
        local_54 = CONCAT31(local_54._1_3_,0x32);
        uVar16 = local_54;
      }
      else if (iVar14 != 0) {
        uVar3 = (undefined1)uVar16;
        if (*(int *)(*(int *)(iVar14 + 8) + 0xb0) == 1) {
          uVar3 = 0x33;
        }
        local_54 = CONCAT31(local_54._1_3_,uVar3);
        uVar16 = local_54;
      }
    }
    local_54 = uVar16;
    ghidra::str::ctor
              ((std::string *)local_2c,(std::string *)(this_00 + 0x48));
    // [seh] local_8._0_1_ = 4;
    pppppppuVar11 = local_2c;
    if (0xf < local_18) {
      pppppppuVar11 = local_2c[0];
    }
    strUsingArgs(&stack0xffffff68,"`%c%s",local_54 & 0xff,pppppppuVar11);
    pUVar12 = UIText::create();
    *(UIText **)(pbVar9 + 0x30) = pUVar12;
    local_6c = 0x3f000000;
    local_68 = 0x3f800000;
    // [seh] local_8._0_1_ = 5;
    (**(code **)(*(int *)pUVar12 + 0xa0))();
    // [seh] local_8._0_1_ = 4;
    (this_00)->getPresumedLocation();
    positionForWorldPosition(local_4c);
    // [seh] local_8._0_1_ = 6;
    (**(code **)(**(int **)(pbVar9 + 0x30) + 0x48))();
    (**(code **)(*(int *)local_4c + 0x108))();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
      pnVar19 = (nothrow_t *)(local_18 + 1);
      pppppppuVar11 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar19) {
        pppppppuVar11 = (undefined4 *******)local_2c[0][-1];
        pnVar19 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pppppppuVar11))) goto LAB_00579bfb;
      }
      operator_delete(pppppppuVar11,pnVar19);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (undefined4 *******)((uint)local_2c[0] & 0xffffff00);
  }
  else if (*(int *)(this_00 + 0xe0) == 1) {
    iVar14 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28);
    if ((iVar14 == 0) || (*(int *)(*(int *)(iVar14 + 8) + 0xb0) != 0)) {
      uVar20 = 0x38;
      if ((iVar14 != 0) && (*(int *)(*(int *)(iVar14 + 8) + 0xb0) == 1)) {
        uVar20 = 0x33;
      }
    }
    else {
      uVar20 = 0x32;
    }
    strUsingArgs(&stack0xffffff68,"`%c%s",uVar20,"Unknown");
    pUVar12 = UIText::create();
    *(UIText **)(pbVar9 + 0x30) = pUVar12;
    local_60 = 0x3f000000;
    local_5c = 0x3f800000;
    // [seh] local_8._0_1_ = 7;
    (**(code **)(*(int *)pUVar12 + 0xa0))();
    // [seh] local_8._0_1_ = 0;
    (this_00)->getPresumedLocation();
    positionForWorldPosition(local_4c);
    // [seh] local_8._0_1_ = 8;
    (**(code **)(**(int **)(pbVar9 + 0x30) + 0x48))();
    (**(code **)(*(int *)local_4c + 0x108))();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
  }
  iVar14 = *(int *)(this_00 + 0xe0);
  if ((((iVar14 == 5) || (iVar14 == 6)) || (iVar14 == 4)) || (iVar14 == 7)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
LAB_0057a631:
    renderDetectionCone(local_4c,this_00,(NM_MapObject *)pbVar9,fVar5);
  }
  else {
    if ((*(int *)(this_00 + 0xd8) == 0) && (*(float *)(this_00 + 0x3c) != -1.0)) {
      iVar14 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar17 = (undefined4 *)(iVar14 + 0x98);
      if (0xf < *(uint *)(iVar14 + 0xac)) {
        puVar17 = (undefined4 *)*puVar17;
      }
      strUsingArgs(&stack0xffffff68,"%s_Ship_Sensors.png",puVar17);
      pSVar10 = loadSprite();
      *(Sprite **)(pbVar9 + 0x28) = pSVar10;
      local_60 = 0x3f000000;
      local_5c = 0x3f000000;
      // [seh] local_8._0_1_ = 9;
      (**(code **)(*(int *)pSVar10 + 0xa0))();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      iVar14 = **(int **)(pbVar9 + 0x28);
      iVar13 = (**(code **)(**(int **)(pbVar9 + 0x20) + 0xb0))();
      local_54 = *(uint *)(iVar13 + 4);
      (**(code **)(**(int **)(pbVar9 + 0x20) + 0xb0))();
      (**(code **)(iVar14 + 0x48))();
      (**(code **)(**(int **)(pbVar9 + 0x20) + 0x108))();
      this_00 = local_50;
      (**(code **)(**(int **)(pbVar9 + 0x28) + 0xbc))();
      (**(code **)(**(int **)(pbVar9 + 0x28) + 0x40))(local_64);
      if (1.0 < *(float *)(this_00 + 0x40) || *(float *)(this_00 + 0x40) == 1.0) {
        uVar20 = 0x30;
      }
      else {
        uVar20 = 0x50;
      }
      (**(code **)(**(int **)(pbVar9 + 0x28) + 0x244))(uVar20);
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8) +
                  0xb0) == 2) {
        iVar14 = *(int *)(this_00 + 0x130);
        if (iVar14 == 0) {
LAB_0057a499:
          iVar14 = **(int **)(pbVar9 + 0x28);
        }
        else {
          if ((*(int *)(iVar14 + 100) == *(int *)(*(int *)(g_gameData + 0xd0) + 100)) ||
             ((iVar13 = *(int *)(*(int *)(iVar14 + 0x44) + 0x124), iVar13 != 0 &&
              (*(int *)(iVar13 + 0x248) != 0)))) {
            iVar14 = **(int **)(pbVar9 + 0x28);
            cocos2d::Color3B::Color3B(local_6f,0xf5,0xf5,0xd0);
            (**(code **)(iVar14 + 0x25c))();
            this_00 = local_50;
            goto LAB_0057a4aa;
          }
          if ((iVar14 == 0) || (bVar4 = (this_00)->analysed(), !bVar4)) goto LAB_0057a499;
          iVar14 = **(int **)(pbVar9 + 0x28);
        }
        (**(code **)(iVar14 + 0x25c))();
      }
    }
LAB_0057a4aa:
    if (*(float *)(this_00 + 0x128) < 90.0) {
      if (local_45 != '\0') goto LAB_0057a631;
    }
    else if (local_45 != '\0') {
      if (*(int *)(pbVar9 + 0x24) == 0) {
        ghidra::str::assign((std::string *)&stack0xffffff68,"white.png",9);
        pSVar10 = loadSprite();
        *(Sprite **)(pbVar9 + 0x24) = pSVar10;
        (**(code **)(*(int *)local_4c + 0x108))();
      }
      if (*(float *)(this_00 + 0x34) == 0.0) {
        (**(code **)(**(int **)(pbVar9 + 0x24) + 0xb4))();
      }
      else {
        (**(code **)(**(int **)(pbVar9 + 0x24) + 0xb4))();
        local_60 = 0x3f000000;
        local_5c = 0;
        // [seh] local_8._0_1_ = 10;
        (**(code **)(**(int **)(pbVar9 + 0x24) + 0xa0))();
        // [seh] local_8 = (uint)local_8._1_3_ << 8;
        iVar14 = **(int **)(pbVar9 + 0x24);
        (**(code **)(**(int **)(pbVar9 + 0x20) + 0x5c))();
        (**(code **)(iVar14 + 0x4c))();
        (**(code **)(**(int **)(pbVar9 + 0x24) + 0xbc))();
        iVar14 = **(int **)(pbVar9 + 0x24);
        local_64 = *(float *)(local_50 + 0x34) * 8.0;
        (**(code **)(iVar14 + 0xb0))();
        (**(code **)(iVar14 + 0x2c))();
        iVar14 = *(int *)(local_50 + 0x130);
        if ((((iVar14 != 0) && (*(int *)(*(int *)(iVar14 + 0x254) + 0x158) == 4)) &&
            (*(char *)(iVar14 + 0x3fc) != '\0')) && (*(int *)(iVar14 + 0x3d0) == 2)) {
          iVar14 = **(int **)(pbVar9 + 0x24);
          cocos2d::Color3B::Color3B(local_6f,0xff,'\0','\0');
          (**(code **)(iVar14 + 0x25c))();
        }
      }
    }
  }
  ppAVar1 = *(AnimationFrames ***)(local_4c + 0x42c);
  if (*(AnimationFrames ***)(local_4c + 0x430) == ppAVar1) {
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)(local_4c + 0x428),ppAVar1,(AnimationFrames **)&local_74);
  }
  else {
    *ppAVar1 = (AnimationFrames *)pbVar9;
    *(int *)(local_4c + 0x42c) = *(int *)(local_4c + 0x42c) + 4;
  }
  if (0xf < local_34._4_4_) {
    pnVar19 = (nothrow_t *)(local_34._4_4_ + 1);
    pvVar18 = local_44;
    if ((nothrow_t *)0xfff < pnVar19) {
      pvVar18 = *(void **)((int)local_44 + -4);
      pnVar19 = (nothrow_t *)(local_34._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar18))) {
LAB_00579bfb:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar18,pnVar19);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_NavMap::renderCraft(UI_NavMap *this,Ship *param_1,SensorData *param_2,float param_3)
void UI_NavMap::renderCraft(Ship * param_1, SensorData * param_2, float param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff8c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff7c[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  AnimationFrames **ppAVar2;
  GameData *pGVar3;
  char cVar4;
  NM_MapObject *pNVar5;
  std::string *pbVar6;
  Sprite *pSVar7;
  int iVar8;
  UIText *pUVar9;
  UI_NavMap *this_00;
  int *piVar10;
  undefined4 *puVar11;
  void *pvVar12;
  nothrow_t *pnVar13;
  UI_NavMap *pUVar14;
  float fVar15;
  float in_XMM3_Da;
  NM_MapObject *local_48 [2];
  UI_NavMap *local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005cb32d;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_30 = 0;
  if ((*(int *)(*(int *)(param_1 + 0x254) + 0x158) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x254) + 0x158) != 4)) {
    local_30 = 1;
  }
  if (param_1 == *(Ship **)(g_gameData + 0xd0)) {
    local_30 = 1;
  }
  local_40 = this;
  local_38 = in_XMM3_Da;
  cVar4 = (**(code **)(*(int *)param_1 + 8))();
  if ((cVar4 != '\0') || ((char)local_30 != '\0')) {
    getShipLook(this_00,(Ship *)local_2c,SUB41(param_1,0));
    // [seh] local_8 = 0;
    pNVar5 = operator_new(0x38);
    // [seh] local_8._0_1_ = 1;
    local_48[0] = pNVar5;
    ghidra::str::ctor
              ((std::string *)&stack0xffffff8c,(std::string *)local_2c);
    pbVar6 = (std::string *)new ((void *)(pNVar5)) NM_MapObject();
    // [seh] local_8._0_1_ = 0;
    piVar10 = *(int **)(pbVar6 + 0x20);
    pUVar14 = local_40;
    local_48[0] = (NM_MapObject *)pbVar6;
    if (piVar10 == (int *)0x0) {
      ghidra::str::ctor((std::string *)&stack0xffffff8c,pbVar6);
      pSVar7 = loadSprite();
      pUVar14 = local_40;
      *(Sprite **)(pbVar6 + 0x20) = pSVar7;
      (**(code **)(*(int *)local_40 + 0x108))();
      piVar10 = *(int **)(pbVar6 + 0x20);
    }
    (**(code **)(*piVar10 + 0x40))();
    local_34 = 0x3f000000;
    local_30 = 0x3f000000;
    // [seh] local_8._0_1_ = 2;
    (**(code **)(**(int **)(pbVar6 + 0x20) + 0xa0))();
    // [seh] local_8._0_1_ = 0;
    fVar15 = (float)*(double *)(*(int *)(pbVar6 + 0x34) + 0x20);
    positionForWorldPosition(pUVar14);
    // [seh] local_8._0_1_ = 3;
    (**(code **)(**(int **)(pbVar6 + 0x20) + 0x4c))();
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(**(int **)(pbVar6 + 0x20) + 0xb4))();
    if (*(int *)(*(int *)(param_1 + 0x254) + 0x158) == 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
      puVar11 = (undefined4 *)(iVar1 + 0x98);
      if (0xf < *(uint *)(iVar1 + 0xac)) {
        puVar11 = (undefined4 *)*puVar11;
      }
      strUsingArgs(&stack0xffffff7c,"%s_Ship_Sensors.png",puVar11);
      pSVar7 = loadSprite();
      pGVar3 = g_gameData;
      *(Sprite **)(pbVar6 + 0x28) = pSVar7;
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(pGVar3 + 0xd0) + 0x40) + 0x28) + 8) + 0xb0)
          == 2) {
        iVar1 = *(int *)pSVar7;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_30 + 1),200,200,0xff);
        (**(code **)(iVar1 + 0x25c))();
      }
      local_34 = 0x3f000000;
      local_30 = 0x3f000000;
      // [seh] local_8._0_1_ = 4;
      (**(code **)(**(int **)(pbVar6 + 0x28) + 0xa0))();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = **(int **)(pbVar6 + 0x28);
      iVar8 = (**(code **)(**(int **)(pbVar6 + 0x20) + 0xb0))();
      local_30 = *(undefined4 *)(iVar8 + 4);
      (**(code **)(**(int **)(pbVar6 + 0x20) + 0xb0))();
      (**(code **)(iVar1 + 0x48))();
      fVar15 = local_38;
      (**(code **)(**(int **)(pbVar6 + 0x28) + 0x40))();
      (**(code **)(**(int **)(pbVar6 + 0x20) + 0x108))();
      pUVar14 = local_40;
      if (*(char *)(*(int *)(g_gameData + 0xd0) + 0x234) != '\0') {
        (**(code **)(**(int **)(pbVar6 + 0x28) + 0x244))();
        fVar15 = *(float *)(param_1 + 0x120);
        (**(code **)(**(int **)(pbVar6 + 0x28) + 0xbc))();
        pUVar14 = local_40;
      }
    }
    if (*(int *)(pbVar6 + 0x24) == 0) {
      ghidra::str::assign((std::string *)&stack0xffffff7c,"white.png",9);
      pSVar7 = loadSprite();
      *(Sprite **)(pbVar6 + 0x24) = pSVar7;
      (**(code **)(*(int *)pUVar14 + 0x108))();
    }
    (param_1)->getSpeed();
    if (fVar15 == 0.0) {
      (**(code **)(**(int **)(pbVar6 + 0x24) + 0xb4))();
    }
    else {
      (**(code **)(**(int **)(pbVar6 + 0x24) + 0xb4))();
      local_3c = 0x3f000000;
      local_38 = 0.0;
      // [seh] local_8._0_1_ = 5;
      (**(code **)(**(int **)(pbVar6 + 0x24) + 0xa0))();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = **(int **)(pbVar6 + 0x24);
      (**(code **)(**(int **)(pbVar6 + 0x20) + 0x5c))();
      (**(code **)(iVar1 + 0x4c))();
      (param_1)->getMotionAngle();
      fVar15 = fVar15 + 180.0;
      if (360.0 <= fVar15) {
        fVar15 = fVar15 - 360.0;
      }
      (**(code **)(**(int **)(pbVar6 + 0x24) + 0xbc))();
      iVar1 = **(int **)(pbVar6 + 0x24);
      (param_1)->getSpeed();
      local_38 = fVar15 * 8.0;
      (**(code **)(**(int **)(pbVar6 + 0x24) + 0xb0))();
      (**(code **)(iVar1 + 0x2c))();
    }
    pUVar14 = local_40;
    if (local_40[0x45d] != (byte)0x0) {
      strUsingArgs(&stack0xffffff8c);
      pUVar9 = UIText::create();
      *(UIText **)(pbVar6 + 0x30) = pUVar9;
      local_3c = 0x3f000000;
      local_38 = 1.0;
      // [seh] local_8._0_1_ = 7;
      (**(code **)(*(int *)pUVar9 + 0xa0))();
      // [seh] local_8._0_1_ = 0;
      positionForWorldPosition(pUVar14);
      // [seh] local_8._0_1_ = 8;
      (**(code **)(**(int **)(pbVar6 + 0x30) + 0x48))();
      (**(code **)(*(int *)pUVar14 + 0x108))();
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
    }
    ppAVar2 = *(AnimationFrames ***)(pUVar14 + 0x42c);
    if (*(AnimationFrames ***)(pUVar14 + 0x430) == ppAVar2) {
      ghidra::lib::vector___Emplace_reallocate
                ((ghidra::vector *)(pUVar14 + 0x428),ppAVar2,(AnimationFrames **)local_48);
    }
    else {
      *ppAVar2 = (AnimationFrames *)pbVar6;
      *(int *)(pUVar14 + 0x42c) = *(int *)(pUVar14 + 0x42c) + 4;
    }
    if (0xf < local_18) {
      pnVar13 = (nothrow_t *)(local_18 + 1);
      pvVar12 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_2c[0] + -4);
        pnVar13 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar12,pnVar13);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_NavMap::renderSector(UI_NavMap *this)
void UI_NavMap::renderSector()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffebc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffec8[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffecc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffec4[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffeb4[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffeac[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffeb8[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffea8[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffe98[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffea0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffeb0[1] = {0};  // [pseudo] address of an unnamed stack slot
  NavPointType NVar1;
  JumpPoint *pJVar2;
  int iVar3;
  SensorData *pSVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  bool bVar7;
  Vec2 *pVVar8;
  SectorEditor *pSVar9;
  std::string *pbVar10;
  Sprite *pSVar11;
  Texture2D *this_00;
  float *pfVar12;
  Sector *pSVar13;
  NM_MapObject *pNVar14;
  UIText *pUVar15;
  std::string *pbVar16;
  JumpPoint **ppJVar17;
  uint uVar18;
  Vec2 *pVVar19;
  UIText *pUVar20;
  int iVar21;
  char *pcVar22;
  undefined2 *puVar23;
  Waypoint *pWVar24;
  NavMarker *pNVar25;
  int *piVar26;
  Sector *pSVar27;
  ghidra::vector *pvVar28;
  Color3B *this_01;
  UI_NavMap UVar29;
  Sector *pSVar30;
  code *pcVar31;
  uint uVar32;
  Vec2 *unaff_EDI;
  Vec2 *pVVar33;
  UI_NavMap *pUVar34;
  UIText *in_XMM0_Da;
  float fVar35;
  char acStack_174 [4];
  undefined4 uStack_170;
  Vec2 VVar36;
  ghidra::vector vVar37;
  ghidra::vector vVar38;
  Vec2 *pVVar39;
  uchar uVar40;
  Color3B local_103 [3];
  undefined4 local_100;
  undefined4 local_fc;
  UIText *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90 [2];
  Sector *local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  UI_NavMap *local_7c;
  undefined4 local_78;
  undefined1 *local_74;
  ghidra::vector *local_70;
  undefined4 local_6c;
  Sector *local_68;
  UIText *local_64;
  UIText *local_60;
  ghidra::vector *local_5c;
  UIText *local_58;
  word local_54 [24];
  StellarObject local_3c [24];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  Vec2 *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cb6c4;
  // [seh] local_10 = ExceptionList;
  // [cookie] pVVar8 = (Vec2 *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_70 = (ghidra::vector *)0x0;
  local_5c = (ghidra::vector *)0x0;
  local_7c = this_;
  local_14 = pVVar8;
  pSVar9 = ghidra::any_singleton();
  if (pSVar9[0x285] != (byte)0x0) {
    pbVar10 = (std::string *)strUsingArgs((char *)local_54);
    // [seh] local_8 = 0;
    pSVar11 = cocos2d::Sprite::create(pbVar10);
    *(Sprite **)((char *)this_ + 0x47c) = pSVar11;
    // [seh] local_8 = 1;
    // [mislabelled-dtor] word::~word(local_54);
    // [seh] local_8 = 0xffffffff;
    this_00 = (Texture2D *)(**(code **)(*(int *)(*(int *)((char *)this_ + 0x47c) + 0x278) + 0xc))();
    local_20 = 0x2600;
    local_24 = 0x2600;
    local_1c = 0x812f;
    local_18 = 0x812f;
    cocos2d::Texture2D::setTexParameters(this_00,(_TexParams *)&local_24);
    (**(code **)(**(int **)((char *)this_ + 0x47c) + 0x244))();
    iVar21 = **(int **)((char *)this_ + 0x47c);
    pfVar12 = (float *)(**(code **)(iVar21 + 0xb0))();
    in_XMM0_Da = (UIText *)(1200.0 / *pfVar12);
    (**(code **)(iVar21 + 0x40))();
    local_78 = 0x3f000000;
    local_74 = (undefined1 *)0x3f000000;
    // [seh] local_8 = 2;
    (**(code **)(**(int **)((char *)this_ + 0x47c) + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    positionForWorldPosition(this_);
    // [seh] local_8 = 3;
    (**(code **)(**(int **)((char *)this_ + 0x47c) + 0x4c))();
    // [seh] local_8 = 0xffffffff;
    iVar21 = **(int **)((char *)this_ + 0x47c);
    cocos2d::Color3B::Color3B((Color3B *)&local_80,0xff,'\0','\0');
    (**(code **)(iVar21 + 0x25c))();
    (**(code **)(*(int *)this_ + 0x108))();
  }
  if ((((char *)this_)[0x45d] == (byte)0x0) || (PresentationData::m_tabletMapSelectedSector == -1)) {
    pSVar13 = *(Sector **)(g_gameData + 0xd8);
  }
  else {
    pSVar13 = (g_gameData)->getSectorWithID(PresentationData::m_tabletMapSelectedSector);
  }
  iVar21 = *(int *)(pSVar13 + 0x84);
  local_64 = (UIText *)0x0;
  local_88 = pSVar13;
  if (*(int *)(pSVar13 + 0x88) - iVar21 >> 2 != 0) {
    do {
      if ((g_gameLogic[0x72] == (byte)0x0) ||
         (iVar21 = *(int *)(iVar21 + (int)local_64 * 4), *(int *)(iVar21 + 0x54) == 1)) {
LAB_0057aee3:
        local_60 = (UIText *)((int)local_64 * 4);
        if (*(int *)(*(int *)(local_60 + *(int *)(pSVar13 + 0x84)) + 0x54) == 5) {
          pNVar14 = operator_new(0x38);
          // [seh] local_8 = 5;
          local_a0 = pNVar14;
          ghidra::str::ctor((std::string *)&stack0xfffffebc,"");
          local_84 = (UIText *)new ((void *)(pNVar14)) NM_MapObject();
          // [seh] local_8 = 0xffffffff;
          strUsingArgs(&stack0xfffffebc);
          pUVar15 = UIText::create();
          local_78 = 0x3f000000;
          local_74 = (undefined1 *)0x3f000000;
          *(UIText **)(local_84 + 0x30) = pUVar15;
          // [seh] local_8 = 6;
          (**(code **)(**(int **)(local_84 + 0x30) + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          in_XMM0_Da = (UIText *)(float)*(double *)(*(int *)(local_84 + 0x34) + 0x20);
          positionForWorldPosition(this_);
          // [seh] local_8 = 7;
          (**(code **)(**(int **)(local_84 + 0x30) + 0x4c))();
          // [seh] local_8 = 0xffffffff;
          (**(code **)(*(int *)this_ + 0x108))();
          ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x428),(UIText **)&local_84);
        }
        else {
          // [seh] local_8 = 8;
          ghidra::lib::_String_val___String_val((ghidra::lib::_String_val_t *)local_54);
          ghidra::lib::basic_string___Tidy_init((std::string *)local_54);
          // [seh] local_8 = 9;
          pbVar16 = (std::string *)getStellarObjectLook(this_,local_3c);
          ghidra::lib::basic_string__operator_x3d((std::string *)local_54,pbVar16);
          // [seh] local_8._0_1_ = 10;
          // [mislabelled-dtor] word::~word((word *)local_3c);
          // [seh] local_8._0_1_ = 9;
          pNVar14 = operator_new(0x38);
          local_6c = (Sprite *)&stack0xfffffebc;
          // [seh] local_8._0_1_ = 0xb;
          local_9c = pNVar14;
          std::_Compressed_pair<>::ghidra::lib::_Compressed_pair_t<>((ghidra::lib::_Compressed_pair_t *)&stack0xfffffebc);
          // [seh] local_8._0_1_ = 0xc;
          ghidra::lib::basic_string___Construct_lv_contents
                    ((std::string *)&stack0xfffffebc,(std::string *)local_54);
          pUVar15 = local_60;
          // [seh] local_8._0_1_ = 0xb;
          local_68 = (Sector *)new ((void *)(pNVar14)) NM_MapObject();
          // [seh] local_8._0_1_ = 9;
          uVar6 = (undefined1)local_8;
          // [seh] local_8._0_1_ = 9;
          this_ = local_7c;
          local_58 = (UIText *)local_68;
          if (*(float *)(local_68 + 0x20) == 0.0) {
            local_e0 = &stack0xfffffebc;
            std::_Compressed_pair<>::ghidra::lib::_Compressed_pair_t<>((ghidra::lib::_Compressed_pair_t *)&stack0xfffffebc);
            // [seh] local_8._0_1_ = 0xd;
            ghidra::lib::basic_string___Construct_lv_contents
                      ((std::string *)&stack0xfffffebc,(std::string *)local_68);
            // [seh] local_8._0_1_ = 9;
            pSVar11 = loadSprite();
            this_ = local_7c;
            *(Sprite **)(local_58 + 0x20) = pSVar11;
            (**(code **)(*(int *)local_7c + 0x108))();
            pUVar15 = local_60;
            uVar6 = (undefined1)local_8;
          }
          // [seh] local_8._0_1_ = uVar6;
          (**(code **)(**(int **)(local_58 + 0x20) + 0x244))();
          (**(code **)(**(int **)(local_58 + 0x20) + 0x40))();
          local_100 = 0x3f000000;
          local_fc = 0x3f000000;
          // [seh] local_8._0_1_ = 0xe;
          (**(code **)(**(int **)(local_58 + 0x20) + 0xa0))();
          // [seh] local_8._0_1_ = 9;
          (**(code **)(**(int **)(local_58 + 0x20) + 0xbc))();
          in_XMM0_Da = (UIText *)(float)*(double *)((int)*(float *)(local_58 + 0x34) + 0x20);
          positionForWorldPosition(this_);
          // [seh] local_8._0_1_ = 0xf;
          (**(code **)(**(int **)(local_58 + 0x20) + 0x4c))();
          // [seh] local_8._0_1_ = 9;
          pSVar9 = ghidra::any_singleton();
          if ((pSVar9[0x285] != (byte)0x0) &&
             ((*(int *)(*(int *)(pUVar15 + *(int *)(pSVar13 + 0x84)) + 0x54) == 4 ||
              (*(int *)(*(int *)(pUVar15 + *(int *)(pSVar13 + 0x84)) + 0x54) == 3)))) {
            ghidra::str::ctor
                      ((std::string *)&stack0xfffffebc,"NavMap_EditorCenterMarker.png");
            pSVar11 = loadSprite();
            *(Sprite **)(local_58 + 0x24) = pSVar11;
            iVar21 = **(int **)(local_58 + 0x24);
            (**(code **)(**(int **)(local_58 + 0x20) + 0x5c))();
            (**(code **)(iVar21 + 0x4c))();
            local_e8 = 0x3f000000;
            local_e4 = 0x3f000000;
            // [seh] local_8._0_1_ = 0x10;
            (**(code **)(**(int **)(local_58 + 0x24) + 0xa0))();
            // [seh] local_8._0_1_ = 9;
            (**(code **)(*(int *)this_ + 0x108))();
            pUVar15 = local_60;
          }
          UVar29 = ((char *)this_)[0x45d];
          if ((UVar29 != (byte)0x0) &&
             (in_XMM0_Da = *(UIText **)((char *)this_ + 0x4fc), (float)in_XMM0_Da == 1.0)) {
            local_68 = *(Sector **)(pUVar15 + *(int *)(pSVar13 + 0x84));
            fVar35 = *(float *)(local_68 + 0x54);
            if ((fVar35 == 1.4013e-45) || ((fVar35 == 0.0 || (fVar35 == 2.8026e-45)))) {
              strUsingArgs(&stack0xfffffebc);
              pUVar20 = UIText::create();
              local_f0 = 0x3f000000;
              local_ec = 0x3f800000;
              *(UIText **)(local_58 + 0x30) = pUVar20;
              // [seh] local_8._0_1_ = 0x11;
              (**(code **)(**(int **)(local_58 + 0x30) + 0xa0))();
              // [seh] local_8._0_1_ = 9;
              local_5c = (ghidra::vector *)&stack0xfffffec8;
              local_70 = (ghidra::vector *)((uint)local_70 | 0x200);
              positionForWorldPosition(this_);
              // [seh] local_8._0_1_ = 0x12;
              in_XMM0_Da = local_f8;
              (**(code **)(**(int **)(local_58 + 0x30) + 0x48))();
              (**(code **)(*(int *)this_ + 0x108))();
              // [seh] local_8._0_1_ = 9;
              UVar29 = ((char *)this_)[0x45d];
            }
          }
          if (*(int *)(pUVar15 + *(int *)(pSVar13 + 0x84)) ==
              *(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4)) {
            iVar21 = **(int **)((char *)this_ + 0x478);
            (**(code **)(**(int **)(local_58 + 0x20) + 0x5c))();
            (**(code **)(iVar21 + 0x4c))();
            if (((char *)this_)[0x45d] == (byte)0x0) {
              in_XMM0_Da = (UIText *)(&ZOOM_STELLAR_LEVELS)[PresentationData::m_mapZoomLevel];
            }
            else {
              in_XMM0_Da = (UIText *)
                           (&TABLET_ZOOM_STELLAR_LEVELS)[PresentationData::m_tabletMapZoomLevel];
            }
            (**(code **)(**(int **)((char *)this_ + 0x478) + 0x40))();
            iVar21 = **(int **)((char *)this_ + 0x478);
            cocos2d::Color3B::Color3B((Color3B *)&local_80,0xa4,0xf9,0x9e);
            (**(code **)(iVar21 + 0x25c))();
            (**(code **)(**(int **)((char *)this_ + 0x478) + 0xb4))();
            UVar29 = ((char *)this_)[0x45d];
            pUVar15 = local_60;
          }
          if (*(int *)(*(int *)(pUVar15 + *(int *)(pSVar13 + 0x84)) + 0x54) == 2) {
            if (*(float *)(local_58 + 0x24) == 0.0) {
              pbVar10 = (std::string *)strUsingArgs((char *)local_3c);
              // [seh] local_8._0_1_ = 0x13;
              pSVar11 = cocos2d::Sprite::create(pbVar10);
              *(Sprite **)(local_58 + 0x24) = pSVar11;
              // [seh] local_8._0_1_ = 0x14;
              // [mislabelled-dtor] word::~word((word *)local_3c);
              // [seh] local_8._0_1_ = 9;
              (**(code **)(**(int **)(local_58 + 0x24) + 0x244))();
              (**(code **)(*(int *)this_ + 0x108))();
            }
            local_d8 = (float)*(double *)((int)*(float *)(local_58 + 0x34) + 0x28);
            local_dc = (float)*(double *)((int)*(float *)(local_58 + 0x34) + 0x20);
            local_b8 = (float)*(double *)
                               (*(int *)(*(int *)(pUVar15 + *(int *)(pSVar13 + 0x84)) + 0x58) + 0x28
                               );
            local_bc = (float)*(double *)
                               (*(int *)(*(int *)(pUVar15 + *(int *)(pSVar13 + 0x84)) + 0x58) + 0x20
                               );
            // [seh] local_8._0_1_ = 0x16;
            if (((char *)this_)[0x45d] == (byte)0x0) {
              local_68 = (Sector *)(&ZOOM_STELLAR_LEVELS)[PresentationData::m_mapZoomLevel];
            }
            else {
              local_68 = (Sector *)
                         (&TABLET_ZOOM_STELLAR_LEVELS)[PresentationData::m_tabletMapZoomLevel];
            }
            iVar21 = **(int **)(local_58 + 0x24);
            (**(code **)(**(int **)(local_58 + 0x24) + 0xb0))();
            fastDistance(pVVar8,unaff_EDI);
            (**(code **)(iVar21 + 0x40))();
            local_c4 = 0x3f000000;
            local_c0 = 0x3f000000;
            // [seh] local_8._0_1_ = 0x17;
            (**(code **)(**(int **)(local_58 + 0x24) + 0xa0))();
            this_ = local_7c;
            // [seh] local_8._0_1_ = 9;
            in_XMM0_Da = (UIText *)
                         (float)*(double *)
                                 (*(int *)(*(int *)(local_60 + *(int *)(pSVar13 + 0x84)) + 0x58) +
                                 0x20);
            positionForWorldPosition(local_7c);
            // [seh] local_8._0_1_ = 0x18;
LAB_0057b953:
            (**(code **)(**(int **)(local_58 + 0x24) + 0x4c))();
            // [seh] local_8._0_1_ = 9;
          }
          else if (*(int *)(*(int *)(pUVar15 + *(int *)(pSVar13 + 0x84)) + 0x54) == 0) {
            if (*(float *)(local_58 + 0x24) == 0.0) {
              local_c8 = (float)*(double *)((int)*(float *)(local_58 + 0x34) + 0x28);
              fVar35 = (float)*(double *)((int)*(float *)(local_58 + 0x34) + 0x20);
              local_d4 = 0;
              local_d0 = 0;
              // [seh] local_8._0_1_ = 0x1a;
              local_cc = fVar35;
              fastDistance(pVVar8,unaff_EDI);
              // [seh] local_8._0_1_ = 9;
              uVar6 = (undefined1)local_8;
              // [seh] local_8._0_1_ = 9;
              if (200.0 <= fVar35) {
                // [seh] local_8._0_1_ = uVar6;
                pbVar10 = (std::string *)strUsingArgs((char *)local_3c);
                // [seh] local_8._0_1_ = 0x1d;
                pSVar11 = cocos2d::Sprite::create(pbVar10);
                *(Sprite **)(local_58 + 0x24) = pSVar11;
                // [seh] local_8._0_1_ = 0x1e;
              }
              else {
                pbVar10 = (std::string *)strUsingArgs((char *)local_3c);
                // [seh] local_8._0_1_ = 0x1b;
                pSVar11 = cocos2d::Sprite::create(pbVar10);
                *(Sprite **)(local_58 + 0x24) = pSVar11;
                // [seh] local_8._0_1_ = 0x1c;
              }
              // [mislabelled-dtor] word::~word((word *)local_3c);
              // [seh] local_8._0_1_ = 9;
              (**(code **)(**(int **)(local_58 + 0x24) + 0x244))();
              (**(code **)(*(int *)this_ + 0x108))();
              UVar29 = ((char *)this_)[0x45d];
            }
            local_ac = (float)*(double *)((int)*(float *)(local_58 + 0x34) + 0x28);
            local_b0 = (float)*(double *)((int)*(float *)(local_58 + 0x34) + 0x20);
            local_a8 = 0;
            local_a4 = 0;
            // [seh] local_8._0_1_ = 0x20;
            if (UVar29 == (byte)0x0) {
              pSVar27 = (Sector *)(&ZOOM_STELLAR_LEVELS)[PresentationData::m_mapZoomLevel];
            }
            else {
              pSVar27 = (Sector *)
                        (&TABLET_ZOOM_STELLAR_LEVELS)[PresentationData::m_tabletMapZoomLevel];
            }
            iVar21 = **(int **)(local_58 + 0x24);
            local_68 = pSVar27;
            pfVar12 = (float *)(**(code **)(**(int **)(local_58 + 0x24) + 0xb0))();
            fastDistance(pVVar8,unaff_EDI);
            in_XMM0_Da = (UIText *)(((float)pSVar27 / (*pfVar12 * 0.5)) * (float)local_68);
            (**(code **)(iVar21 + 0x40))();
            local_98 = 0x3f000000;
            local_94 = 0x3f000000;
            // [seh] local_8._0_1_ = 0x21;
            (**(code **)(**(int **)(local_58 + 0x24) + 0xa0))();
            this_ = local_7c;
            // [seh] local_8._0_1_ = 9;
            positionForWorldPosition(local_7c);
            // [seh] local_8._0_1_ = 0x22;
            goto LAB_0057b953;
          }
          ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x428),&local_58);
          // [seh] local_8 = 0x23;
          // [mislabelled-dtor] word::~word(local_54);
          // [seh] local_8 = 0xffffffff;
        }
      }
      else {
        local_5c = (ghidra::vector *)&stack0xfffffecc;
        local_68 = (Sector *)&stack0xfffffecc;
        local_70 = (ghidra::vector *)((uint)local_70 | 8);
        in_XMM0_Da = (UIText *)(float)*(double *)(iVar21 + 0x28);
        // [seh] local_8 = 4;
        std::map<>::_Try_emplace<int_const&>
                  ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),local_90);
        // [seh] local_8 = 0xffffffff;
        bVar7 = (*(FogInstance **)(local_90[0] + 0x14))->fogObscuresPoint();
        if (!bVar7) goto LAB_0057aee3;
      }
      iVar21 = *(int *)(pSVar13 + 0x84);
      local_64 = local_64 + 1;
    } while (local_64 < (UIText *)(*(int *)(pSVar13 + 0x88) - iVar21 >> 2));
  }
  pSVar9 = ghidra::any_singleton();
  pcVar31 = Color3B_exref;
  if (pSVar9[0x285] != (byte)0x0) {
    iVar21 = *(int *)(pSVar13 + 0xa8);
    local_68 = pSVar13 + 0xa8;
    local_58 = (UIText *)0x0;
    local_60 = (UIText *)0x0;
    if (*(int *)(pSVar13 + 0xac) - iVar21 >> 2 != 0) {
      do {
        iVar21 = *(int *)(iVar21 + (int)local_60 * 4);
        if (*(int *)(iVar21 + 4) == 0) {
          if (*(char *)(iVar21 + 0x34) == '\0') {
            iVar21 = *(int *)(iVar21 + 0x38);
            if (iVar21 == 0) {
              ghidra::str::ctor
                        ((std::string *)&stack0xfffffebc,"NavMap_EditorNavMesh_Normal.png");
              local_58 = (UIText *)loadSprite();
              iVar21 = *(int *)local_58;
              cocos2d::Color3B::Color3B(local_103,'\0',0xbf,0xff);
            }
            else if (iVar21 == 1) {
              ghidra::str::ctor
                        ((std::string *)&stack0xfffffebc,"NavMap_EditorNavMesh_Danger.png");
              local_58 = (UIText *)loadSprite();
              iVar21 = *(int *)local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_e0 + 1),0xff,'\0',0xff);
            }
            else if (iVar21 == 2) {
              ghidra::str::ctor
                        ((std::string *)&stack0xfffffebc,"NavMap_EditorNavMesh_Danger.png");
              local_58 = (UIText *)loadSprite();
              iVar21 = *(int *)local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_6c + 1),0xff,0xff,'\0');
            }
            else if (iVar21 == 3) {
              ghidra::str::ctor
                        ((std::string *)&stack0xfffffebc,"NavMap_EditorNavMesh_Danger.png");
              local_58 = (UIText *)loadSprite();
              iVar21 = *(int *)local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_9c + 1),0xff,'\x7f','\0');
            }
            else if (iVar21 == 4) {
              ghidra::str::ctor
                        ((std::string *)&stack0xfffffebc,"NavMap_EditorNavMesh_Danger.png");
              local_58 = (UIText *)loadSprite();
              iVar21 = *(int *)local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_a0 + 1),0xff,'\0','\0');
            }
            else {
              ghidra::str::ctor
                        ((std::string *)&stack0xfffffebc,"NavMap_EditorNavMesh_Stealth.png");
              local_58 = (UIText *)loadSprite();
              iVar21 = *(int *)local_58;
              cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),0xff,0xff,0xff);
            }
          }
          else {
            ghidra::str::ctor
                      ((std::string *)&stack0xfffffebc,"NavMap_EditorNavMesh_StationLink.png");
            local_58 = (UIText *)loadSprite();
            iVar21 = *(int *)local_58;
            cocos2d::Color3B::Color3B((Color3B *)&local_80,0xff,0xff,0xff);
          }
        }
        else {
          ghidra::str::ctor
                    ((std::string *)&stack0xfffffebc,"NavMap_EditorNavPoint.png");
          local_58 = (UIText *)loadSprite();
          iVar21 = *(int *)local_58;
          ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(pSVar13 + 0xa8),(uint)local_60);
        }
        (**(code **)(iVar21 + 0x25c))();
        cocos2d::Vec2::Vec2((Vec2 *)local_90,0.5,0.5);
        // [seh] local_8 = 0x24;
        (**(code **)((int)*(float *)local_58 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_90);
        pUVar15 = local_60;
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(pSVar13 + 0xa8),(uint)local_60);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec4,(Vec2 *)(*ppJVar17 + 8));
        positionForWorldPosition(this_);
        // [seh] local_8 = 0x25;
        (**(code **)((int)*(float *)local_58 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
        (**(code **)(*(int *)this_ + 0x108))();
        ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x498),&local_58);
        local_64 = (UIText *)0x0;
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(pSVar13 + 0xa8),(uint)pUVar15);
        uVar18 = ghidra::lib::vector__size((ghidra::vector *)(*ppJVar17 + 0x28));
        if (uVar18 != 0) {
          do {
            ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(pSVar13 + 0xa8),(uint)pUVar15);
            NVar1 = *(NavPointType *)(*ppJVar17 + 4);
            ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(pSVar13 + 0xa8),(uint)local_60);
            ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(*ppJVar17 + 0x28),(uint)local_64);
            local_5c = (ghidra::vector *)(pSVar13)->getNavPoint((int)*ppJVar17, NVar1);
            if (local_5c == (ghidra::vector *)0x0) {
              local_5c = (ghidra::vector *)0x0;
              pUVar15 = local_60;
            }
            else {
              ghidra::str::ctor((std::string *)&stack0xfffffebc,"white.png");
              local_58 = (UIText *)loadSprite();
              pUVar15 = local_60;
              iVar21 = *(int *)local_58;
              ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)local_68,(uint)local_60);
              (**(code **)(iVar21 + 0x25c))();
              pVVar39 = (Vec2 *)&DAT_000000c0;
              (**(code **)((int)*(float *)local_58 + 0x244))();
              ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)local_68,(uint)pUVar15);
              cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec4,(Vec2 *)(*ppJVar17 + 8));
              pVVar19 = (Vec2 *)positionForWorldPosition(this_);
              // [seh] local_8 = 0x26;
              (**(code **)((int)*(float *)local_58 + 0x4c))();
              // [seh] local_8 = 0xffffffff;
              cocos2d::Vec2::~Vec2((Vec2 *)&local_a8);
              pVVar33 = (Vec2 *)(local_5c + 8);
              ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)local_68,(uint)pUVar15);
              fastDistance(pVVar19,pVVar39);
              this_ = local_7c;
              local_5c = (ghidra::vector *)((float)in_XMM0_Da * *(float *)(local_7c + 0x4fc));
              fVar35 = *(float *)local_58;
              pfVar12 = (float *)(**(code **)((int)fVar35 + 0xb0))();
              in_XMM0_Da = (UIText *)((float)local_5c / *pfVar12);
              (**(code **)((int)fVar35 + 0x2c))();
              local_74 = &stack0xfffffebc;
              cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffebc,pVVar33);
              pUVar15 = local_60;
              // [seh] local_8 = 0x27;
              ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)local_68,(uint)local_60);
              cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb4,(Vec2 *)(*ppJVar17 + 8));
              // [seh] local_8 = 0xffffffff;
              angleInDegreesFrom();
              (**(code **)((int)*(float *)local_58 + 0xbc))();
              cocos2d::Vec2::Vec2((Vec2 *)&local_b0,0.5,0.0);
              // [seh] local_8 = 0x28;
              (**(code **)((int)*(float *)local_58 + 0xa0))();
              // [seh] local_8 = 0xffffffff;
              cocos2d::Vec2::~Vec2((Vec2 *)&local_b0);
              (**(code **)(*(int *)this_ + 0x108))();
              ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x498),&local_58);
              pSVar13 = local_88;
            }
            local_64 = local_64 + 1;
            ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(pSVar13 + 0xa8),(uint)pUVar15);
            pUVar20 = (UIText *)ghidra::lib::vector__size((ghidra::vector *)(*ppJVar17 + 0x28));
          } while (local_64 < pUVar20);
        }
        local_60 = pUVar15 + 1;
        iVar21 = *(int *)(pSVar13 + 0xa8);
      } while (local_60 < (UIText *)(*(int *)(pSVar13 + 0xac) - iVar21 >> 2));
    }
    local_5c = (ghidra::vector *)(pSVar13 + 0x134);
    pUVar15 = (UIText *)0x0;
    local_60 = (UIText *)0x0;
    uVar18 = ghidra::lib::vector__size((ghidra::vector *)local_5c);
    pvVar28 = local_5c;
    if (uVar18 != 0) {
      do {
        ghidra::str::ctor((std::string *)&stack0xfffffebc,"NavMap_Zone.png");
        local_58 = (UIText *)loadSprite();
        cocos2d::Vec2::Vec2((Vec2 *)local_90,0.5,0.5);
        // [seh] local_8 = 0x29;
        (**(code **)(*(int *)local_58 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_90);
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)pUVar15);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec8,(Vec2 *)(*ppJVar17 + 0xe8));
        positionForWorldPosition(this_);
        // [seh] local_8 = 0x2a;
        (**(code **)(*(int *)local_58 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
        (**(code **)(*(int *)this_ + 0x108))();
        ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x498),&local_58);
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)pUVar15);
        if (*(float *)(*ppJVar17 + 0x3c) <= 0.0) {
          ghidra::str::c_str
                    ((std::string *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8) +
                     0x98));
          strUsingArgs(&stack0xfffffeac);
          local_58 = (UIText *)loadSprite();
          iVar21 = *(int *)local_58;
          cocos2d::Color3B::Color3B((Color3B *)((int)&local_a0 + 1),0xff,'\0','\0');
          (**(code **)(iVar21 + 0x25c))();
          ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)local_60);
          cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb8,(Vec2 *)(*ppJVar17 + 0xe8));
          positionForWorldPosition(this_);
          // [seh] local_8 = 0x2d;
          (**(code **)((int)*(float *)local_58 + 0x4c))();
          // [seh] local_8 = 0xffffffff;
          cocos2d::Vec2::~Vec2((Vec2 *)&local_d4);
          if (((char *)this_)[0x45d] == (byte)0x0) {
            local_68 = *(Sector **)((char *)this_ + 0x4fc);
          }
          else {
            local_68 = (Sector *)0x3e4ccccd;
          }
          fVar35 = *(float *)local_58;
          ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)local_60);
          local_5c = *(ghidra::vector **)(*ppJVar17 + 0x38);
          (**(code **)((int)*(float *)local_58 + 0xb0))();
          (**(code **)((int)fVar35 + 0x40))();
          (**(code **)((int)*(float *)local_58 + 0x244))();
          cocos2d::Vec2::Vec2((Vec2 *)&local_cc,0.5,0.5);
          // [seh] local_8 = 0x2e;
          (**(code **)((int)*(float *)local_58 + 0xa0))();
          pVVar19 = (Vec2 *)&local_cc;
        }
        else {
          ghidra::str::ctor((std::string *)&stack0xfffffeac,"white.png");
          local_58 = (UIText *)loadSprite();
          iVar21 = *(int *)local_58;
          cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),0xff,'\0','\0');
          (**(code **)(iVar21 + 0x25c))();
          (**(code **)((int)*(float *)local_58 + 0x244))();
          cocos2d::Vec2::Vec2((Vec2 *)&local_a8,0.5,0.5);
          // [seh] local_8 = 0x2b;
          (**(code **)((int)*(float *)local_58 + 0xa0))();
          // [seh] local_8 = 0xffffffff;
          cocos2d::Vec2::~Vec2((Vec2 *)&local_a8);
          if (((char *)this_)[0x45d] == (byte)0x0) {
            local_68 = *(Sector **)((char *)this_ + 0x4fc);
          }
          else {
            local_68 = (Sector *)0x3e4ccccd;
          }
          local_9c = (NM_MapObject *)0x3e4ccccd;
          if (((char *)this_)[0x45d] == (byte)0x0) {
            local_9c = *(NM_MapObject **)((char *)this_ + 0x4fc);
          }
          fVar35 = *(float *)local_58;
          ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)local_60);
          pJVar2 = *ppJVar17;
          iVar21 = (**(code **)((int)*(float *)local_58 + 0xb0))();
          local_5c = *(ghidra::vector **)(pJVar2 + 0x40);
          local_6c = *(Sprite **)(iVar21 + 4);
          ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)local_60);
          (**(code **)((int)*(float *)local_58 + 0xb0))();
          (**(code **)((int)fVar35 + 0x3c))();
          ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)local_60);
          cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffea8,(Vec2 *)(*ppJVar17 + 0xe8));
          this_ = local_7c;
          positionForWorldPosition(local_7c);
          // [seh] local_8 = 0x2c;
          (**(code **)((int)*(float *)local_58 + 0x4c))();
          pVVar19 = (Vec2 *)&local_b0;
        }
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2(pVVar19);
        (**(code **)(*(int *)this_ + 0x108))();
        ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x498),&local_58);
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)local_60);
        pcVar22 = ghidra::str::c_str((std::string *)(*ppJVar17 + 4));
        strUsingArgs(acStack_174,"`8%s",pcVar22);
        in_XMM0_Da = (UIText *)&DAT_3f800000;
        local_64 = UIText::create();
        cocos2d::Vec2::Vec2((Vec2 *)&local_c4,0.5,1.2);
        // [seh] local_8 = 0x2f;
        (**(code **)(*(int *)local_64 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_c4);
        pUVar15 = local_60;
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,(uint)local_60);
        uStack_170 = 0x57c35e;
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffe98,(Vec2 *)(*ppJVar17 + 0xe8));
        uStack_170 = 0x57c36c;
        positionForWorldPosition(this_);
        // [seh] local_8 = 0x30;
        (**(code **)(*(int *)local_64 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_bc);
        ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x480),&local_64);
        uStack_170 = 0x57c3ad;
        (**(code **)(*(int *)this_ + 0x108))();
        pUVar15 = pUVar15 + 1;
        local_60 = pUVar15;
        pUVar20 = (UIText *)ghidra::lib::vector__size((ghidra::vector *)pvVar28);
        pSVar13 = local_88;
      } while (pUVar15 < pUVar20);
    }
    local_5c = (ghidra::vector *)(pSVar13 + 0xc0);
    uVar32 = 0;
    uVar18 = ghidra::lib::vector__size((ghidra::vector *)local_5c);
    pvVar28 = local_5c;
    if (uVar18 != 0) {
      do {
        ghidra::str::ctor
                  ((std::string *)&stack0xfffffebc,"NavMap_EditorSpawnPoint.png");
        local_58 = (UIText *)loadSprite();
        cocos2d::Color3B::Color3B((Color3B *)&local_80);
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,uVar32);
        if (*(int *)(*ppJVar17 + 0xc) == 0) {
          uVar40 = 0xbf;
          vVar38 = (ghidra::vector)0xff;
          vVar37 = (ghidra::vector)0x0;
          this_01 = (Color3B *)((int)&local_84 + 1);
        }
        else {
          ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,uVar32);
          if (*(int *)(*ppJVar17 + 0xc) == 1) {
            uVar40 = '\0';
            vVar38 = (ghidra::vector)0xff;
            vVar37 = (ghidra::vector)0x0;
            this_01 = (Color3B *)((int)&local_a0 + 1);
          }
          else {
            ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,uVar32);
            uVar40 = '\0';
            if (*(int *)(*ppJVar17 + 0xc) == 2) {
              vVar38 = (ghidra::vector)0xff;
              puVar5 = &local_9c;
            }
            else {
              vVar38 = (ghidra::vector)0x0;
              puVar5 = &local_6c;
            }
            this_01 = (Color3B *)((int)puVar5 + 1);
            vVar37 = (ghidra::vector)0xff;
          }
        }
        puVar23 = (undefined2 *)
                  cocos2d::Color3B::Color3B(this_01,(uchar)vVar37,(uchar)vVar38,uVar40);
        local_80 = *puVar23;
        local_7e = *(undefined1 *)(puVar23 + 1);
        (**(code **)((int)*(float *)local_58 + 0x25c))();
        cocos2d::Vec2::Vec2((Vec2 *)local_90,0.5,0.5);
        // [seh] local_8 = 0x31;
        (**(code **)((int)*(float *)local_58 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_90);
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,uVar32);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec4,(Vec2 *)*ppJVar17);
        positionForWorldPosition(this_);
        // [seh] local_8 = 0x32;
        (**(code **)((int)*(float *)local_58 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
        (**(code **)(*(int *)this_ + 0x108))();
        ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x498),&local_58);
        uVar32 = uVar32 + 1;
        uVar18 = ghidra::lib::vector__size((ghidra::vector *)pvVar28);
        pSVar13 = local_88;
      } while (uVar32 < uVar18);
    }
    local_60 = (UIText *)(pSVar13 + 0xb4);
    local_64 = (UIText *)0x0;
    uVar18 = ghidra::lib::vector__size((ghidra::vector *)local_60);
    pcVar31 = Color3B_exref;
    if (uVar18 != 0) {
      do {
        ghidra::str::ctor
                  ((std::string *)&stack0xfffffebc,"NavMap_EditorJumpPoint.png");
        local_58 = (UIText *)loadSprite();
        iVar21 = *(int *)local_58;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),0xff,'\0',0xff);
        (**(code **)(iVar21 + 0x25c))();
        cocos2d::Vec2::Vec2((Vec2 *)local_90,0.5,0.5);
        // [seh] local_8 = 0x33;
        (**(code **)(*(int *)local_58 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)local_90);
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)local_60,(uint)local_64);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec4,(Vec2 *)*ppJVar17);
        positionForWorldPosition(this_);
        // [seh] local_8 = 0x34;
        (**(code **)(*(int *)local_58 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
        (**(code **)(*(int *)this_ + 0x108))();
        ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x498),&local_58);
        ghidra::str::c_str
                  ((std::string *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8) +
                   0x98));
        strUsingArgs(&stack0xfffffea8);
        local_58 = (UIText *)loadSprite();
        iVar21 = *(int *)local_58;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_a0 + 1),0xff,'\0','\0');
        (**(code **)(iVar21 + 0x25c))();
        pUVar15 = local_64;
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)local_60,(uint)local_64);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb4,(Vec2 *)*ppJVar17);
        positionForWorldPosition(this_);
        // [seh] local_8 = 0x35;
        (**(code **)((int)*(float *)local_58 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_a8);
        if (((char *)this_)[0x45d] == (byte)0x0) {
          local_68 = *(Sector **)((char *)this_ + 0x4fc);
        }
        else {
          local_68 = (Sector *)0x3e4ccccd;
        }
        fVar35 = *(float *)local_58;
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)local_60,(uint)pUVar15);
        iVar21 = *(int *)(*ppJVar17 + 0xc);
        pfVar12 = (float *)(**(code **)((int)*(float *)local_58 + 0xb0))();
        in_XMM0_Da = (UIText *)(((float)(iVar21 * 2) / *pfVar12) * (float)local_68);
        (**(code **)((int)fVar35 + 0x40))();
        (**(code **)((int)*(float *)local_58 + 0x244))();
        cocos2d::Vec2::Vec2((Vec2 *)&local_b0,0.5,0.5);
        // [seh] local_8 = 0x36;
        (**(code **)((int)*(float *)local_58 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_b0);
        this_ = local_7c;
        (**(code **)(*(int *)local_7c + 0x108))();
        ghidra::lib::vector__push_back((ghidra::vector *)((char *)this_ + 0x498),&local_58);
        pUVar20 = local_64 + 1;
        local_64 = pUVar20;
        pUVar15 = (UIText *)ghidra::lib::vector__size((ghidra::vector *)local_60);
      } while (pUVar20 < pUVar15);
    }
  }
  if (*(int *)(*(int *)(g_gameData + 0xd0) + 0x2b0) != 0) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,
                        (Vec2 *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x2b0) + 8));
    positionForWorldPosition(this_);
    // [seh] local_8 = 0x37;
    (**(code **)(**(int **)((char *)this_ + 0x478) + 0x4c))();
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    iVar21 = **(int **)((char *)this_ + 0x478);
    getIconScale(this_);
    (**(code **)(iVar21 + 0x40))();
    iVar21 = **(int **)((char *)this_ + 0x478);
    (*pcVar31)();
    (**(code **)(iVar21 + 0x25c))();
    (**(code **)(**(int **)((char *)this_ + 0x478) + 0xb4))();
  }
  if (*(Vec2 **)(*(int *)(g_gameData + 0xd0) + 0x2b8) != (Vec2 *)0x0) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,*(Vec2 **)(*(int *)(g_gameData + 0xd0) + 0x2b8));
    positionForWorldPosition(this_);
    // [seh] local_8 = 0x38;
    (**(code **)(**(int **)((char *)this_ + 0x478) + 0x4c))();
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    iVar21 = **(int **)((char *)this_ + 0x478);
    getIconScale(this_);
    (**(code **)(iVar21 + 0x40))();
    iVar21 = **(int **)((char *)this_ + 0x478);
    (*pcVar31)();
    (**(code **)(iVar21 + 0x25c))();
    (**(code **)(**(int **)((char *)this_ + 0x478) + 0xb4))();
  }
  if (*(int *)(*(int *)(g_gameData + 0xd0) + 700) != 0) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,
                        (Vec2 *)(*(int *)(*(int *)(g_gameData + 0xd0) + 700) + 0xe8));
    positionForWorldPosition(this_);
    // [seh] local_8 = 0x39;
    (**(code **)(**(int **)((char *)this_ + 0x478) + 0x4c))();
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    iVar21 = **(int **)((char *)this_ + 0x478);
    getIconScale(this_);
    (**(code **)(iVar21 + 0x40))();
    iVar21 = **(int **)((char *)this_ + 0x478);
    (*pcVar31)();
    (**(code **)(iVar21 + 0x25c))();
    (**(code **)(**(int **)((char *)this_ + 0x478) + 0xb4))();
  }
  pUVar34 = this_;
  if (*(Vec2 **)(*(int *)(g_gameData + 0xd0) + 0x2b4) != (Vec2 *)0x0) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,*(Vec2 **)(*(int *)(g_gameData + 0xd0) + 0x2b4));
    positionForWorldPosition(this_);
    // [seh] local_8 = 0x3a;
    (**(code **)(**(int **)((char *)this_ + 0x478) + 0x4c))();
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    iVar21 = **(int **)((char *)this_ + 0x478);
    getIconScale(this_);
    (**(code **)(iVar21 + 0x40))();
    iVar21 = **(int **)((char *)this_ + 0x478);
    (*pcVar31)();
    (**(code **)(iVar21 + 0x25c))();
    (**(code **)(**(int **)((char *)this_ + 0x478) + 0xb4))();
    ghidra::str::c_str
              ((std::string *)
               (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8) + 0x98))
    ;
    uStack_170 = 0x57cae7;
    strUsingArgs(&stack0xfffffea0);
    pSVar11 = loadSprite();
    *(Sprite **)((char *)this_ + 0x474) = pSVar11;
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb0,*(Vec2 **)(*(int *)(g_gameData + 0xd0) + 0x2b4));
    positionForWorldPosition(this_);
    // [seh] local_8 = 0x3b;
    (**(code **)(**(int **)((char *)this_ + 0x474) + 0x4c))();
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    pUVar34 = local_7c;
    iVar21 = **(int **)((char *)this_ + 0x474);
    iVar3 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x2b4) + 0x10);
    getIconScale(local_7c);
    local_5c = (ghidra::vector *)((float)in_XMM0_Da * (float)iVar3);
    pfVar12 = (float *)(**(code **)(**(int **)(pUVar34 + 0x474) + 0xb0))();
    in_XMM0_Da = (UIText *)((float)local_5c / *pfVar12);
    (**(code **)(iVar21 + 0x40))();
    cocos2d::Vec2::Vec2((Vec2 *)&local_98,0.5,0.5);
    // [seh] local_8 = 0x3c;
    (**(code **)(**(int **)(pUVar34 + 0x474) + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
    iVar21 = **(int **)(pUVar34 + 0x474);
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_a0 + 1),0xa4,0xf9,0x9e);
    (**(code **)(iVar21 + 0x25c))();
    (**(code **)(**(int **)(pUVar34 + 0x474) + 0x244))();
    (**(code **)(**(int **)(pUVar34 + 0x474) + 0xb4))();
    (**(code **)(*(int *)pUVar34 + 0x108))();
  }
  pUVar15 = (UIText *)0x0;
  local_64 = (UIText *)0x0;
  uVar18 = ghidra::lib::vector__size((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4));
  if (uVar18 != 0) {
    do {
      pVVar19 = (Vec2 *)cocos2d::Vec2::Vec2((Vec2 *)local_90,-9999.0,-9999.0);
      // [seh] local_8 = 0x3d;
      pWVar24 = ghidra::lib::vector__operator_x5b_x5d
                          ((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4),(uint)pUVar15);
      bVar7 = cocos2d::Vec2::operator==((Vec2 *)(pWVar24 + 8),pVVar19);
      // [seh] local_8 = 0xffffffff;
      cocos2d::Vec2::~Vec2((Vec2 *)local_90);
      if (bVar7) break;
      ghidra::str::c_str
                ((std::string *)
                 (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8) + 0x98
                 ));
      strUsingArgs(&stack0xfffffebc);
      local_6c = loadSprite();
      cocos2d::Vec2::Vec2((Vec2 *)&local_98,0.5,0.5);
      // [seh] local_8 = 0x3e;
      (**(code **)(*(int *)local_6c + 0xa0))();
      // [seh] local_8 = 0xffffffff;
      cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
      pUVar15 = local_64;
      pWVar24 = ghidra::lib::vector__operator_x5b_x5d
                          ((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4),(uint)local_64);
      cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec8,(Vec2 *)(pWVar24 + 8));
      positionForWorldPosition(pUVar34);
      // [seh] local_8 = 0x3f;
      (**(code **)(*(int *)local_6c + 0x4c))();
      // [seh] local_8 = 0xffffffff;
      cocos2d::Vec2::~Vec2((Vec2 *)&local_a8);
      (**(code **)(*(int *)pUVar34 + 0x108))();
      ghidra::lib::vector__push_back((ghidra::vector *)(pUVar34 + 0x4a4),(UIText **)&local_6c);
      ghidra::str::ctor((std::string *)&stack0xfffffeac,"white.png");
      local_6c = loadSprite();
      pVVar19 = (Vec2 *)cocos2d::Vec2::Vec2((Vec2 *)&local_b0,0.5,0.0);
      // [seh] local_8 = 0x40;
      (**(code **)(*(int *)local_6c + 0xa0))();
      // [seh] local_8 = 0xffffffff;
      cocos2d::Vec2::~Vec2((Vec2 *)&local_b0);
      if (pUVar15 == (UIText *)0x0) {
        ((GameObject *)(*(int *)(g_gameData + 0xd0) + 8))->getLocation();
        pVVar33 = (Vec2 *)positionForWorldPosition(pUVar34);
        // [seh] local_8 = 0x41;
        (**(code **)(*(int *)local_6c + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_d4);
        (*(Ship **)(g_gameData + 0xd0))->getNextWaypointLocation();
        // [seh] local_8 = 0x42;
        ((GameObject *)(*(int *)(g_gameData + 0xd0) + 8))->getLocation();
        // [seh] local_8 = CONCAT31(local_8._1_3_,0x43);
        fastDistance(pVVar33,pVVar19);
        local_68 = (Sector *)((float)in_XMM0_Da * *(float *)(pUVar34 + 0x4fc));
        cocos2d::Vec2::~Vec2((Vec2 *)&local_cc);
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_c4);
        local_74 = &stack0xfffffeb4;
        pWVar24 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4),0);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb4,(Vec2 *)(pWVar24 + 8));
        // [seh] local_8 = 0x44;
        ((GameObject *)(*(int *)(g_gameData + 0xd0) + 8))->getLocation();
        // [seh] local_8 = 0xffffffff;
        angleInDegreesFrom();
        (**(code **)(*(int *)local_6c + 0xbc))();
        bVar7 = (*(Ship **)(g_gameData + 0xd0))->isTravellingByAutopilot();
        iVar21 = *(int *)local_6c;
        if (bVar7) {
          puVar5 = &local_84;
          VVar36 = (Vec2)0x0;
        }
        else {
          VVar36 = (Vec2)0xff;
          puVar5 = &local_a0;
        }
        cocos2d::Color3B::Color3B((Color3B *)((int)puVar5 + 1),(uchar)VVar36,(uchar)VVar36,0xff);
        (**(code **)(iVar21 + 0x25c))();
      }
      else {
        pUVar20 = pUVar15 + -1;
        pWVar24 = ghidra::lib::vector__operator_x5b_x5d
                            ((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4),(uint)pUVar20);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb8,(Vec2 *)(pWVar24 + 8));
        pUVar34 = local_7c;
        pVVar33 = (Vec2 *)positionForWorldPosition(local_7c);
        // [seh] local_8 = 0x45;
        (**(code **)(*(int *)local_6c + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_bc);
        ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4),(uint)local_64);
        ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4),(uint)pUVar20);
        fastDistance(pVVar33,pVVar19);
        local_68 = (Sector *)((float)in_XMM0_Da * *(float *)(pUVar34 + 0x4fc));
        iVar21 = *(int *)local_6c;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_9c + 1),0xff,0xff,0xff);
        (**(code **)(iVar21 + 0x25c))();
        pUVar15 = local_64;
        local_74 = &stack0xfffffeb0;
        pWVar24 = ghidra::lib::vector__operator_x5b_x5d
                            ((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4),(uint)local_64);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffeb0,(Vec2 *)(pWVar24 + 8));
        // [seh] local_8 = 0x46;
        pWVar24 = ghidra::lib::vector__operator_x5b_x5d
                            ((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4),(uint)pUVar20);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffea8,(Vec2 *)(pWVar24 + 8));
        // [seh] local_8 = 0xffffffff;
        angleInDegreesFrom();
        (**(code **)(*(int *)local_6c + 0xbc))();
        pUVar34 = local_7c;
      }
      iVar21 = *(int *)local_6c;
      pfVar12 = (float *)(**(code **)(iVar21 + 0xb0))();
      in_XMM0_Da = (UIText *)((float)local_68 / *pfVar12);
      (**(code **)(iVar21 + 0x2c))();
      (**(code **)(*(int *)pUVar34 + 0x108))();
      ghidra::lib::vector__push_back((ghidra::vector *)(pUVar34 + 0x4a4),(UIText **)&local_6c);
      pUVar15 = pUVar15 + 1;
      local_64 = pUVar15;
      pUVar20 = (UIText *)ghidra::lib::vector__size((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x1c4));
    } while (pUVar15 < pUVar20);
  }
  getIconScale(pUVar34);
  pSVar13 = local_88;
  local_64 = (UIText *)&DAT_3f800000;
  if ((float)in_XMM0_Da <= 1.0) {
    local_64 = in_XMM0_Da;
  }
  if (pUVar34[0x45d] == (byte)0x0) {
    uVar32 = 0;
    uVar18 = ghidra::lib::vector__size((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x214));
    pSVar13 = local_88;
    if (uVar18 != 0) {
      do {
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d
                             ((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x214),uVar32);
        pSVar4 = (SensorData *)*ppJVar17;
        if ((pSVar4[9] != (byte)0x0) && (pSVar4[8] != (byte)0x0)) {
          renderSensorObject(pUVar34,pSVar4,(float)pVVar8);
        }
        uVar32 = uVar32 + 1;
        uVar18 = ghidra::lib::vector__size((ghidra::vector *)(*(int *)(g_gameData + 0xd0) + 0x214));
        pSVar13 = local_88;
      } while (uVar32 < uVar18);
    }
  }
  else {
    uVar32 = 0;
    local_5c = (ghidra::vector *)(local_88 + 0xcc);
    uVar18 = ghidra::lib::vector__size((ghidra::vector *)local_5c);
    pvVar28 = local_5c;
    if (uVar18 != 0) {
      do {
        ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,uVar32);
        bVar7 = ((Ship *)*ppJVar17)->isSpaceStation();
        if (bVar7) {
LAB_0057d1b6:
          ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,uVar32);
          if ((*ppJVar17)[0x168] == (JumpPoint)0x0) {
            ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,uVar32);
            renderCraft(pUVar34,(Ship *)*ppJVar17,(SensorData *)0x0,(float)pVVar8);
          }
        }
        else {
          ppJVar17 = ghidra::lib::vector__operator_x5b_x5d(pvVar28,uVar32);
          bVar7 = ((Ship *)*ppJVar17)->isJumpGate();
          if (bVar7) goto LAB_0057d1b6;
        }
        uVar32 = uVar32 + 1;
        uVar18 = ghidra::lib::vector__size((ghidra::vector *)pvVar28);
        pSVar13 = local_88;
      } while (uVar32 < uVar18);
    }
  }
  if (pSVar13 == *(Sector **)(g_gameData + 0xd8)) {
    renderCraft(pUVar34,*(Ship **)(g_gameData + 0xd0),(SensorData *)0x0,(float)pVVar8);
  }
  pVVar19 = (Vec2 *)cocos2d::Vec2::Vec2((Vec2 *)local_90,-9999.0,-9999.0);
  // [seh] local_8 = 0x47;
  bVar7 = cocos2d::Vec2::operator!=((Vec2 *)(*(int *)(g_gameData + 0xd0) + 0x1b8),pVVar19);
  // [seh] local_8 = 0xffffffff;
  cocos2d::Vec2::~Vec2((Vec2 *)local_90);
  if (bVar7) {
    cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,(Vec2 *)(*(int *)(g_gameData + 0xd0) + 0x1b8));
    positionForWorldPosition(pUVar34);
    // [seh] local_8 = 0x48;
    (**(code **)(**(int **)(pUVar34 + 0x478) + 0x4c))();
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
    (**(code **)(**(int **)(pUVar34 + 0x478) + 0x40))();
    iVar21 = **(int **)(pUVar34 + 0x478);
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_84 + 1),0xff,0xff,0xff);
    (**(code **)(iVar21 + 0x25c))();
    (**(code **)(**(int **)(pUVar34 + 0x478) + 0xb4))();
    pSVar13 = local_88;
  }
  if (*(int *)(*(int *)(g_gameData + 0xd0) + 0x1a4) == 0) {
    pVVar19 = (Vec2 *)cocos2d::Vec2::Vec2((Vec2 *)&local_98,-9999.0,-9999.0);
    // [seh] local_8 = 0x49;
    local_70 = (ghidra::vector *)((uint)local_70 | 1);
    local_5c = local_70;
    bVar7 = cocos2d::Vec2::operator==((Vec2 *)(*(int *)(g_gameData + 0xd0) + 0x1b8),pVVar19);
    if (((((bVar7) && (iVar21 = *(int *)(g_gameData + 0xd0), *(int *)(iVar21 + 0x19c) == 0)) &&
         (*(int *)(iVar21 + 0x2b0) == 0)) &&
        ((*(int *)(iVar21 + 0x2b4) == 0 && (*(int *)(iVar21 + 700) == 0)))) &&
       (*(int *)(iVar21 + 0x2b8) == 0)) {
      bVar7 = true;
      goto LAB_0057d42a;
    }
  }
  bVar7 = false;
LAB_0057d42a:
  // [seh] local_8 = 0xffffffff;
  if (((uint)local_70 & 1) != 0) {
    cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
  }
  if (bVar7) {
    (**(code **)(**(int **)(pUVar34 + 0x478) + 0xb4))();
  }
  local_70 = (ghidra::vector *)0x0;
  uVar18 = ghidra::lib::vector__size((ghidra::vector *)(*(int *)(g_gameData + 0xcc) + 0x324));
  pSVar27 = local_88;
  if (uVar18 != 0) {
    pvVar28 = (ghidra::vector *)0;
    do {
      pNVar25 = ghidra::lib::vector__operator_x5b_x5d
                          ((ghidra::vector *)(*(int *)(g_gameData + 0xcc) + 0x324),(uint)pvVar28);
      if (*(int *)(pNVar25 + 0x24) == **(int **)(g_gameData + 0xd8)) {
        if (g_gameLogic[0x72] != (byte)0x0) {
          local_74 = &stack0xfffffecc;
          pNVar25 = ghidra::lib::vector__operator_x5b_x5d
                              ((ghidra::vector *)(*(int *)(g_gameData + 0xcc) + 0x324),(uint)local_70);
          cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,(Vec2 *)pNVar25);
          // [seh] local_8 = 0x4a;
          piVar26 = ghidra::lib::map__operator_x5b_x5d
                              ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),(int *)pSVar27);
          // [seh] local_8 = 0xffffffff;
          bVar7 = ((FogInstance *)*piVar26)->fogObscuresPoint();
          if (bVar7) goto LAB_0057d61e;
        }
        pNVar25 = ghidra::lib::vector__operator_x5b_x5d
                            ((ghidra::vector *)(*(int *)(g_gameData + 0xcc) + 0x324),(uint)local_70);
        ghidra::str::c_str((std::string *)(pNVar25 + 8));
        strUsingArgs(&stack0xfffffebc);
        local_64 = UIText::create();
        cocos2d::Vec2::Vec2((Vec2 *)&local_a8,0.5,0.5);
        // [seh] local_8 = 0x4b;
        (**(code **)((int)*(float *)local_64 + 0xa0))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_a8);
        pNVar25 = ghidra::lib::vector__operator_x5b_x5d
                            ((ghidra::vector *)(*(int *)(g_gameData + 0xcc) + 0x324),(uint)local_70);
        cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffec8,(Vec2 *)pNVar25);
        positionForWorldPosition(pUVar34);
        // [seh] local_8 = 0x4c;
        (**(code **)((int)*(float *)local_64 + 0x4c))();
        // [seh] local_8 = 0xffffffff;
        cocos2d::Vec2::~Vec2((Vec2 *)&local_b0);
        ghidra::lib::vector__push_back((ghidra::vector *)(pUVar34 + 0x480),&local_64);
        (**(code **)(*(int *)pUVar34 + 0x108))();
      }
LAB_0057d61e:
      local_70 = (ghidra::vector *)((int)local_70 + 1);
      uVar18 = ghidra::lib::vector__size((ghidra::vector *)(*(int *)(g_gameData + 0xcc) + 0x324));
      pvVar28 = local_70;
      pSVar13 = local_88;
    } while (local_70 < uVar18);
  }
  if (g_gameLogic[0x72] != (byte)0x0) {
    centreOfMap(pUVar34);
    // [seh] local_8 = 0x4d;
    local_70 = (ghidra::vector *)FogInstance::getChunk((float)pVVar8);
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec2::~Vec2((Vec2 *)local_90);
    centreOfMap(pUVar34);
    // [seh] local_8 = 0x4e;
    pSVar27 = (Sector *)FogInstance::getChunk((float)pVVar8);
    // [seh] local_8 = 0xffffffff;
    local_68 = pSVar27;
    cocos2d::Vec2::~Vec2((Vec2 *)&local_98);
    local_58 = (UIText *)0x0;
    local_5c = (ghidra::vector *)((int)local_70 - 2);
    pvVar28 = local_70;
    do {
      local_64 = (UIText *)0x0;
      pSVar30 = (Sector *)local_58;
      do {
        if ((((int)local_5c <= (int)local_64) &&
            (iVar21 = (int)pvVar28 + 2, pvVar28 = local_70, (int)local_64 <= iVar21)) &&
           (((int)(pSVar27 + -2) <= (int)pSVar30 && ((int)pSVar30 <= (int)(pSVar27 + 2))))) {
          uVar32 = 0;
          piVar26 = ghidra::lib::map__operator_x5b_x5d
                              ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),(int *)pSVar13);
          local_7c = (UI_NavMap *)((int)(local_64 + (int)local_58 * 8) * 0xc);
          uVar18 = ghidra::lib::vector__size((ghidra::vector *)(local_7c + *piVar26));
          pvVar28 = local_70;
          pSVar30 = (Sector *)local_58;
          pSVar27 = local_68;
          if (uVar18 != 0) {
            do {
              local_60 = (UIText *)0x0;
              iVar21 = *(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) + 8);
              if (*(int *)(iVar21 + 0xb0) == 2) {
                piVar26 = ghidra::lib::map__operator_x5b_x5d
                                    ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),(int *)pSVar13);
                ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(local_7c + *piVar26),uVar32);
                ghidra::str::c_str
                          ((std::string *)
                           (*(int *)(*(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x28) +
                                    8) + 0x98));
                strUsingArgs(&stack0xfffffebc);
                local_60 = (UIText *)loadSprite();
                iVar21 = *(int *)local_60;
                piVar26 = ghidra::lib::map__operator_x5b_x5d
                                    ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),(int *)local_88)
                ;
                ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(local_7c + *piVar26),uVar32);
                (**(code **)(iVar21 + 0xbc))();
                iVar21 = *(int *)local_60;
                piVar26 = ghidra::lib::map__operator_x5b_x5d
                                    ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),(int *)local_88)
                ;
                ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(local_7c + *piVar26),uVar32);
                (**(code **)(iVar21 + 0x244))();
              }
              else {
                ghidra::str::c_str((std::string *)(iVar21 + 0x98));
                strUsingArgs(&stack0xfffffebc);
                local_60 = (UIText *)loadSprite();
              }
              piVar26 = ghidra::lib::map__operator_x5b_x5d
                                  ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),(int *)local_88);
              ppJVar17 = ghidra::lib::vector__operator_x5b_x5d((ghidra::vector *)(local_7c + *piVar26),uVar32);
              cocos2d::Vec2::Vec2((Vec2 *)&stack0xfffffecc,(Vec2 *)*ppJVar17);
              positionForWorldPosition(pUVar34);
              // [seh] local_8 = 0x4f;
              (**(code **)(*(int *)local_60 + 0x4c))();
              // [seh] local_8 = 0xffffffff;
              cocos2d::Vec2::~Vec2((Vec2 *)local_90);
              cocos2d::Vec2::Vec2((Vec2 *)&local_dc,0.5,0.5);
              // [seh] local_8 = 0x50;
              (**(code **)(*(int *)local_60 + 0xa0))();
              // [seh] local_8 = 0xffffffff;
              cocos2d::Vec2::~Vec2((Vec2 *)&local_dc);
              iVar21 = *(int *)local_60;
              getStellarScale(pUVar34);
              (**(code **)(iVar21 + 0x40))();
              (**(code **)(*(int *)pUVar34 + 0x108))();
              ghidra::lib::vector__push_back((ghidra::vector *)(pUVar34 + 0x48c),&local_60);
              pSVar13 = local_88;
              uVar32 = uVar32 + 1;
              piVar26 = ghidra::lib::map__operator_x5b_x5d
                                  ((ghidra::lib::map_t *)(*(int *)(g_gameData + 0xd0) + 0x348),(int *)local_88);
              uVar18 = ghidra::lib::vector__size((ghidra::vector *)(local_7c + *piVar26));
              pvVar28 = local_70;
              pSVar30 = (Sector *)local_58;
              pSVar27 = local_68;
            } while (uVar32 < uVar18);
          }
        }
        local_64 = local_64 + 1;
      } while ((int)local_64 < 8);
      local_58 = (UIText *)(pSVar30 + 1);
    } while ((int)local_58 < 8);
  }
  **(undefined1 **)(pUVar34 + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_NavMap::renderCluster(UI_NavMap *this)
void UI_NavMap::renderCluster()

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff4c[1] = {0};  // [pseudo] address of an unnamed stack slot
  float *pfVar1;
  JumpGateRoute *pJVar2;
  AnimationFrames **ppAVar3;
  bool bVar4;
  GameData *pGVar5;
  UI_NavMap *pUVar6;
  char cVar7;
  AnimationFrames *pAVar8;
  Sprite *pSVar9;
  int *piVar10;
  UIText *pUVar11;
  undefined4 *puVar12;
  int *piVar13;
  void *pvVar14;
  int iVar15;
  nothrow_t *pnVar16;
  ghidra::vector *this_00;
  int iVar17;
  float *pfVar18;
  uint uVar19;
  float10 fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uStack_cc;
  char *pcVar25;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  AnimationFrames *local_54;
  UI_NavMap *local_50;
  undefined4 local_4c;
  float local_48;
  AnimationFrames *local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cb76f;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_48 = 0.0;
  local_50 = this_;
  if (*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2 != 0) {
    do {
      fVar21 = local_48;
      pAVar8 = operator_new(0x10);
      pGVar5 = g_gameData;
      *(undefined4 *)pAVar8 = 0;
      *(undefined4 *)(pAVar8 + 4) = 0;
      *(undefined4 *)(pAVar8 + 8) = 0;
      *(undefined4 *)(pAVar8 + 0xc) = 0;
      piVar10 = *(int **)(*(int *)(pGVar5 + 0x3c) + (int)fVar21 * 4);
      local_54 = pAVar8;
      local_4c = piVar10;
      local_44 = pAVar8;
      strUsingArgs(&stack0xffffff4c);
      pSVar9 = loadSprite();
      *(Sprite **)(pAVar8 + 4) = pSVar9;
      (**(code **)(*(int *)this_ + 0x108))();
      (**(code **)(**(int **)(pAVar8 + 4) + 0x40))();
      local_6c = 0x3f000000;
      local_68 = 0x3f000000;
      // [seh] local_8 = 0;
      (**(code **)(**(int **)(pAVar8 + 4) + 0xa0))();
      if (((char *)this_)[0x45d] == (byte)0x0) {
        pfVar18 = (&ZOOM_ICON_LEVELS)[PresentationData::m_mapZoomLevel];
        pfVar1 = (&ZOOM_ICON_LEVELS)[PresentationData::m_mapZoomLevel];
      }
      else {
        pfVar18 = (&TABLET_ZOOM_ICON_LEVELS)[PresentationData::m_tabletMapZoomLevel];
        pfVar1 = (&TABLET_ZOOM_ICON_LEVELS)[PresentationData::m_tabletMapZoomLevel];
      }
      if (((char *)this_)[0x45d] == (byte)0x0) {
        fVar21 = *(float *)((char *)this_ + 0x4fc);
      }
      else {
        fVar21 = 0.2;
      }
      local_74 = (float)(int)((float)(*(int *)((char *)this_ + 0x2a0) / 2) +
                             (float)piVar10[0x1f] * (float)pfVar1 * fVar21);
      local_70 = (float)(int)((float)(*(int *)((char *)this_ + 0x2a4) / 2) +
                             fVar21 * (float)piVar10[0x20] * (float)pfVar18);
      // [seh] local_8 = 1;
      (**(code **)(**(int **)(pAVar8 + 4) + 0x4c))();
      iVar17 = piVar10[0x33];
      local_64 = 0;
      if (piVar10[0x34] - iVar17 >> 2 != 0) {
        do {
          pUVar6 = local_50;
          iVar17 = *(int *)(iVar17 + local_64 * 4);
          if ((*(int *)(*(int *)(iVar17 + 0x254) + 0x158) == 2) &&
             (iVar17 = *(int *)(iVar17 + 0x38c), iVar17 != -1)) {
            for (puVar12 = *(undefined4 **)(g_gameData + 0x3c);
                puVar12 != *(undefined4 **)(g_gameData + 0x40); puVar12 = puVar12 + 1) {
              piVar10 = (int *)*puVar12;
              if (*piVar10 == iVar17) goto LAB_0057dc23;
            }
            piVar10 = (int *)0x0;
LAB_0057dc23:
            fVar21 = (float)piVar10[0x20];
            fVar22 = (float)piVar10[0x1f];
            fVar23 = (float)local_4c[0x20];
            fVar24 = (float)local_4c[0x1f];
            this_00 = (ghidra::vector *)(local_50 + 0x440);
            // [seh] local_8 = 3;
            uVar19 = 0;
            pfVar18 = *(float **)this_00;
            iVar17 = *(int *)(local_50 + 0x444) - (int)pfVar18 >> 0x1f;
            iVar15 = (*(int *)(local_50 + 0x444) - (int)pfVar18) / 0x14 + iVar17;
            if (iVar15 != iVar17) {
              do {
                if ((*pfVar18 == fVar24) && (pfVar18[1] == fVar23)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                piVar10 = local_4c;
                if (bVar4) {
                  if ((pfVar18[2] == fVar22) && (pfVar18[3] == fVar21)) {
                    bVar4 = true;
                  }
                  else {
                    bVar4 = false;
                  }
                  if (bVar4) goto LAB_0057ddd6;
                }
                if ((pfVar18[2] == fVar24) && (pfVar18[3] == fVar23)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if (bVar4) {
                  if ((*pfVar18 == fVar22) && (pfVar18[1] == fVar21)) {
                    bVar4 = true;
                  }
                  else {
                    bVar4 = false;
                  }
                  if (bVar4) goto LAB_0057ddd6;
                }
                uVar19 = uVar19 + 1;
                pfVar18 = pfVar18 + 5;
              } while (uVar19 < (uint)(iVar15 - iVar17));
            }
            _eh_vector_constructor_iterator_(&local_40,8,2,Vec2_exref,~Vec2_exref);
            local_30 = 0;
            // [seh] local_8 = CONCAT31(local_8._1_3_,4);
            pJVar2 = *(JumpGateRoute **)(pUVar6 + 0x444);
            local_40 = fVar24;
            local_3c = fVar23;
            local_38 = fVar22;
            local_34 = fVar21;
            if (*(JumpGateRoute **)(pUVar6 + 0x448) == pJVar2) {
              ghidra::lib::vector___Emplace_reallocate(this_00,pJVar2,(JumpGateRoute *)&local_40);
            }
            else {
              uStack_cc = 0x57dda0;
              _eh_vector_copy_constructor_iterator_
                        (pJVar2,(JumpGateRoute *)&local_40,8,2,Vec2_exref,~Vec2_exref);
              *(undefined4 *)(pJVar2 + 0x10) = local_30;
              *(int *)(pUVar6 + 0x444) = *(int *)(pUVar6 + 0x444) + 0x14;
            }
            // [seh] local_8 = CONCAT31(local_8._1_3_,5);
            _eh_vector_destructor_iterator_(&local_40,8,2,~Vec2_exref);
            piVar10 = local_4c;
          }
LAB_0057ddd6:
          iVar17 = piVar10[0x33];
          local_64 = local_64 + 1;
          pAVar8 = local_44;
          this_ = local_50;
        } while (local_64 < (uint)(piVar10[0x34] - iVar17 >> 2));
      }
      // [seh] local_8 = 0xffffffff;
      fVar20 = (float10)(**(code **)(**(int **)(pAVar8 + 4) + 0x6c))();
      local_44 = (AnimationFrames *)(float)fVar20;
      if ((float)local_44 <= (float)*(int *)((char *)this_ + 0x2a0)) {
        fVar20 = (float10)(**(code **)(**(int **)(pAVar8 + 4) + 0x6c))();
        local_44 = (AnimationFrames *)(float)fVar20;
        if (0.0 <= (float)local_44) {
          fVar20 = (float10)(**(code **)(**(int **)(pAVar8 + 4) + 0x74))();
          local_44 = (AnimationFrames *)(float)fVar20;
          if (0.0 <= (float)local_44) {
            fVar20 = (float10)(**(code **)(**(int **)(pAVar8 + 4) + 0x74))();
            local_44 = (AnimationFrames *)(float)fVar20;
          }
        }
      }
      (**(code **)(**(int **)(pAVar8 + 4) + 0xb4))();
      if (piVar10 == *(int **)(g_gameData + 0xd8)) {
        iVar17 = **(int **)((char *)this_ + 0x478);
        (**(code **)(**(int **)(pAVar8 + 4) + 0x5c))();
        (**(code **)(iVar17 + 0x4c))();
        iVar17 = **(int **)((char *)this_ + 0x478);
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_58 + 1),0xa4,0xf9,0x9e);
        (**(code **)(iVar17 + 0x25c))();
        (**(code **)(**(int **)((char *)this_ + 0x478) + 0xb4))();
        piVar10 = local_4c;
      }
      ppAVar3 = *(AnimationFrames ***)((char *)this_ + 0x438);
      if (*(AnimationFrames ***)((char *)this_ + 0x43c) == ppAVar3) {
        ghidra::lib::vector___Emplace_reallocate((ghidra::vector *)((char *)this_ + 0x434),ppAVar3,&local_54);
        pAVar8 = local_54;
      }
      else {
        *ppAVar3 = pAVar8;
        *(int *)((char *)this_ + 0x438) = *(int *)((char *)this_ + 0x438) + 4;
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      // [seh] local_8 = 6;
      if ((*(int *)(*(int *)(g_gameData + 0xd0) + 0x1d0) == -1) ||
         (*(int *)(*(int *)(g_gameData + 0xd0) + 0x1d0) != *piVar10)) {
        if (piVar10[0x46] == 0) {
          pcVar25 = "`%";
        }
        else if (piVar10[0x46] == 1) {
          pcVar25 = "`7";
        }
        else {
          pcVar25 = "`8";
        }
      }
      else {
        pcVar25 = "`!";
      }
      ghidra::str::assign((std::string *)local_2c,pcVar25,2);
      piVar13 = piVar10 + 7;
      if (0xf < (uint)piVar10[0xc]) {
        piVar13 = (int *)piVar10[7];
      }
      ghidra::str::append((std::string *)local_2c,(char *)piVar13,piVar10[0xb]);
      ghidra::str::ctor((std::string *)&uStack_cc,(std::string *)local_2c);
      pUVar11 = UIText::create();
      *(UIText **)pAVar8 = pUVar11;
      // [seh] local_8._0_1_ = 7;
      (**(code **)(*(int *)pUVar11 + 0xa0))();
      // [seh] local_8._0_1_ = 6;
      piVar10 = *(int **)(pAVar8 + 4);
      iVar17 = **(int **)pAVar8;
      (**(code **)(*piVar10 + 0x74))();
      (**(code **)(*piVar10 + 0x6c))();
      (**(code **)(iVar17 + 0x48))();
      this_ = local_50;
      uStack_cc = 0x57e00d;
      (**(code **)(*(int *)local_50 + 0x108))();
      if ((*(int *)(*(int *)(g_gameData + 0xd0) + 0x1d0) != -1) &&
         (*(int *)(*(int *)(g_gameData + 0xd0) + 0x1d0) == *local_4c)) {
        strUsingArgs(&stack0xffffff4c);
        pSVar9 = loadSprite();
        *(Sprite **)(pAVar8 + 0xc) = pSVar9;
        local_60 = 0.5;
        local_5c = 0.5;
        // [seh] local_8._0_1_ = 8;
        (**(code **)(*(int *)pSVar9 + 0xa0))();
        // [seh] local_8 = CONCAT31(local_8._1_3_,6);
        (**(code **)(**(int **)(pAVar8 + 0xc) + 0x25c))();
        iVar17 = **(int **)(pAVar8 + 0xc);
        (**(code **)(**(int **)(pAVar8 + 4) + 0x5c))();
        (**(code **)(iVar17 + 0x4c))();
        (**(code **)(*(int *)this_ + 0x108))();
      }
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_18) {
        pnVar16 = (nothrow_t *)(local_18 + 1);
        pvVar14 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar16) {
          pvVar14 = *(void **)((int)local_2c[0] + -4);
          pnVar16 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar14,pnVar16);
      }
      local_1c = 0;
      local_48 = (float)((int)local_48 + 1);
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    } while ((uint)local_48 < (uint)(*(int *)(g_gameData + 0x40) - *(int *)(g_gameData + 0x3c) >> 2)
            );
  }
  piVar10 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x14);
  if ((piVar10 != (int *)0x0) && (cVar7 = (**(code **)(*piVar10 + 0x10))(), cVar7 != '\0')) {
    strUsingArgs(&stack0xffffff4c);
    pSVar9 = loadSprite();
    pGVar5 = g_gameData;
    *(Sprite **)((char *)this_ + 0x474) = pSVar9;
    if (((char *)this_)[0x45d] == (byte)0x0) {
      fVar21 = *(float *)((char *)this_ + 0x4fc);
    }
    else {
      fVar21 = 0.2;
    }
    local_60 = (float)(int)((float)(*(int *)((char *)this_ + 0x2a0) / 2) +
                           fVar21 * (float)*(int *)(*(int *)(*(int *)(pGVar5 + 0xd0) + 0x24) + 0x7c)
                           );
    local_5c = (float)(int)((float)(*(int *)((char *)this_ + 0x2a4) / 2) +
                           fVar21 * (float)*(int *)(*(int *)(*(int *)(pGVar5 + 0xd0) + 0x24) + 0x80)
                           );
    // [seh] local_8 = 9;
    (**(code **)(*(int *)pSVar9 + 0x4c))();
    // [seh] local_8 = 0xffffffff;
    iVar17 = *(int *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x14);
    iVar15 = ComponentInterfaceInstance::getEfficiencyPercent
                       (*(ComponentInterfaceInstance **)
                         (*(int *)(*(int *)(iVar17 + 4) + 0x14) + 0xc));
    local_44 = (AnimationFrames *)
               (*(float *)(*(int *)(iVar17 + 8) + 0x104) * ((float)iVar15 / 100.0));
    if (((char *)this_)[0x45d] == (byte)0x0) {
      local_48 = *(float *)((char *)this_ + 0x4fc);
    }
    else {
      local_48 = 0.2;
    }
    iVar17 = **(int **)((char *)this_ + 0x474);
    (**(code **)(iVar17 + 0xb0))();
    (**(code **)(iVar17 + 0x40))();
    iVar17 = **(int **)((char *)this_ + 0x474);
    cocos2d::Color3B::Color3B((Color3B *)((int)&local_58 + 1),0xff,'\0',0xff);
    (**(code **)(iVar17 + 0x25c))();
    (**(code **)(**(int **)((char *)this_ + 0x474) + 0x244))();
    local_60 = 0.5;
    local_5c = 0.5;
    // [seh] local_8 = 10;
    (**(code **)(**(int **)((char *)this_ + 0x474) + 0xa0))();
    // [seh] local_8 = 0xffffffff;
    (**(code **)(*(int *)this_ + 0x108))();
  }
  local_54 = (AnimationFrames *)0x0;
  iVar17 = *(int *)((char *)this_ + 0x444) - *(int *)((char *)this_ + 0x440) >> 0x1f;
  if ((*(int *)((char *)this_ + 0x444) - *(int *)((char *)this_ + 0x440)) / 0x14 + iVar17 != iVar17) {
    iVar17 = 0;
    do {
      ghidra::str::assign((std::string *)&stack0xffffff4c,"white.png",9);
      pSVar9 = loadSprite();
      local_60 = 0.5;
      local_5c = 0.0;
      *(Sprite **)(iVar17 + 0x10 + *(int *)((char *)this_ + 0x440)) = pSVar9;
      // [seh] local_8 = 0xb;
      (**(code **)(**(int **)(iVar17 + 0x10 + *(int *)((char *)this_ + 0x440)) + 0xa0))();
      // [seh] local_8 = 0xffffffff;
      (**(code **)(*(int *)this_ + 0x108))();
      // [seh] local_8 = 0xc;
      (**(code **)(**(int **)(iVar17 + 0x10 + *(int *)((char *)this_ + 0x440)) + 0x4c))();
      if (((char *)this_)[0x45d] == (byte)0x0) {
        local_48 = *(float *)((char *)this_ + 0x4fc);
      }
      else {
        local_48 = 0.2;
      }
      iVar15 = *(int *)((char *)this_ + 0x440);
      local_70 = *(float *)(iVar17 + 0xc + iVar15);
      local_74 = *(float *)(iVar17 + 8 + iVar15);
      local_68 = *(undefined4 *)(iVar17 + 4 + iVar15);
      local_6c = *(undefined4 *)(iVar17 + iVar15);
      // [seh] local_8 = 0xe;
      fVar21 = cocos2d::Vec2::getDistanceSq((Vec2 *)&local_6c,(Vec2 *)&local_74);
      local_58 = (float)(0x5f3759df - ((uint)fVar21 >> 1));
      // [seh] local_8 = 0xffffffff;
      iVar15 = **(int **)(iVar17 + 0x10 + *(int *)((char *)this_ + 0x440));
      local_44 = (AnimationFrames *)
                 ((1.5 - fVar21 * 0.5 * local_58 * local_58) * local_58 * fVar21 * local_48);
      (**(code **)(iVar15 + 0xb0))();
      (**(code **)(iVar15 + 0x2c))();
      piVar10 = *(int **)(iVar17 + 0x10 + *(int *)(local_50 + 0x440));
      angleInDegreesFrom();
      (**(code **)(*piVar10 + 0xbc))();
      iVar15 = **(int **)(iVar17 + 0x10 + *(int *)(local_50 + 0x440));
      cocos2d::Color3B::Color3B((Color3B *)((int)&local_4c + 1),'V',0xdc,0xdc);
      (**(code **)(iVar15 + 0x25c))();
      iVar17 = iVar17 + 0x14;
      local_54 = local_54 + 1;
      this_ = local_50;
    } while (local_54 <
             (AnimationFrames *)((*(int *)(local_50 + 0x444) - *(int *)(local_50 + 0x440)) / 0x14));
  }
  **(undefined1 **)((char *)this_ + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: bool __thiscall UI_NavMap::keyDown(UI_NavMap *this,KeyCode param_1)
bool UI_NavMap::keyDown(KeyCode param_1)

{
  switch(param_1) {
  case 0xc:
  case 0xd:
    ((char *)this)[0x45c] = (byte)0x1;
    break;
  case 0x1a:
  case 0x27:
    *(undefined1 **)((char *)this + 0x44c) = &DAT_bf800000;
    return true;
  case 0x1b:
  case 0x29:
    *(undefined4 *)((char *)this + 0x44c) = 0x3f800000;
    return true;
  case 0x1c:
  case 0x25:
    *(undefined4 *)((char *)this + 0x450) = 0x3f800000;
    return true;
  case 0x1d:
  case 0x2b:
    *(undefined1 **)((char *)this + 0x450) = &DAT_bf800000;
    return true;
  }
  return false;
}


// Ghidra: bool __thiscall UI_NavMap::keyUp(UI_NavMap *this,KeyCode param_1)
bool UI_NavMap::keyUp(KeyCode param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffcc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffffd4[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 uVar1;
  uint uVar2;
  std::string *pbVar3;
  void *pvVar4;
  NetworkData *this_00;
  NetworkData *extraout_ECX;
  NetworkData *extraout_ECX_00;
  NetworkData *extraout_ECX_01;
  NetworkData *extraout_ECX_02;
  NetworkData *this_01;
  nothrow_t *pnVar5;
  undefined4 unaff_ESI;
  int iVar6;
  uint uVar7;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  void *in_stack_ffffffd4;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cb7c9;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  uVar7 = uVar2;
  switch(param_1) {
  case 7:
    if (g_gameLogic[0x72] == (byte)0x0) {
      ghidra::any_singleton();
      iVar6 = 7;
      this_01 = extraout_ECX_02;
LAB_0057ead8:
      NetworkData::sendShipCommand
                (this_01,iVar6,(double)((ulonglong)uVar7 << 0x20),
                 (double)CONCAT44(in_stack_ffffffcc,unaff_ESI),
                 (double)CONCAT44(in_stack_ffffffd4,in_stack_ffffffd0));
    }
    else {
      ShipInterface::doRemoveLastWaypoint(*(Ship **)(g_gameData + 0xd0),0,0,0);
    }
    goto LAB_0057eae3;
  default:
    goto switchD_0057e793_caseD_8;
  case 10:
  case 0x23:
  case 0xa4:
    if (g_gameLogic[0x72] == (byte)0x0) {
      ghidra::any_singleton();
      iVar6 = 0xf;
      this_01 = extraout_ECX_01;
      goto LAB_0057ead8;
    }
    ShipInterface::doEngageCourse(*(Ship **)(g_gameData + 0xd0),0,0,0);
    goto LAB_0057eae3;
  case 0xc:
  case 0xd:
    ((char *)this)[0x45c] = (byte)0x0;
    goto switchD_0057e793_caseD_8;
  case 0x1a:
  case 0x1b:
  case 0x27:
  case 0x29:
    *(undefined4 *)((char *)this + 0x44c) = 0;
    break;
  case 0x1c:
  case 0x1d:
  case 0x25:
  case 0x2b:
    *(undefined4 *)((char *)this + 0x450) = 0;
    break;
  case 0x1f:
  case 0x47:
  case 0x59:
    PresentationData::doMapZoomOut
              (*(Ship **)(g_gameData + 0xd0),(double)((ulonglong)(double)(byte)((char *)this)[0x45d] >> 0x20),
               0.0,(double)((ulonglong)uVar2 << 0x20));
    **(undefined1 **)((char *)this + 0x288) = 1;
    break;
  case 0x20:
  case 0x49:
    PresentationData::doMapZoomIn
              (*(Ship **)(g_gameData + 0xd0),(double)((ulonglong)(double)(byte)((char *)this)[0x45d] >> 0x20),
               0.0,(double)((ulonglong)uVar2 << 0x20));
    **(undefined1 **)((char *)this + 0x288) = 1;
    break;
  case 0x3b:
    PresentationData::doRecenterMapOnShip
              (*(Ship **)(g_gameData + 0xd0),(double)((ulonglong)(double)(byte)((char *)this)[0x45d] >> 0x20),
               0.0,(double)((ulonglong)uVar2 << 0x20));
    *(undefined4 *)((char *)this + 0x44c) = 0;
    *(undefined4 *)((char *)this + 0x450) = 0;
    **(undefined1 **)((char *)this + 0x288) = 1;
    break;
  case 0x7e:
    if (g_gameLogic[0x72] == (byte)0x0) {
      ghidra::any_singleton();
      iVar6 = 6;
      this_01 = extraout_ECX_00;
      goto LAB_0057ead8;
    }
    ShipInterface::doClearCourse(*(Ship **)(g_gameData + 0xd0),0,0,0);
LAB_0057eae3:
    (**(code **)(*(int *)this + 0x294))();
    goto switchD_0057e793_caseD_8;
  case 0x8b:
    if ((*(int *)(g_gameData + 0xcc) == 0) || (*(int *)(*(int *)(g_gameData + 0xcc) + 0x70) != 1)) {
      worldPositionForPosition
                (this,&stack0xffffffcc,*(undefined4 *)((char *)this + 0x4d4),*(undefined4 *)((char *)this + 0x4d8));
      // [seh] local_8 = 0;
      pbVar3 = (std::string *)
               strUsingArgs(&stack0xffffffd4,"Loc: %f, %f",SUB84((double)in_stack_ffffffcc,0),
                            (int)((ulonglong)(double)in_stack_ffffffcc >> 0x20),
                            SUB84((double)in_stack_ffffffd0,0),
                            (int)((ulonglong)(double)in_stack_ffffffd0 >> 0x20));
      ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 0x4e4),pbVar3);
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = in_stack_ffffffd4;
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)in_stack_ffffffd4 + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)in_stack_ffffffd4 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      debugPrint("WORLD","Plotting point over: %f, %f",SUB84((double)in_stack_ffffffcc,0),
                 (int)((ulonglong)(double)in_stack_ffffffcc >> 0x20),
                 SUB84((double)in_stack_ffffffd0,0),
                 (int)((ulonglong)(double)in_stack_ffffffd0 >> 0x20));
      if (g_gameLogic[0x72] == (byte)0x0) {
        ghidra::any_singleton();
        NetworkData::sendShipCommand
                  (this_00,0x3a,
                   (double)CONCAT44(uVar7,(int)((ulonglong)
                                                (double)(PresentationData::m_mapZoomLevel + 1) >>
                                               0x20)),(double)CONCAT44(in_stack_ffffffcc,unaff_ESI),
                   (double)CONCAT44(in_stack_ffffffd4,in_stack_ffffffd0));
      }
      else {
        ShipInterface::doMapClick
                  (*(Ship **)(g_gameData + 0xd0),(int)in_stack_ffffffcc,(int)in_stack_ffffffd0,
                   PresentationData::m_mapZoomLevel + 1);
      }
      if (g_gameLogic[0x72] == (byte)0x0) {
        ghidra::any_singleton();
        iVar6 = 5;
        this_01 = extraout_ECX;
        goto LAB_0057ead8;
      }
      ShipInterface::doPlotCourse(*(Ship **)(g_gameData + 0xd0),0,0,0);
      goto LAB_0057eae3;
    }
switchD_0057e793_caseD_8:
  }
  // [seh] ExceptionList = local_10;
  // [cookie] uVar1 = __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


// Ghidra: void __thiscall UI_NavMap::cancelAllKeys(UI_NavMap *this)
void UI_NavMap::cancelAllKeys()

{
  ((char *)this)[0x45c] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x44c) = 0;
  *(undefined4 *)((char *)this + 0x450) = 0;
  return;
}
