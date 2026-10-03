#include "../ois.exe.h"


// public: bool __thiscall Room::recheckCharacterRenders(void)

bool __thiscall Room::recheckCharacterRenders(Room *this)

{
  RoomObject *this_00;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  
  bVar4 = false;
  uVar5 = 0;
  iVar3 = *(int *)(this + 0x90);
  if (*(int *)(this + 0x94) - iVar3 >> 2 != 0) {
    do {
      this_00 = *(RoomObject **)(iVar3 + uVar5 * 4);
      if (*(int *)(this_00 + 0x3c) == 6) {
        bVar1 = RoomObject::spawnPointCheck(this_00);
        if (bVar1) {
          RoomObject::cleanupObject(*(RoomObject **)(*(int *)(this + 0x90) + uVar5 * 4));
          RoomObject::render(*(RoomObject **)(*(int *)(this + 0x90) + uVar5 * 4),
                             *(Node **)(this + 0xa0));
          bVar4 = true;
          iVar3 = *(int *)(*(int *)(this + 0x90) + uVar5 * 4);
          puVar2 = (undefined4 *)(iVar3 + 0x58);
          if (0xf < *(uint *)(iVar3 + 0x6c)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          debugPrint("DETAIL","Character spawn state has changed for %s",puVar2);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = *(int *)(this + 0x90);
    } while (uVar5 < (uint)(*(int *)(this + 0x94) - iVar3 >> 2));
  }
  return bVar4;
}


// public: void __thiscall Room::render(float,class cocos2d::Node *)

void __thiscall Room::render(Room *this,float param_1,Node *param_2)

{
  int iVar1;
  Vec3 *pVVar2;
  ScreenInterface *this_00;
  undefined4 uVar3;
  uint uVar4;
  AmbientLight *pAVar5;
  PresentationInterface *pPVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  Room *pRVar10;
  Vec3 *this_01;
  uint uVar11;
  Vec3 local_64 [12];
  Vec3 local_58 [12];
  Vec3 *local_4c;
  Vec3 local_48 [16];
  Vec3 local_38 [16];
  undefined8 local_28;
  Vec3 *local_20;
  Room *local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  pcVar8 = ~Vec3_exref;
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c6925;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(float *)(this + 0xa0) = param_1;
  pVVar2 = *(Vec3 **)(this + 0xa8);
  this_01 = *(Vec3 **)(this + 0xa4);
  local_1c = this;
  if (this_01 != pVVar2) {
    do {
      cocos2d::Vec3::~Vec3(this_01 + 0xc);
      cocos2d::Vec3::~Vec3(this_01);
      this_01 = this_01 + 0x1c;
    } while (this_01 != pVVar2);
    this_01 = *(Vec3 **)(local_1c + 0xa4);
  }
  pRVar10 = local_1c;
  *(Vec3 **)(local_1c + 0xa8) = this_01;
  iVar9 = *(int *)(local_1c + 0x94);
  iVar7 = *(int *)(local_1c + 0x90);
  local_18 = 0;
  if (iVar9 - iVar7 >> 2 != 0) {
    do {
      iVar9 = local_18 * 4;
      local_20 = *(Vec3 **)(*(int *)(iVar9 + iVar7) + 900);
      if (-1 < (int)local_20) {
        cocos2d::Vec3::Vec3(local_48,(Vec3 *)(*(int *)(iVar9 + iVar7) + 0x3c4));
        local_8 = 0;
        cocos2d::Vec3::Vec3(local_38,(Vec3 *)(*(int *)(*(int *)(pRVar10 + 0x90) + iVar9) + 0x3b8));
        local_8 = 2;
        cocos2d::Vec3::Vec3(local_64,local_38);
        local_8 = CONCAT31(local_8._1_3_,3);
        cocos2d::Vec3::Vec3(local_58,local_48);
        local_4c = local_20;
        (*pcVar8)();
        (*pcVar8)();
        local_8 = 4;
        pVVar2 = *(Vec3 **)(pRVar10 + 0xa8);
        if (*(Vec3 **)(pRVar10 + 0xac) == pVVar2) {
          std::vector<>::_Emplace_reallocate<CameraPos>
                    ((vector<> *)(pRVar10 + 0xa4),(CameraPos *)pVVar2,(CameraPos *)local_64);
        }
        else {
          local_20 = pVVar2;
          cocos2d::Vec3::Vec3(pVVar2,local_64);
          local_8 = CONCAT31(local_8._1_3_,5);
          cocos2d::Vec3::Vec3(pVVar2 + 0xc,local_58);
          *(Vec3 **)(pVVar2 + 0x18) = local_4c;
          *(int *)(pRVar10 + 0xa8) = *(int *)(pRVar10 + 0xa8) + 0x1c;
        }
        pcVar8 = ~Vec3_exref;
        local_8 = 0xffffffff;
        cocos2d::Vec3::~Vec3(local_58);
        cocos2d::Vec3::~Vec3(local_64);
        iVar7 = *(int *)(pRVar10 + 0x90);
      }
      if (*(int *)(*(RoomObject **)(iVar9 + iVar7) + 0x3c) == 4) {
        RoomObject::recheckValidScreens(*(RoomObject **)(iVar9 + iVar7));
        iVar7 = *(int *)(pRVar10 + 0x90);
      }
      RoomObject::render(*(RoomObject **)(iVar9 + iVar7),(Node *)param_1);
      iVar7 = *(int *)(iVar9 + *(int *)(pRVar10 + 0x90));
      if ((*(int *)(iVar7 + 0x3c) == 4) &&
         (this_00 = *(ScreenInterface **)(iVar7 + 0x624 + *(int *)(iVar7 + 0x388) * 4),
         this_00 != (ScreenInterface *)0x0)) {
        ScreenInterface::update(this_00,(float)this_00,SUB41(uVar4,0));
      }
      iVar9 = *(int *)(pRVar10 + 0x94);
      iVar7 = *(int *)(pRVar10 + 0x90);
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(iVar9 - iVar7 >> 2));
  }
  if (*(float *)(pRVar10 + 0x40) != -1.0) {
    pAVar5 = cocos2d::AmbientLight::create((Color3B *)WHITE_exref);
    *(AmbientLight **)(pRVar10 + 0x9c) = pAVar5;
    *(undefined4 *)(pAVar5 + 0x27c) = 2;
    cocos2d::BaseLight::setIntensity(*(BaseLight **)(pRVar10 + 0x9c),*(float *)(pRVar10 + 0x40));
    (**(code **)(**(int **)(pRVar10 + 0x9c) + 0x25c))(pRVar10 + 0x8c);
    (**(code **)(*(int *)param_1 + 0x10c))(*(undefined4 *)(pRVar10 + 0x9c));
    iVar9 = *(int *)(pRVar10 + 0x94);
  }
  iVar7 = *(int *)(pRVar10 + 0x90);
  param_1 = 0.0;
  if (iVar9 - iVar7 >> 2 != 0) {
    do {
      uVar4 = 0;
      uVar11 = iVar9 - iVar7 >> 2;
      if (uVar11 != 0) {
        do {
          iVar9 = *(int *)(iVar7 + uVar4 * 4);
          if ((*(char *)(iVar9 + 0x449) != '\0') &&
             (*(int *)(iVar9 + 0x54) == *(int *)(*(int *)(iVar7 + (int)param_1 * 4) + 0x50)))
          goto LAB_005369d1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar11);
      }
      iVar9 = 0;
LAB_005369d1:
      iVar1 = (int)param_1 * 4;
      param_1 = (float)((int)param_1 + 1);
      *(int *)(*(int *)(iVar7 + iVar1) + 0x44c) = iVar9;
      iVar9 = *(int *)(local_1c + 0x94);
      iVar7 = *(int *)(local_1c + 0x90);
      pRVar10 = local_1c;
    } while ((uint)param_1 < (uint)(iVar9 - iVar7 >> 2));
  }
  local_28 = *(undefined8 *)(pRVar10 + 0x74);
  uVar3 = *(undefined4 *)(pRVar10 + 0x7c);
  pPVar6 = Singleton<>::getInstance();
  *(undefined8 *)(pPVar6 + 0x3b4) = local_28;
  *(undefined4 *)(pPVar6 + 0x3bc) = uVar3;
  ExceptionList = local_10;
  return;
}


// public: void __thiscall Room::cleanupRoom(void)

void __thiscall Room::cleanupRoom(Room *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x94) - *(int *)(this + 0x90) >> 2 != 0) {
    do {
      RoomObject::cleanupObject(*(RoomObject **)(*(int *)(this + 0x90) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(this + 0x94) - *(int *)(this + 0x90) >> 2));
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 0x138))(1);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  return;
}


// public: class RoomObject * __thiscall Room::newObject(void)

RoomObject * __thiscall Room::newObject(Room *this)

{
  AnimationFrames **ppAVar1;
  Room *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c6952;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  local_14 = operator_new(0x6a0);
  local_8 = 0;
  local_14 = (Room *)RoomObject::RoomObject((RoomObject *)local_14);
  local_8 = 0xffffffff;
  ppAVar1 = *(AnimationFrames ***)(this + 0x94);
  if (*(AnimationFrames ***)(this + 0x98) != ppAVar1) {
    *ppAVar1 = (AnimationFrames *)local_14;
    *(int *)(this + 0x94) = *(int *)(this + 0x94) + 4;
    ExceptionList = local_10;
    return (RoomObject *)local_14;
  }
  std::vector<>::_Emplace_reallocate<>
            ((vector<> *)(this + 0x90),ppAVar1,(AnimationFrames **)&local_14);
  ExceptionList = local_10;
  return (RoomObject *)local_14;
}


// public: void __thiscall Room::runLogic(float)

void __thiscall Room::runLogic(Room *this,float param_1)

{
  int iVar1;
  ScreenInterface *this_00;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  char *pcVar5;
  FlagManager *pFVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  Ship *pSVar10;
  uint unaff_EDI;
  float10 fVar11;
  basic_string<> local_58 [12];
  undefined4 uStack_4c;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005c6978;
  local_10 = ExceptionList;
  pcVar5 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar7 = *(int *)(this + 0x90);
  local_14 = 0;
  if (*(int *)(this + 0x94) - iVar7 >> 2 != 0) {
    do {
      iVar9 = local_14 * 4;
      iVar1 = *(int *)(iVar9 + iVar7);
      if ((*(int *)(iVar1 + 0x3c) == 4) &&
         (this_00 = *(ScreenInterface **)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4),
         this_00 != (ScreenInterface *)0x0)) {
        ScreenInterface::update(this_00,(float)this_00,SUB41(pcVar5,0));
        iVar7 = *(int *)(this + 0x90);
      }
      if (*(int *)(*(int *)(iVar9 + iVar7) + 0x514) == 0) {
        piVar2 = *(int **)(*(int *)(iVar9 + iVar7) + 0x53c);
        if (piVar2 != (int *)0x0) {
          uStack_4c = 0x536c7c;
          fVar11 = (float10)(**(code **)(*piVar2 + 8))();
          uVar8 = (uint)fVar11;
          goto LAB_00536c84;
        }
      }
      else {
        pSVar10 = ShipData::currentlyBoardedShip;
        if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
          pSVar10 = *(Ship **)(g_gameData + 0xd0);
        }
        local_58[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_58,"",0);
        bVar4 = std::_Func_class<>::operator()
                          ((_Func_class<> *)(*(int *)(*(int *)(this + 0x90) + iVar9) + 0x4f0),
                           pSVar10,*(undefined4 *)(*(int *)(*(int *)(this + 0x90) + iVar9) + 0x540))
        ;
        uVar8 = (uint)bVar4;
LAB_00536c84:
        if (uVar8 != *(uint *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x7c)) {
          *(uint *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x7c) = uVar8;
          RoomObject::render(*(RoomObject **)(iVar9 + *(int *)(this + 0x90)),*(Node **)(this + 0xa0)
                            );
        }
      }
      iVar7 = *(int *)(iVar9 + *(int *)(this + 0x90));
      if (*(int *)(iVar7 + 0x5c4) == 0) {
        uStack_4c = 0x536d32;
        bVar4 = std::_Traits_equal<>("",0,pcVar5,unaff_EDI);
        if (!bVar4) {
          std::basic_string<>::basic_string<>(local_58,(basic_string<> *)(iVar7 + 0x450));
          local_8 = 0;
          pFVar6 = Singleton<>::getInstance();
          local_8 = 0xffffffff;
          bVar4 = FlagManager::flagSet(pFVar6);
          goto LAB_00536d67;
        }
      }
      else {
        pSVar10 = ShipData::currentlyBoardedShip;
        if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
          pSVar10 = *(Ship **)(g_gameData + 0xd0);
        }
        local_58[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_58,"",0);
        bVar4 = std::_Func_class<>::operator()
                          ((_Func_class<> *)(*(int *)(*(int *)(this + 0x90) + iVar9) + 0x5a0),
                           pSVar10,0);
LAB_00536d67:
        if (bVar4 != (bool)*(char *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x4c)) {
          *(bool *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x4c) = bVar4;
          RoomObject::render(*(RoomObject **)(iVar9 + *(int *)(this + 0x90)),*(Node **)(this + 0xa0)
                            );
        }
      }
      if (*(int *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x4a4) == 0) {
        piVar2 = *(int **)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x4cc);
        if (piVar2 != (int *)0x0) {
          uStack_4c = 0x536e31;
          fVar11 = (float10)(**(code **)(*piVar2 + 8))();
          uVar8 = (uint)fVar11;
          goto LAB_00536e39;
        }
      }
      else {
        pSVar10 = ShipData::currentlyBoardedShip;
        if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
          pSVar10 = *(Ship **)(g_gameData + 0xd0);
        }
        local_58[0] = (basic_string<>)0x0;
        std::basic_string<>::assign(local_58,"",0);
        bVar4 = std::_Func_class<>::operator()
                          ((_Func_class<> *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x480),
                           pSVar10,*(undefined4 *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x4d0))
        ;
        uVar8 = (uint)bVar4;
LAB_00536e39:
        if (uVar8 != *(uint *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x78)) {
          *(uint *)(*(int *)(iVar9 + *(int *)(this + 0x90)) + 0x78) = uVar8;
          RoomObject::render(*(RoomObject **)(iVar9 + *(int *)(this + 0x90)),*(Node **)(this + 0xa0)
                            );
        }
      }
      puVar3 = *(undefined4 **)(iVar9 + *(int *)(this + 0x90));
      if (((float)puVar3[0x10e] != 0.0) || (0.0 < (float)puVar3[0x111])) {
LAB_00536ebc:
        (**(code **)*puVar3)();
      }
      else {
        iVar7 = (int)(puVar3[0xe6] - puVar3[0xe5]) >> 0x1f;
        iVar9 = (int)(puVar3[0xe6] - puVar3[0xe5]) / 0x50 + iVar7;
        if ((iVar9 != iVar7) || ((0.0 < (float)puVar3[0xcd] || (puVar3[0x40] != iVar9 - iVar7))))
        goto LAB_00536ebc;
      }
      iVar7 = *(int *)(this + 0x90);
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(this + 0x94) - iVar7 >> 2));
  }
  ExceptionList = local_10;
  return;
}


// public: class ScreenInterface * __thiscall Room::getConsoleInterface(int)

ScreenInterface * __thiscall Room::getConsoleInterface(Room *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x94) - *(int *)(this + 0x90) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x90) + uVar2 * 4);
      if (*(int *)(iVar1 + 900) == param_1) {
        return *(ScreenInterface **)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (ScreenInterface *)0x0;
}


// public: class Screen_Renderer * __thiscall Room::getConsole(int)

Screen_Renderer * __thiscall Room::getConsole(Room *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x94) - *(int *)(this + 0x90) >> 2;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(this + 0x90) + uVar2 * 4);
      if ((*(int *)(iVar1 + 0x3c) == 4) && (*(int *)(iVar1 + 900) == param_1)) {
        return *(Screen_Renderer **)(*(int *)(iVar1 + 0x624 + *(int *)(iVar1 + 0x388) * 4) + 300);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (Screen_Renderer *)0x0;
}


// public: class RoomObject * __thiscall Room::getObjectForScreenID(int)

RoomObject * __thiscall Room::getObjectForScreenID(Room *this,int param_1)

{
  RoomObject *pRVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = *(int *)(this + 0x94) - *(int *)(this + 0x90) >> 2;
  if (uVar4 != 0) {
    do {
      pRVar1 = *(RoomObject **)(*(int *)(this + 0x90) + uVar3 * 4);
      iVar2 = *(int *)(pRVar1 + 900);
      if ((iVar2 != -1) && (iVar2 == param_1)) {
        return pRVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return (RoomObject *)0x0;
}


// public: class RoomObject * __thiscall Room::getObject(int)

RoomObject * __thiscall Room::getObject(Room *this,int param_1)

{
  RoomObject *pRVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x94) - *(int *)(this + 0x90) >> 2;
  if (uVar3 != 0) {
    do {
      pRVar1 = *(RoomObject **)(*(int *)(this + 0x90) + uVar2 * 4);
      if (*(int *)(pRVar1 + 0x50) == param_1) {
        return pRVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return (RoomObject *)0x0;
}


// public: class RoomObject * __thiscall Room::getObjectClickedOn(class cocos2d::Vec2)

RoomObject * __thiscall Room::getObjectClickedOn(Room *this,float param_2,float param_3)

{
  int iVar1;
  bool bVar2;
  Camera *pCVar3;
  Ray *this_00;
  Vec3 *pVVar4;
  PresentationInterface *pPVar5;
  AABB *pAVar6;
  int iVar7;
  Sprite3D *this_01;
  uint uVar8;
  RoomObject *pRVar9;
  Size *pSVar10;
  Vec3 *pVVar11;
  float *pfVar12;
  Vec3 local_5c [12];
  Vec3 local_50 [12];
  Vec3 local_44 [12];
  Vec3 local_38 [12];
  Vec3 local_2c [12];
  Size local_20 [8];
  Ray *local_18;
  Ray *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c69f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (Ray *)0x0;
  local_8 = 0;
  pCVar3 = cocos2d::Camera::getDefaultCamera();
  if (pCVar3 == (Camera *)0x0) {
    ExceptionList = local_10;
    return (RoomObject *)0x0;
  }
  cocos2d::Vec3::Vec3(local_50,param_2,param_3,-1.0);
  local_8._0_1_ = 1;
  cocos2d::Vec3::Vec3(local_38);
  local_8._0_1_ = 2;
  cocos2d::Vec3::Vec3(local_44,param_2,param_3,1.0);
  local_8._0_1_ = 3;
  cocos2d::Vec3::Vec3(local_2c);
  local_8._0_1_ = 4;
  cocos2d::Size::Size(local_20,&OSInterface::designSize);
  pVVar4 = local_38;
  pVVar11 = local_50;
  pSVar10 = local_20;
  pCVar3 = cocos2d::Camera::getDefaultCamera();
  cocos2d::Camera::unproject(pCVar3,pSVar10,pVVar11,pVVar4);
  pVVar4 = local_2c;
  pVVar11 = local_44;
  pSVar10 = local_20;
  pCVar3 = cocos2d::Camera::getDefaultCamera();
  cocos2d::Camera::unproject(pCVar3,pSVar10,pVVar11,pVVar4);
  this_00 = operator_new(0x18);
  local_8._0_1_ = 5;
  local_18 = this_00;
  pVVar4 = (Vec3 *)cocos2d::Vec3::operator-(local_2c,local_5c);
  local_8 = CONCAT31(local_8._1_3_,6);
  local_14 = (Ray *)0x1;
  pPVar5 = Singleton<>::getInstance();
  local_14 = (Ray *)cocos2d::Ray::Ray(this_00,(Vec3 *)(pPVar5 + 0x2fc),pVVar4);
  local_8 = 4;
  cocos2d::Vec3::~Vec3(local_5c);
  uVar8 = 0;
  iVar7 = *(int *)(this + 0x90);
  if (*(int *)(this + 0x94) - iVar7 >> 2 != 0) {
    do {
      bVar2 = RoomObject::isInteractAble(*(RoomObject **)(iVar7 + uVar8 * 4));
      if (bVar2) {
        iVar7 = *(int *)(*(int *)(this + 0x90) + uVar8 * 4);
        iVar1 = *(int *)(iVar7 + 0x44c);
        if ((iVar1 == 0) || (this_01 = *(Sprite3D **)(iVar1 + 0x3dc), this_01 == (Sprite3D *)0x0)) {
          this_01 = *(Sprite3D **)(iVar7 + 0x3dc);
        }
        pfVar12 = (float *)0x0;
        pAVar6 = cocos2d::Sprite3D::getAABB(this_01);
        bVar2 = cocos2d::Ray::intersects(local_14,pAVar6,pfVar12);
        if (bVar2) {
          pRVar9 = *(RoomObject **)(*(int *)(this + 0x90) + uVar8 * 4);
          goto LAB_00537220;
        }
      }
      uVar8 = uVar8 + 1;
      iVar7 = *(int *)(this + 0x90);
    } while (uVar8 < (uint)(*(int *)(this + 0x94) - iVar7 >> 2));
  }
  pRVar9 = (RoomObject *)0x0;
LAB_00537220:
  cocos2d::Vec3::~Vec3(local_2c);
  cocos2d::Vec3::~Vec3(local_44);
  cocos2d::Vec3::~Vec3(local_38);
  cocos2d::Vec3::~Vec3(local_50);
  ExceptionList = local_10;
  return pRVar9;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall Room::getObjectTooltipText(class cocos2d::Vec2)

basic_string<> * __thiscall
Room::getObjectTooltipText(undefined4 param_1,basic_string<> *param_2,float param_3,float param_4)

{
  bool bVar1;
  char *pcVar2;
  Camera *pCVar3;
  Ray *this;
  Vec3 *pVVar4;
  PresentationInterface *pPVar5;
  AABB *pAVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint unaff_EDI;
  int *piVar10;
  code *pcVar11;
  Size *pSVar12;
  Vec3 *pVVar13;
  float *pfVar14;
  Vec3 local_60 [12];
  Vec3 local_54 [12];
  Vec3 local_48 [12];
  Vec3 local_3c [12];
  Vec3 local_30 [12];
  Size local_24 [8];
  undefined4 local_1c;
  Ray *local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005c6a76;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_1c = 0;
  local_8 = 0;
  pCVar3 = cocos2d::Camera::getDefaultCamera();
  if (pCVar3 == (Camera *)0x0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *param_2 = (basic_string<>)0x0;
    std::basic_string<>::assign(param_2,"",0);
  }
  else {
    cocos2d::Vec3::Vec3(local_54,param_3,param_4,-1.0);
    local_8._0_1_ = 1;
    cocos2d::Vec3::Vec3(local_3c);
    local_8._0_1_ = 2;
    cocos2d::Vec3::Vec3(local_48,param_3,param_4,1.0);
    local_8._0_1_ = 3;
    cocos2d::Vec3::Vec3(local_30);
    local_8._0_1_ = 4;
    cocos2d::Size::Size(local_24,&OSInterface::designSize);
    pVVar4 = local_3c;
    pVVar13 = local_54;
    pSVar12 = local_24;
    pCVar3 = cocos2d::Camera::getDefaultCamera();
    cocos2d::Camera::unproject(pCVar3,pSVar12,pVVar13,pVVar4);
    pVVar4 = local_30;
    pVVar13 = local_48;
    pSVar12 = local_24;
    pCVar3 = cocos2d::Camera::getDefaultCamera();
    cocos2d::Camera::unproject(pCVar3,pSVar12,pVVar13,pVVar4);
    this = operator_new(0x18);
    local_8._0_1_ = 5;
    local_18 = this;
    pVVar4 = (Vec3 *)cocos2d::Vec3::operator-(local_30,local_60);
    local_8 = CONCAT31(local_8._1_3_,6);
    local_1c = 2;
    pPVar5 = Singleton<>::getInstance();
    local_18 = (Ray *)cocos2d::Ray::Ray(this,(Vec3 *)(pPVar5 + 0x2fc),pVVar4);
    pcVar11 = ~Vec3_exref;
    local_8 = 4;
    cocos2d::Vec3::~Vec3(local_60);
    uVar8 = 0;
    iVar7 = *(int *)(local_14 + 0x90);
    if (*(int *)(local_14 + 0x94) - iVar7 >> 2 != 0) {
      do {
        iVar9 = *(int *)(iVar7 + uVar8 * 4);
        piVar10 = (int *)(iVar7 + uVar8 * 4);
        if (*(int *)(iVar9 + 0x3c) == 6) {
          if (*(Sprite3D **)(iVar9 + 0x3dc) != (Sprite3D *)0x0) {
            pfVar14 = (float *)0x0;
            pAVar6 = cocos2d::Sprite3D::getAABB(*(Sprite3D **)(iVar9 + 0x3dc));
            bVar1 = cocos2d::Ray::intersects(local_18,pAVar6,pfVar14);
            if (bVar1) {
              iVar9 = *(int *)(*(int *)(local_14 + 0x90) + uVar8 * 4);
              piVar10 = (int *)(*(int *)(local_14 + 0x90) + uVar8 * 4);
              if (*(int *)(iVar9 + 0x100) != 0) {
                std::basic_string<>::basic_string<>
                          (param_2,(basic_string<> *)
                                   (*(int *)(*(int *)(iVar9 + 0x100) + 0x1c) + 0xc));
                cocos2d::Vec3::~Vec3(local_30);
                cocos2d::Vec3::~Vec3(local_48);
                cocos2d::Vec3::~Vec3(local_3c);
                cocos2d::Vec3::~Vec3(local_54);
                ExceptionList = local_10;
                return param_2;
              }
              goto LAB_00537431;
            }
          }
        }
        else {
LAB_00537431:
          bVar1 = std::_Traits_equal<>("",0,pcVar2,unaff_EDI);
          if (!bVar1) {
            if ((*(int *)(iVar9 + 0x44c) == 0) || (*(int *)(*(int *)(iVar9 + 0x44c) + 0x3dc) == 0))
            {
              iVar7 = *piVar10;
            }
            else {
              iVar7 = *(int *)(*piVar10 + 0x44c);
            }
            pfVar14 = (float *)0x0;
            pAVar6 = cocos2d::Sprite3D::getAABB(*(Sprite3D **)(iVar7 + 0x3dc));
            bVar1 = cocos2d::Ray::intersects(local_18,pAVar6,pfVar14);
            if (bVar1) {
              std::basic_string<>::basic_string<>
                        (param_2,(basic_string<> *)
                                 (*(int *)(*(int *)(local_14 + 0x90) + uVar8 * 4) + 0x24));
              cocos2d::Vec3::~Vec3(local_30);
              cocos2d::Vec3::~Vec3(local_48);
              cocos2d::Vec3::~Vec3(local_3c);
              cocos2d::Vec3::~Vec3(local_54);
              ExceptionList = local_10;
              return param_2;
            }
          }
        }
        uVar8 = uVar8 + 1;
        iVar7 = *(int *)(local_14 + 0x90);
        pcVar11 = ~Vec3_exref;
      } while (uVar8 < (uint)(*(int *)(local_14 + 0x94) - iVar7 >> 2));
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *param_2 = (basic_string<>)0x0;
    std::basic_string<>::assign(param_2,"",0);
    (*pcVar11)();
    (*pcVar11)();
    (*pcVar11)();
    (*pcVar11)();
  }
  ExceptionList = local_10;
  return param_2;
}
