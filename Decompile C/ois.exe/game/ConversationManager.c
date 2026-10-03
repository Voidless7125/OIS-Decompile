#include "../ois.exe.h"


// public: class ConversationElement * __thiscall ConversationManager::addConversationElement(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

ConversationElement * __thiscall
ConversationManager::addConversationElement(ConversationManager *this,void *param_2)

{
  vector<> *this_00;
  AnimationFrames **ppAVar1;
  int iVar2;
  bool bVar3;
  Conversation *pCVar4;
  ConversationElement *this_01;
  AnimationFrames *pAVar5;
  basic_string<> *pbVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  AnimationFrames *in_stack_0000001c;
  int in_stack_00000020;
  basic_string<> *in_stack_00000024;
  uint in_stack_00000034;
  uint in_stack_00000038;
  AnimationFrames *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  iVar2 = in_stack_00000020;
  pAVar5 = in_stack_0000001c;
  puStack_c = &DAT_005b4cb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_stack_0000001c;
  local_8 = 1;
  std::basic_string<>::basic_string<>((basic_string<> *)&stack0xffffffc0,(basic_string<> *)&param_2)
  ;
  pCVar4 = getConversation(this,pAVar5,1);
  pAVar5 = local_14;
  if (pCVar4 == (Conversation *)0x0) {
    pAVar5 = (AnimationFrames *)0x0;
  }
  else {
    this_00 = (vector<> *)(pCVar4 + 0xa0);
    puVar9 = *(undefined4 **)this_00;
    uVar7 = 0;
    uVar11 = *(int *)(pCVar4 + 0xa4) - (int)puVar9 >> 2;
    if (uVar11 != 0) {
      do {
        if (*(int *)*puVar9 == iVar2) {
          if (*(int *)(*(int *)this_00 + uVar7 * 4) != 0) {
            debugPrint("ERROR",
                       "ERROR: Duplicate conversation element ID \'%d\' for person %s, conversation %d"
                      );
            bVar3 = cc_assert_script_compatible
                              ("Duplicate conversation element ID for this person.");
            if (!bVar3) {
              cocos2d::log("Assert failed: %s");
            }
          }
          break;
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar7 < uVar11);
    }
    this_01 = operator_new(0x6c);
    pAVar5 = (AnimationFrames *)ConversationElement::ConversationElement(this_01,(int)pAVar5,iVar2);
    local_14 = pAVar5;
    if ((basic_string<> *)(pAVar5 + 0x3c) != (basic_string<> *)&stack0x00000024) {
      pbVar6 = (basic_string<> *)&stack0x00000024;
      if (0xf < in_stack_00000038) {
        pbVar6 = in_stack_00000024;
      }
      std::basic_string<>::assign
                ((basic_string<> *)(pAVar5 + 0x3c),(char *)pbVar6,in_stack_00000034);
    }
    ppAVar1 = *(AnimationFrames ***)(pCVar4 + 0xa4);
    if (*(AnimationFrames ***)(pCVar4 + 0xa8) == ppAVar1) {
      std::vector<>::_Emplace_reallocate<>(this_00,ppAVar1,&local_14);
      pAVar5 = local_14;
    }
    else {
      *ppAVar1 = pAVar5;
      *(int *)(pCVar4 + 0xa4) = *(int *)(pCVar4 + 0xa4) + 4;
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar10 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar8 = param_2;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)param_2 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000038) {
    pnVar10 = (nothrow_t *)(in_stack_00000038 + 1);
    pbVar6 = in_stack_00000024;
    if ((nothrow_t *)0xfff < pnVar10) {
      pbVar6 = *(basic_string<> **)(in_stack_00000024 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000038 + 0x24);
      if ((basic_string<> *)0x1f < in_stack_00000024 + (-4 - (int)pbVar6)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar6,pnVar10);
  }
  ExceptionList = local_10;
  return (ConversationElement *)pAVar5;
}


// public: void __thiscall ConversationManager::addConversationReq(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int,class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

void __thiscall ConversationManager::addConversationReq(ConversationManager *this,void *param_2)

{
  MetaGameAction **ppMVar1;
  undefined4 uVar2;
  Conversation *pCVar3;
  Requirement *pRVar4;
  void *pvVar5;
  nothrow_t *pnVar6;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  void *in_stack_00000020;
  uint in_stack_00000034;
  basic_string<> abStack_3c [12];
  undefined4 uStack_30;
  Requirement *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar2 = in_stack_0000001c;
  puStack_c = &DAT_005b4cef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)&param_2);
  pCVar3 = getConversation(this,uVar2,1);
  if (pCVar3 != (Conversation *)0x0) {
    pRVar4 = operator_new(0x40);
    local_8._0_1_ = 2;
    local_14 = pRVar4;
    std::basic_string<>::basic_string<>(abStack_3c,(basic_string<> *)&stack0x00000020);
    local_14 = (Requirement *)Requirement::Requirement(pRVar4);
    local_8 = CONCAT31(local_8._1_3_,1);
    ppMVar1 = *(MetaGameAction ***)(pCVar3 + 0x98);
    if (*(MetaGameAction ***)(pCVar3 + 0x9c) == ppMVar1) {
      uStack_30 = 0x43898d;
      std::vector<>::_Emplace_reallocate<>
                ((vector<> *)(pCVar3 + 0x94),ppMVar1,(MetaGameAction **)&local_14);
    }
    else {
      *ppMVar1 = (MetaGameAction *)local_14;
      *(int *)(pCVar3 + 0x98) = *(int *)(pCVar3 + 0x98) + 4;
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar5 = param_2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)param_2 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x4389c0;
    operator_delete(pvVar5,pnVar6);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
    pnVar6 = (nothrow_t *)(in_stack_00000034 + 1);
    pvVar5 = in_stack_00000020;
    if ((nothrow_t *)0xfff < pnVar6) {
      pvVar5 = *(void **)((int)in_stack_00000020 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000034 + 0x24);
      if (0x1f < (uint)((int)in_stack_00000020 + (-4 - (int)pvVar5))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_30 = 0x438a08;
    operator_delete(pvVar5,pnVar6);
  }
  ExceptionList = local_10;
  return;
}


// public: class ConversationOption * __thiscall ConversationManager::addConversationOption(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,int,int,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >,int)

ConversationOption * __thiscall
ConversationManager::addConversationOption(ConversationManager *this,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  AnimationFrames **ppAVar3;
  undefined4 uVar4;
  int iVar5;
  Conversation *pCVar6;
  ConversationOption *pCVar7;
  uint uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  nothrow_t *pnVar11;
  uint uVar12;
  AnimationFrames *pAVar13;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  void *in_stack_00000028;
  uint in_stack_0000003c;
  AnimationFrames *in_stack_00000040;
  basic_string<> abStack_40 [12];
  undefined4 uStack_34;
  AnimationFrames *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar4 = in_stack_0000001c;
  puStack_c = &DAT_005b4d2f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_stack_00000040;
  local_8 = 1;
  std::basic_string<>::basic_string<>(abStack_40,(basic_string<> *)&param_2);
  pCVar6 = getConversation(this,uVar4);
  iVar5 = in_stack_00000020;
  if (pCVar6 != (Conversation *)0x0) {
    uVar8 = 0;
    puVar1 = *(undefined4 **)(pCVar6 + 0xa0);
    uVar12 = *(int *)(pCVar6 + 0xa4) - (int)puVar1 >> 2;
    puVar10 = puVar1;
    if (uVar12 != 0) {
      do {
        if (*(int *)*puVar10 == in_stack_00000020) {
          iVar2 = puVar1[uVar8];
          if (iVar2 != 0) {
            pCVar7 = operator_new(0x70);
            local_8._0_1_ = 2;
            std::basic_string<>::basic_string<>
                      ((basic_string<> *)&stack0xffffffbc,(basic_string<> *)&stack0x00000028);
            local_14 = (AnimationFrames *)
                       ConversationOption::ConversationOption(pCVar7,in_stack_00000024,iVar5);
            local_8 = CONCAT31(local_8._1_3_,1);
            ppAVar3 = *(AnimationFrames ***)(iVar2 + 100);
            if (*(AnimationFrames ***)(iVar2 + 0x68) == ppAVar3) {
              uStack_34 = 0x438b31;
              std::vector<>::_Emplace_reallocate<>((vector<> *)(iVar2 + 0x60),ppAVar3,&local_14);
              pAVar13 = local_14;
            }
            else {
              *ppAVar3 = local_14;
              *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + 4;
              pAVar13 = local_14;
            }
            goto LAB_00438aa2;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (uVar8 < uVar12);
    }
  }
  pAVar13 = (AnimationFrames *)0x0;
LAB_00438aa2:
  if (0xf < in_stack_00000018) {
    pnVar11 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar9 = param_2;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar9 = *(void **)((int)param_2 + -4);
      pnVar11 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_34 = 0x438b40;
    operator_delete(pvVar9,pnVar11);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_0000003c) {
    pnVar11 = (nothrow_t *)(in_stack_0000003c + 1);
    pvVar9 = in_stack_00000028;
    if ((nothrow_t *)0xfff < pnVar11) {
      pvVar9 = *(void **)((int)in_stack_00000028 + -4);
      pnVar11 = (nothrow_t *)(in_stack_0000003c + 0x24);
      if (0x1f < (uint)((int)in_stack_00000028 + (-4 - (int)pvVar9))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_34 = 0x438b88;
    operator_delete(pvVar9,pnVar11);
  }
  ExceptionList = local_10;
  return (ConversationOption *)pAVar13;
}


// public: void __thiscall ConversationManager::addConversationOptionReq(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,int,int,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

void __thiscall
ConversationManager::addConversationOptionReq(ConversationManager *this,void *param_2)

{
  undefined4 *puVar1;
  MetaGameAction **ppMVar2;
  undefined4 uVar3;
  Conversation *pCVar4;
  ConversationOption *pCVar5;
  Requirement *pRVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  MetaGameAction *in_stack_00000024;
  void *in_stack_00000028;
  uint in_stack_0000003c;
  basic_string<> abStack_40 [12];
  undefined4 uStack_34;
  MetaGameAction *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uVar3 = in_stack_0000001c;
  puStack_c = &DAT_005b4d6f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_stack_00000024;
  local_8 = 1;
  std::basic_string<>::basic_string<>(abStack_40,(basic_string<> *)&param_2);
  pCVar4 = getConversation(this,uVar3,1);
  if (pCVar4 != (Conversation *)0x0) {
    uVar7 = 0;
    puVar1 = *(undefined4 **)(pCVar4 + 0xa0);
    uVar11 = *(int *)(pCVar4 + 0xa4) - (int)puVar1 >> 2;
    puVar9 = puVar1;
    if (uVar11 != 0) {
      do {
        if (*(int *)*puVar9 == in_stack_00000020) {
          if (((ConversationElement *)puVar1[uVar7] != (ConversationElement *)0x0) &&
             (pCVar5 = ConversationElement::getOption
                                 ((ConversationElement *)puVar1[uVar7],(int)local_14),
             pCVar5 != (ConversationOption *)0x0)) {
            pRVar6 = operator_new(0x40);
            local_8._0_1_ = 2;
            std::basic_string<>::basic_string<>(abStack_40,(basic_string<> *)&stack0x00000028);
            local_14 = (MetaGameAction *)Requirement::Requirement(pRVar6);
            local_8 = CONCAT31(local_8._1_3_,1);
            ppMVar2 = *(MetaGameAction ***)(pCVar5 + 0x68);
            if (*(MetaGameAction ***)(pCVar5 + 0x6c) == ppMVar2) {
              uStack_34 = 0x438c94;
              std::vector<>::_Emplace_reallocate<>((vector<> *)(pCVar5 + 100),ppMVar2,&local_14);
            }
            else {
              *ppMVar2 = local_14;
              *(int *)(pCVar5 + 0x68) = *(int *)(pCVar5 + 0x68) + 4;
            }
          }
          break;
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar7 < uVar11);
    }
  }
  if (0xf < in_stack_00000018) {
    pnVar10 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar8 = param_2;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)param_2 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_34 = 0x438cc7;
    operator_delete(pvVar8,pnVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_0000003c) {
    pnVar10 = (nothrow_t *)(in_stack_0000003c + 1);
    pvVar8 = in_stack_00000028;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)in_stack_00000028 + -4);
      pnVar10 = (nothrow_t *)(in_stack_0000003c + 0x24);
      if (0x1f < (uint)((int)in_stack_00000028 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    uStack_34 = 0x438d0f;
    operator_delete(pvVar8,pnVar10);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall ConversationManager::addConversationOptionAction(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,int,int,int,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

void __thiscall
ConversationManager::addConversationOptionAction(ConversationManager *this,void *param_2)

{
  ConversationElement *this_00;
  MetaGameAction **ppMVar1;
  undefined4 uVar2;
  int iVar3;
  Conversation *pCVar4;
  ConversationOption *pCVar5;
  MetaGameAction *pMVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  nothrow_t *pnVar10;
  uint uVar11;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  MetaGameAction *in_stack_00000024;
  undefined4 in_stack_00000028;
  void *in_stack_0000002c;
  uint in_stack_00000040;
  basic_string<> abStack_40 [4];
  undefined4 uStack_3c;
  char *pcVar12;
  MetaGameAction *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  iVar3 = in_stack_00000020;
  uVar2 = in_stack_0000001c;
  puStack_c = &DAT_005b4daf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_stack_00000024;
  local_8 = 1;
  std::basic_string<>::basic_string<>(abStack_40,(basic_string<> *)&param_2);
  pCVar4 = getConversation(this,uVar2,1);
  if (pCVar4 == (Conversation *)0x0) {
    debugPrint("GAME","Invalid conversationID \'%d\'");
  }
  else {
    uVar7 = 0;
    puVar9 = *(undefined4 **)(pCVar4 + 0xa0);
    uVar11 = *(int *)(pCVar4 + 0xa4) - (int)puVar9 >> 2;
    if (uVar11 != 0) {
      do {
        if (*(int *)*puVar9 == iVar3) {
          this_00 = *(ConversationElement **)(*(int *)(pCVar4 + 0xa0) + uVar7 * 4);
          if (this_00 != (ConversationElement *)0x0) {
            pCVar5 = ConversationElement::getOption(this_00,(int)local_14);
            if (pCVar5 == (ConversationOption *)0x0) {
              pcVar12 = "Invalid optionID \'%d\' in conversationID \'%d\'";
              goto LAB_00438dd5;
            }
            pMVar6 = operator_new(0x24);
            local_8._0_1_ = 2;
            local_14 = pMVar6;
            std::basic_string<>::basic_string<>(abStack_40,(basic_string<> *)&stack0x0000002c);
            local_14 = (MetaGameAction *)MetaGameAction::MetaGameAction(pMVar6,in_stack_00000028);
            local_8 = CONCAT31(local_8._1_3_,1);
            ppMVar1 = *(MetaGameAction ***)(pCVar5 + 0x5c);
            if (*(MetaGameAction ***)(pCVar5 + 0x60) == ppMVar1) {
              std::vector<>::_Emplace_reallocate<>((vector<> *)(pCVar5 + 0x58),ppMVar1,&local_14);
            }
            else {
              *ppMVar1 = local_14;
              *(int *)(pCVar5 + 0x5c) = *(int *)(pCVar5 + 0x5c) + 4;
            }
            goto LAB_00438de2;
          }
          break;
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar7 < uVar11);
    }
    pcVar12 = "Invalid elementID \'%d\' in conversationID \'%d\'";
LAB_00438dd5:
    uStack_3c = 0x438ddf;
    debugPrint("GAME",pcVar12);
  }
LAB_00438de2:
  if (0xf < in_stack_00000018) {
    pnVar10 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar8 = param_2;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)param_2 + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar10);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000040) {
    pnVar10 = (nothrow_t *)(in_stack_00000040 + 1);
    pvVar8 = in_stack_0000002c;
    if ((nothrow_t *)0xfff < pnVar10) {
      pvVar8 = *(void **)((int)in_stack_0000002c + -4);
      pnVar10 = (nothrow_t *)(in_stack_00000040 + 0x24);
      if (0x1f < (uint)((int)in_stack_0000002c + (-4 - (int)pvVar8))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar8,pnVar10);
  }
  ExceptionList = local_10;
  return;
}


// public: void __thiscall ConversationManager::addConversationElementAction(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
// >,int,int,int,class std::basic_string<char,struct std::char_traits<char>,class
// std::allocator<char> >)

void __thiscall
ConversationManager::addConversationElementAction(ConversationManager *this,void *param_2)

{
  MetaGameAction **ppMVar1;
  undefined4 uVar2;
  int iVar3;
  MetaGameAction *pMVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  nothrow_t *pnVar8;
  uint uVar9;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  void *in_stack_00000028;
  uint in_stack_0000003c;
  basic_string<> abStack_44 [4];
  undefined4 uStack_40;
  MetaGameAction *local_18;
  Conversation *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  iVar3 = in_stack_00000020;
  uVar2 = in_stack_0000001c;
  puStack_c = &DAT_005b4def;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&param_2);
  local_14 = getConversation(this,uVar2,1);
  if (local_14 == (Conversation *)0x0) {
    debugPrint("GAME","Invalid conversationID \'%d\'");
  }
  else {
    uVar5 = 0;
    puVar7 = *(undefined4 **)(local_14 + 0xa0);
    uVar9 = *(int *)(local_14 + 0xa4) - (int)puVar7 >> 2;
    if (uVar9 != 0) {
      do {
        if (*(int *)*puVar7 == iVar3) {
          local_14 = *(Conversation **)(*(int *)(local_14 + 0xa0) + uVar5 * 4);
          if (local_14 != (Conversation *)0x0) {
            pMVar4 = operator_new(0x24);
            local_8._0_1_ = 2;
            local_18 = pMVar4;
            std::basic_string<>::basic_string<>(abStack_44,(basic_string<> *)&stack0x00000028);
            local_18 = (MetaGameAction *)MetaGameAction::MetaGameAction(pMVar4,in_stack_00000024);
            local_8 = CONCAT31(local_8._1_3_,1);
            ppMVar1 = *(MetaGameAction ***)(local_14 + 0x58);
            if (*(MetaGameAction ***)(local_14 + 0x5c) == ppMVar1) {
              std::vector<>::_Emplace_reallocate<>((vector<> *)(local_14 + 0x54),ppMVar1,&local_18);
            }
            else {
              *ppMVar1 = local_18;
              *(int *)(local_14 + 0x58) = *(int *)(local_14 + 0x58) + 4;
            }
            goto LAB_00438fa8;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 < uVar9);
    }
    uStack_40 = 0x438fa5;
    debugPrint("GAME","Invalid elementID \'%d\' in conversationID \'%d\'");
  }
LAB_00438fa8:
  if (0xf < in_stack_00000018) {
    pnVar8 = (nothrow_t *)(in_stack_00000018 + 1);
    pvVar6 = param_2;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)param_2 + -4);
      pnVar8 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if (0x1f < (uint)((int)param_2 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar8);
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0xf;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_0000003c) {
    pnVar8 = (nothrow_t *)(in_stack_0000003c + 1);
    pvVar6 = in_stack_00000028;
    if ((nothrow_t *)0xfff < pnVar8) {
      pvVar6 = *(void **)((int)in_stack_00000028 + -4);
      pnVar8 = (nothrow_t *)(in_stack_0000003c + 0x24);
      if (0x1f < (uint)((int)in_stack_00000028 + (-4 - (int)pvVar6))) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar6,pnVar8);
  }
  ExceptionList = local_10;
  return;
}


// public: class Conversation * __thiscall ConversationManager::getConversation(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int,bool)

Conversation * __thiscall
ConversationManager::getConversation
          (ConversationManager *this,int param_2,char param_3,char *param_4)

{
  int *piVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  nothrow_t *pnVar6;
  int iVar7;
  Conversation *pCVar8;
  uint unaff_EDI;
  uint uVar9;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint local_18;
  byte local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4e18;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  iVar7 = *(int *)(this + 0x3c);
  local_18 = 0;
  if (*(int *)(this + 0x40) - iVar7 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar7 + local_18 * 4);
      if ((*piVar1 == param_2) || (param_2 == -1)) {
        pcVar4 = (char *)&param_4;
        if (0xf < in_stack_00000020) {
          pcVar4 = param_4;
        }
        bVar2 = std::_Traits_equal<>(pcVar4,in_stack_0000001c,pcVar3,unaff_EDI);
        if (bVar2) {
          uVar9 = 0;
          local_11 = 1;
          iVar5 = piVar1[0x26] - piVar1[0x25] >> 2;
          if ((char)piVar1[0x24] == '\0') {
            if (iVar5 != 0) {
              do {
                if (param_3 == '\0') {
                  bVar2 = Requirement::checkReq
                                    (*(Requirement **)
                                      (*(int *)(*(int *)(iVar7 + local_18 * 4) + 0x94) + uVar9 * 4),
                                     *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                     *(BankAccount **)(g_gameData + 0x124));
                  local_11 = local_11 & -bVar2;
                }
                uVar9 = uVar9 + 1;
                iVar7 = *(int *)(this + 0x3c);
                iVar5 = *(int *)(iVar7 + local_18 * 4);
              } while (uVar9 < (uint)(*(int *)(iVar5 + 0x98) - *(int *)(iVar5 + 0x94) >> 2));
            }
          }
          else {
            local_11 = 0;
            if (iVar5 != 0) {
              do {
                if ((param_3 != '\0') ||
                   (bVar2 = Requirement::checkReq
                                      (*(Requirement **)
                                        (*(int *)(*(int *)(iVar7 + local_18 * 4) + 0x94) + uVar9 * 4
                                        ),*(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                       *(BankAccount **)(g_gameData + 0x124)), bVar2)) {
                  local_11 = 1;
                }
                uVar9 = uVar9 + 1;
                iVar7 = *(int *)(this + 0x3c);
                iVar5 = *(int *)(iVar7 + local_18 * 4);
              } while (uVar9 < (uint)(*(int *)(iVar5 + 0x98) - *(int *)(iVar5 + 0x94) >> 2));
            }
          }
          if (local_11 != 0) {
            pCVar8 = *(Conversation **)(iVar7 + local_18 * 4);
            goto LAB_004391fc;
          }
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)(*(int *)(this + 0x40) - iVar7 >> 2));
  }
  pCVar8 = (Conversation *)0x0;
LAB_004391fc:
  if (0xf < in_stack_00000020) {
    pnVar6 = (nothrow_t *)(in_stack_00000020 + 1);
    pcVar3 = param_4;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar3 = *(char **)(param_4 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000020 + 0x24);
      if ((char *)0x1f < param_4 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar6);
  }
  ExceptionList = local_10;
  return pCVar8;
}


// public: int __thiscall ConversationManager::hasConversationToForce(class
// std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)

int __thiscall ConversationManager::hasConversationToForce(ConversationManager *this,char *param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  nothrow_t *pnVar6;
  byte bVar7;
  int iVar8;
  uint unaff_EDI;
  uint uVar9;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005b4e48;
  local_10 = ExceptionList;
  pcVar3 = (char *)(___security_cookie ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_8 = 0;
  iVar8 = *(int *)(this + 0x3c);
  local_14 = 0;
  if (*(int *)(this + 0x40) - iVar8 >> 2 != 0) {
    do {
      iVar1 = *(int *)(iVar8 + local_14 * 4);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        pcVar5 = (char *)&param_2;
        if (0xf < in_stack_00000018) {
          pcVar5 = param_2;
        }
        bVar2 = std::_Traits_equal<>(pcVar5,in_stack_00000014,pcVar3,unaff_EDI);
        if (bVar2) {
          bVar7 = 1;
          iVar4 = *(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2;
          if (*(char *)(iVar1 + 0x90) == '\0') {
            if (iVar4 != 0) {
              uVar9 = 0;
              do {
                bVar2 = Requirement::checkReq
                                  (*(Requirement **)
                                    (*(int *)(*(int *)(iVar8 + local_14 * 4) + 0x94) + uVar9 * 4),
                                   *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                   *(BankAccount **)(g_gameData + 0x124));
                uVar9 = uVar9 + 1;
                bVar7 = bVar7 & -bVar2;
                iVar8 = *(int *)(this + 0x3c);
                iVar1 = *(int *)(iVar8 + local_14 * 4);
              } while (uVar9 < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2));
            }
          }
          else {
            bVar7 = 0;
            if (iVar4 != 0) {
              uVar9 = 0;
              do {
                bVar2 = Requirement::checkReq
                                  (*(Requirement **)
                                    (*(int *)(*(int *)(iVar8 + local_14 * 4) + 0x94) + uVar9 * 4),
                                   *(CargoHold **)(*(int *)(g_gameData + 0xd0) + 0x1f8),
                                   *(BankAccount **)(g_gameData + 0x124));
                if (bVar2) {
                  bVar7 = 1;
                }
                uVar9 = uVar9 + 1;
                iVar8 = *(int *)(this + 0x3c);
                iVar1 = *(int *)(iVar8 + local_14 * 4);
              } while (uVar9 < (uint)(*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) >> 2));
            }
          }
          if (bVar7 != 0) {
            iVar8 = **(int **)(iVar8 + local_14 * 4);
            goto LAB_00439476;
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)(this + 0x40) - iVar8 >> 2));
  }
  iVar8 = -1;
LAB_00439476:
  if (0xf < in_stack_00000018) {
    pnVar6 = (nothrow_t *)(in_stack_00000018 + 1);
    pcVar3 = param_2;
    if ((nothrow_t *)0xfff < pnVar6) {
      pcVar3 = *(char **)(param_2 + -4);
      pnVar6 = (nothrow_t *)(in_stack_00000018 + 0x24);
      if ((char *)0x1f < param_2 + (-4 - (int)pcVar3)) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pcVar3,pnVar6);
  }
  ExceptionList = local_10;
  return iVar8;
}


// public: virtual void __thiscall ConversationManager::keyHit(enum cocos2d::EventKeyboard::KeyCode)

void __thiscall ConversationManager::keyHit(ConversationManager *this,KeyCode param_1)

{
  debugPrint("GAME","Conversation manager key hit");
  return;
}


// public: void __thiscall ConversationManager::performElementActions(class ConversationElement *)

void __thiscall
ConversationManager::performElementActions(ConversationManager *this,ConversationElement *param_1)

{
  uint uVar1;
  
  if ((param_1 != (ConversationElement *)0x0) &&
     (uVar1 = 0, *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2 != 0)) {
    do {
      MetaGameAction::perform(*(MetaGameAction **)(*(int *)(param_1 + 0x54) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 2));
  }
  return;
}
