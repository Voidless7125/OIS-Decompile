#include "../ois.exe.h"


// public: static class HardwareOutput * __cdecl HardwareOutput::getInstance(void)

HardwareOutput * __cdecl HardwareOutput::getInstance(void)

{
  HardwareOutput *pHVar1;
  
  pHVar1 = m_instance;
  if (m_instance == (HardwareOutput *)0x0) {
    pHVar1 = operator_new(0x14);
    m_instance = pHVar1;
    *pHVar1 = (HardwareOutput)0x0;
    *(undefined4 *)(pHVar1 + 4) = 0;
    *(undefined4 *)(pHVar1 + 8) = 0;
    *(undefined4 *)(pHVar1 + 0xc) = 0;
    *(undefined4 *)(pHVar1 + 0x10) = 0;
  }
  return pHVar1;
}


// public: void __thiscall HardwareOutput::shutdown(void)

void __thiscall HardwareOutput::shutdown(HardwareOutput *this)

{
  int iVar1;
  HANDLE hObject;
  uint uVar2;
  
  if (*(int *)(this + 0xc) - *(int *)(this + 8) >> 2 != 0) {
    uVar2 = 0;
    do {
      debugPrint("HARDWARE","Shutting down interface %d",uVar2);
      iVar1 = *(int *)(*(int *)(this + 8) + uVar2 * 4);
      hObject = *(HANDLE *)(iVar1 + 0x78);
      if (hObject != (HANDLE)0x0) {
        CloseHandle(hObject);
        *(undefined4 *)(iVar1 + 0x78) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(this + 0xc) - *(int *)(this + 8) >> 2));
  }
  return;
}


// public: void __thiscall HardwareOutput::findPorts(void)

void __thiscall HardwareOutput::findPorts(HardwareOutput *this)

{
  HardwareInterface *this_00;
  void *pvVar1;
  char *pcVar2;
  HANDLE hObject;
  uint uVar3;
  nothrow_t *pnVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  uint unaff_EDI;
  undefined4 *puVar8;
  bool bVar9;
  wchar_t *pwVar10;
  void *local_4c [5];
  uint local_38;
  WCHAR local_34 [16];
  char *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2878;
  local_10 = ExceptionList;
  pcVar2 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  puVar8 = *(undefined4 **)(this + 8);
  uVar5 = 0;
  uVar3 = (*(int *)(this + 0xc) - (int)puVar8) + 3U >> 2;
  if (*(undefined4 **)(this + 0xc) < puVar8) {
    uVar3 = 0;
  }
  local_14 = pcVar2;
  if (uVar3 != 0) {
    do {
      this_00 = (HardwareInterface *)*puVar8;
      if (this_00 != (HardwareInterface *)0x0) {
        HardwareInterface::~HardwareInterface(this_00);
        operator_delete(this_00,(nothrow_t *)0x8c);
      }
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar5 != uVar3);
  }
  bVar9 = OISConfiguration::ignoreCom12 != false;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 8);
  iVar6 = (uint)bVar9 * 2 + 1;
  do {
    if (iVar6 < 10) {
      pwVar10 = L"COM%d";
    }
    else {
      pwVar10 = L"\\\\.\\COM%d";
    }
    wsprintfW(local_34,pwVar10);
    hObject = CreateFileW(local_34,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      debugPrint("HARDWARE","USB Serial TTY interface found: %S");
      strUsingArgs((char *)local_4c);
      pvVar1 = local_4c[0];
      local_8 = 0;
      bVar9 = std::_Traits_equal<>("COM1",4,pcVar2,unaff_EDI);
      if (bVar9) {
        debugPrint("HARDWARE","Ignoring COM1");
      }
      else {
        strUsingArgs(&stack0xffffff84,"%S",local_34);
        addPort(this);
      }
      CloseHandle(hObject);
      local_8 = 0xffffffff;
      if (0xf < local_38) {
        pnVar4 = (nothrow_t *)(local_38 + 1);
        pvVar7 = pvVar1;
        if ((nothrow_t *)0xfff < pnVar4) {
          pvVar7 = *(void **)((int)pvVar1 + -4);
          pnVar4 = (nothrow_t *)(local_38 + 0x24);
          if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar7))) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,pnVar4);
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x65);
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall HardwareOutput::initialisePort(int)

void __thiscall HardwareOutput::initialisePort(HardwareOutput *this,int param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int *lpFileName;
  HANDLE hFile;
  DWORD DVar4;
  BOOL BVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  _DCB local_28;
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)&stack0xfffffffc;
  uVar3 = 0;
  uVar6 = *(int *)(this + 0xc) - *(int *)(this + 8) >> 2;
  if (uVar6 != 0) {
    do {
      iVar8 = *(int *)(*(int *)(this + 8) + uVar3 * 4);
      if (*(int *)(iVar8 + 0x74) == param_1) {
        if (iVar8 == 0) goto LAB_004160d3;
        goto LAB_004160f8;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  iVar8 = 0;
LAB_004160d3:
  bVar2 = cc_assert_script_compatible("Hardware port doesn\'t exist.");
  if (!bVar2) {
    cocos2d::log("Assert failed: %s","Hardware port doesn\'t exist.");
  }
LAB_004160f8:
  piVar7 = (int *)(iVar8 + 0x18);
  lpFileName = piVar7;
  if (0xf < *(uint *)(iVar8 + 0x2c)) {
    lpFileName = (int *)*piVar7;
  }
  hFile = CreateFileA((LPCSTR)lpFileName,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0)
  ;
  *(HANDLE *)(iVar8 + 0x78) = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    DVar4 = GetLastError();
    if (DVar4 == 2) {
      *(undefined4 *)(iVar8 + 100) = 0;
      if (0xf < *(uint *)(iVar8 + 0x2c)) {
        piVar7 = (int *)*piVar7;
      }
      debugPrint("HARDWARE","Unable to open port \'%s\'",piVar7);
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    local_28.EofChar = '\0';
    local_28.EvtChar = '\0';
    local_28.wReserved1 = 0;
    local_28.DCBlength = 0;
    local_28.BaudRate = 0;
    local_28.fDummy2 = 0;
    local_28.fAbortOnError = 0;
    local_28.fRtsControl = 0;
    local_28.fNull = 0;
    local_28.fErrorChar = 0;
    local_28.fInX = 0;
    local_28.fOutX = 0;
    local_28.fTXContinueOnXoff = 0;
    local_28.fDsrSensitivity = 0;
    local_28.fDtrControl = 0;
    local_28.fOutxDsrFlow = 0;
    local_28.fOutxCtsFlow = 0;
    local_28.fParity = 0;
    local_28.fBinary = 0;
    local_28.wReserved = 0;
    local_28.XonLim = 0;
    local_28.XoffLim = 0;
    local_28.ByteSize = '\0';
    local_28.Parity = '\0';
    local_28.StopBits = '\0';
    local_28.XonChar = '\0';
    local_28.XoffChar = '\0';
    local_28.ErrorChar = '\0';
    BVar5 = GetCommState(hFile,&local_28);
    uVar1 = local_28._16_8_;
    if (BVar5 == 0) {
      *(undefined4 *)(iVar8 + 100) = 0;
      if (0xf < *(uint *)(iVar8 + 0x2c)) {
        piVar7 = (int *)*piVar7;
      }
      debugPrint("HARDWARE","Could not get serial parameters for port \'%s\'",piVar7);
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    local_28.BaudRate = 0x2580;
    local_28._8_4_ = local_28._8_4_ & 0xffffffdf | 0x10;
    local_28.ByteSize = '\b';
    local_28.Parity = '\0';
    local_28._21_3_ = SUB83(uVar1,5);
    local_28.StopBits = '\0';
    BVar5 = SetCommState(*(HANDLE *)(iVar8 + 0x78),&local_28);
    if (BVar5 == 0) {
      *(undefined4 *)(iVar8 + 100) = 0;
      if (0xf < *(uint *)(iVar8 + 0x2c)) {
        piVar7 = (int *)*piVar7;
      }
      debugPrint("HARDWARE","Could not set serial parameters for port \'%s\'",piVar7);
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    PurgeComm(*(HANDLE *)(iVar8 + 0x78),0xc);
  }
  if (0xf < *(uint *)(iVar8 + 0x2c)) {
    piVar7 = (int *)*piVar7;
  }
  debugPrint("HARDWARE","Initialised port \'%s\' with ID %d at speed \'%d\'",piVar7,
             *(undefined4 *)(iVar8 + 0x74),0x2580);
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}


// private: void __thiscall HardwareOutput::addPort(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall HardwareOutput::addPort(HardwareOutput *this,char *param_2)

{
  int iVar1;
  int iVar2;
  AnimationFrames **ppAVar3;
  char *pcVar4;
  AnimationFrames *pAVar5;
  void *pvVar6;
  nothrow_t *pnVar7;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_4c [5];
  uint local_38;
  HardwareOutput *local_34;
  AnimationFrames *local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b29c2;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_34 = this;
  std::basic_string<>::assign((basic_string<> *)local_2c,"",0);
  local_8._0_1_ = 1;
  pcVar4 = (char *)&param_2;
  if (0xf < in_stack_00000018) {
    pcVar4 = param_2;
  }
  std::basic_string<>::append((basic_string<> *)local_2c,pcVar4,in_stack_00000014);
  pAVar5 = operator_new(0x8c);
  local_8._0_1_ = 2;
  iVar1 = *(int *)(this + 0xc);
  iVar2 = *(int *)(this + 8);
  local_30 = pAVar5;
  std::basic_string<>::basic_string<>((basic_string<> *)local_4c,(basic_string<> *)local_2c);
  *(undefined4 *)(pAVar5 + 4) = 0;
  *(undefined4 *)(pAVar5 + 8) = 0;
  *(undefined4 *)(pAVar5 + 0xc) = 0;
  *(undefined4 *)(pAVar5 + 0x10) = 0;
  *(undefined4 *)(pAVar5 + 0x14) = 0;
  local_8._0_1_ = 4;
  *(undefined ***)pAVar5 = HardwareInterface::vftable;
  std::basic_string<>::basic_string<>((basic_string<> *)(pAVar5 + 0x18),(basic_string<> *)local_4c);
  *(undefined4 *)(pAVar5 + 0x40) = 0;
  *(undefined4 *)(pAVar5 + 0x44) = 0xf;
  pAVar5[0x30] = (AnimationFrames)0x0;
  *(undefined4 *)(pAVar5 + 0x48) = 0;
  *(undefined4 *)(pAVar5 + 0x4c) = 0;
  *(undefined4 *)(pAVar5 + 0x50) = 0;
  *(undefined4 *)(pAVar5 + 0x54) = 0;
  *(undefined4 *)(pAVar5 + 0x58) = 0;
  *(undefined4 *)(pAVar5 + 0x5c) = 0;
  *(undefined4 *)(pAVar5 + 0x60) = 0;
  *(undefined4 *)(pAVar5 + 100) = 1;
  *(undefined4 *)(pAVar5 + 0x68) = 0;
  *(undefined4 *)(pAVar5 + 0x6c) = 0;
  *(undefined4 *)(pAVar5 + 0x70) = 0;
  *(int *)(pAVar5 + 0x74) = iVar1 - iVar2 >> 2;
  local_8._0_1_ = 2;
  if (0xf < local_38) {
    pnVar7 = (nothrow_t *)(local_38 + 1);
    pvVar6 = local_4c[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_4c[0] + -4);
      pnVar7 = (nothrow_t *)(local_38 + 0x24);
      if (0x1f < (uint)((int)local_4c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  ppAVar3 = *(AnimationFrames ***)(this + 0xc);
  if (*(AnimationFrames ***)(this + 0x10) == ppAVar3) {
    local_30 = pAVar5;
    std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 8),ppAVar3,&local_30);
  }
  else {
    *ppAVar3 = pAVar5;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 4;
    local_30 = pAVar5;
  }
  *local_34 = (HardwareOutput)0x1;
  *(AnimationFrames **)(local_34 + 4) = local_30;
  if (0xf < local_18) {
    pnVar7 = (nothrow_t *)(local_18 + 1);
    pvVar6 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar7) {
      pvVar6 = *(void **)((int)local_2c[0] + -4);
      pnVar7 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar7);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < in_stack_00000018) {
    pnVar7 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar7) {
      pcVar4 = *(char **)(param_2 + -4);
      pnVar7 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar4,pnVar7);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}
