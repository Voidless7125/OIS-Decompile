#include "../ois.exe.h"


// enum EComparisonCheckType::ComparisonCheckType __cdecl comparisonFromString(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ComparisonCheckType __cdecl comparisonFromString(void *param_1)

{
  bool bVar1;
  nothrow_t *pnVar2;
  uint unaff_ESI;
  ComparisonCheckType CVar3;
  char *unaff_EDI;
  void *pvVar4;
  uint in_stack_00000018;
  
  bVar1 = std::_Traits_equal<>("=",1,unaff_EDI,unaff_ESI);
  if (!bVar1) {
    bVar1 = std::_Traits_equal<>("<=",2,unaff_EDI,unaff_ESI);
    if (bVar1) {
      CVar3 = 4;
      goto LAB_004a0fbf;
    }
    bVar1 = std::_Traits_equal<>("<",1,unaff_EDI,unaff_ESI);
    if (bVar1) {
      CVar3 = 2;
      goto LAB_004a0fbf;
    }
    bVar1 = std::_Traits_equal<>(">=",2,unaff_EDI,unaff_ESI);
    if (bVar1) {
      CVar3 = 5;
      goto LAB_004a0fbf;
    }
    bVar1 = std::_Traits_equal<>(">",1,unaff_EDI,unaff_ESI);
    if (bVar1) {
      CVar3 = 3;
      goto LAB_004a0fbf;
    }
    bVar1 = std::_Traits_equal<>("!=",2,unaff_EDI,unaff_ESI);
    if (bVar1) {
      CVar3 = 1;
      goto LAB_004a0fbf;
    }
  }
  CVar3 = 0;
LAB_004a0fbf:
  if (0xf < in_stack_00000018) {
    pnVar2 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar4 = param_1;
    if ((nothrow_t *)0xfff < pnVar2) {
      pvVar4 = *(void **)((int)param_1 + -4);
      pnVar2 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_1 + (-4 - (int)pvVar4))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,pnVar2);
  }
  return CVar3;
}


// bool __cdecl checkListDataChanged(enum EShipDataInputType::ShipDataInputType,class
// std::vector<class ListData,class std::allocator<class ListData> > *)

bool __cdecl checkListDataChanged(ShipDataInputType param_1,vector<> *param_2)

{
  bool bVar1;
  TradeEngine *pTVar2;
  undefined4 in_ECX;
  TradeEngine *this;
  TradeEngine *this_00;
  TradeEngine *this_01;
  TradeEngine *this_02;
  TradeEngine *this_03;
  TradeEngine *this_04;
  TradeEngine *this_05;
  TradeEngine *this_06;
  TradeEngine *this_07;
  vector<> *in_EDX;
  
  switch(in_ECX) {
  case 0x12:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkCargoItems(this,in_EDX,false);
    return bVar1;
  case 0x13:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkCargoComponentItems(this_01,in_EDX);
    return bVar1;
  case 0x14:
    pTVar2 = Singleton<>::getInstance();
    bVar1 = TradeEngine::checkShopItems(pTVar2,in_EDX);
    return bVar1;
  case 0x15:
    pTVar2 = Singleton<>::getInstance();
    bVar1 = TradeEngine::checkShopComponentItems(pTVar2,in_EDX);
    return bVar1;
  default:
    return false;
  case 0x18:
    pTVar2 = Singleton<>::getInstance();
    bVar1 = TradeEngine::checkWireItems(pTVar2,in_EDX);
    return bVar1;
  case 0x19:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkWireCargoItems(this_02,in_EDX);
    return bVar1;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x25:
  case 0x27:
    Singleton<>::getInstance();
    return true;
  case 0x1e:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkBanks(this_03,in_EDX);
    return bVar1;
  case 0x21:
    Singleton<>::getInstance();
    return 0x5f < (*(int *)(in_EDX + 4) - *(int *)in_EDX) - 0x180U;
  case 0x22:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkMechanicHullParts(this_06,in_EDX);
    return bVar1;
  case 0x23:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkMechanicPods(this_07,in_EDX);
    return bVar1;
  case 0x24:
    pTVar2 = Singleton<>::getInstance();
    bVar1 = TradeEngine::checkMechanicModules(pTVar2,in_EDX);
    return bVar1;
  case 0x2a:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkPassengers(this_04,in_EDX);
    return bVar1;
  case 0x2e:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkCargoItems(this_00,in_EDX,true);
    return bVar1;
  case 0x2f:
    Singleton<>::getInstance();
    return true;
  case 0x30:
    Singleton<>::getInstance();
    bVar1 = TradeEngine::checkBountyItems(this_05,in_EDX);
    return bVar1;
  case 0x31:
    Singleton<>::getInstance();
    return true;
  case 0x35:
    Singleton<>::getInstance();
    return true;
  }
}


// long __stdcall crashHandler(struct _EXCEPTION_POINTERS *)
// lpTopLevelExceptionFilter parameter of SetUnhandledExceptionFilter
// 

long crashHandler(_EXCEPTION_POINTERS *param_1)

{
  _iobuf *p_Var1;
  tm *ptVar2;
  char *pcVar3;
  HANDLE pvVar4;
  StackWalkerInternal *this;
  _iobuf _Var5;
  char *pcVar6;
  PresentationInterface *pPVar7;
  int iVar8;
  FlagManager *pFVar9;
  PrivateCommsManager *pPVar10;
  TabletManager *pTVar11;
  long lVar12;
  _iobuf *p_Var13;
  nothrow_t *pnVar14;
  bool bVar15;
  undefined4 uStack00000050;
  _CONTEXT *p_Var16;
  _func_int_void_ptr___uint64_void_ptr_ulong_ulong_ptr_void_ptr *p_Var17;
  void *pvVar18;
  undefined **local_6c;
  _iobuf in_stack_ffffffb8;
  uint in_stack_ffffffcc;
  char *in_stack_ffffffd0;
  uint in_stack_ffffffe4;
  uint uVar19;
  _iobuf *p_Var20;
  void *pvVar21;
  
  p_Var1 = (_iobuf *)(___security_cookie ^ (uint)&stack0xfffffffc);
  pvVar21 = ExceptionList;
  ExceptionList = &stack0xfffffff0;
  p_Var20 = p_Var1;
  _time64((__time64_t *)0x0);
  ptVar2 = _localtime64((__time64_t *)&stack0xffffff88);
  OSInterface::getBaseDirectory();
  pcVar3 = (char *)strUsingArgs(&stack0xffffffd0,"crash_%04d-%02d-%02d_%02d-%02d-%02d.txt",
                                ptVar2->tm_year + 0x76c,ptVar2->tm_mon + 1,ptVar2->tm_mday,
                                ptVar2->tm_hour,ptVar2->tm_min,ptVar2->tm_sec,p_Var1);
  pcVar6 = pcVar3;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar6 = *(char **)pcVar3;
  }
  std::basic_string<>::append((basic_string<> *)&stack0xffffffb8,pcVar6,*(uint *)(pcVar3 + 0x10));
  if (0xf < in_stack_ffffffe4) {
    pnVar14 = (nothrow_t *)(in_stack_ffffffe4 + 1);
    pcVar6 = in_stack_ffffffd0;
    if ((nothrow_t *)0xfff < pnVar14) {
      pcVar6 = *(char **)(in_stack_ffffffd0 + -4);
      pnVar14 = (nothrow_t *)(in_stack_ffffffe4 + 0x24);
      if ((char *)0x1f < in_stack_ffffffd0 + (-4 - (int)pcVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar6,pnVar14);
  }
  _Var5._Placeholder = (_iobuf *)&stack0xffffffb8;
  if (0xf < in_stack_ffffffcc) {
    _Var5._Placeholder = in_stack_ffffffb8._Placeholder;
  }
  _File_0065d538 = (_iobuf *)fopen(_Var5._Placeholder,"w");
  if ((FILE *)_File_0065d538 == (FILE *)0x0) {
    _Var5._Placeholder = (_iobuf *)&stack0xffffffb8;
    if (0xf < in_stack_ffffffcc) {
      _Var5._Placeholder = in_stack_ffffffb8._Placeholder;
    }
    debugPrint("CRASH","Game crash. Unable to open separate log file at %s.",_Var5._Placeholder);
  }
  else {
    _fprintf((FILE *)_File_0065d538,"WINDOWS Version: %s\n","1.0.8");
  }
  pvVar4 = GetCurrentProcess();
  GetCurrentProcessId();
  local_6c = StackWalker::vftable;
  this = operator_new(0x44);
  StackWalkerInternal::StackWalkerInternal(this,(StackWalker *)&local_6c,pvVar4);
  local_6c = OiSStackWalker::vftable;
  pvVar18 = (void *)0x0;
  p_Var17 = (_func_int_void_ptr___uint64_void_ptr_ulong_ulong_ptr_void_ptr *)0x0;
  p_Var16 = param_1->ContextRecord;
  pvVar4 = GetCurrentThread();
  StackWalker::ShowCallstack((StackWalker *)&local_6c,pvVar4,p_Var16,p_Var17,pvVar18);
  if (_File_0065d538 != (_iobuf *)0x0) {
    _Var5._Placeholder = (_iobuf *)&stack0xffffffb8;
    if (0xf < in_stack_ffffffcc) {
      _Var5._Placeholder = in_stack_ffffffb8._Placeholder;
    }
    debugPrint("CRASH","Game crash. Logged to \'%s\'",_Var5._Placeholder);
    _fprintf((FILE *)_File_0065d538,"\n\nAdditional details:\n");
    pcVar6 = (char *)(*(int *)(g_gameData + 0xcc) + 0x18);
    if (0xf < *(uint *)(*(int *)(g_gameData + 0xcc) + 0x2c)) {
      pcVar6 = *(char **)pcVar6;
    }
    _fprintf((FILE *)_File_0065d538,"Scenario: %s\n",pcVar6);
    fflush((FILE *)_File_0065d538);
    pcVar6 = (char *)(*(int *)(g_gameData + 0xd8) + 0x1c);
    if (0xf < *(uint *)(*(int *)(g_gameData + 0xd8) + 0x30)) {
      pcVar6 = *(char **)pcVar6;
    }
    _fprintf((FILE *)_File_0065d538,"Sector: %s\n",pcVar6);
    fflush((FILE *)_File_0065d538);
    _fprintf((FILE *)_File_0065d538,"Position: %.0f, %.0f\n",
             *(double *)(*(int *)(g_gameData + 0xd0) + 0x28),
             *(double *)(*(int *)(g_gameData + 0xd0) + 0x30));
    fflush((FILE *)_File_0065d538);
    iVar8 = *(int *)(g_gameData + 0xd0);
    pcVar6 = *(char **)(iVar8 + 0x254);
    if (0xf < *(uint *)(pcVar6 + 0x14)) {
      pcVar6 = *(char **)pcVar6;
    }
    pcVar3 = (char *)(iVar8 + 8);
    if (0xf < *(uint *)(iVar8 + 0x1c)) {
      pcVar3 = *(char **)pcVar3;
    }
    local_6c = (undefined **)0x596fdf;
    _fprintf((FILE *)_File_0065d538,"Ship: %s / %s\n",pcVar3,pcVar6);
    fflush((FILE *)_File_0065d538);
    if (ShipData::currentlyBoardedShip == (Ship *)0x0) {
      pcVar6 = "derelict/synthetic";
    }
    else {
      pcVar6 = (char *)(ShipData::currentlyBoardedShip + 8);
      if (0xf < *(uint *)(ShipData::currentlyBoardedShip + 0x1c)) {
        pcVar6 = *(char **)pcVar6;
      }
    }
    _fprintf((FILE *)_File_0065d538,"Boarded: %s\n",pcVar6);
    strUsingArgs(&stack0xffffffd0);
    bVar15 = false;
    pcVar6 = &stack0xffffffd0;
    if (0xf < in_stack_ffffffe4) {
      pcVar6 = in_stack_ffffffd0;
    }
    in_stack_ffffffb8._Placeholder = _File_0065d538;
    _fprintf((FILE *)_File_0065d538,"Game Time: %s\n",pcVar6);
    if (0xf < in_stack_ffffffe4) {
      pnVar14 = (nothrow_t *)(in_stack_ffffffe4 + 1);
      pcVar6 = in_stack_ffffffd0;
      if ((nothrow_t *)0xfff < pnVar14) {
        pcVar6 = *(char **)(in_stack_ffffffd0 + -4);
        pnVar14 = (nothrow_t *)(in_stack_ffffffe4 + 0x24);
        if ((char *)0x1f < in_stack_ffffffd0 + (-4 - (int)pcVar6)) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pcVar6,pnVar14);
    }
    fflush((FILE *)_File_0065d538);
    if (Singleton<>::instance == (PresentationInterface *)0x0) {
      pPVar7 = operator_new(0x418);
      Singleton<>::instance =
           (PresentationInterface *)PresentationInterface::PresentationInterface(pPVar7);
    }
    if (*(int *)(Singleton<>::instance + 0x2d4) == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = *(int *)(*(int *)(Singleton<>::instance + 0x2d4) + 0x1c);
    }
    _fprintf((FILE *)_File_0065d538,"Room: %d\n",iVar8);
    if (Singleton<>::instance == (PresentationInterface *)0x0) {
      pPVar7 = operator_new(0x418);
      Singleton<>::instance =
           (PresentationInterface *)PresentationInterface::PresentationInterface(pPVar7);
    }
    if ((*(int *)(Singleton<>::instance + 0x350) == 0) ||
       (*(int *)(*(int *)(Singleton<>::instance + 0x350) + 0xc) == 0)) {
      pcVar6 = "none";
    }
    else {
      pPVar7 = Singleton<>::getInstance();
      pcVar6 = (char *)(*(int *)(*(int *)(pPVar7 + 0x350) + 0xc) + 0x30);
      if (0xf < *(uint *)(*(int *)(*(int *)(pPVar7 + 0x350) + 0xc) + 0x44)) {
        pcVar6 = *(char **)pcVar6;
      }
    }
    in_stack_ffffffcc = 0x597185;
    p_Var1 = _File_0065d538;
    _fprintf((FILE *)_File_0065d538,"Active Console Tabname: %s\n",pcVar6);
    fflush((FILE *)_File_0065d538);
    if (Singleton<>::instance == (PresentationInterface *)0x0) {
      pPVar7 = operator_new(0x418);
      Singleton<>::instance =
           (PresentationInterface *)PresentationInterface::PresentationInterface(pPVar7);
    }
    if ((*(int *)(Singleton<>::instance + 0x350) != 0) &&
       (*(int *)(*(int *)(Singleton<>::instance + 0x350) + 0x10) != 0)) {
      pPVar7 = Singleton<>::getInstance();
      pcVar6 = (char *)(*(int *)(*(int *)(pPVar7 + 0x350) + 0x10) + 0x18);
      if (0xf < *(uint *)(*(int *)(*(int *)(pPVar7 + 0x350) + 0x10) + 0x2c)) {
        pcVar6 = *(char **)pcVar6;
      }
      _fprintf((FILE *)_File_0065d538,"Active Console: Custom/%s\n",pcVar6);
    }
    fflush((FILE *)_File_0065d538);
    uVar19 = 0x597226;
    p_Var20 = _File_0065d538;
    _fprintf((FILE *)_File_0065d538,"Credits: %d\n",*(int *)(*(int *)(g_gameData + 0x124) + 0x1c));
    fflush((FILE *)_File_0065d538);
    pFVar9 = Singleton<>::getInstance();
    pvVar21 = (void *)0x59724c;
    _fprintf((FILE *)_File_0065d538,"Flags: %d\n",*(int *)(pFVar9 + 0x10));
    fflush((FILE *)_File_0065d538);
    pPVar10 = Singleton<>::getInstance();
    if (*(int *)(pPVar10 + 0x8c) == 0) {
      pcVar6 = "none";
    }
    else {
      Singleton<>::getInstance();
      Singleton<>::getInstance();
      pcVar6 = (char *)strUsingArgs(&stack0xffffffd0);
      bVar15 = true;
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar6 = *(char **)pcVar6;
      }
    }
    _fprintf((FILE *)_File_0065d538,"PComms Conversation: %s\n",pcVar6);
    if (bVar15) {
      if (0xf < uVar19) {
        pnVar14 = (nothrow_t *)(uVar19 + 1);
        p_Var13 = p_Var1;
        if ((nothrow_t *)0xfff < pnVar14) {
          p_Var13 = p_Var1[-1]._Placeholder;
          pnVar14 = (nothrow_t *)(uVar19 + 0x24);
          if (0x1f < (uint)((int)p_Var1 + (-4 - (int)p_Var13))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(p_Var13,pnVar14);
      }
      uVar19 = 0xf;
      p_Var1 = (_iobuf *)((uint)p_Var1 & 0xffffff00);
    }
    fflush((FILE *)_File_0065d538);
    pPVar10 = Singleton<>::getInstance();
    if (*(int *)(pPVar10 + 0x8c) != 0) {
      pTVar11 = Singleton<>::getInstance();
      iVar8 = *(int *)(pTVar11 + 0x24);
      pPVar10 = Singleton<>::getInstance();
      _fprintf((FILE *)_File_0065d538,"PComms Conversation Element & option: %d, %d\n",
               *(int *)(pPVar10 + 0x88),iVar8);
    }
    fflush((FILE *)_File_0065d538);
    pTVar11 = Singleton<>::getInstance();
    if (*(int *)(pTVar11 + 0x20) == 0) {
      pcVar6 = "none";
      bVar15 = false;
    }
    else {
      Singleton<>::getInstance();
      Singleton<>::getInstance();
      pcVar6 = (char *)strUsingArgs(&stack0xffffffd0);
      if (0xf < *(uint *)(pcVar6 + 0x14)) {
        pcVar6 = *(char **)pcVar6;
      }
      bVar15 = true;
    }
    _fprintf((FILE *)_File_0065d538,"In Person Conversation: %s\n",pcVar6);
    if ((bVar15) && (0xf < uVar19)) {
      pnVar14 = (nothrow_t *)(uVar19 + 1);
      p_Var13 = p_Var1;
      if ((nothrow_t *)0xfff < pnVar14) {
        p_Var13 = p_Var1[-1]._Placeholder;
        pnVar14 = (nothrow_t *)(uVar19 + 0x24);
        if (0x1f < (uint)((int)p_Var1 + (-4 - (int)p_Var13))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(p_Var13,pnVar14);
    }
    fflush((FILE *)_File_0065d538);
    pTVar11 = Singleton<>::getInstance();
    if (*(int *)(pTVar11 + 0x20) != 0) {
      pTVar11 = Singleton<>::getInstance();
      iVar8 = *(int *)(pTVar11 + 0x24);
      pTVar11 = Singleton<>::getInstance();
      _fprintf((FILE *)_File_0065d538,"In Person Conversation Element & option: %d, %d\n",
               *(int *)(pTVar11 + 0x1c),iVar8);
    }
    fflush((FILE *)_File_0065d538);
    fclose((FILE *)_File_0065d538);
  }
  StackWalker::~StackWalker((StackWalker *)&local_6c);
  if (0xf < in_stack_ffffffcc) {
    pnVar14 = (nothrow_t *)(in_stack_ffffffcc + 1);
    _Var5._Placeholder = in_stack_ffffffb8._Placeholder;
    if ((nothrow_t *)0xfff < pnVar14) {
      _Var5._Placeholder = ((_iobuf *)((int)in_stack_ffffffb8._Placeholder + -4))->_Placeholder;
      pnVar14 = (nothrow_t *)(in_stack_ffffffcc + 0x24);
      if (0x1f < (uint)((int)in_stack_ffffffb8._Placeholder + (-4 - (int)_Var5._Placeholder))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(_Var5._Placeholder,pnVar14);
  }
  ExceptionList = pvVar21;
  uStack00000050 = 0x5974be;
  lVar12 = __security_check_cookie((uint)p_Var20 ^ (uint)&stack0xfffffffc);
  return lVar12;
}
