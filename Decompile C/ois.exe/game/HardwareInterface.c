#include "../ois.exe.h"


// public: __thiscall HardwareInterface::~HardwareInterface(void)

void __thiscall HardwareInterface::~HardwareInterface(HardwareInterface *this)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  allocator<> *unaff_ESI;
  InputCommand *unaff_EDI;
  
  *(undefined ***)this = vftable;
  if (*(HANDLE *)(this + 0x78) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(this + 0x78));
    *(undefined4 *)(this + 0x78) = 0;
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x70) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00416433;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(InputCommand **)(this + 0x54) != (InputCommand *)0x0) {
    std::_Destroy_range<>(*(InputCommand **)(this + 0x54),unaff_EDI,unaff_ESI);
    pvVar1 = *(void **)(this + 0x54);
    pnVar4 = (nothrow_t *)(((*(int *)(this + 0x5c) - (int)pvVar1) / 0x38) * 0x38);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00416433;
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
  }
  std::vector<>::_Tidy((vector<> *)(this + 0x48));
  uVar2 = *(uint *)(this + 0x44);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x30);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00416433;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0xf;
  this[0x30] = (HardwareInterface)0x0;
  uVar2 = *(uint *)(this + 0x2c);
  if (0xf < uVar2) {
    pvVar1 = *(void **)(this + 0x18);
    pnVar4 = (nothrow_t *)(uVar2 + 1);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = (nothrow_t *)(uVar2 + 0x24);
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) goto LAB_00416433;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0xf;
  this[0x18] = (HardwareInterface)0x0;
  *(undefined ***)this = Interface::vftable;
  pvVar1 = *(void **)(this + 0xc);
  if (pvVar1 != (void *)0x0) {
    pnVar4 = (nothrow_t *)(*(int *)(this + 0x14) - (int)pvVar1 & 0xfffffffc);
    pvVar3 = pvVar1;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar1 + -4);
      pnVar4 = pnVar4 + 0x23;
      if (0x1f < (uint)((int)pvVar1 + (-4 - (int)pvVar3))) {
LAB_00416433:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  return;
}


// public: virtual void __thiscall HardwareInterface::sendElementData(char,int)

void __thiscall HardwareInterface::sendElementData(HardwareInterface *this,char param_1,int param_2)

{
  HardwareOutput *pHVar1;
  
  if (HardwareOutput::m_instance == (HardwareOutput *)0x0) {
    pHVar1 = operator_new(0x14);
    HardwareOutput::m_instance = pHVar1;
    *pHVar1 = (HardwareOutput)0x0;
    *(undefined4 *)(pHVar1 + 4) = 0;
    *(undefined4 *)(pHVar1 + 8) = 0;
    *(undefined4 *)(pHVar1 + 0xc) = 0;
    *(undefined4 *)(pHVar1 + 0x10) = 0;
  }
  return;
}


// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// public: virtual void __cdecl HardwareInterface::sendLine(char const *,...)

void __thiscall HardwareInterface::sendLine(HardwareInterface *this,char *param_1,...)

{
  char cVar1;
  __uint64 *p_Var2;
  BOOL BVar3;
  char *pcVar4;
  undefined4 in_stack_00000008;
  undefined1 *puVar5;
  undefined4 uVar6;
  DWORD DStack_4114;
  char acStack_4110 [240];
  char acStack_4020 [16];
  undefined1 local_4010 [16388];
  uint local_c;
  
  local_c = ___security_cookie ^ (uint)&DStack_4114;
  if (*(int *)(param_1 + 0x74) != -1) {
    puVar5 = local_4010;
    uVar6 = 0xffffffff;
    p_Var2 = ___local_stdio_printf_options();
    __stdio_common_vsprintf
              ((uint)*p_Var2 | 1,*(undefined4 *)((int)p_Var2 + 4),puVar5,uVar6,in_stack_00000008);
    if (OISConfiguration::hardwareCRLF == false) {
      _sprintf(&stack0xffffbee0,"%s%c",acStack_4020,'\n');
    }
    else {
      _sprintf(&stack0xffffbee0,"%s%c%c",acStack_4020,'\r','\n');
    }
    pcVar4 = acStack_4110;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    BVar3 = WriteFile(*(HANDLE *)(param_1 + 0x78),acStack_4110,(int)pcVar4 - (int)(acStack_4110 + 1)
                      ,&DStack_4114,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      ClearCommError(*(HANDLE *)(param_1 + 0x78),(LPDWORD)(param_1 + 0x88),
                     (LPCOMSTAT)(param_1 + 0x7c));
      __security_check_cookie(local_c ^ (uint)&DStack_4114);
      return;
    }
    debugPrint("HARDWARE","Sent \'%s\'");
  }
  __security_check_cookie(local_c ^ (uint)&DStack_4114);
  return;
}


// public: void __thiscall HardwareInterface::runSyncLogic(float)

void __thiscall HardwareInterface::runSyncLogic(HardwareInterface *this,float param_1)

{
  float fVar1;
  AnimationFrames **ppAVar2;
  _Func_impl_no_alloc<> *p_Var3;
  bool bVar4;
  function<> *pfVar5;
  DataRequest *pDVar6;
  basic_string<> *pbVar7;
  int iVar8;
  basic_string<> *pbVar9;
  int iVar10;
  allocator<> *unaff_EDI;
  float in_XMM1_Da;
  undefined4 uVar11;
  undefined4 uStack_124;
  int *local_d8;
  AnimationFrames local_d4 [36];
  int *local_b0;
  DataRequest *local_ac;
  DataRequest *local_a8;
  DataRequest *local_a4;
  int local_a0;
  int local_9c;
  InputCommand *local_94;
  uint local_90;
  basic_string<> *local_8c [3];
  basic_string<> *local_80;
  char local_79;
  AnimationFrames *local_78 [10];
  _Func_impl_no_alloc<> *local_50;
  int local_4c [2];
  AnimationFrames local_44 [36];
  AnimationFrames *local_20;
  undefined4 local_1c;
  function<> *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2935;
  local_10 = ExceptionList;
  pfVar5 = (function<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  fVar1 = *(float *)(this + 0x60);
  *(float *)(this + 0x60) = in_XMM1_Da + fVar1;
  local_14 = pfVar5;
  if (5.0 < in_XMM1_Da + fVar1) {
    *(undefined4 *)(this + 0x60) = 0;
    (**(code **)(*(int *)this + 4))();
  }
  local_90 = 0;
  pbVar9 = (basic_string<> *)(*(int *)(this + 0x4c) - *(int *)(this + 0x48));
  if ((int)pbVar9 / 0x18 + ((int)pbVar9 >> 0x1f) != (int)pbVar9 >> 0x1f) {
    local_80 = (basic_string<> *)0x0;
    do {
      debugPrint("HARDWARE","Port %d: received \'%s\'");
      std::basic_string<>::basic_string<>
                ((basic_string<> *)&uStack_124,(basic_string<> *)(local_80 + *(int *)(this + 0x48)))
      ;
      splitStringBy();
      local_8 = 0;
      iVar8 = local_9c - local_a0 >> 0x1f;
      iVar10 = (local_9c - local_a0) / 0x18 + iVar8;
      if ((uint)(iVar10 - iVar8) < 2) {
        if (iVar10 == iVar8) {
          debugPrint("HARDWARE","Got null data.");
        }
        else {
          bVar4 = std::_Traits_equal<>("ACT",3,(char *)pfVar5,(uint)unaff_EDI);
          if (bVar4) {
            *(undefined4 *)(this + 100) = 3;
            debugPrint("HARDWARE","Port %d: entered ACTIVE state");
            forceUpdateDataRequests(this);
            std::vector<>::_Tidy((vector<> *)&local_a0);
            goto LAB_00416d0f;
          }
          debugPrint("HARDWARE","command = \'%s\'");
        }
      }
      else {
        std::basic_string<>::basic_string<>
                  ((basic_string<> *)&uStack_124,(basic_string<> *)(local_a0 + 0x18));
        splitStringBy();
        local_8._0_1_ = 1;
        bVar4 = std::_Traits_equal<>("NIB",3,(char *)pfVar5,(uint)unaff_EDI);
        if (bVar4) {
          pDVar6 = operator_new(0x68);
          local_8._0_1_ = 2;
          local_a4 = pDVar6;
          std::basic_string<>::basic_string<>((basic_string<> *)&uStack_124,local_8c[0]);
          pbVar7 = local_8c[0] + 0x18;
          if (0xf < *(uint *)(local_8c[0] + 0x2c)) {
            pbVar7 = *(basic_string<> **)pbVar7;
          }
          uVar11 = 0;
          iVar8 = atoi((char *)pbVar7);
          local_78[0] = (AnimationFrames *)DataRequest::DataRequest(pDVar6,iVar8,uVar11);
          local_8 = CONCAT31(local_8._1_3_,1);
          ppAVar2 = *(AnimationFrames ***)(this + 0x6c);
          if (*(AnimationFrames ***)(this + 0x70) == ppAVar2) {
            std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x68),ppAVar2,local_78);
          }
          else {
            *ppAVar2 = local_78[0];
            *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 4;
          }
          pbVar7 = local_8c[0] + 0x18;
          if (0xf < *(uint *)(local_8c[0] + 0x2c)) {
            pbVar7 = *(basic_string<> **)pbVar7;
          }
          atoi((char *)pbVar7);
          uStack_124 = 0x41679e;
          debugPrint("HARDWARE","Added Boolean Data Request on port %d (\'%s\', %d)");
          std::vector<>::_Tidy((vector<> *)local_8c);
        }
        else {
          bVar4 = std::_Traits_equal<>("CMD",3,(char *)pfVar5,(uint)unaff_EDI);
          if (bVar4) {
            std::basic_string<>::basic_string<>((basic_string<> *)&uStack_124,local_8c[0]);
            getShipCommandType();
            ShipInterface::getShipCommandFunction((ShipCommand)pfVar5);
            local_50 = (_Func_impl_no_alloc<> *)0x0;
            local_8._0_1_ = 4;
            if (local_d8 != (int *)0x0) {
              local_50 = std::_Global_new<>(pfVar5);
            }
            p_Var3 = local_50;
            local_8._0_1_ = 5;
            if (local_d8 != (int *)0x0) {
              (**(code **)(*local_d8 + 0x10))();
              local_d8 = (int *)0x0;
            }
            local_79 = p_Var3 == (_Func_impl_no_alloc<> *)0x0;
            local_8._0_1_ = 6;
            if ((p_Var3 == (_Func_impl_no_alloc<> *)0x0) &&
               (bVar4 = cc_assert_script_compatible
                                  ("Unknown command function attempted from serial device."), !bVar4
               )) {
              cocos2d::log("Assert failed: %s");
            }
            local_78[0] = local_d4;
            local_b0 = (int *)0x0;
            local_8._0_1_ = 7;
            if (local_79 == '\0') {
              local_b0 = (int *)(*(code *)**(undefined4 **)p_Var3)();
            }
            pbVar7 = local_8c[0] + 0x18;
            if (0xf < *(uint *)(local_8c[0] + 0x2c)) {
              pbVar7 = *(basic_string<> **)pbVar7;
            }
            local_4c[0] = atoi((char *)pbVar7);
            local_78[0] = local_44;
            local_20 = (AnimationFrames *)0x0;
            local_8._0_1_ = 9;
            if (local_b0 != (int *)0x0) {
              local_20 = (AnimationFrames *)(**(code **)*local_b0)();
            }
            local_1c = 0;
            local_8._0_1_ = 10;
            if (local_b0 != (int *)0x0) {
              (**(code **)(*local_b0 + 0x10))();
              local_b0 = (int *)0x0;
            }
            local_8._0_1_ = 0xb;
            local_78[0] = *(AnimationFrames **)(this + 0x58);
            if (*(InputCommand **)(this + 0x5c) == (InputCommand *)local_78[0]) {
              std::vector<>::_Emplace_reallocate<>
                        ((vector<> *)(this + 0x54),(InputCommand *)local_78[0],
                         (InputCommand *)local_4c);
            }
            else {
              *(int *)local_78[0] = local_4c[0];
              local_94 = (InputCommand *)(local_78[0] + 8);
              *(undefined4 *)(local_78[0] + 0x2c) = 0;
              local_8._0_1_ = 0xc;
              if (local_20 != (AnimationFrames *)0x0) {
                if (local_20 != local_44) {
                  *(AnimationFrames **)(local_78[0] + 0x2c) = local_20;
                  local_20 = (AnimationFrames *)0x0;
                  *(undefined4 *)(local_78[0] + 0x30) = local_1c;
                  *(int *)(this + 0x58) = *(int *)(this + 0x58) + 0x38;
                  goto LAB_004169d4;
                }
                uVar11 = (**(code **)(*(int *)local_20 + 4))();
                *(undefined4 *)(local_94 + 0x24) = uVar11;
                local_8._0_1_ = 0xd;
                if (local_20 != (AnimationFrames *)0x0) {
                  (**(code **)(*(int *)local_20 + 0x10))();
                  local_20 = (AnimationFrames *)0x0;
                }
              }
              *(undefined4 *)(local_78[0] + 0x30) = local_1c;
              *(int *)(this + 0x58) = *(int *)(this + 0x58) + 0x38;
            }
LAB_004169d4:
            local_8._0_1_ = 0xe;
            if (local_20 != (AnimationFrames *)0x0) {
              (**(code **)(*(int *)local_20 + 0x10))();
            }
            local_8._0_1_ = 6;
            pbVar7 = local_8c[0] + 0x18;
            if (0xf < *(uint *)(local_8c[0] + 0x2c)) {
              pbVar7 = *(basic_string<> **)pbVar7;
            }
            atoi((char *)pbVar7);
            uStack_124 = 0x416a2b;
            debugPrint("HARDWARE","Added input command on port %d (\'%s\', %d)");
            local_8._0_1_ = 0xf;
            if (local_79 == '\0') {
              (**(code **)(*(int *)p_Var3 + 0x10))();
              std::vector<>::_Tidy((vector<> *)local_8c);
            }
            else {
LAB_00416c50:
              std::vector<>::_Tidy((vector<> *)local_8c);
            }
          }
          else {
            bVar4 = std::_Traits_equal<>("NIN",3,(char *)pfVar5,(uint)unaff_EDI);
            if (bVar4) {
              pDVar6 = operator_new(0x68);
              local_8._0_1_ = 0x10;
              local_a8 = pDVar6;
              std::basic_string<>::basic_string<>((basic_string<> *)&uStack_124,local_8c[0]);
              pbVar7 = local_8c[0] + 0x18;
              if (0xf < *(uint *)(local_8c[0] + 0x2c)) {
                pbVar7 = *(basic_string<> **)pbVar7;
              }
              uVar11 = 1;
              iVar8 = atoi((char *)pbVar7);
              local_78[0] = (AnimationFrames *)DataRequest::DataRequest(pDVar6,iVar8,uVar11);
              local_8 = CONCAT31(local_8._1_3_,1);
              ppAVar2 = *(AnimationFrames ***)(this + 0x6c);
              if (*(AnimationFrames ***)(this + 0x70) == ppAVar2) {
                std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x68),ppAVar2,local_78);
              }
              else {
                *ppAVar2 = local_78[0];
                *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 4;
              }
              pbVar7 = local_8c[0] + 0x18;
              if (0xf < *(uint *)(local_8c[0] + 0x2c)) {
                pbVar7 = *(basic_string<> **)pbVar7;
              }
              atoi((char *)pbVar7);
              uStack_124 = 0x416b24;
              debugPrint("HARDWARE","Added Integer Data Request on port %d (\'%s\', %d)");
              std::vector<>::_Tidy((vector<> *)local_8c);
            }
            else {
              bVar4 = std::_Traits_equal<>("NIF",3,(char *)pfVar5,(uint)unaff_EDI);
              if (!bVar4) {
                bVar4 = std::_Traits_equal<>("DBG",3,(char *)pfVar5,(uint)unaff_EDI);
                if (bVar4) {
                  debugPrint("HARDWARE","HARDWARE DEBUG [port %d]: \'%s\'");
                }
                goto LAB_00416c50;
              }
              pDVar6 = operator_new(0x68);
              local_8._0_1_ = 0x11;
              local_ac = pDVar6;
              std::basic_string<>::basic_string<>((basic_string<> *)&uStack_124,local_8c[0]);
              pbVar7 = local_8c[0] + 0x18;
              if (0xf < *(uint *)(local_8c[0] + 0x2c)) {
                pbVar7 = *(basic_string<> **)pbVar7;
              }
              uVar11 = 2;
              iVar8 = atoi((char *)pbVar7);
              local_78[0] = (AnimationFrames *)DataRequest::DataRequest(pDVar6,iVar8,uVar11);
              local_8 = CONCAT31(local_8._1_3_,1);
              ppAVar2 = *(AnimationFrames ***)(this + 0x6c);
              if (*(AnimationFrames ***)(this + 0x70) == ppAVar2) {
                std::vector<>::_Emplace_reallocate<>((vector<> *)(this + 0x68),ppAVar2,local_78);
              }
              else {
                *ppAVar2 = local_78[0];
                *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 4;
              }
              pbVar7 = local_8c[0] + 0x18;
              if (0xf < *(uint *)(local_8c[0] + 0x2c)) {
                pbVar7 = *(basic_string<> **)pbVar7;
              }
              atoi((char *)pbVar7);
              uStack_124 = 0x416bfc;
              debugPrint("HARDWARE","Added Float Data Request on port %d (\'%s\', %d)");
              std::vector<>::_Tidy((vector<> *)local_8c);
            }
          }
        }
      }
      local_8 = 0xffffffff;
      std::vector<>::_Tidy((vector<> *)&local_a0);
      local_90 = local_90 + 1;
      pbVar9 = local_80 + 0x18;
      local_80 = pbVar9;
    } while (local_90 < (uint)((*(int *)(this + 0x4c) - *(int *)(this + 0x48)) / 0x18));
  }
  std::_Destroy_range<>(pbVar9,(basic_string<> *)pfVar5,unaff_EDI);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x48);
LAB_00416d0f:
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall HardwareInterface::runActiveLogic(float)

void __thiscall HardwareInterface::runActiveLogic(HardwareInterface *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  basic_string<> *pbVar3;
  uint uVar4;
  basic_string<> *pbVar5;
  int iVar6;
  int iVar7;
  char *_Str;
  allocator<> *unaff_EDI;
  float fVar8;
  float in_XMM1_Da;
  basic_string<> abStack_7c [4];
  undefined4 uStack_78;
  int local_50;
  int local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  basic_string<> *local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b2968;
  local_10 = ExceptionList;
  pbVar3 = (basic_string<> *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  iVar7 = *(int *)(this + 0x54);
  uVar4 = 0;
  iVar6 = *(int *)(this + 0x58) - iVar7 >> 0x1f;
  if ((*(int *)(this + 0x58) - iVar7) / 0x38 + iVar6 != iVar6) {
    iVar6 = 0;
    do {
      fVar8 = *(float *)(iVar7 + 0x30 + iVar6);
      if ((0.0 < fVar8) &&
         (fVar8 = fVar8 - in_XMM1_Da, *(float *)(iVar7 + 0x30 + iVar6) = fVar8, fVar8 <= 0.0)) {
        *(undefined4 *)(iVar7 + 0x30 + iVar6) = 0;
      }
      iVar7 = *(int *)(this + 0x54);
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0x38;
      local_1c = uVar4;
    } while (uVar4 < (uint)((*(int *)(this + 0x58) - iVar7) / 0x38));
  }
  iVar7 = *(int *)(this + 0x48);
  local_18 = (basic_string<> *)0x0;
  pbVar5 = (basic_string<> *)(*(int *)(this + 0x4c) - iVar7);
  if ((int)pbVar5 / 0x18 + ((int)pbVar5 >> 0x1f) != (int)pbVar5 >> 0x1f) {
    local_1c = 0;
    do {
      std::basic_string<>::basic_string<>(abStack_7c,(basic_string<> *)(local_1c + iVar7));
      splitStringBy();
      iVar7 = local_50;
      local_8 = 0;
      if (1 < (uint)((local_4c - local_50) / 0x18)) {
        bVar2 = std::_Traits_equal<>("EXC",3,(char *)pbVar3,(uint)unaff_EDI);
        if (bVar2) {
          _Str = (char *)(iVar7 + 0x18);
          if (0xf < *(uint *)(iVar7 + 0x2c)) {
            _Str = *(char **)_Str;
          }
          local_20 = atoi(_Str);
          uStack_78 = 0x416f2a;
          debugPrint("HARDWARE","Port %d: Executing command %d");
          iVar7 = *(int *)(this + 0x54);
          local_14 = 0;
          iVar6 = *(int *)(this + 0x58) - iVar7 >> 0x1f;
          if ((*(int *)(this + 0x58) - iVar7) / 0x38 + iVar6 != iVar6) {
            iVar6 = 0;
            do {
              if ((*(int *)(iVar7 + iVar6) == local_20) && (*(float *)(iVar7 + 0x30 + iVar6) == 0.0)
                 ) {
                local_24 = *(undefined4 *)(g_gameData + 0xd0);
                local_44 = 0;
                local_3c = 0;
                local_34 = 0;
                piVar1 = *(int **)(iVar7 + 0x2c + iVar6);
                if (piVar1 == (int *)0x0) {
                    // WARNING: Subroutine does not return
                  std::_Xbad_function_call();
                }
                uStack_78 = 0x416fb1;
                (**(code **)(*piVar1 + 8))();
                *(undefined4 *)(iVar6 + 0x30 + *(int *)(this + 0x54)) = 0x3f000000;
              }
              iVar7 = *(int *)(this + 0x54);
              iVar6 = iVar6 + 0x38;
              local_14 = local_14 + 1;
            } while (local_14 < (uint)((*(int *)(this + 0x58) - iVar7) / 0x38));
          }
        }
        else {
          bVar2 = std::_Traits_equal<>("DBG",3,(char *)pbVar3,(uint)unaff_EDI);
          if (bVar2) {
            uStack_78 = 0x417029;
            debugPrint("HARDWARE","HARDWARE DEBUG [port %d]: \'%s\'");
          }
        }
      }
      local_8 = 0xffffffff;
      std::vector<>::_Tidy((vector<> *)&local_50);
      iVar7 = *(int *)(this + 0x48);
      pbVar5 = local_18 + 1;
      local_1c = local_1c + 0x18;
      local_18 = pbVar5;
    } while (pbVar5 < (basic_string<> *)((*(int *)(this + 0x4c) - iVar7) / 0x18));
  }
  std::_Destroy_range<>(pbVar5,pbVar3,unaff_EDI);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x48);
  updateDataRequests(this,(float)pbVar3);
  ExceptionList = local_10;
  return;
}


// public: void __thiscall HardwareInterface::updateDataRequests(float)

void __thiscall HardwareInterface::updateDataRequests(HardwareInterface *this,float param_1)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float in_XMM1_Da;
  uint uStack_10;
  code *pcVar6;
  
  iVar7 = *(int *)(this + 0x68);
  uStack_10 = 0;
  if (*(int *)(this + 0x6c) - iVar7 >> 2 != 0) {
    do {
      pcVar6 = rand_exref;
      piVar2 = *(int **)(uStack_10 * 4 + iVar7);
      bVar3 = false;
      fVar1 = (float)piVar2[0x16];
      piVar2[0x16] = (int)(fVar1 - in_XMM1_Da);
      if (fVar1 - in_XMM1_Da <= 0.0) {
        bVar3 = true;
        if ((*piVar2 == 1) || (*piVar2 == 2)) {
          iVar7 = 0;
          iVar8 = 2;
          do {
            uVar5 = (*pcVar6)();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            iVar7 = iVar7 + uVar5 + 1;
            iVar8 = iVar8 + -1;
            pcVar6 = rand_exref;
          } while (iVar8 != 0);
          iVar8 = *(int *)(uStack_10 * 4 + *(int *)(this + 0x68));
        }
        else {
          iVar7 = 0;
          iVar8 = 2;
          do {
            uVar5 = (*pcVar6)();
            uVar5 = uVar5 & 0x80000001;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
            }
            iVar7 = iVar7 + uVar5 + 1;
            iVar8 = iVar8 + -1;
            pcVar6 = rand_exref;
          } while (iVar8 != 0);
          iVar7 = iVar7 + 4;
          iVar8 = *(int *)(uStack_10 * 4 + *(int *)(this + 0x68));
        }
        *(float *)(iVar8 + 0x58) = (float)iVar7;
      }
      iVar8 = uStack_10 * 4;
      piVar2 = *(int **)(iVar8 + *(int *)(this + 0x68));
      iVar7 = *piVar2;
      if (iVar7 == 1) {
        if ((int *)piVar2[0x15] == (int *)0x0) {
LAB_004173cf:
                    // WARNING: Subroutine does not return
          std::_Xbad_function_call();
        }
        fVar9 = (float10)(**(code **)(*(int *)piVar2[0x15] + 8))();
        if (((double)fVar9 != *(double *)(*(int *)(iVar8 + *(int *)(this + 0x68)) + 0x60)) ||
           (bVar3)) {
          *(double *)(*(int *)(iVar8 + *(int *)(this + 0x68)) + 0x60) = (double)fVar9;
          debugPrint("HARDWARE","Sending identifier %d, state = %f, as %f");
          (**(code **)(*(int *)this + 4))();
        }
      }
      else if (iVar7 == 2) {
        if ((int *)piVar2[0x15] == (int *)0x0) goto LAB_004173cf;
        fVar9 = (float10)(**(code **)(*(int *)piVar2[0x15] + 8))();
        if (((double)fVar9 != *(double *)(*(int *)(iVar8 + *(int *)(this + 0x68)) + 0x60)) ||
           (bVar3)) {
          *(double *)(*(int *)(iVar8 + *(int *)(this + 0x68)) + 0x60) = (double)fVar9;
          debugPrint("HARDWARE","Sending identifier %d, state = %f, as %f");
          (**(code **)(*(int *)this + 4))();
        }
      }
      else if (iVar7 == 0) {
        std::basic_string<>::assign((basic_string<> *)&stack0xffffffb4,"",0);
        bVar4 = std::_Func_class<>::operator()
                          ((_Func_class<> *)(*(int *)(*(int *)(this + 0x68) + iVar8) + 8),
                           *(undefined4 *)(g_gameData + 0xd0),0);
        if (((double)bVar4 != *(double *)(*(int *)(iVar8 + *(int *)(this + 0x68)) + 0x60)) ||
           (bVar3)) {
          *(double *)(*(int *)(iVar8 + *(int *)(this + 0x68)) + 0x60) = (double)bVar4;
          (**(code **)(*(int *)this + 4))();
        }
      }
      uStack_10 = uStack_10 + 1;
      iVar7 = *(int *)(this + 0x68);
    } while (uStack_10 < (uint)(*(int *)(this + 0x6c) - iVar7 >> 2));
  }
  return;
}


// public: void __thiscall HardwareInterface::forceUpdateDataRequests(void)

void __thiscall HardwareInterface::forceUpdateDataRequests(HardwareInterface *this)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  char *pcStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined8 local_14;
  undefined4 local_8;
  
  uVar5 = 0;
  iVar4 = *(int *)(this + 0x68);
  if (*(int *)(this + 0x6c) - iVar4 >> 2 != 0) {
    do {
      iVar1 = uVar5 * 4;
      piVar2 = *(int **)(iVar1 + iVar4);
      iVar4 = *piVar2;
      if (iVar4 == 1) {
        local_8 = 0;
        local_14 = (double)CONCAT44(*(undefined4 *)(g_gameData + 0xd0),(undefined4)local_14);
        if ((int *)piVar2[0x15] == (int *)0x0) {
LAB_00417599:
                    // WARNING: Subroutine does not return
          puStack_28 = (undefined4 *)&UNK_0041759f;
          std::_Xbad_function_call();
        }
        puStack_28 = &local_8;
        puStack_2c = (undefined4 *)((int)&local_14 + 4);
        uStack_34 = (double)CONCAT44(0x417440,(undefined4)uStack_34);
        fVar6 = (float10)(**(code **)(*(int *)piVar2[0x15] + 8))();
        local_14 = (double)fVar6;
        *(double *)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x60) = local_14;
        uStack_34 = *(double *)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x60);
        uStack_38 = *(undefined4 *)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x5c);
        pcStack_3c = "%d=%.0f";
        (**(code **)(*(int *)this + 4))(this);
      }
      else if (iVar4 == 2) {
        local_14 = (double)((ulonglong)local_14 & 0xffffffff);
        local_8 = *(undefined4 *)(g_gameData + 0xd0);
        if ((int *)piVar2[0x15] == (int *)0x0) goto LAB_00417599;
        puStack_28 = (undefined4 *)((int)&local_14 + 4);
        puStack_2c = &local_8;
        uStack_34 = (double)CONCAT44(0x4174b0,(undefined4)uStack_34);
        fVar6 = (float10)(**(code **)(*(int *)piVar2[0x15] + 8))();
        local_14 = (double)fVar6;
        *(double *)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x60) = local_14;
        uStack_34 = *(double *)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x60) * 100.0;
        uStack_38 = *(undefined4 *)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x5c);
        pcStack_3c = "%d=%.0f";
        (**(code **)(*(int *)this + 4))(this);
      }
      else if (iVar4 == 0) {
        puStack_28 = (undefined4 *)0xf;
        pcStack_3c = (char *)((uint)pcStack_3c & 0xffffff00);
        puStack_2c = (undefined4 *)iVar4;
        std::basic_string<>::assign((basic_string<> *)&pcStack_3c,"",0);
        bVar3 = std::_Func_class<>::operator()
                          ((_Func_class<> *)(*(int *)(*(int *)(this + 0x68) + iVar1) + 8),
                           *(undefined4 *)(g_gameData + 0xd0),0);
        puStack_28 = (undefined4 *)0x30;
        *(double *)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x60) = (double)bVar3;
        if (*(double *)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x60) != 0.0) {
          puStack_28 = (undefined4 *)0x31;
        }
        puStack_2c = *(undefined4 **)(*(int *)(iVar1 + *(int *)(this + 0x68)) + 0x5c);
        uStack_34 = (double)CONCAT44("%d=%c",this);
        uStack_38 = 0x41757b;
        (**(code **)(*(int *)this + 4))();
      }
      uVar5 = uVar5 + 1;
      iVar4 = *(int *)(this + 0x68);
    } while (uVar5 < (uint)(*(int *)(this + 0x6c) - iVar4 >> 2));
  }
  return;
}


// public: void __thiscall HardwareInterface::runLogic(float)

void __thiscall HardwareInterface::runLogic(HardwareInterface *this,float param_1)

{
  char cVar1;
  HardwareInterface *nNumberOfBytesToRead;
  BOOL BVar2;
  char *_Str;
  int iVar3;
  basic_string<> *pbVar4;
  int iVar5;
  allocator<> *unaff_ESI;
  basic_string<> *pbVar6;
  HardwareInterface *pHVar7;
  basic_string<> *unaff_EDI;
  basic_string<> *local_18;
  HardwareInterface *local_14;
  int local_10;
  HardwareInterface *local_c [2];
  
  if (*(int *)(this + 100) != 0) {
    ClearCommError(*(HANDLE *)(this + 0x78),(LPDWORD)(this + 0x88),(LPCOMSTAT)(this + 0x7c));
    iVar3 = *(int *)(this + 0x80);
    if ((iVar3 != 0) &&
       (debugPrint("HARDWARE","%lu bytes available from COM port.",iVar3), 0 < iVar3)) {
      ClearCommError(*(HANDLE *)(this + 0x78),(LPDWORD)(this + 0x88),(LPCOMSTAT)(this + 0x7c));
      pHVar7 = *(HardwareInterface **)(this + 0x80);
      nNumberOfBytesToRead = local_c[0];
      if ((pHVar7 != (HardwareInterface *)0x0) &&
         (nNumberOfBytesToRead = pHVar7, (HardwareInterface *)0x100 < pHVar7)) {
        nNumberOfBytesToRead = (HardwareInterface *)0x100;
      }
      BVar2 = ReadFile(*(HANDLE *)(this + 0x78),&lpBuffer_0065e450,(DWORD)nNumberOfBytesToRead,
                       (LPDWORD)&local_14,(LPOVERLAPPED)0x0);
      pHVar7 = local_14;
      if (BVar2 == 0) {
        local_14 = (HardwareInterface *)0xffffffff;
      }
      else {
        local_c[0] = local_14;
        if (local_14 != (HardwareInterface *)0xffffffff) {
          if ((HardwareInterface *)0xff < local_14) {
                    // WARNING: Subroutine does not return
            ___report_rangecheckfailure();
          }
          *(HardwareInterface *)((int)&lpBuffer_0065e450 + (int)local_14) = (HardwareInterface)0x0;
          debugPrint("HARDWARE","getInput(): got %d chars from port %d (\'%s\')",local_14,
                     *(undefined4 *)(this + 0x74),&lpBuffer_0065e450);
          local_10 = 0;
          if (0 < (int)pHVar7) {
            do {
              iVar3 = local_10;
              cVar1 = *(char *)((int)&lpBuffer_0065e450 + local_10);
              if (cVar1 == '\n') {
                pbVar4 = *(basic_string<> **)(this + 0x4c);
                pbVar6 = (basic_string<> *)(this + 0x30);
                if (*(basic_string<> **)(this + 0x50) == pbVar4) {
                  std::vector<>::_Emplace_reallocate<>
                            ((vector<> *)(this + 0x48),(basic_string<> *)pbVar4,pbVar6);
                }
                else {
                  std::basic_string<>::basic_string<>(pbVar4,pbVar6);
                  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 0x18;
                }
                *(undefined4 *)(this + 0x40) = 0;
                if (0xf < *(uint *)(this + 0x44)) {
                  pbVar6 = *(basic_string<> **)pbVar6;
                }
                *pbVar6 = (basic_string<>)0x0;
                iVar3 = local_10;
                pHVar7 = local_c[0];
              }
              else if (cVar1 != '\r') {
                std::basic_string<>::push_back((basic_string<> *)(this + 0x30),cVar1);
              }
              local_10 = iVar3 + 1;
            } while (local_10 < (int)pHVar7);
          }
          goto LAB_00417675;
        }
      }
      debugPrint("HARDWARE","Unable to find data from port %d",*(undefined4 *)(this + 0x74));
    }
  }
LAB_00417675:
  iVar3 = *(int *)(this + 100);
  if (iVar3 != 1) {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        runActiveLogic(this,(float)unaff_EDI);
      }
      return;
    }
    runSyncLogic(this,(float)unaff_EDI);
    return;
  }
  local_10 = *(int *)(this + 0x4c);
  local_c[0] = this + 0x48;
  iVar3 = *(int *)local_c[0];
  local_18 = (basic_string<> *)0x0;
  pbVar4 = (basic_string<> *)(local_10 - iVar3);
  if ((int)pbVar4 / 0x18 + ((int)pbVar4 >> 0x1f) != (int)pbVar4 >> 0x1f) {
    iVar5 = 0;
    do {
      _Str = (char *)(iVar5 + iVar3);
      if (0xf < *(uint *)(iVar5 + 0x14 + iVar3)) {
        _Str = *(char **)_Str;
      }
      iVar3 = atoi(_Str);
      if (iVar3 == 0x1c3) {
        *(undefined4 *)(this + 100) = 2;
        debugPrint("HARDWARE","Port %d: entered SYNC state",*(undefined4 *)(this + 0x74));
        (**(code **)(*(int *)this + 4))(this,"%d",0x1c4);
        std::vector<>::erase
                  ((vector<> *)(this + 0x48),local_c,*(int *)(this + 0x48) + (int)local_18 * 0x18);
        return;
      }
      local_10 = *(int *)(this + 0x4c);
      iVar3 = *(int *)(this + 0x48);
      iVar5 = iVar5 + 0x18;
      pbVar4 = local_18 + 1;
      local_18 = pbVar4;
    } while (pbVar4 < (basic_string<> *)((local_10 - iVar3) / 0x18));
  }
  pHVar7 = local_c[0];
  std::_Destroy_range<>(pbVar4,unaff_EDI,unaff_ESI);
  *(int *)(pHVar7 + 4) = *(int *)pHVar7;
  return;
}
