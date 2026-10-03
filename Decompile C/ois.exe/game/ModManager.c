#include "../ois.exe.h"


// public: void __thiscall ModManager::initialise(void)

void __thiscall ModManager::initialise(ModManager *this)

{
  AnimationFrames **ppAVar1;
  uint uVar2;
  char ******ppppppcVar3;
  basic_string<> *pbVar4;
  FileUtils *pFVar5;
  void *pvVar6;
  void *pvVar7;
  nothrow_t *pnVar8;
  basic_string<> *pbVar9;
  basic_string<> *pbVar10;
  basic_string<> abStack_b0 [4];
  undefined4 uStack_ac;
  bool bVar11;
  basic_string<> *local_88;
  basic_string<> *local_84;
  Mod *local_7c;
  basic_string<> *local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [5];
  uint local_48;
  char *****local_44 [4];
  int local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2b93;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  OSInterface::getModDirectory();
  local_8 = 0;
  debugPrint("GAME","Loading mods from folder %s...");
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  if (0xf < local_48) {
    pnVar8 = (nothrow_t *)(local_48 + 1);
    pvVar7 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar7 = *(void **)((int)local_5c[0] + -4);
      pnVar8 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar7))) {
LAB_00418614:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar8);
  }
  OSInterface::getModDirectory();
  getFolders();
  local_8 = 1;
  OSInterface::getModDirectory();
  local_8._0_1_ = 2;
  local_78 = local_84;
  pbVar9 = local_88;
  pbVar10 = local_84;
  if (local_88 != local_84) {
    do {
      std::basic_string<>::basic_string<>((basic_string<> *)local_2c,pbVar9);
      local_8._0_1_ = 3;
      debugPrint("GAME","Checking folder: %s");
      std::basic_string<>::basic_string<>(abStack_b0,(basic_string<> *)local_2c);
      local_7c = getModInfo();
      if (local_7c == (Mod *)0x0) {
        debugPrint("GAME","Invalid mod: %s");
      }
      else {
        ppAVar1 = *(AnimationFrames ***)(this + 4);
        if (*(AnimationFrames ***)(this + 8) == ppAVar1) {
          std::vector<>::_Emplace_reallocate<>
                    ((vector<> *)this,ppAVar1,(AnimationFrames **)&local_7c);
        }
        else {
          *ppAVar1 = (AnimationFrames *)local_7c;
          *(int *)(this + 4) = *(int *)(this + 4) + 4;
        }
        if (local_7c[0x60] == (Mod)0x0) {
          uStack_ac = 0x4188a2;
          debugPrint("GAME","MOD: %s %s (disabled)");
        }
        else {
          uStack_ac = 0x4186f7;
          debugPrint("GAME","MOD: %s %s (enabled)");
          if (local_34 == 0) {
code_r0x0041883e:
            uStack_ac = 0x41884d;
            pbVar4 = (basic_string<> *)strUsingArgs((char *)local_74);
            bVar11 = false;
            local_8._0_1_ = 5;
            pFVar5 = cocos2d::FileUtils::getInstance();
            cocos2d::FileUtils::addSearchPath(pFVar5,pbVar4,bVar11);
            pvVar7 = local_74[0];
            uVar2 = local_60;
          }
          else {
            ppppppcVar3 = local_44;
            if (0xf < local_30) {
              ppppppcVar3 = (char ******)local_44[0];
            }
            if (*(char *)ppppppcVar3 != '\\') goto code_r0x0041883e;
            uStack_ac = 0x418740;
            pbVar4 = (basic_string<> *)strUsingArgs((char *)local_5c);
            bVar11 = false;
            local_8._0_1_ = 4;
            pFVar5 = cocos2d::FileUtils::getInstance();
            cocos2d::FileUtils::addSearchPath(pFVar5,pbVar4,bVar11);
            pvVar7 = local_5c[0];
            uVar2 = local_48;
          }
          pbVar10 = local_78;
          if (0xf < uVar2) {
            local_8._0_1_ = 3;
            pnVar8 = (nothrow_t *)(uVar2 + 1);
            pvVar6 = pvVar7;
            if ((nothrow_t *)0xfff < pnVar8) {
              pvVar6 = *(void **)((int)pvVar7 + -4);
              pnVar8 = (nothrow_t *)(uVar2 + 0x24);
              if (0x1f < (uint)((int)pvVar7 + (-4 - (int)pvVar6))) goto LAB_00418614;
            }
            operator_delete(pvVar6,pnVar8);
            pbVar10 = local_78;
          }
        }
      }
      local_8._0_1_ = 2;
      if (0xf < local_18) {
        pnVar8 = (nothrow_t *)(local_18 + 1);
        pvVar7 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar8) {
          pvVar7 = *(void **)((int)local_2c[0] + -4);
          pnVar8 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar7))) goto LAB_00418614;
        }
        operator_delete(pvVar7,pnVar8);
      }
      pbVar9 = pbVar9 + 0x18;
    } while (pbVar9 != pbVar10);
  }
  debugPrint("GAME","Mods loaded (%d).");
  if (0xf < local_30) {
    pnVar8 = (nothrow_t *)(local_30 + 1);
    ppppppcVar3 = (char ******)local_44[0];
    if ((nothrow_t *)0xfff < pnVar8) {
      ppppppcVar3 = (char ******)local_44[0][-1];
      pnVar8 = (nothrow_t *)(local_30 + 0x24);
      if ((char *)0x1f < (char *)((int)local_44[0] + (-4 - (int)ppppppcVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppppcVar3,pnVar8);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (char *****)((uint)local_44[0] & 0xffffff00);
  std::vector<>::_Tidy((vector<> *)&local_88);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: class Mod * __thiscall ModManager::getModInfo(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Mod * __thiscall ModManager::getModInfo(undefined4 param_1,basic_string<> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char ****ppppcVar6;
  word *pwVar7;
  LPCSTR ***ppppCVar8;
  DWORD DVar9;
  basic_string<> *pbVar10;
  word *pwVar11;
  Mod *pMVar12;
  void *pvVar13;
  basic_string<> *pbVar14;
  nothrow_t *pnVar15;
  basic_string<> *pbVar16;
  uint unaff_EDI;
  int iVar17;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 uStack_c0;
  int local_94;
  int local_90;
  int local_8c;
  void *local_88 [2];
  word *local_80;
  word *local_7c;
  char local_75;
  void *local_74;
  uint local_60;
  char ***local_5c [4];
  int local_4c;
  uint local_48;
  LPCSTR **local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b2c1b;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = pcVar5;
  OSInterface::getModDirectory();
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = (LPCSTR **)((uint)local_44 & 0xffffff00);
  local_8._0_1_ = 2;
  if (local_4c == 0) {
LAB_00418a6d:
    OSInterface::getModDirectory();
    local_8 = CONCAT31(local_8._1_3_,4);
    uStack_c0 = 0x418aa1;
    pwVar7 = (word *)strUsingArgs((char *)local_2c);
    if ((word *)&local_44 != pwVar7) {
      word::~word((word *)&local_44);
      local_44 = *(LPCSTR ***)pwVar7;
      uStack_40 = *(undefined4 *)(pwVar7 + 4);
      uStack_3c = *(undefined4 *)(pwVar7 + 8);
      uStack_38 = *(undefined4 *)(pwVar7 + 0xc);
      local_34 = *(undefined4 *)(pwVar7 + 0x10);
      uStack_30 = *(uint *)(pwVar7 + 0x14);
      *(undefined4 *)(pwVar7 + 0x10) = 0;
      *(undefined4 *)(pwVar7 + 0x14) = 0xf;
      *pwVar7 = (word)0x0;
    }
    if (local_18 < 0x10) goto LAB_00418a1f;
    pnVar15 = (nothrow_t *)(local_18 + 1);
    pvVar13 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar13 = *(void **)((int)local_2c[0] + -4);
      pnVar15 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    ppppcVar6 = local_5c;
    if (0xf < local_48) {
      ppppcVar6 = (char ****)local_5c[0];
    }
    if (*(char *)ppppcVar6 != '\\') goto LAB_00418a6d;
    OSInterface::getModDirectory();
    local_8 = CONCAT31(local_8._1_3_,3);
    uStack_c0 = 0x4189b4;
    pwVar7 = (word *)strUsingArgs((char *)local_2c);
    if ((word *)&local_44 != pwVar7) {
      word::~word((word *)&local_44);
      local_44 = *(LPCSTR ***)pwVar7;
      uStack_40 = *(undefined4 *)(pwVar7 + 4);
      uStack_3c = *(undefined4 *)(pwVar7 + 8);
      uStack_38 = *(undefined4 *)(pwVar7 + 0xc);
      local_34 = *(undefined4 *)(pwVar7 + 0x10);
      uStack_30 = *(uint *)(pwVar7 + 0x14);
      *(undefined4 *)(pwVar7 + 0x10) = 0;
      *(undefined4 *)(pwVar7 + 0x14) = 0xf;
      *pwVar7 = (word)0x0;
    }
    if (local_18 < 0x10) goto LAB_00418a1f;
    pnVar15 = (nothrow_t *)(local_18 + 1);
    pvVar13 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pnVar15 = (nothrow_t *)(local_18 + 0x24);
      pvVar13 = *(void **)((int)local_2c[0] + -4);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)*(void **)((int)local_2c[0] + -4)))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete(pvVar13,pnVar15);
LAB_00418a1f:
  local_8._0_1_ = 2;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_60) {
    pnVar15 = (nothrow_t *)(local_60 + 1);
    pvVar13 = local_74;
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar13 = *(void **)((int)local_74 + -4);
      pnVar15 = (nothrow_t *)(local_60 + 0x24);
      if (0x1f < (uint)((int)local_74 + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar13,pnVar15);
  }
  ppppCVar8 = &local_44;
  if (0xf < uStack_30) {
    ppppCVar8 = (LPCSTR ***)local_44;
  }
  DVar9 = GetFileAttributesA((LPCSTR)ppppCVar8);
  if ((DVar9 != 0xffffffff) && ((DVar9 & 0x10) == 0)) {
    pwVar7 = operator_new(100);
    memset(pwVar7,0,100);
    *(undefined4 *)(pwVar7 + 0x14) = 0xf;
    local_7c = pwVar7 + 0x18;
    *(undefined4 *)(pwVar7 + 0x28) = 0;
    *(undefined4 *)(pwVar7 + 0x2c) = 0xf;
    *local_7c = (word)0x0;
    pbVar14 = (basic_string<> *)(pwVar7 + 0x30);
    *(undefined4 *)(pwVar7 + 0x40) = 0;
    *(undefined4 *)(pwVar7 + 0x44) = 0xf;
    *pbVar14 = (basic_string<>)0x0;
    local_80 = pwVar7 + 0x48;
    *(undefined4 *)(pwVar7 + 0x58) = 0;
    *(undefined4 *)(pwVar7 + 0x5c) = 0xf;
    *local_80 = (word)0x0;
    local_75 = 1;
    std::basic_string<>::basic_string<>((basic_string<> *)&uStack_c0,(basic_string<> *)&local_44);
    loadMapFromFile();
    local_8._0_1_ = 5;
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"name",4);
    std::_Tree<>::_Eqrange<>((_Tree<> *)local_88,(basic_string<> *)&local_90);
    iVar4 = local_8c;
    iVar17 = 0;
    local_94 = local_90;
    while (local_94 != iVar4) {
      iVar17 = iVar17 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_94);
    }
    if (0xf < local_18) {
      pnVar15 = (nothrow_t *)(local_18 + 1);
      pvVar13 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar13 = *(void **)((int)local_2c[0] + -4);
        pnVar15 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar13,pnVar15);
    }
    if (iVar17 == 0) {
      if (local_7c != (word *)&param_2) {
        pbVar10 = (basic_string<> *)&param_2;
        if (0xf < in_stack_00000018) {
          pbVar10 = param_2;
        }
        std::basic_string<>::assign((basic_string<> *)local_7c,(char *)pbVar10,in_stack_00000014);
      }
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_2c,"name",4);
      local_8 = CONCAT31(local_8._1_3_,6);
      pbVar10 = std::map<>::operator[]((map<> *)local_88,(basic_string<> *)local_2c);
      if (local_7c != (word *)pbVar10) {
        pbVar16 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar16 = *(basic_string<> **)pbVar10;
        }
        std::basic_string<>::assign
                  ((basic_string<> *)local_7c,(char *)pbVar16,*(uint *)(pbVar10 + 0x10));
      }
      local_8._0_1_ = 5;
      if (0xf < local_18) {
        pnVar15 = (nothrow_t *)(local_18 + 1);
        pvVar13 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar13 = *(void **)((int)local_2c[0] + -4);
          pnVar15 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar13,pnVar15);
      }
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"disabled",8);
    local_8._0_1_ = 7;
    std::map<>::operator[]((map<> *)local_88,(basic_string<> *)local_2c);
    local_75 = std::_Traits_equal<>("true",4,pcVar5,unaff_EDI);
    local_8._0_1_ = 5;
    if (0xf < local_18) {
      pnVar15 = (nothrow_t *)(local_18 + 1);
      pvVar13 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar13 = *(void **)((int)local_2c[0] + -4);
        pnVar15 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar13,pnVar15);
    }
    local_1c = 0;
    pwVar7[0x60] = (word)(local_75 == '\0');
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"oisversion",10);
    std::_Tree<>::_Eqrange<>((_Tree<> *)local_88,(basic_string<> *)&local_90);
    iVar4 = local_8c;
    iVar17 = 0;
    local_7c = (word *)local_90;
    while (local_7c != (word *)iVar4) {
      iVar17 = iVar17 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_7c);
    }
    if (0xf < local_18) {
      pnVar15 = (nothrow_t *)(local_18 + 1);
      pvVar13 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar13 = *(void **)((int)local_2c[0] + -4);
        pnVar15 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar13,pnVar15);
    }
    if (iVar17 == 0) {
      std::basic_string<>::assign((basic_string<> *)local_80,"1.0.8",5);
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_2c,"oisversion",10);
      local_8 = CONCAT31(local_8._1_3_,8);
      pbVar10 = std::map<>::operator[]((map<> *)local_88,(basic_string<> *)local_2c);
      if (local_80 != (word *)pbVar10) {
        pbVar16 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar16 = *(basic_string<> **)pbVar10;
        }
        std::basic_string<>::assign
                  ((basic_string<> *)local_80,(char *)pbVar16,*(uint *)(pbVar10 + 0x10));
      }
      local_8._0_1_ = 5;
      if (0xf < local_18) {
        pnVar15 = (nothrow_t *)(local_18 + 1);
        pvVar13 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar13 = *(void **)((int)local_2c[0] + -4);
          pnVar15 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar13,pnVar15);
      }
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    std::basic_string<>::assign((basic_string<> *)local_2c,"version",7);
    std::_Tree<>::_Eqrange<>((_Tree<> *)local_88,(basic_string<> *)&local_90);
    iVar17 = 0;
    local_80 = (word *)local_90;
    while (local_80 != (word *)local_8c) {
      iVar17 = iVar17 + 1;
      std::_Tree_unchecked_const_iterator<>::operator++
                ((_Tree_unchecked_const_iterator<> *)&local_80);
    }
    if (0xf < local_18) {
      pnVar15 = (nothrow_t *)(local_18 + 1);
      pvVar13 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar13 = *(void **)((int)local_2c[0] + -4);
        pnVar15 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar13,pnVar15);
    }
    if (iVar17 == 0) {
      std::basic_string<>::assign(pbVar14,"1.0",3);
    }
    else {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
      std::basic_string<>::assign((basic_string<> *)local_2c,"version",7);
      local_8 = CONCAT31(local_8._1_3_,9);
      pbVar10 = std::map<>::operator[]((map<> *)local_88,(basic_string<> *)local_2c);
      if (pbVar14 != pbVar10) {
        pbVar16 = pbVar10;
        if (0xf < *(uint *)(pbVar10 + 0x14)) {
          pbVar16 = *(basic_string<> **)pbVar10;
        }
        std::basic_string<>::assign(pbVar14,(char *)pbVar16,*(uint *)(pbVar10 + 0x10));
      }
      local_8._0_1_ = 5;
      if (0xf < local_18) {
        pnVar15 = (nothrow_t *)(local_18 + 1);
        pvVar13 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar15) {
          pvVar13 = *(void **)((int)local_2c[0] + -4);
          pnVar15 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar13,pnVar15);
      }
    }
    OSInterface::getModDirectory();
    local_8._0_1_ = 10;
    pwVar11 = (word *)strUsingArgs((char *)local_2c);
    if (pwVar7 != pwVar11) {
      word::~word(pwVar7);
      uVar1 = *(undefined4 *)(pwVar11 + 4);
      uVar2 = *(undefined4 *)(pwVar11 + 8);
      uVar3 = *(undefined4 *)(pwVar11 + 0xc);
      *(undefined4 *)pwVar7 = *(undefined4 *)pwVar11;
      *(undefined4 *)(pwVar7 + 4) = uVar1;
      *(undefined4 *)(pwVar7 + 8) = uVar2;
      *(undefined4 *)(pwVar7 + 0xc) = uVar3;
      *(undefined8 *)(pwVar7 + 0x10) = *(undefined8 *)(pwVar11 + 0x10);
      *(undefined4 *)(pwVar11 + 0x10) = 0;
      *(undefined4 *)(pwVar11 + 0x14) = 0xf;
      *pwVar11 = (word)0x0;
    }
    if (0xf < local_18) {
      pnVar15 = (nothrow_t *)(local_18 + 1);
      pvVar13 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar13 = *(void **)((int)local_2c[0] + -4);
        pnVar15 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar13,pnVar15);
    }
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (0xf < local_60) {
      pnVar15 = (nothrow_t *)(local_60 + 1);
      pvVar13 = local_74;
      if ((nothrow_t *)0xfff < pnVar15) {
        pvVar13 = *(void **)((int)local_74 + -4);
        pnVar15 = (nothrow_t *)(local_60 + 0x24);
        if (0x1f < (uint)((int)local_74 + (-4 - (int)pvVar13))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar13,pnVar15);
    }
    std::_Tree<>::erase((_Tree<> *)local_88);
    operator_delete(local_88[0],(nothrow_t *)&DAT_00000040);
  }
  if (0xf < uStack_30) {
    pnVar15 = (nothrow_t *)(uStack_30 + 1);
    ppppCVar8 = (LPCSTR ***)local_44;
    if ((nothrow_t *)0xfff < pnVar15) {
      ppppCVar8 = (LPCSTR ***)local_44[-1];
      pnVar15 = (nothrow_t *)(uStack_30 + 0x24);
      if ((LPCSTR)0x1f < (LPCSTR)((int)local_44 + (-4 - (int)ppppCVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppCVar8,pnVar15);
  }
  local_34 = 0;
  uStack_30 = 0xf;
  local_44 = (LPCSTR **)((uint)local_44 & 0xffffff00);
  if (0xf < local_48) {
    pnVar15 = (nothrow_t *)(local_48 + 1);
    ppppcVar6 = (char ****)local_5c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      ppppcVar6 = (char ****)local_5c[0][-1];
      pnVar15 = (nothrow_t *)(local_48 + 0x24);
      if ((char *)0x1f < (char *)((int)local_5c[0] + (-4 - (int)ppppcVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar6,pnVar15);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (char ***)((uint)local_5c[0] & 0xffffff00);
  if (0xf < in_stack_00000018) {
    pnVar15 = (nothrow_t *)(in_stack_00000018 + 1);
    pbVar14 = param_2;
    if ((nothrow_t *)0xfff < pnVar15) {
      pbVar14 = *(basic_string<> **)(param_2 + -4);
      pnVar15 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((basic_string<> *)0x1f < param_2 + (-4 - (int)pbVar14)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar14,pnVar15);
  }
  ExceptionList = local_10;
  pMVar12 = (Mod *)__security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return pMVar12;
}


// public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,class std::allocator<class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> > > > __thiscall ModManager::getFolders(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __thiscall
ModManager::getFolders
          (undefined4 param_1,vector<> *param_2,char *param_3,int param_4,int param_5,int param_6,
          undefined8 param_7)

{
  basic_string<> *this;
  bool bVar1;
  char *pcVar2;
  DWORD DVar3;
  basic_string<> *pbVar4;
  word *pwVar5;
  uint uVar6;
  LPCWSTR *****lpFileName;
  HANDLE hFindFile;
  BOOL BVar7;
  void *pvVar8;
  nothrow_t *pnVar9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  uint unaff_EDI;
  void **ppvVar13;
  uint local_2b0;
  _WIN32_FIND_DATAW local_2ac;
  void *local_5c [5];
  uint local_48;
  LPCWSTR ****local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &DAT_005b2c92;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 1;
  uStack_7 = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  pcVar11 = (char *)&param_3;
  if (0xf < param_7._4_4_) {
    pcVar11 = param_3;
  }
  local_14 = pcVar2;
  mbstowcs(local_2ac.cFileName + 0x12,pcVar11,0x100);
  DVar3 = GetFileAttributesW(local_2ac.cFileName + 0x12);
  if ((DVar3 != 0xffffffff) && ((DVar3 & 0x10) != 0)) {
    if ((int)param_7 == 0) {
LAB_00419364:
      pcVar11 = (char *)&param_3;
      if (0xf < param_7._4_4_) {
        pcVar11 = param_3;
      }
      pwVar5 = (word *)strUsingArgs((char *)local_2c,"%s*",pcVar11);
      if ((word *)&param_3 != pwVar5) {
        word::~word((word *)&param_3);
        param_3 = *(char **)pwVar5;
        param_4 = *(int *)(pwVar5 + 4);
        param_5 = *(int *)(pwVar5 + 8);
        param_6 = *(int *)(pwVar5 + 0xc);
        param_7 = *(undefined8 *)(pwVar5 + 0x10);
        *(int *)(pwVar5 + 0x10) = 0;
        *(int *)(pwVar5 + 0x14) = 0xf;
        *pwVar5 = (word)0x0;
      }
    }
    else {
      pcVar11 = (char *)&param_3;
      if (0xf < param_7._4_4_) {
        pcVar11 = param_3;
      }
      if (*pcVar11 != '\\') goto LAB_00419364;
      pcVar11 = (char *)&param_3;
      if (0xf < param_7._4_4_) {
        pcVar11 = param_3;
      }
      pbVar4 = (basic_string<> *)strUsingArgs((char *)local_2c,".%s*",pcVar11);
      std::basic_string<>::operator=((basic_string<> *)&param_3,pbVar4);
    }
    if (0xf < local_18) {
      pnVar9 = (nothrow_t *)(local_18 + 1);
      pvVar8 = local_2c[0];
      if ((nothrow_t *)0xfff < pnVar9) {
        pvVar8 = *(void **)((int)local_2c[0] + -4);
        pnVar9 = (nothrow_t *)(local_18 + 0x24);
        if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar8))) goto LAB_0041935e;
      }
      operator_delete(pvVar8,pnVar9);
    }
    pcVar11 = (char *)&param_3;
    if (0xf < param_7._4_4_) {
      pcVar11 = param_3;
    }
    pcVar11 = pcVar11 + (int)param_7;
    local_34 = 0;
    local_30 = 7;
    pcVar10 = (char *)&param_3;
    if (0xf < param_7._4_4_) {
      pcVar10 = param_3;
    }
    local_44[0] = (LPCWSTR ****)((uint)local_44[0] & 0xffff0000);
    uVar6 = (int)pcVar11 - (int)pcVar10;
    if (7 < uVar6) {
      local_2b0 = local_2b0 & 0xffffff00;
      std::basic_string<>::_Reallocate_grow_by<>((basic_string<> *)local_44,uVar6,local_2b0);
    }
    local_34 = 0;
    std::basic_string<>::_Construct<char*>((basic_string<> *)local_44,pcVar10,pcVar11,param_2);
    local_8 = 2;
    lpFileName = local_44;
    if (7 < local_30) {
      lpFileName = (LPCWSTR *****)local_44[0];
    }
    hFindFile = FindFirstFileW((LPCWSTR)lpFileName,&local_2ac);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        strUsingArgs((char *)local_5c,"%S",local_2ac.cFileName);
        local_8 = 3;
        if (((byte)local_2ac.dwFileAttributes & 0x10) != 0) {
          ppvVar13 = local_2c;
          pcVar11 = "%S";
          strUsingArgs((char *)ppvVar13,"%S",local_2ac.cFileName);
          uVar6 = local_18;
          pvVar8 = local_2c[0];
          _local_8 = CONCAT31(uStack_7,4);
          bVar1 = std::_Traits_equal<>(".",1,(char *)ppvVar13,(uint)pcVar11);
          if ((!bVar1) && (bVar1 = std::_Traits_equal<>("..",2,pcVar2,unaff_EDI), !bVar1)) {
            this = *(basic_string<> **)(param_2 + 4);
            if (*(basic_string<> **)(param_2 + 8) == this) {
              std::vector<>::_Emplace_reallocate<>
                        (param_2,(basic_string<> *)this,(basic_string<> *)local_2c);
              pvVar8 = local_2c[0];
              uVar6 = local_18;
            }
            else {
              std::basic_string<>::basic_string<>(this,(basic_string<> *)local_2c);
              *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 0x18;
              pvVar8 = local_2c[0];
              uVar6 = local_18;
            }
          }
          local_8 = 3;
          if (0xf < uVar6) {
            pnVar9 = (nothrow_t *)(uVar6 + 1);
            pvVar12 = pvVar8;
            if ((nothrow_t *)0xfff < pnVar9) {
              pvVar12 = *(void **)((int)pvVar8 + -4);
              pnVar9 = (nothrow_t *)(uVar6 + 0x24);
              if (0x1f < (uint)((int)pvVar8 + (-4 - (int)pvVar12))) goto LAB_0041935e;
            }
            operator_delete(pvVar12,pnVar9);
          }
        }
        local_8 = 2;
        if (0xf < local_48) {
          pnVar9 = (nothrow_t *)(local_48 + 1);
          pvVar8 = local_5c[0];
          if ((nothrow_t *)0xfff < pnVar9) {
            pvVar8 = *(void **)((int)local_5c[0] + -4);
            pnVar9 = (nothrow_t *)(local_48 + 0x24);
            if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar8))) goto LAB_0041935e;
          }
          operator_delete(pvVar8,pnVar9);
        }
        BVar7 = FindNextFileW(hFindFile,&local_2ac);
      } while (BVar7 != 0);
    }
    std::basic_string<>::_Tidy_deallocate((basic_string<> *)local_44);
  }
  if (0xf < param_7._4_4_) {
    pnVar9 = (nothrow_t *)(param_7._4_4_ + 1);
    pcVar11 = param_3;
    if ((nothrow_t *)0xfff < pnVar9) {
      pcVar11 = *(char **)(param_3 + -4);
      pnVar9 = (nothrow_t *)(param_7._4_4_ + 0x24);
      if ((char *)0x1f < param_3 + (-4 - (int)pcVar11)) {
LAB_0041935e:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar11,pnVar9);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}
