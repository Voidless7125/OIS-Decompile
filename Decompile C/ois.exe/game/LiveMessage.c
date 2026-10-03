#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// public: void __thiscall LiveMessage::generateRealMessage(void)

void __thiscall LiveMessage::generateRealMessage(LiveMessage *this)

{
  bool bVar1;
  int iVar2;
  basic_string<> *pbVar3;
  char *pcVar4;
  int iVar5;
  basic_string<> *pbVar6;
  LiveMessage *pLVar7;
  char *pcVar8;
  void *pvVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4030;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pbVar6 = (basic_string<> *)(this + 0x1c);
  *(undefined4 *)(this + 0x2c) = 0;
  pbVar3 = pbVar6;
  if (0xf < *(uint *)(this + 0x30)) {
    pbVar3 = *(basic_string<> **)pbVar6;
  }
  *pbVar3 = (basic_string<>)0x0;
  pLVar7 = this + 4;
  if (0xf < *(uint *)(this + 0x18)) {
    pLVar7 = *(LiveMessage **)pLVar7;
  }
  pcVar4 = (char *)strUsingArgs((char *)local_2c,"`%c%s: ",(int)(char)(&DAT_005d06c0)[*(int *)this],
                                pLVar7,local_14);
  local_8 = 0;
  pcVar8 = pcVar4;
  if (0xf < *(uint *)(pcVar4 + 0x14)) {
    pcVar8 = *(char **)pcVar4;
  }
  std::basic_string<>::append(pbVar6,pcVar8,*(uint *)(pcVar4 + 0x10));
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    pnVar10 = (nothrow_t *)(local_18 + 1);
    pvVar9 = local_2c[0];
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar9 = *(void **)((int)local_2c[0] + -4);
      pnVar10 = (nothrow_t *)(local_18 + 0x24);
      if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) {
LAB_0042f234:
        local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar9,pnVar10);
  }
  if (*(int *)(this + 0x34) == 100) {
    pLVar7 = this + 0x38;
    if (0xf < *(uint *)(this + 0x4c)) {
      pLVar7 = *(LiveMessage **)(this + 0x38);
    }
    std::basic_string<>::append(pbVar6,(char *)pLVar7,*(uint *)(this + 0x48));
  }
  else {
    uVar11 = 0;
    bVar1 = false;
    if (*(int *)(this + 0x48) != 0) {
      do {
        iVar5 = rand();
        iVar2 = DAT_006576d0;
        if (*(int *)(this + 0x34) < iVar5 % 100 + 1) {
          bVar1 = true;
          iVar5 = rand();
          pbVar6 = &randomChars;
          if (0xf < DAT_006576d4) {
            pbVar6 = _randomChars;
          }
          pcVar4 = (char *)strUsingArgs((char *)local_2c,"`%c%c",
                                        (int)(char)(&DAT_005d06c4)[*(int *)this],
                                        (int)(char)pbVar6[iVar5 % iVar2]);
          local_8 = 1;
          pcVar8 = pcVar4;
          if (0xf < *(uint *)(pcVar4 + 0x14)) {
            pcVar8 = *(char **)pcVar4;
          }
          std::basic_string<>::append
                    ((basic_string<> *)(this + 0x1c),pcVar8,*(uint *)(pcVar4 + 0x10));
          local_8 = 0xffffffff;
          if (0xf < local_18) {
            pnVar10 = (nothrow_t *)(local_18 + 1);
            pvVar9 = local_2c[0];
            if ((nothrow_t *)0xfff < pnVar10) {
              pvVar9 = *(void **)((int)local_2c[0] + -4);
              pnVar10 = (nothrow_t *)(local_18 + 0x24);
              if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0042f234;
            }
            operator_delete(pvVar9,pnVar10);
          }
        }
        else {
          pLVar7 = this + 0x38;
          if (bVar1) {
            bVar1 = false;
            if (0xf < *(uint *)(this + 0x4c)) {
              pLVar7 = *(LiveMessage **)pLVar7;
            }
            pcVar4 = (char *)strUsingArgs((char *)local_2c,"`%c%c",
                                          (int)(char)(&DAT_005d06c0)[*(int *)this],
                                          (int)(char)pLVar7[uVar11]);
            local_8 = 2;
            pcVar8 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar8 = *(char **)pcVar4;
            }
            std::basic_string<>::append
                      ((basic_string<> *)(this + 0x1c),pcVar8,*(uint *)(pcVar4 + 0x10));
            local_8 = 0xffffffff;
            if (0xf < local_18) {
              pnVar10 = (nothrow_t *)(local_18 + 1);
              pvVar9 = local_2c[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_2c[0] + -4);
                pnVar10 = (nothrow_t *)(local_18 + 0x24);
                if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar9))) goto LAB_0042f234;
              }
              operator_delete(pvVar9,pnVar10);
            }
          }
          else {
            if (0xf < *(uint *)(this + 0x4c)) {
              pLVar7 = *(LiveMessage **)pLVar7;
            }
            pcVar4 = (char *)strUsingArgs((char *)local_44,"%c",(int)(char)pLVar7[uVar11]);
            local_8 = 3;
            pcVar8 = pcVar4;
            if (0xf < *(uint *)(pcVar4 + 0x14)) {
              pcVar8 = *(char **)pcVar4;
            }
            std::basic_string<>::append
                      ((basic_string<> *)(this + 0x1c),pcVar8,*(uint *)(pcVar4 + 0x10));
            local_8 = 0xffffffff;
            if (0xf < local_30) {
              pnVar10 = (nothrow_t *)(local_30 + 1);
              pvVar9 = local_44[0];
              if ((nothrow_t *)0xfff < pnVar10) {
                pvVar9 = *(void **)((int)local_44[0] + -4);
                pnVar10 = (nothrow_t *)(local_30 + 0x24);
                if (0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar9))) goto LAB_0042f234;
              }
              operator_delete(pvVar9,pnVar10);
            }
            local_34 = 0;
            local_30 = 0xf;
            local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(this + 0x48));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void * __thiscall LiveMessage::`scalar deleting destructor'(unsigned int)

void * __thiscall LiveMessage::_scalar_deleting_destructor_(LiveMessage *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  
  uVar1 = *(uint *)(this + 0x4c);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x38);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0042f5ae;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0xf;
  this[0x38] = (LiveMessage)0x0;
  uVar1 = *(uint *)(this + 0x30);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 0x1c);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) goto LAB_0042f5ae;
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xf;
  this[0x1c] = (LiveMessage)0x0;
  uVar1 = *(uint *)(this + 0x18);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(this + 4);
    pnVar4 = (nothrow_t *)(uVar1 + 1);
    pvVar3 = pvVar2;
    if ((nothrow_t *)0xfff < pnVar4) {
      pvVar3 = *(void **)((int)pvVar2 + -4);
      pnVar4 = (nothrow_t *)(uVar1 + 0x24);
      if (0x1f < (uint)((int)pvVar2 + (-4 - (int)pvVar3))) {
LAB_0042f5ae:
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,pnVar4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0xf;
  this[4] = (LiveMessage)0x0;
  operator_delete(this,(nothrow_t *)0x50);
  return this;
}
