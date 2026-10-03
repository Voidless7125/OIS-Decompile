#include "../ois.exe.h"


// public: virtual void * __thiscall UI_SensorDisplay::`scalar deleting destructor'(unsigned int)

void * __thiscall
UI_SensorDisplay::_scalar_deleting_destructor_(UI_SensorDisplay *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b27f0;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1,uVar2);
    *(undefined4 *)(this + 0x440) = 0;
  }
  if (*(int **)(this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x444) + 0x138))(1);
    *(undefined4 *)(this + 0x444) = 0;
  }
  if (*(int **)(this + 0x460) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x460) + 0x138))(1);
    *(undefined4 *)(this + 0x460) = 0;
  }
  uVar2 = *(uint *)(this + 0x45c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x448);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00586133;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined4 *)(this + 0x45c) = 0xf;
  this[0x448] = (UI_SensorDisplay)0x0;
  uVar2 = *(uint *)(this + 0x43c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x428);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_00586133:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x43c) = 0xf;
  this[0x428] = (UI_SensorDisplay)0x0;
  *(undefined ***)this = ScreenElement::vftable;
  Widget::~Widget((Widget *)(this + 0x290));
  cocos2d::Node::~Node((Node *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this,(nothrow_t *)0x468);
  }
  ExceptionList = local_10;
  return this;
}


// public: virtual void __thiscall UI_SensorDisplay::cleanupRender(void)

void __thiscall UI_SensorDisplay::cleanupRender(UI_SensorDisplay *this)

{
  if (*(int **)(this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x440) + 0x138))(1);
    *(undefined4 *)(this + 0x440) = 0;
  }
  if (*(int **)(this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x444) + 0x138))(1);
    *(undefined4 *)(this + 0x444) = 0;
  }
  if (*(int **)(this + 0x460) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x460) + 0x138))(1);
    *(undefined4 *)(this + 0x460) = 0;
  }
  return;
}


// public: virtual void __thiscall UI_SensorDisplay::render(void)

void __thiscall UI_SensorDisplay::render(UI_SensorDisplay *this)

{
  int iVar1;
  basic_string<> *pbVar2;
  Scale9Sprite *pSVar3;
  UIText *pUVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  basic_string<> abStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cbfea;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  pbVar2 = (basic_string<> *)strUsingArgs((char *)local_2c);
  local_8 = 0;
  puStack_5c = (undefined4 *)0x5861fd;
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  local_8 = 0xffffffff;
  *(Scale9Sprite **)(this + 0x444) = pSVar3;
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
  local_34 = 0;
  local_30 = 0;
  local_8 = 1;
  (**(code **)(**(int **)(this + 0x444) + 0xa0))();
  local_8 = 0xffffffff;
  iVar1 = **(int **)(this + 0x444);
  cocos2d::Size::Size((Size *)&local_34,(float)*(int *)(this + 0x2a0),(float)*(int *)(this + 0x2a4))
  ;
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*(int *)this + 0x10c))();
  iVar1 = *(int *)this;
  (**(code **)(**(int **)(this + 0x444) + 0xb0))();
  puStack_5c = (undefined4 *)0x5862dc;
  (**(code **)(iVar1 + 0xac))();
  std::basic_string<>::basic_string<>(abStack_70,(basic_string<> *)(this + 0x448));
  pUVar4 = UIText::create(0);
  *(UIText **)(this + 0x460) = pUVar4;
  local_3c = 0;
  local_38 = 0;
  local_8 = 2;
  puStack_5c = &local_3c;
  uStack_60 = 0x58633a;
  (**(code **)(*(int *)pUVar4 + 0xa0))();
  local_8 = 0xffffffff;
  uStack_60 = 0x40000000;
  uStack_64 = 0x40000000;
  uStack_68 = 0x58635e;
  (**(code **)(**(int **)(this + 0x460) + 0x48))();
  uStack_68 = *(undefined4 *)(this + 0x460);
  uStack_6c = 0x58636e;
  (**(code **)(*(int *)this + 0x10c))();
  **(undefined1 **)(this + 0x288) = 1;
  ExceptionList = local_10;
  uStack_60 = 0x58638e;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: virtual void __thiscall UI_SensorDisplay::specialDataCheckFunction(float)

void __thiscall UI_SensorDisplay::specialDataCheckFunction(UI_SensorDisplay *this,float param_1)

{
  bool bVar1;
  char *pcVar2;
  basic_string<> *pbVar3;
  nothrow_t *pnVar4;
  basic_string<> *pbVar5;
  basic_string<> *pbVar6;
  uint unaff_EDI;
  basic_string<> *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b12f8;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_14 = pcVar2;
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    getText(this);
    pbVar5 = local_2c[0];
    pbVar6 = (basic_string<> *)(this + 0x448);
    local_8 = 0;
    pbVar3 = pbVar6;
    if (0xf < *(uint *)(this + 0x45c)) {
      pbVar3 = *(basic_string<> **)pbVar6;
    }
    bVar1 = std::_Traits_equal<>((char *)pbVar3,*(uint *)(this + 0x458),pcVar2,unaff_EDI);
    if (!bVar1) {
      if (pbVar6 != (basic_string<> *)local_2c) {
        pbVar3 = (basic_string<> *)local_2c;
        if (0xf < local_18) {
          pbVar3 = pbVar5;
        }
        std::basic_string<>::assign(pbVar6,(char *)pbVar3,local_1c);
        pbVar5 = local_2c[0];
      }
      (**(code **)(*(int *)this + 0x294))();
    }
    if (0xf < local_18) {
      pnVar4 = (nothrow_t *)(local_18 + 1);
      pbVar6 = pbVar5;
      if ((nothrow_t *)0xfff < pnVar4) {
        pbVar6 = *(basic_string<> **)(pbVar5 + -4);
        pnVar4 = (nothrow_t *)(local_18 + 0x24);
        if ((basic_string<> *)0x1f < pbVar5 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar6,pnVar4);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Type propagation algorithm not settling
// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall UI_SensorDisplay::getText(void)

void __thiscall UI_SensorDisplay::getText(UI_SensorDisplay *this)

{
  Ship *pSVar1;
  GameObject *pGVar2;
  SensorData *this_00;
  int iVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  basic_string<> *pbVar7;
  undefined4 *******pppppppuVar8;
  undefined4 uVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint unaff_EDI;
  undefined4 uVar12;
  basic_string<> *pbVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  basic_string<> *in_stack_00000004;
  char *pcVar17;
  uint uVar18;
  float local_ec;
  float local_e8;
  float local_e4;
  basic_string<> *local_e0;
  char local_d9;
  Ship *local_d8;
  basic_string<> local_d4 [24];
  basic_string<> local_bc [24];
  word local_a4 [16];
  undefined4 local_94;
  undefined4 local_90;
  void *local_8c [4];
  undefined4 local_7c;
  uint local_78;
  void *local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined4 *******local_5c [5];
  uint local_48;
  void *local_44 [5];
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005cc241;
  local_10 = ExceptionList;
  pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_e0 = in_stack_00000004;
  pSVar1 = *(Ship **)(g_gameData + 0xd0);
  local_d8 = pSVar1;
  local_14 = pcVar6;
  if (pSVar1 == (Ship *)0x0) {
    pcVar6 = "";
    uVar18 = 0;
  }
  else {
    if (((int *)**(int **)(pSVar1 + 0x40) != (int *)0x0) &&
       (cVar4 = (**(code **)(*(int *)**(int **)(pSVar1 + 0x40) + 0x10))(), cVar4 != '\0')) {
      local_1c = 0;
      uStack_18 = 0xf;
      local_2c = local_2c & 0xffffff00;
      local_8 = 0;
      if (*(int *)(*(int *)(**(int **)(pSVar1 + 0x40) + 8) + 0xb0) == 1) {
        uVar18 = 0x19;
        pcVar17 = "`%Ventarii Sensors v1.01\n";
      }
      else {
        uVar18 = 0x1a;
        pcVar17 = "`%Ventarii Sensors v`!2.1\n";
      }
      std::basic_string<>::assign((basic_string<> *)&local_2c,pcVar17,uVar18);
      pGVar2 = *(GameObject **)(pSVar1 + 0x1ac);
      if ((pGVar2 == (GameObject *)0x0) && (*(int *)(pSVar1 + 0x194) == 0)) {
        std::basic_string<>::append((basic_string<> *)&local_2c,"`2Nothing selected.",0x13);
      }
      else {
        this_00 = *(SensorData **)(pSVar1 + 0x194);
        if (this_00 == (SensorData *)0x0) {
          iVar3 = *(int *)(pGVar2 + 0x54);
          if (iVar3 == 0) {
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Pla.: `7%s\n");
            local_8._0_1_ = 0x24;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Cat.: `7%s\n");
            local_8._0_1_ = 0x25;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            strUsingArgs((char *)local_5c,"%\'d");
            local_8._0_1_ = 0x26;
            pppppppuVar8 = local_5c;
            if (0xf < local_48) {
              pppppppuVar8 = local_5c[0];
            }
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_44,"`2Dia.: `9%skm\n",pppppppuVar8);
            local_8._0_1_ = 0x27;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            word::~word((word *)local_44);
            local_8._0_1_ = 0;
            word::~word((word *)local_5c);
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_44,"`2Pop.: `0%0.1fk\n",
                                  (double)*(float *)(pGVar2 + 0xc0));
            local_8._0_1_ = 0x28;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Type: `#%s\n");
            local_8._0_1_ = 0x29;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            pSVar1 = local_d8;
            Ship::relativeAngleToObject(local_d8,pGVar2);
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Brg.: `%%%d^\n");
            local_8._0_1_ = 0x2a;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            cocos2d::Vec2::Vec2((Vec2 *)&local_e4,(float)*(double *)(pGVar2 + 0x20),
                                (float)*(double *)(pGVar2 + 0x28));
            local_8._0_1_ = 0x2b;
            cocos2d::Vec2::Vec2((Vec2 *)&local_ec,(float)*(double *)(pSVar1 + 0x28),
                                (float)*(double *)(pSVar1 + 0x30));
            local_8._0_1_ = 0x2c;
            fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_44,"`2Dist: `$%.2fGm\n",(double)fVar16);
            local_8 = CONCAT31(local_8._1_3_,0x2d);
LAB_00587a38:
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            word::~word((word *)local_44);
            cocos2d::Vec2::~Vec2((Vec2 *)&local_ec);
            cocos2d::Vec2::~Vec2((Vec2 *)&local_e4);
          }
          else if (iVar3 == 1) {
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`$Star `%%%s\n");
            local_8 = CONCAT31(local_8._1_3_,0x2e);
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            word::~word((word *)local_44);
          }
          else if (iVar3 == 2) {
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Moon: `7%s\n");
            local_8._0_1_ = 0x2f;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Orbt: `7%s\n");
            local_8._0_1_ = 0x30;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            strUsingArgs((char *)local_5c,"%\'d");
            local_8._0_1_ = 0x31;
            pppppppuVar8 = local_5c;
            if (0xf < local_48) {
              pppppppuVar8 = local_5c[0];
            }
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_44,"`2Dia.: `9%skm\n",pppppppuVar8);
            local_8._0_1_ = 0x32;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            word::~word((word *)local_44);
            local_8._0_1_ = 0;
            word::~word((word *)local_5c);
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_a4,"`2Pop.: `0%0.1fk\n",
                                  (double)*(float *)(pGVar2 + 0xc0));
            local_8._0_1_ = 0x33;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word(local_a4);
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_bc,"`2Type: `#%s\n");
            local_8._0_1_ = 0x34;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_bc);
            pSVar1 = local_d8;
            Ship::relativeAngleToObject(local_d8,pGVar2);
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Brg.: `%%%d^\n");
            local_8._0_1_ = 0x35;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0;
            word::~word((word *)local_44);
            cocos2d::Vec2::Vec2((Vec2 *)&local_e4,(float)*(double *)(pGVar2 + 0x20),
                                (float)*(double *)(pGVar2 + 0x28));
            local_8._0_1_ = 0x36;
            cocos2d::Vec2::Vec2((Vec2 *)&local_ec,(float)*(double *)(pSVar1 + 0x28),
                                (float)*(double *)(pSVar1 + 0x30));
            local_8._0_1_ = 0x37;
            fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_44,"`2Dist: `$%.2fGm\n",(double)fVar16);
            local_8 = CONCAT31(local_8._1_3_,0x38);
            goto LAB_00587a38;
          }
        }
        else {
          bVar5 = SensorData::isSynthetic(this_00);
          if (bVar5) {
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_74,(basic_string<> *)(this_00 + 0x90));
            pSVar1 = local_d8;
            local_94 = 0;
            local_90 = 0xf;
            local_a4[0] = (word)0x0;
            local_8._0_1_ = 2;
            if (*(char *)(*(int *)(local_d8 + 0x194) + 0x45) == '\0') {
LAB_005866c0:
              pcVar6 = "`2Type: `$Unknown\n";
              uVar18 = 0x12;
LAB_005866c7:
              std::basic_string<>::append((basic_string<> *)&local_2c,pcVar6,uVar18);
            }
            else {
              iVar3 = *(int *)(*(int *)(local_d8 + 0x194) + 0xe0);
              if (iVar3 == 5) {
                uVar18 = 0x11;
                pcVar6 = "`2Type: `$Beacon\n";
                goto LAB_005866c7;
              }
              if (iVar3 == 6) {
                pcVar6 = "`2Type: `!Cargo Pods\n";
                uVar18 = 0x15;
                goto LAB_005866c7;
              }
              if (iVar3 == 4) {
                pcVar6 = "`2Type: `^Debris\n";
                uVar18 = 0x11;
                goto LAB_005866c7;
              }
              if (iVar3 != 7) goto LAB_005866c0;
              std::basic_string<>::append((basic_string<> *)&local_2c,"`2Type: `^Derelict\n",0x13);
              pbVar7 = (basic_string<> *)strUsingArgs((char *)local_5c,"`2Name: `!%s\n");
              local_8._0_1_ = 3;
              std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
              local_8._0_1_ = 2;
              if (0xf < local_48) {
                pnVar11 = (nothrow_t *)(local_48 + 1);
                pppppppuVar8 = local_5c[0];
                if ((nothrow_t *)0xfff < pnVar11) {
                  pppppppuVar8 = (undefined4 *******)local_5c[0][-1];
                  pnVar11 = (nothrow_t *)(local_48 + 0x24);
                  if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pppppppuVar8))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pppppppuVar8,pnVar11);
              }
            }
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_5c,"`2Reg.: `9%s\n");
            local_8._0_1_ = 4;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 2;
            if (0xf < local_48) {
              pnVar11 = (nothrow_t *)(local_48 + 1);
              pppppppuVar8 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pppppppuVar8 = (undefined4 *******)local_5c[0][-1];
                pnVar11 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pppppppuVar8))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pppppppuVar8,pnVar11);
            }
            SensorData::getSolutionString(this_00);
            local_8._0_1_ = 5;
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_8c,"`2Sol.: %s\n");
            local_8._0_1_ = 6;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 5;
            if (0xf < local_78) {
              pnVar11 = (nothrow_t *)(local_78 + 1);
              pvVar10 = local_8c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_8c[0] + -4);
                pnVar11 = (nothrow_t *)(local_78 + 0x24);
                if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            local_8._0_1_ = 2;
            local_7c = 0;
            local_78 = 0xf;
            local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
            if (0xf < local_48) {
              pnVar11 = (nothrow_t *)(local_48 + 1);
              pppppppuVar8 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pppppppuVar8 = (undefined4 *******)local_5c[0][-1];
                pnVar11 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pppppppuVar8))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pppppppuVar8,pnVar11);
            }
            auVar15 = ZEXT416((uint)(float)((double)*(float *)(this_00 + 0x108) +
                                           *(double *)(this_00 + 0x18)));
            Ship::trueAngleToPosition
                      (pSVar1,(float)((double)*(float *)(this_00 + 0x104) +
                                     *(double *)(this_00 + 0x10)),
                       (float)((double)*(float *)(this_00 + 0x108) + *(double *)(this_00 + 0x18)));
            dVar14 = auVar15._0_8_ - (double)*(float *)(pSVar1 + 0x120);
            if (dVar14 < 0.0) {
              dVar14 = dVar14 + 360.0;
            }
            local_d8 = (Ship *)0x0;
            if ((Ship *)(int)dVar14 != (Ship *)0x167) {
              local_d8 = (Ship *)(int)dVar14;
            }
            local_e4 = (float)((double)*(float *)(this_00 + 0x104) + *(double *)(this_00 + 0x10));
            local_e0 = (basic_string<> *)
                       (float)((double)*(float *)(this_00 + 0x108) + *(double *)(this_00 + 0x18));
            local_ec = (float)*(double *)(pSVar1 + 0x28);
            local_e8 = (float)*(double *)(pSVar1 + 0x30);
            local_8._0_1_ = 8;
            fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_5c,"`2Dist: `$%0.2fGm\n",(double)fVar16);
            local_8._0_1_ = 9;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 8;
            if (0xf < local_48) {
              pnVar11 = (nothrow_t *)(local_48 + 1);
              pppppppuVar8 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pppppppuVar8 = (undefined4 *******)local_5c[0][-1];
                pnVar11 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pppppppuVar8))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pppppppuVar8,pnVar11);
            }
            local_8._0_1_ = 2;
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_5c,"`2Brg.: `%%%d^\n");
            local_8._0_1_ = 10;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 2;
            if (0xf < local_48) {
              pnVar11 = (nothrow_t *)(local_48 + 1);
              pppppppuVar8 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pppppppuVar8 = (undefined4 *******)local_5c[0][-1];
                pnVar11 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pppppppuVar8))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pppppppuVar8,pnVar11);
            }
            fVar16 = *(float *)(this_00 + 0x40);
            if (1.0 <= fVar16) {
              strUsingArgs((char *)local_5c,"`7%.0f`2s ago",(double)fVar16);
              local_8._0_1_ = 0xb;
            }
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_8c,"`2LDT.: %s\n");
            local_8 = 0xc;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8 = CONCAT31(local_8._1_3_,0xb);
            if (0xf < local_78) {
              pnVar11 = (nothrow_t *)(local_78 + 1);
              pvVar10 = local_8c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_8c[0] + -4);
                pnVar11 = (nothrow_t *)(local_78 + 0x24);
                if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            local_8 = 2;
            local_7c = 0;
            local_78 = 0xf;
            local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
            if ((1.0 <= fVar16) && (0xf < local_48)) {
              pnVar11 = (nothrow_t *)(local_48 + 1);
              pppppppuVar8 = local_5c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pppppppuVar8 = (undefined4 *******)local_5c[0][-1];
                pnVar11 = (nothrow_t *)(local_48 + 0x24);
                if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pppppppuVar8))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pppppppuVar8,pnVar11);
            }
            if (*(int *)(*(int *)(pSVar1 + 0x194) + 0xe0) == 6) {
              pbVar7 = (basic_string<> *)strUsingArgs((char *)local_5c,"`2Crg.: %s\n");
              local_8 = CONCAT31(local_8._1_3_,0xd);
              std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
              if (0xf < local_48) {
                pnVar11 = (nothrow_t *)(local_48 + 1);
                pppppppuVar8 = local_5c[0];
                if ((nothrow_t *)0xfff < pnVar11) {
                  pppppppuVar8 = (undefined4 *******)local_5c[0][-1];
                  pnVar11 = (nothrow_t *)(local_48 + 0x24);
                  if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pppppppuVar8))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pppppppuVar8,pnVar11);
              }
            }
            if (0xf < local_60) {
              pnVar11 = (nothrow_t *)(local_60 + 1);
              pvVar10 = local_74[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_74[0] + -4);
                pnVar11 = (nothrow_t *)(local_60 + 0x24);
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
          }
          else {
            local_d9 = '\0';
            if ((*(int *)(this_00 + 0x130) != 0) &&
               ((iVar3 = *(int *)(*(int *)(*(int *)(this_00 + 0x130) + 0x254) + 0x158), iVar3 == 0
                || (iVar3 == 4)))) {
              local_d9 = '\x01';
            }
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)local_5c,(basic_string<> *)(this_00 + 0x48));
            local_8._0_1_ = 0xe;
            std::basic_string<>::basic_string<>(local_bc,(basic_string<> *)(this_00 + 0x60));
            local_8._0_1_ = 0xf;
            std::basic_string<>::basic_string<>(local_d4,(basic_string<> *)(this_00 + 0x90));
            local_94 = 0;
            local_90 = 0xf;
            local_a4[0] = (word)0x0;
            local_8._0_1_ = 0x11;
            local_7c = 0;
            local_78 = 0xf;
            local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
            std::basic_string<>::assign((basic_string<> *)local_8c,"Unknown",7);
            local_8._0_1_ = 0x12;
            if ((*(int *)(this_00 + 0x130) == 0) || (*(float *)(this_00 + 0x38) == -1.0)) {
              if (*(float *)(this_00 + 0x38) == -1.0) {
                std::basic_string<>::assign((basic_string<> *)local_8c,"Unknown",7);
              }
            }
            else {
              pbVar7 = (basic_string<> *)
                       strUsingArgs((char *)local_74,"%.0f^",(double)*(float *)(this_00 + 0x38));
              std::basic_string<>::operator=((basic_string<> *)local_8c,pbVar7);
              if (0xf < local_60) {
                pnVar11 = (nothrow_t *)(local_60 + 1);
                pvVar10 = local_74[0];
                if ((nothrow_t *)0xfff < pnVar11) {
                  pvVar10 = *(void **)((int)local_74[0] + -4);
                  pnVar11 = (nothrow_t *)(local_60 + 0x24);
                  if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar10,pnVar11);
              }
            }
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_74,"`2Name: `7%s\n");
            local_8._0_1_ = 0x13;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0x12;
            if (0xf < local_60) {
              pnVar11 = (nothrow_t *)(local_60 + 1);
              pvVar10 = local_74[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_74[0] + -4);
                pnVar11 = (nothrow_t *)(local_60 + 0x24);
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_74,"`2Clss: `7%s\n");
            local_8._0_1_ = 0x14;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0x12;
            if (0xf < local_60) {
              pnVar11 = (nothrow_t *)(local_60 + 1);
              pvVar10 = local_74[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_74[0] + -4);
                pnVar11 = (nothrow_t *)(local_60 + 0x24);
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            iVar3 = *(int *)(this_00 + 0xd8);
            if (((iVar3 == 1) || (iVar3 == 3)) || (iVar3 == 2)) {
              pbVar7 = (basic_string<> *)strUsingArgs((char *)local_74,"`2Aff.: `7%s\n");
              local_8._0_1_ = 0x15;
              std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
              local_8._0_1_ = 0x12;
              if (0xf < local_60) {
                pnVar11 = (nothrow_t *)(local_60 + 1);
                pvVar10 = local_74[0];
                if ((nothrow_t *)0xfff < pnVar11) {
                  pvVar10 = *(void **)((int)local_74[0] + -4);
                  pnVar11 = (nothrow_t *)(local_60 + 0x24);
                  if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                operator_delete(pvVar10,pnVar11);
              }
            }
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_74,"`2Reg.: `9%s\n");
            local_8._0_1_ = 0x16;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0x12;
            if (0xf < local_60) {
              pnVar11 = (nothrow_t *)(local_60 + 1);
              pvVar10 = local_74[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_74[0] + -4);
                pnVar11 = (nothrow_t *)(local_60 + 0x24);
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            SensorData::getSolutionString(this_00);
            local_8._0_1_ = 0x17;
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_74,"`2Sol.: %s\n");
            local_8._0_1_ = 0x18;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0x17;
            if (0xf < local_60) {
              pnVar11 = (nothrow_t *)(local_60 + 1);
              pvVar10 = local_74[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_74[0] + -4);
                pnVar11 = (nothrow_t *)(local_60 + 0x24);
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            local_8._0_1_ = 0x12;
            local_64 = 0;
            local_60 = 0xf;
            local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
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
            pSVar1 = local_d8;
            auVar15 = ZEXT416((uint)(float)((double)*(float *)(this_00 + 0x108) +
                                           *(double *)(this_00 + 0x18)));
            Ship::trueAngleToPosition
                      (local_d8,(float)((double)*(float *)(this_00 + 0x104) +
                                       *(double *)(this_00 + 0x10)),
                       (float)((double)*(float *)(this_00 + 0x108) + *(double *)(this_00 + 0x18)));
            dVar14 = auVar15._0_8_ - (double)*(float *)(pSVar1 + 0x120);
            if (dVar14 < 0.0) {
              dVar14 = dVar14 + 360.0;
            }
            local_d8 = (Ship *)0x0;
            if ((Ship *)(int)dVar14 != (Ship *)0x167) {
              local_d8 = (Ship *)(int)dVar14;
            }
            local_ec = (float)((double)*(float *)(this_00 + 0x104) + *(double *)(this_00 + 0x10));
            local_e8 = (float)((double)*(float *)(this_00 + 0x108) + *(double *)(this_00 + 0x18));
            local_e4 = (float)*(double *)(pSVar1 + 0x28);
            pbVar13 = (basic_string<> *)(float)*(double *)(pSVar1 + 0x30);
            local_8._0_1_ = 0x1a;
            local_e0 = pbVar13;
            fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_e4,(Vec2 *)&local_ec);
            pbVar7 = (basic_string<> *)
                     strUsingArgs((char *)local_44,"`2Dist: `$%0.2fGm\n",(double)fVar16);
            local_8._0_1_ = 0x1b;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0x1a;
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
            local_8._0_1_ = 0x12;
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Brg.: `%%%d^\n");
            local_8._0_1_ = 0x1c;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8._0_1_ = 0x12;
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
            if (local_d9 != '\0') {
              if ((*(Ship **)(this_00 + 0x130) == (Ship *)0x0) ||
                 (Ship::getSpeed(*(Ship **)(this_00 + 0x130)), (float)pbVar13 <= 0.0)) {
                std::basic_string<>::append((basic_string<> *)&local_2c,"`2Hdg.: `7unknown\n",0x12);
              }
              else {
                pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Hdg.: `!%s\n");
                local_8._0_1_ = 0x1d;
                std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
                local_8._0_1_ = 0x12;
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
            }
            fVar16 = *(float *)(this_00 + 0x40);
            if (1.0 <= fVar16) {
              strUsingArgs((char *)local_44,"`7%.0f`2s ago",(double)fVar16);
              local_8._0_1_ = 0x1e;
            }
            pbVar7 = (basic_string<> *)strUsingArgs((char *)local_74,"`2LDT.: %s");
            local_8 = 0x1f;
            std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
            local_8 = CONCAT31(local_8._1_3_,0x1e);
            if (0xf < local_60) {
              pnVar11 = (nothrow_t *)(local_60 + 1);
              pvVar10 = local_74[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_74[0] + -4);
                pnVar11 = (nothrow_t *)(local_60 + 0x24);
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            local_8 = 0x12;
            local_64 = 0;
            local_60 = 0xf;
            local_74[0] = (void *)((uint)local_74[0] & 0xffffff00);
            if ((1.0 <= fVar16) && (0xf < local_30)) {
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
            if (((local_d9 != '\0') && (*(int *)(this_00 + 0x130) != 0)) &&
               (*(char *)(*(int *)(*(int *)(this_00 + 0x130) + 0x40) + 0x34) != '\0')) {
              std::basic_string<>::append((basic_string<> *)&local_2c,"\n",1);
              iVar3 = *(int *)(*(int *)(this_00 + 0x130) + 0x44);
              if (((iVar3 == 0) || (*(int *)(iVar3 + 0x124) == 0)) ||
                 (*(char *)(*(int *)(iVar3 + 0x124) + 0x160) == '\0')) {
                uVar12 = 0x37;
                uVar9 = 0x37;
                if (*(int *)(iVar3 + 8) != 0) {
                  uVar9 = 0x30;
                }
                pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2From: `%c%s\n",uVar9);
                local_8._0_1_ = 0x22;
                std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
                local_8._0_1_ = 0x12;
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
                if (*(int *)(*(int *)(*(int *)(this_00 + 0x130) + 0x44) + 0x10) != 0) {
                  uVar12 = 0x21;
                }
                pbVar7 = (basic_string<> *)strUsingArgs((char *)local_44,"`2Dest: `%c%s",uVar12);
                local_8 = CONCAT31(local_8._1_3_,0x23);
              }
              else {
                local_e0 = *(basic_string<> **)(iVar3 + 0x8c);
                bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
                if (bVar5) {
                  local_d8 = (Ship *)0x5e3d3c;
                }
                else {
                  local_d8 = (Ship *)(iVar3 + 0x7c);
                  if (0xf < *(uint *)(iVar3 + 0x90)) {
                    local_d8 = *(Ship **)(iVar3 + 0x7c);
                  }
                }
                bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
                uVar12 = 0x37;
                uVar9 = 0x37;
                if (bVar5) {
                  uVar9 = 0x30;
                }
                pbVar7 = (basic_string<> *)
                         strUsingArgs((char *)local_44,"`2From: `%c%s\n",uVar9,local_d8);
                local_8._0_1_ = 0x20;
                std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
                local_8._0_1_ = 0x12;
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
                iVar3 = *(int *)(*(int *)(this_00 + 0x130) + 0x44);
                local_e0 = *(basic_string<> **)(iVar3 + 0xbc);
                bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
                if (bVar5) {
                  local_d8 = (Ship *)0x5e3d3c;
                }
                else {
                  local_d8 = (Ship *)(iVar3 + 0xac);
                  if (0xf < *(uint *)(iVar3 + 0xc0)) {
                    local_d8 = *(Ship **)(iVar3 + 0xac);
                  }
                }
                bVar5 = std::_Traits_equal<>("",0,pcVar6,unaff_EDI);
                if (bVar5) {
                  uVar12 = 0x30;
                }
                pbVar7 = (basic_string<> *)
                         strUsingArgs((char *)local_44,"`2Dest: `%c%s",uVar12,local_d8);
                local_8 = CONCAT31(local_8._1_3_,0x21);
              }
              std::basic_string<>::append((basic_string<> *)&local_2c,pbVar7);
              if (0xf < local_30) {
                pnVar11 = (nothrow_t *)(local_30 + 1);
                pvVar10 = local_44[0];
                if ((nothrow_t *)0xfff < pnVar11) {
                  pvVar10 = *(void **)((int)local_44[0] + -4);
                  pnVar11 = (nothrow_t *)(local_30 + 0x24);
                  if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_00587485;
                }
                operator_delete(pvVar10,pnVar11);
              }
            }
            if (0xf < local_78) {
              pnVar11 = (nothrow_t *)(local_78 + 1);
              pvVar10 = local_8c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_8c[0] + -4);
                pnVar11 = (nothrow_t *)(local_78 + 0x24);
                if (0x1f < (uint)((int)local_8c[0] + (-4 - (int)pvVar10))) {
LAB_00587485:
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar10,pnVar11);
            }
            local_7c = 0;
            local_78 = 0xf;
            local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
            word::~word(local_a4);
            word::~word((word *)local_d4);
            word::~word((word *)local_bc);
            word::~word((word *)local_5c);
          }
        }
      }
      uVar18 = local_2c;
      local_2c = local_2c & 0xffffff00;
      *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
      *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
      *(uint *)in_stack_00000004 = uVar18;
      *(undefined4 *)(in_stack_00000004 + 4) = uStack_28;
      *(undefined4 *)(in_stack_00000004 + 8) = uStack_24;
      *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_20;
      *(ulonglong *)(in_stack_00000004 + 0x10) = CONCAT44(uStack_18,local_1c);
      local_1c = 0;
      uStack_18 = 0xf;
      word::~word((word *)&local_2c);
      goto LAB_00587ac5;
    }
    pcVar6 = "`@**error**";
    uVar18 = 0xb;
  }
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (basic_string<>)0x0;
  std::basic_string<>::assign(in_stack_00000004,pcVar6,uVar18);
LAB_00587ac5:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
