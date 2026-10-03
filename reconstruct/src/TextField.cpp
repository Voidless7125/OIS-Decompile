// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __thiscall TextField::cleanupRender(TextField *this)
void TextField::cleanupRender()

{
  TextField *pTVar1;
  int iVar2;
  TextField *pTVar3;
  int iVar4;
  
  if ((!OISConfiguration::alernateTextRendering) && (*(int **)((char *)this + 0x15bfc) != (int *)0x0)) {
    (**(code **)(**(int **)((char *)this + 0x15bfc) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x15bfc) = 0;
  }
  pTVar3 = this + 0x11d7c;
  iVar4 = 0x50;
  do {
    iVar2 = 0x32;
    pTVar1 = pTVar3;
    do {
      *(undefined4 *)pTVar1 = 0;
      pTVar1 = pTVar1 + 0x140;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    pTVar3 = pTVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


// Ghidra: void __thiscall TextField::setText(TextField *this,undefined4 param_1,int param_2,undefined4 *param_4)
void TextField::setText(undefined4 param_1, int param_2, undefined4 * param_4)

{
  char cVar1;
  undefined4 *puVar2;
  nothrow_t *pnVar3;
  TextField TVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint local_1c;
  undefined2 local_14;
  TextField local_12;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c9d28;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  ((char *)this)[0x428] = (byte)0x1;
  cocos2d::Color3B::Color3B((Color3B *)&local_14,'X',0xa1,'^');
  iVar5 = -1;
  local_1c = 0;
  TVar4 = local_12;
  uVar7 = local_14;
  if (in_stack_0000001c != 0) {
    do {
      puVar2 = &param_4;
      if (0xf < in_stack_00000020) {
        puVar2 = param_4;
      }
      if (*(char *)((int)puVar2 + local_1c) == '`') {
        if (in_stack_0000001c <= local_1c) break;
        puVar2 = &param_4;
        if (0xf < in_stack_00000020) {
          puVar2 = param_4;
        }
        cVar1 = *(char *)((int)puVar2 + local_1c + 1);
        iVar6 = iVar5;
        if (cVar1 == 'b') {
          local_1c = local_1c + 1;
          local_14 = colours._0_2_;
          local_12 = colours._2_1_;
          TVar4 = colours._2_1_;
          uVar7 = colours._0_2_;
        }
        else if ((byte)(cVar1 - 0x31U) < 9) {
          local_1c = local_1c + 1;
          uVar7 = *(undefined2 *)(&DAT_0065d948 + cVar1 * 3);
          TVar4 = *(TextField *)(&DAT_0065d94a + cVar1 * 3);
          local_14 = uVar7;
          local_12 = TVar4;
        }
        else if (cVar1 == '0') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065d9f6;
          local_12 = DAT_0065d9f8;
          TVar4 = DAT_0065d9f8;
          uVar7 = DAT_0065d9f6;
        }
        else if (cVar1 == '!') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065d9f9;
          local_12 = DAT_0065d9fb;
          TVar4 = DAT_0065d9fb;
          uVar7 = DAT_0065d9f9;
        }
        else if (cVar1 == '@') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065d9fc;
          local_12 = DAT_0065d9fe;
          TVar4 = DAT_0065d9fe;
          uVar7 = DAT_0065d9fc;
        }
        else if (cVar1 == '#') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065d9ff;
          local_12 = DAT_0065da01;
          TVar4 = DAT_0065da01;
          uVar7 = DAT_0065d9ff;
        }
        else if (cVar1 == '$') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065da02;
          local_12 = DAT_0065da04;
          TVar4 = DAT_0065da04;
          uVar7 = DAT_0065da02;
        }
        else if (cVar1 == '%') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065da05;
          local_12 = DAT_0065da07;
          TVar4 = DAT_0065da07;
          uVar7 = DAT_0065da05;
        }
        else if (cVar1 == '^') {
          local_1c = local_1c + 1;
          local_14 = DAT_0065da08;
          local_12 = DAT_0065da0a;
          TVar4 = DAT_0065da0a;
          uVar7 = DAT_0065da08;
        }
        else {
          local_1c = local_1c + 1;
          local_14 = DAT_0065d9ed;
          local_12 = DAT_0065d9ef;
          TVar4 = DAT_0065d9ef;
          uVar7 = DAT_0065d9ed;
        }
      }
      else {
        iVar6 = iVar5 + 1;
        if (*(int *)((char *)this + 0x42c) <= iVar6) break;
        puVar2 = &param_4;
        if (0xf < in_stack_00000020) {
          puVar2 = param_4;
        }
        this[(iVar6 + param_2 * 0x50) * 7 + 0x719c] = *(TextField *)((int)puVar2 + local_1c);
        *(undefined2 *)(this + (iVar5 + 0x103c + param_2 * 0x50) * 7) = uVar7;
        (this + (iVar5 + 0x103c + param_2 * 0x50) * 7)[2] = TVar4;
      }
      local_1c = local_1c + 1;
      iVar5 = iVar6;
    } while (local_1c < in_stack_0000001c);
  }
  if (0xf < in_stack_00000020) {
    pnVar3 = (nothrow_t *)(in_stack_00000020 + 1);
    puVar2 = param_4;
    if ((nothrow_t *)0xfff < pnVar3) {
      puVar2 = (undefined4 *)param_4[-1];
      pnVar3 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if (0x1f < (uint)((int)param_4 + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar2,pnVar3);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall TextField::update(TextField *this)
void TextField::update()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  TextField TVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  uint uVar5;
  Sprite *pSVar6;
  int iVar7;
  DelayTime *pDVar8;
  FadeOut *pFVar9;
  DelayTime *pDVar10;
  FadeIn *pFVar11;
  Sequence *pSVar12;
  RepeatForever *pRVar13;
  Color3B *pCVar14;
  float *pfVar15;
  char *pcVar16;
  void *pvVar17;
  int *piVar18;
  nothrow_t *pnVar19;
  TextField *pTVar20;
  int iVar21;
  undefined4 uVar22;
  Color3B local_73 [3];
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  TextField *local_50;
  TextField *local_4c;
  TextField *local_48;
  int local_44;
  int local_40;
  int local_3c;
  char *local_38;
  int local_34;
  int local_30;
  void *local_2c [4];
  int *local_1c;
  uint local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c9d8c;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar5 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_14 = uVar5;
  if ((((char *)this)[0x428] != (byte)0x0) && (*(int *)((char *)this + 0x288) != 0)) {
    local_40 = 0;
    local_4c = this + 0x11d7c;
    local_44 = 7;
    pTVar20 = this + 0x719c;
    local_30 = 0x475f;
    do {
      local_34 = 0;
      local_3c = 0;
      local_50 = pTVar20;
      local_48 = local_4c;
      do {
        iVar7 = local_34;
        TVar1 = *pTVar20;
        if ((TVar1 == (byte)0x0) || (TVar1 == (byte)0x20)) {
          if (*(int **)(this + (local_30 + local_34) * 4) != (int *)0x0) {
            (**(code **)(**(int **)(this + (local_30 + local_34) * 4) + 0x138))(1,uVar5);
            *(undefined4 *)(this + (local_30 + iVar7) * 4) = 0;
          }
        }
        else if (TVar1 != pTVar20[-28000]) {
          iVar21 = local_34 + local_30;
          if (*(int **)(this + iVar21 * 4) != (int *)0x0) {
            (**(code **)(**(int **)(this + iVar21 * 4) + 0x138))(1);
            *(undefined4 *)(this + iVar21 * 4) = 0;
          }
          local_1c = (int *)0x0;
          local_18 = 0xf;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
          if (OISConfiguration::alernateTextRendering == false) {
            pcVar3 = (&PTR_s_CHAR_unknown_png_005e2a48)[(char)*pTVar20];
            local_38 = pcVar3 + 1;
            pcVar16 = pcVar3;
            do {
              cVar2 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar2 != '\0');
            ghidra::str::assign
                      ((std::string *)local_2c,pcVar3,(int)pcVar16 - (int)local_38);
            // [seh] local_8 = 1;
            pSVar6 = cocos2d::Sprite::createWithSpriteFrameName((std::string *)local_2c);
          }
          else {
            pcVar3 = (&PTR_s_CHAR_unknown_png_005e27d8)[(char)*pTVar20];
            local_38 = pcVar3 + 1;
            pcVar16 = pcVar3;
            do {
              cVar2 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar2 != '\0');
            ghidra::str::assign
                      ((std::string *)local_2c,pcVar3,(int)pcVar16 - (int)local_38);
            // [seh] local_8 = 0;
            pSVar6 = cocos2d::Sprite::create((std::string *)local_2c);
          }
          // [seh] local_8 = 0xffffffff;
          *(Sprite **)(this + iVar21 * 4) = pSVar6;
          if (0xf < local_18) {
            pnVar19 = (nothrow_t *)(local_18 + 1);
            pvVar17 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar19) {
              pvVar17 = *(void **)((int)local_2c[0] + -4);
              pnVar19 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17))) goto LAB_00561f7c;
            }
            operator_delete(pvVar17,pnVar19);
          }
          local_58 = 0;
          local_54 = 0;
          // [seh] local_8 = 2;
          (**(code **)(**(int **)local_48 + 0xa0))(&local_58);
          // [seh] local_8 = 0xffffffff;
          (**(code **)(**(int **)(this + iVar21 * 4) + 0x25c))(pTVar20 + 1);
          iVar7 = (**(code **)(*(int *)this + 0xb0))();
          local_60 = (float)(int)((float)local_3c + *(float *)((char *)this + 0x434));
          local_5c = (float)(int)(*(float *)((char *)this + 0x438) +
                                 ((*(float *)(iVar7 + 4) - (float)local_44) - (float)local_40));
          // [seh] local_8 = 3;
          (**(code **)(**(int **)(this + iVar21 * 4) + 0x4c))(&local_60);
          // [seh] local_8 = 0xffffffff;
          if (OISConfiguration::alernateTextRendering == false) {
            iVar7 = **(int **)((char *)this + 0x15bfc);
          }
          else {
            iVar7 = *(int *)this;
          }
          (**(code **)(iVar7 + 0x10c))(*(undefined4 *)(this + iVar21 * 4));
          iVar7 = local_34;
          if (*pTVar20 == (byte)0x3) {
            uVar22 = 0;
            pDVar8 = cocos2d::DelayTime::create(0.4);
            pFVar9 = cocos2d::FadeOut::create(0.01);
            pDVar10 = cocos2d::DelayTime::create(0.4);
            pFVar11 = cocos2d::FadeIn::create(0.01);
            pSVar12 = cocos2d::Sequence::create
                                ((FiniteTimeAction *)pFVar11,pDVar10,pFVar9,pDVar8,uVar22);
            iVar7 = **(int **)(this + iVar21 * 4);
            pRVar13 = cocos2d::RepeatForever::create((ActionInterval *)pSVar12);
            (**(code **)(iVar7 + 0x1d0))(pRVar13);
            iVar7 = local_34;
          }
        }
        pCVar14 = (Color3B *)cocos2d::Color3B::Color3B(local_73,'\0','\0','\0');
        bVar4 = cocos2d::Color3B::operator==((Color3B *)(pTVar20 + 4),pCVar14);
        if (bVar4) {
          if (*(int **)(this + (local_30 + iVar7) * 4 + -16000) != (int *)0x0) {
            (**(code **)(**(int **)(this + (local_30 + iVar7) * 4 + -16000) + 0xb4))(0);
          }
        }
        else {
          iVar7 = iVar7 + local_30;
          piVar18 = *(int **)(this + iVar7 * 4 + -16000);
          if (piVar18 == (int *)0x0) {
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
            local_18 = 0xf;
            local_1c = piVar18;
            ghidra::str::assign((std::string *)local_2c,"white.png",9);
            // [seh] local_8 = 4;
            pSVar6 = cocos2d::Sprite::create((std::string *)local_2c);
            // [seh] local_8 = 0xffffffff;
            *(Sprite **)(this + iVar7 * 4 + -16000) = pSVar6;
            if (0xf < local_18) {
              pnVar19 = (nothrow_t *)(local_18 + 1);
              pvVar17 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar19) {
                pvVar17 = *(void **)((int)local_2c[0] + -4);
                pnVar19 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar17))) {
LAB_00561f7c:
                  // [seh] local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar17,pnVar19);
            }
            iVar7 = **(int **)(this + iVar7 * 4 + -16000);
            iVar21 = (**(code **)(iVar7 + 0xb0))();
            local_38 = *(char **)(iVar21 + 4);
            pfVar15 = (float *)(**(code **)(**(int **)(this + (local_30 + local_34) * 4 + -16000) +
                                           0xb0))();
            (**(code **)(iVar7 + 0x3c))(6.0 / *pfVar15,7.0 / (float)local_38);
            local_68 = 0;
            local_64 = 0;
            iVar7 = local_30 + local_34;
            // [seh] local_8 = 5;
            (**(code **)(**(int **)(this + iVar7 * 4 + -16000) + 0xa0))(&local_68);
            // [seh] local_8 = 0xffffffff;
            iVar21 = (**(code **)(*(int *)this + 0xb0))();
            local_70 = (float)(int)((float)local_3c + *(float *)((char *)this + 0x434));
            local_6c = (float)(int)(*(float *)((char *)this + 0x438) +
                                   ((*(float *)(iVar21 + 4) - (float)local_44) - (float)local_40));
            // [seh] local_8 = 6;
            (**(code **)(**(int **)(this + iVar7 * 4 + -16000) + 0x4c))(&local_70);
            // [seh] local_8 = 0xffffffff;
            (**(code **)(*(int *)this + 0x10c))(*(undefined4 *)(this + iVar7 * 4 + -16000));
            piVar18 = *(int **)(this + iVar7 * 4 + -16000);
          }
          (**(code **)(*piVar18 + 0x25c))(pTVar20 + 4);
          (**(code **)(**(int **)(this + iVar7 * 4 + -16000) + 0xb4))(1);
          iVar7 = local_34;
        }
        local_34 = iVar7 + 1;
        local_48 = local_48 + 4;
        local_3c = local_3c + 6;
        *(undefined4 *)(pTVar20 + -28000) = *(undefined4 *)pTVar20;
        *(undefined2 *)(pTVar20 + -0x6d5c) = *(undefined2 *)(pTVar20 + 4);
        pTVar20[-0x6d5a] = pTVar20[6];
        pTVar20 = pTVar20 + 7;
      } while (local_3c < 0x1e0);
      local_30 = local_30 + 0x50;
      local_4c = local_4c + 0x140;
      local_40 = local_40 + 1;
      pTVar20 = local_50 + 0x230;
      local_44 = local_44 + 7;
    } while (local_30 < 0x56ff);
    ((char *)this)[0x428] = (byte)0x0;
    **(undefined1 **)((char *)this + 0x288) = 1;
    local_50 = pTVar20;
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall TextField::paintBackground (TextField *this,undefined4 param_2,undefined4 param_3,int param_4,int param_5)
void TextField::paintBackground(undefined4 param_2, undefined4 param_3, int param_4, int param_5)

{
  TextField *pTVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_5) {
    do {
      if (param_4 < param_4 + 1) {
        iVar2 = 1;
        pTVar1 = this + (param_4 * 0x50 + iVar3) * 7 + 0x71a0;
        do {
          *(undefined2 *)pTVar1 = (undefined2)param_2;
          pTVar1[2] = param_2._2_1_;
          iVar2 = iVar2 + -1;
          pTVar1 = pTVar1 + 0x230;
        } while (iVar2 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_5);
  }
  ((char *)this)[0x428] = (byte)0x1;
  **(undefined1 **)((char *)this + 0x288) = 1;
  return;
}
