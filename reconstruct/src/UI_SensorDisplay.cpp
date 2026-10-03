// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall UI_SensorDisplay::cleanupRender(UI_SensorDisplay *this)
void UI_SensorDisplay::cleanupRender()

{
  if (*(int **)((char *)this + 0x440) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x440) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x440) = 0;
  }
  if (*(int **)((char *)this + 0x444) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x444) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x444) = 0;
  }
  if (*(int **)((char *)this + 0x460) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x460) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x460) = 0;
  }
  return;
}


// Ghidra: void __thiscall UI_SensorDisplay::render(UI_SensorDisplay *this)
void UI_SensorDisplay::render()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  std::string *pbVar2;
  Scale9Sprite *pSVar3;
  UIText *pUVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  std::string abStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  // [seh] undefined4 *puStack_5c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cbfea;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  (**(code **)(*(int *)this + 0x290))();
  pbVar2 = (std::string *)strUsingArgs((char *)local_2c);
  // [seh] local_8 = 0;
  // [seh] puStack_5c = (undefined4 *)0x5861fd;
  pSVar3 = cocos2d::ui::Scale9Sprite::create(pbVar2);
  // [seh] local_8 = 0xffffffff;
  *(Scale9Sprite **)((char *)this + 0x444) = pSVar3;
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
  // [seh] local_8 = 1;
  (**(code **)(**(int **)((char *)this + 0x444) + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  iVar1 = **(int **)((char *)this + 0x444);
  cocos2d::Size::Size((Size *)&local_34,(float)*(int *)((char *)this + 0x2a0),(float)*(int *)((char *)this + 0x2a4))
  ;
  (**(code **)(iVar1 + 0xac))();
  (**(code **)(*(int *)this + 0x10c))();
  iVar1 = *(int *)this;
  (**(code **)(**(int **)((char *)this + 0x444) + 0xb0))();
  // [seh] puStack_5c = (undefined4 *)0x5862dc;
  (**(code **)(iVar1 + 0xac))();
  ghidra::str::ctor(abStack_70,(std::string *)((char *)this + 0x448));
  pUVar4 = UIText::create(0);
  *(UIText **)((char *)this + 0x460) = pUVar4;
  local_3c = 0;
  local_38 = 0;
  // [seh] local_8 = 2;
  // [seh] puStack_5c = &local_3c;
  uStack_60 = 0x58633a;
  (**(code **)(*(int *)pUVar4 + 0xa0))();
  // [seh] local_8 = 0xffffffff;
  uStack_60 = 0x40000000;
  uStack_64 = 0x40000000;
  uStack_68 = 0x58635e;
  (**(code **)(**(int **)((char *)this + 0x460) + 0x48))();
  uStack_68 = *(undefined4 *)((char *)this + 0x460);
  uStack_6c = 0x58636e;
  (**(code **)(*(int *)this + 0x10c))();
  **(undefined1 **)((char *)this + 0x288) = 1;
  // [seh] ExceptionList = local_10;
  uStack_60 = 0x58638e;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_SensorDisplay::specialDataCheckFunction(UI_SensorDisplay *this,float param_1)
void UI_SensorDisplay::specialDataCheckFunction(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  std::string *pbVar3;
  nothrow_t *pnVar4;
  std::string *pbVar5;
  std::string *pbVar6;
  uint unaff_EDI;
  std::string *local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005b12f8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar2;
  if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
    getText(this);
    pbVar5 = local_2c[0];
    pbVar6 = (std::string *)((char *)this + 0x448);
    // [seh] local_8 = 0;
    pbVar3 = pbVar6;
    if (0xf < *(uint *)((char *)this + 0x45c)) {
      pbVar3 = *(std::string **)pbVar6;
    }
    bVar1 = ghidra::lib::_Traits_equal___x28_x29((char *)pbVar3,*(uint *)((char *)this + 0x458),pcVar2,unaff_EDI);
    if (!bVar1) {
      if (pbVar6 != (std::string *)local_2c) {
        pbVar3 = (std::string *)local_2c;
        if (0xf < local_18) {
          pbVar3 = pbVar5;
        }
        ghidra::str::assign(pbVar6,(char *)pbVar3,local_1c);
        pbVar5 = local_2c[0];
      }
      (**(code **)(*(int *)this + 0x294))();
    }
    if (0xf < local_18) {
      pnVar4 = (nothrow_t *)(local_18 + 1);
      pbVar6 = pbVar5;
      if ((nothrow_t *)0xfff < pnVar4) {
        pbVar6 = *(std::string **)(pbVar5 + -4);
        pnVar4 = (nothrow_t *)(local_18 + 0x24);
        if ((std::string *)0x1f < pbVar5 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar6,pnVar4);
    }
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall UI_SensorDisplay::getText(UI_SensorDisplay *this)
void UI_SensorDisplay::getText()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  Ship *pSVar1;
  GameObject *pGVar2;
  SensorData *this_00;
  int iVar3;
  char cVar4;
  bool bVar5;
  char *pcVar6;
  std::string *pbVar7;
  undefined4 *******pppppppuVar8;
  undefined4 uVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint unaff_EDI;
  undefined4 uVar12;
  std::string *pbVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  std::string *in_stack_00000004;
  char *pcVar17;
  uint uVar18;
  float local_ec;
  float local_e8;
  float local_e4;
  std::string *local_e0;
  char local_d9;
  Ship *local_d8;
  std::string local_d4 [24];
  std::string local_bc [24];
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
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005cc241;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
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
      // [seh] local_8 = 0;
      if (*(int *)(*(int *)(**(int **)(pSVar1 + 0x40) + 8) + 0xb0) == 1) {
        uVar18 = 0x19;
        pcVar17 = "`%Ventarii Sensors v1.01\n";
      }
      else {
        uVar18 = 0x1a;
        pcVar17 = "`%Ventarii Sensors v`!2.1\n";
      }
      ghidra::str::assign((std::string *)&local_2c,pcVar17,uVar18);
      pGVar2 = *(GameObject **)(pSVar1 + 0x1ac);
      if ((pGVar2 == (GameObject *)0x0) && (*(int *)(pSVar1 + 0x194) == 0)) {
        ghidra::str::append((std::string *)&local_2c,"`2Nothing selected.",0x13);
      }
      else {
        this_00 = *(SensorData **)(pSVar1 + 0x194);
        if (this_00 == (SensorData *)0x0) {
          iVar3 = *(int *)(pGVar2 + 0x54);
          if (iVar3 == 0) {
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Pla.: `7%s\n");
            // [seh] local_8._0_1_ = 0x24;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_44);
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Cat.: `7%s\n");
            // [seh] local_8._0_1_ = 0x25;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_44);
            strUsingArgs((char *)local_5c,"%\'d");
            // [seh] local_8._0_1_ = 0x26;
            pppppppuVar8 = local_5c;
            if (0xf < local_48) {
              pppppppuVar8 = local_5c[0];
            }
            pbVar7 = (std::string *)
                     strUsingArgs((char *)local_44,"`2Dia.: `9%skm\n",pppppppuVar8);
            // [seh] local_8._0_1_ = 0x27;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [mislabelled-dtor] word::~word((word *)local_44);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_5c);
            pbVar7 = (std::string *)
                     strUsingArgs((char *)local_44,"`2Pop.: `0%0.1fk\n",
                                  (double)*(float *)(pGVar2 + 0xc0));
            // [seh] local_8._0_1_ = 0x28;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_44);
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Type: `#%s\n");
            // [seh] local_8._0_1_ = 0x29;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_44);
            pSVar1 = local_d8;
            (local_d8)->relativeAngleToObject(pGVar2);
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Brg.: `%%%d^\n");
            // [seh] local_8._0_1_ = 0x2a;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_44);
            cocos2d::Vec2::Vec2((Vec2 *)&local_e4,(float)*(double *)(pGVar2 + 0x20),
                                (float)*(double *)(pGVar2 + 0x28));
            // [seh] local_8._0_1_ = 0x2b;
            cocos2d::Vec2::Vec2((Vec2 *)&local_ec,(float)*(double *)(pSVar1 + 0x28),
                                (float)*(double *)(pSVar1 + 0x30));
            // [seh] local_8._0_1_ = 0x2c;
            fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
            pbVar7 = (std::string *)
                     strUsingArgs((char *)local_44,"`2Dist: `$%.2fGm\n",(double)fVar16);
            // [seh] local_8 = CONCAT31(local_8._1_3_,0x2d);
LAB_00587a38:
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [mislabelled-dtor] word::~word((word *)local_44);
            cocos2d::Vec2::~Vec2((Vec2 *)&local_ec);
            cocos2d::Vec2::~Vec2((Vec2 *)&local_e4);
          }
          else if (iVar3 == 1) {
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`$Star `%%%s\n");
            // [seh] local_8 = CONCAT31(local_8._1_3_,0x2e);
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [mislabelled-dtor] word::~word((word *)local_44);
          }
          else if (iVar3 == 2) {
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Moon: `7%s\n");
            // [seh] local_8._0_1_ = 0x2f;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_44);
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Orbt: `7%s\n");
            // [seh] local_8._0_1_ = 0x30;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_44);
            strUsingArgs((char *)local_5c,"%\'d");
            // [seh] local_8._0_1_ = 0x31;
            pppppppuVar8 = local_5c;
            if (0xf < local_48) {
              pppppppuVar8 = local_5c[0];
            }
            pbVar7 = (std::string *)
                     strUsingArgs((char *)local_44,"`2Dia.: `9%skm\n",pppppppuVar8);
            // [seh] local_8._0_1_ = 0x32;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [mislabelled-dtor] word::~word((word *)local_44);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_5c);
            pbVar7 = (std::string *)
                     strUsingArgs((char *)local_a4,"`2Pop.: `0%0.1fk\n",
                                  (double)*(float *)(pGVar2 + 0xc0));
            // [seh] local_8._0_1_ = 0x33;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word(local_a4);
            pbVar7 = (std::string *)strUsingArgs((char *)local_bc,"`2Type: `#%s\n");
            // [seh] local_8._0_1_ = 0x34;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_bc);
            pSVar1 = local_d8;
            (local_d8)->relativeAngleToObject(pGVar2);
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Brg.: `%%%d^\n");
            // [seh] local_8._0_1_ = 0x35;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0;
            // [mislabelled-dtor] word::~word((word *)local_44);
            cocos2d::Vec2::Vec2((Vec2 *)&local_e4,(float)*(double *)(pGVar2 + 0x20),
                                (float)*(double *)(pGVar2 + 0x28));
            // [seh] local_8._0_1_ = 0x36;
            cocos2d::Vec2::Vec2((Vec2 *)&local_ec,(float)*(double *)(pSVar1 + 0x28),
                                (float)*(double *)(pSVar1 + 0x30));
            // [seh] local_8._0_1_ = 0x37;
            fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
            pbVar7 = (std::string *)
                     strUsingArgs((char *)local_44,"`2Dist: `$%.2fGm\n",(double)fVar16);
            // [seh] local_8 = CONCAT31(local_8._1_3_,0x38);
            goto LAB_00587a38;
          }
        }
        else {
          bVar5 = (this_00)->isSynthetic();
          if (bVar5) {
            ghidra::str::ctor
                      ((std::string *)local_74,(std::string *)(this_00 + 0x90));
            pSVar1 = local_d8;
            local_94 = 0;
            local_90 = 0xf;
            local_a4[0] = (word)0x0;
            // [seh] local_8._0_1_ = 2;
            if (*(char *)(*(int *)(local_d8 + 0x194) + 0x45) == '\0') {
LAB_005866c0:
              pcVar6 = "`2Type: `$Unknown\n";
              uVar18 = 0x12;
LAB_005866c7:
              ghidra::str::append((std::string *)&local_2c,pcVar6,uVar18);
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
              ghidra::str::append((std::string *)&local_2c,"`2Type: `^Derelict\n",0x13);
              pbVar7 = (std::string *)strUsingArgs((char *)local_5c,"`2Name: `!%s\n");
              // [seh] local_8._0_1_ = 3;
              ghidra::str::append((std::string *)&local_2c,pbVar7);
              // [seh] local_8._0_1_ = 2;
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
            pbVar7 = (std::string *)strUsingArgs((char *)local_5c,"`2Reg.: `9%s\n");
            // [seh] local_8._0_1_ = 4;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 2;
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
            (this_00)->getSolutionString();
            // [seh] local_8._0_1_ = 5;
            pbVar7 = (std::string *)strUsingArgs((char *)local_8c,"`2Sol.: %s\n");
            // [seh] local_8._0_1_ = 6;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 5;
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
            // [seh] local_8._0_1_ = 2;
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
            local_e0 = (std::string *)
                       (float)((double)*(float *)(this_00 + 0x108) + *(double *)(this_00 + 0x18));
            local_ec = (float)*(double *)(pSVar1 + 0x28);
            local_e8 = (float)*(double *)(pSVar1 + 0x30);
            // [seh] local_8._0_1_ = 8;
            fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_ec,(Vec2 *)&local_e4);
            pbVar7 = (std::string *)
                     strUsingArgs((char *)local_5c,"`2Dist: `$%0.2fGm\n",(double)fVar16);
            // [seh] local_8._0_1_ = 9;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 8;
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
            // [seh] local_8._0_1_ = 2;
            pbVar7 = (std::string *)strUsingArgs((char *)local_5c,"`2Brg.: `%%%d^\n");
            // [seh] local_8._0_1_ = 10;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 2;
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
              // [seh] local_8._0_1_ = 0xb;
            }
            pbVar7 = (std::string *)strUsingArgs((char *)local_8c,"`2LDT.: %s\n");
            // [seh] local_8 = 0xc;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8 = CONCAT31(local_8._1_3_,0xb);
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
            // [seh] local_8 = 2;
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
              pbVar7 = (std::string *)strUsingArgs((char *)local_5c,"`2Crg.: %s\n");
              // [seh] local_8 = CONCAT31(local_8._1_3_,0xd);
              ghidra::str::append((std::string *)&local_2c,pbVar7);
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
            ghidra::str::ctor
                      ((std::string *)local_5c,(std::string *)(this_00 + 0x48));
            // [seh] local_8._0_1_ = 0xe;
            ghidra::str::ctor(local_bc,(std::string *)(this_00 + 0x60));
            // [seh] local_8._0_1_ = 0xf;
            ghidra::str::ctor(local_d4,(std::string *)(this_00 + 0x90));
            local_94 = 0;
            local_90 = 0xf;
            local_a4[0] = (word)0x0;
            // [seh] local_8._0_1_ = 0x11;
            local_7c = 0;
            local_78 = 0xf;
            local_8c[0] = (void *)((uint)local_8c[0] & 0xffffff00);
            ghidra::str::assign((std::string *)local_8c,"Unknown",7);
            // [seh] local_8._0_1_ = 0x12;
            if ((*(int *)(this_00 + 0x130) == 0) || (*(float *)(this_00 + 0x38) == -1.0)) {
              if (*(float *)(this_00 + 0x38) == -1.0) {
                ghidra::str::assign((std::string *)local_8c,"Unknown",7);
              }
            }
            else {
              pbVar7 = (std::string *)
                       strUsingArgs((char *)local_74,"%.0f^",(double)*(float *)(this_00 + 0x38));
              ghidra::lib::basic_string__operator_x3d((std::string *)local_8c,pbVar7);
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
            pbVar7 = (std::string *)strUsingArgs((char *)local_74,"`2Name: `7%s\n");
            // [seh] local_8._0_1_ = 0x13;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0x12;
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
            pbVar7 = (std::string *)strUsingArgs((char *)local_74,"`2Clss: `7%s\n");
            // [seh] local_8._0_1_ = 0x14;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0x12;
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
              pbVar7 = (std::string *)strUsingArgs((char *)local_74,"`2Aff.: `7%s\n");
              // [seh] local_8._0_1_ = 0x15;
              ghidra::str::append((std::string *)&local_2c,pbVar7);
              // [seh] local_8._0_1_ = 0x12;
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
            pbVar7 = (std::string *)strUsingArgs((char *)local_74,"`2Reg.: `9%s\n");
            // [seh] local_8._0_1_ = 0x16;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0x12;
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
            (this_00)->getSolutionString();
            // [seh] local_8._0_1_ = 0x17;
            pbVar7 = (std::string *)strUsingArgs((char *)local_74,"`2Sol.: %s\n");
            // [seh] local_8._0_1_ = 0x18;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0x17;
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
            // [seh] local_8._0_1_ = 0x12;
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
            pbVar13 = (std::string *)(float)*(double *)(pSVar1 + 0x30);
            // [seh] local_8._0_1_ = 0x1a;
            local_e0 = pbVar13;
            fVar16 = cocos2d::Vec2::getDistance((Vec2 *)&local_e4,(Vec2 *)&local_ec);
            pbVar7 = (std::string *)
                     strUsingArgs((char *)local_44,"`2Dist: `$%0.2fGm\n",(double)fVar16);
            // [seh] local_8._0_1_ = 0x1b;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0x1a;
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
            // [seh] local_8._0_1_ = 0x12;
            pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Brg.: `%%%d^\n");
            // [seh] local_8._0_1_ = 0x1c;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8._0_1_ = 0x12;
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
                 ((*(Ship **)(this_00 + 0x130))->getSpeed(), (float)pbVar13 <= 0.0)) {
                ghidra::str::append((std::string *)&local_2c,"`2Hdg.: `7unknown\n",0x12);
              }
              else {
                pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Hdg.: `!%s\n");
                // [seh] local_8._0_1_ = 0x1d;
                ghidra::str::append((std::string *)&local_2c,pbVar7);
                // [seh] local_8._0_1_ = 0x12;
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
              // [seh] local_8._0_1_ = 0x1e;
            }
            pbVar7 = (std::string *)strUsingArgs((char *)local_74,"`2LDT.: %s");
            // [seh] local_8 = 0x1f;
            ghidra::str::append((std::string *)&local_2c,pbVar7);
            // [seh] local_8 = CONCAT31(local_8._1_3_,0x1e);
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
            // [seh] local_8 = 0x12;
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
              ghidra::str::append((std::string *)&local_2c,"\n",1);
              iVar3 = *(int *)(*(int *)(this_00 + 0x130) + 0x44);
              if (((iVar3 == 0) || (*(int *)(iVar3 + 0x124) == 0)) ||
                 (*(char *)(*(int *)(iVar3 + 0x124) + 0x160) == '\0')) {
                uVar12 = 0x37;
                uVar9 = 0x37;
                if (*(int *)(iVar3 + 8) != 0) {
                  uVar9 = 0x30;
                }
                pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2From: `%c%s\n",uVar9);
                // [seh] local_8._0_1_ = 0x22;
                ghidra::str::append((std::string *)&local_2c,pbVar7);
                // [seh] local_8._0_1_ = 0x12;
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
                pbVar7 = (std::string *)strUsingArgs((char *)local_44,"`2Dest: `%c%s",uVar12);
                // [seh] local_8 = CONCAT31(local_8._1_3_,0x23);
              }
              else {
                local_e0 = *(std::string **)(iVar3 + 0x8c);
                bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI);
                if (bVar5) {
                  local_d8 = (Ship *)0x5e3d3c;
                }
                else {
                  local_d8 = (Ship *)(iVar3 + 0x7c);
                  if (0xf < *(uint *)(iVar3 + 0x90)) {
                    local_d8 = *(Ship **)(iVar3 + 0x7c);
                  }
                }
                bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI);
                uVar12 = 0x37;
                uVar9 = 0x37;
                if (bVar5) {
                  uVar9 = 0x30;
                }
                pbVar7 = (std::string *)
                         strUsingArgs((char *)local_44,"`2From: `%c%s\n",uVar9,local_d8);
                // [seh] local_8._0_1_ = 0x20;
                ghidra::str::append((std::string *)&local_2c,pbVar7);
                // [seh] local_8._0_1_ = 0x12;
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
                local_e0 = *(std::string **)(iVar3 + 0xbc);
                bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI);
                if (bVar5) {
                  local_d8 = (Ship *)0x5e3d3c;
                }
                else {
                  local_d8 = (Ship *)(iVar3 + 0xac);
                  if (0xf < *(uint *)(iVar3 + 0xc0)) {
                    local_d8 = *(Ship **)(iVar3 + 0xac);
                  }
                }
                bVar5 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar6,unaff_EDI);
                if (bVar5) {
                  uVar12 = 0x30;
                }
                pbVar7 = (std::string *)
                         strUsingArgs((char *)local_44,"`2Dest: `%c%s",uVar12,local_d8);
                // [seh] local_8 = CONCAT31(local_8._1_3_,0x21);
              }
              ghidra::str::append((std::string *)&local_2c,pbVar7);
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
            // [mislabelled-dtor] word::~word(local_a4);
            // [mislabelled-dtor] word::~word((word *)local_d4);
            // [mislabelled-dtor] word::~word((word *)local_bc);
            // [mislabelled-dtor] word::~word((word *)local_5c);
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
      // [mislabelled-dtor] word::~word((word *)&local_2c);
      goto LAB_00587ac5;
    }
    pcVar6 = "`@**error**";
    uVar18 = 0xb;
  }
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  ghidra::str::assign(in_stack_00000004,pcVar6,uVar18);
LAB_00587ac5:
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
