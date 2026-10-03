// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: RoomCharacter * __thiscall RoomCharacter::RoomCharacter(RoomCharacter *this,void *param_2)
RoomCharacter::RoomCharacter(void * param_2)

{
  GameCharacter *pGVar1;
  ghidra::lib::_Tree_node_t *p_Var2;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  void *pvVar3;
  int iVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  uint in_stack_00000018;
  std::string abStack_4c [12];
  undefined4 uStack_40;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_18 = &DAT_005c6b1b;
  // [seh] local_1c = ExceptionList;
  // [seh] ExceptionList = &local_1c;
  local_14 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((char *)this + 4) = 0;
  *(undefined4 *)((char *)this + 8) = 0;
  *(undefined2 *)((char *)this + 0xc) = 0x100;
  ((char *)this)[0xe] = (byte)0x0;
  *(undefined1 **)((char *)this + 0x10) = &DAT_bf800000;
  *(undefined1 **)((char *)this + 0x14) = &DAT_bf800000;
  ghidra::str::ctor(abStack_4c,(std::string *)&param_2);
  pGVar1 = GameData::getCharacter();
  *(GameCharacter **)((char *)this + 0x1c) = pGVar1;
  *(undefined4 *)((char *)this + 0x20) = 0;
  *(undefined4 *)((char *)this + 0x24) = 0;
  p_Var2 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
  *(ghidra::lib::_Tree_node_t **)((char *)this + 0x20) = p_Var2;
  uVar6 = 0;
  *(undefined4 *)((char *)this + 0x28) = 0;
  iVar4 = *(int *)(*(int *)((char *)this + 0x1c) + 4);
  *(int *)((char *)this + 0x18) = iVar4;
  *(undefined4 *)((char *)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x30) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x34) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x38) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x40) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x44) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x48) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x4c) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x50) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x54) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x58) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x60) = 0xffffffff;
  *(undefined4 *)((char *)this + 100) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x68) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x6c) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x70) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x74) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x78) = 0xffffffff;
  if (*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 2 != 0) {
    do {
      if (**(int **)(*(int *)(iVar4 + 0x1c) + uVar6 * 4) != -1) {
        *(undefined4 *)(this + uVar6 * 4 + 0x2c) = 0;
        iVar4 = *(int *)((char *)this + 0x18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(iVar4 + 0x20) - *(int *)(iVar4 + 0x1c) >> 2));
  }
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pvVar3 = *(void **)((int)param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_40 = 0x537c89;
    operator_delete(pvVar3,pnVar5);
  }
  // [seh] ExceptionList = local_1c;
  return;
}


// Ghidra: void __thiscall RoomCharacter::renderHeadOverlays(RoomCharacter *this,RoomObject *param_1)
void RoomCharacter::renderHeadOverlays(RoomObject * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  char *pcVar5;
  RenderTexture *this_00;
  Sprite *pSVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  void *pvVar11;
  nothrow_t *pnVar12;
  uint unaff_EDI;
  std::string abStack_e0 [4];
  undefined4 uStack_dc;
  // [seh] undefined1 *puStack_d8;
  char *pcVar13;
  uint uVar14;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  void *local_78 [5];
  uint local_64;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6b98;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_50 = 0;
  local_4c = 0xf;
  local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
  pcVar13 = (&PTR_s_Female_005e1e10)[*(int *)(param_1 + 0x69c)];
  pcVar8 = pcVar13;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_18 = pcVar5;
  ghidra::str::assign((std::string *)local_60,pcVar13,(int)pcVar8 - (int)(pcVar13 + 1));
  // [seh] local_8._0_1_ = 0;
  // [seh] local_8._1_3_ = 0;
  local_90 = 0;
  do {
    local_8c = 0;
    do {
      local_88 = 0;
      do {
        this_00 = cocos2d::RenderTexture::create(0x100,0x100);
        cocos2d::Ref::retain((Ref *)this_00);
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        ghidra::str::assign((std::string *)local_30,"Neutral_Head_Base.png",0x15);
        // [seh] local_8._0_1_ = 1;
        pSVar6 = cocos2d::Sprite::create((std::string *)local_30);
        // [seh] local_8._0_1_ = 0;
        uVar3 = (undefined1)local_8;
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_1c) {
          pnVar12 = (nothrow_t *)(local_1c + 1);
          pvVar11 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar11 = *(void **)((int)local_30[0] + -4);
            pnVar12 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar11))) goto LAB_00538648;
          }
          operator_delete(pvVar11,pnVar12);
        }
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        (**(code **)(*(int *)pSVar6 + 0x25c))();
        // [seh] local_8._0_1_ = 2;
        (**(code **)(*(int *)pSVar6 + 0xa0))();
        // [seh] local_8._0_1_ = 0;
        (**(code **)(*(int *)pSVar6 + 0xb0))();
        (**(code **)(*(int *)pSVar6 + 0xb0))();
        // [seh] local_8._0_1_ = 3;
        // [seh] puStack_d8 = (undefined1 *)0x537e88;
        (**(code **)(*(int *)pSVar6 + 0x4c))();
        // [seh] local_8._0_1_ = 0;
        // [seh] puStack_d8 = (undefined1 *)0x537e96;
        (**(code **)(*(int *)this_00 + 0x290))();
        // [seh] puStack_d8 = &DAT_bf800000;
        uStack_dc = 0x537ea5;
        (**(code **)(*(int *)pSVar6 + 0x2c))();
        cocos2d::Node::visit((Node *)pSVar6);
        iVar9 = *(int *)((char *)this + 0x18);
        local_84 = 0;
        if (*(int *)(iVar9 + 0x20) - *(int *)(iVar9 + 0x1c) >> 2 != 0) {
LAB_00537ec6:
          iVar9 = *(int *)(*(int *)(iVar9 + 0x1c) + local_84 * 4);
          uVar3 = (undefined1)local_8;
          if (*(int *)(iVar9 + 0x24) == 0) {
            piVar7 = ghidra::lib::map__operator_x5b_x5d
                               ((ghidra::lib::map_t *)(*(int *)((char *)this + 0x1c) + 0x6c),
                                (std::string *)(iVar9 + 8));
            iVar9 = *piVar7;
            uVar3 = (undefined1)local_8;
            if (iVar9 != -1) {
              ghidra::str::ctor
                        ((std::string *)local_30,(std::string *)local_60);
              // [seh] local_8._0_1_ = 4;
              if (*(char *)(*(int *)(*(int *)(*(int *)((char *)this + 0x18) + 0x1c) + local_84 * 4) + 0x28)
                  != '\0') {
                ghidra::str::assign((std::string *)local_30,"Neutral",7);
              }
              ghidra::str::append((std::string *)local_30,"_",1);
              pcVar13 = "Head";
              do {
                pcVar8 = pcVar13;
                pcVar13 = pcVar8 + 1;
              } while (*pcVar8 != '\0');
              ghidra::str::append
                        ((std::string *)local_30,"Head",(uint)(pcVar8 + -0x60aaf4));
              ghidra::str::append((std::string *)local_30,"_",1);
              iVar2 = *(int *)(*(int *)((char *)this + 0x18) + 0x1c);
              bVar4 = ghidra::lib::_Traits_equal___x28_x29("EyeColour",9,pcVar5,unaff_EDI);
              if (bVar4) {
                if (local_90 == 1) {
                  // [seh] local_8._0_1_ = 0;
                  uVar3 = (undefined1)local_8;
                  if (0xf < local_1c) {
                    pnVar12 = (nothrow_t *)(local_1c + 1);
                    pvVar11 = local_30[0];
                    if ((nothrow_t *)0xfff < pnVar12) {
                      pvVar11 = *(void **)((int)local_30[0] + -4);
                      pnVar12 = (nothrow_t *)(local_1c + 0x24);
                      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar11))) goto LAB_00538648;
                    }
                    operator_delete(pvVar11,pnVar12);
                    uVar3 = (undefined1)local_8;
                  }
                  goto LAB_0053800a;
                }
              }
              else {
                iVar2 = *(int *)(iVar2 + local_84 * 4);
                pcVar13 = (char *)(iVar2 + 8);
                if (0xf < *(uint *)(iVar2 + 0x1c)) {
                  pcVar13 = *(char **)(iVar2 + 8);
                }
                ghidra::str::append
                          ((std::string *)local_30,pcVar13,*(uint *)(iVar2 + 0x18));
                ghidra::str::append((std::string *)local_30,"_",1);
              }
              bVar4 = ghidra::lib::_Traits_equal___x28_x29("EyeColour",9,pcVar5,unaff_EDI);
              if (bVar4) {
                ghidra::str::append((std::string *)local_30,"Eyes_",5);
                pcVar13 = *(char **)((int)&PTR_s_Neutral_005e1dc4 + local_8c);
                pcVar8 = pcVar13;
                do {
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                ghidra::str::append
                          ((std::string *)local_30,pcVar13,(int)pcVar8 - (int)(pcVar13 + 1));
                ghidra::str::append((std::string *)local_30,"_",1);
                ghidra::str::append((std::string *)local_30,"Colour_",7);
                pcVar13 = (&PTR_s_Blue_005e1e54)[iVar9];
                pcVar8 = pcVar13;
                do {
                  cVar1 = *pcVar8;
                  pcVar8 = pcVar8 + 1;
                } while (cVar1 != '\0');
                ghidra::str::append
                          ((std::string *)local_30,pcVar13,(int)pcVar8 - (int)(pcVar13 + 1));
                ghidra::str::append((std::string *)local_30,"_",1);
              }
              else {
                bVar4 = ghidra::lib::_Traits_equal___x28_x29("Eyes",4,pcVar5,unaff_EDI);
                if (bVar4) {
                  pcVar13 = *(char **)((int)&PTR_s_Neutral_005e1dc4 + local_8c);
                  pcVar8 = pcVar13;
                  do {
                    cVar1 = *pcVar8;
                    pcVar8 = pcVar8 + 1;
                  } while (cVar1 != '\0');
                  ghidra::str::append
                            ((std::string *)local_30,pcVar13,(int)pcVar8 - (int)(pcVar13 + 1));
                  ghidra::str::append((std::string *)local_30,"_",1);
                  if (local_90 == 1) {
                    uVar14 = 6;
                    pcVar13 = "Blink_";
LAB_0053823a:
                    ghidra::str::append((std::string *)local_30,pcVar13,uVar14);
                  }
                }
                else {
                  bVar4 = ghidra::lib::_Traits_equal___x28_x29("Mouth",5,pcVar5,unaff_EDI);
                  if (bVar4) {
                    pcVar13 = *(char **)((int)&PTR_s_Neutral_005e1dd8 + local_88);
                    pcVar8 = pcVar13;
                    do {
                      cVar1 = *pcVar8;
                      pcVar8 = pcVar8 + 1;
                    } while (cVar1 != '\0');
                    ghidra::str::append
                              ((std::string *)local_30,pcVar13,(int)pcVar8 - (int)(pcVar13 + 1));
                    uVar14 = 1;
                    pcVar13 = "_";
                    goto LAB_0053823a;
                  }
                }
              }
              // [seh] puStack_d8 = (undefined1 *)0x53826f;
              pcVar8 = (char *)strUsingArgs((char *)local_78);
              // [seh] local_8._0_1_ = 5;
              pcVar13 = pcVar8;
              if (0xf < *(uint *)(pcVar8 + 0x14)) {
                pcVar13 = *(char **)pcVar8;
              }
              ghidra::str::append
                        ((std::string *)local_30,pcVar13,*(uint *)(pcVar8 + 0x10));
              // [seh] local_8._0_1_ = 4;
              if (0xf < local_64) {
                pnVar12 = (nothrow_t *)(local_64 + 1);
                pvVar11 = local_78[0];
                if ((nothrow_t *)0xfff < pnVar12) {
                  pvVar11 = *(void **)((int)local_78[0] + -4);
                  pnVar12 = (nothrow_t *)(local_64 + 0x24);
                  uVar3 = (undefined1)local_8;
                  if (0x1f < (uint)((int)local_78[0] + (-4 - (int)pvVar11))) goto LAB_00538648;
                }
                operator_delete(pvVar11,pnVar12);
              }
              ghidra::str::append((std::string *)local_30,".png",4);
              bVar4 = ghidra::lib::_Traits_equal_t
                                ("Male_Head_Eyes_Raised_Colour_Brown_5.png",0x28,pcVar5,unaff_EDI);
              if (bVar4) {
                ghidra::str::assign
                          ((std::string *)local_30,"Male_Head_Eyes_Raised_Colour_Brown_4.png",
                           0x28);
              }
              bVar4 = ghidra::lib::_Traits_equal_t
                                ("Male_Head_Eyes_Raised_Colour_Blue_5.png",0x27,pcVar5,unaff_EDI);
              if (bVar4) {
                ghidra::str::assign
                          ((std::string *)local_30,"Male_Head_Eyes_Raised_Colour_Blue_4.png",0x27
                          );
              }
              bVar4 = ghidra::lib::_Traits_equal_t
                                ("Male_Head_Eyes_Raised_Colour_Green_5.png",0x28,pcVar5,unaff_EDI);
              if (bVar4) {
                ghidra::str::assign
                          ((std::string *)local_30,"Male_Head_Eyes_Raised_Colour_Green_4.png",
                           0x28);
              }
              bVar4 = ghidra::lib::_Traits_equal_t
                                ("Male_Head_Eyes_Raised_Blink_5.png",0x21,pcVar5,unaff_EDI);
              if (bVar4) {
                ghidra::str::assign
                          ((std::string *)local_30,"Male_Head_Eyes_Raised_Blink_4.png",0x21);
              }
              bVar4 = ghidra::lib::_Traits_equal___x28_x29("Male_Head_Eyes_Raised_5.png",0x1b,pcVar5,unaff_EDI);
              if (bVar4) {
                ghidra::str::assign
                          ((std::string *)local_30,"Male_Head_Eyes_Raised_4.png",0x1b);
              }
              pSVar6 = cocos2d::Sprite::create((std::string *)local_30);
              // [seh] local_8._0_1_ = 6;
              (**(code **)(*(int *)pSVar6 + 0xa0))();
              // [seh] local_8._0_1_ = 4;
              (**(code **)(*(int *)pSVar6 + 0xb0))();
              (**(code **)(*(int *)pSVar6 + 0xb0))();
              // [seh] local_8._0_1_ = 7;
              (**(code **)(*(int *)pSVar6 + 0x4c))();
              // [seh] local_8._0_1_ = 4;
              if (*(char *)(*(int *)(*(int *)(*(int *)((char *)this + 0x18) + 0x1c) + local_84 * 4) + 0x20)
                  != '\0') {
                // [seh] puStack_d8 = (undefined1 *)0x5384a0;
                (**(code **)(*(int *)pSVar6 + 0x25c))();
              }
              // [seh] puStack_d8 = (undefined1 *)0x5384af;
              (**(code **)(*(int *)pSVar6 + 0x2c))();
              cocos2d::Node::visit((Node *)pSVar6);
              // [seh] local_8._0_1_ = 0;
              uVar3 = (undefined1)local_8;
              // [seh] local_8._0_1_ = 0;
              if (0xf < local_1c) {
                pnVar12 = (nothrow_t *)(local_1c + 1);
                pvVar11 = local_30[0];
                if ((nothrow_t *)0xfff < pnVar12) {
                  pvVar11 = *(void **)((int)local_30[0] + -4);
                  pnVar12 = (nothrow_t *)(local_1c + 0x24);
                  uVar3 = (undefined1)local_8;
                  if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar11))) goto LAB_00538648;
                }
                operator_delete(pvVar11,pnVar12);
                uVar3 = (undefined1)local_8;
              }
            }
          }
LAB_0053800a:
          // [seh] local_8._0_1_ = uVar3;
          iVar9 = *(int *)((char *)this + 0x18);
          local_84 = local_84 + 1;
          if ((uint)(*(int *)(iVar9 + 0x20) - *(int *)(iVar9 + 0x1c) >> 2) <= local_84)
          goto LAB_00538022;
          goto LAB_00537ec6;
        }
LAB_00538022:
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
        pcVar13 = "head";
        do {
          pcVar8 = pcVar13;
          pcVar13 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
        ghidra::str::assign((std::string *)local_48,"head",(uint)(pcVar8 + -0x6222a0));
        // [seh] local_8 = CONCAT31(local_8._1_3_,8);
        ghidra::str::append((std::string *)local_48,"_",1);
        pcVar13 = *(char **)((int)&PTR_s_neutral_005e1de8 + local_8c);
        pcVar8 = pcVar13;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        ghidra::str::append
                  ((std::string *)local_48,pcVar13,(int)pcVar8 - (int)(pcVar13 + 1));
        ghidra::str::append((std::string *)local_48,"_",1);
        if (((char *)this)[0xe] == (byte)0x0) {
          pcVar8 = *(char **)((int)&PTR_s_neutral_005e1db4 + local_88);
          pcVar13 = pcVar8 + 1;
          pcVar10 = pcVar8;
          do {
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
        }
        else {
          pcVar8 = "open";
          pcVar10 = "open";
          pcVar13 = "pen";
          do {
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
        }
        ghidra::str::append((std::string *)local_48,pcVar8,(int)pcVar10 - (int)pcVar13);
        if (local_90 == 1) {
          ghidra::str::append((std::string *)local_48,"_blink",6);
        }
        (**(code **)(*(int *)this_00 + 0x2a4))();
        ghidra::str::ctor(abStack_e0,(std::string *)local_48);
        (param_1)->addTextureElement(this_00);
        // [seh] puStack_d8 = (undefined1 *)0x538585;
        debugPrint("DETAIL","Added element \'%s\'");
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_34) {
          pnVar12 = (nothrow_t *)(local_34 + 1);
          pvVar11 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar11 = *(void **)((int)local_48[0] + -4);
            pnVar12 = (nothrow_t *)(local_34 + 0x24);
            uVar3 = (undefined1)local_8;
            if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar11))) goto LAB_00538648;
          }
          operator_delete(pvVar11,pnVar12);
        }
        local_88 = local_88 + 4;
      } while (local_88 < 0x10);
      local_8c = local_8c + 4;
    } while (local_8c < 0x14);
    local_90 = local_90 + 1;
  } while (local_90 < 2);
  // [seh] puStack_d8 = (undefined1 *)0x53861f;
  debugPrint("DETAIL","Added %d head texture state variations");
  if (0xf < local_4c) {
    pnVar12 = (nothrow_t *)(local_4c + 1);
    pvVar11 = local_60[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar11 = *(void **)((int)local_60[0] + -4);
      pnVar12 = (nothrow_t *)(local_4c + 0x24);
      uVar3 = (undefined1)local_8;
      if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar11))) {
LAB_00538648:
        // [seh] local_8._0_1_ = uVar3;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar11,pnVar12);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall RoomCharacter::renderOverlay(RoomCharacter *this,RoomObject *param_1,int param_2)
void RoomCharacter::renderOverlay(RoomObject * param_1, int param_2)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  bool bVar2;
  char *pcVar3;
  RenderTexture *this_00;
  std::string *pbVar4;
  Sprite *pSVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  undefined **ppuVar12;
  int iVar13;
  uint unaff_EDI;
  undefined4 uStack_dc;
  uint local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6c3a;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  pcVar9 = (&PTR_s_Female_005e1e10)[*(int *)(param_1 + 0x69c)];
  pcVar7 = pcVar9;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_14 = pcVar3;
  ghidra::str::assign((std::string *)local_5c,pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
  // [seh] local_8 = 0;
  this_00 = cocos2d::RenderTexture::create(0x100,0x100);
  cocos2d::Ref::retain((Ref *)this_00);
  pbVar4 = (std::string *)strUsingArgs((char *)local_2c);
  // [seh] local_8._0_1_ = 1;
  uStack_dc = 0x53874a;
  pSVar5 = cocos2d::Sprite::create(pbVar4);
  // [seh] local_8._0_1_ = 0;
  if (0xf < local_18) {
    pnVar11 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar11 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
LAB_00538779:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  (**(code **)(*(int *)pSVar5 + 0x25c))();
  // [seh] local_8._0_1_ = 2;
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  // [seh] local_8._0_1_ = 0;
  (**(code **)(*(int *)pSVar5 + 0xb0))();
  (**(code **)(*(int *)pSVar5 + 0xb0))();
  // [seh] local_8._0_1_ = 3;
  (**(code **)(*(int *)pSVar5 + 0x4c))();
  // [seh] local_8._0_1_ = 0;
  (**(code **)(*(int *)this_00 + 0x290))();
  (**(code **)(*(int *)pSVar5 + 0x2c))();
  cocos2d::Node::visit((Node *)pSVar5);
  iVar8 = *(int *)((char *)this + 0x18);
  local_78 = 0;
  if (*(int *)(iVar8 + 0x20) - *(int *)(iVar8 + 0x1c) >> 2 != 0) {
    do {
      iVar13 = local_78 * 4;
      iVar8 = *(int *)(iVar13 + *(int *)(iVar8 + 0x1c));
      if ((*(int *)(iVar8 + 0x24) == param_2) &&
         (piVar6 = ghidra::lib::map__operator_x5b_x5d
                             ((ghidra::lib::map_t *)(*(int *)((char *)this + 0x1c) + 0x6c),(std::string *)(iVar8 + 8))
         , *piVar6 != -1)) {
        ghidra::str::ctor((std::string *)local_44,(std::string *)local_5c);
        // [seh] local_8._0_1_ = 4;
        if (*(char *)(*(int *)(iVar13 + *(int *)(*(int *)((char *)this + 0x18) + 0x1c)) + 0x28) != '\0') {
          ghidra::str::assign((std::string *)local_44,"Neutral",7);
        }
        ghidra::str::append((std::string *)local_44,"_",1);
        pcVar9 = (&PTR_s_Head_005e1e48)[param_2];
        pcVar7 = pcVar9;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        ghidra::str::append
                  ((std::string *)local_44,pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
        ghidra::str::append((std::string *)local_44,"_",1);
        iVar8 = *(int *)(iVar13 + *(int *)(*(int *)((char *)this + 0x18) + 0x1c));
        pcVar9 = (char *)(iVar8 + 8);
        if (0xf < *(uint *)(iVar8 + 0x1c)) {
          pcVar9 = *(char **)(iVar8 + 8);
        }
        ghidra::str::append((std::string *)local_44,pcVar9,*(uint *)(iVar8 + 0x18));
        iVar8 = *(int *)(*(int *)((char *)this + 0x18) + 0x1c);
        bVar2 = ghidra::lib::_Traits_equal___x28_x29("Eyes",4,pcVar3,unaff_EDI);
        if (bVar2) {
          ppuVar12 = &PTR_s_Neutral_005e1dc4;
          do {
            ghidra::str::ctor
                      ((std::string *)local_2c,(std::string *)local_44);
            // [seh] local_8._0_1_ = 5;
            ghidra::str::append((std::string *)local_2c,"_",1);
            pcVar9 = *ppuVar12;
            pcVar7 = pcVar9;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            ghidra::str::append
                      ((std::string *)local_2c,pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
            ghidra::lib::map__operator_x5b_x5d
                      ((ghidra::lib::map_t *)(*(int *)((char *)this + 0x1c) + 0x6c),
                       (std::string *)
                       (*(int *)(*(int *)(*(int *)((char *)this + 0x18) + 0x1c) + iVar13) + 8));
            pcVar7 = (char *)strUsingArgs((char *)local_74);
            // [seh] local_8._0_1_ = 6;
            pcVar9 = pcVar7;
            if (0xf < *(uint *)(pcVar7 + 0x14)) {
              pcVar9 = *(char **)pcVar7;
            }
            ghidra::str::append((std::string *)local_2c,pcVar9,*(uint *)(pcVar7 + 0x10));
            // [seh] local_8._0_1_ = 5;
            if (0xf < local_60) {
              pnVar11 = (nothrow_t *)(local_60 + 1);
              pvVar10 = local_74[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_74[0] + -4);
                pnVar11 = (nothrow_t *)(local_60 + 0x24);
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) goto LAB_00538779;
              }
              operator_delete(pvVar10,pnVar11);
            }
            ghidra::str::append((std::string *)local_2c,".png",4);
            pSVar5 = cocos2d::Sprite::create((std::string *)local_2c);
            // [seh] local_8._0_1_ = 7;
            (**(code **)(*(int *)pSVar5 + 0xa0))();
            // [seh] local_8._0_1_ = 5;
            (**(code **)(*(int *)pSVar5 + 0xb0))();
            (**(code **)(*(int *)pSVar5 + 0xb0))();
            // [seh] local_8._0_1_ = 8;
            (**(code **)(*(int *)pSVar5 + 0x4c))();
            // [seh] local_8._0_1_ = 5;
            if (*(char *)(*(int *)(*(int *)(*(int *)((char *)this + 0x18) + 0x1c) + local_78 * 4) + 0x20) !=
                '\0') {
              (**(code **)(*(int *)pSVar5 + 0x25c))();
            }
            (**(code **)(*(int *)pSVar5 + 0x2c))();
            cocos2d::Node::visit((Node *)pSVar5);
            // [seh] local_8._0_1_ = 4;
            if (0xf < local_18) {
              pnVar11 = (nothrow_t *)(local_18 + 1);
              pvVar10 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_2c[0] + -4);
                pnVar11 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) goto LAB_00538779;
              }
              operator_delete(pvVar10,pnVar11);
            }
            ppuVar12 = ppuVar12 + 1;
          } while ((int)ppuVar12 < 0x5e1dd8);
        }
        else {
          bVar2 = ghidra::lib::_Traits_equal___x28_x29("Mouth",5,pcVar3,unaff_EDI);
          if (!bVar2) {
            ghidra::lib::map__operator_x5b_x5d
                      ((ghidra::lib::map_t *)(*(int *)((char *)this + 0x1c) + 0x6c),
                       (std::string *)(*(int *)(iVar13 + iVar8) + 8));
            pcVar7 = (char *)strUsingArgs((char *)local_74);
            // [seh] local_8._0_1_ = 9;
            pcVar9 = pcVar7;
            if (0xf < *(uint *)(pcVar7 + 0x14)) {
              pcVar9 = *(char **)pcVar7;
            }
            ghidra::str::append((std::string *)local_44,pcVar9,*(uint *)(pcVar7 + 0x10));
            // [seh] local_8._0_1_ = 4;
            if (0xf < local_60) {
              pnVar11 = (nothrow_t *)(local_60 + 1);
              pvVar10 = local_74[0];
              if ((nothrow_t *)0xfff < pnVar11) {
                pvVar10 = *(void **)((int)local_74[0] + -4);
                pnVar11 = (nothrow_t *)(local_60 + 0x24);
                if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar10))) goto LAB_00538779;
              }
              operator_delete(pvVar10,pnVar11);
            }
          }
          ghidra::str::append((std::string *)local_44,".png",4);
          pSVar5 = cocos2d::Sprite::create((std::string *)local_44);
          // [seh] local_8._0_1_ = 10;
          (**(code **)(*(int *)pSVar5 + 0xa0))();
          // [seh] local_8._0_1_ = 4;
          (**(code **)(*(int *)pSVar5 + 0xb0))();
          (**(code **)(*(int *)pSVar5 + 0xb0))();
          // [seh] local_8._0_1_ = 0xb;
          (**(code **)(*(int *)pSVar5 + 0x4c))();
          // [seh] local_8._0_1_ = 4;
          if (*(char *)(*(int *)(*(int *)(*(int *)((char *)this + 0x18) + 0x1c) + local_78 * 4) + 0x20) !=
              '\0') {
            (**(code **)(*(int *)pSVar5 + 0x25c))();
          }
          (**(code **)(*(int *)pSVar5 + 0x2c))();
          cocos2d::Node::visit((Node *)pSVar5);
        }
        // [seh] local_8._0_1_ = 0;
        if (0xf < local_30) {
          pnVar11 = (nothrow_t *)(local_30 + 1);
          pvVar10 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar11) {
            pvVar10 = *(void **)((int)local_44[0] + -4);
            pnVar11 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_00538779;
          }
          operator_delete(pvVar10,pnVar11);
        }
      }
      iVar8 = *(int *)((char *)this + 0x18);
      local_78 = local_78 + 1;
    } while (local_78 < (uint)(*(int *)(iVar8 + 0x20) - *(int *)(iVar8 + 0x1c) >> 2));
  }
  (**(code **)(*(int *)this_00 + 0x2a4))();
  pcVar9 = (&PTR_s_head_005e1e3c)[param_2];
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pcVar7 = pcVar9;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  ghidra::str::assign((std::string *)local_2c,pcVar9,(int)pcVar7 - (int)(pcVar9 + 1));
  // [seh] local_8 = CONCAT31(local_8._1_3_,0xc);
  ghidra::str::ctor((std::string *)&uStack_dc,(std::string *)local_2c);
  (param_1)->addTextureElement(this_00);
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
  if (0xf < local_48) {
    pnVar11 = (nothrow_t *)(local_48 + 1);
    pvVar10 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar10 = *(void **)((int)local_5c[0] + -4);
      pnVar11 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar10,pnVar11);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall RoomCharacter::renderCharacterOverlays(RoomCharacter *this,RoomObject *param_1)
void RoomCharacter::renderCharacterOverlays(RoomObject * param_1)

{
  int iVar1;
  
  (param_1)->clearTextureElements();
  iVar1 = 0;
  do {
    if (iVar1 == 0) {
      renderHeadOverlays(this,param_1);
    }
    else {
      renderOverlay(this,param_1,iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}


// Ghidra: void __thiscall RoomCharacter::renderCharacter(RoomCharacter *this,RoomObject *param_1)
void RoomCharacter::renderCharacter(RoomObject * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  bool bVar2;
  char *pcVar3;
  Sprite *pSVar4;
  bool *pbVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  int iVar11;
  uint unaff_EDI;
  int iVar12;
  std::string abStack_98 [4];
  undefined4 uStack_94;
  std::string abStack_80 [8];
  undefined4 uStack_78;
  char *pcVar13;
  uint uVar14;
  uint local_50;
  uint local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c6ca8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  iVar11 = *(int *)((char *)this + 0x20);
  local_18 = pcVar3;
  ghidra::lib::_Tree___Erase((ghidra::lib::_Tree_t *)((char *)this + 0x20),*(ghidra::lib::_Tree_node_t **)(iVar11 + 4));
  local_4c = 0;
  *(int *)(*(int *)((char *)this + 0x20) + 4) = iVar11;
  **(int **)((char *)this + 0x20) = iVar11;
  // [seh] local_8 = 0xffffffff;
  *(int *)(*(int *)((char *)this + 0x20) + 8) = iVar11;
  *(undefined4 *)((char *)this + 0x24) = 0;
  iVar11 = *(int *)((char *)this + 0x1c);
  if (*(int *)(iVar11 + 100) - *(int *)(iVar11 + 0x60) >> 2 != 0) {
    do {
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      // [seh] local_8 = 1;
      if (*(char *)(*(int *)(*(int *)(iVar11 + 0x60) + local_4c * 4) + 0x30) == '\0') {
        pcVar13 = (&PTR_s_Female_005e1e10)[*(int *)(param_1 + 0x69c)];
        pcVar6 = pcVar13;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar14 = (int)pcVar6 - (int)(pcVar13 + 1);
      }
      else {
        uVar14 = 7;
        pcVar13 = "Neutral";
      }
      ghidra::str::append((std::string *)local_48,pcVar13,uVar14);
      ghidra::str::append((std::string *)local_48,"_",1);
      pcVar13 = *(char **)(*(int *)(*(int *)((char *)this + 0x1c) + 0x60) + local_4c * 4);
      pcVar6 = pcVar13;
      if (0xf < *(uint *)(pcVar13 + 0x14)) {
        pcVar6 = *(char **)pcVar13;
      }
      ghidra::str::append((std::string *)local_48,pcVar6,*(uint *)(pcVar13 + 0x10));
      uStack_78 = 0x538f7f;
      debugPrint("RENDER","Showing addition \'%s\'");
      iVar11 = *(int *)(*(int *)(*(int *)((char *)this + 0x1c) + 0x60) + local_4c * 4);
      if (*(char *)(iVar11 + 0x31) == '\0') {
        bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
        if (bVar2) {
          bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
          if (bVar2) {
            strUsingArgs((char *)abStack_80);
            // [seh] local_8._0_1_ = 6;
          }
          else {
            uStack_94 = 0x5391b9;
            strUsingArgs((char *)abStack_80);
            // [seh] local_8._0_1_ = 5;
          }
        }
        else {
          strUsingArgs((char *)abStack_80);
          // [seh] local_8._0_1_ = 4;
        }
        ghidra::str::ctor(abStack_98,(std::string *)local_48);
        // [seh] local_8 = CONCAT31(local_8._1_3_,1);
        (param_1)->setMesh(1);
      }
      else {
        local_20 = 0;
        local_1c = 0xf;
        local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
        pcVar13 = (&PTR_s_head_005e1e3c)[*(int *)(iVar11 + 0x4c)];
        pcVar6 = pcVar13;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        ghidra::str::assign
                  ((std::string *)local_30,pcVar13,(int)pcVar6 - (int)(pcVar13 + 1));
        // [seh] local_8._0_1_ = 2;
        if (*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x1c) + 0x60) + local_4c * 4) + 0x4c) == 0) {
          ghidra::str::append((std::string *)local_30,"_",1);
          pcVar13 = (&PTR_s_neutral_005e1de8)
                    [*(int *)(*(int *)(*(int *)(param_1 + 0x100) + 0x1c) + 0x58)];
          pcVar6 = pcVar13;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          ghidra::str::append
                    ((std::string *)local_30,pcVar13,(int)pcVar6 - (int)(pcVar13 + 1));
          ghidra::str::append((std::string *)local_30,"_",1);
          if (((char *)this)[0xe] == (byte)0x0) {
            pcVar6 = (&PTR_s_neutral_005e1db4)
                     [*(int *)(*(int *)(*(int *)(param_1 + 0x100) + 0x1c) + 0x54)];
            pcVar13 = pcVar6 + 1;
            pcVar7 = pcVar6;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          else {
            pcVar6 = "open";
            pcVar7 = "open";
            pcVar13 = "pen";
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          ghidra::str::append((std::string *)local_30,pcVar6,(int)pcVar7 - (int)pcVar13);
          if (((char *)this)[0xd] == (byte)0x0) {
            ghidra::str::append((std::string *)local_30,"_blink",6);
          }
        }
        ghidra::str::ctor(abStack_80,(std::string *)local_30);
        pSVar4 = (param_1)->getTextureElement();
        ghidra::str::ctor(abStack_80,(std::string *)local_48);
        // [seh] local_8._0_1_ = 3;
        (**(code **)(*(int *)(pSVar4 + 0x278) + 0xc))();
        // [seh] local_8._0_1_ = 2;
        (param_1)->setMesh();
        // [seh] local_8 = CONCAT31(local_8._1_3_,1);
        if (0xf < local_1c) {
          pnVar10 = (nothrow_t *)(local_1c + 1);
          pvVar9 = local_30[0];
          if ((nothrow_t *)0xfff < pnVar10) {
            pvVar9 = *(void **)((int)local_30[0] + -4);
            pnVar10 = (nothrow_t *)(local_1c + 0x24);
            if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) goto LAB_005393c1;
          }
          operator_delete(pvVar9,pnVar10);
        }
      }
      iVar11 = *(int *)((char *)this + 0x1c);
      local_50 = 0;
      iVar12 = *(int *)(*(int *)(iVar11 + 0x60) + local_4c * 4);
      iVar8 = *(int *)(iVar12 + 0x58) - *(int *)(iVar12 + 0x54);
      iVar12 = iVar8 >> 0x1f;
      if (iVar8 / 0x18 + iVar12 != iVar12) {
        iVar12 = 0;
        do {
          local_20 = 0;
          local_1c = 0xf;
          local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
          pcVar13 = (&PTR_s_Female_005e1e10)[*(int *)(param_1 + 0x69c)];
          pcVar6 = pcVar13;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          ghidra::str::assign
                    ((std::string *)local_30,pcVar13,(int)pcVar6 - (int)(pcVar13 + 1));
          // [seh] local_8._0_1_ = 7;
          ghidra::str::append((std::string *)local_30,"_",1);
          pcVar6 = (char *)(*(int *)(*(int *)(*(int *)(*(int *)((char *)this + 0x1c) + 0x60) + local_4c * 4)
                                    + 0x54) + iVar12);
          pcVar13 = pcVar6;
          if (0xf < *(uint *)(pcVar6 + 0x14)) {
            pcVar13 = *(char **)pcVar6;
          }
          ghidra::str::append((std::string *)local_30,pcVar13,*(uint *)(pcVar6 + 0x10));
          pbVar5 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)((char *)this + 0x20),(std::string *)local_30);
          *pbVar5 = true;
          uStack_78 = 0x5392d9;
          debugPrint("RENDER","Hiding %s");
          // [seh] local_8 = CONCAT31(local_8._1_3_,1);
          if (0xf < local_1c) {
            pnVar10 = (nothrow_t *)(local_1c + 1);
            pvVar9 = local_30[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_30[0] + -4);
              pnVar10 = (nothrow_t *)(local_1c + 0x24);
              if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar9))) goto LAB_005393c1;
            }
            operator_delete(pvVar9,pnVar10);
          }
          iVar11 = *(int *)((char *)this + 0x1c);
          iVar12 = iVar12 + 0x18;
          local_50 = local_50 + 1;
          iVar8 = *(int *)(*(int *)(iVar11 + 0x60) + local_4c * 4);
        } while (local_50 < (uint)((*(int *)(iVar8 + 0x58) - *(int *)(iVar8 + 0x54)) / 0x18));
      }
      // [seh] local_8 = 0xffffffff;
      if (0xf < local_34) {
        pnVar10 = (nothrow_t *)(local_34 + 1);
        pvVar9 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar10) {
          pvVar9 = *(void **)((int)local_48[0] + -4);
          pnVar10 = (nothrow_t *)(local_34 + 0x24);
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar9))) {
LAB_005393c1:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar9,pnVar10);
        iVar11 = *(int *)((char *)this + 0x1c);
      }
      local_4c = local_4c + 1;
    } while (local_4c < (uint)(*(int *)(iVar11 + 100) - *(int *)(iVar11 + 0x60) >> 2));
  }
  setTextures(this,param_1);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall RoomCharacter::setTextures(RoomCharacter *this,RoomObject *param_1)
void RoomCharacter::setTextures(RoomObject * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  bool *pbVar5;
  Sprite *pSVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  int iVar10;
  void *pvVar11;
  char *pcVar12;
  nothrow_t *pnVar13;
  RoomObject *pRVar14;
  std::string abStack_90 [12];
  undefined4 uStack_84;
  int local_68;
  int local_64;
  RoomCharacter *local_60;
  RoomCharacter *local_5c;
  uint local_58;
  RoomObject *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = -1;
  // [seh] puStack_c = &DAT_005c6ce8;
  // [seh] local_10 = ExceptionList;
  // [cookie] local_18 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  local_54 = param_1;
  local_58 = 0;
  local_60 = this_;
  if (*(int *)(*(int *)((char *)this_ + 0x18) + 0x2c) - *(int *)(*(int *)((char *)this_ + 0x18) + 0x28) >> 2 != 0) {
    local_5c = this_ + 0x20;
    do {
      uVar3 = local_58;
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (void *)((uint)local_48[0] & 0xffffff00);
      pcVar12 = (&PTR_s_Female_005e1e10)[*(int *)(local_54 + 0x69c)];
      pcVar9 = pcVar12;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uStack_84 = 0x539467;
      ghidra::str::assign
                ((std::string *)local_48,pcVar12,(int)pcVar9 - (int)(pcVar12 + 1));
      // [seh] local_8 = 0;
      uStack_84 = 0x53947d;
      ghidra::str::append((std::string *)local_48,"_",1);
      pcVar12 = *(char **)(*(int *)(*(int *)((char *)this_ + 0x18) + 0x28) + uVar3 * 4);
      pcVar9 = pcVar12;
      if (0xf < *(uint *)(pcVar12 + 0x14)) {
        pcVar9 = *(char **)pcVar12;
      }
      uStack_84 = 0x53949c;
      ghidra::str::append((std::string *)local_48,pcVar9,*(uint *)(pcVar12 + 0x10));
      iVar2 = *(int *)(*(int *)(*(int *)((char *)this_ + 0x18) + 0x28) + uVar3 * 4);
      iVar10 = *(int *)(iVar2 + 0x20) - *(int *)(iVar2 + 0x1c);
      iVar2 = iVar10 >> 0x1f;
      if (iVar10 / 0x18 + iVar2 != iVar2) {
        uStack_84 = 0x5394cd;
        ghidra::str::append((std::string *)local_48,"_",1);
        pcVar12 = *(char **)(*(int *)(*(int *)(*(int *)((char *)this_ + 0x18) + 0x28) + uVar3 * 4) + 0x1c);
        pcVar9 = pcVar12;
        if (0xf < *(uint *)(pcVar12 + 0x14)) {
          pcVar9 = *(char **)pcVar12;
        }
        uStack_84 = 0x5394ef;
        ghidra::str::append((std::string *)local_48,pcVar9,*(uint *)(pcVar12 + 0x10));
      }
      local_50 = CONCAT31(local_50._1_3_,1);
      uStack_84 = 0x539503;
      ghidra::lib::_Tree___Eqrange((ghidra::lib::_Tree_t *)((char *)this_ + 0x20),(std::string *)&local_68);
      iVar2 = local_64;
      iVar10 = 0;
      local_4c = (undefined1 *)local_68;
      if (local_68 != local_64) {
        do {
          iVar10 = iVar10 + 1;
          ghidra::lib::_Tree_unchecked_const_iterator__operator_x2b_x2b
                    ((ghidra::lib::_Tree_unchecked_const_iterator_t *)&local_4c);
        } while (local_4c != (undefined1 *)iVar2);
        if (iVar10 != 0) {
          pbVar5 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)local_5c,(std::string *)local_48);
          uVar8 = (undefined1)local_50;
          if (*pbVar5 == true) {
            uVar8 = 0;
          }
          local_50 = CONCAT31(local_50._1_3_,uVar8);
        }
      }
      this_ = local_60;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      pcVar12 = (&PTR_s_head_005e1e3c)
                [*(int *)(*(int *)(*(int *)(*(int *)(local_60 + 0x18) + 0x28) + uVar3 * 4) + 0x18)];
      pcVar9 = pcVar12;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uStack_84 = 0x539583;
      ghidra::str::assign
                ((std::string *)local_30,pcVar12,(int)pcVar9 - (int)(pcVar12 + 1));
      // [seh] local_8._0_1_ = 1;
      pRVar14 = local_54;
      if (*(int *)(*(int *)(*(int *)(*(int *)((char *)this_ + 0x18) + 0x28) + uVar3 * 4) + 0x18) == 0) {
        uStack_84 = 0x5395a9;
        ghidra::str::append((std::string *)local_30,"_",1);
        pRVar14 = local_54;
        pcVar12 = (&PTR_s_neutral_005e1de8)
                  [*(int *)(*(int *)(*(int *)(local_54 + 0x100) + 0x1c) + 0x58)];
        pcVar9 = pcVar12;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uStack_84 = 0x5395d7;
        ghidra::str::append
                  ((std::string *)local_30,pcVar12,(int)pcVar9 - (int)(pcVar12 + 1));
        uStack_84 = 0x5395e6;
        ghidra::str::append((std::string *)local_30,"_",1);
        if (((char *)this_)[0xe] == (byte)0x0) {
          pcVar12 = (&PTR_s_neutral_005e1db4)
                    [*(int *)(*(int *)(*(int *)(pRVar14 + 0x100) + 0x1c) + 0x54)];
          pcVar9 = pcVar12;
          do {
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          pcVar9 = pcVar9 + -(int)(pcVar12 + 1);
        }
        else {
          pcVar12 = "open";
          pcVar4 = "open";
          do {
            pcVar9 = pcVar4;
            pcVar4 = pcVar9 + 1;
          } while (*pcVar9 != '\0');
          pcVar9 = pcVar9 + -0x6222cc;
        }
        uStack_84 = 0x539633;
        ghidra::str::append((std::string *)local_30,pcVar12,(uint)pcVar9);
        if (((char *)this_)[0xd] == (byte)0x0) {
          uStack_84 = 0x539648;
          ghidra::str::append((std::string *)local_30,"_blink",6);
        }
      }
      ghidra::str::ctor(abStack_90,(std::string *)local_30);
      pSVar6 = (pRVar14)->getTextureElement();
      local_4c = abStack_90;
      ghidra::str::ctor(abStack_90,(std::string *)local_48);
      // [seh] local_8._0_1_ = 2;
      uVar7 = (**(code **)(*(int *)(pSVar6 + 0x278) + 0xc))();
      // [seh] local_8._0_1_ = 1;
      (pRVar14)->setMesh(local_50, uVar7);
      // [seh] local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_1c) {
        pnVar13 = (nothrow_t *)(local_1c + 1);
        pvVar11 = local_30[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)local_30[0] + -4);
          pnVar13 = (nothrow_t *)(local_1c + 0x24);
          if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar11))) goto LAB_0053972f;
        }
        uStack_84 = 0x5396c4;
        operator_delete(pvVar11,pnVar13);
      }
      // [seh] local_8 = -1;
      local_20 = 0;
      local_1c = 0xf;
      local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_34) {
        pnVar13 = (nothrow_t *)(local_34 + 1);
        pvVar11 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar11 = *(void **)((int)local_48[0] + -4);
          pnVar13 = (nothrow_t *)(local_34 + 0x24);
          if (0x1f < (uint)((int)local_48[0] + (-4 - (int)pvVar11))) {
LAB_0053972f:
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        uStack_84 = 0x53970d;
        operator_delete(pvVar11,pnVar13);
      }
      local_58 = local_58 + 1;
    } while (local_58 <
             (uint)(*(int *)(*(int *)((char *)this_ + 0x18) + 0x2c) - *(int *)(*(int *)((char *)this_ + 0x18) + 0x28)
                   >> 2));
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}
