#include "../ois.exe.h"


// public: void __thiscall EmailManager::resetState(void)

void __thiscall EmailManager::resetState(EmailManager *this)

{
  int iVar1;
  EmailInstance *this_00;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar2 = 0;
  if (*(int *)(this + 0xc) - *(int *)(this + 8) >> 2 != 0) {
    do {
      *(undefined1 *)(*(int *)(*(int *)(this + 8) + uVar2 * 4) + 100) = 0;
      *(undefined1 *)(*(int *)(*(int *)(this + 8) + uVar2 * 4) + 0x65) = 0;
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined1 **)(*(int *)(*(int *)(this + 8) + iVar1) + 0x98) = &DAT_bf800000;
    } while (uVar2 < (uint)(*(int *)(this + 0xc) - *(int *)(this + 8) >> 2));
  }
  puVar3 = *(undefined4 **)(this + 0x14);
  uVar4 = 0;
  uVar2 = (*(int *)(this + 0x18) - (int)puVar3) + 3U >> 2;
  if (*(undefined4 **)(this + 0x18) < puVar3) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    do {
      this_00 = (EmailInstance *)*puVar3;
      if (this_00 != (EmailInstance *)0x0) {
        EmailInstance::_scalar_deleting_destructor_(this_00,(uint)this_00);
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != uVar2);
  }
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x14);
  return;
}


// public: class Email * __thiscall EmailManager::getEmail(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

Email * __thiscall EmailManager::getEmail(EmailManager *this,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint unaff_ESI;
  uint uVar6;
  Email *pEVar7;
  char *unaff_EDI;
  uint uVar8;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)(this + 8);
  uVar6 = 0;
  uVar8 = *(int *)(this + 0xc) - iVar1 >> 2;
  if (uVar8 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pEVar7 = *(Email **)(iVar1 + uVar6 * 4);
        goto LAB_00439cd2;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pEVar7 = (Email *)0x0;
LAB_00439cd2:
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
  return pEVar7;
}


// public: class EmailDraftSet * __thiscall EmailManager::getDraftSet(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

EmailDraftSet * __thiscall EmailManager::getDraftSet(EmailManager *this,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  char *pcVar4;
  nothrow_t *pnVar5;
  uint uVar6;
  uint unaff_ESI;
  uint uVar7;
  EmailDraftSet *pEVar8;
  char *unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  pcVar2 = param_2;
  iVar1 = *(int *)(this + 0x20);
  uVar6 = *(int *)(this + 0x24) - iVar1 >> 2;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      pcVar4 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar4 = pcVar2;
      }
      bVar3 = std::_Traits_equal<>(pcVar4,in_stack_00000014,unaff_EDI,unaff_ESI);
      if (bVar3) {
        pEVar8 = *(EmailDraftSet **)(iVar1 + uVar7 * 4);
        goto LAB_00439d74;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  pEVar8 = (EmailDraftSet *)0x0;
LAB_00439d74:
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
  return pEVar8;
}


// public: void __thiscall EmailManager::markEmailSent(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall EmailManager::markEmailSent(EmailManager *this,char *param_2)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  nothrow_t *pnVar6;
  uint uVar7;
  uint unaff_EDI;
  uint in_stack_00000014;
  uint in_stack_00000018;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4f48;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  pcVar4 = (char *)&param_2;
  if (0xf < in_stack_00000018) {
    pcVar4 = param_2;
  }
  debugPrint("GAME","Attempting to mark email \'%s\' as fired...",pcVar4);
  uVar7 = 0;
  bVar1 = false;
  pcVar4 = param_2;
  if (*(int *)(this + 0xc) - *(int *)(this + 8) >> 2 != 0) {
    do {
      pcVar5 = (char *)&param_2;
      if (0xf < in_stack_00000018) {
        pcVar5 = pcVar4;
      }
      bVar2 = std::_Traits_equal<>(pcVar5,in_stack_00000014,pcVar3,unaff_EDI);
      if (bVar2) {
        debugPrint("GAME","...marked");
        bVar1 = true;
        *(undefined1 *)(*(int *)(*(int *)(this + 8) + uVar7 * 4) + 0x65) = 1;
        *(undefined1 *)(*(int *)(*(int *)(this + 8) + uVar7 * 4) + 100) = 0;
        *(undefined1 **)(*(int *)(*(int *)(this + 8) + uVar7 * 4) + 0x98) = &DAT_bf800000;
        pcVar4 = param_2;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)(*(int *)(this + 0xc) - *(int *)(this + 8) >> 2));
    if (bVar1) goto LAB_00439ed7;
  }
  debugPrint("GAME","...NOT FOUND.");
  pcVar4 = param_2;
LAB_00439ed7:
  if (0xf < in_stack_00000018) {
    pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar3 = pcVar4;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar3 = *(char **)(pcVar4 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < pcVar4 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar6);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall EmailManager::sendEmail(class CommsData *,class Email *)

void __thiscall EmailManager::sendEmail(EmailManager *this,CommsData *param_1,Email *param_2)

{
  int iVar1;
  AnimationFrames **ppAVar2;
  bool bVar3;
  AnimationFrames *pAVar4;
  basic_string<> *pbVar5;
  AnimationFrames *pAVar6;
  LogSystem *this_00;
  char *pcVar7;
  uint unaff_ESI;
  basic_string<> *this_01;
  char *unaff_EDI;
  basic_string<> *this_02;
  EmailManager *local_8;
  
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x74) == '\0') {
    param_2[0x65] = (Email)0x1;
    local_8 = this;
    local_8 = operator_new(0xa0);
    pAVar4 = (AnimationFrames *)EmailInstance::EmailInstance((EmailInstance *)local_8);
    pbVar5 = (basic_string<> *)(param_2 + 0x68);
    local_8 = (EmailManager *)pAVar4;
    if ((basic_string<> *)(pAVar4 + 0x68) != pbVar5) {
      if (0xf < *(uint *)(param_2 + 0x7c)) {
        pbVar5 = *(basic_string<> **)pbVar5;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar4 + 0x68),(char *)pbVar5,*(uint *)(param_2 + 0x78));
    }
    pbVar5 = (basic_string<> *)(param_2 + 4);
    this_01 = (basic_string<> *)(pAVar4 + 4);
    if (this_01 != pbVar5) {
      if (0xf < *(uint *)(param_2 + 0x18)) {
        pbVar5 = *(basic_string<> **)pbVar5;
      }
      std::basic_string<>::assign(this_01,(char *)pbVar5,*(uint *)(param_2 + 0x14));
    }
    pbVar5 = (basic_string<> *)(param_2 + 0x1c);
    this_02 = (basic_string<> *)(pAVar4 + 0x1c);
    if (this_02 != pbVar5) {
      if (0xf < *(uint *)(param_2 + 0x30)) {
        pbVar5 = *(basic_string<> **)pbVar5;
      }
      std::basic_string<>::assign(this_02,(char *)pbVar5,*(uint *)(param_2 + 0x2c));
    }
    pbVar5 = (basic_string<> *)(param_2 + 0x4c);
    if ((basic_string<> *)(pAVar4 + 0x4c) != pbVar5) {
      if (0xf < *(uint *)(param_2 + 0x60)) {
        pbVar5 = *(basic_string<> **)pbVar5;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar4 + 0x4c),(char *)pbVar5,*(uint *)(param_2 + 0x5c));
    }
    pbVar5 = (basic_string<> *)(param_2 + 0x34);
    if ((basic_string<> *)(pAVar4 + 0x34) != pbVar5) {
      if (0xf < *(uint *)(param_2 + 0x48)) {
        pbVar5 = *(basic_string<> **)pbVar5;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar4 + 0x34),(char *)pbVar5,*(uint *)(param_2 + 0x44));
    }
    pbVar5 = (basic_string<> *)(param_2 + 0xa0);
    if ((basic_string<> *)(pAVar4 + 0x80) != pbVar5) {
      if (0xf < *(uint *)(param_2 + 0xb4)) {
        pbVar5 = *(basic_string<> **)pbVar5;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar4 + 0x80),(char *)pbVar5,*(uint *)(param_2 + 0xb0));
    }
    iVar1 = *(int *)(g_gameData + 0x124);
    pcVar7 = (char *)(iVar1 + 4);
    if (0xf < *(uint *)(iVar1 + 0x18)) {
      pcVar7 = *(char **)(iVar1 + 4);
    }
    bVar3 = std::_Traits_equal<>(pcVar7,*(uint *)(iVar1 + 0x14),unaff_EDI,unaff_ESI);
    if (bVar3) {
      pAVar6 = pAVar4 + 0x68;
      if (0xf < *(uint *)(pAVar4 + 0x7c)) {
        pAVar6 = *(AnimationFrames **)pAVar6;
      }
      LogSystem::addLogLine
                (this_00,*(LogPriority *)(*(int *)(g_gameData + 0xd0) + 0x224),&DAT_00000001,
                 "Email sent to %s",pAVar6);
      if (0xf < *(uint *)(pAVar4 + 0x30)) {
        this_02 = *(basic_string<> **)this_02;
      }
      if (0xf < *(uint *)(pAVar4 + 0x18)) {
        this_01 = *(basic_string<> **)this_01;
      }
      debugPrint("WORLD","Email sent to player from %s: %s",this_01,this_02);
    }
    ppAVar2 = *(AnimationFrames ***)(param_1 + 4);
    if (*(AnimationFrames ***)(param_1 + 8) != ppAVar2) {
      *ppAVar2 = pAVar4;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
      return;
    }
    std::vector<>::_Emplace_reallocate<>((vector<> *)param_1,ppAVar2,(AnimationFrames **)&local_8);
  }
  return;
}


// public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
// __thiscall EmailManager::getEmailStateText(void)

void __thiscall EmailManager::getEmailStateText(EmailManager *this)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  EmailManager *extraout_ECX;
  EmailManager *extraout_ECX_00;
  EmailManager *extraout_ECX_01;
  EmailManager *extraout_ECX_02;
  EmailManager *this_00;
  void *pvVar11;
  nothrow_t *pnVar12;
  basic_string<> *in_stack_00000004;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  EmailManager *pEVar10;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &DAT_005b4fa0;
  local_10 = ExceptionList;
  local_14 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(g_gameData + 0xd0) == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x14) = 0xf;
    *in_stack_00000004 = (basic_string<>)0x0;
    std::basic_string<>::assign(in_stack_00000004,"",0);
  }
  else {
    local_34 = 0;
    uStack_30 = 0xf;
    local_44 = local_44 & 0xffffff00;
    local_8 = 0;
    uStack_7 = 0;
    piVar1 = *(int **)(*(int *)(*(int *)(g_gameData + 0xd0) + 0x40) + 0x1c);
    if ((piVar1 == (int *)0x0) || (cVar4 = (**(code **)(*piVar1 + 0x10))(0,local_14), cVar4 == '\0')
       ) {
      std::basic_string<>::append((basic_string<> *)&local_44,"`$NO COMMS",10);
    }
    else {
      std::basic_string<>::append((basic_string<> *)&local_44,"`%*MESSAGES*\n",0xd);
      iVar5 = getUnsentEmailCount(this);
      if (iVar5 < 1) {
        std::basic_string<>::append((basic_string<> *)&local_44,"`3New   : `80\n",0xe);
      }
      else {
        iVar5 = getUnsentEmailCount(this);
        uVar6 = 0x33;
        if (*this != (EmailManager)0x0) {
          uVar6 = 0x30;
        }
        pcVar7 = (char *)strUsingArgs((char *)local_2c,"`%cNew   : %d\n",uVar6,iVar5);
        local_8 = 1;
        pcVar8 = pcVar7;
        if (0xf < *(uint *)(pcVar7 + 0x14)) {
          pcVar8 = *(char **)pcVar7;
        }
        std::basic_string<>::append((basic_string<> *)&local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
        local_8 = 0;
        if (0xf < local_18) {
          pnVar12 = (nothrow_t *)(local_18 + 1);
          pvVar11 = local_2c[0];
          if ((nothrow_t *)0xfff < pnVar12) {
            pvVar11 = *(void **)((int)local_2c[0] + -4);
            pnVar12 = (nothrow_t *)(local_18 + 0x24);
            if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar11,pnVar12);
        }
      }
      iVar5 = getDraftCount(this);
      if (iVar5 < 1) {
        iVar5 = getDraftCount(this);
        iVar9 = getDraftCount(this);
        pcVar8 = (char *)strUsingArgs((char *)local_2c,"`3Drafts: `%c%d\n",
                                      (uint)(iVar9 < 1) * 8 + 0x30,iVar5);
        local_8 = 3;
        uVar2 = *(uint *)(pcVar8 + 0x14);
      }
      else {
        iVar5 = getDraftCount(this);
        uVar6 = 0x33;
        if (*this != (EmailManager)0x0) {
          uVar6 = 0x30;
        }
        pcVar8 = (char *)strUsingArgs((char *)local_2c,"`3Drafts: `%c%d\n",uVar6,iVar5);
        local_8 = 2;
        uVar2 = *(uint *)(pcVar8 + 0x14);
      }
      pcVar7 = pcVar8;
      if (0xf < uVar2) {
        pcVar7 = *(char **)pcVar8;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar7,*(uint *)(pcVar8 + 0x10));
      local_8 = 0;
      pEVar10 = extraout_ECX;
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          uVar3 = local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0043a29d;
        }
        operator_delete(pvVar11,pnVar12);
        pEVar10 = extraout_ECX_00;
      }
      iVar5 = getUnreadEmailCount(pEVar10);
      pcVar7 = (char *)strUsingArgs((char *)local_2c,"`3Inbox : `%c%d\n",
                                    (uint)(iVar5 < 1) * 8 + 0x30,iVar5);
      local_8 = 4;
      pcVar8 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar8 = *(char **)pcVar7;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
      local_8 = 0;
      uVar3 = local_8;
      local_8 = 0;
      pEVar10 = extraout_ECX_01;
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) goto LAB_0043a29d;
        }
        operator_delete(pvVar11,pnVar12);
        pEVar10 = extraout_ECX_02;
      }
      iVar5 = getUnreadNewsArticleCount(pEVar10);
      iVar9 = getUnreadNewsArticleCount(this_00);
      pcVar7 = (char *)strUsingArgs((char *)local_2c,"`3News  : `%c%d\n",
                                    (uint)(iVar9 < 1) * 8 + 0x30,iVar5);
      local_8 = 5;
      pcVar8 = pcVar7;
      if (0xf < *(uint *)(pcVar7 + 0x14)) {
        pcVar8 = *(char **)pcVar7;
      }
      std::basic_string<>::append((basic_string<> *)&local_44,pcVar8,*(uint *)(pcVar7 + 0x10));
      if (0xf < local_18) {
        pnVar12 = (nothrow_t *)(local_18 + 1);
        pvVar11 = local_2c[0];
        if ((nothrow_t *)0xfff < pnVar12) {
          pvVar11 = *(void **)((int)local_2c[0] + -4);
          pnVar12 = (nothrow_t *)(local_18 + 0x24);
          uVar3 = local_8;
          if (0x1f < (uint)((int)local_2c[0] + (-4 - (int)pvVar11))) {
LAB_0043a29d:
            local_8 = uVar3;
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar11,pnVar12);
      }
    }
    *(undefined4 *)(in_stack_00000004 + 0x10) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
    *(uint *)in_stack_00000004 = local_44;
    *(undefined4 *)(in_stack_00000004 + 4) = uStack_40;
    *(undefined4 *)(in_stack_00000004 + 8) = uStack_3c;
    *(undefined4 *)(in_stack_00000004 + 0xc) = uStack_38;
    *(ulonglong *)(in_stack_00000004 + 0x10) = CONCAT44(uStack_30,local_34);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


// WARNING: Removing unreachable block (ram,0x0043a72b)
// WARNING: Removing unreachable block (ram,0x0043a739)
// WARNING: Removing unreachable block (ram,0x0043a749)
// WARNING: Removing unreachable block (ram,0x0043a74f)
// public: void __thiscall EmailManager::runLogic(class CommsData *,float,bool)

void __thiscall
EmailManager::runLogic(EmailManager *this,CommsData *param_1,float param_2,bool param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  SoundEngine *this_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float in_XMM2_Da;
  char *pcVar10;
  uint uVar11;
  byte local_2d;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b3dc8;
  local_10 = ExceptionList;
  uVar2 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar4 = DAT_0065830c;
  if (param_1 != (CommsData *)0x0) {
    fVar9 = *(float *)(this + 4) + in_XMM2_Da;
    *(float *)(this + 4) = fVar9;
    if (1.0 <= fVar9) {
      *this = (EmailManager)(*this == (EmailManager)0x0);
      *(float *)(this + 4) = fVar9 - 1.0;
    }
    local_8 = 0;
    iVar4 = DAT_0065830c;
    if (g_gameLogic[0x11b] == (GameLogic)0x0) {
      iVar5 = *(int *)(this + 0xc);
      uVar8 = 0;
      iVar6 = *(int *)(this + 8);
      uVar11 = uVar2;
      if (iVar5 - iVar6 >> 2 != 0) {
        do {
          iVar4 = *(int *)(iVar6 + uVar8 * 4);
          if (((*(char *)(iVar4 + 0x65) == '\0') && (0.0 < *(float *)(iVar4 + 0x98))) &&
             (fVar9 = *(float *)(iVar4 + 0x98) - ((in_XMM2_Da * 24.0) / 60.0) / 60.0,
             *(float *)(iVar4 + 0x98) = fVar9, fVar9 <= 0.0)) {
            *(undefined4 *)(iVar4 + 0x98) = 0;
            *(undefined1 *)(iVar4 + 100) = 1;
            *(undefined1 *)(*(int *)(*(int *)(this + 8) + uVar8 * 4) + 100) = 1;
            iVar4 = *(int *)(*(int *)(this + 8) + uVar8 * 4);
            puVar3 = (undefined4 *)(iVar4 + 0x1c);
            if (0xf < *(uint *)(iVar4 + 0x30)) {
              puVar3 = (undefined4 *)*puVar3;
            }
            debugPrint("WORLD","Email ready to receive: %s",puVar3,uVar11);
          }
          iVar5 = *(int *)(this + 0xc);
          uVar8 = uVar8 + 1;
          iVar6 = *(int *)(this + 8);
        } while (uVar8 < (uint)(iVar5 - iVar6 >> 2));
      }
      iVar4 = DAT_0065830c;
      if (param_2._0_1_ != '\0') {
        if ((*(int *)(g_gameData + 0xd0) != 0) && (uVar8 = 0, iVar5 - iVar6 >> 2 != 0)) {
          do {
            iVar4 = *(int *)(iVar6 + uVar8 * 4);
            if ((*(char *)(iVar4 + 0x65) == '\0') && (*(float *)(iVar4 + 0x98) == -1.0)) {
              uVar7 = 0;
              local_2d = 1;
              if (*(int *)(iVar4 + 0x84) - *(int *)(iVar4 + 0x80) >> 2 != 0) {
                do {
                  bVar1 = Requirement::checkReq
                                    (*(Requirement **)
                                      (*(int *)(*(int *)(iVar6 + uVar8 * 4) + 0x80) + uVar7 * 4),
                                     *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                     *(BankAccount **)(g_gameData + 0x124));
                  iVar6 = *(int *)(this + 8);
                  uVar7 = uVar7 + 1;
                  local_2d = local_2d & -bVar1;
                  iVar4 = *(int *)(iVar6 + uVar8 * 4);
                } while (uVar7 < (uint)(*(int *)(iVar4 + 0x84) - *(int *)(iVar4 + 0x80) >> 2));
                if (local_2d == 0) goto LAB_0043a6bc;
              }
              iVar4 = *(int *)(iVar6 + uVar8 * 4);
              if (*(float *)(iVar4 + 0x9c) <= 0.0) {
                *(undefined4 *)(iVar4 + 0x98) = 0;
                *(undefined1 *)(*(int *)(*(int *)(this + 8) + uVar8 * 4) + 100) = 1;
                iVar4 = *(int *)(*(int *)(this + 8) + uVar8 * 4);
                puVar3 = (undefined4 *)(iVar4 + 0x1c);
                if (0xf < *(uint *)(iVar4 + 0x30)) {
                  puVar3 = (undefined4 *)*puVar3;
                }
                pcVar10 = "Email requirements hit, no delay before sending: %s";
              }
              else {
                *(float *)(iVar4 + 0x98) = *(float *)(iVar4 + 0x9c);
                iVar4 = *(int *)(*(int *)(this + 8) + uVar8 * 4);
                puVar3 = (undefined4 *)(iVar4 + 0x1c);
                if (0xf < *(uint *)(iVar4 + 0x30)) {
                  puVar3 = (undefined4 *)*puVar3;
                }
                pcVar10 = "Email requirements hit, setting timer before sending it: %s";
              }
              debugPrint("WORLD",pcVar10,puVar3,uVar11);
            }
LAB_0043a6bc:
            uVar8 = uVar8 + 1;
            iVar6 = *(int *)(this + 8);
          } while (uVar8 < (uint)(*(int *)(this + 0xc) - iVar6 >> 2));
        }
        iVar4 = DAT_0065830c;
        if (((g_gameLogic[0x72] != (GameLogic)0x0) &&
            (iVar4 = getUnsentEmailCount(this), DAT_0065830c != -1)) &&
           ((DAT_0065830c < iVar4 &&
            (((DAT_0065830c != 0 && (iVar4 != 0)) &&
             (this_00 = Singleton<>::getInstance(), *this_00 != (SoundEngine)0x0)))))) {
          SoundEngine::addSound(this_00,6,0x31,-1,false,true,1.0);
        }
      }
    }
  }
  DAT_0065830c = iVar4;
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}


// public: int __thiscall EmailManager::getUnsentEmailCount(void)

int __thiscall EmailManager::getUnsentEmailCount(EmailManager *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x74) == '\0') {
    iVar3 = 0;
    if (g_gameLogic[0x11b] == (GameLogic)0x0) {
      uVar2 = 0;
      uVar4 = *(int *)(this + 0xc) - *(int *)(this + 8) >> 2;
      if (uVar4 != 0) {
        do {
          iVar1 = *(int *)(*(int *)(this + 8) + uVar2 * 4);
          if ((*(char *)(iVar1 + 0x65) == '\0') && (*(char *)(iVar1 + 100) != '\0')) {
            iVar3 = iVar3 + 1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4);
      }
    }
    return (*(int *)(this + 0x18) - *(int *)(this + 0x14) >> 2) + iVar3;
  }
  return 0;
}


// public: int __thiscall EmailManager::getUnreadEmailCount(void)

int __thiscall EmailManager::getUnreadEmailCount(EmailManager *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x74) == '\0') {
    iVar3 = 0;
    piVar1 = (int *)**(int **)(g_gameData + 300);
    for (iVar2 = (*(int **)(g_gameData + 300))[1] - (int)piVar1 >> 2; iVar2 != 0; iVar2 = iVar2 + -1
        ) {
      if ((*(char *)(*piVar1 + 100) == '\0') && (*(char *)(*piVar1 + 0x9c) == '\0')) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = piVar1 + 1;
    }
    return iVar3;
  }
  return 0;
}


// public: int __thiscall EmailManager::getUnreadNewsArticleCount(void)

int __thiscall EmailManager::getUnreadNewsArticleCount(EmailManager *this)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  nothrow_t *pnVar4;
  undefined4 *local_28;
  void *local_24 [5];
  uint local_10;
  uint local_8;
  
  local_8 = ___security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)(g_gameData + 300) == 0) {
    iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return iVar2;
  }
  puVar1 = *(undefined4 **)(*(int *)(g_gameData + 300) + 0xc);
  local_28 = (undefined4 *)*puVar1;
  do {
    if (local_28 == puVar1) {
      iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return iVar2;
    }
    std::basic_string<>::basic_string<>((basic_string<> *)local_24,(basic_string<> *)(local_28 + 4))
    ;
    if (0xf < local_10) {
      pnVar4 = (nothrow_t *)(local_10 + 1);
      pvVar3 = local_24[0];
      if ((nothrow_t *)0xfff < pnVar4) {
        pvVar3 = *(void **)((int)local_24[0] + -4);
        pnVar4 = (nothrow_t *)(local_10 + 0x24);
        if (0x1f < (uint)((int)local_24[0] + (-4 - (int)pvVar3))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,pnVar4);
    }
    std::_Tree_unchecked_const_iterator<>::operator++((_Tree_unchecked_const_iterator<> *)&local_28)
    ;
  } while( true );
}


// public: int __thiscall EmailManager::getDraftCount(void)

int __thiscall EmailManager::getDraftCount(EmailManager *this)

{
  basic_string<> *pbVar1;
  bool bVar2;
  bool bVar3;
  basic_string<> *pbVar4;
  EmailManager *pEVar5;
  int iVar6;
  int iVar7;
  basic_string<> *unaff_ESI;
  uint uVar8;
  uint uVar9;
  int iVar10;
  basic_string<> *unaff_EDI;
  int local_14;
  uint local_10;
  
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x74) != '\0') {
    return 0;
  }
  iVar7 = *(int *)(this + 0x20);
  local_14 = 0;
  local_10 = 0;
  iVar6 = 0;
  if (*(int *)(this + 0x24) - iVar7 >> 2 != 0) {
    do {
      pbVar1 = *(basic_string<> **)(*(int *)(g_gameData + 300) + 0x24);
      pbVar4 = std::_Find_unchecked<>
                         (*(basic_string<> **)(iVar7 + local_10 * 4),unaff_EDI,unaff_ESI);
      if (pbVar4 == pbVar1) {
        pEVar5 = Singleton<>::getInstance();
        uVar8 = 0;
        iVar7 = *(int *)(*(int *)(pEVar5 + 0x20) + local_10 * 4);
        iVar6 = *(int *)(iVar7 + 0x48);
        if (*(int *)(iVar7 + 0x4c) - iVar6 >> 2 != 0) {
          do {
            bVar2 = Requirement::checkReq
                              (*(Requirement **)(iVar6 + uVar8 * 4),
                               *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                               *(BankAccount **)(g_gameData + 0x124));
            if (!bVar2) goto LAB_0043aa88;
            uVar8 = uVar8 + 1;
            iVar6 = *(int *)(iVar7 + 0x48);
          } while (uVar8 < (uint)(*(int *)(iVar7 + 0x4c) - iVar6 >> 2));
        }
        uVar8 = 0;
        iVar6 = *(int *)(iVar7 + 0x54);
        if (*(int *)(iVar7 + 0x58) - iVar6 >> 2 != 0) {
          do {
            iVar10 = *(int *)(iVar6 + uVar8 * 4);
            uVar9 = 0;
            bVar2 = true;
            if (*(int *)(iVar10 + 0x68) - *(int *)(iVar10 + 100) >> 2 != 0) {
              do {
                bVar3 = Requirement::checkReq
                                  (*(Requirement **)
                                    (*(int *)(*(int *)(iVar6 + uVar8 * 4) + 100) + uVar9 * 4),
                                   *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                   *(BankAccount **)(g_gameData + 0x124));
                if (!bVar3) {
                  bVar2 = false;
                  break;
                }
                iVar6 = *(int *)(iVar7 + 0x54);
                uVar9 = uVar9 + 1;
                iVar10 = *(int *)(iVar6 + uVar8 * 4);
              } while (uVar9 < (uint)(*(int *)(iVar10 + 0x68) - *(int *)(iVar10 + 100) >> 2));
            }
            iVar6 = *(int *)(iVar7 + 0x54);
            iVar10 = local_14 + 1;
            if (!bVar2) {
              iVar10 = local_14;
            }
            uVar8 = uVar8 + 1;
            local_14 = iVar10;
          } while (uVar8 < (uint)(*(int *)(iVar7 + 0x58) - iVar6 >> 2));
        }
      }
LAB_0043aa88:
      local_10 = local_10 + 1;
      iVar7 = *(int *)(this + 0x20);
      iVar6 = local_14;
    } while (local_10 < (uint)(*(int *)(this + 0x24) - iVar7 >> 2));
  }
  return iVar6;
}


// public: void __thiscall EmailManager::syncEmails(class CommsData *)

void __thiscall EmailManager::syncEmails(EmailManager *this,CommsData *param_1)

{
  int iVar1;
  AnimationFrames **ppAVar2;
  GameData *pGVar3;
  uint uVar4;
  undefined4 ****ppppuVar5;
  EmailManager *this_00;
  LogSystem *this_01;
  nothrow_t *pnVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 ***local_34;
  undefined4 ***local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_005b4fd8;
  local_10 = ExceptionList;
  uVar4 = ___security_cookie ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = uVar4;
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x74) != '\0') goto LAB_0043ac83;
  local_34 = (undefined4 ****)0x0;
  local_20 = 0;
  local_1c = 0xf;
  local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
  local_8 = 0;
  if (g_gameLogic[0x11b] == (GameLogic)0x0) {
    uVar7 = 0;
    this_00 = *(EmailManager **)(this + 8);
    if (*(int *)(this + 0xc) - (int)this_00 >> 2 != 0) {
      do {
        iVar1 = *(int *)(this_00 + uVar7 * 4);
        if ((*(char *)(iVar1 + 0x65) == '\0') && (*(char *)(iVar1 + 100) != '\0')) {
          *(undefined1 *)(iVar1 + 100) = 0;
          sendEmail(this_00,param_1,*(Email **)(*(int *)(this + 8) + uVar7 * 4));
          local_34 = (undefined4 ***)((int)local_34 + 1);
          iVar1 = *(int *)(*(int *)(this + 8) + uVar7 * 4);
          ppppuVar5 = (undefined4 ****)(iVar1 + 4);
          if (local_30 != ppppuVar5) {
            if (0xf < *(uint *)(iVar1 + 0x18)) {
              ppppuVar5 = (undefined4 ****)*ppppuVar5;
            }
            std::basic_string<>::assign
                      ((basic_string<> *)local_30,(char *)ppppuVar5,*(uint *)(iVar1 + 0x14));
          }
        }
        uVar7 = uVar7 + 1;
        this_00 = *(EmailManager **)(this + 8);
      } while (uVar7 < (uint)(*(int *)(this + 0xc) - (int)this_00 >> 2));
    }
  }
  uVar7 = 0;
  this_01 = *(LogSystem **)(this + 0x14);
  if (*(int *)(this + 0x18) - (int)this_01 >> 2 != 0) {
    do {
      ppAVar2 = *(AnimationFrames ***)(param_1 + 4);
      if (*(AnimationFrames ***)(param_1 + 8) == ppAVar2) {
        std::vector<>::_Emplace_reallocate<>
                  ((vector<> *)param_1,ppAVar2,(AnimationFrames **)(this_01 + uVar7 * 4));
      }
      else {
        *ppAVar2 = *(AnimationFrames **)(this_01 + uVar7 * 4);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
      }
      iVar1 = *(int *)(*(int *)(this + 0x14) + uVar7 * 4);
      ppppuVar5 = (undefined4 ****)(iVar1 + 4);
      if (local_30 != ppppuVar5) {
        if (0xf < *(uint *)(iVar1 + 0x18)) {
          ppppuVar5 = (undefined4 ****)*ppppuVar5;
        }
        std::basic_string<>::assign
                  ((basic_string<> *)local_30,(char *)ppppuVar5,*(uint *)(iVar1 + 0x14));
      }
      uVar7 = uVar7 + 1;
      this_01 = *(LogSystem **)(this + 0x14);
      local_34 = (undefined4 ***)((int)local_34 + 1);
    } while (uVar7 < (uint)(*(int *)(this + 0x18) - (int)this_01 >> 2));
  }
  pGVar3 = g_gameData;
  *(LogSystem **)(this + 0x18) = this_01;
  iVar1 = *(int *)(pGVar3 + 0xcc);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x70) != 1)) {
    if (local_34 == (undefined4 ***)&DAT_00000001) {
      local_34 = local_30;
      if (0xf < local_1c) {
        local_34 = local_30[0];
      }
      pcVar8 = "Email received from %s";
    }
    else {
      if ((int)local_34 < 2) goto LAB_0043ac4d;
      pcVar8 = "%d emails received";
    }
    LogSystem::addLogLine
              (this_01,*(LogPriority *)(*(int *)(pGVar3 + 0xd0) + 0x224),&DAT_00000001,pcVar8,
               local_34,uVar4);
  }
LAB_0043ac4d:
  if (0xf < local_1c) {
    pnVar6 = (nothrow_t *)(local_1c + 1);
    ppppuVar5 = (undefined4 ****)local_30[0];
    if ((nothrow_t *)0xfff < pnVar6) {
      ppppuVar5 = (undefined4 ****)local_30[0][-1];
      pnVar6 = (nothrow_t *)(local_1c + 0x24);
      if ((undefined1 *)0x1f < (undefined1 *)((int)local_30[0] + (-4 - (int)ppppuVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar5,pnVar6);
  }
LAB_0043ac83:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


// public: void __thiscall EmailManager::addCustomEmail(class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
// std::char_traits<char>,class std::allocator<char> >)

void __thiscall EmailManager::addCustomEmail(EmailManager *this,basic_string<> *param_2)

{
  int iVar1;
  AnimationFrames **ppAVar2;
  AnimationFrames *pAVar3;
  basic_string<> *pbVar4;
  nothrow_t *pnVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  basic_string<> *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  basic_string<> *in_stack_00000034;
  uint in_stack_00000044;
  uint in_stack_00000048;
  EmailManager *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b5018;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 2;
  local_14 = this;
  if (*(char *)(*(int *)(g_gameData + 0xcc) + 0x74) == '\0') {
    local_14 = operator_new(0xa0);
    pAVar3 = (AnimationFrames *)EmailInstance::EmailInstance((EmailInstance *)local_14);
    iVar1 = *(int *)(g_gameData + 0x124);
    pbVar4 = (basic_string<> *)(iVar1 + 4);
    local_14 = (EmailManager *)pAVar3;
    if ((basic_string<> *)(pAVar3 + 0x68) != pbVar4) {
      if (0xf < *(uint *)(iVar1 + 0x18)) {
        pbVar4 = *(basic_string<> **)pbVar4;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar3 + 0x68),(char *)pbVar4,*(uint *)(iVar1 + 0x14));
    }
    if ((basic_string<> *)(pAVar3 + 4) != (basic_string<> *)&param_2) {
      pbVar4 = (basic_string<> *)&param_2;
      if (0xf < in_stack_00000018) {
        pbVar4 = param_2;
      }
      std::basic_string<>::assign((basic_string<> *)(pAVar3 + 4),(char *)pbVar4,in_stack_00000014);
    }
    if ((basic_string<> *)(pAVar3 + 0x1c) != (basic_string<> *)&stack0x0000001c) {
      pbVar4 = (basic_string<> *)&stack0x0000001c;
      if (0xf < in_stack_00000030) {
        pbVar4 = in_stack_0000001c;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar3 + 0x1c),(char *)pbVar4,in_stack_0000002c);
    }
    if ((basic_string<> *)(pAVar3 + 0x4c) != (basic_string<> *)&stack0x0000001c) {
      pbVar4 = (basic_string<> *)&stack0x0000001c;
      if (0xf < in_stack_00000030) {
        pbVar4 = in_stack_0000001c;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar3 + 0x4c),(char *)pbVar4,in_stack_0000002c);
    }
    if ((basic_string<> *)(pAVar3 + 0x34) != (basic_string<> *)&stack0x00000034) {
      pbVar4 = (basic_string<> *)&stack0x00000034;
      if (0xf < in_stack_00000048) {
        pbVar4 = in_stack_00000034;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar3 + 0x34),(char *)pbVar4,in_stack_00000044);
    }
    pAVar3[100] = (AnimationFrames)0x0;
    ppAVar2 = *(AnimationFrames ***)(this + 0x18);
    if (*(AnimationFrames ***)(this + 0x1c) == ppAVar2) {
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(this + 0x14),ppAVar2,(AnimationFrames **)&local_14);
    }
    else {
      *ppAVar2 = pAVar3;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 4;
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar5 = (nothrow_t *)(in_stack_00000018 + 1);
    pbVar4 = param_2;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar4 = *(basic_string<> **)(param_2 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((basic_string<> *)0x1f < param_2 + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar5);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (basic_string<> *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000030) {
    pnVar5 = (nothrow_t *)(in_stack_00000030 + 1);
    pbVar4 = in_stack_0000001c;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar4 = *(basic_string<> **)(in_stack_0000001c + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000030 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_0000001c + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar5);
  }
  in_stack_0000002c = 0;
  in_stack_00000030 = 0xf;
  in_stack_0000001c = (basic_string<> *)((uint)in_stack_0000001c & 0xffffff00);
  if (0xf < in_stack_00000048) {
    pnVar5 = (nothrow_t *)(in_stack_00000048 + 1);
    pbVar4 = in_stack_00000034;
    if ((nothrow_t *)0xfff < pnVar5) {
      pbVar4 = *(basic_string<> **)(in_stack_00000034 + -4);
      pnVar5 = (nothrow_t *)(in_stack_00000048 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_00000034 + (-4 - (int)pbVar4)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar4,pnVar5);
  }
  ExceptionList = local_10;
  return;
}
