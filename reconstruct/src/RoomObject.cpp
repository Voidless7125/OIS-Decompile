// Bootstrapped from the Ghidra export; edit freely. See reconstruct/README.md.
#include "ois/ois.hpp"
#include "ois/ois_globals.hpp"
#include "ois/ghidra_lib_stubs.hpp"


// Ghidra: bool __thiscall RoomObject::isCharacter(RoomObject *this)
bool RoomObject::isCharacter()

{
  if ((*(int *)((char *)this + 0x3c) != 5) && (*(int *)((char *)this + 0x3c) != 6)) {
    return false;
  }
  return true;
}


// Ghidra: RoomObject * __thiscall RoomObject::RoomObject(RoomObject *this)
RoomObject::RoomObject()

{
  int iVar1;
  std::string *pbVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined1 local_8;
  undefined3 uStack_7;
  
  // [seh] puStack_c = &DAT_005c6f74;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [vtable] *(undefined ***)this = vftable;
  *(undefined2 *)((char *)this + 8) = 0;
  *(undefined4 *)((char *)this + 0x1c) = 0;
  *(undefined4 *)((char *)this + 0x20) = 0xf;
  ((char *)this)[0xc] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x34) = 0;
  *(undefined4 *)((char *)this + 0x38) = 0xf;
  ((char *)this)[0x24] = (byte)0x0;
  // [seh] local_8 = 1;
  uStack_7 = 0;
  *(undefined4 *)((char *)this + 0x3c) = 0;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x40));
  ((char *)this)[0x4c] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x50) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x54) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x68) = 0;
  *(undefined4 *)((char *)this + 0x6c) = 0xf;
  ((char *)this)[0x58] = (byte)0x0;
  // [seh] local_8 = 3;
  *(undefined4 *)((char *)this + 0x70) = 0;
  *(undefined4 *)((char *)this + 0x74) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x78) = 0;
  *(undefined4 *)((char *)this + 0x7c) = 0;
  *(undefined4 *)((char *)this + 0x90) = 0;
  *(undefined4 *)((char *)this + 0x94) = 0xf;
  ((char *)this)[0x80] = (byte)0x0;
  ghidra::str::assign((std::string *)((char *)this + 0x80),"stand_normal",0xc);
  *(undefined4 *)((char *)this + 0xa8) = 0;
  *(undefined4 *)((char *)this + 0xac) = 0xf;
  ((char *)this)[0x98] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xc0) = 0;
  *(undefined4 *)((char *)this + 0xc4) = 0xf;
  ((char *)this)[0xb0] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xd8) = 0;
  *(undefined4 *)((char *)this + 0xdc) = 0xf;
  ((char *)this)[200] = (byte)0x0;
  // [seh] local_8 = 7;
  *(undefined4 *)((char *)this + 0xe0) = 0xffffffff;
  *(undefined4 *)((char *)this + 0xe4) = 0;
  *(undefined4 *)((char *)this + 0xe8) = 0;
  ((char *)this)[0xec] = (byte)0x0;
  *(undefined4 *)((char *)this + 0xf0) = 0;
  iVar1 = rand();
  *(undefined4 *)((char *)this + 0xf8) = 0xffffffff;
  *(undefined2 *)((char *)this + 0xfc) = 0;
  ((char *)this)[0xfe] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x100) = 0;
  *(float *)((char *)this + 0xf4) = (float)(iVar1 % 10 + 7);
  _eh_vector_constructor_iterator_
            (this + 0x104,0x18,10,std::basic_string<>::std::string,word::~word);
  // [seh] local_8 = 8;
  _eh_vector_constructor_iterator_
            (this + 500,0x18,10,std::basic_string<>::std::string,word::~word);
  // [seh] local_8 = 9;
  *(undefined4 *)((char *)this + 0x2e4) = 0x3f800000;
  *(undefined4 *)((char *)this + 0x2e8) = 0x3f800000;
  *(undefined4 *)((char *)this + 0x2ec) = 0x3f800000;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x2f0),0.0,0.0,0.0);
  // [seh] local_8 = 10;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x2fc),0.0,0.0,0.0);
  // [seh] local_8 = 0xb;
  cocos2d::Quaternion::Quaternion((Quaternion *)((char *)this + 0x308),0.0,0.0,0.0,0.0);
  // [seh] local_8 = 0xc;
  ((char *)this)[0x318] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x31c) = 0;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 800),0.0,0.0,0.0);
  // [seh] local_8 = 0xd;
  *(undefined4 *)((char *)this + 0x334) = 0;
  *(undefined4 *)((char *)this + 0x338) = 0x3f800000;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x340),0.0,0.0,0.0);
  // [seh] local_8 = 0xe;
  ((char *)this)[0x34c] = (byte)0x0;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x350),0.0,0.0,0.0);
  // [seh] local_8 = 0xf;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x35c),0.0,0.0,0.0);
  // [seh] local_8 = 0x10;
  cocos2d::Rect::Rect((Rect *)((char *)this + 0x36c),0.0,0.0,0.0,0.0);
  // [seh] local_8 = 0x11;
  cocos2d::Color3B::Color3B((Color3B *)((char *)this + 0x37c),'\0','\0','\0');
  *(undefined2 *)((char *)this + 0x37f) = 0;
  ((char *)this)[0x381] = (byte)0x0;
  *(undefined4 *)((char *)this + 900) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x388) = 0;
  ((char *)this)[0x38c] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x390) = 1;
  *(undefined4 *)((char *)this + 0x394) = 0;
  *(undefined4 *)((char *)this + 0x398) = 0;
  *(undefined4 *)((char *)this + 0x39c) = 0;
  // [seh] local_8 = 0x12;
  *(undefined4 *)((char *)this + 0x3a0) = 0;
  *(undefined2 *)((char *)this + 0x3a4) = 0;
  *(undefined4 *)((char *)this + 0x3a8) = 0x437f0000;
  *(undefined4 *)((char *)this + 0x3ac) = 0x3f800000;
  *(undefined4 *)((char *)this + 0x3b0) = 0x3dcccccd;
  *(undefined4 *)((char *)this + 0x3b4) = 0x3f800000;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x3b8),0.0,0.0,0.0);
  // [seh] local_8 = 0x13;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x3c4),0.0,0.0,0.0);
  // [seh] local_8 = 0x14;
  *(undefined4 *)((char *)this + 0x3d0) = 0;
  *(undefined4 *)((char *)this + 0x3d4) = 0;
  *(undefined4 *)((char *)this + 0x3d8) = 0;
  *(undefined4 *)((char *)this + 0x3dc) = 0;
  *(undefined4 *)((char *)this + 0x3e0) = 0;
  *(undefined4 *)((char *)this + 0x3e4) = 0;
  *(undefined4 *)((char *)this + 1000) = 0;
  *(undefined4 *)((char *)this + 0x3ec) = 0;
  *(undefined4 *)((char *)this + 0x3f0) = 0;
  *(undefined2 *)((char *)this + 0x3f4) = 0;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x3f8),0.0,0.0,0.0);
  // [seh] local_8 = 0x15;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x404),0.0,0.0,0.0);
  // [seh] local_8 = 0x16;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x410));
  // [seh] local_8 = 0x17;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x41c),0.0,0.0,0.0);
  // [seh] local_8 = 0x18;
  cocos2d::Vec3::Vec3((Vec3 *)((char *)this + 0x428),0.0,0.0,0.0);
  *(undefined4 *)((char *)this + 0x438) = 0;
  *(undefined4 *)((char *)this + 0x43c) = 0x40000000;
  ((char *)this)[0x440] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x444) = 0;
  *(undefined2 *)((char *)this + 0x448) = 0;
  *(undefined4 *)((char *)this + 0x44c) = 0;
  *(undefined4 *)((char *)this + 0x460) = 0;
  *(undefined4 *)((char *)this + 0x464) = 0xf;
  ((char *)this)[0x450] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x478) = 0;
  *(undefined4 *)((char *)this + 0x47c) = 0xf;
  ((char *)this)[0x468] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x4a4) = 0;
  *(undefined4 *)((char *)this + 0x4cc) = 0;
  *(undefined4 *)((char *)this + 0x4d0) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x4e4) = 0;
  *(undefined4 *)((char *)this + 0x4e8) = 0xf;
  ((char *)this)[0x4d4] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x514) = 0;
  *(undefined4 *)((char *)this + 0x53c) = 0;
  *(undefined4 *)((char *)this + 0x540) = 0xffffffff;
  *(undefined4 *)((char *)this + 0x554) = 0;
  *(undefined4 *)((char *)this + 0x558) = 0xf;
  ((char *)this)[0x544] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x584) = 0;
  *(undefined4 *)((char *)this + 0x598) = 0;
  *(undefined4 *)((char *)this + 0x59c) = 0xf;
  ((char *)this)[0x588] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x5c4) = 0;
  *(undefined4 *)((char *)this + 0x5c8) = 0;
  *(undefined4 *)((char *)this + 0x5cc) = 0;
  *(undefined4 *)((char *)this + 0x5d0) = 0;
  *(undefined4 *)((char *)this + 0x5e4) = 0;
  *(undefined4 *)((char *)this + 0x5e8) = 0xf;
  ((char *)this)[0x5d4] = (byte)0x0;
  ((char *)this)[0x5ec] = (byte)0x0;
  *(undefined4 *)((char *)this + 0x5f0) = 0;
  *(undefined4 *)((char *)this + 0x61c) = 0;
  *(undefined4 *)((char *)this + 0x620) = 0xffffffff;
  ((char *)this)[0x64c] = (byte)0x1;
  *(undefined4 *)((char *)this + 0x650) = 0;
  *(undefined4 *)((char *)this + 0x654) = 0;
  *(undefined4 *)((char *)this + 0x658) = 0;
  *(undefined4 *)((char *)this + 0x65c) = 0;
  *(undefined4 *)((char *)this + 0x660) = 0;
  *(undefined4 *)((char *)this + 0x664) = 0;
  pbVar2 = (std::string *)((char *)this + 0x80);
  _local_8 = CONCAT31(uStack_7,0x29);
  *(undefined4 *)((char *)this + 0x69c) = 0;
  if ((std::string *)((char *)this + 0x98) != pbVar2) {
    if (0xf < *(uint *)((char *)this + 0x94)) {
      pbVar2 = *(std::string **)pbVar2;
    }
    ghidra::str::assign
              ((std::string *)((char *)this + 0x98),(char *)pbVar2,*(uint *)((char *)this + 0x90));
  }
  *(undefined4 *)((char *)this + 0x624) = 0;
  *(undefined4 *)((char *)this + 0x628) = 0;
  *(undefined4 *)((char *)this + 0x62c) = 0;
  *(undefined4 *)((char *)this + 0x630) = 0;
  *(undefined4 *)((char *)this + 0x634) = 0;
  *(undefined4 *)((char *)this + 0x638) = 0;
  *(undefined4 *)((char *)this + 0x63c) = 0;
  *(undefined4 *)((char *)this + 0x640) = 0;
  *(undefined4 *)((char *)this + 0x644) = 0;
  *(undefined4 *)((char *)this + 0x648) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall RoomObject::cleanupObject(RoomObject *this)
void RoomObject::cleanupObject()

{
  int *piVar1;
  ScreenInterface *this_00;
  int iVar2;
  uint uVar3;
  RoomObject *pRVar4;
  int local_8;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x650);
  if (*(int *)((char *)this + 0x654) - iVar2 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x138))(1);
        *(undefined4 *)(*(int *)((char *)this + 0x650) + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x650);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x654) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x654) = iVar2;
  if (*(int **)((char *)this + 0x3d0) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x3d0) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x3d0) = 0;
  }
  if (*(int **)((char *)this + 0x3d4) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x3d4) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x3d4) = 0;
  }
  if (*(int **)((char *)this + 0x3d8) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x3d8) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x3d8) = 0;
  }
  if (*(int **)((char *)this + 0x3e0) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x3e0) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x3e0) = 0;
  }
  if (*(int **)((char *)this + 0x3e4) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x3e4) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x3e4) = 0;
  }
  if (*(int **)((char *)this + 0x3dc) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x138))(1);
    *(undefined4 *)((char *)this + 0x3dc) = 0;
  }
  if (*(int **)((char *)this + 1000) != (int *)0x0) {
    (**(code **)(**(int **)((char *)this + 1000) + 0x138))(1);
    *(undefined4 *)((char *)this + 1000) = 0;
  }
  pRVar4 = this + 0x624;
  local_8 = 10;
  do {
    this_00 = *(ScreenInterface **)pRVar4;
    if (this_00 != (ScreenInterface *)0x0) {
      (this_00)->~ScreenInterface();
      operator_delete(this_00,(nothrow_t *)0x1a0);
      *(undefined4 *)pRVar4 = 0;
    }
    pRVar4 = pRVar4 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x65c);
  if (*(int *)((char *)this + 0x660) - iVar2 >> 2 != 0) {
    do {
      cocos2d::Ref::autorelease(*(Ref **)(*(int *)(*(int *)((char *)this + 0x65c) + uVar3 * 4) + 0x18));
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)((char *)this + 0x65c);
    } while (uVar3 < (uint)(*(int *)((char *)this + 0x660) - iVar2 >> 2));
  }
  *(int *)((char *)this + 0x660) = iVar2;
  return;
}


// Ghidra: bool __thiscall RoomObject::spawnPointCheck(RoomObject *this)
bool RoomObject::spawnPointCheck()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  char *****pppppcVar4;
  bool bVar5;
  undefined1 uVar6;
  char *pcVar7;
  GameCharacter *pGVar8;
  char ******ppppppcVar9;
  RoomCharacter *pRVar10;
  undefined4 uVar11;
  std::string *pbVar12;
  int iVar13;
  nothrow_t *pnVar14;
  uint unaff_EDI;
  std::string *pbVar15;
  std::string abStack_9c [16];
  undefined4 uStack_8c;
  std::string abStack_84 [12];
  undefined4 uStack_78;
  char *pcVar16;
  uint uVar17;
  std::string local_6c [12];
  undefined4 uStack_60;
  uint local_38;
  char *****local_2c [4];
  uint local_1c;
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c6fbf;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar7;
  if (*(int *)((char *)this + 0x3c) != 6) goto LAB_0053a602;
  if (g_gameLogic[0x11b] == (byte)0x0) {
    local_1c = 0;
    local_18 = 0xf;
    local_2c[0] = (char *****)((uint)local_2c[0] & 0xffffff00);
    // [seh] local_8 = 0;
    if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
      pbVar15 = (std::string *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x174) + 0x80);
    }
    else {
      pbVar15 = (std::string *)(ShipData::currentlyBoardedShip + 0x238);
    }
    ghidra::str::ctor(local_6c,(std::string *)((char *)this + 0x58));
    // [seh] local_8._0_1_ = 1;
    uStack_8c = 0x53a237;
    ghidra::str::ctor(abStack_84,pbVar15);
    // [seh] local_8 = (uint)local_8._1_3_ << 8;
    pGVar8 = GameData::getCharacterAtSpawnPoint();
    // [seh] local_8 = 0xffffffff;
    if (pGVar8 == (GameCharacter *)0x0) goto LAB_0053a256;
LAB_0053a430:
    if ((*(int *)((char *)this + 0x100) == 0) ||
       (*(GameCharacter **)(*(int *)((char *)this + 0x100) + 0x1c) != pGVar8)) {
      if (pGVar8[9] == (byte)0x0) {
        if (pGVar8[8] == (byte)0x0) {
          if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
            pbVar15 = (std::string *)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x174) + 0x80);
          }
          else {
            pbVar15 = (std::string *)(ShipData::currentlyBoardedShip + 0x238);
          }
          ghidra::str::ctor(local_6c,(std::string *)(pGVar8 + 0xf8));
          // [seh] local_8 = 3;
          uStack_8c = 0x53a5bf;
          ghidra::str::ctor(abStack_84,(std::string *)((char *)this + 0x58));
          // [seh] local_8._0_1_ = 4;
          ghidra::str::ctor(abStack_9c,pbVar15);
          // [seh] local_8 = CONCAT31(local_8._1_3_,3);
          GameData::getCharacterLocationAtSpawnPoint();
          // [seh] local_8 = 0xffffffff;
          setCharacter(this);
        }
        else if ((*(int *)(pGVar8 + 0xf0) - *(int *)(pGVar8 + 0xec) & 0xfffffffcU) != 0) {
          ghidra::str::ctor(local_6c,(std::string *)(pGVar8 + 0xf8));
          setCharacter(this);
        }
      }
      else {
        unsetCharacter(this);
        pRVar10 = operator_new(0x7c);
        // [seh] local_8 = 2;
        ghidra::str::ctor(local_6c,(std::string *)(pGVar8 + 0xf8));
        uVar11 = new ((void *)(pRVar10)) RoomCharacter();
        // [seh] local_8 = 0xffffffff;
        this_00 = (std::string *)((char *)this + 0x98);
        *(undefined4 *)((char *)this + 0x100) = uVar11;
        *(undefined4 *)((char *)this + 0xa8) = 0;
        pbVar12 = this_00;
        if (0xf < *(uint *)((char *)this + 0xac)) {
          pbVar12 = *(std::string **)this_00;
        }
        *pbVar12 = (std::string)0x0;
        pcVar7 = (&PTR_s_standing_005e1e60)[*(int *)((char *)this + 0xe4)];
        pcVar16 = pcVar7;
        do {
          cVar1 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar1 != '\0');
        uStack_60 = 0x53a4d2;
        ghidra::str::append(this_00,pcVar7,(int)pcVar16 - (int)(pcVar7 + 1));
        uStack_60 = 0x53a4e0;
        ghidra::str::append(this_00,"_",1);
        pcVar7 = "normal";
        do {
          pcVar16 = pcVar7;
          pcVar7 = pcVar16 + 1;
        } while (*pcVar16 != '\0');
        uStack_60 = 0x53a502;
        ghidra::str::append(this_00,"normal",(uint)(pcVar16 + -0x61c0a4));
        *(undefined4 *)((char *)this + 0xe8) = 0;
        *(undefined4 *)((char *)this + 0x69c) =
             *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x100) + 0x1c) + 0x40);
      }
    }
  }
  else {
LAB_0053a256:
    // [seh] local_8 = 0xffffffff;
    uStack_60 = 0x53a272;
    bVar5 = ghidra::lib::_Traits_equal___x28_x29("playership_spawn_cabin",0x16,pcVar7,unaff_EDI);
    if ((bVar5) && (*(int *)(g_gameData + 0x128) != 0)) {
      local_6c[0] = (std::string)0x0;
      if (*(int *)(*(int *)(g_gameData + 0x128) + 4) == 1) {
        uVar17 = 0xd;
        pcVar16 = "malepassenger";
      }
      else {
        uVar17 = 0xf;
        pcVar16 = "femalepassenger";
      }
      uStack_78 = 0x53a2b9;
      ghidra::str::assign(local_6c,pcVar16,uVar17);
      pGVar8 = GameData::getCharacter();
      if (pGVar8 != (GameCharacter *)0x0) goto LAB_0053a430;
    }
    if (ShipData::currentlyBoardedShip != (Ship *)0x0) {
      bVar5 = false;
      if (*(int *)(ShipData::currentlyBoardedShip + 0x254) != 0) {
        bVar5 = *(int *)(*(int *)(ShipData::currentlyBoardedShip + 0x254) + 0x158) == 1;
      }
      if (bVar5) {
        ghidra::str::ctor
                  ((std::string *)local_2c,(std::string *)((char *)this + 0x58));
        uVar17 = local_18;
        pppppcVar4 = local_2c[0];
        local_38 = 0;
        iVar2 = *(int *)(ShipData::currentlyBoardedShip + 0x3ec);
        iVar13 = *(int *)(ShipData::currentlyBoardedShip + 0x3f0) - iVar2;
        iVar3 = iVar13 >> 0x1f;
        if (iVar13 / 0x1c + iVar3 != iVar3) {
          do {
            ppppppcVar9 = local_2c;
            if (0xf < uVar17) {
              ppppppcVar9 = (char ******)pppppcVar4;
            }
            uStack_60 = 0x53a357;
            bVar5 = ghidra::lib::_Traits_equal___x28_x29((char *)ppppppcVar9,local_1c,pcVar7,unaff_EDI);
            if (bVar5) {
              pGVar8 = *(GameCharacter **)(iVar2 + local_38 * 0x1c);
              if (0xf < local_18) {
                pnVar14 = (nothrow_t *)(local_18 + 1);
                ppppppcVar9 = (char ******)pppppcVar4;
                if ((nothrow_t *)0xfff < pnVar14) {
                  ppppppcVar9 = (char ******)pppppcVar4[-1];
                  pnVar14 = (nothrow_t *)(local_18 + 0x24);
                  if ((char *)0x1f < (char *)((int)pppppcVar4 + (-4 - (int)ppppppcVar9))) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                uStack_60 = 0x53a3ff;
                operator_delete(ppppppcVar9,pnVar14);
              }
              goto LAB_0053a413;
            }
            local_38 = local_38 + 1;
          } while (local_38 <
                   (uint)((*(int *)(ShipData::currentlyBoardedShip + 0x3f0) -
                          *(int *)(ShipData::currentlyBoardedShip + 0x3ec)) / 0x1c));
        }
        if (0xf < local_18) {
          pnVar14 = (nothrow_t *)(local_18 + 1);
          ppppppcVar9 = (char ******)pppppcVar4;
          if ((nothrow_t *)0xfff < pnVar14) {
            ppppppcVar9 = (char ******)pppppcVar4[-1];
            pnVar14 = (nothrow_t *)(local_18 + 0x24);
            if ((char *)0x1f < (char *)((int)pppppcVar4 + (-4 - (int)ppppppcVar9))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          uStack_60 = 0x53a40e;
          operator_delete(ppppppcVar9,pnVar14);
        }
        pGVar8 = (GameCharacter *)0x0;
LAB_0053a413:
        local_2c[0] = (char *****)((uint)local_2c[0] & 0xffffff00);
        local_18 = 0xf;
        local_1c = 0;
        if (pGVar8 != (GameCharacter *)0x0) goto LAB_0053a430;
      }
    }
    if (*(int *)((char *)this + 0x100) != 0) {
      unsetCharacter(this);
    }
  }
LAB_0053a602:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar6 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}


// Ghidra: void __thiscall RoomObject::updateRotationForCamera(RoomObject *this)
void RoomObject::updateRotationForCamera()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  Vec3 *pVVar4;
  undefined4 uVar5;
  Vec3 local_4c [12];
  Vec3 local_40 [12];
  Vec3 local_34 [16];
  Vec3 local_24 [20];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c703f;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  // [seh] ExceptionList = &local_10;
  if (((char *)this)[0x3f4] != (byte)0x0) {
    iVar1 = *(int *)((char *)this + 0x3f0);
    *(undefined8 *)((char *)this + 0x428) = *(undefined8 *)(iVar1 + 0x80);
    *(undefined4 *)((char *)this + 0x430) = *(undefined4 *)(iVar1 + 0x88);
    if (((*(float *)((char *)this + 0x428) == 0.0) && (*(float *)((char *)this + 0x42c) == 0.0)) &&
       (*(float *)((char *)this + 0x430) == 0.0)) {
      *(undefined8 *)((char *)this + 0x41c) = *(undefined8 *)(iVar1 + 0x74);
      *(undefined4 *)((char *)this + 0x424) = *(undefined4 *)(iVar1 + 0x7c);
    }
    else {
      cocos2d::Vec3::Vec3(local_24);
      // [seh] local_8 = 0;
      puVar3 = (undefined8 *)
               cocos2d::Vec3::operator-((Vec3 *)(*(int *)((char *)this + 0x3f0) + 0x74),local_34);
      *(undefined8 *)((char *)this + 0x41c) = *puVar3;
      *(undefined4 *)((char *)this + 0x424) = *(undefined4 *)(puVar3 + 1);
      cocos2d::Vec3::~Vec3(local_34);
      debugPrint("DETAIL","relative object pos = %f, %f, %f",(double)*(float *)((char *)this + 0x41c),
                 (double)*(float *)((char *)this + 0x420),(double)*(float *)((char *)this + 0x424),uVar2);
      // [seh] local_8 = 0xffffffff;
      cocos2d::Vec3::~Vec3(local_24);
    }
  }
  if (*(int *)((char *)this + 0x3dc) != 0) {
    if (((char *)this)[0x34c] == (byte)0x0) {
      cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x2f0),local_34);
      // [seh] local_8 = 4;
      cocos2d::Vec3::operator*(local_34,(float)local_24);
      cocos2d::Vec3::~Vec3(local_34);
      // [seh] local_8 = 5;
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))();
      pVVar4 = local_24;
    }
    else {
      pVVar4 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x2f0),local_40);
      // [seh] local_8 = 1;
      cocos2d::Vec3::operator+(pVVar4,local_24);
      // [seh] local_8._0_1_ = 2;
      cocos2d::Vec3::operator*(local_24,(float)local_34);
      cocos2d::Vec3::~Vec3(local_24);
      // [seh] local_8 = CONCAT31(local_8._1_3_,3);
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))();
      cocos2d::Vec3::~Vec3(local_34);
      pVVar4 = local_40;
    }
    // [seh] local_8 = 0xffffffff;
    cocos2d::Vec3::~Vec3(pVVar4);
    if (((char *)this)[0x318] != (byte)0x0) {
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0xcc))((char *)this + 0x308);
      // [seh] ExceptionList = local_10;
      return;
    }
    uVar5 = cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x2fc),local_4c);
    // [seh] local_8 = 6;
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0xc4))(uVar5);
    cocos2d::Vec3::~Vec3(local_4c);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall RoomObject::render(RoomObject *this,Node *param_1)
void RoomObject::render(Node * param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xfffffff0[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff20[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff08[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff04[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff0c[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0xffffff10[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *pbVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char *pcVar7;
  RoomObject *pRVar8;
  Color3B *pCVar9;
  DirectionLight *this_00;
  Sprite *pSVar10;
  Vec3 *pVVar11;
  PointLight *pPVar12;
  SpotLight *pSVar13;
  Sprite3D *pSVar14;
  long lVar15;
  Mesh *pMVar16;
  uint uVar17;
  std::string *pbVar18;
  Texture2D *pTVar19;
  ConsoleDamage *pCVar20;
  std::string *pbVar21;
  bool extraout_CL;
  char *pcVar22;
  void *pvVar23;
  nothrow_t *pnVar24;
  Color3B *pCVar25;
  code *pcVar26;
  int iVar27;
  int iVar28;
  uint unaff_EDI;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fVar29;
  float fVar30;
  float fVar31;
  Vec3 local_d0 [16];
  Vec3 local_c0 [8];
  float local_b8;
  Node *local_b4;
  undefined4 local_b0;
  RoomObject local_aa;
  char local_a9;
  void *local_a8 [5];
  uint local_94;
  void *local_90 [3];
  Vec3 local_84 [4];
  undefined4 local_80;
  uint local_7c;
  void *local_78;
  Vec3 local_70 [4];
  undefined1 local_6c [4];
  undefined4 local_68;
  uint local_64;
  void *local_60 [2];
  Vec3 local_58 [4];
  std::string *local_54;
  undefined4 local_50;
  uint local_4c;
  std::string *local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  char *local_2c;
  // [seh] undefined1 *puStack_24;
  undefined1 *local_20;
  // [seh] void *local_1c;
  // [seh] undefined *puStack_18;
  undefined4 local_14;
  
  // [seh] puStack_24 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  // [seh] puStack_18 = &DAT_005c71a4;
  // [seh] local_1c = ExceptionList;
  // [cookie] pcVar7 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  local_20 = &stack0xffffff20;
  // [seh] ExceptionList = &local_1c;
  local_b4 = param_1;
  local_2c = pcVar7;
  spawnPointCheck(this);
  if ((*(int *)((char *)this + 0x3c) == 6) && (*(int *)((char *)this + 0x100) == 0)) {
    cleanupObject(this);
    FUN_0053bf8e();
    return;
  }
  if (*(int *)((char *)this + 0x54) != -1) {
    pRVar8 = *(RoomObject **)((char *)this + 0x70);
    if (pRVar8 == (RoomObject *)0x0) {
      pRVar8 = (*(Room **)((char *)this + 0x3f0))->getObject(*(int *)((char *)this + 0x54));
      *(RoomObject **)((char *)this + 0x70) = pRVar8;
    }
    if (((char *)this)[0x449] == (byte)0x0) {
      *(undefined8 *)((char *)this + 0x2f0) = *(undefined8 *)(pRVar8 + 0x2f0);
      *(undefined4 *)((char *)this + 0x2f8) = *(undefined4 *)(pRVar8 + 0x2f8);
      *(undefined8 *)((char *)this + 0x2fc) = *(undefined8 *)(pRVar8 + 0x2fc);
      *(undefined4 *)((char *)this + 0x304) = *(undefined4 *)(pRVar8 + 0x304);
      uVar3 = *(undefined4 *)(pRVar8 + 0x30c);
      uVar4 = *(undefined4 *)(pRVar8 + 0x310);
      uVar5 = *(undefined4 *)(pRVar8 + 0x314);
      *(undefined4 *)((char *)this + 0x308) = *(undefined4 *)(pRVar8 + 0x308);
      *(undefined4 *)((char *)this + 0x30c) = uVar3;
      *(undefined4 *)((char *)this + 0x310) = uVar4;
      *(undefined4 *)((char *)this + 0x314) = uVar5;
      *(undefined4 *)((char *)this + 0x2e4) = *(undefined4 *)(pRVar8 + 0x2e4);
      *(undefined4 *)((char *)this + 0x2e8) = *(undefined4 *)(pRVar8 + 0x2e8);
      *(undefined4 *)((char *)this + 0x2ec) = *(undefined4 *)(pRVar8 + 0x2ec);
    }
  }
  updateRotationForCamera(this);
  cleanupObject(this);
  iVar27 = *(int *)((char *)this + 0x3c);
  if ((iVar27 == 0) || (iVar27 == 4)) {
    local_a9 = '\0';
    bVar6 = ghidra::lib::_Traits_equal___x28_x29("Ceres_Airlock_Door",0x12,pcVar7,unaff_EDI);
    if (bVar6) {
      cocos2d::log("foo");
    }
    local_14 = 0;
    pbVar1 = (std::string *)(this + *(int *)((char *)this + 0x7c) * 0x18 + 0x104);
    uVar17 = ghidra::lib::_Traits_find___x28_x29((char *)0x0,0x6226d8,4,pcVar7,unaff_EDI);
    if (uVar17 == 0xffffffff) {
      local_a9 = '\x01';
      local_b0 = (Sprite3D *)(this + *(int *)((char *)this + 0x78) * 0x18 + 500);
      local_64 = *(uint *)(local_b0 + 0x14);
      bVar6 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar7,unaff_EDI);
      if (bVar6) {
        ghidra::str::ctor((std::string *)&stack0xffffff08,pbVar1);
        OSInterface::getLocationForAsset();
        local_14._0_1_ = 6;
        pbVar18 = (std::string *)strUsingArgs((char *)local_48);
        local_14._0_1_ = 7;
        pSVar14 = cocos2d::Sprite3D::create(pbVar18);
        *(Sprite3D **)((char *)this + 0x3dc) = pSVar14;
        local_14._0_1_ = 6;
        goto LAB_0053b33e;
      }
      pbVar18 = (std::string *)strUsingArgs((char *)local_a8);
      local_14._0_1_ = 8;
      uStack_104 = 0x53b5f1;
      ghidra::str::ctor
                ((std::string *)&stack0xffffff04,
                 (std::string *)(this + *(int *)((char *)this + 0x7c) * 0x18 + 0x104));
      OSInterface::getLocationForAsset();
      local_14._0_1_ = 9;
      pbVar21 = (std::string *)strUsingArgs((char *)local_48);
      local_14._0_1_ = 10;
      pSVar14 = cocos2d::Sprite3D::create(pbVar21,pbVar18);
      local_14._0_1_ = 9;
      *(Sprite3D **)((char *)this + 0x3dc) = pSVar14;
      if (0xf < local_34) {
        pnVar24 = (nothrow_t *)(local_34 + 1);
        pbVar18 = local_48[0];
        if ((nothrow_t *)0xfff < pnVar24) {
          pbVar18 = *(std::string **)(local_48[0] + -4);
          pnVar24 = (nothrow_t *)(local_34 + 0x24);
          if ((std::string *)0x1f < local_48[0] + (-4 - (int)pbVar18)) goto LAB_0053b364;
        }
        operator_delete(pbVar18,pnVar24);
      }
      local_14._0_1_ = 8;
      local_38 = 0;
      local_34 = 0xf;
      local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
      if (0xf < local_4c) {
        pnVar24 = (nothrow_t *)(local_4c + 1);
        pvVar23 = local_60[0];
        if ((nothrow_t *)0xfff < pnVar24) {
          pvVar23 = *(void **)((int)local_60[0] + -4);
          pnVar24 = (nothrow_t *)(local_4c + 0x24);
          if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar23))) goto LAB_0053b364;
        }
        operator_delete(pvVar23,pnVar24);
      }
      local_14._0_1_ = 0;
      local_50 = 0;
      local_4c = 0xf;
      local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
      if (0xf < local_94) {
        pnVar24 = (nothrow_t *)(local_94 + 1);
        pvVar23 = local_a8[0];
        if ((nothrow_t *)0xfff < pnVar24) {
          pvVar23 = *(void **)((int)local_a8[0] + -4);
          pnVar24 = (nothrow_t *)(local_94 + 0x24);
          if (0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar23))) goto LAB_0053b364;
        }
        goto LAB_0053b6f6;
      }
    }
    else {
      bVar6 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar7,unaff_EDI);
      if (bVar6) {
        ghidra::str::ctor((std::string *)&stack0xffffff08,pbVar1);
        pcVar7 = (char *)OSInterface::getLocationForAsset();
        local_14._0_1_ = 1;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar7 = *(char **)pcVar7;
        }
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
        pcVar22 = pcVar7;
        do {
          cVar2 = *pcVar22;
          pcVar22 = pcVar22 + 1;
        } while (cVar2 != '\0');
        ghidra::str::assign
                  ((std::string *)local_48,pcVar7,(int)pcVar22 - (int)(pcVar7 + 1));
        local_14._0_1_ = 2;
        pSVar14 = cocos2d::Sprite3D::create((std::string *)local_48);
        *(Sprite3D **)((char *)this + 0x3dc) = pSVar14;
        local_14._0_1_ = 1;
LAB_0053b33e:
        if (0xf < local_34) {
          pnVar24 = (nothrow_t *)(local_34 + 1);
          pbVar18 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pbVar18 = *(std::string **)(local_48[0] + -4);
            pnVar24 = (nothrow_t *)(local_34 + 0x24);
            if ((std::string *)0x1f < local_48[0] + (-4 - (int)pbVar18)) goto LAB_0053b364;
          }
          operator_delete(pbVar18,pnVar24);
        }
        local_14._0_1_ = 0;
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
        if (local_4c < 0x10) goto LAB_0053b700;
        pnVar24 = (nothrow_t *)(local_4c + 1);
        pvVar23 = local_60[0];
        if ((nothrow_t *)0xfff < pnVar24) {
          pvVar23 = *(void **)((int)local_60[0] + -4);
          pnVar24 = (nothrow_t *)(local_4c + 0x24);
          if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar23))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
      }
      else {
        ghidra::str::ctor((std::string *)&stack0xffffff08,pbVar1);
        pcVar7 = (char *)OSInterface::getLocationForAsset();
        local_14._0_1_ = 3;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar7 = *(char **)pcVar7;
        }
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
        pcVar22 = pcVar7;
        do {
          cVar2 = *pcVar22;
          pcVar22 = pcVar22 + 1;
        } while (cVar2 != '\0');
        ghidra::str::assign
                  ((std::string *)local_48,pcVar7,(int)pcVar22 - (int)(pcVar7 + 1));
        local_14._0_1_ = 4;
        pbVar18 = (std::string *)strUsingArgs((char *)local_60);
        local_14._0_1_ = 5;
        pSVar14 = cocos2d::Sprite3D::create((std::string *)local_48,pbVar18);
        local_14._0_1_ = 4;
        *(Sprite3D **)((char *)this + 0x3dc) = pSVar14;
        if (0xf < local_4c) {
          pnVar24 = (nothrow_t *)(local_4c + 1);
          pvVar23 = local_60[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pvVar23 = *(void **)((int)local_60[0] + -4);
            pnVar24 = (nothrow_t *)(local_4c + 0x24);
            if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar23))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar23,pnVar24);
        }
        local_14._0_1_ = 3;
        local_50 = 0;
        local_4c = 0xf;
        local_60[0] = (void *)((uint)local_60[0] & 0xffffff00);
        if (0xf < local_34) {
          pnVar24 = (nothrow_t *)(local_34 + 1);
          pbVar18 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pbVar18 = *(std::string **)(local_48[0] + -4);
            pnVar24 = (nothrow_t *)(local_34 + 0x24);
            if ((std::string *)0x1f < local_48[0] + (-4 - (int)pbVar18)) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pbVar18,pnVar24);
        }
        local_14._0_1_ = 0;
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
        if (local_64 < 0x10) goto LAB_0053b700;
        pnVar24 = (nothrow_t *)(local_64 + 1);
        pvVar23 = local_78;
        if ((nothrow_t *)0xfff < pnVar24) {
          pvVar23 = *(void **)((int)local_78 + -4);
          pnVar24 = (nothrow_t *)(local_64 + 0x24);
          if (0x1f < (uint)((int)local_78 + (-4 - (int)pvVar23))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
      }
LAB_0053b6f6:
      local_14._0_1_ = 0;
      operator_delete(pvVar23,pnVar24);
    }
LAB_0053b700:
    local_14._0_1_ = 0xff;
    local_14._1_3_ = 0xffffff;
    if (local_a9 == '\0') {
      iVar28 = 0;
      iVar27 = (**(code **)(**(int **)((char *)this + 0x3dc) + 0x124))();
      if (0 < iVar27) {
        do {
          local_b0 = (Sprite3D *)(**(code **)(**(int **)((char *)this + 0x3dc) + 0x120))();
          if (((iVar28 < 0) || (*(int *)((int)local_b0 + 4) - *(int *)local_b0 >> 2 <= iVar28)) &&
             (bVar6 = cc_assert_script_compatible("index out of range in getObjectAtIndex()"),
             !bVar6)) {
            cocos2d::log("Assert failed: %s");
          }
          local_b0 = *(Sprite3D **)(*(int *)local_b0 + iVar28 * 4);
          lVar15 = cocos2d::Sprite3D::getMeshCount(local_b0);
          if (lVar15 != 0) {
            pbVar18 = (std::string *)strUsingArgs((char *)local_a8);
            local_14 = 0xc;
            cocos2d::Sprite3D::setTexture(local_b0,pbVar18);
            local_14._0_1_ = 0xff;
            local_14._1_3_ = 0xffffff;
            if (0xf < local_94) {
              pnVar24 = (nothrow_t *)(local_94 + 1);
              pvVar23 = local_a8[0];
              if ((nothrow_t *)0xfff < pnVar24) {
                pvVar23 = *(void **)((int)local_a8[0] + -4);
                pnVar24 = (nothrow_t *)(local_94 + 0x24);
                if (0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar23))) goto LAB_0053af21;
              }
              operator_delete(pvVar23,pnVar24);
            }
            local_aa = ((char *)this)[0x440];
            pMVar16 = cocos2d::Sprite3D::getMesh(local_b0);
            pTVar19 = cocos2d::Mesh::getTexture(pMVar16);
            local_3c = 0x2600;
            local_40 = 0x2600;
            if (local_aa == (byte)0x0) {
              local_38 = 0x812f;
              local_34 = 0x812f;
            }
            else {
              local_38 = 0x2901;
              local_34 = 0x2901;
            }
            cocos2d::Texture2D::setTexParameters(pTVar19,(_TexParams *)&local_40);
          }
          iVar28 = iVar28 + 1;
          iVar27 = (**(code **)(**(int **)((char *)this + 0x3dc) + 0x124))();
        } while (iVar28 < iVar27);
      }
    }
    lVar15 = cocos2d::Sprite3D::getMeshCount(*(Sprite3D **)((char *)this + 0x3dc));
    if (0 < lVar15) {
      pMVar16 = cocos2d::Sprite3D::getMesh(*(Sprite3D **)((char *)this + 0x3dc));
      pTVar19 = cocos2d::Mesh::getTexture(pMVar16);
      if (pTVar19 != (Texture2D *)0x0) {
        local_aa = ((char *)this)[0x440];
        pMVar16 = cocos2d::Sprite3D::getMesh(*(Sprite3D **)((char *)this + 0x3dc));
        pTVar19 = cocos2d::Mesh::getTexture(pMVar16);
        local_3c = 0x2600;
        local_40 = 0x2600;
        if (local_aa == (byte)0x0) {
          local_38 = 0x812f;
          local_34 = 0x812f;
        }
        else {
          local_38 = 0x2901;
          local_34 = 0x2901;
        }
        cocos2d::Texture2D::setTexParameters(pTVar19,(_TexParams *)&local_40);
      }
    }
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0xb4))();
    if (((char *)this)[0x34c] == (byte)0x0) {
      cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x2f0),local_58);
      local_14 = 0x10;
      cocos2d::Vec3::operator*(local_58,(float)local_6c);
      pcVar26 = ~Vec3_exref;
      cocos2d::Vec3::~Vec3(local_58);
      local_14 = 0x11;
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))();
    }
    else {
      pVVar11 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x2f0),(Vec3 *)&local_3c);
      local_14 = 0xd;
      cocos2d::Vec3::operator+(pVVar11,local_70);
      local_14._0_1_ = 0xe;
      cocos2d::Vec3::operator*(local_70,(float)&local_54);
      pcVar26 = ~Vec3_exref;
      cocos2d::Vec3::~Vec3(local_70);
      local_14 = CONCAT31(local_14._1_3_,0xf);
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))();
      cocos2d::Vec3::~Vec3((Vec3 *)&local_54);
    }
    local_14 = 0xffffffff;
    (*pcVar26)();
    if (((char *)this)[0x318] == (byte)0x0) {
      pRVar8 = (RoomObject *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x2fc),(Vec3 *)&local_3c);
      local_14 = 0x12;
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0xc4))();
      local_14 = 0xffffffff;
      (*pcVar26)();
    }
    else {
      pRVar8 = this + 0x308;
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0xcc))();
    }
    pVVar11 = local_c0;
    (**(code **)(**(int **)((char *)this + 0x3dc) + 200))();
    local_14 = 0x13;
    if (((char *)this)[0xfe] != (byte)0x0) {
      bVar6 = ghidra::lib::_Traits_equal___x28_x29("",0,(char *)pVVar11,(uint)pRVar8);
      if (!bVar6) {
        ghidra::str::ctor
                  ((std::string *)&uStack_108,(std::string *)((char *)this + 0x58));
        pCVar20 = (ShipData::currentlyBoardedShip)->getConsoleDamage();
        if ((pCVar20 != (ConsoleDamage *)0x0) && (*(int *)(pCVar20 + 0x24) != 0)) {
          local_b8 = (float)*(int *)(pCVar20 + 0x24) + local_b8;
          (**(code **)(**(int **)((char *)this + 0x3dc) + 0xc4))();
        }
      }
    }
    iVar27 = *(int *)((char *)this + 0x3dc);
    if (((char *)this)[0x37f] == (byte)0x0) {
      if (((char *)this)[0x381] == (byte)0x0) {
        *(undefined4 *)(iVar27 + 0x31c) = 2;
      }
      else {
        *(undefined4 *)(iVar27 + 0x31c) = 8;
      }
    }
    else {
      *(undefined4 *)(iVar27 + 0x31c) = 4;
    }
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x24))();
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x2c))();
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x34))();
    uStack_104 = 0x53bbc3;
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x244))();
    uStack_104 = *(undefined4 *)((char *)this + 0x3dc);
    uStack_108 = 0x53bbd7;
    (**(code **)(*(int *)local_b4 + 0x10c))();
    *(undefined4 *)((char *)this + 0x3ec) = *(undefined4 *)((char *)this + 0x3dc);
    if (*(int *)((char *)this + 0x3c) == 4) {
      if (local_a9 == '\0') {
        ghidra::str::ctor
                  ((std::string *)&stack0xffffff08,
                   (std::string *)(this + *(int *)((char *)this + 0x7c) * 0x18 + 0x104));
        splitStringBy();
        local_14._0_1_ = 0x16;
        ghidra::str::ctor((std::string *)local_48,local_54);
        local_14._0_1_ = 0x17;
        pbVar18 = (std::string *)strUsingArgs((char *)local_a8);
        local_14._0_1_ = 0x18;
        pbVar21 = (std::string *)strUsingArgs((char *)local_90);
        local_14._0_1_ = 0x19;
        pSVar14 = cocos2d::Sprite3D::create(pbVar21,pbVar18);
        local_14._0_1_ = 0x18;
        *(Sprite3D **)((char *)this + 0x3e4) = pSVar14;
        if (0xf < local_7c) {
          pnVar24 = (nothrow_t *)(local_7c + 1);
          pvVar23 = local_90[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pvVar23 = *(void **)((int)local_90[0] + -4);
            pnVar24 = (nothrow_t *)(local_7c + 0x24);
            if (0x1f < (uint)((int)local_90[0] + (-4 - (int)pvVar23))) goto LAB_0053b364;
          }
          operator_delete(pvVar23,pnVar24);
        }
        local_14._0_1_ = 0x17;
        local_80 = 0;
        local_7c = 0xf;
        local_90[0] = (void *)((uint)local_90[0] & 0xffffff00);
        if (0xf < local_94) {
          pnVar24 = (nothrow_t *)(local_94 + 1);
          pvVar23 = local_a8[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pvVar23 = *(void **)((int)local_a8[0] + -4);
            pnVar24 = (nothrow_t *)(local_94 + 0x24);
            if (0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar23))) goto LAB_0053b364;
          }
          operator_delete(pvVar23,pnVar24);
        }
        local_14._0_1_ = 0x16;
        if (0xf < local_34) {
          pnVar24 = (nothrow_t *)(local_34 + 1);
          pbVar18 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pbVar18 = *(std::string **)(local_48[0] + -4);
            pnVar24 = (nothrow_t *)(local_34 + 0x24);
            if ((std::string *)0x1f < local_48[0] + (-4 - (int)pbVar18)) goto LAB_0053b364;
          }
          operator_delete(pbVar18,pnVar24);
        }
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
        local_14._0_1_ = 0x13;
        ghidra::lib::vector___Tidy((ghidra::vector *)&local_54);
      }
      else {
        pbVar18 = (std::string *)strUsingArgs((char *)local_a8);
        local_14._0_1_ = 0x14;
        pbVar21 = (std::string *)strUsingArgs((char *)local_48);
        local_14._0_1_ = 0x15;
        pSVar14 = cocos2d::Sprite3D::create(pbVar21,pbVar18);
        local_14._0_1_ = 0x14;
        *(Sprite3D **)((char *)this + 0x3e4) = pSVar14;
        if (0xf < local_34) {
          pnVar24 = (nothrow_t *)(local_34 + 1);
          pbVar18 = local_48[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pbVar18 = *(std::string **)(local_48[0] + -4);
            pnVar24 = (nothrow_t *)(local_34 + 0x24);
            if ((std::string *)0x1f < local_48[0] + (-4 - (int)pbVar18)) goto LAB_0053b364;
          }
          operator_delete(pbVar18,pnVar24);
        }
        local_14._0_1_ = 0x13;
        local_38 = 0;
        local_34 = 0xf;
        local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
        if (0xf < local_94) {
          pnVar24 = (nothrow_t *)(local_94 + 1);
          pvVar23 = local_a8[0];
          if ((nothrow_t *)0xfff < pnVar24) {
            pvVar23 = *(void **)((int)local_a8[0] + -4);
            pnVar24 = (nothrow_t *)(local_94 + 0x24);
            if (0x1f < (uint)((int)local_a8[0] + (-4 - (int)pvVar23))) goto LAB_0053b364;
          }
          operator_delete(pvVar23,pnVar24);
        }
      }
      *(undefined4 *)(*(int *)((char *)this + 0x3e4) + 0x31c) = 4;
      (**(code **)(**(int **)((char *)this + 0x3e4) + 0xb4))();
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0x10c))();
    }
    pcVar26 = ~Vec3_exref;
    local_14 = 0xffffffff;
    cocos2d::Vec3::~Vec3(local_c0);
  }
  else if (iVar27 == 1) {
    pCVar25 = (Color3B *)((char *)this + 0x37c);
    pCVar9 = (Color3B *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_b0 + 1),'\0','\0','\0');
    bVar6 = cocos2d::Color3B::operator==(pCVar25,pCVar9);
    if (bVar6) {
      pCVar25 = (Color3B *)(*(int *)((char *)this + 0x3f0) + 0x8c);
    }
    this_00 = cocos2d::DirectionLight::create((Vec3 *)((char *)this + 0x2f0),pCVar25);
    *(DirectionLight **)((char *)this + 0x3d0) = this_00;
    cocos2d::BaseLight::setIntensity((BaseLight *)this_00,*(float *)((char *)this + 0x3ac));
    if (((char *)this)[0x381] == (byte)0x0) {
      *(undefined4 *)(*(int *)((char *)this + 0x3d0) + 0x27c) = 2;
    }
    else {
      *(undefined4 *)(*(int *)((char *)this + 0x3d0) + 0x27c) = 8;
    }
    *(RoomObject *)(*(int *)((char *)this + 0x3d0) + 0x280) = ((char *)this)[0x4c];
    (**(code **)(*(int *)local_b4 + 0x10c))();
    *(undefined4 *)((char *)this + 0x3ec) = *(undefined4 *)((char *)this + 0x3d0);
    pcVar26 = ~Vec3_exref;
  }
  else if (iVar27 == 2) {
    pCVar25 = (Color3B *)((char *)this + 0x37c);
    pCVar9 = (Color3B *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_b0 + 1),'\0','\0','\0');
    bVar6 = cocos2d::Color3B::operator==(pCVar25,pCVar9);
    if (bVar6) {
      pCVar25 = (Color3B *)(*(int *)((char *)this + 0x3f0) + 0x8c);
    }
    fVar30 = 10000.0;
    cocos2d::Vec3::Vec3((Vec3 *)&stack0xffffff0c,(Vec3 *)((char *)this + 0x2f0));
    pVVar11 = (Vec3 *)OSInterface::getCorrectedWorldPosition();
    local_14 = 0x1a;
    pPVar12 = cocos2d::PointLight::create(pVVar11,pCVar25,fVar30);
    pcVar26 = ~Vec3_exref;
    local_14 = 0xffffffff;
    *(PointLight **)((char *)this + 0x3d4) = pPVar12;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_54);
    cocos2d::BaseLight::setIntensity(*(BaseLight **)((char *)this + 0x3d4),*(float *)((char *)this + 0x3ac));
    if (((char *)this)[0x318] == (byte)0x0) {
      (**(code **)(**(int **)((char *)this + 0x3d4) + 0xc4))();
    }
    else {
      (**(code **)(**(int **)((char *)this + 0x3d4) + 0xcc))();
    }
    if (((char *)this)[0x381] == (byte)0x0) {
      *(undefined4 *)(*(int *)((char *)this + 0x3d4) + 0x27c) = 2;
    }
    else {
      *(undefined4 *)(*(int *)((char *)this + 0x3d4) + 0x27c) = 8;
    }
    *(RoomObject *)(*(int *)((char *)this + 0x3d4) + 0x280) = ((char *)this)[0x4c];
    (**(code **)(*(int *)local_b4 + 0x10c))();
    *(undefined4 *)((char *)this + 0x3ec) = *(undefined4 *)((char *)this + 0x3d4);
  }
  else if (iVar27 == 3) {
    pCVar25 = (Color3B *)((char *)this + 0x37c);
    pCVar9 = (Color3B *)cocos2d::Color3B::Color3B((Color3B *)((int)&local_b0 + 1),'\0','\0','\0');
    bVar6 = cocos2d::Color3B::operator==(pCVar25,pCVar9);
    if (bVar6) {
      pCVar25 = (Color3B *)(*(int *)((char *)this + 0x3f0) + 0x8c);
    }
    fVar30 = *(float *)((char *)this + 0x3b4);
    fVar31 = 10000.0;
    fVar29 = *(float *)((char *)this + 0x3b0);
    uStack_104 = 0x53adaf;
    cocos2d::Vec3::Vec3((Vec3 *)&stack0xffffff04,(Vec3 *)((char *)this + 0x2f0));
    pVVar11 = (Vec3 *)OSInterface::getCorrectedWorldPosition();
    local_14 = 0x1b;
    pSVar13 = cocos2d::SpotLight::create
                        ((Vec3 *)((char *)this + 0x2fc),pVVar11,pCVar25,fVar29,fVar30,fVar31);
    pcVar26 = ~Vec3_exref;
    local_14 = 0xffffffff;
    *(SpotLight **)((char *)this + 0x3d8) = pSVar13;
    cocos2d::Vec3::~Vec3((Vec3 *)&local_54);
    cocos2d::BaseLight::setIntensity(*(BaseLight **)((char *)this + 0x3d8),*(float *)((char *)this + 0x3ac));
    if (((char *)this)[0x318] == (byte)0x0) {
      (**(code **)(**(int **)((char *)this + 0x3d8) + 0xc4))();
    }
    else {
      (**(code **)(**(int **)((char *)this + 0x3d8) + 0xcc))();
    }
    if (((char *)this)[0x381] == (byte)0x0) {
      *(undefined4 *)(*(int *)((char *)this + 0x3d8) + 0x27c) = 2;
    }
    else {
      *(undefined4 *)(*(int *)((char *)this + 0x3d8) + 0x27c) = 8;
    }
    *(RoomObject *)(*(int *)((char *)this + 0x3d8) + 0x280) = ((char *)this)[0x4c];
    (**(code **)(*(int *)local_b4 + 0x10c))();
    *(undefined4 *)((char *)this + 0x3ec) = *(undefined4 *)((char *)this + 0x3d8);
  }
  else if ((iVar27 == 5) || (pcVar26 = ~Vec3_exref, iVar27 == 6)) {
    strUsingArgs((char *)local_60);
    local_14 = 0x1c;
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_48,"Basic_Human.c3b",0xf);
    local_14._0_1_ = 0x1d;
    pSVar14 = cocos2d::Sprite3D::create((std::string *)local_48);
    local_14._0_1_ = 0x1c;
    *(Sprite3D **)((char *)this + 0x3dc) = pSVar14;
    if (0xf < local_34) {
      pnVar24 = (nothrow_t *)(local_34 + 1);
      pbVar18 = local_48[0];
      if ((nothrow_t *)0xfff < pnVar24) {
        pbVar18 = *(std::string **)(local_48[0] + -4);
        pnVar24 = (nothrow_t *)(local_34 + 0x24);
        if ((std::string *)0x1f < local_48[0] + (-4 - (int)pbVar18)) {
LAB_0053af21:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar18,pnVar24);
    }
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0xb4))();
    if (((char *)this)[0x34c] == (byte)0x0) {
      cocos2d::Vec3::operator-((Vec3 *)((char *)this + 0x2f0),(Vec3 *)&stack0xffffff10);
      OSInterface::getCorrectedWorldPosition();
      local_14._0_1_ = 0x20;
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))();
      pcVar26 = ~Vec3_exref;
    }
    else {
      pVVar11 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 0x2f0),local_d0);
      local_14._0_1_ = 0x1e;
      cocos2d::Vec3::operator-(pVVar11,(Vec3 *)&stack0xffffff10);
      OSInterface::getCorrectedWorldPosition();
      local_14._0_1_ = 0x1f;
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))();
      pcVar26 = ~Vec3_exref;
      cocos2d::Vec3::~Vec3(local_84);
    }
    local_14 = CONCAT31(local_14._1_3_,0x1c);
    (*pcVar26)();
    if (((char *)this)[0x318] == (byte)0x0) {
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0xc4))();
    }
    else {
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0xcc))();
    }
    iVar27 = *(int *)((char *)this + 0x3dc);
    if (((char *)this)[0x37f] == (byte)0x0) {
      if (((char *)this)[0x381] == (byte)0x0) {
        *(undefined4 *)(iVar27 + 0x31c) = 2;
      }
      else {
        *(undefined4 *)(iVar27 + 0x31c) = 8;
      }
    }
    else {
      *(undefined4 *)(iVar27 + 0x31c) = 4;
    }
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x24))();
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x2c))();
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x34))();
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x244))();
    uStack_104 = 0x53b0ed;
    (**(code **)(*(int *)local_b4 + 0x10c))();
    pSVar14 = *(Sprite3D **)((char *)this + 0x3dc);
    *(Sprite3D **)((char *)this + 0x3ec) = pSVar14;
    if (*(RoomCharacter **)((char *)this + 0x100) != (RoomCharacter *)0x0) {
      (*(RoomCharacter **)((char *)this + 0x100))->renderCharacterOverlays(this);
      pSVar14 = *(Sprite3D **)((char *)this + 0x3dc);
    }
    iVar27 = 0;
    lVar15 = cocos2d::Sprite3D::getMeshCount(pSVar14);
    if (0 < lVar15) {
      do {
        bVar6 = false;
        pMVar16 = cocos2d::Sprite3D::getMeshByIndex(*(Sprite3D **)((char *)this + 0x3dc),iVar27);
        cocos2d::Mesh::setVisible(pMVar16,bVar6);
        iVar27 = iVar27 + 1;
        lVar15 = cocos2d::Sprite3D::getMeshCount(*(Sprite3D **)((char *)this + 0x3dc));
      } while (iVar27 < lVar15);
    }
    if (*(RoomCharacter **)((char *)this + 0x100) != (RoomCharacter *)0x0) {
      (*(RoomCharacter **)((char *)this + 0x100))->renderCharacter(this);
    }
    pbVar18 = (std::string *)((char *)this + 0x98);
    ghidra::str::ctor((std::string *)local_48,(std::string *)pbVar18);
    local_14._0_1_ = 0x21;
    if (pbVar18 != (std::string *)local_48) {
      pbVar21 = (std::string *)local_48;
      if (0xf < local_34) {
        pbVar21 = local_48[0];
      }
      ghidra::str::assign(pbVar18,(char *)pbVar21,local_38);
    }
    runAnimation(this);
    local_14 = CONCAT31(local_14._1_3_,0x1c);
    if (0xf < local_34) {
      pnVar24 = (nothrow_t *)(local_34 + 1);
      pbVar18 = local_48[0];
      if ((nothrow_t *)0xfff < pnVar24) {
        pbVar18 = *(std::string **)(local_48[0] + -4);
        pnVar24 = (nothrow_t *)(local_34 + 0x24);
        if ((std::string *)0x1f < local_48[0] + (-4 - (int)pbVar18)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar18,pnVar24);
    }
    local_14 = 0xffffffff;
    pcVar26 = ~Vec3_exref;
    if (0xf < local_4c) {
      pnVar24 = (nothrow_t *)(local_4c + 1);
      pvVar23 = local_60[0];
      if ((nothrow_t *)0xfff < pnVar24) {
        pvVar23 = *(void **)((int)local_60[0] + -4);
        pnVar24 = (nothrow_t *)(local_4c + 0x24);
        if (0x1f < (uint)((int)local_60[0] + (-4 - (int)pvVar23))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar23,pnVar24);
      pcVar26 = ~Vec3_exref;
    }
  }
  if ((((char *)this)[0x449] != (byte)0x0) && (*(int **)((char *)this + 0x3dc) != (int *)0x0)) {
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0xb4))();
  }
  iVar27 = *(int *)((char *)this + 0x3c);
  if (((iVar27 == 3) || (iVar27 == 1)) || (iVar27 == 2)) {
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = (std::string *)((uint)local_48[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_48,"white.png",9);
    local_14 = 0x22;
    pSVar10 = cocos2d::Sprite::create((std::string *)local_48);
    local_14._0_1_ = 0xff;
    local_14._1_3_ = 0xffffff;
    *(Sprite **)((char *)this + 1000) = pSVar10;
    if (0xf < local_34) {
      pnVar24 = (nothrow_t *)(local_34 + 1);
      pbVar18 = local_48[0];
      if ((nothrow_t *)0xfff < pnVar24) {
        pbVar18 = *(std::string **)(local_48[0] + -4);
        pnVar24 = (nothrow_t *)(local_34 + 0x24);
        if ((std::string *)0x1f < local_48[0] + (-4 - (int)pbVar18)) {
LAB_0053b364:
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar18,pnVar24);
    }
    (**(code **)(**(int **)((char *)this + 1000) + 0x40))();
    local_68 = 0x3f000000;
    local_64 = 0x3f000000;
    local_14 = 0x23;
    (**(code **)(**(int **)((char *)this + 1000) + 0xa0))();
    local_14 = 0xffffffff;
    cocos2d::Vec3::operator-((Vec3 *)((char *)this + 0x2f0),local_d0);
    local_14 = 0x24;
    cocos2d::Vec3::operator*(local_d0,(float)local_84);
    (*pcVar26)();
    local_14 = 0x25;
    (**(code **)(**(int **)((char *)this + 1000) + 0x78))();
    local_14 = 0xffffffff;
    (*pcVar26)();
    if (((char *)this)[0x318] == (byte)0x0) {
      (**(code **)(**(int **)((char *)this + 1000) + 0xc4))();
    }
    else {
      (**(code **)(**(int **)((char *)this + 1000) + 0xcc))();
    }
    (**(code **)(**(int **)((char *)this + 1000) + 0x25c))();
    iVar27 = **(int **)((char *)this + 1000);
    Singleton<RoomEditor>::getInstance();
    (**(code **)(iVar27 + 0xb4))();
    (**(code **)(*(int *)local_b4 + 0x10c))();
  }
  if ((((char *)this)[0x448] != (byte)0x0) && (*(int **)((char *)this + 0x3dc) != (int *)0x0)) {
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0xb4))();
  }
  renderAllScreens(this);
  resetTopBar(this,extraout_CL);
  FUN_0053bf8e();
  return;
}


// Ghidra: void __thiscall RoomObject::setMesh(RoomObject *this,bool param_2,Texture2D *param_3,char *param_4)
void RoomObject::setMesh(bool param_2, Texture2D * param_3, char * param_4)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  long lVar3;
  Mesh *this_00;
  Texture2D *this_01;
  char *pcVar4;
  nothrow_t *pnVar5;
  int iVar6;
  uint unaff_EDI;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c71d8;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  local_14 = pcVar2;
  if (*(Sprite3D **)((char *)this + 0x3dc) == (Sprite3D *)0x0) {
    pcVar2 = "unknown model";
  }
  else {
    iVar6 = 0;
    lVar3 = cocos2d::Sprite3D::getMeshCount(*(Sprite3D **)((char *)this + 0x3dc));
    if (0 < lVar3) {
      do {
        cocos2d::Sprite3D::getMeshByIndex(*(Sprite3D **)((char *)this + 0x3dc),iVar6);
        pcVar4 = (char *)&param_4;
        if (0xf < in_stack_00000020) {
          pcVar4 = param_4;
        }
        bVar1 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_0000001c,pcVar2,unaff_EDI);
        if (bVar1) {
          this_00 = cocos2d::Sprite3D::getMeshByIndex(*(Sprite3D **)((char *)this + 0x3dc),iVar6);
          if (this_00 != (Mesh *)0x0) {
            bVar1 = cocos2d::Mesh::isVisible(this_00);
            if (bVar1 != param_2) {
              cocos2d::Mesh::setVisible(this_00,param_2);
            }
            if (param_2 != false) {
              if (param_3 != (Texture2D *)0x0) {
                cocos2d::Mesh::setTexture(this_00,param_3);
              }
              this_01 = cocos2d::Mesh::getTexture(this_00);
              local_20 = 0x2600;
              local_24 = 0x2600;
              local_1c = 0x812f;
              local_18 = 0x812f;
              cocos2d::Texture2D::setTexParameters(this_01,(_TexParams *)&local_24);
            }
            goto LAB_0053c076;
          }
          break;
        }
        iVar6 = iVar6 + 1;
        lVar3 = cocos2d::Sprite3D::getMeshCount(*(Sprite3D **)((char *)this + 0x3dc));
      } while (iVar6 < lVar3);
    }
    pcVar2 = "unknown mesh";
  }
  debugPrint("ERROR",pcVar2);
LAB_0053c076:
  if (0xf < in_stack_00000020) {
    pnVar5 = (nothrow_t *)(in_stack_00000020 + 1);
    pcVar2 = param_4;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar2 = *(char **)(param_4 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if ((char *)0x1f < param_4 + (-4 - (int)pcVar2)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar2,pnVar5);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall RoomObject::setMesh(RoomObject *this,bool param_2,void *param_3)
void RoomObject::setMesh(bool param_2, void * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  char stack0x00000020[1] = {0};  // [pseudo] address of an unnamed stack slot
  bool bVar1;
  char *pcVar2;
  Mesh *this_00;
  Texture2D *this_01;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint unaff_ESI;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  uint in_stack_00000034;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_18;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005c7210;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 1;
  local_18 = pcVar2;
  if (*(Sprite3D **)((char *)this + 0x3dc) == (Sprite3D *)0x0) {
    debugPrint("ERROR","unknown model");
  }
  else {
    this_00 = cocos2d::Sprite3D::getMeshByName
                        (*(Sprite3D **)((char *)this + 0x3dc),(std::string *)&param_3);
    if (this_00 == (Mesh *)0x0) {
      debugPrint("ERROR","unknown mesh");
    }
    else {
      bVar1 = cocos2d::Mesh::isVisible(this_00);
      if (bVar1 != param_2) {
        cocos2d::Mesh::setVisible(this_00,param_2);
      }
      if (param_2 != false) {
        bVar1 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar2,unaff_ESI);
        if (!bVar1) {
          cocos2d::Mesh::setTexture(this_00,(std::string *)&stack0x00000020);
        }
        this_01 = cocos2d::Mesh::getTexture(this_00);
        local_24 = 0x2600;
        local_28 = 0x2600;
        local_20 = 0x812f;
        local_1c = 0x812f;
        cocos2d::Texture2D::setTexParameters(this_01,(_TexParams *)&local_28);
      }
    }
  }
  if (0xf < in_stack_0000001c) {
    pnVar4 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar3 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)param_3 + -4);
      pnVar4 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xf;
  param_3 = (void *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar4 = (nothrow_t *)(in_stack_00000034 + 1);
    pvVar3 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)in_stack_00000020 + -4);
      pnVar4 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000020 + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall RoomObject::runAnimation(RoomObject *this)
void RoomObject::runAnimation()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined1 uVar1;
  bool bVar2;
  char *pcVar3;
  RoomObject *pRVar4;
  CharacterAnimationManager *pCVar5;
  word *pwVar6;
  std::string *pbVar7;
  Animation3D *pAVar8;
  char *****pppppcVar9;
  void *pvVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  RoomObject *pRVar13;
  uint unaff_EDI;
  void **ppvVar14;
  CharacterAnimationManager aCStack_e8 [16];
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  int iVar15;
  int iVar16;
  float fVar17;
  char ****local_a8 [4];
  uint local_98;
  uint local_94;
  int local_90;
  CharacterAnimationManager *local_8c;
  Animate3D *local_88;
  undefined **local_84;
  code *local_80;
  RoomObject *local_7c;
  undefined ***local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  std::string *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c7291;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar3;
  cocos2d::Node::stopAllActions(*(Node **)((char *)this + 0x3dc));
  uVar12 = 0;
  if (*(int *)((char *)this + 0x654) - *(int *)((char *)this + 0x650) >> 2 != 0) {
    do {
      cocos2d::Node::stopAllActions(*(Node **)(*(int *)((char *)this + 0x650) + uVar12 * 4));
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)(*(int *)((char *)this + 0x654) - *(int *)((char *)this + 0x650) >> 2));
  }
  local_1c = 0xf00000000;
  local_2c = (std::string *)((uint)local_2c & 0xffffff00);
  ghidra::str::assign((std::string *)&local_2c,"",0);
  pRVar13 = this + 200;
  // [seh] local_8._0_1_ = 0;
  // [seh] local_8._1_3_ = 0;
  bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
  if (bVar2) {
    local_88 = (Animate3D *)&uStack_d0;
    uStack_d8 = 0x53c3ec;
    ghidra::str::ctor
              ((std::string *)&uStack_d0,(std::string *)((char *)this + 0xb0));
    local_8c = aCStack_e8;
    // [seh] local_8._0_1_ = 1;
    ghidra::str::ctor
              ((std::string *)aCStack_e8,(std::string *)((char *)this + 0x98));
    ppvVar14 = local_5c;
    // [seh] local_8._0_1_ = 2;
    pCVar5 = ghidra::any_singleton();
    // [seh] local_8._0_1_ = 0;
    pwVar6 = (word *)(pCVar5)->getRandomAnimation(ppvVar14);
    if ((word *)&local_2c != pwVar6) {
      // [mislabelled-dtor] word::~word((word *)&local_2c);
      local_2c = *(std::string **)pwVar6;
      uStack_28 = *(undefined4 *)(pwVar6 + 4);
      uStack_24 = *(undefined4 *)(pwVar6 + 8);
      uStack_20 = *(undefined4 *)(pwVar6 + 0xc);
      local_1c = *(undefined8 *)(pwVar6 + 0x10);
      *(undefined4 *)(pwVar6 + 0x10) = 0;
      *(undefined4 *)(pwVar6 + 0x14) = 0xf;
      *pwVar6 = (word)0x0;
    }
    if (0xf < local_48) {
      pnVar11 = (nothrow_t *)(local_48 + 1);
      pvVar10 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_5c[0] + -4);
        pnVar11 = (nothrow_t *)(local_48 + 0x24);
        uVar1 = (undefined1)local_8;
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10))) {
LAB_0053c477:
          // [seh] local_8._0_1_ = uVar1;
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar10,pnVar11);
    }
  }
  else {
    if ((RoomObject *)&local_2c != pRVar13) {
      pRVar4 = pRVar13;
      if (0xf < *(uint *)((char *)this + 0xdc)) {
        pRVar4 = *(RoomObject **)pRVar13;
      }
      ghidra::str::assign((std::string *)&local_2c,(char *)pRVar4,*(uint *)((char *)this + 0xd8))
      ;
    }
    *(undefined4 *)((char *)this + 0xd8) = 0;
    if (0xf < *(uint *)((char *)this + 0xdc)) {
      pRVar13 = *(RoomObject **)pRVar13;
    }
    *pRVar13 = (byte)0x0;
  }
  bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
  if (bVar2) {
    pcVar3 = "Animation error: unable to get animation for set \'%s\'";
  }
  else {
    ghidra::str::ctor((std::string *)local_a8,(std::string *)&local_2c);
    // [seh] local_8._0_1_ = 3;
    local_8c = ghidra::any_singleton();
    // [seh] local_8._0_1_ = 0;
    uVar12 = 0;
    local_88 = *(Animate3D **)(local_8c + 0xc);
    if (*(int *)(local_8c + 0x10) - (int)local_88 >> 2 != 0) {
      do {
        local_90 = *(int *)(local_88 + uVar12 * 4);
        pppppcVar9 = local_a8;
        if (0xf < local_94) {
          pppppcVar9 = (char *****)local_a8[0];
        }
        bVar2 = ghidra::lib::_Traits_equal___x28_x29((char *)pppppcVar9,local_98,pcVar3,unaff_EDI);
        if (bVar2) {
          if (0xf < local_94) {
            pnVar11 = (nothrow_t *)(local_94 + 1);
            pppppcVar9 = (char *****)local_a8[0];
            if ((nothrow_t *)0xfff < pnVar11) {
              pppppcVar9 = (char *****)local_a8[0][-1];
              pnVar11 = (nothrow_t *)(local_94 + 0x24);
              if ((char *)0x1f < (char *)((int)local_a8[0] + (-4 - (int)pppppcVar9))) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pppppcVar9,pnVar11);
          }
          iVar15 = local_90;
          local_98 = 0;
          local_94 = 0xf;
          local_a8[0] = (char ****)((uint)local_a8[0] & 0xffffff00);
          if (local_90 == 0) goto LAB_0053c950;
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          ghidra::str::assign((std::string *)local_44,"",0);
          // [seh] local_8._0_1_ = 4;
          pbVar7 = (std::string *)strUsingArgs((char *)local_5c);
          // [seh] local_8._0_1_ = 5;
          fVar17 = 30.0;
          iVar16 = *(int *)(iVar15 + 0x1c);
          iVar15 = *(int *)(iVar15 + 0x18);
          uStack_d0 = 0x53c668;
          pAVar8 = cocos2d::Animation3D::create(pbVar7,(std::string *)local_44);
          local_88 = cocos2d::Animate3D::createWithFrames(pAVar8,iVar15,iVar16,fVar17);
          // [seh] local_8._0_1_ = 4;
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
          // [seh] local_8._0_1_ = 0;
          local_4c = 0;
          local_48 = 0xf;
          local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
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
          local_34 = 0;
          local_30 = 0xf;
          local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          *(undefined4 *)_transTime_exref = 0x3f800000;
          local_60 = &local_84;
          local_84 = std::_Func_impl_no_alloc<>::vftable;
          local_80 = animationDoneCallback;
          // [seh] local_8._0_1_ = 6;
          iVar15 = **(int **)((char *)this + 0x3dc);
          local_7c = this;
          cocos2d::CallFunc::create((ghidra::lib::function_t *)&local_84);
          cocos2d::Sequence::create((FiniteTimeAction *)local_88);
          (**(code **)(iVar15 + 0x1d0))();
          local_8c = (CharacterAnimationManager *)0x0;
          if (*(int *)((char *)this + 0x654) - *(int *)((char *)this + 0x650) >> 2 != 0) goto LAB_0053c790;
          goto LAB_0053c903;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)(*(int *)(local_8c + 0x10) - *(int *)(local_8c + 0xc) >> 2));
    }
    if (0xf < local_94) {
      pnVar11 = (nothrow_t *)(local_94 + 1);
      pppppcVar9 = (char *****)local_a8[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pppppcVar9 = (char *****)local_a8[0][-1];
        pnVar11 = (nothrow_t *)(local_94 + 0x24);
        if ((char *)0x1f < (char *)((int)local_a8[0] + (-4 - (int)pppppcVar9))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pppppcVar9,pnVar11);
    }
LAB_0053c950:
    pcVar3 = "Animation error: unable to get animation frames for \'%s\'";
  }
  debugPrint("ERROR",pcVar3);
  bVar2 = cc_assert_script_compatible("ANIMATION ERROR.");
  if (!bVar2) {
    cocos2d::log("Assert failed: %s");
  }
LAB_0053c990:
  if (0xf < local_1c._4_4_) {
    pnVar11 = (nothrow_t *)(local_1c._4_4_ + 1);
    pbVar7 = local_2c;
    if ((nothrow_t *)0xfff < pnVar11) {
      pbVar7 = *(std::string **)(local_2c + -4);
      pnVar11 = (nothrow_t *)(local_1c._4_4_ + 0x24);
      if ((std::string *)0x1f < local_2c + (-4 - (int)pbVar7)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar7,pnVar11);
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    // [seh] local_8._0_1_ = 6;
    local_4c = 0;
    local_48 = 0xf;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
    if (0xf < local_30) {
      pnVar11 = (nothrow_t *)(local_30 + 1);
      pvVar10 = local_44[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_44[0] + -4);
        pnVar11 = (nothrow_t *)(local_30 + 0x24);
        uVar1 = (undefined1)local_8;
        if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) goto LAB_0053c477;
      }
      operator_delete(pvVar10,pnVar11);
    }
    local_34 = 0;
    local_30 = 0xf;
    *(undefined4 *)_transTime_exref = 0x3f800000;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    iVar15 = **(int **)(*(int *)((char *)this + 0x650) + (int)pCVar5 * 4);
    cocos2d::CallFunc::create((ghidra::lib::function_t *)&local_84);
    cocos2d::Sequence::create((FiniteTimeAction *)local_88);
    (**(code **)(iVar15 + 0x1d0))();
    local_8c = local_8c + 1;
    if ((CharacterAnimationManager *)(*(int *)((char *)this + 0x654) - *(int *)((char *)this + 0x650) >> 2) <=
        local_8c) break;
LAB_0053c790:
    pCVar5 = local_8c;
    local_34 = 0;
    local_30 = 0xf;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
    ghidra::str::assign((std::string *)local_44,"",0);
    // [seh] local_8._0_1_ = 7;
    pbVar7 = (std::string *)strUsingArgs((char *)local_5c);
    // [seh] local_8._0_1_ = 8;
    fVar17 = 30.0;
    iVar15 = *(int *)(local_90 + 0x1c);
    iVar16 = *(int *)(local_90 + 0x18);
    uStack_d0 = 0x53c7f4;
    pAVar8 = cocos2d::Animation3D::create(pbVar7,(std::string *)local_44);
    local_88 = cocos2d::Animate3D::createWithFrames(pAVar8,iVar16,iVar15,fVar17);
    // [seh] local_8._0_1_ = 7;
    uVar1 = (undefined1)local_8;
    // [seh] local_8._0_1_ = 7;
    if (0xf < local_48) {
      pnVar11 = (nothrow_t *)(local_48 + 1);
      pvVar10 = local_5c[0];
      if ((nothrow_t *)0xfff < pnVar11) {
        pvVar10 = *(void **)((int)local_5c[0] + -4);
        pnVar11 = (nothrow_t *)(local_48 + 0x24);
        if (0x1f < (uint)((int)local_5c[0] + (-4 - (int)pvVar10))) goto LAB_0053c477;
      }
      operator_delete(pvVar10,pnVar11);
    }
  }
LAB_0053c903:
  if ((std::string *)((char *)this + 0xb0) != (std::string *)&local_2c) {
    pbVar7 = (std::string *)&local_2c;
    if (0xf < local_1c._4_4_) {
      pbVar7 = local_2c;
    }
    ghidra::str::assign((std::string *)((char *)this + 0xb0),(char *)pbVar7,(uint)local_1c);
  }
  // [seh] local_8._0_1_ = 9;
  if (local_60 != (undefined ***)0x0) {
    (*(code *)(*local_60)[4])();
    local_60 = (undefined ***)0x0;
  }
  goto LAB_0053c990;
}


// Ghidra: void __thiscall RoomObject::animationDoneCallback(RoomObject *this)
void RoomObject::animationDoneCallback()

{
  runAnimation(this);
  return;
}


// Ghidra: void __thiscall RoomObject::switchToScreen(RoomObject *this,int param_1)
void RoomObject::switchToScreen(int param_1)

{
  if (param_1 != *(int *)((char *)this + 0x388)) {
    *(int *)((char *)this + 0x388) = param_1;
    resetScreen(this,SUB41(this,0));
    if (*(char *)(*(int *)(*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) + 0x180) + 0x59) ==
        '\0') {
      if (g_gameLogic[0x73] != (byte)0x0) {
        g_gameLogic[0x73] = (byte)0x0;
      }
    }
    else if (g_gameLogic[0x73] == (byte)0x0) {
      g_gameLogic[0x73] = (byte)0x1;
      return;
    }
  }
  return;
}


// Ghidra: void __thiscall RoomObject::recheckValidScreens(RoomObject *this)
void RoomObject::recheckValidScreens()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  undefined4 *puVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  std::string local_8c [16];
  undefined4 local_7c;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined4 local_58;
  std::string local_54 [24];
  ghidra::func_class local_3c [36];
  int local_18;
  uint local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c72d8;
  // [cookie] local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  puVar1 = *(undefined4 **)((char *)this + 0x398);
  ppvVar2 = &local_10;
  // [seh] local_10 = ExceptionList;
  for (puVar3 = *(undefined4 **)((char *)this + 0x394); ExceptionList = ppvVar2, puVar3 != puVar1;
      puVar3 = puVar3 + 0x14) {
    local_64 = *puVar3;
    local_60 = *(undefined1 *)(puVar3 + 1);
    local_5f = *(undefined1 *)((int)puVar3 + 5);
    local_5c = puVar3[2];
    local_58 = puVar3[3];
    local_7c = 0x53cac9;
    ghidra::str::ctor(local_54,(std::string *)(puVar3 + 4));
    local_18 = 0;
    // [seh] local_8 = 1;
    if ((undefined4 *)puVar3[0x13] != (undefined4 *)0x0) {
      local_7c = 0x53caee;
      local_18 = (*(code *)**(undefined4 **)puVar3[0x13])();
    }
    // [seh] local_8 = 2;
    if (local_18 != 0) {
      local_7c = 0;
      local_8c[0] = (std::string)0x0;
      ghidra::str::assign(local_8c,"",0);
      local_60 = ghidra::lib::_Func_class__operator_x28_x29(local_3c,*(undefined4 *)(g_gameData + 0xd0),0);
    }
    // [seh] local_8 = 0xffffffff;
    ((ScreenData *)&local_64)->~ScreenData();
    ppvVar2 = ExceptionList;
  }
  // [seh] ExceptionList = local_10;
  // [cookie] __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// Ghidra: void __thiscall RoomObject::nextValidScreen(RoomObject *this)
void RoomObject::nextValidScreen()

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((char *)this + 0x388);
  uVar3 = uVar1;
  do {
    uVar3 = uVar3 + 1;
    *(uint *)((char *)this + 0x388) = uVar3;
    iVar2 = *(int *)((char *)this + 0x394);
    if ((uint)((*(int *)((char *)this + 0x398) - iVar2) / 0x50) <= uVar3) {
      *(undefined4 *)((char *)this + 0x388) = 0;
      uVar3 = 0;
    }
  } while (((*(char *)(iVar2 + 4 + uVar3 * 0x50) == '\0') ||
           (*(char *)(iVar2 + 5 + uVar3 * 0x50) != '\0')) && (uVar1 != uVar3));
  debugPrint("DETAIL","New screen = %d",uVar3);
  return;
}


// Ghidra: void __thiscall RoomObject::renderAllScreens(RoomObject *this)
void RoomObject::renderAllScreens()

{
  TopBar *this_00;
  int iVar1;
  ScreenTab *extraout_ECX;
  int iVar2;
  uint uVar3;
  RoomObject *pRVar4;
  allocator<ScreenTab> *unaff_ESI;
  int iVar5;
  ScreenTab *unaff_EDI;
  uint local_8;
  
  uVar3 = 0;
  iVar2 = *(int *)((char *)this + 0x398);
  iVar5 = *(int *)((char *)this + 0x394);
  iVar1 = iVar2 - iVar5 >> 0x1f;
  if ((iVar2 - iVar5) / 0x50 + iVar1 != iVar1) {
    do {
      if (*(char *)(iVar5 + 4 + *(int *)((char *)this + 0x388) * 0x50) != '\0') {
        generateScreen(this,uVar3);
      }
      iVar5 = *(int *)((char *)this + 0x394);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)((char *)this + 0x398) - iVar5) / 0x50));
    iVar2 = *(int *)((char *)this + 0x398);
  }
  local_8 = 0;
  iVar1 = iVar2 - iVar5 >> 0x1f;
  if ((iVar2 - iVar5) / 0x50 + iVar1 != iVar1) {
    pRVar4 = this + 0x624;
    do {
      iVar2 = *(int *)pRVar4;
      if ((iVar2 != 0) && (*(char *)(iVar2 + 0x51) != '\0')) {
        this_00 = *(TopBar **)(iVar2 + 0x17c);
        *(RoomObject **)(this_00 + 0x60) = this;
        (this_00)->cleanupRender();
        ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,unaff_EDI,unaff_ESI);
        *(undefined4 *)(this_00 + 0x6c) = *(undefined4 *)(this_00 + 0x68);
        (this_00)->resetTabs(local_8);
        if ((OISConfiguration::alwaysShowMenu != false) ||
           ((((iVar2 = *(int *)(this_00 + 0x60), iVar2 != 0 &&
              (iVar2 = *(int *)(iVar2 + 0x624 + *(int *)(iVar2 + 0x388) * 4), iVar2 != 0)) &&
             (iVar2 = *(int *)(iVar2 + 300), iVar2 != 0)) && (*(char *)(iVar2 + 6) != '\0')))) {
          *(undefined4 *)(this_00 + 0x78) = 0;
          *(undefined4 *)(this_00 + 0x74) = 3;
        }
        (*(TopBar **)(*(int *)pRVar4 + 0x17c))->resetTabs(*(int *)((char *)this + 0x388));
        iVar2 = *(int *)pRVar4;
        if (((iVar2 != 0) && (*(int *)(iVar2 + 300) != 0)) &&
           (*(char *)(*(int *)(iVar2 + 300) + 6) != '\0')) {
          *(undefined1 *)(*(int *)(iVar2 + 0x17c) + 3) = 1;
          iVar2 = *(int *)pRVar4;
        }
        (*(TopBar **)(iVar2 + 0x17c))->render();
      }
      pRVar4 = pRVar4 + 4;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((*(int *)((char *)this + 0x398) - *(int *)((char *)this + 0x394)) / 0x50));
  }
  return;
}


// Ghidra: void __thiscall RoomObject::generateScreen(RoomObject *this,int param_1)
void RoomObject::generateScreen(int param_1)

{
  char stack0xffffffc0[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  ScreenLayout *pSVar2;
  ScreenInterface *pSVar3;
  int iVar4;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c7324;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  iVar4 = param_1 * 0x50;
  if (*(int *)(iVar4 + *(int *)((char *)this + 0x394)) == 0) {
    ghidra::str::ctor
              ((std::string *)&stack0xffffffc0,
               (std::string *)(*(int *)((char *)this + 0x394) + 0x10 + iVar4));
    pSVar2 = GameData::getScreenLayout();
    if (pSVar2 == (ScreenLayout *)0x0) {
      debugPrint("ERROR","Unknown screen layout: %s");
    }
    pSVar3 = operator_new(0x1a0);
    // [seh] local_8 = 0;
    iVar1 = *(int *)((char *)this + 0x394);
    iVar4 = ScreenInterface::ScreenInterface
                      (pSVar3,this,*(ScreenType *)(iVar1 + iVar4),(bool)((char *)this)[8],
                       *(Sprite3D **)((char *)this + 0x3e4),
                       *(int *)(iVar1 + 8 + *(int *)((char *)this + 0x388) * 0x50),
                       *(int *)(iVar1 + 0xc + iVar4),pSVar2);
    *(int *)(this + param_1 * 4 + 0x624) = iVar4;
  }
  else {
    pSVar3 = operator_new(0x1a0);
    // [seh] local_8 = 1;
    iVar1 = *(int *)((char *)this + 0x394);
    iVar4 = ScreenInterface::ScreenInterface
                      (pSVar3,this,*(ScreenType *)(iVar4 + iVar1),(bool)((char *)this)[8],
                       *(Sprite3D **)((char *)this + 0x3e4),*(int *)(iVar4 + 8 + iVar1),
                       *(int *)(iVar4 + 0xc + iVar1),(ScreenLayout *)0x0);
    *(int *)(this + param_1 * 4 + 0x624) = iVar4;
  }
  *(RoomObject **)(iVar4 + 0x54) = this;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: bool __thiscall RoomObject::isInteractAble(RoomObject *this)
bool RoomObject::isInteractAble()

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char *pcVar6;
  ConversationManager *pCVar7;
  Conversation *pCVar8;
  nothrow_t *pnVar9;
  void *pvVar10;
  uint unaff_EDI;
  undefined4 uVar11;
  undefined4 uVar12;
  std::string local_78 [12];
  undefined4 uStack_6c;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  char *local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c7369;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar6 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  local_14 = pcVar6;
  if ((((((char *)this)[0x448] != (byte)0x0) || (*(int *)((char *)this + 0x61c) != 0)) ||
      (((char *)this)[0x4c] == (byte)0x0)) ||
     (((*(int *)((char *)this + 0x3c) != 5 && (*(int *)((char *)this + 0x3c) != 6)) ||
      ((*(int *)((char *)this + 0x100) == 0 || (((char *)this)[0xfd] != (byte)0x0)))))) goto LAB_0053d167;
  if (g_gameLogic[0x11b] == (byte)0x0) {
    ghidra::str::ctor
              (local_78,(std::string *)(*(int *)(*(int *)((char *)this + 0x100) + 0x1c) + 0xf8));
    uVar12 = 0;
    uVar11 = 0xffffffff;
    // [seh] local_8 = 0;
    pCVar7 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    pCVar8 = (pCVar7)->getConversation(uVar11, uVar12);
    if (pCVar8 == (Conversation *)0x0) goto LAB_0053cfa6;
LAB_0053d042:
    bVar3 = false;
    bVar2 = false;
LAB_0053d045:
    bVar4 = false;
  }
  else {
LAB_0053cfa6:
    if (*(int *)((char *)this + 0x100) == 0) goto LAB_0053d042;
    ghidra::str::ctor
              ((std::string *)local_44,
               (std::string *)(*(int *)(*(int *)((char *)this + 0x100) + 0x1c) + 0xf8));
    // [seh] local_8 = 1;
    bVar3 = true;
    bVar2 = false;
    uStack_6c = 0x53cfef;
    bVar4 = ghidra::lib::_Traits_equal___x28_x29("femalepassenger",0xf,pcVar6,unaff_EDI);
    if (!bVar4) {
      ghidra::str::ctor
                ((std::string *)local_2c,
                 (std::string *)(*(int *)(*(int *)((char *)this + 0x100) + 0x1c) + 0xf8));
      bVar3 = true;
      bVar2 = true;
      uStack_6c = 0x53d02c;
      bVar4 = ghidra::lib::_Traits_equal___x28_x29("malepassenger",0xd,pcVar6,unaff_EDI);
      if (bVar4) {
        bVar4 = true;
        goto LAB_0053d049;
      }
      goto LAB_0053d045;
    }
    bVar4 = true;
  }
LAB_0053d049:
  if ((bVar2) && (0xf < local_18)) {
    pnVar9 = (nothrow_t *)(local_18 + 1);
    pvVar10 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar10 = *(void **)((int)local_2c[0] + -4);
      pnVar9 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_6c = 0x53d083;
    operator_delete(pvVar10,pnVar9);
  }
  // [seh] local_8 = 0xffffffff;
  if ((bVar3) && (0xf < local_30)) {
    pnVar9 = (nothrow_t *)(local_30 + 1);
    pvVar10 = local_44[0];
    if ((nothrow_t *)0xfff < pnVar9) {
      pvVar10 = *(void **)((int)local_44[0] + -4);
      pnVar9 = (nothrow_t *)(local_30 + 0x24);
      if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar10))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_6c = 0x53d0c7;
    operator_delete(pvVar10,pnVar9);
  }
  if ((((bVar4) && (piVar1 = *(int **)(g_gameData + 0x128), piVar1 != (int *)0x0)) && (*piVar1 != 0)
      ) && (((char)piVar1[0x24] == '\0' && (-1 < *(int *)(*piVar1 + 0x5c))))) {
    local_78[0] = (std::string)0x0;
    ghidra::str::assign(local_78,"passenger",9);
    // [seh] local_8 = 2;
    uVar12 = 0;
    uVar11 = *(undefined4 *)(**(int **)(g_gameData + 0x128) + 0x5c);
    pCVar7 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    (pCVar7)->getConversation(uVar11, uVar12);
  }
LAB_0053d167:
  // [seh] ExceptionList = local_10;
  // [cookie] uVar5 = __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


// Ghidra: void __thiscall RoomObject::resetScreen(RoomObject *this,bool param_1)
void RoomObject::resetScreen(bool param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c7399;
  // [seh] local_10 = ExceptionList;
  // [cookie] uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)((char *)this + 0x3c) == 4) {
    iVar4 = 0;
    pcVar3 = (char *)(*(int *)((char *)this + 0x394) + 5);
    while ((pcVar3[-1] == '\0' || (*pcVar3 != '\0'))) {
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 0x50;
      if (9 < iVar4) {
        return;
      }
    }
    iVar4 = *(int *)((char *)this + 0x388);
    if (*(char *)(*(int *)((char *)this + 0x394) + 4 + iVar4 * 0x50) != '\0') {
      // [seh] ExceptionList = &local_10;
      if (*(int *)(this + iVar4 * 4 + 0x624) == 0) {
        generateScreen(this,iVar4);
        iVar4 = *(int *)((char *)this + 0x388);
      }
      iVar1 = *(int *)(this + iVar4 * 4 + 0x624);
      if (iVar1 == 0) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(iVar1 + 0x16c);
        uVar5 = *(undefined4 *)(iVar1 + 0x168);
      }
      // [seh] local_8 = 0;
      resetTopBar(this,SUB41(iVar4,0));
      iVar4 = *(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624);
      *(undefined4 *)(iVar4 + 0x168) = uVar5;
      *(undefined4 *)(iVar4 + 0x16c) = uVar6;
      *(undefined4 *)(*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) + 0x11c) =
           *(undefined4 *)((char *)this + 0x3e4);
      iVar4 = *(int *)((char *)this + 0x388);
      iVar1 = *(int *)(*(int *)((char *)this + 0x394) + 0xc + iVar4 * 0x50);
      uVar6 = *(undefined4 *)(*(int *)((char *)this + 0x394) + 8 + iVar4 * 0x50);
      iVar4 = *(int *)(this + iVar4 * 4 + 0x624);
      *(undefined4 *)(iVar4 + 0x60) = uVar6;
      *(int *)(iVar4 + 100) = iVar1;
      *(undefined4 *)(iVar4 + 0x68) = uVar6;
      if (*(char *)(iVar4 + 0x51) == '\0') {
        *(int *)(iVar4 + 0x6c) = iVar1;
      }
      else {
        *(int *)(iVar4 + 0x6c) = iVar1 + 0xc;
      }
      iVar4 = *(int *)(iVar4 + 0x17c);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x54) = uVar6;
        *(undefined4 *)(iVar4 + 0x58) = 0xc;
      }
      *(undefined1 *)(*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) + 0x70) = 1;
      (**(code **)(**(int **)(*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) + 300) + 0xc))
                (uVar2);
      iVar4 = *(int *)((char *)this + 0x388);
      iVar1 = *(int *)(this + iVar4 * 4 + 0x624);
      if ((float)*(int *)(iVar1 + 0x68) <= *(float *)(iVar1 + 0x168)) {
        *(float *)(iVar1 + 0x168) = (float)(*(int *)(iVar1 + 0x68) + -1);
        iVar4 = *(int *)((char *)this + 0x388);
      }
      iVar4 = *(int *)(this + iVar4 * 4 + 0x624);
      if ((float)*(int *)(iVar4 + 0x6c) <= *(float *)(iVar4 + 0x16c)) {
        *(float *)(iVar4 + 0x16c) = (float)(*(int *)(iVar4 + 0x6c) + -1);
      }
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall RoomObject::resetTopBars(RoomObject *this,bool param_1)
void RoomObject::resetTopBars(bool param_1)

{
  TopBar *pTVar1;
  int iVar2;
  ScreenTab *extraout_ECX;
  ScreenTab *extraout_ECX_00;
  allocator<ScreenTab> *unaff_ESI;
  RoomObject *pRVar3;
  ScreenTab *unaff_EDI;
  uint local_8;
  
  local_8 = 0;
  iVar2 = *(int *)((char *)this + 0x398) - *(int *)((char *)this + 0x394) >> 0x1f;
  if ((*(int *)((char *)this + 0x398) - *(int *)((char *)this + 0x394)) / 0x50 + iVar2 != iVar2) {
    pRVar3 = this + 0x624;
    do {
      pTVar1 = *(TopBar **)(*(int *)pRVar3 + 0x17c);
      if (pTVar1 != (TopBar *)0x0) {
        (pTVar1)->cleanupRender();
        ghidra::lib::_Destroy_range___x28_x29(extraout_ECX,unaff_EDI,unaff_ESI);
        *(undefined4 *)(pTVar1 + 0x6c) = *(undefined4 *)(pTVar1 + 0x68);
        pTVar1 = *(TopBar **)(*(int *)pRVar3 + 0x17c);
        *(RoomObject **)(pTVar1 + 0x60) = this;
        (pTVar1)->cleanupRender();
        ghidra::lib::_Destroy_range___x28_x29(extraout_ECX_00,unaff_EDI,unaff_ESI);
        *(undefined4 *)(pTVar1 + 0x6c) = *(undefined4 *)(pTVar1 + 0x68);
        (pTVar1)->resetTabs(local_8);
        if ((OISConfiguration::alwaysShowMenu != false) ||
           ((((iVar2 = *(int *)(pTVar1 + 0x60), iVar2 != 0 &&
              (iVar2 = *(int *)(iVar2 + 0x624 + *(int *)(iVar2 + 0x388) * 4), iVar2 != 0)) &&
             (iVar2 = *(int *)(iVar2 + 300), iVar2 != 0)) && (*(char *)(iVar2 + 6) != '\0')))) {
          *(undefined4 *)(pTVar1 + 0x78) = 0;
          *(undefined4 *)(pTVar1 + 0x74) = 3;
        }
        recheckTabs(this);
        (*(TopBar **)(*(int *)pRVar3 + 0x17c))->resetTabs(*(int *)((char *)this + 0x388));
        (*(TopBar **)(*(int *)pRVar3 + 0x17c))->render();
      }
      pRVar3 = pRVar3 + 4;
      local_8 = local_8 + 1;
    } while (local_8 < (uint)((*(int *)((char *)this + 0x398) - *(int *)((char *)this + 0x394)) / 0x50));
  }
  return;
}


// Ghidra: void __thiscall RoomObject::resetTopBar(RoomObject *this,bool param_1)
void RoomObject::resetTopBar(bool param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  iVar3 = *(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624);
  if (((iVar3 != 0) && (*(char *)(iVar3 + 0x51) != '\0')) && (*(int *)(iVar3 + 0x17c) != 0)) {
    recheckTabs(this);
    iVar3 = *(int *)(*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) + 0x17c);
    *(undefined4 *)(iVar3 + 0x78) = 0;
    *(undefined4 *)(iVar3 + 0x74) = 2;
    *(undefined4 *)(iVar3 + 0x7c) = 0x3fb33333;
    iVar4 = **(int **)(iVar3 + 0x2c);
    iVar5 = (**(code **)(iVar4 + 0xb0))();
    fVar1 = *(float *)(iVar5 + 4);
    fVar2 = *(float *)(iVar3 + 0x78);
    pfVar6 = (float *)(**(code **)(**(int **)(iVar3 + 0x2c) + 0xb0))();
    (**(code **)(iVar4 + 0x48))(*pfVar6 * 0.5,fVar1 * 0.5 - fVar2);
    (*(TopBar **)(*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) + 0x17c))->resetTabs(*(int *)((char *)this + 0x388));
    (*(TopBar **)(*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) + 0x17c))->render();
  }
  return;
}


// Ghidra: basic_string<> * __thiscall RoomObject::describe(RoomObject *this)
std::string * RoomObject::describe()

{
  int iVar1;
  RoomObject *pRVar2;
  std::string *in_stack_00000004;
  
  if (((char *)this)[0x449] != (byte)0x0) {
    strUsingArgs((char *)in_stack_00000004,"COLLIDER for object ID %d",*(undefined4 *)((char *)this + 0x54))
    ;
    return in_stack_00000004;
  }
  iVar1 = *(int *)((char *)this + 0x3c);
  if (iVar1 == 0) {
    pRVar2 = this + 0x104;
    if (0xf < *(uint *)((char *)this + 0x118)) {
      pRVar2 = *(RoomObject **)pRVar2;
    }
    strUsingArgs((char *)in_stack_00000004,"Model (\'%s\')",pRVar2);
    return in_stack_00000004;
  }
  if (iVar1 == 1) {
    strUsingArgs((char *)in_stack_00000004,"Direction light (intensity \'%f\')",
                 (double)*(float *)((char *)this + 0x3ac));
    return in_stack_00000004;
  }
  if (iVar1 == 2) {
    strUsingArgs((char *)in_stack_00000004,"Point light (intensity \'%f\')",
                 (double)*(float *)((char *)this + 0x3ac));
    return in_stack_00000004;
  }
  if (iVar1 == 3) {
    strUsingArgs((char *)in_stack_00000004,"Spotlight light (intensity \'%f\')",
                 (double)*(float *)((char *)this + 0x3ac));
    return in_stack_00000004;
  }
  if (iVar1 == 4) {
    pRVar2 = this + *(int *)((char *)this + 0x7c) * 0x18 + 0x104;
    if (0xf < *(uint *)(pRVar2 + 0x14)) {
      pRVar2 = *(RoomObject **)pRVar2;
    }
    strUsingArgs((char *)in_stack_00000004,"Screen (\'%s\')",pRVar2);
    return in_stack_00000004;
  }
  if (iVar1 == 5) {
    pRVar2 = this + *(int *)((char *)this + 0x7c) * 0x18 + 0x104;
    if (0xf < *(uint *)(pRVar2 + 0x14)) {
      pRVar2 = *(RoomObject **)pRVar2;
    }
    strUsingArgs((char *)in_stack_00000004,"Character (\'%s\')",pRVar2);
    return in_stack_00000004;
  }
  if (iVar1 == 6) {
    pRVar2 = this + 0x58;
    if (0xf < *(uint *)((char *)this + 0x6c)) {
      pRVar2 = *(RoomObject **)pRVar2;
    }
    strUsingArgs((char *)in_stack_00000004,"Spawn Point (\'%s\')",pRVar2);
    return in_stack_00000004;
  }
  *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
  *in_stack_00000004 = (std::string)0x0;
  ghidra::str::assign(in_stack_00000004,"ERROR",5);
  return in_stack_00000004;
}


// Ghidra: void __thiscall RoomObject::resetPosition(RoomObject *this)
void RoomObject::resetPosition()

{
  if ((((*(float *)((char *)this + 0x350) != 0.0) || (*(float *)((char *)this + 0x354) != 0.0)) ||
      (*(float *)((char *)this + 0x358) != 0.0)) && (*(float *)((char *)this + 0x334) <= 0.0)) {
    *(undefined8 *)((char *)this + 800) = *(undefined8 *)((char *)this + 0x2f0);
    *(undefined4 *)((char *)this + 0x328) = *(undefined4 *)((char *)this + 0x2f8);
    *(undefined8 *)((char *)this + 0x340) = *(undefined8 *)((char *)this + 0x350);
    *(undefined4 *)((char *)this + 0x348) = *(undefined4 *)((char *)this + 0x358);
    *(undefined4 *)((char *)this + 0x334) = 0;
    updatePosition(this);
    return;
  }
  return;
}


// Ghidra: void __thiscall RoomObject::movePosition(RoomObject *this)
void RoomObject::movePosition()

{
  GameData *pGVar1;
  SoundEngine *pSVar2;
  Ship *pSVar3;
  char *pcVar4;
  int *piVar5;
  RoomObject RVar6;
  char *pcVar7;
  Sound SVar8;
  int iVar9;
  
  if (((*(float *)((char *)this + 0x350) == 0.0) && (*(float *)((char *)this + 0x354) == 0.0)) &&
     (*(float *)((char *)this + 0x358) == 0.0)) {
    return;
  }
  if (0.0 < *(float *)((char *)this + 0x334)) {
    return;
  }
  if (((char *)this)[0x34c] == (byte)0x0) {
    SVar8 = *(Sound *)((char *)this + 0x32c);
    if (SVar8 != 0) {
      pSVar3 = ShipData::currentlyBoardedShip;
      if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
        pSVar3 = *(Ship **)(g_gameData + 0xd0);
      }
      iVar9 = -1;
      pSVar2 = ghidra::any_singleton();
      (pSVar2)->playSound(pSVar3, SVar8, iVar9);
    }
    RVar6 = (byte)0x1;
  }
  else {
    SVar8 = *(Sound *)((char *)this + 0x330);
    if (SVar8 != 0) {
      pSVar3 = ShipData::currentlyBoardedShip;
      if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
        pSVar3 = *(Ship **)(g_gameData + 0xd0);
      }
      iVar9 = -1;
      pSVar2 = ghidra::any_singleton();
      (pSVar2)->playSound(pSVar3, SVar8, iVar9);
    }
    RVar6 = (byte)0x0;
  }
  *(undefined8 *)((char *)this + 800) = *(undefined8 *)((char *)this + 0x2f0);
  *(undefined4 *)((char *)this + 0x328) = *(undefined4 *)((char *)this + 0x2f8);
  *(undefined8 *)((char *)this + 0x340) = *(undefined8 *)((char *)this + 0x350);
  *(undefined4 *)((char *)this + 0x348) = *(undefined4 *)((char *)this + 0x358);
  ((char *)this)[0x34c] = RVar6;
  pGVar1 = g_gameData;
  if (*(int *)((char *)this + 0x31c) == 1) {
    *(byte *)(*(int *)(g_gameData + 0xd0) + 0x280) = (byte)RVar6 ^ 1;
    iVar9 = *(int *)(pGVar1 + 0xd0);
    piVar5 = (int *)(iVar9 + 8);
    if (0xf < *(uint *)(iVar9 + 0x1c)) {
      piVar5 = (int *)*piVar5;
    }
    pcVar4 = "sealed";
    if (*(char *)(iVar9 + 0x280) == '\0') {
      pcVar4 = "open";
    }
    pcVar7 = "%s inner airlock is %s";
  }
  else {
    if (*(int *)((char *)this + 0x31c) != 2) goto LAB_0053d9b6;
    *(byte *)(*(int *)(g_gameData + 0xd0) + 0x281) = (byte)RVar6 ^ 1;
    iVar9 = *(int *)(pGVar1 + 0xd0);
    piVar5 = (int *)(iVar9 + 8);
    if (0xf < *(uint *)(iVar9 + 0x1c)) {
      piVar5 = (int *)*piVar5;
    }
    pcVar4 = "sealed";
    if (*(char *)(iVar9 + 0x281) == '\0') {
      pcVar4 = "open";
    }
    pcVar7 = "%s outer airlock is %s";
  }
  debugPrint("DETAIL",pcVar7,piVar5,pcVar4);
LAB_0053d9b6:
  *(undefined4 *)((char *)this + 0x334) = *(undefined4 *)((char *)this + 0x338);
  *(undefined4 *)((char *)this + 0x33c) = *(undefined4 *)((char *)this + 0x338);
  return;
}


// Ghidra: void __thiscall RoomObject::updatePosition(RoomObject *this)
void RoomObject::updatePosition()

{
  Vec3 *pVVar1;
  Vec3 local_70 [12];
  Vec3 local_64 [12];
  Vec3 local_58 [12];
  Vec3 local_4c [12];
  Vec3 local_40 [12];
  Vec3 local_34 [12];
  Vec3 local_28 [12];
  Vec3 local_1c [12];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c7408;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  if (((char *)this)[0x34c] != (byte)0x0) {
    cocos2d::Vec3::operator*((Vec3 *)((char *)this + 0x340),(float)local_58);
    // [seh] local_8 = 0;
    pVVar1 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 800),local_4c);
    // [seh] local_8._0_1_ = 1;
    cocos2d::Vec3::operator+(pVVar1,local_1c);
    // [seh] local_8._0_1_ = 2;
    cocos2d::Vec3::operator*(local_1c,(float)local_28);
    cocos2d::Vec3::~Vec3(local_1c);
    // [seh] local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))(local_28);
    cocos2d::Vec3::~Vec3(local_28);
    cocos2d::Vec3::~Vec3(local_4c);
    cocos2d::Vec3::~Vec3(local_58);
    // [seh] ExceptionList = local_10;
    return;
  }
  cocos2d::Vec3::operator*((Vec3 *)((char *)this + 0x340),(float)local_70);
  // [seh] local_8 = 4;
  pVVar1 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 800),local_64);
  // [seh] local_8._0_1_ = 5;
  cocos2d::Vec3::operator+(pVVar1,local_34);
  // [seh] local_8._0_1_ = 6;
  cocos2d::Vec3::operator*(local_34,(float)local_40);
  cocos2d::Vec3::~Vec3(local_34);
  // [seh] local_8 = CONCAT31(local_8._1_3_,7);
  (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))(local_40);
  cocos2d::Vec3::~Vec3(local_40);
  cocos2d::Vec3::~Vec3(local_64);
  cocos2d::Vec3::~Vec3(local_70);
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall RoomObject::recheckTabs(RoomObject *this)
void RoomObject::recheckTabs()

{
  bool bVar1;
  PresentationInterface *pPVar2;
  int iVar3;
  int iVar4;
  std::string local_34 [16];
  undefined4 local_24;
  uint local_8;
  
  if (*(int *)((char *)this + 0x3c) == 4) {
    iVar4 = *(int *)((char *)this + 0x394);
    local_8 = 0;
    iVar3 = *(int *)((char *)this + 0x398) - iVar4 >> 0x1f;
    if ((*(int *)((char *)this + 0x398) - iVar4) / 0x50 + iVar3 != iVar3) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + 0x4c + iVar4) != 0) {
          local_24 = 0;
          local_34[0] = (std::string)0x0;
          ghidra::str::assign(local_34,"",0);
          bVar1 = ghidra::lib::_Func_class__operator_x28_x29
                            ((ghidra::func_class *)(*(int *)((char *)this + 0x394) + 0x28 + iVar3),
                             *(undefined4 *)(g_gameData + 0xd0),0);
          if (bVar1 != (bool)*(char *)(iVar3 + 4 + *(int *)((char *)this + 0x394))) {
            *(bool *)(iVar3 + 4 + *(int *)((char *)this + 0x394)) = bVar1;
          }
        }
        iVar4 = *(int *)((char *)this + 0x394);
        iVar3 = iVar3 + 0x50;
        local_8 = local_8 + 1;
      } while (local_8 < (uint)((*(int *)((char *)this + 0x398) - iVar4) / 0x50));
    }
    if (*(char *)(iVar4 + 4 + *(int *)((char *)this + 0x388) * 0x50) == '\0') {
      nextValidScreen(this);
      local_24 = 0x53dc63;
      resetScreen(this,false);
      if (((*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) == 0) ||
          (iVar4 = *(int *)(*(int *)(this + *(int *)((char *)this + 0x388) * 4 + 0x624) + 0x180), iVar4 == 0
          )) || (*(char *)(iVar4 + 0x59) == '\0')) {
        if (g_gameLogic[0x73] != (byte)0x0) {
          g_gameLogic[0x73] = (byte)0x0;
        }
      }
      else if (g_gameLogic[0x73] == (byte)0x0) {
        g_gameLogic[0x73] = (byte)0x1;
      }
      pPVar2 = ghidra::any_singleton();
      iVar4 = *(int *)(pPVar2 + 0x34c);
      if (iVar4 != 0) {
        *(undefined4 *)(pPVar2 + 0x354) =
             *(undefined4 *)(iVar4 + 0x624 + *(int *)(iVar4 + 0x388) * 4);
      }
    }
  }
  return;
}


// Ghidra: void __thiscall RoomObject::runLogic(RoomObject *this,float param_1)
void RoomObject::runLogic(float param_1)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  RoomObject *pRVar1;
  float *pfVar2;
  bool bVar3;
  uchar uVar4;
  char *pcVar5;
  ConversationManager *pCVar6;
  Conversation *pCVar7;
  CharacterAnimationManager *pCVar8;
  std::string *pbVar9;
  int iVar10;
  PresentationInterface *pPVar11;
  uint uVar12;
  undefined8 *puVar13;
  Vec3 *pVVar14;
  RoomCharacter *this_00;
  uint unaff_EDI;
  float10 fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  PresentationInterface aPStack_70 [8];
  undefined4 uStack_68;
  Conversation *pCVar20;
  Vec3 local_48 [12];
  Vec3 local_3c [12];
  Vec3 local_30 [12];
  Vec3 local_24 [12];
  PresentationInterface *local_18;
  undefined4 local_14;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] local_8 = 0xffffffff;
  // [seh] puStack_c = &DAT_005c7477;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  if (*(int *)((char *)this + 0x3c) == 6) {
    if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
      local_14 = operator_new(0x418);
      // [seh] local_8 = 0;
      ghidra::Singleton<void>::instance =
           (PresentationInterface *)new ((void *)(local_14)) PresentationInterface();
    }
    // [seh] local_8 = 0xffffffff;
    if (*(int *)(ghidra::Singleton<void>::instance + 0x3b0) != -1) goto LAB_0053deda;
    bVar3 = isInteractAble(this);
    if (!bVar3) goto LAB_0053df5a;
    local_14 = aPStack_70;
    local_18 = aPStack_70;
    ghidra::str::ctor
              ((std::string *)aPStack_70,
               (std::string *)(*(int *)(*(int *)((char *)this + 0x100) + 0x1c) + 0xf8));
    uVar19 = 0;
    uVar18 = 0xffffffff;
    // [seh] local_8 = 1;
    pCVar6 = ghidra::any_singleton();
    // [seh] local_8 = 0xffffffff;
    pCVar7 = (pCVar6)->getConversation(uVar18, uVar19);
    fVar16 = *(float *)((char *)this + 0xf4);
    *(float *)((char *)this + 0xf4) = fVar16 - param_1;
    if (fVar16 - param_1 <= 0.0) {
      if (pCVar7 != (Conversation *)0x0) {
        pCVar20 = pCVar7 + 0x44;
        bVar3 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar5,unaff_EDI);
        if (!bVar3) {
          pCVar8 = ghidra::any_singleton();
          pbVar9 = ghidra::lib::map__operator_x5b_x5d((ghidra::lib::map_t *)(pCVar8 + 0x18),(std::string *)pCVar20);
          ghidra::lib::basic_string__operator_x3d((std::string *)((char *)this + 200),(std::string *)pbVar9);
        }
      }
      iVar10 = rand();
      *(float *)((char *)this + 0xf4) = (float)(iVar10 % 10 + 7);
    }
    if (pCVar7 == (Conversation *)0x0) goto LAB_0053df5a;
    if (((char *)this)[0xec] == (byte)0x0) {
      fVar16 = *(float *)((char *)this + 0xf0) + param_1;
      *(float *)((char *)this + 0xf0) = fVar16;
      if (0.6 <= fVar16) {
        ((char *)this)[0xec] = (byte)0x1;
        *(undefined4 *)((char *)this + 0xf0) = 0x3f19999a;
      }
    }
    else {
      fVar16 = *(float *)((char *)this + 0xf0) - param_1;
      *(float *)((char *)this + 0xf0) = fVar16;
      if (fVar16 <= 0.0) {
        *(undefined4 *)((char *)this + 0xf0) = 0;
        ((char *)this)[0xec] = (byte)0x0;
      }
    }
    pPVar11 = ghidra::any_singleton();
    if ((*(int *)(pPVar11 + 0x408) != 0) &&
       (pPVar11 = ghidra::any_singleton(), *(RoomObject **)(pPVar11 + 0x408) == this))
    goto LAB_0053df5a;
    iVar10 = **(int **)((char *)this + 0x3dc);
    uVar4 = (uchar)(int)((*(float *)((char *)this + 0xf0) / 0.6) * 175.0 + 80.0);
  }
  else {
LAB_0053deda:
    // [seh] local_8 = 0xffffffff;
    if (*(int *)((char *)this + 0x3dc) == 0) goto LAB_0053df5a;
    if (ghidra::Singleton<void>::instance == (PresentationInterface *)0x0) {
      local_18 = operator_new(0x418);
      // [seh] local_8 = 2;
      ghidra::Singleton<void>::instance =
           (PresentationInterface *)new ((void *)(local_18)) PresentationInterface();
    }
    // [seh] local_8 = 0xffffffff;
    if (((*(RoomObject **)(ghidra::Singleton<void>::instance + 0x408) != (RoomObject *)0x0) &&
        (*(RoomObject **)(ghidra::Singleton<void>::instance + 0x408) == this)) &&
       (pPVar11 = ghidra::any_singleton(), *(int *)(pPVar11 + 0x3b0) == -1)) goto LAB_0053df5a;
    uVar4 = 0xff;
    iVar10 = **(int **)((char *)this + 0x3dc);
  }
  uStack_68 = 0x53df4d;
  cocos2d::Color3B::Color3B((Color3B *)((int)&local_14 + 1),uVar4,0xff,0xff);
  (**(code **)(iVar10 + 0x25c))();
LAB_0053df5a:
  recheckTabs(this);
  if (*(float *)((char *)this + 0x334) <= 0.0) {
    if (*(float *)((char *)this + 0x438) != 0.0) {
      pVVar14 = (Vec3 *)((char *)this + 0x3f8);
      pRVar1 = this + 0x404;
      if (((*(float *)((char *)this + 0x3f8) == *(float *)((char *)this + 0x404)) &&
          (*(float *)((char *)this + 0x3fc) == *(float *)((char *)this + 0x408))) &&
         (*(float *)((char *)this + 0x400) == *(float *)((char *)this + 0x40c))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        fVar16 = *(float *)((char *)this + 0x43c);
        fVar17 = *(float *)((char *)this + 0x434) + param_1;
        *(float *)((char *)this + 0x434) = fVar17;
        if (fVar17 <= fVar16) {
          fVar17 = fVar17 / fVar16;
          *(float *)pRVar1 = *(float *)((char *)this + 0x410) * fVar17 * param_1 + *(float *)pRVar1;
          *(float *)((char *)this + 0x408) =
               *(float *)((char *)this + 0x414) * fVar17 * param_1 + *(float *)((char *)this + 0x408);
          *(float *)((char *)this + 0x40c) =
               *(float *)((char *)this + 0x418) * fVar17 * param_1 + *(float *)((char *)this + 0x40c);
        }
        else {
          *(float *)((char *)this + 0x434) = fVar16;
          *(undefined8 *)pRVar1 = *(undefined8 *)pVVar14;
          *(undefined4 *)((char *)this + 0x40c) = *(undefined4 *)((char *)this + 0x400);
        }
      }
      else {
        *(undefined4 *)((char *)this + 0x434) = 0;
        uVar12 = rand();
        uVar12 = uVar12 & 0x80000001;
        bVar3 = uVar12 == 0;
        if ((int)uVar12 < 0) {
          bVar3 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar3) {
          fVar16 = 0.0 - *(float *)((char *)this + 0x438);
        }
        else {
          fVar16 = *(float *)((char *)this + 0x438);
        }
        *(float *)pVVar14 = fVar16;
        uVar12 = rand();
        uVar12 = uVar12 & 0x80000001;
        bVar3 = uVar12 == 0;
        if ((int)uVar12 < 0) {
          bVar3 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar3) {
          fVar16 = 0.0 - *(float *)((char *)this + 0x438);
        }
        else {
          fVar16 = *(float *)((char *)this + 0x438);
        }
        *(float *)((char *)this + 0x3fc) = fVar16;
        uVar12 = rand();
        uVar12 = uVar12 & 0x80000001;
        bVar3 = uVar12 == 0;
        if ((int)uVar12 < 0) {
          bVar3 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar3) {
          fVar16 = 0.0 - *(float *)((char *)this + 0x438);
        }
        else {
          fVar16 = *(float *)((char *)this + 0x438);
        }
        *(float *)((char *)this + 0x400) = fVar16;
        puVar13 = (undefined8 *)cocos2d::Vec3::operator-(pVVar14,local_3c);
        *(undefined8 *)((char *)this + 0x410) = *puVar13;
        *(undefined4 *)((char *)this + 0x418) = *(undefined4 *)(puVar13 + 1);
        cocos2d::Vec3::~Vec3(local_3c);
      }
      pVVar14 = (Vec3 *)cocos2d::Vec3::operator+((Vec3 *)((char *)this + 800),local_48);
      // [seh] local_8 = 4;
      cocos2d::Vec3::operator+(pVVar14,local_24);
      // [seh] local_8._0_1_ = 5;
      cocos2d::Vec3::operator*(local_24,(float)local_30);
      cocos2d::Vec3::~Vec3(local_24);
      // [seh] local_8 = CONCAT31(local_8._1_3_,6);
      (**(code **)(**(int **)((char *)this + 0x3dc) + 0x78))();
      cocos2d::Vec3::~Vec3(local_30);
      // [seh] local_8 = 0xffffffff;
      cocos2d::Vec3::~Vec3(local_48);
    }
  }
  else {
    fVar16 = *(float *)((char *)this + 0x334) - param_1;
    *(float *)((char *)this + 0x334) = fVar16;
    if (fVar16 <= 0.0) {
      *(undefined4 *)((char *)this + 0x334) = 0;
    }
    updatePosition(this);
  }
  if (0.0 < *(float *)((char *)this + 0x444)) {
    fVar15 = (float10)(**(code **)(**(int **)((char *)this + 0x3dc) + 0xc0))();
    local_14 = (PresentationInterface *)(float)fVar15;
    (**(code **)(**(int **)((char *)this + 0x3dc) + 0xbc))();
  }
  pfVar2 = *(float **)((char *)this + 0x100);
  if (pfVar2 != (float *)0x0) {
    if (pfVar2[4] == -1.0) {
      if (*(char *)((int)pfVar2 + 0xd) == '\0') {
        iVar10 = rand();
        *(undefined1 *)((int)pfVar2 + 0xd) = 1;
        fVar16 = ((float)(iVar10 % 100) / 100.0) * 0.4 + 3.8;
      }
      else {
        iVar10 = rand();
        *(undefined1 *)((int)pfVar2 + 0xd) = 0;
        fVar16 = ((float)(iVar10 % 100) / 100.0) * 0.1 + 0.1;
      }
      pfVar2[4] = fVar16;
      if ((undefined1 *)pfVar2[7] != (undefined1 *)0x0) {
        *(undefined1 *)pfVar2[7] = 1;
      }
    }
    fVar16 = pfVar2[4];
    pfVar2[4] = fVar16 - param_1;
    if (fVar16 - param_1 <= 0.0) {
      pfVar2[4] = (float)&DAT_bf800000;
    }
    if (((undefined1 *)pfVar2[7])[10] == '\0') {
      if (*(char *)((int)pfVar2 + 0xe) != '\0') {
        *(undefined1 *)((int)pfVar2 + 0xe) = 0;
        *(undefined1 *)pfVar2[7] = 1;
      }
    }
    else {
      if (pfVar2[5] == -1.0) {
        if (*(char *)((int)pfVar2 + 0xe) == '\0') {
          iVar10 = rand();
          *(undefined1 *)((int)pfVar2 + 0xe) = 1;
          fVar16 = ((float)(iVar10 % 100) / 100.0) * 0.1 + 0.4;
        }
        else {
          iVar10 = rand();
          *(undefined1 *)((int)pfVar2 + 0xe) = 0;
          fVar16 = ((float)(iVar10 % 100) / 100.0) * 0.1 + 0.1;
        }
        pfVar2[5] = fVar16;
        *(undefined1 *)pfVar2[7] = 1;
      }
      fVar16 = pfVar2[5];
      pfVar2[5] = fVar16 - param_1;
      if (fVar16 - param_1 <= 0.0) {
        pfVar2[5] = (float)&DAT_bf800000;
      }
    }
    if (pfVar2[1] != -NAN) {
      fVar16 = *pfVar2 + param_1;
      *pfVar2 = fVar16;
      if (0.25 <= fVar16) {
        pfVar2[2] = (float)((int)pfVar2[2] + 1);
        *pfVar2 = fVar16 - 0.25;
        if (1 < (int)pfVar2[2]) {
          pfVar2[2] = 0.0;
        }
        *(undefined1 *)(pfVar2 + 3) = 1;
      }
    }
    this_00 = *(RoomCharacter **)((char *)this + 0x100);
    if (**(char **)(this_00 + 0x1c) != '\0') {
      (this_00)->setTextures(this);
      **(undefined1 **)(*(int *)((char *)this + 0x100) + 0x1c) = 0;
      this_00 = *(RoomCharacter **)((char *)this + 0x100);
    }
    if (this_00[0xc] != (byte)0x0) {
      (this_00)->setTextures(this);
      *(undefined1 *)(*(int *)((char *)this + 0x100) + 0xc) = 0;
    }
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall RoomObject::clearTextureElements(RoomObject *this)
void RoomObject::clearTextureElements()

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)((char *)this + 0x65c);
  if (*(int *)((char *)this + 0x660) - iVar1 >> 2 != 0) {
    do {
      cocos2d::Ref::autorelease(*(Ref **)(*(int *)(*(int *)((char *)this + 0x65c) + uVar2 * 4) + 0x18));
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((char *)this + 0x65c);
    } while (uVar2 < (uint)(*(int *)((char *)this + 0x660) - iVar1 >> 2));
  }
  *(int *)((char *)this + 0x660) = iVar1;
  return;
}


// Ghidra: void __thiscall RoomObject::addTextureElement(RoomObject *this,undefined4 param_2,undefined4 *param_3)
void RoomObject::addTextureElement(undefined4 param_2, undefined4 * param_3)

{
  AnimationFrames **ppAVar1;
  std::string *this_00;
  undefined4 *puVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  uint in_stack_0000001c;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  std::string *local_18 [2];
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c74bf;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  this_00 = operator_new(0x1c);
  // [seh] local_8._0_1_ = 1;
  local_18[0] = this_00;
  ghidra::str::ctor((std::string *)local_30,(std::string *)&param_3);
  // [seh] local_8._0_1_ = 2;
  ghidra::str::ctor(this_00,(std::string *)local_30);
  *(undefined4 *)(this_00 + 0x18) = param_2;
  // [seh] local_8._0_1_ = 1;
  if (0xf < local_1c) {
    pnVar4 = (nothrow_t *)(local_1c + 1);
    pvVar3 = local_30[0];
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)local_30[0] + -4);
      pnVar4 = (nothrow_t *)(local_1c + 0x24);
      if (0x1f < (uint)((int)local_30[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  ppAVar1 = *(AnimationFrames ***)((char *)this + 0x660);
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  if (*(AnimationFrames ***)((char *)this + 0x664) == ppAVar1) {
    local_18[0] = this_00;
    ghidra::lib::vector___Emplace_reallocate
              ((ghidra::vector *)((char *)this + 0x65c),ppAVar1,(AnimationFrames **)local_18);
  }
  else {
    *ppAVar1 = (AnimationFrames *)this_00;
    *(int *)((char *)this + 0x660) = *(int *)((char *)this + 0x660) + 4;
    local_18[0] = this_00;
  }
  puVar2 = &param_3;
  if (0xf < in_stack_0000001c) {
    puVar2 = param_3;
  }
  debugPrint("DETAIL","Added element \'%s\'",puVar2);
  if (0xf < in_stack_0000001c) {
    pnVar4 = (nothrow_t *)(in_stack_0000001c + 1);
    puVar2 = param_3;
    if ((nothrow_t *)0xfff < pnVar4) {
      puVar2 = (undefined4 *)param_3[-1];
      pnVar4 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)puVar2))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(puVar2,pnVar4);
  }
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: Sprite * __thiscall RoomObject::getTextureElement(RoomObject *this,char *param_2)
Sprite * RoomObject::getTextureElement(char * param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  Sprite *pSVar8;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)((char *)this + 0x65c);
  uVar6 = *(int *)((char *)this + 0x660) - iVar1 >> 2;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = ghidra::lib::_Traits_equal___x28_x29(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pSVar8 = *(Sprite **)(*(int *)(*(int *)(iVar1 + uVar7 * 4) + 0x18) + 0x2ec);
        goto LAB_0053e638;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  pSVar8 = (Sprite *)0x0;
LAB_0053e638:
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = pcVar2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pcVar4 = *(char **)(pcVar2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar5);
  }
  return pSVar8;
}


// Ghidra: void __thiscall RoomObject::unsetCharacter(RoomObject *this)
void RoomObject::unsetCharacter()

{
  ghidra::lib::_Tree_t *this_00;
  void *pvVar1;
  int iVar2;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  // [seh] undefined4 local_8;
  
  // [seh] puStack_c = &DAT_005b18f0;
  // [seh] local_10 = ExceptionList;
  // [seh] ExceptionList = &local_10;
  pvVar1 = *(void **)((char *)this + 0x100);
  if (pvVar1 != (void *)0x0) {
    iVar2 = *(int *)((int)pvVar1 + 0x20);
    this_00 = (ghidra::lib::_Tree_t *)((int)pvVar1 + 0x20);
    // [seh] local_8 = 0;
    ghidra::lib::_Tree___Erase(this_00,*(ghidra::lib::_Tree_node_t **)(iVar2 + 4));
    *(int *)(*(int *)this_00 + 4) = iVar2;
    **(int **)this_00 = iVar2;
    *(int *)(*(int *)this_00 + 8) = iVar2;
    *(undefined4 *)((int)pvVar1 + 0x24) = 0;
    operator_delete(*(void **)this_00,(nothrow_t *)0x2c);
    operator_delete(pvVar1,(nothrow_t *)0x7c);
  }
  *(undefined4 *)((char *)this + 0x100) = 0;
  // [seh] ExceptionList = local_10;
  return;
}


// Ghidra: void __thiscall RoomObject::setCharacter(RoomObject *this,int param_2,void *param_3)
void RoomObject::setCharacter(int param_2, void * param_3)

{
  char stack0xfffffffc[1] = {0};  // [pseudo] address of an unnamed stack slot
  std::string *this_00;
  char cVar1;
  bool bVar2;
  char *pcVar3;
  RoomCharacter *pRVar4;
  undefined4 uVar5;
  ConversationManager *pCVar6;
  Conversation *pCVar7;
  CharacterEyeState CVar8;
  CharacterMouthState CVar9;
  std::string *pbVar10;
  char *pcVar11;
  void *pvVar12;
  nothrow_t *pnVar13;
  uint unaff_EDI;
  uint in_stack_0000001c;
  undefined4 uVar14;
  std::string abStack_48 [12];
  undefined4 uStack_3c;
  // [seh] void *local_10;
  // [seh] undefined *puStack_c;
  int local_8;
  
  // [seh] puStack_c = &DAT_005c74ff;
  // [seh] local_10 = ExceptionList;
  // [cookie] pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  // [seh] ExceptionList = &local_10;
  // [seh] local_8 = 0;
  unsetCharacter(this);
  pRVar4 = operator_new(0x7c);
  // [seh] local_8._0_1_ = 1;
  ghidra::str::ctor(abStack_48,(std::string *)&param_3);
  uVar5 = new ((void *)(pRVar4)) RoomCharacter();
  // [seh] local_8._0_1_ = 0;
  *(undefined4 *)((char *)this + 0x100) = uVar5;
  ghidra::str::ctor(abStack_48,(std::string *)&param_3);
  uVar14 = 0;
  uVar5 = 0xffffffff;
  // [seh] local_8._0_1_ = 2;
  pCVar6 = ghidra::any_singleton();
  // [seh] local_8 = (uint)local_8._1_3_ << 8;
  pCVar7 = (pCVar6)->getConversation(uVar5, uVar14);
  if (pCVar7 != (Conversation *)0x0) {
    uStack_3c = 0x53e7ed;
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
    if (!bVar2) {
      ghidra::str::ctor(abStack_48,(std::string *)(pCVar7 + 0x74));
      CVar8 = getCharacterEyeState();
      *(CharacterEyeState *)(*(int *)(*(int *)((char *)this + 0x100) + 0x1c) + 0x58) = CVar8;
    }
    uStack_3c = 0x53e82f;
    bVar2 = ghidra::lib::_Traits_equal___x28_x29("",0,pcVar3,unaff_EDI);
    if (!bVar2) {
      ghidra::str::ctor(abStack_48,(std::string *)(pCVar7 + 0x5c));
      CVar9 = getCharacterMouthState();
      *(CharacterMouthState *)(*(int *)(*(int *)((char *)this + 0x100) + 0x1c) + 0x54) = CVar9;
    }
  }
  this_00 = (std::string *)((char *)this + 0x98);
  *(undefined4 *)((char *)this + 0xa8) = 0;
  pbVar10 = this_00;
  if (0xf < *(uint *)((char *)this + 0xac)) {
    pbVar10 = *(std::string **)this_00;
  }
  *pbVar10 = (std::string)0x0;
  if (param_2 == 0) {
    *(undefined4 *)((char *)this + 0xe4) = 4;
    pcVar3 = "lying";
    do {
      pcVar11 = pcVar3;
      pcVar3 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    uStack_3c = 0x53e8a2;
    ghidra::str::append(this_00,"lying",(uint)(pcVar11 + -0x5eb6cc));
    uStack_3c = 0x53e8b0;
    ghidra::str::append(this_00,"_",1);
    *(undefined4 *)((char *)this + 0xe8) = 3;
    pcVar3 = "dead";
    do {
      pcVar11 = pcVar3;
      pcVar3 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    uStack_3c = 0x53e8d7;
    ghidra::str::append(this_00,"dead",(uint)(pcVar11 + -0x6222f8));
  }
  else {
    pcVar3 = (&PTR_s_standing_005e1e60)[*(int *)((char *)this + 0xe4)];
    pcVar11 = pcVar3;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uStack_3c = 0x53e904;
    ghidra::str::append(this_00,pcVar3,(int)pcVar11 - (int)(pcVar3 + 1));
    uStack_3c = 0x53e912;
    ghidra::str::append(this_00,"_",1);
    if (*(int *)((char *)this + 0xe4) == 4) {
      pcVar3 = "dead";
      do {
        pcVar11 = pcVar3;
        pcVar3 = pcVar11 + 1;
      } while (*pcVar11 != '\0');
      uStack_3c = 0x53e938;
      ghidra::str::append(this_00,"dead",(uint)(pcVar11 + -0x6222f8));
    }
    else {
      pcVar3 = (&PTR_s_normal_005e1e80)[*(int *)(param_2 + 0x3c)];
      pcVar11 = pcVar3;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uStack_3c = 0x53e963;
      ghidra::str::append(this_00,pcVar3,(int)pcVar11 - (int)(pcVar3 + 1));
    }
    *(undefined4 *)((char *)this + 0xe8) = *(undefined4 *)(param_2 + 0x3c);
  }
  *(undefined4 *)((char *)this + 0x69c) = *(undefined4 *)(*(int *)(*(int *)((char *)this + 0x100) + 0x1c) + 0x40);
  if (0xf < in_stack_0000001c) {
    pnVar13 = (nothrow_t *)(in_stack_0000001c + 1);
    pvVar12 = param_3;
    if ((nothrow_t *)0xfff < pnVar13) {
      pvVar12 = *(void **)((int)param_3 + -4);
      pnVar13 = (nothrow_t *)(in_stack_0000001c + 0x24);
      if (0x1f < (uint)((int)param_3 + (-4 - (int)pvVar12))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_3c = 0x53e9b1;
    operator_delete(pvVar12,pnVar13);
  }
  // [seh] ExceptionList = local_10;
  return;
}
