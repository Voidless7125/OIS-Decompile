#include "../ois_server.exe.h"


Layer * __thiscall FUN_0052c140(void *this,byte param_1)

{
  FUN_0052c170(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_0052c170(Layer *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  Layer *pLVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4000;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0x3f4));
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 1000));
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0x3dc));
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0x3b4));
  if (0xf < *(uint *)(param_1 + 900)) {
    pvVar1 = *(void **)(param_1 + 0x370);
    pvVar4 = pvVar1;
    if ((0xfff < *(uint *)(param_1 + 900) + 1) &&
       (pvVar4 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar4);
  }
  *(undefined4 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 900) = 0xf;
  param_1[0x370] = (Layer)0x0;
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0x338));
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0x32c));
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 800));
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0x314));
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0x308));
  cocos2d::Vec3::~Vec3((Vec3 *)(param_1 + 0x2fc));
  iVar2 = *(int *)(param_1 + 0x2f0);
  pLVar6 = param_1 + 0x2f0;
  local_8 = 0;
  piVar7 = *(int **)(iVar2 + 4);
  iVar5 = iVar2;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    do {
      FUN_004cb180((int *)piVar7[2]);
      piVar3 = (int *)*piVar7;
      FUN_005adb3f(piVar7);
      piVar7 = piVar3;
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
    iVar5 = *(int *)pLVar6;
  }
  *(int *)(iVar5 + 4) = iVar2;
  **(int **)pLVar6 = iVar2;
  *(int *)(*(int *)pLVar6 + 8) = iVar2;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  FUN_005adb3f(*(void **)pLVar6);
  pLVar6 = param_1 + 0x2e8;
  iVar2 = *(int *)pLVar6;
  local_8 = 1;
  iVar5 = iVar2;
  piVar7 = *(int **)(iVar2 + 4);
  if (*(char *)((int)*(int **)(iVar2 + 4) + 0xd) == '\0') {
    do {
      FUN_004cb180((int *)piVar7[2]);
      piVar3 = (int *)*piVar7;
      FUN_005adb3f(piVar7);
      piVar7 = piVar3;
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
    iVar5 = *(int *)pLVar6;
  }
  *(int *)(iVar5 + 4) = iVar2;
  **(int **)pLVar6 = iVar2;
  *(int *)(*(int *)pLVar6 + 8) = iVar2;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  FUN_005adb3f(*(void **)pLVar6);
  cocos2d::Layer::~Layer(param_1);
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_0052c340(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  byte *in_stack_ffffffc8;
  int iVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  float fVar12;
  
  FUN_00557e70(*(int *)(param_1 + 0x2e0));
  iVar4 = DAT_0065b3d4;
  *(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0x24) = 0;
  if (iVar4 != 0) {
    *(int *)(*(int *)(param_1 + 0x2e0) + 0x24) = iVar4;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x2e0) + 0x24);
  if (iVar1 != 0) {
    iVar8 = *(int *)(iVar1 + 0x40);
    uVar5 = 0;
    if (*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x3c) >> 2 != 0) {
      do {
        pbVar6 = (byte *)0x0;
        iVar4 = *(int *)(*(int *)(iVar8 + 0x3c) + uVar5 * 4);
        iVar8 = *(int *)(iVar4 + 8);
        iVar9 = *(int *)(iVar8 + 4);
        if ((iVar9 == 0xb) || (iVar9 == 9)) {
          pbVar6 = (byte *)0x1;
        }
        else if (iVar9 == 0xe) {
          pbVar6 = (byte *)0x5;
        }
        else if ((iVar9 == 1) || (iVar9 == 2)) {
          pbVar6 = (byte *)0x2;
        }
        iVar9 = *(int *)(iVar8 + 0xb4);
        if (iVar9 != 0) {
          cVar11 = *(char *)(iVar4 + 99);
          fVar12 = 1.0;
          bVar10 = 1;
          iVar8 = -1;
          in_stack_ffffffc8 = pbVar6;
          pvVar2 = (void *)FUN_00402f60();
          uVar3 = FUN_00557af0(pvVar2,in_stack_ffffffc8,iVar9,iVar8,bVar10,cVar11,fVar12);
          iVar8 = *(int *)(iVar4 + 8);
          *(undefined4 *)(iVar4 + 0x7c) = uVar3;
        }
        iVar8 = *(int *)(iVar8 + 0xb8);
        if (iVar8 != 0) {
          if ((*(char *)(iVar4 + 99) == '\0') || (*(char *)(iVar4 + 0x62) == '\0')) {
            cVar11 = '\0';
          }
          else {
            cVar11 = '\x01';
          }
          fVar12 = 1.0;
          bVar10 = 1;
          iVar9 = -1;
          pvVar2 = (void *)FUN_00402f60();
          uVar3 = FUN_00557af0(pvVar2,pbVar6,iVar8,iVar9,bVar10,cVar11,fVar12);
          *(undefined4 *)(iVar4 + 0x84) = uVar3;
          in_stack_ffffffc8 = pbVar6;
        }
        uVar5 = uVar5 + 1;
        iVar8 = *(int *)(iVar1 + 0x40);
        iVar4 = DAT_0065b3d4;
      } while (uVar5 < (uint)(*(int *)(iVar8 + 0x40) - *(int *)(iVar8 + 0x3c) >> 2));
    }
  }
  if (iVar4 != 0) {
    iVar4 = *(int *)(iVar4 + 0x254);
    bVar7 = false;
    if (iVar4 != 0) {
      bVar7 = *(int *)(iVar4 + 0x158) == 1;
    }
    if (bVar7) {
      FUN_00557af0(*(void **)(param_1 + 0x2e0),4,0x11,-1,1,'\x01',1.0);
      return;
    }
    FUN_004024e0(&stack0xffffffc8,(undefined4 *)(iVar4 + 0xa8));
    iVar4 = FUN_00557800(in_stack_ffffffc8);
    FUN_00557af0(*(void **)(param_1 + 0x2e0),4,iVar4,-1,1,'\x01',1.0);
  }
  return;
}


void __fastcall FUN_0052c500(int param_1)

{
  char cVar1;
  undefined4 *this;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 **ppuVar7;
  undefined4 **ppuVar8;
  undefined4 *puVar9;
  int extraout_EDX;
  float fVar10;
  float in_XMM1_Da;
  byte *in_stack_ffffff98;
  float local_40;
  float local_3c;
  float local_38;
  Layer *local_34;
  int local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4234;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar3 = *(int *)(param_1 + 0x29c);
  if (iVar3 == 0) {
LAB_0052cdf3:
    cVar1 = (**(code **)(**(int **)(param_1 + 0x2b0) + 0x23c))();
    if (cVar1 == '\0') goto LAB_0052ce17;
  }
  else {
    if ((iVar3 == 2) && (*(char *)((int)DAT_0065b444 + 0x73) != '\0')) {
      fVar10 = *(float *)(param_1 + 0x2ac);
    }
    else {
      fVar10 = *(float *)(param_1 + 0x2ac) - in_XMM1_Da;
      *(float *)(param_1 + 0x2ac) = fVar10;
    }
    if (fVar10 <= in_XMM1_Da) {
      if (iVar3 == 1) {
        *(undefined4 *)(param_1 + 0x29c) = 2;
        if (*(char *)(param_1 + 0x2a0) == '\0') {
          fVar10 = 1.5;
        }
        else {
          fVar10 = 1.0;
        }
        *(float *)(param_1 + 0x2ac) = fVar10 * 0.3;
        *(float *)(param_1 + 0x2a8) = fVar10 * 0.3;
        (**(code **)(**(int **)(param_1 + 0x2b0) + 0x244))();
        pvVar4 = DAT_0065b444;
        iVar3 = *(int *)(param_1 + 0x2a4);
        if (iVar3 == 1) {
          *(undefined1 *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x318) = 0;
          this = (undefined4 *)FUN_00404c20();
          pvVar4 = *(void **)((int)DAT_0065b5cc + 0xd0);
          if (this[9] == *(int *)((int)pvVar4 + 0x24)) {
            local_38 = (float)*(double *)((int)pvVar4 + 0x28);
            local_34 = (Layer *)(float)*(double *)((int)pvVar4 + 0x30);
            local_40 = (float)*(double *)(this + 10);
            fVar10 = (float)*(double *)(this + 0xc);
            local_8 = 1;
            local_3c = fVar10;
            FUN_00591010((Vec2 *)&local_40,(Vec2 *)&local_38);
            local_8 = 0xffffffff;
            local_3c = (float)(int)(fVar10 * 2.0 + 1500.0);
          }
          else {
            FUN_0050c090(pvVar4,(undefined1 *)this[8]);
            local_3c = 7.00649e-42;
          }
          FUN_00591070(&DAT_005cdc70,"Player accrued %d credits in towing fees to %s");
          FUN_0051ba50(this,(int)local_3c);
          local_34 = (Layer *)FUN_005adb0f(0xa0);
          local_30 = FUN_004398a0((int)local_34);
          iVar3 = *(int *)((int)DAT_0065b5cc + 0x124);
          puVar9 = (undefined4 *)(iVar3 + 4);
          if ((undefined4 *)(local_30 + 0x68) != puVar9) {
            if (0xf < *(uint *)(iVar3 + 0x18)) {
              puVar9 = (undefined4 *)*puVar9;
            }
            FUN_00402690((undefined4 *)(local_30 + 0x68),puVar9,*(uint *)(iVar3 + 0x14));
          }
          iVar3 = this[0xe4];
          puVar9 = (undefined4 *)(iVar3 + 0x20);
          if ((undefined4 *)(local_30 + 4) != puVar9) {
            if (0xf < *(uint *)(iVar3 + 0x34)) {
              puVar9 = (undefined4 *)*puVar9;
            }
            FUN_00402690((undefined4 *)(local_30 + 4),puVar9,*(uint *)(iVar3 + 0x30));
          }
          FUN_00402690((void *)(local_30 + 0x1c),"Towing Fees",0xb);
          local_34 = (Layer *)(this + 2);
          if (0xf < (uint)this[7]) {
            local_34 = *(Layer **)(this + 2);
          }
          piVar2 = (int *)FUN_00591e00((undefined1 *)local_2c,
                                       "%s,\n\nYour vessel has been towed by our licensed bulk hauling vessel to our nearest starbase, %s in %s.\n\nYou are being charged a fee of %d credits for this service, which must be paid before your ship will be released to you.\n\nThank you for using our service,\n%s"
                                      );
          FUN_00413230((void *)(local_30 + 0x34),piVar2);
          if (0xf < local_18) {
            pvVar4 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar4 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar4);
          }
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          FUN_00402690((void *)(local_30 + 0x4c),"Contract Complete",0x11);
          pvVar4 = DAT_0065b5cc;
          *(undefined1 *)(local_30 + 100) = 0;
          pvVar4 = *(void **)((int)pvVar4 + 300);
          piVar2 = *(int **)((int)pvVar4 + 4);
          if (*(int **)((int)pvVar4 + 8) == piVar2) {
            FUN_00414080(pvVar4,piVar2,&local_30);
          }
          else {
            *piVar2 = local_30;
            *(int *)((int)pvVar4 + 4) = *(int *)((int)pvVar4 + 4) + 4;
          }
          iVar3 = FUN_00412ea0();
          FUN_0058fc90(iVar3);
          FUN_00518870(*(int *)((int)DAT_0065b5cc + 0xd0));
          FUN_004a8850((void *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 8),
                       (float)*(double *)(this + 10),(float)*(double *)(this + 0xc));
          *(undefined4 *)(*(int *)(extraout_EDX + 0xd0) + 0x174) = 0;
          FUN_00511950(*(void **)(extraout_EDX + 0xd0),this,'\0','\0');
          FUN_00591070(&DAT_005cdc70,"Vessel %s has been towed to %s in %s.");
          *(undefined4 *)(param_1 + 0x2a4) = 0;
        }
        else if (iVar3 == 3) {
          iVar3 = *(int *)((int)DAT_0065b5cc + 0xd0);
          *(undefined1 *)((int)DAT_0065b5cc + 0xd4) =
               *(undefined1 *)(*(int *)(iVar3 + 0x254) + 0xd0);
          pvVar4 = (void *)FUN_004023e0();
          FUN_0052d950(pvVar4,iVar3);
          *(undefined4 *)(param_1 + 0x2a4) = 0;
        }
        else if (iVar3 == 4) {
          iVar3 = *(int *)((int)DAT_0065b5cc + 0xd0);
          *(undefined1 *)((int)DAT_0065b5cc + 0xd4) =
               *(undefined1 *)(*(int *)(*(int *)(iVar3 + 0x178) + 0x254) + 0xd0);
          pvVar4 = (void *)FUN_004023e0();
          FUN_0052d710(pvVar4,iVar3);
          *(undefined4 *)(param_1 + 0x2a4) = 0;
        }
        else if (iVar3 == 5) {
          iVar3 = *(int *)((int)DAT_0065b5cc + 0xd0);
          pvVar4 = (void *)FUN_004023e0();
          FUN_0052dc10(pvVar4,iVar3);
          *(undefined1 *)((int)DAT_0065b5cc + 0xd4) = 0x43;
          *(undefined4 *)(param_1 + 0x2a4) = 0;
        }
        else if (iVar3 == 6) {
          iVar3 = *(int *)((int)DAT_0065b5cc + 0xd0);
          pvVar4 = (void *)FUN_004023e0();
          FUN_00591070(&DAT_005cdc70,"Returning to player\'s own ship.");
          DAT_0065b3d4 = iVar3;
          FUN_004024e0(&stack0xffffff98,(undefined4 *)(iVar3 + 0x68));
          _DstBuf_0065b3dc = FUN_004a73f0(DAT_0065b5cc,'\0',in_stack_ffffff98);
          if (DAT_0065c25c == (Layer *)0x0) {
            local_34 = (Layer *)FUN_005adb0f(0x418);
            local_8 = 2;
            DAT_0065c25c = FUN_0052b7a0(local_34);
            local_8 = 0xffffffff;
          }
          FUN_0052c340((int)DAT_0065c25c);
          FUN_0052df00(pvVar4,*(int *)(iVar3 + 0x2ac));
          *(undefined1 *)((int)DAT_0065b5cc + 0xd4) =
               *(undefined1 *)(*(int *)(*(int *)((int)DAT_0065b5cc + 0xd0) + 0x254) + 0xd0);
          *(undefined4 *)(param_1 + 0x2a4) = 0;
        }
        else if (iVar3 == 7) {
          FUN_00591070("WORLD","Switching to main scenario now; tutorial done.");
          FUN_00402690((void *)((int)DAT_0065b5cc + 0xb4),"objectsinspace",0xe);
          pvVar4 = DAT_0065b444;
          *(undefined1 *)((int)DAT_0065b444 + 0x1c5) = 0;
          *(undefined1 *)((int)pvVar4 + 0xa4) = 0;
          *(undefined2 *)((int)pvVar4 + 0x71) = 0x100;
          *(undefined1 *)((int)pvVar4 + 0x70) = 0;
          FUN_00529a20();
          FUN_0052a5a0();
          *(undefined4 *)(param_1 + 0x2a4) = 0;
        }
        else {
          if (iVar3 == 8) {
            pvVar4 = (void *)FUN_004023e0();
            if (*(int *)((int)pvVar4 + 0x3a0) != 0) {
              FUN_00534990(*(int *)((int)pvVar4 + 0x2d4));
              *(undefined4 *)((int)pvVar4 + 0x2d0) = 0x3fcccccd;
              DAT_0065b3e8 = 0;
              FUN_00402690(&DAT_00655858,&PTR_005ce008,0);
              FUN_0052f030(pvVar4,'\x01');
              FUN_00530750(pvVar4,0xffffffff);
              FUN_0053be80(*(int *)((int)pvVar4 + 0x3a0));
              FUN_0053b6a0(*(int *)((int)pvVar4 + 0x3a0));
            }
            iVar3 = FUN_004123f0();
            *(undefined4 *)(iVar3 + 0x24) = 0;
            iVar3 = FUN_004123f0();
            *(undefined4 *)(iVar3 + 0x1c) = 0;
            iVar3 = FUN_004123f0();
            *(undefined4 *)(iVar3 + 0x20) = 0;
            iVar5 = FUN_004123f0();
            iVar3 = DAT_0065b3d4;
            *(undefined4 *)(iVar5 + 0x10) = 0;
            if (((iVar3 != 0) && (uVar6 = FUN_00403c90(iVar3), (char)uVar6 != '\0')) &&
               (*(int *)(*(int *)((int)DAT_0065b5cc + 0xcc) + 0x70) == 2)) {
              FUN_004127d0();
              FUN_004b8550();
              *(undefined4 *)(param_1 + 0x2a4) = 0;
              goto LAB_0052cd54;
            }
          }
          else {
            if (iVar3 == 0xb) {
              ppuVar8 = (undefined4 **)((int)DAT_0065b444 + 0xac);
              *(undefined4 *)((int)DAT_0065b444 + 0xa8) = 2;
              if (ppuVar8 != &DAT_006555c8) {
                ppuVar7 = &DAT_006555c8;
                if (0xf < DAT_006555dc) {
                  ppuVar7 = (undefined4 **)DAT_006555c8;
                }
                FUN_00402690(ppuVar8,ppuVar7,DAT_006555d8);
              }
              *(undefined4 *)((int)pvVar4 + 0xc4) = 2;
              if ((undefined4 **)((int)pvVar4 + 200) != &DAT_00655640) {
                ppuVar8 = &DAT_00655640;
                if (0xf < DAT_00655654) {
                  ppuVar8 = (undefined4 **)DAT_00655640;
                }
                FUN_00402690((undefined4 **)((int)pvVar4 + 200),ppuVar8,DAT_00655650);
              }
              *(undefined4 *)((int)pvVar4 + 0xe0) = 0;
              if ((undefined4 **)((int)pvVar4 + 0xe4) != &DAT_00655538) {
                ppuVar8 = &DAT_00655538;
                if (0xf < DAT_0065554c) {
                  ppuVar8 = (undefined4 **)DAT_00655538;
                }
                FUN_00402690((undefined4 **)((int)pvVar4 + 0xe4),ppuVar8,DAT_00655548);
              }
              FUN_00411310(pvVar4,1);
              *(undefined2 *)((int)pvVar4 + 0x11b) = 0x100;
              *(undefined1 *)((int)pvVar4 + 0x11d) = 0;
              *(undefined2 *)((int)pvVar4 + 0x118) = 0;
              *(undefined1 *)((int)pvVar4 + 0x11a) = 0;
              *(undefined1 *)((int)pvVar4 + 0xa4) = 0;
            }
            else {
              if (iVar3 != 10) goto LAB_0052cccc;
              *(undefined4 *)((int)DAT_0065b5cc + 0x154) = 9;
            }
            pvVar4 = (void *)FUN_004023e0();
            FUN_0052f180(pvVar4);
            iVar3 = FUN_004023e0();
            FUN_0052e640(iVar3);
          }
LAB_0052cccc:
          *(undefined4 *)(param_1 + 0x2a4) = 0;
        }
      }
      else {
        if (iVar3 == 2) {
          *(undefined4 *)(param_1 + 0x29c) = 3;
          if (*(char *)(param_1 + 0x2a0) == '\0') {
            fVar10 = 1.5;
          }
          else {
            fVar10 = 1.0;
          }
          *(float *)(param_1 + 0x2ac) = fVar10 * 0.4;
          *(float *)(param_1 + 0x2a8) = fVar10 * 0.4;
        }
        else {
          if (iVar3 != 3) goto LAB_0052cd54;
          *(undefined4 *)(param_1 + 0x29c) = 0;
          *(undefined4 *)(param_1 + 0x2ac) = 0xbf800000;
          *(undefined4 *)(param_1 + 0x2a8) = 0xbf800000;
        }
        (**(code **)(**(int **)(param_1 + 0x2b0) + 0x244))();
      }
    }
LAB_0052cd54:
    iVar3 = *(int *)(param_1 + 0x29c);
    if (iVar3 == 3) {
      (**(code **)(**(int **)(param_1 + 0x2b0) + 0x244))();
      goto LAB_0052ce17;
    }
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        (**(code **)(**(int **)(param_1 + 0x2b0) + 0x244))();
        goto LAB_0052ce17;
      }
      goto LAB_0052cdf3;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x2b0) + 0x23c))();
    if (cVar1 == -0x40) goto LAB_0052ce17;
  }
  (**(code **)(**(int **)(param_1 + 0x2b0) + 0x244))();
LAB_0052ce17:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0052ce60(void *this,float param_1)

{
  int iVar1;
  int iVar2;
  BaseLight *pBVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  char cVar7;
  undefined4 *puVar8;
  void *pvVar9;
  Node *pNVar10;
  int iVar11;
  HCURSOR pHVar12;
  uint uVar13;
  float fVar14;
  ulonglong in_stack_ffffffc0;
  char *pcVar15;
  undefined4 uVar16;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar9 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4268;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0.0 < *(float *)((int)this + 0x2b4)) {
    fVar14 = *(float *)((int)this + 0x2b4) - param_1;
    *(float *)((int)this + 0x2b4) = fVar14;
    if (0.0 < fVar14) {
      ExceptionList = pvVar9;
      return;
    }
    *(undefined4 *)((int)this + 0x2b4) = 0xbf800000;
    FUN_00591070(&DAT_005cdc70,"Displaying menu...");
    FUN_00402690((void *)(DAT_0065b5cc + 0xb4),"mainmenu",8);
    if (DAT_0065c300 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)FUN_005adb0f(0x10);
      DAT_0065c300 = puVar8;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
    }
    FUN_0052a5a0();
    *(undefined1 *)((int)DAT_0065b444 + 0x73) = 0;
    *(undefined4 *)((int)this + 0x294) = 0;
    *(undefined4 *)((int)this + 0x29c) = 3;
    ExceptionList = local_10;
    return;
  }
  if (*(char *)((int)DAT_0065b444 + 0x1c6) != '\0') {
    *(undefined1 *)((int)DAT_0065b444 + 0x1c6) = 0;
    FUN_00529a20();
    FUN_0052a5a0();
    DAT_00655098 = 2;
    DAT_00655094 = 2;
    FUN_0052b100(*(int *)(DAT_0065b5cc + 0xd0),0.0);
    ExceptionList = local_10;
    return;
  }
  if ((((*(int *)(DAT_0065b5cc + 0xd0) == 0) || (*DAT_0065b444 == 2)) || (*DAT_0065b444 == 3)) &&
     (*(int *)((int)this + 0x29c) == 0)) {
    if (*DAT_0065b444 == 2) {
      pcVar15 = "Ending game. Player was destroyed.";
LAB_0052d012:
      FUN_00591070(&DAT_005cdc70,pcVar15);
    }
    else if (*DAT_0065b444 == 3) {
      if (*(char *)(DAT_0065b5cc + 0x170) == '\0') {
        pcVar15 = "Ending game. Scenario lost.";
      }
      else {
        pcVar15 = "Ending game. Scenario won.";
      }
      goto LAB_0052d012;
    }
    piVar6 = DAT_0065b444;
    *(undefined4 *)((int)this + 0x2a4) = 10;
    if (*piVar6 == 2) {
      in_stack_ffffffc0 = in_stack_ffffffc0 & 0xffffffffffffff00;
      FUN_00402690(&stack0xffffffc0,&PTR_005ce008,0);
      FUN_00531140(this,(byte *)in_stack_ffffffc0);
      uVar16 = 0;
      *(undefined2 *)((int)this + 0x2a0) = 1;
      *(undefined4 *)((int)this + 0x29c) = 1;
      *(undefined4 *)((int)this + 0x2ac) = 0x40c00000;
      *(undefined4 *)((int)this + 0x2a8) = 0x40c00000;
      pvVar9 = (void *)FUN_00402f60();
      FUN_00558150(pvVar9,uVar16);
      pcVar15 = (char *)FUN_00402f60();
      if (*pcVar15 != '\0') {
        in_stack_ffffffc0 = 0x3000000006;
        FUN_00557af0(pcVar15,6,0x30,-1,0,'\x01',1.0);
      }
    }
    else {
      *(undefined2 *)((int)this + 0x2a0) = 0x101;
      *(undefined4 *)((int)this + 0x29c) = 1;
      *(undefined4 *)((int)this + 0x2ac) = 0x3f19999a;
      *(undefined4 *)((int)this + 0x2a8) = 0x3f19999a;
    }
  }
  if ((0.0 < *(float *)((int)this + 0x3ac)) &&
     (fVar14 = *(float *)((int)this + 0x3ac) - param_1, *(float *)((int)this + 0x3ac) = fVar14,
     fVar14 <= 0.0)) {
    *(undefined4 *)((int)this + 0x3ac) = 0;
  }
  if ((0.0 < *(float *)((int)this + 0x2d0)) &&
     (fVar14 = *(float *)((int)this + 0x2d0) - param_1, *(float *)((int)this + 0x2d0) = fVar14,
     fVar14 < 0.0)) {
    *(undefined4 *)((int)this + 0x2d0) = 0;
  }
  FUN_0052aa50(*(int *)((int)this + 0x3a8));
  pNVar10 = FUN_00412a50();
  if ((pNVar10[0x278] == (Node)0x0) && (pNVar10 = FUN_00412990(), pNVar10[0x285] == (Node)0x0)) {
    if ((*(int *)(DAT_0065b5cc + 0xd8) != 0) &&
       ((DAT_0065b39a != '\0' && (pcVar15 = (char *)FUN_004029a0(), *pcVar15 != '\0')))) {
      iVar11 = FUN_004029a0();
      uVar13 = 0;
      if (*(int *)(iVar11 + 0xc) - *(int *)(iVar11 + 8) >> 2 != 0) {
        do {
          FUN_004170d0(*(int **)(*(int *)(iVar11 + 8) + uVar13 * 4));
          uVar13 = uVar13 + 1;
        } while (uVar13 < (uint)(*(int *)(iVar11 + 0xc) - *(int *)(iVar11 + 8) >> 2));
      }
    }
    if ((*(float *)((int)this + 0x3d8) <= 0.0) &&
       (iVar11 = *(int *)(DAT_0065b5cc + 0xd0), iVar11 != 0)) {
      iVar1 = *(int *)(*(int *)(iVar11 + 0x40) + 0x10);
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x62) == '\0')) {
        if (((iVar11 == 0) || (iVar1 = *(int *)(*(int *)(iVar11 + 0x40) + 0x18), iVar1 == 0)) ||
           (*(char *)(iVar1 + 0x62) == '\0')) goto LAB_0052d257;
        FUN_004024e0(&stack0xffffffc0,(undefined4 *)(iVar11 + 0x238));
      }
      else {
        FUN_004024e0(&stack0xffffffc0,(undefined4 *)(iVar11 + 0x238));
      }
      FUN_00531140(this,(byte *)in_stack_ffffffc0);
    }
  }
LAB_0052d257:
  bVar5 = true;
  if ((*(int **)(DAT_0065b5cc + 0xd0) == (int *)0x0) ||
     (cVar7 = (**(code **)(**(int **)(DAT_0065b5cc + 0xd0) + 0x20))(), cVar7 != '\0')) {
    bVar5 = false;
  }
  else {
    FUN_005270e0(*(int **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224));
  }
  if (*(int *)((int)this + 0x2d4) != 0) {
    FUN_00534e80(*(int *)((int)this + 0x2d4));
  }
  if (*(undefined4 **)((int)this + 0x3a0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x3a0))();
    iVar11 = FUN_004023e0();
    if ((*(int *)(iVar11 + 0x3a0) == 0) || (*(char *)(iVar11 + 0x39d) == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (iVar11 = *(int *)((int)this + 0x3a0), *(int *)(iVar11 + 0x3c) == 4)) {
      FUN_00555630(*(void **)(iVar11 + 0x624 + *(int *)(iVar11 + 0x388) * 4));
    }
  }
  if (*(undefined4 **)((int)this + 0x3a4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x3a4))();
  }
  FUN_005314b0((int)this);
  if (-1.0 < *(float *)((int)this + 0x294)) {
    fVar14 = *(float *)((int)this + 0x294) - param_1;
    *(float *)((int)this + 0x294) = fVar14;
    if (0.0 < fVar14) {
      fVar14 = 1.0 - fVar14 / *(float *)((int)this + 0x298);
      if ((fVar14 <= 1.0) && (0.0 <= fVar14)) {
        iVar11 = *(int *)((int)this + 0x2d4);
        uVar13 = 0;
        if (*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2 != 0) {
          do {
            iVar1 = *(int *)(*(int *)(iVar11 + 0x90) + uVar13 * 4);
            iVar2 = *(int *)(iVar1 + 0x3c);
            if (((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 2)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              if (*(BaseLight **)(iVar1 + 0x3d8) != (BaseLight *)0x0) {
                cocos2d::BaseLight::setIntensity
                          (*(BaseLight **)(iVar1 + 0x3d8),*(float *)(iVar1 + 0x3ac) * fVar14);
                iVar11 = *(int *)((int)this + 0x2d4);
              }
              iVar1 = *(int *)(*(int *)(iVar11 + 0x90) + uVar13 * 4);
              pBVar3 = *(BaseLight **)(iVar1 + 0x3d4);
              if (pBVar3 != (BaseLight *)0x0) {
                cocos2d::BaseLight::setIntensity(pBVar3,*(float *)(iVar1 + 0x3ac) * fVar14);
                iVar11 = *(int *)((int)this + 0x2d4);
              }
              iVar1 = *(int *)(*(int *)(iVar11 + 0x90) + uVar13 * 4);
              pBVar3 = *(BaseLight **)(iVar1 + 0x3d0);
              if (pBVar3 != (BaseLight *)0x0) {
                cocos2d::BaseLight::setIntensity(pBVar3,*(float *)(iVar1 + 0x3ac) * fVar14);
                iVar11 = *(int *)((int)this + 0x2d4);
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < (uint)(*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2));
        }
        if (*(BaseLight **)(iVar11 + 0x9c) != (BaseLight *)0x0) {
          cocos2d::BaseLight::setIntensity
                    (*(BaseLight **)(iVar11 + 0x9c),*(float *)(iVar11 + 0x40) * fVar14);
        }
        FUN_00402f60();
      }
    }
    else {
      *(undefined4 *)((int)this + 0x294) = 0xbf800000;
    }
  }
  FUN_0052c500((int)this);
  pHVar12 = GetCursor();
  if (pHVar12 != (HCURSOR)0x0) {
    ShowCursor(0);
  }
  if ((*(float *)((int)this + 0x38c) == *(float *)((int)this + 0x394)) &&
     (*(float *)((int)this + 0x390) == *(float *)((int)this + 0x398))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    *(undefined4 *)((int)this + 0x388) = 0;
    fVar14 = 0.0;
  }
  else {
    fVar14 = *(float *)((int)this + 0x388) + param_1;
    *(float *)((int)this + 0x388) = fVar14;
  }
  if ((fVar14 <= 1.0) || (DAT_0065506b == '\0')) {
    if (*(int **)((int)this + 0x368) == (int *)0x0) goto LAB_0052d580;
    (**(code **)(**(int **)((int)this + 0x368) + 0xb4))();
  }
  else {
    if (*(int **)((int)this + 0x368) == (int *)0x0) goto LAB_0052d580;
    (**(code **)(**(int **)((int)this + 0x368) + 0xb4))();
  }
  (**(code **)(**(int **)((int)this + 0x36c) + 0xb4))();
LAB_0052d580:
  *(undefined4 *)((int)this + 0x38c) = *(undefined4 *)((int)this + 0x394);
  *(undefined4 *)((int)this + 0x390) = *(undefined4 *)((int)this + 0x398);
  if (*(int *)((int)this + 0x3b0) == -1) {
    if ((*(float *)((int)this + 0x2d0) == 0.0) &&
       (uVar16 = FUN_00532810((int)this), (char)uVar16 != '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (uVar16 = FUN_00532810((int)this), (char)uVar16 != '\0')) {
      iVar11 = *(int *)((int)this + 0x2d4);
      uVar13 = 0;
      if (*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2 != 0) {
        do {
          iVar11 = *(int *)(*(int *)(iVar11 + 0x90) + uVar13 * 4);
          iVar1 = *(int *)(iVar11 + 0x3c);
          if ((iVar1 == 5) || (iVar1 == 6)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if ((bVar4) && (iVar11 = *(int *)(iVar11 + 0x100), iVar11 != 0)) {
            FUN_004024e0(&stack0xffffffc0,(undefined4 *)(*(int *)(iVar11 + 0x1c) + 0xf8));
            local_8 = 0;
            puVar8 = FUN_00412870();
            local_8 = 0xffffffff;
            iVar11 = FUN_004390e0(puVar8,(byte *)in_stack_ffffffc0);
            if (iVar11 != -1) {
              FUN_00402690((void *)(*(int *)(*(int *)(*(int *)((int)this + 0x2d4) + 0x90) +
                                            uVar13 * 4) + 200),&PTR_005ce008,0);
              FUN_00530750(this,*(uint *)(*(int *)(*(int *)(*(int *)((int)this + 0x2d4) + 0x90) +
                                                  uVar13 * 4) + 900));
            }
          }
          iVar11 = *(int *)((int)this + 0x2d4);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (uint)(*(int *)(iVar11 + 0x94) - *(int *)(iVar11 + 0x90) >> 2));
      }
    }
  }
  if ((bVar5) && (*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x374) != 0)) {
    FUN_0052f2c0(this);
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0052d710(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  char ****ppppcVar4;
  char ****ppppcVar5;
  byte *pbVar6;
  byte *in_stack_ffffff94;
  undefined1 *local_48;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005c42a8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)(param_1 + 0x178) != 0) && (*(char *)(param_1 + 0x280) == '\0')) &&
     (*(char *)(param_1 + 0x281) == '\0')) {
    FUN_00591070(&DAT_005cdc70,"Boarded docked platform/craft.");
    DAT_0065b3d4 = *(int *)(param_1 + 0x178);
    FUN_004024e0(&stack0xffffff94,(undefined4 *)(DAT_0065b3d4 + 0x68));
    _DstBuf_0065b3dc = FUN_004a73f0(DAT_0065b5cc,'\0',in_stack_ffffff94);
    FUN_0052df00(this,*(int *)(*(int *)(param_1 + 0x178) + 0x2ac));
    FUN_00591e00((undefined1 *)local_2c,"aboard_%s");
    local_8 = 0;
    ppppcVar5 = local_2c;
    if (0xf < local_18) {
      ppppcVar5 = (char ****)local_2c[0];
    }
    ppppcVar4 = local_2c;
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
    }
    pbVar6 = (byte *)0x52d80e;
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar4,(char *)((int)ppppcVar5 + local_1c),
                 (undefined1 *)ppppcVar5);
    local_48 = &stack0xffffff90;
    FUN_004024e0(&stack0xffffff90,local_2c);
    local_8._0_1_ = 1;
    puVar1 = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a0ee0(puVar1,pbVar6);
    piVar2 = (int *)FUN_00591e00((undefined1 *)local_44,"travelling_to_or_at_%s");
    FUN_00413230(local_2c,piVar2);
    if (0xf < local_30) {
      pvVar3 = local_44[0];
      if ((0xfff < local_30 + 1) &&
         (pvVar3 = *(void **)((int)local_44[0] + -4),
         0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar3)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar3);
    }
    ppppcVar5 = local_2c;
    if (0xf < local_18) {
      ppppcVar5 = (char ****)local_2c[0];
    }
    ppppcVar4 = local_2c;
    if (0xf < local_18) {
      ppppcVar4 = (char ****)local_2c[0];
    }
    FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar4,(char *)((int)ppppcVar5 + local_1c),
                 (undefined1 *)ppppcVar5);
    local_48 = &stack0xffffff90;
    FUN_004024e0(&stack0xffffff90,local_2c);
    local_8._0_1_ = 2;
    puVar1 = FUN_00412df0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004a0ee0(puVar1,pbVar6);
    if (0xf < local_18) {
      ppppcVar5 = (char ****)local_2c[0];
      if ((0xfff < local_18 + 1) &&
         (ppppcVar5 = (char ****)local_2c[0][-1],
         (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar5)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(ppppcVar5);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0052d950(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 ****ppppuVar3;
  Layer *pLVar4;
  int iVar5;
  void *pvVar6;
  undefined4 ****ppppuVar7;
  int iVar8;
  byte *in_stack_ffffff80;
  byte *in_stack_ffffff84;
  void *local_44 [5];
  uint local_30;
  undefined4 ***local_2c;
  undefined4 **ppuStack_28;
  undefined4 **ppuStack_24;
  undefined4 **ppuStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c42fa;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00591070(&DAT_005cdc70,"Returning to player\'s own ship.");
  FUN_00591e00((undefined1 *)&local_2c,"aboard_%s");
  local_8 = 0;
  ppppuVar3 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppuVar3 = (undefined4 ****)local_2c;
  }
  ppppuVar7 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppuVar7 = (undefined4 ****)local_2c;
  }
  iVar8 = 0;
  iVar5 = ((int)local_1c + (int)ppppuVar3) - (int)ppppuVar7;
  if ((undefined4 ****)((int)local_1c + (int)ppppuVar3) < ppppuVar7) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    do {
      iVar1 = tolower((int)*(char *)(iVar8 + (int)ppppuVar7));
      *(char *)(iVar8 + (int)ppppuVar3) = (char)iVar1;
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar5);
  }
  FUN_004024e0(&stack0xffffff80,&local_2c);
  local_8._0_1_ = 1;
  puVar2 = FUN_00412df0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004a0ee0(puVar2,in_stack_ffffff80);
  ppppuVar3 = (undefined4 ****)FUN_00591e00((undefined1 *)local_44,"travelling_to_or_at_%s");
  if (&local_2c != ppppuVar3) {
    FUN_00401b20((int *)&local_2c);
    local_2c = *ppppuVar3;
    ppuStack_28 = ppppuVar3[1];
    ppuStack_24 = ppppuVar3[2];
    ppuStack_20 = ppppuVar3[3];
    local_1c = *(undefined8 *)(ppppuVar3 + 4);
    ppppuVar3[4] = (undefined4 ***)0x0;
    ppppuVar3[5] = (undefined4 ***)0xf;
    *(undefined1 *)ppppuVar3 = 0;
  }
  if (0xf < local_30) {
    pvVar6 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar6 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar6)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar6);
  }
  ppppuVar3 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppuVar3 = (undefined4 ****)local_2c;
  }
  ppppuVar7 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppuVar7 = (undefined4 ****)local_2c;
  }
  iVar8 = 0;
  iVar5 = ((int)local_1c + (int)ppppuVar3) - (int)ppppuVar7;
  if ((undefined4 ****)((int)local_1c + (int)ppppuVar3) < ppppuVar7) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    do {
      iVar1 = tolower((int)*(char *)(iVar8 + (int)ppppuVar7));
      *(char *)(iVar8 + (int)ppppuVar3) = (char)iVar1;
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar5);
  }
  FUN_004024e0(&stack0xffffff80,&local_2c);
  local_8._0_1_ = 2;
  puVar2 = FUN_00412df0();
  local_8._0_1_ = 0;
  FUN_004a0ee0(puVar2,in_stack_ffffff80);
  DAT_0065b3d4 = param_1;
  FUN_004024e0(&stack0xffffff84,(undefined4 *)(param_1 + 0x68));
  _DstBuf_0065b3dc = FUN_004a73f0(DAT_0065b5cc,'\0',in_stack_ffffff84);
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar4 = (Layer *)FUN_005adb0f(0x418);
    local_8._0_1_ = 3;
    DAT_0065c25c = FUN_0052b7a0(pLVar4);
    local_8._0_1_ = 0;
  }
  FUN_0052c340((int)DAT_0065c25c);
  FUN_0052df00(this,*(int *)(param_1 + 0x2ac));
  if (0xf < local_1c._4_4_) {
    ppppuVar3 = (undefined4 ****)local_2c;
    if ((0xfff < local_1c._4_4_ + 1) &&
       (ppppuVar3 = (undefined4 ****)local_2c[-1],
       0x1f < (uint)((int)local_2c + (-4 - (int)ppppuVar3)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_0052dc10(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 extraout_ECX;
  uint in_stack_ffffff8c;
  void *pvVar4;
  undefined1 local_5c [12];
  undefined4 uStack_50;
  byte *in_stack_ffffffc0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4338;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)(param_1 + 0x174);
  if (iVar2 != 0) {
    pbVar3 = (byte *)(iVar2 + 200);
    if (0xf < *(uint *)(iVar2 + 0xdc)) {
      pbVar3 = *(byte **)(iVar2 + 200);
    }
    uVar1 = FUN_004031f0(pbVar3,*(uint *)(iVar2 + 0xd8),(byte *)&PTR_005ce008,0);
    if ((((char)uVar1 == '\0') && (*(char *)(param_1 + 0x280) == '\0')) &&
       (*(char *)(param_1 + 0x281) == '\0')) {
      if (*(int *)(iVar2 + 0x60) == 4) {
        in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
        FUN_00402690(&stack0xffffffc0,"derelicts_boarded",0x11);
        local_8 = 0;
        FUN_00412770();
        local_8 = 0xffffffff;
        FUN_0051e750(extraout_ECX,in_stack_ffffffc0);
        uStack_50 = 0x52dd01;
        FUN_00402690(&stack0xffffffbc,&PTR_005ce008,0);
        local_8 = 1;
        local_5c[0] = 0;
        FUN_00402690(local_5c,"derelicts_boarded",0x11);
        local_8 = CONCAT31(local_8._1_3_,2);
        pvVar4 = (void *)(in_stack_ffffff8c & 0xffffff00);
        FUN_00402690(&stack0xffffff8c,&DAT_0060d818,4);
        local_8 = 0xffffffff;
        FUN_00401a50(pvVar4);
      }
      FUN_00591070(&DAT_005cdc70,"Boarded moored structure.");
      DAT_0065b3d4 = 0;
      FUN_004024e0(&stack0xffffffc0,(undefined4 *)(*(int *)(param_1 + 0x174) + 200));
      _DstBuf_0065b3dc = FUN_004a73f0(DAT_0065b5cc,'\0',in_stack_ffffffc0);
      iVar2 = FUN_004023e0();
      FUN_0052c340(iVar2);
      FUN_0052df00(this,0);
    }
  }
  ExceptionList = local_10;
  return;
}


void FUN_0052ddd0(int param_1,byte param_2)

{
  void *in_stack_ffffffdc;
  
  *(byte *)(param_1 + 0x280) = param_2;
  *(byte *)(param_1 + 0x281) = param_2;
  if ((*(char *)(param_1 + 0x234) != '\0') && (*(int *)(DAT_0065b5cc + 0xd0) == param_1)) {
    FUN_004024e0(&stack0xffffffdc,(undefined4 *)(param_1 + 0x68));
    FUN_004a79d0(1,param_2,in_stack_ffffffdc);
    FUN_004024e0(&stack0xffffffdc,(undefined4 *)(param_1 + 0x68));
    FUN_004a79d0(2,param_2,in_stack_ffffffdc);
  }
  return;
}


void __thiscall FUN_0052de30(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0x3b0) == -1) && (*(float *)((int)this + 0x3ac) <= 0.0)) {
    *(undefined4 *)((int)this + 0x3ac) = 0x3dcccccd;
    iVar2 = *(int *)(*(int *)((int)this + 0x2d4) + 0x1c);
    iVar1 = param_1 + iVar2;
    iVar3 = 0;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    if ((iVar3 != iVar2) && (iVar2 = FUN_00558a80(_DstBuf_0065b3dc,iVar3), iVar2 != 0)) {
      FUN_0052df00(this,iVar3);
    }
  }
  return;
}


void __fastcall FUN_0052de90(int param_1)

{
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_00534d80(*(int *)(param_1 + 0x2d4));
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  if (*(int *)(param_1 + 0x354) != 0) {
    *(undefined4 *)(param_1 + 0x354) = 0;
  }
  if (*(int *)(param_1 + 0x34c) != 0) {
    *(undefined4 *)(param_1 + 0x34c) = 0;
  }
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  if (*(int *)(param_1 + 0x350) != 0) {
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __thiscall FUN_0052df00(void *this,int param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  Vec3 local_3c [20];
  undefined8 local_28;
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4369;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_0052de90((int)this);
  iVar6 = FUN_00558a80(_DstBuf_0065b3dc,param_1);
  *(int *)((int)this + 0x2d4) = iVar6;
  FUN_00591070(&DAT_005cdc70,"Displaying room %s");
  FUN_00534a40(*(void **)((int)this + 0x2d4),this);
  cocos2d::Vec3::Vec3(local_3c,(Vec3 *)(*(int *)((int)this + 0x2d4) + 0x74));
  local_8 = 0;
  uVar12 = DAT_006550a8;
  cocos2d::Vec3::operator*(local_3c,(float)&local_28);
  local_8 = 0xffffffff;
  cocos2d::Vec3::~Vec3(local_3c);
  *(undefined8 *)((int)this + 0x2fc) = local_28;
  *(undefined4 *)((int)this + 0x304) = local_20;
  cocos2d::Vec3::~Vec3((Vec3 *)&local_28);
  iVar6 = DAT_0065b3d4;
  pvVar2 = *(void **)((int)this + 0x2d4);
  *(undefined8 *)((int)this + 0x308) = *(undefined8 *)((int)pvVar2 + 0x80);
  *(undefined4 *)((int)this + 0x310) = *(undefined4 *)((int)pvVar2 + 0x88);
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0xffffffff;
  if ((iVar6 == 0) || (*(char *)(iVar6 + 0xe4) == '\0')) {
    *(undefined2 *)((int)this + 0x3cf) = *(undefined2 *)((int)pvVar2 + 0x8c);
    *(undefined1 *)((int)this + 0x3d1) = *(undefined1 *)((int)pvVar2 + 0x8e);
    *(undefined2 *)((int)this + 0x3cc) = *(undefined2 *)((int)pvVar2 + 0x8c);
    uVar5 = *(undefined1 *)((int)pvVar2 + 0x8e);
  }
  else {
    iVar9 = *(int *)(iVar6 + 0x254);
    *(undefined2 *)((int)this + 0x3cf) = *(undefined2 *)(iVar9 + 0xdc);
    *(undefined1 *)((int)this + 0x3d1) = *(undefined1 *)(iVar9 + 0xde);
    iVar6 = *(int *)(iVar6 + 0x254);
    *(undefined2 *)((int)this + 0x3cc) = *(undefined2 *)(iVar6 + 0xdc);
    uVar5 = *(undefined1 *)(iVar6 + 0xde);
  }
  iVar6 = (int)this + 0x3cf;
  *(undefined1 *)((int)this + 0x3ce) = uVar5;
  if (*(int *)((int)pvVar2 + 0x38) == -1) {
    uVar7 = 1;
  }
  else {
    *(int *)((int)this + 0x348) = *(int *)((int)pvVar2 + 0x38);
    uVar7 = FUN_00535280(pvVar2,*(int *)((int)pvVar2 + 0x38));
    *(undefined4 *)((int)this + 0x350) = uVar7;
    uVar7 = FUN_00535230(pvVar2,*(int *)((int)pvVar2 + 0x38));
    *(undefined4 *)((int)this + 0x354) = uVar7;
    FUN_005273a0(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224));
    iVar9 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
    *(undefined4 *)(iVar9 + 0x58) = *(undefined4 *)((int)this + 0x354);
    if (*(int *)(iVar9 + 0x10) != 0) {
      FUN_005273a0(iVar9);
    }
    *(undefined4 *)(iVar9 + 0x58) = 0;
    uVar7 = 0;
  }
  (**(code **)(**(int **)((int)this + 0x364) + 0xb4))(uVar7,uVar12);
  iVar9 = DAT_0065b5cc;
  pvVar2 = *(void **)((int)this + 0x2d4);
  if ((*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224) + 0x58) == 0) &&
     (*(int *)((int)pvVar2 + 0x3c) != -1)) {
    iVar8 = FUN_005352e0(pvVar2,*(int *)((int)pvVar2 + 0x3c));
    FUN_0052f510(this,iVar8);
    iVar9 = *(int *)(*(int *)(iVar9 + 0xd0) + 0x224);
    *(undefined4 *)(iVar9 + 0x58) = *(undefined4 *)((int)this + 0x354);
    if (*(int *)(iVar9 + 0x10) != 0) {
      FUN_005273a0(iVar9);
    }
    *(undefined4 *)(iVar9 + 0x58) = 0;
  }
  else {
    iVar9 = FUN_005352e0(pvVar2,*(int *)((int)this + 0x348));
    FUN_0052f510(this,iVar9);
  }
  FUN_00558150(*(void **)((int)this + 0x2e0),*(undefined4 *)((int)this + 0x2d4));
  iVar9 = *(int *)((int)this + 0x3a0);
  *(undefined4 *)(iVar9 + 0x3f0) = *(undefined4 *)((int)this + 0x2d4);
  if (*(int *)(iVar9 + 0x3dc) == 0) {
    FUN_00538bd0(*(void **)((int)this + 0x3a0),*(int **)((int)this + 0x404));
    iVar9 = *(int *)((int)this + 0x3a0);
    if (*(int *)(iVar9 + 0x3c) == 4) {
      FUN_00555630(*(void **)(iVar9 + 0x624 + *(int *)(iVar9 + 0x388) * 4));
    }
  }
  else {
    FUN_00538940((int)*(void **)((int)this + 0x3a0));
  }
  if (*(int *)((int)this + 0x3a4) == 0) {
    _DAT_000003f0 = *(undefined4 *)((int)this + 0x2d4);
    FUN_00538bd0(*(void **)((int)this + 0x3a4),this);
  }
  iVar9 = *(int *)(DAT_0065b5cc + 0xd0);
  local_1c = (int *)iVar9;
  iVar8 = FUN_004023e0();
  piVar11 = local_1c;
  if ((*(char *)(iVar9 + 0x234) != '\0') && (*(int *)(DAT_0065b5cc + 0xd0) == iVar9)) {
    iVar9 = *(int *)(iVar8 + 0x2d4);
    uVar10 = 0;
    local_14 = iVar8;
    if (*(int *)(iVar9 + 0x94) - *(int *)(iVar9 + 0x90) >> 2 != 0) {
      do {
        iVar9 = *(int *)(*(int *)(iVar9 + 0x90) + uVar10 * 4);
        iVar3 = *(int *)(iVar9 + 0x31c);
        if (iVar3 == 1) {
          cVar1 = *(char *)((int)piVar11 + 0x280);
LAB_0052e29a:
          *(bool *)(iVar9 + 0x34c) = cVar1 == '\0';
          FUN_0053ba90(*(int *)(*(int *)(*(int *)(iVar8 + 0x2d4) + 0x90) + uVar10 * 4));
        }
        else if (iVar3 == 2) {
          cVar1 = *(char *)((int)piVar11 + 0x281);
          goto LAB_0052e29a;
        }
        iVar9 = *(int *)(iVar8 + 0x2d4);
        uVar10 = uVar10 + 1;
        this = local_18;
      } while (uVar10 < (uint)(*(int *)(iVar9 + 0x94) - *(int *)(iVar9 + 0x90) >> 2));
    }
  }
  *(undefined4 *)((int)this + 0x2d0) = 0x3fcccccd;
  local_14 = 0;
  piVar11 = *(int **)(*(int *)((int)this + 0x2d4) + 0x90);
  piVar4 = *(int **)(*(int *)((int)this + 0x2d4) + 0x94);
  uVar10 = (uint)((int)piVar4 + (3 - (int)piVar11)) >> 2;
  if (piVar4 < piVar11) {
    uVar10 = 0;
  }
  local_1c = piVar11;
  if (uVar10 != 0) {
    do {
      iVar9 = *piVar11;
      iVar8 = *(int *)(iVar9 + 0x3c);
      if ((((iVar8 == 3) || (iVar8 == 1)) || (iVar8 == 2)) && (*(char *)(iVar9 + 0x380) == '\0')) {
        if (*(int **)(iVar9 + 0x3d0) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + 0x3d0) + 0x25c))(iVar6);
        }
        if (*(int **)(iVar9 + 0x3d8) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + 0x3d8) + 0x25c))(iVar6);
        }
        if (*(int **)(iVar9 + 0x3d4) != (int *)0x0) {
          (**(code **)(**(int **)(iVar9 + 0x3d4) + 0x25c))(iVar6);
        }
      }
      piVar11 = piVar11 + 1;
      local_14 = local_14 + 1;
      this = local_18;
    } while (local_14 != uVar10);
  }
  iVar9 = *(int *)((int)this + 0x3a4);
  if (iVar9 != 0) {
    if (*(int **)(iVar9 + 0x3d0) != (int *)0x0) {
      (**(code **)(**(int **)(iVar9 + 0x3d0) + 0x25c))(iVar6);
      iVar9 = *(int *)((int)this + 0x3a4);
    }
    if (*(int **)(iVar9 + 0x3d8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar9 + 0x3d8) + 0x25c))(iVar6);
      iVar9 = *(int *)((int)this + 0x3a4);
    }
    if (*(int **)(iVar9 + 0x3d4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar9 + 0x3d4) + 0x25c))(iVar6);
    }
  }
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0052e3f0(void *this,int param_1)

{
  Layer *pLVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  Layer *pLVar5;
  Node *pNVar6;
  
  if (*(char *)(DAT_0065b444 + 0x70) == '\0') {
    pNVar6 = FUN_00412a50();
    if (((pNVar6[0x278] == (Node)0x0) && (pNVar6 = FUN_00412990(), pNVar6[0x285] == (Node)0x0)) &&
       (*(int *)((int)this + 0x29c) == 0)) {
      if ((param_1 == 0xc) || (param_1 == 0xd)) {
        *(undefined1 *)((int)this + 0x2f8) = 1;
      }
      piVar3 = *(int **)((int)this + 0x350);
      if ((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 7) != '\0')) {
                    // WARNING: Could not recover jumptable at 0x0052e583. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar3 + 0x1c))();
        return;
      }
    }
  }
  else {
    pLVar5 = FUN_00403030();
    if (((param_1 == 0x1c) || (param_1 == 0x25)) || (param_1 == 0x92)) {
      iVar2 = *(int *)(pLVar5 + 0x290);
      if (iVar2 != 0) {
        pLVar1 = pLVar5 + 0x298;
        *(int *)pLVar1 = *(int *)pLVar1 + -1;
        if (*(int *)pLVar1 < 0) {
          *(int *)(pLVar5 + 0x298) = (*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2) + -1;
          return;
        }
      }
    }
    else if (((param_1 == 0x1d) || (param_1 == 0x2b)) || (param_1 == 0x8e)) {
      iVar2 = *(int *)(pLVar5 + 0x290);
      if ((iVar2 != 0) &&
         (*(int *)(pLVar5 + 0x298) = *(int *)(pLVar5 + 0x298) + 1,
         (uint)(*(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c) >> 2) <= *(uint *)(pLVar5 + 0x298)))
      {
        *(undefined4 *)(pLVar5 + 0x298) = 0;
        return;
      }
    }
    else if ((((param_1 == 0x3b) || (param_1 == 0xa4)) || (param_1 == 10)) || (param_1 == 0x23)) {
      iVar2 = *(int *)(*(int *)(*(int *)(pLVar5 + 0x290) + 0x1c) + *(int *)(pLVar5 + 0x298) * 4);
      if (((*(int *)(iVar2 + 0x6c) != 0) && (*(char *)(iVar2 + 0x74) != '\0')) &&
         (cVar4 = FUN_00534400(iVar2 + 0x48), cVar4 == '\0')) {
        return;
      }
      iVar2 = *(int *)(*(int *)(*(int *)(pLVar5 + 0x290) + 0x1c) + *(int *)(pLVar5 + 0x298) * 4);
      if (*(int *)(iVar2 + 0x44) != 0) {
        FUN_0042e1f0(iVar2 + 0x20);
        return;
      }
      if (*(int *)(iVar2 + 0x70) != -1) {
        *(int *)(pLVar5 + 0x294) = *(int *)(iVar2 + 0x70);
        *(undefined4 *)(pLVar5 + 0x298) = 0;
      }
    }
  }
  return;
}


void __thiscall FUN_0052e590(void *this,int param_1)

{
  void *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  this_00 = *(void **)((int)this + 0x2d4);
  *(int *)((int)this + 0x348) = param_1;
  uVar1 = FUN_00535280(this_00,param_1);
  *(undefined4 *)((int)this + 0x350) = uVar1;
  iVar2 = FUN_005352e0(this_00,param_1);
  *(int *)((int)this + 0x34c) = iVar2;
  uVar1 = FUN_00535230(this_00,param_1);
  iVar3 = DAT_0065b5cc;
  *(undefined4 *)((int)this + 0x354) = uVar1;
  iVar2 = *(int *)(*(int *)(iVar3 + 0xd0) + 0x224);
  *(undefined4 *)(iVar2 + 0x58) = uVar1;
  if (*(int *)(iVar2 + 0x10) != 0) {
    FUN_005273a0(iVar2);
    iVar3 = DAT_0065b5cc;
  }
  *(undefined4 *)(iVar2 + 0x58) = 0;
  FUN_005273a0(*(int *)(*(int *)(iVar3 + 0xd0) + 0x224));
  iVar2 = FUN_005352e0(*(void **)((int)this + 0x2d4),*(int *)((int)this + 0x348));
  FUN_0052f510(this,iVar2);
  return;
}


void __fastcall FUN_0052e640(int param_1)

{
  void *this;
  Layer *pLVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c43a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = *(int *)(DAT_0065b5cc + 0xcc);
  FUN_004028b0(*(int **)(iVar2 + 0x3f4),*(int **)(iVar2 + 0x3f8));
  *(undefined4 *)(iVar2 + 0x3f8) = *(undefined4 *)(iVar2 + 0x3f4);
  iVar2 = DAT_0065b444;
  iVar4 = -1;
  iVar3 = 8;
  *(undefined4 *)(DAT_0065b444 + 100) = 0;
  *(undefined1 *)(iVar2 + 0x1c5) = 0;
  *(undefined1 *)(iVar2 + 0xa4) = 0;
  iVar2 = *(int *)(DAT_0065b5cc + 0xd0);
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,iVar2,iVar3,iVar4);
  *(undefined1 *)(DAT_0065b444 + 0x73) = 1;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar1 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(pLVar1);
    local_8 = 0xffffffff;
  }
  FUN_0052de90((int)DAT_0065c25c);
  *(undefined4 *)(param_1 + 0x2b4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  FUN_00591070(&DAT_005cdc70,"Quitting to menu after a pause...");
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0052e750(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  Node *pNVar7;
  void *this_00;
  int iVar8;
  byte *pbVar9;
  void *extraout_ECX;
  void *pvVar10;
  void *this_01;
  void *this_02;
  int extraout_EDX;
  uint uVar11;
  int iVar12;
  int *piVar13;
  float fVar14;
  undefined4 local_4c;
  undefined4 local_48;
  void *local_44;
  int local_40;
  undefined4 local_3c [9];
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c43c8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = param_2;
  if (*(int *)((int)this + 0x29c) != 0) goto LAB_0052eda6;
  if ((param_1 == 0xc) || (param_1 == 0xd)) {
    *(undefined1 *)((int)this + 0x2f8) = 0;
  }
  if ((((*(int *)(DAT_0065b5cc + 0xcc) == 0) ||
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 0)) ||
      (uVar5 = FUN_00532810((int)this), (char)uVar5 != '\0')) || (param_1 != 6)) {
    pNVar7 = FUN_00412a50();
    if (((pNVar7[0x278] != (Node)0x0) || (pNVar7 = FUN_00412990(), pNVar7[0x285] != (Node)0x0)) ||
       (*DAT_0065b444 != 1)) goto LAB_0052eda6;
    if (param_1 != DAT_0065b7a8[1]) {
      if (param_1 == *DAT_0065b7a8) {
        local_44 = *(void **)((int)this + 0x3a0);
        if ((*(float *)((int)local_44 + 0x334) != 0.0) ||
           (((*(int *)(DAT_0065b5cc + 0xcc) != 0 &&
             (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
            (cVar4 = FUN_0052eea0((int)this), cVar4 != '\0')))) goto LAB_0052eda6;
        if (*(int *)((int)this + 0x350) != 0) {
          pvVar10 = *(void **)(*(int *)(*(int *)((int)this + 0x350) + 0xc) + 0x54);
          cVar4 = FUN_0052eea0((int)this);
          pvVar3 = local_44;
          if (cVar4 == '\0') {
            param_2 = local_40;
            if (((*(int *)(*(int *)((int)this + 0x2d4) + 0x38) != -1) ||
                (*(char *)((int)pvVar10 + 0x38c) == '\0')) ||
               ((uint)((*(int *)((int)pvVar10 + 0x398) - *(int *)((int)pvVar10 + 0x394)) / 0x50) < 2
               )) goto LAB_0052ebc6;
            FUN_0053ae80((int)pvVar10);
            iVar12 = *(int *)((int)pvVar10 + *(int *)((int)pvVar10 + 0x388) * 4 + 0x624);
            if (((iVar12 == 0) || (iVar12 = *(int *)(iVar12 + 0x180), iVar12 == 0)) ||
               (*(char *)(iVar12 + 0x59) == '\0')) {
              if (*(char *)((int)DAT_0065b444 + 0x73) != '\0') {
                *(undefined1 *)((int)DAT_0065b444 + 0x73) = 0;
              }
            }
            else if (*(char *)((int)DAT_0065b444 + 0x73) == '\0') {
              *(undefined1 *)((int)DAT_0065b444 + 0x73) = 1;
            }
            FUN_0053b4a0(pvVar10);
            cVar4 = FUN_0052eea0((int)this);
            if (cVar4 == '\0') {
              FUN_0052e590(this,*(int *)(*(int *)(*(int *)((int)this + 0x2d4) + 0xa4) + 0x18 +
                                        *(int *)((int)this + 0x3b0) * 0x1c));
            }
            else {
              FUN_0052efb0(this_01,*(undefined4 *)((int)pvVar10 + 0x388));
            }
          }
          else {
            FUN_0053ae80((int)local_44);
            iVar12 = *(int *)((int)pvVar3 + *(int *)((int)pvVar3 + 0x388) * 4 + 0x624);
            if (((iVar12 == 0) || (iVar12 = *(int *)(iVar12 + 0x180), iVar12 == 0)) ||
               (*(char *)(iVar12 + 0x59) == '\0')) {
              if (*(char *)((int)DAT_0065b444 + 0x73) != '\0') {
                *(undefined1 *)((int)DAT_0065b444 + 0x73) = 0;
              }
            }
            else if (*(char *)((int)DAT_0065b444 + 0x73) == '\0') {
              *(undefined1 *)((int)DAT_0065b444 + 0x73) = 1;
            }
            FUN_0053b4a0(pvVar3);
            FUN_0052efb0(this,*(undefined4 *)((int)pvVar3 + 0x388));
          }
          FUN_004eb5a0();
          param_2 = local_40;
        }
      }
LAB_0052ebc6:
      if (param_1 == 6) {
        pNVar7 = FUN_00412990();
        if (pNVar7[0x285] != (Node)0x0) {
          pNVar7 = FUN_00412990();
          FUN_00524040((int)pNVar7);
        }
        cVar4 = FUN_0052eea0((int)this);
        pvVar10 = this_02;
        if (cVar4 != '\0') goto LAB_0052e984;
        FUN_00530750(this_02,0xffffffff);
      }
      iVar12 = *(int *)((int)this + 0x350);
      if ((((((iVar12 == 0) || (*(int *)(iVar12 + 0x10) == 0)) ||
            (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) == 0)) ||
           (((piVar13 = *(int **)(*(int *)(iVar12 + 0xc) + 0x188), piVar13 != (int *)0x0 &&
             (cVar4 = (**(code **)(*piVar13 + 0x10))(), cVar4 == '\0')) ||
            ((puVar1 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x350) + 0x10) + 0x60),
             puVar1 == (undefined4 *)0x0 || (cVar4 = (**(code **)*puVar1)(), cVar4 == '\0')))))) &&
          ((((iVar12 = *(int *)((int)this + 0x350), iVar12 == 0 || (*(char *)(iVar12 + 7) == '\0'))
            || ((*(char *)(iVar12 + 8) == '\0' &&
                ((piVar13 = *(int **)(*(int *)(iVar12 + 0xc) + 0x188), piVar13 == (int *)0x0 ||
                 (cVar4 = (**(code **)(*piVar13 + 0x10))(), cVar4 == '\0')))))) ||
           (cVar4 = (**(code **)(**(int **)((int)this + 0x350) + 0x20))(param_1,param_2),
           cVar4 == '\0')))) && (cVar4 = FUN_0052eea0((int)this), cVar4 == '\0')) {
        if ((param_1 == 0xc) || (param_1 == 0xd)) {
          *(undefined1 *)((int)this + 0x2f8) = 0;
        }
        iVar12 = FUN_004b32a0();
        piVar2 = *(int **)(iVar12 + 0x10);
        for (piVar13 = *(int **)(iVar12 + 0xc); piVar13 != piVar2; piVar13 = piVar13 + 1) {
          iVar12 = *piVar13;
          if ((*(int *)(iVar12 + 0x1c) != 0) && (*(int *)(iVar12 + 0x1c) == param_1)) {
            if ((*(char *)((int)DAT_0065b444 + 0x71) == '\0') ||
               (uVar11 = FUN_0052b280(*(undefined4 *)(iVar12 + 0x24)), (char)uVar11 != '\0')) {
              FUN_004ea270(local_3c,*(undefined4 *)(iVar12 + 0x24));
              local_8 = 0;
              if (local_18 != (int *)0x0) {
                local_44 = (void *)0x0;
                local_4c = *(undefined4 *)(DAT_0065b5cc + 0xd0);
                local_40 = 0;
                local_48 = 0;
                (**(code **)(*local_18 + 8))(&local_4c,&local_48,&local_40,&local_44);
              }
              local_8 = 1;
              if (local_18 != (int *)0x0) {
                (**(code **)(*local_18 + 0x10))();
                local_18 = (int *)0x0;
              }
              local_8 = 0xffffffff;
            }
            else {
              FUN_004122b0();
              FUN_0041c620(*(undefined4 *)(iVar12 + 0x24),0);
            }
          }
        }
      }
      goto LAB_0052eda6;
    }
    fVar14 = 0.0;
    if (((DAT_0065b3e8 != '\0') && (iVar12 = *(int *)((int)this + 0x3a0), iVar12 != 0)) &&
       ((*(float *)(iVar12 + 0x334) != 0.0 ||
        (cVar4 = FUN_0052eea0((int)this), iVar12 = extraout_EDX, cVar4 != '\0')))) {
      *(undefined1 *)(iVar12 + 0x34c) = 1;
      FUN_0053ba90(*(int *)((int)this + 0x3a0));
      goto LAB_0052eda6;
    }
    if ((*(float *)(*(int *)((int)this + 0x3a0) + 0x334) != fVar14) ||
       (uVar5 = FUN_00532810((int)this), (char)uVar5 != '\0')) goto LAB_0052eda6;
    cVar4 = FUN_0052eea0((int)this);
    pvVar10 = extraout_ECX;
    if (cVar4 == '\0') {
      iVar12 = *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70);
      if (*(int *)((int)this + 0x3b0) == -1) {
        if (iVar12 != 0) {
          if ((*(char *)((int)DAT_0065b444 + 0x71) != '\0') || (iVar12 != 2)) goto LAB_0052e9db;
          FUN_0052eec0(this,-1);
        }
      }
      else if ((iVar12 != 0) && (iVar12 != 1)) {
        FUN_00530750(this,0xffffffff);
LAB_0052e9db:
        FUN_0052eec0(this,-1);
      }
      goto LAB_0052ebc6;
    }
LAB_0052e984:
    if (DAT_0065b3e8 != '\0') goto LAB_0052eda6;
  }
  else {
    if (*(float *)(*(int *)((int)this + 0x3a0) + 0x334) != 0.0) goto LAB_0052eda6;
    cVar4 = FUN_0052eea0((int)this);
    pvVar10 = this_00;
    if (cVar4 == '\0') {
      if (*(int *)((int)this + 0x3b0) == -1) {
        FUN_0052eec0(this_00,-1);
        uVar11 = 0;
        local_40 = *(int *)(*(int *)((int)this + 0x3a0) + 0x394);
        iVar8 = *(int *)(*(int *)((int)this + 0x3a0) + 0x398) - local_40;
        iVar12 = iVar8 >> 0x1f;
        if (iVar8 / 0x50 + iVar12 != iVar12) {
          iVar12 = 0;
          do {
            iVar8 = local_40 + iVar12;
            pbVar9 = (byte *)(iVar8 + 0x10);
            if (0xf < *(uint *)(iVar8 + 0x24)) {
              pbVar9 = *(byte **)(iVar8 + 0x10);
            }
            uVar6 = FUN_004031f0(pbVar9,*(uint *)(iVar8 + 0x20),(byte *)"tab_options",0xb);
            if ((char)uVar6 != '\0') {
              FUN_0052efb0(this,uVar11);
              break;
            }
            uVar11 = uVar11 + 1;
            iVar12 = iVar12 + 0x50;
          } while (uVar11 < (uint)((*(int *)(*(int *)((int)this + 0x3a0) + 0x398) -
                                   *(int *)(*(int *)((int)this + 0x3a0) + 0x394)) / 0x50));
        }
      }
      else {
        FUN_00530750(this_00,0xffffffff);
      }
      goto LAB_0052eda6;
    }
  }
  FUN_0052f030(pvVar10,'\0');
LAB_0052eda6:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void FUN_0052edd0(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (_DstBuf_0065b3dc != (void *)0x0) {
    iVar5 = *(int *)((int)_DstBuf_0065b3dc + 0x18);
    uVar4 = 0;
    pvVar3 = _DstBuf_0065b3dc;
    if (*(int *)((int)_DstBuf_0065b3dc + 0x1c) - iVar5 >> 2 != 0) {
      do {
        iVar5 = *(int *)(iVar5 + uVar4 * 4);
        uVar6 = 0;
        iVar2 = *(int *)(iVar5 + 0x90);
        if (*(int *)(iVar5 + 0x94) - iVar2 >> 2 != 0) {
          do {
            if (*(int *)(*(int *)(iVar2 + uVar6 * 4) + 0x3c) == 4) {
              iVar5 = 0x624;
              do {
                iVar2 = *(int *)(iVar5 + *(int *)(*(int *)(*(int *)(*(int *)((int)pvVar3 + 0x18) +
                                                                   uVar4 * 4) + 0x90) + uVar6 * 4));
                if ((iVar2 != 0) && (piVar1 = *(int **)(iVar2 + 300), piVar1 != (int *)0x0)) {
                  (**(code **)(*piVar1 + 0x14))();
                  pvVar3 = _DstBuf_0065b3dc;
                }
                iVar5 = iVar5 + 4;
              } while (iVar5 < 0x64c);
            }
            uVar6 = uVar6 + 1;
            iVar5 = *(int *)(*(int *)((int)pvVar3 + 0x18) + uVar4 * 4);
            iVar2 = *(int *)(iVar5 + 0x90);
          } while (uVar6 < (uint)(*(int *)(iVar5 + 0x94) - iVar2 >> 2));
        }
        uVar4 = uVar4 + 1;
        iVar5 = *(int *)((int)pvVar3 + 0x18);
      } while (uVar4 < (uint)(*(int *)((int)pvVar3 + 0x1c) - iVar5 >> 2));
    }
  }
  return;
}


undefined1 __fastcall FUN_0052eea0(int param_1)

{
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(char *)(param_1 + 0x39d) != '\0')) {
    return 1;
  }
  return 0;
}


void __thiscall FUN_0052eec0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0065c2b4;
  if (DAT_0065c2b4 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005adb0f(4);
    DAT_0065c2b4 = puVar1;
    *puVar1 = 0xffffffff;
  }
  *puVar1 = 0xffffffff;
  FUN_0053bb20(*(int *)((int)this + 0x3a0));
  iVar3 = DAT_0065b5cc;
  *(undefined1 *)((int)this + 0x39d) = 1;
  *(undefined4 *)((int)this + 0x348) = 0xffffffff;
  iVar2 = *(int *)(*(int *)(iVar3 + 0xd0) + 0x224);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)((int)this + 0x354);
  if (*(int *)(iVar2 + 0x10) != 0) {
    FUN_005273a0(iVar2);
    iVar3 = DAT_0065b5cc;
  }
  *(undefined4 *)(iVar2 + 0x58) = 0;
  FUN_005273a0(*(int *)(*(int *)(iVar3 + 0xd0) + 0x224));
  if (param_1 == -1) {
    param_1 = 0;
  }
  FUN_0052efb0(this,param_1);
  iVar2 = FUN_005352e0(*(void **)((int)this + 0x2d4),*(int *)((int)this + 0x348));
  FUN_0052f510(this,iVar2);
  FUN_00591070("DETAIL","Showing tablet.");
  (**(code **)(**(int **)((int)this + 0x364) + 0xb4))(0);
  return;
}


void __thiscall FUN_0052efb0(void *this,undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  
  *(undefined4 *)(*(int *)((int)this + 0x3a0) + 0x388) = param_1;
  pvVar1 = *(void **)((int)this + 0x3a0);
  iVar2 = *(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 0x388) * 4 + 0x624);
  *(int *)((int)this + 0x354) = iVar2;
  *(undefined4 *)((int)this + 0x350) = *(undefined4 *)(iVar2 + 300);
  FUN_0053b4a0(pvVar1);
  iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x3a0) + 0x624 +
                           *(int *)(*(int *)((int)this + 0x3a0) + 0x388) * 4) + 0x180);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x59) != '\0')) {
    *(undefined1 *)(DAT_0065b444 + 0x73) = 1;
    return;
  }
  *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
  return;
}


void __thiscall FUN_0052f030(void *this,char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 == '\0') && (iVar1 = FUN_004123f0(), *(int *)(iVar1 + 0x20) != 0)) {
    return;
  }
  *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
  FUN_0053bb20(*(int *)((int)this + 0x3a0));
  iVar3 = DAT_0065b5cc;
  iVar1 = *(int *)((int)*(void **)((int)this + 0x2d4) + 0x3c);
  if (iVar1 == -1) {
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
    *(undefined4 *)(iVar1 + 0x58) = 0;
    if (*(int *)(iVar1 + 0x10) != 0) {
      FUN_005273a0(iVar1);
      iVar3 = DAT_0065b5cc;
    }
    *(undefined4 *)(iVar1 + 0x58) = 0;
  }
  else {
    uVar2 = FUN_00535230(*(void **)((int)this + 0x2d4),iVar1);
    iVar3 = DAT_0065b5cc;
    *(undefined4 *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224) + 0x58) = uVar2;
  }
  *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
  iVar1 = *(int *)(*(int *)(iVar3 + 0xd0) + 0x224);
  if (*(int **)(iVar1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x34) + 0x138))(1);
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  if (*(void **)(iVar1 + 0x10) != (void *)0x0) {
    FUN_00527890(*(void **)(iVar1 + 0x10));
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (*(int *)(iVar1 + 0x58) != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 0x58) + 0x70) = 1;
  }
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x348) = 0xffffffff;
  *(undefined1 *)((int)this + 0x39d) = 0;
  FUN_00591070("DETAIL","Hiding tablet.");
  iVar1 = FUN_005352e0(*(void **)((int)this + 0x2d4),*(int *)((int)this + 0x348));
  FUN_0052f510(this,iVar1);
  (**(code **)(**(int **)((int)this + 0x364) + 0xb4))(1);
  return;
}


void __fastcall FUN_0052f180(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(*(int *)((int)param_1 + 0x3a0) + 0x34c) = 0;
  FUN_0053ba90(*(int *)((int)param_1 + 0x3a0));
  iVar4 = DAT_0065b5cc;
  *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
  iVar3 = *(int *)(iVar4 + 0xd0);
  if (iVar3 != 0) {
    iVar1 = *(int *)((int)*(void **)((int)param_1 + 0x2d4) + 0x3c);
    if (iVar1 == -1) {
      iVar3 = *(int *)(iVar3 + 0x224);
      *(undefined4 *)(iVar3 + 0x58) = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        FUN_005273a0(iVar3);
        iVar4 = DAT_0065b5cc;
      }
      *(undefined4 *)(iVar3 + 0x58) = 0;
    }
    else {
      uVar2 = FUN_00535230(*(void **)((int)param_1 + 0x2d4),iVar1);
      *(undefined4 *)(*(int *)(iVar3 + 0x224) + 0x58) = uVar2;
    }
    iVar3 = *(int *)(*(int *)(iVar4 + 0xd0) + 0x224);
    if (*(int **)(iVar3 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x34) + 0x138))(1);
      *(undefined4 *)(iVar3 + 0x34) = 0;
    }
    if (*(void **)(iVar3 + 0x10) != (void *)0x0) {
      FUN_00527890(*(void **)(iVar3 + 0x10));
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
    if (*(int *)(iVar3 + 0x58) != 0) {
      *(undefined1 *)(*(int *)(iVar3 + 0x58) + 0x70) = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x354) = 0;
  *(undefined4 *)((int)param_1 + 0x350) = 0;
  *(undefined4 *)((int)param_1 + 0x34c) = 0;
  *(undefined4 *)((int)param_1 + 0x348) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x39d) = 0;
  FUN_00591070("DETAIL","Hiding tablet.");
  iVar3 = FUN_005352e0(*(void **)((int)param_1 + 0x2d4),*(int *)((int)param_1 + 0x348));
  FUN_0052f510(param_1,iVar3);
  (**(code **)(**(int **)((int)param_1 + 0x364) + 0xb4))(1);
  return;
}


void __fastcall FUN_0052f2c0(void *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint local_14;
  uint local_c;
  
  local_14 = 0;
  puVar6 = *(undefined4 **)(*(int *)((int)param_1 + 0x2d4) + 0x90);
  puVar1 = *(undefined4 **)(*(int *)((int)param_1 + 0x2d4) + 0x94);
  uVar9 = (uint)((int)puVar1 + (3 - (int)puVar6)) >> 2;
  if (puVar1 < puVar6) {
    uVar9 = 0;
  }
  if (uVar9 == 0) {
    return;
  }
LAB_0052f306:
  pvVar2 = (void *)*puVar6;
  local_c = 0;
  iVar3 = *(int *)((int)pvVar2 + 0x394);
  iVar7 = *(int *)((int)pvVar2 + 0x398) - iVar3;
  iVar11 = iVar7 >> 0x1f;
  if (iVar7 / 0x50 + iVar11 != iVar11) {
    pbVar12 = (byte *)(iVar3 + 0x10);
    do {
      pbVar8 = pbVar12;
      if (0xf < *(uint *)(pbVar12 + 0x14)) {
        pbVar8 = *(byte **)pbVar12;
      }
      uVar4 = FUN_004031f0(pbVar8,*(uint *)(pbVar12 + 0x10),(byte *)"pcomms",6);
      if ((char)uVar4 != '\0') {
        if (pvVar2 != *(void **)((int)param_1 + 0x34c)) goto LAB_0052f486;
        iVar3 = *(int *)((int)param_1 + 0x2d4);
        iVar11 = *(int *)(*(int *)(iVar3 + 0xa4) + 0x18 + *(int *)((int)param_1 + 0x3b0) * 0x1c);
        uVar4 = 0;
        *(int *)((int)param_1 + 0x348) = iVar11;
        uVar10 = *(int *)(iVar3 + 0x94) - *(int *)(iVar3 + 0x90) >> 2;
        if (uVar10 != 0) goto LAB_0052f3d0;
        goto LAB_0052f3ea;
      }
      local_c = local_c + 1;
      pbVar12 = pbVar12 + 0x50;
    } while (local_c < (uint)((*(int *)((int)pvVar2 + 0x398) - iVar3) / 0x50));
  }
  goto LAB_0052f4eb;
  while (uVar4 = uVar4 + 1, uVar4 < uVar10) {
LAB_0052f3d0:
    iVar7 = *(int *)(*(int *)(iVar3 + 0x90) + uVar4 * 4);
    if ((*(int *)(iVar7 + 0x3c) == 4) && (*(int *)(iVar7 + 900) == iVar11)) {
      uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x624 + *(int *)(iVar7 + 0x388) * 4) + 300);
      goto LAB_0052f3ec;
    }
  }
LAB_0052f3ea:
  uVar5 = 0;
LAB_0052f3ec:
  *(undefined4 *)((int)param_1 + 0x350) = uVar5;
  uVar4 = 0;
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x2d4) + 0x90);
  uVar10 = *(int *)(*(int *)((int)param_1 + 0x2d4) + 0x94) - iVar3 >> 2;
  if (uVar10 != 0) {
    do {
      iVar11 = *(int *)(iVar3 + uVar4 * 4);
      if ((*(int *)(iVar11 + 900) != -1) &&
         (*(int *)(iVar11 + 900) == *(int *)((int)param_1 + 0x348))) goto LAB_0052f435;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar10);
  }
  iVar11 = 0;
LAB_0052f435:
  FUN_0052f510(param_1,iVar11);
  iVar11 = DAT_0065b5cc;
  iVar3 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x224);
  *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)((int)param_1 + 0x354);
  if (*(int *)(iVar3 + 0x10) != 0) {
    FUN_005273a0(iVar3);
    iVar11 = DAT_0065b5cc;
  }
  *(undefined4 *)(iVar3 + 0x58) = 0;
  FUN_005273a0(*(int *)(*(int *)(iVar11 + 0xd0) + 0x224));
LAB_0052f486:
  if (local_c != *(uint *)((int)pvVar2 + 0x388)) {
    *(uint *)((int)pvVar2 + 0x388) = local_c;
    FUN_0053b4a0(pvVar2);
    if (*(char *)(*(int *)(*(int *)((int)pvVar2 + *(int *)((int)pvVar2 + 0x388) * 4 + 0x624) + 0x180
                          ) + 0x59) == '\0') {
      if (*(char *)(DAT_0065b444 + 0x73) != '\0') {
        *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
      }
    }
    else if (*(char *)(DAT_0065b444 + 0x73) == '\0') {
      *(undefined1 *)(DAT_0065b444 + 0x73) = 1;
    }
  }
LAB_0052f4eb:
  local_14 = local_14 + 1;
  puVar6 = puVar6 + 1;
  if (local_14 == uVar9) {
    return;
  }
  goto LAB_0052f306;
}


void __thiscall FUN_0052f510(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)((int)this + 0x2d4);
  if (*(int *)(iVar1 + 0x94) - *(int *)(iVar1 + 0x90) >> 2 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x90) + uVar2 * 4);
      if (iVar1 == param_1) {
        *(undefined1 *)(iVar1 + 9) = 1;
      }
      else if (*(int *)(iVar1 + 0x3c) == 4) {
        *(undefined1 *)(iVar1 + 9) = 0;
      }
      iVar1 = *(int *)((int)this + 0x2d4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(iVar1 + 0x94) - *(int *)(iVar1 + 0x90) >> 2));
  }
  return;
}


void __fastcall FUN_0052f580(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x2d4);
  local_8 = 0;
  iVar2 = *(int *)(iVar1 + 0x90);
  iVar5 = iVar2;
  if (*(int *)(iVar1 + 0x94) - iVar2 >> 2 == 0) {
    return;
  }
  do {
    this = *(void **)(iVar5 + local_8 * 4);
    if (*(int *)((int)this + *(int *)((int)this + 0x388) * 4 + 0x624) != 0) {
      iVar5 = *(int *)((int)this + 0x388) * 0x50 + *(int *)((int)this + 0x394);
      pbVar4 = (byte *)(iVar5 + 0x10);
      if (0xf < *(uint *)(iVar5 + 0x24)) {
        pbVar4 = *(byte **)(iVar5 + 0x10);
      }
      uVar3 = FUN_004031f0(pbVar4,*(uint *)(iVar5 + 0x20),&DAT_005e1bf0,4);
      if ((char)uVar3 == '\0') {
        iVar6 = 0;
        piVar7 = (int *)((int)this + 0x624);
        do {
          iVar5 = *piVar7;
          if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x128) == 0)) && (*(int *)(iVar5 + 300) != 0)) &&
             (iVar5 = *(int *)(*(int *)(iVar5 + 300) + 0x10), iVar5 != 0)) {
            pbVar4 = (byte *)(iVar5 + 0x30);
            if (0xf < *(uint *)(iVar5 + 0x44)) {
              pbVar4 = *(byte **)(iVar5 + 0x30);
            }
            uVar3 = FUN_004031f0(pbVar4,*(uint *)(iVar5 + 0x40),&DAT_005ecf00,4);
            if ((char)uVar3 != '\0') {
              FUN_0053ad10(this,iVar6);
              FUN_00591070("DETAIL","Switching helm display to ship control.");
              return;
            }
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
          iVar5 = iVar2;
        } while (iVar6 < 10);
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x90);
      }
    }
    local_8 = local_8 + 1;
    if ((uint)(*(int *)(iVar1 + 0x94) - *(int *)(iVar1 + 0x90) >> 2) <= local_8) {
      return;
    }
  } while( true );
}


void __fastcall FUN_0052f6a0(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint local_c;
  
  local_c = 0;
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x2d4) + 0x90);
  iVar9 = iVar4;
  if (*(int *)(*(int *)((int)param_1 + 0x2d4) + 0x94) - iVar4 >> 2 != 0) {
    do {
      pvVar1 = *(void **)(iVar4 + local_c * 4);
      if (*(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 0x388) * 4 + 0x624) != 0) {
        iVar7 = *(int *)((int)pvVar1 + 0x388) * 0x50 + *(int *)((int)pvVar1 + 0x394);
        pbVar6 = (byte *)(iVar7 + 0x10);
        if (0xf < *(uint *)(iVar7 + 0x24)) {
          pbVar6 = *(byte **)(iVar7 + 0x10);
        }
        uVar2 = FUN_004031f0(pbVar6,*(uint *)(iVar7 + 0x20),(byte *)"pcomms",6);
        if ((char)uVar2 != '\0') {
          iVar4 = *(int *)(iVar9 + local_c * 4);
LAB_0052f81c:
          FUN_00530750(param_1,*(uint *)(iVar4 + 900));
          return;
        }
      }
      iVar9 = *(int *)((int)pvVar1 + 0x394);
      uVar2 = 0;
      iVar5 = *(int *)((int)pvVar1 + 0x398) - iVar9;
      iVar7 = iVar5 >> 0x1f;
      iVar5 = iVar5 / 0x50 + iVar7;
      if (iVar5 != iVar7) {
        iVar10 = 0;
        do {
          iVar8 = iVar9 + iVar10;
          pbVar6 = (byte *)(iVar8 + 0x10);
          if (0xf < *(uint *)(iVar8 + 0x24)) {
            pbVar6 = *(byte **)(iVar8 + 0x10);
          }
          uVar3 = FUN_004031f0(pbVar6,*(uint *)(iVar8 + 0x20),(byte *)"pcomms",6);
          if ((char)uVar3 != '\0') {
            if (uVar2 != *(uint *)((int)pvVar1 + 0x388)) {
              *(uint *)((int)pvVar1 + 0x388) = uVar2;
              FUN_0053b4a0(pvVar1);
              if (*(char *)(*(int *)(*(int *)((int)pvVar1 +
                                             *(int *)((int)pvVar1 + 0x388) * 4 + 0x624) + 0x180) +
                           0x59) == '\0') {
                if (*(char *)(DAT_0065b444 + 0x73) != '\0') {
                  *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
                }
              }
              else if (*(char *)(DAT_0065b444 + 0x73) == '\0') {
                *(undefined1 *)(DAT_0065b444 + 0x73) = 1;
              }
            }
            iVar4 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x2d4) + 0x90) + local_c * 4);
            goto LAB_0052f81c;
          }
          uVar2 = uVar2 + 1;
          iVar10 = iVar10 + 0x50;
        } while (uVar2 < (uint)(iVar5 - iVar7));
      }
      local_c = local_c + 1;
      iVar9 = *(int *)(*(int *)((int)param_1 + 0x2d4) + 0x90);
    } while (local_c < (uint)(*(int *)(*(int *)((int)param_1 + 0x2d4) + 0x94) - iVar9 >> 2));
  }
  return;
}


uint __thiscall FUN_0052f840(void *this,int param_1,char param_2,char param_3)

{
  int *piVar1;
  
  if (0x19 < param_1 - 0x7cU) {
    if (*(char *)((int)this + 0x2f8) != '\0') {
      piVar1 = FUN_00534390((void *)((int)this + 0x2f0),&param_1);
      return CONCAT31((int3)((uint)piVar1 >> 8),(char)*piVar1);
    }
    piVar1 = FUN_00534390((void *)((int)this + 0x2e8),&param_1);
    return CONCAT31((int3)((uint)piVar1 >> 8),(char)*piVar1);
  }
  if (((*(char *)((int)this + 0x2f8) == '\0') || (param_2 == '\0')) && (param_3 == '\0')) {
    return param_1 - 0x1b;
  }
  return param_1 - 0x3b;
}


void __thiscall FUN_0052f8b0(void *this,float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c4402;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar2 = *(float *)(param_2 + 0x2c);
  local_14 = *(float *)(param_2 + 0x30);
  if (*(int **)((int)this + 0x364) == (int *)0x0) {
    *param_1 = fVar2;
    goto LAB_0052f9d7;
  }
  local_18 = DAT_0065ba2c - local_14;
  if (0.0 <= fVar2) {
    fVar1 = DAT_0065ba28;
    if (DAT_0065ba28 < fVar2) goto LAB_0052f944;
  }
  else {
    fVar1 = 0.0;
LAB_0052f944:
    fVar2 = fVar1;
  }
  if (0.0 <= local_18) {
    fVar1 = DAT_0065ba2c;
    if (DAT_0065ba2c < local_18) goto LAB_0052f960;
  }
  else {
    fVar1 = 0.0;
LAB_0052f960:
    local_18 = fVar1;
  }
  local_8 = 1;
  local_24 = (float)(int)(DAT_006550a4 * DAT_0065ba28) * (fVar2 / DAT_0065ba28);
  local_20 = (float)(int)(DAT_006550a4 * DAT_0065ba2c) -
             (float)(int)(DAT_006550a4 * DAT_0065ba2c) * (local_18 / DAT_0065ba2c);
  local_1c = fVar2;
  local_14 = local_18;
  (**(code **)(**(int **)((int)this + 0x364) + 0x4c))
            (&local_24,DAT_0065500c ^ (uint)&stack0xfffffffc);
  *param_1 = fVar2;
LAB_0052f9d7:
  param_1[1] = local_14;
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_0052f9f0(void *this,int param_1)

{
  int iVar1;
  byte ****ppppbVar2;
  uint uVar3;
  Ref *pRVar4;
  int *piVar5;
  int iVar6;
  byte ****ppppbVar7;
  void *pvVar8;
  byte *pbVar9;
  uint in_stack_ffffff70;
  void *in_stack_ffffff84;
  float local_58;
  float local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  void *local_44 [5];
  uint local_30;
  byte ***local_2c;
  byte **ppbStack_28;
  byte **ppbStack_24;
  byte **ppbStack_20;
  undefined8 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4443;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0052f8b0(this,&local_58,param_1);
  local_8 = 0;
  if (((*(int *)((int)this + 0x354) != 0) && (*(int *)((int)this + 0x350) != 0)) &&
     (*(char *)(*(int *)((int)this + 0x350) + 4) != '\0')) {
    local_58 = local_58 / DAT_0065ba28;
    local_54 = local_54 / DAT_0065ba2c;
    (**(code **)(**(int **)((int)this + 0x354) + 8))();
  }
  *(float *)((int)this + 0x394) = local_58;
  *(float *)((int)this + 0x398) = local_54;
  local_1c = 0xf00000000;
  local_2c = (byte ***)((uint)local_2c & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(int *)((int)this + 0x2d4) == 0) goto LAB_0052ffe1;
  local_4c = FUN_00535370(*(void **)((int)this + 0x2d4),local_58,local_54);
  if (local_4c == 0) {
    if (*(int *)((int)this + 0x408) != 0) {
      piVar5 = *(int **)(*(int *)((int)this + 0x408) + 0x3dc);
      if (piVar5 != (int *)0x0) {
        iVar1 = *piVar5;
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),0xff,0xff,0xff);
        (**(code **)(iVar1 + 0x25c))();
      }
      *(undefined4 *)((int)this + 0x408) = 0;
    }
  }
  else {
    iVar1 = *(int *)((int)this + 0x408);
    if (iVar1 == 0) {
      *(int *)((int)this + 0x408) = local_4c;
      if (*(int **)(local_4c + 0x3dc) != (int *)0x0) {
        iVar1 = **(int **)(local_4c + 0x3dc);
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),0xb4,0xff,0xff);
        (**(code **)(iVar1 + 0x25c))();
      }
    }
    else if (local_4c != iVar1) {
      if (*(int **)(iVar1 + 0x3dc) != (int *)0x0) {
        iVar1 = **(int **)(iVar1 + 0x3dc);
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),0xff,0xff,0xff);
        (**(code **)(iVar1 + 0x25c))();
      }
      *(int *)((int)this + 0x408) = local_4c;
      if (*(int **)(local_4c + 0x3dc) != (int *)0x0) {
        iVar1 = **(int **)(local_4c + 0x3dc);
        cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),0xb4,0xff,0xff);
        (**(code **)(iVar1 + 0x25c))();
      }
    }
  }
  ppppbVar2 = (byte ****)FUN_00535580((undefined1 *)local_44,local_58,local_54);
  if (&local_2c != ppppbVar2) {
    FUN_00401b20((int *)&local_2c);
    local_2c = *ppppbVar2;
    ppbStack_28 = (byte **)ppppbVar2[1];
    ppbStack_24 = (byte **)ppppbVar2[2];
    ppbStack_20 = (byte **)ppppbVar2[3];
    local_1c = *(undefined8 *)(ppppbVar2 + 4);
    ppppbVar2[4] = (byte ***)0x0;
    ppppbVar2[5] = (byte ***)0xf;
    *(undefined1 *)ppppbVar2 = 0;
  }
  if (0xf < local_30) {
    pvVar8 = local_44[0];
    if (0xfff < local_30 + 1) {
      pvVar8 = *(void **)((int)local_44[0] + -4);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(pvVar8);
  }
  ppppbVar2 = (byte ****)local_2c;
  ppppbVar7 = &local_2c;
  if (0xf < local_1c._4_4_) {
    ppppbVar7 = (byte ****)local_2c;
  }
  uVar3 = FUN_004031f0((byte *)ppppbVar7,(uint)local_1c,(byte *)&PTR_005ce008,0);
  if ((char)uVar3 == '\0') {
    iVar1 = *(int *)((int)this + 0x368);
    if (iVar1 != 0) {
      pbVar9 = (byte *)(iVar1 + 0x2c0);
      ppppbVar7 = &local_2c;
      if (0xf < local_1c._4_4_) {
        ppppbVar7 = ppppbVar2;
      }
      if (0xf < *(uint *)(iVar1 + 0x2d4)) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar3 = FUN_004031f0(pbVar9,*(uint *)(iVar1 + 0x2d0),(byte *)ppppbVar7,(uint)local_1c);
      if ((char)uVar3 != '\0') goto LAB_0052ff3e;
      (**(code **)(**(int **)((int)this + 0x368) + 0x138))();
      *(undefined4 *)((int)this + 0x368) = 0;
    }
    FUN_004024e0(&stack0xffffff84,&local_2c);
    pRVar4 = FUN_0055cb00((Node)0x0,in_stack_ffffff84);
    *(Ref **)((int)this + 0x368) = pRVar4;
    local_50 = 0;
    local_4c = 0x3f800000;
    local_8._0_1_ = 2;
    (**(code **)(*(int *)pRVar4 + 0xa0))();
    local_8 = CONCAT31(local_8._1_3_,1);
    (**(code **)(**(int **)((int)this + 0x368) + 0x40))();
    if ((byte ****)((int)this + 0x370) != &local_2c) {
      ppppbVar2 = &local_2c;
      if (0xf < local_1c._4_4_) {
        ppppbVar2 = (byte ****)local_2c;
      }
      FUN_00402690((byte ****)((int)this + 0x370),ppppbVar2,(uint)local_1c);
    }
    (**(code **)(**(int **)((int)this + 0x368) + 0x48))();
    (**(code **)(**(int **)((int)this + 0x364) + 0x10c))();
    piVar5 = *(int **)((int)this + 0x36c);
    if (piVar5 == (int *)0x0) {
      pvVar8 = (void *)(in_stack_ffffff70 & 0xffffff00);
      FUN_00402690(&stack0xffffff70,"white.png",9);
      piVar5 = (int *)FUN_00591910(pvVar8);
      *(int **)((int)this + 0x36c) = piVar5;
      iVar1 = *piVar5;
      cocos2d::Color3B::Color3B((Color3B *)((int)&local_48 + 1),'\0','\0','\0');
      (**(code **)(iVar1 + 0x25c))();
      local_50 = 0;
      local_4c = 0x3f800000;
      local_8._0_1_ = 3;
      (**(code **)(**(int **)((int)this + 0x36c) + 0xa0))();
      local_8 = CONCAT31(local_8._1_3_,1);
      (**(code **)(**(int **)((int)this + 0x36c) + 0x244))();
      (**(code **)(**(int **)((int)this + 0x36c) + 0x48))();
      (**(code **)(**(int **)((int)this + 0x364) + 0x108))(*(undefined4 *)((int)this + 0x36c));
      piVar5 = *(int **)((int)this + 0x36c);
    }
    (**(code **)(*piVar5 + 0xb4))();
    iVar1 = **(int **)((int)this + 0x36c);
    iVar6 = (**(code **)(**(int **)((int)this + 0x368) + 0xb0))();
    local_48 = *(float *)(iVar6 + 4) + 2.0;
    iVar6 = (**(code **)(**(int **)((int)this + 0x36c) + 0xb0))();
    local_48 = local_48 / *(float *)(iVar6 + 4);
    piVar5 = (int *)(**(code **)(**(int **)((int)this + 0x368) + 0xb0))();
    local_4c = *piVar5;
    (**(code **)(**(int **)((int)this + 0x36c) + 0xb0))();
    (**(code **)(iVar1 + 0x3c))();
    ppppbVar2 = (byte ****)local_2c;
  }
  else {
LAB_0052ff3e:
    ppppbVar7 = &local_2c;
    if (0xf < local_1c._4_4_) {
      ppppbVar7 = ppppbVar2;
    }
    uVar3 = FUN_004031f0((byte *)ppppbVar7,(uint)local_1c,(byte *)&PTR_005ce008,0);
    if (((char)uVar3 != '\0') && (*(int **)((int)this + 0x368) != (int *)0x0)) {
      (**(code **)(**(int **)((int)this + 0x368) + 0x138))();
      *(undefined4 *)((int)this + 0x368) = 0;
      if ((byte ****)((int)this + 0x370) != &local_2c) {
        ppppbVar7 = &local_2c;
        if (0xf < local_1c._4_4_) {
          ppppbVar7 = ppppbVar2;
        }
        FUN_00402690((byte ****)((int)this + 0x370),ppppbVar7,(uint)local_1c);
        ppppbVar2 = (byte ****)local_2c;
      }
      (**(code **)(**(int **)((int)this + 0x36c) + 0xb4))();
    }
  }
  if (0xf < local_1c._4_4_) {
    ppppbVar7 = ppppbVar2;
    if (0xfff < local_1c._4_4_ + 1) {
      ppppbVar7 = (byte ****)ppppbVar2[-1];
      if ((byte *)0x1f < (byte *)((int)ppppbVar2 + (-4 - (int)ppppbVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_005adb3f(ppppbVar7);
  }
LAB_0052ffe1:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
