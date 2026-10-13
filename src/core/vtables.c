// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: RUNTIME_AND_VTABLES (427 functions)
// Description: C++ runtime stubs, virtual method tables (VTables) and system utilities
// =============================================================================

#include "../../include/global.h"

// =============================================================================
// Function: func_080D3778 @ 0x080D3778
// =============================================================================
undefined4 func_080D3778(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_3 + -1;
  if (param_3 != 0) {
    do {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D379C @ 0x080D379C
// =============================================================================
undefined4 func_080D379C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  undefined2 uStack_90;
  
  puVar2 = &uStack_90;
  *_DAT_080d37c8 = *_DAT_080d37c8 & (ushort)_DAT_080d37cc | 3;
  puVar3 = (undefined2 *)(_DAT_080d37d0 & 0xfffffffe);
  for (uVar1 = (_DAT_080d37d4 - _DAT_080d37d0) * 0x8000; uVar1 >> 0x10 != 0;
      uVar1 = ((uVar1 >> 0x10) - 1) * 0x10000) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  func_0x080d3918(param_1,param_2,param_3,(int)&uStack_90 + 1);
  return in_lr;
}

// =============================================================================
// Function: func_080D3800 @ 0x080D3800
// =============================================================================
undefined4 func_080D3800(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined4 in_lr;
  
  *_DAT_080d3838 = *_DAT_080d3838 & (ushort)_DAT_080d383c | 3;
  while (param_3 = param_3 + -1, param_3 != -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D3840 @ 0x080D3840
// =============================================================================
undefined8 func_080D3840(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = param_3 + -1;
  if (param_3 != 0) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      if (*param_2 != cVar1) goto LAB_080d3868;
      iVar2 = iVar2 + -1;
      param_2 = param_2 + 1;
    } while (iVar2 != -1);
  }
  param_2 = (char *)0x0;
LAB_080d3868:
  return CONCAT44(in_lr,param_2);
}

// =============================================================================
// Function: func_080D3870 @ 0x080D3870
// =============================================================================
void func_080D3870(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uStack_d0;
  
  puVar2 = &uStack_d0;
  *_DAT_080d389c = *_DAT_080d389c & (ushort)_DAT_080d38a0 | 3;
  puVar3 = (undefined2 *)(_DAT_080d38a4 & 0xfffffffe);
  for (uVar1 = (_DAT_080d38a8 - _DAT_080d38a4) * 0x8000; uVar1 >> 0x10 != 0;
      uVar1 = ((uVar1 >> 0x10) - 1) * 0x10000) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  func_0x080d3918(param_1,param_2,param_3,(int)&uStack_d0 + 1);
  return;
}

// =============================================================================
// Function: func_080D38D4 @ 0x080D38D4
// =============================================================================
undefined8 func_080D38D4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined4 in_lr;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    func_080D3800(param_1,param_2,param_3);
    param_4 = func_080D3870(param_1,param_2,param_3);
    if (param_4 == 0) break;
  }
  return CONCAT44(in_lr,param_4);
}

// =============================================================================
// Function: memcmp @ 0x080D3948
// =============================================================================
undefined8 memcmp(byte *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((3 < param_3) && ((((uint)param_1 | (uint)param_2) & 3) == 0)) {
    do {
      if (*(int *)param_1 != *(int *)param_2) break;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      param_3 = param_3 - 4;
    } while (3 < param_3);
  }
  do {
    if (param_3 == 0) {
      iVar1 = 0;
LAB_080d398e:
      return CONCAT44(in_lr,iVar1);
    }
    if ((uint)*param_1 != (uint)*param_2) {
      iVar1 = (uint)*param_1 - (uint)*param_2;
      goto LAB_080d398e;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
  } while( true );
}

// =============================================================================
// Function: memcpy @ 0x080D3994
// =============================================================================
undefined8 memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar3 = param_2 + 3;
      puVar2[2] = param_2[2];
      param_2 = param_2 + 4;
      puVar2[3] = *puVar3;
      puVar2 = puVar2 + 4;
      param_3 = param_3 - 0x10;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: memmove @ 0x080D39F8
// =============================================================================
undefined8 memmove(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 in_lr;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (puVar1 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar1)) {
    puVar3 = (undefined1 *)((int)param_1 + param_3);
    while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
      puVar3 = puVar3 + -1;
      puVar1 = (undefined4 *)((int)puVar1 + -1);
      *puVar3 = *(undefined1 *)puVar1;
    }
  }
  else {
    puVar1 = param_1;
    if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
      do {
        *puVar1 = *param_2;
        puVar1[1] = param_2[1];
        puVar4 = param_2 + 3;
        puVar1[2] = param_2[2];
        param_2 = param_2 + 4;
        puVar1[3] = *puVar4;
        puVar1 = puVar1 + 4;
        param_3 = param_3 - 0x10;
      } while (0xf < param_3);
      for (; 3 < param_3; param_3 = param_3 - 4) {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *puVar1 = uVar2;
        puVar1 = puVar1 + 1;
      }
    }
    while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: memset @ 0x080D3A84
// =============================================================================
undefined8 memset(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  puVar2 = param_1;
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    param_2 = param_2 & 0xff;
    uVar1 = param_2 << 8 | param_2;
    uVar1 = uVar1 | uVar1 << 0x10;
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
      puVar2[3] = uVar1;
      puVar2 = puVar2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    }
  }
  while (param_3 != 0) {
    *(char *)puVar2 = (char)param_2;
    puVar2 = (uint *)((int)puVar2 + 1);
    param_3 = param_3 - 1;
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: strcat @ 0x080D3ADC
// =============================================================================
undefined8 strcat(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = *param_1 + _DAT_080d3af8 & ~*param_1;
    while ((uVar1 & _DAT_080d3afc) == 0) {
      puVar2 = puVar2 + 1;
      uVar1 = *puVar2 + _DAT_080d3af8 & ~*puVar2;
    }
  }
  for (; (char)*puVar2 != '\0'; puVar2 = (uint *)((int)puVar2 + 1)) {
  }
  strcpy(puVar2,param_2);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: strcpy @ 0x080D3B28
// =============================================================================
undefined8 strcpy(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  uVar1 = _DAT_080d3b4c;
  iVar2 = _DAT_080d3b48;
  puVar4 = param_1;
  if ((((uint)param_2 | (uint)param_1) & 3) == 0) {
    uVar3 = *param_2 + _DAT_080d3b48 & ~*param_2;
    while ((uVar3 & uVar1) == 0) {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      uVar3 = *param_2 + iVar2 & ~*param_2;
    }
  }
  do {
    uVar1 = *param_2;
    *(char *)puVar4 = (char)uVar1;
    param_2 = (uint *)((int)param_2 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  } while ((char)uVar1 != '\0');
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: strlen @ 0x080D3B78
// =============================================================================
undefined8 strlen(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = *param_1 + _DAT_080d3b94 & ~*param_1;
    while ((uVar1 & _DAT_080d3b98) == 0) {
      puVar2 = puVar2 + 1;
      uVar1 = *puVar2 + _DAT_080d3b94 & ~*puVar2;
    }
  }
  for (; (char)*puVar2 != '\0'; puVar2 = (uint *)((int)puVar2 + 1)) {
  }
  return CONCAT44(in_lr,(int)puVar2 - (int)param_1);
}

// =============================================================================
// Function: func_080D3BC0 @ 0x080D3BC0
// =============================================================================
void func_080D3BC0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _DAT_080d3bd0;
  do {
    if (*piVar1 == 0) {
      do {
      } while( true );
    }
    func_0x080d390c();
    iVar2 = malloc(param_1);
  } while (iVar2 == 0);
  return;
}

// =============================================================================
// Function: func_080D3BE8 @ 0x080D3BE8
// =============================================================================
undefined8 func_080D3BE8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080005D4(4);
  uVar1 = func_0x08004c48();
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D3C24 @ 0x080D3C24
// =============================================================================
undefined8 func_080D3C24(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080005D4(8);
  uVar1 = func_08004B58();
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D3C60 @ 0x080D3C60
// =============================================================================
undefined4 func_080D3C60(void)

{
  undefined4 in_lr;
  
  Scene_Destructor();
  return in_lr;
}

// =============================================================================
// Function: func_080D3C6C @ 0x080D3C6C
// =============================================================================
undefined4 func_080D3C6C(void)

{
  undefined4 in_lr;
  
  Scene_Destructor();
  return in_lr;
}

// =============================================================================
// Function: func_080D3C78 @ 0x080D3C78
// =============================================================================
void func_080D3C78(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = param_1 + _DAT_080d3e70;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e74;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e78;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e7c;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  func_0x080073e0(param_1 + 0x6d00,*(undefined4 *)(param_1 + 0x6d04));
  func_08007184(param_1 + 0x6d00,2);
  iVar2 = param_1 + _DAT_080d3e80;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e84;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e88;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e8c;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e90;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e94;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e98;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  iVar2 = param_1 + _DAT_080d3e9c;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3ea0;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  iVar2 = param_1 + _DAT_080d3ea4;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3ea8;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3eac;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  iVar2 = param_1 + _DAT_080d3eb0;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  iVar2 = param_1 + _DAT_080d3eb4;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  iVar2 = param_1 + _DAT_080d3eb8;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  func_0x080073e0(param_1 + 0x6c80,*(undefined4 *)(param_1 + 0x6c84));
  func_08007184(param_1 + 0x6c80,2);
  iVar2 = param_1 + _DAT_080d3ebc;
  func_08007C28(iVar2,*(undefined4 *)(iVar2 + 4));
  func_080079E8(iVar2,2);
  func_08007184(param_1 + _DAT_080d3ec0,2);
  func_080079E8(param_1 + _DAT_080d3ec4,2);
  uVar1 = _DAT_080d3ecc;
  *(undefined4 *)(param_1 + _DAT_080d3ec8) = _DAT_080d3ecc;
  iVar2 = _DAT_080d3ed0;
  *(undefined4 *)(param_1 + _DAT_080d3ed0) = uVar1;
  *(undefined4 *)(param_1 + iVar2 + -0x30) = uVar1;
  func_080086BC(param_1,param_2);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080D3ED4 @ 0x080D3ED4
// =============================================================================
undefined4 func_080D3ED4(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080d3ef0;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D3EF4 @ 0x080D3EF4
// =============================================================================
undefined8 func_080D3EF4(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)func_080005D4(_DAT_080d3fec);
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  *puVar1 = _DAT_080d3ff0;
  puVar1[1] = uVar2;
  func_0803F804(puVar1 + 2);
  *(undefined1 *)(puVar1 + 0xd9) = 0;
  *(undefined1 *)(puVar1 + 0xdb) = 0;
  puVar1[0xdc] = 0x1d;
  puVar3 = (ushort *)(puVar1 + 0xdd);
  *(byte *)puVar3 = (byte)*puVar3 & 0xe0 | 6;
  *puVar3 = (ushort)_DAT_080d3ff4 & *puVar3;
  puVar1[0xde] = 0;
  puVar1[0xe3] = 0;
  puVar1[0x134] = 0;
  iVar4 = (int)puVar1 + _DAT_080d3ff8;
  iVar5 = 5;
  do {
    func_080D4130(iVar4);
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  iVar4 = (int)puVar1 + _DAT_080d3ffc;
  iVar5 = 3;
  do {
    func_080D40CC(iVar4);
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  *_DAT_080d4000 = puVar1;
  *param_1 = puVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D4004 @ 0x080D4004
// =============================================================================
undefined8 func_080D4004(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080005D4(8);
  uVar1 = func_080036F8();
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D4040 @ 0x080D4040
// =============================================================================
undefined4 func_080D4040(void)

{
  undefined4 in_lr;
  
  Scene_Destructor();
  return in_lr;
}

// =============================================================================
// Function: func_080D404C @ 0x080D404C
// =============================================================================
undefined4 func_080D404C(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 4) != 0) {
    func_080D4480(*(int *)(param_1 + 4),3);
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080D406C @ 0x080D406C
// =============================================================================
undefined4 func_080D406C(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  func_0x080073e0(param_1 + 0x54,*(undefined4 *)(param_1 + 0x58));
  func_08007184(param_1 + 0x54,2);
  func_08007C28(param_1 + 0x4c,*(undefined4 *)(param_1 + 0x50));
  func_080079E8(param_1 + 0x4c,2);
  *(undefined4 *)(param_1 + 0x1c) = _DAT_080d40c8;
  func_08050D0C(param_1 + 0x10,2);
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080D40CC @ 0x080D40CC
// =============================================================================
undefined8 func_080D40CC(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  
  uVar1 = (ushort)_DAT_080d412c;
  uStack_1c = uVar1 & uStack_1c & 0x3ff | 0x234;
  uStack_1a = uVar1 & uStack_1a & 0x3ff;
  uStack_18 = uVar1 & uStack_18;
  memcpy(param_1,&uStack_1c,6);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D4130 @ 0x080D4130
// =============================================================================
void func_080D4130(byte *param_1)

{
  ushort uVar1;
  
  *param_1 = *param_1 & 0xfc;
  uVar1 = (ushort)_DAT_080d4174;
  *(ushort *)(param_1 + 2) = uVar1 & *(ushort *)(param_1 + 2) | 0x234;
  param_1[3] = param_1[3] & 3;
  *(ushort *)(param_1 + 4) = uVar1 & *(ushort *)(param_1 + 4);
  param_1[5] = param_1[5] & 3;
  *(ushort *)(param_1 + 6) = uVar1 & *(ushort *)(param_1 + 6);
  return;
}

// =============================================================================
// Function: func_080D4178 @ 0x080D4178
// =============================================================================
undefined8 func_080D4178(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 in_lr;
  
  bVar1 = (byte)*param_2;
  *(byte *)param_1 =
       (byte)*param_1 & 0xe0 | bVar1 & 1 | bVar1 & 2 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10;
  *(ushort *)param_1 = (ushort)_DAT_080d441c & (ushort)*param_1 | (ushort)*param_2 & 0x1fe0;
  *param_1 = *param_1 & _DAT_080d4420 | *param_2 & 0x3e000;
  *(ushort *)((int)param_1 + 2) =
       (ushort)_DAT_080d4424 & *(ushort *)((int)param_1 + 2) | *(ushort *)((int)param_2 + 2) & 0x1fc
  ;
  *(byte *)((int)param_1 + 3) =
       *(byte *)((int)param_1 + 3) & 1 | *(byte *)((int)param_2 + 3) & 0x7e |
       *(byte *)((int)param_2 + 3) & 0x80;
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xfe | (byte)param_2[1] & 1;
  uVar3 = param_2[3];
  uVar7 = param_2[4];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  param_1[4] = uVar7;
  func_080D64C8(param_1 + 5,param_2 + 5);
  func_080D6B40((byte *)((int)param_1 + _DAT_080d4428),(byte *)((int)param_2 + _DAT_080d4428));
  func_080D68C0((byte *)((int)param_1 + _DAT_080d442c),(byte *)((int)param_2 + _DAT_080d442c));
  func_080D67C8((byte *)((int)param_1 + _DAT_080d4430),(byte *)((int)param_2 + _DAT_080d4430));
  param_1[0x728] = 0;
  uVar3 = param_2[0x728];
  pbVar2 = (byte *)((int)param_2 + _DAT_080d4434);
  pbVar8 = pbVar2 + uVar3;
  pbVar4 = (byte *)((int)param_1 + _DAT_080d4434);
  for (; pbVar2 != pbVar8; pbVar2 = pbVar2 + 1) {
    if (pbVar4 != (byte *)0x0) {
      *pbVar4 = *pbVar2;
    }
    pbVar4 = pbVar4 + 1;
  }
  param_1[0x728] = uVar3;
  memcpy(param_1 + 0x731,param_2 + 0x731,6);
  memcpy((byte *)((int)param_1 + _DAT_080d4438),(byte *)((int)param_2 + _DAT_080d4438),6);
  func_080D60B0((byte *)((int)param_1 + _DAT_080d443c),(byte *)((int)param_2 + _DAT_080d443c));
  func_080D44D4((byte *)((int)param_1 + _DAT_080d4440),(byte *)((int)param_2 + _DAT_080d4440));
  pbVar9 = (byte *)((int)param_1 + _DAT_080d4444);
  pbVar2 = (byte *)(_DAT_080d4444 + (int)param_2);
  *(undefined4 *)pbVar9 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar9 + 4) = *(undefined4 *)(pbVar2 + 4);
  pbVar8 = (byte *)((int)param_1 + _DAT_080d4448);
  iVar5 = 7;
  pbVar4 = (byte *)((int)param_2 + _DAT_080d4448);
  do {
    *pbVar8 = *pbVar4;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  pbVar8 = pbVar9 + 0x10;
  iVar5 = 3;
  pbVar4 = pbVar2 + 0x10;
  do {
    *pbVar8 = *pbVar4;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  strcpy(pbVar9 + 0x14,pbVar2 + 0x14);
  strcpy(pbVar9 + 0x24,pbVar2 + 0x24);
  strcpy(pbVar9 + 0x34,pbVar2 + 0x34);
  *(undefined4 *)((int)param_1 + _DAT_080d444c) = *(undefined4 *)((int)param_2 + _DAT_080d444c);
  memcpy((byte *)((int)param_1 + _DAT_080d4450),(byte *)((int)param_2 + _DAT_080d4450),
                _DAT_080d4454);
  pbVar2 = (byte *)((int)param_1 + _DAT_080d4458);
  pbVar4 = (byte *)((int)param_2 + _DAT_080d4458);
  uVar6 = *(undefined4 *)(pbVar4 + 4);
  uVar10 = *(undefined4 *)(pbVar4 + 8);
  *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
  *(undefined4 *)(pbVar2 + 4) = uVar6;
  *(undefined4 *)(pbVar2 + 8) = uVar10;
  uVar6 = *(undefined4 *)(pbVar4 + 0x10);
  uVar10 = *(undefined4 *)(pbVar4 + 0x14);
  *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar4 + 0xc);
  *(undefined4 *)(pbVar2 + 0x10) = uVar6;
  *(undefined4 *)(pbVar2 + 0x14) = uVar10;
  uVar6 = *(undefined4 *)(pbVar4 + 0x1c);
  uVar10 = *(undefined4 *)(pbVar4 + 0x20);
  *(undefined4 *)(pbVar2 + 0x18) = *(undefined4 *)(pbVar4 + 0x18);
  *(undefined4 *)(pbVar2 + 0x1c) = uVar6;
  *(undefined4 *)(pbVar2 + 0x20) = uVar10;
  uVar6 = *(undefined4 *)(pbVar4 + 0x28);
  uVar10 = *(undefined4 *)(pbVar4 + 0x2c);
  *(undefined4 *)(pbVar2 + 0x24) = *(undefined4 *)(pbVar4 + 0x24);
  *(undefined4 *)(pbVar2 + 0x28) = uVar6;
  *(undefined4 *)(pbVar2 + 0x2c) = uVar10;
  pbVar4 = (byte *)((int)param_1 + _DAT_080d445c);
  pbVar2 = (byte *)((int)param_2 + _DAT_080d445c);
  uVar6 = *(undefined4 *)(pbVar2 + 4);
  uVar10 = *(undefined4 *)(pbVar2 + 8);
  *(undefined4 *)pbVar4 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar4 + 4) = uVar6;
  *(undefined4 *)(pbVar4 + 8) = uVar10;
  uVar6 = *(undefined4 *)(pbVar2 + 0x10);
  uVar10 = *(undefined4 *)(pbVar2 + 0x14);
  *(undefined4 *)(pbVar4 + 0xc) = *(undefined4 *)(pbVar2 + 0xc);
  *(undefined4 *)(pbVar4 + 0x10) = uVar6;
  *(undefined4 *)(pbVar4 + 0x14) = uVar10;
  uVar6 = *(undefined4 *)(pbVar2 + 0x1c);
  uVar10 = *(undefined4 *)(pbVar2 + 0x20);
  *(undefined4 *)(pbVar4 + 0x18) = *(undefined4 *)(pbVar2 + 0x18);
  *(undefined4 *)(pbVar4 + 0x1c) = uVar6;
  *(undefined4 *)(pbVar4 + 0x20) = uVar10;
  *(undefined4 *)(pbVar4 + 0x24) = *(undefined4 *)(pbVar2 + 0x24);
  pbVar4 = (byte *)((int)param_1 + _DAT_080d4460);
  pbVar2 = (byte *)((int)param_2 + _DAT_080d4460);
  uVar6 = *(undefined4 *)(pbVar2 + 4);
  uVar10 = *(undefined4 *)(pbVar2 + 8);
  *(undefined4 *)pbVar4 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar4 + 4) = uVar6;
  *(undefined4 *)(pbVar4 + 8) = uVar10;
  memcpy(param_1 + 0xb20,param_2 + 0xb20,0x1d8);
  memcpy((byte *)((int)param_1 + _DAT_080d4464),(byte *)((int)param_2 + _DAT_080d4464),0x628)
  ;
  uVar3 = param_2[0xd21];
  uVar7 = param_2[0xd22];
  param_1[0xd20] = param_2[0xd20];
  param_1[0xd21] = uVar3;
  param_1[0xd22] = uVar7;
  uVar3 = param_2[0xd24];
  param_1[0xd23] = param_2[0xd23];
  param_1[0xd24] = uVar3;
  pbVar2 = (byte *)((int)param_1 + _DAT_080d4468);
  pbVar4 = (byte *)((int)param_2 + _DAT_080d4468);
  uVar6 = *(undefined4 *)(pbVar4 + 4);
  uVar10 = *(undefined4 *)(pbVar4 + 8);
  *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
  *(undefined4 *)(pbVar2 + 4) = uVar6;
  *(undefined4 *)(pbVar2 + 8) = uVar10;
  uVar6 = *(undefined4 *)(pbVar4 + 0x10);
  uVar10 = *(undefined4 *)(pbVar4 + 0x14);
  *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar4 + 0xc);
  *(undefined4 *)(pbVar2 + 0x10) = uVar6;
  *(undefined4 *)(pbVar2 + 0x14) = uVar10;
  uVar6 = *(undefined4 *)(pbVar4 + 0x1c);
  uVar10 = *(undefined4 *)(pbVar4 + 0x20);
  *(undefined4 *)(pbVar2 + 0x18) = *(undefined4 *)(pbVar4 + 0x18);
  *(undefined4 *)(pbVar2 + 0x1c) = uVar6;
  *(undefined4 *)(pbVar2 + 0x20) = uVar10;
  uVar6 = *(undefined4 *)(pbVar4 + 0x28);
  uVar10 = *(undefined4 *)(pbVar4 + 0x2c);
  *(undefined4 *)(pbVar2 + 0x24) = *(undefined4 *)(pbVar4 + 0x24);
  *(undefined4 *)(pbVar2 + 0x28) = uVar6;
  *(undefined4 *)(pbVar2 + 0x2c) = uVar10;
  *(byte *)((int)param_1 + _DAT_080d446c) = *(byte *)((int)param_2 + _DAT_080d446c);
  *(byte *)((int)param_1 + _DAT_080d4470) = *(byte *)((int)param_2 + _DAT_080d4470);
  pbVar4 = (byte *)((int)param_1 + _DAT_080d4474);
  pbVar2 = (byte *)((int)param_2 + _DAT_080d4474);
  uVar6 = *(undefined4 *)(pbVar2 + 4);
  uVar10 = *(undefined4 *)(pbVar2 + 8);
  *(undefined4 *)pbVar4 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar4 + 4) = uVar6;
  *(undefined4 *)(pbVar4 + 8) = uVar10;
  *(undefined4 *)(pbVar4 + 0xc) = *(undefined4 *)(pbVar2 + 0xc);
  *(undefined4 *)((int)param_1 + _DAT_080d4478) = *(undefined4 *)((int)param_2 + _DAT_080d4478);
  pbVar2 = (byte *)((int)param_1 + _DAT_080d447c);
  pbVar4 = (byte *)((int)param_2 + _DAT_080d447c);
  uVar6 = *(undefined4 *)(pbVar4 + 4);
  uVar10 = *(undefined4 *)(pbVar4 + 8);
  *(undefined4 *)pbVar2 = *(undefined4 *)pbVar4;
  *(undefined4 *)(pbVar2 + 4) = uVar6;
  *(undefined4 *)(pbVar2 + 8) = uVar10;
  uVar6 = *(undefined4 *)(pbVar4 + 0x10);
  uVar10 = *(undefined4 *)(pbVar4 + 0x14);
  *(undefined4 *)(pbVar2 + 0xc) = *(undefined4 *)(pbVar4 + 0xc);
  *(undefined4 *)(pbVar2 + 0x10) = uVar6;
  *(undefined4 *)(pbVar2 + 0x14) = uVar10;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D4480 @ 0x080D4480
// =============================================================================
undefined4 func_080D4480(int param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  for (puVar1 = (undefined *)(param_1 + _DAT_080d44c8);
      puVar1 != (undefined *)
                ((int)(&UNK_00001ca0 + param_1) + *(int *)(&UNK_00001ca0 + param_1) + 4);
      puVar1 = puVar1 + 1) {
  }
  func_080D6B00(param_1 + _DAT_080d44cc,2);
  func_080D6C08(param_1 + _DAT_080d44d0,2);
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D44D4 @ 0x080D44D4
// =============================================================================
undefined8 func_080D44D4(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined4 in_lr;
  int *piVar9;
  
  *param_1 = 0;
  iVar6 = *param_2;
  piVar9 = param_2 + 1;
  piVar5 = (int *)(iVar6 * 2 + (int)piVar9);
  if (piVar5 != piVar9) {
    memmove(param_1 + 1,piVar9,(int)piVar5 - (int)piVar9);
  }
  *param_1 = iVar6;
  *(short *)(param_1 + 3) = (short)param_2[3];
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)((int)param_2 + 0xe);
  *(undefined1 *)((int)param_1 + 0xf) = *(undefined1 *)((int)param_2 + 0xf);
  *(char *)(param_1 + 4) = (char)param_2[4];
  bVar1 = *(byte *)((int)param_2 + 0x11);
  *(byte *)((int)param_1 + 0x11) =
       bVar1 & 1 | *(byte *)((int)param_1 + 0x11) & 0x80 | bVar1 & 2 | bVar1 & 4 | bVar1 & 8 |
       bVar1 & 0x10 | bVar1 & 0x60;
  param_1[4] = param_1[4] & _DAT_080d4a18 | param_2[4] & 0x18000U;
  bVar1 = *(byte *)((int)param_2 + 0x12);
  *(byte *)((int)param_1 + 0x12) =
       *(byte *)((int)param_1 + 0x12) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)((int)param_1 + 0x12) =
       (ushort)_DAT_080d4a1c & *(ushort *)((int)param_1 + 0x12) |
       *(ushort *)((int)param_2 + 0x12) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x13);
  bVar2 = *(byte *)(param_2 + 5);
  *(byte *)((int)param_1 + 0x13) =
       *(byte *)((int)param_1 + 0x13) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(byte *)(param_2 + 5);
  *(byte *)(param_1 + 5) =
       *(byte *)(param_1 + 5) & 0x80 | bVar2 & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)(param_1 + 5) =
       (ushort)_DAT_080d4a1c & *(ushort *)(param_1 + 5) | *(ushort *)(param_2 + 5) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x15);
  *(byte *)((int)param_1 + 0x15) =
       *(byte *)((int)param_1 + 0x15) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[5] = param_1[5] & _DAT_080d4a18 | param_2[5] & 0x18000U;
  bVar1 = *(byte *)((int)param_2 + 0x16);
  *(byte *)((int)param_1 + 0x16) =
       *(byte *)((int)param_1 + 0x16) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)((int)param_1 + 0x16) =
       (ushort)_DAT_080d4a1c & *(ushort *)((int)param_1 + 0x16) |
       *(ushort *)((int)param_2 + 0x16) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x17);
  bVar2 = *(byte *)(param_2 + 6);
  *(byte *)((int)param_1 + 0x17) =
       *(byte *)((int)param_1 + 0x17) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_1 + 6) =
       bVar2 & 1 | *(byte *)(param_1 + 6) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)(param_1 + 6) =
       (ushort)_DAT_080d4a1c & *(ushort *)(param_1 + 6) | *(ushort *)(param_2 + 6) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x19);
  *(byte *)((int)param_1 + 0x19) =
       *(byte *)((int)param_1 + 0x19) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[6] = param_1[6] & _DAT_080d4a18 | param_2[6] & 0x18000U;
  bVar1 = *(byte *)((int)param_2 + 0x1a);
  *(byte *)((int)param_1 + 0x1a) =
       *(byte *)((int)param_1 + 0x1a) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)((int)param_1 + 0x1a) =
       (ushort)_DAT_080d4a1c & *(ushort *)((int)param_1 + 0x1a) |
       *(ushort *)((int)param_2 + 0x1a) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x1b);
  bVar2 = *(byte *)(param_2 + 7);
  *(byte *)((int)param_1 + 0x1b) =
       *(byte *)((int)param_1 + 0x1b) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(byte *)(param_2 + 7);
  *(byte *)(param_1 + 7) =
       bVar2 & 1 | *(byte *)(param_1 + 7) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)(param_1 + 7) =
       (ushort)_DAT_080d4a1c & *(ushort *)(param_1 + 7) | *(ushort *)(param_2 + 7) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x1d);
  *(byte *)((int)param_1 + 0x1d) =
       *(byte *)((int)param_1 + 0x1d) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[7] = param_1[7] & _DAT_080d4a18 | param_2[7] & 0x18000U;
  bVar1 = *(byte *)((int)param_2 + 0x1e);
  *(byte *)((int)param_1 + 0x1e) =
       *(byte *)((int)param_1 + 0x1e) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)((int)param_1 + 0x1e) =
       (ushort)_DAT_080d4a1c & *(ushort *)((int)param_1 + 0x1e) |
       *(ushort *)((int)param_2 + 0x1e) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x1f);
  bVar2 = *(byte *)(param_2 + 8);
  *(byte *)((int)param_1 + 0x1f) =
       *(byte *)((int)param_1 + 0x1f) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 8) =
       bVar2 & 1 | *(byte *)(param_1 + 8) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)(param_1 + 8) =
       (ushort)_DAT_080d4a1c & *(ushort *)(param_1 + 8) | *(ushort *)(param_2 + 8) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x21);
  *(byte *)((int)param_1 + 0x21) =
       *(byte *)((int)param_1 + 0x21) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[8] = param_1[8] & _DAT_080d4a18 | param_2[8] & 0x18000U;
  bVar1 = *(byte *)((int)param_2 + 0x22);
  *(byte *)((int)param_1 + 0x22) =
       *(byte *)((int)param_1 + 0x22) & 0x81 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x20 |
       bVar1 & 0x40;
  bVar1 = *(byte *)(param_2 + 9);
  *(byte *)((int)param_1 + 0x23) =
       *(byte *)((int)param_1 + 0x23) & 0xf | *(byte *)((int)param_2 + 0x23) & 0xf0;
  bVar2 = *(byte *)(param_2 + 9);
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x80 | bVar1 & 7 | bVar2 & 0x18 | bVar2 & 0x60;
  *(ushort *)(param_1 + 9) =
       (ushort)_DAT_080d4e90 & *(ushort *)(param_1 + 9) | *(ushort *)(param_2 + 9) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x25);
  *(byte *)((int)param_1 + 0x25) =
       *(byte *)((int)param_1 + 0x25) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  *(undefined1 *)((int)param_1 + 0x26) = *(undefined1 *)((int)param_2 + 0x26);
  *(undefined1 *)((int)param_1 + 0x27) = *(undefined1 *)((int)param_2 + 0x27);
  *(char *)(param_1 + 10) = (char)param_2[10];
  *(undefined1 *)((int)param_1 + 0x29) = *(undefined1 *)((int)param_2 + 0x29);
  bVar1 = *(byte *)((int)param_2 + 0x2a);
  *(byte *)((int)param_1 + 0x2a) =
       bVar1 & 1 | *(byte *)((int)param_1 + 0x2a) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)((int)param_1 + 0x2a) =
       (ushort)_DAT_080d4e90 & *(ushort *)((int)param_1 + 0x2a) |
       *(ushort *)((int)param_2 + 0x2a) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x2b);
  *(byte *)((int)param_1 + 0x2b) =
       *(byte *)((int)param_1 + 0x2b) & 1 | bVar1 & 6 | bVar1 & 8 | bVar1 & 0x30 | bVar1 & 0xc0;
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  bVar1 = *(byte *)((int)param_2 + 0x2d);
  *(byte *)((int)param_1 + 0x2d) =
       *(byte *)((int)param_1 + 0x2d) & 0xc0 | bVar1 & 3 | bVar1 & 0xc | bVar1 & 0x30;
  param_1[0xb] = param_1[0xb] & _DAT_080d4e94 | param_2[0xb] & 0x3c000U;
  bVar1 = *(byte *)((int)param_2 + 0x2e);
  *(byte *)((int)param_1 + 0x2e) =
       *(byte *)((int)param_1 + 0x2e) & 3 | bVar1 & 4 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(byte *)(param_2 + 0xc);
  *(undefined1 *)((int)param_1 + 0x2f) = *(undefined1 *)((int)param_2 + 0x2f);
  bVar2 = *(byte *)(param_2 + 0xc);
  *(byte *)(param_1 + 0xc) = bVar1 & 1 | bVar2 & 6 | bVar2 & 0x18 | bVar2 & 0x60 | bVar2 & 0x80;
  *(undefined1 *)((int)param_1 + 0x31) = *(undefined1 *)((int)param_2 + 0x31);
  *(undefined1 *)((int)param_1 + 0x32) = *(undefined1 *)((int)param_2 + 0x32);
  *(undefined1 *)((int)param_1 + 0x33) = *(undefined1 *)((int)param_2 + 0x33);
  *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  *(undefined1 *)((int)param_1 + 0x35) = *(undefined1 *)((int)param_2 + 0x35);
  bVar1 = *(byte *)((int)param_2 + 0x36);
  *(byte *)((int)param_1 + 0x36) =
       *(byte *)((int)param_1 + 0x36) & 0x80 | bVar1 & 3 | bVar1 & 4 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)((int)param_1 + 0x36) =
       (ushort)_DAT_080d52d4 & *(ushort *)((int)param_1 + 0x36) |
       *(ushort *)((int)param_2 + 0x36) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x37);
  bVar2 = *(byte *)(param_2 + 0xe);
  *(byte *)((int)param_1 + 0x37) =
       *(byte *)((int)param_1 + 0x37) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(byte *)(param_2 + 0xe);
  *(byte *)(param_1 + 0xe) = bVar2 & 1 | bVar1 & 2 | bVar1 & 0xc | bVar1 & 0x30 | bVar1 & 0xc0;
  *(undefined1 *)((int)param_1 + 0x39) = *(undefined1 *)((int)param_2 + 0x39);
  bVar1 = *(byte *)((int)param_2 + 0x3a);
  *(byte *)((int)param_1 + 0x3a) =
       *(byte *)((int)param_1 + 0x3a) & 0x80 | bVar1 & 3 | bVar1 & 0x1c | bVar1 & 0x60;
  *(ushort *)((int)param_1 + 0x3a) =
       (ushort)_DAT_080d52d4 & *(ushort *)((int)param_1 + 0x3a) |
       *(ushort *)((int)param_2 + 0x3a) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x3b);
  bVar2 = *(byte *)(param_2 + 0xf);
  *(byte *)((int)param_1 + 0x3b) =
       *(byte *)((int)param_1 + 0x3b) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(byte *)(param_2 + 0xf);
  *(byte *)(param_1 + 0xf) =
       bVar2 & 1 | *(byte *)(param_1 + 0xf) & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60;
  *(ushort *)(param_1 + 0xf) =
       (ushort)_DAT_080d52d8 & *(ushort *)(param_1 + 0xf) | *(ushort *)(param_2 + 0xf) & 0x380;
  *(byte *)((int)param_1 + 0x3d) =
       *(byte *)((int)param_1 + 0x3d) & 0xc3 | *(byte *)((int)param_2 + 0x3d) & 0xc |
       *(byte *)((int)param_2 + 0x3d) & 0x30;
  param_1[0xf] = param_1[0xf] & _DAT_080d52dc | param_2[0xf] & 0x3c000U;
  bVar1 = *(byte *)((int)param_2 + 0x3e);
  *(byte *)((int)param_1 + 0x3e) =
       *(byte *)((int)param_1 + 0x3e) & 3 | bVar1 & 0xc | bVar1 & 0x30 | bVar1 & 0xc0;
  puVar7 = (ushort *)(param_2 + 0x10);
  uVar3 = *puVar7;
  *(undefined1 *)((int)param_1 + 0x3f) = *(undefined1 *)((int)param_2 + 0x3f);
  puVar8 = (ushort *)(param_1 + 0x10);
  bVar1 = (byte)*puVar7;
  *(byte *)puVar8 = (byte)uVar3 & 1 | (byte)*puVar8 & 0x80 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60
  ;
  *puVar8 = (ushort)_DAT_080d52d4 & *puVar8 | *puVar7 & 0x180;
  *(byte *)((int)param_1 + 0x41) =
       *(byte *)((int)param_1 + 0x41) & 0xe1 | *(byte *)((int)param_2 + 0x41) & 6 |
       *(byte *)((int)param_2 + 0x41) & 0x18;
  param_1[0x10] = param_1[0x10] & _DAT_080d52e0 | param_2[0x10] & 0x1e000U;
  bVar1 = *(byte *)((int)param_2 + 0x42);
  *(byte *)((int)param_1 + 0x42) =
       *(byte *)((int)param_1 + 0x42) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x20 | bVar1 & 0xc0;
  *(undefined1 *)((int)param_1 + 0x43) = *(undefined1 *)((int)param_2 + 0x43);
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  *(undefined1 *)((int)param_1 + 0x45) = *(undefined1 *)((int)param_2 + 0x45);
  *(undefined1 *)((int)param_1 + 0x46) = *(undefined1 *)((int)param_2 + 0x46);
  *(undefined1 *)((int)param_1 + 0x47) = *(undefined1 *)((int)param_2 + 0x47);
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  *(undefined1 *)((int)param_1 + 0x49) = *(undefined1 *)((int)param_2 + 0x49);
  *(undefined1 *)((int)param_1 + 0x4a) = *(undefined1 *)((int)param_2 + 0x4a);
  *(undefined1 *)((int)param_1 + 0x4b) = *(undefined1 *)((int)param_2 + 0x4b);
  *(char *)(param_1 + 0x13) = (char)param_2[0x13];
  bVar1 = *(byte *)((int)param_2 + 0x4d);
  *(byte *)((int)param_1 + 0x4d) =
       *(byte *)((int)param_1 + 0x4d) & 0x80 | bVar1 & 3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 |
       bVar1 & 0x20 | bVar1 & 0x40;
  param_1[0x13] = param_1[0x13] & _DAT_080d5874 | param_2[0x13] & 0x18000U;
  bVar1 = *(byte *)((int)param_2 + 0x4e);
  puVar8 = (ushort *)((int)param_1 + 0x4e);
  *(byte *)puVar8 = *(byte *)puVar8 & 0x81 | bVar1 & 2 | bVar1 & 0xc | bVar1 & 0x10 | bVar1 & 0x60;
  *puVar8 = (ushort)_DAT_080d5878 & *puVar8 | *(ushort *)((int)param_2 + 0x4e) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x4f);
  bVar2 = *(byte *)(param_2 + 0x14);
  *(byte *)((int)param_1 + 0x4f) =
       *(byte *)((int)param_1 + 0x4f) & 1 | bVar1 & 0xe | bVar1 & 0x30 | bVar1 & 0x40 | bVar1 & 0x80
  ;
  bVar1 = *(byte *)(param_2 + 0x14);
  *(byte *)(param_1 + 0x14) = bVar2 & 3 | bVar1 & 0xc | bVar1 & 0x10 | bVar1 & 0x60 | bVar1 & 0x80;
  *(undefined1 *)((int)param_1 + 0x51) = *(undefined1 *)((int)param_2 + 0x51);
  bVar1 = *(byte *)((int)param_2 + 0x52);
  puVar8 = (ushort *)((int)param_1 + 0x52);
  *(byte *)puVar8 = bVar1 & 1 | *(byte *)puVar8 & 0xc0 | bVar1 & 6 | bVar1 & 8 | bVar1 & 0x30;
  *puVar8 = (ushort)_DAT_080d587c & *puVar8 | *(ushort *)((int)param_2 + 0x52) & 0x1c0;
  bVar1 = *(byte *)((int)param_2 + 0x53);
  *(byte *)((int)param_1 + 0x53) =
       *(byte *)((int)param_1 + 0x53) & 1 | bVar1 & 6 | bVar1 & 8 | bVar1 & 0x30 | bVar1 & 0xc0;
  *(char *)(param_1 + 0x15) = (char)param_2[0x15];
  *(undefined1 *)((int)param_1 + 0x55) = *(undefined1 *)((int)param_2 + 0x55);
  *(undefined1 *)((int)param_1 + 0x56) = *(undefined1 *)((int)param_2 + 0x56);
  bVar1 = *(byte *)(param_2 + 0x16);
  *(undefined1 *)((int)param_1 + 0x57) = *(undefined1 *)((int)param_2 + 0x57);
  bVar2 = *(byte *)(param_2 + 0x16);
  *(byte *)(param_1 + 0x16) =
       bVar1 & 1 | bVar2 & 2 | bVar2 & 0xc | bVar2 & 0x10 | bVar2 & 0x60 | bVar2 & 0x80;
  bVar1 = *(byte *)((int)param_2 + 0x59);
  *(byte *)((int)param_1 + 0x59) =
       *(byte *)((int)param_1 + 0x59) & 0x80 | bVar1 & 3 | bVar1 & 4 | bVar1 & 0x18 | bVar1 & 0x60;
  param_1[0x16] = param_1[0x16] & _DAT_080d5880 | param_2[0x16] & 0x38000U;
  bVar1 = *(byte *)((int)param_2 + 0x5a);
  puVar8 = (ushort *)((int)param_1 + 0x5a);
  *(byte *)puVar8 =
       *(byte *)puVar8 & 0x83 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 | bVar1 & 0x20 | bVar1 & 0x40;
  *puVar8 = (ushort)_DAT_080d5878 & *puVar8 | *(ushort *)((int)param_2 + 0x5a) & 0x180;
  bVar1 = *(byte *)((int)param_2 + 0x5b);
  bVar2 = *(byte *)(param_2 + 0x17);
  *(byte *)((int)param_1 + 0x5b) =
       *(byte *)((int)param_1 + 0x5b) & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0x60 | bVar1 & 0x80;
  bVar1 = *(byte *)(param_2 + 0x17);
  *(byte *)(param_1 + 0x17) = bVar2 & 1 | bVar1 & 6 | bVar1 & 0x18 | bVar1 & 0xe0;
  *(undefined1 *)((int)param_1 + 0x5d) = *(undefined1 *)((int)param_2 + 0x5d);
  *(undefined1 *)((int)param_1 + 0x5e) = *(undefined1 *)((int)param_2 + 0x5e);
  *(undefined1 *)((int)param_1 + 0x5f) = *(undefined1 *)((int)param_2 + 0x5f);
  *(char *)(param_1 + 0x18) = (char)param_2[0x18];
  *(undefined1 *)((int)param_1 + 0x61) = *(undefined1 *)((int)param_2 + 0x61);
  *(undefined1 *)((int)param_1 + 0x62) = *(undefined1 *)((int)param_2 + 0x62);
  *(undefined1 *)((int)param_1 + 99) = *(undefined1 *)((int)param_2 + 99);
  *(char *)(param_1 + 0x19) = (char)param_2[0x19];
  *(undefined1 *)((int)param_1 + 0x65) = *(undefined1 *)((int)param_2 + 0x65);
  *(undefined1 *)((int)param_1 + 0x66) = *(undefined1 *)((int)param_2 + 0x66);
  *(undefined1 *)((int)param_1 + 0x67) = *(undefined1 *)((int)param_2 + 0x67);
  bVar1 = (byte)*(ushort *)(param_2 + 0x1a);
  puVar8 = (ushort *)(param_1 + 0x1a);
  *(byte *)puVar8 = (byte)*puVar8 & 0xc0 | bVar1 & 3 | bVar1 & 0xc | bVar1 & 0x30;
  uVar3 = (ushort)_DAT_080d5fc8;
  *puVar8 = uVar3 & *puVar8 | *(ushort *)(param_2 + 0x1a) & 0x3fc0;
  param_1[0x1a] = param_1[0x1a] & _DAT_080d5fcc | param_2[0x1a] & 0x3fc000U;
  *(ushort *)((int)param_1 + 0x6a) =
       uVar3 & *(ushort *)((int)param_1 + 0x6a) | *(ushort *)((int)param_2 + 0x6a) & 0x3fc0;
  uVar4 = *(ushort *)(param_2 + 0x1b);
  *(byte *)((int)param_1 + 0x6b) =
       *(byte *)((int)param_1 + 0x6b) & 0x3f | *(byte *)((int)param_2 + 0x6b) & 0xc0;
  puVar8 = (ushort *)(param_1 + 0x1b);
  *(byte *)puVar8 = (byte)*puVar8 & 0xc0 | (byte)uVar4 & 0x3f;
  *puVar8 = uVar3 & *puVar8 | *(ushort *)(param_2 + 0x1b) & 0x3fc0;
  param_1[0x1b] = param_1[0x1b] & _DAT_080d5fcc | param_2[0x1b] & 0x3fc000U;
  *(ushort *)((int)param_1 + 0x6e) =
       uVar3 & *(ushort *)((int)param_1 + 0x6e) | *(ushort *)((int)param_2 + 0x6e) & 0x3fc0;
  uVar4 = *(ushort *)(param_2 + 0x1c);
  *(byte *)((int)param_1 + 0x6f) =
       *(byte *)((int)param_1 + 0x6f) & 0x3f | *(byte *)((int)param_2 + 0x6f) & 0xc0;
  puVar8 = (ushort *)(param_1 + 0x1c);
  *(byte *)puVar8 = (byte)*puVar8 & 0xc0 | (byte)uVar4 & 0x3f;
  *puVar8 = uVar3 & *puVar8 | *(ushort *)(param_2 + 0x1c) & 0x3fc0;
  param_1[0x1c] = param_1[0x1c] & _DAT_080d5fcc | param_2[0x1c] & 0x3fc000U;
  *(ushort *)((int)param_1 + 0x72) =
       uVar3 & *(ushort *)((int)param_1 + 0x72) | *(ushort *)((int)param_2 + 0x72) & 0x3fc0;
  uVar3 = *(ushort *)(param_2 + 0x1d);
  *(byte *)((int)param_1 + 0x73) =
       *(byte *)((int)param_1 + 0x73) & 0x3f | *(byte *)((int)param_2 + 0x73) & 0xc0;
  puVar8 = (ushort *)(param_1 + 0x1d);
  *(byte *)puVar8 = (byte)*puVar8 & 0xc0 | (byte)uVar3 & 0x3f;
  *puVar8 = (ushort)_DAT_080d5fd0 & *puVar8 | *(ushort *)(param_2 + 0x1d) & 0x1c0;
  bVar1 = *(byte *)((int)param_2 + 0x75);
  *(byte *)((int)param_1 + 0x75) =
       *(byte *)((int)param_1 + 0x75) & 1 | bVar1 & 6 | bVar1 & 8 | bVar1 & 0x10 | bVar1 & 0x20 |
       bVar1 & 0x40 | bVar1 & 0x80;
  bVar1 = *(byte *)((int)param_2 + 0x76);
  puVar8 = (ushort *)((int)param_1 + 0x76);
  *(byte *)puVar8 =
       bVar1 & 1 | *(byte *)puVar8 & 0x80 | bVar1 & 2 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 |
       bVar1 & 0x20 | bVar1 & 0x40;
  *puVar8 = (ushort)_DAT_080d5fd4 & *puVar8 | *(ushort *)((int)param_2 + 0x76) & 0x780;
  bVar1 = *(byte *)(param_2 + 0x1e);
  *(byte *)((int)param_1 + 0x77) =
       *(byte *)((int)param_1 + 0x77) & 7 | *(byte *)((int)param_2 + 0x77) & 0x78 |
       *(byte *)((int)param_2 + 0x77) & 0x80;
  bVar2 = *(byte *)(param_2 + 0x1e);
  *(byte *)(param_1 + 0x1e) =
       bVar1 & 7 | bVar2 & 8 | bVar2 & 0x10 | bVar2 & 0x20 | bVar2 & 0x40 | bVar2 & 0x80;
  *(undefined1 *)((int)param_1 + 0x79) = *(undefined1 *)((int)param_2 + 0x79);
  puVar8 = (ushort *)((int)param_1 + 0x7a);
  *(byte *)puVar8 = *(byte *)((int)param_2 + 0x7a) & 1 | *(byte *)puVar8 & 0xfe;
  *puVar8 = (ushort)_DAT_080d5fd8 & *puVar8 | *(ushort *)((int)param_2 + 0x7a) & 0x1fe;
  bVar1 = *(byte *)((int)param_2 + 0x7b);
  *(byte *)((int)param_1 + 0x7b) =
       *(byte *)((int)param_1 + 0x7b) & 1 | bVar1 & 2 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 |
       bVar1 & 0x20 | bVar1 & 0x40 | bVar1 & 0x80;
  *(char *)(param_1 + 0x1f) = (char)param_2[0x1f];
  *(undefined1 *)((int)param_1 + 0x7d) = *(undefined1 *)((int)param_2 + 0x7d);
  bVar1 = *(byte *)((int)param_2 + 0x7e);
  puVar8 = (ushort *)((int)param_1 + 0x7e);
  *(byte *)puVar8 =
       *(byte *)puVar8 & 0x80 | bVar1 & 3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10 | bVar1 & 0x20 |
       bVar1 & 0x40;
  *puVar8 = (ushort)_DAT_080d60ac & *puVar8 | *(ushort *)((int)param_2 + 0x7e) & 0x380;
  *(byte *)((int)param_1 + 0x7f) =
       *(byte *)((int)param_1 + 0x7f) & 3 | *(byte *)((int)param_2 + 0x7f) & 0xfc;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D60B0 @ 0x080D60B0
// =============================================================================
undefined8 func_080D60B0(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  *(byte *)param_1 = (byte)*param_1 & 0xc0 | (byte)*param_2 & 0x3f;
  *(ushort *)param_1 = (ushort)_DAT_080d64ac & (ushort)*param_1 | (ushort)*param_2 & 0x1fc0;
  *param_1 = *param_1 & _DAT_080d64b0 | *param_2 & 0x1fe000;
  *(byte *)((int)param_1 + 2) =
       *(byte *)((int)param_1 + 2) & 0xdf | *(byte *)((int)param_2 + 2) & 0x20;
  *(ushort *)((int)param_1 + 2) =
       (ushort)_DAT_080d64b4 & *(ushort *)((int)param_1 + 2) | *(ushort *)((int)param_2 + 2) & 0x1c0
  ;
  *(byte *)((int)param_1 + 3) =
       *(byte *)((int)param_1 + 3) & 0xe1 | *(byte *)((int)param_2 + 3) & 2 |
       *(byte *)((int)param_2 + 3) & 0x1c;
  uVar3 = param_2[2];
  uVar5 = param_2[3];
  param_1[1] = param_2[1];
  param_1[2] = uVar3;
  param_1[3] = uVar5;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  strcpy(param_1 + 6,param_2 + 6);
  *(byte *)(param_1 + 10) = (byte)param_2[10];
  *(byte *)((int)param_1 + 0x29) = *(byte *)((int)param_2 + 0x29);
  *(byte *)((int)param_1 + 0x2a) =
       *(byte *)((int)param_1 + 0x2a) & 0xfe | *(byte *)((int)param_2 + 0x2a) & 1;
  param_1[0xb] = param_2[0xb];
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  uVar3 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  uVar3 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  uVar3 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar3;
  uVar3 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar3;
  uVar3 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar3;
  uVar3 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar3;
  uVar3 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar3;
  uVar3 = param_2[0x1d];
  uVar5 = param_2[0x1e];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar3;
  param_1[0x1e] = uVar5;
  uVar3 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar3;
  uVar3 = param_2[0x22];
  uVar5 = param_2[0x23];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar5;
  uVar3 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar3;
  uVar3 = param_2[0x27];
  uVar5 = param_2[0x28];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar3;
  param_1[0x28] = uVar5;
  uVar3 = param_2[0x2a];
  uVar5 = param_2[0x2b];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar3;
  param_1[0x2b] = uVar5;
  uVar3 = param_2[0x2d];
  uVar5 = param_2[0x2e];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar3;
  param_1[0x2e] = uVar5;
  uVar3 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar3;
  uVar3 = param_2[0x32];
  uVar5 = param_2[0x33];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = uVar3;
  param_1[0x33] = uVar5;
  uVar3 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = uVar3;
  uVar3 = param_2[0x37];
  uVar5 = param_2[0x38];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = uVar3;
  param_1[0x38] = uVar5;
  uVar3 = param_2[0x3a];
  uVar5 = param_2[0x3b];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = uVar3;
  param_1[0x3b] = uVar5;
  uVar3 = param_2[0x3d];
  uVar5 = param_2[0x3e];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = uVar3;
  param_1[0x3e] = uVar5;
  uVar3 = param_2[0x40];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = uVar3;
  uVar3 = param_2[0x42];
  uVar5 = param_2[0x43];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = uVar3;
  param_1[0x43] = uVar5;
  uVar3 = param_2[0x45];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = uVar3;
  uVar3 = param_2[0x47];
  uVar5 = param_2[0x48];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar3;
  param_1[0x48] = uVar5;
  uVar3 = param_2[0x4a];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = uVar3;
  uVar3 = param_2[0x4c];
  uVar5 = param_2[0x4d];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = uVar3;
  param_1[0x4d] = uVar5;
  uVar3 = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = uVar3;
  uVar3 = param_2[0x51];
  uVar5 = param_2[0x52];
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = uVar3;
  param_1[0x52] = uVar5;
  uVar3 = param_2[0x54];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = uVar3;
  uVar3 = param_2[0x56];
  uVar5 = param_2[0x57];
  param_1[0x55] = param_2[0x55];
  param_1[0x56] = uVar3;
  param_1[0x57] = uVar5;
  uVar3 = param_2[0x59];
  uVar5 = param_2[0x5a];
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = uVar3;
  param_1[0x5a] = uVar5;
  uVar3 = param_2[0x5c];
  uVar5 = param_2[0x5d];
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = uVar3;
  param_1[0x5d] = uVar5;
  uVar3 = param_2[0x5f];
  param_1[0x5e] = param_2[0x5e];
  param_1[0x5f] = uVar3;
  uVar3 = param_2[0x61];
  uVar5 = param_2[0x62];
  param_1[0x60] = param_2[0x60];
  param_1[0x61] = uVar3;
  param_1[0x62] = uVar5;
  uVar3 = param_2[100];
  param_1[99] = param_2[99];
  param_1[100] = uVar3;
  uVar3 = param_2[0x66];
  uVar5 = param_2[0x67];
  param_1[0x65] = param_2[0x65];
  param_1[0x66] = uVar3;
  param_1[0x67] = uVar5;
  uVar3 = param_2[0x69];
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = uVar3;
  uVar3 = param_2[0x6b];
  uVar5 = param_2[0x6c];
  param_1[0x6a] = param_2[0x6a];
  param_1[0x6b] = uVar3;
  param_1[0x6c] = uVar5;
  uVar3 = param_2[0x6e];
  param_1[0x6d] = param_2[0x6d];
  param_1[0x6e] = uVar3;
  uVar3 = param_2[0x70];
  uVar5 = param_2[0x71];
  param_1[0x6f] = param_2[0x6f];
  param_1[0x70] = uVar3;
  param_1[0x71] = uVar5;
  uVar3 = param_2[0x73];
  param_1[0x72] = param_2[0x72];
  param_1[0x73] = uVar3;
  uVar3 = param_2[0x75];
  uVar5 = param_2[0x76];
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = uVar3;
  param_1[0x76] = uVar5;
  uVar3 = param_2[0x78];
  param_1[0x77] = param_2[0x77];
  param_1[0x78] = uVar3;
  uVar3 = param_2[0x7a];
  uVar5 = param_2[0x7b];
  param_1[0x79] = param_2[0x79];
  param_1[0x7a] = uVar3;
  param_1[0x7b] = uVar5;
  uVar3 = param_2[0x7d];
  uVar5 = param_2[0x7e];
  param_1[0x7c] = param_2[0x7c];
  param_1[0x7d] = uVar3;
  param_1[0x7e] = uVar5;
  uVar3 = param_2[0x80];
  uVar5 = param_2[0x81];
  param_1[0x7f] = param_2[0x7f];
  param_1[0x80] = uVar3;
  param_1[0x81] = uVar5;
  uVar3 = param_2[0x83];
  param_1[0x82] = param_2[0x82];
  param_1[0x83] = uVar3;
  uVar3 = param_2[0x85];
  uVar5 = param_2[0x86];
  param_1[0x84] = param_2[0x84];
  param_1[0x85] = uVar3;
  param_1[0x86] = uVar5;
  uVar3 = param_2[0x88];
  uVar5 = param_2[0x89];
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = uVar3;
  param_1[0x89] = uVar5;
  uVar3 = param_2[0x8b];
  uVar5 = param_2[0x8c];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = uVar3;
  param_1[0x8c] = uVar5;
  uVar3 = param_2[0x8e];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = uVar3;
  uVar3 = param_2[0x90];
  uVar5 = param_2[0x91];
  param_1[0x8f] = param_2[0x8f];
  param_1[0x90] = uVar3;
  param_1[0x91] = uVar5;
  uVar3 = param_2[0x93];
  param_1[0x92] = param_2[0x92];
  param_1[0x93] = uVar3;
  uVar3 = param_2[0x95];
  uVar5 = param_2[0x96];
  param_1[0x94] = param_2[0x94];
  param_1[0x95] = uVar3;
  param_1[0x96] = uVar5;
  uVar3 = param_2[0x98];
  param_1[0x97] = param_2[0x97];
  param_1[0x98] = uVar3;
  uVar3 = param_2[0x9a];
  uVar5 = param_2[0x9b];
  param_1[0x99] = param_2[0x99];
  param_1[0x9a] = uVar3;
  param_1[0x9b] = uVar5;
  uVar3 = param_2[0x9d];
  uVar5 = param_2[0x9e];
  param_1[0x9c] = param_2[0x9c];
  param_1[0x9d] = uVar3;
  param_1[0x9e] = uVar5;
  uVar3 = param_2[0xa0];
  uVar5 = param_2[0xa1];
  param_1[0x9f] = param_2[0x9f];
  param_1[0xa0] = uVar3;
  param_1[0xa1] = uVar5;
  uVar3 = param_2[0xa3];
  param_1[0xa2] = param_2[0xa2];
  param_1[0xa3] = uVar3;
  uVar3 = param_2[0xa5];
  uVar5 = param_2[0xa6];
  param_1[0xa4] = param_2[0xa4];
  param_1[0xa5] = uVar3;
  param_1[0xa6] = uVar5;
  uVar3 = param_2[0xa8];
  uVar5 = param_2[0xa9];
  param_1[0xa7] = param_2[0xa7];
  param_1[0xa8] = uVar3;
  param_1[0xa9] = uVar5;
  uVar3 = param_2[0xab];
  uVar5 = param_2[0xac];
  param_1[0xaa] = param_2[0xaa];
  param_1[0xab] = uVar3;
  param_1[0xac] = uVar5;
  uVar3 = param_2[0xae];
  param_1[0xad] = param_2[0xad];
  param_1[0xae] = uVar3;
  uVar3 = param_2[0xb0];
  uVar5 = param_2[0xb1];
  param_1[0xaf] = param_2[0xaf];
  param_1[0xb0] = uVar3;
  param_1[0xb1] = uVar5;
  uVar3 = param_2[0xb3];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = uVar3;
  uVar3 = param_2[0xb5];
  uVar5 = param_2[0xb6];
  param_1[0xb4] = param_2[0xb4];
  param_1[0xb5] = uVar3;
  param_1[0xb6] = uVar5;
  uVar3 = param_2[0xb8];
  param_1[0xb7] = param_2[0xb7];
  param_1[0xb8] = uVar3;
  uVar3 = param_2[0xba];
  uVar5 = param_2[0xbb];
  param_1[0xb9] = param_2[0xb9];
  param_1[0xba] = uVar3;
  param_1[0xbb] = uVar5;
  uVar3 = param_2[0xbd];
  uVar5 = param_2[0xbe];
  param_1[0xbc] = param_2[0xbc];
  param_1[0xbd] = uVar3;
  param_1[0xbe] = uVar5;
  uVar3 = param_2[0xc0];
  uVar5 = param_2[0xc1];
  param_1[0xbf] = param_2[0xbf];
  param_1[0xc0] = uVar3;
  param_1[0xc1] = uVar5;
  uVar3 = param_2[0xc3];
  param_1[0xc2] = param_2[0xc2];
  param_1[0xc3] = uVar3;
  uVar3 = param_2[0xc5];
  uVar5 = param_2[0xc6];
  param_1[0xc4] = param_2[0xc4];
  param_1[0xc5] = uVar3;
  param_1[0xc6] = uVar5;
  uVar3 = param_2[200];
  uVar5 = param_2[0xc9];
  param_1[199] = param_2[199];
  param_1[200] = uVar3;
  param_1[0xc9] = uVar5;
  uVar3 = param_2[0xcb];
  uVar5 = param_2[0xcc];
  param_1[0xca] = param_2[0xca];
  param_1[0xcb] = uVar3;
  param_1[0xcc] = uVar5;
  uVar3 = param_2[0xce];
  param_1[0xcd] = param_2[0xcd];
  param_1[0xce] = uVar3;
  uVar3 = param_2[0xd0];
  uVar5 = param_2[0xd1];
  param_1[0xcf] = param_2[0xcf];
  param_1[0xd0] = uVar3;
  param_1[0xd1] = uVar5;
  uVar3 = param_2[0xd3];
  uVar5 = param_2[0xd4];
  param_1[0xd2] = param_2[0xd2];
  param_1[0xd3] = uVar3;
  param_1[0xd4] = uVar5;
  uVar3 = param_2[0xd6];
  uVar5 = param_2[0xd7];
  param_1[0xd5] = param_2[0xd5];
  param_1[0xd6] = uVar3;
  param_1[0xd7] = uVar5;
  uVar3 = param_2[0xd9];
  uVar5 = param_2[0xda];
  param_1[0xd8] = param_2[0xd8];
  param_1[0xd9] = uVar3;
  param_1[0xda] = uVar5;
  uVar3 = param_2[0xdc];
  uVar5 = param_2[0xdd];
  param_1[0xdb] = param_2[0xdb];
  param_1[0xdc] = uVar3;
  param_1[0xdd] = uVar5;
  uVar3 = param_2[0xdf];
  uVar5 = param_2[0xe0];
  param_1[0xde] = param_2[0xde];
  param_1[0xdf] = uVar3;
  param_1[0xe0] = uVar5;
  uVar3 = param_2[0xe2];
  uVar5 = param_2[0xe3];
  param_1[0xe1] = param_2[0xe1];
  param_1[0xe2] = uVar3;
  param_1[0xe3] = uVar5;
  uVar3 = param_2[0xe5];
  uVar5 = param_2[0xe6];
  param_1[0xe4] = param_2[0xe4];
  param_1[0xe5] = uVar3;
  param_1[0xe6] = uVar5;
  uVar3 = param_2[0xe8];
  uVar5 = param_2[0xe9];
  param_1[0xe7] = param_2[0xe7];
  param_1[0xe8] = uVar3;
  param_1[0xe9] = uVar5;
  uVar3 = param_2[0xeb];
  uVar5 = param_2[0xec];
  param_1[0xea] = param_2[0xea];
  param_1[0xeb] = uVar3;
  param_1[0xec] = uVar5;
  uVar3 = param_2[0xee];
  uVar5 = param_2[0xef];
  param_1[0xed] = param_2[0xed];
  param_1[0xee] = uVar3;
  param_1[0xef] = uVar5;
  uVar3 = param_2[0xf1];
  uVar5 = param_2[0xf2];
  param_1[0xf0] = param_2[0xf0];
  param_1[0xf1] = uVar3;
  param_1[0xf2] = uVar5;
  uVar3 = param_2[0xf4];
  uVar5 = param_2[0xf5];
  param_1[0xf3] = param_2[0xf3];
  param_1[0xf4] = uVar3;
  param_1[0xf5] = uVar5;
  uVar3 = param_2[0xf7];
  uVar5 = param_2[0xf8];
  param_1[0xf6] = param_2[0xf6];
  param_1[0xf7] = uVar3;
  param_1[0xf8] = uVar5;
  uVar3 = param_2[0xfa];
  uVar5 = param_2[0xfb];
  param_1[0xf9] = param_2[0xf9];
  param_1[0xfa] = uVar3;
  param_1[0xfb] = uVar5;
  uVar3 = param_2[0xfd];
  uVar5 = param_2[0xfe];
  param_1[0xfc] = param_2[0xfc];
  param_1[0xfd] = uVar3;
  param_1[0xfe] = uVar5;
  uVar3 = param_2[0x100];
  uVar5 = param_2[0x101];
  param_1[0xff] = param_2[0xff];
  param_1[0x100] = uVar3;
  param_1[0x101] = uVar5;
  uVar3 = param_2[0x103];
  uVar5 = param_2[0x104];
  param_1[0x102] = param_2[0x102];
  param_1[0x103] = uVar3;
  param_1[0x104] = uVar5;
  pbVar1 = (byte *)((int)param_1 + _DAT_080d64b8);
  pbVar2 = (byte *)((int)param_2 + _DAT_080d64b8);
  uVar4 = *(undefined4 *)(pbVar2 + 4);
  uVar6 = *(undefined4 *)(pbVar2 + 8);
  *(undefined4 *)pbVar1 = *(undefined4 *)pbVar2;
  *(undefined4 *)(pbVar1 + 4) = uVar4;
  *(undefined4 *)(pbVar1 + 8) = uVar6;
  uVar4 = *(undefined4 *)(pbVar2 + 0x10);
  uVar6 = *(undefined4 *)(pbVar2 + 0x14);
  *(undefined4 *)(pbVar1 + 0xc) = *(undefined4 *)(pbVar2 + 0xc);
  *(undefined4 *)(pbVar1 + 0x10) = uVar4;
  *(undefined4 *)(pbVar1 + 0x14) = uVar6;
  uVar4 = *(undefined4 *)(pbVar2 + 0x1c);
  uVar6 = *(undefined4 *)(pbVar2 + 0x20);
  *(undefined4 *)(pbVar1 + 0x18) = *(undefined4 *)(pbVar2 + 0x18);
  *(undefined4 *)(pbVar1 + 0x1c) = uVar4;
  *(undefined4 *)(pbVar1 + 0x20) = uVar6;
  memcpy(param_1 + 0x10e,param_2 + 0x10e,0x38);
  param_1[0x11c] = param_2[0x11c];
  *(byte *)((int)param_1 + _DAT_080d64bc) = *(byte *)((int)param_2 + _DAT_080d64bc);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D64C8 @ 0x080D64C8
// =============================================================================
undefined8 func_080D64C8(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  strcpy();
  *(ushort *)(param_1 + 0x10) =
       (ushort)_DAT_080d656c & *(ushort *)(param_1 + 0x10) | *(ushort *)(param_2 + 0x10) & 0x3ff;
  bVar1 = *(byte *)(param_2 + 0x11);
  *(byte *)(param_1 + 0x11) =
       *(byte *)(param_1 + 0x11) & 0xe3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10;
  puVar5 = (undefined4 *)(param_1 + 0x14);
  iVar3 = 10;
  puVar4 = (undefined4 *)(param_2 + 0x14);
  do {
    uVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  memcpy(param_1 + 0x40,param_2 + 0x40,0x1a0);
  memcpy(param_1 + 0x1e0,param_2 + 0x1e0,0x21c);
  func_080D66A4(param_1 + 0x3fc,param_2 + 0x3fc);
  func_080D657C(param_1 + _DAT_080d6570,param_2 + _DAT_080d6570);
  memcpy(param_1 + _DAT_080d6574,param_2 + _DAT_080d6574,_DAT_080d6578);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D657C @ 0x080D657C
// =============================================================================
undefined8 func_080D657C(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  *(byte *)param_1 = (byte)*param_1 & 0xfe | (byte)*param_2 & 1;
  *(ushort *)param_1 =
       (ushort)_DAT_080d6688 & (ushort)*param_1 | (ushort)_DAT_080d6684 & (ushort)*param_2;
  *(byte *)((int)param_1 + 1) =
       *(byte *)((int)param_1 + 1) & 0xe7 | *(byte *)((int)param_2 + 1) & 8 |
       *(byte *)((int)param_2 + 1) & 0x10;
  *param_1 = *param_1 & _DAT_080d6690 | *param_2 & _DAT_080d668c;
  *(byte *)((int)param_1 + 3) =
       *(byte *)((int)param_1 + 3) & 0x1f | *(byte *)((int)param_2 + 3) & 0x60 |
       *(byte *)((int)param_2 + 3) & 0x80;
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xf0 | (byte)param_2[1] & 0xf;
  *(ushort *)(param_1 + 1) =
       (ushort)_DAT_080d6698 & (ushort)param_1[1] | (ushort)_DAT_080d6694 & (ushort)param_2[1];
  param_1[1] = param_1[1] & _DAT_080d66a0 | param_2[1] & _DAT_080d669c;
  pbVar2 = (byte *)((int)param_1 + 7);
  iVar3 = 1;
  pbVar1 = (byte *)((int)param_2 + 7);
  do {
    *pbVar2 = *pbVar1;
    pbVar2 = pbVar2 + 1;
    pbVar1 = pbVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  strcpy(param_1 + 3,param_2 + 3);
  strcpy(param_1 + 7,param_2 + 7);
  puVar4 = param_1 + 0xb;
  iVar3 = 0xf;
  param_2 = param_2 + 0xb;
  do {
    memcpy(puVar4,param_2,0x3c);
    puVar4 = puVar4 + 0xf;
    param_2 = param_2 + 0xf;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D66A4 @ 0x080D66A4
// =============================================================================
undefined8 func_080D66A4(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(byte *)param_1 = (byte)*param_1 & 0xfe | (byte)*param_2 & 1;
  *(ushort *)param_1 =
       (ushort)_DAT_080d67c0 & (ushort)*param_1 | (ushort)_DAT_080d67bc & (ushort)*param_2;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xf7 | *(byte *)((int)param_2 + 1) & 8
  ;
  *param_1 = *param_1 & _DAT_080d67c4 | *param_2 & 0xff000;
  *(byte *)((int)param_1 + 2) =
       *(byte *)((int)param_1 + 2) & 0xf | *(byte *)((int)param_2 + 2) & 0x10 |
       *(byte *)((int)param_2 + 2) & 0xe0;
  uVar3 = param_2[1];
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_2 + 3);
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xfc | (byte)uVar3 & 3;
  strcpy(param_1 + 2,param_2 + 2);
  puVar2 = param_1 + 6;
  iVar5 = 7;
  puVar1 = param_2 + 6;
  do {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    uVar3 = puVar1[4];
    uVar4 = puVar1[5];
    puVar2[3] = puVar1[3];
    puVar2[4] = uVar3;
    puVar2[5] = uVar4;
    uVar3 = puVar1[7];
    uVar4 = puVar1[8];
    puVar2[6] = puVar1[6];
    puVar2[7] = uVar3;
    puVar2[8] = uVar4;
    uVar3 = puVar1[10];
    uVar4 = puVar1[0xb];
    puVar2[9] = puVar1[9];
    puVar2[10] = uVar3;
    puVar2[0xb] = uVar4;
    puVar2 = puVar2 + 0xc;
    puVar1 = puVar1 + 0xc;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  puVar1 = param_1 + 0x66;
  iVar5 = 7;
  puVar2 = param_2 + 0x66;
  do {
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  puVar2 = param_1 + 0x76;
  iVar5 = 1;
  param_2 = param_2 + 0x76;
  do {
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    *puVar2 = uVar3;
    puVar2 = puVar2 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D67C8 @ 0x080D67C8
// =============================================================================
undefined8 func_080D67C8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080D684C();
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(byte *)(param_1 + 0x1d) =
       *(byte *)(param_1 + 0x1d) & 0xfc | *(byte *)(param_2 + 0x1d) & 1 |
       *(byte *)(param_2 + 0x1d) & 2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(ushort *)(param_1 + 0x2c) =
       (ushort)_DAT_080d6844 & *(ushort *)(param_1 + 0x2c) | *(ushort *)(param_2 + 0x2c) & 0x3ff;
  *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) & 0xe3 | *(byte *)(param_2 + 0x2d) & 0x1c;
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & _DAT_080d6848 | *(uint *)(param_2 + 0x2c) & 0x1fe000;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D684C @ 0x080D684C
// =============================================================================
undefined8 func_080D684C(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  strcpy(param_1 + 2,param_2 + 2);
  *(ushort *)(param_1 + 6) =
       (ushort)_DAT_080d68b8 & *(ushort *)(param_1 + 6) | *(ushort *)(param_2 + 6) & 0x3ff;
  bVar1 = *(byte *)((int)param_2 + 0x19);
  *(byte *)((int)param_1 + 0x19) =
       *(byte *)((int)param_1 + 0x19) & 0xe3 | bVar1 & 4 | bVar1 & 8 | bVar1 & 0x10;
  param_1[6] = param_1[6] & _DAT_080d68bc | param_2[6] & 0x1fe000;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D68C0 @ 0x080D68C0
// =============================================================================
undefined8 func_080D68C0(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ushort *puVar10;
  undefined4 in_lr;
  
  strcpy();
  strcpy(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  puVar8 = (undefined4 *)(param_1 + 0x2c);
  iVar5 = 5;
  puVar6 = (undefined4 *)(param_2 + 0x2c);
  do {
    uVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar8 = uVar7;
    puVar8 = puVar8 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  bVar1 = *(byte *)(param_2 + 0x44);
  puVar10 = (ushort *)(param_1 + 0x44);
  *(byte *)puVar10 =
       *(byte *)puVar10 & 0x80 | bVar1 & 0xf | bVar1 & 0x10 | bVar1 & 0x20 | bVar1 & 0x40;
  uVar2 = (ushort)_DAT_080d6a68;
  *puVar10 = uVar2 & *puVar10 | *(ushort *)(param_2 + 0x44) & 0x7f80;
  *(uint *)(param_1 + 0x44) =
       *(uint *)(param_1 + 0x44) & _DAT_080d6a6c | *(uint *)(param_2 + 0x44) & 0x7f8000;
  *(ushort *)(param_1 + 0x46) =
       uVar2 & *(ushort *)(param_1 + 0x46) | *(ushort *)(param_2 + 0x46) & 0x7f80;
  uVar4 = _DAT_080d6a70;
  uVar9 = *(uint *)(param_2 + 0x48);
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0x7f | *(byte *)(param_2 + 0x47) & 0x80;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe0000000 | uVar9 & uVar4;
  *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) & 0x1f | *(byte *)(param_2 + 0x4b) & 0xe0;
  puVar10 = (ushort *)(param_1 + 0x4c);
  *(byte *)puVar10 = *(byte *)puVar10 & 0x80 | *(byte *)(param_2 + 0x4c) & 0x7f;
  *puVar10 = uVar2 & *puVar10 | *(ushort *)(param_2 + 0x4c) & 0x7f80;
  uVar2 = *(ushort *)(param_2 + 0x50);
  uVar3 = (ushort)_DAT_080d6a74;
  *(uint *)(param_1 + 0x4c) =
       *(uint *)(param_1 + 0x4c) & _DAT_080d6a78 | *(uint *)(param_2 + 0x4c) & 0xffff8000;
  *(ushort *)(param_1 + 0x50) =
       (ushort)_DAT_080d6a7c & *(ushort *)(param_1 + 0x50) | uVar2 & uVar3 & uVar3;
  *(byte *)(param_1 + 0x51) = *(byte *)(param_1 + 0x51) & 0x1f | *(byte *)(param_2 + 0x51) & 0xe0;
  uVar7 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  memcpy(param_1 + 0x5c,param_2 + 0x5c,2);
  func_080D6A80(param_1 + 0x60,param_2 + 0x60);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D6A80 @ 0x080D6A80
// =============================================================================
undefined8 func_080D6A80(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 in_lr;
  
  *param_1 = 0;
  iVar2 = *param_2;
  piVar3 = param_2 + 1;
  piVar1 = piVar3 + iVar2;
  piVar4 = param_1;
  for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    piVar4 = piVar4 + 1;
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar3;
    }
  }
  *param_1 = iVar2;
  param_1[9] = 0;
  iVar2 = param_2[9];
  param_2 = param_2 + 10;
  piVar4 = (int *)(iVar2 * 2 + (int)param_2);
  piVar3 = param_1 + 10;
  for (; param_2 != piVar4; param_2 = (int *)((int)param_2 + 2)) {
    if (piVar3 != (int *)0x0) {
      memcpy(piVar3,param_2,2);
    }
    piVar3 = (int *)((int)piVar3 + 2);
  }
  param_1[9] = iVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D6B00 @ 0x080D6B00
// =============================================================================
undefined4 func_080D6B00(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  for (piVar1 = param_1 + 10; piVar1 != (int *)((int)param_1 + param_1[9] * 2 + 0x28);
      piVar1 = (int *)((int)piVar1 + 2)) {
  }
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
  } while (piVar1 != param_1 + *param_1 + 1);
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D6B40 @ 0x080D6B40
// =============================================================================
undefined8 func_080D6B40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  *param_1 = *param_2;
  *(byte *)(param_1 + 1) =
       *(byte *)(param_1 + 1) & 0xfc | *(byte *)(param_2 + 1) & 1 | *(byte *)(param_2 + 1) & 2;
  param_1[2] = 0;
  iVar5 = param_2[2];
  puVar1 = param_2 + 3;
  puVar4 = puVar1 + iVar5 * 2;
  puVar3 = param_1 + 3;
  for (; puVar1 != puVar4; puVar1 = puVar1 + 2) {
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
    }
    puVar3 = puVar3 + 2;
  }
  param_1[2] = iVar5;
  param_1[0x3f] = 0;
  iVar5 = param_2[0x3f];
  puVar1 = param_2 + 0x40;
  puVar4 = puVar1 + iVar5 * 2;
  puVar3 = param_1 + 0x40;
  for (; puVar1 != puVar4; puVar1 = puVar1 + 2) {
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
    }
    puVar3 = puVar3 + 2;
  }
  param_1[0x3f] = iVar5;
  uVar2 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar2;
  uVar2 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D6C08 @ 0x080D6C08
// =============================================================================
undefined4 func_080D6C08(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  for (piVar1 = (int *)(param_1 + 0x100);
      piVar1 != (int *)(param_1 + 0xfc) + *(int *)(param_1 + 0xfc) * 2 + 1; piVar1 = piVar1 + 2) {
  }
  for (iVar2 = param_1 + 0xc; iVar2 != param_1 + *(int *)(param_1 + 8) * 8 + 0xc; iVar2 = iVar2 + 8)
  {
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D6C58 @ 0x080D6C58
// =============================================================================
void func_080D6C58(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  
  puStack_24 = param_1;
  puVar2 = (undefined4 *)func_080005D4(_DAT_080d6d70);
  uVar1 = *(undefined1 *)(param_2 + 0x24);
  *puVar2 = _DAT_080d6d74;
  uVar3 = func_080005D4(_DAT_080d6d78);
  uVar3 = func_08010358(uVar3,param_2 + 4,param_2 + 0x14,uVar1,param_2 + 0x28);
  puVar2[1] = uVar3;
  func_0803F804(puVar2 + 2);
  *(undefined1 *)(puVar2 + 0xd9) = 1;
  puVar2[0xda] = 0xab;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  puVar2[0xdc] = 0x1d;
  puVar4 = (ushort *)(puVar2 + 0xdd);
  *(byte *)puVar4 = (byte)*puVar4 & 0xe0 | 6;
  *puVar4 = (ushort)_DAT_080d6d7c & *puVar4;
  puVar2[0xde] = 0;
  puVar2[0xe3] = 0;
  puVar2[0x134] = 0;
  iVar5 = (int)puVar2 + _DAT_080d6d80;
  iVar6 = 5;
  do {
    func_080D4130(iVar5);
    iVar5 = iVar5 + 0xc;
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  iVar5 = (int)puVar2 + _DAT_080d6d84;
  iVar6 = 3;
  do {
    func_080D40CC(iVar5);
    iVar5 = iVar5 + 0xc;
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  *_DAT_080d6d88 = puVar2;
  puStack_2c = &uStack_30;
  *puStack_24 = puVar2;
  uStack_30 = 0;
  puStack_28 = puVar2;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_080D6D8C @ 0x080D6D8C
// =============================================================================
undefined4 func_080D6D8C(void)

{
  undefined4 in_lr;
  
  Scene_Destructor();
  return in_lr;
}

// =============================================================================
// Function: func_080D6D98 @ 0x080D6D98
// =============================================================================
undefined8 func_080D6D98(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)(param_1 + param_2 * 4 + -4);
  *piVar1 = param_3;
  while (piVar1 != (int *)param_1) {
    piVar1[-1] = (int)piVar1;
    piVar1 = piVar1 + -1;
  }
  return CONCAT44(in_lr,piVar1);
}

// =============================================================================
// Function: func_080D6DB8 @ 0x080D6DB8
// =============================================================================
undefined4 func_080D6DB8(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *param_1;
  if ((uint)(param_1[3] - iVar5 >> 3) < param_2) {
    iVar6 = param_1[1];
    iVar1 = iVar6 - iVar5;
    if (iVar5 == 0) {
      if (param_2 == 0) {
        iVar4 = 0;
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 * 8;
        iVar4 = malloc(iVar7);
        if (iVar4 == 0) {
          iVar4 = func_080D3BC0(iVar7);
        }
      }
    }
    else {
      if (param_2 == 0) {
        iVar2 = 0;
        iVar7 = 0;
        iVar4 = iVar2;
      }
      else {
        iVar7 = param_2 * 8;
        iVar2 = malloc(iVar7);
        iVar4 = iVar2;
        if (iVar2 == 0) {
          iVar2 = func_080D3BC0(iVar7);
          iVar4 = iVar2;
        }
      }
      for (; iVar5 != iVar6; iVar5 = iVar5 + 8) {
        if (iVar2 != 0) {
          func_0x08007128(iVar2);
          uVar3 = func_0800745C(iVar2,*(undefined4 *)(iVar5 + 4));
          *(undefined4 *)(iVar2 + 4) = uVar3;
        }
        iVar2 = iVar2 + 8;
      }
      iVar6 = param_1[1];
      for (iVar5 = *param_1; iVar5 != iVar6; iVar5 = iVar5 + 8) {
        func_0x080073e0(iVar5,*(undefined4 *)(iVar5 + 4));
        func_08007184(iVar5,2);
      }
      if (*param_1 != 0) {
        free();
      }
    }
    *param_1 = iVar4;
    param_1[1] = (iVar1 >> 3) * 8 + iVar4;
    param_1[3] = iVar7 + iVar4;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D6ECC @ 0x080D6ECC
// =============================================================================
undefined4 func_080D6ECC(undefined1 *param_1)

{
  undefined4 in_lr;
  
  func_0x080d6eac(param_1 + 4);
  func_0x080d6eac(param_1 + 0x20);
  *param_1 = 1;
  param_1[1] = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080D6EEC @ 0x080D6EEC
// =============================================================================
undefined4 func_080D6EEC(undefined1 *param_1)

{
  undefined4 in_lr;
  
  func_080D6ECC(param_1 + 4);
  func_080D6ECC(param_1 + 0x40);
  *param_1 = 1;
  param_1[1] = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080D6F3C @ 0x080D6F3C
// =============================================================================
undefined4 func_080D6F3C(undefined1 *param_1)

{
  undefined4 in_lr;
  
  func_0x080d6f1c(param_1 + 0x20);
  func_0x080d6f1c(param_1 + 4);
  *param_1 = 0;
  param_1[1] = 1;
  return in_lr;
}

// =============================================================================
// Function: func_080D6F5C @ 0x080D6F5C
// =============================================================================
undefined4 func_080D6F5C(undefined1 *param_1)

{
  undefined4 in_lr;
  
  func_080D6F3C(param_1 + 0x40);
  func_080D6F3C(param_1 + 4);
  *param_1 = 0;
  param_1[1] = 1;
  return in_lr;
}

// =============================================================================
// Function: func_080D6F7C @ 0x080D6F7C
// =============================================================================
undefined4 func_080D6F7C(undefined1 *param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = param_3;
  if ((param_2 < 0x40) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x3f < param_3)) {
      func_0x080d6e98();
    }
    else {
      if (param_2 < 0x20) {
        uStack_10 = 0x20 - param_2;
        puVar3 = &uStack_14;
        if (0x20 - param_2 < param_3) {
          puVar3 = &uStack_10;
        }
        *(uint *)(param_1 + 4) =
             *(uint *)(param_1 + 4) | (1 << (*puVar3 & 0xff)) + -1 << (param_2 & 0xff);
      }
      if (0x20 < param_2 + param_3) {
        uVar2 = 0;
        if (0x1f < param_2) {
          uVar2 = param_2 - 0x20;
        }
        *(uint *)(param_1 + 8) =
             *(uint *)(param_1 + 8) |
             (1 << (((param_2 + param_3) - 0x20) - uVar2 & 0xff)) + -1 << (uVar2 & 0xff);
      }
      uVar1 = 0;
      if ((*(int *)(param_1 + 4) == -1) && (*(int *)(param_1 + 8) == -1)) {
        uVar1 = 1;
      }
      *param_1 = uVar1;
      param_1[1] = 0;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7014 @ 0x080D7014
// =============================================================================
undefined4 func_080D7014(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = param_3;
  if ((param_2 < 0x80) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x7f < param_3)) {
      func_0x080d6eac(param_1);
    }
    else {
      if (param_2 < 0x40) {
        uStack_10 = 0x40 - param_2;
        puVar3 = &uStack_14;
        if (0x40 - param_2 < param_3) {
          puVar3 = &uStack_10;
        }
        func_080D6F7C(param_1 + 4,param_2,*puVar3);
      }
      if (0x40 < param_2 + uStack_14) {
        iVar2 = 0;
        if (0x3f < param_2) {
          iVar2 = param_2 - 0x40;
        }
        func_080D6F7C(param_1 + 0x10,iVar2,((param_2 + uStack_14) - 0x40) - iVar2);
      }
      bVar1 = 0;
      if (param_1[4] != 0) {
        bVar1 = (byte)(-(uint)param_1[0x10] >> 0x1f);
      }
      *param_1 = bVar1;
      param_1[1] = 0;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7094 @ 0x080D7094
// =============================================================================
undefined4 func_080D7094(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = param_3;
  if ((param_2 < 0x100) && (param_3 != 0)) {
    if ((param_2 == 0) && (0xff < param_3)) {
      func_080D6ECC(param_1);
    }
    else {
      if (param_2 < 0x80) {
        uStack_10 = 0x80 - param_2;
        puVar3 = &uStack_14;
        if (0x80 - param_2 < param_3) {
          puVar3 = &uStack_10;
        }
        func_080D7014(param_1 + 4,param_2,*puVar3);
      }
      if (0x80 < param_2 + uStack_14) {
        iVar2 = 0;
        if (0x7f < param_2) {
          iVar2 = param_2 - 0x80;
        }
        func_080D7014(param_1 + 0x20,iVar2,((param_2 + uStack_14) - 0x80) - iVar2);
      }
      bVar1 = 0;
      if (param_1[4] != 0) {
        bVar1 = (byte)(-(uint)param_1[0x20] >> 0x1f);
      }
      *param_1 = bVar1;
      param_1[1] = 0;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7118 @ 0x080D7118
// =============================================================================
undefined4 func_080D7118(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = param_3;
  if ((param_2 <= _DAT_080d7140) && (param_3 != 0)) {
    if ((param_2 == 0) && (_DAT_080d7140 < param_3)) {
      func_080D6EEC(param_1);
    }
    else {
      if (param_2 < 0x100) {
        uStack_10 = 0x100 - param_2;
        puVar3 = &uStack_14;
        if (0x100 - param_2 < param_3) {
          puVar3 = &uStack_10;
        }
        func_080D7094(param_1 + 4,param_2,*puVar3);
      }
      if (0x100 < param_2 + uStack_14) {
        iVar2 = 0;
        if (0xff < param_2) {
          iVar2 = param_2 + _DAT_080d71a8;
        }
        func_080D7094(param_1 + 0x40,iVar2,((param_2 + uStack_14) - 0x100) - iVar2);
      }
      bVar1 = 0;
      if (param_1[4] != 0) {
        bVar1 = (byte)(-(uint)param_1[0x40] >> 0x1f);
      }
      *param_1 = bVar1;
      param_1[1] = 0;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D71AC @ 0x080D71AC
// =============================================================================
undefined4 func_080D71AC(undefined1 *param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = param_3;
  if ((param_2 < 0x40) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x3f < param_3)) {
      func_0x080d6f0c();
    }
    else {
      if (param_2 < 0x20) {
        uStack_10 = 0x20 - param_2;
        puVar3 = &uStack_14;
        if (0x20 - param_2 < param_3) {
          puVar3 = &uStack_10;
        }
        *(uint *)(param_1 + 4) =
             *(uint *)(param_1 + 4) & ~((1 << (*puVar3 & 0xff)) + -1 << (param_2 & 0xff));
      }
      if (0x20 < param_2 + param_3) {
        uVar2 = 0;
        if (0x1f < param_2) {
          uVar2 = param_2 - 0x20;
        }
        *(uint *)(param_1 + 8) =
             *(uint *)(param_1 + 8) &
             ~((1 << (((param_2 + param_3) - 0x20) - uVar2 & 0xff)) + -1 << (uVar2 & 0xff));
      }
      *param_1 = 0;
      uVar1 = 0;
      if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) == 0)) {
        uVar1 = 1;
      }
      param_1[1] = uVar1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7240 @ 0x080D7240
// =============================================================================
undefined4 func_080D7240(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_18;
  uint uStack_14;
  
  uStack_18 = param_3;
  if ((param_2 < 0x80) && (param_3 != 0)) {
    if ((param_2 == 0) && (0x7f < param_3)) {
      func_0x080d6f1c(param_1);
    }
    else {
      if (param_2 < 0x40) {
        uStack_14 = 0x40 - param_2;
        puVar3 = &uStack_18;
        if (0x40 - param_2 < param_3) {
          puVar3 = &uStack_14;
        }
        func_080D71AC(param_1 + 4,param_2,*puVar3);
      }
      if (0x40 < param_2 + uStack_18) {
        iVar2 = 0;
        if (0x3f < param_2) {
          iVar2 = param_2 - 0x40;
        }
        func_080D71AC(param_1 + 0x10,iVar2,((param_2 + uStack_18) - 0x40) - iVar2);
      }
      *param_1 = 0;
      bVar1 = 0;
      if (param_1[5] != '\0') {
        bVar1 = (byte)(-(uint)(byte)param_1[0x11] >> 0x1f);
      }
      param_1[1] = bVar1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D72C4 @ 0x080D72C4
// =============================================================================
undefined4 func_080D72C4(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_18;
  uint uStack_14;
  
  uStack_18 = param_3;
  if ((param_2 < 0x100) && (param_3 != 0)) {
    if ((param_2 == 0) && (0xff < param_3)) {
      func_080D6F3C(param_1);
    }
    else {
      if (param_2 < 0x80) {
        uStack_14 = 0x80 - param_2;
        puVar3 = &uStack_18;
        if (0x80 - param_2 < param_3) {
          puVar3 = &uStack_14;
        }
        func_080D7240(param_1 + 4,param_2,*puVar3);
      }
      if (0x80 < param_2 + uStack_18) {
        iVar2 = 0;
        if (0x7f < param_2) {
          iVar2 = param_2 - 0x80;
        }
        func_080D7240(param_1 + 0x20,iVar2,((param_2 + uStack_18) - 0x80) - iVar2);
      }
      *param_1 = 0;
      bVar1 = 0;
      if (param_1[5] != '\0') {
        bVar1 = (byte)(-(uint)(byte)param_1[0x21] >> 0x1f);
      }
      param_1[1] = bVar1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D734C @ 0x080D734C
// =============================================================================
undefined4 func_080D734C(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  uint uStack_18;
  uint uStack_14;
  
  uStack_18 = param_3;
  if ((param_2 <= _DAT_080d7374) && (param_3 != 0)) {
    if ((param_2 == 0) && (_DAT_080d7374 < param_3)) {
      func_080D6F5C(param_1);
    }
    else {
      if (param_2 < 0x100) {
        uStack_14 = 0x100 - param_2;
        puVar3 = &uStack_18;
        if (0x100 - param_2 < param_3) {
          puVar3 = &uStack_14;
        }
        func_080D72C4(param_1 + 4,param_2,*puVar3);
      }
      if (0x100 < param_2 + uStack_18) {
        iVar2 = 0;
        if (0xff < param_2) {
          iVar2 = param_2 + _DAT_080d73e0;
        }
        func_080D72C4(param_1 + 0x40,iVar2,((param_2 + uStack_18) - 0x100) - iVar2);
      }
      *param_1 = 0;
      bVar1 = 0;
      if (param_1[5] != '\0') {
        bVar1 = (byte)(-(uint)(byte)param_1[0x41] >> 0x1f);
      }
      param_1[1] = bVar1;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D73E4 @ 0x080D73E4
// =============================================================================
undefined8 func_080D73E4(int *param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (param_2 < 6) {
    iVar4 = 0;
    piVar3 = param_1;
    do {
      piVar3 = piVar3 + 1;
      if ((*piVar3 != -1) && (uVar1 = func_080077DC(piVar3,param_2), uVar1 < 0x20)) {
        *(undefined1 *)((int)param_1 + 1) = 0;
        uVar2 = 0;
        if ((param_1[1] == -1) && (param_1[2] == -1)) {
          uVar2 = 1;
        }
        *(undefined1 *)param_1 = uVar2;
        uVar1 = iVar4 << 5 | uVar1;
        goto LAB_080d7474;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  else if ((param_2 == 6) && (*(char *)((int)param_1 + 1) != '\0')) {
    func_0x080d6e98(param_1);
    uVar1 = 0;
    goto LAB_080d7474;
  }
  uVar1 = 0x40;
LAB_080d7474:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080D7480 @ 0x080D7480
// =============================================================================
undefined8 func_080D7480(byte *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (param_2 < 7) {
    iVar3 = 0;
    pbVar4 = param_1 + 4;
    do {
      if ((*pbVar4 == 0) && (uVar1 = func_080D73E4(pbVar4,param_2), uVar1 < 0x40)) {
        param_1[1] = 0;
        bVar2 = 0;
        if (param_1[4] != 0) {
          bVar2 = (byte)(-(uint)param_1[0x10] >> 0x1f);
        }
        *param_1 = bVar2;
        uVar1 = iVar3 << 6 | uVar1;
        goto LAB_080d74e8;
      }
      pbVar4 = pbVar4 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  else if ((param_2 == 7) && (param_1[1] != 0)) {
    func_0x080d6eac(param_1);
    uVar1 = 0;
    goto LAB_080d74e8;
  }
  uVar1 = 0x80;
LAB_080d74e8:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080D74F0 @ 0x080D74F0
// =============================================================================
undefined8 func_080D74F0(byte *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (param_2 < 8) {
    iVar3 = 0;
    pbVar4 = param_1 + 4;
    do {
      if ((*pbVar4 == 0) && (uVar1 = func_080D7480(pbVar4,param_2), uVar1 < 0x80)) {
        param_1[1] = 0;
        bVar2 = 0;
        if (param_1[4] != 0) {
          bVar2 = (byte)(-(uint)param_1[0x20] >> 0x1f);
        }
        *param_1 = bVar2;
        uVar1 = iVar3 << 7 | uVar1;
        goto LAB_080d755e;
      }
      pbVar4 = pbVar4 + 0x1c;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  else if ((param_2 == 8) && (param_1[1] != 0)) {
    func_080D6ECC(param_1);
    uVar1 = 0;
    goto LAB_080d755e;
  }
  uVar1 = 0x100;
LAB_080d755e:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080D7568 @ 0x080D7568
// =============================================================================
undefined8 func_080D7568(byte *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (param_2 < 9) {
    iVar3 = 0;
    pbVar4 = param_1 + 4;
    do {
      if ((*pbVar4 == 0) && (uVar1 = func_080D74F0(pbVar4,param_2), uVar1 < 0x100)) {
        param_1[1] = 0;
        bVar2 = 0;
        if (param_1[4] != 0) {
          bVar2 = (byte)(-(uint)param_1[0x40] >> 0x1f);
        }
        *param_1 = bVar2;
        uVar1 = iVar3 << 8 | uVar1;
        goto LAB_080d75d6;
      }
      pbVar4 = pbVar4 + 0x3c;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  else if ((param_2 == 9) && (param_1[1] != 0)) {
    func_080D6EEC(param_1);
    uVar1 = 0;
    goto LAB_080d75d6;
  }
  uVar1 = 0x200;
LAB_080d75d6:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080D75E0 @ 0x080D75E0
// =============================================================================
undefined4 func_080D75E0(undefined1 *param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 in_lr;
  
  if (param_3 < 6) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x20) != 0) {
      puVar2 = param_1 + 8;
    }
    func_08007844(puVar2);
    *param_1 = 0;
    uVar1 = 0;
    if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) == 0)) {
      uVar1 = 1;
    }
    param_1[1] = uVar1;
  }
  else if (param_3 == 6) {
    func_0x080d6f0c(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7634 @ 0x080D7634
// =============================================================================
undefined4 func_080D7634(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 in_lr;
  
  if (param_3 < 7) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x40) != 0) {
      puVar2 = param_1 + 0x10;
    }
    func_080D75E0(puVar2);
    *param_1 = 0;
    bVar1 = 0;
    if (param_1[5] != '\0') {
      bVar1 = (byte)(-(uint)(byte)param_1[0x11] >> 0x1f);
    }
    param_1[1] = bVar1;
  }
  else if (param_3 == 7) {
    func_0x080d6f1c(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7678 @ 0x080D7678
// =============================================================================
undefined4 func_080D7678(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 in_lr;
  
  if (param_3 < 8) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x80) != 0) {
      puVar2 = param_1 + 0x20;
    }
    func_080D7634(puVar2);
    *param_1 = 0;
    bVar1 = 0;
    if (param_1[5] != '\0') {
      bVar1 = (byte)(-(uint)(byte)param_1[0x21] >> 0x1f);
    }
    param_1[1] = bVar1;
  }
  else if (param_3 == 8) {
    func_080D6F3C(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D76C0 @ 0x080D76C0
// =============================================================================
undefined4 func_080D76C0(undefined1 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined4 in_lr;
  
  if (param_3 < 9) {
    puVar2 = param_1 + 4;
    if ((param_2 & 0x100) != 0) {
      puVar2 = param_1 + 0x40;
    }
    func_080D7678(puVar2);
    *param_1 = 0;
    bVar1 = 0;
    if (param_1[5] != '\0') {
      bVar1 = (byte)(-(uint)(byte)param_1[0x41] >> 0x1f);
    }
    param_1[1] = bVar1;
  }
  else if (param_3 == 9) {
    func_080D6F5C(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D770C @ 0x080D770C
// =============================================================================
undefined8 func_080D770C(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)(param_1 + param_2 * 8 + -8);
  *piVar1 = param_3;
  while (piVar1 != (int *)param_1) {
    piVar1[-2] = (int)piVar1;
    piVar1 = piVar1 + -2;
  }
  return CONCAT44(in_lr,piVar1);
}

// =============================================================================
// Function: func_080D772C @ 0x080D772C
// =============================================================================
undefined4 func_080D772C(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *param_1;
  if ((uint)(param_1[3] - iVar5 >> 3) < param_2) {
    iVar6 = param_1[1];
    iVar1 = iVar6 - iVar5;
    if (iVar5 == 0) {
      if (param_2 == 0) {
        iVar4 = 0;
        iVar7 = 0;
      }
      else {
        iVar7 = param_2 * 8;
        iVar4 = malloc(iVar7);
        if (iVar4 == 0) {
          iVar4 = func_080D3BC0(iVar7);
        }
      }
    }
    else {
      if (param_2 == 0) {
        iVar2 = 0;
        iVar7 = 0;
        iVar4 = iVar2;
      }
      else {
        iVar7 = param_2 * 8;
        iVar2 = malloc(iVar7);
        iVar4 = iVar2;
        if (iVar2 == 0) {
          iVar2 = func_080D3BC0(iVar7);
          iVar4 = iVar2;
        }
      }
      for (; iVar5 != iVar6; iVar5 = iVar5 + 8) {
        if (iVar2 != 0) {
          func_08007874(iVar2);
          uVar3 = func_08007CD8(iVar2,*(undefined4 *)(iVar5 + 4));
          *(undefined4 *)(iVar2 + 4) = uVar3;
        }
        iVar2 = iVar2 + 8;
      }
      iVar6 = param_1[1];
      for (iVar5 = *param_1; iVar5 != iVar6; iVar5 = iVar5 + 8) {
        func_08007C28(iVar5,*(undefined4 *)(iVar5 + 4));
        func_080079E8(iVar5,2);
      }
      if (*param_1 != 0) {
        free();
      }
    }
    *param_1 = iVar4;
    param_1[1] = (iVar1 >> 3) * 8 + iVar4;
    param_1[3] = iVar7 + iVar4;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D780C @ 0x080D780C
// =============================================================================
longlong func_080D780C(int param_1)

{
  uint in_lr;
  
  func_080096F0(*(undefined4 *)(param_1 + 0xc));
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_080D781C @ 0x080D781C
// =============================================================================
longlong func_080D781C(int param_1)

{
  uint in_lr;
  
  func_08009864(*(undefined4 *)(param_1 + 0xc));
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_080D782C @ 0x080D782C
// =============================================================================
longlong func_080D782C(int param_1)

{
  int iVar1;
  int *piVar2;
  uint in_lr;
  
  piVar2 = *(int **)(param_1 + 0xc);
  iVar1 = *piVar2;
  if (iVar1 != piVar2[1]) {
    func_08008FE4(iVar1,iVar1 + (piVar2[1] - iVar1 >> 4) * 0x10);
    for (iVar1 = *piVar2; iVar1 != piVar2[1]; iVar1 = iVar1 + 0x10) {
    }
    piVar2[1] = *piVar2;
  }
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_080D7868 @ 0x080D7868
// =============================================================================
undefined4 func_080D7868(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080D7874 @ 0x080D7874
// =============================================================================
undefined4 func_080D7874(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080D7880 @ 0x080D7880
// =============================================================================
undefined4 func_080D7880(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080D788C @ 0x080D788C
// =============================================================================
undefined4 func_080D788C(undefined4 param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = Interrupt_WaitForVBlank(1);
  func_08009984(param_1);
  if ((uVar1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D78BC @ 0x080D78BC
// =============================================================================
undefined4 func_080D78BC(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 8) = _DAT_080d78dc;
  func_0800956C(param_1);
  func_0x080098dc(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080D78E0 @ 0x080D78E0
// =============================================================================
undefined4 func_080D78E0(void)

{
  undefined4 in_lr;
  
  func_0x080d3910(*(int *)*_ASSET_BLOCK_080D78F4,
                  *(undefined4 *)(*(int *)(*(int *)*_ASSET_BLOCK_080D78F4 + 8) + 8));
  return in_lr;
}

// =============================================================================
// Function: func_080D7990 @ 0x080D7990
// =============================================================================
undefined4 func_080D7990(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = Interrupt_WaitForVBlank(1);
  func_08009940(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D79F8 @ 0x080D79F8
// =============================================================================
undefined4 func_080D79F8(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = Interrupt_WaitForVBlank(1);
  func_08009968(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7A34 @ 0x080D7A34
// =============================================================================
undefined4 func_080D7A34(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = Interrupt_WaitForVBlank(1);
  func_0x080099b0(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7A70 @ 0x080D7A70
// =============================================================================
undefined4 func_080D7A70(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = Interrupt_WaitForVBlank(1);
  func_0x080099d4(param_1,param_2);
  if ((uVar1 & 1) != 0) {
    Interrupt_EnableHBlank();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7AAC @ 0x080D7AAC
// =============================================================================
undefined4 func_080D7AAC(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  param_1[1] = _DAT_080d7acc;
  *_DAT_080d7ad0 = *param_1;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7B04 @ 0x080D7B04
// =============================================================================
undefined4 func_080D7B04(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  param_1[1] = _DAT_080d7b24;
  *_DAT_080d7b28 = *param_1;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7B2C @ 0x080D7B2C
// =============================================================================
undefined4 func_080D7B2C(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080D7B38 @ 0x080D7B38
// =============================================================================
undefined4 func_080D7B38(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080D7B44 @ 0x080D7B44
// =============================================================================
undefined4 func_080D7B44(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080D7B50 @ 0x080D7B50
// =============================================================================
undefined8 func_080D7B50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080D7C40();
  *(byte *)(param_1 + 0x24) =
       *(byte *)(param_1 + 0x24) & 0xc0 | *(byte *)(param_2 + 0x24) & 1 |
       *(byte *)(param_2 + 0x24) & 0x3e;
  *(ushort *)(param_1 + 0x24) =
       (ushort)_DAT_080d7bc0 & *(ushort *)(param_1 + 0x24) | *(ushort *)(param_2 + 0x24) & 0x7c0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xf8 | *(byte *)(param_2 + 0x34) & 7;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D7BC4 @ 0x080D7BC4
// =============================================================================
undefined8 func_080D7BC4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080D7C40();
  *(byte *)(param_1 + 0x24) =
       *(byte *)(param_1 + 0x24) & 0xc0 | *(byte *)(param_2 + 0x24) & 1 |
       *(byte *)(param_2 + 0x24) & 0x3e;
  *(ushort *)(param_1 + 0x24) =
       (ushort)_DAT_080d7c3c & *(ushort *)(param_1 + 0x24) | *(ushort *)(param_2 + 0x24) & 0x7c0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfe | *(byte *)(param_2 + 0x34) & 1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D7C40 @ 0x080D7C40
// =============================================================================
undefined8 func_080D7C40(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  func_080D684C();
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  uVar2 = (ushort)_DAT_080d7cf4;
  *(ushort *)(param_1 + 0x1e) =
       uVar2 & *(ushort *)(param_1 + 0x1e) | *(ushort *)(param_2 + 0x1e) & 0x1ff;
  uVar1 = *(ushort *)(param_2 + 0x20);
  uVar3 = (ushort)_DAT_080d7cf8;
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) & 1 | *(byte *)(param_2 + 0x1f) & 0xfe;
  *(ushort *)(param_1 + 0x20) = uVar2 & *(ushort *)(param_1 + 0x20) | uVar1 & uVar3 & uVar3;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D7CFC @ 0x080D7CFC
// =============================================================================
undefined8 func_080D7CFC(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  iVar1 = param_2[1];
  piVar5 = param_2 + 2;
  piVar3 = param_2;
  for (iVar4 = (int)param_2 + ((*param_2 * 4 + 4) - (int)piVar5) >> 2; 0 < iVar4; iVar4 = iVar4 + -1
      ) {
    piVar3 = piVar3 + 1;
    iVar2 = *piVar5;
    piVar5 = piVar5 + 1;
    *piVar3 = iVar2;
  }
  param_2[*param_2] = param_3;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D7D40 @ 0x080D7D40
// =============================================================================
undefined8 func_080D7D40(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  iVar1 = param_2[*param_2];
  piVar2 = param_2 + *param_2 + 1;
  piVar4 = piVar2 + -1;
  for (iVar3 = (int)piVar4 - (int)(param_2 + 1) >> 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    piVar2 = piVar2 + -1;
    piVar4 = piVar4 + -1;
    *piVar2 = *piVar4;
  }
  param_2[1] = param_3;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D7D88 @ 0x080D7D88
// =============================================================================
undefined8 func_080D7D88(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  
  piVar2 = param_2 + 1;
  memcpy(auStack_20,piVar2,2);
  iVar3 = (int)param_2 + 6;
  for (iVar1 = *param_2 * 2 + -2 >> 1; 0 < iVar1; iVar1 = iVar1 + -1) {
    memcpy(piVar2,iVar3,2);
    iVar3 = iVar3 + 2;
    piVar2 = (int *)((int)piVar2 + 2);
  }
  memcpy((int)param_2 + *param_2 * 2 + 2,param_3,2);
  memcpy(param_1,auStack_20,2);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D7DF4 @ 0x080D7DF4
// =============================================================================
undefined8 func_080D7DF4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  
  memcpy(auStack_20,(int)param_2 + *param_2 * 2 + 2,2);
  iVar1 = (int)param_2 + *param_2 * 2 + 4;
  iVar3 = iVar1 + -2;
  for (iVar2 = iVar3 - (int)(param_2 + 1) >> 1; 0 < iVar2; iVar2 = iVar2 + -1) {
    iVar1 = iVar1 + -2;
    iVar3 = iVar3 + -2;
    memcpy(iVar1,iVar3,2);
  }
  memcpy(param_2 + 1,param_3,2);
  memcpy(param_1,auStack_20,2);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D7E64 @ 0x080D7E64
// =============================================================================
undefined4 func_080D7E64(int *param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_lr;
  
  for (piVar1 = param_1 + 0x57; piVar1 != param_1 + 0x56 + param_1[0x56] * 2 + 1;
      piVar1 = piVar1 + 2) {
  }
  piVar2 = param_1 + 1;
  for (piVar1 = param_1 + 6; piVar1 != param_1 + param_1[5] * 2 + 6; piVar1 = piVar1 + 2) {
  }
  for (; piVar2 != param_1 + *param_1 * 2 + 1; piVar2 = piVar2 + 2) {
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7ECC @ 0x080D7ECC
// =============================================================================
undefined8 func_080D7ECC(ushort *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = param_2 - (int)param_1 >> 3;
  if (0 < iVar1) {
    do {
      iVar2 = iVar1 >> 1;
      if ((uint)param_1[iVar2 * 4] <= *param_3) {
        param_1 = param_1 + iVar2 * 4 + 4;
        iVar2 = (iVar1 - iVar2) + -1;
      }
      iVar1 = iVar2;
    } while (0 < iVar2);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080D7F08 @ 0x080D7F08
// =============================================================================
undefined4 func_080D7F08(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 1;
  do {
    iVar1 = func_0x080d3914(*(int **)(param_1 + 0xa8),uVar2,
                            *(undefined4 *)(**(int **)(param_1 + 0xa8) + 0x40));
    if (iVar1 != 0) {
      func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x3c));
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x24);
  return in_lr;
}

// =============================================================================
// Function: func_080D7F3C @ 0x080D7F3C
// =============================================================================
undefined4 func_080D7F3C(int param_1)

{
  undefined4 in_lr;
  
  func_0x080d3910(*(int **)(param_1 + 0xa8),*(undefined4 *)(**(int **)(param_1 + 0xa8) + 0x124));
  *(undefined4 *)(param_1 + 0x9c) = 2;
  return in_lr;
}

// =============================================================================
// Function: func_080D7F60 @ 0x080D7F60
// =============================================================================
undefined4 func_080D7F60(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xac) != 0) {
    func_08050E8C();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7F74 @ 0x080D7F74
// =============================================================================
undefined4 func_080D7F74(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xac) != 0) {
    func_08050E5C();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7F88 @ 0x080D7F88
// =============================================================================
undefined4 func_080D7F88(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xac) != 0) {
    func_08050E74();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080D7F9C @ 0x080D7F9C
// =============================================================================
undefined4
func_080D7F9C(int param_1,int param_2,int param_3,uint param_4,uint param_5,undefined1 param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined2 uStack_38;
  undefined2 uStack_36;
  ushort uStack_34;
  undefined1 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  ushort uStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_28 = param_1;
  iStack_24 = param_2;
  if (param_2 < 0x4a) {
    iVar4 = func_0x080d3914(*(int **)(param_1 + 0xa8),param_2,
                            *(undefined4 *)(**(int **)(param_1 + 0xa8) + 0x40));
    if (iVar4 != 0) {
      uVar3 = (ushort)_DAT_080d8050;
      uVar2 = (ushort)_DAT_080d8054;
      uVar1 = uVar2 & uStack_30 | (ushort)param_3 & uVar3;
      uStack_30._1_1_ = (byte)(uVar1 >> 8);
      uStack_30 = CONCAT11(uStack_30._1_1_ & 3 | (byte)((param_4 & 0x3f) << 2),(char)uVar1);
      uVar1 = uVar2 & uStack_2e | (ushort)((param_4 & 0xffff) >> 6) & uVar3;
      uStack_2e._1_1_ = (byte)(uVar1 >> 8);
      uStack_2e = CONCAT11(uStack_2e._1_1_ & 3 | (byte)((param_5 & 0x3f) << 2),(char)uVar1);
      uStack_2c = uVar2 & uStack_2c | (ushort)((param_5 & 0xffff) >> 6) & uVar3;
      memcpy(&uStack_38,&uStack_30,6);
      uStack_32 = param_6;
      func_0803211C(iVar4,&uStack_38);
      func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x20));
    }
  }
  else {
    iVar4 = func_0x080d3914(*(int **)(param_1 + 0xa8),param_2,
                            *(undefined4 *)(**(int **)(param_1 + 0xa8) + 0x40));
    if (iVar4 != 0) {
      uVar3 = (ushort)_DAT_080d8130;
      uVar2 = (ushort)_DAT_080d8134;
      uVar1 = uVar2 & uStack_38 | (ushort)param_3 & uVar3;
      uStack_38._1_1_ = (byte)(uVar1 >> 8);
      uStack_38 = CONCAT11(uStack_38._1_1_ & 3 | (byte)((param_4 & 0x3f) << 2),(char)uVar1);
      uVar1 = uVar2 & uStack_36 | (ushort)((param_4 & 0xffff) >> 6) & uVar3;
      uStack_36._1_1_ = (byte)(uVar1 >> 8);
      uStack_36 = CONCAT11(uStack_36._1_1_ & 3 | (byte)((param_5 & 0x3f) << 2),(char)uVar1);
      uStack_34 = uVar2 & uStack_34 | (ushort)((param_5 & 0xffff) >> 6) & uVar3;
      func_0801FE78(iVar4,uStack_38 & 0x3ff,
                    (int)(short)((ushort)((uStack_36 & _DAT_080d8130) << 6) |
                                (ushort)(param_4 & 0x3f)),
                    (int)(short)((ushort)((uStack_34 & _DAT_080d8130) << 6) |
                                (ushort)(param_5 & 0x3f)));
      func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x20));
    }
  }
  if (iStack_24 == 0) {
    if (param_3 == 0x19) {
      func_080A0A90(*(int *)(iStack_28 + 0x8c) + _DAT_080d8138);
    }
    iVar4 = 0;
    if (param_3 - 0x35U < 0xff) {
      iVar4 = param_3 + -0x34;
    }
    else if ((uint)(_DAT_080d816c + param_3) < 0xff) {
      iVar4 = _DAT_080d8170 + param_3;
    }
    if (0 < iVar4) {
      func_0800EECC(*(int *)(iStack_28 + 0x8c) + _DAT_080d8174);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DB0EC @ 0x080DB0EC
// =============================================================================
undefined4 func_080DB0EC(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  param_1[0x3d] = _DAT_080db1e0;
  func_08000608(param_1[0x3c]);
  if (param_1[0x34] != 0) {
    free();
  }
  iVar1 = param_1[0x2e];
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  iVar1 = param_1[0x2d];
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  piVar2 = (int *)param_1[0x2c];
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  if (param_1[0x2b] != 0) {
    func_08050D0C(param_1[0x2b],3);
  }
  piVar2 = (int *)param_1[0x2a];
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = (int *)param_1[0x29];
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  if (param_1[0x28] != 0) {
    func_08009324(param_1[0x28],3);
  }
  func_0x080098dc(param_1 + 0x1b,2);
  func_08008A68(param_1 + 0x1a,2);
  for (iVar1 = *param_1; iVar1 != param_1[1]; iVar1 = iVar1 + 0x10) {
  }
  if (*param_1 != 0) {
    free();
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DB1E4 @ 0x080DB1E4
// =============================================================================
undefined8 func_080DB1E4(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 auStack_20 [3];
  
  iVar1 = *(int *)(param_2 + 0xc);
  auStack_20[0] = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  uVar2 = func_080005D4(8);
  uVar2 = func_0807865C(uVar2,*(undefined4 *)(param_2 + 4),auStack_20,iVar1 == 2);
  *param_1 = uVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB238 @ 0x080DB238
// =============================================================================
undefined8 func_080DB238(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  
  uStack_34 = 0x2a;
  iVar1 = param_2[4];
  if (iVar1 == 1) {
    uStack_34 = 5;
  }
  else {
    puVar3 = param_2;
    if (1 < iVar1) {
      if (iVar1 == 2) {
        uStack_30 = CONCAT31(uStack_30._1_3_,*(char *)(param_2 + 1));
        puVar3 = &uStack_34;
        if (*(char *)(param_2 + 1) != '\0') {
          uStack_30 = uStack_30 & _DAT_080db2e4 | (*(ushort *)((int)param_2 + 6) & 0x3ff) << 8;
          uStack_2c = CONCAT22((short)((uint)param_2[2] >> 10),
                               (ushort)((*(ushort *)(param_2 + 2) & _DAT_080db2e8) << 6) |
                               (ushort)(*(byte *)((int)param_2 + 7) >> 2));
          puVar3 = &uStack_34;
        }
      }
      goto LAB_080db2ae;
    }
    if (iVar1 != 0) goto LAB_080db2ae;
    uStack_34 = 1;
  }
  uStack_30 = uStack_24;
  uStack_2c = uStack_20;
  puVar3 = &uStack_28;
  uStack_28 = uStack_34;
LAB_080db2ae:
  uVar2 = func_080005D4(8,puVar3);
  uVar2 = func_08011DC4(uVar2,param_2[3],&uStack_34);
  *param_1 = uVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB2EC @ 0x080DB2EC
// =============================================================================
undefined4 func_080DB2EC(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB314 @ 0x080DB314
// =============================================================================
undefined4 func_080DB314(void)

{
  undefined4 in_lr;
  
  Scene_Destructor();
  return in_lr;
}

// =============================================================================
// Function: func_080DB320 @ 0x080DB320
// =============================================================================
undefined8 func_080DB320(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)func_080005D4(0xc);
  uVar3 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *puVar1 = _DAT_080db368;
  puVar1[1] = uVar3;
  puVar1[2] = uVar2;
  *param_1 = puVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB36C @ 0x080DB36C
// =============================================================================
undefined4 func_080DB36C(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB394 @ 0x080DB394
// =============================================================================
undefined8 func_080DB394(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0805FCD0(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB3DC @ 0x080DB3DC
// =============================================================================
undefined4 func_080DB3DC(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB404 @ 0x080DB404
// =============================================================================
undefined8 func_080DB404(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(8);
  uVar1 = func_0806D8C8(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB44C @ 0x080DB44C
// =============================================================================
undefined4 func_080DB44C(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB474 @ 0x080DB474
// =============================================================================
undefined8 func_080DB474(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  puVar2 = (undefined4 *)func_080005D4(0x14);
  uVar5 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = *(undefined1 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  *puVar2 = _DAT_080db4c4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  *(undefined1 *)(puVar2 + 4) = uVar1;
  *param_1 = puVar2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB4C8 @ 0x080DB4C8
// =============================================================================
undefined4 func_080DB4C8(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB4F0 @ 0x080DB4F0
// =============================================================================
undefined8 func_080DB4F0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)func_080005D4(0x10);
  uVar4 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *puVar1 = _DAT_080db53c;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  *param_1 = puVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB540 @ 0x080DB540
// =============================================================================
undefined4 func_080DB540(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB568 @ 0x080DB568
// =============================================================================
undefined8 func_080DB568(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)func_080005D4(0x10);
  uVar4 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *puVar1 = _DAT_080db5b4;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  *param_1 = puVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB5B8 @ 0x080DB5B8
// =============================================================================
undefined4 func_080DB5B8(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB5E0 @ 0x080DB5E0
// =============================================================================
undefined8 func_080DB5E0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)func_080005D4(0x10);
  uVar4 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *puVar1 = _DAT_080db62c;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  *param_1 = puVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB630 @ 0x080DB630
// =============================================================================
undefined4 func_080DB630(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB658 @ 0x080DB658
// =============================================================================
undefined8 func_080DB658(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)func_080005D4(0xc);
  uVar3 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *puVar1 = _DAT_080db6a0;
  puVar1[1] = uVar3;
  puVar1[2] = uVar2;
  *param_1 = puVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB6A4 @ 0x080DB6A4
// =============================================================================
undefined4 func_080DB6A4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB6CC @ 0x080DB6CC
// =============================================================================
undefined8 func_080DB6CC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_080A3744(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB714 @ 0x080DB714
// =============================================================================
undefined4 func_080DB714(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB73C @ 0x080DB73C
// =============================================================================
undefined8 func_080DB73C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0808AB38(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB784 @ 0x080DB784
// =============================================================================
undefined4 func_080DB784(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB7AC @ 0x080DB7AC
// =============================================================================
undefined8 func_080DB7AC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0808ECD8(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB7F4 @ 0x080DB7F4
// =============================================================================
undefined4 func_080DB7F4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB81C @ 0x080DB81C
// =============================================================================
undefined8 func_080DB81C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_08090E54(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB864 @ 0x080DB864
// =============================================================================
undefined4 func_080DB864(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB88C @ 0x080DB88C
// =============================================================================
undefined8 func_080DB88C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0808C56C(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB8D4 @ 0x080DB8D4
// =============================================================================
undefined4 func_080DB8D4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB8FC @ 0x080DB8FC
// =============================================================================
undefined8 func_080DB8FC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0805218C(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB944 @ 0x080DB944
// =============================================================================
undefined4 func_080DB944(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB96C @ 0x080DB96C
// =============================================================================
undefined8 func_080DB96C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_08057DD8(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined1 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DB9B4 @ 0x080DB9B4
// =============================================================================
undefined4 func_080DB9B4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DB9DC @ 0x080DB9DC
// =============================================================================
undefined8 func_080DB9DC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0805E624(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBA24 @ 0x080DBA24
// =============================================================================
undefined4 func_080DBA24(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBA4C @ 0x080DBA4C
// =============================================================================
undefined8 func_080DBA4C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0805CEB8(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined1 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBA94 @ 0x080DBA94
// =============================================================================
undefined4 func_080DBA94(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBABC @ 0x080DBABC
// =============================================================================
undefined8 func_080DBABC(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0809A4D4(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined1 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBB04 @ 0x080DBB04
// =============================================================================
undefined4 func_080DBB04(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBB2C @ 0x080DBB2C
// =============================================================================
undefined8 func_080DBB2C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0807B038(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBB74 @ 0x080DBB74
// =============================================================================
undefined4 func_080DBB74(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBB9C @ 0x080DBB9C
// =============================================================================
undefined8 func_080DBB9C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_08081A40(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBBE4 @ 0x080DBBE4
// =============================================================================
undefined4 func_080DBBE4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBC0C @ 0x080DBC0C
// =============================================================================
undefined8 func_080DBC0C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_18 [3];
  
  auStack_18[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_08077C40(uVar1,auStack_18);
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBC50 @ 0x080DBC50
// =============================================================================
undefined4 func_080DBC50(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBC78 @ 0x080DBC78
// =============================================================================
undefined8 func_080DBC78(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_080931B0(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBCC0 @ 0x080DBCC0
// =============================================================================
undefined4 func_080DBCC0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBCE8 @ 0x080DBCE8
// =============================================================================
undefined8 func_080DBCE8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0x14);
  uVar1 = func_08088168(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBD30 @ 0x080DBD30
// =============================================================================
undefined4 func_080DBD30(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBD58 @ 0x080DBD58
// =============================================================================
undefined8 func_080DBD58(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0x14);
  uVar1 = func_0807D070(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBDA0 @ 0x080DBDA0
// =============================================================================
undefined4 func_080DBDA0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBDC8 @ 0x080DBDC8
// =============================================================================
undefined8 func_080DBDC8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_08080D94(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBE10 @ 0x080DBE10
// =============================================================================
undefined4 func_080DBE10(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBE38 @ 0x080DBE38
// =============================================================================
undefined8 func_080DBE38(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0807F580(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBE80 @ 0x080DBE80
// =============================================================================
undefined4 func_080DBE80(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBEA8 @ 0x080DBEA8
// =============================================================================
undefined8 func_080DBEA8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_08082114(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBEF0 @ 0x080DBEF0
// =============================================================================
undefined4 func_080DBEF0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBF18 @ 0x080DBF18
// =============================================================================
undefined8 func_080DBF18(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0808045C(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBF60 @ 0x080DBF60
// =============================================================================
undefined4 func_080DBF60(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBF88 @ 0x080DBF88
// =============================================================================
undefined8 func_080DBF88(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_080854F4(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DBFD0 @ 0x080DBFD0
// =============================================================================
undefined4 func_080DBFD0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DBFF8 @ 0x080DBFF8
// =============================================================================
undefined8 func_080DBFF8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0807EE14(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC040 @ 0x080DC040
// =============================================================================
undefined4 func_080DC040(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC068 @ 0x080DC068
// =============================================================================
undefined8 func_080DC068(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_20 [3];
  
  auStack_20[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0x20);
  uVar1 = func_08083A7C(uVar1,auStack_20,*(undefined4 *)(param_2 + 8),
                        *(undefined1 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0xc),
                        *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                        *(undefined4 *)(param_2 + 0x18));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC0C0 @ 0x080DC0C0
// =============================================================================
undefined4 func_080DC0C0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC0E8 @ 0x080DC0E8
// =============================================================================
undefined8 func_080DC0E8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0807E438(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC130 @ 0x080DC130
// =============================================================================
undefined4 func_080DC130(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC158 @ 0x080DC158
// =============================================================================
undefined8 func_080DC158(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_0807DD38(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC1A0 @ 0x080DC1A0
// =============================================================================
undefined4 func_080DC1A0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC1C8 @ 0x080DC1C8
// =============================================================================
undefined4 func_080DC1C8(void)

{
  undefined4 in_lr;
  
  Scene_Destructor();
  return in_lr;
}

// =============================================================================
// Function: func_080DC1D4 @ 0x080DC1D4
// =============================================================================
undefined8 func_080DC1D4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  uVar1 = func_080005D4(8);
  uVar1 = func_08004B94(uVar1,*(undefined4 *)(param_2 + 4),auStack_1c);
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC21C @ 0x080DC21C
// =============================================================================
undefined4 func_080DC21C(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC244 @ 0x080DC244
// =============================================================================
undefined8 func_080DC244(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_080005D4(8);
  uVar1 = func_08011DC4(uVar1,*(undefined4 *)(param_2 + 4),param_2 + 8);
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC288 @ 0x080DC288
// =============================================================================
undefined4 func_080DC288(void)

{
  undefined4 in_lr;
  
  Scene_Destructor();
  return in_lr;
}

// =============================================================================
// Function: func_080DC294 @ 0x080DC294
// =============================================================================
undefined4 func_080DC294(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_0803F878(*_DAT_080dc2b0 + 8);
  func_080D7F3C(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_080DC2B4 @ 0x080DC2B4
// =============================================================================
undefined4 func_080DC2B4(int param_1,ushort param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 in_lr;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  ushort uStack_28;
  int iStack_24;
  
  uVar3 = (ushort)_DAT_080dc358;
  uVar2 = (ushort)_DAT_080dc35c;
  uVar1 = uVar2 & uStack_2c | param_2 & uVar3;
  uStack_2c._1_1_ = (byte)(uVar1 >> 8);
  uStack_2c = CONCAT11(uStack_2c._1_1_ & 3 | (byte)((param_3 & 0x3f) << 2),(char)uVar1);
  uVar1 = uVar2 & uStack_2a | (ushort)((param_3 & 0xffff) >> 6) & uVar3;
  uStack_2a._1_1_ = (byte)(uVar1 >> 8);
  uStack_2a = CONCAT11(uStack_2a._1_1_ & 3 | (byte)((param_4 & 0x3f) << 2),(char)uVar1);
  uStack_28 = uVar2 & uStack_28 | (ushort)((param_4 & 0xffff) >> 6) & uVar3;
  iStack_24 = param_1;
  func_0x080d3918(*(int **)(param_1 + 0xa8),&uStack_2c,1,
                  *(undefined4 *)(**(int **)(param_1 + 0xa8) + 0xb4));
  func_080D7F08(iStack_24);
  return in_lr;
}

// =============================================================================
// Function: func_080DC360 @ 0x080DC360
// =============================================================================
undefined4
func_080DC360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x080d3910(*(int **)(param_1 + 0xa8),
                          *(undefined4 *)(**(int **)(param_1 + 0xa8) + 0x14));
  func_080D7F9C(param_1,param_2,uVar1,param_3,param_4,param_5);
  return in_lr;
}

// =============================================================================
// Function: func_080DC3A0 @ 0x080DC3A0
// =============================================================================
undefined8 func_080DC3A0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_30 [12];
  int *piStack_24;
  int **ppiStack_20;
  undefined4 uStack_1c;
  
  piStack_24 = (int *)0x0;
  func_08093A58(auStack_30,&piStack_24,*(undefined4 *)(param_2 + 8));
  func_0x08093ad4(&piStack_24,auStack_30);
  if (piStack_24 != (int *)0x0) {
    func_0x080d3914(piStack_24,3,*(undefined4 *)(*piStack_24 + 8));
  }
  iVar2 = *(int *)(param_2 + 4);
  uVar1 = func_0x08093ac8(auStack_30);
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  uStack_1c = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  piStack_24 = (int *)0x0;
  *param_1 = uStack_1c;
  ppiStack_20 = &piStack_24;
  func_08093A88(auStack_30,2);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC404 @ 0x080DC404
// =============================================================================
undefined4 func_080DC404(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC42C @ 0x080DC42C
// =============================================================================
undefined8 func_080DC42C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  uVar1 = func_080005D4(8);
  uVar1 = func_080701BC(uVar1,*(undefined4 *)(param_2 + 4),auStack_1c);
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC474 @ 0x080DC474
// =============================================================================
undefined4 func_080DC474(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC49C @ 0x080DC49C
// =============================================================================
undefined8 func_080DC49C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_080755EC(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8));
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC4E4 @ 0x080DC4E4
// =============================================================================
undefined4 func_080DC4E4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC50C @ 0x080DC50C
// =============================================================================
undefined8 func_080DC50C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_08069E14(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined1 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC554 @ 0x080DC554
// =============================================================================
undefined4 func_080DC554(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080DC57C @ 0x080DC57C
// =============================================================================
undefined4 func_080DC57C(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  while (iVar1 = param_2, iVar1 != 0) {
    func_080DC57C(param_1,*(undefined4 *)(iVar1 + 0xc));
    param_2 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      free(iVar1);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC5A8 @ 0x080DC5A8
// =============================================================================
undefined4 func_080DC5A8(void)

{
  undefined4 in_lr;
  
  func_080A47B4();
  return in_lr;
}

// =============================================================================
// Function: func_080DC5B4 @ 0x080DC5B4
// =============================================================================
undefined4 func_080DC5B4(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080dc5d0;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC5D4 @ 0x080DC5D4
// =============================================================================
undefined4 func_080DC5D4(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080dc5f0;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC5F4 @ 0x080DC5F4
// =============================================================================
undefined4 func_080DC5F4(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080A47B4(param_1 + 0x48,2);
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dc624;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC628 @ 0x080DC628
// =============================================================================
undefined4 func_080DC628(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_080dc658;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC65C @ 0x080DC65C
// =============================================================================
undefined4 func_080DC65C(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 4) = _DAT_080dc678;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC67C @ 0x080DC67C
// =============================================================================
undefined8 func_080DC67C(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)param_2 - (int)param_1 >> 2;
  if (0 < iVar3) {
    cVar1 = *param_3;
    do {
      pcVar2 = param_1;
      if ((((*param_1 == cVar1) || (pcVar2 = param_1 + 1, param_1[1] == cVar1)) ||
          (pcVar2 = param_1 + 2, param_1[2] == cVar1)) ||
         (pcVar2 = param_1 + 3, param_1[3] == cVar1)) goto LAB_080dc6e2;
      param_1 = param_1 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  iVar3 = (int)param_2 - (int)param_1;
  if (iVar3 == 1) {
LAB_080dc6da:
    pcVar2 = param_1;
    if (*param_1 != *param_3) goto LAB_080dc6e8;
  }
  else {
    if (iVar3 < 2) goto LAB_080dc6e8;
    if (iVar3 == 2) {
LAB_080dc6d0:
      pcVar2 = param_1;
      if (*param_1 != *param_3) {
        param_1 = param_1 + 1;
        goto LAB_080dc6da;
      }
    }
    else {
      if (iVar3 != 3) goto LAB_080dc6e8;
      pcVar2 = param_1;
      if (*param_1 != *param_3) {
        param_1 = param_1 + 1;
        goto LAB_080dc6d0;
      }
    }
  }
LAB_080dc6e2:
  param_2 = pcVar2;
LAB_080dc6e8:
  return CONCAT44(in_lr,param_2);
}

// =============================================================================
// Function: func_080DC6F0 @ 0x080DC6F0
// =============================================================================
undefined4 func_080DC6F0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_080dc720;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC724 @ 0x080DC724
// =============================================================================
undefined4 func_080DC724(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080A47B4(param_1 + 0x8c,2);
  func_080A47B4(param_1 + 0x48,2);
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dc760;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC764 @ 0x080DC764
// =============================================================================
undefined4 func_080DC764(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  for (piVar2 = (int *)(param_1 + 0xd0); piVar2 != (int *)(param_1 + 0xcc) + iVar1 * 0x12 + 1;
      piVar2 = piVar2 + 0x12) {
    func_080A47B4(piVar2 + 1,2);
  }
  func_080A47B4(param_1 + 0x8c,2);
  func_080A47B4(param_1 + 0x48,2);
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dc7c8;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC7CC @ 0x080DC7CC
// =============================================================================
undefined4 func_080DC7CC(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_080dc7fc;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC800 @ 0x080DC800
// =============================================================================
undefined4 func_080DC800(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_080dc830;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC834 @ 0x080DC834
// =============================================================================
undefined4 func_080DC834(void)

{
  undefined4 in_lr;
  
  func_080A47B4();
  return in_lr;
}

// =============================================================================
// Function: func_080DC840 @ 0x080DC840
// =============================================================================
undefined8 func_080DC840(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  param_1[9] = _DAT_080dc88c;
  *param_1 = *param_2;
  func_08007874(param_1 + 1);
  uVar1 = func_08007CD8(param_1 + 1,param_2[2]);
  param_1[2] = uVar1;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[4] = 0;
  iVar3 = param_2[4];
  param_2 = param_2 + 5;
  puVar2 = (undefined4 *)((int)param_2 + iVar3);
  if (puVar2 != param_2) {
    memmove(param_1 + 5,param_2,(int)puVar2 - (int)param_2);
  }
  param_1[4] = iVar3;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC890 @ 0x080DC890
// =============================================================================
undefined4 func_080DC890(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080A47B4(param_1 + 0x48,2);
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dc8c0;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC8C4 @ 0x080DC8C4
// =============================================================================
undefined4 func_080DC8C4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_080dc8f4;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC8F8 @ 0x080DC8F8
// =============================================================================
undefined4 func_080DC8F8(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080A47B4(param_1 + 0x48,2);
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dc928;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC92C @ 0x080DC92C
// =============================================================================
undefined4 func_080DC92C(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080A47B4(param_1 + 0x8c,2);
  func_080A47B4(param_1 + 0x48,2);
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dc968;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DC96C @ 0x080DC96C
// =============================================================================
undefined8 func_080DC96C(ushort *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = param_2 - (int)param_1 >> 3;
  if (0 < iVar1) {
    do {
      iVar2 = iVar1 >> 1;
      if ((uint)param_1[iVar2 * 4] <= *param_3) {
        param_1 = param_1 + iVar2 * 4 + 4;
        iVar2 = (iVar1 - iVar2) + -1;
      }
      iVar1 = iVar2;
    } while (0 < iVar2);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DC9A8 @ 0x080DC9A8
// =============================================================================
undefined4 func_080DC9A8(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DC9B4 @ 0x080DC9B4
// =============================================================================
undefined4 func_080DC9B4(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DC9C0 @ 0x080DC9C0
// =============================================================================
undefined4 func_080DC9C0(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DC9CC @ 0x080DC9CC
// =============================================================================
undefined4 func_080DC9CC(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DC9D8 @ 0x080DC9D8
// =============================================================================
undefined4 func_080DC9D8(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DC9E4 @ 0x080DC9E4
// =============================================================================
undefined4 func_080DC9E4(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DC9F0 @ 0x080DC9F0
// =============================================================================
undefined4 func_080DC9F0(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DC9FC @ 0x080DC9FC
// =============================================================================
undefined4 func_080DC9FC(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA08 @ 0x080DCA08
// =============================================================================
undefined4 func_080DCA08(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA14 @ 0x080DCA14
// =============================================================================
undefined4 func_080DCA14(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA20 @ 0x080DCA20
// =============================================================================
undefined4 func_080DCA20(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA2C @ 0x080DCA2C
// =============================================================================
undefined4 func_080DCA2C(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA38 @ 0x080DCA38
// =============================================================================
undefined4 func_080DCA38(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA44 @ 0x080DCA44
// =============================================================================
undefined4 func_080DCA44(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA50 @ 0x080DCA50
// =============================================================================
undefined4 func_080DCA50(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA5C @ 0x080DCA5C
// =============================================================================
undefined4 func_080DCA5C(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA68 @ 0x080DCA68
// =============================================================================
undefined4 func_080DCA68(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA74 @ 0x080DCA74
// =============================================================================
undefined4 func_080DCA74(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA80 @ 0x080DCA80
// =============================================================================
undefined4 func_080DCA80(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA8C @ 0x080DCA8C
// =============================================================================
undefined4 func_080DCA8C(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCA98 @ 0x080DCA98
// =============================================================================
undefined4 func_080DCA98(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCAA4 @ 0x080DCAA4
// =============================================================================
undefined4 func_080DCAA4(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCAB0 @ 0x080DCAB0
// =============================================================================
undefined4 func_080DCAB0(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCABC @ 0x080DCABC
// =============================================================================
undefined4 func_080DCABC(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCAC8 @ 0x080DCAC8
// =============================================================================
undefined4 func_080DCAC8(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCAD4 @ 0x080DCAD4
// =============================================================================
undefined4 func_080DCAD4(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCAE0 @ 0x080DCAE0
// =============================================================================
undefined4 func_080DCAE0(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCAEC @ 0x080DCAEC
// =============================================================================
undefined4 func_080DCAEC(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCAF8 @ 0x080DCAF8
// =============================================================================
undefined4 func_080DCAF8(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB04 @ 0x080DCB04
// =============================================================================
undefined4 func_080DCB04(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB10 @ 0x080DCB10
// =============================================================================
undefined4 func_080DCB10(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB1C @ 0x080DCB1C
// =============================================================================
undefined4 func_080DCB1C(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB28 @ 0x080DCB28
// =============================================================================
undefined4 func_080DCB28(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB34 @ 0x080DCB34
// =============================================================================
undefined4 func_080DCB34(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB40 @ 0x080DCB40
// =============================================================================
undefined4 func_080DCB40(void)

{
  undefined4 in_lr;
  
  func_08034DB0();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB4C @ 0x080DCB4C
// =============================================================================
undefined4 func_080DCB4C(void)

{
  undefined4 in_lr;
  
  func_08037048();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB58 @ 0x080DCB58
// =============================================================================
undefined4 func_080DCB58(void)

{
  undefined4 in_lr;
  
  func_08037048();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB64 @ 0x080DCB64
// =============================================================================
undefined4 func_080DCB64(void)

{
  undefined4 in_lr;
  
  func_08037048();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB70 @ 0x080DCB70
// =============================================================================
undefined4 func_080DCB70(void)

{
  undefined4 in_lr;
  
  func_08037048();
  return in_lr;
}

// =============================================================================
// Function: func_080DCB7C @ 0x080DCB7C
// =============================================================================
undefined8 func_080DCB7C(uint *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [64];
  int iStack_40;
  ushort uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 auStack_33 [3];
  uint uStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  uStack_30 = param_3 & 0xff;
  *param_1 = 0;
  uVar3 = func_0x080d3910(param_2,*(undefined4 *)(*param_2 + 0x7c));
  if (uStack_30 == 0) {
    uVar2 = *_DAT_080dcc90;
  }
  else {
    uVar2 = *(undefined2 *)(_DAT_080dcbb4 + 2);
  }
  auStack_84[0] = 0;
  func_080A4A00(auStack_80,uVar3,uVar2,param_2,6,0x1d);
  iStack_40 = 0x640000;
  uStack_3c = 300;
  uStack_38 = _DAT_080dcc94;
  uStack_34 = *(undefined1 *)(_DAT_080dcc90 + 2);
  auStack_33[0] = 1;
  puStack_24 = auStack_84;
  if (*param_1 < 5) {
    if (param_1 + *param_1 * 0x14 + 1 != (uint *)0x0) {
      func_080DCD2C(param_1 + *param_1 * 0x14 + 1,auStack_80);
    }
    *param_1 = *param_1 + 1;
  }
  func_080A47B4(auStack_80,2);
  uStack_2c = 0;
  puStack_28 = auStack_33;
  do {
    uVar3 = func_0x080d11e4();
    iVar4 = func_0x080d0ed0(uVar3,3);
    uVar3 = func_0x080d11e4();
    iVar5 = func_0x080d0f4e(uVar3,0x1e0);
    iVar7 = _DAT_080dcc98;
    uVar3 = func_0x080d11e4();
    iVar6 = func_0x080d0ed0(uVar3,3);
    bVar1 = *(byte *)(iVar6 + iVar7);
    uVar3 = func_0x080d11e4();
    iVar7 = func_0x080d0ed0(uVar3,3);
    uVar3 = *(undefined4 *)(iVar7 * 4 + _DAT_080dcc9c);
    uVar8 = func_0x080d3910(param_2,*(undefined4 *)(*param_2 + 0x7c));
    if (uStack_30 == 0) {
      uVar2 = *(undefined2 *)(iVar4 * 8 + _DAT_080dcd28);
    }
    else {
      uVar2 = _DAT_080dcc90[iVar4 * 4 + 1];
    }
    *puStack_24 = 0;
    func_080A4A00(auStack_80,uVar8,uVar2,param_2,6,0x1d);
    iStack_40 = iVar5 << 0x10;
    uStack_3c = (ushort)bVar1;
    uStack_34 = *(undefined1 *)(iVar4 * 8 + _DAT_080dcd28 + 4);
    *puStack_28 = 1;
    uStack_38 = uVar3;
    if (*param_1 < 5) {
      if (param_1 + *param_1 * 0x14 + 1 != (uint *)0x0) {
        func_080DCD2C(param_1 + *param_1 * 0x14 + 1,auStack_80);
      }
      *param_1 = *param_1 + 1;
    }
    func_080A47B4(auStack_80,2);
    uStack_2c = uStack_2c + 1;
  } while (uStack_2c < 4);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DCD2C @ 0x080DCD2C
// =============================================================================
undefined8 func_080DCD2C(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  func_080DC840();
  *(undefined4 *)(param_1 + 0x24) = _DAT_080dcdac;
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DCDB0 @ 0x080DCDB0
// =============================================================================
undefined4 func_080DCDB0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    for (piVar3 = piVar1 + 1; piVar3 != piVar1 + iVar2 * 0x14 + 1; piVar3 = piVar3 + 0x14) {
      func_080A47B4(piVar3,2);
    }
    func_08000608(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    for (piVar3 = piVar1 + 1; piVar3 != piVar1 + iVar2 * 0x10 + 1; piVar3 = piVar3 + 0x10) {
      func_0x080d3914(piVar3,2,*(undefined4 *)(piVar3[9] + 8));
    }
    func_08000608(piVar1);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    func_080A47B4(iVar2,2);
    func_08000608(iVar2);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    func_080A47B4(iVar2,2);
    func_08000608(iVar2);
  }
  *(undefined4 *)(param_1 + 4) = _DAT_080dce5c;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DCE60 @ 0x080DCE60
// =============================================================================
undefined4 func_080DCE60(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_080dce90;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DCE94 @ 0x080DCE94
// =============================================================================
undefined4 func_080DCE94(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dcebc;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DCEC0 @ 0x080DCEC0
// =============================================================================
undefined4 func_080DCEC0(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dcee8;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DCEEC @ 0x080DCEEC
// =============================================================================
undefined4 func_080DCEEC(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_080dcf1c;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DCF20 @ 0x080DCF20
// =============================================================================
undefined4 func_080DCF20(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080A47B4(param_1 + 8,2);
  *(undefined4 *)(param_1 + 4) = _DAT_080dcf48;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DCFCC @ 0x080DCFCC
// =============================================================================
undefined4 func_080DCFCC(int param_1)

{
  undefined4 in_lr;
  
  func_0801FE20();
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080DD3A8 @ 0x080DD3A8
// =============================================================================
undefined4 func_080DD3A8(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DD3D4 @ 0x080DD3D4
// =============================================================================
undefined4 func_080DD3D4(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x47);
  if (*pcVar3 == '\0') {
    iVar2 = func_0805E8F0(param_1 + 0x30);
    if (-1 < iVar2 * 0x40000000) {
      return in_lr;
    }
    pcVar3 = (char *)(param_1 + 0x44);
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *pcVar3 = cVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080DD404 @ 0x080DD404
// =============================================================================
undefined4 func_080DD404(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DD434 @ 0x080DD434
// =============================================================================
undefined4 func_080DD434(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DD460 @ 0x080DD460
// =============================================================================
undefined4 func_080DD460(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x62);
  if (cVar1 == '\0') {
    iVar3 = func_0x080d11e4();
    if ((iVar3 >> 4 & 3U) != 0) {
      func_0803A350(param_1,0xcf);
    }
    sVar2 = func_080AB788(2);
    *(short *)(param_1 + 0x60) = (sVar2 + 6) * 0x3c;
    cVar1 = '\x01';
  }
  else {
    if ((cVar1 != '\x01') ||
       (iVar3 = *(ushort *)(param_1 + 0x60) - 1, *(ushort *)(param_1 + 0x60) = (ushort)iVar3,
       -1 < iVar3 * 0x10000)) goto LAB_080dd4b8;
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0x62) = cVar1;
LAB_080dd4b8:
  pcVar4 = (char *)(param_1 + 0x47);
  if (*pcVar4 == '\0') {
    iVar3 = func_0805E8F0(param_1 + 0x30);
    if (-1 < iVar3 * 0x40000000) {
      return in_lr;
    }
    pcVar4 = (char *)(param_1 + 0x44);
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *pcVar4 = cVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080DD4E4 @ 0x080DD4E4
// =============================================================================
undefined4 func_080DD4E4(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DD514 @ 0x080DD514
// =============================================================================
undefined4 func_080DD514(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DD540 @ 0x080DD540
// =============================================================================
undefined4 func_080DD540(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = func_0803A180(param_1,param_1 + 0x50,0x10000);
  if ((iVar1 != 0) &&
     (uVar2 = *(int *)(param_1 + 0x50) + _DAT_080dd584, *(ushort *)(param_1 + 4) != uVar2)) {
    func_0805E860(param_1 + 0x30,uVar2);
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(short *)(param_1 + 4) = (short)uVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DD588 @ 0x080DD588
// =============================================================================
undefined4 func_080DD588(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DD5B8 @ 0x080DD5B8
// =============================================================================
undefined4 func_080DD5B8(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DD5E4 @ 0x080DD5E4
// =============================================================================
undefined4 func_080DD5E4(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  undefined4 in_lr;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar5 = (int *)*param_1;
  iVar3 = func_0x080d3914(piVar5,0,*(undefined4 *)(*piVar5 + 0x40));
  if (iVar3 != 0) {
    sVar1 = *(short *)(iVar3 + 10);
    sVar2 = *(short *)(iVar3 + 0xe);
    psVar4 = (short *)(param_1 + 0x15);
    iVar3 = (int)sVar1 - (int)*psVar4;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 0x10) {
      psVar8 = (short *)((int)param_1 + 0x56);
      iVar3 = (int)sVar2 - (int)*psVar8;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x10) {
        func_0x080d3918(&uStack_68,piVar5,0,*(undefined4 *)(*piVar5 + 0x34));
        uStack_28 = CONCAT22(*psVar8 + -8,*psVar4 + -8);
        uStack_24 = CONCAT22(*psVar8 + 8,*psVar4 + 8);
        uStack_5c = 0x21;
        uStack_58 = 0xffffffdf;
        uStack_54 = 0xffffffdf;
        uStack_50 = 0x21;
        uStack_48 = uStack_68;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        uStack_3c = uStack_28;
        uStack_38 = uStack_24;
        uStack_34 = 0x20;
        uStack_30 = 0;
        uStack_2c = 0;
        iVar6 = param_1[0x14];
        iVar3 = func_080ABE58((int)*psVar4,(int)*psVar8,(int)sVar1,(int)sVar2,&uStack_5c,iVar6);
        param_1[0x14] = iVar3;
        if (((iVar6 != iVar3) || (*(char *)((int)param_1 + 0x62) == '\0')) &&
           (uVar7 = iVar3 + _DAT_080dd740, *(ushort *)(param_1 + 1) != uVar7)) {
          func_0805E860(param_1 + 0xc,uVar7);
          *(undefined1 *)(param_1 + 0x11) = 1;
          *(undefined1 *)((int)param_1 + 0x46) = 0;
          *(undefined1 *)((int)param_1 + 0x47) = 1;
          *(short *)(param_1 + 1) = (short)uVar7;
        }
        *(char *)((int)param_1 + 0x62) = '\x01';
        *(undefined2 *)(param_1 + 0x18) = 0x3c;
      }
    }
  }
  iVar3 = func_0803A180(param_1,param_1 + 0x14,0x8000);
  if (iVar3 != 0) {
    if (*(char *)((int)param_1 + 0x62) == '\0') {
      uVar7 = param_1[0x14] + _DAT_080dd744;
      if (*(ushort *)(param_1 + 1) == uVar7) {
        return in_lr;
      }
      func_0805E860(param_1 + 0xc,uVar7);
      *(undefined1 *)(param_1 + 0x11) = 1;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
    }
    else {
      uVar7 = param_1[0x14] + _DAT_080dd784;
      if (*(ushort *)(param_1 + 1) == uVar7) {
        return in_lr;
      }
      func_0805E860(param_1 + 0xc,uVar7);
      *(undefined1 *)(param_1 + 0x11) = 1;
      *(undefined1 *)((int)param_1 + 0x46) = 0;
    }
    *(undefined1 *)((int)param_1 + 0x47) = 1;
    *(short *)(param_1 + 1) = (short)uVar7;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DD788 @ 0x080DD788
// =============================================================================
undefined4 func_080DD788(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DD7B8 @ 0x080DD7B8
// =============================================================================
undefined4 func_080DD7B8(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DD7E4 @ 0x080DD7E4
// =============================================================================
undefined4 func_080DD7E4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = func_0803A180(param_1,param_1 + 0x50,0x8000);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x62) == '\0') {
      uVar2 = *(int *)(param_1 + 0x50) + 0x658;
      if (*(ushort *)(param_1 + 4) == uVar2) {
        return in_lr;
      }
      func_0805E860(param_1 + 0x30,uVar2);
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x50) + _DAT_080dd85c;
      if (*(ushort *)(param_1 + 4) == uVar2) {
        return in_lr;
      }
      func_0805E860(param_1 + 0x30,uVar2);
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(short *)(param_1 + 4) = (short)uVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DD860 @ 0x080DD860
// =============================================================================
undefined4 func_080DD860(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DD890 @ 0x080DD890
// =============================================================================
undefined4 func_080DD890(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DD8BC @ 0x080DD8BC
// =============================================================================
undefined4 func_080DD8BC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = func_0803A180(param_1,param_1 + 0x50,0x8000);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x62) == '\0') {
      uVar2 = *(int *)(param_1 + 0x50) + _DAT_080dd900;
      if (*(ushort *)(param_1 + 4) == uVar2) {
        return in_lr;
      }
      func_0805E860(param_1 + 0x30,uVar2);
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x50) + _DAT_080dd934;
      if (*(ushort *)(param_1 + 4) == uVar2) {
        return in_lr;
      }
      func_0805E860(param_1 + 0x30,uVar2);
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(short *)(param_1 + 4) = (short)uVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DD938 @ 0x080DD938
// =============================================================================
undefined4 func_080DD938(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DD944 @ 0x080DD944
// =============================================================================
undefined4 func_080DD944(int param_1,byte *param_2)

{
  undefined4 in_lr;
  
  *param_2 = *param_2 & 0xf0 | 6;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x50);
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_1 + 0x54);
  *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_1 + 0x56);
  param_2[0xc] = *(byte *)(param_1 + 0x78) & 0xf | *(char *)(param_1 + 0x79) << 4;
  return in_lr;
}

// =============================================================================
// Function: func_080DD994 @ 0x080DD994
// =============================================================================
undefined4 func_080DD994(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_08039F90(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_080DD9CC @ 0x080DD9CC
// =============================================================================
undefined4 func_080DD9CC(int param_1)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 in_lr;
  
  cVar3 = *(char *)(param_1 + 0x62);
  if (cVar3 == '\x01') {
    iVar7 = *(ushort *)(param_1 + 0x60) - 1;
    *(ushort *)(param_1 + 0x60) = (ushort)iVar7;
    iVar7 = iVar7 * 0x10000 >> 0x10;
    if (-1 < iVar7) {
      if (0x168 < iVar7) {
        puVar8 = (ushort *)(param_1 + 0x86);
        uVar1 = *puVar8;
        *puVar8 = (ushort)(uVar1 - 1);
        if ((int)((uVar1 - 1) * 0x10000) < 1) {
          *puVar8 = 0x168;
          iVar7 = func_0x080d11e4();
          if ((iVar7 >> 4 & 3U) != 0) {
            func_0803A350(param_1,0xce);
          }
        }
      }
      goto LAB_080ddbd6;
    }
    cVar3 = '\x02';
  }
  else {
    if ('\x01' < cVar3) {
      if (cVar3 == '\x02') {
        pbVar10 = (byte *)(param_1 + 0x79);
        if (*pbVar10 == 0xff) {
          *pbVar10 = *(char *)(param_1 + 0x78) + 1U & 3;
        }
        func_0803A144(param_1,param_1 + 100,(int)(char)*pbVar10);
        iVar7 = *(short *)(param_1 + 0x68) * 0x10000;
        *(int *)(param_1 + 0x6c) = iVar7;
        iVar11 = *(short *)(param_1 + 0x6a) * 0x10000;
        *(int *)(param_1 + 0x70) = iVar11;
        *(int *)(param_1 + 0x7c) = iVar7 - *(int *)(param_1 + 0x58);
        iVar11 = iVar11 - *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x80) = iVar11;
        iVar5 = *(int *)(param_1 + 0x7c);
        iVar7 = iVar5;
        if (iVar5 < 0) {
          iVar7 = -iVar5;
        }
        iVar13 = iVar7 >> 0x11;
        iVar9 = iVar11;
        if (iVar11 < 0) {
          iVar9 = -iVar11;
        }
        iVar12 = iVar9 >> 0x11;
        if (iVar12 < iVar13) {
          if (iVar5 < 0) {
            *(undefined4 *)(param_1 + 0x50) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0x50) = 3;
          }
          uVar6 = func_0x080d0ec8(*(undefined4 *)(param_1 + 0x7c),iVar13);
          *(undefined4 *)(param_1 + 0x7c) = uVar6;
          uVar6 = func_0x080d0ec8(*(undefined4 *)(param_1 + 0x80),iVar13);
          *(undefined4 *)(param_1 + 0x80) = uVar6;
          *(short *)(param_1 + 0x60) = (short)(iVar7 >> 0x11);
        }
        else {
          *(uint *)(param_1 + 0x50) = (uint)(iVar11 < 0);
          uVar6 = func_0x080d0ec8(*(undefined4 *)(param_1 + 0x7c),iVar12);
          *(undefined4 *)(param_1 + 0x7c) = uVar6;
          uVar6 = func_0x080d0ec8(*(undefined4 *)(param_1 + 0x80),iVar12);
          *(undefined4 *)(param_1 + 0x80) = uVar6;
          *(short *)(param_1 + 0x60) = (short)(iVar9 >> 0x11);
        }
        uVar2 = _DAT_080ddc08;
        if (*(ushort *)(param_1 + 4) != _DAT_080ddc08) {
          func_0805E860(param_1 + 0x30,_DAT_080ddc08);
          *(undefined1 *)(param_1 + 0x44) = 1;
          *(undefined1 *)(param_1 + 0x46) = 0;
          *(undefined1 *)(param_1 + 0x47) = 1;
          *(short *)(param_1 + 4) = (short)uVar2;
        }
        *(undefined1 *)(param_1 + 0x62) = 3;
        *(undefined1 *)(param_1 + 0x84) = 8;
      }
      else if (cVar3 != '\x03') goto LAB_080ddbd6;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x7c);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x80);
      iVar7 = *(ushort *)(param_1 + 0x60) - 1;
      *(ushort *)(param_1 + 0x60) = (ushort)iVar7;
      if (iVar7 * 0x10000 < 1) {
        *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_1 + 0x79);
        *(undefined1 *)(param_1 + 0x79) = 0xff;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x6c);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x70);
        *(undefined1 *)(param_1 + 0x62) = 0;
        *(undefined1 *)(param_1 + 0x84) = 0xf8;
        if (*(short *)(param_1 + 4) != 0x2a4) {
          func_0805E860(param_1 + 0x30,0x2a4);
          *(undefined1 *)(param_1 + 0x44) = 1;
          *(undefined1 *)(param_1 + 0x46) = 0;
          *(undefined1 *)(param_1 + 0x47) = 1;
          *(undefined2 *)(param_1 + 4) = 0x2a4;
        }
      }
      goto LAB_080ddbd6;
    }
    if (cVar3 != '\0') goto LAB_080ddbd6;
    sVar4 = func_080AB788(2);
    *(short *)(param_1 + 0x60) = (sVar4 + 0x1e) * 0x3c;
    *(undefined2 *)(param_1 + 0x86) = 0;
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 0x62) = cVar3;
LAB_080ddbd6:
  *(short *)(param_1 + 0x54) = (short)((uint)*(undefined4 *)(param_1 + 0x58) >> 0x10);
  *(short *)(param_1 + 0x56) = (short)((uint)*(undefined4 *)(param_1 + 0x5c) >> 0x10);
  if (*(char *)(param_1 + 0x47) == '\0') {
    iVar7 = func_0805E8F0(param_1 + 0x30);
    if (iVar7 * 0x40000000 < 0) {
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
  }
  else {
    *(char *)(param_1 + 0x47) = '\0';
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DDC18 @ 0x080DDC18
// =============================================================================
undefined4 func_080DDC18(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DDC48 @ 0x080DDC48
// =============================================================================
undefined4 func_080DDC48(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DDC78 @ 0x080DDC78
// =============================================================================
undefined4 func_080DDC78(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 in_lr;
  
  uVar6 = _DAT_080ddd58;
  cVar1 = *(char *)(param_1 + 0x62);
  if (cVar1 == '\x01') {
    puVar4 = (ushort *)(param_1 + 100);
    uVar7 = *puVar4 & 0xff0;
    if ((*puVar4 & 0xff0) == 0) {
      if (*(ushort *)(param_1 + 4) != _DAT_080ddd58) {
        func_0805E860(param_1 + 0x30,_DAT_080ddd58);
        *(undefined1 *)(param_1 + 0x44) = 1;
        *(char *)(param_1 + 0x46) = (char)uVar7;
        *(undefined1 *)(param_1 + 0x47) = 1;
LAB_080ddd8e:
        *(short *)(param_1 + 4) = (short)uVar6;
      }
    }
    else if ((uVar7 == 0x800) && (uVar6 = 0x204, *(short *)(param_1 + 4) != 0x204)) {
      func_0805E860(param_1 + 0x30,0x204);
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
      *(undefined1 *)(param_1 + 0x47) = 1;
      goto LAB_080ddd8e;
    }
    sVar2 = func_0x0803a320(param_1,(int)((uint)*puVar4 << 0x10) >> 0x14 & 0xff);
    iVar3 = func_0x0803a334(param_1,((int)((uint)*puVar4 << 0x10) >> 0x14 & 0x7fU) << 1);
    *puVar4 = *(short *)(param_1 + 0x66) + *puVar4;
    iVar5 = *(int *)(param_1 + 0x58) + sVar2 * 0x40;
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + ((iVar3 << 0x10) >> 10);
    *(short *)(param_1 + 0x54) = (short)((uint)iVar5 >> 0x10);
    *(short *)(param_1 + 0x56) = (short)((uint)*(undefined4 *)(param_1 + 0x5c) >> 0x10);
    if (_DAT_080dde04 < *(int *)(param_1 + 0x68)) goto LAB_080dde1e;
    iVar3 = *(int *)(param_1 + 0x68) + 0x2000;
  }
  else {
    if (cVar1 < '\x02') {
      if (cVar1 == '\0') {
        iVar3 = func_0x080d11e4();
        iVar3 = (iVar3 >> 8 & 1U) + 1;
        *(char *)(param_1 + 0x62) = (char)iVar3;
        if (iVar3 == 1) {
          sVar2 = func_080AB788(4);
          *(short *)(param_1 + 0x60) = sVar2 * 0x100 + 0x100;
          iVar3 = func_0x080d11e4();
          *(short *)(param_1 + 100) = (short)((iVar3 >> 8 & 1U) << 0xb);
        }
        else {
          sVar2 = func_080AB788(2);
          *(short *)(param_1 + 0x60) = sVar2 * 0x3c + 0xb4;
        }
        sVar2 = func_080AB788(2);
        *(short *)(param_1 + 0x66) = sVar2 * 4 + 0xc;
      }
      goto LAB_080dde1e;
    }
    if ((cVar1 != '\x02') || (*(int *)(param_1 + 0x68) < 1)) goto LAB_080dde1e;
    iVar3 = *(int *)(param_1 + 0x68) + _DAT_080dde54;
  }
  *(int *)(param_1 + 0x68) = iVar3;
LAB_080dde1e:
  iVar3 = *(ushort *)(param_1 + 0x60) - 1;
  *(ushort *)(param_1 + 0x60) = (ushort)iVar3;
  if (iVar3 * 0x10000 < 0) {
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  if (*(char *)(param_1 + 0x47) == '\0') {
    iVar3 = func_0805E8F0(param_1 + 0x30);
    if (iVar3 * 0x40000000 < 0) {
      *(undefined1 *)(param_1 + 0x44) = 1;
    }
  }
  else {
    *(char *)(param_1 + 0x47) = '\0';
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DDE68 @ 0x080DDE68
// =============================================================================
undefined4 func_080DDE68(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DDE98 @ 0x080DDE98
// =============================================================================
undefined4 func_080DDE98(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DDEC4 @ 0x080DDEC4
// =============================================================================
undefined4 func_080DDEC4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = func_0803A180(param_1,param_1 + 0x50,0x2000);
  if ((iVar1 != 0) &&
     (uVar2 = *(int *)(param_1 + 0x50) + _DAT_080ddf08, *(ushort *)(param_1 + 4) != uVar2)) {
    func_0805E860(param_1 + 0x30,uVar2);
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(short *)(param_1 + 4) = (short)uVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DDF0C @ 0x080DDF0C
// =============================================================================
undefined4 func_080DDF0C(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DDF3C @ 0x080DDF3C
// =============================================================================
undefined4 func_080DDF3C(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DDF68 @ 0x080DDF68
// =============================================================================
undefined4 func_080DDF68(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = func_0803A180(param_1,param_1 + 0x50,0x4000);
  if ((iVar1 != 0) &&
     (uVar2 = *(int *)(param_1 + 0x50) + _DAT_080ddfac, *(ushort *)(param_1 + 4) != uVar2)) {
    func_0805E860(param_1 + 0x30,uVar2);
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(short *)(param_1 + 4) = (short)uVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DDFB0 @ 0x080DDFB0
// =============================================================================
undefined4 func_080DDFB0(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DDFE0 @ 0x080DDFE0
// =============================================================================
undefined4 func_080DDFE0(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DE00C @ 0x080DE00C
// =============================================================================
undefined4 func_080DE00C(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = func_0803A180(param_1,param_1 + 0x50,0x8000);
  if ((iVar1 != 0) && (uVar2 = *(int *)(param_1 + 0x50) + 0x10, *(ushort *)(param_1 + 4) != uVar2))
  {
    func_0805E860(param_1 + 0x30,uVar2);
    *(undefined1 *)(param_1 + 0x44) = 1;
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(short *)(param_1 + 4) = (short)uVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DE050 @ 0x080DE050
// =============================================================================
undefined4 func_080DE050(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DE080 @ 0x080DE080
// =============================================================================
undefined4 func_080DE080(void)

{
  undefined4 in_lr;
  
  func_08039F90();
  return in_lr;
}

// =============================================================================
// Function: func_080DE0AC @ 0x080DE0AC
// =============================================================================
undefined4 func_080DE0AC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = func_0803A180(param_1,param_1 + 0x50,0x8000);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x62) == '\0') {
      uVar2 = *(int *)(param_1 + 0x50) + _DAT_080de0f0;
      if (*(ushort *)(param_1 + 4) == uVar2) {
        return in_lr;
      }
      func_0805E860(param_1 + 0x30,uVar2);
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x50) + _DAT_080de124;
      if (*(ushort *)(param_1 + 4) == uVar2) {
        return in_lr;
      }
      func_0805E860(param_1 + 0x30,uVar2);
      *(undefined1 *)(param_1 + 0x44) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
    *(undefined1 *)(param_1 + 0x47) = 1;
    *(short *)(param_1 + 4) = (short)uVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DE128 @ 0x080DE128
// =============================================================================
undefined4 func_080DE128(void)

{
  undefined4 in_lr;
  
  func_08039F50();
  return in_lr;
}

// =============================================================================
// Function: func_080DE134 @ 0x080DE134
// =============================================================================
undefined4 func_080DE134(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)*param_1;
  uVar3 = param_2[2];
  uVar5 = *param_2;
  iVar1 = param_1[2];
  for (piVar4 = param_1 + 3; piVar4 != param_1 + iVar1 + 3; piVar4 = piVar4 + 1) {
    if (*piVar4 != 0) {
      func_0x080d391c(*piVar4,uVar2,uVar3,uVar5);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DE184 @ 0x080DE184
// =============================================================================
undefined4 func_080DE184(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 8);
  for (piVar3 = (int *)(param_1 + 0xc); piVar3 != (int *)(iVar1 * 4 + param_1 + 0xc);
      piVar3 = piVar3 + 1) {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x4c) + 0xc));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DE1B4 @ 0x080DE1B4
// =============================================================================
undefined4 func_080DE1B4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 uStack_18;
  
  *(undefined4 *)(param_1 + 4) = _DAT_080de1d4;
  for (uStack_18 = *(int *)(param_1 + 8) * 4 + param_1 + 0xc; uStack_18 != param_1 + 0xc;
      uStack_18 = uStack_18 + -4) {
    iVar1 = *(int *)(uStack_18 + -4);
    if (iVar1 != 0) {
      func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 8));
    }
  }
  *(undefined4 *)(param_1 + 4) = _DAT_080de21c;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DE220 @ 0x080DE220
// =============================================================================
undefined4 func_080DE220(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080de23c;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DE240 @ 0x080DE240
// =============================================================================
undefined8 func_080DE240(undefined1 *param_1)

{
  undefined4 in_lr;
  
  *param_1 = 0;
  strcpy(param_1 + 4);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080DE260 @ 0x080DE260
// =============================================================================
undefined4 func_080DE260(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080de27c;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080DE280 @ 0x080DE280
// =============================================================================
undefined4 func_080DE280(int param_1)

{
  undefined4 in_lr;
  
  func_080E0908(param_1 + -4);
  return in_lr;
}

// =============================================================================
// Function: func_080DE28C @ 0x080DE28C
// =============================================================================
undefined4 func_080DE28C(int param_1)

{
  undefined4 in_lr;
  
  func_080E0908(param_1 + -0xc);
  return in_lr;
}

// =============================================================================
// Function: func_080E0094 @ 0x080E0094
// =============================================================================
void func_080E0094(undefined4 param_1,int param_2)

{
  short sVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int iVar8;
  int ***pppiVar9;
  int *piVar10;
  int ***pppiVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iStack_c0;
  int **ppiStack_bc;
  int *piStack_b8;
  int iStack_b4;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int ***apppiStack_64 [2];
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int ***pppiStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int ***pppiStack_28;
  int **ppiStack_24;
  
  iVar17 = param_2 + 4;
  uStack_50 = param_1;
  func_08008724(iVar17);
  puVar2 = (undefined2 *)func_0x08008918(iVar17);
  iStack_c0._0_2_ = 0x1040;
  *puVar2 = 0x1040;
  iVar17 = func_0x08008918(iVar17);
  iStack_c0 = CONCAT22(iStack_c0._2_2_,0x3f);
  *(undefined2 *)(iVar17 + 0x50) = 0x3f;
  piVar16 = (int *)(param_2 + 0x388);
  iStack_94 = param_2 + 0x378;
  piStack_4c = &iStack_94;
  piVar14 = *(int **)(param_2 + 0x38c);
  if (piVar14 == *(int **)(param_2 + 0x394)) {
    iStack_8c = 1;
    iStack_90 = (int)piVar14 - *piVar16 >> 2;
    piVar12 = &iStack_90;
    if (iStack_90 == 0) {
      piVar12 = &iStack_8c;
    }
    if (iStack_90 + *piVar12 == 0) {
      piVar12 = (int *)0x0;
      iVar17 = 0;
    }
    else {
      iVar17 = (iStack_90 + *piVar12) * 4;
      piVar12 = (int *)malloc(iVar17);
      if (piVar12 == (int *)0x0) {
        piVar12 = (int *)func_080D3BC0(iVar17);
      }
    }
    piVar10 = (int *)*piVar16;
    piVar3 = piVar12;
    if (piVar14 != piVar10) {
      iVar13 = memmove(piVar12,piVar10,(int)piVar14 - (int)piVar10);
      piVar3 = (int *)(iVar13 + ((int)piVar14 - (int)piVar10));
    }
    iVar18 = *piVar16;
    piStack_30 = &iStack_7c;
    piStack_2c = &iStack_70;
    iStack_34 = param_2 + 0xc;
    pppiStack_38 = &ppiStack_bc;
    pppiStack_28 = (int ***)apppiStack_64;
    for (iVar13 = iStack_8c; iVar13 != 0; iVar13 = iVar13 + -1) {
      *piVar3 = *piStack_4c;
      piVar3 = piVar3 + 1;
    }
    if (iVar18 != 0) {
      free(iVar18);
    }
    *piVar16 = (int)piVar12;
    *(int **)(param_2 + 0x38c) = piVar3;
    *(int *)(param_2 + 0x394) = iVar17 + (int)piVar12;
  }
  else {
    if (piVar14 != (int *)0x0) {
      *piVar14 = param_2 + 0x378;
    }
    *(int *)(param_2 + 0x38c) = *(int *)(param_2 + 0x38c) + 4;
    piStack_30 = &iStack_7c;
    piStack_2c = &iStack_70;
    iStack_34 = param_2 + 0xc;
    pppiStack_38 = &ppiStack_bc;
    pppiStack_28 = (int ***)apppiStack_64;
  }
  iVar17 = param_2 + 4;
  piVar16 = (int *)(param_2 + 0x388);
  iStack_88 = param_2 + 0x37c;
  piStack_48 = &iStack_88;
  piVar14 = *(int **)(param_2 + 0x38c);
  if (piVar14 == *(int **)(param_2 + 0x394)) {
    iStack_80 = 1;
    iStack_84 = (int)piVar14 - *piVar16 >> 2;
    piVar12 = &iStack_84;
    if (iStack_84 == 0) {
      piVar12 = &iStack_80;
    }
    if (iStack_84 + *piVar12 == 0) {
      piVar12 = (int *)0x0;
      iVar13 = 0;
    }
    else {
      iVar13 = (iStack_84 + *piVar12) * 4;
      piVar12 = (int *)malloc(iVar13);
      if (piVar12 == (int *)0x0) {
        piVar12 = (int *)func_080D3BC0(iVar13);
      }
    }
    piVar10 = (int *)*piVar16;
    piVar3 = piVar12;
    if (piVar14 != piVar10) {
      iVar18 = memmove(piVar12,piVar10,(int)piVar14 - (int)piVar10);
      piVar3 = (int *)(iVar18 + ((int)piVar14 - (int)piVar10));
    }
    iVar8 = *piVar16;
    for (iVar18 = iStack_80; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar3 = *piStack_48;
      piVar3 = piVar3 + 1;
    }
    if (iVar8 != 0) {
      free(iVar8);
    }
    *piVar16 = (int)piVar12;
    *(int **)(param_2 + 0x38c) = piVar3;
    *(int *)(param_2 + 0x394) = iVar13 + (int)piVar12;
  }
  else {
    if (piVar14 != (int *)0x0) {
      *piVar14 = param_2 + 0x37c;
    }
    *(int *)(param_2 + 0x38c) = *(int *)(param_2 + 0x38c) + 4;
  }
  piVar16 = (int *)(param_2 + 0x388);
  iStack_7c = param_2 + 0x380;
  piStack_44 = piStack_30;
  piVar14 = *(int **)(param_2 + 0x38c);
  if (piVar14 == *(int **)(param_2 + 0x394)) {
    iStack_74 = 1;
    iStack_78 = (int)piVar14 - *piVar16 >> 2;
    piVar12 = &iStack_78;
    if (iStack_78 == 0) {
      piVar12 = &iStack_74;
    }
    if (iStack_78 + *piVar12 == 0) {
      piVar12 = (int *)0x0;
      iVar13 = 0;
    }
    else {
      iVar13 = (iStack_78 + *piVar12) * 4;
      piVar12 = (int *)malloc(iVar13);
      if (piVar12 == (int *)0x0) {
        piVar12 = (int *)func_080D3BC0(iVar13);
      }
    }
    piVar10 = (int *)*piVar16;
    piVar3 = piVar12;
    if (piVar14 != piVar10) {
      iVar18 = memmove(piVar12,piVar10,(int)piVar14 - (int)piVar10);
      piVar3 = (int *)(iVar18 + ((int)piVar14 - (int)piVar10));
    }
    iVar8 = *piVar16;
    for (iVar18 = iStack_74; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar3 = *piStack_44;
      piVar3 = piVar3 + 1;
    }
    if (iVar8 != 0) {
      free(iVar8);
    }
    *piVar16 = (int)piVar12;
    *(int **)(param_2 + 0x38c) = piVar3;
    *(int *)(param_2 + 0x394) = iVar13 + (int)piVar12;
  }
  else {
    if (piVar14 != (int *)0x0) {
      *piVar14 = param_2 + 0x380;
    }
    *(int *)(param_2 + 0x38c) = *(int *)(param_2 + 0x38c) + 4;
  }
  piVar16 = (int *)(param_2 + 0x388);
  iStack_70 = param_2 + 900;
  piStack_40 = piStack_2c;
  piVar14 = *(int **)(param_2 + 0x38c);
  if (piVar14 == *(int **)(param_2 + 0x394)) {
    iStack_68 = 1;
    iStack_6c = (int)piVar14 - *piVar16 >> 2;
    piVar12 = &iStack_6c;
    if (iStack_6c == 0) {
      piVar12 = &iStack_68;
    }
    if (iStack_6c + *piVar12 == 0) {
      piVar12 = (int *)0x0;
      iVar13 = 0;
    }
    else {
      iVar13 = (iStack_6c + *piVar12) * 4;
      piVar12 = (int *)malloc(iVar13);
      if (piVar12 == (int *)0x0) {
        piVar12 = (int *)func_080D3BC0(iVar13);
      }
    }
    piVar10 = (int *)*piVar16;
    piVar3 = piVar12;
    if (piVar14 != piVar10) {
      iVar18 = memmove(piVar12,piVar10,(int)piVar14 - (int)piVar10);
      piVar3 = (int *)(iVar18 + ((int)piVar14 - (int)piVar10));
    }
    iVar8 = *piVar16;
    for (iVar18 = iStack_68; iVar18 != 0; iVar18 = iVar18 + -1) {
      *piVar3 = *piStack_40;
      piVar3 = piVar3 + 1;
    }
    if (iVar8 != 0) {
      free(iVar8);
    }
    *piVar16 = (int)piVar12;
    *(int **)(param_2 + 0x38c) = piVar3;
    *(int *)(param_2 + 0x394) = iVar13 + (int)piVar12;
  }
  else {
    if (piVar14 != (int *)0x0) {
      *piVar14 = param_2 + 900;
    }
    *(int *)(param_2 + 0x38c) = *(int *)(param_2 + 0x38c) + 4;
  }
  func_0803EEEC(iStack_34,
                *(undefined4 *)
                 (PTR_case_080F89D4_080e0534 +
                 (uint)*(ushort *)(PTR_case_080F19AE_080e0538 + *(int *)(param_2 + 0x360) * 2) * 4))
  ;
  *(undefined4 *)(param_2 + 0x364) = 0;
  func_080AD724(pppiStack_38);
  pppiVar11 = pppiStack_38;
  ppiVar6 = ppiStack_bc;
  apppiStack_64[0] = pppiStack_38;
  pppiStack_28[1] = ppiStack_bc;
  *pppiVar11 = (int **)0x0;
  pppiVar11 = *(int ****)(param_2 + 0x368);
  if (((int ***)ppiVar6 != pppiVar11) && (pppiVar11 != (int ***)0x0)) {
    func_0x080d3914(pppiVar11,3,(*pppiVar11)[2]);
  }
  *(int ***)(param_2 + 0x368) = ppiVar6;
  if ((int ***)ppiStack_bc != (int ***)0x0) {
    func_0x080d3914(ppiStack_bc,3,(int *)(*ppiStack_bc)[2]);
  }
  uVar4 = func_080005D4(4);
  uVar5 = func_0x08008918(iVar17);
  ppiVar6 = (int **)func_08009300(uVar4,uVar5);
  iVar13 = 0x370;
  pppiVar11 = (int ***)(param_2 + 0x370);
  ppiVar7 = *pppiVar11;
  if ((ppiVar6 != ppiVar7) && (ppiVar7 != (int **)0x0)) {
    func_08009324(ppiVar7,3);
  }
  *pppiVar11 = ppiVar6;
  do {
    iVar18 = 0x80e0451;
    func_080088B8(iVar17);
    if (*(int *)(param_2 + 0x364) != 1) {
      iVar18 = 0x80e0463;
      iVar8 = func_0x080088dc(iVar17);
      if ((*(ushort *)(iVar8 + 8) & 8) != 0) {
        pppiVar11 = (int ***)(param_2 + 0x370);
        iVar18 = 0x80e0479;
        sVar1 = func_0x080094a4(*pppiVar11);
        if (-1 < (-(int)sVar1 | (int)sVar1)) {
          if (*(int *)(param_2 + 0x36c) == 0) {
LAB_080e04a2:
            iVar13 = 1;
            iVar18 = 0x80e04af;
            func_08009378(*pppiVar11,_DAT_080e053c,1);
            *(int *)(param_2 + 0x364) = 1;
          }
          else {
            iVar18 = 0x80e0495;
            iVar8 = func_0x08050d34();
            if (iVar8 != 1) {
              iVar18 = 0x80e049f;
              iVar8 = func_0x08050d34(*(int *)(param_2 + 0x36c));
              if (iVar8 != 2) goto LAB_080e04a2;
            }
          }
        }
      }
    }
    piVar14 = (int *)0x36c;
    if (*(int *)(param_2 + 0x36c) != 0) {
      iVar13 = func_0x080088dc(iVar17);
      iVar8 = *(int *)(param_2 + 0x36c);
      pppiVar11 = (int ***)&piStack_b8;
      func_080091E8(pppiVar11,(uint)*(ushort *)(iVar13 + 8) & (_DAT_080e0540 | 0xf7));
      piVar14 = (int *)func_0x08008920(iVar17);
      iVar13 = func_0x08008918(iVar17);
      uVar4 = func_0x08008940(iVar17);
      uVar5 = func_0800894C(iVar17);
      iVar18 = 0x80e0519;
      func_08050D3C(iVar8,pppiVar11,piVar14,iVar13,uVar4,uVar5,param_2 + 0x380);
    }
    iVar8 = 0;
    iVar15 = 0x364;
    if (*(uint *)(param_2 + 0x364) < 0xc) {
      piVar16 = (int *)_DAT_080e0544[*(uint *)(param_2 + 0x364)];
      switch((uint)piVar16 & 0xfffffffe) {
      case 0x80f19ae:
        _UNK_00000378 = piVar14;
        pppiVar11[0x1d][5] = piVar14;
        iVar13 = piVar16[5];
        *(char *)(iVar13 + 9) = (char)piVar16;
        *(char *)((int)piVar16 + 0x15) = (char)piVar16;
        piVar16[5] = *(int *)(iVar13 + 0x34);
        iVar8 = piVar16[0x1d];
        piRam06c80014 = piVar16;
        *(int **)((int)piVar16 * 2 + 0x14) = piVar16;
        *(undefined1 *)(iVar13 + 1) = 0;
        *(undefined4 *)((int)piVar16 * 2 + 0x14) = 0x80f1aa0;
        iVar17 = piVar16[0x19];
        *(char *)(iVar13 + 0xd) = (char)iVar8;
        uRam080f1d58 = 0x80f1aa0;
        *(char *)(iVar17 + 0x15) = (char)iVar13;
        iRam00070014 = piVar16[5];
        *(int *)((iRam00070014 - (*(int *)(piVar16[0x1d] + 0x44) - (int)piVar16)) + 0x14) =
             iRam00070014;
        iVar17 = *(int *)(sRam08161c2c + 0x44) + 0x24;
        *(int *)(iVar17 * 2) = iRam00070014;
        *(char *)(piVar16 + -6) = (char)iVar17;
        _NotUsed = 0;
        iVar17 = 0x80f250f;
        (*(code *)(iVar18 + 4000))(0,0,0);
        iVar13 = 0x80f279d;
        (*(code *)(iVar17 + 0xfe0))(0,0,0);
        _NotUsed = 0;
        (*(code *)(iVar13 + 4000))(0,0,0,0);
        break;
      case 0x80f89d4:
        do {
          *piVar16 = iVar15;
          piVar16[1] = (int)pppiVar11;
          piVar16[2] = param_2;
          *_DAT_080e0544 = 0;
          _DAT_080e0544[1] = iVar15;
          _DAT_080e0544[2] = iVar8;
          _DAT_080e0544[3] = iVar13;
          _DAT_080e0544[4] = (int)pppiVar11;
          _DAT_080e0544[5] = param_2;
          _DAT_080e0544[6] = iVar13;
          _DAT_080e0544[7] = iVar15;
          _DAT_080e0544[8] = (int)pppiVar11;
          _DAT_080e0544[9] = iVar8;
          _DAT_080e0544[10] = param_2;
          iVar13 = (int)pppiVar11 << 3;
          iVar15 = iVar15 << 0x10;
          iVar8 = (int)pppiVar11 << 7;
          piVar16 = (int *)((int)pppiVar11 << 3);
          _DAT_080e0544 = piVar16;
          param_2 = _UndefinedInstruction;
        } while( true );
      }
      do {
      } while( true );
    }
    uStack_5c = func_0x080088dc(iVar17);
    func_0x080d3914(*(int **)(param_2 + 0x368),&uStack_5c,
                    *(undefined4 *)(**(int **)(param_2 + 0x368) + 0xc));
    if (*(char *)(param_2 + 0x3a0) == '\0') {
      iVar13 = func_0x08008910(iVar17);
      pppiVar11 = (int ***)func_0x08008918(iVar17);
      ppiVar6 = (int **)func_0x08008920(iVar17);
      iStack_b4 = func_0x08008940(iVar17);
      iStack_c0 = iVar13;
      ppiStack_bc = (int **)pppiVar11;
      piStack_b8 = (int *)ppiVar6;
      func_0x080d3914(*(int **)(param_2 + 0x368),&iStack_c0,
                      *(undefined4 *)(**(int **)(param_2 + 0x368) + 0x10));
    }
    else {
      piVar14 = (int *)func_0x08008910(iVar17);
      pppiVar11 = _DAT_080e07d4;
      uVar4 = _DAT_080e07d8;
      if (*(char *)(param_2 + (int)_DAT_080e07d4) != '\0') {
        uVar4 = 0;
      }
      func_08008F60(&iStack_c0,uVar4,0x5000000,2);
      piStack_3c = &iStack_c0;
      piVar16 = (int *)piVar14[1];
      if (piVar16 == (int *)piVar14[3]) {
        iStack_54 = 1;
        iStack_58 = (int)piVar16 - *piVar14 >> 4;
        piVar12 = &iStack_58;
        if (iStack_58 == 0) {
          piVar12 = &iStack_54;
        }
        if (iStack_58 + *piVar12 == 0) {
          pppiVar9 = (int ***)0x0;
          iVar13 = 0;
        }
        else {
          iVar13 = (iStack_58 + *piVar12) * 0x10;
          pppiVar9 = (int ***)malloc(iVar13);
          if (pppiVar9 == (int ***)0x0) {
            pppiVar9 = (int ***)func_080D3BC0(iVar13);
          }
        }
        pppiVar11 = pppiVar9;
        for (piVar12 = (int *)*piVar14; piVar12 != piVar16; piVar12 = piVar12 + 4) {
          if (pppiVar11 != (int ***)0x0) {
            ppiVar6 = (int **)piVar12[1];
            ppiVar7 = (int **)piVar12[2];
            *pppiVar11 = (int **)*piVar12;
            pppiVar11[1] = ppiVar6;
            pppiVar11[2] = ppiVar7;
            pppiVar11[3] = (int **)piVar12[3];
          }
          pppiVar11 = pppiVar11 + 4;
        }
        iVar18 = iStack_54;
        if (iStack_54 == 1) {
          if (pppiVar11 != (int ***)0x0) {
            ppiVar6 = (int **)piStack_3c[1];
            ppiVar7 = (int **)piStack_3c[2];
            *pppiVar11 = (int **)*piStack_3c;
            pppiVar11[1] = ppiVar6;
            pppiVar11[2] = ppiVar7;
            pppiVar11[3] = (int **)piStack_3c[3];
          }
          pppiVar11 = pppiVar11 + 4;
        }
        else {
          for (; iVar18 != 0; iVar18 = iVar18 + -1) {
            if (pppiVar11 != (int ***)0x0) {
              ppiVar6 = (int **)piStack_3c[1];
              ppiVar7 = (int **)piStack_3c[2];
              *pppiVar11 = (int **)*piStack_3c;
              pppiVar11[1] = ppiVar6;
              pppiVar11[2] = ppiVar7;
              pppiVar11[3] = (int **)piStack_3c[3];
            }
            pppiVar11 = pppiVar11 + 4;
          }
        }
        for (iVar18 = *piVar14; iVar18 != piVar14[1]; iVar18 = iVar18 + 0x10) {
        }
        ppiStack_24 = (int **)pppiVar9;
        if (*piVar14 != 0) {
          free();
        }
        *piVar14 = (int)ppiStack_24;
        piVar14[1] = (int)pppiVar11;
        piVar14[3] = (int)ppiStack_24 + iVar13;
      }
      else {
        if (piVar16 != (int *)0x0) {
          *piVar16 = iStack_c0;
          piVar16[1] = (int)ppiStack_bc;
          piVar16[2] = (int)piStack_b8;
          piVar16[3] = iStack_b4;
        }
        piVar14[1] = piVar14[1] + 0x10;
      }
    }
    iVar13 = 0x370;
    func_080093AC(*(undefined4 *)(param_2 + 0x370));
    func_080087C8(iVar17);
  } while( true );
}

// =============================================================================
// Function: func_080E09B0 @ 0x080E09B0
// =============================================================================
undefined4 func_080E09B0(void)

{
  undefined4 in_lr;
  
  func_080007EC();
  return in_lr;
}

// =============================================================================
// Function: func_080E09BC @ 0x080E09BC
// =============================================================================
undefined4 func_080E09BC(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E09E4 @ 0x080E09E4
// =============================================================================
undefined4 func_080E09E4(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x1c0);
  if (uVar1 < 100) {
    *(undefined4 *)(param_1 + 0x30 + uVar1 * 4) = param_2;
    *(uint *)(param_1 + 0x1c0) = uVar1 + 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E0A08 @ 0x080E0A08
// =============================================================================
undefined8 func_080E0A08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 in_lr;
  uint *puVar7;
  
  puVar5 = *(uint **)(param_1 + 0xc);
  puVar4 = *(uint **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x15) == '\0') {
    func_0x080d374c(puVar5,puVar4,(uint)*(byte *)(param_1 + 0x14) << 3);
    uVar2 = 0;
  }
  else {
    puVar6 = puVar4 + (uint)*(byte *)(param_1 + 0x14) * 8;
    uVar1 = *(byte *)(param_1 + 0x16) ^ 1;
    *(char *)(param_1 + 0x16) = (char)uVar1;
    uVar3 = _DAT_080e0a64 << ((uVar1 & 0x3f) << 2);
    uVar1 = ~uVar3;
    do {
      *puVar4 = *puVar5 & uVar3;
      puVar4[1] = puVar5[1] & uVar1;
      puVar4[2] = puVar5[2] & uVar3;
      puVar4[3] = puVar5[3] & uVar1;
      puVar4[4] = puVar5[4] & uVar3;
      puVar4[5] = puVar5[5] & uVar1;
      puVar7 = puVar5 + 7;
      puVar4[6] = puVar5[6] & uVar3;
      puVar5 = puVar5 + 8;
      puVar4[7] = *puVar7 & uVar1;
      puVar4 = puVar4 + 8;
    } while (puVar4 != puVar6);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_080E0A7C @ 0x080E0A7C
// =============================================================================
undefined4 func_080E0A7C(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080E0A88 @ 0x080E0A88
// =============================================================================
undefined4 func_080E0A88(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080E0C38 @ 0x080E0C38
// =============================================================================
undefined4 func_080E0C38(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 *puVar2;
  
  if ((param_1 != (undefined4 *)0xfffffc74) && (param_1 + 0xe3 != param_1 + 0x107)) {
    puVar1 = param_1 + 0x107;
    do {
      puVar2 = puVar1 + -6;
      func_0x080d3914(puVar2,0,*(undefined4 *)(puVar1[-4] + 0xc));
      puVar1 = puVar2;
    } while (param_1 + 0xe3 != puVar2);
  }
  if (param_1 != (undefined4 *)0xfffffc8c) {
    puVar1 = param_1 + 0xe3;
    while (param_1 + 0xdd != puVar1) {
      puVar2 = puVar1 + -2;
      func_08007C28(puVar2,puVar1[-1]);
      func_080079E8(puVar2,2);
      puVar1 = puVar2;
    }
  }
  if (param_1 != (undefined4 *)0xffffffac) {
    piVar4 = param_1 + 0x1c;
    while (param_1 + 0x15 != piVar4) {
      piVar4 = piVar4 + -1;
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        func_080098AC(iVar3 + 8,2);
        func_08007C28(iVar3,*(undefined4 *)(iVar3 + 4));
        func_080079E8(iVar3,2);
        func_08000608(iVar3);
      }
    }
  }
  iVar3 = param_1[0x14];
  if (iVar3 != 0) {
    func_080098AC(iVar3 + 8,2);
    func_08007C28(iVar3,*(undefined4 *)(iVar3 + 4));
    func_080079E8(iVar3,2);
    func_08000608(iVar3);
  }
  func_080098AC(param_1 + 0xe,2);
  func_0x080073e0(param_1 + 0xc,param_1[0xd]);
  func_08007184(param_1 + 0xc,2);
  *param_1 = _DAT_080e0d4c;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E0D50 @ 0x080E0D50
// =============================================================================
longlong func_080E0D50(int param_1)

{
  uint in_lr;
  
  func_08008E64(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x14));
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_080E0D64 @ 0x080E0D64
// =============================================================================
undefined4 func_080E0D64(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080E0D70 @ 0x080E0D70
// =============================================================================
undefined4 func_080E0D70(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  func_080098AC(param_1 + 0xd0,2);
  func_08007C28(param_1 + 0xce,param_1[0xcf]);
  func_080079E8(param_1 + 0xce,2);
  func_080098AC(param_1 + 199,2);
  func_08007C28(param_1 + 0xc5,param_1[0xc6]);
  func_080079E8(param_1 + 0xc5,2);
  func_080098AC(param_1 + 0xbf,2);
  func_0x080073e0(param_1 + 0xbd,param_1[0xbe]);
  func_08007184(param_1 + 0xbd,2);
  func_080098AC(param_1 + 0xb6,2);
  func_08007C28(param_1 + 0xb4,param_1[0xb5]);
  func_080079E8(param_1 + 0xb4,2);
  func_080098AC(param_1 + 0xad,2);
  func_08007C28(param_1 + 0xaa,param_1[0xab]);
  func_080079E8(param_1 + 0xaa,2);
  func_080098AC(param_1 + 100,2);
  func_08007C28(param_1 + 0x61,param_1[0x62]);
  func_080079E8(param_1 + 0x61,2);
  func_080098AC(param_1 + 0x1a,2);
  func_0x080073e0(param_1 + 0x18,param_1[0x19]);
  func_08007184(param_1 + 0x18,2);
  uVar1 = _DAT_080e0e7c;
  param_1[0xc] = _DAT_080e0e7c;
  *param_1 = uVar1;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E0E80 @ 0x080E0E80
// =============================================================================
undefined8 func_080E0E80(byte *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = param_2 - (int)param_1;
  while (iVar2 = iVar1, 0 < iVar2) {
    iVar1 = iVar2 >> 1;
    if ((uint)param_1[iVar1] < *param_3) {
      param_1 = param_1 + iVar1 + 1;
      iVar1 = (iVar2 - iVar1) + -1;
    }
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E0EB4 @ 0x080E0EB4
// =============================================================================
undefined8 func_080E0EB4(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = param_2 - (int)param_1 >> 3;
  if (0 < iVar1) {
    do {
      iVar2 = iVar1 >> 1;
      if (param_1[iVar2 * 2] < *param_3) {
        param_1 = param_1 + iVar2 * 2 + 2;
        iVar2 = (iVar1 - iVar2) + -1;
      }
      iVar1 = iVar2;
    } while (0 < iVar2);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E0EF0 @ 0x080E0EF0
// =============================================================================
undefined4 func_080E0EF0(void)

{
  undefined4 in_lr;
  
  func_0803EEC8();
  return in_lr;
}

// =============================================================================
// Function: func_080E0EFC @ 0x080E0EFC
// =============================================================================
undefined4 func_080E0EFC(uint param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_2 + 1);
  uVar1 = 10;
  if (9 < param_1) {
    pcVar2 = (char *)(param_2 + 2);
    do {
      uVar1 = uVar1 * 10;
      if (param_1 < uVar1) break;
      pcVar2 = pcVar2 + 1;
    } while (uVar1 < _DAT_080e0f44 || uVar1 - _DAT_080e0f44 == 0);
  }
  *pcVar2 = '\0';
  do {
    pcVar2 = pcVar2 + -1;
    uVar1 = func_0x080d0eda(param_1,10);
    *pcVar2 = (char)param_1 + (char)uVar1 * -10 + '0';
    param_1 = uVar1;
  } while (uVar1 != 0);
  return in_lr;
}

// =============================================================================
// Function: func_080E0F48 @ 0x080E0F48
// =============================================================================
longlong func_080E0F48(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint in_lr;
  
  piVar3 = *(int **)(param_1 + 0xc);
  if (*piVar3 != 0) {
    piVar2 = piVar3 + 1;
    func_08009094(piVar2,piVar2 + *piVar3 * 4);
    for (piVar1 = piVar2; piVar1 != piVar3 + *piVar3 * 4 + 1; piVar1 = piVar1 + 4) {
    }
    *piVar3 = *piVar3 - ((int)(piVar3 + *piVar3 * 4 + 1) - (int)piVar2 >> 4);
  }
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_080E0F90 @ 0x080E0F90
// =============================================================================
longlong func_080E0F90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  do {
    iVar7 = 0;
    iVar2 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    do {
      piVar6 = (int *)(*(int *)(iVar2 + iVar1 + 8) + iVar7 * 0x10);
      if ((char)piVar6[3] != '\0') {
        if ((-piVar6[2] | piVar6[2]) < 0) {
          iVar5 = *piVar6;
          iVar3 = func_08007D4C(piVar6 + 1);
          func_0x080d374c(iVar5 + 4,iVar3 * 0x20 + _DAT_080e1014,0x40);
        }
        *(undefined1 *)(piVar6 + 3) = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 7);
  } while (iVar4 < 3);
  if (*(char *)(iVar1 + 0x19) != '\0') {
    *(undefined1 *)(iVar1 + 0x19) = 0;
  }
  if (*(char *)(iVar1 + 0x1a) != '\0') {
    *(undefined1 *)(iVar1 + 0x1a) = 0;
  }
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_080E1018 @ 0x080E1018
// =============================================================================
undefined4 func_080E1018(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080E1024 @ 0x080E1024
// =============================================================================
undefined4 func_080E1024(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080E1030 @ 0x080E1030
// =============================================================================
undefined4 func_080E1030(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080E103C @ 0x080E103C
// =============================================================================
undefined4 func_080E103C(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e1058;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E105C @ 0x080E105C
// =============================================================================
undefined4 func_080E105C(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((param_1 != (undefined4 *)0xfffffff8) && (piVar3 = param_1 + 5, param_1 + 2 != piVar3)) {
    do {
      piVar3 = piVar3 + -1;
      puVar2 = (undefined4 *)*piVar3;
      if (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 0x1c;
        while (puVar2 != puVar1) {
          func_08007C28(puVar1 + -3,puVar1[-2]);
          func_080079E8(puVar1 + -3,2);
          func_08000608(puVar1[-4]);
          puVar1 = puVar1 + -4;
        }
        func_08000608(puVar2);
      }
    } while (param_1 + 2 != piVar3);
  }
  *param_1 = _DAT_080e10dc;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E10E0 @ 0x080E10E0
// =============================================================================
undefined4 func_080E10E0(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080E10F8 @ 0x080E10F8
// =============================================================================
undefined4 func_080E10F8(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e1114;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E1128 @ 0x080E1128
// =============================================================================
undefined4 func_080E1128(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e1144;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E1148 @ 0x080E1148
// =============================================================================
undefined4 func_080E1148(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  func_0x080073e0(param_1 + 0xb0,*(undefined4 *)(param_1 + 0xb4));
  func_08007184(param_1 + 0xb0,2);
  func_08007C28(param_1 + 0xa8,*(undefined4 *)(param_1 + 0xac));
  func_080079E8(param_1 + 0xa8,2);
  *(undefined4 *)(param_1 + 0x10) = _DAT_080e1188;
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E118C @ 0x080E118C
// =============================================================================
undefined8 func_080E118C(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined1 auStack_34 [32];
  undefined1 auStack_14 [4];
  
  if (param_3 == 0xff) {
    func_0x0800df50(auStack_14,*(undefined2 *)(param_2 + 4));
    uVar1 = func_0800DF58(auStack_14);
    uVar2 = strlen();
    if (0x1f < uVar2) {
      uVar2 = 0x1f;
    }
    memcpy(auStack_34,uVar1,uVar2);
    auStack_34[uVar2] = 0;
    *param_1 = 1;
    strcpy(param_1 + 4,auStack_34);
  }
  else {
    auStack_34[0] = 0;
    *param_1 = 0;
    strcpy(param_1 + 4);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E11EC @ 0x080E11EC
// =============================================================================
undefined4 func_080E11EC(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + _DAT_080e148c) = _DAT_080e1490;
  if (param_1 != -0x548) {
    iVar3 = param_1 + 0x558;
    while (param_1 + 0x548 != iVar3) {
      iVar2 = iVar3 + -8;
      func_0x080073e0(iVar2,*(undefined4 *)(iVar3 + -4));
      func_08007184(iVar2,2);
      iVar3 = iVar2;
    }
  }
  func_08007C28(param_1 + 0x540,*(undefined4 *)(param_1 + 0x544));
  func_080079E8(param_1 + 0x540,2);
  if ((param_1 != -0x500) && (iVar3 = param_1 + 0x540, param_1 + 0x500 != param_1 + 0x540)) {
    do {
      iVar2 = iVar3 + -0x10;
      func_0x080073e0(iVar3 + -8,*(undefined4 *)(iVar3 + -4));
      func_08007184(iVar3 + -8,2);
      func_08007C28(iVar2,*(undefined4 *)(iVar3 + -0xc));
      func_080079E8(iVar2,2);
      iVar3 = iVar2;
    } while (param_1 + 0x500 != iVar2);
  }
  func_0x080073e0(param_1 + 0x4f8,*(undefined4 *)(param_1 + 0x4fc));
  func_08007184(param_1 + 0x4f8,2);
  func_08007C28(param_1 + 0x4f0,*(undefined4 *)(param_1 + 0x4f4));
  func_080079E8(param_1 + 0x4f0,2);
  func_0x080073e0(param_1 + 0x4e8,*(undefined4 *)(param_1 + 0x4ec));
  func_08007184(param_1 + 0x4e8,2);
  func_08007C28(param_1 + 0x4e0,*(undefined4 *)(param_1 + 0x4e4));
  func_080079E8(param_1 + 0x4e0,2);
  func_0x080073e0(param_1 + 0x4d8,*(undefined4 *)(param_1 + 0x4dc));
  func_08007184(param_1 + 0x4d8,2);
  func_08007C28(param_1 + 0x4d0,*(undefined4 *)(param_1 + 0x4d4));
  func_080079E8(param_1 + 0x4d0,2);
  func_08007C28(param_1 + 0x4c8,*(undefined4 *)(param_1 + 0x4cc));
  func_080079E8(param_1 + 0x4c8,2);
  func_0x080073e0(param_1 + 0x4c0,*(undefined4 *)(param_1 + 0x4c4));
  func_08007184(param_1 + 0x4c0,2);
  func_08007C28(param_1 + 0x4b8,*(undefined4 *)(param_1 + 0x4bc));
  func_080079E8(param_1 + 0x4b8,2);
  func_0x080073e0(param_1 + 0x4b0,*(undefined4 *)(param_1 + 0x4b4));
  func_08007184(param_1 + 0x4b0,2);
  func_08007C28(param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x4ac));
  func_080079E8(param_1 + 0x4a8,2);
  func_0x080073e0(param_1 + 0x4a0,*(undefined4 *)(param_1 + 0x4a4));
  func_08007184(param_1 + 0x4a0,2);
  func_08007C28(param_1 + 0x498,*(undefined4 *)(param_1 + 0x49c));
  func_080079E8(param_1 + 0x498,2);
  func_0x080073e0(param_1 + 0x490,*(undefined4 *)(param_1 + 0x494));
  func_08007184(param_1 + 0x490,2);
  func_08007C28(param_1 + 0x488,*(undefined4 *)(param_1 + 0x48c));
  func_080079E8(param_1 + 0x488,2);
  func_0x080073e0(param_1 + 0x480,*(undefined4 *)(param_1 + 0x484));
  func_08007184(param_1 + 0x480,2);
  func_08007C28(param_1 + 0x478,*(undefined4 *)(param_1 + 0x47c));
  func_080079E8(param_1 + 0x478,2);
  func_0x080073e0(param_1 + 0x470,*(undefined4 *)(param_1 + 0x474));
  func_08007184(param_1 + 0x470,2);
  func_08007C28(param_1 + 0x468,*(undefined4 *)(param_1 + 0x46c));
  func_080079E8(param_1 + 0x468,2);
  uVar1 = _DAT_080e1494;
  *(undefined4 *)(param_1 + 0x1d0) = _DAT_080e1494;
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (*(int *)(param_1 + 0x10) != 0) {
    func_08050D0C(*(int *)(param_1 + 0x10),3);
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E1498 @ 0x080E1498
// =============================================================================
undefined4 func_080E1498(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e14b4;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E14B8 @ 0x080E14B8
// =============================================================================
undefined8 func_080E14B8(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined1 auStack_3c [40];
  
  if (5 < param_3 - 0xfaU) {
    auStack_3c[8] = 0;
    *param_1 = 0;
    strcpy(param_1 + 4);
    goto LAB_080e15b6;
  }
  switch(*(uint *)((param_3 - 0xfaU) * 4 + _DAT_080e14d4) & 0xfffffffe) {
  case 0x80e14d8:
  case 0x80e14f0:
    func_0804EC84(*(undefined4 *)(param_2 + 0x14),auStack_3c,0);
    puVar1 = auStack_3c + 8;
    uVar2 = strlen(auStack_3c);
    if (0x1f < uVar2) {
      uVar2 = 0x1f;
    }
    memcpy(puVar1,auStack_3c,uVar2);
    puVar1[uVar2] = 0;
    *param_1 = 1;
    strcpy(param_1 + 4,puVar1);
    goto LAB_080e15b6;
  case 0x80e1528:
    iVar3 = *(int *)(param_2 + 4);
    break;
  case 0x80e152c:
    iVar3 = *(int *)(param_2 + 8);
    break;
  case 0x80e1530:
    iVar3 = *(int *)(param_2 + 0xc);
    break;
  case 0x80e1534:
    iVar3 = *(int *)(param_2 + 0x10);
    break;
  case 0x80e1588:
    goto case_080E1588;
  }
  if (iVar3 == 0x80) {
case_080E1588:
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    uVar2 = strlen(uVar4);
    if (0x1f < uVar2) {
      uVar2 = 0x1f;
    }
    memcpy(auStack_3c,uVar4,uVar2);
    auStack_3c[uVar2] = 0;
    *param_1 = 1;
    strcpy(param_1 + 4,auStack_3c);
  }
  else {
    puVar1 = auStack_3c + 8;
    iVar3 = iVar3 * 0xd + _DAT_080e1574;
    uVar2 = strlen(iVar3);
    if (0x1f < uVar2) {
      uVar2 = 0x1f;
    }
    memcpy(puVar1,iVar3,uVar2);
    puVar1[uVar2] = 0;
    *param_1 = 1;
    strcpy(param_1 + 4,puVar1);
  }
LAB_080e15b6:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E1824 @ 0x080E1824
// =============================================================================
undefined4 func_080E1824(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e1840;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E1844 @ 0x080E1844
// =============================================================================
undefined8 func_080E1844(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_30 [32];
  
  if (param_3 == 0xff) {
    iVar2 = *(int *)(param_2 + 4) * 0x14 + _DAT_080e1888;
    uVar1 = strlen(iVar2);
    if (0x1f < uVar1) {
      uVar1 = 0x1f;
    }
    memcpy(auStack_30,iVar2,uVar1);
    auStack_30[uVar1] = 0;
    *param_1 = 1;
    strcpy(param_1 + 4,auStack_30);
  }
  else {
    auStack_30[0] = 0;
    *param_1 = 0;
    strcpy(param_1 + 4);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E18A4 @ 0x080E18A4
// =============================================================================
undefined4 func_080E18A4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + _DAT_080e1958) = _DAT_080e195c;
  func_0x080073e0(param_1 + 0x144,*(undefined4 *)(param_1 + 0x148));
  func_08007184(param_1 + 0x144,2);
  func_08007C28(param_1 + 0x13c,*(undefined4 *)(param_1 + 0x140));
  func_080079E8(param_1 + 0x13c,2);
  func_0x080073e0(param_1 + 0x134,*(undefined4 *)(param_1 + 0x138));
  func_08007184(param_1 + 0x134,2);
  func_08007C28(param_1 + 300,*(undefined4 *)(param_1 + 0x130));
  func_080079E8(param_1 + 300,2);
  func_0x080073e0(param_1 + 0x124,*(undefined4 *)(param_1 + 0x128));
  func_08007184(param_1 + 0x124,2);
  func_08007C28(param_1 + 0x11c,*(undefined4 *)(param_1 + 0x120));
  func_080079E8(param_1 + 0x11c,2);
  uVar1 = _DAT_080e1960;
  *(undefined4 *)(param_1 + 0x50) = _DAT_080e1960;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (*(int *)(param_1 + 0x10) != 0) {
    func_08050D0C(*(int *)(param_1 + 0x10),3);
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E1964 @ 0x080E1964
// =============================================================================
undefined4 func_080E1964(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e1980;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E1984 @ 0x080E1984
// =============================================================================
undefined4 func_080E1984(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e19a0;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E19A4 @ 0x080E19A4
// =============================================================================
undefined8 func_080E19A4(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined1 auStack_30 [32];
  
  if (param_3 == 0xff) {
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar1 = strlen(uVar2);
    if (0x1f < uVar1) {
      uVar1 = 0x1f;
    }
    memcpy(auStack_30,uVar2,uVar1);
    auStack_30[uVar1] = 0;
    *param_1 = 1;
    strcpy(param_1 + 4,auStack_30);
  }
  else {
    auStack_30[0] = 0;
    *param_1 = 0;
    strcpy(param_1 + 4);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E19F8 @ 0x080E19F8
// =============================================================================
undefined4 func_080E19F8(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + _ASSET_BLOCK_080E1A20) = _DAT_080e1a24;
  if (*(int *)(param_1 + 0x10) != 0) {
    func_08050D0C(*(int *)(param_1 + 0x10),3);
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E1A48 @ 0x080E1A48
// =============================================================================
undefined8 func_080E1A48(void)

{
  undefined4 in_lr;
  
  func_08076EA8();
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_080E1A54 @ 0x080E1A54
// =============================================================================
undefined4 func_080E1A54(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + _DAT_080e1a68) = _DAT_080e1a6c;
  func_08076E0C();
  return in_lr;
}

// =============================================================================
// Function: func_080E1A70 @ 0x080E1A70
// =============================================================================
undefined8 func_080E1A70(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  short *psVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  short *psStack_24;
  
  func_08076EA8();
  uVar5 = 0;
  if (*(short *)((int)param_1 + _DAT_080e1c08) + 0x30 < (int)*(short *)(param_1 + 0x164)) {
    psVar3 = (short *)((int)param_1 + _DAT_080e1c08);
    do {
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(param_1 + 0x164));
  }
  psStack_24 = (short *)((int)param_1 + _DAT_080e1c10);
  if (uVar5 < *(uint *)((int)param_1 + _DAT_080e1c0c)) {
    puVar4 = (uint *)(_DAT_080e1c0c + (int)param_1);
    psVar3 = (short *)(uVar5 * 0x10 + _DAT_080e1c08 + (int)param_1);
    do {
      if ((int)*psVar3 <= *(short *)(param_1 + 0x164) + 0xa0) {
        pbVar2 = (byte *)func_0x08008920(*param_1);
        func_0804EA94(&uStack_34,*(undefined4 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(param_1 + 0x164),0x10,2,1,1,0);
        bVar1 = *pbVar2;
        if (bVar1 < 0x80) {
          *(undefined4 *)(pbVar2 + (uint)bVar1 * 8 + 4) = uStack_34;
          *(undefined2 *)(pbVar2 + (uint)bVar1 * 8 + 4 + 4) = uStack_30;
          *pbVar2 = bVar1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar4);
  }
  uVar5 = 0;
  if (*psStack_24 + 0x30 < (int)*(short *)(param_1 + 0x164)) {
    psVar3 = (short *)((int)param_1 + _DAT_080e1c10);
    do {
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(param_1 + 0x164));
  }
  if (uVar5 < *(uint *)((int)param_1 + _DAT_080e1c14)) {
    puVar4 = (uint *)(_DAT_080e1c14 + (int)param_1);
    psVar3 = (short *)(uVar5 * 0x10 + _DAT_080e1c10 + (int)param_1);
    do {
      if ((int)*psVar3 <= *(short *)(param_1 + 0x164) + 0xa0) {
        pbVar2 = (byte *)func_0x08008920(*param_1);
        func_0804EA94(&uStack_2c,*(undefined4 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(param_1 + 0x164),5,1,1,0,0);
        bVar1 = *pbVar2;
        if (bVar1 < 0x80) {
          *(undefined4 *)(pbVar2 + (uint)bVar1 * 8 + 4) = uStack_2c;
          *(undefined2 *)(pbVar2 + (uint)bVar1 * 8 + 4 + 4) = uStack_28;
          *pbVar2 = bVar1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar4);
  }
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_080E1C18 @ 0x080E1C18
// =============================================================================
undefined4 func_080E1C18(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  for (piVar1 = (int *)(param_1 + _DAT_080e1c64);
      piVar1 != (int *)(param_1 + _DAT_080e1c60) + *(int *)(param_1 + _DAT_080e1c60) * 4 + 1;
      piVar1 = piVar1 + 4) {
  }
  for (piVar1 = (int *)(param_1 + _DAT_080e1c6c);
      piVar1 != (int *)(param_1 + _DAT_080e1c68) + *(int *)(param_1 + _DAT_080e1c68) * 4 + 1;
      piVar1 = piVar1 + 4) {
  }
  func_08076E0C(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E1C70 @ 0x080E1C70
// =============================================================================
undefined8 func_080E1C70(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  short *psVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  func_08076EA8();
  uVar5 = 0;
  if (*(short *)((int)param_1 + _DAT_080e1d4c) + 0x30 < (int)*(short *)(param_1 + 0x164)) {
    psVar3 = (short *)((int)param_1 + _DAT_080e1d4c);
    do {
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (*psVar3 + 0x30 < (int)*(short *)(param_1 + 0x164));
  }
  if (uVar5 < *(uint *)((int)param_1 + _DAT_080e1d50)) {
    puVar4 = (uint *)(_DAT_080e1d50 + (int)param_1);
    psVar3 = (short *)(uVar5 * 0x10 + _DAT_080e1d4c + (int)param_1);
    do {
      if ((int)*psVar3 <= *(short *)(param_1 + 0x164) + 0xa0) {
        pbVar2 = (byte *)func_0x08008920(*param_1);
        func_0804EA94(&uStack_28,*(undefined4 *)(psVar3 + 2),
                      (int)*psVar3 - (int)*(short *)(param_1 + 0x164),5,1,1,0,0);
        bVar1 = *pbVar2;
        if (bVar1 < 0x80) {
          *(undefined4 *)(pbVar2 + (uint)bVar1 * 8 + 4) = uStack_28;
          *(undefined2 *)(pbVar2 + (uint)bVar1 * 8 + 4 + 4) = uStack_24;
          *pbVar2 = bVar1 + 1;
        }
      }
      psVar3 = psVar3 + 8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar4);
  }
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_080E1D54 @ 0x080E1D54
// =============================================================================
undefined4 func_080E1D54(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  for (piVar1 = (int *)(param_1 + _DAT_080e1d88);
      piVar1 != (int *)(param_1 + _DAT_080e1d84) + *(int *)(param_1 + _DAT_080e1d84) * 4 + 1;
      piVar1 = piVar1 + 4) {
  }
  func_08076E0C(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E1D8C @ 0x080E1D8C
// =============================================================================
undefined4 func_080E1D8C(void)

{
  undefined4 in_lr;
  
  func_08076E0C();
  return in_lr;
}

// =============================================================================
// Function: func_080E1D98 @ 0x080E1D98
// =============================================================================
undefined4 func_080E1D98(void)

{
  undefined4 in_lr;
  
  func_08076E0C();
  return in_lr;
}

// =============================================================================
// Function: func_080E1DA4 @ 0x080E1DA4
// =============================================================================
undefined4 func_080E1DA4(void)

{
  undefined4 in_lr;
  
  func_08076E0C();
  return in_lr;
}

// =============================================================================
// Function: func_080E1DB0 @ 0x080E1DB0
// =============================================================================
undefined4 func_080E1DB0(void)

{
  undefined4 in_lr;
  
  func_08076E0C();
  return in_lr;
}

// =============================================================================
// Function: func_080E1DBC @ 0x080E1DBC
// =============================================================================
undefined8 func_080E1DBC(void)

{
  undefined4 in_lr;
  
  func_08076EA8();
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_080E1DC8 @ 0x080E1DC8
// =============================================================================
undefined4 func_080E1DC8(void)

{
  undefined4 in_lr;
  
  func_08076E0C();
  return in_lr;
}

// =============================================================================
// Function: func_080E1DD4 @ 0x080E1DD4
// =============================================================================
undefined4 func_080E1DD4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  for (piVar1 = (int *)(param_1 + 0x128);
      piVar1 != (int *)(param_1 + 0x124) + *(int *)(param_1 + 0x124) * 2 + 1; piVar1 = piVar1 + 2) {
  }
  *(undefined4 *)(param_1 + 0xc) = _DAT_080e1e20;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + _DAT_080e1e24) + 8));
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E1E28 @ 0x080E1E28
// =============================================================================
undefined4 func_080E1E28(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if ((param_1 + _DAT_080e1f80 != 0) &&
     (iVar3 = param_1 + _DAT_080e1f80 + 0x50, param_1 + _DAT_080e1f80 != iVar3)) {
    iVar5 = param_1 + _DAT_080e1f80;
    do {
      iVar4 = iVar3 + -8;
      func_0x080073e0(iVar4,*(undefined4 *)(iVar3 + -4));
      func_08007184(iVar4,2);
      iVar3 = iVar4;
    } while (iVar5 != iVar4);
  }
  piVar6 = (int *)(param_1 + _DAT_080e1f88);
  piVar2 = (int *)(_DAT_080e1f8c + param_1);
  if ((param_1 + _DAT_080e1f84 != 0) && (param_1 + _DAT_080e1f84 != param_1 + _DAT_080e1f80)) {
    iVar5 = param_1 + _DAT_080e1f84;
    iVar3 = param_1 + _DAT_080e1f80;
    do {
      iVar4 = iVar3 + -8;
      func_08007C28(iVar4,*(undefined4 *)(iVar3 + -4));
      func_080079E8(iVar4,2);
      iVar3 = iVar4;
    } while (iVar5 != iVar4);
  }
  iVar3 = param_1 + _DAT_080e1f90;
  func_0x080073e0(iVar3,*(undefined4 *)(iVar3 + 4));
  func_08007184(iVar3,2);
  iVar3 = param_1 + _DAT_080e1f94;
  func_08007C28(iVar3,*(undefined4 *)(iVar3 + 4));
  func_080079E8(iVar3,2);
  iVar3 = param_1 + _DAT_080e1f98;
  func_0x080073e0(iVar3,*(undefined4 *)(iVar3 + 4));
  func_08007184(iVar3,2);
  iVar3 = param_1 + _DAT_080e1f9c;
  func_08007C28(iVar3,*(undefined4 *)(iVar3 + 4));
  func_080079E8(iVar3,2);
  for (; piVar6 != (int *)(param_1 + _DAT_080e1fa0) + *(int *)(param_1 + _DAT_080e1fa0) * 3 + 1;
      piVar6 = piVar6 + 3) {
  }
  for (; piVar2 != (int *)(param_1 + _DAT_080e1fa4) + *(int *)(param_1 + _DAT_080e1fa4) * 4 + 1;
      piVar2 = piVar2 + 4) {
  }
  func_08050D0C(param_1 + 0x134,2);
  uVar1 = _DAT_080e1fa8;
  *(undefined4 *)(param_1 + 0x54) = _DAT_080e1fa8;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    func_08075DEC(iVar3 + 0x28,2);
    for (iVar5 = *(int *)(iVar3 + 0x18); iVar5 != *(int *)(iVar3 + 0x1c); iVar5 = iVar5 + 0x40) {
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      free();
    }
    func_08000608(iVar3);
  }
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 != (int *)0x0) {
    func_0x080d3914(piVar6,3,*(undefined4 *)(*piVar6 + 8));
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E1FAC @ 0x080E1FAC
// =============================================================================
undefined4 func_080E1FAC(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  func_0x080073e0(param_1 + 0x30,*(undefined4 *)(param_1 + 0x34));
  func_08007184(param_1 + 0x30,2);
  func_08007C28(param_1 + 0x28,*(undefined4 *)(param_1 + 0x2c));
  func_080079E8(param_1 + 0x28,2);
  func_0x080073e0(param_1 + 0x20,*(undefined4 *)(param_1 + 0x24));
  func_08007184(param_1 + 0x20,2);
  func_08007C28(param_1 + 0x18,*(undefined4 *)(param_1 + 0x1c));
  func_080079E8(param_1 + 0x18,2);
  if (*(int *)(param_1 + 0xc) != 0) {
    func_08050D0C(*(int *)(param_1 + 0xc),3);
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E2018 @ 0x080E2018
// =============================================================================
undefined4 func_080E2018(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_1 != -0xe0) {
    iVar3 = param_1 + 0x1a0;
    while (param_1 + 0xe0 != iVar3) {
      iVar3 = iVar3 + -0x30;
      func_080E20C0(iVar3,0);
    }
  }
  for (iVar3 = *(int *)(param_1 + 0xd0); iVar3 != *(int *)(param_1 + 0xd4); iVar3 = iVar3 + 0x1c) {
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    free();
  }
  uVar1 = _DAT_080e2090;
  *(undefined4 *)(param_1 + 0xa0) = _DAT_080e2090;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  func_080756D0(param_1 + 0x18,2);
  piVar2 = *(int **)(param_1 + 0xc);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E20C0 @ 0x080E20C0
// =============================================================================
undefined4 func_080E20C0(int *param_1,uint param_2)

{
  undefined4 in_lr;
  
  if (param_1[8] != 0) {
    free();
  }
  if (param_1[4] != 0) {
    free();
  }
  if (*param_1 != 0) {
    free();
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E20F8 @ 0x080E20F8
// =============================================================================
undefined4 func_080E20F8(void)

{
  undefined4 in_lr;
  
  func_08070C88();
  return in_lr;
}

// =============================================================================
// Function: func_080E2104 @ 0x080E2104
// =============================================================================
undefined4 func_080E2104(void)

{
  undefined4 in_lr;
  
  func_08070C88();
  return in_lr;
}

// =============================================================================
// Function: func_080E2110 @ 0x080E2110
// =============================================================================
undefined4 func_080E2110(void)

{
  undefined4 in_lr;
  
  func_08070C88();
  return in_lr;
}

// =============================================================================
// Function: func_080E211C @ 0x080E211C
// =============================================================================
undefined4 func_080E211C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  for (piVar1 = (int *)(param_1 + 0x128);
      piVar1 != (int *)(param_1 + 0x124) + *(int *)(param_1 + 0x124) * 2 + 1; piVar1 = piVar1 + 2) {
  }
  *(undefined4 *)(param_1 + 0xc) = _DAT_080e2168;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + _DAT_080e216c) + 8));
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E2170 @ 0x080E2170
// =============================================================================
undefined4 func_080E2170(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 8);
  if (*(int *)(iVar2 + 8) != 0) {
    *(int *)(*(int *)(iVar2 + 8) + 4) = param_1;
  }
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 4);
  if (param_1 == *param_2) {
    *param_2 = iVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (param_1 == *(int *)(iVar1 + 8)) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    else {
      *(int *)(iVar1 + 0xc) = iVar2;
    }
  }
  *(int *)(iVar2 + 8) = param_1;
  *(int *)(param_1 + 4) = iVar2;
  return in_lr;
}

// =============================================================================
// Function: func_080E21A8 @ 0x080E21A8
// =============================================================================
undefined4 func_080E21A8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0xc);
  if (*(int *)(iVar2 + 0xc) != 0) {
    *(int *)(*(int *)(iVar2 + 0xc) + 4) = param_1;
  }
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 4);
  if (param_1 == *param_2) {
    *param_2 = iVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (param_1 == *(int *)(iVar1 + 0xc)) {
      *(int *)(iVar1 + 0xc) = iVar2;
    }
    else {
      *(int *)(iVar1 + 8) = iVar2;
    }
  }
  *(int *)(iVar2 + 0xc) = param_1;
  *(int *)(param_1 + 4) = iVar2;
  return in_lr;
}

// =============================================================================
// Function: func_080E21E0 @ 0x080E21E0
// =============================================================================
undefined4 func_080E21E0(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  *param_1 = 0;
  if (param_1 != (undefined1 *)*param_2) {
    pcVar4 = *(char **)(param_1 + 4);
    cVar1 = *pcVar4;
    while (cVar1 == '\0') {
      pcVar2 = *(char **)(*(int *)(pcVar4 + 4) + 8);
      if (pcVar4 == pcVar2) {
        pcVar2 = *(char **)(*(int *)(pcVar4 + 4) + 0xc);
        if ((pcVar2 == (char *)0x0) || (*pcVar2 != '\0')) {
          puVar3 = *(undefined1 **)(param_1 + 4);
          if (param_1 == *(undefined1 **)(puVar3 + 0xc)) {
            func_080E2170(puVar3,param_2);
            param_1 = puVar3;
          }
          **(undefined1 **)(param_1 + 4) = 1;
          **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
          func_080E21A8(*(undefined4 *)(*(int *)(param_1 + 4) + 4),param_2);
        }
        else {
LAB_080e2242:
          *pcVar4 = '\x01';
          *pcVar2 = '\x01';
          **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
          param_1 = *(undefined1 **)(*(int *)(param_1 + 4) + 4);
        }
      }
      else {
        if ((pcVar2 != (char *)0x0) && (*pcVar2 == '\0')) goto LAB_080e2242;
        puVar3 = *(undefined1 **)(param_1 + 4);
        if (param_1 == *(undefined1 **)(puVar3 + 8)) {
          func_080E21A8(puVar3,param_2);
          param_1 = puVar3;
        }
        **(undefined1 **)(param_1 + 4) = 1;
        **(undefined1 **)(*(int *)(param_1 + 4) + 4) = 0;
        func_080E2170(*(undefined4 *)(*(int *)(param_1 + 4) + 4),param_2);
      }
      if (param_1 == (undefined1 *)*param_2) break;
      pcVar4 = *(char **)(param_1 + 4);
      cVar1 = *pcVar4;
    }
  }
  *(undefined1 *)*param_2 = 1;
  return in_lr;
}

// =============================================================================
// Function: func_080E2294 @ 0x080E2294
// =============================================================================
undefined8 func_080E2294(int *param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_4 == *(int *)(param_2 + 4)) ||
     ((param_6 == 0 && ((param_3 != 0 || (*param_5 < *(uint *)(param_4 + 0x10))))))) {
    iVar1 = malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = func_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(uint *)(iVar1 + 0x10) = *param_5;
      *(uint *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 8) = iVar1;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 == iVar2) {
      *(int *)(param_4 + 4) = iVar1;
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
    else if (param_4 == *(int *)(iVar2 + 8)) {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  else {
    iVar1 = malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = func_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(uint *)(iVar1 + 0x10) = *param_5;
      *(uint *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 0xc) = iVar1;
    if (param_4 == *(int *)(*(int *)(param_2 + 4) + 0xc)) {
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
  }
  *(int *)(iVar1 + 4) = param_4;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  func_080E21E0(iVar1,*(int *)(param_2 + 4) + 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E2354 @ 0x080E2354
// =============================================================================
undefined8 func_080E2354(char *param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  bool bVar2;
  
  if ((*param_1 == '\0') && (*(char **)(*(int *)(param_1 + 4) + 4) == param_1)) {
    pcVar1 = *(char **)(param_1 + 0xc);
  }
  else {
    pcVar1 = *(char **)(param_1 + 8);
    if (pcVar1 == (char *)0x0) {
      do {
        pcVar1 = *(char **)(param_1 + 4);
        bVar2 = param_1 == *(char **)(pcVar1 + 8);
        param_1 = pcVar1;
      } while (bVar2);
    }
    else {
      for (; *(int *)(pcVar1 + 0xc) != 0; pcVar1 = *(char **)(pcVar1 + 0xc)) {
      }
    }
  }
  return CONCAT44(in_lr,pcVar1);
}

// =============================================================================
// Function: func_080E2390 @ 0x080E2390
// =============================================================================
undefined8 func_080E2390(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  bool bVar3;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(param_2 + 4);
  bVar3 = true;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    do {
      iVar1 = iVar2;
      bVar3 = *param_3 < *(uint *)(iVar1 + 0x10);
      if (bVar3) {
        iVar2 = *(int *)(iVar1 + 8);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
    } while (iVar2 != 0);
  }
  iStack_24 = iVar1;
  if (bVar3) {
    iStack_20 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar1 != iStack_20) {
      iStack_24 = func_080E2354(iVar1);
      goto LAB_080e2400;
    }
    func_080E2294(&iStack_1c,param_2,0,iVar1,param_3,0);
  }
  else {
LAB_080e2400:
    if (*param_3 <= *(uint *)(iStack_24 + 0x10)) {
      *param_1 = iStack_24;
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_080e2434;
    }
    func_080E2294(&iStack_20,param_2,0,iVar1,param_3,0);
    iStack_1c = iStack_20;
  }
  *param_1 = iStack_1c;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_080e2434:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E2444 @ 0x080E2444
// =============================================================================
undefined8 func_080E2444(int *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  bool bVar5;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [2];
  
  iVar2 = *param_3;
  if (iVar2 == *(int *)(*(int *)(param_2 + 4) + 8)) {
    if (*(int *)(param_2 + 8) != 0) {
      if (*param_4 < *(uint *)(iVar2 + 0x10)) {
LAB_080e2548:
        func_080E2294(param_1,param_2,iVar2,iVar2,param_4,0);
        goto LAB_080e25ea;
      }
      if (*param_4 <= *(uint *)(iVar2 + 0x10)) {
        *param_1 = iVar2;
        goto LAB_080e25ea;
      }
      iStack_2c = iVar2;
      iVar1 = func_080E2B28(iVar2);
      iStack_2c = iVar1;
      if (iVar1 == *(int *)(param_2 + 4)) {
        iVar3 = *param_3;
        iVar2 = iVar3;
      }
      else {
        if (*(uint *)(iVar1 + 0x10) <= *param_4) goto LAB_080e25dc;
        iVar3 = *param_3;
        iVar2 = iVar3;
        if (*(int *)(iVar3 + 0xc) != 0) goto LAB_080e25c2;
      }
LAB_080e25b2:
      func_080E2294(param_1,param_2,0,iVar3,param_4,iVar2);
      goto LAB_080e25ea;
    }
    func_080E2390(&iStack_2c,param_2,param_4);
  }
  else if (iVar2 == *(int *)(param_2 + 4)) {
    iVar3 = *(int *)(iVar2 + 0xc);
    if (*(uint *)(iVar3 + 0x10) < *param_4) goto LAB_080e25b2;
    func_080E2390(&iStack_2c,param_2,param_4);
  }
  else {
    iStack_2c = iVar2;
    iVar3 = func_080E2354(iVar2);
    iVar2 = *param_3;
    bVar4 = *param_4 < *(uint *)(iVar2 + 0x10);
    iStack_2c = iVar3;
    if ((bVar4) && (*(uint *)(iVar3 + 0x10) < *param_4)) {
      if (*(int *)(iVar3 + 0xc) != 0) goto LAB_080e2548;
      iVar1 = 0;
      iVar2 = iVar3;
LAB_080e25ca:
      func_080E2294(param_1,param_2,iVar1,iVar3,param_4,iVar2);
      goto LAB_080e25ea;
    }
    iStack_28 = *param_3;
    iVar1 = func_080E2B28();
    bVar5 = !bVar4;
    iStack_28 = iVar1;
    if (!bVar4) {
      iVar3 = *param_3;
      bVar5 = *(uint *)(iVar3 + 0x10) < *param_4;
      if ((bVar5) && ((iVar1 == *(int *)(param_2 + 4) || (*param_4 < *(uint *)(iVar1 + 0x10))))) {
        iVar2 = iVar3;
        if (*(int *)(iVar3 + 0xc) == 0) goto LAB_080e25b2;
LAB_080e25c2:
        iVar3 = iVar1;
        iVar2 = 0;
        goto LAB_080e25ca;
      }
    }
    if (bVar4 == bVar5) {
      iStack_2c = *param_3;
    }
    else {
LAB_080e25dc:
      func_080E2390(aiStack_24,param_2,param_4);
      iStack_2c = aiStack_24[0];
    }
  }
  *param_1 = iStack_2c;
LAB_080e25ea:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E25FC @ 0x080E25FC
// =============================================================================
undefined8 func_080E25FC(char *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 in_lr;
  
  pcVar3 = *(char **)(param_1 + 8);
  pcVar2 = param_1;
  if (pcVar3 == (char *)0x0) {
LAB_080e2624:
    pcVar3 = *(char **)(pcVar2 + 0xc);
    pcVar8 = pcVar2;
  }
  else {
    pcVar2 = *(char **)(param_1 + 0xc);
    pcVar8 = param_1;
    if (pcVar2 != (char *)0x0) {
      for (; *(int *)(pcVar2 + 8) != 0; pcVar2 = *(char **)(pcVar2 + 8)) {
      }
      goto LAB_080e2624;
    }
  }
  if (pcVar8 == param_1) {
    pcVar2 = *(char **)(pcVar8 + 4);
    if (pcVar3 != (char *)0x0) {
      *(char **)(pcVar3 + 4) = pcVar2;
    }
    if ((char *)*param_2 == pcVar8) {
      *param_2 = pcVar3;
    }
    else {
      iVar4 = *(int *)(pcVar8 + 4);
      if (*(char **)(iVar4 + 8) == pcVar8) {
        *(char **)(iVar4 + 8) = pcVar3;
      }
      else {
        *(char **)(iVar4 + 0xc) = pcVar3;
      }
    }
    if ((char *)*param_3 == param_1) {
      if (*(int *)(param_1 + 0xc) == 0) {
        *param_3 = *(undefined4 *)(param_1 + 4);
      }
      else {
        iVar4 = *(int *)(pcVar3 + 8);
        pcVar5 = pcVar3;
        while (iVar4 != 0) {
          pcVar5 = *(char **)(pcVar5 + 8);
          iVar4 = *(int *)(pcVar5 + 8);
        }
        *param_3 = pcVar5;
      }
    }
    if ((char *)*param_4 == param_1) {
      if (*(int *)(param_1 + 8) == 0) {
        *param_4 = *(undefined4 *)(param_1 + 4);
      }
      else {
        iVar4 = *(int *)(pcVar3 + 0xc);
        pcVar5 = pcVar3;
        while (iVar4 != 0) {
          pcVar5 = *(char **)(pcVar5 + 0xc);
          iVar4 = *(int *)(pcVar5 + 0xc);
        }
        *param_4 = pcVar5;
      }
    }
  }
  else {
    *(char **)(*(int *)(param_1 + 8) + 4) = pcVar8;
    *(undefined4 *)(pcVar8 + 8) = *(undefined4 *)(param_1 + 8);
    pcVar2 = pcVar8;
    if (pcVar8 != *(char **)(param_1 + 0xc)) {
      pcVar2 = *(char **)(pcVar8 + 4);
      if (pcVar3 != (char *)0x0) {
        *(char **)(pcVar3 + 4) = pcVar2;
      }
      *(char **)(*(int *)(pcVar8 + 4) + 8) = pcVar3;
      *(undefined4 *)(pcVar8 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      *(char **)(*(int *)(param_1 + 0xc) + 4) = pcVar8;
    }
    if ((char *)*param_2 == param_1) {
      *param_2 = pcVar8;
    }
    else {
      iVar4 = *(int *)(param_1 + 4);
      if (*(char **)(iVar4 + 8) == param_1) {
        *(char **)(iVar4 + 8) = pcVar8;
      }
      else {
        *(char **)(iVar4 + 0xc) = pcVar8;
      }
    }
    *(undefined4 *)(pcVar8 + 4) = *(undefined4 *)(param_1 + 4);
    cVar1 = *pcVar8;
    *pcVar8 = *param_1;
    *param_1 = cVar1;
    pcVar8 = param_1;
  }
  if (*pcVar8 == '\0') {
LAB_080e27f0:
    return CONCAT44(in_lr,pcVar8);
  }
LAB_080e27d6:
  pcVar5 = pcVar2;
  if ((pcVar3 == (char *)*param_2) || ((pcVar3 != (char *)0x0 && (*pcVar3 != '\x01'))))
  goto LAB_080e27e8;
  pcVar2 = *(char **)(pcVar5 + 8);
  if (pcVar3 == pcVar2) {
    pcVar2 = *(char **)(pcVar5 + 0xc);
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      *pcVar5 = '\0';
      func_080E2170(pcVar5,param_2);
      pcVar2 = *(char **)(pcVar5 + 0xc);
    }
    pcVar7 = *(char **)(pcVar2 + 8);
    if (((pcVar7 != (char *)0x0) && (pcVar6 = *(char **)(pcVar2 + 0xc), *pcVar7 != '\x01')) ||
       ((pcVar6 = *(char **)(pcVar2 + 0xc), pcVar6 != (char *)0x0 && (*pcVar6 != '\x01')))) {
      if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\x01')) {
        if (pcVar7 != (char *)0x0) {
          *pcVar7 = '\x01';
        }
        *pcVar2 = '\0';
        func_080E21A8(pcVar2,param_2);
        pcVar2 = *(char **)(pcVar5 + 0xc);
      }
      *pcVar2 = *pcVar5;
      *pcVar5 = '\x01';
      if (*(undefined1 **)(pcVar2 + 0xc) != (undefined1 *)0x0) {
        **(undefined1 **)(pcVar2 + 0xc) = 1;
      }
      func_080E2170(pcVar5,param_2);
      goto LAB_080e27e8;
    }
  }
  else {
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      *pcVar5 = '\0';
      func_080E21A8(pcVar5,param_2);
      pcVar2 = *(char **)(pcVar5 + 8);
    }
    pcVar7 = *(char **)(pcVar2 + 0xc);
    if (((pcVar7 != (char *)0x0) && (pcVar6 = *(char **)(pcVar2 + 8), *pcVar7 != '\x01')) ||
       ((pcVar6 = *(char **)(pcVar2 + 8), pcVar6 != (char *)0x0 && (*pcVar6 != '\x01')))) {
      if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\x01')) {
        if (pcVar7 != (char *)0x0) {
          *pcVar7 = '\x01';
        }
        *pcVar2 = '\0';
        func_080E2170(pcVar2,param_2);
        pcVar2 = *(char **)(pcVar5 + 8);
      }
      *pcVar2 = *pcVar5;
      *pcVar5 = '\x01';
      if (*(undefined1 **)(pcVar2 + 8) != (undefined1 *)0x0) {
        **(undefined1 **)(pcVar2 + 8) = 1;
      }
      func_080E21A8(pcVar5,param_2);
LAB_080e27e8:
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\x01';
      }
      goto LAB_080e27f0;
    }
  }
  *pcVar2 = '\0';
  pcVar2 = *(char **)(pcVar5 + 4);
  pcVar3 = pcVar5;
  goto LAB_080e27d6;
}

// =============================================================================
// Function: func_080E27FC @ 0x080E27FC
// =============================================================================
undefined8 func_080E27FC(int *param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_4 == *(int *)(param_2 + 4)) ||
     ((param_6 == 0 && ((param_3 != 0 || (*param_5 < *(uint *)(param_4 + 0x10))))))) {
    iVar1 = malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = func_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(uint *)(iVar1 + 0x10) = *param_5;
      *(uint *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 8) = iVar1;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 == iVar2) {
      *(int *)(param_4 + 4) = iVar1;
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
    else if (param_4 == *(int *)(iVar2 + 8)) {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  else {
    iVar1 = malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = func_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(uint *)(iVar1 + 0x10) = *param_5;
      *(uint *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 0xc) = iVar1;
    if (param_4 == *(int *)(*(int *)(param_2 + 4) + 0xc)) {
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
  }
  *(int *)(iVar1 + 4) = param_4;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  func_080E21E0(iVar1,*(int *)(param_2 + 4) + 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E28BC @ 0x080E28BC
// =============================================================================
undefined8 func_080E28BC(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  bool bVar3;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(param_2 + 4);
  bVar3 = true;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    do {
      iVar1 = iVar2;
      bVar3 = *param_3 < *(uint *)(iVar1 + 0x10);
      if (bVar3) {
        iVar2 = *(int *)(iVar1 + 8);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
    } while (iVar2 != 0);
  }
  iStack_24 = iVar1;
  if (bVar3) {
    iStack_20 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar1 != iStack_20) {
      iStack_24 = func_080E2354(iVar1);
      goto LAB_080e292c;
    }
    func_080E27FC(&iStack_1c,param_2,0,iVar1,param_3,0);
  }
  else {
LAB_080e292c:
    if (*param_3 <= *(uint *)(iStack_24 + 0x10)) {
      *param_1 = iStack_24;
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_080e2960;
    }
    func_080E27FC(&iStack_20,param_2,0,iVar1,param_3,0);
    iStack_1c = iStack_20;
  }
  *param_1 = iStack_1c;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_080e2960:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E2970 @ 0x080E2970
// =============================================================================
undefined8 func_080E2970(int *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  bool bVar5;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [2];
  
  iVar2 = *param_3;
  if (iVar2 == *(int *)(*(int *)(param_2 + 4) + 8)) {
    if (*(int *)(param_2 + 8) != 0) {
      if (*param_4 < *(uint *)(iVar2 + 0x10)) {
LAB_080e2a74:
        func_080E27FC(param_1,param_2,iVar2,iVar2,param_4,0);
        goto LAB_080e2b16;
      }
      if (*param_4 <= *(uint *)(iVar2 + 0x10)) {
        *param_1 = iVar2;
        goto LAB_080e2b16;
      }
      iStack_2c = iVar2;
      iVar1 = func_080E2B28(iVar2);
      iStack_2c = iVar1;
      if (iVar1 == *(int *)(param_2 + 4)) {
        iVar3 = *param_3;
        iVar2 = iVar3;
      }
      else {
        if (*(uint *)(iVar1 + 0x10) <= *param_4) goto LAB_080e2b08;
        iVar3 = *param_3;
        iVar2 = iVar3;
        if (*(int *)(iVar3 + 0xc) != 0) goto LAB_080e2aee;
      }
LAB_080e2ade:
      func_080E27FC(param_1,param_2,0,iVar3,param_4,iVar2);
      goto LAB_080e2b16;
    }
    func_080E28BC(&iStack_2c,param_2,param_4);
  }
  else if (iVar2 == *(int *)(param_2 + 4)) {
    iVar3 = *(int *)(iVar2 + 0xc);
    if (*(uint *)(iVar3 + 0x10) < *param_4) goto LAB_080e2ade;
    func_080E28BC(&iStack_2c,param_2,param_4);
  }
  else {
    iStack_2c = iVar2;
    iVar3 = func_080E2354(iVar2);
    iVar2 = *param_3;
    bVar4 = *param_4 < *(uint *)(iVar2 + 0x10);
    iStack_2c = iVar3;
    if ((bVar4) && (*(uint *)(iVar3 + 0x10) < *param_4)) {
      if (*(int *)(iVar3 + 0xc) != 0) goto LAB_080e2a74;
      iVar1 = 0;
      iVar2 = iVar3;
LAB_080e2af6:
      func_080E27FC(param_1,param_2,iVar1,iVar3,param_4,iVar2);
      goto LAB_080e2b16;
    }
    iStack_28 = *param_3;
    iVar1 = func_080E2B28();
    bVar5 = !bVar4;
    iStack_28 = iVar1;
    if (!bVar4) {
      iVar3 = *param_3;
      bVar5 = *(uint *)(iVar3 + 0x10) < *param_4;
      if ((bVar5) && ((iVar1 == *(int *)(param_2 + 4) || (*param_4 < *(uint *)(iVar1 + 0x10))))) {
        iVar2 = iVar3;
        if (*(int *)(iVar3 + 0xc) == 0) goto LAB_080e2ade;
LAB_080e2aee:
        iVar3 = iVar1;
        iVar2 = 0;
        goto LAB_080e2af6;
      }
    }
    if (bVar4 == bVar5) {
      iStack_2c = *param_3;
    }
    else {
LAB_080e2b08:
      func_080E28BC(aiStack_24,param_2,param_4);
      iStack_2c = aiStack_24[0];
    }
  }
  *param_1 = iStack_2c;
LAB_080e2b16:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E2B28 @ 0x080E2B28
// =============================================================================
undefined8 func_080E2B28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    do {
      iVar1 = param_1;
      param_1 = *(int *)(iVar1 + 4);
    } while (iVar1 == *(int *)(param_1 + 0xc));
    if (*(int *)(iVar1 + 0xc) != param_1) {
      iVar1 = param_1;
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 8);
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_080E2B5C @ 0x080E2B5C
// =============================================================================
undefined4 func_080E2B5C(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  while (iVar1 = param_2, iVar1 != 0) {
    func_080E2B5C(param_1,*(undefined4 *)(iVar1 + 0xc));
    param_2 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      free(iVar1);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E2B88 @ 0x080E2B88
// =============================================================================
undefined4 func_080E2B88(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  while (iVar1 = param_2, iVar1 != 0) {
    func_080E2B88(param_1,*(undefined4 *)(iVar1 + 0xc));
    param_2 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      free(iVar1);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E2BB4 @ 0x080E2BB4
// =============================================================================
undefined4 func_080E2BB4(int param_1,byte *param_2,undefined4 *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 in_lr;
  char cStack_48;
  ushort uStack_44;
  
  iVar2 = param_3[2];
  iVar7 = param_3[4];
  puVar11 = (uint *)*param_3;
  uVar3 = 0;
  if (puVar11 != (uint *)0x0) {
    uVar3 = (uint)*(ushort *)(param_3 + 1);
  }
  puVar4 = puVar11 + uVar3 * 2;
  while (puVar11 != puVar4) {
    uVar3 = *puVar11;
    uVar8 = puVar11[1];
    puVar11 = puVar11 + 2;
    uVar12 = ((int)(uVar3 << 7) >> 0x17) + param_4;
    if ((int)uVar12 < 0xf0) {
      cStack_48 = (char)uVar3;
      uVar13 = cStack_48 + param_5;
      if ((((int)uVar13 < 0xa0) &&
          (uVar9 = ((uVar3 & 0xffff) >> 0xe) * 4 + (uVar3 >> 0x1e),
          uVar9 = (int)(uint)*(byte *)((uVar9 >> 1) + _DAT_080e2c84) >> ((uVar9 & 1) << 2),
          0 < (int)(uVar12 + (8 << (uVar9 & 3))))) && (0 < (int)((8 << (uVar9 >> 2 & 3)) + uVar13)))
      {
        uVar5 = iVar2 + (uVar8 & 0x3ff) * 0x20;
        uVar9 = *(uint *)(param_1 + 8);
        uVar10 = *(uint *)(*(uint *)(param_1 + 8) + 4);
        while (uVar10 != 0) {
          if (*(uint *)(uVar10 + 0x10) < uVar5) {
            uVar10 = *(uint *)(uVar10 + 0xc);
          }
          else {
            uVar9 = uVar10;
            uVar10 = *(uint *)(uVar10 + 8);
          }
        }
        if ((uVar9 == *(uint *)(param_1 + 8)) || (uVar5 < *(uint *)(uVar9 + 0x10))) {
          uVar9 = *(uint *)(param_1 + 8);
        }
        uVar10 = *(uint *)(param_1 + 8) ^ uVar9;
        if ((int)(-uVar10 | uVar10) < 0) {
          iVar6 = func_08007D4C(param_1,*(undefined4 *)(uVar9 + 0x14));
        }
        else {
          iVar6 = -1;
        }
        if (-1 < iVar6) {
          uVar5 = iVar7 + ((uVar8 & 0xffff) >> 0xc) * 0x20;
          uVar9 = *(uint *)(param_1 + 0x1c);
          uVar10 = *(uint *)(*(uint *)(param_1 + 0x1c) + 4);
          while (uVar10 != 0) {
            if (*(uint *)(uVar10 + 0x10) < uVar5) {
              uVar10 = *(uint *)(uVar10 + 0xc);
            }
            else {
              uVar9 = uVar10;
              uVar10 = *(uint *)(uVar10 + 8);
            }
          }
          if ((uVar9 == *(uint *)(param_1 + 0x1c)) || (uVar5 < *(uint *)(uVar9 + 0x10))) {
            uVar9 = *(uint *)(param_1 + 0x1c);
          }
          uVar10 = *(uint *)(param_1 + 0x1c) ^ uVar9;
          if ((int)(-uVar10 | uVar10) < 0) {
            uVar9 = func_080074C0(param_1 + 0x14,*(undefined4 *)(uVar9 + 0x14));
          }
          else {
            uVar9 = 0xffffffff;
          }
          if (-1 < (int)uVar9) {
            uStack_44 = ((ushort)uVar8 & (ushort)_DAT_080e2dc0 | (ushort)iVar6 & 0x3ff) &
                        (ushort)_DAT_080e2dc4 | (ushort)((uVar9 & 0xf) << 0xc);
            bVar1 = *param_2;
            if (bVar1 < 0x80) {
              *(uint *)(param_2 + (uint)bVar1 * 8 + 4) =
                   (uVar3 & _DAT_080e2db4 | uVar13 & 0xff) & _DAT_080e2dbc |
                   (uVar12 & _DAT_080e2db8) << 0x10;
              *(ushort *)((int)(param_2 + (uint)bVar1 * 8 + 4) + 4) = uStack_44;
              *param_2 = bVar1 + 1;
            }
          }
        }
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E2DC8 @ 0x080E2DC8
// =============================================================================
undefined8 func_080E2DC8(int param_1)

{
  undefined1 *puVar1;
  undefined4 in_lr;
  
  func_08007874();
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined1 *)malloc(0x18);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)func_080D3BC0(0x18);
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
  *(int *)(*(int *)(param_1 + 8) + 0xc) = *(int *)(param_1 + 8);
  func_0x08007128(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  puVar1 = (undefined1 *)malloc(0x18);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)func_080D3BC0(0x18);
  }
  *(undefined1 **)(param_1 + 0x1c) = puVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x1c) + 8) = *(int *)(param_1 + 0x1c);
  *(int *)(*(int *)(param_1 + 0x1c) + 0xc) = *(int *)(param_1 + 0x1c);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E2E34 @ 0x080E2E34
// =============================================================================
undefined4 func_080E2E34(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = _DAT_080e2e64;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + _DAT_080e2e68) + 8));
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E2E6C @ 0x080E2E6C
// =============================================================================
undefined4 func_080E2E6C(void)

{
  undefined4 in_lr;
  
  func_080086BC();
  return in_lr;
}

// =============================================================================
// Function: func_080E2E78 @ 0x080E2E78
// =============================================================================
undefined4 func_080E2E78(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  while (iVar1 = param_2, iVar1 != 0) {
    func_080E2E78(param_1,*(undefined4 *)(iVar1 + 0xc));
    param_2 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      free(iVar1);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E2EA4 @ 0x080E2EA4
// =============================================================================
undefined8 func_080E2EA4(int *param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 in_lr;
  
  if (param_4 != *(int *)(param_2 + 4)) {
    if (param_6 != 0) {
LAB_080e2f1e:
      iVar1 = malloc(0x18);
      if (iVar1 == 0) {
        iVar1 = func_080D3BC0(0x18);
      }
      if (iVar1 != -0x10) {
        *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)param_5;
        *(byte *)(iVar1 + 0x14) = param_5[4];
      }
      *(int *)(param_4 + 0xc) = iVar1;
      if (param_4 == *(int *)(*(int *)(param_2 + 4) + 0xc)) {
        *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
      }
      goto LAB_080e2f50;
    }
    if (param_3 == 0) {
      bVar3 = false;
      if ((*param_5 < *(byte *)(param_4 + 0x10)) ||
         ((*param_5 <= *(byte *)(param_4 + 0x10) && (param_5[1] < *(byte *)(param_4 + 0x11))))) {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_080e2f1e;
    }
  }
  iVar1 = malloc(0x18);
  if (iVar1 == 0) {
    iVar1 = func_080D3BC0(0x18);
  }
  if (iVar1 != -0x10) {
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)param_5;
    *(byte *)(iVar1 + 0x14) = param_5[4];
  }
  *(int *)(param_4 + 8) = iVar1;
  iVar2 = *(int *)(param_2 + 4);
  if (param_4 == iVar2) {
    *(int *)(param_4 + 4) = iVar1;
    *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
  }
  else if (param_4 == *(int *)(iVar2 + 8)) {
    *(int *)(iVar2 + 8) = iVar1;
  }
LAB_080e2f50:
  *(int *)(iVar1 + 4) = param_4;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  func_080E21E0(iVar1,*(int *)(param_2 + 4) + 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E2F74 @ 0x080E2F74
// =============================================================================
undefined8 func_080E2F74(int *param_1,int param_2,byte *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  iVar3 = *(int *)(param_2 + 4);
  bVar1 = true;
  if (*(int *)(iVar3 + 4) != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    do {
      iVar3 = iVar2;
      bVar1 = false;
      if ((*param_3 < *(byte *)(iVar3 + 0x10)) ||
         ((*param_3 <= *(byte *)(iVar3 + 0x10) && (param_3[1] < *(byte *)(iVar3 + 0x11))))) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar2 = *(int *)(iVar3 + 8);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0xc);
      }
    } while (iVar2 != 0);
  }
  iStack_28 = iVar3;
  if (bVar1) {
    iStack_24 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar3 != iStack_24) {
      iStack_28 = func_080E2354(iVar3);
      goto LAB_080e2ff6;
    }
    func_080E2EA4(&iStack_20,param_2,0,iVar3,param_3,0);
  }
  else {
LAB_080e2ff6:
    bVar1 = false;
    if ((*(byte *)(iStack_28 + 0x10) < *param_3) ||
       ((*(byte *)(iStack_28 + 0x10) <= *param_3 && (*(byte *)(iStack_28 + 0x11) < param_3[1])))) {
      bVar1 = true;
    }
    if (!bVar1) {
      *param_1 = iStack_28;
      *(bool *)(param_1 + 1) = bVar1;
      goto LAB_080e3042;
    }
    func_080E2EA4(&iStack_24,param_2,0,iVar3,param_3,0);
    iStack_20 = iStack_24;
  }
  *param_1 = iStack_20;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_080e3042:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E3054 @ 0x080E3054
// =============================================================================
undefined8 func_080E3054(int *param_1,int param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined4 in_lr;
  int iStack_38;
  int iStack_34;
  int aiStack_30 [2];
  byte bStack_28;
  char cStack_24;
  
  iVar5 = *param_3;
  if (iVar5 == *(int *)(*(int *)(param_2 + 4) + 8)) {
    if (*(int *)(param_2 + 8) == 0) {
      func_080E2F74(&iStack_38,param_2,param_4);
    }
    else {
      bVar3 = false;
      bVar4 = *param_4;
      if ((bVar4 < *(byte *)(iVar5 + 0x10)) ||
         ((bVar4 <= *(byte *)(iVar5 + 0x10) && (param_4[1] < *(byte *)(iVar5 + 0x11))))) {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = iVar5;
        iVar7 = 0;
LAB_080e32a2:
        func_080E2EA4(param_1,param_2,iVar5,iVar2,param_4,iVar7);
        goto LAB_080e32d4;
      }
      bVar3 = false;
      if ((*(byte *)(iVar5 + 0x10) < bVar4) ||
         ((*(byte *)(iVar5 + 0x10) <= bVar4 && (*(byte *)(iVar5 + 0x11) < param_4[1])))) {
        bVar3 = true;
      }
      if (!bVar3) {
        *param_1 = iVar5;
        goto LAB_080e32d4;
      }
      iStack_38 = iVar5;
      iVar5 = func_080E2B28(iVar5);
      iStack_38 = iVar5;
      if (iVar5 == *(int *)(param_2 + 4)) {
        iVar7 = *param_3;
        iVar2 = iVar7;
LAB_080e317e:
        func_080E2EA4(param_1,param_2,0,iVar7,param_4,iVar2);
        goto LAB_080e32d4;
      }
      bVar3 = false;
      if ((*param_4 < *(byte *)(iVar5 + 0x10)) ||
         ((*param_4 <= *(byte *)(iVar5 + 0x10) && (param_4[1] < *(byte *)(iVar5 + 0x11))))) {
        bVar3 = true;
      }
      if (bVar3) {
        iVar7 = *param_3;
        iVar2 = iVar7;
        if (*(int *)(iVar7 + 0xc) != 0) {
          iVar2 = iVar5;
          iVar7 = 0;
          goto LAB_080e32a2;
        }
        goto LAB_080e317e;
      }
LAB_080e32c6:
      func_080E2F74(aiStack_30,param_2,param_4);
      iStack_38 = aiStack_30[0];
    }
  }
  else {
    if (iVar5 == *(int *)(param_2 + 4)) {
      bVar3 = false;
      bVar4 = *(byte *)(*(int *)(iVar5 + 0xc) + 0x10);
      if ((bVar4 < *param_4) ||
         ((bVar4 <= *param_4 && (*(byte *)(*(int *)(iVar5 + 0xc) + 0x11) < param_4[1])))) {
        bVar3 = true;
      }
      if (bVar3) {
        iVar7 = *(int *)(*(int *)(param_2 + 4) + 0xc);
        iVar2 = *param_3;
        goto LAB_080e317e;
      }
      func_080E2F74(&iStack_38,param_2,param_4);
      goto LAB_080e32d2;
    }
    iStack_38 = iVar5;
    iVar2 = func_080E2354(iVar5);
    bVar6 = 0;
    bVar4 = *(byte *)(*param_3 + 0x10);
    if ((*param_4 < bVar4) || ((*param_4 <= bVar4 && (param_4[1] < *(byte *)(*param_3 + 0x11))))) {
      bVar6 = 1;
    }
    iStack_38 = iVar2;
    if (bVar6 != 0) {
      bVar3 = false;
      if ((*(byte *)(iVar2 + 0x10) < *param_4) ||
         ((*(byte *)(iVar2 + 0x10) <= *param_4 && (*(byte *)(iVar2 + 0x11) < param_4[1])))) {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_080e31fe;
      if (*(int *)(iVar2 + 0xc) == 0) {
LAB_080e3298:
        iVar5 = 0;
        iVar7 = iVar2;
        goto LAB_080e32a2;
      }
      iVar5 = *param_3;
LAB_080e32aa:
      func_080E2EA4(param_1,param_2,iVar5,iVar5,param_4,0);
      goto LAB_080e32d4;
    }
LAB_080e31fe:
    iStack_34 = *param_3;
    iVar5 = func_080E2B28();
    bVar4 = bVar6 ^ 1;
    iStack_34 = iVar5;
    if (bVar6 == 0) {
      iVar2 = *param_3;
      bStack_28 = 0;
      bVar1 = *param_4;
      if ((*(byte *)(iVar2 + 0x10) < bVar1) ||
         ((*(byte *)(iVar2 + 0x10) <= bVar1 && (*(byte *)(iVar2 + 0x11) < param_4[1])))) {
        bStack_28 = 1;
      }
      bVar4 = bStack_28;
      if (bStack_28 != 0) {
        if (iVar5 != *(int *)(param_2 + 4)) {
          cStack_24 = '\0';
          if ((bVar1 < *(byte *)(iVar5 + 0x10)) ||
             ((bVar1 <= *(byte *)(iVar5 + 0x10) && (param_4[1] < *(byte *)(iVar5 + 0x11))))) {
            cStack_24 = '\x01';
          }
          if (cStack_24 == '\0') goto LAB_080e32bc;
        }
        if (*(int *)(iVar2 + 0xc) == 0) goto LAB_080e3298;
        goto LAB_080e32aa;
      }
    }
LAB_080e32bc:
    if (bVar6 != bVar4) goto LAB_080e32c6;
    iStack_38 = *param_3;
  }
LAB_080e32d2:
  *param_1 = iStack_38;
LAB_080e32d4:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E32E8 @ 0x080E32E8
// =============================================================================
undefined4 func_080E32E8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x1e4) != 0) {
    func_080E2E78(param_1 + 0x1dc,*(undefined4 *)(*(int *)(param_1 + 0x1e0) + 4));
    *(int *)(*(int *)(param_1 + 0x1e0) + 8) = *(int *)(param_1 + 0x1e0);
    *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 4) = 0;
    *(int *)(*(int *)(param_1 + 0x1e0) + 0xc) = *(int *)(param_1 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    free();
  }
  for (iVar2 = *(int *)(param_1 + 0x1cc); iVar2 != *(int *)(param_1 + 0x1d0); iVar2 = iVar2 + 0x1c)
  {
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    free();
  }
  uVar1 = _DAT_080e3394;
  *(undefined4 *)(param_1 + 0x19c) = _DAT_080e3394;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  func_080756D0(param_1 + 0x20,2);
  func_0803C7A0(param_1 + 0x1c,2);
  func_08050D0C(param_1 + 0x18,2);
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    func_0x080d3914(piVar3,3,*(undefined4 *)(*piVar3 + 8));
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E3398 @ 0x080E3398
// =============================================================================
undefined8 func_080E3398(uint *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  while (iVar2 = iVar1, 0 < iVar2) {
    iVar1 = iVar2 >> 1;
    if (param_1[iVar1] < *param_3) {
      param_1 = param_1 + iVar1 + 1;
      iVar1 = (iVar2 - iVar1) + -1;
    }
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E33D0 @ 0x080E33D0
// =============================================================================
undefined4 func_080E33D0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xa60) != 0) {
    free();
  }
  iVar2 = param_1 + _DAT_080e3480;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  func_08007C28(param_1 + 0x830,*(undefined4 *)(param_1 + 0x834));
  func_080079E8(param_1 + 0x830,2);
  iVar2 = param_1 + _DAT_080e3484;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  func_08007C28(param_1 + 0x820,*(undefined4 *)(param_1 + 0x824));
  func_080079E8(param_1 + 0x820,2);
  iVar2 = param_1 + _DAT_080e3488;
  func_0x080073e0(iVar2,*(undefined4 *)(iVar2 + 4));
  func_08007184(iVar2,2);
  func_08007C28(param_1 + 0x810,*(undefined4 *)(param_1 + 0x814));
  func_080079E8(param_1 + 0x810,2);
  uVar1 = _DAT_080e3490;
  iVar2 = _DAT_080e348c;
  *(undefined4 *)(param_1 + _DAT_080e348c) = _DAT_080e3490;
  *(undefined4 *)(param_1 + iVar2 + -0x30) = uVar1;
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E3494 @ 0x080E3494
// =============================================================================
undefined8 func_080E3494(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_1c [3];
  
  auStack_1c[0] = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = func_080005D4(0xc);
  uVar1 = func_08092570(uVar1,auStack_1c,*(undefined4 *)(param_2 + 8),*(undefined1 *)(param_2 + 0xc)
                       );
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E34DC @ 0x080E34DC
// =============================================================================
undefined4 func_080E34DC(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  Scene_Destructor(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E3504 @ 0x080E3504
// =============================================================================
undefined4 func_080E3504(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    func_0x080ce3dc(*(int *)(param_1 + 0x94),3);
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 != 0) {
    func_0x080073e0(iVar1 + 0x74,*(undefined4 *)(iVar1 + 0x78));
    func_08007184(iVar1 + 0x74,2);
    func_08007C28(iVar1 + 0x6c,*(undefined4 *)(iVar1 + 0x70));
    func_080079E8(iVar1 + 0x6c,2);
    *(undefined4 *)(iVar1 + 4) = _DAT_080e35d8;
    func_08000608(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x24) = _DAT_080e35d8;
    func_0x080073e0(iVar1 + 0x1c,*(undefined4 *)(iVar1 + 0x20));
    func_08007184(iVar1 + 0x1c,2);
    func_08007C28(iVar1 + 0x14,*(undefined4 *)(iVar1 + 0x18));
    func_080079E8(iVar1 + 0x14,2);
    func_08000608(iVar1);
  }
  func_08050D0C(param_1 + 0x80,2);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0x210) + 8));
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0x210) + 8));
  }
  *(undefined4 *)(param_1 + 0x10) = _DAT_080e35d8;
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E3A9C @ 0x080E3A9C
// =============================================================================
undefined4 func_080E3A9C(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (4 < param_2) {
    return in_lr;
  }
  switch(*(uint *)(param_2 * 4 + _DAT_080e3ab0) & 0xfffffffe) {
  case 0x80e3ab4:
    param_1 = param_1 + -0x48;
  case 0x80e3ac8:
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    return in_lr;
  case 0x80e3ad4:
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    iVar1 = _ASSET_BLOCK_080E3AE4;
    break;
  case 0x80e3ae8:
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    iVar1 = _DAT_080e3b08;
    *(undefined1 *)(param_1 + _DAT_080e3b08) = 1;
    *(undefined1 *)(param_1 + iVar1 + 1) = 1;
    iVar1 = _DAT_080e3b0c;
    break;
  case 0x80e3b10:
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    iVar1 = _DAT_080e3b30;
    *(undefined1 *)(param_1 + _DAT_080e3b30) = 1;
    *(undefined1 *)(param_1 + iVar1 + 1) = 0;
    *(undefined1 *)(param_1 + _DAT_080e3b34) = 1;
    return in_lr;
  case 0x80e3b38:
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    *(undefined1 *)(param_1 + 0x1b9) = 1;
    *(undefined1 *)(param_1 + 0x1ba) = 0;
    iVar1 = 0x1bb;
  }
  *(undefined1 *)(param_1 + iVar1) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_080E3B80 @ 0x080E3B80
// =============================================================================
undefined8 func_080E3B80(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_38 [32];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (param_3 == 0xf1) {
    iVar2 = (uint)*(byte *)(param_2 + 7) * 0x1d + _DAT_080e3bc4;
LAB_080e3bf6:
    uVar1 = strlen(iVar2);
    if (0x1f < uVar1) {
      uVar1 = 0x1f;
    }
    memcpy(auStack_38,iVar2,uVar1);
    auStack_38[uVar1] = 0;
    *param_1 = 1;
    strcpy(param_1 + 4,auStack_38);
  }
  else {
    if (param_3 < 0xf2) {
      if (param_3 == 0xf0) {
        iVar2 = (uint)*(byte *)(param_2 + 6) * 0x1d + _DAT_080e3bac;
        goto LAB_080e3bf6;
      }
    }
    else if (param_3 == 0xff) {
      if (*(ushort *)(param_2 + 4) < 0xac) {
        func_0x0800dca8(auStack_18,*(ushort *)(param_2 + 4) - 1);
        iVar2 = func_0800DCB8(auStack_18);
      }
      else {
        func_0x0800df50(auStack_14,*(ushort *)(param_2 + 4) - 0xac);
        iVar2 = func_0800DF58(auStack_14);
      }
      goto LAB_080e3bf6;
    }
    auStack_38[0] = 0;
    *param_1 = 0;
    strcpy(param_1 + 4);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E3C3C @ 0x080E3C3C
// =============================================================================
undefined4 func_080E3C3C(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + _DAT_080e3d88) = _DAT_080e3d8c;
  func_08007C28(param_1 + 0x328,*(undefined4 *)(param_1 + 0x32c));
  func_080079E8(param_1 + 0x328,2);
  func_0x080073e0(param_1 + 800,*(undefined4 *)(param_1 + 0x324));
  func_08007184(param_1 + 800,2);
  func_08007C28(param_1 + 0x318,*(undefined4 *)(param_1 + 0x31c));
  func_080079E8(param_1 + 0x318,2);
  func_08007C28(param_1 + 0x310,*(undefined4 *)(param_1 + 0x314));
  func_080079E8(param_1 + 0x310,2);
  func_0x080073e0(param_1 + 0x308,*(undefined4 *)(param_1 + 0x30c));
  func_08007184(param_1 + 0x308,2);
  func_08007C28(param_1 + 0x300,*(undefined4 *)(param_1 + 0x304));
  func_080079E8(param_1 + 0x300,2);
  func_0x080073e0(param_1 + 0x2f8,*(undefined4 *)(param_1 + 0x2fc));
  func_08007184(param_1 + 0x2f8,2);
  func_08007C28(param_1 + 0x2f0,*(undefined4 *)(param_1 + 0x2f4));
  func_080079E8(param_1 + 0x2f0,2);
  func_0x080073e0(param_1 + 0x2e8,*(undefined4 *)(param_1 + 0x2ec));
  func_08007184(param_1 + 0x2e8,2);
  func_08007C28(param_1 + 0x2e0,*(undefined4 *)(param_1 + 0x2e4));
  func_080079E8(param_1 + 0x2e0,2);
  uVar1 = _DAT_080e3d90;
  *(undefined4 *)(param_1 + 0x128) = _DAT_080e3d90;
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  func_08050D0C(param_1 + 0x80,2);
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != 0) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + 0x210) + 8));
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 != 0) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + 0x210) + 8));
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E3D94 @ 0x080E3D94
// =============================================================================
undefined4 func_080E3D94(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e3db0;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E3DB4 @ 0x080E3DB4
// =============================================================================
undefined8 func_080E3DB4(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)param_2 - (int)param_1 >> 3;
  if (0 < iVar3) {
    sVar1 = *param_3;
    do {
      psVar2 = param_1;
      if ((((*param_1 == sVar1) || (psVar2 = param_1 + 1, param_1[1] == sVar1)) ||
          (psVar2 = param_1 + 2, param_1[2] == sVar1)) ||
         (psVar2 = param_1 + 3, param_1[3] == sVar1)) goto LAB_080e3e1c;
      param_1 = param_1 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  iVar3 = (int)param_2 - (int)param_1 >> 1;
  if (iVar3 == 1) {
LAB_080e3e14:
    psVar2 = param_1;
    if (*param_1 != *param_3) goto LAB_080e3e22;
  }
  else {
    if (iVar3 < 2) goto LAB_080e3e22;
    if (iVar3 == 2) {
LAB_080e3e0a:
      psVar2 = param_1;
      if (*param_1 != *param_3) {
        param_1 = param_1 + 1;
        goto LAB_080e3e14;
      }
    }
    else {
      if (iVar3 != 3) goto LAB_080e3e22;
      psVar2 = param_1;
      if (*param_1 != *param_3) {
        param_1 = param_1 + 1;
        goto LAB_080e3e0a;
      }
    }
  }
LAB_080e3e1c:
  param_2 = psVar2;
LAB_080e3e22:
  return CONCAT44(in_lr,param_2);
}

// =============================================================================
// Function: func_080E3E28 @ 0x080E3E28
// =============================================================================
undefined8 func_080E3E28(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = (int)param_2 - (int)param_1 >> 3;
  if (0 < iVar3) {
    sVar1 = *param_3;
    do {
      psVar2 = param_1;
      if ((((*param_1 == sVar1) || (psVar2 = param_1 + 1, param_1[1] == sVar1)) ||
          (psVar2 = param_1 + 2, param_1[2] == sVar1)) ||
         (psVar2 = param_1 + 3, param_1[3] == sVar1)) goto LAB_080e3e90;
      param_1 = param_1 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  iVar3 = (int)param_2 - (int)param_1 >> 1;
  if (iVar3 == 1) {
LAB_080e3e88:
    psVar2 = param_1;
    if (*param_1 != *param_3) goto LAB_080e3e96;
  }
  else {
    if (iVar3 < 2) goto LAB_080e3e96;
    if (iVar3 == 2) {
LAB_080e3e7e:
      psVar2 = param_1;
      if (*param_1 != *param_3) {
        param_1 = param_1 + 1;
        goto LAB_080e3e88;
      }
    }
    else {
      if (iVar3 != 3) goto LAB_080e3e96;
      psVar2 = param_1;
      if (*param_1 != *param_3) {
        param_1 = param_1 + 1;
        goto LAB_080e3e7e;
      }
    }
  }
LAB_080e3e90:
  param_2 = psVar2;
LAB_080e3e96:
  return CONCAT44(in_lr,param_2);
}

// =============================================================================
// Function: func_080E3E9C @ 0x080E3E9C
// =============================================================================
undefined8 func_080E3E9C(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  for (iVar3 = param_2 - param_1 >> 5; iVar2 = param_1, 0 < iVar3; iVar3 = iVar3 + -1) {
    cVar1 = func_0809E8E4(param_1,param_3);
    if (cVar1 != '\0') goto LAB_080e3f3a;
    cVar1 = func_0809E8E4(param_1 + 8,param_3);
    iVar2 = param_1 + 8;
    if (cVar1 != '\0') goto LAB_080e3f3a;
    cVar1 = func_0809E8E4(param_1 + 0x10,param_3);
    iVar2 = param_1 + 0x10;
    if (cVar1 != '\0') goto LAB_080e3f3a;
    cVar1 = func_0809E8E4(param_1 + 0x18,param_3);
    iVar2 = param_1 + 0x18;
    if (cVar1 != '\0') goto LAB_080e3f3a;
    param_1 = param_1 + 0x20;
  }
  iVar3 = param_2 - param_1 >> 3;
  if (iVar3 == 1) {
LAB_080e3f26:
    cVar1 = func_0809E8E4(iVar2,param_3);
    if (cVar1 != '\0') goto LAB_080e3f3a;
  }
  else if (1 < iVar3) {
    if (iVar3 != 2) {
      if (iVar3 != 3) goto LAB_080e3f38;
      cVar1 = func_0809E8E4(param_1,param_3);
      if (cVar1 != '\0') goto LAB_080e3f3a;
      iVar2 = param_1 + 8;
    }
    cVar1 = func_0809E8E4(iVar2,param_3);
    if (cVar1 != '\0') goto LAB_080e3f3a;
    iVar2 = iVar2 + 8;
    goto LAB_080e3f26;
  }
LAB_080e3f38:
  iVar2 = param_2;
LAB_080e3f3a:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_080E3F40 @ 0x080E3F40
// =============================================================================
undefined8 func_080E3F40(undefined1 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 in_lr;
  undefined1 auStack_54 [64];
  
  uVar2 = _DAT_080e3fd4;
  uVar4 = _DAT_080e3fa8;
  if (param_3 == 0xf1) {
    if (*(char *)(param_2 + 4) < '\n') {
      auStack_54[0] = 0x81;
      auStack_54[1] = 0x40;
      func_0804EC84((int)*(char *)(param_2 + 4),auStack_54 + 2,0);
    }
    else {
      func_0804EC84((int)*(char *)(param_2 + 4),auStack_54,0);
    }
    puVar5 = auStack_54 + 0x20;
    uVar3 = strlen(auStack_54);
    puVar6 = auStack_54;
    if (0x1f < uVar3) {
      uVar3 = 0x1f;
      puVar6 = auStack_54;
    }
LAB_080e406c:
    memcpy(puVar5,puVar6,uVar3);
    puVar5[uVar3] = 0;
    *param_1 = 1;
    strcpy(param_1 + 4,puVar5);
  }
  else {
    if (param_3 < 0xf2) {
      if (param_3 == 0xf0) {
        cVar1 = *(char *)(param_2 + 5);
        if (cVar1 == '\x01') {
          uVar3 = strlen(_DAT_080e3fd4);
          if (0x1f < uVar3) {
            uVar3 = 0x1f;
          }
          memcpy(auStack_54,uVar2,uVar3);
          auStack_54[uVar3] = 0;
          *param_1 = 1;
LAB_080e4006:
          strcpy(param_1 + 4,auStack_54);
          goto LAB_080e4094;
        }
        if (cVar1 < '\x02') {
          if (cVar1 == '\0') {
            uVar3 = strlen(_DAT_080e3fa8);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            memcpy(auStack_54,uVar4,uVar3);
            auStack_54[uVar3] = 0;
            *param_1 = 1;
            strcpy(param_1 + 4);
            goto LAB_080e4094;
          }
        }
        else {
          uVar4 = _DAT_080e3fdc;
          if ((cVar1 == '\x02') || (uVar4 = _DAT_080e4010, cVar1 == '\x03')) {
            uVar3 = strlen(uVar4);
            if (0x1f < uVar3) {
              uVar3 = 0x1f;
            }
            memcpy(auStack_54,uVar4,uVar3);
            auStack_54[uVar3] = 0;
            *param_1 = 1;
            goto LAB_080e4006;
          }
        }
      }
    }
    else if (param_3 == 0xf2) {
      puVar5 = auStack_54 + 8;
      puVar6 = *(undefined1 **)(param_2 + 8);
      uVar3 = strlen(puVar6);
      if (0x1f < uVar3) {
        uVar3 = 0x1f;
      }
      goto LAB_080e406c;
    }
    auStack_54[0] = 0;
    *param_1 = 0;
    strcpy(param_1 + 4);
  }
LAB_080e4094:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E4190 @ 0x080E4190
// =============================================================================
undefined4 func_080E4190(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e41ac;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E41B0 @ 0x080E41B0
// =============================================================================
undefined4 func_080E41B0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + 4) + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E41E8 @ 0x080E41E8
// =============================================================================
undefined4 func_080E41E8(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E4210 @ 0x080E4210
// =============================================================================
undefined4 func_080E4210(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    func_0x080d3914(piVar1,3,*(undefined4 *)(*piVar1 + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E4238 @ 0x080E4238
// =============================================================================
undefined4 func_080E4238(void)

{
  undefined4 in_lr;
  
  func_080098AC();
  return in_lr;
}

// =============================================================================
// Function: func_080E4244 @ 0x080E4244
// =============================================================================
undefined8 func_080E4244(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_4 == *(int *)(param_2 + 4)) ||
     ((param_6 == 0 && ((param_3 != 0 || (*param_5 < *(int *)(param_4 + 0x10))))))) {
    iVar1 = malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = func_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(int *)(iVar1 + 0x10) = *param_5;
      *(int *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 8) = iVar1;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 == iVar2) {
      *(int *)(param_4 + 4) = iVar1;
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
    else if (param_4 == *(int *)(iVar2 + 8)) {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  else {
    iVar1 = malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = func_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(int *)(iVar1 + 0x10) = *param_5;
      *(int *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 0xc) = iVar1;
    if (param_4 == *(int *)(*(int *)(param_2 + 4) + 0xc)) {
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
  }
  *(int *)(iVar1 + 4) = param_4;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  func_080E21E0(iVar1,*(int *)(param_2 + 4) + 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E4304 @ 0x080E4304
// =============================================================================
undefined8 func_080E4304(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar2 = *(int *)(param_2 + 4);
  bVar1 = true;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    do {
      iVar2 = iVar3;
      bVar1 = *param_3 < *(int *)(iVar2 + 0x10);
      if (bVar1) {
        iVar3 = *(int *)(iVar2 + 8);
      }
      else {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
    } while (iVar3 != 0);
  }
  iStack_24 = iVar2;
  if (bVar1) {
    iStack_20 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar2 != iStack_20) {
      iStack_24 = func_080E2354(iVar2);
      goto LAB_080e4374;
    }
    func_080E4244(&iStack_1c,param_2,0,iVar2,param_3,0);
  }
  else {
LAB_080e4374:
    if (*param_3 <= *(int *)(iStack_24 + 0x10)) {
      *param_1 = iStack_24;
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_080e43a8;
    }
    func_080E4244(&iStack_20,param_2,0,iVar2,param_3,0);
    iStack_1c = iStack_20;
  }
  *param_1 = iStack_1c;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_080e43a8:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E43B8 @ 0x080E43B8
// =============================================================================
undefined4 func_080E43B8(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xac) != 0) {
    func_080DC57C(param_1 + 0xa4,*(undefined4 *)(*(int *)(param_1 + 0xa8) + 4));
    *(int *)(*(int *)(param_1 + 0xa8) + 8) = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(*(int *)(param_1 + 0xa8) + 4) = 0;
    *(int *)(*(int *)(param_1 + 0xa8) + 0xc) = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    free();
  }
  func_080A4B6C(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E43FC @ 0x080E43FC
// =============================================================================
undefined8 func_080E43FC(int param_1)

{
  undefined1 *puVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined1 *)malloc(0x18);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)func_080D3BC0(0x18);
  }
  *(undefined1 **)(param_1 + 0xc) = puVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0xc) + 8) = *(int *)(param_1 + 0xc);
  *(int *)(*(int *)(param_1 + 0xc) + 0xc) = *(int *)(param_1 + 0xc);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E4438 @ 0x080E4438
// =============================================================================
undefined8 func_080E4438(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar2 = (undefined4 *)(param_1 + 4);
  iVar3 = 1;
  puVar1 = (undefined4 *)(param_2 + 4);
  do {
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    uVar5 = puVar1[4];
    uVar6 = puVar1[5];
    puVar2[3] = puVar1[3];
    puVar2[4] = uVar5;
    puVar2[5] = uVar6;
    uVar5 = puVar1[7];
    puVar2[6] = puVar1[6];
    puVar2[7] = uVar5;
    puVar2 = puVar2 + 8;
    puVar1 = puVar1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  puVar4 = param_1 + 0x44;
  iVar3 = 1;
  param_2 = param_2 + 0x44;
  do {
    if (param_2 != puVar4) {
      func_08007C28(puVar4,*(undefined4 *)(puVar4 + 4));
      uVar5 = func_08007CD8(puVar4,*(undefined4 *)(param_2 + 4));
      *(undefined4 *)(puVar4 + 4) = uVar5;
    }
    puVar4 = puVar4 + 8;
    param_2 = param_2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E44B8 @ 0x080E44B8
// =============================================================================
undefined4 func_080E44B8(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_080AC85C(param_1 + 1,2);
  *param_1 = _DAT_080e44e0;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E44E4 @ 0x080E44E4
// =============================================================================
void func_080E44E4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_080005D4(0x8c);
  func_080324BC(uVar1,param_1,5,0x1b,1,0,0,0);
  return;
}

// =============================================================================
// Function: func_080E4510 @ 0x080E4510
// =============================================================================
undefined4 func_080E4510(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14) = _DAT_080e4540;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E4544 @ 0x080E4544
// =============================================================================
undefined4 func_080E4544(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_080e4560;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E4564 @ 0x080E4564
// =============================================================================
void func_080E4564(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  func_080E4860(param_1 + _DAT_080e4818,2);
  func_080098AC(param_1 + _DAT_080e481c,2);
  func_080098AC(param_1 + 0x820,2);
  func_08000608(*(undefined4 *)(param_1 + 0x7e8));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4820));
  func_08000608(*(undefined4 *)(param_1 + 0x7c0));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4824));
  if (param_1 != -0x708) {
    puVar3 = (undefined4 *)(param_1 + 0x71c);
    if ((undefined4 *)(param_1 + 0x708) != puVar3) {
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while ((undefined4 *)(param_1 + 0x708) != puVar3);
    }
  }
  if ((undefined4 *)(param_1 + _DAT_080e4828) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + _DAT_080e4828 + 0x14);
    if ((undefined4 *)(param_1 + _DAT_080e4828) != puVar3) {
      puVar4 = (undefined4 *)(param_1 + _DAT_080e4828);
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while (puVar4 != puVar3);
    }
  }
  if (param_1 != -0x6e0) {
    puVar3 = (undefined4 *)(param_1 + 0x6f4);
    if ((undefined4 *)(param_1 + 0x6e0) != puVar3) {
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while ((undefined4 *)(param_1 + 0x6e0) != puVar3);
    }
  }
  if ((undefined4 *)(param_1 + _DAT_080e482c) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + _DAT_080e482c + 0x14);
    if ((undefined4 *)(param_1 + _DAT_080e482c) != puVar3) {
      puVar4 = (undefined4 *)(param_1 + _DAT_080e482c);
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while (puVar4 != puVar3);
    }
  }
  if (param_1 != -0x618) {
    puVar3 = (undefined4 *)(param_1 + 0x62c);
    if ((undefined4 *)(param_1 + 0x618) != puVar3) {
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while ((undefined4 *)(param_1 + 0x618) != puVar3);
    }
  }
  if ((undefined4 *)(param_1 + _DAT_080e4830) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + _DAT_080e4830 + 0x14);
    if ((undefined4 *)(param_1 + _DAT_080e4830) != puVar3) {
      puVar4 = (undefined4 *)(param_1 + _DAT_080e4830);
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while (puVar4 != puVar3);
    }
  }
  if (param_1 != -0x550) {
    puVar3 = (undefined4 *)(param_1 + 0x564);
    if ((undefined4 *)(param_1 + 0x550) != puVar3) {
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while ((undefined4 *)(param_1 + 0x550) != puVar3);
    }
  }
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4834));
  func_08000608(*(undefined4 *)(param_1 + 0x528));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4838));
  func_08000608(*(undefined4 *)(param_1 + 0x500));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e483c));
  func_08000608(*(undefined4 *)(param_1 + 0x4d8));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4840));
  func_08000608(*(undefined4 *)(param_1 + 0x4b0));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4844));
  func_08000608(*(undefined4 *)(param_1 + 0x488));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4848));
  func_08000608(*(undefined4 *)(param_1 + 0x460));
  iVar1 = *(int *)(param_1 + _DAT_080e484c);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 8) + 0xc));
  }
  piVar2 = *(int **)(param_1 + 0x438);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4850);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x430);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4854);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x428);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4858);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x420);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e485c);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  if (*(int *)(param_1 + 0x418) != 0) {
    func_08050D0C(*(int *)(param_1 + 0x418),3);
  }
  func_080086BC(param_1,param_2);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080E4860 @ 0x080E4860
// =============================================================================
undefined4 func_080E4860(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_08007C28(param_1 + 0x50,*(undefined4 *)(param_1 + 0x54));
  func_080079E8(param_1 + 0x50,2);
  func_08007C28(param_1 + 0x48,*(undefined4 *)(param_1 + 0x4c));
  func_080079E8(param_1 + 0x48,2);
  func_08007C28(param_1 + 0x40,*(undefined4 *)(param_1 + 0x44));
  func_080079E8(param_1 + 0x40,2);
  func_08007C28(param_1 + 0x38,*(undefined4 *)(param_1 + 0x3c));
  func_080079E8(param_1 + 0x38,2);
  func_08007C28(param_1 + 0x30,*(undefined4 *)(param_1 + 0x34));
  func_080079E8(param_1 + 0x30,2);
  func_08007C28(param_1 + 0x28,*(undefined4 *)(param_1 + 0x2c));
  func_080079E8(param_1 + 0x28,2);
  func_08007C28(param_1 + 0x20,*(undefined4 *)(param_1 + 0x24));
  func_080079E8(param_1 + 0x20,2);
  func_08007C28(param_1 + 0x18,*(undefined4 *)(param_1 + 0x1c));
  func_080079E8(param_1 + 0x18,2);
  func_08007C28(param_1 + 0x10,*(undefined4 *)(param_1 + 0x14));
  func_080079E8(param_1 + 0x10,2);
  func_08007C28(param_1 + 8,*(undefined4 *)(param_1 + 0xc));
  func_080079E8(param_1 + 8,2);
  func_08007C28(param_1,*(undefined4 *)(param_1 + 4));
  func_080079E8(param_1,2);
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E4940 @ 0x080E4940
// =============================================================================
undefined4 func_080E4940(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (((undefined4 *)(param_1 + _DAT_080e4c70) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4c70 + 0x28),
     (undefined4 *)(param_1 + _DAT_080e4c70) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4c70);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4c74));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4c78));
  func_08000608(*(undefined4 *)(param_1 + 0xa80));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4c7c));
  if (((undefined4 *)(param_1 + _DAT_080e4c80) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4c80 + 8),
     (undefined4 *)(param_1 + _DAT_080e4c80) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4c80);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  func_08000608(*(undefined4 *)(param_1 + 0xa30));
  if (((undefined4 *)(param_1 + _DAT_080e4c84) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4c84 + 8),
     (undefined4 *)(param_1 + _DAT_080e4c84) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4c84);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4c88));
  func_08000608(*(undefined4 *)(param_1 + 0x9c0));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4c8c));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4c90));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4c94));
  func_08000608(*(undefined4 *)(param_1 + 0x970));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4c98));
  if (((undefined4 *)(param_1 + _DAT_080e4c9c) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4c9c + 8),
     (undefined4 *)(param_1 + _DAT_080e4c9c) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4c9c);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  if (((undefined4 *)(param_1 + _DAT_080e4ca0) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4ca0 + 8),
     (undefined4 *)(param_1 + _DAT_080e4ca0) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4ca0);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4ca4));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4ca8));
  func_08000608(*(undefined4 *)(param_1 + 0x8d0));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4cac));
  if (((undefined4 *)(param_1 + _DAT_080e4cb0) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4cb0 + 8),
     (undefined4 *)(param_1 + _DAT_080e4cb0) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4cb0);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  if (((undefined4 *)(param_1 + _DAT_080e4cb4) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4cb4 + 8),
     (undefined4 *)(param_1 + _DAT_080e4cb4) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4cb4);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  if ((param_1 != -0x7c8) &&
     (puVar3 = (undefined4 *)(param_1 + 0x7dc), (undefined4 *)(param_1 + 0x7c8) != puVar3)) {
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while ((undefined4 *)(param_1 + 0x7c8) != puVar3);
  }
  if (((undefined4 *)(param_1 + _DAT_080e4cb8) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4cb8 + 0x14),
     (undefined4 *)(param_1 + _DAT_080e4cb8) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4cb8);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  if (((undefined4 *)(param_1 + _DAT_080e4cbc) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4cbc + 8),
     (undefined4 *)(param_1 + _DAT_080e4cbc) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4cbc);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  if (((undefined4 *)(param_1 + _DAT_080e4cc0) != (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(param_1 + _DAT_080e4cc0 + 8),
     (undefined4 *)(param_1 + _DAT_080e4cc0) != puVar3)) {
    puVar6 = (undefined4 *)(param_1 + _DAT_080e4cc0);
    do {
      puVar3 = puVar3 + -1;
      func_08000608(*puVar3);
    } while (puVar6 != puVar3);
  }
  iVar1 = *(int *)(param_1 + 0x7a0);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 8) + 0xc));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4cc4);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x798);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4cc8);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x790);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4ccc);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x788);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4cd0);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x780);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  puVar3 = (undefined4 *)(param_1 + _DAT_080e4cd4);
  piVar2 = (int *)*puVar3;
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  puVar6 = (undefined4 *)(param_1 + _DAT_080e4cd8);
  if (puVar6 != (undefined4 *)0x0) {
    while (puVar6 != puVar3) {
      puVar4 = puVar3 + -2;
      func_0x080073e0(puVar4,puVar3[-1]);
      func_08007184(puVar4,2);
      puVar3 = puVar4;
    }
  }
  if ((param_1 + _DAT_080e4cdc != 0) &&
     (iVar1 = param_1 + _DAT_080e4cdc + 0x10, param_1 + _DAT_080e4cdc != iVar1)) {
    iVar7 = param_1 + _DAT_080e4d44;
    do {
      iVar5 = iVar1 + -8;
      func_0x080073e0(iVar5,*(undefined4 *)(iVar1 + -4));
      func_08007184(iVar5,2);
      iVar1 = iVar5;
    } while (iVar7 != iVar5);
  }
  iVar1 = param_1 + _DAT_080e4d48;
  func_0x080073e0(iVar1,*(undefined4 *)(iVar1 + 4));
  func_08007184(iVar1,2);
  iVar1 = param_1 + _DAT_080e4d4c;
  func_0x080073e0(iVar1,*(undefined4 *)(iVar1 + 4));
  func_08007184(iVar1,2);
  if (*(int *)(param_1 + 0x718) != 0) {
    func_08050D0C(*(int *)(param_1 + 0x718),3);
  }
  func_080086BC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080E4D50 @ 0x080E4D50
// =============================================================================
void func_080E4D50(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  func_080E4F34(param_1 + 0x5b0,2);
  func_080098AC(param_1 + _DAT_080e4f00,2);
  func_080098AC(param_1 + 0x588,2);
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4f04));
  func_08000608(*(undefined4 *)(param_1 + 0x550));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4f08));
  func_08000608(*(undefined4 *)(param_1 + 0x528));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4f0c));
  func_08000608(*(undefined4 *)(param_1 + 0x500));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4f10));
  func_08000608(*(undefined4 *)(param_1 + 0x4d8));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4f14));
  func_08000608(*(undefined4 *)(param_1 + 0x4b0));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4f18));
  func_08000608(*(undefined4 *)(param_1 + 0x488));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e4f1c));
  func_08000608(*(undefined4 *)(param_1 + 0x460));
  iVar1 = *(int *)(param_1 + _DAT_080e4f20);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 8) + 0xc));
  }
  piVar2 = *(int **)(param_1 + 0x438);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4f24);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x430);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4f28);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x428);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4f2c);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x420);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e4f30);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  if (*(int *)(param_1 + 0x418) != 0) {
    func_08050D0C(*(int *)(param_1 + 0x418),3);
  }
  func_080086BC(param_1,param_2);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080E4F34 @ 0x080E4F34
// =============================================================================
undefined4 func_080E4F34(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_08007C28(param_1 + 0x40,*(undefined4 *)(param_1 + 0x44));
  func_080079E8(param_1 + 0x40,2);
  func_08007C28(param_1 + 0x38,*(undefined4 *)(param_1 + 0x3c));
  func_080079E8(param_1 + 0x38,2);
  func_08007C28(param_1 + 0x30,*(undefined4 *)(param_1 + 0x34));
  func_080079E8(param_1 + 0x30,2);
  func_08007C28(param_1 + 0x28,*(undefined4 *)(param_1 + 0x2c));
  func_080079E8(param_1 + 0x28,2);
  func_08007C28(param_1 + 0x20,*(undefined4 *)(param_1 + 0x24));
  func_080079E8(param_1 + 0x20,2);
  func_08007C28(param_1 + 0x18,*(undefined4 *)(param_1 + 0x1c));
  func_080079E8(param_1 + 0x18,2);
  func_08007C28(param_1 + 0x10,*(undefined4 *)(param_1 + 0x14));
  func_080079E8(param_1 + 0x10,2);
  func_08007C28(param_1 + 8,*(undefined4 *)(param_1 + 0xc));
  func_080079E8(param_1 + 8,2);
  func_08007C28(param_1,*(undefined4 *)(param_1 + 4));
  func_080079E8(param_1,2);
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E4FF0 @ 0x080E4FF0
// =============================================================================
void func_080E4FF0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  func_080E5324(param_1 + _DAT_080e5250,2);
  func_080098AC(param_1 + 0x830,2);
  func_080098AC(param_1 + _DAT_080e5254,2);
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e5258));
  func_08000608(*(undefined4 *)(param_1 + 0x7e8));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e525c));
  func_08000608(*(undefined4 *)(param_1 + 0x7c0));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e5260));
  func_08000608(*(undefined4 *)(param_1 + 0x798));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e5264));
  func_08000608(*(undefined4 *)(param_1 + 0x750));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e5268));
  func_08000608(*(undefined4 *)(param_1 + 0x728));
  if ((undefined4 *)(param_1 + _DAT_080e526c) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + _DAT_080e526c + 100);
    if ((undefined4 *)(param_1 + _DAT_080e526c) != puVar3) {
      puVar4 = (undefined4 *)(param_1 + _DAT_080e526c);
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while (puVar4 != puVar3);
    }
  }
  func_08000608(*(undefined4 *)(param_1 + 0x6a0));
  if ((undefined4 *)(param_1 + _DAT_080e5270) != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + _DAT_080e5270 + 100);
    if ((undefined4 *)(param_1 + _DAT_080e5270) != puVar3) {
      puVar4 = (undefined4 *)(param_1 + _DAT_080e5270);
      do {
        puVar3 = puVar3 + -1;
        func_08000608(*puVar3);
      } while (puVar4 != puVar3);
    }
  }
  func_08000608(*(undefined4 *)(param_1 + 0x618));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e5274));
  func_08000608(*(undefined4 *)(param_1 + 0x5f0));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e5278));
  func_08000608(*(undefined4 *)(param_1 + 0x5c8));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e527c));
  func_08000608(*(undefined4 *)(param_1 + 0x5a0));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e5280));
  func_08000608(*(undefined4 *)(param_1 + 0x578));
  func_08000608(*(undefined4 *)(param_1 + _DAT_080e5284));
  func_08000608(*(undefined4 *)(param_1 + 0x550));
  iVar1 = *(int *)(param_1 + _DAT_080e5288);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 8) + 0xc));
  }
  piVar2 = *(int **)(param_1 + 0x540);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e528c);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x538);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e5290);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x530);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e5294);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x528);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + _DAT_080e5298);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  piVar2 = *(int **)(param_1 + 0x520);
  if (piVar2 != (int *)0x0) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  if (*(int *)(param_1 + _DAT_080e529c) != 0) {
    func_08050D0C(*(int *)(param_1 + _DAT_080e529c),3);
  }
  func_080086BC(param_1,param_2);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080E52A0 @ 0x080E52A0
// =============================================================================
undefined8 func_080E52A0(int param_1)

{
  undefined4 in_lr;
  
  func_08007874();
  *(undefined4 *)(param_1 + 4) = 0;
  func_08007874(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  func_08007874(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  func_08007874(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  func_08007874(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = 0;
  func_08007874(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  func_08007874(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = 0;
  func_08007874(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  func_08007874(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = 0;
  func_08007874(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  func_08007874(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = 0;
  func_08007874(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E5324 @ 0x080E5324
// =============================================================================
undefined4 func_080E5324(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  func_08007C28(param_1 + 0x58,*(undefined4 *)(param_1 + 0x5c));
  func_080079E8(param_1 + 0x58,2);
  func_08007C28(param_1 + 0x50,*(undefined4 *)(param_1 + 0x54));
  func_080079E8(param_1 + 0x50,2);
  func_08007C28(param_1 + 0x48,*(undefined4 *)(param_1 + 0x4c));
  func_080079E8(param_1 + 0x48,2);
  func_08007C28(param_1 + 0x40,*(undefined4 *)(param_1 + 0x44));
  func_080079E8(param_1 + 0x40,2);
  func_08007C28(param_1 + 0x38,*(undefined4 *)(param_1 + 0x3c));
  func_080079E8(param_1 + 0x38,2);
  func_08007C28(param_1 + 0x30,*(undefined4 *)(param_1 + 0x34));
  func_080079E8(param_1 + 0x30,2);
  func_08007C28(param_1 + 0x28,*(undefined4 *)(param_1 + 0x2c));
  func_080079E8(param_1 + 0x28,2);
  func_08007C28(param_1 + 0x20,*(undefined4 *)(param_1 + 0x24));
  func_080079E8(param_1 + 0x20,2);
  func_08007C28(param_1 + 0x18,*(undefined4 *)(param_1 + 0x1c));
  func_080079E8(param_1 + 0x18,2);
  func_08007C28(param_1 + 0x10,*(undefined4 *)(param_1 + 0x14));
  func_080079E8(param_1 + 0x10,2);
  func_08007C28(param_1 + 8,*(undefined4 *)(param_1 + 0xc));
  func_080079E8(param_1 + 8,2);
  func_08007C28(param_1,*(undefined4 *)(param_1 + 4));
  func_080079E8(param_1,2);
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E5418 @ 0x080E5418
// =============================================================================
undefined4 func_080E5418(void)

{
  undefined4 in_lr;
  
  func_080CA6F4(*(undefined4 *)*_DAT_080e5428);
  return in_lr;
}

// =============================================================================
// Function: func_080E542C @ 0x080E542C
// =============================================================================
undefined8 func_080E542C(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  param_1[5] = _DAT_080e5468;
  *param_1 = *param_2;
  uVar1 = Interrupt_WaitForVBlank(4);
  *(ushort *)(param_1 + 1) = uVar1 & 4;
  iVar3 = *_DAT_080e546c;
  *_DAT_080e546c = (int)param_1;
  param_1[2] = iVar3;
  param_1[3] = _DAT_080e5470;
  uVar2 = func_0x080d100c(2,_DAT_080e5474);
  param_1[4] = uVar2;
  Interrupt_SetMasterEnable(4);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E54C4 @ 0x080E54C4
// =============================================================================
undefined4 func_080E54C4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  while (iVar1 = param_2, iVar1 != 0) {
    func_080E54C4(param_1,*(undefined4 *)(iVar1 + 0xc));
    param_2 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      free(iVar1);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E54F0 @ 0x080E54F0
// =============================================================================
undefined8 func_080E54F0(int *param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((param_4 == *(int *)(param_2 + 4)) ||
     ((param_6 == 0 && ((param_3 != 0 || (*param_5 < *(uint *)(param_4 + 0x10))))))) {
    iVar1 = malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = func_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(uint *)(iVar1 + 0x10) = *param_5;
      *(uint *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 8) = iVar1;
    iVar2 = *(int *)(param_2 + 4);
    if (param_4 == iVar2) {
      *(int *)(param_4 + 4) = iVar1;
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
    else if (param_4 == *(int *)(iVar2 + 8)) {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  else {
    iVar1 = malloc(0x18);
    if (iVar1 == 0) {
      iVar1 = func_080D3BC0(0x18);
    }
    if (iVar1 != -0x10) {
      *(uint *)(iVar1 + 0x10) = *param_5;
      *(uint *)(iVar1 + 0x14) = param_5[1];
    }
    *(int *)(param_4 + 0xc) = iVar1;
    if (param_4 == *(int *)(*(int *)(param_2 + 4) + 0xc)) {
      *(int *)(*(int *)(param_2 + 4) + 0xc) = iVar1;
    }
  }
  *(int *)(iVar1 + 4) = param_4;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  func_080E21E0(iVar1,*(int *)(param_2 + 4) + 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *param_1 = iVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E55B0 @ 0x080E55B0
// =============================================================================
undefined8 func_080E55B0(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  bool bVar3;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = *(int *)(param_2 + 4);
  bVar3 = true;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    do {
      iVar1 = iVar2;
      bVar3 = *param_3 < *(uint *)(iVar1 + 0x10);
      if (bVar3) {
        iVar2 = *(int *)(iVar1 + 8);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
    } while (iVar2 != 0);
  }
  iStack_24 = iVar1;
  if (bVar3) {
    iStack_20 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (iVar1 != iStack_20) {
      iStack_24 = func_080E2354(iVar1);
      goto LAB_080e5620;
    }
    func_080E54F0(&iStack_1c,param_2,0,iVar1,param_3,0);
  }
  else {
LAB_080e5620:
    if (*param_3 <= *(uint *)(iStack_24 + 0x10)) {
      *param_1 = iStack_24;
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_080e5654;
    }
    func_080E54F0(&iStack_20,param_2,0,iVar1,param_3,0);
    iStack_1c = iStack_20;
  }
  *param_1 = iStack_1c;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_080e5654:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E5664 @ 0x080E5664
// =============================================================================
undefined8 func_080E5664(int *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  bool bVar5;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [2];
  
  iVar2 = *param_3;
  if (iVar2 == *(int *)(*(int *)(param_2 + 4) + 8)) {
    if (*(int *)(param_2 + 8) != 0) {
      if (*param_4 < *(uint *)(iVar2 + 0x10)) {
LAB_080e5768:
        func_080E54F0(param_1,param_2,iVar2,iVar2,param_4,0);
        goto LAB_080e580a;
      }
      if (*param_4 <= *(uint *)(iVar2 + 0x10)) {
        *param_1 = iVar2;
        goto LAB_080e580a;
      }
      iStack_2c = iVar2;
      iVar1 = func_080E2B28(iVar2);
      iStack_2c = iVar1;
      if (iVar1 == *(int *)(param_2 + 4)) {
        iVar3 = *param_3;
        iVar2 = iVar3;
      }
      else {
        if (*(uint *)(iVar1 + 0x10) <= *param_4) goto LAB_080e57fc;
        iVar3 = *param_3;
        iVar2 = iVar3;
        if (*(int *)(iVar3 + 0xc) != 0) goto LAB_080e57e2;
      }
LAB_080e57d2:
      func_080E54F0(param_1,param_2,0,iVar3,param_4,iVar2);
      goto LAB_080e580a;
    }
    func_080E55B0(&iStack_2c,param_2,param_4);
  }
  else if (iVar2 == *(int *)(param_2 + 4)) {
    iVar3 = *(int *)(iVar2 + 0xc);
    if (*(uint *)(iVar3 + 0x10) < *param_4) goto LAB_080e57d2;
    func_080E55B0(&iStack_2c,param_2,param_4);
  }
  else {
    iStack_2c = iVar2;
    iVar3 = func_080E2354(iVar2);
    iVar2 = *param_3;
    bVar4 = *param_4 < *(uint *)(iVar2 + 0x10);
    iStack_2c = iVar3;
    if ((bVar4) && (*(uint *)(iVar3 + 0x10) < *param_4)) {
      if (*(int *)(iVar3 + 0xc) != 0) goto LAB_080e5768;
      iVar1 = 0;
      iVar2 = iVar3;
LAB_080e57ea:
      func_080E54F0(param_1,param_2,iVar1,iVar3,param_4,iVar2);
      goto LAB_080e580a;
    }
    iStack_28 = *param_3;
    iVar1 = func_080E2B28();
    bVar5 = !bVar4;
    iStack_28 = iVar1;
    if (!bVar4) {
      iVar3 = *param_3;
      bVar5 = *(uint *)(iVar3 + 0x10) < *param_4;
      if ((bVar5) && ((iVar1 == *(int *)(param_2 + 4) || (*param_4 < *(uint *)(iVar1 + 0x10))))) {
        iVar2 = iVar3;
        if (*(int *)(iVar3 + 0xc) == 0) goto LAB_080e57d2;
LAB_080e57e2:
        iVar3 = iVar1;
        iVar2 = 0;
        goto LAB_080e57ea;
      }
    }
    if (bVar4 == bVar5) {
      iStack_2c = *param_3;
    }
    else {
LAB_080e57fc:
      func_080E55B0(aiStack_24,param_2,param_4);
      iStack_2c = aiStack_24[0];
    }
  }
  *param_1 = iStack_2c;
LAB_080e580a:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080E581C @ 0x080E581C
// =============================================================================
undefined4 func_080E581C(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  param_1[1] = _DAT_080e583c;
  *_DAT_080e5840 = *param_1;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E5844 @ 0x080E5844
// =============================================================================
undefined4 func_080E5844(undefined4 *param_1,uint param_2)

{
  undefined4 in_lr;
  
  param_1[1] = _DAT_080e5864;
  *_DAT_080e5868 = *param_1;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080E586C @ 0x080E586C
// =============================================================================
undefined4 func_080E586C(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar2 = (int *)**(int **)(param_1 + 4);
  if (piVar2 != *(int **)(param_1 + 4)) {
    do {
      piVar3 = (int *)*piVar2;
      if (piVar2 != (int *)0x0) {
        free();
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)*(int *)(param_1 + 4));
  }
  iVar1 = *(int *)(param_1 + 4);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  return in_lr;
}

// =============================================================================
// Function: func_080E5898 @ 0x080E5898
// =============================================================================
void func_080E5898(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(param_1 + 0x210) = _DAT_080e5968;
  if ((param_1 != -0x2ec) && (param_1 + 0x2ec != param_1 + 0x32c)) {
    iVar2 = param_1 + 0x32c;
    do {
      iVar1 = iVar2 + -8;
      func_0x080073e0(iVar1,*(undefined4 *)(iVar2 + -4));
      func_08007184(iVar1,2);
      iVar2 = iVar1;
    } while (param_1 + 0x2ec != iVar1);
  }
  piVar3 = (int *)(param_1 + 0x218);
  if ((param_1 != -0x2ac) && (param_1 + 0x2ac != param_1 + 0x2ec)) {
    iVar2 = param_1 + 0x2ec;
    do {
      iVar1 = iVar2 + -8;
      func_08007C28(iVar1,*(undefined4 *)(iVar2 + -4));
      func_080079E8(iVar1,2);
      iVar2 = iVar1;
    } while (param_1 + 0x2ac != iVar1);
  }
  func_0x080073e0(param_1 + 0x2a4,*(undefined4 *)(param_1 + 0x2a8));
  func_08007184(param_1 + 0x2a4,2);
  func_08007C28(param_1 + 0x29c,*(undefined4 *)(param_1 + 0x2a0));
  func_080079E8(param_1 + 0x29c,2);
  for (; piVar3 != (int *)(param_1 + 0x214) + *(int *)(param_1 + 0x214) * 3 + 1; piVar3 = piVar3 + 3
      ) {
  }
  func_080CADF0(param_1,param_2);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_080E59C0 @ 0x080E59C0
// =============================================================================
undefined4 func_080E59C0(void)

{
  undefined4 in_lr;
  
  func_080A4B6C();
  return in_lr;
}

