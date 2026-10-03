// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: void __cdecl V7::loadFlags(_iobuf *param_1)
void V7::loadFlags(_iobuf * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff88[1] = {0};  // [pseudo] address of an unnamed stack slot
  _iobuf *p_Var1;
  FlagManager *pFVar2;
  ghidra::lib::_Tree_node_t *p_Var3;
  FILE *in_ECX;
  void *pvVar4;
  ghidra::lib::_Tree_comp_alloc_t *this;
  nothrow_t *pnVar5;
  std::string *pbVar6;
  std::string *pbVar7;
  std::string *this_00;
  int iVar8;
  std::string *local_40;
  std::string *local_3c;
  std::string *local_38;
  int local_34;
  int local_30;
  void *local_2c [5];
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  uint local_8;
  
  // [seh] puStack_c = &DAT_005bedff;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var1 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  pbVar6 = (std::string *)0x0;
  this_00 = (std::string *)0x0;
  local_40 = (std::string *)0x0;
  local_3c = (std::string *)0x0;
  local_38 = (std::string *)0x0;
  // [seh] local_8 = 0;
  local_30 = 0;
  local_14 = p_Var1;
  fread(&local_30,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d flags...");
  iVar8 = 0;
  pbVar7 = pbVar6;
  if (0 < local_30) {
    do {
      SaveHandler::readLengthString(p_Var1);
      // [seh] local_8 = CONCAT31(local_8._1_3_,1);
      if (pbVar6 == (std::string *)this_00) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)&local_40,(std::string *)this_00,(std::string *)local_2c);
        pbVar6 = local_38;
      }
      else {
        ghidra::str::ctor(this_00,(std::string *)local_2c);
        local_3c = this_00 + 0x18;
      }
      this_00 = local_3c;
      // [seh] local_8 = local_8 & 0xffffff00;
      if (0xf < local_18) {
        pnVar5 = (nothrow_t *)(local_18 + 1);
        pvVar4 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar5) {
          pvVar4 = *(void **)((int)local_2c[0] + -4);
          pnVar5 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar4,pnVar5);
      }
      iVar8 = iVar8 + 1;
      pbVar7 = local_40;
    } while (iVar8 < local_30);
  }
  pFVar2 = ghidra::any_singleton();
  (pFVar2)->reset();
  for (iVar8 = ((int)this_00 - (int)pbVar7) / 0x18; local_34 = iVar8, iVar8 != 0; iVar8 = iVar8 + -1
      ) {
    ghidra::str::ctor((std::string *)&stack0xffffff88,pbVar7);
    // [seh] local_8._0_1_ = 2;
    if (ghidra::Singleton<void>::instance == (FlagManager *)0x0) {
      pFVar2 = operator_new(0x30);
      *(undefined4 *)pFVar2 = 0;
      *(undefined4 *)(pFVar2 + 4) = 0;
      *(undefined4 *)(pFVar2 + 8) = 0;
      // [seh] local_8._0_1_ = 4;
      *(undefined4 *)(pFVar2 + 0xc) = 0;
      *(undefined4 *)(pFVar2 + 0x10) = 0;
      p_Var3 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this);
      *(ghidra::lib::_Tree_node_t **)(pFVar2 + 0xc) = p_Var3;
      *(undefined4 *)(pFVar2 + 0x24) = 0;
      *(undefined4 *)(pFVar2 + 0x28) = 0xf;
      pFVar2[0x14] = (byte)0x0;
      iVar8 = local_34;
      ghidra::Singleton<void>::instance = pFVar2;
    }
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    (ghidra::Singleton<void>::instance)->setFlag();
    debugPrint("SAVEHANDLER","...loaded flag: %s");
    pbVar7 = pbVar7 + 0x18;
  }
  ghidra::lib::vector___Tidy((ghidra::vector *)&local_40);
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __cdecl V7::loadShips(_iobuf *param_1)
void V7::loadShips(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff24[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff0c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff20[1] = {0};  // [pseudo] address of an unnamed stack slot
  Weapon *pWVar1;
  GameData *pGVar2;
  _iobuf *p_Var3;
  Ship *this_;
  undefined4 *puVar4;
  ConsoleDamage *pCVar5;
  ShipModule *pSVar6;
  SaveHandler *pSVar7;
  int iVar8;
  ghidra::lib::_Tree_node_t *p_Var9;
  WeaponClass *pWVar10;
  FILE *in_ECX;
  int *piVar11;
  _iobuf *extraout_ECX;
  _iobuf *extraout_ECX_00;
  std::string *pbVar12;
  ghidra::lib::_Tree_comp_alloc_t *this_00;
  undefined4 ****ppppuVar13;
  void *pvVar14;
  nothrow_t *pnVar15;
  int iVar16;
  int iVar17;
  code *pcVar18;
  std::string abStack_124 [16];
  undefined4 uStack_114;
  std::string abStack_10c [4];
  undefined4 uStack_108;
  uint uVar19;
  _iobuf *p_Var20;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 local_a0 [4];
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  FILE *local_8c;
  Ship *local_88;
  Weapon *local_84;
  char local_7e;
  Ship local_7d;
  Weapon *local_7c;
  undefined4 ***local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  _iobuf *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005bf2b6;
  // [seh] local_10 = ExceptionList;
  // [cookie] p_Var3 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_8c = in_ECX;
  local_14 = p_Var3;
  SaveHandler::readLengthString(p_Var3);
  // [seh] local_8 = 0;
  SaveHandler::readLengthString(p_Var3);
  // [seh] local_8._0_1_ = 1;
  SaveHandler::readLengthString(p_Var3);
  pcVar18 = fread_exref;
  // [seh] local_8._0_1_ = 2;
  fread(&local_b4,8,1,in_ECX);
  uVar19 = 0;
  fread(&local_ac,8,1,in_ECX);
  fread(local_a0,4,1,in_ECX);
  uStack_108 = 0x4c2bde;
  fread(&local_7d,1,1,in_ECX);
  local_7c = (Weapon *)&stack0xffffff24;
  p_Var20 = (_iobuf *)(uVar19 & 0xffffff00);
  ghidra::str::assign((std::string *)&stack0xffffff24,"",0);
  // [seh] local_8._0_1_ = 3;
  local_88 = (Ship *)&stack0xffffff0c;
  ghidra::str::ctor((std::string *)&stack0xffffff0c,(std::string *)local_74)
  ;
  local_84 = (Weapon *)abStack_10c;
  // [seh] local_8._0_1_ = 4;
  uStack_114 = 0x4c2c30;
  ghidra::str::ctor(abStack_10c,(std::string *)local_44);
  // [seh] local_8._0_1_ = 5;
  ghidra::str::ctor(abStack_124,(std::string *)local_5c);
  // [seh] local_8._0_1_ = 2;
  this_ = GameLogic::generateShip();
  pGVar2 = g_gameData;
  local_84 = (Weapon *)this_;
  if (this_ == (Ship *)0x0) {
    debugPrint("SAVEHANDLER","ERROR - Invalid ship type in save game, \'%s\'");
  }
  else {
    *(undefined8 *)((char *)this_ + 0x28) = local_b4;
    *(Ship **)(pGVar2 + 0xd0) = this_;
    *(undefined8 *)((char *)this_ + 0x30) = local_ac;
    ((char *)this_)[0x15c] = local_7d;
    (this_)->setSector(*(int *)(*(int *)(pGVar2 + 0xd0) + 0x20));
    for (puVar4 = *(undefined4 **)(g_gameData + 0x3c); puVar4 != *(undefined4 **)(g_gameData + 0x40)
        ; puVar4 = puVar4 + 1) {
      piVar11 = (int *)*puVar4;
      in_ECX = local_8c;
      if (*piVar11 == *(int *)((char *)this_ + 0x20)) goto LAB_004c2ce8;
    }
    piVar11 = (int *)0x0;
LAB_004c2ce8:
    *(int **)(g_gameData + 0xd8) = piVar11;
    if (Singleton<Pather>::instance == (Pather *)0x0) {
      local_7c = operator_new(0x98);
      // [seh] local_8._0_1_ = 6;
      Singleton<Pather>::instance = (Pather *)new ((void *)((Pather *)local_7c)) Pather();
      // [seh] local_8._0_1_ = 2;
    }
    (Singleton<Pather>::instance)->resetSector();
    fread(&local_90,4,1,in_ECX);
    if (0 < local_90) {
      local_88 = this_ + 0x14c;
      iVar16 = 0;
      do {
        fread(&local_78,4,1,in_ECX);
        p_Var20 = (_iobuf *)&DAT_00000001;
        fread(&local_7c,4,1,in_ECX);
        piVar11 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)local_88,(int *)&local_78);
        iVar16 = iVar16 + 1;
        *piVar11 = (int)local_7c;
        this_ = (Ship *)local_84;
      } while (iVar16 < local_90);
    }
    fread(&local_94,4,1,in_ECX);
    (this_)->repairConsoleDamage();
    local_78 = (undefined4 ***)0x0;
    if (0 < local_94) {
      do {
        pCVar5 = operator_new(0x28);
        // [seh] local_8._0_1_ = 7;
        local_7c = (Weapon *)pCVar5;
        SaveHandler::readLengthString(p_Var20);
        iVar16 = new ((void *)(pCVar5)) ConsoleDamage();
        // [seh] local_8._0_1_ = 2;
        fread((void *)(iVar16 + 0x20),4,1,in_ECX);
        p_Var20 = (_iobuf *)&DAT_00000001;
        fread((void *)(iVar16 + 0x24),4,1,in_ECX);
        fread((void *)(iVar16 + 0x18),4,1,in_ECX);
        pcVar18 = fread_exref;
        uStack_108 = 0x4c2e1c;
        fread((void *)(iVar16 + 0x1c),4,1,in_ECX);
        debugPrint("SAVEHANDLER","  Console damage loaded for: %s");
        local_78 = (undefined4 ***)((int)local_78 + 1);
      } while ((int)local_78 < local_94);
    }
    (*pcVar18)();
    local_78 = (undefined4 ****)0x0;
    p_Var20 = extraout_ECX;
    if (0 < local_98) {
      do {
        iVar16 = -1;
        pSVar6 = V6::readShipModule(p_Var20);
        (*(SystemManager **)((char *)this_ + 0x40))->addModule(pSVar6, iVar16);
        local_78 = (undefined4 ***)((int)local_78 + 1);
        p_Var20 = extraout_ECX_00;
      } while ((int)local_78 < local_98);
    }
    *(undefined1 *)(*(int *)((char *)this_ + 0x40) + 0x34) = 0;
    local_7c = (Weapon *)GameData::getShipWithinDistance();
    if (local_7c == (Weapon *)0x0) {
      (**(code **)(**(int **)((char *)this_ + 0x178) + 4))();
      *(undefined4 *)((char *)this_ + 0x178) = 0;
      *(undefined4 *)((char *)this_ + 0xf8) = 0;
      *(undefined4 *)((char *)this_ + 0xd4) = 0;
      *(undefined4 *)((char *)this_ + 0x2c0) = 0;
      *(undefined4 *)((char *)this_ + 0x2c4) = 0;
    }
    else {
      (this_)->setDocked((Ship *)local_7c, false, false);
      iVar16 = *(int *)((char *)this_ + 0x178);
      if (iVar16 != 0) {
        pbVar12 = (std::string *)(iVar16 + 8);
        pSVar7 = ghidra::any_singleton();
        if ((std::string *)(pSVar7 + 0x14) != pbVar12) {
          if (0xf < *(uint *)(iVar16 + 0x1c)) {
            pbVar12 = *(std::string **)pbVar12;
          }
          ghidra::str::assign
                    ((std::string *)(pSVar7 + 0x14),(char *)pbVar12,*(uint *)(iVar16 + 0x18));
        }
        strUsingArgs((char *)local_2c);
        // [seh] local_8._0_1_ = 8;
        local_88 = (Ship *)local_2c;
        if (0xf < local_18) {
          local_88 = (Ship *)local_2c[0];
        }
        ppppuVar13 = local_2c;
        if (0xf < local_18) {
          ppppuVar13 = (undefined4 ****)local_2c[0];
        }
        iVar17 = 0;
        iVar16 = (local_1c + (int)local_88) - (int)ppppuVar13;
        if ((undefined4 ****)(local_1c + (int)local_88) < ppppuVar13) {
          iVar16 = 0;
        }
        local_78 = ppppuVar13;
        if (iVar16 != 0) {
          do {
            iVar8 = tolower((int)*(char *)(iVar17 + (int)ppppuVar13));
            *(char *)(iVar17 + (int)local_88) = (char)iVar8;
            iVar17 = iVar17 + 1;
            this_ = (Ship *)local_84;
          } while (iVar17 != iVar16);
        }
        local_88 = (Ship *)&stack0xffffff20;
        ghidra::str::ctor
                  ((std::string *)&stack0xffffff20,(std::string *)local_2c);
        // [seh] local_8._0_1_ = 9;
        if (ghidra::Singleton<void>::instance == (FlagManager *)0x0) {
          local_7c = operator_new(0x30);
          *(undefined4 *)local_7c = 0;
          *(undefined4 *)(local_7c + 4) = 0;
          *(undefined4 *)(local_7c + 8) = 0;
          pWVar1 = local_7c + 0xc;
          // [seh] local_8._0_1_ = 0xb;
          *(undefined4 *)pWVar1 = 0;
          *(undefined4 *)(local_7c + 0x10) = 0;
          local_84 = pWVar1;
          p_Var9 = ghidra::lib::_Tree_comp_alloc___Buyheadnode(this_00);
          *(ghidra::lib::_Tree_node_t **)pWVar1 = p_Var9;
          ghidra::Singleton<void>::instance = (FlagManager *)local_7c;
          *(undefined4 *)(local_7c + 0x24) = 0;
          *(undefined4 *)(local_7c + 0x28) = 0xf;
          local_7c[0x14] = (byte)0x0;
        }
        // [seh] local_8._0_1_ = 8;
        FlagManager::setFlag();
        // [seh] local_8._0_1_ = 2;
        if (0xf < local_18) {
          pnVar15 = (nothrow_t *)(local_18 + 1);
          ppppuVar13 = (undefined4 ****)local_2c[0];
          if ((nothrow_t *)0xfff < pnVar15) {
            ppppuVar13 = (undefined4 ****)local_2c[0][-1];
            pnVar15 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar13))) {
LAB_004c306a:
              // [seh] local_8._0_1_ = 2;
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(ppppuVar13,pnVar15);
        }
        local_1c = 0;
        local_18 = 0xf;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        pcVar18 = fread_exref;
      }
    }
    pGVar2 = g_gameData;
    *(undefined4 *)((char *)this_ + 0x378) = 0;
    iVar16 = *(int *)(*(int *)(*(int *)(pGVar2 + 0xd0) + 0x40) + 0x20);
    if (iVar16 != 0) {
      local_84 = (Weapon *)(iVar16 + 0x3c);
      local_8c = (FILE *)0x8;
      do {
        local_7c = *(Weapon **)local_84;
        if (local_7c != (Weapon *)0x0) {
          (local_7c)->~Weapon();
          operator_delete(local_7c,(nothrow_t *)0x428);
        }
        *(undefined4 *)local_84 = 0;
        local_84 = local_84 + 4;
        local_8c = (FILE *)((int)&local_8c[-1]._tmpfname + 3);
      } while (local_8c != (FILE *)0x0);
    }
    (*pcVar18)();
    local_78 = (undefined4 ****)0x0;
    if (0 < local_9c) {
      do {
        (*pcVar18)();
        if (local_7e != '\0') {
          SaveHandler::readLengthString(p_Var3);
          // [seh] local_8._0_1_ = 0xc;
          ppppuVar13 = (undefined4 ****)local_78;
          ghidra::str::ctor
                    ((std::string *)&stack0xffffff20,(std::string *)local_2c);
          pWVar10 = GameData::getWeaponClassWithIdentifier();
          (*(Ship **)(g_gameData + 0xd0))->addWeapon(pWVar10, (int)ppppuVar13);
          debugPrint("SAVEHANDLER","Loaded weapon of class %s into player ship");
          // [seh] local_8._0_1_ = 2;
          if (0xf < local_18) {
            pnVar15 = (nothrow_t *)(local_18 + 1);
            ppppuVar13 = (undefined4 ****)local_2c[0];
            if ((nothrow_t *)0xfff < pnVar15) {
              ppppuVar13 = (undefined4 ****)local_2c[0][-1];
              pnVar15 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)ppppuVar13))) goto LAB_004c306a;
            }
            operator_delete(ppppuVar13,pnVar15);
          }
        }
        local_78 = (undefined4 ***)((int)local_78 + 1);
      } while ((int)local_78 < local_9c);
    }
    pGVar2 = g_gameData;
    *(undefined4 *)((char *)this_ + 100) = 1;
    *(Weapon *)((char *)this_ + 0x234) = (byte)0x1;
    *(Ship **)(pGVar2 + 0xd0) = this_;
    ShipData::currentlyBoardedShip = this_;
    if (*(Ship **)((char *)this_ + 0x178) != (Ship *)0x0) {
      ShipData::currentlyBoardedShip = *(Ship **)((char *)this_ + 0x178);
    }
  }
  if (0xf < local_30) {
    pnVar15 = (nothrow_t *)(local_30 + 1);
    pvVar14 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_44[0] + -4);
      pnVar15 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_48) {
    pnVar15 = (nothrow_t *)(local_48 + 1);
    pvVar14 = local_5c[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_5c[0] + -4);
      pnVar15 = (nothrow_t *)(local_48 + 0x24);
      if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  local_4c = 0;
  local_48 = 0xf;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_60) {
    pnVar15 = (nothrow_t *)(local_60 + 1);
    pvVar14 = local_74[0];
    if ((nothrow_t *)0xfff < pnVar15) {
      pvVar14 = *(void **)((int)local_74[0] + -4);
      pnVar15 = (nothrow_t *)(local_60 + 0x24);
      if (0x1f < (uint)((int)local_74[0] + (-4 - (int)pvVar14))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar14,pnVar15);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __cdecl V7::loadEmails(_iobuf *param_1)
void V7::loadEmails(_iobuf * param_1)

{
  auto this_ = (decltype(this))this;  // [this-reuse]
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff64[1] = {0};  // [pseudo] address of an unnamed stack slot
  ghidra::vector *this_;
  AnimationFrames **ppAVar1;
  std::string *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _iobuf *p_Var6;
  EmailManager *pEVar7;
  AnimationFrames *_DstBuf;
  word *this_00;
  bool *pbVar8;
  Article *pAVar9;
  FILE *pFVar10;
  Email *pEVar11;
  FILE *in_ECX;
  void *pvVar12;
  nothrow_t *pnVar13;
  int iVar14;
  char *pcVar15;
  undefined4 local_74;
  AnimationFrames *local_70;
  FILE *local_6c;
  int local_68;
  Email local_62;
  Email local_61;
  EmailInstance *local_60;
  char local_59;
  int local_58;
  void *local_54 [5];
  uint local_40;
  void *local_3c [5];
  uint local_28;
  _iobuf *local_24;
  // [seh] undefined1 *puStack_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005bf320;
  // [seh] local_1c = ExceptionList;
  // [cookie] p_Var6 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffff0);
  // [seh] ExceptionList = &local_1c;
  local_6c = in_ECX;
  local_24 = p_Var6;
  pEVar7 = ghidra::any_singleton();
  (pEVar7)->resetState();
  (*(CommsData **)(g_gameData + 300))->clearState();
  local_58 = 0;
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d emails...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      local_60 = operator_new(0xa0);
      _DstBuf = (AnimationFrames *)new ((void *)(local_60)) EmailInstance();
      local_70 = _DstBuf;
      fread(_DstBuf,4,1,in_ECX);
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      if ((word *)(_DstBuf + 4) != (word *)local_60) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 4));
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)(_DstBuf + 4) = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 8) = uVar3;
        *(undefined4 *)(_DstBuf + 0xc) = uVar4;
        *(undefined4 *)(_DstBuf + 0x10) = uVar5;
        *(undefined8 *)(_DstBuf + 0x14) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      if ((word *)(_DstBuf + 0x68) != (word *)local_60) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x68));
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)(_DstBuf + 0x68) = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x6c) = uVar3;
        *(undefined4 *)(_DstBuf + 0x70) = uVar4;
        *(undefined4 *)(_DstBuf + 0x74) = uVar5;
        *(undefined8 *)(_DstBuf + 0x78) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      this_00 = (word *)(_DstBuf + 0x1c);
      if (this_00 != (word *)local_60) {
        // [mislabelled-dtor] word::~word(this_00);
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)this_00 = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x20) = uVar3;
        *(undefined4 *)(_DstBuf + 0x24) = uVar4;
        *(undefined4 *)(_DstBuf + 0x28) = uVar5;
        *(undefined8 *)(_DstBuf + 0x2c) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      if ((std::string *)(_DstBuf + 0x4c) != (std::string *)this_00) {
        if (0xf < *(uint *)(_DstBuf + 0x30)) {
          this_00 = *(word **)this_00;
        }
        ghidra::str::assign
                  ((std::string *)(_DstBuf + 0x4c),(char *)this_00,*(uint *)(_DstBuf + 0x2c));
      }
      in_ECX = local_6c;
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      if ((word *)(_DstBuf + 0x34) != (word *)local_60) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x34));
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)(_DstBuf + 0x34) = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x38) = uVar3;
        *(undefined4 *)(_DstBuf + 0x3c) = uVar4;
        *(undefined4 *)(_DstBuf + 0x40) = uVar5;
        *(undefined8 *)(_DstBuf + 0x44) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_60 = (EmailInstance *)SaveHandler::readLengthString(p_Var6);
      if ((word *)(_DstBuf + 0x80) != (word *)local_60) {
        // [mislabelled-dtor] word::~word((word *)(_DstBuf + 0x80));
        uVar3 = *(undefined4 *)(local_60 + 4);
        uVar4 = *(undefined4 *)(local_60 + 8);
        uVar5 = *(undefined4 *)(local_60 + 0xc);
        *(undefined4 *)(_DstBuf + 0x80) = *(undefined4 *)local_60;
        *(undefined4 *)(_DstBuf + 0x84) = uVar3;
        *(undefined4 *)(_DstBuf + 0x88) = uVar4;
        *(undefined4 *)(_DstBuf + 0x8c) = uVar5;
        *(undefined8 *)(_DstBuf + 0x90) = *(undefined8 *)(local_60 + 0x10);
        *(undefined4 *)(local_60 + 0x10) = 0;
        *(undefined4 *)(local_60 + 0x14) = 0xf;
        *local_60 = (byte)0x0;
      }
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      fread(_DstBuf + 0x98,4,1,in_ECX);
      fread(_DstBuf + 100,1,1,in_ECX);
      fread(_DstBuf + 0x9c,1,1,in_ECX);
      this_ = *(ghidra::vector **)(g_gameData + 300);
      ppAVar1 = *(AnimationFrames ***)((char *)this_ + 4);
      if (*(AnimationFrames ***)((char *)this_ + 8) == ppAVar1) {
        ghidra::lib::vector___Emplace_reallocate(this_,ppAVar1,&local_70);
        _DstBuf = local_70;
      }
      else {
        *ppAVar1 = _DstBuf;
        *(int *)((char *)this_ + 4) = *(int *)((char *)this_ + 4) + 4;
      }
      local_60 = (EmailInstance *)&stack0xffffff64;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff64,(std::string *)(_DstBuf + 0x80));
      local_14 = 0;
      pEVar7 = ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pEVar7 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = pEVar7;
        *pEVar7 = (byte)0x0;
        *(undefined4 *)(pEVar7 + 4) = 0;
        *(undefined4 *)(pEVar7 + 8) = 0;
        *(undefined4 *)(pEVar7 + 0xc) = 0;
        *(undefined4 *)(pEVar7 + 0x10) = 0;
        *(undefined4 *)(pEVar7 + 0x14) = 0;
        *(undefined4 *)(pEVar7 + 0x18) = 0;
        *(undefined4 *)(pEVar7 + 0x1c) = 0;
        *(undefined4 *)(pEVar7 + 0x20) = 0;
        *(undefined4 *)(pEVar7 + 0x24) = 0;
        *(undefined4 *)(pEVar7 + 0x28) = 0;
        local_60 = (EmailInstance *)pEVar7;
      }
      local_14 = 0xffffffff;
      (pEVar7)->markEmailSent();
      debugPrint("SAVEHANDLER"," - Loaded: \'%s\'");
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'read articles\'...");
  iVar14 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var6);
      local_14 = 1;
      pbVar8 = ghidra::lib::map__operator_x5b_x5d
                         ((ghidra::lib::map_t *)(*(int *)(g_gameData + 300) + 0xc),(std::string *)local_3c);
      *pbVar8 = true;
      debugPrint("SAVEHANDLER","Loaded read article \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_58);
  }
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'drafts sent\'...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var6);
      local_14 = 2;
      iVar14 = *(int *)(g_gameData + 300);
      pbVar2 = *(std::string **)(iVar14 + 0x24);
      if (*(std::string **)(iVar14 + 0x28) == pbVar2) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(iVar14 + 0x20),(std::string *)pbVar2,(std::string *)local_3c);
      }
      else {
        ghidra::str::ctor(pbVar2,(std::string *)local_3c);
        *(int *)(iVar14 + 0x24) = *(int *)(iVar14 + 0x24) + 0x18;
      }
      debugPrint("SAVEHANDLER","Loaded draft sent \'%s\'");
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'articles downloaded\'...");
  local_68 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var6);
      local_14 = 3;
      iVar14 = *(int *)(g_gameData + 300);
      pbVar2 = *(std::string **)(iVar14 + 0x18);
      if (*(std::string **)(iVar14 + 0x1c) == pbVar2) {
        ghidra::lib::vector___Emplace_reallocate
                  ((ghidra::vector *)(iVar14 + 0x14),(std::string *)pbVar2,(std::string *)local_3c);
      }
      else {
        ghidra::str::ctor(pbVar2,(std::string *)local_3c);
        *(int *)(iVar14 + 0x18) = *(int *)(iVar14 + 0x18) + 0x18;
      }
      ghidra::str::ctor
                ((std::string *)&stack0xffffff64,(std::string *)local_3c);
      pAVar9 = (*(ComputerSystem **)(g_gameLogic + 0xc))->getArticle();
      if (pAVar9 == (Article *)0x0) {
        pcVar15 = "Error: invalid article \'%s\'";
      }
      else {
        *(undefined4 *)(pAVar9 + 0xa0) = *(undefined4 *)(pAVar9 + 0x88);
        *(undefined4 *)(pAVar9 + 0xa4) = *(undefined4 *)(pAVar9 + 0x8c);
        *(undefined4 *)(pAVar9 + 0xa8) = *(undefined4 *)(pAVar9 + 0x90);
        *(undefined4 *)(pAVar9 + 0xac) = *(undefined4 *)(pAVar9 + 0x94);
        *(undefined8 *)(pAVar9 + 0xb0) = *(undefined8 *)(pAVar9 + 0x98);
        pcVar15 = "Loaded article downloaded \'%s\'";
      }
      debugPrint("SAVEHANDLER",pcVar15);
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_58);
  }
  fread(&local_58,4,1,in_ECX);
  debugPrint("SAVEHANDLER","Loading %d \'sent emails\'...");
  iVar14 = 0;
  if (0 < local_58) {
    do {
      SaveHandler::readLengthString(p_Var6);
      local_6c = (FILE *)&stack0xffffff64;
      local_14 = 4;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff64,(std::string *)local_3c);
      local_14._0_1_ = 5;
      pFVar10 = (FILE *)ghidra::Singleton<void>::instance;
      if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
        pFVar10 = operator_new(0x2c);
        ghidra::Singleton<void>::instance = (EmailManager *)pFVar10;
        *(undefined1 *)&pFVar10->_ptr = 0;
        pFVar10->_cnt = 0;
        pFVar10->_base = (char *)0x0;
        pFVar10->_flag = 0;
        pFVar10->_file = 0;
        pFVar10->_charbuf = 0;
        pFVar10->_bufsiz = 0;
        pFVar10->_tmpfname = (char *)0x0;
        pFVar10[1]._ptr = (char *)0x0;
        pFVar10[1]._cnt = 0;
        pFVar10[1]._base = (char *)0x0;
        local_6c = pFVar10;
      }
      local_14 = CONCAT31(local_14._1_3_,4);
      pEVar11 = ((EmailManager *)pFVar10)->getEmail();
      if (pEVar11 == (Email *)0x0) {
        debugPrint("ERROR","ERROR: invalid email loaded.");
      }
      else {
        *(undefined2 *)(pEVar11 + 100) = 0x100;
        *(undefined4 *)(pEVar11 + 0x98) = 0;
        debugPrint("SAVEHANDLER","Email \'%s\' marked as sent");
      }
      local_14 = 0xffffffff;
      if (0xf < local_28) {
        pnVar13 = (nothrow_t *)(local_28 + 1);
        pvVar12 = local_3c[0];
        if ((nothrow_t *)0xfff < pnVar13) {
          pvVar12 = *(void **)((int)local_3c[0] + -4);
          pnVar13 = (nothrow_t *)(local_28 + 0x24);
          if (0x1f < (uint)((int)local_3c[0] + (-4 - (int)pvVar12))) goto LAB_004c41d5;
        }
        operator_delete(pvVar12,pnVar13);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_58);
  }
  fread(&local_59,1,1,in_ECX);
  do {
    if (local_59 == '\0') {
      debugPrint("SAVEHANDLER","Set %d emails to fired or ready to fire.");
      // [seh] ExceptionList = local_1c;
      // [cookie] __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
      return;
    }
    SaveHandler::readLengthString(p_Var6);
    local_14 = 6;
    fread(&local_74,4,1,in_ECX);
    fread(&local_62,1,1,in_ECX);
    fread(&local_61,1,1,in_ECX);
    local_6c = (FILE *)&stack0xffffff64;
    ghidra::str::ctor
              ((std::string *)&stack0xffffff64,(std::string *)local_54);
    local_14._0_1_ = 7;
    pFVar10 = (FILE *)ghidra::Singleton<void>::instance;
    if (ghidra::Singleton<void>::instance == (EmailManager *)0x0) {
      pFVar10 = operator_new(0x2c);
      ghidra::Singleton<void>::instance = (EmailManager *)pFVar10;
      *(undefined1 *)&pFVar10->_ptr = 0;
      pFVar10->_cnt = 0;
      pFVar10->_base = (char *)0x0;
      pFVar10->_flag = 0;
      pFVar10->_file = 0;
      pFVar10->_charbuf = 0;
      pFVar10->_bufsiz = 0;
      pFVar10->_tmpfname = (char *)0x0;
      pFVar10[1]._ptr = (char *)0x0;
      pFVar10[1]._cnt = 0;
      pFVar10[1]._base = (char *)0x0;
      local_6c = pFVar10;
    }
    local_14 = CONCAT31(local_14._1_3_,6);
    pEVar11 = ((EmailManager *)pFVar10)->getEmail();
    if (pEVar11 == (Email *)0x0) {
      debugPrint("ERROR","ERROR: invalid email \'%s\' loaded.");
    }
    else {
      *(undefined4 *)(pEVar11 + 0x98) = local_74;
      pEVar11[100] = local_62;
      pEVar11[0x65] = local_61;
      debugPrint("SAVEHANDLER","Set email %s with RTF states (%f, %s, %s)");
    }
    local_14 = 0xffffffff;
    if (0xf < local_40) {
      pnVar13 = (nothrow_t *)(local_40 + 1);
      pvVar12 = local_54[0];
      if ((nothrow_t *)0xfff < pnVar13) {
        pvVar12 = *(void **)((int)local_54[0] + -4);
        pnVar13 = (nothrow_t *)(local_40 + 0x24);
        if (0x1f < (uint)((int)local_54[0] + (-4 - (int)pvVar12))) {
LAB_004c41d5:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar12,pnVar13);
    }
    fread(&local_59,1,1,in_ECX);
  } while( true );
}
