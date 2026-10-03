#include "../ois_server.exe.h"


undefined4 __cdecl FUN_004e0040(int param_1)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(uVar1 + 4) + 0x10))(0);
    if ((char)uVar1 != '\0') {
      iVar4 = -1;
      iVar3 = 9;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) = 0;
      this = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this,param_1,iVar3,iVar4);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


uint __cdecl FUN_004e0090(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(uVar1 + 4) + 0x10))(0);
    if ((char)uVar1 != '\0') {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x62) != '\0') {
        uVar1 = FUN_004e0040(param_1);
        return uVar1;
      }
      uVar1 = FUN_004dfff0(param_1);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}


undefined4 __cdecl FUN_004e00e0(int param_1)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(uVar1 + 0xc) + 0x10))(0);
    if ((char)uVar1 != '\0') {
      iVar4 = -1;
      iVar3 = 8;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) = 1;
      this = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this,param_1,iVar3,iVar4);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


undefined4 __cdecl FUN_004e0130(int param_1)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(uVar1 + 0xc) + 0x10))(0);
    if ((char)uVar1 != '\0') {
      iVar4 = -1;
      iVar3 = 9;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) = 0;
      this = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this,param_1,iVar3,iVar4);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


uint __cdecl FUN_004e0180(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(uVar1 + 0xc) + 0x10))(0);
    if ((char)uVar1 != '\0') {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x40) + 0xc) + 0x62) != '\0') {
        uVar1 = FUN_004e0130(param_1);
        return uVar1;
      }
      uVar1 = FUN_004e00e0(param_1);
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}


undefined4 __cdecl FUN_004e01d0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *this;
  undefined4 extraout_ECX;
  uint in_stack_ffffff8c;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  byte *in_stack_ffffffc0;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((*(int **)(uVar2 + 8) != (int *)0x0) &&
     (uVar2 = (**(code **)(**(int **)(uVar2 + 8) + 0x10))(), (char)uVar2 != '\0')) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 8);
    uVar2 = *(uint *)(iVar6 + 0x68);
    if ((0 < (int)uVar2) && (*(float *)(iVar6 + 0x6c) <= -1.0)) {
      *(uint *)(iVar6 + 0x68) = uVar2 - 1;
      if (0 < (int)(uVar2 - 1)) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 8);
        iVar3 = FUN_00437c60(*(int **)(iVar6 + 0xc));
        *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 8) + 0x6c) =
             (((float)iVar3 / 100.0 - 1.0) * -1.0 + 1.0) * 0.5 *
             *(float *)(*(int *)(iVar6 + 8) + 0x108);
      }
      puVar1 = (undefined4 *)(param_1 + 0x238);
      FUN_004024e0(&stack0xffffffc0,puVar1);
      uStack_58 = 0x4e02da;
      FUN_0040eba0(this,*(int *)(param_1 + 0x20),(float)*(double *)(param_1 + 0x28),
                   (float)*(double *)(param_1 + 0x30),0x1e,0x42a00000,
                   (undefined4 *)in_stack_ffffffc0);
      iVar3 = -1;
      iVar6 = 0x22;
      pvVar4 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar4,param_1,iVar6,iVar3);
      FUN_004024e0(&stack0xffffffc0,puVar1);
      local_8 = 0;
      pvVar4 = (void *)FUN_004023e0();
      local_8 = 0xffffffff;
      FUN_00531140(pvVar4,in_stack_ffffffc0);
      FUN_00591070(&DAT_005cdc70,"%s: Counter-measure fired");
      pvVar4 = (void *)((uint)in_stack_ffffffc0 & 0xffffff00);
      FUN_00402690(&stack0xffffffc0,"cms_dropped",0xb);
      local_8 = 1;
      FUN_00412770();
      local_8 = 0xffffffff;
      FUN_0051e750(extraout_ECX,pvVar4);
      FUN_00402690(&stack0xffffffbc,&PTR_005ce008,0);
      local_8 = 2;
      auStack_5c[0] = 0;
      FUN_00402690(auStack_5c,"cms_dropped",0xb);
      local_8 = CONCAT31(local_8._1_3_,3);
      pvVar4 = (void *)(in_stack_ffffff8c & 0xffffff00);
      FUN_00402690(&stack0xffffff8c,&DAT_0060d818,4);
      local_8 = 0xffffffff;
      uVar5 = FUN_00401a50(pvVar4);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004e0430(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x10) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x10) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
      *piVar1 = *piVar1 + 10;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
      if (100 < *(int *)(iVar4 + 100)) {
        *(undefined4 *)(iVar4 + 100) = 100;
      }
      iVar5 = -1;
      iVar4 = 8;
      this = (void *)FUN_00402f60();
      uVar3 = FUN_00557fb0(this,param_1,iVar4,iVar5);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004e0490(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x10) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x10) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
      *piVar1 = *piVar1 + -10;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
      if (*(int *)(iVar4 + 100) < 10) {
        *(undefined4 *)(iVar4 + 100) = 10;
      }
      iVar5 = -1;
      iVar4 = 9;
      this = (void *)FUN_00402f60();
      uVar3 = FUN_00557fb0(this,param_1,iVar4,iVar5);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e04f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar5 >> 2;
  if (uVar2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar4 * 4);
      if (piVar1[4] == *(int *)(param_1 + 0x1e8)) {
        if (piVar1 != (int *)0x0) {
          uVar2 = (**(code **)(*piVar1 + 0x10))(0);
          if ((char)uVar2 != '\0') {
            piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
            *piVar1 = *piVar1 + 10;
            iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
            if (100 < *(int *)(iVar5 + 100)) {
              *(undefined4 *)(iVar5 + 100) = 100;
            }
            iVar6 = -1;
            iVar5 = 8;
            this = (void *)FUN_00402f60();
            uVar3 = FUN_00557fb0(this,param_1,iVar5,iVar6);
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e0570(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar5 >> 2;
  if (uVar2 != 0) {
    do {
      piVar1 = *(int **)(iVar5 + uVar4 * 4);
      if (piVar1[4] == *(int *)(param_1 + 0x1e8)) {
        if (piVar1 != (int *)0x0) {
          uVar2 = (**(code **)(*piVar1 + 0x10))(0);
          if ((char)uVar2 != '\0') {
            piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x10) + 100);
            *piVar1 = *piVar1 + -10;
            iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
            if (*(int *)(iVar5 + 100) < 10) {
              *(undefined4 *)(iVar5 + 100) = 10;
            }
            iVar6 = -1;
            iVar5 = 9;
            this = (void *)FUN_00402f60();
            uVar3 = FUN_00557fb0(this,param_1,iVar5,iVar6);
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e05f0(int param_1)

{
  uint in_EAX;
  void *pvVar1;
  void *this;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    uVar3 = 0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    in_EAX = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar4 >> 2;
    if (in_EAX != 0) {
      do {
        pvVar1 = *(void **)(iVar4 + uVar3 * 4);
        if (*(int *)((int)pvVar1 + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if (pvVar1 != (void *)0x0) {
            if ((*(int *)(*(int *)((int)pvVar1 + 8) + 4) == 1) && (*(int *)(param_1 + 0xd4) == 3)) {
              iVar6 = -1;
              iVar5 = 10;
              iVar4 = param_1;
              pvVar1 = (void *)FUN_00402f60();
              FUN_00557fb0(pvVar1,iVar4,iVar5,iVar6);
              uVar3 = FUN_00527550(*(int **)(param_1 + 0x224),2,"Cannot start reactor when docked.")
              ;
              return uVar3 & 0xffffff00;
            }
            iVar6 = -1;
            iVar5 = 8;
            iVar4 = param_1;
            this = (void *)FUN_00402f60();
            FUN_00557fb0(this,iVar4,iVar5,iVar6);
            uVar2 = FUN_004ae9f0(pvVar1,param_1);
            return CONCAT31((int3)((uint)uVar2 >> 8),1);
          }
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}


uint __cdecl FUN_004e0690(int param_1)

{
  void *this;
  uint in_EAX;
  void *this_00;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    uVar2 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    in_EAX = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar3 >> 2;
    if (in_EAX != 0) {
      do {
        this = *(void **)(iVar3 + uVar2 * 4);
        if (*(int *)((int)this + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if (this != (void *)0x0) {
            iVar5 = -1;
            iVar4 = 9;
            iVar3 = param_1;
            this_00 = (void *)FUN_00402f60();
            FUN_00557fb0(this_00,iVar3,iVar4,iVar5);
            uVar1 = FUN_004ae7b0(this,param_1);
            return CONCAT31((int3)((uint)uVar1 >> 8),1);
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}


uint __cdecl FUN_004e06f0(int param_1)

{
  int iVar1;
  uint in_EAX;
  void *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    uVar2 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    in_EAX = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar3 >> 2;
    if (in_EAX != 0) {
      do {
        iVar1 = *(int *)(iVar3 + uVar2 * 4);
        if (*(int *)(iVar1 + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if (iVar1 != 0) {
            iVar5 = -1;
            iVar4 = 8;
            iVar3 = param_1;
            this = (void *)FUN_00402f60();
            FUN_00557fb0(this,iVar3,iVar4,iVar5);
            *(undefined1 *)(iVar1 + 0x1d) = 1;
            *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1e4);
            *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
            return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x1e4) >> 8),1);
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004e0770(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  iVar3 = 9;
  iVar2 = param_1;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,iVar2,iVar3,iVar4);
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


uint __cdecl FUN_004e07b0(int param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((99 < *(int *)(param_1 + 0x1dc)) &&
     (iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x44) + -400 +
                      *(int *)(param_1 + 0x1dc) * 4), iVar4 != 0)) {
    if (*(float *)(param_1 + 0x154) <= 0.0) {
      *(int *)(param_1 + 0x158) = iVar4;
      *(undefined4 *)(param_1 + 0x154) = 0x40800000;
    }
    iVar6 = -1;
    iVar5 = 8;
    iVar4 = param_1;
    pvVar1 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar1,iVar4,iVar5,iVar6);
    uVar2 = rand();
    uVar2 = uVar2 & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    iVar4 = uVar2 + 1;
    iVar5 = 0x18;
    pvVar1 = (void *)FUN_00402f60();
    uVar3 = FUN_00557fb0(pvVar1,param_1,iVar5,iVar4);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  iVar5 = -1;
  iVar4 = 10;
  pvVar1 = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(pvVar1,param_1,iVar4,iVar5);
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e0850(int param_1,int param_2)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(DAT_0065b5cc + 0xcc);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x70) == 1)) {
    return uVar1 & 0xffffff00;
  }
  if (param_2 == 0) {
    if (DAT_00655098 == 0) {
      DAT_00655098 = 2;
      iVar3 = 9;
    }
    else {
      DAT_00655098 = 0;
      iVar3 = 8;
    }
  }
  else if (DAT_00655094 == 0) {
    iVar3 = 9;
    DAT_00655094 = 3;
  }
  else {
    iVar3 = 8;
    DAT_00655094 = 0;
  }
  this = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(this,param_1,iVar3,-1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


uint __cdecl FUN_004e08e0(int param_1)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0x1e8);
  if (iVar3 == -1) {
    return in_EAX & 0xffffff00;
  }
  pvVar4 = *(void **)(param_1 + 0x40);
  uVar2 = 0;
  uVar7 = *(int *)((int)pvVar4 + 0x40) - *(int *)((int)pvVar4 + 0x3c) >> 2;
  if (uVar7 != 0) {
    do {
      iVar6 = *(int *)(*(int *)((int)pvVar4 + 0x3c) + uVar2 * 4);
      if (*(int *)(iVar6 + 0x10) == iVar3) goto LAB_004e0924;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar7);
  }
  iVar6 = 0;
LAB_004e0924:
  cVar1 = *(char *)(iVar6 + 0x14);
  iVar3 = FUN_005225b0(pvVar4,iVar3);
  *(bool *)(iVar3 + 0x14) = cVar1 == '\0';
  pvVar4 = (void *)FUN_00402f60();
  uVar5 = FUN_00557fb0(pvVar4,param_1,(cVar1 != '\0') + 8,-1);
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


undefined4 __cdecl FUN_004e0970(int param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1e8) == -1) {
LAB_004e0a0e:
    return in_EAX & 0xffffff00;
  }
  uVar3 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar5 >> 2;
  if (uVar1 != 0) {
    do {
      pvVar4 = *(void **)(iVar5 + uVar3 * 4);
      if (*(int *)((int)pvVar4 + 0x10) == *(int *)(param_1 + 0x1e8)) goto LAB_004e09af;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  pvVar4 = (void *)0x0;
LAB_004e09af:
  if (*(char *)((int)pvVar4 + 99) == '\0') {
    iVar5 = 0;
    do {
      if (*(char *)((int)pvVar4 + iVar5 + 0x1e) == '\0') goto LAB_004e09fd;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    if (*(char *)((int)pvVar4 + 0x1c) != '\0') {
LAB_004e09fd:
      iVar6 = -1;
      iVar5 = 10;
      pvVar4 = (void *)FUN_00402f60();
      in_EAX = FUN_00557fb0(pvVar4,param_1,iVar5,iVar6);
      goto LAB_004e0a0e;
    }
    FUN_004ae9f0(pvVar4,param_1);
    iVar5 = 8;
  }
  else {
    FUN_004ae7b0(pvVar4,param_1);
    iVar5 = 9;
  }
  pvVar4 = (void *)FUN_00402f60();
  uVar2 = FUN_00557fb0(pvVar4,param_1,iVar5,-1);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


uint __cdecl FUN_004e0a20(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  uint in_stack_ffffffc4;
  void *pvVar10;
  undefined4 local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  int *piVar3;
  
  pvVar10 = (void *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,&PTR_005ce008,0);
  bVar2 = FUN_004d3ba0(param_1,0,pvVar10);
  piVar3 = (int *)CONCAT31(extraout_var,bVar2);
  if (bVar2) {
    iVar5 = *(int *)(param_1 + 0x40);
    uVar6 = 0;
    piVar3 = *(int **)(iVar5 + 0x3c);
    uVar7 = *(int *)(iVar5 + 0x40) - (int)piVar3 >> 2;
    if (uVar7 != 0) {
      do {
        local_c = piVar3[uVar6];
        if (*(int *)(local_c + 0x10) == *(int *)(param_1 + 0x1e8)) goto LAB_004e0a95;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    local_c = 0;
LAB_004e0a95:
    iVar9 = local_c;
    uVar6 = 0;
    if (uVar7 != 0) {
      do {
        if (piVar3[uVar6] == local_c) {
          if (uVar6 != 0xffffffff) {
            local_10 = *(int **)(iVar5 + 0x40);
            local_8 = local_c;
            puVar4 = FUN_00414000(&local_18,&local_8,piVar3,local_10);
            piVar3 = (int *)*puVar4;
            iVar5 = *(int *)(param_1 + 0x40);
            local_14 = iVar5;
            if (piVar3 != local_10) {
              sVar8 = *(int *)(iVar5 + 0x40) - (int)local_10;
              memmove(piVar3,local_10,sVar8);
              *(size_t *)(local_14 + 0x40) = sVar8 + (int)piVar3;
              iVar5 = *(int *)(param_1 + 0x40);
              iVar9 = local_c;
            }
            piVar1 = *(int **)(iVar5 + 0x40);
            piVar3 = (int *)(*(int *)(iVar5 + 0x3c) + (uVar6 - 1) * 4);
            if (*(int **)(iVar5 + 0x44) != piVar1) {
              if (piVar3 == piVar1) {
                *piVar1 = iVar9;
                *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 4;
                *(uint *)(iVar9 + 0x38) = uVar6 - 1;
                return CONCAT31((int3)(uVar6 - 1 >> 8),1);
              }
              *piVar1 = piVar1[-1];
              *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 4;
              sVar8 = (int)piVar1 + (-4 - (int)piVar3);
              memmove((void *)((int)piVar1 - sVar8),piVar3,sVar8);
              *piVar3 = iVar9;
              *(uint *)(iVar9 + 0x38) = uVar6 - 1;
              return CONCAT31((int3)(uVar6 - 1 >> 8),1);
            }
            FUN_00414080((int *)(iVar5 + 0x3c),piVar3,&local_8);
            *(uint *)(local_8 + 0x38) = uVar6 - 1;
            return CONCAT31((int3)(uVar6 - 1 >> 8),1);
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
  }
  return (uint)piVar3 & 0xffffff00;
}


uint __cdecl FUN_004e0b80(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  int iVar9;
  uint in_stack_ffffffc4;
  void *pvVar10;
  undefined4 local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  int *piVar3;
  
  pvVar10 = (void *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,&PTR_005ce008,0);
  bVar2 = FUN_004d3c40(param_1,0,pvVar10);
  piVar3 = (int *)CONCAT31(extraout_var,bVar2);
  if (bVar2) {
    iVar5 = *(int *)(param_1 + 0x40);
    uVar6 = 0;
    piVar3 = *(int **)(iVar5 + 0x3c);
    uVar7 = *(int *)(iVar5 + 0x40) - (int)piVar3 >> 2;
    if (uVar7 != 0) {
      do {
        local_c = piVar3[uVar6];
        if (*(int *)(local_c + 0x10) == *(int *)(param_1 + 0x1e8)) goto LAB_004e0bf5;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    local_c = 0;
LAB_004e0bf5:
    iVar9 = local_c;
    uVar6 = 0;
    if (uVar7 != 0) {
      do {
        if (piVar3[uVar6] == local_c) {
          if (uVar6 != 0xffffffff) {
            local_10 = *(int **)(iVar5 + 0x40);
            local_8 = local_c;
            puVar4 = FUN_00414000(&local_18,&local_8,piVar3,local_10);
            piVar3 = (int *)*puVar4;
            iVar5 = *(int *)(param_1 + 0x40);
            local_14 = iVar5;
            if (piVar3 != local_10) {
              sVar8 = *(int *)(iVar5 + 0x40) - (int)local_10;
              memmove(piVar3,local_10,sVar8);
              *(size_t *)(local_14 + 0x40) = sVar8 + (int)piVar3;
              iVar5 = *(int *)(param_1 + 0x40);
              iVar9 = local_c;
            }
            piVar1 = *(int **)(iVar5 + 0x40);
            piVar3 = (int *)(*(int *)(iVar5 + 0x3c) + (uVar6 + 1) * 4);
            if (*(int **)(iVar5 + 0x44) != piVar1) {
              if (piVar3 == piVar1) {
                *piVar1 = iVar9;
                *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 4;
                *(uint *)(iVar9 + 0x38) = uVar6 + 1;
                return CONCAT31((int3)(uVar6 + 1 >> 8),1);
              }
              *piVar1 = piVar1[-1];
              *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 4;
              sVar8 = (int)piVar1 + (-4 - (int)piVar3);
              memmove((void *)((int)piVar1 - sVar8),piVar3,sVar8);
              *piVar3 = iVar9;
              *(uint *)(iVar9 + 0x38) = uVar6 + 1;
              return CONCAT31((int3)(uVar6 + 1 >> 8),1);
            }
            FUN_00414080((int *)(iVar5 + 0x3c),piVar3,&local_8);
            *(uint *)(local_8 + 0x38) = uVar6 + 1;
            return CONCAT31((int3)(uVar6 + 1 >> 8),1);
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
  }
  return (uint)piVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004e0ce0(int param_1,int param_2)

{
  void *this;
  int iVar1;
  
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,param_1,(param_2 == -1) + 8,-1);
  iVar1 = -1;
  if (*(int *)(param_1 + 0x1e8) != param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x1e8) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e0d20(int param_1,int param_2)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = -1;
  if (*(int *)(param_1 + 0x1e4) != param_2) {
    iVar2 = param_2;
  }
  *(int *)(param_1 + 0x1e4) = iVar2;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,(iVar2 == -1) + 8,-1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


uint __cdecl FUN_004e0d60(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined4 *this;
  int *piVar6;
  int iVar7;
  uint uVar8;
  byte *in_stack_ffffffb8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be468;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar8 = 0;
  piVar6 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - (int)piVar6 >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = (int *)*piVar6;
      if (piVar1[4] == *(int *)(param_1 + 0x1e4)) {
        if (piVar1 != (int *)0x0) {
          cVar2 = (**(code **)(*piVar1 + 0x10))();
          if (param_2 < 100) {
            piVar6 = (int *)(piVar1[3] + (param_2 + 1) * 4);
            iVar9 = *(int *)(piVar1[3] + 4 + param_3 * 4);
            iVar11 = *piVar6;
            if (iVar11 == 0) {
              pcVar10 = "Invalid component to be dragged.";
              goto LAB_004e0db9;
            }
            if (*(int *)(*(int *)(iVar11 + 4) + 0x80) != *(int *)(*(int *)(iVar9 + 4) + 0x80)) {
              pcVar10 = "Dragging component to an invalid slot.";
              goto LAB_004e0db9;
            }
            *piVar6 = 0;
            *(undefined4 *)(piVar1[3] + 4 + param_3 * 4) = 0;
            iVar7 = DAT_0065b444;
            *(int *)(piVar1[3] + 4 + param_2 * 4) = iVar9;
            if (*(char *)(iVar7 + 0x70) != '\0') {
              FUN_004024e0(&stack0xffffffb8,(undefined4 *)(param_1 + 0x238));
              local_8 = 0;
              puVar5 = FUN_00402de0();
              local_8 = 0xffffffff;
              FUN_00425750(puVar5,in_stack_ffffffb8);
              iVar7 = DAT_0065b444;
            }
            *(int *)(piVar1[3] + 4 + param_3 * 4) = iVar11;
            if (*(char *)(iVar7 + 0x70) != '\0') {
              FUN_004024e0(&stack0xffffffb8,(undefined4 *)(param_1 + 0x238));
              local_8 = 1;
              puVar5 = FUN_00402de0();
              local_8 = 0xffffffff;
              FUN_00425750(puVar5,in_stack_ffffffb8);
            }
            FUN_00591070("DETAIL","Moved a component inside the module.");
            iVar11 = -1;
            iVar9 = 8;
            pvVar4 = (void *)FUN_00402f60();
            FUN_00557fb0(pvVar4,param_1,iVar9,iVar11);
          }
          uVar3 = *(uint *)(DAT_0065b5cc + 0xcc);
          if ((uVar3 != 0) && (*(int *)(uVar3 + 0x70) == 1)) {
            uVar3 = (**(code **)(*piVar1 + 0x10))();
            if (((char)uVar3 != '\0') && (cVar2 == '\0')) {
              in_stack_ffffffb8 = (byte *)((uint)in_stack_ffffffb8 & 0xffffff00);
              FUN_00402690(&stack0xffffffb8,"repaired_module",0xf);
              local_8 = 2;
              this = FUN_00412df0();
              local_8 = 0xffffffff;
              uVar3 = FUN_004a0ee0(this,in_stack_ffffffb8);
              ExceptionList = local_10;
              return uVar3 & 0xffffff00;
            }
          }
          goto LAB_004e0dd7;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar8 < uVar3);
  }
  pcVar10 = "WARNING: No selected component or module for some reason.";
LAB_004e0db9:
  FUN_00591070("DETAIL",pcVar10);
  iVar11 = -1;
  iVar9 = 10;
  pvVar4 = (void *)FUN_00402f60();
  uVar3 = FUN_00557fb0(pvVar4,param_1,iVar9,iVar11);
LAB_004e0dd7:
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


undefined1 * __cdecl FUN_004e0fa0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined1 *this;
  int iVar6;
  undefined1 auStackY_100 [184];
  undefined4 uStackY_48;
  byte *in_stack_ffffffc0;
  uint in_stack_ffffffc4;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be4a8;
  local_10 = ExceptionList;
  if (param_2 == -1) {
    return auStackY_100;
  }
  ExceptionList = &local_10;
  if (param_2 < 100) {
    iVar6 = FUN_005225b0(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4));
    if (*(int *)(*(int *)(iVar6 + 0xc) + 4 + param_2 * 4) == 0) {
      FUN_00591070(&DAT_005cdc70,"%s: no component found at offset %d");
      iVar8 = -1;
      iVar2 = 10;
      iVar6 = param_1;
      pvVar4 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar4,iVar6,iVar2,iVar8);
    }
    else {
      FUN_00591070(&DAT_005cdc70,"%s: Unmounting addon \'%s\' from module \'%s\'");
      iVar2 = *(int *)(param_1 + 0x1f8);
      puVar3 = (undefined4 *)(*(int *)(iVar6 + 0xc) + param_2 * 4 + 4);
      puVar5 = *(undefined4 **)(iVar2 + 0x48);
      if (*(undefined4 **)(iVar2 + 0x4c) == puVar5) {
        FUN_00414080((void *)(iVar2 + 0x44),puVar5,puVar3);
      }
      else {
        *puVar5 = *puVar3;
        *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 4;
      }
      iVar9 = -1;
      iVar8 = 8;
      iVar2 = param_1;
      pvVar4 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar4,iVar2,iVar8,iVar9);
      if ((((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
           (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
          (pfVar1 = *(float **)(*(int *)(iVar6 + 0xc) + 4 + param_2 * 4), pfVar1 != (float *)0x0))
         && (*pfVar1 <= (float)*(int *)((int)pfVar1[1] + 0x14) &&
             (float)*(int *)((int)pfVar1[1] + 0x14) != *pfVar1)) {
        pbVar7 = (byte *)(in_stack_ffffffc4 & 0xffffff00);
        uStackY_48 = 0x4e1215;
        FUN_00402690(&stack0xffffffc4,"removed_damaged_component",0x19);
        local_8 = 1;
        puVar5 = FUN_00412df0();
        local_8 = 0xffffffff;
        in_stack_ffffffc0 = (byte *)0x4e122f;
        FUN_004a0ee0(puVar5,pbVar7);
      }
      *(undefined4 *)(*(int *)(iVar6 + 0xc) + 4 + param_2 * 4) = 0;
    }
    iVar6 = DAT_0065b444;
    if (*(char *)(DAT_0065b444 + 0x70) == '\0') goto LAB_004e1275;
    uStackY_48 = 0x4e125b;
    FUN_004024e0(&stack0xffffffc0,(undefined4 *)(param_1 + 0x238));
    local_8 = 2;
  }
  else {
    iVar6 = param_2 + -100;
    iVar2 = FUN_005225b0(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4));
    if (*(int *)(iVar6 * 4 + 0x54 + *(int *)(iVar2 + 0xc)) == 0) {
      FUN_00591070(&DAT_005cdc70,"%s: no addon found at offset %d");
      iVar8 = 10;
    }
    else {
      FUN_00591070(&DAT_005cdc70,"%s: Unmounting addon \'%s\' from module \'%s\'");
      puVar3 = (undefined4 *)(*(int *)(iVar2 + 0xc) + iVar6 * 4 + 0x54);
      iVar8 = *(int *)(param_1 + 0x1f8);
      puVar5 = *(undefined4 **)(iVar8 + 0x48);
      if (*(undefined4 **)(iVar8 + 0x4c) == puVar5) {
        FUN_00414080((void *)(iVar8 + 0x44),puVar5,puVar3);
      }
      else {
        *puVar5 = *puVar3;
        *(int *)(iVar8 + 0x48) = *(int *)(iVar8 + 0x48) + 4;
      }
      iVar8 = 8;
      *(undefined4 *)(iVar6 * 4 + 0x54 + *(int *)(iVar2 + 0xc)) = 0;
    }
    iVar2 = -1;
    iVar6 = param_1;
    pvVar4 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar4,iVar6,iVar8,iVar2);
    iVar6 = DAT_0065b444;
    if (*(char *)(DAT_0065b444 + 0x70) == '\0') goto LAB_004e1275;
    uStackY_48 = 0x4e10e7;
    FUN_004024e0(&stack0xffffffc0,(undefined4 *)(param_1 + 0x238));
    local_8 = 0;
  }
  this = FUN_00402de0();
  local_8 = 0xffffffff;
  iVar6 = FUN_00425750(this,in_stack_ffffffc0);
LAB_004e1275:
  ExceptionList = local_10;
  return (undefined1 *)CONCAT31((int3)((uint)iVar6 >> 8),1);
}


uint __cdecl FUN_004e1290(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  float *pfVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  void *pvVar10;
  int *piVar11;
  uint extraout_ECX;
  char cVar12;
  uint uVar13;
  int *piVar14;
  byte *in_stack_ffffffa8;
  uint in_stack_ffffffac;
  byte *pbVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar8 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be4f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar13 = 0;
  local_1c = *(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x44) + param_3 * 4);
  piVar11 = *(int **)(*(int *)(param_1 + 0x40) + 0x3c);
  uVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - (int)piVar11 >> 2;
  if (uVar5 != 0) {
    do {
      piVar14 = (int *)*piVar11;
      if (piVar14[4] == *(int *)(param_1 + 0x1e4)) goto LAB_004e1301;
      uVar13 = uVar13 + 1;
      piVar11 = piVar11 + 1;
    } while (uVar13 < uVar5);
  }
  piVar14 = (int *)0x0;
LAB_004e1301:
  local_14 = local_1c;
  uVar4 = (**(code **)(*piVar14 + 0x10))();
  iVar16 = local_14;
  puVar3 = param_2;
  puVar2 = param_1;
  param_3 = CONCAT13(uVar4,(undefined3)param_3);
  if (local_14 == 0) {
    pcVar17 = "WARNING: No selected component or module for some reason.";
  }
  else {
    iVar18 = *(int *)(local_14 + 4);
    local_24 = *(int *)(iVar18 + 0x80);
    if ((local_24 == 10) || (local_24 == 0xb)) {
      if (((int *)piVar14[3])[(int)(param_2 + 0x15)] == 0) {
        if (*(int *)(*(int *)piVar14[3] + 0x4c) != *(int *)(iVar18 + 0x24)) {
          FUN_00591070("DETAIL","Invalid socket type.");
          uVar5 = FUN_004eb5e0();
          ExceptionList = local_10;
          return uVar5 & 0xffffff00;
        }
        FUN_004eb5a0();
        *(int *)(piVar14[3] + 0x54 + (int)param_2 * 4) = iVar16;
        piVar11 = *(int **)(*(int *)(puVar8 + 0x1f8) + 0x48);
        puVar7 = FUN_00414000(&param_1,&local_1c,*(int **)(*(int *)(puVar8 + 0x1f8) + 0x44),piVar11)
        ;
        FUN_00412ba0((void *)(*(int *)(puVar8 + 0x1f8) + 0x44),&param_3,(void *)*puVar7,piVar11);
        FUN_00591070("DETAIL","Addon \'%s\' added to %s.");
        iVar16 = DAT_0065b444;
        if (*(char *)(DAT_0065b444 + 0x70) != '\0') {
          param_2 = &stack0xffffffa8;
          FUN_004024e0(&stack0xffffffa8,(undefined4 *)(puVar8 + 0x238));
          local_8 = 0;
          puVar8 = FUN_00402de0();
          local_8 = 0xffffffff;
          iVar16 = FUN_00425750(puVar8,in_stack_ffffffa8);
        }
        goto LAB_004e16b6;
      }
      pcVar17 = "Addon exists.";
    }
    else {
      local_18 = extraout_ECX & 0xffffff00;
      local_20 = *(int *)piVar14[3];
      if (*(int *)(local_20 + 0x4c) == *(int *)(iVar18 + 0x24)) {
        uVar5 = local_18 >> 8;
        local_18 = CONCAT31((int3)uVar5,1);
      }
      else {
        iVar16 = ((int *)piVar14[3])[(int)(param_2 + 0x15)];
        if (iVar16 != 0) {
          local_18 = (uint)(*(int *)(*(int *)(iVar16 + 4) + 0x28) == *(int *)(iVar18 + 0x24));
        }
      }
      cVar12 = '\0';
      if (local_24 == **(int **)(*(int *)(local_20 + 0x50) + (int)param_2 * 4)) {
        cVar12 = (char)local_18;
      }
      if (cVar12 != '\0') {
        if (*(int *)(piVar14[3] + 4 + (int)param_2 * 4) != 0) {
          FUN_00591070("DETAIL","Component exists.");
          iVar16 = *(int *)(puVar2 + 0x1f8);
          puVar6 = (undefined4 *)(piVar14[3] + (int)puVar3 * 4 + 4);
          puVar7 = *(undefined4 **)(iVar16 + 0x48);
          if (*(undefined4 **)(iVar16 + 0x4c) == puVar7) {
            FUN_00414080((void *)(iVar16 + 0x44),puVar7,puVar6);
          }
          else {
            *puVar7 = *puVar6;
            *(int *)(iVar16 + 0x48) = *(int *)(iVar16 + 0x48) + 4;
          }
          FUN_004eb5a0();
          if ((((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
               (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
              (pfVar1 = *(float **)(piVar14[3] + 4 + (int)puVar3 * 4), pfVar1 != (float *)0x0)) &&
             (*pfVar1 <= (float)*(int *)((int)pfVar1[1] + 0x14) &&
              (float)*(int *)((int)pfVar1[1] + 0x14) != *pfVar1)) {
            param_1 = &stack0xffffffac;
            pbVar15 = (byte *)(in_stack_ffffffac & 0xffffff00);
            FUN_00402690(&stack0xffffffac,"removed_damaged_component",0x19);
            local_8 = 1;
            puVar7 = FUN_00412df0();
            local_8 = 0xffffffff;
            in_stack_ffffffa8 = (byte *)0x4e1462;
            FUN_004a0ee0(puVar7,pbVar15);
          }
          *(undefined4 *)(piVar14[3] + 4 + (int)puVar3 * 4) = 0;
        }
        iVar18 = -1;
        iVar16 = 8;
        puVar8 = puVar2;
        pvVar10 = (void *)FUN_00402f60();
        FUN_00557fb0(pvVar10,(int)puVar8,iVar16,iVar18);
        *(int *)(piVar14[3] + 4 + (int)puVar3 * 4) = local_14;
        piVar11 = *(int **)(*(int *)(puVar2 + 0x1f8) + 0x48);
        puVar7 = FUN_00414000(&local_24,&local_1c,*(int **)(*(int *)(puVar2 + 0x1f8) + 0x44),piVar11
                             );
        FUN_00412ba0((void *)(*(int *)(puVar2 + 0x1f8) + 0x44),&param_1,(void *)*puVar7,piVar11);
        FUN_00591070("DETAIL","Component \'%s\' added to %s.");
        if (*(char *)(DAT_0065b444 + 0x70) != '\0') {
          param_2 = &stack0xffffffa8;
          FUN_004024e0(&stack0xffffffa8,(undefined4 *)(puVar2 + 0x238));
          local_8 = 2;
          puVar8 = FUN_00402de0();
          local_8 = 0xffffffff;
          FUN_00425750(puVar8,in_stack_ffffffa8);
        }
        iVar16 = *(int *)(DAT_0065b5cc + 0xcc);
        if (((iVar16 != 0) && (*(int *)(iVar16 + 0x70) == 1)) &&
           ((iVar16 = (**(code **)(*piVar14 + 0x10))(), (char)iVar16 != '\0' &&
            (param_3._3_1_ == '\0')))) {
          param_2 = &stack0xffffffa8;
          in_stack_ffffffa8 = (byte *)((uint)in_stack_ffffffa8 & 0xffffff00);
          FUN_00402690(&stack0xffffffa8,"repaired_module",0xf);
          local_8 = 3;
          puVar7 = FUN_00412df0();
          local_8 = 0xffffffff;
          uVar9 = FUN_004a0ee0(puVar7,in_stack_ffffffa8);
          ExceptionList = local_10;
          return CONCAT31((int3)((uint)uVar9 >> 8),1);
        }
LAB_004e16b6:
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)iVar16 >> 8),1);
      }
      pcVar17 = "Invalid socket type.";
      puVar8 = param_1;
    }
  }
  FUN_00591070("DETAIL",pcVar17);
  iVar18 = -1;
  iVar16 = 10;
  pvVar10 = (void *)FUN_00402f60();
  uVar5 = FUN_00557fb0(pvVar10,(int)puVar8,iVar16,iVar18);
  ExceptionList = local_10;
  return uVar5 & 0xffffff00;
}


undefined4 __cdecl FUN_004e1710(int param_1,undefined4 param_2)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0065b5cc;
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1d4) = param_2;
  if ((*(int *)(param_1 + 0x1d4) != -1) &&
     (*(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x44) + *(int *)(param_1 + 0x1d4) * 4) != 0)) {
    FUN_00591070("DETAIL","Selected component \'%s %s\' in inventory");
    iVar2 = DAT_0065b5cc;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0xd0) + 0x1d4);
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,param_1,(uint)(iVar2 == -1) * 2 + 8,-1);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e17b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  
  *(undefined4 *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1dc) = param_2;
  iVar1 = *(int *)(param_1 + 0x1dc);
  if (iVar1 != -1) {
    if (iVar1 < 100) {
      iVar2 = FUN_005225b0(*(void **)(param_1 + 0x40),*(int *)(param_1 + 0x1e4));
      if (iVar2 != 0) {
        if (*(int *)(*(int *)(iVar2 + 0xc) + 4 + iVar1 * 4) == 0) {
          FUN_00591070("DETAIL","Selected empty slot \'%d\' in open module \'%s %s\'");
        }
        else {
          FUN_00591070("DETAIL","Selected component \'%s %s\' (slot %d) in open module \'%s %s\'");
        }
      }
    }
    else if (*(int *)(*(int *)(*(int *)(param_1 + 0x1f8) + 0x44) + -400 + iVar1 * 4) != 0) {
      FUN_00591070("DETAIL","Selected component \'%s %s\' in tray");
    }
  }
  iVar1 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x1dc);
  this = (void *)FUN_00402f60();
  uVar3 = FUN_00557fb0(this,param_1,(uint)(iVar1 == -1) * 2 + 8,-1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


uint __cdecl FUN_004e1900(int param_1,int param_2)

{
  uint in_EAX;
  int iVar1;
  void *this;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    in_EAX = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar1 >> 2;
    if (uVar3 != 0) {
      do {
        iVar4 = *(int *)(iVar1 + in_EAX * 4);
        if (*(int *)(iVar4 + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if ((iVar4 != 0) && (*(char *)(iVar4 + 99) == '\0')) {
            *(bool *)(iVar4 + param_2 + 0x1e) = *(char *)(iVar4 + param_2 + 0x1e) == '\0';
            iVar1 = rand();
            iVar1 = iVar1 % 3 + 1;
            iVar4 = 0x19;
            this = (void *)FUN_00402f60();
            uVar2 = FUN_00557fb0(this,param_1,iVar4,iVar1);
            return CONCAT31((int3)((uint)uVar2 >> 8),1);
          }
          break;
        }
        in_EAX = in_EAX + 1;
      } while (in_EAX < uVar3);
    }
  }
  return in_EAX & 0xffffff00;
}


uint __cdecl FUN_004e1980(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  void *this;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x1e4) != -1) {
    in_EAX = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x3c);
    uVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x40) - iVar2 >> 2;
    if (uVar5 != 0) {
      do {
        iVar3 = *(int *)(iVar2 + in_EAX * 4);
        if (*(int *)(iVar3 + 0x10) == *(int *)(param_1 + 0x1e4)) {
          if ((iVar3 != 0) && (*(char *)(iVar3 + 99) == '\0')) {
            cVar1 = *(char *)(iVar3 + 0x1c);
            this = (void *)FUN_00402f60();
            uVar4 = FUN_00557fb0(this,param_1,(cVar1 != '\0') + 0x1a,-1);
            *(bool *)(iVar3 + 0x1c) = *(char *)(iVar3 + 0x1c) == '\0';
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
          break;
        }
        in_EAX = in_EAX + 1;
      } while (in_EAX < uVar5);
    }
  }
  return in_EAX & 0xffffff00;
}


undefined1 FUN_004e1a00(void)

{
  return 1;
}


uint __cdecl FUN_004e1a10(int param_1)

{
  char cVar1;
  uint uVar2;
  void *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 auStack_14 [4];
  
  uVar2 = *(uint *)(param_1 + 0x40);
  if (*(int **)(uVar2 + 0x24) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(uVar2 + 0x24) + 0x10))(0);
    if ((char)uVar2 != '\0') {
      iVar5 = *(int *)(param_1 + 0x1d0);
      if (*(int *)(param_1 + 0x50) == iVar5) {
        pcVar6 = "Sector already selected.";
      }
      else {
        if (**(int **)(param_1 + 0x24) != iVar5) {
          if (iVar5 == -1) {
            FUN_00527550(*(int **)(param_1 + 0x224),3,"Select a cluster from cluster map first.");
            uVar2 = FUN_004eb5e0();
            return uVar2 & 0xffffff00;
          }
          *(int *)(param_1 + 0x50) = iVar5;
          puVar3 = FUN_0040da70(auStack_14,*(int *)(param_1 + 0x20),iVar5);
          *(undefined4 *)(param_1 + 0x48) = *puVar3;
          *(undefined4 *)(param_1 + 0x4c) = puVar3[1];
          uVar4 = FUN_004a8750(*(float *)(param_1 + 0x48),*(float *)(param_1 + 0x4c));
          uVar4 = FUN_004a8810(uVar4);
          *(undefined4 *)(param_1 + 0x60) = uVar4;
          if (*(char *)(param_1 + 0x234) != '\0') {
            cVar1 = FUN_004cb1c0(param_1 + 8);
            if (*(int *)(param_1 + 0x60) == CONCAT31(extraout_var,cVar1)) {
              FUN_00527550(*(int **)(param_1 + 0x224),1,"Jump destination set. In jump quadrant.");
            }
            else {
              FUN_00527550(*(int **)(param_1 + 0x224),2,
                           "Jump destination set. Maneuver to quadrant %s.");
            }
          }
          *(undefined4 *)(param_1 + 0x5c) = 0xbf800000;
          uVar4 = FUN_004eb5a0();
          return CONCAT31((int3)((uint)uVar4 >> 8),1);
        }
        pcVar6 = "Already in this sector.";
      }
      FUN_00527550(*(int **)(param_1 + 0x224),3,pcVar6);
      iVar7 = -1;
      iVar5 = 10;
      this = (void *)FUN_00402f60();
      uVar2 = FUN_00557fb0(this,param_1,iVar5,iVar7);
    }
  }
  return uVar2 & 0xffffff00;
}


uint __cdecl FUN_004e1b40(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  
  uVar4 = *(uint *)(param_1 + 0x40);
  if ((((*(int **)(uVar4 + 0x24) != (int *)0x0) &&
       (uVar4 = (**(code **)(**(int **)(uVar4 + 0x24) + 0x10))(0), (char)uVar4 != '\0')) &&
      ((uVar4 = *(uint *)(param_1 + 0xd4), uVar4 != 3 ||
       ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))))) &&
     (*(int *)(param_1 + 0x178) == 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14);
    if (piVar1 == (int *)0x0) {
      pcVar8 = "No jump drive installed.";
    }
    else {
      cVar3 = (**(code **)(*piVar1 + 0x10))(0);
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x50) != -1) {
          puVar5 = FUN_0040da70((undefined4 *)&stack0xffffffec,*(int *)(param_1 + 0x20),
                                *(int *)(param_1 + 0x50));
          *(undefined4 *)(param_1 + 0x48) = *puVar5;
          *(undefined4 *)(param_1 + 0x4c) = puVar5[1];
          uVar6 = FUN_004a8750(*(float *)(param_1 + 0x48),*(float *)(param_1 + 0x4c));
          uVar6 = FUN_004a8810(uVar6);
          *(undefined4 *)(param_1 + 0x60) = uVar6;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
        iVar7 = FUN_00437c60(*(int **)(*(int *)(*(int *)(iVar2 + 4) + 0x14) + 0xc));
        *(float *)(param_1 + 0x58) =
             *(float *)(*(int *)(iVar2 + 8) + 0x108) * (((float)iVar7 / 100.0 - 1.0) * -1.0 + 1.0);
        uVar6 = FUN_004eb5a0();
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      pcVar8 = "Jump drive non-functional.";
    }
    FUN_00527550(*(int **)(param_1 + 0x224),3,pcVar8);
    uVar4 = FUN_004eb5e0();
  }
  return uVar4 & 0xffffff00;
}


uint __cdecl FUN_004e1c80(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  if ((((*(int **)(uVar3 + 0x24) != (int *)0x0) &&
       (uVar3 = (**(code **)(**(int **)(uVar3 + 0x24) + 0x10))(0), (char)uVar3 != '\0')) &&
      ((uVar3 = *(uint *)(param_1 + 0xd4), uVar3 != 3 ||
       ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))))) &&
     (*(int *)(param_1 + 0x178) == 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14);
    if (piVar1 == (int *)0x0) {
      pcVar5 = "No jump drive installed.";
    }
    else {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if (cVar2 == '\0') {
        pcVar5 = "Jump drive non-functional.";
      }
      else {
        if (*(float *)(param_1 + 0x58) == 0.0) {
          uVar4 = FUN_00512d80(param_1);
          return CONCAT31((int3)((uint)uVar4 >> 8),1);
        }
        pcVar5 = "Jump drive not spun up.";
      }
    }
    FUN_00527550(*(int **)(param_1 + 0x224),3,pcVar5);
    uVar3 = FUN_004eb5e0();
  }
  return uVar3 & 0xffffff00;
}


uint __cdecl FUN_004e1d40(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  int extraout_EDX;
  float fVar5;
  char *pcVar6;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  if ((((*(int **)(uVar3 + 0x24) != (int *)0x0) &&
       (uVar3 = (**(code **)(**(int **)(uVar3 + 0x24) + 0x10))(0), (char)uVar3 != '\0')) &&
      ((uVar3 = *(uint *)(param_1 + 0xd4), uVar3 != 3 ||
       ((*(int *)(param_1 + 0xf8) != 2 && (*(int *)(param_1 + 0xf8) != 3)))))) &&
     (*(int *)(param_1 + 0x178) == 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x14);
    if (piVar1 == (int *)0x0) {
      pcVar6 = "No jump drive installed.";
    }
    else {
      cVar2 = (**(code **)(*piVar1 + 0x10))(0);
      if (cVar2 == '\0') {
        pcVar6 = "Jump drive non-functional.";
      }
      else if (*(float *)(param_1 + 0x58) == 0.0) {
        if ((*(int *)(param_1 + 0x50) == -1) || (fVar5 = *(float *)(param_1 + 0x5c), fVar5 != -1.0))
        {
          pcVar6 = "Jump target not selected from sector map.";
        }
        else {
          cVar2 = FUN_004cb1c0(param_1 + 8);
          if (extraout_EDX != CONCAT31(extraout_var,cVar2)) {
            uVar3 = FUN_00527550(*(int **)(param_1 + 0x224),3,
                                 "Navigate to quadrant %s for calculation.");
            return uVar3 & 0xffffff00;
          }
          FUN_00403cb0(param_1);
          if (fVar5 <= 0.0) {
            *(undefined4 *)(param_1 + 0x5c) = 0;
            uVar4 = FUN_004eb5a0();
            return CONCAT31((int3)((uint)uVar4 >> 8),1);
          }
          pcVar6 = "Cannot calculate solution while moving.";
        }
      }
      else {
        pcVar6 = "Jump drive not spun up.";
      }
    }
    FUN_00527550(*(int **)(param_1 + 0x224),3,pcVar6);
    uVar3 = FUN_004eb5e0();
  }
  return uVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004e1e70(void *param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined3 extraout_var;
  void *pvVar4;
  byte *in_stack_ffffffc8;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be2c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = *(uint *)((int)param_1 + 0x40);
  if ((((*(int **)(uVar3 + 0x24) != (int *)0x0) &&
       (uVar3 = (**(code **)(**(int **)(uVar3 + 0x24) + 0x10))(), (char)uVar3 != '\0')) &&
      ((uVar3 = *(uint *)((int)param_1 + 0xd4), uVar3 != 3 ||
       ((*(int *)((int)param_1 + 0xf8) != 2 && (*(int *)((int)param_1 + 0xf8) != 3)))))) &&
     (*(int *)((int)param_1 + 0x178) == 0)) {
    uVar3 = *(uint *)((int)param_1 + 0x40);
    if (*(int **)(uVar3 + 0x14) != (int *)0x0) {
      uVar3 = (**(code **)(**(int **)(uVar3 + 0x14) + 0x10))();
      if ((char)uVar3 != '\0') {
        fVar1 = *(float *)((int)param_1 + 0x58);
        uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                         CONCAT11((fVar1 == 0.0) << 6 | NAN(fVar1) << 2 | 2U | fVar1 < 0.0,
                                  (char)uVar3));
        if ((fVar1 == 0.0) &&
           (50.0 < *(float *)((int)param_1 + 0x5c) || *(float *)((int)param_1 + 0x5c) == 50.0)) {
          cVar2 = FUN_004cb1c0((int)param_1 + 8);
          uVar3 = CONCAT31(extraout_var,cVar2);
          if (uVar3 == *(uint *)((int)param_1 + 0x60)) {
            FUN_004eb5a0();
            FUN_00591070(&DAT_005cdc70,"Jumping from sector %d to sector %d");
            FUN_00512ae0(param_1,*(undefined4 *)((int)param_1 + 0x50),
                         *(undefined4 *)((int)param_1 + 0x48),*(undefined4 *)((int)param_1 + 0x4c));
            uVar3 = 0xffffffff;
            pvVar4 = (void *)FUN_004023e0();
            FUN_00530750(pvVar4,uVar3);
            uVar5 = 1;
            pvVar4 = (void *)FUN_004023e0();
            FUN_005313a0(pvVar4,uVar5);
            FUN_004024e0(&stack0xffffffc8,(undefined4 *)((int)param_1 + 0x238));
            local_8 = 0;
            pvVar4 = (void *)FUN_004023e0();
            local_8 = 0xffffffff;
            uVar5 = FUN_00531140(pvVar4,in_stack_ffffffc8);
            ExceptionList = local_10;
            return CONCAT31((int3)((uint)uVar5 >> 8),1);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


undefined1 __cdecl FUN_004e2000(void *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  Layer *pLVar5;
  undefined2 *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint in_stack_ffffffc0;
  byte *pbVar9;
  Color3B local_13 [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be55e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pbVar9 = (byte *)(in_stack_ffffffc0 & 0xffffff00);
  FUN_00402690(&stack0xffffffc0,&PTR_005ce008,0);
  uVar7 = 0;
  cVar2 = FUN_004ceb90((int)param_1,0,pbVar9);
  if (cVar2 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  iVar1 = *(int *)(DAT_0065b5cc + 0xcc);
  FUN_00512ae0(param_1,*(undefined4 *)(iVar1 + 0xb0),*(undefined4 *)(iVar1 + 0xa8),
               *(undefined4 *)(iVar1 + 0xac));
  puVar4 = *(undefined4 **)(DAT_0065b5cc + 0x3c);
  if (puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40)) {
    do {
      if (*(int *)*puVar4 == *(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0xb0)) break;
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(DAT_0065b5cc + 0x40));
  }
  FUN_00591070("DETAIL","Tutorial jumping to sector \'%s\'");
  pbVar8 = (byte *)(uVar7 & 0xffffff00);
  FUN_00402690(&stack0xffffffbc,"tutorial_jumping",0x10);
  local_8 = 0;
  puVar4 = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(puVar4,pbVar8);
  pbVar8 = (byte *)((uint)pbVar8 & 0xffffff00);
  FUN_00402690(&stack0xffffffbc,"ready_to_jump_in_tutorial",0x19);
  local_8 = 1;
  puVar4 = FUN_00412df0();
  local_8 = 0xffffffff;
  FUN_004a0ee0(puVar4,pbVar8);
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar5 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 2;
    DAT_0065c25c = FUN_0052b7a0(pLVar5);
    local_8 = 0xffffffff;
  }
  FUN_00530750(DAT_0065c25c,0xffffffff);
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar5 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 3;
    DAT_0065c25c = FUN_0052b7a0(pLVar5);
    local_8 = 0xffffffff;
  }
  pLVar5 = DAT_0065c25c;
  puVar6 = (undefined2 *)cocos2d::Color3B::Color3B(local_13,0x80,'\0',0x80);
  *(undefined2 *)(pLVar5 + 0x3cc) = *puVar6;
  pLVar5[0x3ce] = *(Layer *)(puVar6 + 1);
  bVar3 = cocos2d::Color3B::operator==((Color3B *)(pLVar5 + 0x3cf),(Color3B *)(pLVar5 + 0x3cc));
  if (!bVar3) {
    *(undefined4 *)(pLVar5 + 0x3c4) = 0;
    *(undefined4 *)(pLVar5 + 0x3c8) = 0x40000000;
    pLVar5[0x3c0] = (Layer)0x1;
  }
  FUN_004024e0(&stack0xffffffc0,(undefined4 *)((int)param_1 + 0x238));
  local_8 = 4;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar5 = (Layer *)FUN_005adb0f(0x418);
    local_8 = CONCAT31(local_8._1_3_,5);
    DAT_0065c25c = FUN_0052b7a0(pLVar5);
  }
  local_8 = 0xffffffff;
  FUN_00531140(DAT_0065c25c,pbVar9);
  FUN_00591070("WORLD","Began tutorial-mode jump");
  ExceptionList = local_10;
  return 1;
}


undefined4 __cdecl FUN_004e22c0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be592;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == (void *)0x0) {
    puVar2 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar2);
  }
  local_8 = 0xffffffff;
  iVar1 = *(int *)((int)DAT_0065c288 + 0x11c);
  iVar3 = FUN_0048b890(DAT_0065c288,param_2);
  *(int *)(iVar1 + param_2 * 0x44 + 0x1c) = iVar3;
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


undefined4 __cdecl FUN_004e2350(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar6 = -1;
  iVar4 = 0x2b;
  iVar5 = param_1;
  pvVar1 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar1,iVar5,iVar4,iVar6);
  iVar4 = -1;
  iVar5 = 0x2d;
  pvVar1 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar1,param_1,iVar5,iVar4);
  if (DAT_0065c288 == (void *)0x0) {
    puVar2 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = (void *)FUN_00485f60(puVar2);
    local_8 = 0xffffffff;
  }
  uVar3 = FUN_0048ed40(DAT_0065c288,param_2,(void *)0x0);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


undefined4 __cdecl FUN_004e23f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar2 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar2);
  }
  iVar1 = *(int *)(DAT_0065c288 + 0x11c);
  *(undefined4 *)(iVar1 + 4 + param_2 * 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x18 + param_2 * 0x44) = 0xffffffff;
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


undefined4 __cdecl FUN_004e2470(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = -1;
  iVar2 = 0x2c;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,param_1,iVar2,iVar3);
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  iVar2 = DAT_0065c288;
  *(undefined4 *)(DAT_0065c288 + 0xcc) = 0;
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


undefined4 __cdecl FUN_004e24f0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar2 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar2);
  }
  local_8 = 0xffffffff;
  cVar1 = FUN_0048fe90(DAT_0065c288);
  iVar7 = -1;
  if (cVar1 == '\0') {
    iVar7 = 0x2c;
  }
  else {
    iVar6 = 0x2b;
    iVar5 = param_1;
    pvVar3 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar3,iVar5,iVar6,iVar7);
    iVar7 = 0x2d;
  }
  iVar5 = -1;
  pvVar3 = (void *)FUN_00402f60();
  uVar4 = FUN_00557fb0(pvVar3,param_1,iVar7,iVar5);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


undefined4 __cdecl FUN_004e2590(int param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005b08f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = -1;
  iVar3 = 0x2b;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,param_1,iVar3,iVar4);
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
    local_8 = 0xffffffff;
  }
  uVar2 = FUN_00492220(DAT_0065c288);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


uint __cdecl FUN_004e2620(int param_1)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint in_stack_ffffffcc;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be5c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
  FUN_00402690(&stack0xffffffcc,&PTR_005ce008,0);
  cVar1 = FUN_004d5ec0(param_1,0,pvVar2);
  iVar7 = -1;
  if (cVar1 == '\0') {
    iVar6 = 0x2c;
    pvVar2 = (void *)FUN_00402f60();
    uVar3 = FUN_00557fb0(pvVar2,param_1,iVar6,iVar7);
    ExceptionList = local_10;
    return uVar3 & 0xffffff00;
  }
  iVar6 = 0x2b;
  pvVar2 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar2,param_1,iVar6,iVar7);
  if (DAT_0065c288 == 0) {
    puVar4 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar4);
    local_8 = 0xffffffff;
  }
  uVar5 = FUN_00492410(DAT_0065c288);
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


uint __cdecl FUN_004e2700(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint in_stack_ffffffcc;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be61b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar2 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar2);
  }
  local_8 = 0xffffffff;
  uVar3 = FUN_004910f0(DAT_0065c288);
  if ((char)uVar3 != '\0') {
    iVar8 = -1;
    iVar6 = 0x2b;
    iVar7 = param_1;
    pvVar4 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar4,iVar7,iVar6,iVar8);
    iVar6 = -1;
    iVar7 = 0x2d;
    pvVar4 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar4,param_1,iVar7,iVar6);
    if (DAT_0065c288 == 0) {
      puVar2 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 1;
      DAT_0065c288 = FUN_00485f60(puVar2);
      local_8 = 0xffffffff;
    }
    cVar1 = FUN_00491150(DAT_0065c288);
    uVar3 = CONCAT31(extraout_var,cVar1);
    if (cVar1 != '\0') {
      pvVar4 = (void *)(in_stack_ffffffcc & 0xffffff00);
      FUN_00402690(&stack0xffffffcc,"contracts_taken",0xf);
      local_8 = 2;
      uVar5 = extraout_ECX;
      if (DAT_0065c294 == 0) {
        puVar2 = (undefined4 *)FUN_005adb0f(0x28);
        local_8 = CONCAT31(local_8._1_3_,3);
        DAT_0065c294 = FUN_0051e500(puVar2);
        uVar5 = extraout_ECX_00;
      }
      local_8 = 0xffffffff;
      uVar5 = FUN_0051e750(uVar5,pvVar4);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


uint __cdecl FUN_004e2850(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be664;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  uVar2 = FUN_00490e20(DAT_0065c288);
  if ((char)uVar2 != '\0') {
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = 0xffffffff;
    }
    uVar2 = FUN_00490ed0(DAT_0065c288);
    if ((char)uVar2 != '\0') {
      iVar7 = -1;
      iVar5 = 0x2a;
      iVar6 = param_1;
      pvVar3 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar3,iVar6,iVar5,iVar7);
      iVar5 = -1;
      iVar6 = 0x2d;
      pvVar3 = (void *)FUN_00402f60();
      uVar4 = FUN_00557fb0(pvVar3,param_1,iVar6,iVar5);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004e2940(int param_1)

{
  int *_Src;
  int *_Dst;
  char cVar1;
  undefined3 extraout_var;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  size_t _Size;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be6bb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    local_20 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(local_20);
  }
  local_8 = 0xffffffff;
  uVar6 = DAT_0065c288;
  if (((*(int *)(DAT_0065c288 + 0xcc) == 4) && (*(int *)(DAT_0065c288 + 0xd8) != -1)) &&
     (uVar6 = *(uint *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x254), *(char *)(uVar6 + 0xe0) == '\0')) {
    cVar1 = FUN_0040fd70();
    uVar6 = CONCAT31(extraout_var,cVar1);
    if (cVar1 == '\0') {
      iVar9 = -1;
      iVar7 = 0x2b;
      iVar8 = param_1;
      pvVar2 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar2,iVar8,iVar7,iVar9);
      iVar7 = -1;
      iVar8 = 0x2d;
      pvVar2 = (void *)FUN_00402f60();
      FUN_00557fb0(pvVar2,param_1,iVar8,iVar7);
      local_18 = DAT_0065c288;
      if (DAT_0065c288 == 0) {
        local_20 = (undefined4 *)FUN_005adb0f(300);
        local_8 = 1;
        DAT_0065c288 = FUN_00485f60(local_20);
        local_8 = 0xffffffff;
      }
      uVar5 = DAT_0065c288;
      iVar8 = *(int *)(*(int *)(DAT_0065b5cc + 0xd0) + 0x178);
      local_20 = *(undefined4 **)(*(int *)(iVar8 + 0x408) + *(int *)(DAT_0065c288 + 0xd8) * 4);
      uVar6 = 0;
      if (local_20 != (undefined4 *)0x0) {
        local_1c = local_20;
        local_18 = DAT_0065c288;
        local_14 = iVar8;
        FUN_004853c0((int)local_20);
        _Src = *(int **)(iVar8 + 0x40c);
        puVar3 = FUN_00414000(&local_24,(int *)&local_1c,*(int **)(iVar8 + 0x408),_Src);
        _Dst = (int *)*puVar3;
        if (_Dst != _Src) {
          _Size = *(int *)(local_14 + 0x40c) - (int)_Src;
          memmove(_Dst,_Src,_Size);
          *(size_t *)(local_14 + 0x40c) = _Size + (int)_Dst;
          uVar5 = local_18;
        }
        *(undefined4 **)(DAT_0065b5cc + 0x128) = local_20;
        uVar6 = 0x4e2afb;
        FUN_00591070("WORLD","Player took passenger %s from station %s, destination %s");
        iVar8 = DAT_0065b5cc;
        *(undefined4 *)(uVar5 + 0xd8) = 0xffffffff;
        if (*(int *)(*(int *)(iVar8 + 0xcc) + 0x70) == 2) {
          FUN_004127d0();
          FUN_004b8550();
        }
        local_20 = (undefined4 *)&stack0xffffffb4;
        pvVar2 = (void *)(uVar6 & 0xffffff00);
        FUN_00402690(&stack0xffffffb4,"passengers_taken",0x10);
        local_8 = 2;
        uVar4 = extraout_ECX;
        if (DAT_0065c294 == 0) {
          local_1c = (undefined4 *)FUN_005adb0f(0x28);
          local_8 = CONCAT31(local_8._1_3_,3);
          DAT_0065c294 = FUN_0051e500(local_1c);
          uVar4 = extraout_ECX_00;
        }
        local_8 = 0xffffffff;
        uVar4 = FUN_0051e750(uVar4,pvVar2);
        ExceptionList = local_10;
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
    }
  }
  ExceptionList = local_10;
  return uVar6 & 0xffffff00;
}


undefined4 __cdecl FUN_004e2bb0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint in_stack_ffffffcc;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be61b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0065c288 == 0) {
    puVar1 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar1);
  }
  local_8 = 0xffffffff;
  uVar3 = DAT_0065c288;
  if ((*(int *)(DAT_0065c288 + 0xcc) == 5) && (*(int *)(DAT_0065c288 + 0xe4) != -1)) {
    iVar7 = -1;
    iVar5 = 0x2b;
    iVar6 = param_1;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,iVar6,iVar5,iVar7);
    iVar5 = -1;
    iVar6 = 0x2d;
    pvVar2 = (void *)FUN_00402f60();
    FUN_00557fb0(pvVar2,param_1,iVar6,iVar5);
    if (DAT_0065c288 == 0) {
      puVar1 = (undefined4 *)FUN_005adb0f(300);
      local_8 = 1;
      DAT_0065c288 = FUN_00485f60(puVar1);
      local_8 = 0xffffffff;
    }
    uVar3 = FUN_0049b570(DAT_0065c288);
    if ((char)uVar3 != '\0') {
      pvVar2 = (void *)(in_stack_ffffffcc & 0xffffff00);
      FUN_00402690(&stack0xffffffcc,"bounties_taken",0xe);
      local_8 = 2;
      uVar4 = extraout_ECX;
      if (DAT_0065c294 == 0) {
        puVar1 = (undefined4 *)FUN_005adb0f(0x28);
        local_8 = CONCAT31(local_8._1_3_,3);
        DAT_0065c294 = FUN_0051e500(puVar1);
        uVar4 = extraout_ECX_00;
      }
      local_8 = 0xffffffff;
      uVar4 = FUN_0051e750(uVar4,pvVar2);
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  ExceptionList = local_10;
  return uVar3 & 0xffffff00;
}


undefined4 __cdecl FUN_004e2d10(int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be5c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar5 = -1;
  iVar3 = 0x2b;
  iVar4 = param_1;
  pvVar1 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar1,iVar4,iVar3,iVar5);
  iVar5 = -1;
  iVar3 = 0x2c;
  iVar4 = param_1;
  pvVar1 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar1,iVar4,iVar3,iVar5);
  iVar3 = -1;
  iVar4 = 0x2d;
  pvVar1 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar1,param_1,iVar4,iVar3);
  if (DAT_0065c288 == 0) {
    puVar2 = (undefined4 *)FUN_005adb0f(300);
    local_8 = 0;
    DAT_0065c288 = FUN_00485f60(puVar2);
  }
  iVar4 = DAT_0065c288;
  *(undefined1 *)(DAT_0065c288 + 0x128) = 1;
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}


undefined1 __cdecl FUN_004e2db0(void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  Layer *pLVar4;
  uint in_stack_ffffffc4;
  byte *pbVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be6fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pbVar5 = (byte *)(in_stack_ffffffc4 & 0xffffff00);
  FUN_00402690(&stack0xffffffc4,&PTR_005ce008,0);
  cVar1 = FUN_004d8f60((int)param_1,0,pbVar5);
  if (cVar1 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  puVar2 = (undefined4 *)FUN_0051fe10(*(int *)((int)param_1 + 0x24));
  iVar8 = -1;
  iVar7 = 8;
  pvVar6 = param_1;
  pvVar3 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar3,(int)pvVar6,iVar7,iVar8);
  FUN_00591070(&DAT_005cdc70,"Manually began docking procedure with %s");
  FUN_00518870((int)param_1);
  *(undefined8 *)((int)param_1 + 0x28) = *(undefined8 *)(puVar2 + 10);
  *(undefined8 *)((int)param_1 + 0x30) = *(undefined8 *)(puVar2 + 0xc);
  FUN_004024e0(&stack0xffffffc4,(undefined4 *)((int)param_1 + 0x238));
  local_8 = 0;
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar4 = (Layer *)FUN_005adb0f(0x418);
    local_8 = CONCAT31(local_8._1_3_,1);
    DAT_0065c25c = FUN_0052b7a0(pLVar4);
  }
  local_8 = 0xffffffff;
  FUN_00531140(DAT_0065c25c,pbVar5);
  iVar8 = -1;
  iVar7 = 0x29;
  pvVar6 = param_1;
  pvVar3 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar3,(int)pvVar6,iVar7,iVar8);
  FUN_00511dc0(param_1,puVar2);
  ExceptionList = local_10;
  return 1;
}


undefined4 __cdecl FUN_004e2f30(void *param_1)

{
  void *this;
  Layer *pLVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be732;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar9 = -1;
  iVar8 = 8;
  pvVar7 = param_1;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,(int)pvVar7,iVar8,iVar9);
  FUN_00511fb0(param_1,'\0');
  if (DAT_0065c25c == (Layer *)0x0) {
    pLVar1 = (Layer *)FUN_005adb0f(0x418);
    local_8 = 0;
    DAT_0065c25c = FUN_0052b7a0(pLVar1);
    local_8 = 0xffffffff;
  }
  pLVar1 = DAT_0065c25c;
  local_14 = 0;
  iVar8 = *(int *)(*(int *)(DAT_0065c25c + 0x2d4) + 0x90);
  uVar6 = 0;
  if (*(int *)(*(int *)(DAT_0065c25c + 0x2d4) + 0x94) - iVar8 >> 2 != 0) {
    do {
      pvVar7 = *(void **)(iVar8 + local_14 * 4);
      uVar6 = 0;
      iVar3 = *(int *)((int)pvVar7 + 0x398) - *(int *)((int)pvVar7 + 0x394);
      iVar9 = iVar3 >> 0x1f;
      if (iVar3 / 0x50 + iVar9 != iVar9) {
        iVar8 = *(int *)(iVar8 + local_14 * 4);
        pbVar5 = (byte *)(*(int *)(iVar8 + 0x394) + 0x10);
        do {
          pbVar4 = pbVar5;
          if (0xf < *(uint *)(pbVar5 + 0x14)) {
            pbVar4 = *(byte **)pbVar5;
          }
          uVar2 = FUN_004031f0(pbVar4,*(uint *)(pbVar5 + 0x10),(byte *)"weapons",7);
          if ((char)uVar2 != '\0') {
            if (uVar6 != *(uint *)((int)pvVar7 + 0x388)) {
              *(uint *)((int)pvVar7 + 0x388) = uVar6;
              FUN_0053b4a0(pvVar7);
              if (*(char *)(*(int *)(*(int *)((int)pvVar7 +
                                             *(int *)((int)pvVar7 + 0x388) * 4 + 0x624) + 0x180) +
                           0x59) == '\0') {
                if (*(char *)(DAT_0065b444 + 0x73) != '\0') {
                  *(undefined1 *)(DAT_0065b444 + 0x73) = 0;
                }
              }
              else if (*(char *)(DAT_0065b444 + 0x73) == '\0') {
                *(undefined1 *)(DAT_0065b444 + 0x73) = 1;
              }
            }
            break;
          }
          uVar6 = uVar6 + 1;
          pbVar5 = pbVar5 + 0x50;
        } while (uVar6 < (uint)((*(int *)(iVar8 + 0x398) - *(int *)(iVar8 + 0x394)) / 0x50));
      }
      local_14 = local_14 + 1;
      iVar8 = *(int *)(*(int *)(pLVar1 + 0x2d4) + 0x90);
      uVar6 = *(int *)(*(int *)(pLVar1 + 0x2d4) + 0x94) - iVar8 >> 2;
    } while (local_14 < uVar6);
  }
  ExceptionList = local_10;
  return CONCAT31((int3)(uVar6 >> 8),1);
}


uint __cdecl FUN_004e30f0(int param_1)

{
  uint in_EAX;
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd4) != 2) {
    return in_EAX & 0xffffff00;
  }
  iVar3 = -1;
  iVar2 = 8;
  iVar1 = param_1;
  this = (void *)FUN_00402f60();
  FUN_00557fb0(this,iVar1,iVar2,iVar3);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xe8) = 5;
  *(undefined4 *)(param_1 + 0xf4) = 0x40800000;
  return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0xec) >> 8),1);
}


uint __cdecl FUN_004e3140(int param_1)

{
  uint in_EAX;
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xd4) != 2) {
    return in_EAX & 0xffffff00;
  }
  iVar4 = -1;
  iVar3 = 8;
  iVar2 = param_1;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,iVar2,iVar3,iVar4);
  if (((*(int *)(param_1 + 0xd4) == 2) && (*(int *)(param_1 + 0xe8) == 2)) &&
     (*(int *)(param_1 + 0xec) != 0)) {
    *(undefined4 *)(param_1 + 0xe8) = 4;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0x40e00000;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


uint __cdecl FUN_004e31b0(int param_1)

{
  uint in_EAX;
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xd4) != 2) {
    return in_EAX & 0xffffff00;
  }
  iVar4 = -1;
  iVar3 = 8;
  iVar2 = param_1;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,iVar2,iVar3,iVar4);
  if (((*(int *)(param_1 + 0xd4) == 2) && (*(int *)(param_1 + 0xe8) == 2)) &&
     (*(int *)(param_1 + 0xec) != 2)) {
    *(undefined4 *)(param_1 + 0xe8) = 4;
    *(undefined4 *)(param_1 + 0xf0) = 2;
    *(undefined4 *)(param_1 + 0xf4) = 0x40e00000;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


uint __cdecl FUN_004e3220(int param_1)

{
  uint in_EAX;
  void *this;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xd4) != 2) {
    return in_EAX & 0xffffff00;
  }
  iVar4 = -1;
  iVar3 = 8;
  iVar2 = param_1;
  this = (void *)FUN_00402f60();
  uVar1 = FUN_00557fb0(this,iVar2,iVar3,iVar4);
  if (((*(int *)(param_1 + 0xd4) == 2) && (*(int *)(param_1 + 0xe8) == 2)) &&
     (*(int *)(param_1 + 0xec) != 1)) {
    *(undefined4 *)(param_1 + 0xe8) = 4;
    *(undefined4 *)(param_1 + 0xf0) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0x40e00000;
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


uint __cdecl FUN_004e3290(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint in_stack_ffffffd8;
  int iVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x1b4) != -1) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if ((cVar2 != '\0') &&
       ((iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x20), *(char *)(iVar6 + 0x62) == '\0' &&
        (*(int *)(iVar6 + 0x38 + *(int *)(param_1 + 0x1b4) * 4) != 0)))) {
      pvVar4 = (void *)(in_stack_ffffffd8 & 0xffffff00);
      FUN_00402690(&stack0xffffffd8,&PTR_005ce008,0);
      cVar2 = FUN_004d00e0(param_1,0,pvVar4);
      if (cVar2 != '\0') {
        FUN_00591070(&DAT_005cdc70,"Unable to spin up.");
        uVar3 = FUN_00527550(*(int **)(param_1 + 0x224),2,"Already spinning up another tube.");
        return uVar3 & 0xffffff00;
      }
      iVar7 = -1;
      iVar6 = 5;
      *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x30) = *(int *)(param_1 + 0x1b4) + -1;
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x62) = 1;
      pvVar4 = (void *)FUN_00402f60();
      uVar5 = FUN_00557fb0(pvVar4,param_1,iVar6,iVar7);
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  uVar3 = FUN_00591070(&DAT_005cdc70,"Unable to spin up.");
  return uVar3 & 0xffffff00;
}


uint __cdecl FUN_004e3390(int param_1)

{
  int iVar1;
  int in_EAX;
  void *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1b4) != -1) {
    in_EAX = *(int *)(param_1 + 0x40);
    if (*(int **)(in_EAX + 0x20) != (int *)0x0) {
      in_EAX = (**(code **)(**(int **)(in_EAX + 0x20) + 0x10))(0);
      if ((char)in_EAX != '\0') {
        iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
        in_EAX = *(int *)(param_1 + 0x1b4);
        if (*(int *)(iVar1 + 0x38 + in_EAX * 4) != 0) {
          *(undefined1 *)(iVar1 + 0x62) = 0;
          iVar4 = -1;
          iVar3 = 9;
          iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                          *(int *)(param_1 + 0x1b4) * 4);
          *(undefined4 *)(iVar1 + 0x3c0) = 0xbf800000;
          *(undefined1 *)(iVar1 + 0x3bc) = 0;
          this = (void *)FUN_00402f60();
          uVar2 = FUN_00557fb0(this,param_1,iVar3,iVar4);
          return uVar2 & 0xffffff00;
        }
      }
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


undefined4 __cdecl FUN_004e3410(void *param_1)

{
  char cVar1;
  void **ppvVar2;
  undefined3 extraout_var;
  void *this;
  void *pvVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  byte *in_stack_ffffffcc;
  uint3 uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be768;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppvVar2 = ExceptionList;
  if (*(int *)((int)param_1 + 0x1b4) != -1) {
    ppvVar2 = *(void ***)((int)param_1 + 0x40);
    if (ppvVar2[8] != (int *)0x0) {
      ppvVar2 = (void **)(**(code **)(*(int *)ppvVar2[8] + 0x10))();
      if ((char)ppvVar2 != '\0') {
        ppvVar2 = *(void ***)(*(int *)((int)param_1 + 0x40) + 0x20);
        if (ppvVar2[*(int *)((int)param_1 + 0x1b4) + 0xe] != (void *)0x0) {
          cVar1 = FUN_0051c6c0((int)ppvVar2[*(int *)((int)param_1 + 0x1b4) + 0xe]);
          ppvVar2 = (void **)CONCAT31(extraout_var,cVar1);
          if ((cVar1 != '\0') && (*(char *)(extraout_ECX + 0x3c4) == '\0')) {
            if (*(char *)((int)param_1 + 0x234) != '\0') {
              iVar5 = *(int *)(*(int *)(extraout_ECX + 0x388) + 0x1b4);
              uVar4 = (uint3)((uint)in_stack_ffffffcc >> 8);
              if (iVar5 == 4) {
                in_stack_ffffffcc = (byte *)((uint)uVar4 << 8);
                FUN_00402690(&stack0xffffffcc,"probes_fired",0xc);
                local_8 = 0;
                FUN_00412770();
                local_8 = 0xffffffff;
                FUN_0051e750(extraout_ECX_00,in_stack_ffffffcc);
              }
              else if (iVar5 == 3) {
                in_stack_ffffffcc = (byte *)((uint)uVar4 << 8);
                FUN_00402690(&stack0xffffffcc,"torps_fired",0xb);
                local_8 = 1;
                FUN_00412770();
                local_8 = 0xffffffff;
                FUN_0051e750(extraout_ECX_01,in_stack_ffffffcc);
                *(int *)(DAT_0065b444 + 0x6c) = *(int *)(DAT_0065b444 + 0x6c) + 1;
              }
            }
            FUN_0050fa00(param_1,*(int *)((int)param_1 + 0x1b4) + -1);
            iVar6 = -1;
            iVar5 = 6;
            pvVar3 = param_1;
            this = (void *)FUN_00402f60();
            FUN_00557fb0(this,(int)pvVar3,iVar5,iVar6);
            FUN_004024e0(&stack0xffffffcc,(undefined4 *)((int)param_1 + 0x238));
            local_8 = 2;
            pvVar3 = (void *)FUN_004023e0();
            local_8 = 0xffffffff;
            FUN_00531140(pvVar3,in_stack_ffffffcc);
            iVar5 = FUN_00412770();
            *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
            ExceptionList = local_10;
            return CONCAT31((int3)((uint)iVar5 >> 8),1);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return (uint)ppvVar2 & 0xffffff00;
}


undefined4 __cdecl FUN_004e35d0(int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1b4) != -1) {
    in_EAX = *(uint *)(param_1 + 0x40);
    if (*(int **)(in_EAX + 0x20) != (int *)0x0) {
      in_EAX = (**(code **)(**(int **)(in_EAX + 0x20) + 0x10))(0);
      if ((((char)in_EAX != '\0') &&
          (in_EAX = *(uint *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                             *(int *)(param_1 + 0x1b4) * 4), in_EAX != 0)) &&
         (*(char *)(in_EAX + 0x3c4) != '\0')) {
        *(undefined1 *)(in_EAX + 0x3fc) = 0;
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4) = 0;
        uVar1 = FUN_004eb5c0();
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004e3640(int param_1)

{
  int iVar1;
  uint in_EAX;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1b4) != -1) {
    in_EAX = *(uint *)(param_1 + 0x40);
    if (*(int **)(in_EAX + 0x20) != (int *)0x0) {
      in_EAX = (**(code **)(**(int **)(in_EAX + 0x20) + 0x10))(0);
      if ((char)in_EAX != '\0') {
        in_EAX = *(uint *)(*(int *)(param_1 + 0x40) + 0x20);
        iVar1 = *(int *)(in_EAX + 0x38 + *(int *)(param_1 + 0x1b4) * 4);
        if (((iVar1 != 0) && (*(char *)(iVar1 + 0x3c4) != '\0')) &&
           (*(char *)(iVar1 + 0x3fc) != '\0')) {
          FUN_0051e290(iVar1);
          uVar2 = FUN_004eb5a0();
          return CONCAT31((int3)((uint)uVar2 >> 8),1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004e36b0(int param_1)

{
  int iVar1;
  uint in_EAX;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x1b4) != -1) {
    in_EAX = *(uint *)(param_1 + 0x40);
    if ((*(int **)(in_EAX + 0x20) != (int *)0x0) &&
       (in_EAX = (**(code **)(**(int **)(in_EAX + 0x20) + 0x10))(0), (char)in_EAX != '\0')) {
      in_EAX = *(uint *)(*(int *)(param_1 + 0x40) + 0x20);
      iVar1 = *(int *)(in_EAX + 0x38 + *(int *)(param_1 + 0x1b4) * 4);
      if ((iVar1 != 0) && ((*(char *)(iVar1 + 0x3c4) != '\0' && (*(char *)(iVar1 + 0x3fc) != '\0')))
         ) {
        FUN_0051e4a0(iVar1);
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                        *(int *)(param_1 + 0x1b4) * 4);
        if (*(int *)(iVar1 + 0x3d0) == 2) {
          FUN_00591070(&DAT_0060dfc4,"%s: Going inactive.");
          *(undefined4 *)(iVar1 + 0x3d0) = 1;
          *(undefined1 *)(iVar1 + 0x3c5) = 0;
        }
        uVar2 = FUN_004eb5c0();
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


void __cdecl FUN_004e3770(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_005be7b8;
  local_10 = ExceptionList;
  local_14 = DAT_0065500c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)(param_1 + 0x1b4) == -1) ||
      (piVar4 = *(int **)(*(int *)(param_1 + 0x40) + 0x20), piVar4 == (int *)0x0)) ||
     (cVar1 = (**(code **)(*piVar4 + 0x10))(), cVar1 == '\0')) goto LAB_004e37fe;
  iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
  iVar2 = *(int *)(iVar8 + 0x38 + *(int *)(param_1 + 0x1b4) * 4);
  iVar10 = *(int *)(DAT_0065b5cc + 0xcc);
  if (iVar2 == 0) {
    if ((iVar10 != 0) && (*(int *)(iVar10 + 0x70) == 1)) {
      FUN_00527550(*(int **)(param_1 + 0x224),2,"No torpedo in tube.");
    }
    goto LAB_004e37fe;
  }
  if (((iVar10 != 0) && (*(int *)(iVar10 + 0x70) == 1)) && (*(char *)(iVar2 + 0x3bc) == '\0')) {
    iVar2 = FUN_00437c60(*(int **)(iVar8 + 0xc));
    FUN_0051c5f0(*(void **)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                           *(int *)(param_1 + 0x1b4) * 4),
                 (int)(((float)iVar2 / 100.0) * 0.5 *
                      *(float *)(*(int *)(*(int *)(*(int *)(iVar8 + 4) + 0x20) + 8) + 0x108)));
    FUN_00527550(*(int **)(param_1 + 0x224),2,"Torpedo only %d%% spun up.");
    goto LAB_004e37fe;
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_00402690(local_44,"[unknown]",9);
  local_8 = 0;
  iVar8 = *(int *)(param_1 + 0x19c);
  if (iVar8 == 0) {
    if (*(int *)(param_1 + 0x1a4) == 0) {
      if ((*(float *)(param_1 + 0x1b8) != -9999.0) || (*(float *)(param_1 + 0x1bc) != -9999.0)) {
        iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                        *(int *)(param_1 + 0x1b4) * 4);
        *(undefined4 *)(iVar8 + 300) = *(undefined4 *)(param_1 + 0x1b8);
        *(undefined4 *)(iVar8 + 0x130) = *(undefined4 *)(param_1 + 0x1bc);
        piVar4 = (int *)FUN_00591e00((undefined1 *)local_2c,"[%.0f, %.0f]");
        FUN_00413230(local_44,piVar4);
        goto LAB_004e3b0f;
      }
    }
    else {
      *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                       *(int *)(param_1 + 0x1b4) * 4) + 0x38c) = *(int *)(param_1 + 0x1a4);
      std::basic_string<>::operator=
                ((basic_string<> *)local_44,*(basic_string<> **)(param_1 + 0x1a4));
    }
  }
  else {
    if ((((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
         (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
        (iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                                  *(int *)(param_1 + 0x1b4) * 4) + 0x38c), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x30) == 1)) {
      FUN_00591e00((undefined1 *)local_2c,"targeted_%s");
      local_8._0_1_ = 1;
      ppppcVar6 = local_2c;
      if (0xf < local_18) {
        ppppcVar6 = (char ****)local_2c[0];
      }
      ppppcVar7 = local_2c;
      if (0xf < local_18) {
        ppppcVar7 = (char ****)local_2c[0];
      }
      pbVar9 = (byte *)0x4e3962;
      FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar7,(char *)((int)ppppcVar6 + local_1c),
                   (undefined1 *)ppppcVar6);
      local_48 = &stack0xffffff88;
      FUN_004024e0(&stack0xffffff88,local_2c);
      local_8._0_1_ = 2;
      puVar3 = FUN_00412df0();
      local_8._0_1_ = 1;
      FUN_004a0ee0(puVar3,pbVar9);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_18) {
        ppppcVar6 = (char ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppcVar6 = (char ****)local_2c[0][-1],
           (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar6)))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_005adb3f(ppppcVar6);
      }
      iVar8 = *(int *)(param_1 + 0x19c);
    }
    *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                      *(int *)(param_1 + 0x1b4) * 4) + 0x38c) =
         -(uint)(*(int *)(iVar8 + 0x130) != 0) & *(int *)(iVar8 + 0x130) + 8U;
    iVar8 = *(int *)(param_1 + 0x19c);
    local_48 = (undefined1 *)(float)((double)*(float *)(iVar8 + 0x108) + *(double *)(iVar8 + 0x18));
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                    *(int *)(param_1 + 0x1b4) * 4);
    *(float *)(iVar2 + 300) = (float)((double)*(float *)(iVar8 + 0x104) + *(double *)(iVar8 + 0x10))
    ;
    *(undefined1 **)(iVar2 + 0x130) = local_48;
    std::basic_string<>::operator=
              ((basic_string<> *)local_44,(basic_string<> *)(*(int *)(param_1 + 0x19c) + 0x48));
    if (((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
        (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) &&
       (*(int *)(*(int *)(param_1 + 0x19c) + 0x130) != 0)) {
      FUN_00591e00((undefined1 *)local_2c,"targeted_%s");
      local_8._0_1_ = 3;
      ppppcVar6 = local_2c;
      if (0xf < local_18) {
        ppppcVar6 = (char ****)local_2c[0];
      }
      ppppcVar7 = local_2c;
      if (0xf < local_18) {
        ppppcVar7 = (char ****)local_2c[0];
      }
      pbVar9 = (byte *)0x4e3ae1;
      FUN_00413ec0(&local_48,tolower_exref,(char *)ppppcVar7,(char *)((int)ppppcVar6 + local_1c),
                   (undefined1 *)ppppcVar6);
      local_48 = &stack0xffffff88;
      FUN_004024e0(&stack0xffffff88,local_2c);
      local_8._0_1_ = 4;
      puVar3 = FUN_00412df0();
      local_8._0_1_ = 3;
      FUN_004a0ee0(puVar3,pbVar9);
      local_8 = (uint)local_8._1_3_ << 8;
LAB_004e3b0f:
      if (0xf < local_18) {
        ppppcVar6 = (char ****)local_2c[0];
        if ((0xfff < local_18 + 1) &&
           (ppppcVar6 = (char ****)local_2c[0][-1],
           (char *)0x1f < (char *)((int)local_2c[0] + (-4 - (int)ppppcVar6)))) goto LAB_004e3b41;
        FUN_005adb3f(ppppcVar6);
      }
    }
  }
  iVar10 = -1;
  iVar2 = 8;
  iVar8 = param_1;
  pvVar5 = (void *)FUN_00402f60();
  FUN_00557fb0(pvVar5,iVar8,iVar2,iVar10);
  FUN_0051d9d0(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 +
                       *(int *)(param_1 + 0x1b4) * 4));
  iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x20) + 0x38 + *(int *)(param_1 + 0x1b4) * 4)
  ;
  if (*(int *)(iVar8 + 0x3d0) == 3) {
    *(undefined4 *)(iVar8 + 0x3d0) = 1;
  }
  FUN_00527550(*(int **)(param_1 + 0x224),1,"Tube %d now targeted at %s");
  if (0xf < local_30) {
    pvVar5 = local_44[0];
    if ((0xfff < local_30 + 1) &&
       (pvVar5 = *(void **)((int)local_44[0] + -4),
       0x1f < (uint)((int)local_44[0] + (-4 - (int)pvVar5)))) {
LAB_004e3b41:
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_005adb3f(pvVar5);
  }
LAB_004e37fe:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


undefined4 __cdecl FUN_004e3cd0(int param_1)

{
  void *this;
  int iVar1;
  uint in_EAX;
  int *piVar2;
  undefined4 uVar3;
  int *local_c [2];
  
  if (((param_1 != 0) && (this = *(void **)(param_1 + 0x17c), this != (void *)0x0)) &&
     ((in_EAX = *(uint *)(*(int *)((int)this + 0x254) + 0x158), in_EAX == 1 ||
      ((in_EAX == 2 || (in_EAX == 3)))))) {
    if (*(int *)((int)this + 0x3dc) != 0) {
      piVar2 = FUN_0051b8a0(this,param_1);
      if (piVar2 != (int *)0x0) {
        in_EAX = FUN_00527550(*(int **)(param_1 + 0x224),2,"Docking permission `^denied`7 for %s");
        goto LAB_004e3df2;
      }
      local_c[0] = (int *)FUN_005adb0f(0xc);
      *local_c[0] = param_1;
      local_c[0][1] = 0;
      local_c[0][2] = 0;
      piVar2 = *(int **)((int)this + 0x3c8);
      if (*(int **)((int)this + 0x3cc) == piVar2) {
        FUN_004141e0((void *)((int)this + 0x3c4),piVar2,local_c);
      }
      else {
        *piVar2 = (int)local_c[0];
        *(int *)((int)this + 0x3c8) = *(int *)((int)this + 0x3c8) + 4;
      }
      iVar1 = *(int *)((int)this + 0x390);
      if (iVar1 == 0) {
        FUN_00591070("ERROR","Tried to add owed amount to station with no faction.");
      }
      else {
        *(float *)(iVar1 + 0xd0) = (float)*(int *)((int)this + 0x3dc) + *(float *)(iVar1 + 0xd0);
      }
    }
    uVar3 = FUN_00527550(*(int **)(param_1 + 0x224),1,"Docking permission granted for %s");
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
LAB_004e3df2:
  return in_EAX & 0xffffff00;
}


undefined4 __cdecl FUN_004e3e00(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined3 extraout_var;
  void *this;
  undefined4 uVar3;
  int iVar4;
  void **ppvVar5;
  uint in_stack_ffffffc8;
  byte *pbVar6;
  uint in_stack_ffffffcc;
  void *pvVar7;
  int iVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005be7f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppvVar5 = ExceptionList;
  if (((param_1 != 0) && (ppvVar5 = (void **)0x0, *(int *)(param_1 + 0x178) != 0)) &&
     ((ppvVar5 = *(void ***)(*(int *)(*(int *)(param_1 + 0x178) + 0x254) + 0x158),
      ppvVar5 == (void **)0x1 || ((ppvVar5 == (void **)0x2 || (ppvVar5 == (void **)0x3)))))) {
    if ((*(int *)(DAT_0065b5cc + 0xcc) != 0) &&
       (*(int *)(*(int *)(DAT_0065b5cc + 0xcc) + 0x70) == 1)) {
      pvVar7 = (void *)(in_stack_ffffffcc & 0xffffff00);
      FUN_00402690(&stack0xffffffcc,"ready_to_disembark_station",0x1a);
      local_8 = 0;
      puVar2 = FUN_00412df0();
      local_8 = 0xffffffff;
      in_stack_ffffffc8 = 0x4e3eb0;
      bVar1 = FUN_004a1150(puVar2,pvVar7);
      ppvVar5 = (void **)CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) goto LAB_004e3f7e;
    }
    pvVar7 = *(void **)(param_1 + 0x178);
    iVar9 = -1;
    iVar8 = 0x2d;
    iVar4 = param_1;
    this = (void *)FUN_00402f60();
    FUN_00557fb0(this,iVar4,iVar8,iVar9);
    uVar3 = FUN_0051aee0(pvVar7,param_1,(int *)0x0);
    if ((char)uVar3 != '\0') {
      FUN_00527550(*(int **)(param_1 + 0x224),1,"Permission to undock granted.");
      FUN_004127d0();
      FUN_004b8550();
      iVar4 = *(int *)(DAT_0065b5cc + 0xcc);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x70) == 1)) {
        pbVar6 = (byte *)(in_stack_ffffffc8 & 0xffffff00);
        FUN_00402690(&stack0xffffffc8,"cannot_board_vessel",0x13);
        local_8 = 1;
        puVar2 = FUN_00412df0();
        local_8 = 0xffffffff;
        iVar4 = FUN_004a0ee0(puVar2,pbVar6);
      }
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    ppvVar5 = (void **)FUN_00527550(*(int **)(param_1 + 0x224),1,"Permission to undock `^denied`7.")
    ;
  }
LAB_004e3f7e:
  ExceptionList = local_10;
  return (uint)ppvVar5 & 0xffffff00;
}


undefined4 __cdecl FUN_004e3fa0(int param_1)

{
  void *this;
  int *piVar1;
  bool bVar2;
  uint in_EAX;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  
  if (((param_1 == 0) || (this = *(void **)(param_1 + 0x17c), this == (void *)0x0)) ||
     ((in_EAX = *(uint *)(*(int *)((int)this + 0x254) + 0x158), in_EAX != 1 &&
      ((in_EAX != 2 && (in_EAX != 3)))))) {
LAB_004e40a4:
    return in_EAX & 0xffffff00;
  }
  if (*(int *)((int)this + 0x3dc) != 0) {
    local_14 = FUN_0051b8a0(this,param_1);
    if ((local_14 == (int *)0x0) || (local_14[2] != 0)) {
      bVar2 = false;
    }
    else {
      FUN_0051baa0(this,8);
      piVar1 = *(int **)((int)this + 0x3c8);
      puVar3 = FUN_00414000(&local_10,(int *)&local_14,*(int **)((int)this + 0x3c4),piVar1);
      FUN_00412ba0((void *)((int)this + 0x3c4),local_c,(void *)*puVar3,piVar1);
      FUN_005adb3f(local_14);
      bVar2 = true;
    }
    if (!bVar2) {
      in_EAX = FUN_00527550(*(int **)(param_1 + 0x224),2,"No docking permission found for %s");
      goto LAB_004e40a4;
    }
  }
  uVar4 = FUN_00527550(*(int **)(param_1 + 0x224),1,"Docking permission rescinded for %s");
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}
