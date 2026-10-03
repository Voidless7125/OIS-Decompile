#include "../ois.exe.h"


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Removing unreachable block (ram,0x0043e531)
// WARNING: Removing unreachable block (ram,0x0043e540)
// WARNING: Removing unreachable block (ram,0x0043e557)
// WARNING: Removing unreachable block (ram,0x0043e55b)
// WARNING: Removing unreachable block (ram,0x0043e563)
// WARNING: Removing unreachable block (ram,0x0043e56b)
// WARNING: Removing unreachable block (ram,0x0043e571)
// WARNING: Removing unreachable block (ram,0x0043e576)
// WARNING: Removing unreachable block (ram,0x0043e57d)
// WARNING: Removing unreachable block (ram,0x0043e587)
// WARNING: Removing unreachable block (ram,0x0043e599)
// WARNING: Removing unreachable block (ram,0x0043e5b2)
// WARNING: Removing unreachable block (ram,0x0043e5da)
// WARNING: Removing unreachable block (ram,0x0043e5e1)
// WARNING: Removing unreachable block (ram,0x0043e58b)
// WARNING: Removing unreachable block (ram,0x0043e58f)
// WARNING: Removing unreachable block (ram,0x0043e5ed)
// WARNING: Removing unreachable block (ram,0x0043e5fa)
// WARNING: Removing unreachable block (ram,0x0043e6b5)
// WARNING: Removing unreachable block (ram,0x0043e4e0)
// WARNING: Removing unreachable block (ram,0x0043e4fd)
// WARNING: Removing unreachable block (ram,0x0043e606)
// WARNING: Removing unreachable block (ram,0x0043e645)
// WARNING: Removing unreachable block (ram,0x0043e666)
// WARNING: Removing unreachable block (ram,0x0043e679)
// WARNING: Removing unreachable block (ram,0x0043e4e5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// void __cdecl parseLines(char const *,void (__cdecl*)(unsigned char *),bool)

void __cdecl parseLines(char *param_1,_func_void_uchar_ptr *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  void **ppvVar5;
  FileUtils *pFVar6;
  char *in_ECX;
  void *pvVar7;
  char ****ppppcVar8;
  char *pcVar9;
  char ****ppppcVar10;
  uint uVar11;
  nothrow_t *pnVar12;
  basic_string<> *pbVar13;
  uint unaff_EDI;
  void *local_2088;
  uint local_2074;
  char ***local_2070 [4];
  undefined4 local_2060;
  uint local_205c;
  void *local_2058;
  undefined4 uStack_2054;
  undefined4 uStack_2050;
  undefined4 uStack_204c;
  undefined4 local_2048;
  uint uStack_2044;
  void *local_2040;
  void *pvStack_203c;
  void *pvStack_2038;
  void *pvStack_2034;
  undefined8 local_2030;
  char *local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined *puStack_18;
  int local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &DAT_005b5523;
  local_1c = ExceptionList;
  pcVar4 = (char *)(___security_cookie ^ (uint)&stack0xfffffff0);
  ExceptionList = &local_1c;
  local_2060 = 0;
  local_205c = 0xf;
  local_2070[0] = (char ***)((uint)local_2070[0] & 0xffffff00);
  pcVar9 = in_ECX;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  local_24 = pcVar4;
  std::basic_string<>::assign((basic_string<> *)local_2070,in_ECX,(int)pcVar9 - (int)(in_ECX + 1));
  local_14 = 0;
  ppppcVar8 = local_2070;
  if (0xf < local_205c) {
    ppppcVar8 = (char ****)local_2070[0];
  }
  if (((char)param_1 == '\0') && (pbVar13 = _filesIncluded, _filesIncluded != DAT_0065d660)) {
    do {
      ppppcVar10 = ppppcVar8;
      do {
        cVar1 = *(char *)ppppcVar10;
        ppppcVar10 = (char ****)((int)ppppcVar10 + 1);
      } while (cVar1 != '\0');
      bVar3 = std::_Traits_equal<>
                        ((char *)ppppcVar8,(int)ppppcVar10 - ((int)ppppcVar8 + 1),pcVar4,unaff_EDI);
    } while ((!bVar3) && (pbVar13 = pbVar13 + 0x18, pbVar13 != DAT_0065d660));
    if (pbVar13 != DAT_0065d660) {
      debugPrint("ERROR","Tried to include a file more than once: %s");
    }
  }
  local_2048 = 0;
  uStack_2044 = 0xf;
  local_2058 = (void *)((uint)local_2058 & 0xffffff00);
  ppppcVar10 = ppppcVar8;
  do {
    cVar1 = *(char *)ppppcVar10;
    ppppcVar10 = (char ****)((int)ppppcVar10 + 1);
  } while (cVar1 != '\0');
  std::basic_string<>::assign
            ((basic_string<> *)&local_2058,(char *)ppppcVar8,(int)ppppcVar10 - ((int)ppppcVar8 + 1))
  ;
  pvVar7 = local_2058;
  pbVar13 = DAT_0065d660;
  local_14._0_1_ = 1;
  if (DAT_0065d664 == DAT_0065d660) {
    std::vector<>::_Emplace_reallocate<>(&filesIncluded,DAT_0065d660,(basic_string<> *)&local_2058);
    uVar11 = uStack_2044;
  }
  else {
    local_2058 = (void *)((uint)local_2058 & 0xffffff00);
    *(void **)DAT_0065d660 = pvVar7;
    *(undefined4 *)(pbVar13 + 4) = uStack_2054;
    *(undefined4 *)(pbVar13 + 8) = uStack_2050;
    *(undefined4 *)(pbVar13 + 0xc) = uStack_204c;
    *(ulonglong *)(pbVar13 + 0x10) = CONCAT44(uStack_2044,local_2048);
    DAT_0065d660 = DAT_0065d660 + 0x18;
    uVar11 = 0xf;
  }
  local_14 = (uint)local_14._1_3_ << 8;
  if (0xf < uVar11) {
    pnVar12 = (nothrow_t *)(uVar11 + 1);
    pvVar7 = local_2058;
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar7 = *(void **)((int)local_2058 + -4);
      pnVar12 = (nothrow_t *)(uVar11 + 0x24);
      if (0x1f < (uint)((int)local_2058 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar12);
  }
  if ((char)param_1 == '\0') {
    ppppcVar10 = ppppcVar8;
    do {
      cVar1 = *(char *)ppppcVar10;
      ppppcVar10 = (char ****)((int)ppppcVar10 + 1);
    } while (cVar1 != '\0');
    std::basic_string<>::assign
              ((basic_string<> *)&stack0xffffdf34,(char *)ppppcVar8,
               (int)ppppcVar10 - ((int)ppppcVar8 + 1));
    ppvVar5 = (void **)OSInterface::getLocationForAsset();
    bVar2 = true;
    bVar3 = false;
  }
  else {
    local_2048 = 0;
    uStack_2044 = 0xf;
    local_2058 = (void *)((uint)local_2058 & 0xffffff00);
    ppppcVar10 = ppppcVar8;
    do {
      cVar1 = *(char *)ppppcVar10;
      ppppcVar10 = (char ****)((int)ppppcVar10 + 1);
    } while (cVar1 != '\0');
    std::basic_string<>::assign
              ((basic_string<> *)&local_2058,(char *)ppppcVar8,
               (int)ppppcVar10 - ((int)ppppcVar8 + 1));
    ppvVar5 = &local_2058;
    bVar2 = false;
    bVar3 = true;
  }
  local_2030 = 0;
  local_2040 = *ppvVar5;
  pvStack_203c = ppvVar5[1];
  pvStack_2038 = ppvVar5[2];
  pvStack_2034 = ppvVar5[3];
  local_2030 = *(undefined8 *)(ppvVar5 + 4);
  ppvVar5[4] = (void *)0x0;
  ppvVar5[5] = (void *)0xf;
  *(undefined1 *)ppvVar5 = 0;
  local_14 = 3;
  if ((bVar2) && (0xf < local_2074)) {
    pnVar12 = (nothrow_t *)(local_2074 + 1);
    pvVar7 = local_2088;
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar7 = *(void **)((int)local_2088 + -4);
      pnVar12 = (nothrow_t *)(local_2074 + 0x24);
      if (0x1f < (uint)((int)local_2088 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar12);
  }
  local_14 = CONCAT31(local_14._1_3_,4);
  if ((bVar3) && (0xf < uStack_2044)) {
    pnVar12 = (nothrow_t *)(uStack_2044 + 1);
    pvVar7 = local_2058;
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar7 = *(void **)((int)local_2058 + -4);
      pnVar12 = (nothrow_t *)(uStack_2044 + 0x24);
      if (0x1f < (uint)((int)local_2058 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar12);
  }
  pFVar6 = cocos2d::FileUtils::getInstance();
  (**(code **)(*(int *)pFVar6 + 0x1c))();
  debugPrint("ERROR","Null data in file \'%s\'");
  bVar3 = cc_assert_script_compatible("Empty or non-existent file attempting to be included.");
  if (!bVar3) {
    cocos2d::log("Assert failed: %s");
  }
  if (0xf < local_2030._4_4_) {
    pnVar12 = (nothrow_t *)(local_2030._4_4_ + 1);
    pvVar7 = local_2040;
    if ((nothrow_t *)0xfff < pnVar12) {
      pvVar7 = *(void **)((int)local_2040 + -4);
      pnVar12 = (nothrow_t *)(local_2030._4_4_ + 0x24);
      if (0x1f < (uint)((int)local_2040 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar7,pnVar12);
  }
  local_2030 = 0xf00000000;
  local_2040 = (void *)((uint)local_2040 & 0xffffff00);
  if (0xf < local_205c) {
    pnVar12 = (nothrow_t *)(local_205c + 1);
    ppppcVar8 = (char ****)local_2070[0];
    if ((nothrow_t *)0xfff < pnVar12) {
      ppppcVar8 = (char ****)local_2070[0][-1];
      pnVar12 = (nothrow_t *)(local_205c + 0x24);
      if (0x1f < (uint)((int)local_2070[0] + (-4 - (int)ppppcVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppcVar8,pnVar12);
  }
  ExceptionList = local_1c;
  __security_check_cookie((uint)local_24 ^ (uint)&stack0xfffffff0);
  return;
}


// void __cdecl populateListData(enum EShipDataInputType::ShipDataInputType,class std::vector<class
// ListData,class std::allocator<class ListData> > *)

void __cdecl populateListData(ShipDataInputType param_1,vector<> *param_2)

{
  TradeEngine *pTVar1;
  InputConfiguration *this;
  undefined4 in_ECX;
  TradeEngine *this_00;
  TradeEngine *this_01;
  TradeEngine *this_02;
  TradeEngine *this_03;
  TradeEngine *this_04;
  TradeEngine *this_05;
  TradeEngine *this_06;
  TradeEngine *this_07;
  TradeEngine *this_08;
  TradeEngine *this_09;
  TradeEngine *this_10;
  TradeEngine *this_11;
  TradeEngine *this_12;
  TradeEngine *this_13;
  TradeEngine *this_14;
  NotesManager *this_15;
  PowerManager *this_16;
  vector<> *in_EDX;
  
  switch(in_ECX) {
  case 0x12:
    Singleton<>::getInstance();
    TradeEngine::populateCargoItems(this_00,in_EDX,false);
    return;
  case 0x13:
    Singleton<>::getInstance();
    TradeEngine::populateCargoComponentItems(this_02,in_EDX);
    return;
  case 0x14:
    pTVar1 = Singleton<>::getInstance();
    TradeEngine::populateShopItems(pTVar1,in_EDX);
    return;
  case 0x15:
    pTVar1 = Singleton<>::getInstance();
    TradeEngine::populateShopComponentItems(pTVar1,in_EDX);
    return;
  case 0x18:
    pTVar1 = Singleton<>::getInstance();
    TradeEngine::populateWireItems(pTVar1,in_EDX);
    return;
  case 0x19:
    Singleton<>::getInstance();
    TradeEngine::populateWireCargoItems(this_03,in_EDX);
    return;
  case 0x1b:
    Singleton<>::getInstance();
    TradeEngine::populateCommerceMenu(this_04,in_EDX);
    return;
  case 0x1c:
    Singleton<>::getInstance();
    TradeEngine::populateCompanies(this_06,in_EDX);
    return;
  case 0x1d:
    Singleton<>::getInstance();
    TradeEngine::populateContracts(this_07,in_EDX);
    return;
  case 0x1e:
    Singleton<>::getInstance();
    TradeEngine::populateBanks(this_05,in_EDX);
    return;
  case 0x21:
    Singleton<>::getInstance();
    TradeEngine::populateMechanicMenu(this_10,in_EDX);
    return;
  case 0x22:
    Singleton<>::getInstance();
    TradeEngine::populateMechanicHullParts(this_11,in_EDX);
    return;
  case 0x23:
    Singleton<>::getInstance();
    TradeEngine::populateMechanicPods(this_12,in_EDX);
    return;
  case 0x24:
    pTVar1 = Singleton<>::getInstance();
    TradeEngine::populateMechanicModules(pTVar1,in_EDX);
    return;
  case 0x25:
    Singleton<>::getInstance();
    TradeEngine::populateMechanicArmaments(this_13,in_EDX);
    return;
  case 0x27:
    Singleton<>::getInstance();
    TradeEngine::populateShips(this_14,in_EDX);
    return;
  case 0x2a:
    Singleton<>::getInstance();
    TradeEngine::populatePassengers(this_08,in_EDX);
    return;
  case 0x2e:
    Singleton<>::getInstance();
    TradeEngine::populateCargoItems(this_01,in_EDX,true);
    return;
  case 0x2f:
    Singleton<>::getInstance();
    NotesManager::populateNotes(this_15,in_EDX);
    return;
  case 0x30:
    Singleton<>::getInstance();
    TradeEngine::populateBountyItems(this_09,in_EDX);
    return;
  case 0x31:
    this = Singleton<>::getInstance();
    InputConfiguration::populateInputConfig(this,in_EDX);
    return;
  case 0x35:
    Singleton<>::getInstance();
    PowerManager::populateListData(this_16,in_EDX);
  }
  return;
}


// class cocos2d::Vec2 __cdecl positionFromPoint(class cocos2d::Vec2,float,float)

void __cdecl positionFromPoint(void)

{
  Vec2 *in_ECX;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005cd162;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  __libm_sse2_sin_precise(___security_cookie ^ (uint)&stack0xfffffffc);
  __libm_sse2_cos_precise();
  local_8 = CONCAT31(local_8._1_3_,1);
  cocos2d::Vec2::operator+((Vec2 *)&stack0x00000004,in_ECX);
  ExceptionList = local_10;
  return;
}


// class cocos2d::Vec2 __cdecl positionDelta(float,float)

void __cdecl positionDelta(float param_1,float param_2)

{
  float *in_ECX;
  double dVar1;
  float in_XMM1_Da;
  double dVar2;
  float in_XMM2_Da;
  
  dVar2 = (double)in_XMM1_Da * 0.017453292519943295;
  dVar1 = dVar2;
  __libm_sse2_sin_precise();
  *in_ECX = (float)(dVar1 * (double)in_XMM2_Da);
  __libm_sse2_cos_precise();
  in_ECX[1] = (float)(dVar2 * (double)in_XMM2_Da);
  return;
}


// class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
// printFloatAsMinsAndSeconds(float)

void __cdecl printFloatAsMinsAndSeconds(float param_1)

{
  char *in_ECX;
  float in_XMM1_Da;
  
  strUsingArgs(in_ECX,"%dm %ds",(int)(in_XMM1_Da / 60.0),
               (int)(in_XMM1_Da - (float)((int)(in_XMM1_Da / 60.0) * 0x3c)));
  return;
}


void __cdecl pre_c_initialization(int param_1,int param_2,int param_3)

{
  bool bVar1;
  _exception *_Except;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  RangeNode<> *extraout_ECX;
  RangeNode<> *this;
  _exception *unaff_retaddr;
  code *this_00;
  
  __set_app_type(2);
  _Except = (_exception *)__get_startup_file_mode();
  __set_fmode((int)_Except);
  piVar2 = (int *)___p__commode();
  iVar3 = ___scrt_exe_initialize_mta(_Except);
  *piVar2 = iVar3;
  uVar4 = ___scrt_initialize_onexit_tables(1);
  if ((char)uVar4 != '\0') {
    __RTC_Initialize();
    _atexit(__RTC_Terminate);
    uVar4 = __get_startup_argv_mode();
    iVar3 = __configure_narrow_argv(uVar4);
    if (iVar3 == 0) {
      __scrt_initialize_type_info();
      bVar1 = ___scrt_is_user_matherr_present();
      this_00 = (code *)extraout_ECX;
      if (CONCAT31(extraout_var,bVar1) != 0) {
        this_00 = ___scrt_exe_initialize_mta;
        ___setusermatherr();
      }
      DataStructures::RangeNode<>::~RangeNode<>((RangeNode<> *)this_00);
      DataStructures::RangeNode<>::~RangeNode<>(this);
      __initialize_default_precision();
      iVar3 = ___scrt_exe_initialize_mta(unaff_retaddr);
      __configthreadlocale(iVar3);
      bVar1 = ShipInterface::doAlterServerSetting((Ship *)unaff_retaddr,param_1,param_2,param_3);
      if (bVar1) {
        __initialize_narrow_environment();
      }
      ___scrt_exe_initialize_mta(unaff_retaddr);
      iVar3 = ___scrt_initialize_mta(unaff_retaddr);
      if (iVar3 == 0) {
        return;
      }
    }
  }
                    // WARNING: Subroutine does not return
  ___scrt_fastfail();
}


undefined4 post_pgo_initialization(void)

{
  ___scrt_initialize_default_local_stdio_options();
  return 0;
}


void pre_cpp_initialization(void)

{
  int iVar1;
  _exception *unaff_retaddr;
  
  ___scrt_set_unhandled_exception_filter();
  iVar1 = ___scrt_exe_initialize_mta(unaff_retaddr);
  __set_new_mode(iVar1);
  return;
}
