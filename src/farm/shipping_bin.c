// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: SHIPPING_BIN (24 functions)
// Description: Shipping bin mechanics, crop/mineral item valuations and daily pickup earnings
// =============================================================================

#include "../../include/farm/shipping_bin.h"

// =============================================================================
// Function: ShippingBin_Init @ 0x0800B0DC
// =============================================================================
undefined8 ShippingBin_Init(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *param_1 = 0;
  iVar4 = 0x66;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    func_0x0800b26c(puVar2);
    iVar1 = _DAT_0800b11c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  uVar3 = 0;
  do {
    func_0800B2D4(param_1 + *(byte *)(uVar3 + iVar1) + 1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x16);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800B124 @ 0x0800B124
// =============================================================================
undefined8 func_0800B124(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 < 0x67) {
    uVar1 = func_0x0800b280(param_1 + param_2 * 4 + 4);
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800B140 @ 0x0800B140
// =============================================================================
undefined8 func_0800B140(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 < 0x67) {
    uVar1 = func_0800B288(param_1 + param_2 * 4 + 4);
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800B15C @ 0x0800B15C
// =============================================================================
undefined8 func_0800B15C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    param_1 = param_1 + 4;
    cVar1 = func_0x0800b280(param_1);
    if ((cVar1 == '\0') || (iVar2 = func_0800B288(param_1), iVar2 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0x66 < uVar4) {
      uVar3 = 1;
LAB_0800b186:
      return CONCAT44(in_lr,uVar3);
    }
  }
  uVar3 = 0;
  goto LAB_0800b186;
}

// =============================================================================
// Function: func_0800B18C @ 0x0800B18C
// =============================================================================
undefined8 func_0800B18C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    iVar3 = param_1 + (uint)*(byte *)(uVar4 + _DAT_0800b1b8) * 4 + 4;
    cVar1 = func_0x0800b280(iVar3);
    if ((cVar1 == '\0') || (iVar3 = func_0800B288(iVar3), iVar3 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0xe < uVar4) {
      uVar2 = 1;
LAB_0800b1c4:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 0;
  goto LAB_0800b1c4;
}

// =============================================================================
// Function: func_0800B1CC @ 0x0800B1CC
// =============================================================================
undefined8 func_0800B1CC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    iVar3 = param_1 + (uint)*(byte *)(uVar4 + _DAT_0800b1f8) * 4 + 4;
    cVar1 = func_0x0800b280(iVar3);
    if ((cVar1 == '\0') || (iVar3 = func_0800B288(iVar3), iVar3 == 0)) break;
    uVar4 = uVar4 + 1;
    if (0x13 < uVar4) {
      uVar2 = 1;
LAB_0800b204:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 0;
  goto LAB_0800b204;
}

// =============================================================================
// Function: ShippingBin_ShipItem @ 0x0800B20C
// =============================================================================
undefined4 ShippingBin_ShipItem(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = func_0800E198(param_2);
  if (uVar1 != 0) {
    iVar2 = func_0x0800e194(param_2);
    func_0800B29C(param_1 + iVar2 + 1);
    uVar3 = _DAT_0800b248 - *param_1;
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    *param_1 = *param_1 + uVar3;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800B254 @ 0x0800B254
// =============================================================================
undefined4 func_0800B254(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 < 0x67) {
    func_0800B2D4(param_1 + param_2 * 4 + 4);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800B288 @ 0x0800B288
// =============================================================================
undefined8 func_0800B288(uint *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((int)*param_1 < 0) {
    uVar1 = *param_1 & 0x7fffffff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800B29C @ 0x0800B29C
// =============================================================================
undefined4 func_0800B29C(uint *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (-1 < (int)*param_1) {
    *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) | 0x80;
  }
  uVar1 = *param_1 & 0x7fffffff;
  if (uVar1 <= _DAT_0800b2cc) {
    *param_1 = _DAT_0800b2d0 + 1 & *param_1 | uVar1 + 1 & _DAT_0800b2d0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800B2D4 @ 0x0800B2D4
// =============================================================================
undefined4 func_0800B2D4(int *param_1)

{
  undefined4 in_lr;
  
  if (-1 < *param_1) {
    *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) | 0x80;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800B2EC @ 0x0800B2EC
// =============================================================================
undefined8 func_0800B2EC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_38 [4];
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 auStack_2f [3];
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  iVar2 = 0x3f;
  puStack_2c = &uStack_31;
  puStack_28 = &uStack_30;
  puStack_24 = auStack_2f;
  iVar1 = param_1;
  do {
    func_0800DBC8(iVar1);
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  func_0x0800db2c(&uStack_34,0);
  func_0800DBE0(auStack_38,uStack_34,1);
  memcpy(param_1,auStack_38,2);
  func_0x0800db2c(&uStack_33,0x10);
  func_0800DBE0(auStack_38,uStack_33,1);
  memcpy(param_1 + 2,auStack_38,2);
  func_0x0800db2c(&uStack_32,8);
  func_0800DBE0(auStack_38,uStack_32,1);
  memcpy(param_1 + 4,auStack_38,2);
  func_0x0800db2c(puStack_2c,0x18);
  func_0800DBE0(auStack_38,uStack_31,1);
  memcpy(param_1 + 6,auStack_38,2);
  func_0x0800db2c(puStack_28,0x20);
  func_0800DBE0(auStack_38,uStack_30,1);
  memcpy(param_1 + 8,auStack_38,2);
  func_0x0800db2c(puStack_24,0x4c);
  func_0800DBE0(auStack_38,auStack_2f[0],1);
  memcpy(param_1 + 10,auStack_38,2);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800B410 @ 0x0800B410
// =============================================================================
undefined8 func_0800B410(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar3 = 0;
  iVar4 = param_1 + 0x80;
  for (; param_1 != iVar4; param_1 = param_1 + 2) {
    cVar1 = func_0800DC34(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(param_1);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800DC48(param_1);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_0800B474 @ 0x0800B474
// =============================================================================
undefined8 func_0800B474(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x80;
  for (; param_1 != iVar3; param_1 = param_1 + 2) {
    cVar1 = func_0800DC34(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(param_1);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800DC48(param_1);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800B4D0 @ 0x0800B4D0
// =============================================================================
undefined8 func_0800B4D0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x80;
  for (; param_1 != iVar2; param_1 = param_1 + 2) {
    cVar1 = func_0800DC34(param_1);
    if (cVar1 != '\0') goto LAB_0800b4fa;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b4fa:
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_0800B500 @ 0x0800B500
// =============================================================================
undefined8 func_0800B500(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = param_1 + 0x80; iStack_c != param_1; iStack_c = iStack_c + -2) {
    cVar1 = func_0800DC34(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800b53a;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800b53a:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800B544 @ 0x0800B544
// =============================================================================
undefined8 func_0800B544(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x80;
  for (; param_1 != iVar3; param_1 = param_1 + 2) {
    cVar1 = func_0800DC34(param_1);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(param_1);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800b592;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800b592:
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800B5A8 @ 0x0800B5A8
// =============================================================================
undefined8 func_0800B5A8(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  uint uStack_18;
  
  if (param_2 < 0x51) {
    iVar5 = param_1 + 0x80;
    for (; (param_3 != 0 && (param_1 != iVar5)); param_1 = param_1 + 2) {
      uStack_24 = param_3;
      cVar1 = func_0800DC34(param_1);
      if (cVar1 == '\0') {
        auStack_1b[0] = func_0800DC10(param_1);
        iVar2 = func_0x0800db30(auStack_1b);
        if (iVar2 == param_2) {
          iVar2 = func_0800DC48(param_1);
          uStack_18 = 99U - iVar2;
          puVar4 = &uStack_24;
          if (99U - iVar2 < uStack_24) {
            puVar4 = &uStack_18;
          }
          uVar3 = *puVar4;
          func_0800DC5C(param_1,uVar3);
          goto LAB_0800b646;
        }
      }
      else {
        uStack_20 = 99;
        puVar4 = &uStack_24;
        if (99 < uStack_24) {
          puVar4 = &uStack_20;
        }
        uVar3 = *puVar4;
        func_0x0800db2c(&uStack_1c,param_2);
        func_0800DBE0(auStack_28,uStack_1c,uVar3);
        memcpy(param_1,auStack_28,2);
LAB_0800b646:
        uStack_24 = uStack_24 - uVar3;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

// =============================================================================
// Function: func_0800B660 @ 0x0800B660
// =============================================================================
undefined8 func_0800B660(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0x3f;
  iVar1 = param_1;
  do {
    func_0800DE68(iVar1);
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800B68C @ 0x0800B68C
// =============================================================================
undefined8 func_0800B68C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar3 = 0;
  iVar4 = param_1 + 0x100;
  for (; param_1 != iVar4; param_1 = param_1 + 4) {
    cVar1 = func_0800DEDC(param_1);
    if (cVar1 == '\0') {
      func_0800DEB8(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar2 = func_0800DEF0(param_1);
        iVar3 = (iVar3 + 99) - iVar2;
      }
    }
    else {
      iVar3 = iVar3 + 99;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_0800B6E8 @ 0x0800B6E8
// =============================================================================
undefined8 func_0800B6E8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x100;
  for (; param_1 != iVar3; param_1 = param_1 + 4) {
    cVar1 = func_0800DEDC(param_1);
    if (cVar1 == '\0') {
      func_0800DEB8(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar2 = func_0800DEF0(param_1);
        iVar4 = iVar4 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800B73C @ 0x0800B73C
// =============================================================================
undefined8 func_0800B73C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = param_1 + 0x100;
  for (; param_1 != iVar2; param_1 = param_1 + 4) {
    cVar1 = func_0800DEDC(param_1);
    if (cVar1 != '\0') goto LAB_0800b768;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800b768:
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_0800B770 @ 0x0800B770
// =============================================================================
undefined8 func_0800B770(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = 0x3f;
  for (iStack_c = param_1 + 0x100; iStack_c != param_1; iStack_c = iStack_c + -4) {
    cVar1 = func_0800DEDC(iStack_c + -4);
    if (cVar1 != '\0') goto LAB_0800b7ae;
    iVar2 = iVar2 + -1;
  }
  iVar2 = -1;
LAB_0800b7ae:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800B7B8 @ 0x0800B7B8
// =============================================================================
undefined8 func_0800B7B8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  iVar3 = param_1 + 0x100;
  for (; param_1 != iVar3; param_1 = param_1 + 4) {
    cVar1 = func_0800DEDC(param_1);
    if (cVar1 == '\0') {
      func_0800DEB8(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) goto LAB_0800b802;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800b802:
  return CONCAT44(in_lr,iVar4);
}

