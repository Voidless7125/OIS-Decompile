#include "../ois.exe.h"


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * __thiscall
FUN_004807e0(void *this,undefined4 *param_1,pair<> *param_2,_Tree_node<> *param_3)

{
  pair<> pVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  _Tree<> *this_00;
  pair<> *ppVar8;
  _Tree_node<> *p_Var9;
  _Tree<> *p_Var10;
  pair<> *ppVar11;
  pair<> *ppVar12;
  bool bVar13;
  bool bVar14;
  uint uStack_34;
  undefined1 local_24 [8];
  uint local_1c;
  pair<> local_15;
  undefined1 *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005ba9f0;
  local_10 = ExceptionList;
  uStack_34 = ___security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  bVar14 = SUB41(param_1,0);
  if (DAT_0065d680 == 0) {
    local_14 = (undefined1 *)&uStack_34;
    std::_Tree<>::_Insert_at<>(this,bVar14,(_Tree_node<> *)&DAT_00000001,(pair<> *)_multiData,this);
    ExceptionList = local_10;
    return param_1;
  }
  if (param_2 != *(pair<> **)_multiData) {
    if (param_2 != (pair<> *)_multiData) {
      ppVar8 = param_2 + 0x10;
      if (0xf < *(uint *)(param_2 + 0x24)) {
        ppVar8 = *(pair<> **)(param_2 + 0x10);
      }
      ppVar11 = (pair<> *)param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        ppVar11 = *(pair<> **)param_3;
      }
      local_1c = *(uint *)(param_3 + 0x10);
      uVar5 = local_1c;
      if (*(uint *)(param_2 + 0x20) < local_1c) {
        uVar5 = *(uint *)(param_2 + 0x20);
      }
      while (uVar4 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)ppVar11 != *(int *)ppVar8) goto LAB_00480a2a;
        ppVar11 = ppVar11 + 4;
        ppVar8 = ppVar8 + 4;
        uVar5 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_00480a5e:
        uVar5 = 0;
      }
      else {
LAB_00480a2a:
        bVar13 = (byte)*ppVar11 < (byte)*ppVar8;
        if ((*ppVar11 == *ppVar8) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar13 = (byte)ppVar11[1] < (byte)ppVar8[1], ppVar11[1] == ppVar8[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar13 = (byte)ppVar11[2] < (byte)ppVar8[2], ppVar11[2] == ppVar8[2] &&
               ((uVar4 == 0xffffffff ||
                (bVar13 = (byte)ppVar11[3] < (byte)ppVar8[3], ppVar11[3] == ppVar8[3]))))))))))))
        goto LAB_00480a5e;
        uVar5 = -(uint)bVar13 | 1;
      }
      if (uVar5 == 0) {
        if (*(uint *)(param_3 + 0x10) < *(uint *)(param_2 + 0x20)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(*(uint *)(param_2 + 0x20) < *(uint *)(param_3 + 0x10));
        }
      }
      if ((int)uVar5 < 0) {
        if (param_2[0xd] == (pair<>)0x0) {
          ppVar8 = *(pair<> **)param_2;
          if (ppVar8[0xd] == (pair<>)0x0) {
            pVar1 = (*(pair<> **)(ppVar8 + 8))[0xd];
            ppVar11 = *(pair<> **)(ppVar8 + 8);
            while (pVar1 == (pair<>)0x0) {
              pVar1 = (*(pair<> **)(ppVar11 + 8))[0xd];
              ppVar8 = ppVar11;
              ppVar11 = *(pair<> **)(ppVar11 + 8);
            }
          }
          else {
            pVar1 = (*(pair<> **)(param_2 + 4))[0xd];
            ppVar12 = *(pair<> **)(param_2 + 4);
            ppVar11 = param_2;
            while ((ppVar8 = ppVar12, pVar1 == (pair<>)0x0 && (ppVar11 == *(pair<> **)ppVar8))) {
              pVar1 = (*(pair<> **)(ppVar8 + 4))[0xd];
              ppVar12 = *(pair<> **)(ppVar8 + 4);
              ppVar11 = ppVar8;
            }
            if (ppVar11[0xd] != (pair<>)0x0) {
              ppVar8 = ppVar11;
            }
          }
        }
        else {
          ppVar8 = *(pair<> **)(param_2 + 8);
        }
        ppVar11 = (pair<> *)param_3;
        if (0xf < *(uint *)(param_3 + 0x14)) {
          ppVar11 = *(pair<> **)param_3;
        }
        ppVar12 = ppVar8 + 0x10;
        if (0xf < *(uint *)(ppVar8 + 0x24)) {
          ppVar12 = *(pair<> **)(ppVar8 + 0x10);
        }
        uVar5 = *(uint *)(ppVar8 + 0x20);
        if (local_1c < *(uint *)(ppVar8 + 0x20)) {
          uVar5 = local_1c;
        }
        while (uVar4 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)ppVar12 != *(int *)ppVar11) goto LAB_00480b09;
          ppVar12 = ppVar12 + 4;
          ppVar11 = ppVar11 + 4;
          uVar5 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_00480b3d:
          uVar5 = 0;
        }
        else {
LAB_00480b09:
          bVar13 = (byte)*ppVar12 < (byte)*ppVar11;
          if ((*ppVar12 == *ppVar11) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar13 = (byte)ppVar12[1] < (byte)ppVar11[1], ppVar12[1] == ppVar11[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar13 = (byte)ppVar12[2] < (byte)ppVar11[2], ppVar12[2] == ppVar11[2] &&
                 ((uVar4 == 0xffffffff ||
                  (bVar13 = (byte)ppVar12[3] < (byte)ppVar11[3], ppVar12[3] == ppVar11[3])))))))))))
             ) goto LAB_00480b3d;
          uVar5 = -(uint)bVar13 | 1;
        }
        if (uVar5 == 0) {
          if (*(uint *)(ppVar8 + 0x20) < local_1c) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (uint)(local_1c < *(uint *)(ppVar8 + 0x20));
          }
        }
        if ((int)uVar5 < 0) {
          p_Var10 = *(_Tree<> **)(ppVar8 + 8);
          if (p_Var10[0xd] == (_Tree<>)0x0) {
            local_14 = (undefined1 *)&uStack_34;
            std::_Tree<>::_Insert_at<>
                      (p_Var10,bVar14,(_Tree_node<> *)&DAT_00000001,param_2,(_Tree_node<> *)p_Var10)
            ;
            ExceptionList = local_10;
            return param_1;
          }
          local_14 = (undefined1 *)&uStack_34;
          std::_Tree<>::_Insert_at<>
                    (p_Var10,bVar14,(_Tree_node<> *)0x0,ppVar8,(_Tree_node<> *)p_Var10);
          ExceptionList = local_10;
          return param_1;
        }
      }
      p_Var10 = (_Tree<> *)param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        p_Var10 = *(_Tree<> **)param_3;
      }
      this_00 = (_Tree<> *)(param_2 + 0x10);
      if (0xf < *(uint *)(param_2 + 0x24)) {
        this_00 = *(_Tree<> **)(param_2 + 0x10);
      }
      uVar5 = *(uint *)(param_2 + 0x20);
      if (*(uint *)(param_3 + 0x10) < *(uint *)(param_2 + 0x20)) {
        uVar5 = *(uint *)(param_3 + 0x10);
      }
      while (uVar4 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)this_00 != *(int *)p_Var10) goto LAB_00480beb;
        this_00 = this_00 + 4;
        p_Var10 = p_Var10 + 4;
        uVar5 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_00480c1f:
        uVar5 = 0;
      }
      else {
LAB_00480beb:
        bVar13 = (byte)*this_00 < (byte)*p_Var10;
        if ((*this_00 == *p_Var10) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar13 = (byte)this_00[1] < (byte)p_Var10[1], this_00[1] == p_Var10[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar13 = (byte)this_00[2] < (byte)p_Var10[2], this_00[2] == p_Var10[2] &&
               ((uVar4 == 0xffffffff ||
                (bVar13 = (byte)this_00[3] < (byte)p_Var10[3], this_00[3] == p_Var10[3]))))))))))))
        goto LAB_00480c1f;
        uVar5 = -(uint)bVar13 | 1;
      }
      if (uVar5 == 0) {
        this_00 = (_Tree<> *)(param_2 + 0x10);
        if (*(uint *)(param_2 + 0x20) < *(uint *)(param_3 + 0x10)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(*(uint *)(param_3 + 0x10) < *(uint *)(param_2 + 0x20));
        }
      }
      if (-1 < (int)uVar5) goto LAB_00480d7b;
      ppVar8 = *(pair<> **)(param_2 + 8);
      local_15 = ppVar8[0xd];
      if (local_15 == (pair<>)0x0) {
        pVar1 = (*(pair<> **)ppVar8)[0xd];
        ppVar11 = *(pair<> **)ppVar8;
        while (pVar1 == (pair<>)0x0) {
          pVar1 = (*(pair<> **)ppVar11)[0xd];
          ppVar8 = ppVar11;
          ppVar11 = *(pair<> **)ppVar11;
        }
      }
      else {
        pVar1 = (*(pair<> **)(param_2 + 4))[0xd];
        ppVar12 = *(pair<> **)(param_2 + 4);
        ppVar11 = param_2;
        while ((ppVar8 = ppVar12, pVar1 == (pair<>)0x0 && (ppVar11 == *(pair<> **)(ppVar8 + 8)))) {
          pVar1 = (*(pair<> **)(ppVar8 + 4))[0xd];
          ppVar12 = *(pair<> **)(ppVar8 + 4);
          ppVar11 = ppVar8;
        }
      }
      this_00 = _multiData;
      if (ppVar8 == (pair<> *)_multiData) goto LAB_00480d2d;
      ppVar11 = ppVar8 + 0x10;
      if (0xf < *(uint *)(ppVar8 + 0x24)) {
        ppVar11 = *(pair<> **)(ppVar8 + 0x10);
      }
      ppVar12 = (pair<> *)param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        ppVar12 = *(pair<> **)param_3;
      }
      uVar5 = local_1c;
      if (*(uint *)(ppVar8 + 0x20) < local_1c) {
        uVar5 = *(uint *)(ppVar8 + 0x20);
      }
      while (uVar4 = uVar5 - 4, 3 < uVar5) {
        if (*(int *)ppVar12 != *(int *)ppVar11) goto LAB_00480cd9;
        ppVar12 = ppVar12 + 4;
        ppVar11 = ppVar11 + 4;
        uVar5 = uVar4;
      }
      if (uVar4 == 0xfffffffc) {
LAB_00480d0d:
        uVar5 = 0;
      }
      else {
LAB_00480cd9:
        bVar13 = (byte)*ppVar12 < (byte)*ppVar11;
        if ((*ppVar12 == *ppVar11) &&
           ((uVar4 == 0xfffffffd ||
            ((bVar13 = (byte)ppVar12[1] < (byte)ppVar11[1], ppVar12[1] == ppVar11[1] &&
             ((uVar4 == 0xfffffffe ||
              ((bVar13 = (byte)ppVar12[2] < (byte)ppVar11[2], ppVar12[2] == ppVar11[2] &&
               ((uVar4 == 0xffffffff ||
                (bVar13 = (byte)ppVar12[3] < (byte)ppVar11[3], ppVar12[3] == ppVar11[3]))))))))))))
        goto LAB_00480d0d;
        uVar5 = -(uint)bVar13 | 1;
      }
      if (uVar5 == 0) {
        if (local_1c < *(uint *)(ppVar8 + 0x20)) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(*(uint *)(ppVar8 + 0x20) < local_1c);
        }
      }
      this_00 = (_Tree<> *)(uVar5 >> 0x1f);
      if ((int)uVar5 < 0) {
LAB_00480d2d:
        if (local_15 == (pair<>)0x0) {
          std::_Tree<>::_Insert_at<>
                    (this_00,bVar14,(_Tree_node<> *)&DAT_00000001,ppVar8,(_Tree_node<> *)this_00);
          ExceptionList = local_10;
          return param_1;
        }
        local_14 = (undefined1 *)&uStack_34;
        std::_Tree<>::_Insert_at<>
                  (this_00,bVar14,(_Tree_node<> *)0x0,param_2,(_Tree_node<> *)this_00);
        ExceptionList = local_10;
        return param_1;
      }
      goto LAB_00480d7b;
    }
    iVar2 = *(int *)(_multiData + 8);
    p_Var9 = param_3;
    if (0xf < *(uint *)(param_3 + 0x14)) {
      p_Var9 = *(_Tree_node<> **)param_3;
    }
    this_00 = (_Tree<> *)(iVar2 + 0x10);
    if (0xf < *(uint *)(iVar2 + 0x24)) {
      this_00 = *(_Tree<> **)(iVar2 + 0x10);
    }
    uVar5 = *(uint *)(iVar2 + 0x20);
    uVar4 = *(uint *)(param_3 + 0x10);
    uVar6 = uVar5;
    if (uVar4 < uVar5) {
      uVar6 = uVar4;
    }
    while (uVar3 = uVar6 - 4, 3 < uVar6) {
      if (*(int *)this_00 != *(int *)p_Var9) goto LAB_00480966;
      this_00 = this_00 + 4;
      p_Var9 = p_Var9 + 4;
      uVar6 = uVar3;
    }
    if (uVar3 == 0xfffffffc) {
LAB_0048099a:
      uVar6 = 0;
    }
    else {
LAB_00480966:
      bVar13 = (byte)*(_Tree_node<> *)this_00 < (byte)*p_Var9;
      if ((*(_Tree_node<> *)this_00 == *p_Var9) &&
         ((uVar3 == 0xfffffffd ||
          ((bVar13 = (byte)*(_Tree_node<> *)(this_00 + 1) < (byte)p_Var9[1],
           *(_Tree_node<> *)(this_00 + 1) == p_Var9[1] &&
           ((uVar3 == 0xfffffffe ||
            ((bVar13 = (byte)*(_Tree_node<> *)(this_00 + 2) < (byte)p_Var9[2],
             *(_Tree_node<> *)(this_00 + 2) == p_Var9[2] &&
             ((uVar3 == 0xffffffff ||
              (bVar13 = (byte)*(_Tree_node<> *)(this_00 + 3) < (byte)p_Var9[3],
              *(_Tree_node<> *)(this_00 + 3) == p_Var9[3])))))))))))) goto LAB_0048099a;
      uVar6 = -(uint)bVar13 | 1;
    }
    if (uVar6 == 0) {
      if (uVar5 < uVar4) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)(uVar4 < uVar5);
      }
    }
    if ((int)uVar6 < 0) {
      local_14 = (undefined1 *)&uStack_34;
      std::_Tree<>::_Insert_at<>
                (_multiData,bVar14,(_Tree_node<> *)0x0,*(pair<> **)(_multiData + 8),
                 (_Tree_node<> *)this_00);
      ExceptionList = local_10;
      return param_1;
    }
    goto LAB_00480d7b;
  }
  this_00 = (_Tree<> *)(param_2 + 0x10);
  if (0xf < *(uint *)(param_2 + 0x24)) {
    this_00 = *(_Tree<> **)(param_2 + 0x10);
  }
  p_Var10 = (_Tree<> *)param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    p_Var10 = *(_Tree<> **)param_3;
  }
  uVar5 = *(uint *)(param_3 + 0x10);
  if (*(uint *)(param_2 + 0x20) < *(uint *)(param_3 + 0x10)) {
    uVar5 = *(uint *)(param_2 + 0x20);
  }
  while (uVar4 = uVar5 - 4, 3 < uVar5) {
    if (*(int *)p_Var10 != *(int *)this_00) goto LAB_00480896;
    p_Var10 = p_Var10 + 4;
    this_00 = this_00 + 4;
    uVar5 = uVar4;
  }
  if (uVar4 == 0xfffffffc) {
LAB_004808ca:
    uVar5 = 0;
  }
  else {
LAB_00480896:
    bVar13 = (byte)*p_Var10 < (byte)*this_00;
    if ((*p_Var10 == *this_00) &&
       ((uVar4 == 0xfffffffd ||
        ((bVar13 = (byte)p_Var10[1] < (byte)this_00[1], p_Var10[1] == this_00[1] &&
         ((uVar4 == 0xfffffffe ||
          ((bVar13 = (byte)p_Var10[2] < (byte)this_00[2], p_Var10[2] == this_00[2] &&
           ((uVar4 == 0xffffffff ||
            (bVar13 = (byte)p_Var10[3] < (byte)this_00[3], p_Var10[3] == this_00[3]))))))))))))
    goto LAB_004808ca;
    uVar5 = -(uint)bVar13 | 1;
  }
  if (uVar5 == 0) {
    this_00 = *(_Tree<> **)(param_3 + 0x10);
    if (this_00 < *(_Tree<> **)(param_2 + 0x20)) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (uint)(*(_Tree<> **)(param_2 + 0x20) < this_00);
    }
  }
  if ((int)uVar5 < 0) {
    local_14 = (undefined1 *)&uStack_34;
    std::_Tree<>::_Insert_at<>
              (this_00,bVar14,(_Tree_node<> *)&DAT_00000001,param_2,(_Tree_node<> *)this_00);
    ExceptionList = local_10;
    return param_1;
  }
LAB_00480d7b:
  local_8 = 0xffffffff;
  local_14 = (undefined1 *)&uStack_34;
  puVar7 = (undefined4 *)
           std::_Tree<>::_Insert_nohint<>(this_00,SUB41(local_24,0),(pair<> *)this_00,param_3);
  *param_1 = *puVar7;
  ExceptionList = local_10;
  return param_1;
}
