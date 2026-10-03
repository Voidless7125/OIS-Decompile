#include "../ois_server.exe.h"


// WARNING: Type propagation algorithm not settling

void __thiscall FUN_00550080(void *this,char param_1,byte *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte *******pppppppbVar8;
  byte *pbVar9;
  byte *******pppppppbVar10;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  undefined **ppuVar15;
  int iVar16;
  byte *in_stack_ffffffa8;
  void *pvVar17;
  uint3 uVar18;
  byte *in_stack_ffffffb4;
  int in_stack_ffffffb8;
  byte *local_30;
  byte *******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_005c5870;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 != '\0') {
    pvVar17 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
    FUN_00402690(&stack0xffffffa8,"`3PODS [list,upgrade]`2: list or upgrade pods on your ship",0x3a)
    ;
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar17);
    goto LAB_0055067e;
  }
  iVar16 = param_3 - (int)param_2 >> 0x1f;
  if ((param_3 - (int)param_2) / 0x18 + iVar16 != iVar16) {
    uVar14 = *(uint *)(param_2 + 0x14);
    pbVar13 = param_2;
    if (0xf < uVar14) {
      pbVar13 = *(byte **)param_2;
    }
    local_30 = param_2;
    if (0xf < uVar14) {
      local_30 = *(byte **)param_2;
    }
    pbVar9 = param_2;
    if (0xf < uVar14) {
      pbVar9 = *(byte **)param_2;
    }
    FUN_00413ec0(&local_30,tolower_exref,(char *)pbVar9,
                 (char *)(local_30 + *(int *)(param_2 + 0x10)),pbVar13);
    pbVar9 = param_2;
    uVar14 = *(uint *)(param_2 + 0x14);
    pbVar13 = param_2;
    if (0xf < uVar14) {
      pbVar13 = *(byte **)param_2;
    }
    uVar6 = FUN_004031f0(pbVar13,*(uint *)(param_2 + 0x10),&DAT_00622210,4);
    if ((char)uVar6 != '\0') {
      pvVar17 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
      FUN_00402690(&stack0xffffffa8,"`%Pods:",7);
      FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar17);
      uVar14 = 0;
      pbVar9 = *(byte **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
      pbVar13 = pbVar9 + 0xc;
      local_30 = pbVar9;
      do {
        if ((int)uVar14 < *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0xe4)) {
          if (((int)uVar14 < 0) ||
             (((0 < *(int *)(pbVar9 + 8) && (*(int *)(pbVar9 + 8) <= (int)uVar14)) ||
              (*(int *)pbVar13 == 0)))) {
            FUN_0042de40(*(void **)((int)this + 0x20),"`7%02d`2 - `8no pod");
            pbVar9 = local_30;
          }
          else {
            FUN_005069b0(pbVar9,(undefined1 *)local_2c,uVar14,'\0');
            local_8._0_1_ = 1;
            FUN_0042de40(*(void **)((int)this + 0x20),"`7%02d`2 - %s `2(%s`2)");
            local_8 = (uint)local_8._1_3_ << 8;
            if (0xf < local_18) {
              pppppppbVar8 = local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (pppppppbVar8 = (byte *******)local_2c[0][-1],
                 (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)pppppppbVar8))))
              goto LAB_005503b9;
              FUN_005adb3f(pppppppbVar8);
            }
            local_1c = 0;
            local_18 = 0xf;
            local_2c[0] = (byte *******)((uint)local_2c[0] & 0xffffff00);
            pbVar9 = local_30;
          }
        }
        uVar14 = uVar14 + 1;
        pbVar13 = pbVar13 + 4;
      } while ((int)uVar14 < 0xe);
      goto LAB_0055067e;
    }
    pbVar13 = pbVar9;
    if (0xf < uVar14) {
      pbVar13 = *(byte **)pbVar9;
    }
    in_stack_ffffffb4 = (byte *)0x5502df;
    uVar14 = FUN_004031f0(pbVar13,*(uint *)(pbVar9 + 0x10),(byte *)"upgrade",7);
    if ((char)uVar14 != '\0') {
      if (2 < (uint)((param_3 - (int)pbVar9) / 0x18)) {
        pbVar13 = pbVar9 + 0x18;
        pbVar11 = pbVar13;
        pbVar3 = pbVar13;
        if (0xf < *(uint *)(pbVar9 + 0x2c)) {
          pbVar3 = *(byte **)pbVar13;
          pbVar11 = *(byte **)pbVar13;
        }
        if (0xf < *(uint *)(pbVar9 + 0x2c)) {
          pbVar13 = *(byte **)pbVar13;
        }
        FUN_00413ec0(&local_30,tolower_exref,(char *)pbVar13,
                     (char *)(pbVar11 + *(int *)(pbVar9 + 0x28)),pbVar3);
        FUN_004024e0(local_2c,(undefined4 *)(param_2 + 0x18));
        pppppppbVar8 = local_2c[0];
        ppuVar15 = &PTR_DAT_005df614;
        do {
          pcVar12 = *ppuVar15;
          pcVar1 = pcVar12 + 1;
          do {
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          pppppppbVar10 = (byte *******)local_2c;
          if (0xf < local_18) {
            pppppppbVar10 = pppppppbVar8;
          }
          uVar14 = FUN_004031f0((byte *)pppppppbVar10,local_1c,*ppuVar15,(int)pcVar12 - (int)pcVar1)
          ;
          if ((char)uVar14 != '\0') {
            if (0xf < local_18) {
              pppppppbVar10 = pppppppbVar8;
              if ((0xfff < local_18 + 1) &&
                 (pppppppbVar10 = (byte *******)pppppppbVar8[-1],
                 (byte *)0x1f < (byte *)((int)pppppppbVar8 + (-4 - (int)pppppppbVar10)))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(pppppppbVar10);
            }
            FUN_004024e0(&stack0xffffffa8,(undefined4 *)(param_2 + 0x18));
            iVar16 = FUN_00507890(in_stack_ffffffa8);
            pbVar13 = param_2 + 0x30;
            if (0xf < *(uint *)(param_2 + 0x44)) {
              pbVar13 = *(byte **)pbVar13;
            }
            iVar7 = atoi((char *)pbVar13);
            iVar7 = iVar7 + -1;
            if ((iVar7 < 0) ||
               (pvVar17 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),
               *(int *)((int)pvVar17 + 8) <= iVar7)) {
              pvVar17 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
              FUN_00402690(&stack0xffffffa8,"`2Invalid pod number.",0x15);
              FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar17);
            }
            else {
              bVar5 = FUN_00507140(pvVar17,iVar7);
              uVar18 = (uint3)((uint)in_stack_ffffffa8 >> 8);
              if (bVar5) {
                iVar4 = *(int *)(extraout_ECX + 0xc + iVar7 * 4);
                if ((iVar4 == 0) ||
                   ((iVar16 != 0 && ((2 < iVar16 - 1U || (*(char *)(iVar4 + iVar16) == '\0')))))) {
                  if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) <
                      *(int *)(&DAT_005df604 + iVar16 * 4)) {
                    pvVar17 = (void *)((uint)uVar18 << 8);
                    FUN_00402690(&stack0xffffffa8,"`2Not enough money for this upgrade.",0x24);
                    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar17);
                  }
                  else {
                    std::basic_string<>::basic_string<>
                              ((basic_string<> *)&stack0xffffffa8,(&PTR_DAT_005dfdb0)[iVar16]);
                    FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,
                                 -*(int *)(&DAT_005df604 + iVar16 * 4),in_stack_ffffffa8);
                    FUN_005071b0(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar7,iVar16);
                    FUN_0042de40(*(void **)((int)this + 0x20),"`0Pod `%%%d`0 upgraded with `%%%s");
                  }
                }
                else {
                  pvVar17 = (void *)((uint)uVar18 << 8);
                  FUN_00402690(&stack0xffffffa8,"`2Pod already has this upgrade.",0x1f);
                  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar17);
                }
              }
              else {
                pvVar17 = (void *)((uint)uVar18 << 8);
                FUN_00402690(&stack0xffffffa8,"`2No pod in that slot to upgrade.",0x21);
                FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar17);
              }
            }
            goto LAB_0055067e;
          }
          ppuVar15 = ppuVar15 + 1;
        } while ((int)ppuVar15 < 0x5df61c);
        if (0xf < local_18) {
          pppppppbVar10 = pppppppbVar8;
          if ((0xfff < local_18 + 1) &&
             (pppppppbVar10 = (byte *******)pppppppbVar8[-1],
             (byte *)0x1f < (byte *)((int)pppppppbVar8 + (-4 - (int)pppppppbVar10)))) {
LAB_005503b9:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_005adb3f(pppppppbVar10);
        }
        in_stack_ffffffa8 = (byte *)((uint)in_stack_ffffffa8 & 0xffffff00);
        FUN_00402690(&stack0xffffffa8,"`2Invalid pod upgrade.",0x16);
        FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffa8);
      }
      pvVar17 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
      FUN_00402690(&stack0xffffffa8,
                   "`3PODS [upgrade] [upgrade type] [pod number]`2: upgrade a pod with a new feature"
                   ,0x50);
      FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar17);
      FUN_0042dcd0(*(int *)((int)this + 0x20));
      iVar16 = 0;
      do {
        FUN_0042de40(*(void **)((int)this + 0x20),"`!%s `2(`0%s`2): `$%dc");
        iVar16 = iVar16 + 4;
      } while (iVar16 < 8);
      goto LAB_0055067e;
    }
    in_stack_ffffffb8 = 0;
    pvVar17 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
    FUN_00402690(&stack0xffffffa8,"`2Invalid parameter.",0x14);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar17);
  }
  FUN_0042b900(&stack0xffffffb4,(int *)&param_2);
  FUN_00550080(this,'\x01',in_stack_ffffffb4,in_stack_ffffffb8);
LAB_0055067e:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_005506b0(void *this,char param_1,byte *param_2,int param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte ***pppbVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  undefined4 uVar12;
  byte ****ppppbVar13;
  byte ****ppppbVar14;
  int iVar15;
  undefined4 extraout_ECX;
  int *piVar16;
  byte *pbVar17;
  char *pcVar18;
  void *in_stack_ffffffa0;
  byte *local_38;
  byte *local_34;
  undefined4 *local_30;
  byte ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  char local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c6e24;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = '\0';
  uStack_7 = 0;
  if (param_1 != '\0') {
    pvVar10 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
    FUN_00402690(&stack0xffffffa0,
                 "`3BUY [component|module|pod] [number/designation]`2: buy a component, module or pod"
                 ,0x53);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
    goto LAB_00550c97;
  }
  iVar9 = param_3 - (int)param_2 >> 0x1f;
  if ((param_3 - (int)param_2) / 0x18 + iVar9 != iVar9) {
    uVar6 = *(uint *)(param_2 + 0x14);
    local_38 = param_2;
    puVar1 = *(undefined4 **)(DAT_0065b3d4 + 0x398);
    if (0xf < uVar6) {
      local_38 = *(byte **)param_2;
    }
    local_34 = param_2;
    if (0xf < uVar6) {
      local_34 = *(byte **)param_2;
    }
    pbVar8 = param_2;
    if (0xf < uVar6) {
      pbVar8 = *(byte **)param_2;
    }
    local_30 = puVar1;
    FUN_00413ec0(&local_38,tolower_exref,(char *)pbVar8,
                 (char *)(local_34 + *(int *)(param_2 + 0x10)),local_38);
    pbVar2 = param_2;
    pbVar8 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar8 = *(byte **)param_2;
    }
    uVar6 = FUN_004031f0(pbVar8,*(uint *)(param_2 + 0x10),(byte *)"component",9);
    if ((char)uVar6 == '\0') {
      pbVar8 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar8 = *(byte **)pbVar2;
      }
      uVar6 = FUN_004031f0(pbVar8,*(uint *)(pbVar2 + 0x10),(byte *)"module",6);
      if ((char)uVar6 == '\0') {
        pbVar8 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          pbVar8 = *(byte **)pbVar2;
        }
        uVar6 = FUN_004031f0(pbVar8,*(uint *)(pbVar2 + 0x10),&DAT_005ead0c,3);
        if ((char)uVar6 != '\0') {
          if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < 100) {
            uVar6 = 0x24;
            pcVar18 = "`$Error:`3 cannot afford a new  pod.";
          }
          else {
            iVar15 = 0;
            pvVar10 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
            iVar9 = 7;
            piVar16 = (int *)((int)pvVar10 + 0x10);
            do {
              iVar11 = iVar15 + 1;
              if (piVar16[-1] == 0) {
                iVar11 = iVar15;
              }
              iVar15 = iVar11 + 1;
              if (*piVar16 == 0) {
                iVar15 = iVar11;
              }
              iVar9 = iVar9 + -1;
              piVar16 = piVar16 + 2;
            } while (iVar9 != 0);
            if (iVar15 == 0) {
              pvVar10 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
              FUN_00402690(&stack0xffffffa0,"`$Error:`3 no empty slot for this pod.",0x26);
              FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
              goto LAB_00550c97;
            }
            uVar12 = FUN_005070d0(pvVar10,-1);
            in_stack_ffffffa0 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
            if ((char)uVar12 == '\0') {
              FUN_00402690(&stack0xffffffa0,"`^Unable to purchase pod.",0x19);
              FUN_0042ddb0(*(void **)((int)this + 0x20),in_stack_ffffffa0);
              goto LAB_00550c97;
            }
            FUN_00402690(&stack0xffffffa0,&DAT_0060c504,3);
            FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,0xffffff9c,in_stack_ffffffa0)
            ;
            uVar6 = 0x2c;
            pcVar18 = "`!Transaction complete. Pod added to vessel.";
          }
          goto LAB_00550b0e;
        }
      }
      else if (1 < (uint)((param_3 - (int)pbVar2) / 0x18)) {
        pbVar8 = pbVar2 + 0x18;
        if (0xf < *(uint *)(pbVar2 + 0x2c)) {
          pbVar8 = *(byte **)pbVar8;
        }
        iVar9 = atoi((char *)pbVar8);
        uVar6 = iVar9 - 1;
        if (((int)uVar6 < 0) || ((uint)((int)(puVar1[0x17] - puVar1[0x16]) >> 2) <= uVar6)) {
          pvVar10 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
          FUN_00402690(&stack0xffffffa0,"`$Error:`3 invalid module.",0x1a);
          FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
          goto LAB_00550c97;
        }
        piVar16 = *(int **)(puVar1[0x16] + uVar6 * 4);
        if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < piVar16[1]) {
          uVar6 = 0x25;
          pcVar18 = "`$Error:`3 cannot afford this module.";
        }
        else {
          bVar5 = FUN_00522480(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),*piVar16);
          if (bVar5) {
            *(uint *)((int)this + 0x44) = uVar6;
            *(undefined2 *)((int)this + 0x40) = 0x100;
            goto LAB_00550b07;
          }
          uVar6 = 0x29;
          pcVar18 = "`$Error:`3 no empty slot for this module.";
        }
LAB_00550b0e:
        pvVar10 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
        FUN_00402690(&stack0xffffffa0,pcVar18,uVar6);
        FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
        goto LAB_00550c97;
      }
    }
    else if (1 < (uint)((param_3 - (int)pbVar2) / 0x18)) {
      pbVar8 = pbVar2 + 0x18;
      pbVar17 = pbVar8;
      local_38 = pbVar8;
      if (0xf < *(uint *)(pbVar2 + 0x2c)) {
        local_38 = *(byte **)pbVar8;
        pbVar17 = *(byte **)pbVar8;
      }
      if (0xf < *(uint *)(pbVar2 + 0x2c)) {
        pbVar8 = *(byte **)pbVar8;
      }
      FUN_00413ec0(&local_38,tolower_exref,(char *)pbVar8,
                   (char *)(pbVar17 + *(int *)(pbVar2 + 0x28)),local_38);
      iVar9 = puVar1[0x19];
      local_34 = (byte *)0x0;
      if (puVar1[0x1a] - iVar9 >> 2 != 0) {
        do {
          FUN_004024e0(local_2c,(undefined4 *)
                                (*(int *)(**(int **)(iVar9 + (int)local_34 * 4) + 4) + 0x38));
          local_8 = '\x01';
          ppppbVar14 = local_2c;
          if (0xf < local_18) {
            ppppbVar14 = (byte ****)local_2c[0];
          }
          ppppbVar13 = local_2c;
          if (0xf < local_18) {
            ppppbVar13 = (byte ****)local_2c[0];
          }
          FUN_00413ec0(&local_38,tolower_exref,(char *)ppppbVar13,
                       (char *)((int)ppppbVar14 + local_1c),(undefined1 *)ppppbVar14);
          uVar6 = local_18;
          pppbVar3 = local_2c[0];
          pbVar8 = param_2 + 0x18;
          if (0xf < *(uint *)(param_2 + 0x2c)) {
            pbVar8 = *(byte **)(param_2 + 0x18);
          }
          ppppbVar14 = local_2c;
          if (0xf < local_18) {
            ppppbVar14 = (byte ****)local_2c[0];
          }
          uVar7 = FUN_004031f0((byte *)ppppbVar14,local_1c,pbVar8,*(uint *)(param_2 + 0x28));
          cVar4 = (char)uVar7;
          if (cVar4 != '\0') {
            iVar9 = FUN_00412d40();
            iVar9 = *(int *)(iVar9 + 0x11c);
            *(byte **)(iVar9 + 0x5c) = local_34;
            *(undefined4 *)(iVar9 + 0x60) = 1;
            *(undefined4 *)(iVar9 + 0x48) = 1;
            *(undefined2 *)((int)this + 0x40) = 0;
            pvVar10 = (void *)((uint)in_stack_ffffffa0 & 0xffffff00);
            FUN_00402690(&stack0xffffffa0,"`!Transaction queued. Type `%confirm`! to perform.",0x32)
            ;
            FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar10);
            if (0xf < local_18) {
              ppppbVar14 = (byte ****)local_2c[0];
              if ((0xfff < local_18 + 1) &&
                 (ppppbVar14 = (byte ****)local_2c[0][-1],
                 (byte *)0x1f < (byte *)((int)local_2c[0] + (-4 - (int)ppppbVar14)))) {
LAB_00550a20:
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_005adb3f(ppppbVar14);
            }
            goto LAB_00550c97;
          }
          local_8 = cVar4;
          if (0xf < uVar6) {
            ppppbVar14 = (byte ****)pppbVar3;
            if (0xfff < uVar6 + 1) {
              ppppbVar14 = (byte ****)pppbVar3[-1];
              local_8 = '\0';
              if ((byte *)0x1f < (byte *)((int)pppbVar3 + (-4 - (int)ppppbVar14)))
              goto LAB_00550a20;
            }
            local_8 = cVar4;
            FUN_005adb3f(ppppbVar14);
          }
          local_34 = local_34 + 1;
          iVar9 = local_30[0x19];
        } while (local_34 < (byte *)(local_30[0x1a] - iVar9 >> 2));
      }
      pbVar8 = param_2 + 0x18;
      if (0xf < *(uint *)(param_2 + 0x2c)) {
        pbVar8 = *(byte **)pbVar8;
      }
      iVar9 = atoi((char *)pbVar8);
      if (DAT_0065c288 == (void *)0x0) {
        local_30 = (undefined4 *)FUN_005adb0f(300);
        local_8 = 2;
        DAT_0065c288 = (void *)FUN_00485f60(local_30);
        local_8 = '\0';
      }
      pvVar10 = DAT_0065c288;
      iVar15 = *(int *)((int)DAT_0065c288 + 0x11c);
      *(int *)(iVar15 + 0x5c) = iVar9;
      *(undefined4 *)(iVar15 + 0x60) = 1;
      *(undefined4 *)(iVar15 + 0x48) = 1;
      if (pvVar10 == (void *)0x0) {
        local_30 = (undefined4 *)FUN_005adb0f(300);
        local_8 = 3;
        pvVar10 = (void *)FUN_00485f60(local_30);
        local_8 = '\0';
        DAT_0065c288 = pvVar10;
      }
      cVar4 = FUN_0048ac00(pvVar10,*(void **)((int)this + 0x20));
      if (cVar4 == '\0') {
        iVar9 = FUN_00412d40();
        *(undefined4 *)(*(int *)(iVar9 + 0x11c) + 0x48) = 0;
        goto LAB_00550c97;
      }
      *(undefined2 *)((int)this + 0x40) = 0;
LAB_00550b07:
      uVar6 = 0x32;
      pcVar18 = "`!Transaction queued. Type `%confirm`! to perform.";
      goto LAB_00550b0e;
    }
  }
  FUN_005506b0(this,'\x01',(byte *)0x0,0);
LAB_00550c97:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00550cc0(void *this,byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  uint in_stack_ffffffc8;
  void *pvVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6b08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 == '\0') {
    if ((uint)((param_3 - (int)param_2) / 0x18) < 2) {
LAB_00550fb4:
      FUN_00550cc0(this,(byte *)0x1,(byte *)0x0,0);
      goto LAB_00550fd6;
    }
    uVar7 = *(uint *)(param_2 + 0x14);
    pbVar1 = param_2;
    if (0xf < uVar7) {
      pbVar1 = *(byte **)param_2;
    }
    param_1 = param_2;
    if (0xf < uVar7) {
      param_1 = *(byte **)param_2;
    }
    pbVar5 = param_2;
    if (0xf < uVar7) {
      pbVar5 = *(byte **)param_2;
    }
    FUN_00413ec0(&param_1,tolower_exref,(char *)pbVar5,(char *)(param_1 + *(int *)(param_2 + 0x10)),
                 pbVar1);
    pbVar1 = param_2 + 0x18;
    if (0xf < *(uint *)(param_2 + 0x2c)) {
      pbVar1 = *(byte **)pbVar1;
    }
    iVar2 = atoi((char *)pbVar1);
    pbVar5 = param_2;
    uVar7 = iVar2 - 1;
    pbVar1 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar1 = *(byte **)param_2;
    }
    uVar3 = FUN_004031f0(pbVar1,*(uint *)(param_2 + 0x10),(byte *)"component",9);
    if ((char)uVar3 == '\0') {
      pbVar1 = pbVar5;
      if (0xf < *(uint *)(pbVar5 + 0x14)) {
        pbVar1 = *(byte **)pbVar5;
      }
      uVar3 = FUN_004031f0(pbVar1,*(uint *)(pbVar5 + 0x10),(byte *)"module",6);
      if ((char)uVar3 == '\0') {
        pbVar1 = pbVar5;
        if (0xf < *(uint *)(pbVar5 + 0x14)) {
          pbVar1 = *(byte **)pbVar5;
        }
        uVar3 = FUN_004031f0(pbVar1,*(uint *)(pbVar5 + 0x10),&DAT_005ead0c,3);
        if ((char)uVar3 == '\0') goto LAB_00550fb4;
        if (((int)uVar7 < 0) ||
           (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254) + 0xe4) <= (int)uVar7)) {
          pvVar8 = (void *)(in_stack_ffffffc8 & 0xffffff00);
          FUN_00402690(&stack0xffffffc8,"`$Error:`3 invalid pod slot.",0x1c);
          FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
          goto LAB_00550fd6;
        }
        pbVar1 = pbVar5 + 0x18;
        if (0xf < *(uint *)(pbVar5 + 0x2c)) {
          pbVar1 = *(byte **)pbVar1;
        }
        iVar2 = atoi((char *)pbVar1);
        iVar2 = iVar2 + 1;
        pvVar8 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
        if ((iVar2 < 0) ||
           (((0 < *(int *)((int)pvVar8 + 8) && (*(int *)((int)pvVar8 + 8) <= iVar2)) ||
            (iVar4 = *(int *)((int)pvVar8 + iVar2 * 4 + 0xc), iVar4 == 0)))) {
          uVar7 = 0x1f;
          pcVar6 = "`$Error:`3 no pod in this slot.";
        }
        else {
          if (*(int *)(iVar4 + 8) < 1) {
            iVar4 = FUN_00507060(pvVar8,iVar2);
            pvVar8 = (void *)(in_stack_ffffffc8 & 0xffffff00);
            FUN_00402690(&stack0xffffffc8,&DAT_0060c504,3);
            FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,-iVar4,pvVar8);
            FUN_0042de40(*(void **)((int)this + 0x20),
                         "`!Transaction complete. Pod removed. `$%dc`! added.");
            FUN_00507170(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),iVar2);
            goto LAB_00550fd6;
          }
          uVar7 = 0x1c;
          pcVar6 = "`$Error:`3 pod is not empty.";
        }
      }
      else {
        if ((-1 < (int)uVar7) &&
           (iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),
           uVar7 < (uint)(*(int *)(iVar2 + 0x40) - *(int *)(iVar2 + 0x3c) >> 2))) {
          *(undefined2 *)((int)this + 0x40) = 0x101;
          goto LAB_00550e1b;
        }
        uVar7 = 0x1a;
        pcVar6 = "`$Error:`3 invalid module.";
      }
    }
    else if (((int)uVar7 < 0) ||
            (iVar2 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8),
            (uint)(*(int *)(iVar2 + 0x48) - *(int *)(iVar2 + 0x44) >> 2) <= uVar7)) {
      uVar7 = 0x1d;
      pcVar6 = "`$Error:`3 invalid component.";
    }
    else {
      *(undefined2 *)((int)this + 0x40) = 1;
LAB_00550e1b:
      *(uint *)((int)this + 0x44) = uVar7;
      uVar7 = 0x32;
      pcVar6 = "`!Transaction queued. Type `%confirm`! to perform.";
    }
  }
  else {
    uVar7 = 0x6e;
    pcVar6 = 
    "`3SELL [component|module|pod] [item/slot]`2: sell the item or pod from your ship with the corresponding number"
    ;
  }
  pvVar8 = (void *)(in_stack_ffffffc8 & 0xffffff00);
  FUN_00402690(&stack0xffffffc8,pcVar6,uVar7);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar8);
LAB_00550fd6:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00551000(void *this,undefined1 *param_1)

{
  int iVar1;
  int *piVar2;
  int *_Dst;
  undefined1 *this_00;
  int iVar3;
  undefined4 *puVar4;
  void *this_01;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  size_t _Size;
  void *in_stack_ffffffc0;
  void *pvVar5;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((char)param_1 == '\0') {
    iVar3 = *(int *)((int)this + 0x44);
    if (iVar3 != -1) {
      if (*(char *)((int)this + 0x40) == '\0') {
        iVar1 = *(int *)(DAT_0065b3d4 + 0x398);
        if (*(char *)((int)this + 0x41) != '\0') {
          param_1 = (undefined1 *)**(int **)(*(int *)(iVar1 + 0x58) + iVar3 * 4);
          FUN_004ae3d0((int)param_1);
          FUN_0042de40(*(void **)((int)this + 0x20),"`0Bought `!%s `3for `$%dc");
          FUN_004024e0(&stack0xffffffc0,
                       (undefined4 *)
                       (*(int *)(**(int **)(*(int *)(iVar1 + 0x58) + *(int *)((int)this + 0x44) * 4)
                                + 8) + 8));
          this_00 = param_1;
          iVar3 = FUN_004ae3d0((int)param_1);
          FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,-iVar3,in_stack_ffffffc0);
          FUN_00521d10(*(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40),this_00,-1);
          FUN_004ae7b0(this_00,*(int *)(DAT_0065b5cc + 0xd0));
          piVar2 = *(int **)(iVar1 + 0x5c);
          param_1 = (undefined1 *)(*(int **)(iVar1 + 0x58))[*(int *)((int)this + 0x44)];
          local_14 = piVar2;
          puVar4 = FUN_00414000(&local_18,(int *)&param_1,*(int **)(iVar1 + 0x58),piVar2);
          _Dst = (int *)*puVar4;
          if (_Dst != piVar2) {
            _Size = *(int *)(iVar1 + 0x5c) - (int)local_14;
            memmove(_Dst,local_14,_Size);
            *(size_t *)(iVar1 + 0x5c) = _Size + (int)_Dst;
          }
          goto LAB_00551220;
        }
      }
      else if (*(char *)((int)this + 0x41) != '\0') {
        iVar3 = FUN_004ae3d0(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x3c
                                              ) + iVar3 * 4));
        FUN_0042de40(*(void **)((int)this + 0x20),"`0Sold `!%s `3for `$%dc");
        FUN_004024e0(&stack0xffffffc0,
                     (undefined4 *)
                     (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) +
                                                0x3c) + *(int *)((int)this + 0x44) * 4) + 8) + 8));
        FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,iVar3 / 2,in_stack_ffffffc0);
        pvVar5 = *(void **)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
        FUN_00522090(pvVar5,*(undefined1 **)
                             (*(int *)((int)pvVar5 + 0x3c) + *(int *)((int)this + 0x44) * 4));
        goto LAB_00551220;
      }
      pvVar5 = *(void **)((int)this + 0x20);
      iVar3 = 1;
      this_01 = (void *)FUN_00412d40();
      FUN_0048ed40(this_01,iVar3,pvVar5);
    }
  }
  else {
    pvVar5 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"`3CONFIRM`2: executes the current trade",0x27);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
  }
LAB_00551220:
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00551240(void *this,char param_1)

{
  char *pcVar1;
  uint uVar2;
  uint in_stack_ffffffd0;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c58a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    uVar2 = 0x18;
    *(undefined4 *)((int)this + 0x44) = 0xffffffff;
    pcVar1 = "`3Transaction CANCELLED.";
  }
  else {
    uVar2 = 0x25;
    pcVar1 = "`3CANCEL`2: cancels the current trade";
  }
  pvVar3 = (void *)(in_stack_ffffffd0 & 0xffffff00);
  FUN_00402690(&stack0xffffffd0,pcVar1,uVar2);
  FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar3);
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005512d0(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  uint in_stack_ffffffc8;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6b08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    uVar2 = 0;
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
    if (*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x44) >> 2 != 0) {
      do {
        uVar2 = uVar2 + 1;
        FUN_0042de40(*(void **)((int)this + 0x20)," `3[`7%2d`3] `7%s `3(`%c%.0f%%`3) `$%dc");
        iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1f8);
      } while (uVar2 < (uint)(*(int *)(iVar1 + 0x48) - *(int *)(iVar1 + 0x44) >> 2));
    }
  }
  else {
    pvVar3 = (void *)(in_stack_ffffffc8 & 0xffffff00);
    FUN_00402690(&stack0xffffffc8,"`3COMPONENTS`2: list all components or modules on your ship",0x3b
                );
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar3);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00551430(void *this,char param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint in_stack_ffffffc0;
  void *pvVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    _param_1 = 0;
    iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
    iVar4 = *(int *)(iVar1 + 0x3c);
    if (*(int *)(iVar1 + 0x40) - iVar4 >> 2 != 0) {
      do {
        piVar2 = *(int **)(iVar4 + _param_1 * 4);
        cVar3 = (**(code **)(*piVar2 + 0x14))();
        if (cVar3 == '\0') {
          (**(code **)(*piVar2 + 0x18))();
        }
        FUN_00437440((int *)piVar2[3]);
        _param_1 = _param_1 + 1;
        FUN_004ae3d0((int)piVar2);
        FUN_0042de40(*(void **)((int)this + 0x20)," `3[`7%2d`3] `7%s `3(`%c%d%%`3) `$%dc");
        iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40);
        iVar4 = *(int *)(iVar1 + 0x3c);
      } while (_param_1 < (uint)(*(int *)(iVar1 + 0x40) - iVar4 >> 2));
    }
  }
  else {
    pvVar5 = (void *)(in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"`3MODULES`2: list all components or modules on your ship",0x38);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00551580(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = *(undefined1 *)(param_1 + 1);
  local_33 = *(undefined1 *)((int)param_1 + 5);
  local_30 = param_1[2];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00551620(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = param_1[1];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


TypeDescriptor * FUN_005516b0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_005516c0(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


TypeDescriptor * FUN_005516f0(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_00551700(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


TypeDescriptor * FUN_00551720(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_00551730(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


undefined4 * __thiscall FUN_00551760(void *this,byte param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c55f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)this = Screen_WeaponTerminal::vftable;
  if (*(Ref **)((int)this + 0x1c) != (Ref *)0x0) {
    cocos2d::Ref::autorelease(*(Ref **)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(void **)((int)this + 0x24) != (void *)0x0) {
    FUN_0053cfb0(*(void **)((int)this + 0x24));
  }
  FUN_004025a0((int *)((int)this + 0x34));
  piVar1 = *(int **)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)((int)this + 0x2c);
    if (piVar1 != piVar2) {
      do {
        FUN_0053d810(piVar1);
        piVar1 = piVar1 + 0x10;
      } while (piVar1 != piVar2);
      piVar1 = *(int **)((int)this + 0x28);
    }
    piVar2 = piVar1;
    if ((0xfff < (*(int *)((int)this + 0x30) - (int)piVar1 & 0xffffffc0U)) &&
       (piVar2 = (int *)piVar1[-1], 0x1f < (uint)((int)piVar1 + (-4 - (int)piVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(piVar2);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined ***)this = Screen_Renderer::vftable;
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00551860(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_fffffdb4;
  undefined **ppuStack_234;
  code *pcStack_230;
  undefined4 uStack_22c;
  uint in_stack_fffffdec;
  byte *pbVar6;
  code *local_1ec;
  code *local_1e8;
  undefined4 *local_1e4;
  void *local_1e0;
  undefined4 local_1dc [4];
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_54 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6edd;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0x2a;
  *(undefined4 *)(param_1 + 0x18) = 0x18;
  FUN_0043d780((int)local_1dc);
  local_8 = 0;
  local_1cc = *(undefined4 *)(param_1 + 0x14);
  local_1c8 = *(undefined4 *)(param_1 + 0x18);
  pvVar1 = (void *)FUN_005adb0f(0x15c00);
  local_8._0_1_ = 1;
  pbVar6 = (byte *)(in_stack_fffffdec & 0xffffff00);
  local_1e0 = pvVar1;
  FUN_00402690(&stack0xfffffdec,&PTR_005ce008,0);
  uStack_22c = 0x551916;
  piVar2 = (int *)FUN_0055f500(pvVar1,*(int *)(param_1 + 0xc),local_1dc,
                               *(int *)(param_1 + 0xc) + 0x70,*(int *)(param_1 + 0x14),
                               *(int *)(param_1 + 0x18),pbVar6);
  local_8._0_1_ = 0;
  *(int **)(param_1 + 0x1c) = piVar2;
  FUN_0055fcc0(piVar2);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))();
  local_1e8 = (code *)0x3f000000;
  local_1e4 = (undefined4 *)0x3f000000;
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xa0))();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x48))();
  cocos2d::Ref::retain(*(Ref **)(param_1 + 0x1c));
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))();
  local_1e0 = *(void **)(iVar3 + 4);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))();
  FUN_00591070("DETAIL","Text field = %f, %f");
  iVar3 = *(int *)(param_1 + 0xc);
  local_1e0 = *(void **)(param_1 + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 0x194);
  if (*(undefined4 **)(iVar3 + 0x198) == puVar4) {
    FUN_00414080((void *)(iVar3 + 400),puVar4,&local_1e0);
  }
  else {
    *puVar4 = local_1e0;
    *(int *)(iVar3 + 0x194) = *(int *)(iVar3 + 0x194) + 4;
  }
  local_1e4 = (undefined4 *)FUN_005adb0f(0xa8);
  puVar4 = FUN_0042b260(local_1e4);
  *(undefined4 **)(param_1 + 0x24) = puVar4;
  local_1ec = FUN_00551d60;
  local_1e4 = (undefined4 *)param_1;
  FUN_005530e0(puVar4 + 6,&local_1ec);
  local_1e8 = FUN_005522c0;
  local_1e4 = (undefined4 *)param_1;
  FUN_00553180((void *)(*(int *)(param_1 + 0x24) + 0x68),&local_1e8);
  *(undefined1 *)(*(int *)(param_1 + 0x24) + 0xd) = 1;
  local_1e4 = (undefined4 *)FUN_005adb0f(0x150);
  local_8._0_1_ = 3;
  puVar4 = FUN_0042bc30(local_1e4,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x34,
                        *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                        param_1 + 0x34);
  local_8._0_1_ = 0;
  *(undefined4 **)(param_1 + 0x20) = puVar4;
  FUN_00552210(param_1);
  FUN_005522e0(param_1);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_00552460;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 4;
  pvVar1 = (void *)(in_stack_fffffdb4 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_006204f4,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,5);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_00552b50;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 6;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00620518,4);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,7);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_00552680;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 8;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00621464,3);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,9);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  FUN_0053d810(local_54);
  local_1e4 = &ppuStack_234;
  ppuStack_234 = std::_Func_impl_no_alloc<>::vftable;
  pcStack_230 = FUN_005527f0;
  uStack_22c._0_2_ = SUB42(local_1e8,0);
  local_8._0_1_ = 10;
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xfffffdb4,&DAT_00621c54,3);
  local_8._0_1_ = 0;
  puVar5 = FUN_0053cdc0(local_54,pvVar1);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  puVar4 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) == puVar4) {
    FUN_0053fe10((void *)(param_1 + 0x28),puVar4,puVar5);
  }
  else {
    FUN_0053fd40(puVar4,puVar4,puVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x40;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0053d810(local_54);
  FUN_005522e0(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  FUN_00465e40((int)local_1dc);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00551d60(void *this,byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  int in_stack_00000020;
  undefined4 *in_stack_ffffff84;
  void *local_50 [3];
  int local_44 [3];
  byte *local_38;
  void *local_34;
  undefined1 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c57c0;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  local_34 = this;
  FUN_004024e0(local_2c,&param_1);
  local_8._0_1_ = 2;
  uVar11 = 0;
  iVar9 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
  if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar9 != iVar9) {
    iVar9 = 0;
    do {
      FUN_00403640(local_2c,&DAT_005e7468,1);
      pbVar2 = in_stack_0000001c + iVar9;
      pbVar10 = pbVar2;
      if (0xf < *(uint *)(pbVar2 + 0x14)) {
        pbVar10 = *(byte **)pbVar2;
      }
      FUN_00403640(local_2c,pbVar10,*(uint *)(pbVar2 + 0x10));
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + 0x18;
    } while (uVar11 < (uint)((in_stack_00000020 - (int)in_stack_0000001c) / 0x18));
  }
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x20);
  local_8._0_1_ = 3;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8._0_1_ = 2;
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  FUN_0042de40(*(void **)((int)this + 0x20),"`!WEP>`2 %s");
  local_44[1] = 0;
  local_44[2] = 0xf;
  local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
  FUN_00402690(local_50,&PTR_005ce008,0);
  pvVar8 = *(void **)((int)this + 0x20);
  local_8._0_1_ = 4;
  FUN_004024e0(&stack0xffffff84,local_50);
  FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < (uint)local_44[2]) {
    pvVar8 = local_50[0];
    if ((0xfff < local_44[2] + 1U) &&
       (pvVar8 = *(void **)((int)local_50[0] + -4),
       0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar8);
  }
  uVar11 = 0;
  iVar9 = *(int *)((int)this + 0x2c);
  pbVar10 = *(byte **)((int)local_34 + 0x28);
  local_38 = pbVar10;
  if (iVar9 - (int)pbVar10 >> 6 != 0) {
    do {
      ppbVar3 = &param_1;
      if (0xf < in_stack_00000018) {
        ppbVar3 = (byte **)param_1;
      }
      pbVar2 = pbVar10;
      if (0xf < *(uint *)(pbVar10 + 0x14)) {
        pbVar2 = *(byte **)pbVar10;
      }
      uVar4 = FUN_004031f0(pbVar2,*(uint *)(pbVar10 + 0x10),(byte *)ppbVar3,in_stack_00000014);
      if ((char)uVar4 != '\0') {
        FUN_0042b900(local_44,(int *)&stack0x0000001c);
        local_30 = 0;
        local_8 = CONCAT31(local_8._1_3_,5);
        piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x28) + 0x3c);
        if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        (**(code **)(*piVar7 + 8))();
        FUN_004025a0(local_44);
        goto LAB_005520ba;
      }
      uVar11 = uVar11 + 1;
      pbVar10 = pbVar10 + 0x40;
      iVar9 = *(int *)((int)local_34 + 0x2c);
    } while (uVar11 < (uint)(iVar9 - (int)local_38 >> 6));
  }
  pvVar8 = local_34;
  ppbVar3 = &param_1;
  if (0xf < in_stack_00000018) {
    ppbVar3 = (byte **)param_1;
  }
  uVar11 = FUN_004031f0((byte *)ppbVar3,in_stack_00000014,&DAT_00620618,4);
  pbVar10 = local_38;
  if ((char)uVar11 == '\0') {
    local_44[1] = 0;
    local_44[2] = 0xf;
    local_50[0] = (void *)((uint)local_50[0] & 0xffffff00);
    FUN_00402690(local_50,"Unknown command.",0x10);
    pvVar8 = *(void **)((int)pvVar8 + 0x20);
    local_8._0_1_ = 7;
    FUN_004024e0(&stack0xffffff84,local_50);
    FUN_0042d530(pvVar8,*(uint *)((int)pvVar8 + 0x20),in_stack_ffffff84);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < (uint)local_44[2]) {
      pvVar8 = local_50[0];
      if ((0xfff < local_44[2] + 1U) &&
         (pvVar8 = *(void **)((int)local_50[0] + -4),
         0x1f < (uint)((int)local_50[0] + (-4 - (int)pvVar8)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_005adb3f(pvVar8);
    }
LAB_0055217b:
    piVar7 = *(int **)((int)local_34 + 0x20);
  }
  else {
    iVar1 = in_stack_00000020 - (int)in_stack_0000001c >> 0x1f;
    if ((in_stack_00000020 - (int)in_stack_0000001c) / 0x18 + iVar1 == iVar1) {
      FUN_00552eb0((int)pvVar8);
      piVar7 = *(int **)((int)local_34 + 0x20);
    }
    else {
      uVar11 = 0;
      if (iVar9 - (int)local_38 >> 6 == 0) goto LAB_0055217b;
      uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      pbVar2 = local_38;
      do {
        pbVar6 = in_stack_0000001c;
        if (0xf < *(uint *)(in_stack_0000001c + 0x14)) {
          pbVar6 = *(byte **)in_stack_0000001c;
        }
        pbVar5 = pbVar2;
        if (0xf < *(uint *)(pbVar2 + 0x14)) {
          pbVar5 = *(byte **)pbVar2;
        }
        uVar4 = FUN_004031f0(pbVar5,*(uint *)(pbVar2 + 0x10),pbVar6,uVar4);
        if ((char)uVar4 != '\0') {
          FUN_0042b900(local_44,(int *)&stack0x0000001c);
          pvVar8 = local_34;
          local_30 = 1;
          local_8._0_1_ = 6;
          piVar7 = *(int **)(uVar11 * 0x40 + *(int *)((int)local_34 + 0x28) + 0x3c);
          if (piVar7 == (int *)0x0) {
                    // WARNING: Subroutine does not return
            std::_Xbad_function_call();
          }
          (**(code **)(*piVar7 + 8))();
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_004025a0(local_44);
          piVar7 = *(int **)((int)pvVar8 + 0x20);
          goto LAB_005520b5;
        }
        uVar11 = uVar11 + 1;
        pbVar2 = pbVar2 + 0x40;
        uVar4 = *(uint *)(in_stack_0000001c + 0x10);
      } while (uVar11 < (uint)(*(int *)((int)local_34 + 0x2c) - (int)pbVar10 >> 6));
      piVar7 = *(int **)((int)local_34 + 0x20);
    }
  }
LAB_005520b5:
  FUN_0042d280(piVar7);
LAB_005520ba:
  if (0xf < local_18) {
    pvVar8 = local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (pvVar8 = *(void **)((int)local_2c[0] + -4),
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8)))) goto LAB_005520ec;
    FUN_005adb3f(pvVar8);
  }
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  if (0xf < in_stack_00000018) {
    pbVar10 = param_1;
    if ((0xfff < in_stack_00000018 + 1) &&
       (pbVar10 = *(byte **)(param_1 + -4), (byte *)0x1f < param_1 + (-4 - (int)pbVar10))) {
LAB_005520ec:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pbVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (byte *)((uint)param_1 & 0xffffff00);
  FUN_004025a0((int *)&stack0x0000001c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00552210(int param_1)

{
  int iVar1;
  uint in_stack_ffffffd0;
  void *pvVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0x254) + 0x158) == 1)) {
    FUN_0042de40(*(void **)(param_1 + 0x20),"`7Welcome to `$%s");
    pvVar2 = (void *)(in_stack_ffffffd0 & 0xffffff00);
    FUN_00402690(&stack0xffffffd0," `$ Weapons Terminal",0x14);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar2);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
    FUN_004024e0(&stack0xffffffd0,(undefined4 *)(*(int *)(iVar1 + 0x398) + 0x18));
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar2);
    FUN_0042dcd0(*(int *)(param_1 + 0x20));
  }
  return;
}


void __fastcall FUN_005522c0(int param_1)

{
  FUN_005522e0(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  return;
}


void __fastcall FUN_005522e0(int param_1)

{
  undefined4 ****ppppuVar1;
  undefined4 ****ppppuVar2;
  void *pvVar3;
  int iVar4;
  Color3B local_47 [3];
  void *local_44 [4];
  int local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5800;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00591e00((undefined1 *)local_44,"WEP> `%%%s%c");
  local_8 = 0;
  ppppuVar2 = local_2c;
  FUN_00591e00((undefined1 *)ppppuVar2,"`$%dc ");
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = ((*(int *)(*(int *)(param_1 + 0x20) + 0x20) - local_1c) - local_34) + -6;
  if (0 < iVar4) {
    do {
      FUN_00403640(local_44,&DAT_005e7468,1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  ppppuVar1 = local_2c;
  if (0xf < local_18) {
    ppppuVar1 = (undefined4 ****)local_2c[0];
  }
  FUN_00403640(local_44,ppppuVar1,local_1c);
  cocos2d::Color3B::Color3B(local_47,'\0','\0',0xff);
  FUN_004024e0(&stack0xffffff8c,local_44);
  FUN_0042dec0(*(void **)(param_1 + 0x20),(byte *)ppppuVar2);
  if (0xf < local_18) {
    ppppuVar2 = (undefined4 ****)local_2c[0];
    if ((0xfff < local_18 + 1) &&
       (ppppuVar2 = (undefined4 ****)local_2c[0][-1],
       0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar2)))) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(ppppuVar2);
  }
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
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00552460(void *this,char param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 ****ppppuVar6;
  undefined4 ****ppppuVar7;
  undefined **ppuVar8;
  uint in_stack_ffffffa4;
  byte *pbVar9;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_005c6d90;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  ppppuVar6 = (undefined4 ****)(in_stack_ffffffa4 & 0xffffff00);
  if (param_1 == '\0') {
    FUN_00402690(&stack0xffffffa4,"`!Weapons for sale:",0x13);
    FUN_0042ddb0(*(void **)((int)this + 0x20),ppppuVar6);
    FUN_0042de40(*(void **)((int)this + 0x20)," `3cm: Countermeasure`7- `$%dc");
    ppuVar8 = &PTR_DAT_005dfec8;
    do {
      pcVar2 = *ppuVar8;
      pbVar9 = (byte *)((uint)ppppuVar6 & 0xffffff00);
      pcVar5 = pcVar2;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00402690(&stack0xffffffa4,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
      iVar3 = FUN_004a8180(pbVar9);
      if (iVar3 == 0) break;
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (*(int *)(iVar3 + 0x1b4) == 4) {
        FUN_00402690(local_2c,"`!PROBE",7);
      }
      else {
        FUN_00402690(local_2c,&DAT_0061663c,2);
        iVar4 = *(int *)(iVar3 + 0x194);
        if (iVar4 == 1) {
          FUN_00402690(local_2c,&DAT_005e6754,2);
          iVar4 = *(int *)(iVar3 + 0x194);
        }
        pcVar2 = (&PTR_DAT_005dfed8)[iVar4];
        pcVar5 = pcVar2;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00403640(local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
      }
      ppppuVar6 = local_2c;
      if (0xf < local_18) {
        ppppuVar6 = (undefined4 ****)local_2c[0];
      }
      FUN_0042de40(*(void **)((int)this + 0x20)," `3%s: %s`7, %.02fgm/s, yield %.0f `7- `$%dc");
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        ppppuVar7 = (undefined4 ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppuVar7 = (undefined4 ****)local_2c[0][-1],
           0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar7)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppuVar7);
      }
      ppuVar8 = ppuVar8 + 1;
    } while ((int)ppuVar8 < 0x5dfed8);
  }
  else {
    FUN_00402690(&stack0xffffffa4,"`3LIST`2: list all weapons available for sale",0x2d);
    FUN_0042ddb0(*(void **)((int)this + 0x20),ppppuVar6);
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00552680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_stack_ffffffc4;
  void *pvVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pvVar4 = (void *)(in_stack_ffffffc4 & 0xffffff00);
  if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20) == 0) {
    FUN_00402690(&stack0xffffffc4,"`@ ** ERROR: No weapons module",0x1e);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar4);
  }
  else {
    FUN_00402690(&stack0xffffffc4,"`! Weapons:",0xb);
    FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar4);
    iVar2 = 0;
    iVar3 = 0x3c;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
      if ((float)iVar2 < *(float *)(*(int *)(iVar1 + 8) + 0x104)) {
        if (*(int *)(iVar3 + iVar1) == 0) {
          FUN_0042de40(*(void **)(param_1 + 0x20)," `3%d: `8empty");
        }
        else {
          FUN_0042de40(*(void **)(param_1 + 0x20)," `3%d: `7%s");
        }
      }
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar3 < 0x5c);
    if (*(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 8) != 0) {
      FUN_0042dcd0(*(int *)(param_1 + 0x20));
      FUN_0042de40(*(void **)(param_1 + 0x20),"`! Countermeasures: %d / %.0f");
    }
  }
  FUN_004025a0((int *)&stack0x00000008);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_005527f0(void *this,char param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 extraout_ECX;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  void *this_00;
  undefined4 extraout_ECX_00;
  byte *pbVar9;
  undefined **ppuVar10;
  char *pcVar11;
  byte *in_stack_ffffffc0;
  void *pvVar12;
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5908;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = this;
  if (param_1 == '\0') {
    iVar2 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar2 == iVar2) {
      FUN_005527f0(this,'\x01',(byte *)0x0,0);
      goto LAB_00552ae7;
    }
    _param_1 = (undefined4 *)0x0;
    pbVar7 = param_2;
    pbVar5 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar5 = *(byte **)param_2;
      pbVar7 = *(byte **)param_2;
    }
    pbVar9 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar9 = *(byte **)param_2;
    }
    FUN_00413ec0(&local_18,tolower_exref,(char *)pbVar9,(char *)(pbVar7 + *(int *)(param_2 + 0x10)),
                 pbVar5);
    pbVar7 = param_2;
    pbVar5 = param_2;
    if (0xf < *(uint *)(param_2 + 0x14)) {
      pbVar5 = *(byte **)param_2;
    }
    uVar3 = FUN_004031f0(pbVar5,*(uint *)(param_2 + 0x10),&DAT_005e1be0,2);
    if ((char)uVar3 == '\0') {
LAB_005529b4:
      ppuVar10 = &PTR_DAT_005dfec8;
      do {
        pbVar5 = *ppuVar10;
        pbVar9 = pbVar5;
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar1 != 0);
        pbVar6 = pbVar7;
        if (0xf < *(uint *)(pbVar7 + 0x14)) {
          pbVar6 = *(byte **)pbVar7;
        }
        uVar3 = FUN_004031f0(pbVar6,*(uint *)(pbVar7 + 0x10),pbVar5,(int)pbVar9 - (int)(pbVar5 + 1))
        ;
        if ((char)uVar3 != '\0') {
          in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
          pbVar7 = pbVar5;
          do {
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar1 != 0);
          FUN_00402690(&stack0xffffffc0,pbVar5,(int)pbVar7 - (int)(pbVar5 + 1));
          _param_1 = (undefined4 *)FUN_004a8180(in_stack_ffffffc0);
          pbVar7 = param_2;
          if (_param_1 == (undefined4 *)0x0) goto LAB_00552ae7;
        }
        ppuVar10 = ppuVar10 + 1;
      } while ((int)ppuVar10 < 0x5dfed8);
      if (_param_1 == (undefined4 *)0x0) {
        uVar3 = 0x14;
        pcVar11 = "`$ ** Unknown weapon";
      }
      else {
        if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < (int)_param_1[0x68])
        goto LAB_0055290d;
        iVar2 = *(int *)(*(int *)((int)*(void **)(DAT_0065b5cc + 0xd0) + 0x40) + 0x20);
        if (iVar2 == 0) {
          uVar3 = 0x16;
          pcVar11 = "`$ ** No weapon system";
        }
        else {
          iVar8 = 0;
          piVar4 = (int *)(iVar2 + 0x3c);
          do {
            if (((float)iVar8 < *(float *)(*(int *)(iVar2 + 8) + 0x104)) && (*piVar4 == 0)) {
              FUN_0050f740(*(void **)(DAT_0065b5cc + 0xd0),(int)_param_1,0xffffffff);
              FUN_004024e0(&stack0xffffffc0,_param_1);
              FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX_00,-_param_1[0x68],
                           in_stack_ffffffc0);
              FUN_0042de40(*(void **)((int)local_14 + 0x20),"`7 Purchased `%%%s`7 for `$%dc");
              goto LAB_00552ae7;
            }
            iVar8 = iVar8 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar8 < 8);
          uVar3 = 0x1f;
          pcVar11 = "`$ ** No empty tubes for weapon";
        }
      }
    }
    else if (*(int *)(*(int *)(DAT_0065b5cc + 0x124) + 0x1c) < 0x32) {
LAB_0055290d:
      uVar3 = 0x1d;
      pcVar11 = "`$ ** Not enough money to buy";
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x40) + 8);
      if (iVar2 == 0) {
        uVar3 = 0x14;
        pcVar11 = "`$ ** No CM launcher";
      }
      else {
        if ((float)*(int *)(iVar2 + 0x68) < *(float *)(*(int *)(iVar2 + 8) + 0x104)) {
          *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 1;
          in_stack_ffffffc0 = (byte *)((uint)in_stack_ffffffc0 & 0xffffff00);
          FUN_00402690(&stack0xffffffc0,&DAT_0060c3d8,2);
          FUN_004817b0(*(void **)(DAT_0065b5cc + 0x124),extraout_ECX,0xffffffce,in_stack_ffffffc0);
          FUN_0042de40(*(void **)((int)local_14 + 0x20),"`7 Purchased `%%cm`7 for `$%dc");
          pbVar7 = param_2;
          goto LAB_005529b4;
        }
        uVar3 = 0x1e;
        pcVar11 = "`$ ** Not enough space to load";
      }
    }
    pvVar12 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,pcVar11,uVar3);
    this_00 = *(void **)((int)local_14 + 0x20);
  }
  else {
    pvVar12 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
    FUN_00402690(&stack0xffffffc0,"`3BUY [weapon]`2: purchase a weapon",0x23);
    this_00 = *(void **)((int)this + 0x20);
  }
  FUN_0042ddb0(this_00,pvVar12);
LAB_00552ae7:
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  return;
}


void __thiscall FUN_00552b50(void *this,char param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  byte *pbVar6;
  byte *in_stack_ffffffa8;
  byte *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c5870;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == '\0') {
    iVar2 = param_3 - (int)param_2 >> 0x1f;
    if ((param_3 - (int)param_2) / 0x18 + iVar2 == iVar2) {
      FUN_00552b50(this,'\x01',(byte *)0x0,0);
    }
    else {
      uVar1 = *(uint *)(param_2 + 0x14);
      pbVar4 = param_2;
      if (0xf < uVar1) {
        pbVar4 = *(byte **)param_2;
      }
      local_30 = param_2;
      if (0xf < uVar1) {
        local_30 = *(byte **)param_2;
      }
      pbVar6 = param_2;
      if (0xf < uVar1) {
        pbVar6 = *(byte **)param_2;
      }
      FUN_00413ec0(&local_30,tolower_exref,(char *)pbVar6,
                   (char *)(local_30 + *(int *)(param_2 + 0x10)),pbVar4);
      pbVar6 = param_2;
      pbVar4 = param_2;
      if (0xf < *(uint *)(param_2 + 0x14)) {
        pbVar4 = *(byte **)param_2;
      }
      uVar1 = FUN_004031f0(pbVar4,*(uint *)(param_2 + 0x10),&DAT_005e1be0,2);
      if ((char)uVar1 == '\0') {
        FUN_004024e0(&stack0xffffffa8,(undefined4 *)pbVar6);
        iVar2 = FUN_004a8180(in_stack_ffffffa8);
        if (iVar2 != 0) {
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          local_8 = CONCAT31(local_8._1_3_,1);
          if (*(int *)(iVar2 + 0x1b4) == 4) {
            FUN_00402690(local_2c,"`!Probe",7);
          }
          else {
            FUN_00402690(local_2c,&DAT_0061663c,2);
            iVar3 = *(int *)(iVar2 + 0x194);
            if (iVar3 == 1) {
              FUN_00402690(local_2c,&DAT_005e6754,2);
              iVar3 = *(int *)(iVar2 + 0x194);
            }
            SimpleString::operator=((SimpleString *)local_2c,(&PTR_s_Explosive_005dfef0)[iVar3]);
          }
          pvVar5 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
          FUN_00402690(&stack0xffffffa8,"`! ** Weapon Details ** ",0x18);
          FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
          FUN_0042dcd0(*(int *)((int)this + 0x20));
          FUN_0042de40(*(void **)((int)this + 0x20),"`3Name  : `!%s");
          FUN_0042de40(*(void **)((int)this + 0x20),"`3Manuf.: `!%s");
          pvVar5 = *(void **)((int)this + 0x20);
          FUN_0042de40(pvVar5,"`3Payld.: %s");
          if (*(int *)(iVar2 + 0x1b4) == 4) {
            pvVar5 = (void *)((uint)pvVar5 & 0xffffff00);
            FUN_00402690(&stack0xffffffa8,"`3Size  : `8n/a",0xf);
            FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
          }
          else {
            FUN_0042de40(*(void **)((int)this + 0x20),"`3Size  : `!%.0f");
          }
          FUN_0042de40(*(void **)((int)this + 0x20),"`3Speed : `!%.2fgm/s");
          FUN_0042de40(*(void **)((int)this + 0x20),"`3Cost  : `$%dc");
          FUN_0042dcd0(*(int *)((int)this + 0x20));
          if (0xf < local_18) {
            pvVar5 = local_2c[0];
            if ((0xfff < local_18 + 1) &&
               (pvVar5 = *(void **)((int)local_2c[0] + -4),
               0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar5)))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_005adb3f(pvVar5);
          }
        }
      }
      else {
        pvVar5 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
        FUN_00402690(&stack0xffffffa8,"`! ** Weapon Details ** ",0x18);
        FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
        FUN_0042dcd0(*(int *)((int)this + 0x20));
        FUN_0042de40(*(void **)((int)this + 0x20),"`3Name  : `!Countermeasure");
        FUN_0042de40(*(void **)((int)this + 0x20),"`3Cost  : `$%dc");
      }
    }
  }
  else {
    pvVar5 = (void *)((uint)in_stack_ffffffa8 & 0xffffff00);
    FUN_00402690(&stack0xffffffa8,
                 "`3INFO [weapon]`2: get detailed information about a weapon for sale",0x43);
    FUN_0042ddb0(*(void **)((int)this + 0x20),pvVar5);
  }
  FUN_004025a0((int *)&param_2);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __fastcall FUN_00552eb0(int param_1)

{
  void *pvVar1;
  uint in_stack_ffffffa8;
  undefined4 *puVar2;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c5840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar1 = (void *)(in_stack_ffffffa8 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,&PTR_005ce008,0);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar1);
  pvVar1 = (void *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`%Weapon Terminal 3.0.1 `7(c) by Purchase Tech",0x2e);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),pvVar1);
  puVar2 = (undefined4 *)((uint)pvVar1 & 0xffffff00);
  FUN_00402690(&stack0xffffffa8,"`0Valid commands:",0x11);
  FUN_0042ddb0(*(void **)(param_1 + 0x20),puVar2);
  local_14 = 0;
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 6 != 0) {
    do {
      FUN_00591e00((undefined1 *)local_30,&DAT_005e7500);
      pvVar1 = *(void **)(param_1 + 0x20);
      local_8 = 0;
      FUN_004024e0(&stack0xffffffa8,local_30);
      FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
        pvVar1 = local_30[0];
        if ((0xfff < local_1c + 1) &&
           (pvVar1 = *(void **)((int)local_30[0] + -4),
           0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) goto LAB_00553072;
        FUN_005adb3f(pvVar1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 6));
  }
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  FUN_00402690(local_30,"`3HELP",6);
  pvVar1 = *(void **)(param_1 + 0x20);
  local_8 = 1;
  FUN_004024e0(&stack0xffffffa8,local_30);
  FUN_0042d530(pvVar1,*(uint *)((int)pvVar1 + 0x20),puVar2);
  if (0xf < local_1c) {
    pvVar1 = local_30[0];
    if ((0xfff < local_1c + 1) &&
       (pvVar1 = *(void **)((int)local_30[0] + -4),
       0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar1)))) {
LAB_00553072:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar1);
  }
  ExceptionList = local_10;
  return;
}


void __fastcall FUN_005530a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0x20);
  puVar2 = (undefined4 *)piVar1[2];
  FUN_004028b0((int *)*puVar2,(int *)puVar2[1]);
  puVar2[1] = *puVar2;
  FUN_0042d280(piVar1);
  FUN_00552210(param_1);
  FUN_005522e0(param_1);
  FUN_0042d280(*(int **)(param_1 + 0x20));
  return;
}


void __thiscall FUN_005530e0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = *(undefined1 *)(param_1 + 1);
  local_33 = *(undefined1 *)((int)param_1 + 5);
  local_30 = param_1[2];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


void __thiscall FUN_00553180(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined ***local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c4940;
  local_10 = ExceptionList;
  uVar1 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = std::_Func_impl_no_alloc<>::vftable;
  local_38 = *param_1;
  local_34 = param_1[1];
  local_18 = &local_3c;
  local_14 = uVar1;
  FUN_0042e080(local_18,this);
  local_8 = 0;
  if (local_18 != (undefined ***)0x0) {
    (*(code *)(*local_18)[4])(local_18 != &local_3c,uVar1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


TypeDescriptor * FUN_00553210(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_00553220(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


TypeDescriptor * FUN_00553250(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


void __thiscall FUN_00553260(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  return;
}


TypeDescriptor * FUN_00553280(void)

{
  return &std::_Binder<>::RTTI_Type_Descriptor;
}


undefined4 * __thiscall FUN_00553290(void *this,undefined4 *param_1)

{
  *param_1 = std::_Func_impl_no_alloc<>::vftable;
  param_1[1] = *(undefined4 *)((int)this + 4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)this + 9);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  return param_1;
}


void FUN_005532c0(void)

{
  return;
}


bool __fastcall FUN_005532d0(int param_1)

{
  return *(int *)(param_1 + 0x41c) != -1;
}


undefined4 __fastcall FUN_005532e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x41c);
}


undefined1 * FUN_005532f0(undefined1 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6f19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  FUN_00402690(param_1,&PTR_005ce008,0);
  ExceptionList = local_10;
  return param_1;
}


undefined4 __fastcall FUN_00553350(int param_1)

{
  return *(undefined4 *)(param_1 + 0x420);
}


void FUN_00553360(void)

{
  return;
}


Node * __thiscall FUN_00553370(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005c6f49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cocos2d::Node::Node(this);
  local_8 = 0;
  *(undefined4 *)((int)this + 0x278) = param_1;
  *(undefined ***)this = ScreenElement::vftable;
  *(undefined1 *)((int)this + 0x27c) = 1;
  *(undefined4 *)((int)this + 0x280) = 0xffffffff;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = param_3;
  FUN_0047f520((void *)((int)this + 0x290),param_2);
  *(undefined2 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x420) = 0;
  ExceptionList = local_10;
  return this;
}


Node * __thiscall FUN_00553420(void *this,byte param_1)

{
  *(undefined ***)this = ScreenElement::vftable;
  FUN_00465e40((int)this + 0x290);
  cocos2d::Node::~Node(this);
  if ((param_1 & 1) != 0) {
    FUN_005adb3f(this);
  }
  return this;
}


void __fastcall FUN_00553460(Node *param_1)

{
  *(undefined ***)param_1 = ScreenElement::vftable;
  FUN_00465e40((int)(param_1 + 0x290));
                    // WARNING: Could not recover jumptable at 0x00553477. Too many branches
                    // WARNING: Treating indirect jump as call
  cocos2d::Node::~Node(param_1);
  return;
}


void __thiscall FUN_00553480(void *this,undefined4 param_1)

{
  *(char *)((int)this + 0x27c) = (char)param_1;
  (**(code **)(*(int *)this + 0xb4))(param_1);
  **(undefined1 **)((int)this + 0x288) = 1;
  return;
}


bool __fastcall FUN_005534b0(int *param_1)

{
  bool bVar1;
  Rect *this;
  Rect local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005c6f82;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  this = (Rect *)(**(code **)(*param_1 + 0x1b4))(local_20,DAT_0065500c ^ (uint)&stack0xfffffffc);
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar1 = cocos2d::Rect::containsPoint(this,(Vec2 *)&stack0x00000004);
  cocos2d::Rect::~Rect(local_20);
  ExceptionList = local_10;
  return bVar1;
}


undefined4 * __thiscall
FUN_00553520(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            int param_5,int param_6,int param_7)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint extraout_ECX;
  undefined4 *puVar9;
  byte *in_stack_ffffffc0;
  char *pcVar10;
  byte bVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005c71a5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = ScreenInterface::vftable;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x51) = param_3;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x70) = 1;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0xf;
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0xf;
  *(undefined1 *)((int)this + 0xa0) = 0;
  local_8 = 5;
  uStack_7 = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0xf;
  *(undefined1 *)((int)this + 0xb8) = 0;
  FUN_00402690((void *)((int)this + 0xb8),"%c_MouseCursor.png",0x12);
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0xf;
  *(undefined1 *)((int)this + 0xd0) = 0;
  local_8 = 7;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  cocos2d::Color3B::Color3B((Color3B *)((int)this + 0xf8));
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0xf;
  *(undefined1 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x11c) = param_4;
  *(undefined1 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 4;
  *(undefined4 *)((int)this + 0x128) = param_2;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0xf;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined1 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0x42800000;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined1 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(int *)((int)this + 0x180) = param_7;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = param_1;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  local_8 = 0xc;
  uVar2 = local_8;
  local_8 = 0xc;
  *(undefined4 *)((int)this + 0x19c) = 0;
  if (param_7 != 0) {
    *(undefined4 *)((int)this + 0x128) = 0;
  }
  if (param_5 == -1) {
    bVar3 = cc_assert_script_compatible("ERROR");
    if (bVar3) {
      ExceptionList = local_10;
      return this;
    }
    cocos2d::log("Assert failed: %s");
    ExceptionList = local_10;
    return this;
  }
  *(int *)((int)this + 0x60) = param_5;
  *(int *)((int)this + 0x68) = param_5;
  *(int *)((int)this + 100) = param_6;
  if (*(char *)((int)this + 0x51) == '\0') {
    *(int *)((int)this + 0x6c) = param_6;
  }
  else {
    *(int *)((int)this + 0x6c) = param_6 + 0xc;
  }
  iVar1 = *(int *)((int)this + 0x17c);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x54) = param_5;
    *(undefined4 *)(iVar1 + 0x58) = 0xc;
  }
  iVar1 = *(int *)((int)this + 0x128);
  if (iVar1 == 1) {
    puVar4 = (undefined4 *)FUN_005adb0f(0x44);
    puVar4[1] = 0;
    *(undefined1 *)(puVar4 + 2) = 0;
    puVar4[3] = this;
    puVar4[4] = 0;
    *puVar4 = Screen_Terminal::vftable;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    _local_8 = CONCAT31(uStack_7,0x10);
    FUN_00402690((void *)((int)this + 0x30),"SysTerm",7);
    *(undefined1 *)(puVar4 + 1) = 1;
LAB_00553c7f:
    *(undefined2 *)((int)puVar4 + 7) = 0x101;
  }
  else {
    local_8 = uVar2;
    if (iVar1 == 3) {
      pvVar6 = (void *)FUN_005adb0f(0x50);
      local_8 = 0x11;
      uVar5 = FUN_005450b0(pvVar6,(int)this,param_5,param_6);
      *(undefined4 *)((int)this + 300) = uVar5;
      goto LAB_00553c8f;
    }
    if (iVar1 != 0) {
      if (iVar1 == 4) {
        puVar4 = (undefined4 *)FUN_005adb0f(0x4c);
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = this;
        puVar4[4] = 0;
        *puVar4 = Screen_TradeTerminal::vftable;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        uVar8 = 5;
        _local_8 = CONCAT31(uStack_7,0x18);
        pcVar10 = "Trade";
LAB_00553c65:
        puVar4[0x10] = 0xffffffff;
        puVar4[0x11] = 0;
        *(undefined1 *)(puVar4 + 0x12) = 0;
      }
      else if (iVar1 == 5) {
        puVar4 = (undefined4 *)FUN_005adb0f(0x48);
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = this;
        puVar4[4] = 0;
        *puVar4 = Screen_UpgradeTerminal::vftable;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        uVar8 = 8;
        _local_8 = CONCAT31(uStack_7,0x1c);
        puVar4[0x11] = 0xffffffff;
        pcVar10 = "Mechanic";
      }
      else {
        if (iVar1 != 6) {
          if (iVar1 == 7) {
            puVar4 = (undefined4 *)FUN_005adb0f(0x30);
            puVar4[1] = 0;
            *(undefined1 *)(puVar4 + 2) = 0;
            puVar4[3] = this;
            puVar4[4] = 0;
            *puVar4 = Screen_RTComms::vftable;
            puVar4[7] = 0;
            puVar4[8] = 0;
            puVar4[9] = 0;
            puVar4[10] = 0;
            puVar4[0xb] = 0;
            _local_8 = CONCAT31(uStack_7,0x23);
            FUN_00402690((void *)((int)this + 0x30),"RTComms",7);
            iVar1 = DAT_0065b5cc;
            *(undefined1 *)((int)puVar4 + 7) = 1;
            *(undefined1 *)(puVar4 + 1) = 1;
            *(undefined4 *)(puVar4[3] + 0x188) =
                 *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0xd0) + 0x40) + 0x1c);
            goto LAB_00553c85;
          }
          if (iVar1 != 8) goto LAB_00553c8f;
          puVar4 = (undefined4 *)FUN_005adb0f(0x4c);
          puVar4[1] = 0;
          *(undefined1 *)(puVar4 + 2) = 0;
          puVar4[3] = this;
          puVar4[4] = 0;
          *puVar4 = Screen_WeaponTerminal::vftable;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          puVar4[10] = 0;
          puVar4[0xb] = 0;
          puVar4[0xc] = 0;
          puVar4[0xd] = 0;
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
          uVar8 = 7;
          _local_8 = CONCAT31(uStack_7,0x27);
          pcVar10 = "Weapons";
          goto LAB_00553c65;
        }
        puVar4 = (undefined4 *)FUN_005adb0f(0x40);
        puVar4[1] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = this;
        puVar4[4] = 0;
        *puVar4 = Screen_ContractTerminal::vftable;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        uVar8 = 9;
        _local_8 = CONCAT31(uStack_7,0x20);
        pcVar10 = "Contracts";
      }
      FUN_00402690((void *)((int)this + 0x30),pcVar10,uVar8);
      goto LAB_00553c7f;
    }
    puVar4 = (undefined4 *)FUN_005adb0f(0x2c);
    puVar4[1] = 0x1000000;
    *(undefined1 *)(puVar4 + 2) = 0;
    puVar4[3] = this;
    *puVar4 = Screen_Custom::vftable;
    *(undefined1 *)((int)puVar4 + 0x15) = 1;
    puVar4[6] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    _local_8 = CONCAT31(uStack_7,0x14);
    puVar4[4] = param_7;
    puVar9 = (undefined4 *)(param_7 + 0x30);
    if ((undefined4 *)((int)this + 0x30) != puVar9) {
      if (0xf < *(uint *)(param_7 + 0x44)) {
        puVar9 = (undefined4 *)*puVar9;
      }
      FUN_00402690((undefined4 *)((int)this + 0x30),puVar9,*(uint *)(param_7 + 0x40));
      param_7 = puVar4[4];
    }
    iVar1 = *(int *)(param_7 + 0x54);
    *(int *)((int)this + 0x184) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(puVar4 + 2) = 1;
    }
  }
LAB_00553c85:
  *(undefined4 **)((int)this + 300) = puVar4;
LAB_00553c8f:
  local_8 = 0xc;
  FUN_00554320((int)this);
  if (*(int **)((int)this + 300) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 300) + 4))();
  }
  FUN_004024e0(&stack0xffffffc0,(undefined4 *)((int)this + 0xb8));
  FUN_005543f0(this,in_stack_ffffffc0);
  if (*(int *)(*(int *)((int)this + 300) + 0x10) == 0) {
    pvVar6 = (void *)FUN_005adb0f(0x88);
    _local_8 = CONCAT31(uStack_7,0x29);
    bVar11 = 0;
    uVar8 = extraout_ECX;
  }
  else {
    pvVar6 = (void *)FUN_005adb0f(0x88);
    _local_8 = CONCAT31(uStack_7,0x28);
    bVar11 = *(byte *)(*(int *)(*(int *)((int)this + 300) + 0x10) + 0x58);
    uVar8 = (uint)bVar11;
  }
  puVar7 = FUN_00560310(pvVar6,uVar8,bVar11);
  *(undefined1 **)((int)this + 0x17c) = puVar7;
  *(undefined4 *)((int)this + 0x19c) = *(undefined4 *)(puVar7 + 0x2c);
  *(undefined4 *)(puVar7 + 0x54) = *(undefined4 *)((int)this + 0x68);
  *(undefined4 *)(puVar7 + 0x58) = 0xc;
  *(undefined1 *)((int)this + 0x70) = 1;
  ExceptionList = local_10;
  return this;
}


void __fastcall FUN_00553d40(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005c71c0;
  local_10 = ExceptionList;
  uVar2 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ScreenInterface::vftable;
  FUN_00554320((int)param_1);
  if ((int *)param_1[0x48] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x48] + 0x138))(1,uVar2);
    cocos2d::Ref::autorelease((Ref *)param_1[0x48]);
    param_1[0x48] = 0;
  }
  if ((int *)param_1[0x3a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3a] + 0x138))(1);
    cocos2d::Ref::autorelease((Ref *)param_1[0x3a]);
    param_1[0x3a] = 0;
  }
  if ((int *)param_1[0x3d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3d] + 0x138))(1);
    cocos2d::Ref::autorelease((Ref *)param_1[0x3d]);
    param_1[0x3d] = 0;
  }
  if ((int *)param_1[0x55] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x55] + 0x138))(1);
    cocos2d::Ref::autorelease((Ref *)param_1[0x55]);
    param_1[0x55] = 0;
  }
  if ((int *)param_1[0x56] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x56] + 0x138))(1);
    cocos2d::Ref::autorelease((Ref *)param_1[0x56]);
    param_1[0x56] = 0;
  }
  if ((int *)param_1[0x4b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4b] + 0x10))();
    if ((undefined4 *)param_1[0x4b] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x4b])(1);
    }
    param_1[0x4b] = 0;
  }
  if ((int *)param_1[0x3b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3b] + 0x138))(1);
    param_1[0x3b] = 0;
  }
  if ((int *)param_1[0x3c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3c] + 0x138))(1);
    param_1[0x3c] = 0;
  }
  if ((int *)param_1[0x3d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3d] + 0x138))(1);
    param_1[0x3d] = 0;
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0x138))(1);
    param_1[10] = 0;
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0x138))(1);
    param_1[0xb] = 0;
  }
  pvVar1 = (void *)param_1[100];
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (param_1[0x66] - (int)pvVar1 & 0xfffffffcU)) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005541db;
    FUN_005adb3f(pvVar3);
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
  }
  if (0xf < (uint)param_1[0x51]) {
    pvVar1 = (void *)param_1[0x4c];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[0x51] + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005541db;
    FUN_005adb3f(pvVar3);
  }
  param_1[0x50] = 0;
  param_1[0x51] = 0xf;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (0xf < (uint)param_1[0x44]) {
    pvVar1 = (void *)param_1[0x3f];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[0x44] + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005541db;
    FUN_005adb3f(pvVar3);
  }
  param_1[0x43] = 0;
  param_1[0x44] = 0xf;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  if (0xf < (uint)param_1[0x39]) {
    pvVar1 = (void *)param_1[0x34];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[0x39] + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005541db;
    FUN_005adb3f(pvVar3);
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (0xf < (uint)param_1[0x33]) {
    pvVar1 = (void *)param_1[0x2e];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[0x33] + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005541db;
    FUN_005adb3f(pvVar3);
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0xf;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  if (0xf < (uint)param_1[0x2d]) {
    pvVar1 = (void *)param_1[0x28];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[0x2d] + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005541db;
    FUN_005adb3f(pvVar3);
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0xf;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_0047d7d0(param_1 + 0x25);
  if (0xf < (uint)param_1[0x22]) {
    pvVar1 = (void *)param_1[0x1d];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[0x22] + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005541db;
    FUN_005adb3f(pvVar3);
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0xf;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (0xf < (uint)param_1[0x11]) {
    pvVar1 = (void *)param_1[0xc];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[0x11] + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))))
    goto LAB_005541db;
    FUN_005adb3f(pvVar3);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (0xf < (uint)param_1[6]) {
    pvVar1 = (void *)param_1[1];
    pvVar3 = pvVar1;
    if ((0xfff < param_1[6] + 1) &&
       (pvVar3 = *(void **)((int)pvVar1 + -4), 0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3)))) {
LAB_005541db:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar3);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  ExceptionList = local_10;
  return;
}
