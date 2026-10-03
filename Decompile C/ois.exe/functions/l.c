#include "../ois.exe.h"


// class cocos2d::Sprite * __cdecl loadSprite(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Sprite * __cdecl loadSprite(void *param_1)

{
  char cVar1;
  bool bVar2;
  _TexParams *p_Var3;
  Sprite *pSVar4;
  Texture2D *this;
  char ****ppppcVar5;
  char ****ppppcVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  uint in_stack_00000018;
  basic_string<> abStack_6c [8];
  undefined4 uStack_64;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ccea1;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (this_0065d534 == (_TexParams *)0x0) {
    p_Var3 = operator_new(0x10);
    this_0065d534 = p_Var3;
    *(undefined4 *)(p_Var3 + 4) = 0x2600;
    *(undefined4 *)p_Var3 = 0x2600;
    *(undefined4 *)(p_Var3 + 8) = 0x812f;
    *(undefined4 *)(p_Var3 + 0xc) = 0x812f;
  }
  std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)&param_1);
  OSInterface::getLocationForAsset();
  local_8._0_1_ = 1;
  local_34 = 0;
  ppppcVar6 = local_2c;
  if (0xf < local_18) {
    ppppcVar6 = (char ****)local_2c[0];
  }
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  ppppcVar5 = ppppcVar6;
  do {
    cVar1 = *(char *)ppppcVar5;
    ppppcVar5 = (char ****)((int)ppppcVar5 + 1);
  } while (cVar1 != '\0');
  std::basic_string<>::assign
            ((basic_string<> *)local_44,(char *)ppppcVar6,(int)ppppcVar5 - (int)((int)ppppcVar6 + 1)
            );
  local_8._0_1_ = 2;
  pSVar4 = cocos2d::Sprite::create((basic_string<> *)local_44);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    pvVar7 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_44[0] + -4);
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (pSVar4 == (Sprite *)0x0) {
    uStack_64 = 0x593773;
    debugPrint("ERROR","loading file: \'%s\'");
    bVar2 = cc_assert_script_compatible("ERROR loading file");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
  }
  p_Var3 = this_0065d534;
  this = (Texture2D *)(**(code **)(*(int *)(pSVar4 + 0x278) + 0xc))();
  cocos2d::Texture2D::setTexParameters(this,p_Var3);
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(*(int *)pSVar4 + 0xa0))();
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    ppppcVar6 = (char ****)local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppcVar6 = (char ****)local_2c[0][-1];
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_64 = 0x59380b;
    operator_delete(ppppcVar6,pnVar8);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_64 = 0x593853;
    operator_delete(pvVar7,pnVar8);
  }
  ExceptionList = local_10;
  pSVar4 = (Sprite *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pSVar4;
}


// class cocos2d::Sprite * __cdecl loadSprite(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class cocos2d::Rect)

Sprite * __cdecl loadSprite(void *param_1)

{
  char cVar1;
  bool bVar2;
  _TexParams *p_Var3;
  char *pcVar4;
  Sprite *pSVar5;
  Texture2D *this;
  char *pcVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  basic_string<> abStack_6c [8];
  undefined4 uStack_64;
  void *local_44;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ccefa;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 1;
  if (this_0065d534 == (_TexParams *)0x0) {
    p_Var3 = operator_new(0x10);
    this_0065d534 = p_Var3;
    *(undefined4 *)(p_Var3 + 4) = 0x2600;
    *(undefined4 *)p_Var3 = 0x2600;
    *(undefined4 *)(p_Var3 + 8) = 0x812f;
    *(undefined4 *)(p_Var3 + 0xc) = 0x812f;
  }
  std::basic_string<>::basic_string<>(abStack_6c,(basic_string<> *)&param_1);
  pcVar4 = (char *)OSInterface::getLocationForAsset();
  local_8._0_1_ = 2;
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar4 = *(char **)pcVar4;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  std::basic_string<>::assign((basic_string<> *)local_2c,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  local_8._0_1_ = 3;
  pSVar5 = cocos2d::Sprite::create((basic_string<> *)local_2c,(Rect *)&stack0x0000001c);
  local_8._0_1_ = 2;
  if (0xf < local_18) {
    pnVar8 = (nothrow_t *)(local_18 + 1);
    pvVar7 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_2c[0] + -4);
      pnVar8 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    pvVar7 = local_44;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_44 + -4);
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  if (pSVar5 == (Sprite *)0x0) {
    bVar2 = cc_assert_script_compatible("ERROR loading file");
    if (!bVar2) {
      cocos2d::log("Assert failed: %s");
    }
    uStack_64 = 0x593a27;
    debugPrint("ERROR","loading file: \'%s\'");
  }
  p_Var3 = this_0065d534;
  this = (Texture2D *)(**(code **)(*(int *)(pSVar5 + 0x278) + 0xc))();
  cocos2d::Texture2D::setTexParameters(this,p_Var3);
  local_8 = CONCAT31(local_8._1_3_,4);
  (**(code **)(*(int *)pSVar5 + 0xa0))();
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar7 = param_1;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)param_1 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_64 = 0x593a9a;
    operator_delete(pvVar7,pnVar8);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  cocos2d::Rect::~Rect((Rect *)&stack0x0000001c);
  ExceptionList = local_10;
  pSVar5 = (Sprite *)__security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return pSVar5;
}


// class std::map<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,struct std::less<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > > __cdecl
// loadMapFromFile(class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,bool)

void __cdecl loadMapFromFile(void *param_1)

{
  _Tree_node<> *p_Var1;
  char ****ppppcVar2;
  int iVar3;
  basic_string<> *this;
  map<> *in_ECX;
  _Tree_comp_alloc<> *this_00;
  int iVar4;
  void *pvVar5;
  char in_DL;
  nothrow_t *pnVar6;
  basic_string<> *pbVar7;
  basic_string<> *pbVar8;
  int iVar9;
  uint in_stack_00000018;
  basic_string<> abStack_a4 [12];
  undefined4 uStack_98;
  char *pcVar10;
  uint uVar11;
  basic_string<> *local_78;
  basic_string<> *local_74;
  basic_string<> *local_6c;
  int local_68;
  undefined4 local_60;
  basic_string<> *local_5c;
  basic_string<> *local_58;
  int local_54;
  basic_string<> *local_50;
  map<> *local_4c;
  char local_45;
  void *local_44 [5];
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ccfa1;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = 0;
  local_8 = 1;
  local_4c = in_ECX;
  local_45 = in_DL;
  std::basic_string<>::basic_string<>(abStack_a4,(basic_string<> *)&param_1);
  loadLinesFromFile();
  local_8._0_1_ = 2;
  *(undefined4 *)in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  p_Var1 = std::_Tree_comp_alloc<>::_Buyheadnode(this_00);
  *(_Tree_node<> **)in_ECX = p_Var1;
  local_60 = 1;
  local_50 = local_78;
  local_58 = local_74;
  pbVar8 = local_78;
  if (local_78 != local_74) {
    do {
      local_50 = pbVar8;
      std::basic_string<>::basic_string<>((basic_string<> *)local_44,pbVar8);
      local_8._0_1_ = 3;
      std::basic_string<>::basic_string<>(abStack_a4,(basic_string<> *)local_44);
      stripWhiteSpaceFromBeginning();
      local_8._0_1_ = 4;
      if (local_1c == 0) {
        local_8._0_1_ = 3;
        if (0xf < local_18) {
          pnVar6 = (nothrow_t *)(local_18 + 1);
          ppppcVar2 = (char ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar6) {
            ppppcVar2 = (char ****)local_2c[0][-1];
            pnVar6 = (nothrow_t *)(local_18 + 0x24);
            if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2)))
            goto LAB_0059403d;
          }
          uStack_98 = 0x593dbc;
          operator_delete(ppppcVar2,pnVar6);
        }
        local_8._0_1_ = 2;
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
        if (0xf < local_30) {
          pnVar6 = (nothrow_t *)(local_30 + 1);
          pvVar5 = local_44[0];
          if ((nothrow_t *)0xfff < pnVar6) {
            pvVar5 = *(void **)((int)local_44[0] + -4);
            pnVar6 = (nothrow_t *)(local_30 + 0x24);
            if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) goto LAB_0059403d;
          }
          uStack_98 = 0x593e0a;
          operator_delete(pvVar5,pnVar6);
        }
      }
      else {
        ppppcVar2 = local_2c;
        if (0xf < local_18) {
          ppppcVar2 = (char ****)local_2c[0];
        }
        if (*(char *)ppppcVar2 == '#') {
          local_8._0_1_ = 3;
          if (0xf < local_18) {
            pnVar6 = (nothrow_t *)(local_18 + 1);
            ppppcVar2 = (char ****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar6) {
              ppppcVar2 = (char ****)local_2c[0][-1];
              pnVar6 = (nothrow_t *)(local_18 + 0x24);
              if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2)))
              goto LAB_0059403d;
            }
            uStack_98 = 0x593e59;
            operator_delete(ppppcVar2,pnVar6);
          }
          local_8._0_1_ = 2;
          local_1c = 0;
          local_18 = 0xf;
          local_2c[0] = (char ***)((uint)local_2c[0] & 0xffffff00);
          if (0xf < local_30) {
            pnVar6 = (nothrow_t *)(local_30 + 1);
            pvVar5 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar6) {
              pvVar5 = *(void **)((int)local_44[0] + -4);
              pnVar6 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) goto LAB_0059403d;
            }
            uStack_98 = 0x593ea7;
            operator_delete(pvVar5,pnVar6);
          }
        }
        else {
          std::basic_string<>::basic_string<>(abStack_a4,(basic_string<> *)local_2c);
          splitStringBy();
          local_8 = CONCAT31(local_8._1_3_,5);
          if (local_45 != '\0') {
            local_5c = local_6c;
            pbVar8 = local_6c;
            if (0xf < *(uint *)(local_6c + 0x14)) {
              local_5c = *(basic_string<> **)local_6c;
              pbVar8 = *(basic_string<> **)local_6c;
            }
            pbVar7 = local_6c;
            if (0xf < *(uint *)(local_6c + 0x14)) {
              pbVar7 = *(basic_string<> **)local_6c;
            }
            iVar4 = (int)(pbVar8 + *(int *)(local_6c + 0x10)) - (int)pbVar7;
            iVar9 = 0;
            if (pbVar8 + *(int *)(local_6c + 0x10) < pbVar7) {
              iVar4 = 0;
            }
            pbVar8 = local_50;
            in_ECX = local_4c;
            local_54 = iVar4;
            if (iVar4 != 0) {
              do {
                iVar3 = tolower((int)(char)pbVar7[iVar9]);
                local_5c[iVar9] = SUB41(iVar3,0);
                iVar9 = iVar9 + 1;
                pbVar8 = local_50;
                in_ECX = local_4c;
              } while (iVar9 != iVar4);
            }
          }
          pbVar7 = local_6c;
          uVar11 = (local_68 - (int)local_6c) / 0x18;
          if (uVar11 == 1) {
            this = std::map<>::operator[](in_ECX,local_6c);
            uVar11 = 0;
            pcVar10 = "";
LAB_00593f82:
            uStack_98 = 0x593f89;
            std::basic_string<>::assign(this,pcVar10,uVar11);
          }
          else if (1 < uVar11) {
            pcVar10 = (char *)(local_6c + 0x18);
            this = std::map<>::operator[](local_4c,local_6c);
            if (this != (basic_string<> *)pcVar10) {
              if (0xf < *(uint *)(pbVar7 + 0x2c)) {
                pcVar10 = *(char **)pcVar10;
              }
              uVar11 = *(uint *)(pbVar7 + 0x28);
              goto LAB_00593f82;
            }
          }
          std::vector<>::_Tidy((vector<> *)&local_6c);
          local_8._0_1_ = 3;
          if (0xf < local_18) {
            pnVar6 = (nothrow_t *)(local_18 + 1);
            ppppcVar2 = (char ****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar6) {
              ppppcVar2 = (char ****)local_2c[0][-1];
              pnVar6 = (nothrow_t *)(local_18 + 0x24);
              if ((char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar2)))
              goto LAB_0059403d;
            }
            uStack_98 = 0x593fc6;
            operator_delete(ppppcVar2,pnVar6);
          }
          local_8._0_1_ = 2;
          in_ECX = local_4c;
          if (0xf < local_30) {
            pnVar6 = (nothrow_t *)(local_30 + 1);
            pvVar5 = local_44[0];
            if ((nothrow_t *)0xfff < pnVar6) {
              pvVar5 = *(void **)((int)local_44[0] + -4);
              pnVar6 = (nothrow_t *)(local_30 + 0x24);
              if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5))) goto LAB_0059403d;
            }
            uStack_98 = 0x593ffa;
            operator_delete(pvVar5,pnVar6);
            in_ECX = local_4c;
          }
        }
      }
      pbVar8 = pbVar8 + 0x18;
      local_50 = pbVar8;
    } while (pbVar8 != local_58);
  }
  std::vector<>::_Tidy((vector<> *)&local_78);
  if (0xf < in_stack_00000018) {
    pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar5 = param_1;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_1 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar5))) {
LAB_0059403d:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_98 = 0x59404a;
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Removing unreachable block (ram,0x0059418f)
// WARNING: Removing unreachable block (ram,0x0059419d)
// WARNING: Removing unreachable block (ram,0x005941b0)
// WARNING: Removing unreachable block (ram,0x005941c7)
// WARNING: Removing unreachable block (ram,0x005941cb)
// WARNING: Removing unreachable block (ram,0x005941d3)
// WARNING: Removing unreachable block (ram,0x005941db)
// WARNING: Removing unreachable block (ram,0x005941e1)
// WARNING: Removing unreachable block (ram,0x005941e6)
// WARNING: Removing unreachable block (ram,0x005941ed)
// WARNING: Removing unreachable block (ram,0x00594285)
// WARNING: Removing unreachable block (ram,0x00594289)
// WARNING: Removing unreachable block (ram,0x005941f5)
// WARNING: Removing unreachable block (ram,0x00594208)
// WARNING: Removing unreachable block (ram,0x0059424a)
// WARNING: Removing unreachable block (ram,0x0059425b)
// WARNING: Removing unreachable block (ram,0x0059426f)
// WARNING: Removing unreachable block (ram,0x00594279)
// WARNING: Removing unreachable block (ram,0x00594291)
// WARNING: Removing unreachable block (ram,0x00594297)
// WARNING: Removing unreachable block (ram,0x005942a0)
// WARNING: Removing unreachable block (ram,0x00594427)
// WARNING: Removing unreachable block (ram,0x005942ac)
// WARNING: Removing unreachable block (ram,0x005942b2)
// WARNING: Removing unreachable block (ram,0x0059437b)
// WARNING: Removing unreachable block (ram,0x005942c7)
// WARNING: Removing unreachable block (ram,0x00594324)
// WARNING: Removing unreachable block (ram,0x005942f0)
// WARNING: Removing unreachable block (ram,0x0059433d)
// WARNING: Removing unreachable block (ram,0x00594348)
// WARNING: Removing unreachable block (ram,0x00594359)
// WARNING: Removing unreachable block (ram,0x00594369)
// WARNING: Removing unreachable block (ram,0x0059436f)
// WARNING: Removing unreachable block (ram,0x00594381)
// WARNING: Removing unreachable block (ram,0x005943d5)
// WARNING: Removing unreachable block (ram,0x005943e3)
// WARNING: Removing unreachable block (ram,0x005943f3)
// WARNING: Removing unreachable block (ram,0x005943f9)
// WARNING: Removing unreachable block (ram,0x00594403)
// class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __cdecl loadLinesFromFile(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __cdecl loadLinesFromFile(void *param_1)

{
  undefined4 *in_ECX;
  void *pvVar1;
  nothrow_t *pnVar2;
  uint in_stack_00000018;
  basic_string<> abStack_20a4 [20];
  undefined4 uStack_2090;
  undefined4 local_2054;
  undefined4 local_2050;
  undefined4 local_204c;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &DAT_005ccffc;
  local_1c = ExceptionList;
  local_24 = ___security_cookie ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_2054 = 0;
  local_2050 = 0;
  local_204c = 0;
  local_14 = 1;
  std::basic_string<>::basic_string<>(abStack_20a4,(basic_string<> *)&param_1);
  OSInterface::getLocationForAsset();
  uStack_2090 = 0x59411c;
  OSInterface::getDataFromFile();
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  std::vector<>::_Tidy((vector<> *)&local_2054);
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar1 = param_1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar1 = *(void **)((int)param_1 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar1))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar1,pnVar2);
  }
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}
