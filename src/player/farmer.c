// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: PLAYER_AND_RUCKSACK (313 functions)
// Description: Farmer character (Pete/Claire), stamina/fatigue management, rucksack slots and held items
// =============================================================================

#include "../../include/player/farmer.h"

// =============================================================================
// Function: Farmer_Init @ 0x0800E2E4
// =============================================================================
undefined8 Farmer_Init(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800e2f0;
  if (param_1 < 4) {
    iVar1 = param_1 * 7 + _DAT_0800e300;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800E304 @ 0x0800E304
// =============================================================================
undefined8 func_0800E304(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800e310;
  if (param_1 < 7) {
    iVar1 = param_1 * 5 + _DAT_0800e320;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800E324 @ 0x0800E324
// =============================================================================
ulonglong func_0800E324(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(param_1 + 1) & 0x7f) >> 2 == 0) && ((*(ushort *)(param_1 + 2) & 0x1f) < 6)) {
    uVar1 = (*(byte *)(param_1 + 1) & 3) - 1;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 1);
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff00000003;
}

// =============================================================================
// Function: func_0800E354 @ 0x0800E354
// =============================================================================
undefined8 func_0800E354(int param_1,undefined4 param_2,undefined1 *param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 in_lr;
  ushort uStack_44;
  ushort uStack_42;
  ushort uStack_40;
  byte *pbStack_3c;
  byte *pbStack_38;
  ushort *puStack_34;
  byte *pbStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar2 = strlen(param_2);
  if (0xc < uVar2) {
    uVar2 = 0xc;
  }
  memcpy(param_1,param_2,uVar2);
  *(undefined1 *)(param_1 + uVar2) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x20) = *param_3;
  uVar1 = (ushort)_DAT_0800e4cc;
  uStack_44 = uVar1 & uStack_44 & 0x3ff | 2;
  uStack_42 = uVar1 & uStack_42 & 0x3ff;
  uStack_40 = uVar1 & uStack_40;
  memcpy(param_1 + 0x24,&uStack_44,6);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  iVar4 = param_1 + 0x2c;
  iVar5 = 5;
  puVar6 = (ushort *)(param_1 + 0x44);
  pbStack_3c = (byte *)(param_1 + 0x47);
  pbStack_38 = (byte *)(param_1 + 0x4b);
  puVar3 = (ushort *)(param_1 + 0x4c);
  puStack_34 = (ushort *)(param_1 + 0x50);
  pbStack_30 = (byte *)(param_1 + 0x51);
  iStack_2c = param_1 + 0x54;
  iStack_28 = param_1 + 0x5c;
  iStack_24 = param_1 + 0x60;
  do {
    func_0x0800ef44(iVar4);
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  *(byte *)puVar6 = *(byte *)puVar6 & 0x80;
  uVar1 = (ushort)_DAT_0800e4d0;
  *puVar6 = uVar1 & *puVar6 | 0x4b00;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & _DAT_0800e4d4;
  *(ushort *)(param_1 + 0x46) = uVar1 & *(ushort *)(param_1 + 0x46);
  *pbStack_3c = *pbStack_3c & 0x7f;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe0000000;
  *pbStack_38 = *pbStack_38 & 0x1f;
  *(byte *)puVar3 = *(byte *)puVar3 & 0x80;
  *puVar3 = uVar1 & *puVar3;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & _DAT_0800e4d8;
  *puStack_34 = (ushort)_DAT_0800e4dc & *puStack_34;
  *pbStack_30 = *pbStack_30 & 0x1f;
  func_0x0800f170(iStack_2c);
  func_0800DBC8(iStack_28);
  func_0800F574(iStack_24);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800E504 @ 0x0800E504
// =============================================================================
undefined8 func_0800E504(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(199 < (*(uint *)(param_1 + 0x44) & 0x7fffff) >> 0xf));
}

// =============================================================================
// Function: func_0800E550 @ 0x0800E550
// =============================================================================
undefined8 func_0800E550(int param_1,byte param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  uint uVar4;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  byte bStack_24;
  byte bStack_23;
  byte bStack_22;
  byte bStack_21;
  byte bStack_20;
  byte bStack_1f;
  byte bStack_1e;
  byte bStack_1d;
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  byte bStack_18;
  byte bStack_17;
  byte bStack_16;
  byte bStack_15;
  byte bStack_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;
  byte bStack_10;
  byte bStack_f;
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte abStack_a [2];
  
  uVar1 = func_0x0800db30();
  switch(uVar1) {
  case 0:
    uVar1 = func_0x0800ef6c(param_1 + 0x30);
    switch(uVar1) {
    case 1:
      func_0x0800db2c(&bStack_27,1);
      uVar3 = (uint)bStack_27;
      break;
    case 2:
      func_0x0800db2c(&bStack_26,2);
      uVar3 = (uint)bStack_26;
      break;
    case 3:
      func_0x0800db2c(&bStack_25,3);
      uVar3 = (uint)bStack_25;
      break;
    case 4:
      func_0x0800db2c(&bStack_24,4);
      uVar3 = (uint)bStack_24;
      break;
    case 5:
      func_0x0800db2c(&bStack_23,7);
      uVar3 = (uint)bStack_23;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 8:
    uVar1 = func_0x0800ef6c(param_1 + 0x2c);
    switch(uVar1) {
    case 1:
      func_0x0800db2c(&bStack_22,9);
      uVar3 = (uint)bStack_22;
      break;
    case 2:
      func_0x0800db2c(&bStack_21,10);
      uVar3 = (uint)bStack_21;
      break;
    case 3:
      func_0x0800db2c(&bStack_20,0xb);
      uVar3 = (uint)bStack_20;
      break;
    case 4:
      func_0x0800db2c(&bStack_1f,0xc);
      uVar3 = (uint)bStack_1f;
      break;
    case 5:
      func_0x0800db2c(&bStack_1e,0xf);
      uVar3 = (uint)bStack_1e;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 0x10:
    uVar1 = func_0x0800ef6c(param_1 + 0x34);
    switch(uVar1) {
    case 1:
      func_0x0800db2c(&bStack_1d,0x11);
      uVar3 = (uint)bStack_1d;
      break;
    case 2:
      func_0x0800db2c(&bStack_1c,0x12);
      uVar3 = (uint)bStack_1c;
      break;
    case 3:
      func_0x0800db2c(&bStack_1b,0x13);
      uVar3 = (uint)bStack_1b;
      break;
    case 4:
      func_0x0800db2c(&bStack_1a,0x14);
      uVar3 = (uint)bStack_1a;
      break;
    case 5:
      func_0x0800db2c(&bStack_19,0x17);
      uVar3 = (uint)bStack_19;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 0x18:
    uVar1 = func_0x0800ef6c(param_1 + 0x38);
    switch(uVar1) {
    case 1:
      func_0x0800db2c(&bStack_18,0x19);
      uVar3 = (uint)bStack_18;
      break;
    case 2:
      func_0x0800db2c(&bStack_17,0x1a);
      uVar3 = (uint)bStack_17;
      break;
    case 3:
      func_0x0800db2c(&bStack_16,0x1b);
      uVar3 = (uint)bStack_16;
      break;
    case 4:
      func_0x0800db2c(&bStack_15,0x1c);
      uVar3 = (uint)bStack_15;
      break;
    case 5:
      func_0x0800db2c(&bStack_14,0x1f);
      uVar3 = (uint)bStack_14;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 0x20:
    uVar1 = func_0x0800ef6c(param_1 + 0x3c);
    switch(uVar1) {
    case 1:
      func_0x0800db2c(&bStack_13,0x21);
      uVar3 = (uint)bStack_13;
      break;
    case 2:
      func_0x0800db2c(&bStack_12,0x22);
      uVar3 = (uint)bStack_12;
      break;
    case 3:
      func_0x0800db2c(&bStack_11,0x23);
      uVar3 = (uint)bStack_11;
      break;
    case 4:
      func_0x0800db2c(&bStack_10,0x24);
      uVar3 = (uint)bStack_10;
      break;
    case 5:
      func_0x0800db2c(&bStack_f,0x27);
      uVar3 = (uint)bStack_f;
      break;
    default:
      goto case_0800E916;
    }
    break;
  case 0x28:
    uVar3 = 0x800e89f;
    iVar2 = func_0x0800ef6c(param_1 + 0x40);
    if (iVar2 - 1U < 5) {
      switch((uint)(&case_0800E8B4)[iVar2 - 1U] & 0xfffffffe) {
      case 0x800e8b4:
        uVar4 = 0x800e8b7;
        (*(code *)((uVar3 & 0xfffffffc) + 400))();
        uVar3 = 0x800e8bb;
        (*(code *)((uVar4 & 0xfffffffc) + 0x1b0))(0);
        uVar4 = 0x800e8bf;
        (*(code *)((uVar3 & 0xfffffffc) + 0x1d0))(0);
        uVar3 = 0x800e8c3;
        (*(code *)((uVar4 & 0xfffffffc) + 0x1ec))(0);
        (*(code *)((uVar3 & 0xfffffffc) + 0x20c))(0);
      case 0x800e8c8:
        func_0x0800db2c(&bStack_e,0x29);
        uVar3 = (uint)bStack_e;
        break;
      case 0x800e8d8:
        func_0x0800db2c(&bStack_d,0x2a);
        uVar3 = (uint)bStack_d;
        break;
      case 0x800e8e8:
        func_0x0800db2c(&bStack_c,0x2b);
        uVar3 = (uint)bStack_c;
        break;
      case 0x800e8f6:
        func_0x0800db2c(&bStack_b,0x2c);
        uVar3 = (uint)bStack_b;
        break;
      case 0x800e906:
        func_0x0800db2c(abStack_a,0x2f);
        uVar3 = (uint)abStack_a[0];
      }
      break;
    }
  default:
case_0800E916:
    uVar3 = (uint)param_2;
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_0800E924 @ 0x0800E924
// =============================================================================
void func_0800E924(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *param_1 = *(undefined4 *)(param_2 + 0x24);
  param_1[1] = uVar1;
  (*UNRECOVERED_JUMPTABLE)(param_1,UNRECOVERED_JUMPTABLE,param_1 + 2);
  return;
}

// =============================================================================
// Function: func_0800E9E4 @ 0x0800E9E4
// =============================================================================
undefined4 func_0800E9E4(int param_1,int param_2)

{
  uint *puVar1;
  ushort *puVar2;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  puVar2 = (ushort *)(param_1 + 0x44);
  uStack_10 = ((*puVar2 & 0x7fff) >> 7) + param_2;
  if ((int)uStack_10 < 1) {
    *puVar2 = (ushort)_DAT_0800ea34 & *puVar2;
  }
  else {
    uStack_c = func_0x0800e51c(param_1);
    puVar1 = &uStack_10;
    if (uStack_c < uStack_10) {
      puVar1 = &uStack_c;
    }
    *puVar2 = (ushort)_DAT_0800ea20 & *puVar2 | (ushort)(byte)*puVar1 << 7;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800EA38 @ 0x0800EA38
// =============================================================================
undefined4 func_0800EA38(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_0800E9E4(param_1,-param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0800EA44 @ 0x0800EA44
// =============================================================================
undefined4 func_0800EA44(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  uVar1 = func_0x0800e51c();
  *(ushort *)(param_1 + 0x44) =
       (ushort)_DAT_0800ea64 & *(ushort *)(param_1 + 0x44) | (uVar1 & 0xff) << 7;
  return in_lr;
}

// =============================================================================
// Function: func_0800EA68 @ 0x0800EA68
// =============================================================================
undefined4 func_0800EA68(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  uint uStack_14;
  byte abStack_10 [4];
  
  if (param_2 < 1) {
    if (-1 < param_2) {
      return in_lr;
    }
    uVar2 = *(uint *)(param_1 + 0x44);
    uVar3 = (uVar2 & 0x7fffff) >> 0xf;
    uVar1 = 0;
    if ((uint)(param_2 * -2) < uVar3) {
      uVar1 = uVar3 + param_2 * 2;
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x44) * 0x8000000)) {
      param_2 = param_2 << 1;
    }
    uVar2 = *(uint *)(param_1 + 0x44);
    uStack_14 = ((uVar2 & 0x7fffff) >> 0xf) + param_2;
    abStack_10[0] = 200;
    abStack_10[1] = 0;
    abStack_10[2] = 0;
    abStack_10[3] = 0;
    puVar4 = &uStack_14;
    if (200 < uStack_14) {
      puVar4 = (uint *)abStack_10;
    }
    uVar1 = (uint)*(byte *)puVar4;
  }
  *(uint *)(param_1 + 0x44) = _DAT_0800ead0 & uVar2 | uVar1 << 0xf;
  return in_lr;
}

// =============================================================================
// Function: func_0800EAD4 @ 0x0800EAD4
// =============================================================================
undefined4 func_0800EAD4(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  func_0800EA68(param_1,-param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0800EAFC @ 0x0800EAFC
// =============================================================================
undefined4 func_0800EAFC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x44);
  bVar2 = bVar1 & 0xf;
  if (bVar2 < 10) {
    *(byte *)(param_1 + 0x44) = bVar1 & 0xf0 | bVar2 + 1 & 0xf;
    func_0800E9E4(param_1,10);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800EB3C @ 0x0800EB3C
// =============================================================================
undefined8 func_0800EB3C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar1 = func_0800F604(param_1 + 0x60);
  if (cVar1 == '\0') {
    func_0x0800efec(&uStack_20);
    iVar3 = param_1 + 0x54;
    cVar1 = func_0800F190(iVar3);
    if (cVar1 == '\0') {
      iVar2 = func_0x0800f204(iVar3);
      if ((1 < iVar2) || (iVar2 < 0)) goto LAB_0800eb72;
      func_0800F294(&uStack_1c,iVar3);
      uStack_20 = uStack_1c;
      func_0x0800f390(iVar3);
    }
    iVar2 = 0;
    do {
      uStack_18 = uStack_20;
      func_0800FD20(&uStack_1c,param_1 + 0x60);
      uStack_20 = uStack_1c;
      iVar2 = iVar2 + 1;
      cVar1 = func_0800F06C(&uStack_20);
    } while (cVar1 != '\0');
    uStack_1c = uStack_20;
    func_0800F418(iVar3);
  }
  else {
LAB_0800eb72:
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800EBC4 @ 0x0800EBC4
// =============================================================================
undefined8 func_0800EBC4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar1 = func_0800F604(param_1 + 0x60);
  if (cVar1 == '\0') {
    func_0x0800efec(&uStack_20);
    iVar3 = param_1 + 0x54;
    cVar1 = func_0800F190(iVar3);
    if (cVar1 == '\0') {
      iVar2 = func_0x0800f204(iVar3);
      if ((1 < iVar2) || (iVar2 < 0)) goto LAB_0800ebfa;
      func_0800F294(&uStack_1c,iVar3);
      uStack_20 = uStack_1c;
      func_0x0800f390(iVar3);
    }
    iVar2 = 0;
    do {
      uStack_18 = uStack_20;
      func_0800FD38(&uStack_1c,param_1 + 0x60);
      uStack_20 = uStack_1c;
      iVar2 = iVar2 + 1;
      cVar1 = func_0800F06C(&uStack_20);
    } while (cVar1 != '\0');
    uStack_1c = uStack_20;
    func_0800F418(iVar3);
  }
  else {
LAB_0800ebfa:
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800EC4C @ 0x0800EC4C
// =============================================================================
undefined8 func_0800EC4C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  cVar1 = func_0800F874(param_1 + 0x60);
  if (cVar1 == '\0') {
    iVar2 = 0;
    iVar3 = param_1 + 0x5c;
    do {
      memcpy(auStack_1c,iVar3,2);
      func_0800FE78(auStack_20,param_1 + 0x60,auStack_1c);
      memcpy(iVar3,auStack_20,2);
      iVar2 = iVar2 + 1;
      cVar1 = func_0800DC34(iVar3);
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800ECB0 @ 0x0800ECB0
// =============================================================================
undefined8 func_0800ECB0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  cVar1 = func_0800F874(param_1 + 0x60);
  if (cVar1 == '\0') {
    iVar2 = 0;
    iVar3 = param_1 + 0x5c;
    do {
      memcpy(auStack_1c,iVar3,2);
      func_0800FEA0(auStack_20,param_1 + 0x60,auStack_1c);
      memcpy(iVar3,auStack_20,2);
      iVar2 = iVar2 + 1;
      cVar1 = func_0800DC34(iVar3);
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800ED54 @ 0x0800ED54
// =============================================================================
undefined4 func_0800ED54(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = ((*(ushort *)(param_1 + 0x46) & 0x7fff) >> 7) - param_2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xfe < (int)uVar1) {
    uVar1 = 0xff;
  }
  *(ushort *)(param_1 + 0x46) =
       (ushort)_DAT_0800ed88 & *(ushort *)(param_1 + 0x46) | (ushort)((uVar1 & 0xff) << 7);
  return in_lr;
}

// =============================================================================
// Function: func_0800ED8C @ 0x0800ED8C
// =============================================================================
undefined4 func_0800ED8C(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  if (_DAT_0800ee28 <
      ((*(uint *)(param_1 + 0x48) & _DAT_0800ee24) << 1 | (uint)(*(byte *)(param_1 + 0x47) >> 7))) {
    return in_lr;
  }
  bVar2 = false;
  cVar4 = func_0800DC34(param_1 + 0x5c);
  if (cVar4 == '\0') {
    auStack_14[0] = func_0800DC10(param_1 + 0x5c);
    iVar5 = func_0x0800db30(auStack_14);
    if (iVar5 != 0x4c) goto LAB_0800edce;
  }
  else {
LAB_0800edce:
    iVar5 = func_0800F92C(param_1 + 0x60,0x4c);
    if (iVar5 == -1) goto LAB_0800ede2;
  }
  bVar2 = true;
LAB_0800ede2:
  uVar3 = _DAT_0800ee24;
  if (bVar2) {
    bVar1 = *(byte *)(param_1 + 0x47);
    uVar6 = ((*(uint *)(param_1 + 0x48) & _DAT_0800ee24) << 1 | (uint)(bVar1 >> 7)) + 1;
    *(byte *)(param_1 + 0x47) = bVar1 & 0x7f | (byte)((uVar6 & 1) << 7);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe0000000 | uVar6 >> 1 & uVar3;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800EE2C @ 0x0800EE2C
// =============================================================================
undefined8 func_0800EE2C(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x4b);
  bVar1 = (*pbVar3 >> 5) + 1;
  bVar2 = *pbVar3 & 0x1f;
  *pbVar3 = bVar2 | bVar1 * ' ';
  uVar4 = (uint)(4 < (bVar1 & 7));
  if (uVar4 != 0) {
    *pbVar3 = bVar2;
  }
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_0800EE60 @ 0x0800EE60
// =============================================================================
undefined4 func_0800EE60(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x44) & 0x7f8000) == 0) {
    bVar1 = *(byte *)(param_1 + 0x4c);
    bVar2 = bVar1 & 0x7f;
    if (bVar2 < 0x7f) {
      *(byte *)(param_1 + 0x4c) = bVar1 & 0x80 | bVar2 + 1 & 0x7f;
    }
  }
  else {
    *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0x80;
  }
  pbVar4 = (byte *)(param_1 + 0x51);
  if ((*pbVar4 >> 5 < 7) && (iVar3 = func_0800F5D8(param_1 + 0x60), iVar3 != 0)) {
    *pbVar4 = *pbVar4 & 0x1f | ((*pbVar4 >> 5) + 1) * ' ';
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800EECC @ 0x0800EECC
// =============================================================================
undefined8 func_0800EECC(int param_1,uint param_2)

{
  ushort uVar1;
  undefined4 in_lr;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x4c);
  bVar2 = (uVar1 & 0x7fff) >> 7 < param_2;
  if (bVar2) {
    *(ushort *)(param_1 + 0x4c) = (ushort)_DAT_0800eef4 & uVar1 | (ushort)((param_2 & 0xff) << 7);
  }
  return CONCAT44(in_lr,(uint)bVar2);
}

// =============================================================================
// Function: func_0800EEF8 @ 0x0800EEF8
// =============================================================================
undefined4 func_0800EEF8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800ef34;
  puVar4 = (ushort *)(param_1 + 0x50);
  uVar2 = (*puVar4 & _DAT_0800ef34) << 0x11 | *(uint *)(param_1 + 0x4c) >> 0xf;
  if (uVar2 <= _DAT_0800ef38) {
    iVar3 = uVar2 + 1;
    *(uint *)(param_1 + 0x4c) = _DAT_0800ef3c & *(uint *)(param_1 + 0x4c) | iVar3 * 0x8000;
    *puVar4 = (ushort)_DAT_0800ef40 & *puVar4 | (ushort)((uint)iVar3 >> 0x11) & (ushort)uVar1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800EF88 @ 0x0800EF88
// =============================================================================
undefined4 func_0800EF88(ushort *param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  uStack_10 = (uint)*param_1 + param_2;
  uStack_c = _DAT_0800efb0;
  puVar1 = &uStack_10;
  if (_DAT_0800efb0 < (uint)*param_1 + param_2) {
    puVar1 = &uStack_c;
  }
  *param_1 = (ushort)*puVar1;
  return in_lr;
}

// =============================================================================
// Function: func_0800EFB4 @ 0x0800EFB4
// =============================================================================
undefined4 func_0800EFB4(uint *param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((*param_1 & 0x7ffff) >> 0x10 != param_2) {
    *(byte *)((int)param_1 + 2) = *(byte *)((int)param_1 + 2) & 199 | (byte)((param_2 & 7) << 3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800F004 @ 0x0800F004
// =============================================================================
undefined8 func_0800F004(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  *param_1 = *param_1 & 0xfc;
  uStack_c = param_2;
  bVar1 = func_0x0800dcb4(&uStack_c);
  param_1[1] = bVar1;
  bVar1 = func_0800DD6C(&uStack_c);
  param_1[2] = bVar1;
  bVar1 = func_0800DD8C(&uStack_c);
  param_1[3] = bVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800F040 @ 0x0800F040
// =============================================================================
undefined8 func_0800F040(byte *param_1,undefined1 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *param_1 = *param_1 & 0xfd | 1;
  auStack_c[0] = param_2;
  bVar1 = func_0x0800df54(auStack_c);
  param_1[1] = bVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800F06C @ 0x0800F06C
// =============================================================================
undefined8 func_0800F06C(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = 0;
    if (param_1[1] < 0xab) goto LAB_0800f098;
  }
  else {
    if ((*param_1 & 1) != 1) {
      uVar1 = 1;
      goto LAB_0800f098;
    }
    uVar1 = 0;
    if (param_1[1] < 0x5f) goto LAB_0800f098;
  }
  uVar1 = 1;
LAB_0800f098:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800F0A4 @ 0x0800F0A4
// =============================================================================
undefined8 func_0800F0A4(undefined4 param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  if ((*param_2 & 1) == 0) {
    func_0x0800dca8(auStack_10,param_2[1]);
    func_0800DE0C(auStack_10,(int)(char)param_2[2],(int)(char)param_2[3]);
    memcpy(param_1,auStack_10,3);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800F0E8 @ 0x0800F0E8
// =============================================================================
undefined8 func_0800F0E8(byte *param_1)

{
  undefined4 in_lr;
  byte bStack_c;
  byte abStack_b [3];
  
  if ((*param_1 & 1) == 0) {
    func_0x0800df50(&bStack_c,0x5f);
  }
  else {
    func_0x0800df50(abStack_b,param_1[1]);
    bStack_c = abStack_b[0];
  }
  return CONCAT44(in_lr,(uint)bStack_c);
}

// =============================================================================
// Function: func_0800F124 @ 0x0800F124
// =============================================================================
undefined8 func_0800F124(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  uVar1 = 0;
  if ((*param_1 & 1) == 0) {
    uVar1 = 1;
  }
  else if ((*param_1 & 1) == 1) {
    func_0x0800df50(auStack_c,param_1[1]);
    uVar1 = func_0800DFB0(auStack_c);
    uVar1 = uVar1 & 0xff;
  }
  *param_1 = *param_1 & 0xfd | (byte)((uVar1 & 1) << 1);
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800F190 @ 0x0800F190
// =============================================================================
undefined8 func_0800F190(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (5 < (*param_1 & 7)) {
LAB_0800f1c4:
    uVar1 = 1;
    goto LAB_0800f1fc;
  }
  switch(*(uint *)(PTR_case_0800F1AC_0800f1a8 + (*param_1 & 7) * 4) & 0xfffffffe) {
  case 0x800f1ac:
    goto LAB_0800f1c4;
  case 0x800f1c8:
    uVar1 = 0;
    if (param_1[2] < 0xab) goto LAB_0800f1fc;
    break;
  case 0x800f1d2:
    uVar1 = 0;
    if (param_1[2] < 0x5f) goto LAB_0800f1fc;
    break;
  case 0x800f1dc:
    uVar1 = 0;
    if (param_1[2] < 8) goto LAB_0800f1fc;
    break;
  case 0x800f1ea:
    uVar1 = 0;
    goto LAB_0800f1fc;
  case 0x800f1ee:
    uVar1 = (uint)(*(ushort *)(param_1 + 2) == _DAT_0800f200);
    goto LAB_0800f1fc;
  }
  uVar1 = 1;
LAB_0800f1fc:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800F20C @ 0x0800F20C
// =============================================================================
undefined8 func_0800F20C(undefined4 param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  if (((*param_2 & 7) == 0) && (param_2[2] < 0xab)) {
    func_0x0800dca8(auStack_10,param_2[2]);
    func_0800DE0C(auStack_10,(int)(char)param_2[3],(int)(char)param_2[4]);
    memcpy(param_1,auStack_10,3);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800F258 @ 0x0800F258
// =============================================================================
undefined8 func_0800F258(byte *param_1)

{
  undefined4 in_lr;
  byte bStack_c;
  byte abStack_b [3];
  
  if (((*param_1 & 7) == 1) && (param_1[2] < 0x5f)) {
    func_0x0800df50(&bStack_c,param_1[2]);
  }
  else {
    func_0x0800df50(abStack_b,0x5f);
    bStack_c = abStack_b[0];
  }
  return CONCAT44(in_lr,(uint)bStack_c);
}

// =============================================================================
// Function: func_0800F294 @ 0x0800F294
// =============================================================================
undefined8 func_0800F294(undefined4 *param_1,byte *param_2)

{
  undefined4 in_lr;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint3 uStack_1c;
  undefined1 auStack_18 [4];
  
  if (((*param_2 & 7) == 0) && (param_2[2] < 0xab)) {
    func_0x0800dca8(&uStack_24,param_2[2]);
    func_0800DE0C(&uStack_24,(int)(char)param_2[3],(int)(char)param_2[4]);
    memcpy(&uStack_1c,&uStack_24,3);
    func_0800F004(&uStack_20,(uint)uStack_1c);
    if ((int)((uint)*param_2 * 0x10000000) < 0) {
      func_0800F124(&uStack_20);
    }
    *param_1 = uStack_20;
  }
  else if (((*param_2 & 7) == 1) && (param_2[2] < 0x5f)) {
    func_0x0800df50(auStack_18,param_2[2]);
    func_0800F040(&uStack_24,auStack_18[0]);
    if ((int)((uint)*param_2 * 0x10000000) < 0) {
      func_0800F124(&uStack_24);
    }
    *param_1 = uStack_24;
  }
  else {
    func_0x0800efec(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800F344 @ 0x0800F344
// =============================================================================
undefined8 func_0800F344(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*param_1 & 7) != 3) || (uVar1 = (uint)param_1[2], 7 < uVar1)) {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800F360 @ 0x0800F360
// =============================================================================
undefined8 func_0800F360(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((*param_1 & 7) != 5) || (uVar1 = (uint)*(ushort *)(param_1 + 2), _DAT_0800f37c < uVar1)) {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800F3B0 @ 0x0800F3B0
// =============================================================================
undefined4 func_0800F3B0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 uStack_c;
  
  *param_1 = *param_1 & 0xf0;
  uStack_c = param_2;
  bVar1 = func_0x0800dcb4(&uStack_c);
  param_1[2] = bVar1;
  bVar1 = func_0800DD6C(&uStack_c);
  param_1[3] = bVar1;
  bVar1 = func_0800DD8C(&uStack_c);
  param_1[4] = bVar1;
  return in_lr;
}

// =============================================================================
// Function: func_0800F3E8 @ 0x0800F3E8
// =============================================================================
undefined4 func_0800F3E8(byte *param_1,undefined1 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *param_1 = *param_1 & 0xf0 | 1;
  auStack_c[0] = param_2;
  bVar1 = func_0x0800df54(auStack_c);
  param_1[2] = bVar1;
  return in_lr;
}

// =============================================================================
// Function: func_0800F418 @ 0x0800F418
// =============================================================================
undefined4 func_0800F418(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  undefined1 uStack_10;
  
  uStack_18 = param_2;
  iVar2 = func_0x0800f09c(&uStack_18);
  if (iVar2 == 0) {
    *param_1 = *param_1 & 0xf8;
    bVar1 = func_0x0800f11c(&uStack_18);
    *param_1 = *param_1 & 0xf7 | (bVar1 & 1) << 3;
    func_0800F0A4(auStack_14,&uStack_18);
    bVar1 = func_0x0800dcb4(auStack_14);
    param_1[2] = bVar1;
    bVar1 = func_0800DD6C(auStack_14);
    param_1[3] = bVar1;
    bVar1 = func_0800DD8C(auStack_14);
    param_1[4] = bVar1;
  }
  else if (iVar2 == 1) {
    *param_1 = *param_1 & 0xf8 | 1;
    bVar1 = func_0x0800f11c(&uStack_18);
    *param_1 = *param_1 & 0xf7 | (bVar1 & 1) << 3;
    uStack_10 = func_0800F0E8(&uStack_18);
    bVar1 = func_0x0800df54();
    param_1[2] = bVar1;
  }
  else {
    *param_1 = *param_1 & 0xf7;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800F528 @ 0x0800F528
// =============================================================================
undefined8 func_0800F528(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  uVar1 = 0;
  if ((*param_1 & 7) == 0) {
    uVar1 = 1;
  }
  else if ((*param_1 & 7) == 1) {
    func_0x0800df50(auStack_c,param_1[2]);
    uVar1 = func_0800DFB0(auStack_c);
    uVar1 = uVar1 & 0xff;
  }
  *param_1 = *param_1 & 0xf7 | (byte)((uVar1 & 1) << 3);
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800F574 @ 0x0800F574
// =============================================================================
undefined8 func_0800F574(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  
  func_0x0800efec(&uStack_1c);
  *param_1 = 0;
  iVar1 = 2;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = uStack_1c;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_1 = 2;
  func_0800DBC8(auStack_18);
  param_1[9] = 0;
  iVar1 = 2;
  puVar2 = param_1 + 10;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      memcpy(puVar2,auStack_18,2);
    }
    iVar1 = iVar1 + -1;
    puVar2 = (undefined4 *)((int)puVar2 + 2);
  } while (iVar1 != 0);
  param_1[9] = 2;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800F5D8 @ 0x0800F5D8
// =============================================================================
undefined8 func_0800F5D8(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = *param_1;
  if ((uVar1 < 2) || (uVar1 < 4)) {
    uVar2 = 0;
  }
  else if (uVar1 < 8) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800F604 @ 0x0800F604
// =============================================================================
undefined8 func_0800F604(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  piVar3 = param_1 + *param_1 + 1;
  do {
    param_1 = param_1 + 1;
    if (param_1 == piVar3) {
      uVar2 = 1;
      goto LAB_0800f62c;
    }
    cVar1 = func_0800F06C(param_1);
  } while (cVar1 != '\0');
  uVar2 = 0;
LAB_0800f62c:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800F634 @ 0x0800F634
// =============================================================================
undefined8 func_0800F634(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  piVar2 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar2) {
    cVar1 = func_0800F06C(param_1);
    if (cVar1 != '\0') goto LAB_0800f662;
    iVar3 = iVar3 + 1;
  }
  iVar3 = -1;
LAB_0800f662:
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_0800F668 @ 0x0800F668
// =============================================================================
undefined8 func_0800F668(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int *piStack_c;
  
  iVar2 = *param_1;
  for (piStack_c = param_1 + iVar2 + 1; iVar2 = iVar2 + -1, piStack_c != param_1 + 1;
      piStack_c = piStack_c + -1) {
    cVar1 = func_0800F06C(piStack_c + -1);
    if (cVar1 != '\0') goto LAB_0800f6aa;
  }
  iVar2 = -1;
LAB_0800f6aa:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800F6B4 @ 0x0800F6B4
// =============================================================================
undefined8 func_0800F6B4(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  piVar3 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar3) {
    cVar1 = func_0800F06C(param_1);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(param_1), iVar2 == 0)) {
      func_0800F0A4(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) goto LAB_0800f70a;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f70a:
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800F714 @ 0x0800F714
// =============================================================================
undefined8 func_0800F714(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  piVar3 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar3) {
    cVar1 = func_0800F06C(param_1);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(param_1), iVar2 == 1)) {
      auStack_1c[0] = func_0800F0E8(param_1);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800f770;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f770:
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800F77C @ 0x0800F77C
// =============================================================================
undefined8 func_0800F77C(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  piVar2 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar2) {
    cVar1 = func_0800F06C(param_1);
    if (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return CONCAT44(in_lr,iVar3);
}

// =============================================================================
// Function: func_0800F7AC @ 0x0800F7AC
// =============================================================================
undefined8 func_0800F7AC(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  iVar4 = 0;
  piVar3 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar3) {
    cVar1 = func_0800F06C(param_1);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(param_1), iVar2 == 0)) {
      func_0800F0A4(auStack_18,param_1);
      iVar2 = func_0x0800dcb4(auStack_18);
      if (iVar2 == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800F804 @ 0x0800F804
// =============================================================================
undefined8 func_0800F804(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar4 = 0;
  piVar3 = param_1 + *param_1 + 1;
  while (param_1 = param_1 + 1, param_1 != piVar3) {
    cVar1 = func_0800F06C(param_1);
    if ((cVar1 == '\0') && (iVar2 = func_0x0800f09c(param_1), iVar2 == 1)) {
      auStack_1c[0] = func_0800F0E8(param_1);
      iVar2 = func_0x0800df54(auStack_1c);
      if (iVar2 == param_2) {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800F874 @ 0x0800F874
// =============================================================================
undefined8 func_0800F874(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = param_1 + 0x28;
  do {
    if (iVar4 == iVar3 * 2 + param_1 + 0x28) {
      uVar2 = 1;
LAB_0800f8a0:
      return CONCAT44(in_lr,uVar2);
    }
    cVar1 = func_0800DC34(iVar4);
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_0800f8a0;
    }
    iVar4 = iVar4 + 2;
  } while( true );
}

// =============================================================================
// Function: func_0800F8A8 @ 0x0800F8A8
// =============================================================================
undefined8 func_0800F8A8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  for (iVar3 = param_1 + 0x28; iVar3 != iVar2 * 2 + param_1 + 0x28; iVar3 = iVar3 + 2) {
    cVar1 = func_0800DC34(iVar3);
    if (cVar1 != '\0') goto LAB_0800f8da;
    iVar4 = iVar4 + 1;
  }
  iVar4 = -1;
LAB_0800f8da:
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800F8E0 @ 0x0800F8E0
// =============================================================================
undefined8 func_0800F8E0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int iStack_c;
  
  iVar2 = *(int *)(param_1 + 0x24);
  for (iStack_c = iVar2 * 2 + param_1 + 0x28; iVar2 = iVar2 + -1, iStack_c != param_1 + 0x28;
      iStack_c = iStack_c + -2) {
    cVar1 = func_0800DC34(iStack_c + -2);
    if (cVar1 != '\0') goto LAB_0800f924;
  }
  iVar2 = -1;
LAB_0800f924:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800F92C @ 0x0800F92C
// =============================================================================
undefined8 func_0800F92C(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  for (iVar4 = param_1 + 0x28; iVar4 != iVar3 * 2 + param_1 + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = func_0800DC34(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) goto LAB_0800f982;
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = -1;
LAB_0800f982:
  return CONCAT44(in_lr,iVar5);
}

// =============================================================================
// Function: func_0800F990 @ 0x0800F990
// =============================================================================
undefined8 func_0800F990(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  for (iVar4 = param_1 + 0x28; iVar4 != iVar3 * 2 + param_1 + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = func_0800DC34(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800DC48(iVar4);
        iVar5 = (iVar5 + 99) - iVar2;
      }
    }
    else {
      iVar5 = iVar5 + 99;
    }
  }
  return CONCAT44(in_lr,iVar5);
}

// =============================================================================
// Function: func_0800F9FC @ 0x0800F9FC
// =============================================================================
undefined8 func_0800F9FC(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x24);
  for (iVar4 = param_1 + 0x28; iVar4 != iVar3 * 2 + param_1 + 0x28; iVar4 = iVar4 + 2) {
    cVar1 = func_0800DC34(iVar4);
    if (cVar1 == '\0') {
      auStack_1c[0] = func_0800DC10(iVar4);
      iVar2 = func_0x0800db30(auStack_1c);
      if (iVar2 == param_2) {
        iVar2 = func_0800DC48(iVar4);
        iVar5 = iVar5 + iVar2;
      }
    }
  }
  return CONCAT44(in_lr,iVar5);
}

// =============================================================================
// Function: func_0800FA60 @ 0x0800FA60
// =============================================================================
undefined4 func_0800FA60(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 in_lr;
  uint uStack_28;
  undefined1 *puStack_24;
  
  uVar1 = func_0800F5D8();
  if (uVar1 < 2) {
    uVar1 = 2 << (uVar1 + 1 & 0xff);
    func_0x0800efec(&uStack_28);
    uVar6 = *param_1;
    if (uVar1 < uVar6) {
      for (puVar7 = param_1 + uVar1 + 1; puVar7 != param_1 + uVar6 + 1; puVar7 = puVar7 + 1) {
      }
      *param_1 = *param_1 - ((int)(param_1 + uVar6 + 1) - (int)(param_1 + uVar1 + 1) >> 2);
    }
    else {
      uVar10 = uVar1 - uVar6;
      puVar7 = param_1 + uVar6 + 1;
      if ((uVar10 != 0) && (uVar10 <= 8 - uVar6)) {
        uVar6 = uVar6 - ((int)puVar7 - (int)(param_1 + 1) >> 2);
        if (uVar10 < uVar6) {
          puVar11 = puVar7 + -uVar10;
          puVar4 = puVar7;
          for (puVar8 = puVar11; puVar8 != puVar7; puVar8 = puVar8 + 1) {
            if (puVar4 != (uint *)0x0) {
              *puVar4 = *puVar8;
            }
            puVar4 = puVar4 + 1;
          }
          *param_1 = *param_1 + uVar10;
          puVar4 = puVar7;
          for (iVar9 = (int)puVar11 - (int)puVar7 >> 2; 0 < iVar9; iVar9 = iVar9 + -1) {
            puVar4 = puVar4 + -1;
            puVar11 = puVar11 + -1;
            *puVar4 = *puVar11;
          }
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar7 = uStack_28;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          for (iVar9 = uVar10 - uVar6; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (puVar7 != (uint *)0x0) {
              *puVar7 = uStack_28;
            }
            puVar7 = puVar7 + 1;
          }
          *param_1 = *param_1 + (uVar10 - uVar6);
          *param_1 = *param_1 + uVar6;
        }
      }
    }
    func_0800DBC8(&uStack_28);
    puVar7 = param_1 + 9;
    uVar6 = *puVar7;
    if (uVar1 < uVar6) {
      iVar2 = uVar6 * 2 + 4 + (int)puVar7;
      iVar5 = (int)param_1 + uVar1 * 2 + 0x28;
      for (iVar9 = iVar5; iVar9 != iVar2; iVar9 = iVar9 + 2) {
      }
      *puVar7 = *puVar7 - (iVar2 - iVar5 >> 1);
    }
    else {
      uVar1 = uVar1 - uVar6;
      iVar9 = uVar6 * 2 + 4 + (int)puVar7;
      if ((uVar1 != 0) && (uVar1 <= 8 - uVar6)) {
        uVar6 = uVar6 - (iVar9 - (int)(param_1 + 10) >> 1);
        if (uVar1 < uVar6) {
          iVar3 = iVar9 + uVar1 * -2;
          iVar2 = iVar9;
          puStack_24 = (undefined1 *)&uStack_28;
          for (iVar5 = iVar3; iVar5 != iVar9; iVar5 = iVar5 + 2) {
            if (iVar2 != 0) {
              memcpy(iVar2,iVar5,2);
            }
            iVar2 = iVar2 + 2;
          }
          *puVar7 = *puVar7 + uVar1;
          iVar2 = iVar9;
          for (iVar5 = iVar3 - iVar9 >> 1; 0 < iVar5; iVar5 = iVar5 + -1) {
            iVar2 = iVar2 + -2;
            iVar3 = iVar3 + -2;
            memcpy(iVar2,iVar3,2);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            memcpy(iVar9,puStack_24,2);
            iVar9 = iVar9 + 2;
          }
        }
        else {
          puStack_24 = (undefined1 *)&uStack_28;
          for (iVar2 = uVar1 - uVar6; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (iVar9 != 0) {
              memcpy(iVar9,puStack_24,2);
            }
            iVar9 = iVar9 + 2;
          }
          *puVar7 = *puVar7 + (uVar1 - uVar6);
          *puVar7 = *puVar7 + uVar6;
        }
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800FCE4 @ 0x0800FCE4
// =============================================================================
undefined8 func_0800FCE4(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  undefined4 uStack_10;
  
  puVar3 = (undefined4 *)(param_2 + param_3 * 4 + 4);
  cVar1 = func_0800F06C(puVar3);
  if (cVar1 == '\0') {
    uVar2 = *puVar3;
    func_0x0800efec(&uStack_10);
    *puVar3 = uStack_10;
    *param_1 = uVar2;
  }
  else {
    func_0x0800efec(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800FD20 @ 0x0800FD20
// =============================================================================
undefined8 func_0800FD20(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_080D7CFC();
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800FD38 @ 0x0800FD38
// =============================================================================
undefined8 func_0800FD38(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_080D7D40();
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800FD50 @ 0x0800FD50
// =============================================================================
undefined8 func_0800FD50(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  int iStack_20;
  uint3 uStack_1c;
  
  if (param_2 < 0xab) {
    iVar2 = *param_1;
    piVar3 = param_1 + 1;
    if ((param_3 != 0) && (piVar3 != param_1 + iVar2 + 1)) {
      do {
        cVar1 = func_0800F06C(piVar3);
        if (cVar1 != '\0') {
          func_0x0800dca8(&uStack_1c,param_2);
          func_0800F004(&iStack_20,(uint)uStack_1c);
          *piVar3 = iStack_20;
          param_3 = param_3 + -1;
        }
        piVar3 = piVar3 + 1;
      } while ((param_3 != 0) && (piVar3 != param_1 + iVar2 + 1));
    }
  }
  return CONCAT44(in_lr,param_3);
}

// =============================================================================
// Function: func_0800FDC4 @ 0x0800FDC4
// =============================================================================
undefined8 func_0800FDC4(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  int iStack_1c;
  undefined1 auStack_18 [4];
  
  if (param_2 < 0x5f) {
    piVar2 = param_1 + *param_1 + 1;
    while ((param_1 = param_1 + 1, param_3 != 0 && (param_1 != piVar2))) {
      cVar1 = func_0800F06C(param_1);
      if (cVar1 != '\0') {
        func_0x0800df50(auStack_18,param_2);
        func_0800F040(&iStack_1c,auStack_18[0]);
        *param_1 = iStack_1c;
        param_3 = param_3 + -1;
      }
    }
  }
  return CONCAT44(in_lr,param_3);
}

// =============================================================================
// Function: func_0800FE24 @ 0x0800FE24
// =============================================================================
undefined8 func_0800FE24(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar2 = param_3 * 2 + param_2 + 0x28;
  cVar1 = func_0800DC34(iVar2);
  if (cVar1 == '\0') {
    memcpy(auStack_18,iVar2,2);
    func_0800DBC8(auStack_14);
    memcpy(iVar2,auStack_14,2);
    memcpy(param_1,auStack_18,2);
  }
  else {
    func_0800DBC8(param_1);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800FE78 @ 0x0800FE78
// =============================================================================
undefined8 func_0800FE78(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  memcpy(auStack_10,param_3,2);
  func_080D7D88(param_1,param_2 + 0x24,auStack_10);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800FEA0 @ 0x0800FEA0
// =============================================================================
undefined8 func_0800FEA0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  memcpy(auStack_10,param_3,2);
  func_080D7DF4(param_1,param_2 + 0x24,auStack_10);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800FEC8 @ 0x0800FEC8
// =============================================================================
undefined8 func_0800FEC8(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  uint uStack_18;
  
  if (param_2 < 0x51) {
    iVar2 = *(int *)(param_1 + 0x24);
    for (iVar6 = param_1 + 0x28; (param_3 != 0 && (iVar6 != iVar2 * 2 + param_1 + 0x28));
        iVar6 = iVar6 + 2) {
      uStack_24 = param_3;
      cVar1 = func_0800DC34(iVar6);
      if (cVar1 == '\0') {
        auStack_1b[0] = func_0800DC10(iVar6);
        iVar3 = func_0x0800db30(auStack_1b);
        if (iVar3 == param_2) {
          iVar3 = func_0800DC48(iVar6);
          uStack_18 = 99U - iVar3;
          puVar5 = &uStack_24;
          if (99U - iVar3 < uStack_24) {
            puVar5 = &uStack_18;
          }
          uVar4 = *puVar5;
          func_0800DC5C(iVar6,uVar4);
          goto LAB_0800ff70;
        }
      }
      else {
        uStack_20 = 99;
        puVar5 = &uStack_24;
        if (99 < uStack_24) {
          puVar5 = &uStack_20;
        }
        uVar4 = *puVar5;
        func_0x0800db2c(&uStack_1c,param_2);
        func_0800DBE0(auStack_28,uStack_1c,uVar4);
        memcpy(iVar6,auStack_28,2);
LAB_0800ff70:
        uStack_24 = uStack_24 - uVar4;
      }
      param_3 = uStack_24;
    }
  }
  return CONCAT44(in_lr,param_3);
}

// =============================================================================
// Function: func_0800FF8C @ 0x0800FF8C
// =============================================================================
void func_0800FF8C(undefined4 *param_1)

{
  ushort uVar1;
  
  *param_1 = 0;
  uVar1 = (ushort)_DAT_0800ffcc;
  *(ushort *)(param_1 + 9) = uVar1 & *(ushort *)(param_1 + 9) | 0x234;
  *(byte *)((int)param_1 + 0x25) = *(byte *)((int)param_1 + 0x25) & 3;
  *(ushort *)((int)param_1 + 0x26) = uVar1 & *(ushort *)((int)param_1 + 0x26);
  *(byte *)((int)param_1 + 0x27) = *(byte *)((int)param_1 + 0x27) & 3;
  *(ushort *)(param_1 + 10) = uVar1 & *(ushort *)(param_1 + 10);
  return;
}

// =============================================================================
// Function: func_0800FFE0 @ 0x0800FFE0
// =============================================================================
undefined8 func_0800FFE0(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  memcpy(param_1,param_2 + 0x24,6);
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800FFF4 @ 0x0800FFF4
// =============================================================================
undefined4 func_0800FFF4(uint *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0x1e) {
    puVar1 = (undefined1 *)((int)param_1 + *param_1 + 4);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = param_2;
    }
    *param_1 = *param_1 + 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08010014 @ 0x08010014
// =============================================================================
undefined4 func_08010014(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  memcpy(param_1 + 0x24,param_2,6);
  return in_lr;
}

// =============================================================================
// Function: func_08010024 @ 0x08010024
// =============================================================================
undefined4 func_08010024(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((int)param_1 + *param_1 + 4);
  for (piVar2 = param_1 + 1; piVar2 != piVar1; piVar2 = (int *)((int)piVar2 + 1)) {
  }
  *param_1 = *param_1 - ((int)piVar1 - (int)(param_1 + 1));
  return in_lr;
}

// =============================================================================
// Function: func_0801004C @ 0x0801004C
// =============================================================================
void func_0801004C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_30 [4];
  int *piStack_2c;
  int *apiStack_28 [3];
  int **ppiStack_1c;
  undefined4 uStack_18;
  
  func_08008980(auStack_30);
  piStack_2c = (int *)0x0;
  apiStack_28[0] = (int *)(uint)(*(char *)(param_2 + 0x364) == '\0');
  uVar1 = func_080005D4(8);
  piVar2 = (int *)func_08011DC4(uVar1,*(undefined4 *)(param_2 + 4),apiStack_28);
  if ((piVar2 != piStack_2c) && (piStack_2c != (int *)0x0)) {
    func_0x080d3914(piStack_2c,3,*(undefined4 *)(*piStack_2c + 8));
  }
  piStack_2c = (int *)0x0;
  apiStack_28[0] = piVar2;
  func_0800082C(apiStack_28);
  *param_1 = 0;
  uStack_18 = 0;
  apiStack_28[0] = (int *)0x0;
  ppiStack_1c = apiStack_28;
  if (piStack_2c != (int *)0x0) {
    func_0x080d3914(piStack_2c,3,*(undefined4 *)(*piStack_2c + 8));
  }
  func_08008A68(auStack_30,2);
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_08010158 @ 0x08010158
// =============================================================================
undefined4 func_08010158(undefined4 *param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  *param_1 = _DAT_08010198;
  *_DAT_0801019c = 0;
  func_080D7E64(param_1 + 0xde,2);
  func_0803EEC8(param_1 + 2,2);
  if (param_1[1] != 0) {
    func_080D4480(param_1[1],3);
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_080101A0 @ 0x080101A0
// =============================================================================
undefined8 func_080101A0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  *param_1 = _DAT_08010254;
  iVar1 = *param_2;
  *param_2 = 0;
  param_1[1] = iVar1;
  func_0803F804(param_1 + 2);
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0x1d;
  puVar2 = (ushort *)(param_1 + 0xdd);
  *(byte *)puVar2 = (byte)*puVar2 & 0xe0 | 6;
  *puVar2 = (ushort)_DAT_08010258 & *puVar2;
  param_1[0xde] = 0;
  param_1[0xe3] = 0;
  param_1[0x134] = 0;
  iVar1 = (int)param_1 + _DAT_0801025c;
  iVar3 = 5;
  do {
    func_080D4130(iVar1);
    iVar1 = iVar1 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  iVar1 = (int)param_1 + _DAT_08010260;
  iVar3 = 3;
  do {
    func_080D40CC(iVar1);
    iVar1 = iVar1 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  *_DAT_08010264 = param_1;
  if (*param_2 != 0) {
    func_080D4480(*param_2,3);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08010268 @ 0x08010268
// =============================================================================
undefined8
func_08010268(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  *param_1 = _DAT_08010330;
  uVar1 = func_080005D4(_DAT_08010334);
  uVar1 = func_08010358(uVar1,param_2,param_3,param_4,param_5);
  param_1[1] = uVar1;
  func_0803F804(param_1 + 2);
  *(undefined1 *)(param_1 + 0xd9) = 1;
  param_1[0xda] = 0xab;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0x1d;
  puVar2 = (ushort *)(param_1 + 0xdd);
  *(byte *)puVar2 = (byte)*puVar2 & 0xe0 | 6;
  *puVar2 = (ushort)_DAT_08010338 & *puVar2;
  param_1[0xde] = 0;
  param_1[0xe3] = 0;
  param_1[0x134] = 0;
  iVar3 = (int)param_1 + _DAT_0801033c;
  iVar4 = 5;
  do {
    func_080D4130(iVar3);
    iVar3 = iVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  iVar3 = (int)param_1 + _DAT_08010340;
  iVar4 = 3;
  do {
    func_080D40CC(iVar3);
    iVar3 = iVar3 + 0xc;
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  *_DAT_08010344 = param_1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08010348 @ 0x08010348
// =============================================================================
void func_08010348(void)

{
  int iVar1;
  
  do {
    iVar1 = func_0x080d11e4();
  } while (iVar1 == 0);
  return;
}

// =============================================================================
// Function: func_08010358 @ 0x08010358
// =============================================================================
undefined8
func_08010358(uint *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined4 param_5)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  byte *pbVar13;
  undefined1 unaff_r4;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  ushort unaff_r9;
  undefined4 in_lr;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uStack_c0;
  undefined1 auStack_bc [4];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int aiStack_b0 [2];
  int aiStack_a8 [2];
  int aiStack_a0 [2];
  int aiStack_98 [2];
  int aiStack_90 [2];
  int aiStack_88 [2];
  uint *puStack_80;
  int *piStack_7c;
  uint uStack_78;
  int *piStack_74;
  uint uStack_70;
  int *piStack_6c;
  uint uStack_68;
  int *piStack_64;
  uint uStack_60;
  int *piStack_5c;
  uint uStack_58;
  int *piStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  *(byte *)param_1 = (byte)*param_1 & 0xe0;
  *param_1 = *param_1 & _DAT_080105f0;
  *(ushort *)((int)param_1 + 2) = (ushort)_DAT_080105f4 & *(ushort *)((int)param_1 + 2);
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 1;
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xfe;
  uVar17 = 0x1d;
  uVar18 = 0;
  uStack_c0 = CONCAT22(((ushort)_DAT_080105f8 & unaff_r9 | unaff_r9 & 0xe0 | 6) &
                       (ushort)_DAT_080105fc,CONCAT11(unaff_r4,1)) & 0xffff80ff | 0x400;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = uStack_c0;
  auStack_bc[0] = param_4;
  puStack_80 = param_1;
  func_08009A48(param_1 + 5);
  func_0809AB8C((byte *)((int)puStack_80 + _DAT_08010600));
  func_0800E354((byte *)((int)puStack_80 + _DAT_08010604),param_3,auStack_bc,puStack_80,uVar17,
                uVar18);
  func_0809B9D4((byte *)((int)puStack_80 + _DAT_08010608),param_5);
  puVar3 = puStack_80;
  func_0800FF8C(puStack_80 + 0x728);
  puVar11 = (ushort *)((int)puVar3 + _DAT_0801060c);
  uVar1 = (ushort)_DAT_08010610;
  *puVar11 = uVar1 & *puVar11 | 0x234;
  *(byte *)((int)puVar11 + 1) = *(byte *)((int)puVar11 + 1) & 3;
  puVar11[1] = uVar1 & puVar11[1];
  *(byte *)((int)puVar11 + 3) = *(byte *)((int)puVar11 + 3) & 3;
  puVar11[2] = uVar1 & puVar11[2];
  func_0809EEE8((byte *)((int)puVar3 + _DAT_08010614));
  func_0809C6BC((byte *)((int)puVar3 + _DAT_08010618));
  uVar17 = func_08010348();
  iVar12 = _DAT_0801061c;
  pbVar13 = (byte *)((int)puVar3 + _DAT_0801061c);
  *(undefined4 *)pbVar13 = uVar17;
  pbVar13[4] = 0;
  iVar8 = _DAT_08010620;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0;
  *(byte *)((int)puVar3 + _DAT_08010620) = 0;
  *(byte *)((int)puVar3 + iVar12 + 0x24) = 0;
  *(byte *)((int)puVar3 + iVar8 + 0x20) = 0;
  uStack_b8 = 0;
  pbVar7 = (byte *)((int)puVar3 + iVar12 + 8);
  iVar12 = 8;
  pbVar15 = (byte *)((int)puVar3 + _DAT_08010624);
  pbVar16 = (byte *)((int)puVar3 + _DAT_08010628);
  piStack_3c = aiStack_a8;
  piStack_38 = aiStack_a0;
  piStack_34 = aiStack_98;
  piStack_30 = aiStack_90;
  piStack_2c = aiStack_88;
  do {
    *pbVar7 = 0;
    iVar12 = iVar12 + -1;
    pbVar7 = pbVar7 + 1;
  } while (0 < iVar12);
  uStack_b4 = 0;
  pbVar13 = pbVar13 + 0x10;
  iVar12 = 4;
  do {
    *pbVar13 = 0;
    iVar12 = iVar12 + -1;
    pbVar13 = pbVar13 + 1;
  } while (0 < iVar12);
  func_0x080114f8((byte *)((int)puStack_80 + _DAT_0801062c));
  func_0809A8AC((byte *)((int)puStack_80 + _DAT_08010630));
  iVar12 = _DAT_08010634;
  *pbVar15 = *pbVar15 | 3;
  *(uint *)((int)puStack_80 + iVar12 + 0x2c) =
       *(uint *)((int)puStack_80 + iVar12 + 0x2c) & _DAT_08010638;
  *pbVar16 = *pbVar16 & 7;
  pbVar7 = (byte *)((int)puStack_80 + _DAT_0801063c);
  iVar12 = 9;
  do {
    *pbVar7 = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7 = pbVar7 + 4;
    iVar12 = iVar12 + -1;
  } while (iVar12 != -1);
  func_0x08011510((byte *)((int)puStack_80 + _DAT_08010640));
  puVar3 = puStack_80;
  func_0809CD78(puStack_80 + 0xb20);
  func_0809CE8C((byte *)((int)puVar3 + _DAT_08010644));
  func_0809C144(puVar3 + 0xd20);
  pbVar7 = (byte *)((int)puVar3 + _DAT_08010648);
  iVar12 = 2;
  do {
    *pbVar7 = *pbVar7 & 0xf0;
    pbVar7 = pbVar7 + 0x10;
    iVar12 = iVar12 + -1;
  } while (iVar12 != -1);
  *(byte *)((int)puStack_80 + _DAT_0801064c) = 0;
  *(byte *)((int)puStack_80 + _DAT_08010650) = 0;
  func_0x080a1a48((byte *)((int)puStack_80 + _DAT_08010654));
  func_0x0809c4e4((byte *)((int)puStack_80 + _DAT_08010658));
  puVar3 = puStack_80;
  func_0809BFE8((byte *)((int)puStack_80 + _DAT_0801065c));
  func_0809B2A8((byte *)((int)puVar3 + _DAT_08010608),0x32);
  iVar12 = _DAT_08010660;
  uStack_48 = 0;
  piStack_7c = aiStack_b0;
  do {
    uStack_78 = 0;
    uStack_48 = uStack_48 + 1;
    do {
      uVar17 = func_0x080d11e4();
      iVar8 = func_0x080d0f4e(uVar17,0x2a);
      uVar17 = func_0x080d11e4();
      iVar9 = func_0x080d0f4e(uVar17,0x18);
      iVar10 = iVar9 * 0x2b;
      cVar6 = func_0800A78C();
      if (cVar6 == '\0') {
        cVar6 = func_0800A78C((byte *)((int)puVar3 + (iVar8 + 1 + iVar10) * 4 + iVar12));
        if (cVar6 == '\0') {
          iVar14 = (iVar9 + 1) * 0x2b;
          cVar6 = func_0800A78C((byte *)((int)puVar3 + (iVar8 + iVar14) * 4 + iVar12));
          if (((((cVar6 == '\0') &&
                (cVar6 = func_0800A78C((byte *)((int)puVar3 + (iVar8 + 1 + iVar14) * 4 + iVar12)),
                piVar5 = piStack_7c, cVar6 == '\0')) &&
               ((*(uint *)((int)puVar3 + (iVar8 + iVar10) * 4 + iVar12) & 0xfff) >> 8 == 0)) &&
              (((*(uint *)((int)puVar3 + (iVar8 + 1 + iVar10) * 4 + iVar12) & 0xfff) >> 8 == 0 &&
               (iVar10 = (iVar9 + 1) * 0x2b,
               (*(uint *)((int)puVar3 + (iVar8 + iVar10) * 4 + iVar12) & 0xfff) >> 8 == 0)))) &&
             ((*(uint *)((int)puVar3 + (iVar8 + 1 + iVar10) * 4 + iVar12) & 0xfff) >> 8 == 0)) {
            *piStack_7c = iVar8;
            piVar5[1] = iVar9;
            bVar2 = true;
            goto LAB_0801073e;
          }
        }
      }
      uStack_78 = uStack_78 + 1;
    } while (uStack_78 < 100);
    bVar2 = false;
LAB_0801073e:
    if (bVar2) {
      func_0800A134((byte *)((int)puVar3 + (aiStack_b0[0] + piStack_7c[1] * 0x2b) * 4 + iVar12),0x1f
                    ,8);
      piVar5 = piStack_7c;
      func_0800A134((byte *)((int)puVar3 + (aiStack_b0[0] + 1 + piStack_7c[1] * 0x2b) * 4 + iVar12),
                    0x20,8);
      func_0800A134((byte *)((int)puVar3 + (aiStack_b0[0] + (piVar5[1] + 1) * 0x2b) * 4 + iVar12),
                    0x21,8);
      func_0800A134((byte *)((int)puVar3 + (aiStack_b0[0] + 1 + (piVar5[1] + 1) * 0x2b) * 4 + iVar12
                            ),0x22,8);
    }
    puVar4 = puStack_80;
    iVar8 = _DAT_080107dc;
  } while (uStack_48 < 10);
  uStack_40 = 0;
  piStack_74 = piStack_3c;
  do {
    uStack_70 = 0;
    uStack_40 = uStack_40 + 1;
    do {
      uVar17 = func_0x080d11e4();
      iVar12 = func_0x080d0f4e(uVar17,0x2a);
      uVar17 = func_0x080d11e4();
      iVar9 = func_0x080d0f4e(uVar17,0x18);
      iVar10 = iVar9 * 0x2b;
      cVar6 = func_0800A78C();
      if (cVar6 == '\0') {
        cVar6 = func_0800A78C((byte *)((int)puVar4 + (iVar12 + 1 + iVar10) * 4 + iVar8));
        if (cVar6 == '\0') {
          iVar14 = (iVar9 + 1) * 0x2b;
          cVar6 = func_0800A78C((byte *)((int)puVar4 + (iVar12 + iVar14) * 4 + iVar8));
          if (((cVar6 == '\0') &&
              (cVar6 = func_0800A78C((byte *)((int)puVar4 + (iVar12 + 1 + iVar14) * 4 + iVar8)),
              piVar5 = piStack_74, cVar6 == '\0')) &&
             (((*(uint *)((int)puVar4 + (iVar12 + iVar10) * 4 + iVar8) & 0xfff) >> 8 == 0 &&
              ((((*(uint *)((int)puVar4 + (iVar12 + 1 + iVar10) * 4 + iVar8) & 0xfff) >> 8 == 0 &&
                (iVar10 = (iVar9 + 1) * 0x2b,
                (*(uint *)((int)puVar4 + (iVar12 + iVar10) * 4 + iVar8) & 0xfff) >> 8 == 0)) &&
               ((*(uint *)((int)puVar4 + (iVar12 + 1 + iVar10) * 4 + iVar8) & 0xfff) >> 8 == 0))))))
          {
            *piStack_74 = iVar12;
            piVar5[1] = iVar9;
            bVar2 = true;
            goto LAB_080108b8;
          }
        }
      }
      uStack_70 = uStack_70 + 1;
    } while (uStack_70 < 100);
    bVar2 = false;
LAB_080108b8:
    if (bVar2) {
      func_0800A134((byte *)((int)puVar4 + (aiStack_a8[0] + piStack_74[1] * 0x2b) * 4 + iVar8),0x23,
                    8);
      piVar5 = piStack_74;
      func_0800A134((byte *)((int)puVar4 + (aiStack_a8[0] + 1 + piStack_74[1] * 0x2b) * 4 + iVar8),
                    0x24,8);
      func_0800A134((byte *)((int)puVar4 + (aiStack_a8[0] + (piVar5[1] + 1) * 0x2b) * 4 + iVar8),
                    0x25,8);
      func_0800A134((byte *)((int)puVar4 + (aiStack_a8[0] + 1 + (piVar5[1] + 1) * 0x2b) * 4 + iVar8)
                    ,0x26,8);
    }
    puVar3 = puStack_80;
    iVar12 = _DAT_08010954;
  } while (uStack_40 < 5);
  uStack_24 = 0;
  piStack_6c = piStack_38;
  do {
    uStack_68 = 0;
    uStack_24 = uStack_24 + 1;
    do {
      uVar17 = func_0x080d11e4();
      iVar8 = func_0x080d0f4e(uVar17,0x2a);
      uVar17 = func_0x080d11e4();
      iVar9 = func_0x080d0f4e(uVar17,0x18);
      iVar10 = iVar9 * 0x2b;
      cVar6 = func_0800A78C();
      if (cVar6 == '\0') {
        cVar6 = func_0800A78C((byte *)((int)puVar3 + (iVar8 + 1 + iVar10) * 4 + iVar12));
        if (cVar6 == '\0') {
          iVar14 = (iVar9 + 1) * 0x2b;
          cVar6 = func_0800A78C((byte *)((int)puVar3 + (iVar8 + iVar14) * 4 + iVar12));
          if ((((cVar6 == '\0') &&
               (cVar6 = func_0800A78C((byte *)((int)puVar3 + (iVar8 + 1 + iVar14) * 4 + iVar12)),
               piVar5 = piStack_6c, cVar6 == '\0')) &&
              (((*(uint *)((int)puVar3 + (iVar8 + iVar10) * 4 + iVar12) & 0xfff) >> 8 == 0 &&
               (((*(uint *)((int)puVar3 + (iVar8 + 1 + iVar10) * 4 + iVar12) & 0xfff) >> 8 == 0 &&
                (iVar10 = (iVar9 + 1) * 0x2b,
                (*(uint *)((int)puVar3 + (iVar8 + iVar10) * 4 + iVar12) & 0xfff) >> 8 == 0)))))) &&
             ((*(uint *)((int)puVar3 + (iVar8 + 1 + iVar10) * 4 + iVar12) & 0xfff) >> 8 == 0)) {
            *piStack_6c = iVar8;
            piVar5[1] = iVar9;
            bVar2 = true;
            goto LAB_08010a30;
          }
        }
      }
      uStack_68 = uStack_68 + 1;
    } while (uStack_68 < 100);
    bVar2 = false;
LAB_08010a30:
    if (bVar2) {
      func_0800A134((byte *)((int)puVar3 + (aiStack_a0[0] + piStack_6c[1] * 0x2b) * 4 + iVar12),0x1b
                    ,8);
      piVar5 = piStack_6c;
      func_0800A134((byte *)((int)puVar3 + (aiStack_a0[0] + 1 + piStack_6c[1] * 0x2b) * 4 + iVar12),
                    0x1c,8);
      func_0800A134((byte *)((int)puVar3 + (aiStack_a0[0] + (piVar5[1] + 1) * 0x2b) * 4 + iVar12),
                    0x1d,8);
      func_0800A134((byte *)((int)puVar3 + (aiStack_a0[0] + 1 + (piVar5[1] + 1) * 0x2b) * 4 + iVar12
                            ),0x1e,8);
    }
    puVar4 = puStack_80;
    iVar8 = _DAT_08010acc;
  } while (uStack_24 < 10);
  uStack_4c = 0;
  piStack_64 = piStack_34;
  do {
    uStack_60 = 0;
    uStack_4c = uStack_4c + 1;
    do {
      uVar17 = func_0x080d11e4();
      iVar12 = func_0x080d0f4e(uVar17,0x2b);
      uVar17 = func_0x080d11e4();
      iVar9 = func_0x080d0f4e(uVar17,0x19);
      cVar6 = func_0800A78C();
      piVar5 = piStack_64;
      if ((cVar6 == '\0') &&
         ((*(uint *)((int)puVar4 + (iVar12 + iVar9 * 0x2b) * 4 + iVar8) & 0xfff) >> 8 == 0)) {
        *piStack_64 = iVar12;
        piVar5[1] = iVar9;
        bVar2 = true;
        goto LAB_08010ba8;
      }
      uStack_60 = uStack_60 + 1;
    } while (uStack_60 < 100);
    bVar2 = false;
LAB_08010ba8:
    if (bVar2) {
      func_0800A134((byte *)((int)puVar4 + (aiStack_98[0] + piStack_34[1] * 0x2b) * 4 + iVar8),0x15,
                    8);
    }
    puVar3 = puStack_80;
    iVar12 = _DAT_08010c04;
  } while (uStack_4c <= _DAT_08010c00);
  uStack_44 = 0;
  piStack_5c = piStack_30;
  do {
    uStack_58 = 0;
    uStack_44 = uStack_44 + 1;
    do {
      uVar17 = func_0x080d11e4();
      iVar8 = func_0x080d0f4e(uVar17,0x2b);
      uVar17 = func_0x080d11e4();
      iVar9 = func_0x080d0f4e(uVar17,0x19);
      cVar6 = func_0800A78C();
      piVar5 = piStack_5c;
      if ((cVar6 == '\0') &&
         ((*(uint *)((int)puVar3 + (iVar8 + iVar9 * 0x2b) * 4 + iVar12) & 0xfff) >> 8 == 0)) {
        *piStack_5c = iVar8;
        piVar5[1] = iVar9;
        bVar2 = true;
        goto LAB_08010ce0;
      }
      uStack_58 = uStack_58 + 1;
    } while (uStack_58 < 100);
    bVar2 = false;
LAB_08010ce0:
    if (bVar2) {
      func_0800A134((byte *)((int)puVar3 + (aiStack_90[0] + piStack_30[1] * 0x2b) * 4 + iVar12),0x16
                    ,8);
    }
    puVar4 = puStack_80;
    iVar8 = _DAT_08010d34;
  } while (uStack_44 < 0x32);
  uStack_28 = 0;
  piStack_54 = piStack_2c;
  do {
    uStack_50 = 0;
    uStack_28 = uStack_28 + 1;
    do {
      uVar17 = func_0x080d11e4();
      iVar12 = func_0x080d0f4e(uVar17,0x2b);
      uVar17 = func_0x080d11e4();
      iVar9 = func_0x080d0f4e(uVar17,0x19);
      cVar6 = func_0800A78C();
      piVar5 = piStack_54;
      if ((cVar6 == '\0') &&
         ((*(uint *)((int)puVar4 + (iVar12 + iVar9 * 0x2b) * 4 + iVar8) & 0xfff) >> 8 == 0)) {
        *piStack_54 = iVar12;
        piVar5[1] = iVar9;
        bVar2 = true;
        goto LAB_08010e10;
      }
      uStack_50 = uStack_50 + 1;
    } while (uStack_50 < 100);
    bVar2 = false;
LAB_08010e10:
    if (bVar2) {
      func_0800A134((byte *)((int)puVar4 + (aiStack_88[0] + piStack_2c[1] * 0x2b) * 4 + iVar8),0x17,
                    8);
    }
    if (0x31 < uStack_28) {
      return CONCAT44(in_lr,puStack_80);
    }
  } while( true );
}

// =============================================================================
// Function: func_08010E68 @ 0x08010E68
// =============================================================================
undefined8 func_08010E68(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar1 = func_0x0809b228(param_1 + _DAT_08010e9c);
  uVar1 = (uint)(199 < uVar1);
  iVar2 = Farm_GetFieldState(param_1 + 0x14);
  if ((iVar2 != 0) && (uVar3 = func_0x0809b228(), uVar3 < 200)) {
    uVar1 = 0;
  }
  for (uVar3 = 0; uVar4 = func_0800C570(param_1 + 0x410), uVar3 < uVar4; uVar3 = uVar3 + 1) {
    iVar2 = func_0800C5CC(param_1 + 0x410,uVar3);
    if ((iVar2 != 0) && (uVar4 = func_0x0809b228(), uVar4 < 200)) {
      uVar1 = 0;
    }
  }
  param_1 = param_1 + 0x5f0;
  for (uVar3 = 0; uVar4 = func_0800CE74(param_1), uVar3 < uVar4; uVar3 = uVar3 + 1) {
    iVar2 = func_0800CF10(param_1,uVar3);
    if (((iVar2 != 0) || (iVar2 = func_0800CF38(param_1,uVar3), iVar2 != 0)) &&
       (uVar4 = func_0x0809b228(), uVar4 < 200)) {
      uVar1 = 0;
    }
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0801140C @ 0x0801140C
// =============================================================================
undefined8 func_0801140C(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = func_0x0800b120(param_1 + 0x54);
  iVar3 = param_1 + _DAT_08011450;
  func_0809ABD8(iVar3,uVar1);
  pcVar2 = (char *)(param_1 + _DAT_08011454);
  if (*pcVar2 != '\0') {
    func_0809ABD8(iVar3,uVar1);
    *pcVar2 = '\0';
  }
  func_0x0800b24c(param_1 + 0x54);
  return CONCAT44(in_lr,(-uVar1 | uVar1) >> 0x1f);
}

// =============================================================================
// Function: func_08011464 @ 0x08011464
// =============================================================================
undefined8 func_08011464(uint *param_1,uint param_2)

{
  undefined4 in_lr;
  bool bVar1;
  
  if (99 < param_2) {
    param_2 = 99;
  }
  bVar1 = (*param_1 & 0x3ffff) >> 0xd < param_2;
  if (bVar1) {
    *param_1 = _DAT_08011494 & *param_1 | (param_2 & 0x1f) << 0xd;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

// =============================================================================
// Function: func_08011498 @ 0x08011498
// =============================================================================
undefined8 func_08011498(int param_1,uint param_2)

{
  undefined4 in_lr;
  bool bVar1;
  
  if (99 < param_2) {
    param_2 = 99;
  }
  bVar1 = (*(ushort *)(param_1 + 2) & 0x1ff) >> 2 < param_2;
  if (bVar1) {
    *(ushort *)(param_1 + 2) =
         (ushort)_DAT_080114c4 & *(ushort *)(param_1 + 2) | (ushort)((param_2 & 0x7f) << 2);
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

// =============================================================================
// Function: func_080114C8 @ 0x080114C8
// =============================================================================
undefined8 func_080114C8(int param_1,uint param_2)

{
  undefined4 in_lr;
  bool bVar1;
  
  if (99 < param_2) {
    param_2 = 99;
  }
  bVar1 = (*(byte *)(param_1 + 3) & 0x7f) >> 1 < param_2;
  if (bVar1) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x81 | (byte)((param_2 & 0x3f) << 1);
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

// =============================================================================
// Function: func_08011524 @ 0x08011524
// =============================================================================
undefined8 func_08011524(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 4) != 0x10) && (*(char *)(param_1 + 8) == '\0')) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08011550 @ 0x08011550
// =============================================================================
undefined4 func_08011550(int *param_1)

{
  undefined4 in_lr;
  
  if (param_1[1] == *param_1) {
    *param_1 = 0x10;
  }
  param_1[1] = 0x10;
  return in_lr;
}

// =============================================================================
// Function: func_08011568 @ 0x08011568
// =============================================================================
undefined4 func_08011568(int *param_1)

{
  undefined4 in_lr;
  
  if (((*param_1 != 0x10) && (param_1[1] != 0x10)) && ((char)param_1[2] != '\0')) {
    *(char *)(param_1 + 2) = (char)param_1[2] + -1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08011588 @ 0x08011588
// =============================================================================
undefined8 func_08011588(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 0;
  if (param_1 != (byte *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      iVar1 = iVar1 + (uint)*param_1;
      param_1 = param_1 + 1;
    }
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_080115B0 @ 0x080115B0
// =============================================================================
undefined8 func_080115B0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = _DAT_080115e0;
  uStack_20 = _DAT_080115e0;
  cVar2 = func_080006A4(param_2,param_3,&uStack_20,4);
  if (cVar2 == '\0') {
    uVar3 = (uint)*_DAT_080115e4;
    uVar4 = 0x10000;
  }
  else {
    cVar2 = func_080006A4(param_2,param_3 + 4,param_1,uVar1);
    if (cVar2 == '\0') {
      uVar3 = (uint)*_DAT_08011608;
      uVar4 = 0x20000;
    }
    else {
      param_3 = _DAT_08011630 + param_3;
      uStack_1c = func_08011588(param_1,uVar1);
      cVar2 = func_080006A4(param_2,param_3,&uStack_1c,4);
      if (cVar2 != '\0') {
        uVar3 = 0;
        goto LAB_0801163e;
      }
      uVar3 = (uint)*_DAT_0801164c;
      uVar4 = 0x30000;
    }
  }
  uVar3 = uVar3 | uVar4;
LAB_0801163e:
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_08011650 @ 0x08011650
// =============================================================================
undefined8 func_08011650(int param_1,undefined4 param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined1 *puVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 in_lr;
  byte abStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0x80;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xe0;
  *(ushort *)(param_1 + 0x12) = (ushort)_DAT_08011870 & *(ushort *)(param_1 + 0x12);
  uVar2 = _DAT_08011874;
  uStack_24 = param_2;
  func_08009A48(param_1 + 0x14,_DAT_08011874);
  func_0809AB8C(param_1 + _DAT_08011878);
  abStack_38[0] = abStack_38[0] & 0x80;
  func_0800E354(param_1 + _DAT_0801187c,uVar2,abStack_38);
  func_0809B9D4(param_1 + _DAT_08011880,uVar2);
  func_0800FF8C(&UNK_00001ca0 + param_1);
  puVar7 = (ushort *)(param_1 + _DAT_08011884);
  uVar1 = (ushort)_DAT_08011888;
  *puVar7 = uVar1 & *puVar7 | 0x234;
  *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar7 + 1) & 3;
  puVar7[1] = uVar1 & puVar7[1];
  *(byte *)((int)puVar7 + 3) = *(byte *)((int)puVar7 + 3) & 3;
  puVar7[2] = uVar1 & puVar7[2];
  func_0809EEE8(param_1 + _DAT_0801188c);
  func_0809C6BC(param_1 + _DAT_08011890);
  iVar8 = _DAT_08011894;
  puVar10 = (undefined4 *)(param_1 + _DAT_08011894);
  *puVar10 = 1;
  puVar10[1] = 0;
  iVar3 = _DAT_08011898;
  *(undefined1 *)(param_1 + _DAT_08011898) = 0;
  *(undefined1 *)(param_1 + iVar8 + 0x24) = 0;
  *(undefined1 *)(param_1 + iVar3 + 0x20) = 0;
  uStack_34 = 0;
  puVar5 = (undefined1 *)(param_1 + iVar3 + -0xc);
  iVar8 = 8;
  do {
    *puVar5 = 0;
    iVar8 = iVar8 + -1;
    puVar5 = puVar5 + 1;
  } while (0 < iVar8);
  uStack_30 = 0;
  puVar10 = puVar10 + 4;
  iVar8 = 4;
  pbVar12 = (byte *)(param_1 + _DAT_0801189c);
  pbVar11 = (byte *)(_DAT_080118a0 + param_1);
  do {
    *(undefined1 *)puVar10 = 0;
    iVar8 = iVar8 + -1;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  } while (0 < iVar8);
  func_0x080114f8(param_1 + _DAT_080118a4);
  func_0809A8AC(param_1 + _DAT_080118a8);
  iVar8 = param_1 + _DAT_080118ac;
  *pbVar12 = *pbVar12 | 3;
  *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) & _DAT_080118b0;
  *pbVar11 = *pbVar11 & 7;
  puVar5 = (undefined1 *)(param_1 + _DAT_080118b4);
  iVar8 = 9;
  do {
    *puVar5 = 0;
    *(undefined2 *)(puVar5 + 2) = 0;
    puVar5 = puVar5 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != -1);
  func_0x08011510(param_1 + _DAT_080118b8);
  func_0809CD78(&UNK_00002c80 + param_1);
  func_0809CE8C(param_1 + _DAT_080118bc);
  func_0809C144(&UNK_00003480 + param_1);
  pbVar11 = (byte *)(param_1 + _DAT_080118c0);
  iVar8 = 2;
  do {
    *pbVar11 = *pbVar11 & 0xf0;
    pbVar11 = pbVar11 + 0x10;
    iVar8 = iVar8 + -1;
  } while (iVar8 != -1);
  func_0x080a1a48(param_1 + _DAT_080118c4);
  func_0x0809c4e4(param_1 + _DAT_080118c8);
  func_0809BFE8(param_1 + _DAT_080118cc);
  *param_4 = 0;
  iStack_2c = 0;
  cVar4 = func_080006E4(uStack_24,&iStack_2c,param_3,4);
  iVar8 = iStack_2c;
  if ((cVar4 == '\0') || (iStack_2c != _DAT_080118d0)) {
LAB_0801190e:
    uVar6 = *param_4;
    uVar9 = 0x10000;
    puVar7 = _DAT_08011930;
  }
  else {
    cVar4 = func_080006E4(uStack_24,param_1,param_3 + 4,iStack_2c);
    if (cVar4 == '\0') {
      uVar6 = *param_4;
      uVar9 = 0x20000;
      puVar7 = _DAT_080118d4;
    }
    else {
      iStack_28 = 0;
      cVar4 = func_080006E4(uStack_24,&iStack_28,_DAT_080118f8 + param_3,4);
      if (cVar4 != '\0') {
        iVar8 = func_08011588(param_1,iVar8);
        if (iVar8 == iStack_28) goto LAB_0801191e;
        goto LAB_0801190e;
      }
      uVar6 = *param_4;
      uVar9 = 0x30000;
      puVar7 = _DAT_080118fc;
    }
  }
  *param_4 = uVar6 | uVar9 | (uint)*puVar7;
LAB_0801191e:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08011934 @ 0x08011934
// =============================================================================
undefined4 func_08011934(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int *piStack_24;
  
  iStack_44 = param_1;
  iStack_40 = param_2;
  memcpy(auStack_4c,_DAT_080119ac,3);
  memcpy(auStack_48,_DAT_080119b0,2);
  iStack_3c = 1;
  uVar7 = 0;
  uStack_38 = func_0800C570(*(int *)(iStack_44 + 0x8c) + 0x410);
  uStack_34 = 0;
  if (uStack_38 != 0) {
    do {
      iVar1 = func_0800C894(*(int *)(iStack_44 + 0x8c) + 0x410,uStack_34);
      if (iVar1 != 0) {
        iVar2 = func_0x0809b514();
        uVar3 = _DAT_08011abc;
        if (iVar2 == iStack_40) {
          if (iStack_3c == 0) {
            iVar2 = strlen(param_3);
            uVar6 = _DAT_08011ac0 - iVar2;
            if (uVar6 != 0) {
              uVar4 = strlen(uVar3);
              if (uVar6 < uVar4) {
                uVar4 = uVar6;
              }
              memcpy(param_3 + iVar2,uVar3,uVar4);
              *(undefined1 *)(param_3 + iVar2 + uVar4) = (undefined1)iStack_3c;
            }
          }
          else {
            iStack_3c = 0;
          }
          uVar3 = func_0809B1F4(iVar1);
          iVar1 = strlen(param_3);
          uVar6 = _DAT_08011ac0 - iVar1;
          if (uVar6 != 0) {
            uVar4 = strlen(uVar3);
            if (uVar6 < uVar4) {
              uVar4 = uVar6;
            }
            memcpy(param_3 + iVar1,uVar3,uVar4);
            *(undefined1 *)(param_3 + iVar1 + uVar4) = 0;
          }
          uVar3 = _DAT_08011ac4;
          uVar7 = uVar7 + 1;
          if (2 < uVar7) {
            iVar1 = strlen(param_3);
            uVar7 = _DAT_08011ac0 - iVar1;
            if (uVar7 != 0) {
              uVar6 = strlen(uVar3);
              if (uVar7 < uVar6) {
                uVar6 = uVar7;
              }
              memcpy(param_3 + iVar1,uVar3,uVar6);
              *(undefined1 *)(param_3 + iVar1 + uVar6) = 0;
            }
            uVar7 = 0;
          }
        }
      }
      uStack_34 = uStack_34 + 1;
    } while (uStack_34 < uStack_38);
  }
  piVar5 = (int *)(iStack_44 + 0x8c);
  uStack_30 = func_0800CE74(*piVar5 + 0x5f0);
  uStack_2c = 0;
  piStack_24 = piVar5;
  if (uStack_30 != 0) {
    do {
      iVar1 = func_0800D3D0(*piStack_24 + 0x5f0,uStack_2c);
      if ((iVar1 != 0) && (iVar2 = func_0x0809b514(), uVar3 = _DAT_08011bbc, iVar2 == iStack_40)) {
        if (iStack_3c == 0) {
          iVar2 = strlen(param_3);
          uVar6 = _DAT_08011bc0 - iVar2;
          if (uVar6 != 0) {
            uVar4 = strlen(uVar3);
            if (uVar6 < uVar4) {
              uVar4 = uVar6;
            }
            memcpy(param_3 + iVar2,uVar3,uVar4);
            *(undefined1 *)(param_3 + iVar2 + uVar4) = (undefined1)iStack_3c;
          }
        }
        else {
          iStack_3c = 0;
        }
        uVar3 = func_0809B1F4(iVar1);
        iVar1 = strlen(param_3);
        uVar6 = _DAT_08011bc0 - iVar1;
        if (uVar6 != 0) {
          uVar4 = strlen(uVar3);
          if (uVar6 < uVar4) {
            uVar4 = uVar6;
          }
          memcpy(param_3 + iVar1,uVar3,uVar4);
          *(undefined1 *)(param_3 + iVar1 + uVar4) = 0;
        }
        uVar3 = _DAT_08011bc4;
        uVar7 = uVar7 + 1;
        if (2 < uVar7) {
          iVar1 = strlen(param_3);
          uVar7 = _DAT_08011bc0 - iVar1;
          if (uVar7 != 0) {
            uVar6 = strlen(uVar3);
            if (uVar7 < uVar6) {
              uVar6 = uVar7;
            }
            memcpy(param_3 + iVar1,uVar3,uVar6);
            *(undefined1 *)(param_3 + iVar1 + uVar6) = 0;
          }
          uVar7 = 0;
        }
      }
      uStack_2c = uStack_2c + 1;
    } while (uStack_2c < uStack_30);
  }
  uStack_28 = 0;
  if (uStack_30 != 0) {
    do {
      iVar1 = func_0800D3F8(*piStack_24 + 0x5f0,uStack_28);
      if ((iVar1 != 0) && (iVar2 = func_0x0809b514(), uVar3 = _DAT_08011ccc, iVar2 == iStack_40)) {
        if (iStack_3c == 0) {
          iVar2 = strlen(param_3);
          uVar6 = _DAT_08011cd0 - iVar2;
          if (uVar6 != 0) {
            uVar4 = strlen(uVar3);
            if (uVar6 < uVar4) {
              uVar4 = uVar6;
            }
            memcpy(param_3 + iVar2,uVar3,uVar4);
            *(undefined1 *)(param_3 + iVar2 + uVar4) = (undefined1)iStack_3c;
          }
        }
        else {
          iStack_3c = 0;
        }
        uVar3 = func_0809B1F4(iVar1);
        iVar1 = strlen(param_3);
        uVar6 = _DAT_08011cd0 - iVar1;
        if (uVar6 != 0) {
          uVar4 = strlen(uVar3);
          if (uVar6 < uVar4) {
            uVar4 = uVar6;
          }
          memcpy(param_3 + iVar1,uVar3,uVar4);
          *(undefined1 *)(param_3 + iVar1 + uVar4) = 0;
        }
        uVar3 = _DAT_08011cd4;
        uVar7 = uVar7 + 1;
        if (2 < uVar7) {
          iVar1 = strlen(param_3);
          uVar7 = _DAT_08011cd0 - iVar1;
          if (uVar7 != 0) {
            uVar6 = strlen(uVar3);
            if (uVar7 < uVar6) {
              uVar6 = uVar7;
            }
            memcpy(param_3 + iVar1,uVar3,uVar6);
            *(undefined1 *)(param_3 + iVar1 + uVar6) = 0;
          }
          uVar7 = 0;
        }
      }
      uStack_28 = uStack_28 + 1;
    } while (uStack_28 < uStack_30);
  }
  uVar3 = _DAT_08011cd4;
  if (uVar7 != 0) {
    iVar1 = strlen(param_3);
    uVar7 = _DAT_08011cd0 - iVar1;
    if (uVar7 != 0) {
      uVar6 = strlen(uVar3);
      if (uVar7 < uVar6) {
        uVar6 = uVar7;
      }
      memcpy(param_3 + iVar1,uVar3,uVar6);
      *(undefined1 *)(param_3 + iVar1 + uVar6) = 0;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08011FE8 @ 0x08011FE8
// =============================================================================
undefined4 func_08011FE8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  *param_1 = _DAT_08012020;
  func_0x0803f8ac(*_DAT_08012024 + 8);
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0xf4) + 8));
  }
  func_080007EC(param_1,param_2);
  return in_lr;
}

// =============================================================================
// Function: func_08012028 @ 0x08012028
// =============================================================================
undefined8 func_08012028(undefined4 *param_1,int param_2)

{
  undefined4 in_lr;
  undefined4 auStack_14 [3];
  
  func_080D8178(auStack_14,*(undefined4 *)(param_2 + 4));
  *param_1 = auStack_14[0];
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_08012064 @ 0x08012064
// =============================================================================
undefined4
func_08012064(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  uVar2 = func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x14));
  func_080D7F9C(iVar3,param_2,uVar2,param_3,param_4,param_5);
  return in_lr;
}

// =============================================================================
// Function: func_080120A4 @ 0x080120A4
// =============================================================================
undefined8 func_080120A4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
  }
  return CONCAT44(in_lr,iVar3 >> 0x10);
}

// =============================================================================
// Function: func_080120C4 @ 0x080120C4
// =============================================================================
undefined8 func_080120C4(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  return CONCAT44(in_lr,iVar3 >> 0x10);
}

// =============================================================================
// Function: func_080120E4 @ 0x080120E4
// =============================================================================
undefined4 func_080120E4(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if ((iVar2 != 0) && (*(byte *)(iVar2 + 0x20) != param_3)) {
    func_08032198(iVar2,param_3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08012114 @ 0x08012114
// =============================================================================
undefined8 func_08012114(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)(iVar2 + 0x20);
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_08012134 @ 0x08012134
// =============================================================================
undefined8 func_08012134(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  uVar3 = 0x234;
  if (iVar2 != 0) {
    uVar3 = (uint)*(ushort *)(iVar2 + 4);
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_08012154 @ 0x08012154
// =============================================================================
undefined4 func_08012154(int param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x21) = param_3;
  }
  return in_lr;
}

// =============================================================================
// Function: func_08012174 @ 0x08012174
// =============================================================================
undefined4 func_08012174(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_08032308(iVar2,param_3,param_4);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801219C @ 0x0801219C
// =============================================================================
undefined4 func_0801219C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_0803233C(iVar2,param_3,param_4);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080121C4 @ 0x080121C4
// =============================================================================
undefined4 func_080121C4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = func_0x080d3914(*(int **)(iVar2 + 0xa8),param_2,
                          *(undefined4 *)(**(int **)(iVar2 + 0xa8) + 0x40));
  *(int *)(iVar2 + 0xe4) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x9c) = 0x16;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080121EC @ 0x080121EC
// =============================================================================
undefined4 func_080121EC(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if ((iVar2 != 0) && (*(ushort *)(iVar2 + 0x22) != param_3)) {
    func_080321B0(iVar2,param_3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801221C @ 0x0801221C
// =============================================================================
undefined4 func_0801221C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_0x0801ff38(iVar2,0x234);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801223C @ 0x0801223C
// =============================================================================
undefined4 func_0801223C(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_08033B84(iVar2,*(undefined1 *)(iVar2 + 0x30),*(short *)(iVar2 + 10) + param_3,
                  *(short *)(iVar2 + 0xe) + param_4);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08012274 @ 0x08012274
// =============================================================================
undefined4 func_08012274(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_08032384(iVar2,param_3,(-param_4 | param_4) >> 0x1f);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080122A0 @ 0x080122A0
// =============================================================================
undefined4 func_080122A0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_080323C8();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080122BC @ 0x080122BC
// =============================================================================
undefined4 func_080122BC(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_080323E0(iVar2,param_3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_080122E0 @ 0x080122E0
// =============================================================================
undefined4 func_080122E0(int param_1,ushort param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  undefined2 uStack_28;
  undefined2 uStack_26;
  ushort uStack_24;
  
  iVar4 = *(int *)(param_1 + 4);
  piVar5 = *(int **)(iVar4 + 0xa8);
  uVar3 = (ushort)_DAT_08012384;
  uVar2 = (ushort)_DAT_08012388;
  uVar1 = uVar2 & uStack_28 | param_2 & uVar3;
  uStack_28._1_1_ = (byte)(uVar1 >> 8);
  uStack_28 = CONCAT11(uStack_28._1_1_ & 3 | (byte)((param_3 & 0x3f) << 2),(char)uVar1);
  uVar1 = uVar2 & uStack_26 | (ushort)((param_3 & 0xffff) >> 6) & uVar3;
  uStack_26._1_1_ = (byte)(uVar1 >> 8);
  uStack_26 = CONCAT11(uStack_26._1_1_ & 3 | (byte)((param_4 & 0x3f) << 2),(char)uVar1);
  uStack_24 = uVar2 & uStack_24 | (ushort)((param_4 & 0xffff) >> 6) & uVar3;
  func_0x080d3918(piVar5,&uStack_28,1,*(undefined4 *)(*piVar5 + 0xb4));
  func_080D7F08(iVar4);
  return in_lr;
}

// =============================================================================
// Function: func_0801238C @ 0x0801238C
// =============================================================================
undefined4 func_0801238C(void)

{
  undefined4 in_lr;
  
  func_0x080d391c();
  return in_lr;
}

// =============================================================================
// Function: func_080123A4 @ 0x080123A4
// =============================================================================
undefined4 func_080123A4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(iVar3 + 0xa8);
  cVar1 = func_0x080d3910(piVar2,*(undefined4 *)(*piVar2 + 0x28));
  if (cVar1 == '\0') {
    *(undefined4 *)(iVar3 + 0x9c) = 0x17;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080123CC @ 0x080123CC
// =============================================================================
undefined4 func_080123CC(int param_1,int param_2,undefined2 param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = iVar2 + 0xbc;
  if (param_2 == 1) {
    func_08008B88(iVar1,param_3);
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      func_08008B6C(iVar1,param_3);
    }
  }
  else if (param_2 == 2) {
    func_08008BB0(iVar1,param_3);
  }
  iVar2 = iVar2 + 0xbc;
  func_08008CC4(iVar2);
  func_08008C28(iVar2,*param_4);
  func_08008C38(iVar2,param_4[1],_DAT_08012450);
  func_08008C54(iVar2,(int)(short)param_4[2],_DAT_08012450);
  func_08008C70(iVar2,(int)*(char *)(param_4 + 3),_DAT_08012450);
  func_08008C8C(iVar2,*(undefined1 *)((int)param_4 + 7),_DAT_08012450);
  func_08008CA8(iVar2,*(undefined1 *)(param_4 + 4),_DAT_08012450);
  return in_lr;
}

// =============================================================================
// Function: func_08012454 @ 0x08012454
// =============================================================================
undefined4 func_08012454(int param_1)

{
  undefined4 in_lr;
  
  func_08008BE0(*(int *)(param_1 + 4) + 0xbc);
  return in_lr;
}

// =============================================================================
// Function: func_08012464 @ 0x08012464
// =============================================================================
undefined4 func_08012464(int param_1,int param_2,undefined2 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 4) + 0xd0);
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 4) + 0xd4);
  do {
    if (puVar3 == puVar4) {
      uVar2 = puVar4[-1];
LAB_0801248c:
      if (param_2 == 1) {
        func_08008B88(uVar2,param_3);
      }
      else if (param_2 < 2) {
        if (param_2 == 0) {
          func_08008B6C(uVar2);
        }
      }
      else if (param_2 == 2) {
        func_08008BB0(uVar2);
      }
      return in_lr;
    }
    cVar1 = func_0x08008cd0(*puVar3);
    if (cVar1 == '\0') {
      uVar2 = *puVar3;
      goto LAB_0801248c;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

// =============================================================================
// Function: func_080124C4 @ 0x080124C4
// =============================================================================
undefined4 func_080124C4(void)

{
  undefined4 in_lr;
  
  func_08008DE8();
  return in_lr;
}

// =============================================================================
// Function: func_080124D0 @ 0x080124D0
// =============================================================================
undefined4 func_080124D0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  iVar5 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar5 + 0xb4);
  if ((iVar4 != 0) && (iVar4 != 0)) {
    func_0x080d3914(iVar4,3,*(undefined4 *)(*(int *)(iVar4 + 4) + 8));
  }
  *(int *)(iVar5 + 0xb4) = 0;
  iVar4 = *(int *)(iVar5 + 0xb8);
  if ((iVar4 != 0) && (iVar4 != 0)) {
    func_0x080d3914(iVar4,3,*(undefined4 *)(*(int *)(iVar4 + 4) + 8));
  }
  *(int *)(iVar5 + 0xb8) = 0;
  piVar1 = (int *)(iVar5 + 0xac);
  if (*piVar1 == 0) {
    if (*(char *)(iVar5 + 0xe8) == '\0') {
      uVar2 = func_080005D4(4);
      func_0x0800835c(auStack_1c);
      func_0x0800770c(auStack_18);
      iVar4 = func_08050CC0(uVar2,0,0x1f,0,1,auStack_1c,auStack_18);
      iVar3 = *piVar1;
      if ((iVar4 != iVar3) && (iVar3 != 0)) {
        func_08050D0C(iVar3,3);
      }
      *piVar1 = iVar4;
      func_08007714(auStack_18,2);
      func_0x08008364(auStack_1c,2);
    }
    else {
      uVar2 = func_080005D4(4);
      func_0x0800835c(auStack_1c);
      func_0x0800770c(auStack_18);
      iVar4 = func_08050CC0(uVar2,0,0x1f,0,0,auStack_1c,auStack_18);
      iVar3 = *piVar1;
      if ((iVar4 != iVar3) && (iVar3 != 0)) {
        func_08050D0C(iVar3,3);
      }
      *piVar1 = iVar4;
      func_08007714(auStack_18,2);
      func_0x08008364(auStack_1c,2);
    }
  }
  iVar4 = func_0x08050d34(*piVar1);
  if (iVar4 != 3) {
    func_08050D5C(*piVar1);
    *(undefined4 *)(iVar5 + 0x9c) = 0xe;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080125EC @ 0x080125EC
// =============================================================================
undefined4 func_080125EC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar2 + 0xb4);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  *(int *)(iVar2 + 0xb4) = 0;
  iVar1 = *(int *)(iVar2 + 0xb8);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  *(int *)(iVar2 + 0xb8) = 0;
  iVar1 = *(int *)(iVar2 + 0xac);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_08050D0C(iVar1,3);
  }
  *(int *)(iVar2 + 0xac) = 0;
  *(ushort *)(iVar2 + 0x10) = (ushort)_DAT_08012654 & *(ushort *)(iVar2 + 0x10);
  return in_lr;
}

// =============================================================================
// Function: func_08012658 @ 0x08012658
// =============================================================================
undefined4 func_08012658(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0xac) != 0) {
    func_08050D74();
    func_080D7F88(iVar1);
    func_080D7F74(iVar1);
    func_080D7F60(iVar1);
    *(undefined4 *)(iVar1 + 0x9c) = 0xf;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801268C @ 0x0801268C
// =============================================================================
undefined4 func_0801268C(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0xac) != 0) {
    func_08050DC8(*(int *)(iVar1 + 0xac),param_2,param_3,*(undefined4 *)(iVar1 + 0xb0));
    *(undefined4 *)(iVar1 + 0x9c) = 0x10;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080126BC @ 0x080126BC
// =============================================================================
undefined4 func_080126BC(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0xac) != 0) {
    func_08050DC8(*(int *)(iVar1 + 0xac),param_2,0x40,*(undefined4 *)(iVar1 + 0xb0));
    *(undefined4 *)(iVar1 + 0x9c) = 0x11;
  }
  return in_lr;
}

// =============================================================================
// Function: func_080126E4 @ 0x080126E4
// =============================================================================
undefined4 func_080126E4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0xac);
  if ((iVar3 != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x8c),
     (int)((uint)*(byte *)(iVar2 + _DAT_08012718) * 0x10000000) < 0)) {
    uVar1 = func_0809FE3C(iVar2 + _DAT_0801271c);
    func_08050E68(iVar3,uVar1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08012720 @ 0x08012720
// =============================================================================
undefined4 func_08012720(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xac);
  if ((iVar1 != 0) &&
     ((int)((uint)*(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x8c) + _DAT_08012748) * 0x10000000) <
      0)) {
    func_08050E68(iVar1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801274C @ 0x0801274C
// =============================================================================
undefined4 func_0801274C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0xac) != 0) {
    func_08050E74();
  }
  return in_lr;
}

// =============================================================================
// Function: func_08012760 @ 0x08012760
// =============================================================================
undefined4 func_08012760(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xac);
  if ((iVar1 != 0) &&
     ((int)((uint)*(byte *)(*(int *)(*(int *)(param_1 + 4) + 0x8c) + _DAT_08012788) * 0x20000000) <
      0)) {
    func_08050E50(iVar1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801278C @ 0x0801278C
// =============================================================================
undefined4 func_0801278C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0xac) != 0) {
    func_08050E5C();
  }
  return in_lr;
}

// =============================================================================
// Function: func_080127A0 @ 0x080127A0
// =============================================================================
undefined4 func_080127A0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 4);
  if ((((*(int *)(iVar4 + 0xac) != 0) &&
       ((int)((uint)*(byte *)(*(int *)(iVar4 + 0x8c) + _DAT_080127e0) * 0x20000000) < 0)) &&
      (param_2 != 0x1f)) &&
     (iVar1 = func_080A0878(*(int *)(iVar4 + 0x8c) + _DAT_080127e4), iVar1 != 0)) {
    uVar2 = func_0x0809e498();
    if (_DAT_080127e8 < uVar2) {
      uVar3 = 6;
    }
    else if (_DAT_080127f8 < uVar2) {
      uVar3 = 5;
    }
    else if (_DAT_08012808 < uVar2) {
      uVar3 = 4;
    }
    else if (_DAT_08012818 < uVar2) {
      uVar3 = 3;
    }
    else if (_DAT_08012828 < uVar2) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
      if (_DAT_08012848 < uVar2) {
        uVar3 = 1;
      }
    }
    func_08050E80(*(undefined4 *)(iVar4 + 0xac),uVar3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801284C @ 0x0801284C
// =============================================================================
undefined4 func_0801284C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0xac) != 0) {
    func_08050E8C();
  }
  return in_lr;
}

// =============================================================================
// Function: func_08012860 @ 0x08012860
// =============================================================================
undefined4
func_08012860(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar3 + 0xac);
  if (iVar2 == 0) {
    return in_lr;
  }
  if (param_3 == 0) {
    return in_lr;
  }
  if (param_4 == 0) {
    return in_lr;
  }
  if (param_5 == 0) {
    uVar1 = *(undefined4 *)(iVar3 + 0xb0);
  }
  else {
    if (param_6 != 0) {
      func_08050E30(iVar2,param_2,param_3,param_4,param_5,param_6,*(undefined4 *)(iVar3 + 0xb0));
      goto LAB_080128c0;
    }
    uVar1 = *(undefined4 *)(iVar3 + 0xb0);
  }
  func_08050E30(iVar2,param_2,param_3,param_4,param_5,0,uVar1);
LAB_080128c0:
  *(undefined4 *)(iVar3 + 0x9c) = 0x14;
  return in_lr;
}

// =============================================================================
// Function: func_080128D0 @ 0x080128D0
// =============================================================================
undefined4
func_080128D0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar3 + 0xac);
  if (iVar2 == 0) {
    return in_lr;
  }
  if (param_2 == 0) {
    return in_lr;
  }
  if (param_3 == 0) {
    return in_lr;
  }
  if (param_4 == 0) {
    func_08050E0C(iVar2,param_2,param_3,0,0,0,0,*(undefined4 *)(iVar3 + 0xb0));
  }
  else {
    if (param_5 == 0) {
      uVar1 = *(undefined4 *)(iVar3 + 0xb0);
      param_6 = 0;
    }
    else if (param_6 == 0) {
      uVar1 = *(undefined4 *)(iVar3 + 0xb0);
    }
    else {
      if (param_7 != 0) {
        func_08050E0C(iVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                      *(undefined4 *)(iVar3 + 0xb0));
        goto LAB_0801296c;
      }
      uVar1 = *(undefined4 *)(iVar3 + 0xb0);
    }
    func_08050E0C(iVar2,param_2,param_3,param_4,param_5,param_6,0,uVar1);
  }
LAB_0801296c:
  *(undefined4 *)(iVar3 + 0x9c) = 0x14;
  return in_lr;
}

// =============================================================================
// Function: func_0801297C @ 0x0801297C
// =============================================================================
undefined8 func_0801297C(int param_1,uint param_2,int param_3,char param_4,char param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  if (4 < param_2) goto LAB_08012a98;
  register0x00000054 = (BADSPACEBASE *)PTR_case_080129A4_080129a0;
  switch(*(uint *)(PTR_case_080129A4_080129a0 + param_2 * 4) & 0xfffffffe) {
  case 0x80129a4:
    register0x00000054 = (BADSPACEBASE *)0x0;
  case 0x80129b8:
    iVar5 = 2;
    uVar6 = 0;
    goto LAB_080129d0;
  case 0x80129be:
    iVar5 = 1;
    uVar6 = 0;
    goto LAB_080129d0;
  case 0x80129c4:
    iVar5 = 2;
    break;
  case 0x80129c8:
    iVar5 = 1;
    break;
  case 0x80129cc:
    iVar5 = 0;
  }
  uVar6 = 1;
LAB_080129d0:
  uVar4 = _DAT_080129f0;
  if (param_3 != 1) {
    if (param_3 < 2) {
      uVar4 = _DAT_080129e8;
      if (param_3 != 0) goto LAB_08012a98;
    }
    else {
      uVar4 = _DAT_08012a2c;
      if (param_3 != 2) goto LAB_08012a98;
    }
  }
  if (param_4 == '\0') {
    if (param_5 != '\0') {
      func_0x080d3910(*(int **)(iVar3 + 0xa8),*(undefined4 *)(**(int **)(iVar3 + 0xa8) + 0xb8));
    }
    func_0800934C(*(undefined4 *)(iVar3 + 0xa0),uVar4,iVar5,uVar6);
    *(undefined4 *)(iVar3 + 0x9c) = 0x13;
    *(undefined1 *)(iVar3 + 0xe8) = 0;
    *(bool *)(iVar3 + 0xe9) = iVar5 == 2;
    *(ushort *)(iVar3 + 0x10) = *(ushort *)(iVar3 + 0x10) | 0xe00;
    if (iVar5 == 1) {
      uVar1 = *(ushort *)(iVar3 + 0x60);
      uVar2 = 0x80;
    }
    else {
      uVar1 = *(ushort *)(iVar3 + 0x60);
      uVar2 = 0xc0;
    }
    register0x00000054 = (BADSPACEBASE *)(uVar1 | uVar2);
    *(short *)(iVar3 + 0x60) = (short)register0x00000054;
  }
  else {
    func_08009378(*(undefined4 *)(iVar3 + 0xa0),uVar4,iVar5,uVar6);
    *(undefined4 *)(iVar3 + 0x9c) = 0x12;
    *(undefined1 *)(iVar3 + 0xe8) = 0;
    register0x00000054 = (BADSPACEBASE *)(uint)(iVar5 == 2);
    *(bool *)(iVar3 + 0xe9) = iVar5 == 2;
  }
LAB_08012a98:
  return CONCAT44(register0x00000054,in_lr);
}

// =============================================================================
// Function: func_08012AA4 @ 0x08012AA4
// =============================================================================
undefined4 func_08012AA4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  undefined1 auStack_40 [52];
  
  iVar1 = *(int *)(param_1 + 4);
  func_0804EC84(param_3,auStack_40,0);
  ScriptEngine_GetPC(*(undefined4 *)(iVar1 + 0xb0),param_2,auStack_40);
  return in_lr;
}

// =============================================================================
// Function: func_08012ACC @ 0x08012ACC
// =============================================================================
undefined4 func_08012ACC(int param_1)

{
  undefined4 in_lr;
  
  ScriptEngine_GetPC(*(undefined4 *)(*(int *)(param_1 + 4) + 0xb0));
  return in_lr;
}

// =============================================================================
// Function: func_08012ADC @ 0x08012ADC
// =============================================================================
undefined4 func_08012ADC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 in_lr;
  undefined1 auStack_40 [52];
  
  iVar1 = *(int *)(param_1 + 4);
  func_0804EC84(param_3,auStack_40,param_4);
  ScriptEngine_GetPC(*(undefined4 *)(iVar1 + 0xb0),param_2,auStack_40);
  return in_lr;
}

// =============================================================================
// Function: func_08012B04 @ 0x08012B04
// =============================================================================
undefined4 func_08012B04(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  func_0803F878(*_DAT_08012b20 + 8);
  func_080D7F3C(uVar1);
  return in_lr;
}

// =============================================================================
// Function: func_080134A4 @ 0x080134A4
// =============================================================================
undefined4 func_080134A4(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar6 = *(int *)(param_1 + 4);
  puVar1 = (undefined4 *)func_080005D4(0x14);
  iVar3 = *(int *)(iVar6 + 0x8c);
  *puVar1 = _DAT_08013538;
  puVar1[1] = iVar3;
  puVar1[2] = 0x18;
  puVar1[3] = uStack_2c;
  puVar1[4] = uStack_28;
  piVar2 = (int *)func_080005D4(0x10,&stack0xffffffec,puVar1 + 5);
  iVar3 = _DAT_0801353c;
  iVar5 = *(int *)(iVar6 + 0x8c);
  *piVar2 = _DAT_08013540;
  piVar2[1] = (int)puVar1;
  piVar2[2] = iVar5;
  piVar2[3] = iVar3;
  piVar4 = *(int **)(iVar6 + 0xa4);
  if ((piVar2 != piVar4) && (piVar4 != (int *)0x0)) {
    func_0x080d3914(piVar4,3,*(undefined4 *)(*piVar4 + 8));
  }
  *(int **)(iVar6 + 0xa4) = piVar2;
  *(undefined4 *)(iVar6 + 0x9c) = 0x18;
  return in_lr;
}

// =============================================================================
// Function: func_08013EF8 @ 0x08013EF8
// =============================================================================
undefined4 func_08013EF8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *apuStack_24 [3];
  
  iVar4 = *(int *)(param_1 + 4);
  apuStack_24[0] = (undefined4 *)func_080005D4(0x14);
  uVar3 = *(undefined4 *)(iVar4 + 0x8c);
  *apuStack_24[0] = _DAT_08013f84;
  apuStack_24[0][1] = uVar3;
  apuStack_24[0][2] = 0x2f;
  apuStack_24[0][3] = uStack_30;
  apuStack_24[0][4] = uStack_2c;
  uVar3 = func_080005D4(0xc,0,apuStack_24[0] + 5);
  piVar1 = (int *)ScriptEngine_ResolveStringPointer(uVar3,apuStack_24,param_2);
  piVar2 = *(int **)(iVar4 + 0xa4);
  if ((piVar1 != piVar2) && (piVar2 != (int *)0x0)) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  *(int **)(iVar4 + 0xa4) = piVar1;
  *(undefined4 *)(iVar4 + 0x9c) = 0x18;
  return in_lr;
}

// =============================================================================
// Function: func_08014034 @ 0x08014034
// =============================================================================
undefined4 func_08014034(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x84));
  return in_lr;
}

// =============================================================================
// Function: func_0801404C @ 0x0801404C
// =============================================================================
undefined4 func_0801404C(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x88));
  return in_lr;
}

// =============================================================================
// Function: func_08014064 @ 0x08014064
// =============================================================================
undefined4 func_08014064(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x8c));
  return in_lr;
}

// =============================================================================
// Function: func_0801407C @ 0x0801407C
// =============================================================================
undefined4 func_0801407C(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x90));
  return in_lr;
}

// =============================================================================
// Function: func_08014094 @ 0x08014094
// =============================================================================
undefined4 func_08014094(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x94));
  return in_lr;
}

// =============================================================================
// Function: func_080140AC @ 0x080140AC
// =============================================================================
undefined4 func_080140AC(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x98));
  return in_lr;
}

// =============================================================================
// Function: func_080140C4 @ 0x080140C4
// =============================================================================
undefined4 func_080140C4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x9c));
  return in_lr;
}

// =============================================================================
// Function: func_080140DC @ 0x080140DC
// =============================================================================
undefined4 func_080140DC(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0xa0));
  return in_lr;
}

// =============================================================================
// Function: func_080140F4 @ 0x080140F4
// =============================================================================
undefined4 func_080140F4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x80));
  return in_lr;
}

// =============================================================================
// Function: func_0801410C @ 0x0801410C
// =============================================================================
void func_0801410C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x40));
  return;
}

// =============================================================================
// Function: func_0801412C @ 0x0801412C
// =============================================================================
undefined8 func_0801412C(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(iVar4 + 0xa8);
  iVar3 = func_0x080d3914(piVar2,0,*(undefined4 *)(*piVar2 + 0x40));
  cVar1 = func_0x080d3910(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x48));
  if (cVar1 != '\0') {
    *(undefined4 *)(iVar4 + 0x9c) = 0x19;
  }
  return CONCAT44(in_lr,(uint)(cVar1 != '\0'));
}

// =============================================================================
// Function: func_08014164 @ 0x08014164
// =============================================================================
undefined8 func_08014164(int param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3918(iVar2,param_2,param_3,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x5c));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_08014198 @ 0x08014198
// =============================================================================
undefined8 func_08014198(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x60));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return CONCAT44(in_lr,1);
}

// =============================================================================
// Function: func_080141C4 @ 0x080141C4
// =============================================================================
undefined4 func_080141C4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x4c));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return in_lr;
}

// =============================================================================
// Function: func_080141EC @ 0x080141EC
// =============================================================================
undefined4 func_080141EC(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x50));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return in_lr;
}

// =============================================================================
// Function: func_08014214 @ 0x08014214
// =============================================================================
undefined4 func_08014214(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x54));
  return in_lr;
}

// =============================================================================
// Function: func_08014234 @ 0x08014234
// =============================================================================
void func_08014234(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0xa4));
  return;
}

// =============================================================================
// Function: func_0801424C @ 0x0801424C
// =============================================================================
void func_0801424C(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0xa8));
  return;
}

// =============================================================================
// Function: func_08014264 @ 0x08014264
// =============================================================================
undefined4 func_08014264(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_0x080d3914(iVar2,param_3,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x38));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08014290 @ 0x08014290
// =============================================================================
undefined4 func_08014290(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40));
  if (iVar2 != 0) {
    func_0x080d3914(iVar2,0,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x38));
  }
  return in_lr;
}

// =============================================================================
// Function: func_080142B8 @ 0x080142B8
// =============================================================================
undefined4 func_080142B8(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x118));
  return in_lr;
}

// =============================================================================
// Function: func_080142D4 @ 0x080142D4
// =============================================================================
undefined4 func_080142D4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x11c));
  return in_lr;
}

// =============================================================================
// Function: func_08014318 @ 0x08014318
// =============================================================================
undefined4 func_08014318(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(iVar4 + 0xa8);
  func_0x080d3914(piVar2,param_2,*(undefined4 *)(*piVar2 + 0xbc));
  iVar3 = *(int *)(iVar4 + 0xb4);
  if (iVar3 != 0) {
    uVar5 = 0;
    piVar2 = *(int **)(iVar4 + 0xa8);
    cVar1 = func_0x080d3910(piVar2,*(undefined4 *)(*piVar2 + 0xb0));
    if ((cVar1 != '\0') || (((*(ushort *)(*(int *)(iVar4 + 0x8c) + 0x12) & 0x7ff) >> 5 & 1) != 0)) {
      uVar5 = 1;
    }
    func_0803CD4C(iVar3 + 8,*(int *)(iVar4 + 0x8c) + 0x10,uVar5);
  }
  func_080D7F08(iVar4);
  return in_lr;
}

// =============================================================================
// Function: func_08014694 @ 0x08014694
// =============================================================================
undefined4 func_08014694(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x150));
  return in_lr;
}

// =============================================================================
// Function: func_080146B0 @ 0x080146B0
// =============================================================================
undefined4 func_080146B0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x154));
  return in_lr;
}

// =============================================================================
// Function: func_080146CC @ 0x080146CC
// =============================================================================
undefined4 func_080146CC(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  func_0800C994(*(int *)(iVar2 + 0x8c) + 0x410,param_2);
  piVar1 = *(int **)(iVar2 + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0xac));
  return in_lr;
}

// =============================================================================
// Function: func_080146FC @ 0x080146FC
// =============================================================================
undefined4 func_080146FC(int param_1,undefined2 param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 in_lr;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int iStack_3c;
  uint uStack_38;
  int iStack_34;
  int *piStack_30;
  undefined2 *puStack_2c;
  uint *puStack_28;
  uint *puStack_24;
  
  piVar9 = *(int **)(param_1 + 4);
  *(undefined1 *)((int)piVar9 + 0xea) = 1;
  *(undefined2 *)(piVar9 + 0x3b) = param_2;
  *(ushort *)(piVar9 + 4) = *(ushort *)(piVar9 + 4) | 0x100;
  *(short *)(piVar9 + 6) = (short)_DAT_080147a4;
  *(undefined2 *)(piVar9 + 8) = 0;
  uStack_74 = uStack_74 & 0xffff0000;
  *(undefined2 *)((int)piVar9 + 0x22) = 0;
  func_08008F60(&uStack_70,(short)piVar9[0x3b],_DAT_080147a8,2);
  puVar3 = (uint *)piVar9[1];
  if (puVar3 == (uint *)piVar9[3]) {
    iStack_5c = 1;
    iStack_60 = (int)puVar3 - *piVar9 >> 4;
    piVar1 = &iStack_60;
    if (iStack_60 == 0) {
      piVar1 = &iStack_5c;
    }
    puStack_28 = puVar3;
    if (iStack_60 + *piVar1 == 0) {
      puStack_24 = (uint *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iStack_60 + *piVar1) * 0x10;
      puStack_24 = (uint *)malloc(iVar7);
      if (puStack_24 == (uint *)0x0) {
        puStack_24 = (uint *)func_080D3BC0(iVar7);
      }
    }
    puVar2 = (uint *)*piVar9;
    iStack_3c = 0x600;
    uStack_38 = 0;
    iStack_34 = 0xf800;
    piStack_30 = piVar9 + 0x18;
    puStack_44 = (undefined1 *)((int)piVar9 + 0xee);
    puStack_2c = (undefined2 *)((int)piVar9 + 0x62);
    puStack_40 = (undefined1 *)((int)piVar9 + 0xef);
    piStack_48 = piVar9 + 0x27;
    puVar3 = puStack_24;
    for (; puVar2 != puStack_28; puVar2 = puVar2 + 4) {
      if (puVar3 != (uint *)0x0) {
        uVar4 = puVar2[1];
        uVar10 = puVar2[2];
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[2] = uVar10;
        puVar3[3] = puVar2[3];
      }
      puVar3 = puVar3 + 4;
    }
    iVar5 = iStack_5c;
    if (iStack_5c == 1) {
      if (puVar3 != (uint *)0x0) {
        *puVar3 = uStack_70;
        puVar3[1] = uStack_6c;
        puVar3[2] = uStack_68;
        puVar3[3] = uStack_64;
      }
      puVar3 = puVar3 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar3 != (uint *)0x0) {
          *puVar3 = uStack_70;
          puVar3[1] = uStack_6c;
          puVar3[2] = uStack_68;
          puVar3[3] = uStack_64;
        }
        puVar3 = puVar3 + 4;
      }
    }
    for (iVar5 = *piVar9; iVar5 != piVar9[1]; iVar5 = iVar5 + 0x10) {
    }
    if (*piVar9 != 0) {
      free();
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar3;
    piVar9[3] = (int)puStack_24 + iVar7;
  }
  else {
    if (puVar3 != (uint *)0x0) {
      *puVar3 = uStack_70;
      puVar3[1] = uStack_6c;
      puVar3[2] = uStack_68;
      puVar3[3] = uStack_64;
    }
    piVar9[1] = piVar9[1] + 0x10;
    iStack_3c = 0x600;
    uStack_38 = 0;
    iStack_34 = 0xf800;
    piStack_30 = piVar9 + 0x18;
    puStack_44 = (undefined1 *)((int)piVar9 + 0xee);
    puStack_2c = (undefined2 *)((int)piVar9 + 0x62);
    puStack_40 = (undefined1 *)((int)piVar9 + 0xef);
    piStack_48 = piVar9 + 0x27;
  }
  func_08008F60(&uStack_74,_DAT_080148e0,(iStack_3c + 0x1e8) * 0x20 + 0x6000000,0x20);
  puVar3 = (uint *)piVar9[1];
  if (puVar3 == (uint *)piVar9[3]) {
    iStack_54 = 1;
    iStack_58 = (int)puVar3 - *piVar9 >> 4;
    piVar1 = &iStack_58;
    if (iStack_58 == 0) {
      piVar1 = &iStack_54;
    }
    puStack_28 = puVar3;
    if (iStack_58 + *piVar1 == 0) {
      puVar3 = (uint *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iStack_58 + *piVar1) * 0x10;
      puVar3 = (uint *)malloc(iVar7);
      if (puVar3 == (uint *)0x0) {
        puVar3 = (uint *)func_080D3BC0(iVar7);
      }
    }
    puVar6 = puVar3;
    for (puVar2 = (uint *)*piVar9; puVar2 != puStack_28; puVar2 = puVar2 + 4) {
      if (puVar6 != (uint *)0x0) {
        uVar4 = puVar2[1];
        uVar10 = puVar2[2];
        *puVar6 = *puVar2;
        puVar6[1] = uVar4;
        puVar6[2] = uVar10;
        puVar6[3] = puVar2[3];
      }
      puVar6 = puVar6 + 4;
    }
    iVar5 = iStack_54;
    if (iStack_54 == 1) {
      if (puVar6 != (uint *)0x0) {
        *puVar6 = uStack_74;
        puVar6[1] = uStack_70;
        puVar6[2] = uStack_6c;
        puVar6[3] = uStack_68;
      }
      puVar6 = puVar6 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar6 != (uint *)0x0) {
          *puVar6 = uStack_74;
          puVar6[1] = uStack_70;
          puVar6[2] = uStack_6c;
          puVar6[3] = uStack_68;
        }
        puVar6 = puVar6 + 4;
      }
    }
    for (iVar5 = *piVar9; iVar5 != piVar9[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar3;
    if (*piVar9 != 0) {
      free();
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar6;
    piVar9[3] = (int)puStack_24 + iVar7;
  }
  else {
    if (puVar3 != (uint *)0x0) {
      *puVar3 = uStack_74;
      puVar3[1] = uStack_70;
      puVar3[2] = uStack_6c;
      puVar3[3] = uStack_68;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  uVar4 = uStack_38 & 0xf000 | 0x1e8;
  func_08008F60(&uStack_74,uVar4 | uVar4 << 0x10,iStack_34 + 0x6000000,0x500);
  puVar3 = (uint *)piVar9[1];
  if (puVar3 == (uint *)piVar9[3]) {
    iStack_4c = 1;
    iStack_50 = (int)puVar3 - *piVar9 >> 4;
    piVar1 = &iStack_50;
    if (iStack_50 == 0) {
      piVar1 = &iStack_4c;
    }
    if (iStack_50 + *piVar1 == 0) {
      puVar2 = (uint *)0x0;
      iVar7 = 0;
    }
    else {
      iVar7 = (iStack_50 + *piVar1) * 0x10;
      puVar2 = (uint *)malloc(iVar7);
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)func_080D3BC0(iVar7);
      }
    }
    puVar8 = puVar2;
    for (puVar6 = (uint *)*piVar9; puVar6 != puVar3; puVar6 = puVar6 + 4) {
      if (puVar8 != (uint *)0x0) {
        uVar4 = puVar6[1];
        uVar10 = puVar6[2];
        *puVar8 = *puVar6;
        puVar8[1] = uVar4;
        puVar8[2] = uVar10;
        puVar8[3] = puVar6[3];
      }
      puVar8 = puVar8 + 4;
    }
    iVar5 = iStack_4c;
    if (iStack_4c == 1) {
      if (puVar8 != (uint *)0x0) {
        *puVar8 = uStack_74;
        puVar8[1] = uStack_70;
        puVar8[2] = uStack_6c;
        puVar8[3] = uStack_68;
      }
      puVar8 = puVar8 + 4;
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (puVar8 != (uint *)0x0) {
          *puVar8 = uStack_74;
          puVar8[1] = uStack_70;
          puVar8[2] = uStack_6c;
          puVar8[3] = uStack_68;
        }
        puVar8 = puVar8 + 4;
      }
    }
    for (iVar5 = *piVar9; iVar5 != piVar9[1]; iVar5 = iVar5 + 0x10) {
    }
    puStack_24 = puVar2;
    if (*piVar9 != 0) {
      free();
    }
    *piVar9 = (int)puStack_24;
    piVar9[1] = (int)puVar8;
    piVar9[3] = (int)puStack_24 + iVar7;
  }
  else {
    if (puVar3 != (uint *)0x0) {
      *puVar3 = uStack_74;
      puVar3[1] = uStack_70;
      puVar3[2] = uStack_6c;
      puVar3[3] = uStack_68;
    }
    piVar9[1] = piVar9[1] + 0x10;
  }
  *(short *)piStack_30 = (short)_DAT_08014af0;
  *puStack_44 = 0x10;
  *puStack_2c = (short)_DAT_08014af4;
  *puStack_40 = 0;
  *piStack_48 = 0x1a;
  return in_lr;
}

// =============================================================================
// Function: func_08014AF8 @ 0x08014AF8
// =============================================================================
undefined4 func_08014AF8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  int *piStack_1c;
  undefined1 *puStack_18;
  int *piStack_14;
  
  iVar5 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(iVar5 + 0xa8);
  if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
    func_0x080d3914(piVar2,3,*(undefined4 *)(*piVar2 + 8));
  }
  *(undefined4 *)(iVar5 + 0xa8) = 0;
  func_0x08010f54(*(undefined4 *)(iVar5 + 0x8c));
  puVar6 = (undefined4 *)(iVar5 + 0xa8);
  func_0801FB7C(&piStack_1c,*(undefined4 *)(iVar5 + 0x8c),*(undefined4 *)(iVar5 + 0x88),0);
  piVar2 = piStack_1c;
  piStack_14 = piStack_1c;
  piStack_1c = (int *)0x0;
  piVar3 = (int *)*puVar6;
  puStack_18 = (undefined1 *)&piStack_1c;
  if ((piVar2 != piVar3) && (puStack_18 = (undefined1 *)&piStack_1c, piVar3 != (int *)0x0)) {
    puStack_18 = (undefined1 *)&piStack_1c;
    func_0x080d3914(piVar3,3,*(undefined4 *)(*piVar3 + 8));
  }
  *puVar6 = piVar2;
  if (piStack_1c != (int *)0x0) {
    func_0x080d3914(piStack_1c,3,*(undefined4 *)(*piStack_1c + 8));
  }
  func_0x080d3910((int *)*puVar6,*(undefined4 *)(*(int *)*puVar6 + 0x138));
  iVar5 = func_0x080d3914((int *)*puVar6,0,*(undefined4 *)(*(int *)*puVar6 + 0x40));
  if (*(char *)(*_DAT_08014bb4 + 0x36c) != '\0') {
    uVar4 = *(ushort *)(*_DAT_08014bb4 + 0x374) & 0x1f;
    if (uVar4 < 6) {
      iVar1 = 6;
    }
    else {
      iVar1 = 0x1e;
    }
    iVar1 = iVar1 - uVar4;
    func_0x080d3918(iVar5,iVar1 * 7,iVar1 * -2,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 100));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08014BD8 @ 0x08014BD8
// =============================================================================
undefined4 func_08014BD8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = 1;
  do {
    piVar2 = *(int **)(iVar1 + 0xa8);
    iVar3 = func_0x080d3914(piVar2,uVar4,*(undefined4 *)(*piVar2 + 0x40));
    if (iVar3 != 0) {
      func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x3c));
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x24);
  return in_lr;
}

// =============================================================================
// Function: func_08014C0C @ 0x08014C0C
// =============================================================================
undefined4 func_08014C0C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3918(iVar2,param_2,param_3,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 100));
  return in_lr;
}

// =============================================================================
// Function: func_08014C34 @ 0x08014C34
// =============================================================================
undefined4
func_08014C34(int param_1,int param_2,int param_3,ushort param_4,uint param_5,uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  undefined1 auStack_64 [44];
  undefined1 auStack_38 [6];
  undefined1 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  ushort uStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = *(int *)(param_1 + 4);
  if (param_2 == 0) {
    iVar5 = *(int *)(iStack_24 + 0x8c);
    uVar3 = (ushort)_DAT_08014d28;
    uVar2 = (ushort)_DAT_08014d2c;
    uVar1 = uVar2 & uStack_30 | param_4 & uVar3;
    uStack_30._1_1_ = (byte)(uVar1 >> 8);
    uStack_30 = CONCAT11(uStack_30._1_1_ & 3 | (byte)((param_5 & 0x3f) << 2),(char)uVar1);
    uVar1 = uVar2 & uStack_2e | (ushort)((param_5 & 0xffff) >> 6) & uVar3;
    uStack_2e._1_1_ = (byte)(uVar1 >> 8);
    uStack_2e = CONCAT11(uStack_2e._1_1_ & 3 | (byte)((param_6 & 0x3f) << 2),(char)uVar1);
    uStack_2c = uVar2 & uStack_2c | (ushort)((param_6 & 0xffff) >> 6) & uVar3;
    iStack_28 = param_3;
    memcpy(auStack_38,&uStack_30,6);
    uStack_32 = 0;
    func_0809BBF0(auStack_64,auStack_38,iStack_28 * 0x78);
    func_08009BE4(iVar5 + 0x14,auStack_64);
    puVar7 = (undefined4 *)(iStack_24 + 0xa8);
    piVar6 = (int *)*puVar7;
    func_0x080d3914(piVar6,0x2c,*(undefined4 *)(*piVar6 + 0x38));
    piVar6 = (int *)*puVar7;
    iVar5 = func_0x080d3914(piVar6,0x2c,*(undefined4 *)(*piVar6 + 0x40));
    if ((iVar5 != 0) &&
       (cVar4 = func_0x080d3910(iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x28)), cVar4 == '\0'
       )) {
      func_0x080d3910(iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x20));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08014D30 @ 0x08014D30
// =============================================================================
undefined4 func_08014D30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  if (param_2 == 0) {
    piVar1 = *(int **)(iVar2 + 0xa8);
    func_0x080d3914(piVar1,0x2c,*(undefined4 *)(*piVar1 + 0x3c));
    func_0x08009c54(*(int *)(iVar2 + 0x8c) + 0x14);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08014D5C @ 0x08014D5C
// =============================================================================
void func_08014D5C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x78));
  return;
}

// =============================================================================
// Function: func_08014D7C @ 0x08014D7C
// =============================================================================
void func_08014D7C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x44));
  return;
}

// =============================================================================
// Function: func_08014D9C @ 0x08014D9C
// =============================================================================
undefined4 func_08014D9C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  
  iVar1 = _DAT_0801510c;
  puVar7 = &stack0xffffffe0 + _DAT_0801510c;
  puVar8 = &stack0xffffffe0 + _DAT_0801510c;
  puVar9 = &stack0xffffffe0 + _DAT_0801510c;
  puVar10 = &stack0xffffffe0 + _DAT_0801510c;
  puVar11 = &stack0xffffffe0 + _DAT_0801510c;
  puVar12 = &stack0xffffffe0 + _DAT_0801510c;
  puVar13 = &stack0xffffffe0 + _DAT_0801510c;
  puVar14 = &stack0xffffffe0 + _DAT_0801510c;
  puVar15 = &stack0xffffffe0 + _DAT_0801510c;
  puVar16 = &stack0xffffffe0 + _DAT_0801510c;
  puVar17 = &stack0xffffffe0 + _DAT_0801510c;
  puVar18 = &stack0xffffffe0 + _DAT_0801510c;
  puVar19 = &stack0xffffffe0 + _DAT_0801510c;
  puVar20 = &stack0xffffffe0 + _DAT_0801510c;
  puVar21 = &stack0xffffffe0 + _DAT_0801510c;
  puVar22 = &stack0xffffffe0 + _DAT_0801510c;
  puVar23 = &stack0xffffffe0 + _DAT_0801510c;
  puVar24 = &stack0xffffffe0 + _DAT_0801510c;
  puVar25 = &stack0xffffffe0 + _DAT_0801510c;
  puVar26 = &stack0xffffffe0 + _DAT_0801510c;
  puVar27 = &stack0xffffffe0 + _DAT_0801510c;
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0xf0) != 0) {
    func_08000608();
  }
  *(int *)(iVar2 + 0xf0) = 0;
  *puVar7 = 0;
  memcpy(&stack0x00000364 + iVar1,_DAT_08015110,3);
  memcpy(&stack0x00000368 + iVar1,_DAT_08015114,2);
  memcpy(&stack0x0000036c + iVar1,_DAT_08015118,2);
  uVar5 = _DAT_0801511c;
  iVar3 = strlen(puVar8);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015110;
  iVar3 = strlen(puVar9);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015124;
  iVar3 = strlen(puVar10);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = func_0x08009af4(*(int *)(iVar2 + 0x8c) + 0x14);
  iVar3 = strlen(puVar11);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015128;
  iVar3 = strlen(puVar12);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015110;
  iVar3 = strlen(puVar13);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_0801512c;
  iVar3 = strlen(puVar14);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015114;
  iVar3 = strlen(puVar15);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015110;
  iVar3 = strlen(puVar16);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015130;
  iVar3 = strlen(puVar17);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015114;
  iVar3 = strlen(puVar18);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015110;
  iVar3 = strlen(puVar19);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015118;
  iVar3 = strlen(puVar20);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  func_08011934(iVar2,2,puVar21);
  uVar5 = _DAT_08015118;
  iVar3 = strlen(puVar22);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015134;
  iVar3 = strlen(puVar23);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015110;
  iVar3 = strlen(puVar24);
  uVar6 = _DAT_08015120 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015204;
  iVar3 = strlen(puVar25);
  uVar6 = _DAT_08015208 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_0801520c;
  iVar3 = strlen(puVar26);
  uVar6 = _DAT_08015208 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  iVar3 = func_080005D4(900);
  strcpy(iVar3,puVar27);
  if (iVar3 != *(int *)(iVar2 + 0xf0)) {
    func_08000608();
  }
  *(int *)(iVar2 + 0xf0) = iVar3;
  if (*(int *)(iVar2 + 0xac) != 0) {
    func_08050DC8(*(int *)(iVar2 + 0xac),iVar3,0x100,*(undefined4 *)(iVar2 + 0xb0));
    *(undefined4 *)(iVar2 + 0x9c) = 0x10;
  }
  return *(undefined4 *)(&stack0x0000038c + iVar1);
}

// =============================================================================
// Function: func_08015210 @ 0x08015210
// =============================================================================
undefined4 func_08015210(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar8 = (int *)(iVar2 + 0x8c);
  uVar3 = func_0800C570(*piVar8 + 0x410);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = func_0800C894(*piVar8 + 0x410,uVar7);
      if ((iVar4 != 0) && (iVar4 = func_0x0809b514(), iVar4 == 2)) {
        func_0x080d3914(*(int **)(iVar2 + 0xa8),uVar7 + 0x2e,
                        *(undefined4 *)(**(int **)(iVar2 + 0xa8) + 0x3c));
        func_0800C91C(*piVar8 + 0x410,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  piVar8 = (int *)(iVar2 + 0x8c);
  iVar4 = *piVar8 + _DAT_08015318;
  cVar1 = func_0800F190(iVar4);
  if ((cVar1 == '\0') && (iVar5 = func_0x0800f204(iVar4), iVar5 == 3)) {
    iVar5 = *piVar8;
    uVar6 = func_0800F344(iVar4);
    iVar4 = func_0800C894(iVar5 + 0x410,uVar6);
    if (iVar4 == 0) {
      func_0x0800f390(*piVar8 + _DAT_08015318);
    }
  }
  uVar3 = func_0800CE74(*piVar8 + 0x5f0);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = func_0800D420(*piVar8 + 0x5f0,uVar7);
      if ((iVar4 != 0) && (iVar4 = func_0x0809b514(), iVar4 == 2)) {
        func_0x080d3914(*(int **)(iVar2 + 0xa8),uVar7 + 0x36,
                        *(undefined4 *)(**(int **)(iVar2 + 0xa8) + 0x3c));
        func_0800D4D4(*piVar8 + 0x5f0,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801531C @ 0x0801531C
// =============================================================================
undefined4 func_0801531C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  
  iVar1 = _DAT_0801568c;
  puVar7 = &stack0xffffffe0 + _DAT_0801568c;
  puVar8 = &stack0xffffffe0 + _DAT_0801568c;
  puVar9 = &stack0xffffffe0 + _DAT_0801568c;
  puVar10 = &stack0xffffffe0 + _DAT_0801568c;
  puVar11 = &stack0xffffffe0 + _DAT_0801568c;
  puVar12 = &stack0xffffffe0 + _DAT_0801568c;
  puVar13 = &stack0xffffffe0 + _DAT_0801568c;
  puVar14 = &stack0xffffffe0 + _DAT_0801568c;
  puVar15 = &stack0xffffffe0 + _DAT_0801568c;
  puVar16 = &stack0xffffffe0 + _DAT_0801568c;
  puVar17 = &stack0xffffffe0 + _DAT_0801568c;
  puVar18 = &stack0xffffffe0 + _DAT_0801568c;
  puVar19 = &stack0xffffffe0 + _DAT_0801568c;
  puVar20 = &stack0xffffffe0 + _DAT_0801568c;
  puVar21 = &stack0xffffffe0 + _DAT_0801568c;
  puVar22 = &stack0xffffffe0 + _DAT_0801568c;
  puVar23 = &stack0xffffffe0 + _DAT_0801568c;
  puVar24 = &stack0xffffffe0 + _DAT_0801568c;
  puVar25 = &stack0xffffffe0 + _DAT_0801568c;
  puVar26 = &stack0xffffffe0 + _DAT_0801568c;
  puVar27 = &stack0xffffffe0 + _DAT_0801568c;
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(iVar2 + 0xf0) != 0) {
    func_08000608();
  }
  *(int *)(iVar2 + 0xf0) = 0;
  *puVar7 = 0;
  memcpy(&stack0x00000364 + iVar1,_DAT_08015690,3);
  memcpy(&stack0x00000368 + iVar1,_DAT_08015694,2);
  memcpy(&stack0x0000036c + iVar1,_DAT_08015698,2);
  uVar5 = _DAT_0801569c;
  iVar3 = strlen(puVar8);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015690;
  iVar3 = strlen(puVar9);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_080156a4;
  iVar3 = strlen(puVar10);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = func_0x08009af4(*(int *)(iVar2 + 0x8c) + 0x14);
  iVar3 = strlen(puVar11);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_080156a8;
  iVar3 = strlen(puVar12);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015690;
  iVar3 = strlen(puVar13);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_080156ac;
  iVar3 = strlen(puVar14);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015694;
  iVar3 = strlen(puVar15);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015690;
  iVar3 = strlen(puVar16);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_080156b0;
  iVar3 = strlen(puVar17);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015694;
  iVar3 = strlen(puVar18);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015690;
  iVar3 = strlen(puVar19);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015698;
  iVar3 = strlen(puVar20);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  func_08011934(iVar2,1,puVar21);
  uVar5 = _DAT_08015698;
  iVar3 = strlen(puVar22);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_080156b4;
  iVar3 = strlen(puVar23);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015690;
  iVar3 = strlen(puVar24);
  uVar6 = _DAT_080156a0 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_08015784;
  iVar3 = strlen(puVar25);
  uVar6 = _DAT_08015788 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  uVar5 = _DAT_0801578c;
  iVar3 = strlen(puVar26);
  uVar6 = _DAT_08015788 - iVar3;
  if (uVar6 != 0) {
    uVar4 = strlen(uVar5);
    if (uVar6 < uVar4) {
      uVar4 = uVar6;
    }
    memcpy(&stack0xffffffe0 + iVar3 + iVar1,uVar5,uVar4);
    (&stack0xffffffe0 + iVar3 + iVar1)[uVar4] = 0;
  }
  iVar3 = func_080005D4(900);
  strcpy(iVar3,puVar27);
  if (iVar3 != *(int *)(iVar2 + 0xf0)) {
    func_08000608();
  }
  *(int *)(iVar2 + 0xf0) = iVar3;
  if (*(int *)(iVar2 + 0xac) != 0) {
    func_08050DC8(*(int *)(iVar2 + 0xac),iVar3,0x100,*(undefined4 *)(iVar2 + 0xb0));
    *(undefined4 *)(iVar2 + 0x9c) = 0x10;
  }
  return *(undefined4 *)(&stack0x0000038c + iVar1);
}

// =============================================================================
// Function: func_08015790 @ 0x08015790
// =============================================================================
undefined4 func_08015790(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar8 = (int *)(iVar2 + 0x8c);
  uVar3 = func_0800C570(*piVar8 + 0x410);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = func_0800C894(*piVar8 + 0x410,uVar7);
      if ((iVar4 != 0) && (iVar4 = func_0x0809b514(), iVar4 == 1)) {
        func_0x080d3914(*(int **)(iVar2 + 0xa8),uVar7 + 0x2e,
                        *(undefined4 *)(**(int **)(iVar2 + 0xa8) + 0x3c));
        func_0800C91C(*piVar8 + 0x410,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  piVar8 = (int *)(iVar2 + 0x8c);
  iVar4 = *piVar8 + _DAT_08015898;
  cVar1 = func_0800F190(iVar4);
  if ((cVar1 == '\0') && (iVar5 = func_0x0800f204(iVar4), iVar5 == 3)) {
    iVar5 = *piVar8;
    uVar6 = func_0800F344(iVar4);
    iVar4 = func_0800C894(iVar5 + 0x410,uVar6);
    if (iVar4 == 0) {
      func_0x0800f390(*piVar8 + _DAT_08015898);
    }
  }
  uVar3 = func_0800CE74(*piVar8 + 0x5f0);
  uVar7 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = func_0800D420(*piVar8 + 0x5f0,uVar7);
      if ((iVar4 != 0) && (iVar4 = func_0x0809b514(), iVar4 == 1)) {
        func_0x080d3914(*(int **)(iVar2 + 0xa8),uVar7 + 0x36,
                        *(undefined4 *)(**(int **)(iVar2 + 0xa8) + 0x3c));
        func_0800D4D4(*piVar8 + 0x5f0,uVar7);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801589C @ 0x0801589C
// =============================================================================
undefined4 func_0801589C(int param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3914(iVar2,param_2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x68));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return in_lr;
}

// =============================================================================
// Function: func_080158CC @ 0x080158CC
// =============================================================================
undefined4 func_080158CC(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x80));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return in_lr;
}

// =============================================================================
// Function: func_080158F8 @ 0x080158F8
// =============================================================================
undefined4 func_080158F8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x7c));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return in_lr;
}

// =============================================================================
// Function: func_08015920 @ 0x08015920
// =============================================================================
undefined8 func_08015920(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((param_2 - 0x24U < 7) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8),
     iVar2 = func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x40)), iVar2 != 0)) {
    uVar3 = func_08033B24();
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_08015950 @ 0x08015950
// =============================================================================
void func_08015950(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x84));
  return;
}

// =============================================================================
// Function: func_08015970 @ 0x08015970
// =============================================================================
void func_08015970(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x88));
  return;
}

// =============================================================================
// Function: func_08015990 @ 0x08015990
// =============================================================================
void func_08015990(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x8c));
  return;
}

// =============================================================================
// Function: func_080159B0 @ 0x080159B0
// =============================================================================
undefined4 func_080159B0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 in_lr;
  uint uStack_98;
  undefined4 auStack_94 [12];
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  
  iVar8 = *(int *)(param_1 + 4);
  uStack_98 = 0;
  iVar2 = func_0x080d3914(*(int **)(iVar8 + 0xa8),0x4a,
                          *(undefined4 *)(**(int **)(iVar8 + 0xa8) + 0x40));
  if (iVar2 != 0) {
    uVar5 = (uint)*(ushort *)(iVar2 + 4);
    if (((param_2 == 0) && (0x33 < uVar5)) && ((int)uVar5 <= _DAT_080159f8)) {
      if (param_3 == uVar5 - 0x34) {
        bVar1 = true;
      }
      else {
LAB_08015a16:
        bVar1 = false;
      }
    }
    else if (((param_2 != 1) || ((int)uVar5 <= _DAT_08015b50)) ||
            ((_DAT_08015b54 < (int)uVar5 || (bVar1 = true, param_3 != uVar5 + _DAT_08015b58))))
    goto LAB_08015a16;
    if (bVar1) {
      func_0x080d3914(&sStack_64,iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc));
      iVar2 = (int)sStack_64;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      iVar6 = (int)sStack_62;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      uStack_5c._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
      if (&stack0x00000000 != &UNK_00000094) {
        auStack_94[0] = uStack_5c;
      }
      iVar2 = (int)sStack_60;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      iVar6 = (int)sStack_62;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      uStack_58._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
      if (&stack0x00000000 != &UNK_00000090) {
        auStack_94[1] = uStack_58;
      }
      iVar2 = (int)sStack_64;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      iVar6 = (int)sStack_5e;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      uStack_54._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
      if (&stack0x00000000 != &UNK_0000008c) {
        auStack_94[2] = uStack_54;
      }
      iVar2 = (int)sStack_60;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      iVar6 = (int)sStack_5e;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      uStack_50._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
      if (&stack0x00000000 != &UNK_00000088) {
        auStack_94[3] = uStack_50;
      }
      uStack_98 = 4;
    }
  }
  piVar3 = *(int **)(iVar8 + 0xa8);
  iVar2 = func_0x080d3914(piVar3,0x2b,*(undefined4 *)(*piVar3 + 0x40));
  if (iVar2 != 0) {
    uVar5 = (uint)*(ushort *)(iVar2 + 4);
    if (((param_2 == 0) && (0x33 < uVar5)) && ((int)uVar5 <= _DAT_08015b50)) {
      if (param_3 == uVar5 - 0x34) {
        bVar1 = true;
      }
      else {
LAB_08015b76:
        bVar1 = false;
      }
    }
    else if ((((param_2 != 1) || ((int)uVar5 <= _DAT_08015cac)) || (_DAT_08015cb0 < (int)uVar5)) ||
            (bVar1 = true, param_3 != uVar5 + _DAT_08015cb4)) goto LAB_08015b76;
    if (bVar1) {
      func_0x080d3914(&sStack_4c,iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc));
      iVar2 = (int)sStack_4c;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      iVar6 = (int)sStack_4a;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      uStack_44._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
      if (uStack_98 < 0xc) {
        if (auStack_94 + uStack_98 != (undefined4 *)0x0) {
          auStack_94[uStack_98] = uStack_44;
        }
        uStack_98 = uStack_98 + 1;
      }
      iVar2 = (int)sStack_48;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      iVar6 = (int)sStack_4a;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      uStack_40._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
      if (uStack_98 < 0xc) {
        if (auStack_94 + uStack_98 != (undefined4 *)0x0) {
          auStack_94[uStack_98] = uStack_40;
        }
        uStack_98 = uStack_98 + 1;
      }
      iVar2 = (int)sStack_4c;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      iVar6 = (int)sStack_46;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      uStack_3c._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
      if (uStack_98 < 0xc) {
        if (auStack_94 + uStack_98 != (undefined4 *)0x0) {
          auStack_94[uStack_98] = uStack_3c;
        }
        uStack_98 = uStack_98 + 1;
      }
      iVar2 = (int)sStack_48;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 7;
      }
      iVar6 = (int)sStack_46;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 7;
      }
      uStack_38._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
      if (uStack_98 < 0xc) {
        if (auStack_94 + uStack_98 != (undefined4 *)0x0) {
          auStack_94[uStack_98] = uStack_38;
        }
        uStack_98 = uStack_98 + 1;
      }
    }
  }
  piVar3 = *(int **)(iVar8 + 0xa8);
  iVar2 = func_0x080d3914(piVar3,0x4b,*(undefined4 *)(*piVar3 + 0x40));
  if (iVar2 == 0) goto LAB_08015dd6;
  uVar5 = (uint)*(ushort *)(iVar2 + 4);
  if (((param_2 == 0) && (0x33 < uVar5)) && ((int)uVar5 <= _DAT_08015cac)) {
    if (param_3 == uVar5 - 0x34) {
      bVar1 = true;
    }
    else {
LAB_08015cd2:
      bVar1 = false;
    }
  }
  else if (((param_2 != 1) || ((int)uVar5 <= _DAT_08015e20)) ||
          ((_DAT_08015e24 < (int)uVar5 || (bVar1 = true, param_3 != uVar5 + _DAT_08015e28))))
  goto LAB_08015cd2;
  if (bVar1) {
    func_0x080d3914(&sStack_34,iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xc));
    iVar2 = (int)sStack_34;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar6 = (int)sStack_32;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    uStack_2c._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
    if (uStack_98 < 0xc) {
      if (auStack_94 + uStack_98 != (undefined4 *)0x0) {
        auStack_94[uStack_98] = uStack_2c;
      }
      uStack_98 = uStack_98 + 1;
    }
    iVar2 = (int)sStack_30;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar6 = (int)sStack_32;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    uStack_28._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
    if (uStack_98 < 0xc) {
      if (auStack_94 + uStack_98 != (undefined4 *)0x0) {
        auStack_94[uStack_98] = uStack_28;
      }
      uStack_98 = uStack_98 + 1;
    }
    iVar2 = (int)sStack_34;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar6 = (int)sStack_2e;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    uStack_24._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
    if (uStack_98 < 0xc) {
      if (auStack_94 + uStack_98 != (undefined4 *)0x0) {
        auStack_94[uStack_98] = uStack_24;
      }
      uStack_98 = uStack_98 + 1;
    }
    iVar2 = (int)sStack_30;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar6 = (int)sStack_2e;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    uStack_20._0_2_ = CONCAT11((char)(iVar6 >> 3),(char)(iVar2 >> 3));
    if (uStack_98 < 0xc) {
      if (auStack_94 + uStack_98 != (undefined4 *)0x0) {
        auStack_94[uStack_98] = uStack_20;
      }
      uStack_98 = uStack_98 + 1;
    }
  }
LAB_08015dd6:
  puVar4 = auStack_94;
  puVar7 = (undefined4 *)0x0;
  if (uStack_98 != 0) {
    puVar7 = puVar4;
  }
  func_0809CF34(auStack_1c,*(int *)(iVar8 + 0x8c) + _DAT_08015e2c,param_2,param_3,puVar7,uStack_98);
  for (; puVar4 != auStack_94 + uStack_98; puVar4 = puVar4 + 1) {
  }
  return in_lr;
}

// =============================================================================
// Function: func_08015E30 @ 0x08015E30
// =============================================================================
undefined4 func_08015E30(int param_1)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  undefined4 in_lr;
  undefined4 uStack_100;
  ushort auStack_fc [2];
  undefined4 auStack_f8 [11];
  undefined4 uStack_cc;
  short sStack_c8;
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  short sStack_b0;
  short sStack_ae;
  short sStack_ac;
  short sStack_aa;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  short sStack_98;
  short sStack_96;
  short sStack_94;
  short sStack_92;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  short sStack_7c;
  short sStack_7a;
  short sStack_78;
  short sStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  short sStack_64;
  short sStack_62;
  short sStack_60;
  short sStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  
  iStack_30 = *(int *)(param_1 + 4);
  puVar13 = (undefined4 *)(iStack_30 + 0xa8);
  iVar5 = func_0x080d3910((int *)*puVar13,*(undefined4 *)(*(int *)*puVar13 + 0x14));
  uStack_cc = (uint)uStack_cc._2_2_ << 0x10;
  if (iVar5 - 0x34U < 0x100) {
    iVar15 = iVar5 + -0x33;
    uStack_100 = 0;
    iVar6 = func_0x080d3914((int *)*puVar13,0x4a,*(undefined4 *)(*(int *)*puVar13 + 0x40));
    if (iVar6 != 0) {
      uVar9 = (uint)*(ushort *)(iVar6 + 4);
      bVar2 = false;
      if (((0x33 < uVar9) && ((int)uVar9 <= _DAT_080161a0)) && (iVar15 == uVar9 - 0x34)) {
        bVar2 = true;
      }
      if (bVar2) {
        func_0x080d3914(&sStack_c8,iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc));
        iVar6 = (int)sStack_c8;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_c6;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_c0._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_c0;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_c4;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_c6;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_bc._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_bc;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_c8;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_c2;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_b8._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_b8;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_c4;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_c2;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_b4._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_b4;
          }
          uStack_100 = uStack_100 + 1;
        }
      }
    }
    puVar13 = (undefined4 *)(iStack_30 + 0xa8);
    iVar6 = func_0x080d3914((int *)*puVar13,0x2b,*(undefined4 *)(*(int *)*puVar13 + 0x40));
    puStack_28 = puVar13;
    if (iVar6 != 0) {
      uVar9 = (uint)*(ushort *)(iVar6 + 4);
      bVar2 = false;
      if (((0x33 < uVar9) && ((int)uVar9 <= _DAT_080161a0)) && (iVar15 == uVar9 - 0x34)) {
        bVar2 = true;
      }
      if (bVar2) {
        func_0x080d3914(&sStack_b0,iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc));
        iVar6 = (int)sStack_b0;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_ae;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_a8._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_a8;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_ac;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_ae;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_a4._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_a4;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_b0;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_aa;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_a0._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_a0;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_ac;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_aa;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_9c._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_9c;
          }
          uStack_100 = uStack_100 + 1;
        }
      }
    }
    iVar6 = func_0x080d3914((int *)*puStack_28,0x4b,*(undefined4 *)(*(int *)*puStack_28 + 0x40));
    if (iVar6 != 0) {
      uVar9 = (uint)*(ushort *)(iVar6 + 4);
      bVar2 = false;
      if (((0x33 < uVar9) && ((int)uVar9 <= _DAT_080161a0)) && (iVar15 == uVar9 - 0x34)) {
        bVar2 = true;
      }
      if (bVar2) {
        func_0x080d3914(&sStack_98,iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc));
        iVar6 = (int)sStack_98;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_96;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_90._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_90;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_94;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_96;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_8c._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_8c;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_98;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_92;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_88._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_88;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_94;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_92;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_84._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_84;
          }
          uStack_100 = uStack_100 + 1;
        }
      }
    }
    puVar11 = auStack_fc;
    puVar12 = (ushort *)0x0;
    if (uStack_100 != 0) {
      puVar12 = puVar11;
    }
    piVar14 = (int *)(iStack_30 + 0x8c);
    func_0809CF34(&uStack_80,*piVar14 + _DAT_0801624c,0,iVar15,puVar12,uStack_100);
    puVar8 = &uStack_80;
    for (; puVar11 != auStack_fc + uStack_100 * 2; puVar11 = puVar11 + 2) {
    }
  }
  else {
    if (0xff < (uint)(iVar5 + _DAT_0801656c)) {
      return in_lr;
    }
    iVar15 = iVar5 + _DAT_0801656c + 1;
    uStack_100 = 0;
    iVar6 = func_0x080d3914((int *)*puVar13,0x4a,*(undefined4 *)(*(int *)*puVar13 + 0x40));
    if (iVar6 != 0) {
      uVar9 = (uint)*(ushort *)(iVar6 + 4);
      bVar2 = false;
      if (((_DAT_08016570 < (int)uVar9) && ((int)uVar9 <= _DAT_08016574)) &&
         (iVar15 == uVar9 + _DAT_0801656c)) {
        bVar2 = true;
      }
      if (bVar2) {
        func_0x080d3914(&sStack_7c,iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc));
        iVar6 = (int)sStack_7c;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_7a;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_74._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_74;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_78;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_7a;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_70._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_70;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_7c;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_76;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_6c._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_6c;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_78;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_76;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_68._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_68;
          }
          uStack_100 = uStack_100 + 1;
        }
      }
    }
    puVar13 = (undefined4 *)(iStack_30 + 0xa8);
    iVar6 = func_0x080d3914((int *)*puVar13,0x2b,*(undefined4 *)(*(int *)*puVar13 + 0x40));
    puStack_28 = puVar13;
    if (iVar6 != 0) {
      uVar9 = (uint)*(ushort *)(iVar6 + 4);
      bVar2 = false;
      if (((_DAT_08016570 < (int)uVar9) && ((int)uVar9 <= _DAT_08016574)) &&
         (iVar15 == uVar9 + _DAT_0801656c)) {
        bVar2 = true;
      }
      if (bVar2) {
        func_0x080d3914(&sStack_64,iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc));
        iVar6 = (int)sStack_64;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_62;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_5c._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_5c;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_60;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_62;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_58._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_58;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_64;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_5e;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_54._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_54;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_60;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_5e;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_50._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_50;
          }
          uStack_100 = uStack_100 + 1;
        }
      }
    }
    iVar6 = func_0x080d3914((int *)*puStack_28,0x4b,*(undefined4 *)(*(int *)*puStack_28 + 0x40));
    if (iVar6 != 0) {
      uVar9 = (uint)*(ushort *)(iVar6 + 4);
      bVar2 = false;
      if (((_DAT_08016570 < (int)uVar9) && ((int)uVar9 <= _DAT_08016574)) &&
         (iVar15 == uVar9 + _DAT_0801656c)) {
        bVar2 = true;
      }
      if (bVar2) {
        func_0x080d3914(&sStack_4c,iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0xc));
        iVar6 = (int)sStack_4c;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_4a;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_44._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_44;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_48;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_4a;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_40._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_40;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_4c;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_46;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_3c._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_3c;
          }
          uStack_100 = uStack_100 + 1;
        }
        iVar6 = (int)sStack_48;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 7;
        }
        iVar7 = (int)sStack_46;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 7;
        }
        uStack_38._0_2_ = CONCAT11((char)(iVar7 >> 3),(char)(iVar6 >> 3));
        if (uStack_100 < 0xc) {
          if (auStack_fc + uStack_100 * 2 != (ushort *)0x0) {
            *(undefined4 *)(auStack_fc + uStack_100 * 2) = uStack_38;
          }
          uStack_100 = uStack_100 + 1;
        }
      }
    }
    puVar11 = auStack_fc;
    puVar12 = (ushort *)0x0;
    if (uStack_100 != 0) {
      puVar12 = puVar11;
    }
    piVar14 = (int *)(iStack_30 + 0x8c);
    func_0809CF34(&uStack_34,*piVar14 + _DAT_08016668,1,iVar15,puVar12,uStack_100);
    puVar8 = &uStack_34;
    for (; puVar11 != auStack_fc + uStack_100 * 2; puVar11 = puVar11 + 2) {
    }
  }
  uStack_cc = *puVar8;
  uVar9 = func_0x0809d8a0(*piVar14 + _DAT_08016668);
  if (uVar9 < 5) {
    uVar16 = (uStack_cc & 0xff) * 0x10 + 0x18;
    uVar9 = (uStack_cc >> 8 & 0xff) * 0x10 + 0x40;
    puStack_2c = (undefined4 *)(*(int *)*puStack_28 + 0xb4);
    uVar4 = (ushort)_DAT_08016750;
    uVar3 = (ushort)_DAT_08016754;
    uVar1 = uVar3 & (ushort)uStack_100 | (short)iVar5 + 1U & uVar4;
    iStack_24 = (uVar16 & 0x3f) << 2;
    uStack_100._1_1_ = (byte)(uVar1 >> 8);
    uStack_100._0_2_ = CONCAT11(uStack_100._1_1_ & 3 | (byte)iStack_24,(char)uVar1);
    uVar1 = uVar3 & uStack_100._2_2_;
    uStack_100 = CONCAT22(uVar1 | (ushort)(uVar16 >> 6) & uVar4,(ushort)uStack_100);
    uVar10 = uStack_100;
    uStack_100._3_1_ = (byte)(uVar1 >> 8);
    uStack_100 = CONCAT13(uStack_100._3_1_ & 3 | (byte)((uVar9 & 0x3f) << 2),(int3)uVar10);
    auStack_fc[0] = uVar3 & auStack_fc[0] | (ushort)(uVar9 >> 6) & uVar4;
    func_0x080d3918((int *)*puStack_28,&uStack_100,1,*puStack_2c);
    func_080D7F08(iStack_30);
    uVar10 = func_0x080d3910((int *)*puStack_28,*(undefined4 *)(*(int *)*puStack_28 + 0x14));
    func_080D7F9C(iStack_30,0,uVar10,uVar16,uVar9,0);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08016758 @ 0x08016758
// =============================================================================
undefined4 func_08016758(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar3 = *(int **)(iVar2 + 0xa8);
  uVar1 = func_0x080d3910(piVar3,*(undefined4 *)(*piVar3 + 0x148));
  func_08008B88(iVar2 + 0xbc,uVar1);
  return in_lr;
}

// =============================================================================
// Function: func_08016784 @ 0x08016784
// =============================================================================
undefined8 func_08016784(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4) + 0xbc;
  cVar1 = func_0x08008cd0(iVar2);
  if (cVar1 != '\0') {
    func_08008BF8(iVar2,5);
  }
  return CONCAT44(in_lr,(uint)(cVar1 != '\0'));
}

// =============================================================================
// Function: func_080167AC @ 0x080167AC
// =============================================================================
void func_080167AC(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x90));
  return;
}

// =============================================================================
// Function: func_080167CC @ 0x080167CC
// =============================================================================
void func_080167CC(int param_1)

{
  func_0x08008cd0(*(int *)(param_1 + 4) + 0xbc);
  return;
}

// =============================================================================
// Function: func_080167DC @ 0x080167DC
// =============================================================================
undefined4 func_080167DC(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar4 + 0x8c);
  func_0x080a05e8(iVar3 + _DAT_08016830,iVar3 + 0x11);
  puVar5 = (undefined4 *)(iVar4 + 0xa8);
  piVar2 = (int *)*puVar5;
  func_0x080d3914(piVar2,0x23,*(undefined4 *)(*piVar2 + 0x38));
  piVar2 = (int *)*puVar5;
  iVar3 = func_0x080d3914(piVar2,0x23,*(undefined4 *)(*piVar2 + 0x40));
  if ((iVar3 != 0) &&
     (cVar1 = func_0x080d3910(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x28)), cVar1 == '\0'))
  {
    func_0x080d3910(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x20));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08016834 @ 0x08016834
// =============================================================================
undefined4 func_08016834(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_2 < 5) {
    switch(*(uint *)(PTR_case_0801684C_08016848 + param_2 * 4) & 0xfffffffe) {
    case 0x801684c:
      iVar1 = *(int *)(*(int *)(iVar1 + 4) + 8);
    case 0x8016860:
      func_0x080d3914(*(int **)(iVar1 + 0xa8),0x2c,*(undefined4 *)(**(int **)(iVar1 + 0xa8) + 0x3c))
      ;
      break;
    case 0x8016872:
      func_0x080d3914(*(int **)(iVar1 + 0xa8),0x2b,*(undefined4 *)(**(int **)(iVar1 + 0xa8) + 0x3c))
      ;
      break;
    case 0x8016884:
      func_0800D80C(*(int *)(iVar1 + 0x8c) + 0x5f0,param_3);
      func_0x080d3914(*(int **)(iVar1 + 0xa8),param_3 + 0x36,
                      *(undefined4 *)(**(int **)(iVar1 + 0xa8) + 0x3c));
      break;
    case 0x80168aa:
      func_0800CB7C(*(int *)(iVar1 + 0x8c) + 0x410,param_3);
      func_0x080d3914(*(int **)(iVar1 + 0xa8),param_3 + 0x2e,
                      *(undefined4 *)(**(int **)(iVar1 + 0xa8) + 0x3c));
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_080168D4 @ 0x080168D4
// =============================================================================
undefined4 func_080168D4(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 in_lr;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  
  iVar6 = *(int *)(param_1 + 4);
  if (param_2 < 5) {
    switch(*(uint *)(PTR_case_080168F4_080168f0 + param_2 * 4) & 0xfffffffe) {
    case 0x80168f4:
    case 0x8016908:
      puVar5 = (undefined4 *)(iVar6 + 0xa8);
      iVar6 = func_0x080d3914((int *)*puVar5,0x2c,*(undefined4 *)(*(int *)*puVar5 + 0x40));
      if (iVar6 == 0) {
        func_0x080d3914((int *)*puVar5,0x2c,*(undefined4 *)(*(int *)*puVar5 + 0x38));
        iVar6 = func_0x080d3914((int *)*puVar5,0x2c,*(undefined4 *)(*(int *)*puVar5 + 0x40));
        if ((iVar6 != 0) &&
           (cVar1 = func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x28)),
           cVar1 == '\0')) {
          func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x20));
        }
        if (iVar6 != 0) {
          func_0801FE78(iVar6,2,0x2f0,0x84);
        }
      }
      break;
    case 0x801696c:
      piVar4 = (int *)(iVar6 + 0x8c);
      iVar2 = func_0800D058(*piVar4 + 0x5f0);
      if (iVar2 != -1) {
        func_0x0800d858(*piVar4 + 0x5f0);
        piVar3 = *(int **)(iVar6 + 0xa8);
        func_0x080d3914(piVar3,iVar2 + 0x36,*(undefined4 *)(*piVar3 + 0x38));
        piVar3 = *(int **)(iVar6 + 0xa8);
        iVar6 = func_0x080d3914(piVar3,iVar2 + 0x36,*(undefined4 *)(*piVar3 + 0x40));
        if ((iVar6 != 0) &&
           (cVar1 = func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x28)),
           cVar1 == '\0')) {
          func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x20));
        }
        func_0800D074(&sStack_20,*piVar4 + 0x5f0,iVar2);
        if (iVar6 != 0) {
          func_0801FE78(iVar6,0x25,(int)sStack_20,(int)sStack_1e);
        }
      }
      break;
    case 0x8016a02:
      piVar4 = (int *)(iVar6 + 0x8c);
      iVar2 = func_0800C6D8(*piVar4 + 0x410);
      if (iVar2 != -1) {
        func_0x0800cbc0(*piVar4 + 0x410);
        piVar3 = *(int **)(iVar6 + 0xa8);
        func_0x080d3914(piVar3,iVar2 + 0x2e,*(undefined4 *)(*piVar3 + 0x38));
        piVar3 = *(int **)(iVar6 + 0xa8);
        iVar6 = func_0x080d3914(piVar3,iVar2 + 0x2e,*(undefined4 *)(*piVar3 + 0x40));
        if ((iVar6 != 0) &&
           (cVar1 = func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x28)),
           cVar1 == '\0')) {
          func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x20));
        }
        func_0800C6F0(&sStack_1c,*piVar4 + 0x410,iVar2);
        if (iVar6 != 0) {
          func_0801FE78(iVar6,0x11,(int)sStack_1c,(int)sStack_1a);
        }
      }
      break;
    case 0x8016a92:
      puVar5 = (undefined4 *)(iVar6 + 0xa8);
      iVar6 = func_0x080d3914((int *)*puVar5,0x2b,*(undefined4 *)(*(int *)*puVar5 + 0x40));
      if (iVar6 == 0) {
        func_0x080d3914((int *)*puVar5,0x2b,*(undefined4 *)(*(int *)*puVar5 + 0x38));
        iVar6 = func_0x080d3914((int *)*puVar5,0x2b,*(undefined4 *)(*(int *)*puVar5 + 0x40));
        if ((iVar6 != 0) &&
           (cVar1 = func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x28)),
           cVar1 == '\0')) {
          func_0x080d3910(iVar6,*(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x20));
        }
        if (iVar6 != 0) {
          func_0801FE78(iVar6,2,0x17e,0x52);
        }
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08016AFC @ 0x08016AFC
// =============================================================================
undefined8 func_08016AFC(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  if (4 < param_2) goto LAB_08016b4a;
  switch(*(uint *)(PTR_case_08016B14_08016b10 + param_2 * 4) & 0xfffffffe) {
  case 0x8016b14:
    iVar2 = _UNK_00000038;
  case 0x8016b28:
    if (((*(byte *)(*(int *)(iVar2 + 0x8c) + _DAT_08016b50) & 2) == 0) &&
       ((*(byte *)(*(int *)(iVar2 + 0x8c) + _DAT_08016b54) & 4) == 0)) {
LAB_08016b4a:
      uVar1 = 0xffffffff;
    }
    else {
LAB_08016b70:
      uVar1 = 0;
    }
    break;
  case 0x8016b58:
    uVar1 = 0xffffffff;
    if ((*(byte *)(*(int *)(iVar2 + 0x8c) + _DAT_08016b74) & 0x10) == 0) break;
    goto LAB_08016b70;
  case 0x8016b78:
    uVar1 = func_0800D058(*(int *)(iVar2 + 0x8c) + 0x5f0);
    break;
  case 0x8016b8a:
    uVar1 = func_0800C6D8(*(int *)(iVar2 + 0x8c) + 0x410);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_08016BA4 @ 0x08016BA4
// =============================================================================
undefined4 func_08016BA4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x10c));
  return in_lr;
}

// =============================================================================
// Function: func_08016BC0 @ 0x08016BC0
// =============================================================================
undefined4 func_08016BC0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x110));
  return in_lr;
}

// =============================================================================
// Function: func_08016BDC @ 0x08016BDC
// =============================================================================
undefined4 func_08016BDC(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0xfc));
  return in_lr;
}

// =============================================================================
// Function: func_08016BF4 @ 0x08016BF4
// =============================================================================
undefined4 func_08016BF4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x100));
  return in_lr;
}

// =============================================================================
// Function: func_08016C10 @ 0x08016C10
// =============================================================================
undefined4 func_08016C10(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3910(piVar1,*(undefined4 *)(*piVar1 + 0x104));
  return in_lr;
}

// =============================================================================
// Function: func_08016C2C @ 0x08016C2C
// =============================================================================
undefined4 func_08016C2C(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,0x5d,*(undefined4 *)(*piVar1 + 0x40));
  func_080387B8();
  return in_lr;
}

// =============================================================================
// Function: func_08016C48 @ 0x08016C48
// =============================================================================
undefined4 func_08016C48(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar2 + 0xa8);
  func_0x080d3914(piVar1,0x5d,*(undefined4 *)(*piVar1 + 0x40));
  func_080387C8();
  *(undefined4 *)(iVar2 + 0x9c) = 0x1c;
  return in_lr;
}

// =============================================================================
// Function: func_08016C6C @ 0x08016C6C
// =============================================================================
undefined4 func_08016C6C(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,0x5d,*(undefined4 *)(*piVar1 + 0x40));
  func_080387EC();
  return in_lr;
}

// =============================================================================
// Function: func_08016C88 @ 0x08016C88
// =============================================================================
undefined4 func_08016C88(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar2 + 0xa8);
  func_0x080d3914(piVar1,0x5d,*(undefined4 *)(*piVar1 + 0x40));
  func_080387FC();
  *(undefined4 *)(iVar2 + 0x9c) = 0x1b;
  return in_lr;
}

// =============================================================================
// Function: func_08016CAC @ 0x08016CAC
// =============================================================================
undefined4 func_08016CAC(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xa8));
  return in_lr;
}

// =============================================================================
// Function: func_08016CCC @ 0x08016CCC
// =============================================================================
undefined4 func_08016CCC(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0xac));
  return in_lr;
}

// =============================================================================
// Function: func_08016CEC @ 0x08016CEC
// =============================================================================
undefined4 func_08016CEC(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 0xa8);
  piVar2 = (int *)*puVar4;
  func_0x080d3914(piVar2,param_2,*(undefined4 *)(*piVar2 + 0x38));
  piVar2 = (int *)*puVar4;
  iVar3 = func_0x080d3914(piVar2,param_2,*(undefined4 *)(*piVar2 + 0x40));
  if ((iVar3 != 0) &&
     (cVar1 = func_0x080d3910(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x28)), cVar1 == '\0'))
  {
    func_0x080d3910(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x20));
  }
  return in_lr;
}

// =============================================================================
// Function: func_08016D34 @ 0x08016D34
// =============================================================================
undefined4 func_08016D34(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x3c));
  return in_lr;
}

// =============================================================================
// Function: func_08016D48 @ 0x08016D48
// =============================================================================
void func_08016D48(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar5 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(iVar5 + 0xa8);
  iVar3 = func_0x080d3914(piVar2,0,*(undefined4 *)(*piVar2 + 0x40));
  iVar4 = *_DAT_08016d7c;
  uVar1 = *(ushort *)(iVar3 + 4);
  iVar3 = *(int *)(iVar5 + 0x8c);
  *(undefined1 *)(iVar4 + 0x36c) = 1;
  *(uint *)(iVar4 + 0x370) = (uint)uVar1;
  *(undefined2 *)(iVar4 + 0x374) = *(undefined2 *)(iVar3 + 0x12);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_08016DB0 @ 0x08016DB0
// =============================================================================
undefined4 func_08016DB0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_34 [4];
  ushort uStack_30;
  char cStack_2e;
  char cStack_2c;
  undefined1 auStack_1c [4];
  
  iVar5 = *(int *)(param_1 + 4);
  iVar1 = func_0x080d3914(*(int **)(iVar5 + 0xa8),0,*(undefined4 *)(**(int **)(iVar5 + 0xa8) + 0x40)
                         );
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar3 = func_0809AAD4(*(int *)(iVar5 + 0x8c) + _DAT_08016e30);
  uVar4 = func_0x080d11e4();
  iVar3 = func_0x080d0f4e(uVar4,iVar3 + 2);
  if (iVar3 == 0) {
    func_0x0800dca8(auStack_34,0x3f);
  }
  else if (iVar3 == 1) {
    func_0x0800dca8(auStack_34,0x40);
  }
  else {
    func_0809AB08(&uStack_30,*(int *)(iVar5 + 0x8c) + _DAT_08016e30,iVar3 + -2);
    if (uStack_30 == 0) {
      func_0x0800dca8(auStack_34,0x40);
    }
    else {
      func_0x0800dca8(auStack_1c,uStack_30 - 1);
      func_0800DE0C(auStack_1c,(int)cStack_2e,(int)cStack_2c);
      memcpy(auStack_34,auStack_1c,3);
    }
  }
  memcpy(auStack_34,auStack_34,3);
  func_0x080d3914(iVar1,auStack_34,*(undefined4 *)(iVar2 + 0x58));
  *(undefined4 *)(iVar5 + 0x9c) = 0x19;
  return in_lr;
}

// =============================================================================
// Function: func_08016E7C @ 0x08016E7C
// =============================================================================
undefined4 func_08016E7C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x6c));
  return in_lr;
}

// =============================================================================
// Function: func_08016E9C @ 0x08016E9C
// =============================================================================
undefined4 func_08016E9C(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3910(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x70));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return in_lr;
}

// =============================================================================
// Function: func_08016EC4 @ 0x08016EC4
// =============================================================================
undefined4 func_08016EC4(void)

{
  undefined4 in_lr;
  
  func_0x080d391c();
  return in_lr;
}

// =============================================================================
// Function: func_08016EF0 @ 0x08016EF0
// =============================================================================
undefined4 func_08016EF0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  func_0x080d3914(piVar1,param_2,*(undefined4 *)(*piVar1 + 0x164));
  return in_lr;
}

// =============================================================================
// Function: func_08016F0C @ 0x08016F0C
// =============================================================================
undefined4 func_08016F0C(int param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3914(iVar2,param_2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x9c));
  return in_lr;
}

// =============================================================================
// Function: func_08016F34 @ 0x08016F34
// =============================================================================
undefined4 func_08016F34(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  piVar1 = *(int **)(iVar3 + 0xa8);
  iVar2 = func_0x080d3914(piVar1,0,*(undefined4 *)(*piVar1 + 0x40));
  func_0x080d3914(iVar2,param_2,*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x74));
  *(undefined4 *)(iVar3 + 0x9c) = 0x19;
  return in_lr;
}

// =============================================================================
// Function: func_08016F60 @ 0x08016F60
// =============================================================================
undefined4 func_08016F60(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar5 = 0x2e;
  do {
    piVar3 = *(int **)(iVar2 + 0xa8);
    iVar4 = func_0x080d3914(piVar3,uVar5,*(undefined4 *)(*piVar3 + 0x40));
    if ((iVar4 != 0) &&
       (cVar1 = func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x5c)), cVar1 != '\0'
       )) {
      func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x7c));
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x46);
  return in_lr;
}

// =============================================================================
// Function: func_08016FA4 @ 0x08016FA4
// =============================================================================
undefined4
func_08016FA4(int param_1,int param_2,int param_3,uint param_4,uint param_5,undefined1 param_6)

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
  
  iStack_24 = *(int *)(param_1 + 4);
  iStack_28 = param_2;
  if (param_2 < 0x4a) {
    iVar4 = func_0x080d3914(*(int **)(iStack_24 + 0xa8),param_2,
                            *(undefined4 *)(**(int **)(iStack_24 + 0xa8) + 0x40));
    if (iVar4 != 0) {
      uVar3 = (ushort)_DAT_08017058;
      uVar2 = (ushort)_DAT_0801705c;
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
    iVar4 = func_0x080d3914(*(int **)(iStack_24 + 0xa8),param_2,
                            *(undefined4 *)(**(int **)(iStack_24 + 0xa8) + 0x40));
    if (iVar4 != 0) {
      uVar3 = (ushort)_DAT_08017138;
      uVar2 = (ushort)_DAT_0801713c;
      uVar1 = uVar2 & uStack_38 | (ushort)param_3 & uVar3;
      uStack_38._1_1_ = (byte)(uVar1 >> 8);
      uStack_38 = CONCAT11(uStack_38._1_1_ & 3 | (byte)((param_4 & 0x3f) << 2),(char)uVar1);
      uVar1 = uVar2 & uStack_36 | (ushort)((param_4 & 0xffff) >> 6) & uVar3;
      uStack_36._1_1_ = (byte)(uVar1 >> 8);
      uStack_36 = CONCAT11(uStack_36._1_1_ & 3 | (byte)((param_5 & 0x3f) << 2),(char)uVar1);
      uStack_34 = uVar2 & uStack_34 | (ushort)((param_5 & 0xffff) >> 6) & uVar3;
      func_0801FE78(iVar4,uStack_38 & 0x3ff,
                    (int)(short)((ushort)((uStack_36 & _DAT_08017138) << 6) |
                                (ushort)(param_4 & 0x3f)),
                    (int)(short)((ushort)((uStack_34 & _DAT_08017138) << 6) |
                                (ushort)(param_5 & 0x3f)));
      func_0x080d3910(iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0x20));
    }
  }
  if (iStack_28 == 0) {
    if (param_3 == 0x19) {
      func_080A0A90(*(int *)(iStack_24 + 0x8c) + _DAT_08017140);
    }
    iVar4 = 0;
    if (param_3 - 0x35U < 0xff) {
      iVar4 = param_3 + -0x34;
    }
    else if ((uint)(_DAT_08017174 + param_3) < 0xff) {
      iVar4 = _DAT_08017178 + param_3;
    }
    if (0 < iVar4) {
      func_0800EECC(*(int *)(iStack_24 + 0x8c) + _DAT_0801717c);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_08017180 @ 0x08017180
// =============================================================================
undefined4 func_08017180(int param_1,uint param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 in_lr;
  
  if ((((param_1 != 0) && (param_2 != 0)) &&
      (pbVar5 = *(byte **)(param_3 + 0x14), pbVar5 != (byte *)0x0)) &&
     ((iVar2 = *(int *)(param_3 + 0x10), iVar2 != 0 &&
      (uVar8 = (uint)*param_3, param_4 + uVar8 <= param_2)))) {
    puVar7 = (undefined4 *)(param_1 + param_4 * 4 + param_2 * param_5 * 4);
    bVar1 = param_3[1];
    uVar3 = 0;
    if (bVar1 != 0) {
      do {
        uVar4 = 0;
        uVar3 = uVar3 + 1;
        puVar6 = puVar7;
        if (uVar8 != 0) {
          do {
            *puVar6 = *(undefined4 *)((uint)*pbVar5 * 4 + iVar2);
            pbVar5 = pbVar5 + 1;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar4 < uVar8);
        }
        puVar7 = puVar7 + param_2;
      } while (uVar3 < bVar1);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801740C @ 0x0801740C
// =============================================================================
undefined8 func_0801740C(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_r4;
  undefined4 in_lr;
  
  uVar3 = ((*param_1 & 0xff) >> 2) - 0x1b;
  if (0xb < uVar3) goto case_08017458;
  switch(*(uint *)(PTR_case_08017428_08017424 + uVar3 * 4) & 0xfffffffe) {
  case 0x8017428:
    uVar1 = (undefined1)*(uint *)(PTR_case_08017428_08017424 + uVar3 * 4);
    *(undefined1 *)(param_4 + 0x11) = uVar1;
    uVar2 = (undefined1)unaff_r4;
    *(undefined1 *)(param_4 + 0x11) = uVar2;
    *(undefined1 *)(unaff_r4 + 0x11) = uVar1;
    *(undefined1 *)(unaff_r4 + 0x11) = uVar2;
    *(undefined1 *)(param_4 + 0x11) = uVar1;
    *(undefined1 *)(param_4 + 0x11) = uVar2;
    *(undefined1 *)(unaff_r4 + 0x11) = uVar1;
    *(undefined1 *)(unaff_r4 + 0x11) = uVar2;
    *(undefined1 *)(param_4 + 0x11) = uVar1;
    *(undefined1 *)(param_4 + 0x11) = uVar2;
    *(undefined1 *)(unaff_r4 + 0x11) = uVar1;
    *(undefined1 *)(unaff_r4 + 0x11) = uVar2;
  case 0x8017458:
case_08017458:
    uVar4 = 0;
    break;
  case 0x801745c:
    uVar4 = 1;
    break;
  case 0x8017460:
    uVar4 = 2;
    break;
  case 0x8017464:
    uVar4 = 3;
  }
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_0801746C @ 0x0801746C
// =============================================================================
undefined8 func_0801746C(uint *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 unaff_r4;
  int unaff_r7;
  undefined4 in_lr;
  
  uVar2 = ((*param_1 & 0xff) >> 2) - 0x1b;
  if (0xb < uVar2) goto case_080174B8;
  uVar2 = *(uint *)(PTR_case_08017488_08017484 + uVar2 * 4);
  switch(uVar2 & 0xfffffffe) {
  case 0x8017488:
    uVar1 = (undefined1)uVar2;
    *(undefined1 *)(unaff_r7 + 0x12) = uVar1;
    *(undefined1 *)(unaff_r7 + 0x12) = uVar1;
    *(undefined1 *)(unaff_r7 + 0x12) = uVar1;
    *(undefined1 *)(unaff_r7 + 0x12) = uVar1;
    *(undefined1 *)(unaff_r7 + 0x12) = unaff_r4;
    *(undefined1 *)(unaff_r7 + 0x12) = unaff_r4;
    *(undefined1 *)(unaff_r7 + 0x12) = unaff_r4;
    *(undefined1 *)(unaff_r7 + 0x12) = unaff_r4;
    *(undefined1 *)(uVar2 + 0x13) = uVar1;
    *(undefined1 *)(uVar2 + 0x13) = uVar1;
    *(undefined1 *)(uVar2 + 0x13) = uVar1;
    *(undefined1 *)(uVar2 + 0x13) = uVar1;
  case 0x80174b8:
case_080174B8:
    uVar3 = 0;
    break;
  case 0x80174bc:
    uVar3 = 1;
    break;
  case 0x80174c0:
    uVar3 = 2;
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_080174C8 @ 0x080174C8
// =============================================================================
undefined8
func_080174C8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             int param_5,char param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  int aiStack_30 [2];
  short sStack_28;
  short sStack_26;
  
  func_080A1CBC(aiStack_30,param_2);
  iVar2 = 0;
  if (param_6 == '\0') {
    if (aiStack_30[0] != 0x12) {
      if (aiStack_30[0] != 0x15) goto LAB_080175a0;
      iVar2 = 1;
    }
LAB_08017514:
    param_7[0x10] = 0;
    if ((0 < param_5 - iVar2) &&
       (((aiStack_30[0] == 0x12 || (func_080A1FC4(param_2,param_3), aiStack_30[0] == 0x12)) ||
        (iVar2 = func_080A1EF4(param_2,param_3), iVar2 == 0)))) {
      func_080A1C94(param_2,param_3,param_4);
      *param_7 = 1;
      *(int *)(param_7 + 8) = (int)sStack_28;
      *(int *)(param_7 + 0xc) = (int)sStack_26;
      if (aiStack_30[0] == 0x13) {
        uVar1 = 6;
LAB_08017598:
        *(undefined4 *)(param_7 + 4) = uVar1;
      }
      else {
        if (0x13 < aiStack_30[0]) {
          if (aiStack_30[0] == 0x14) {
            uVar1 = 9;
          }
          else {
            if (aiStack_30[0] != 0x15) goto LAB_0801759c;
            Farm_AddLumber(param_1,6);
            uVar1 = 7;
          }
          goto LAB_08017598;
        }
        if (aiStack_30[0] == 0x12) {
          Farm_AddLumber(param_1,1);
          uVar1 = 4;
          goto LAB_08017598;
        }
      }
LAB_0801759c:
      uVar1 = 1;
      goto LAB_080175a2;
    }
  }
  else {
    if (aiStack_30[0] == 0x13) {
      iVar2 = 2;
      goto LAB_08017514;
    }
    if (aiStack_30[0] == 0x14) {
      iVar2 = 7;
      goto LAB_08017514;
    }
  }
LAB_080175a0:
  uVar1 = 0;
LAB_080175a2:
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_080175B4 @ 0x080175B4
// =============================================================================
undefined8
func_080175B4(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4,byte param_5)

{
  undefined2 uVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  byte *pbVar11;
  undefined4 in_lr;
  int iStack_4c;
  undefined1 auStack_48 [8];
  undefined2 *apuStack_40 [2];
  int iStack_38;
  int *piStack_34;
  uint uStack_30;
  uint uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  uStack_30 = (uint)param_5;
  *param_1 = _DAT_08017834;
  *param_1 = _DAT_08017838;
  iStack_4c = *param_4;
  *param_4 = 0;
  iStack_38 = param_2;
  piStack_34 = param_4;
  func_080AC674(param_1 + 1,&iStack_4c);
  piVar4 = (int *)(_DAT_0801783c + (int)param_1);
  *piVar4 = iStack_38;
  *(undefined1 *)((int)param_1 + _DAT_08017840) = 0;
  iVar7 = *piVar4;
  param_1[0x410] = iVar7 + 0x10;
  *(undefined1 *)(param_1 + 0x411) = 0;
  puVar8 = (undefined4 *)(_DAT_08017844 + (int)param_1);
  uVar5 = func_0801A8C0(param_1,(*(uint *)(iVar7 + 0x10) & 0x1fffff) >> 0x10);
  *puVar8 = uVar5;
  uVar9 = *(uint *)param_1[0x410];
  uVar5 = func_0800E324(*piVar4 + 0x10);
  uVar2 = func_080A4650((uVar9 & 0x1fffff) >> 0x10,(uVar9 & 0x7ffffff) >> 0x15,uVar5,*puVar8);
  *(undefined1 *)((int)param_1 + _DAT_08017848) = uVar2;
  puVar8 = (undefined4 *)((int)param_1 + _DAT_0801784c);
  uVar5 = func_080005E4(0xb000);
  *puVar8 = uVar5;
  *(undefined4 *)((int)param_1 + _DAT_08017850) = param_3;
  iVar7 = _DAT_08017854;
  *(undefined4 *)((int)param_1 + _DAT_08017854) = 0;
  *(undefined4 *)((int)param_1 + _DAT_08017858) = 0;
  *(undefined4 *)((int)param_1 + iVar7 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + _DAT_0801785c) = 0;
  puVar8 = (undefined4 *)((int)param_1 + iVar7 + 0x14);
  iVar7 = 1;
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  puVar8 = (undefined4 *)((int)param_1 + _DAT_08017860);
  iVar7 = 1;
  piVar4 = (int *)(_DAT_08017864 + (int)param_1);
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  *(undefined4 *)((int)param_1 + _DAT_08017864) = 0;
  puVar8 = param_1 + 0x420;
  iVar7 = 3;
  do {
    *(byte *)((int)puVar8 + 1) = *(byte *)((int)puVar8 + 1) & 0xfc;
    puVar8[2] = 0;
    puVar8 = puVar8 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  puVar8 = (undefined4 *)((int)param_1 + _DAT_08017868);
  iVar7 = 5;
  do {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != -1);
  *(undefined1 *)((int)param_1 + _DAT_0801786c) = 0;
  uVar5 = param_1[1];
  piVar10 = (int *)((int)param_1 + _DAT_0801783c);
  func_0800E924(auStack_48,*piVar10 + _DAT_08017870);
  func_080A56DC(uVar5,auStack_48,*(undefined4 *)((int)param_1 + _DAT_08017844),
                (uint)*(byte *)((int)param_1 + _DAT_08017848),
                0x1e - (uint)*(byte *)((int)param_1 + _DAT_08017848));
  if (*(int *)param_1[1] != 2) {
    uVar5 = *(undefined4 *)((int)param_1 + _DAT_0801784c);
    iVar7 = *piVar10;
    iVar6 = func_0800E324(iVar7 + 0x10);
    func_080171F8(uVar5,iVar7 + 0x14,iVar6 == 3);
  }
  if ((uStack_30 != 0) &&
     ((cVar3 = func_0x0809c5f4(*(int *)((int)param_1 + _DAT_0801783c) + _DAT_08017874),
      cVar3 == '\0' ||
      (cVar3 = func_080167CC(*(undefined4 *)((int)param_1 + _DAT_08017850)), cVar3 == '\0')))) {
    func_0801DB58(param_1);
  }
  uVar5 = func_080005D4(0xa0);
  iVar7 = ScriptEngine_Construct(uVar5,param_1);
  piVar10 = (int *)((int)param_1 + _DAT_08017878);
  iVar6 = *piVar10;
  if ((iVar7 != iVar6) && (iVar6 != 0)) {
    ScriptEngine_Destruct(iVar6,3);
  }
  *piVar10 = iVar7;
  piVar10 = (int *)((int)param_1 + _DAT_0801787c);
  iVar7 = *piVar10;
  if ((iVar7 != 0) && (iVar7 != 0)) {
    func_080AB2E4(iVar7,3);
  }
  *piVar10 = 0;
  uVar5 = func_080005D4(4);
  iVar7 = func_080AAFC8(uVar5,param_1,*(undefined4 *)(param_1[1] + 4));
  piVar10 = (int *)((int)param_1 + _DAT_0801787c);
  iVar6 = *piVar10;
  if ((iVar7 != iVar6) && (iVar6 != 0)) {
    func_080AB2E4(iVar6,3);
  }
  *piVar10 = iVar7;
  uVar9 = 0;
  do {
    func_0801A8E0(param_1,uVar9);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 100);
  iVar7 = *piVar4;
  if ((iVar7 != 0) && (iVar7 != 0)) {
    func_0x0803b0a8(iVar7,3);
  }
  *piVar4 = 0;
  iVar7 = func_0x080a4698(*(undefined4 *)(param_1[1] + 4));
  if (*(char *)(iVar7 + 0x24) != '\0') goto LAB_080178ae;
  iVar7 = *(int *)param_1[1];
  if (iVar7 == 0x2e) {
    iVar7 = 1;
  }
  else if (iVar7 < 0x2f) {
    if (iVar7 < 0x2c) goto LAB_08017890;
    iVar7 = 0;
  }
  else if (iVar7 == 0x2f) {
    iVar7 = 2;
  }
  else {
LAB_08017890:
    iVar7 = *(int *)(*(int *)((int)param_1 + _DAT_0801783c) + 8);
  }
  if (iVar7 == 1) {
    func_0801FAC8(param_1,1);
  }
  else if (iVar7 == 2) {
    func_0801FAC8(param_1,0);
  }
LAB_080178ae:
  func_0801F14C(param_1);
  func_0801F3E4(param_1);
  func_0801F2DC(param_1);
  func_0801F614(param_1);
  func_0801F77C(param_1);
  uStack_2c = 0;
  piStack_28 = (int *)((int)param_1 + _DAT_080179b8);
  pbVar11 = (byte *)(*_DAT_080179b4 + _DAT_080179bc);
  do {
    if (((*pbVar11 & 3) == 1) && ((*(ushort *)(pbVar11 + 2) & 0x3ff) == *(uint *)param_1[1])) {
      piVar4 = (int *)((int)param_1 + uStack_2c * 4 + _DAT_080179c0);
      iVar7 = func_080005D4(0x4c);
      uVar1 = *(undefined2 *)(pbVar11 + 8);
      func_080A4740(iVar7,param_1,2,0x1b);
      *(undefined4 *)(iVar7 + 0x24) = _DAT_080179c4;
      iStack_24 = iVar7 + 0x28;
      iVar6 = *piStack_28;
      func_0x080d3918(apuStack_40,piStack_28,uVar1,*(undefined4 *)(iVar6 + 0xc));
      func_0x080d3918(iStack_24,piStack_28,*apuStack_40[0],*(undefined4 *)(iVar6 + 0x10));
      *(undefined1 *)(iVar7 + 0x48) = 1;
      iVar6 = *piVar4;
      if ((iVar7 != iVar6) && (iVar6 != 0)) {
        func_0x080d3914(iVar6,3,*(undefined4 *)(*(int *)(iVar6 + 0x24) + 8));
      }
      *piVar4 = iVar7;
    }
    pbVar11 = pbVar11 + 0xc;
    uStack_2c = uStack_2c + 1;
  } while (uStack_2c < 6);
  if (*(char *)(iStack_38 + _DAT_080179c8) != '\0') {
    func_0801D8CC(param_1);
    func_0801D948(param_1);
  }
  iVar7 = *piStack_34;
  if (iVar7 != 0) {
    func_0x080d3914(iVar7,3,*(undefined4 *)(*(int *)(iVar7 + 0x90) + 8));
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_080179CC @ 0x080179CC
// =============================================================================
undefined4 func_080179CC(undefined4 *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *param_1 = _DAT_08017a50;
  if (*(char *)((int)param_1 + _DAT_08017a54) != '\0') {
    piVar4 = (int *)((int)param_1 + _DAT_08017a58);
    func_0x0800ed2c(*piVar4 + _DAT_08017a5c);
    iVar8 = *piVar4 + _DAT_08017a60;
    if (*(char *)((int)param_1 + _DAT_08017a64) == '\0') {
      piVar4 = (int *)func_0801DB44(param_1);
      puVar7 = (undefined4 *)piVar4[1];
      for (puVar5 = (undefined4 *)*piVar4; puVar5 != puVar7; puVar5 = puVar5 + 1) {
        cVar1 = func_0x08008cd0(*puVar5);
        if (cVar1 == '\0') {
          uVar2 = *puVar5;
          goto LAB_08017a28;
        }
      }
      uVar2 = puVar7[-1];
LAB_08017a28:
      func_08008B6C(uVar2,0x6d);
      iVar3 = func_080A45A8(iVar8);
      if (iVar3 == 2) {
        uStack_20 = _DAT_08017abc;
        uStack_1c = 0;
        func_0801D9A8(param_1,&uStack_20,0);
      }
      else {
        func_0x080a1484(*(int *)((int)param_1 + _DAT_08017a58) + _DAT_08017a68,iVar8,
                        *(int *)((int)param_1 + _DAT_08017a58) + _DAT_08017a6c);
      }
    }
  }
  if (*(int *)((int)param_1 + _DAT_08017ac0) != 0) {
    func_08000614();
  }
  piVar4 = (int *)((int)param_1 + _DAT_08017ac4);
  if (piVar4 != (int *)0x0) {
    piVar6 = (int *)((int)param_1 + _DAT_08017ac8);
    while (piVar4 != piVar6) {
      piVar6 = piVar6 + -1;
      iVar8 = *piVar6;
      if (iVar8 != 0) {
        func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
      }
    }
  }
  if ((param_1 != (undefined4 *)0xffffef80) && (param_1 + 0x420 != param_1 + 0x42c)) {
    puVar5 = param_1 + 0x42c;
    do {
      puVar7 = puVar5 + -3;
      iVar8 = puVar5[-1];
      if (iVar8 != 0) {
        func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
      }
      puVar5 = puVar7;
    } while (param_1 + 0x420 != puVar7);
  }
  piVar4 = (int *)((int)param_1 + _DAT_08017be0);
  if (*piVar4 != 0) {
    func_0x0803b0a8(*piVar4,3);
  }
  piVar6 = (int *)((int)param_1 + _DAT_08017be4);
  if (piVar6 != (int *)0x0) {
    while (piVar6 != piVar4) {
      piVar4 = piVar4 + -1;
      iVar8 = *piVar4;
      if (iVar8 != 0) {
        func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
      }
    }
  }
  if (((int *)((int)param_1 + _DAT_08017be8) != (int *)0x0) &&
     (piVar4 = (int *)((int)param_1 + _DAT_08017be8 + 8),
     (int *)((int)param_1 + _DAT_08017be8) != piVar4)) {
    piVar6 = (int *)((int)param_1 + _DAT_08017be8);
    do {
      piVar4 = piVar4 + -1;
      iVar8 = *piVar4;
      if (iVar8 != 0) {
        func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
      }
    } while (piVar6 != piVar4);
  }
  iVar8 = *(int *)((int)param_1 + _DAT_08017bec);
  if (iVar8 != 0) {
    func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
  }
  iVar8 = *(int *)((int)param_1 + _DAT_08017bf0);
  if (iVar8 != 0) {
    func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
  }
  iVar8 = *(int *)((int)param_1 + _DAT_08017bf4);
  if (iVar8 != 0) {
    func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
  }
  iVar8 = *(int *)((int)param_1 + _DAT_08017bf8);
  if (iVar8 != 0) {
    func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
  }
  func_080AC85C(param_1 + 1,2);
  *param_1 = _DAT_08017bfc;
  if ((param_2 & 1) != 0) {
    func_08000608(param_1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08017C00 @ 0x08017C00
// =============================================================================
undefined8 func_08017C00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + _DAT_08017c24) == '\0') &&
     (iVar1 = func_0x080a4698(*(undefined4 *)(*(int *)(param_1 + 4) + 4)),
     *(char *)(iVar1 + 0x24) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_08017C30 @ 0x08017C30
// =============================================================================
undefined4 func_08017C30(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  byte bVar13;
  int *piVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 in_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  piVar14 = (int *)(_DAT_08017d74 + (int)param_1);
  puStack_34 = param_2;
  iStack_30 = func_0x0800e4fc(*piVar14 + _DAT_08017d78);
  if (*(char *)(_DAT_08017d7c + (int)param_1) != '\0') {
    *(char *)(_DAT_08017d7c + (int)param_1) = '\0';
    func_0x080d3914(param_1,0x4b,*(undefined4 *)(*param_1 + 0x3c));
    func_0x0800ed2c(*piVar14 + _DAT_08017d78);
    iVar8 = *piVar14 + _DAT_08017d80;
    if (*(char *)(_DAT_08017d84 + (int)param_1) == '\0') {
      piVar14 = (int *)func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14c));
      puVar16 = (undefined4 *)piVar14[1];
      for (puVar10 = (undefined4 *)*piVar14; puVar10 != puVar16; puVar10 = puVar10 + 1) {
        cVar5 = func_0x08008cd0(*puVar10);
        if (cVar5 == '\0') {
          uVar6 = *puVar10;
          goto LAB_08017cbe;
        }
      }
      uVar6 = puVar16[-1];
LAB_08017cbe:
      func_08008B6C(uVar6,0x6d);
      iVar9 = func_080A45A8(iVar8);
      if (iVar9 == 2) {
        uStack_4c = _DAT_08017e48;
        uStack_48 = 0;
        func_0x080d3918(param_1,&uStack_4c,0,*(undefined4 *)(*param_1 + 0x140));
      }
      else {
        func_0x080a1484(*(int *)(_DAT_08017d74 + (int)param_1) + _DAT_08017d88,iVar8,
                        *(int *)(_DAT_08017d74 + (int)param_1) + _DAT_08017d8c);
        uStack_50 = CONCAT22((ushort)((*(ushort *)(iVar8 + 4) & _DAT_08017d90) << 6) |
                             (ushort)(*(byte *)(iVar8 + 3) >> 2),
                             (ushort)((*(ushort *)(iVar8 + 2) & _DAT_08017d90) << 6) |
                             (ushort)(*(byte *)(iVar8 + 1) >> 2));
        uVar6 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 100));
        piVar14 = (int *)(_DAT_08017d94 + (int)param_1);
        piVar14[1] = uStack_50;
        iVar8 = *piVar14;
        if ((iVar8 != 0) && (iVar8 != 0)) {
          func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
        }
        *piVar14 = 0;
        *(undefined1 *)(piVar14 + 2) = 0;
        uVar7 = func_080005D4(0x40);
        iVar8 = func_080A4A00(uVar7,uVar6,_DAT_08017d98,param_1,2,3,0);
        iVar9 = *piVar14;
        if ((iVar8 != iVar9) && (iVar9 != 0)) {
          func_0x080d3914(iVar9,3,*(undefined4 *)(*(int *)(iVar9 + 0x24) + 8));
        }
        *piVar14 = iVar8;
      }
    }
  }
  iVar8 = func_0x080d3914(param_1,0,*(undefined4 *)(*param_1 + 0x40));
  func_0x080d3910(param_1[1],*(undefined4 *)(*(int *)(param_1[1] + 0x90) + 0xc));
  iVar9 = func_0x080a4698(*(undefined4 *)(param_1[1] + 4));
  cVar5 = *(char *)(iVar9 + 0x24);
  uStack_2c = *(uint *)param_1[1];
  uStack_28 = 0;
  if ((((*(char *)(_DAT_08017e4c + (int)param_1) == '\0') &&
       (*(char *)(*(int *)(_DAT_08017e50 + (int)param_1) + _DAT_08017e54) == '\0')) &&
      (cVar5 == '\0')) &&
     (cVar4 = func_0x080d3910(iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x98)), cVar4 == '\0'))
  {
    piVar14 = param_1 + 0x410;
    if (*(byte *)(param_1 + 0x411) + 1 < 0x19) {
      *(char *)(param_1 + 0x411) = (char)(*(byte *)(param_1 + 0x411) + 1);
      bVar3 = false;
    }
    else {
      *(undefined1 *)(param_1 + 0x411) = 0;
      puVar15 = (uint *)*piVar14;
      uVar18 = ((*puVar15 & 0x7ffffff) >> 0x15) + 1;
      uVar2 = (ushort)_DAT_08017f80;
      *(ushort *)((int)puVar15 + 2) =
           uVar2 & *(ushort *)((int)puVar15 + 2) | (ushort)((uVar18 & 0x3f) << 5);
      if (0x3b < (uVar18 & 0x3f)) {
        *(ushort *)(*piVar14 + 2) = uVar2 & *(ushort *)(*piVar14 + 2);
        puVar15 = (uint *)*piVar14;
        uVar18 = ((*puVar15 & 0x1fffff) >> 0x10) + 1 & 0x1f;
        *(byte *)((int)puVar15 + 2) = *(byte *)((int)puVar15 + 2) & 0xe0 | (byte)uVar18;
        if (0x17 < uVar18) {
          *(byte *)(*piVar14 + 2) = *(byte *)(*piVar14 + 2) & 0xe0;
          iVar9 = *piVar14;
          bVar1 = *(byte *)(iVar9 + 1);
          uVar18 = ((bVar1 & 0x7f) >> 2) + 1;
          if (uVar18 == 0x1e) {
            *(byte *)(iVar9 + 1) = bVar1 & 0xfc | (bVar1 & 3) + 1 & 3;
            uVar18 = 0;
          }
          *(byte *)(iVar9 + 1) = *(byte *)(iVar9 + 1) & 0x83 | (byte)((uVar18 & 0x1f) << 2);
          pbVar12 = (byte *)*piVar14;
          if ((pbVar12[1] & 0x7f) == 0) {
            bVar1 = *pbVar12;
            bVar13 = (bVar1 & 7) + 1;
            if (6 < bVar13) {
              bVar13 = 0;
              if (bVar1 >> 3 < 0x1d) {
                *pbVar12 = bVar1 & 7 | ((bVar1 >> 3) + 1) * '\b';
              }
            }
            *pbVar12 = *pbVar12 & 0xf8 | bVar13 & 7;
          }
        }
      }
      bVar3 = true;
    }
    if (bVar3) {
      uVar17 = (*(uint *)param_1[0x410] & 0x1fffff) >> 0x10;
      uVar18 = (*(uint *)param_1[0x410] & 0x7ffffff) >> 0x15;
      if ((uVar17 == 6) && (uVar18 == 0)) {
        cVar4 = func_0x080d3918(iVar8,0,10,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 100));
        if (cVar4 == '\0') {
          uStack_44 = _DAT_08017f84;
          uStack_40 = uVar18;
          func_0x080d3918(param_1,&uStack_44,2,*(undefined4 *)(*param_1 + 0x140));
        }
      }
      else {
        func_0801A13C(param_1,uVar17,uVar18,0);
        if ((uVar17 == 0x14) && (uVar18 == 0)) {
          func_08012464(*(undefined4 *)(_DAT_08017fb4 + (int)param_1),0,0x9e);
          func_0801DB58(param_1);
        }
        else if ((uVar17 == 0) && (uVar18 == 0)) {
          func_0x080d3918(iVar8,0,3,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 100));
        }
        else if ((uVar17 == 2) && (uVar18 == 0)) {
          func_0x080d3918(iVar8,0,4,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 100));
        }
        else if ((uVar17 == 4) && (uVar18 == 0)) {
          func_0x080d3918(iVar8,0,5,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 100));
        }
      }
      uStack_28 = 1;
    }
  }
  uStack_3c = *puStack_34;
  uStack_38 = (undefined1)uStack_28;
  for (piVar14 = param_1 + 2; piVar14 != param_1 + 0x66; piVar14 = piVar14 + 1) {
    iVar8 = *piVar14;
    if (iVar8 != 0) {
      cVar4 = func_0x080d3910(iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x28));
      if (cVar4 == '\0') {
        if ((cVar5 == '\0') || (uStack_2c == *(ushort *)(iVar8 + 4))) {
          func_0x080d3914(iVar8,&uStack_3c,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x18));
        }
      }
      else {
        func_0x080d3914(iVar8,&uStack_3c,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x2c));
      }
    }
  }
  if (*(int *)(_DAT_080180ac + (int)param_1) != 0) {
    ScriptEngine_AllocateStack();
  }
  if (*(int *)(_DAT_080180b0 + (int)param_1) != 0) {
    func_080AB380();
  }
  uVar18 = 0;
  piVar14 = (int *)(_DAT_080180b4 + (int)param_1);
  do {
    iVar8 = *piVar14;
    if (iVar8 != 0) {
      pcVar11 = (char *)(iVar8 + 0x3f);
      if (*pcVar11 == '\0') {
        iVar9 = func_0805E8F0(iVar8 + 0x28);
        if (-1 < iVar9 * 0x40000000) goto LAB_080180bc;
        pcVar11 = (char *)(iVar8 + 0x3c);
        cVar5 = '\x01';
      }
      else {
        cVar5 = '\0';
      }
      *pcVar11 = cVar5;
    }
LAB_080180bc:
    piVar14 = piVar14 + 1;
    uVar18 = uVar18 + 1;
  } while (uVar18 < 2);
  uVar18 = 0;
  piVar14 = (int *)(_DAT_080180f0 + (int)param_1);
  do {
    iVar8 = *piVar14;
    if (iVar8 != 0) {
      pcVar11 = (char *)(iVar8 + 0x3f);
      if (*pcVar11 == '\0') {
        iVar9 = func_0805E8F0(iVar8 + 0x28);
        if (-1 < iVar9 * 0x40000000) goto LAB_080180f8;
        pcVar11 = (char *)(iVar8 + 0x3c);
        cVar5 = '\x01';
      }
      else {
        cVar5 = '\0';
      }
      *pcVar11 = cVar5;
    }
LAB_080180f8:
    piVar14 = piVar14 + 1;
    uVar18 = uVar18 + 1;
    if (1 < uVar18) {
      uVar18 = 0;
      puVar10 = (undefined4 *)(_DAT_08018130 + (int)param_1);
      piVar14 = param_1 + 0x420;
      do {
        bVar1 = *(byte *)((int)piVar14 + 1);
        if ((bVar1 & 3) == 1) {
          uVar17 = (bVar1 & 0xf) >> 2;
          if (uVar17 == 1) {
            cVar5 = (char)*piVar14 + -1;
            *(char *)piVar14 = cVar5;
            if (cVar5 == '\0') {
              *(byte *)((int)piVar14 + 1) = bVar1 & 0xf3 | 8;
              iVar8 = piVar14[2];
              func_0805E860(iVar8 + 0x28,_DAT_080181dc);
              *(undefined1 *)(iVar8 + 0x3c) = 1;
              *(undefined1 *)(iVar8 + 0x3e) = 0;
              *(undefined1 *)(iVar8 + 0x3f) = 1;
            }
          }
          else if (uVar17 < 2) {
            if (uVar17 == 0) {
              iVar8 = piVar14[2];
              if (*(char *)(iVar8 + 0x3f) == '\0') {
                iVar9 = func_0805E8F0(iVar8 + 0x28);
                if (iVar9 * 0x40000000 < 0) {
                  *(undefined1 *)(iVar8 + 0x3c) = 1;
                }
              }
              else {
                *(char *)(iVar8 + 0x3f) = '\0';
                iVar9 = 2;
              }
              if (iVar9 * 0x20000000 < 0) {
                *(byte *)((int)piVar14 + 1) = *(byte *)((int)piVar14 + 1) & 0xf3 | 4;
                iVar8 = piVar14[2];
                func_0805E860(iVar8 + 0x28,_DAT_080181a0);
                *(undefined1 *)(iVar8 + 0x3c) = 1;
                *(undefined1 *)(iVar8 + 0x3e) = 0;
                *(undefined1 *)(iVar8 + 0x3f) = 1;
                *(char *)piVar14 = 'x';
              }
            }
          }
          else if (uVar17 == 2) {
            iVar8 = piVar14[2];
            if (*(char *)(iVar8 + 0x3f) == '\0') {
              iVar9 = func_0805E8F0(iVar8 + 0x28);
              if (iVar9 * 0x40000000 < 0) {
                *(undefined1 *)(iVar8 + 0x3c) = 1;
              }
            }
            else {
              *(char *)(iVar8 + 0x3f) = '\0';
              iVar9 = 2;
            }
            if (iVar9 * 0x20000000 < 0) {
              *(byte *)((int)piVar14 + 1) = *(byte *)((int)piVar14 + 1) & 0xfc;
              iVar8 = piVar14[2];
              if ((iVar8 != 0) && (iVar8 != 0)) {
                func_0x080d3914(iVar8,3,*(undefined4 *)(*(int *)(iVar8 + 0x24) + 8));
              }
              *puVar10 = 0;
            }
          }
        }
        puVar10 = puVar10 + 3;
        piVar14 = piVar14 + 3;
        uVar18 = uVar18 + 1;
      } while (uVar18 < 4);
      if (*(char *)(_DAT_080182b4 + (int)param_1) == '\0') {
        func_080A5960(param_1[1],(int)*(short *)(param_1[2] + 10),(int)*(short *)(param_1[2] + 0xe))
        ;
      }
      piVar14 = (int *)(_DAT_080182b8 + (int)param_1);
      iVar8 = func_0x0800e4fc(*piVar14 + _DAT_080182bc);
      if (((iVar8 != iStack_30) &&
          (cVar5 = func_080167CC(*(undefined4 *)(_DAT_080182c0 + (int)param_1)), cVar5 != '\0')) &&
         (cVar5 = func_0x0809c5f4(*piVar14 + _DAT_080182c4), cVar5 == '\0')) {
        func_0801DB58(param_1);
      }
      return in_lr;
    }
  } while( true );
}

// =============================================================================
// Function: func_080182C8 @ 0x080182C8
// =============================================================================
void func_080182C8(int *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  char *pcVar20;
  int iVar21;
  char *pcVar22;
  undefined4 *puVar23;
  int iVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  int *piVar28;
  int iVar29;
  ushort *puVar30;
  byte *pbVar31;
  int *piVar32;
  undefined4 *puVar33;
  undefined4 uStack_4;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  int *piVar43;
  int *piVar44;
  int *piVar45;
  int *piVar46;
  
  iVar7 = _DAT_080184e4;
  puVar33 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar34 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar35 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar36 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar37 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar38 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar39 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar40 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar41 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  puVar42 = (undefined4 *)(&stack0xffffffe0 + _DAT_080184e4);
  piVar43 = (int *)(&stack0xffffffe0 + _DAT_080184e4);
  piVar44 = (int *)(&stack0xffffffe0 + _DAT_080184e4);
  piVar45 = (int *)(&stack0xffffffe0 + _DAT_080184e4);
  piVar46 = (int *)(&stack0xffffffe0 + _DAT_080184e4);
  *(undefined4 *)(&stack0xffffffe0 + _DAT_080184e8 + _DAT_080184e4) = param_2;
  *(undefined4 *)(&stack0xffffffe0 + _DAT_080184ec + _DAT_080184e4) = 0;
  piVar14 = param_1 + 0x67;
  iVar16 = 0x20;
  uVar11 = *(undefined4 *)(&stack0xffffffe0 + _DAT_080184ec + _DAT_080184e4);
  do {
    *(char *)piVar14 = (char)uVar11;
    iVar16 = iVar16 + -1;
    piVar14 = (int *)((int)piVar14 + 1);
  } while (0 < iVar16);
  pcVar20 = (char *)(*(int *)(_DAT_080184f0 + (int)param_1) + 0x9c);
  if (*pcVar20 != '\0') {
    ScriptEngine_ClearVM(*(int *)(_DAT_080184f0 + (int)param_1),
                  **(undefined4 **)(&stack0xffffffe0 + _DAT_080184e8 + iVar7));
    *pcVar20 = '\0';
  }
  iVar16 = *(int *)(_DAT_080184f4 + (int)param_1);
  if (iVar16 != 0) {
    if (*(char *)(iVar16 + 0xe5) != '\0') {
      ScriptEngine_ParseHeaderChunks(iVar16,**(undefined4 **)(&stack0xffffffe0 + _DAT_080184e8 + iVar7));
      *(char *)(iVar16 + 0xe5) = '\0';
    }
  }
  puVar26 = *(undefined4 **)(&stack0xffffffe0 + _DAT_080184e8 + iVar7);
  func_0x080d391c(param_1[1],*puVar26,puVar26[1],puVar26[3]);
  pcVar20 = (char *)(_DAT_080184f8 + (int)param_1);
  *pcVar20 = (char)param_1[0x36c];
  uVar18 = 0;
  *(int **)(&stack0xffffffe0 + _DAT_080184fc + iVar7) = param_1 + 0x36c;
  *(char **)(&stack0x00000ca0 + iVar7) = pcVar20;
  if (*pcVar20 != '\0') {
    pcVar20 = (char *)(_DAT_08018500 + (int)param_1);
    do {
      if (-1 < *pcVar20) {
        *(undefined1 *)(param_1 + *pcVar20 * 0x21 + 0x8f) = 0xff;
      }
      pcVar20 = pcVar20 + 0xc;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(byte *)((int)param_1 + _DAT_08018504 + 0x19c));
  }
  *(undefined1 *)((int)param_1 + _DAT_08018508 + 0x19c) = 0;
  uVar18 = 0x7c - **(byte **)(*(int *)(&stack0xffffffe0 + _DAT_080184e8 + iVar7) + 8);
  *(uint *)(&stack0x00000c50 + iVar7) = uVar18;
  if (0x80 < uVar18) goto SUB_08019870;
  (&stack0xfffffff4)[iVar7] = 0;
  puVar26 = (undefined4 *)(&stack0xfffffff8 + iVar7);
  iVar16 = 3;
  iVar21 = *param_1;
  *(undefined1 **)(&stack0x00000c90 + iVar7) = &stack0xffffffe0 + _DAT_0801850c + iVar7;
  *(int **)(&stack0xffffffe0 + _DAT_08018510 + iVar7) = param_1 + 0x66;
  *(undefined1 **)(&stack0xffffffe0 + _DAT_08018518 + iVar7) =
       &stack0xffffffe0 + _DAT_08018514 + iVar7;
  do {
    *puVar26 = 0;
    puVar26 = puVar26 + 0x81;
    iVar16 = iVar16 + -1;
  } while (iVar16 != -1);
  uVar9 = func_0x080d3910(param_1,*(undefined4 *)(iVar21 + 0x18));
  uVar10 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
  puVar26 = (undefined4 *)(&stack0xffffffe0 + _DAT_0801851c + iVar7);
  uVar11 = (*(undefined4 **)(&stack0xffffffe0 + _DAT_080184e8 + iVar7))[1];
  *puVar26 = **(undefined4 **)(&stack0xffffffe0 + _DAT_080184e8 + iVar7);
  puVar26[1] = uVar11;
  puVar26[2] = &stack0xfffffff4 + iVar7;
  *(undefined2 *)(puVar26 + 3) = uVar9;
  *(undefined2 *)((int)puVar26 + 0xe) = uVar10;
  *(int **)(&stack0xffffffe0 + _DAT_08018520 + iVar7) = param_1 + 2;
  *(int **)(&stack0xffffffe0 + _DAT_08018524 + iVar7) = param_1 + 2;
  iVar16 = **(int **)(&stack0xffffffe0 + _DAT_08018520 + iVar7);
  if (iVar16 != 0) {
    func_0x080d3914(iVar16,puVar26,*(undefined4 *)(*(int *)(iVar16 + 0x14) + 0x1c));
  }
  if (*(int *)(_DAT_080184f4 + (int)param_1) != 0) {
    ScriptEngine_FreeStack(*(int *)(_DAT_080184f4 + (int)param_1),&stack0xfffffff4 + iVar7);
  }
  if (*(int *)(_DAT_08018528 + (int)param_1) != 0) {
    func_080AB410(*(int *)(_DAT_08018528 + (int)param_1),&stack0xfffffff4 + iVar7,*puVar26);
  }
  uVar11 = puVar26[2];
  *(undefined4 *)(&stack0xffffffe0 + _DAT_0801850c + iVar7) = *puVar26;
  *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4) = uVar11;
  iVar16 = *(int *)(_DAT_0801852c + (int)param_1);
  if (iVar16 != 0) {
    bVar6 = false;
    if (*(char *)(iVar16 + 0x3f) == '\0') {
      iVar21 = func_0805E8F0(iVar16 + 0x28);
      if (iVar21 * 0x40000000 < 0) {
        *(undefined1 *)(iVar16 + 0x3c) = 1;
      }
    }
    else {
      *(char *)(iVar16 + 0x3f) = '\0';
      iVar21 = 2;
    }
    if ((iVar21 * 0x20000000 < 0) && ((char)param_1[0x418] != '\0')) {
      bVar6 = true;
    }
    if (bVar6) {
      *(undefined1 *)(param_1 + 0x418) = 0;
      iVar16 = *(int *)(_DAT_08018598 + (int)param_1);
      func_0805E860(iVar16 + 0x28,1);
      *(undefined1 *)(iVar16 + 0x3c) = 1;
      *(undefined1 *)(iVar16 + 0x3e) = 0;
      *(undefined1 *)(iVar16 + 0x3f) = 1;
    }
    iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (0x1d < iVar16 - 10U) goto case_0801887E;
    switch(*(uint *)((iVar16 - 10U) * 4 + _DAT_0801859c) & 0xfffffffe) {
    case 0x8018618:
      puVar26 = *(undefined4 **)(_DAT_080186a0 + (int)param_1);
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar16 = 0x30 - iVar16;
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      puVar13 = &stack0xffffffe0 + _DAT_080186a4 + iVar7;
      func_0x080d3918(puVar13,(int *)puVar26[10],
                      *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)puVar26[10] + 0x10));
      uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
      uVar11 = *puVar26;
      if (-1 < (int)(-puVar26[2] | puVar26[2])) goto LAB_080186b0;
      goto LAB_0801867c;
    case 0x80186e2:
      puVar26 = *(undefined4 **)(_DAT_0801874c + (int)param_1);
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar16 = 0x68;
      break;
    case 0x8018754:
      puVar26 = *(undefined4 **)(_DAT_0801876c + (int)param_1);
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar16 = 0x18;
      break;
    case 0x8018770:
      puVar26 = *(undefined4 **)(_DAT_08018788 + (int)param_1);
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar16 = 0x38;
      break;
    case 0x801878c:
      puVar26 = *(undefined4 **)(_DAT_08018818 + (int)param_1);
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      puVar13 = &stack0xffffffe0 + _DAT_0801881c + iVar7;
      func_0x080d3918(puVar13,(int *)puVar26[10],
                      *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)puVar26[10] + 0x10));
      uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
      uVar11 = *puVar26;
      if ((int)(-puVar26[2] | puVar26[2]) < 0) {
        uVar3 = *(ushort *)(puVar26 + 3);
        *puVar34 = _DAT_08018820;
        *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
        *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
        *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
        *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
        iVar16 = func_0x080d391c(uVar19,0x68 - iVar16,0x30 - iVar21,0xff);
      }
      else {
        iVar16 = 0;
      }
      if ((iVar16 == 0) || (pcVar20 = (char *)(puVar26 + 0xf), *pcVar20 == '\0'))
      goto case_0801887E;
      func_080A480C(puVar26,*puVar12,puVar13 + 8);
      cVar8 = *(char *)((int)puVar26 + 0x3d);
      goto joined_r0x08018850;
    case 0x801887e:
      goto case_0801887E;
    }
    iVar16 = iVar16 - iVar21;
    iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
    puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
    puVar13 = &stack0xffffffe0 + _DAT_08018750 + iVar7;
    func_0x080d3918(puVar13,(int *)puVar26[10],
                    *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                    *(undefined4 *)(*(int *)puVar26[10] + 0x10));
    uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
    uVar11 = *puVar26;
    if ((int)(-puVar26[2] | puVar26[2]) < 0) {
LAB_0801867c:
      uVar3 = *(ushort *)(puVar26 + 3);
      *puVar33 = _DAT_080186a8;
      *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
      *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
      *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
      *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
      iVar16 = func_0x080d391c(uVar19,iVar16,0x30 - iVar21,0xff);
    }
    else {
LAB_080186b0:
      iVar16 = 0;
    }
    if ((iVar16 != 0) && (pcVar20 = (char *)(puVar26 + 0xf), *pcVar20 != '\0')) {
      func_080A480C(puVar26,*puVar12,puVar13 + 8);
      cVar8 = *(char *)((int)puVar26 + 0x3d);
joined_r0x08018850:
      if (cVar8 == '\0') {
        if (*(char *)((int)puVar26 + 0x3e) == '\0') {
          func_080A4944(puVar26,puVar13 + 0x10,1);
          *(char *)((int)puVar26 + 0x3e) = '\x01';
        }
      }
      else {
        func_080A4944(puVar26,puVar13 + 0x10,1);
      }
      *pcVar20 = '\0';
    }
  }
case_0801887E:
  iVar16 = *(int *)(_DAT_080188ac + (int)param_1);
  if (iVar16 != 0) {
    pcVar20 = (char *)(iVar16 + 0x3f);
    if (*pcVar20 == '\0') {
      iVar21 = func_0805E8F0(iVar16 + 0x28);
      if (iVar21 * 0x40000000 < 0) {
        pcVar20 = (char *)(iVar16 + 0x3c);
        cVar8 = '\x01';
        goto LAB_080188b2;
      }
    }
    else {
      cVar8 = '\0';
LAB_080188b2:
      *pcVar20 = cVar8;
    }
    puVar26 = *(undefined4 **)(_DAT_08018940 + (int)param_1);
    iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
    iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
    puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
    puVar13 = &stack0xffffffe0 + _DAT_08018944 + iVar7;
    func_0x080d3918(puVar13,(int *)puVar26[10],
                    *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                    *(undefined4 *)(*(int *)puVar26[10] + 0x10));
    uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
    uVar11 = *puVar26;
    if ((int)(-puVar26[2] | puVar26[2]) < 0) {
      uVar3 = *(ushort *)(puVar26 + 3);
      *puVar35 = _DAT_08018948;
      *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
      *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
      *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
      *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
      iVar16 = func_0x080d391c(uVar19,0x58 - iVar16,0x10 - iVar21,0xaa);
    }
    else {
      iVar16 = 0;
    }
    if ((iVar16 != 0) && (*(char *)(puVar26 + 0xf) != '\0')) {
      func_080A480C(puVar26,*puVar12,puVar13 + 8);
      if (*(char *)((int)puVar26 + 0x3d) == '\0') {
        if (*(char *)((int)puVar26 + 0x3e) == '\0') {
          func_080A4944(puVar26,puVar13 + 0x10,1);
          *(char *)((int)puVar26 + 0x3e) = '\x01';
        }
      }
      else {
        func_080A4944(puVar26,puVar13 + 0x10,1);
      }
      *(char *)(puVar26 + 0xf) = '\0';
    }
  }
  *(undefined4 *)(&stack0xffffffe0 + _DAT_08018a5c + iVar7) = 0;
  *(undefined4 *)(&stack0x00000cb0 + iVar7) = 0x378;
  *(int *)(&stack0xffffffe0 + _DAT_08018a64 + iVar7) = _DAT_08018a60 + (int)param_1;
  do {
    puVar26 = (undefined4 *)**(undefined4 **)(&stack0xffffffe0 + _DAT_08018a64 + iVar7);
    if (puVar26 != (undefined4 *)0x0) {
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar24 = *(int *)(&stack0x00000cb0 + iVar7);
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      puVar13 = &stack0xffffffe0 + _DAT_08018a68 + iVar7;
      func_0x080d3918(puVar13,(int *)puVar26[10],
                      *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)puVar26[10] + 0x10));
      uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
      uVar11 = *puVar26;
      if ((int)(-puVar26[2] | puVar26[2]) < 0) {
        uVar3 = *(ushort *)(puVar26 + 3);
        *puVar36 = _DAT_08018a6c;
        *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
        *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
        *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
        *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
        iVar16 = func_0x080d391c(uVar19,iVar24 - iVar16,0x1e0 - iVar21,0x55);
      }
      else {
        iVar16 = 0;
      }
      if ((iVar16 != 0) && (*(char *)(puVar26 + 0xf) != '\0')) {
        func_080A480C(puVar26,*puVar12,puVar13 + 8);
        if (*(char *)((int)puVar26 + 0x3d) == '\0') {
          if (*(char *)((int)puVar26 + 0x3e) == '\0') {
            func_080A4944(puVar26,puVar13 + 0x10,1);
            *(char *)((int)puVar26 + 0x3e) = '\x01';
          }
        }
        else {
          func_080A4944(puVar26,puVar13 + 0x10,1);
        }
        *(char *)(puVar26 + 0xf) = '\0';
      }
    }
    *(int *)(&stack0x00000cb0 + iVar7) = *(int *)(&stack0x00000cb0 + iVar7) + 0x28;
    *(int *)(&stack0xffffffe0 + _DAT_08018b1c + iVar7) =
         *(int *)(&stack0xffffffe0 + _DAT_08018b1c + iVar7) + 4;
    uVar18 = *(uint *)(&stack0xffffffe0 + _DAT_08018b20 + iVar7) + 1;
    *(uint *)(&stack0xffffffe0 + _DAT_08018b20 + iVar7) = uVar18;
  } while (uVar18 < 2);
  piVar14 = (int *)(_DAT_08018b24 + (int)param_1);
  if (*piVar14 != 0) {
    iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (iVar16 == 2) {
      puVar26 = (undefined4 *)*piVar14;
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      puVar13 = &stack0xffffffe0 + _DAT_08018d14 + iVar7;
      func_0x080d3918(puVar13,(int *)puVar26[10],
                      *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)puVar26[10] + 0x10));
      uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
      uVar11 = *puVar26;
      if ((int)(-puVar26[2] | puVar26[2]) < 0) {
        uVar3 = *(ushort *)(puVar26 + 3);
        *puVar38 = _DAT_08018d18;
        *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
        *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
        *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
        *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
        iVar16 = func_0x080d391c(uVar19,0x88 - iVar16,0x23 - iVar21,0x55);
      }
      else {
        iVar16 = 0;
      }
      if ((iVar16 == 0) || (pcVar20 = (char *)(puVar26 + 0xf), *pcVar20 == '\0')) goto LAB_08018d76;
      func_080A480C(puVar26,*puVar12,puVar13 + 8);
      if (*(char *)((int)puVar26 + 0x3d) == '\0') goto LAB_08018d58;
LAB_08018d4a:
      func_080A4944(puVar26,puVar13 + 0x10,1);
    }
    else {
      if (iVar16 < 3) {
        if (iVar16 != 0) goto LAB_08018d76;
        puVar26 = (undefined4 *)*piVar14;
        iVar24 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
        iVar24 = 0x160 - iVar24;
        iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
        iVar16 = 0x23;
LAB_08018c1e:
        iVar16 = iVar16 - iVar21;
        puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
        puVar13 = &stack0xffffffe0 + _DAT_08018c64 + iVar7;
        func_0x080d3918(puVar13,(int *)puVar26[10],
                        *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                        *(undefined4 *)(*(int *)puVar26[10] + 0x10));
        uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
        uVar11 = *puVar26;
        if ((int)(-puVar26[2] | puVar26[2]) < 0) goto LAB_08018b98;
LAB_08018bc8:
        iVar16 = 0;
      }
      else {
        if (iVar16 == 3) {
          puVar26 = (undefined4 *)*piVar14;
          iVar24 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
          iVar24 = 0x26c - iVar24;
          iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
          iVar16 = 0x76;
          goto LAB_08018c1e;
        }
        if (iVar16 != 7) goto LAB_08018d76;
        puVar26 = (undefined4 *)*piVar14;
        iVar24 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
        iVar24 = 0x22c - iVar24;
        iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
        iVar16 = 0x86 - iVar16;
        puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
        puVar13 = &stack0xffffffe0 + _DAT_08018bbc + iVar7;
        func_0x080d3918(puVar13,(int *)puVar26[10],
                        *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                        *(undefined4 *)(*(int *)puVar26[10] + 0x10));
        uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
        uVar11 = *puVar26;
        if (-1 < (int)(-puVar26[2] | puVar26[2])) goto LAB_08018bc8;
LAB_08018b98:
        uVar3 = *(ushort *)(puVar26 + 3);
        *puVar37 = _DAT_08018bc0;
        *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
        *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
        *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
        *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
        iVar16 = func_0x080d391c(uVar19,iVar24,iVar16,0x55);
      }
      if ((iVar16 == 0) || (pcVar20 = (char *)(puVar26 + 0xf), *pcVar20 == '\0')) goto LAB_08018d76;
      func_080A480C(puVar26,*puVar12,puVar13 + 8);
      if (*(char *)((int)puVar26 + 0x3d) != '\0') goto LAB_08018d4a;
LAB_08018d58:
      if (*(char *)((int)puVar26 + 0x3e) == '\0') {
        func_080A4944(puVar26,puVar13 + 0x10,1);
        *(char *)((int)puVar26 + 0x3e) = '\x01';
      }
    }
    *pcVar20 = '\0';
  }
LAB_08018d76:
  puVar26 = *(undefined4 **)(_DAT_08018e04 + (int)param_1);
  if (puVar26 != (undefined4 *)0x0) {
    iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
    iVar16 = _DAT_08018e08 - iVar16;
    iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
    puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
    puVar13 = &stack0xffffffe0 + _DAT_08018e0c + iVar7;
    func_0x080d3918(puVar13,(int *)puVar26[10],
                    *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                    *(undefined4 *)(*(int *)puVar26[10] + 0x10));
    uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
    uVar11 = *puVar26;
    if ((int)(-puVar26[2] | puVar26[2]) < 0) {
      uVar3 = *(ushort *)(puVar26 + 3);
      *puVar39 = _DAT_08018e10;
      *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
      *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
      *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
      *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
      iVar16 = func_0x080d391c(uVar19,iVar16,0x13 - iVar21,0x55);
    }
    else {
      iVar16 = 0;
    }
    if ((iVar16 != 0) && (*(char *)(puVar26 + 0xf) != '\0')) {
      func_080A480C(puVar26,*puVar12,puVar13 + 8);
      if (*(char *)((int)puVar26 + 0x3d) == '\0') {
        if (*(char *)((int)puVar26 + 0x3e) == '\0') {
          func_080A4944(puVar26,puVar13 + 0x10,1);
          *(char *)((int)puVar26 + 0x3e) = '\x01';
        }
      }
      else {
        func_080A4944(puVar26,puVar13 + 0x10,1);
      }
      *(char *)(puVar26 + 0xf) = '\0';
    }
  }
  iVar16 = *(int *)(_DAT_08018e9c + (int)param_1);
  if (iVar16 != 0) {
    pcVar20 = (char *)(iVar16 + 0x3f);
    if (*pcVar20 == '\0') {
      iVar21 = func_0805E8F0(iVar16 + 0x28);
      if (iVar21 * 0x40000000 < 0) {
        pcVar20 = (char *)(iVar16 + 0x3c);
        cVar8 = '\x01';
        goto LAB_08018ea2;
      }
    }
    else {
      cVar8 = '\0';
LAB_08018ea2:
      *pcVar20 = cVar8;
    }
    iVar16 = func_0x0800bf14(*(int *)(_DAT_08018ed0 + (int)param_1) + 500);
    iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (iVar21 == 0x1d) {
      puVar26 = *(undefined4 **)(_DAT_08018f6c + (int)param_1);
      iVar24 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar21 = _DAT_08018f70;
      bVar2 = *(byte *)(iVar16 * 2 + _DAT_08018f70);
      iVar29 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      bVar1 = *(byte *)(iVar16 * 2 + iVar21 + 1);
      puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      puVar13 = &stack0xffffffe0 + _DAT_08018f74 + iVar7;
      func_0x080d3918(puVar13,(int *)puVar26[10],
                      *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)puVar26[10] + 0x10));
      uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
      uVar11 = *puVar26;
      if ((int)(-puVar26[2] | puVar26[2]) < 0) {
        uVar3 = *(ushort *)(puVar26 + 3);
        *puVar40 = _DAT_08018f78;
        *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
        *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
        *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
        *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
        iVar16 = func_0x080d391c(uVar19,(uint)bVar2 * 8 - iVar24,(uint)bVar1 * 8 - iVar29,0xaa);
      }
      else {
        iVar16 = 0;
      }
      if ((iVar16 != 0) && (pcVar20 = (char *)(puVar26 + 0xf), *pcVar20 != '\0')) {
        func_080A480C(puVar26,*puVar12,puVar13 + 8);
        if (*(char *)((int)puVar26 + 0x3d) == '\0') {
          pcVar22 = (char *)((int)puVar26 + 0x3e);
          cVar8 = *pcVar22;
          goto joined_r0x08018fbe;
        }
LAB_0801909c:
        func_080A4944(puVar26,puVar13 + 0x10,1);
LAB_080190be:
        *pcVar20 = '\0';
      }
    }
    else if (iVar21 == 0x27) {
      puVar26 = *(undefined4 **)(_DAT_08019058 + (int)param_1);
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      pbVar31 = _DAT_0801905c;
      bVar2 = *_DAT_0801905c;
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      bVar1 = pbVar31[1];
      puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      puVar13 = &stack0xffffffe0 + _DAT_08019060 + iVar7;
      func_0x080d3918(puVar13,(int *)puVar26[10],
                      *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)puVar26[10] + 0x10));
      uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
      uVar11 = *puVar26;
      if ((int)(-puVar26[2] | puVar26[2]) < 0) {
        uVar3 = *(ushort *)(puVar26 + 3);
        *puVar41 = _DAT_08019064;
        *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
        *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
        *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
        *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
        iVar16 = func_0x080d391c(uVar19,(uint)bVar2 * 8 - iVar16,(uint)bVar1 * 8 - iVar21,0xaa);
      }
      else {
        iVar16 = 0;
      }
      if ((iVar16 != 0) && (pcVar20 = (char *)(puVar26 + 0xf), *pcVar20 != '\0')) {
        func_080A480C(puVar26,*puVar12,puVar13 + 8);
        if (*(char *)((int)puVar26 + 0x3d) != '\0') goto LAB_0801909c;
        pcVar22 = (char *)((int)puVar26 + 0x3e);
        cVar8 = *pcVar22;
joined_r0x08018fbe:
        if (cVar8 == '\0') {
          func_080A4944(puVar26,puVar13 + 0x10,1);
          *pcVar22 = '\x01';
        }
        goto LAB_080190be;
      }
    }
  }
  piVar14 = (int *)(_DAT_08019100 + (int)param_1);
  if ((*piVar14 != 0) &&
     (iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14)), iVar16 == 0x1d)) {
    iVar16 = func_0x0800bf14(*(int *)(_DAT_08019104 + (int)param_1) + 500);
    if (iVar16 == 1) {
      puVar23 = (undefined4 *)*piVar14;
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar16 = 0x118 - iVar16;
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      puVar26 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
LAB_0801913a:
      puVar27 = puVar23 + 10;
      uVar19 = puVar12[1];
      uVar11 = *puVar23;
      if ((int)(-puVar23[2] | puVar23[2]) < 0) goto LAB_080191da;
LAB_08019204:
      iVar16 = 0;
    }
    else {
      if (iVar16 == 0) {
        puVar23 = (undefined4 *)*piVar14;
        iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
        iVar16 = 0xa0 - iVar16;
        iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
        puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
        puVar26 = puVar12;
        goto LAB_0801913a;
      }
      if (iVar16 != 2) goto LAB_08019232;
      puVar23 = (undefined4 *)*piVar14;
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      iVar16 = 0x158 - iVar16;
      iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      puVar26 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      puVar27 = puVar23 + 10;
      uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
      uVar11 = *puVar23;
      if (-1 < (int)(-puVar23[2] | puVar23[2])) goto LAB_08019204;
LAB_080191da:
      uVar3 = *(ushort *)(puVar23 + 3);
      *puVar42 = _DAT_080191fc;
      *(undefined4 **)(&stack0xffffffe4 + iVar7) = puVar27;
      *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
      *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
      *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar23 + 4;
      iVar16 = func_0x080d391c(uVar19,iVar16,0x30 - iVar21,0xaa);
    }
    if ((iVar16 != 0) && (*(char *)(puVar23 + 0x12) != '\0')) {
      func_080A480C(puVar23,*puVar26,puVar27 + 2);
      func_080A4944(puVar23,puVar27 + 4,1);
      *(char *)(puVar23 + 0x12) = '\0';
    }
  }
LAB_08019232:
  puVar15 = (uint *)(_DAT_08019274 + (int)param_1);
  uVar18 = *puVar15;
  if ((int)(-uVar18 | uVar18) < 0) {
    if ((char)puVar15[2] == '\0') {
      if (*(char *)(uVar18 + 0x3f) == '\0') {
        iVar16 = func_0805E8F0(uVar18 + 0x28);
        if (iVar16 * 0x40000000 < 0) {
          *(undefined1 *)(uVar18 + 0x3c) = 1;
        }
      }
      else {
        *(char *)(uVar18 + 0x3f) = '\0';
        iVar16 = 2;
      }
      if (iVar16 * 0x20000000 < 0) {
        uVar18 = *puVar15;
        if ((uVar18 != 0) && (uVar18 != 0)) {
          func_0x080d3914(uVar18,3,*(undefined4 *)(*(int *)(uVar18 + 0x24) + 8));
        }
        *puVar15 = 0;
      }
    }
    else {
      cVar8 = *(char *)((int)puVar15 + 9) + -1;
      *(char *)((int)puVar15 + 9) = cVar8;
      if (cVar8 == '\0') {
        uVar18 = *puVar15;
        if ((uVar18 != 0) && (uVar18 != 0)) {
          func_0x080d3914(uVar18,3,*(undefined4 *)(*(int *)(uVar18 + 0x24) + 8));
        }
        *puVar15 = 0;
      }
      else {
        uVar18 = *puVar15;
        if (*(char *)(uVar18 + 0x3f) == '\0') {
          iVar16 = func_0805E8F0(uVar18 + 0x28);
          if (iVar16 * 0x40000000 < 0) {
            *(undefined1 *)(uVar18 + 0x3c) = 1;
          }
        }
        else {
          *(char *)(uVar18 + 0x3f) = '\0';
        }
      }
      *(byte *)((int)puVar15 + 10) = *(char *)((int)puVar15 + 10) + 1U & 7;
    }
    iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
    iVar21 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
    puVar26 = (undefined4 *)(_DAT_080193bc + (int)param_1);
    *(undefined4 *)(&stack0xffffffe0 + _DAT_080193c0 + iVar7) =
         *(undefined4 *)(&stack0x00000c90 + iVar7);
    puVar12 = (undefined4 *)*puVar26;
    if ((int)(-(int)puVar12 | (uint)puVar12) < 0) {
      if (*(char *)(puVar26 + 2) == '\0') {
        sVar4 = *(short *)(puVar26 + 1);
        sVar5 = *(short *)((int)puVar26 + 6);
        puVar13 = &stack0xffffffe0 + _DAT_0801949c + iVar7;
        func_0x080d3918(puVar13,(int *)puVar12[10],
                        *(undefined2 *)(puVar12[0xb] + (uint)*(ushort *)(puVar12 + 0xd) * 4),
                        *(undefined4 *)(*(int *)puVar12[10] + 0x10));
        uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
        uVar11 = *puVar12;
        if ((int)(-puVar12[2] | puVar12[2]) < 0) {
          uVar3 = *(ushort *)(puVar12 + 3);
          *piVar44 = 0x8000 - sVar5;
          *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
          *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
          *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
          *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar12 + 4;
          iVar16 = func_0x080d391c(uVar19,sVar4 - iVar16,sVar5 - iVar21,0xaa);
        }
        else {
          iVar16 = 0;
        }
        if ((iVar16 != 0) && (*(char *)(puVar12 + 0xf) != '\0')) {
          func_080A480C(puVar12,**(undefined4 **)(&stack0xffffffe0 + _DAT_080194e0 + iVar7),
                        puVar13 + 8);
          if (*(char *)((int)puVar12 + 0x3d) == '\0') {
            if (*(char *)((int)puVar12 + 0x3e) == '\0') {
              func_080A4944(puVar12,puVar13 + 0x10,1);
              *(char *)((int)puVar12 + 0x3e) = '\x01';
            }
          }
          else {
            func_080A4944(puVar12,puVar13 + 0x10,1);
          }
          *(char *)(puVar12 + 0xf) = '\0';
        }
      }
      else if (2 < *(byte *)((int)puVar26 + 10)) {
        *(int *)(&stack0x00000c60 + iVar7) = *(short *)(puVar26 + 1) - iVar16;
        sVar4 = *(short *)((int)puVar26 + 6);
        puVar13 = &stack0xffffffe0 + _DAT_080193c4 + iVar7;
        func_0x080d3918(puVar13,(int *)puVar12[10],
                        *(undefined2 *)(puVar12[0xb] + (uint)*(ushort *)(puVar12 + 0xd) * 4),
                        *(undefined4 *)(*(int *)puVar12[10] + 0x10));
        uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
        uVar11 = *puVar12;
        if ((int)(-puVar12[2] | puVar12[2]) < 0) {
          uVar3 = *(ushort *)(puVar12 + 3);
          *piVar43 = 0x8000 - sVar4;
          *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
          *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
          *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
          *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar12 + 4;
          iVar16 = func_0x080d391c(uVar19,*(undefined4 *)(&stack0x00000c60 + iVar7),sVar4 - iVar21,
                                   0xaa);
        }
        else {
          iVar16 = 0;
        }
        if ((iVar16 != 0) && (*(char *)(puVar12 + 0xf) != '\0')) {
          func_080A480C(puVar12,**(undefined4 **)(&stack0xffffffe0 + _DAT_0801940c + iVar7),
                        puVar13 + 8);
          if (*(char *)((int)puVar12 + 0x3d) == '\0') {
            if (*(char *)((int)puVar12 + 0x3e) == '\0') {
              func_080A4944(puVar12,puVar13 + 0x10,1);
              *(char *)((int)puVar12 + 0x3e) = '\x01';
            }
          }
          else {
            func_080A4944(puVar12,puVar13 + 0x10,1);
          }
          *(char *)(puVar12 + 0xf) = '\0';
        }
      }
    }
  }
  *(undefined4 *)(&stack0xffffffe0 + _ASSET_BLOCK_080195CC + iVar7) = 0;
  puVar30 = (ushort *)(_DAT_080195d0 + (int)param_1);
  *(int *)(&stack0xffffffe0 + _DAT_080195d8 + iVar7) = _DAT_080195d4 + (int)param_1;
  do {
    if ((**(byte **)(&stack0xffffffe0 + _DAT_080195d8 + iVar7) & 3) == 1) {
      uVar3 = *puVar30;
      iVar21 = (uint)puVar30[1] * 8 + 8;
      puVar26 = *(undefined4 **)(puVar30 + 2);
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      *(uint *)(&stack0xffffffe0 + _DAT_080195dc + iVar7) = ((uint)uVar3 * 8 + 8) - iVar16;
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      *(undefined4 *)(&stack0xffffffe0 + _DAT_080195e0 + iVar7) =
           *(undefined4 *)(&stack0x00000c90 + iVar7);
      puVar13 = &stack0xffffffe0 + _DAT_080195e4 + iVar7;
      func_0x080d3918(puVar13,(int *)puVar26[10],
                      *(undefined2 *)(puVar26[0xb] + (uint)*(ushort *)(puVar26 + 0xd) * 4),
                      *(undefined4 *)(*(int *)puVar26[10] + 0x10));
      uVar19 = *(undefined4 *)(*(int *)(&stack0x00000c90 + iVar7) + 4);
      uVar11 = *puVar26;
      if ((int)(-puVar26[2] | puVar26[2]) < 0) {
        uVar3 = *(ushort *)(puVar26 + 3);
        *piVar45 = 0x8000 - iVar21;
        *(undefined1 **)(&stack0xffffffe4 + iVar7) = puVar13;
        *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
        *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
        *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
        iVar16 = func_0x080d391c(uVar19,*(undefined4 *)(&stack0xffffffe0 + _DAT_080195dc + iVar7),
                                 iVar21 - iVar16,0xaa);
      }
      else {
        iVar16 = 0;
      }
      if ((iVar16 != 0) && (*(char *)(puVar26 + 0xf) != '\0')) {
        func_080A480C(puVar26,**(undefined4 **)(&stack0xffffffe0 + _DAT_08019628 + iVar7),
                      puVar13 + 8);
        if (*(char *)((int)puVar26 + 0x3d) == '\0') {
          if (*(char *)((int)puVar26 + 0x3e) == '\0') {
            func_080A4944(puVar26,puVar13 + 0x10,1);
            *(char *)((int)puVar26 + 0x3e) = '\x01';
          }
        }
        else {
          func_080A4944(puVar26,puVar13 + 0x10,1);
        }
        *(char *)(puVar26 + 0xf) = '\0';
      }
    }
    puVar30 = puVar30 + 6;
    *(int *)(&stack0xffffffe0 + _ASSET_BLOCK_08019758 + iVar7) =
         *(int *)(&stack0xffffffe0 + _ASSET_BLOCK_08019758 + iVar7) + 0xc;
    uVar18 = *(uint *)(&stack0xffffffe0 + _DAT_0801975c + iVar7) + 1;
    *(uint *)(&stack0xffffffe0 + _DAT_0801975c + iVar7) = uVar18;
  } while (uVar18 < 4);
  iVar16 = *_DAT_08019760;
  *(undefined4 *)(&stack0x00000c70 + iVar7) = 0;
  pbVar31 = (byte *)(iVar16 + _DAT_08019764);
  do {
    if (((*pbVar31 & 3) == 1) &&
       (uVar3 = *(ushort *)(pbVar31 + 2),
       uVar18 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14)), (uVar3 & 0x3ff) == uVar18
       )) {
      bVar2 = pbVar31[3];
      uVar18 = *(ushort *)(pbVar31 + 4) & _DAT_08019768;
      iVar21 = (*(int *)(pbVar31 + 4) << 6) >> 0x10;
      uVar25 = (*pbVar31 & 0xf) >> 2;
      puVar26 = *(undefined4 **)
                 ((int)param_1 + *(int *)(&stack0x00000c70 + iVar7) * 4 + _DAT_0801976c);
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x18));
      *(int *)(&stack0xffffffe0 + _DAT_08019770 + iVar7) =
           (short)((ushort)(uVar18 << 6) | (ushort)(bVar2 >> 2)) - iVar16;
      iVar16 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x1c));
      puVar12 = *(undefined4 **)(&stack0x00000c90 + iVar7);
      *(undefined4 *)(&stack0xffffffe0 + _DAT_08019774 + iVar7) = puVar12[1];
      uVar11 = *puVar26;
      if ((int)(-puVar26[2] | puVar26[2]) < 0) {
        uVar3 = *(ushort *)(puVar26 + 3);
        *piVar46 = 0x8000 - iVar21;
        *(undefined4 **)(&stack0xffffffe4 + iVar7) = puVar26 + 10;
        *(undefined4 *)(&stack0xffffffe8 + iVar7) = uVar11;
        *(uint *)(&stack0xffffffec + iVar7) = (uint)uVar3;
        *(undefined4 **)(&stack0xfffffff0 + iVar7) = puVar26 + 4;
        iVar16 = func_0x080d391c(*(undefined4 *)(&stack0xffffffe0 + _DAT_08019774 + iVar7),
                                 *(undefined4 *)(&stack0xffffffe0 + _DAT_08019770 + iVar7),
                                 iVar21 - iVar16,uVar25 << 2 | uVar25 | uVar25 << 4 | uVar25 << 6);
      }
      else {
        iVar16 = 0;
      }
      if ((iVar16 != 0) && (*(char *)(puVar26 + 0x12) != '\0')) {
        func_080A480C(puVar26,*puVar12,puVar26 + 0xc);
        func_080A4944(puVar26,puVar26 + 0xe,1);
        *(char *)(puVar26 + 0x12) = '\0';
      }
    }
    pbVar31 = pbVar31 + 0xc;
    uVar18 = *(uint *)(&stack0x00000c70 + iVar7) + 1;
    *(uint *)(&stack0x00000c70 + iVar7) = uVar18;
  } while (uVar18 < 6);
  uVar18 = param_1[0x66];
  if (99 < uVar18) {
    uVar18 = 0;
  }
  piVar28 = (int *)(*(int *)(&stack0xffffffe0 + _DAT_080197f4 + iVar7) + uVar18 * 4);
  piVar32 = *(int **)(&stack0xffffffe0 + _DAT_080197f8 + iVar7);
  piVar14 = piVar28;
  if ((uint)(byte)(&stack0xfffffff4)[iVar7] < *(uint *)(&stack0x00000c50 + iVar7)) {
    do {
      if ((piVar14 != *(int **)(&stack0xffffffe0 + _DAT_08019970 + iVar7)) &&
         (iVar16 = *piVar14, iVar16 != 0)) {
        func_0x080d3914(iVar16,&stack0xffffffe0 + _DAT_08019974 + iVar7,
                        *(undefined4 *)(*(int *)(iVar16 + 0x14) + 0x1c));
      }
      piVar14 = piVar14 + 1;
      if (piVar14 == piVar32) {
        piVar14 = *(int **)(&stack0xffffffe0 + _DAT_08019978 + iVar7);
      }
      if (piVar14 == piVar28) goto LAB_08019844;
    } while ((uint)(byte)(&stack0xfffffff4)[iVar7] < *(uint *)(&stack0x00000c50 + iVar7));
    iVar16 = (int)piVar14 - *(int *)(&stack0xffffffe0 + _DAT_08019978 + iVar7);
  }
  else {
    iVar16 = (int)piVar28 - *(int *)(&stack0xffffffe0 + _DAT_080197f4 + iVar7);
  }
  uVar18 = iVar16 >> 2;
LAB_08019844:
  param_1[0x66] = uVar18;
  func_08094A3C(&stack0xfffffff4 + iVar7,
                *(undefined4 *)(*(int *)(&stack0xffffffe0 + _DAT_0801997c + iVar7) + 8));
  for (puVar13 = *(undefined1 **)(&stack0xffffffe0 + _DAT_08019980 + iVar7);
      &stack0xfffffff8 + iVar7 != puVar13; puVar13 = puVar13 + _DAT_08019984) {
  }
SUB_08019870:
  iVar16 = func_0x080a4698(*(undefined4 *)(param_1[1] + 4));
  bVar2 = *(byte *)(iVar16 + 0x24);
  *(int **)(&stack0xffffffe0 + _DAT_08019988 + iVar7) = param_1 + 0x67;
  piVar14 = (int *)**(undefined4 **)(&stack0xffffffe0 + _DAT_0801997c + iVar7);
  *(uint *)(&stack0x00000c80 + iVar7) = bVar2 ^ 1;
  *(undefined4 *)(&stack0xffffffe0 + _DAT_0801998c + iVar7) = 0;
  bVar2 = **(byte **)(&stack0xffffffe0 + _DAT_08019990 + iVar7);
  *(uint *)(&stack0xffffffe0 + _DAT_08019994 + iVar7) = (uint)bVar2;
  if (bVar2 != 0) {
    do {
      iVar16 = *(int *)(&stack0xffffffe0 + _DAT_08019988 + iVar7) + _DAT_08019998 +
               *(int *)(&stack0xffffffe0 + _DAT_0801998c + iVar7) * 0xc;
      cVar8 = *(char *)(iVar16 + 9);
      *(int *)(&stack0xffffffe0 + _DAT_0801999c + iVar7) =
           *(int *)(&stack0xffffffe0 + _DAT_0801998c + iVar7) + 1;
      if ((-1 < cVar8) &&
         ((iVar21 = *(int *)(&stack0xffffffe0 + _DAT_08019988 + iVar7) + 0x20 +
                    *(char *)(iVar16 + 9) * 0x84, *(char *)(iVar21 + 0x82) != '\0' ||
          (*(char *)(iVar16 + 10) == '\0')))) {
        iVar24 = iVar21 + 0x60;
        if (*(int *)(&stack0x00000c80 + iVar7) == 0) {
          iVar24 = iVar21;
        }
        func_08008F0C(&stack0xfffffff4 + iVar7,iVar24,
                      (uint)*(byte *)(iVar16 + 8) * 0x20 + _DAT_080199a0,0x20);
        *(undefined1 **)(&stack0xffffffe0 + _DAT_080199a4 + iVar7) = &stack0xfffffff4 + iVar7;
        puVar26 = (undefined4 *)piVar14[1];
        if (puVar26 == (undefined4 *)piVar14[3]) {
          *(undefined4 **)(&stack0xffffffe0 + _ASSET_BLOCK_080199EC + iVar7) = puVar26;
          puVar17 = (uint *)(&stack0xffffffe0 + _DAT_080199f0 + iVar7);
          *puVar17 = 1;
          uVar18 = (int)puVar26 - *piVar14 >> 4;
          *(uint *)(&stack0xffffffe0 + _DAT_080199f4 + iVar7) = uVar18;
          puVar15 = (uint *)(&stack0xffffffe0 + _DAT_080199f4 + iVar7);
          if (uVar18 < *puVar17) {
            puVar15 = puVar17;
          }
          if (uVar18 + *puVar15 == 0) {
            puVar26 = (undefined4 *)0x0;
            *(undefined4 *)(&stack0xffffffe0 + _DAT_08019a70 + iVar7) = 0;
          }
          else {
            iVar24 = (uVar18 + *puVar15) * 0x10;
            puVar26 = (undefined4 *)malloc(iVar24);
            *(int *)(&stack0xffffffe0 + _DAT_080199f8 + iVar7) = iVar24;
            if (puVar26 == (undefined4 *)0x0) {
              puVar26 = (undefined4 *)func_080D3BC0(iVar24);
            }
          }
          *(undefined4 **)(&stack0xffffffe0 + _DAT_08019a74 + iVar7) = puVar26;
          puVar12 = (undefined4 *)*piVar14;
          *(int *)(&stack0xffffffe0 + _DAT_08019a7c + iVar7) =
               *(int *)(&stack0xffffffe0 + _DAT_08019a78 + iVar7) + 1;
          if (puVar12 != *(undefined4 **)(&stack0xffffffe0 + _DAT_08019a80 + iVar7)) {
            do {
              if (puVar26 != (undefined4 *)0x0) {
                uVar11 = puVar12[1];
                uVar19 = puVar12[2];
                *puVar26 = *puVar12;
                puVar26[1] = uVar11;
                puVar26[2] = uVar19;
                puVar26[3] = puVar12[3];
              }
              puVar12 = puVar12 + 4;
              puVar26 = puVar26 + 4;
            } while (puVar12 != *(undefined4 **)(&stack0xffffffe0 + _DAT_08019a80 + iVar7));
          }
          iVar24 = *(int *)(&stack0xffffffe0 + _DAT_08019a84 + iVar7);
          if (iVar24 == 1) {
            if (puVar26 != (undefined4 *)0x0) {
              puVar12 = *(undefined4 **)(&stack0xffffffe0 + _DAT_08019a88 + iVar7);
              uVar11 = puVar12[1];
              uVar19 = puVar12[2];
              *puVar26 = *puVar12;
              puVar26[1] = uVar11;
              puVar26[2] = uVar19;
              puVar26[3] = puVar12[3];
            }
            puVar26 = puVar26 + 4;
          }
          else {
            for (; iVar24 != 0; iVar24 = iVar24 + -1) {
              if (puVar26 != (undefined4 *)0x0) {
                puVar12 = *(undefined4 **)(&stack0xffffffe0 + _DAT_08019b6c + iVar7);
                uVar11 = puVar12[1];
                uVar19 = puVar12[2];
                *puVar26 = *puVar12;
                puVar26[1] = uVar11;
                puVar26[2] = uVar19;
                puVar26[3] = puVar12[3];
              }
              puVar26 = puVar26 + 4;
            }
          }
          for (iVar24 = *piVar14; iVar24 != piVar14[1]; iVar24 = iVar24 + 0x10) {
          }
          if (*piVar14 != 0) {
            free();
          }
          iVar29 = *(int *)(&stack0xffffffe0 + _DAT_08019b70 + iVar7);
          iVar24 = *(int *)(&stack0xffffffe0 + _DAT_08019b74 + iVar7);
          *piVar14 = iVar24;
          piVar14[1] = (int)puVar26;
          piVar14[3] = iVar29 + iVar24;
        }
        else {
          if (puVar26 != (undefined4 *)0x0) {
            uVar11 = *(undefined4 *)(&stack0xfffffff8 + iVar7);
            uVar19 = *(undefined4 *)((int)&uStack_4 + iVar7);
            *puVar26 = *(undefined4 *)(&stack0xfffffff4 + iVar7);
            puVar26[1] = uVar11;
            puVar26[2] = uVar19;
            puVar26[3] = *(undefined4 *)(&stack0x00000000 + iVar7);
          }
          piVar14[1] = piVar14[1] + 0x10;
          *(int *)(&stack0xffffffe0 + _DAT_0801999c + iVar7) =
               *(int *)(&stack0xffffffe0 + _DAT_0801998c + iVar7) + 1;
        }
        *(undefined1 *)(iVar21 + 0x82) = 0;
        if ((*(char *)(iVar16 + 10) == '\0') && (-1 < *(char *)(iVar16 + 9))) {
          *(undefined1 *)(iVar16 + 10) = 1;
        }
      }
      uVar18 = *(uint *)(&stack0xffffffe0 + _DAT_08019b78 + iVar7);
      *(uint *)(&stack0xffffffe0 + _DAT_08019b7c + iVar7) = uVar18;
    } while (uVar18 < *(uint *)(&stack0xffffffe0 + _DAT_08019b80 + iVar7));
  }
  uVar18 = (uint)**(byte **)(&stack0xffffffe0 + _DAT_08019b84 + iVar7);
  if (uVar18 < **(byte **)(&stack0x00000ca0 + iVar7)) {
    pcVar20 = (char *)((int)param_1 + uVar18 * 0xc + _DAT_08019b88 + 0x19c);
    pbVar31 = (byte *)(_DAT_08019b8c + (int)param_1);
    do {
      if (-1 < *pcVar20) {
        *pcVar20 = -1;
      }
      pcVar20 = pcVar20 + 0xc;
      uVar18 = uVar18 + 1;
    } while (uVar18 < *pbVar31);
  }
  (**(code **)(&stack0x00000cdc + iVar7))();
  return;
}

// =============================================================================
// Function: func_08019B90 @ 0x08019B90
// =============================================================================
undefined4 func_08019B90(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  func_0x080d391c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + _DAT_08019be4),
                  (uint)*(byte *)(param_1 + _DAT_08019be8),
                  0x1e - (uint)*(byte *)(param_1 + _DAT_08019be8));
  iVar1 = func_0x080a4698(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  if (*(char *)(iVar1 + 0x24) == '\0') {
    func_0801A13C(param_1,(**(uint **)(&UNK_00001040 + param_1) & 0x1fffff) >> 0x10,
                  (**(uint **)(&UNK_00001040 + param_1) & 0x7ffffff) >> 0x15,1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08019BEC @ 0x08019BEC
// =============================================================================
undefined4 func_08019BEC(int *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  undefined2 *apuStack_40 [2];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int *piStack_2c;
  int *piStack_28;
  byte *pbStack_24;
  
  uStack_38 = param_3 & 0xff;
  for (piVar4 = param_1 + 2; piVar4 != param_1 + 0x66; piVar4 = piVar4 + 1) {
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      func_0x080d3910(iVar7,*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x14));
    }
  }
  pbVar6 = (byte *)(_DAT_08019dfc + *_DAT_08019df8);
  uVar10 = 0;
  piStack_2c = param_1 + 2;
  piStack_28 = param_1 + 0x66;
  piVar4 = (int *)(_DAT_08019e00 + (int)param_1);
  piVar8 = (int *)((int)param_1 + _DAT_08019e04);
  do {
    iVar7 = *piVar8;
    if ((iVar7 != 0) && (iVar7 != 0)) {
      func_0x080d3914(iVar7,3,*(undefined4 *)(*(int *)(iVar7 + 0x24) + 8));
    }
    *piVar8 = 0;
    piVar8 = piVar8 + 1;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 6);
  if ((((*param_2 & 0x3ff) != 2) && (*(int *)param_1[1] == 2)) &&
     (*(int *)((int)param_1 + _DAT_08019e08) != 0)) {
    func_08008E64(((int *)param_1[1])[0xb],*(int *)((int)param_1 + _DAT_08019e08),0xb000);
  }
  func_080A56DC(param_1[1],param_2,*(undefined4 *)((int)param_1 + _DAT_08019e0c),
                (uint)*(byte *)((int)param_1 + _DAT_08019e10),
                0x1e - (uint)*(byte *)((int)param_1 + _DAT_08019e10));
  piVar8 = (int *)((int)param_1 + _DAT_08019e14);
  iVar7 = *piVar8;
  if ((iVar7 != 0) && (iVar7 != 0)) {
    ScriptEngine_Destruct(iVar7,3);
  }
  *piVar8 = 0;
  iVar7 = *piVar4;
  if ((iVar7 != 0) && (iVar7 != 0)) {
    func_0x0803b0a8(iVar7,3);
  }
  *piVar4 = 0;
  piVar4 = (int *)((int)param_1 + _DAT_08019e18);
  iVar7 = *piVar4;
  if ((iVar7 != 0) && (iVar7 != 0)) {
    func_080AB2E4(iVar7,3);
  }
  *piVar4 = 0;
  uStack_34 = 0;
  pbStack_24 = pbVar6;
  do {
    uStack_30 = *pbStack_24 & 3;
    if ((uStack_30 == 1) &&
       (uVar1 = *(ushort *)(pbStack_24 + 2),
       uVar10 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14)), (uVar1 & 0x3ff) == uVar10
       )) {
      piVar8 = (int *)((int)param_1 + uStack_34 * 4 + _DAT_08019e04);
      iVar7 = func_080005D4(0x4c);
      piVar4 = (int *)func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 100));
      uVar2 = *(undefined2 *)(pbStack_24 + 8);
      func_080A4740(iVar7,param_1,2,0x1b);
      *(undefined4 *)(iVar7 + 0x24) = _DAT_08019e1c;
      iVar9 = *piVar4;
      func_0x080d3918(apuStack_40,piVar4,uVar2,*(undefined4 *)(iVar9 + 0xc));
      func_0x080d3918(iVar7 + 0x28,piVar4,*apuStack_40[0],*(undefined4 *)(iVar9 + 0x10));
      *(undefined1 *)(iVar7 + 0x48) = (undefined1)uStack_30;
      iVar9 = *piVar8;
      if ((iVar7 != iVar9) && (iVar9 != 0)) {
        func_0x080d3914(iVar9,3,*(undefined4 *)(*(int *)(iVar9 + 0x24) + 8));
      }
      *piVar8 = iVar7;
    }
    pbStack_24 = pbStack_24 + 0xc;
    uStack_34 = uStack_34 + 1;
  } while (uStack_34 < 6);
  uVar5 = func_080005D4(0xa0);
  iVar7 = ScriptEngine_Construct(uVar5,param_1);
  piVar4 = (int *)((int)param_1 + _DAT_08019e14);
  iVar9 = *piVar4;
  if ((iVar7 != iVar9) && (iVar9 != 0)) {
    ScriptEngine_Destruct(iVar9,3);
  }
  *piVar4 = iVar7;
  iVar7 = func_0x080a4698(*(undefined4 *)(param_1[1] + 4));
  if (*(char *)(iVar7 + 0x24) != '\0') goto LAB_08019e52;
  iVar7 = *(int *)param_1[1];
  if (iVar7 == 0x2e) {
    iVar7 = 1;
  }
  else if (iVar7 < 0x2f) {
    if (iVar7 < 0x2c) goto LAB_08019e34;
    iVar7 = 0;
  }
  else if (iVar7 == 0x2f) {
    iVar7 = 2;
  }
  else {
LAB_08019e34:
    iVar7 = *(int *)(*(int *)((int)param_1 + _DAT_08019e20) + 8);
  }
  if (iVar7 == 1) {
    func_0801FAC8(param_1,1);
  }
  else if (iVar7 == 2) {
    func_0801FAC8(param_1,0);
  }
LAB_08019e52:
  uVar5 = func_080005D4(4);
  iVar7 = func_080AAFC8(uVar5,param_1,*(undefined4 *)(param_1[1] + 4));
  piVar4 = (int *)((int)param_1 + _DAT_08019f28);
  iVar9 = *piVar4;
  if ((iVar7 != iVar9) && (iVar9 != 0)) {
    func_080AB2E4(iVar9,3);
  }
  *piVar4 = iVar7;
  func_0801F14C(param_1);
  func_0801F3E4(param_1);
  func_0801F2DC(param_1);
  func_0801F614(param_1);
  func_0801F77C(param_1);
  func_0801E67C(param_1);
  piVar8 = piStack_28;
  for (piVar4 = piStack_2c; piVar4 != piVar8; piVar4 = piVar4 + 1) {
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      func_0x080d3910(iVar7,*(undefined4 *)(*(int *)(iVar7 + 0x14) + 0x10));
    }
  }
  if ((uStack_38 != 0) &&
     ((cVar3 = func_0x0809c5f4(*(int *)((int)param_1 + _DAT_08019f2c) + _DAT_08019f30),
      cVar3 == '\0' ||
      (cVar3 = func_080167CC(*(undefined4 *)((int)param_1 + _DAT_08019f34)), cVar3 == '\0')))) {
    func_0801DB58(param_1);
  }
  iVar7 = func_0x080a4698(*(undefined4 *)(param_1[1] + 4));
  if (*(char *)(iVar7 + 0x24) == '\0') {
    func_0801A13C(param_1,(*(uint *)param_1[0x410] & 0x1fffff) >> 0x10,
                  (*(uint *)param_1[0x410] & 0x7ffffff) >> 0x15,1);
  }
  return in_lr;
}

// =============================================================================
// Function: func_08019F38 @ 0x08019F38
// =============================================================================
undefined8 func_08019F38(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = func_0x080a4698(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  if ((*(char *)(iVar2 + 0x24) == '\0') &&
     ((iVar2 = func_0800E324(*(int *)(param_1 + _DAT_08019f70) + 0x10), iVar2 == 3 ||
      (cVar1 = func_080A5EB8(*(undefined4 *)(param_1 + 4),param_2), cVar1 != '\0')))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}

// =============================================================================
// Function: func_08019F7C @ 0x08019F7C
// =============================================================================
undefined8 func_08019F7C(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  piVar6 = (int *)(param_1 + _DAT_08019fe4);
  uVar1 = func_0800E324(*piVar6 + 0x10);
  uVar2 = func_0x0800bf14(*piVar6 + 500);
  uVar3 = func_0x0800c560(*piVar6 + 0x410);
  uVar4 = func_0x0800ce64(*piVar6 + 0x5f0);
  func_0x0803a8a4(param_2,uVar1,uVar2,uVar3,uVar4);
  iVar5 = func_0x080a4698();
  return CONCAT44(in_lr,(uint)*(ushort *)(iVar5 + 0x20) << 3);
}

// =============================================================================
// Function: func_08019FE8 @ 0x08019FE8
// =============================================================================
undefined8 func_08019FE8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  piVar6 = (int *)(param_1 + _DAT_0801a050);
  uVar1 = func_0800E324(*piVar6 + 0x10);
  uVar2 = func_0x0800bf14(*piVar6 + 500);
  uVar3 = func_0x0800c560(*piVar6 + 0x410);
  uVar4 = func_0x0800ce64(*piVar6 + 0x5f0);
  func_0x0803a8a4(param_2,uVar1,uVar2,uVar3,uVar4);
  iVar5 = func_0x080a4698();
  return CONCAT44(in_lr,(uint)*(ushort *)(iVar5 + 0x22) << 3);
}

// =============================================================================
// Function: func_0801A054 @ 0x0801A054
// =============================================================================
undefined8 func_0801A054(undefined4 *param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 in_lr;
  
  if (_DAT_0801a078 < param_3) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined2 *)((int)param_1 + 10) = 0;
  }
  else {
    uVar8 = **(uint **)(param_2 + 4);
    if ((param_3 == 2) && (uVar8 != 2)) {
      *param_1 = *(undefined4 *)(_DAT_0801a0a8 + param_2);
      param_1[1] = 0;
      *(undefined2 *)(param_1 + 2) = 0x80;
      *(undefined2 *)((int)param_1 + 10) = 0x58;
    }
    else {
      if (uVar8 == param_3) {
        uVar3 = (*(uint **)(param_2 + 4))[1];
      }
      else {
        piVar10 = (int *)(_DAT_0801a118 + param_2);
        uVar7 = func_0800E324(*piVar10 + 0x10);
        uVar9 = func_0x0800bf14(*piVar10 + 500);
        uVar4 = func_0x0800c560(*piVar10 + 0x410);
        uVar5 = func_0x0800ce64(*piVar10 + 0x5f0);
        uVar3 = func_0x0803a8a4(param_3,uVar7,uVar9,uVar4,uVar5);
      }
      iVar6 = func_0x080a4698(uVar3);
      uVar1 = *(undefined2 *)(iVar6 + 0x20);
      uVar2 = *(undefined2 *)(iVar6 + 0x22);
      if (uVar8 == param_3) {
        iVar6 = *(int *)(param_2 + 4);
        func_0x080a4698(*(undefined4 *)(iVar6 + 4));
        uVar9 = 0;
        uVar7 = *(undefined4 *)(iVar6 + 0x2c);
      }
      else {
        uVar9 = *(undefined4 *)(iVar6 + 0x1c);
        uVar7 = *(undefined4 *)(iVar6 + 0x18);
      }
      *param_1 = uVar7;
      param_1[1] = uVar9;
      *(undefined2 *)(param_1 + 2) = uVar1;
      *(undefined2 *)((int)param_1 + 10) = uVar2;
    }
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0801A13C @ 0x0801A13C
// =============================================================================
undefined4 func_0801A13C(int param_1,int param_2,int param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  undefined4 in_lr;
  undefined4 auStack_e4 [8];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  ushort auStack_bc [2];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  ushort auStack_ac [2];
  undefined *puStack_a8;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  ushort auStack_9c [2];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  ushort auStack_8c [2];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ushort auStack_7c [2];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ushort auStack_6c [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined1 *puStack_24;
  
  iStack_54 = param_1;
  iVar3 = func_0801A8C0();
  iVar12 = iStack_54;
  if (*(int *)(iStack_54 + _DAT_0801a198) == iVar3) {
    uStack_3c = param_2 << 0x18;
    uStack_38 = param_3 << 0x18;
    if (param_4 == '\0') {
      bVar1 = false;
      goto LAB_0801a7b0;
    }
  }
  *(int *)(iStack_54 + _DAT_0801a198) = iVar3;
  func_080A5D14(*(undefined4 *)(iStack_54 + 4));
  iVar3 = **(int **)(iVar12 + 4);
  if (iVar3 == 0x2e) {
    uStack_48 = 1;
  }
  else if (iVar3 < 0x2f) {
    if (iVar3 < 0x2c) goto LAB_0801a1b0;
    uStack_48 = 0;
  }
  else if (iVar3 == 0x2f) {
    uStack_48 = 2;
  }
  else {
LAB_0801a1b0:
    uStack_48 = *(uint *)(*(int *)(iVar12 + _DAT_0801a19c) + 8);
  }
  iStack_50 = iStack_54 + 0x19c;
  iStack_4c = *(int *)(iStack_54 + _DAT_0801a21c);
  uVar8 = 0;
  uStack_3c = param_2 << 0x18;
  uStack_38 = param_3 << 0x18;
  do {
    puVar9 = (undefined4 *)(iStack_50 + 0x20 + uVar8 * 0x84);
    if (*(char *)((int)puVar9 + 0x83) == '\0') {
      puVar9[8] = *puVar9;
      puVar9[9] = puVar9[1];
      puVar9[10] = puVar9[2];
      puVar9[0xb] = puVar9[3];
      puVar9[0xc] = puVar9[4];
      puVar9[0xd] = puVar9[5];
      puVar9[0xe] = puVar9[6];
      puVar9[0xf] = puVar9[7];
      puVar9[0x10] = *puVar9;
      puVar9[0x11] = puVar9[1];
      puVar9[0x12] = puVar9[2];
      puVar9[0x13] = puVar9[3];
      puVar9[0x14] = puVar9[4];
      puVar9[0x15] = puVar9[5];
      puVar9[0x16] = puVar9[6];
      puVar9[0x17] = puVar9[7];
      *(undefined1 *)((int)puVar9 + 0x82) = 1;
    }
    else {
      puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
      if (4 < uStack_48) goto LAB_0801a79e;
      switch(*(uint *)(PTR_case_0801A244_0801a240 + uStack_48 * 4) & 0xfffffffe) {
      case 0x801a244:
        break;
      case 0x801a4bc:
        if (iStack_4c == 1) {
          uVar10 = uStack_74 & 0xffffffe0;
          uStack_74._0_2_ = (ushort)uVar10 | 10;
          uStack_74._2_2_ = (undefined2)(uVar10 >> 0x10);
          uStack_74 = CONCAT22(uStack_74._2_2_,(ushort)_DAT_0801a6e8 & (ushort)uStack_74) | 0x280;
          uStack_70 = _DAT_0801a6ec;
          puVar7 = auStack_6c;
          puStack_2c = &uStack_68;
          puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
          for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2))
          {
            *(short *)puVar6 = (short)_DAT_0801a6ec;
          }
          func_0x080d391c(puVar9 + 8,auStack_e4,puVar9,uStack_74);
          auStack_6c[0] = auStack_6c[0] & 0xffe0 | 10;
          auStack_6c[0] = (ushort)_DAT_0801a6e8 & auStack_6c[0] | 0x280;
          uStack_68 = _DAT_0801a6ec;
          if (auStack_e4 != &uStack_c4) {
            uVar4 = *puStack_2c;
            puVar6 = auStack_e4;
            do {
              *(short *)puVar6 = (short)uVar4;
              puVar6 = (undefined4 *)((int)puVar6 + 2);
            } while (puVar6 != &uStack_c4);
          }
          goto LAB_0801a6d8;
        }
        if (iStack_4c < 2) {
          if (iStack_4c == 0) {
            uVar10 = uStack_84 & 0xffffffe0;
            uStack_84._0_2_ = (ushort)uVar10 | 10;
            uStack_84._2_2_ = (undefined2)(uVar10 >> 0x10);
            uStack_84 = CONCAT22(uStack_84._2_2_,(ushort)_DAT_0801a630 & (ushort)uStack_84) | 0x280;
            uStack_80 = _DAT_0801a634;
            puVar7 = auStack_7c;
            puStack_30 = &uStack_78;
            puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
            for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2)
                ) {
              *(short *)puVar6 = (short)_DAT_0801a634;
            }
            func_0x080d391c(puVar9 + 8,auStack_e4,puVar9,uStack_84);
            auStack_7c[0] = auStack_7c[0] & 0xffe0 | 10;
            auStack_7c[0] = (ushort)_DAT_0801a630 & auStack_7c[0] | 0x280;
            uStack_78 = _DAT_0801a634;
            if (auStack_e4 != &uStack_c4) {
              uVar4 = *puStack_30;
              puVar6 = auStack_e4;
              do {
                *(short *)puVar6 = (short)uVar4;
                puVar6 = (undefined4 *)((int)puVar6 + 2);
              } while (puVar6 != &uStack_c4);
            }
            goto LAB_0801a6d8;
          }
          puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
        }
        else if (iStack_4c == 2) {
          uVar10 = uStack_64 & 0xffffffe0;
          uStack_64._0_2_ = (ushort)uVar10 | 10;
          uStack_64._2_2_ = (undefined2)(uVar10 >> 0x10);
          uStack_64 = CONCAT22(uStack_64._2_2_,(ushort)_DAT_0801a898 & (ushort)uStack_64) | 0x280;
          uStack_60 = _DAT_0801a89c;
          puStack_28 = &uStack_58;
          puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
          for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2))
          {
            *(short *)puVar6 = (short)_DAT_0801a89c;
          }
          func_0x080d391c(puVar9 + 8,auStack_e4,puVar9,uStack_64);
          uVar10 = uStack_5c & 0xffffffe0;
          uStack_5c._0_2_ = (ushort)uVar10 | 10;
          uStack_5c._2_2_ = (undefined2)(uVar10 >> 0x10);
          uStack_5c = CONCAT22(uStack_5c._2_2_,(ushort)_DAT_0801a898 & (ushort)uStack_5c) | 0x280;
          *puStack_28 = _DAT_0801a8a4;
          for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2))
          {
            *(short *)puVar6 = (short)uStack_58;
          }
          func_0x080d391c(puVar9 + 0x10,auStack_e4,puVar9,uStack_5c);
        }
        else {
          puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
          if (iStack_4c == 3) {
            uVar10 = uStack_94 & 0xffffffe0;
            uStack_94._0_2_ = (ushort)uVar10 | 10;
            uStack_94._2_2_ = (undefined2)(uVar10 >> 0x10);
            uStack_94 = CONCAT22(uStack_94._2_2_,(ushort)_DAT_0801a580 & (ushort)uStack_94) | 0x280;
            uStack_90 = _DAT_0801a584;
            puVar7 = auStack_8c;
            for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2)
                ) {
              *(short *)puVar6 = (short)_DAT_0801a584;
            }
            func_0x080d391c(puVar9 + 8,auStack_e4,puVar9,uStack_94);
            auStack_8c[0] = auStack_8c[0] & 0xffe0 | 10;
            auStack_8c[0] = (ushort)_DAT_0801a580 & auStack_8c[0] | 0x280;
            uStack_88 = _DAT_0801a58c;
            for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2)
                ) {
              *(short *)puVar6 = (short)_DAT_0801a58c;
            }
            goto LAB_0801a6d8;
          }
        }
        goto LAB_0801a79e;
      }
      if (iStack_4c == 1) {
        memcpy(puVar9 + 8,puVar9,0x20);
        puVar7 = auStack_ac;
        auStack_ac[0] = auStack_ac[0] & 0xffe0 | 3;
        auStack_ac[0] = (ushort)_DAT_0801a400 & auStack_ac[0] | 0x360;
        puStack_a8 = &UNK_00002120;
        puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
        for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2)) {
          *(undefined2 *)puVar6 = 0x2120;
        }
LAB_0801a6d8:
        func_0x080d391c(puVar9 + 0x10,auStack_e4,puVar9,*(undefined4 *)puVar7);
      }
      else {
        if (1 < iStack_4c) {
          if (iStack_4c == 2) {
            uVar10 = uStack_a4 & 0xffffffe0;
            uStack_a4._0_2_ = (ushort)uVar10 | 3;
            uStack_a4._2_2_ = (undefined2)(uVar10 >> 0x10);
            uStack_a4 = CONCAT22(uStack_a4._2_2_,(ushort)_DAT_0801a4b0 & (ushort)uStack_a4) | 0x360;
            puStack_a0 = &UNK_00002120;
            puVar7 = auStack_9c;
            puStack_34 = &uStack_98;
            puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
            for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2)
                ) {
              *(undefined2 *)puVar6 = 0x2120;
            }
            func_0x080d391c(puVar9 + 8,auStack_e4,puVar9,uStack_a4);
            auStack_9c[0] = auStack_9c[0] & 0xffe0 | 10;
            auStack_9c[0] = (ushort)_DAT_0801a4b0 & auStack_9c[0] | 0x280;
            uStack_98 = _DAT_0801a4b8;
            if (auStack_e4 != &uStack_c4) {
              uVar4 = *puStack_34;
              puVar6 = auStack_e4;
              do {
                *(short *)puVar6 = (short)uVar4;
                puVar6 = (undefined4 *)((int)puVar6 + 2);
              } while (puVar6 != &uStack_c4);
            }
          }
          else {
            puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
            if (iStack_4c != 3) goto LAB_0801a79e;
            uVar10 = uStack_c4 & 0xffffffe0;
            uStack_c4._0_2_ = (ushort)uVar10 | 10;
            uStack_c4._2_2_ = (undefined2)(uVar10 >> 0x10);
            uStack_c4 = CONCAT22(uStack_c4._2_2_,(ushort)_DAT_0801a320 & (ushort)uStack_c4) | 0x280;
            uStack_c0 = _DAT_0801a324;
            puVar7 = auStack_bc;
            for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2)
                ) {
              *(short *)puVar6 = (short)_DAT_0801a324;
            }
            func_0x080d391c(puVar9 + 8,auStack_e4,puVar9,uStack_c4);
            auStack_bc[0] = auStack_bc[0] & 0xffe0 | 9;
            auStack_bc[0] = (ushort)_DAT_0801a320 & auStack_bc[0] | 0x2a0;
            uStack_b8 = _DAT_0801a32c;
            for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2)
                ) {
              *(short *)puVar6 = (short)_DAT_0801a32c;
            }
          }
          goto LAB_0801a6d8;
        }
        if (iStack_4c == 0) {
          uVar10 = uStack_b4 & 0xffffffe0;
          uStack_b4._0_2_ = (ushort)uVar10 | 9;
          uStack_b4._2_2_ = (undefined2)(uVar10 >> 0x10);
          uStack_b4 = CONCAT22(uStack_b4._2_2_,(ushort)_DAT_0801a394 & (ushort)uStack_b4) | 0x2a0;
          uStack_b0 = _DAT_0801a398;
          puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
          for (puVar6 = auStack_e4; puVar6 != &uStack_c4; puVar6 = (undefined4 *)((int)puVar6 + 2))
          {
            *(short *)puVar6 = (short)_DAT_0801a398;
          }
          func_0x080d393c(puVar9 + 8,auStack_e4,puVar9,uStack_b4);
          memcpy(puVar9 + 0x10,puVar9,0x20);
        }
        else {
          puStack_24 = (undefined1 *)((int)puVar9 + 0x82);
        }
      }
LAB_0801a79e:
      *puStack_24 = 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x16);
  bVar1 = true;
LAB_0801a7b0:
  uVar8 = uStack_3c >> 0x18;
  uVar10 = uStack_38 >> 0x18;
  uVar4 = func_0800E324(*(int *)(iStack_54 + _DAT_0801a8a8) + 0x10);
  bVar2 = func_080A4650(uVar8,uVar10,uVar4,*(undefined4 *)(iStack_54 + _DAT_0801a8ac));
  pbVar11 = (byte *)(iStack_54 + _DAT_0801a8b0);
  if ((*pbVar11 != bVar2) || (bVar1)) {
    *pbVar11 = bVar2;
    func_080A5DFC(*(undefined4 *)(iStack_54 + 4),(uint)*pbVar11,0x1e - (uint)*pbVar11);
    bVar2 = *pbVar11;
    uVar8 = 0;
    uStack_40 = bVar2 & 0x1f;
    puVar5 = (undefined1 *)(iStack_54 + _DAT_0801a8b4);
    iVar13 = iStack_54 + 0x1fc;
    iVar3 = iStack_54 + 0x1dc;
    iVar12 = iStack_54 + _DAT_0801a8b4 + -0x22;
    do {
      uVar10 = uStack_44 & _DAT_0801a8b8 | (uStack_44 & 0xffffffe0 | uStack_40) & 0xff;
      uStack_44 = uVar10 & _DAT_0801a8bc |
                  uVar10 & _DAT_0801a898 & 0xffff | (0x1e - bVar2 & 0x1f) << 5;
      func_0x080d391c(iVar12,iVar3,iVar13,uStack_44);
      *puVar5 = 1;
      puVar5 = puVar5 + 0x84;
      iVar13 = iVar13 + 0x84;
      iVar3 = iVar3 + 0x84;
      iVar12 = iVar12 + 0x84;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x16);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801A8C0 @ 0x0801A8C0
// =============================================================================
undefined8 func_0801A8C0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 < 6) {
    uVar1 = 3;
  }
  else if (param_2 < 0xc) {
    uVar1 = 0;
  }
  else if (param_2 < 0x12) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0801B498 @ 0x0801B498
// =============================================================================
undefined8 func_0801B498(int param_1,ushort *param_2,short *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  short sStack_34;
  short sStack_32;
  short sStack_30;
  short sStack_2e;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  uStack_2c = 100;
  uStack_28 = 1;
  iStack_24 = param_1 + 8;
  piVar1 = (int *)(param_1 + 0xc);
  do {
    iVar5 = *piVar1;
    if (((iVar5 != 0) && ((*param_2 & 0x3ff) == *(ushort *)(iVar5 + 4))) &&
       (func_0x080d3914(&sStack_34,iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0xc)),
       ((int)*param_3 - (int)sStack_30 & (int)sStack_34 - (int)param_3[2] &
        (int)param_3[1] - (int)sStack_2e & (int)sStack_32 - (int)param_3[3]) < 0)) {
      if (uStack_2c != 100) {
        iVar3 = *(int *)(iStack_24 + uStack_2c * 4);
        iVar6 = (int)(short)((ushort)((param_2[1] & _DAT_0801b5bc) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 1) >> 2));
        iVar2 = *(short *)(iVar3 + 10) - iVar6;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        iVar4 = (int)(short)((ushort)((param_2[2] & _DAT_0801b5bc) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 3) >> 2));
        iVar3 = *(short *)(iVar3 + 0xe) - iVar4;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        iVar6 = *(short *)(iVar5 + 10) - iVar6;
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        iVar4 = *(short *)(iVar5 + 0xe) - iVar4;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar2 * iVar2 + iVar3 * iVar3 < iVar6 * iVar6 + iVar4 * iVar4) goto LAB_0801b59c;
      }
      uStack_2c = uStack_28;
    }
LAB_0801b59c:
    piVar1 = piVar1 + 1;
    uStack_28 = uStack_28 + 1;
    if (99 < uStack_28) {
      return CONCAT44(in_lr,uStack_2c);
    }
  } while( true );
}

// =============================================================================
// Function: func_0801B9E8 @ 0x0801B9E8
// =============================================================================
undefined8 func_0801B9E8(int param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ushort *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  undefined4 in_lr;
  ushort auStack_e0 [16];
  byte abStack_c0 [4];
  undefined4 uStack_bc;
  ushort auStack_b8 [2];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined *puStack_a4;
  undefined4 uStack_a0;
  undefined *puStack_9c;
  ushort auStack_98 [2];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ushort auStack_88 [2];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ushort auStack_78 [2];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ushort auStack_68 [2];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  ushort auStack_54 [2];
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  uint *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  ushort *puStack_2c;
  ushort *puStack_28;
  uint uStack_24;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  
  puVar14 = auStack_e0;
  puVar15 = auStack_e0;
  puVar16 = auStack_e0;
  puVar17 = auStack_e0;
  puVar18 = auStack_e0;
  puVar2 = auStack_e0;
  puVar19 = auStack_e0;
  puVar20 = auStack_e0;
  puVar21 = auStack_e0;
  puVar3 = auStack_e0;
  puVar22 = auStack_e0;
  puVar4 = auStack_e0;
  puVar23 = auStack_e0;
  puVar24 = auStack_e0;
  iStack_50 = param_3;
  iVar1 = func_0x080a4698(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  if (*(char *)(iVar1 + 0x24) != '\0') {
    iVar1 = param_1 + 0x1bc + iStack_50 * 0x84;
    memcpy(iVar1,param_2,0x20);
    puVar5 = (undefined1 *)(iVar1 + 0x82);
    *puVar5 = 1;
    *(char *)(iVar1 + 0x83) = param_4;
    goto LAB_0801c0b6;
  }
  iVar1 = **(int **)(param_1 + 4);
  if (iVar1 == 0x2e) {
    uStack_24 = 1;
  }
  else if (iVar1 < 0x2f) {
    if (iVar1 < 0x2c) goto LAB_0801ba68;
    uStack_24 = 0;
  }
  else if (iVar1 == 0x2f) {
    uStack_24 = 2;
  }
  else {
LAB_0801ba68:
    uStack_24 = *(uint *)(*(int *)(param_1 + _DAT_0801ba54) + 8);
  }
  uStack_4c = (uint)*(byte *)(param_1 + _DAT_0801baf4);
  iVar12 = *(int *)(param_1 + _DAT_0801baf8);
  uStack_48 = 0x1e - uStack_4c;
  iVar1 = iStack_50 * 0x20;
  puVar11 = (undefined4 *)(param_1 + 0x1bc + iStack_50 * 0x84);
  memcpy(puVar11,param_2,0x20);
  puVar7 = (ushort *)((int)puVar11 + 0x82);
  *(undefined1 *)puVar7 = 1;
  *(char *)((int)puVar11 + 0x83) = param_4;
  iStack_40 = iVar1;
  if (param_4 == '\0') {
    puVar11[8] = *puVar11;
    puVar11[9] = puVar11[1];
    puVar11[10] = puVar11[2];
    puVar11[0xb] = puVar11[3];
    puVar11[0xc] = puVar11[4];
    puVar11[0xd] = puVar11[5];
    puVar11[0xe] = puVar11[6];
    puVar11[0xf] = puVar11[7];
    puVar11[0x10] = *puVar11;
    puVar11[0x11] = puVar11[1];
    puVar11[0x12] = puVar11[2];
    puVar11[0x13] = puVar11[3];
    puVar11[0x14] = puVar11[4];
    puVar11[0x15] = puVar11[5];
    puVar11[0x16] = puVar11[6];
    puVar11[0x17] = puVar11[7];
    *(undefined1 *)puVar7 = 1;
  }
  else {
    puStack_28 = puVar7;
    if (uStack_24 < 5) {
      uVar13 = *(uint *)(PTR_case_0801BB1C_0801bb18 + uStack_24 * 4);
      switch(uVar13 & 0xfffffffe) {
      case 0x801bb1c:
        puVar6 = PTR_case_0801BB1C_0801bb18;
        uVar9 = uStack_24;
        if (uVar13 == 0) {
          return 0;
        }
code_r0x0801bb6c:
        *(byte *)puVar7 = -(char)uVar13 & (byte)puVar6 | (byte)uVar9;
        *puVar7 = (ushort)_DAT_0801bbf4 & *puVar7 | 0x280;
        uStack_bc = _DAT_0801bbf8;
        puVar10 = (uint *)auStack_b8;
        for (; puVar14 != puVar7; puVar14 = puVar14 + 1) {
          *puVar14 = (ushort)_DAT_0801bbf8;
        }
        func_0x080d391c(puVar11 + 8,auStack_e0,puVar11,*(undefined4 *)puVar7);
        auStack_b8[0] = auStack_b8[0] & 0xffe0 | 9;
        auStack_b8[0] = (ushort)_DAT_0801bbf4 & auStack_b8[0] | 0x2a0;
        uStack_b4 = _DAT_0801bc00;
        for (; puVar15 != (ushort *)abStack_c0; puVar15 = puVar15 + 1) {
          *puVar15 = (ushort)_DAT_0801bc00;
        }
        break;
      case 0x801bb30:
        if (iVar12 != 1) {
          if (iVar12 < 2) {
            if (iVar12 == 0) {
              uVar13 = uStack_b0 & 0xffffffe0;
              uStack_b0._0_2_ = (ushort)uVar13 | 9;
              uStack_b0._2_2_ = (undefined2)(uVar13 >> 0x10);
              uStack_b0 = CONCAT22(uStack_b0._2_2_,(ushort)_DAT_0801bc64 & (ushort)uStack_b0) |
                          0x2a0;
              uStack_ac = _DAT_0801bc68;
              puStack_28 = (ushort *)((int)puVar11 + 0x82);
              for (; puVar16 != (ushort *)abStack_c0; puVar16 = puVar16 + 1) {
                *puVar16 = (ushort)_DAT_0801bc68;
              }
              func_0x080d391c(puVar11 + 8,auStack_e0,puVar11,uStack_b0);
              memcpy(puVar11 + 0x10,puVar11,0x20);
            }
            else {
              puStack_28 = (ushort *)((int)puVar11 + 0x82);
            }
          }
          else {
            if (iVar12 == 2) {
              uVar13 = uStack_a0 & 0xffffffe0;
              uStack_a0._0_2_ = (ushort)uVar13 | 3;
              uStack_a0._2_2_ = (undefined2)(uVar13 >> 0x10);
              uStack_a0 = CONCAT22(uStack_a0._2_2_,(ushort)_DAT_0801bd7c & (ushort)uStack_a0) |
                          0x360;
              puStack_9c = &UNK_00002120;
              puStack_3c = (uint *)auStack_98;
              puStack_38 = &uStack_94;
              puStack_28 = (ushort *)((int)puVar11 + 0x82);
              for (; puVar18 != (ushort *)abStack_c0; puVar18 = puVar18 + 1) {
                *puVar18 = 0x2120;
              }
              func_0x080d391c(puVar11 + 8,auStack_e0,puVar11,uStack_a0);
              auStack_98[0] = auStack_98[0] & 0xffe0 | 10;
              auStack_98[0] = (ushort)_DAT_0801bd7c & auStack_98[0] | 0x280;
              uStack_94 = _DAT_0801bd84;
              puVar10 = puStack_3c;
              if (auStack_e0 != (ushort *)abStack_c0) {
                uVar8 = *puStack_38;
                do {
                  *puVar2 = (ushort)uVar8;
                  puVar2 = puVar2 + 1;
                } while (puVar2 != (ushort *)abStack_c0);
              }
              break;
            }
            puStack_28 = (ushort *)((int)puVar11 + 0x82);
            if (iVar12 == 3) {
              puVar7 = (ushort *)abStack_c0;
              uVar13 = 0x20;
              puVar6 = (undefined *)(uint)abStack_c0[0];
              uVar9 = 10;
              goto code_r0x0801bb6c;
            }
          }
          goto LAB_0801c054;
        }
        memcpy(puVar11 + 8,puVar11,0x20);
        uVar13 = uStack_a8 & 0xffffffe0;
        uStack_a8._0_2_ = (ushort)uVar13 | 3;
        uStack_a8._2_2_ = (undefined2)(uVar13 >> 0x10);
        uStack_a8 = CONCAT22(uStack_a8._2_2_,(ushort)_DAT_0801bccc & (ushort)uStack_a8) | 0x360;
        puStack_a4 = &UNK_00002120;
        puStack_28 = (ushort *)((int)puVar11 + 0x82);
        for (; uVar13 = uStack_a8, puVar17 != (ushort *)abStack_c0; puVar17 = puVar17 + 1) {
          *puVar17 = 0x2120;
        }
        goto LAB_0801bf92;
      case 0x801bd88:
        if (iVar12 != 1) {
          if (iVar12 < 2) {
            if (iVar12 == 0) {
              uVar13 = uStack_80 & 0xffffffe0;
              uStack_80._0_2_ = (ushort)uVar13 | 10;
              uStack_80._2_2_ = (undefined2)(uVar13 >> 0x10);
              uStack_80 = CONCAT22(uStack_80._2_2_,(ushort)_DAT_0801bef0 & (ushort)uStack_80) |
                          0x280;
              uStack_7c = _DAT_0801bef4;
              puStack_34 = &uStack_74;
              puStack_28 = (ushort *)((int)puVar11 + 0x82);
              for (; puVar21 != (ushort *)abStack_c0; puVar21 = puVar21 + 1) {
                *puVar21 = (ushort)_DAT_0801bef4;
              }
              func_0x080d391c(puVar11 + 8,auStack_e0,puVar11,uStack_80);
              auStack_78[0] = auStack_78[0] & 0xffe0 | 10;
              auStack_78[0] = (ushort)_DAT_0801bef0 & auStack_78[0] | 0x280;
              uStack_74 = _DAT_0801bef4;
              puVar10 = (uint *)auStack_78;
              if (auStack_e0 != (ushort *)abStack_c0) {
                uVar8 = *puStack_34;
                do {
                  *puVar3 = (ushort)uVar8;
                  puVar3 = puVar3 + 1;
                } while (puVar3 != (ushort *)abStack_c0);
              }
              break;
            }
            puStack_28 = (ushort *)((int)puVar11 + 0x82);
          }
          else if (iVar12 == 2) {
            uVar13 = uStack_60 & 0xffffffe0;
            uStack_60._0_2_ = (ushort)uVar13 | 10;
            uStack_60._2_2_ = (undefined2)(uVar13 >> 0x10);
            uStack_60 = CONCAT22(uStack_60._2_2_,(ushort)_DAT_0801c0c8 & (ushort)uStack_60) | 0x280;
            uStack_5c = _DAT_0801c0cc;
            puStack_2c = auStack_54;
            puStack_28 = (ushort *)((int)puVar11 + 0x82);
            for (; puVar23 != (ushort *)abStack_c0; puVar23 = puVar23 + 1) {
              *puVar23 = (ushort)_DAT_0801c0cc;
            }
            func_0x080d391c(puVar11 + 8,auStack_e0,puVar11,uStack_60);
            uVar13 = uStack_58 & 0xffffffe0;
            uStack_58._0_2_ = (ushort)uVar13 | 10;
            uStack_58._2_2_ = (undefined2)(uVar13 >> 0x10);
            uStack_58 = CONCAT22(uStack_58._2_2_,(ushort)_DAT_0801c0c8 & (ushort)uStack_58) | 0x280;
            *(undefined4 *)puStack_2c = _DAT_0801c0d4;
            for (; puVar24 != (ushort *)abStack_c0; puVar24 = puVar24 + 1) {
              *puVar24 = auStack_54[0];
            }
            func_0x080d391c(puVar11 + 0x10,auStack_e0,puVar11,uStack_58);
          }
          else {
            puStack_28 = (ushort *)((int)puVar11 + 0x82);
            if (iVar12 == 3) {
              uVar13 = uStack_90 & 0xffffffe0;
              uStack_90._0_2_ = (ushort)uVar13 | 10;
              uStack_90._2_2_ = (undefined2)(uVar13 >> 0x10);
              uStack_90 = CONCAT22(uStack_90._2_2_,(ushort)_DAT_0801be48 & (ushort)uStack_90) |
                          0x280;
              uStack_8c = _DAT_0801be4c;
              for (; puVar19 != (ushort *)abStack_c0; puVar19 = puVar19 + 1) {
                *puVar19 = (ushort)_DAT_0801be4c;
              }
              func_0x080d391c(puVar11 + 8,auStack_e0,puVar11,uStack_90);
              auStack_88[0] = auStack_88[0] & 0xffe0 | 10;
              auStack_88[0] = (ushort)_DAT_0801be48 & auStack_88[0] | 0x280;
              uStack_84 = _DAT_0801be54;
              for (; puVar10 = (uint *)auStack_88, puVar20 != (ushort *)abStack_c0;
                  puVar20 = puVar20 + 1) {
                *puVar20 = (ushort)_DAT_0801be54;
              }
              break;
            }
          }
          goto LAB_0801c054;
        }
        uVar13 = uStack_70 & 0xffffffe0;
        uStack_70._0_2_ = (ushort)uVar13 | 10;
        uStack_70._2_2_ = (undefined2)(uVar13 >> 0x10);
        uStack_70 = CONCAT22(uStack_70._2_2_,(ushort)_DAT_0801bfa0 & (ushort)uStack_70) | 0x280;
        uStack_6c = _DAT_0801bfa4;
        puStack_30 = &uStack_64;
        puStack_28 = (ushort *)((int)puVar11 + 0x82);
        for (; puVar22 != (ushort *)abStack_c0; puVar22 = puVar22 + 1) {
          *puVar22 = (ushort)_DAT_0801bfa4;
        }
        func_0x080d391c(puVar11 + 8,auStack_e0,puVar11,uStack_70);
        auStack_68[0] = auStack_68[0] & 0xffe0 | 10;
        auStack_68[0] = (ushort)_DAT_0801bfa0 & auStack_68[0] | 0x280;
        uStack_64 = _DAT_0801bfa4;
        puVar10 = (uint *)auStack_68;
        if (auStack_e0 != (ushort *)abStack_c0) {
          uVar8 = *puStack_30;
          do {
            *puVar4 = (ushort)uVar8;
            puVar4 = puVar4 + 1;
          } while (puVar4 != (ushort *)abStack_c0);
        }
      }
      uVar13 = *puVar10;
LAB_0801bf92:
      func_0x080d391c(puVar11 + 0x10,auStack_e0,puVar11,uVar13);
    }
LAB_0801c054:
    *(undefined1 *)puStack_28 = 1;
  }
  iVar1 = param_1 + 0x1bc + (iStack_40 + iStack_50) * 4;
  uVar13 = uStack_44 & _DAT_0801c0d8 | uStack_44 & 0xe0 | uStack_4c & 0x1f;
  uStack_44 = uVar13 & _DAT_0801c0dc | _DAT_0801c0c8 & uVar13 & 0xffff | (uStack_48 & 0x1f) << 5;
  func_0x080d391c(iVar1 + 0x60,iVar1 + 0x20,iVar1 + 0x40,uStack_44);
  puVar5 = (undefined1 *)(iVar1 + 0x82);
  *puVar5 = 1;
LAB_0801c0b6:
  return CONCAT44(puVar5,in_lr);
}

// =============================================================================
// Function: func_0801C0F8 @ 0x0801C0F8
// =============================================================================
undefined8 func_0801C0F8(int param_1,ushort *param_2,int *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  uVar7 = 0;
  if ((*param_2 & 0x3ff) == 2) {
    iVar3 = (int)(short)((ushort)((param_2[1] & _DAT_0801c18c) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 1) >> 2));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    uVar5 = iVar3 >> 3;
    iVar3 = (int)(short)((ushort)((param_2[2] & _DAT_0801c18c) << 6) |
                        (ushort)(*(byte *)((int)param_2 + 3) >> 2));
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    uVar4 = iVar3 >> 3;
    if ((((0x21 < uVar5) && (0x15 < uVar4)) && (uVar5 < 0x78)) && (uVar4 < 0x48)) {
      uVar6 = uVar5 - 0x22 >> 1;
      uVar5 = uVar4 - 0x16 >> 1;
      *param_3 = *(int *)(param_1 + _DAT_0801c190) + _DAT_0801c194 + (uVar6 + uVar5 * 0x2b) * 4;
      sVar1 = (short)uVar6;
      *(short *)(param_3 + 1) = sVar1 * 2 + 0x22;
      sVar2 = (short)uVar5;
      *(short *)((int)param_3 + 6) = sVar2 * 2 + 0x16;
      *(short *)(param_3 + 2) = sVar1;
      *(short *)((int)param_3 + 10) = sVar2;
      uVar7 = 1;
    }
  }
  return CONCAT44(in_lr,uVar7);
}

// =============================================================================
// Function: func_0801C198 @ 0x0801C198
// =============================================================================
undefined8 func_0801C198(int param_1,ushort *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = 0;
  if (_DAT_0801c20c < (*param_2 & 0x3ff) - 0x34) goto LAB_0801c28c;
  iVar7 = *(int *)(param_1 + _DAT_0801c210) + _DAT_0801c214;
  iVar3 = (int)(short)((ushort)((param_2[1] & _DAT_0801c218) << 6) |
                      (ushort)(*(byte *)((int)param_2 + 1) >> 2));
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  uVar6 = iVar3 >> 3;
  iVar3 = (int)(short)((ushort)((param_2[2] & _DAT_0801c218) << 6) |
                      (ushort)(*(byte *)((int)param_2 + 3) >> 2));
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  uVar5 = iVar3 >> 3;
  uVar4 = func_0x0809d8a0(iVar7);
  if (uVar4 < 5) {
    switch(*(uint *)(uVar4 * 4 + _DAT_0801c21c) & 0xfffffffe) {
    case 0x801c234:
      break;
    case 0x801c23a:
      break;
    case 0x801c240:
      goto case_0801C240;
    }
  }
  else {
case_0801C240:
  }
  if ((1 < uVar6) && (6 < uVar5)) {
    iVar3 = func_0809D8A4(iVar7);
    if (uVar6 < iVar3 * 2 + 2U) {
      iVar3 = func_0809D8B8(iVar7);
      if (uVar5 < iVar3 * 2 + 7U) {
        sVar1 = (short)(uVar6 - 2 >> 1);
        *param_3 = sVar1 * 2 + 2;
        sVar2 = (short)(uVar5 - 7 >> 1);
        param_3[1] = sVar2 * 2 + 7;
        param_3[2] = sVar1;
        param_3[3] = sVar2;
        uVar8 = 1;
      }
    }
  }
LAB_0801c28c:
  return CONCAT44(in_lr,uVar8);
}

// =============================================================================
// Function: func_0801C29C @ 0x0801C29C
// =============================================================================
undefined8 func_0801C29C(int *param_1,ushort *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  
  iVar12 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  cVar2 = func_0801C0F8(param_1,param_2,&uStack_24);
  if (cVar2 != '\0') {
    piVar10 = (int *)((int)param_1 + _DAT_0801c338);
    iVar12 = Field_TillSoil(uStack_24,*(int *)(*piVar10 + 8) == 0);
    uVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (uVar3 == (*param_2 & 0x3ff)) {
      iVar6 = param_1[1];
      iVar11 = *piVar10 + _DAT_0801c33c;
      uVar9 = (uint)uStack_1c;
      uVar3 = (uint)uStack_1a;
      bVar1 = false;
      if ((uVar9 < 0x2b) && (uVar3 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = iVar11 + (uVar9 + (uVar3 + 1) * 0x2b) * 4;
      }
      else {
        iVar5 = 0;
      }
      iVar7 = uVar3 - 1;
      bVar1 = false;
      if (((-1 < iVar7) && (uVar9 < 0x2b)) && (iVar7 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar7 = iVar11 + (uVar9 + iVar7 * 0x2b) * 4;
      }
      else {
        iVar7 = 0;
      }
      uVar4 = func_0800AF5C(iVar11 + (uVar9 + uVar3 * 0x2b) * 4,iVar5,iVar7);
      func_080AA6D0(iVar6,uStack_20,uStack_1e,uStack_24,uVar4);
    }
    if (iVar12 == 3) {
      uVar3 = 0;
      pbVar8 = (byte *)((int)param_1 + _DAT_0801c3d8);
      do {
        if ((*pbVar8 & 3) == 0) {
          *pbVar8 = *pbVar8 & 0xfc | 2;
          iVar6 = _DAT_0801c38c;
          *(undefined2 *)((int)param_1 + _DAT_0801c38c) = uStack_20;
          *(undefined2 *)((int)param_1 + iVar6 + 2) = uStack_1e;
          break;
        }
        pbVar8 = pbVar8 + 0xc;
        param_1 = param_1 + 3;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
    }
  }
  return CONCAT44(in_lr,iVar12);
}

// =============================================================================
// Function: func_0801C3E0 @ 0x0801C3E0
// =============================================================================
undefined4 func_0801C3E0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 in_lr;
  
  bVar1 = false;
  uVar8 = 0;
  piVar2 = (int *)(_DAT_0801c490 + (int)param_1);
  pbVar7 = (byte *)((int)param_1 + _DAT_0801c494);
  do {
    if ((*pbVar7 & 3) == 2) {
      *pbVar7 = *pbVar7 & 0xf0 | 1;
      uVar3 = func_080005D4(0x40);
      uVar4 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x68));
      iVar5 = func_080A4A00(uVar3,uVar4,_DAT_0801c498,param_1,3,0x1a,0);
      iVar6 = *piVar2;
      if ((iVar5 != iVar6) && (iVar6 != 0)) {
        func_0x080d3914(iVar6,3,*(undefined4 *)(*(int *)(iVar6 + 0x24) + 8));
      }
      *piVar2 = iVar5;
      bVar1 = true;
    }
    piVar2 = piVar2 + 3;
    pbVar7 = pbVar7 + 0xc;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  if (bVar1) {
    func_08032384(param_1[2],2,0);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801C49C @ 0x0801C49C
// =============================================================================
undefined8 func_0801C49C(int *param_1,ushort *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 in_lr;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  *param_3 = 0;
  cVar1 = func_0801C198(param_1,param_2,&uStack_28);
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    piVar8 = (int *)((int)param_1 + _DAT_0801c534);
    iVar2 = *piVar8 + _DAT_0801c538;
    iVar3 = func_0x0809d8d4(iVar2,uStack_24,uStack_22);
    uVar7 = (uint)(iVar3 == 0);
    uVar4 = func_0809D8E8(iVar2,uStack_24,uStack_22,*piVar8);
    *param_3 = uVar4;
    uVar5 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (uVar5 == (*param_2 & 0x3ff)) {
      iVar3 = param_1[1];
      uVar4 = func_0x0809d8d4(iVar2,uStack_24,uStack_22);
      uVar6 = func_0809E0AC(iVar2,uStack_24,uStack_22);
      func_080AA540(iVar3,uStack_28,uStack_26,uVar4,uVar6);
    }
  }
  return CONCAT44(in_lr,uVar7);
}

// =============================================================================
// Function: func_0801C550 @ 0x0801C550
// =============================================================================
undefined4
func_0801C550(int *param_1,int param_2,uint param_3,uint param_4,byte param_5,uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  undefined4 in_lr;
  undefined2 *apuStack_2c [2];
  uint uStack_24;
  
  uStack_24 = param_6 & 0xffff;
  pbVar6 = (byte *)(*_DAT_0801c680 + _DAT_0801c684 + param_2 * 0xc);
  *pbVar6 = *pbVar6 & 0xfc | 1;
  uVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  uVar2 = (ushort)_DAT_0801c688;
  uVar1 = (ushort)_DAT_0801c68c;
  *(ushort *)(pbVar6 + 2) = uVar1 & *(ushort *)(pbVar6 + 2) | uVar3 & uVar2;
  pbVar6[3] = pbVar6[3] & 3 | (byte)((param_3 & 0x3f) << 2);
  *(ushort *)(pbVar6 + 4) =
       uVar1 & *(ushort *)(pbVar6 + 4) | (ushort)((param_3 & 0xffff) >> 6) & uVar2;
  *(uint *)(pbVar6 + 4) = *(uint *)(pbVar6 + 4) & _DAT_0801c690 | (param_4 & 0xffff) << 10;
  *pbVar6 = *pbVar6 & 0xf3 | (param_5 & 3) << 2;
  *(undefined2 *)(pbVar6 + 8) = (undefined2)uStack_24;
  piVar8 = (int *)((int)param_1 + param_2 * 4 + _DAT_0801c694);
  iVar4 = func_080005D4(0x4c);
  piVar5 = (int *)func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 100));
  func_080A4740(iVar4,param_1,2,0x1b);
  *(undefined4 *)(iVar4 + 0x24) = _DAT_0801c698;
  iVar7 = *piVar5;
  func_0x080d3918(apuStack_2c,piVar5,uStack_24,*(undefined4 *)(iVar7 + 0xc));
  func_0x080d3918(iVar4 + 0x28,piVar5,*apuStack_2c[0],*(undefined4 *)(iVar7 + 0x10));
  *(undefined1 *)(iVar4 + 0x48) = 1;
  iVar7 = *piVar8;
  if ((iVar4 != iVar7) && (iVar7 != 0)) {
    func_0x080d3914(iVar7,3,*(undefined4 *)(*(int *)(iVar7 + 0x24) + 8));
  }
  *piVar8 = iVar4;
  return in_lr;
}

// =============================================================================
// Function: func_0801C69C @ 0x0801C69C
// =============================================================================
undefined4 func_0801C69C(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(*_DAT_0801c6e0 + _DAT_0801c6e4 + param_2 * 0xc);
  *pbVar2 = *pbVar2 & 0xfc;
  piVar3 = (int *)(param_1 + _DAT_0801c6e8 + param_2 * 4);
  iVar1 = *piVar3;
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0x24) + 8));
  }
  *piVar3 = 0;
  return in_lr;
}

// =============================================================================
// Function: func_0801C6EC @ 0x0801C6EC
// =============================================================================
undefined8 func_0801C6EC(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  undefined4 in_lr;
  undefined4 uStack_2c;
  
  uStack_2c = 0;
  iVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  iVar10 = _DAT_0801c81c;
  if (iVar2 == 2) {
    uVar3 = param_2 * 2 + 0x22;
    uVar4 = param_3 * 2 + 0x16;
    uVar7 = 0;
    pbVar12 = (byte *)((int)param_1 + _DAT_0801c79c);
    puVar9 = (ushort *)((int)param_1 + _DAT_0801c7a0);
    do {
      if ((((*pbVar12 & 3) == 1) && (uVar3 == *puVar9)) && (uVar4 == puVar9[1])) {
        if ((*pbVar12 & 0xf) >> 2 != 2) {
          func_08012464(*(undefined4 *)((int)param_1 + _DAT_0801c7a4),0,0xc0);
          *pbVar12 = *pbVar12 & 0xf3 | 8;
          iVar10 = *(int *)(puVar9 + 2);
          func_0805E860(iVar10 + 0x28,_DAT_0801c7a8);
          *(undefined1 *)(iVar10 + 0x3c) = 1;
          *(undefined1 *)(iVar10 + 0x3e) = 0;
          *(undefined1 *)(iVar10 + 0x3f) = 1;
          func_0800EEF8(*(int *)((int)param_1 + _DAT_0801c7ac) + _DAT_0801c7b0);
        }
        goto LAB_0801c862;
      }
      pbVar12 = pbVar12 + 0xc;
      puVar9 = puVar9 + 6;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    piVar13 = (int *)((int)param_1 + _DAT_0801c818);
    iVar11 = (param_3 * 0x2b + param_2) * 4;
    iVar2 = *piVar13 + _DAT_0801c81c + iVar11;
    uStack_2c = Field_PlantSeeds(iVar2,param_4);
    iVar14 = param_1[1];
    iVar10 = *piVar13 + iVar10;
    iVar6 = param_3 + 1;
    bVar1 = false;
    if (((-1 < param_2) && (-1 < iVar6)) && ((param_2 < 0x2b && (iVar6 < 0x19)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar6 = iVar10 + (iVar6 * 0x2b + param_2) * 4;
    }
    else {
      iVar6 = 0;
    }
    param_3 = param_3 + -1;
    bVar1 = false;
    if (((-1 < param_2) && (-1 < param_3)) && ((param_2 < 0x2b && (param_3 < 0x19)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar8 = iVar10 + (param_3 * 0x2b + param_2) * 4;
    }
    else {
      iVar8 = 0;
    }
    uVar5 = func_0800AF5C(iVar10 + iVar11,iVar6,iVar8);
    func_080AA6D0(iVar14,uVar3,uVar4,iVar2,uVar5);
  }
LAB_0801c862:
  return CONCAT44(in_lr,uStack_2c);
}

// =============================================================================
// Function: func_0801C874 @ 0x0801C874
// =============================================================================
longlong func_0801C874(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint in_lr;
  
  iVar3 = *(int *)((int)param_1 + _DAT_0801c8c0) + _DAT_0801c8c4 + (param_2 + param_3 * 0x2b) * 4;
  cVar1 = func_0800A78C(iVar3);
  if (cVar1 == '\0') {
    uVar2 = func_0801C6EC(param_1,param_2,param_3,param_4);
  }
  else {
    iVar3 = func_0801740C(iVar3);
    if (iVar3 == 1) {
      param_2 = param_2 + -1;
    }
    else if (1 < iVar3) {
      if (iVar3 == 2) {
        param_3 = param_3 + -1;
      }
      else if (iVar3 == 3) {
        param_2 = param_2 + -1;
        param_3 = param_3 + -1;
      }
    }
    uVar2 = func_0801C6EC(param_1,param_2,param_3,param_4);
    func_0801C6EC(param_1,param_2 + 1,param_3,param_4);
    func_0801C6EC(param_1,param_2,param_3 + 1,param_4);
    func_0801C6EC(param_1,param_2 + 1,param_3 + 1,param_4);
  }
  iVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if ((iVar3 == 2) && (uVar2 < 9)) {
    switch(*(uint *)(PTR_case_0801C948_0801c944 + uVar2 * 4) & 0xfffffffe) {
    case 0x801c948:
      param_2 = _PrefetchAbort;
      param_1 = _DataAbort;
    case 0x801c96c:
      func_080AB68C(*(undefined4 *)((int)param_1 + _DAT_0801c988),param_2 * 0x10 + 0x118,
                    param_3 * 0x10 + 0xc0,3);
      break;
    case 0x801c98c:
      func_080AB68C(*(undefined4 *)((int)param_1 + _DAT_0801c9a8),param_2 * 0x10 + 0x118,
                    param_3 * 0x10 + 0xc0,1);
      break;
    case 0x801c9ac:
      func_080AB68C(*(undefined4 *)((int)param_1 + _DAT_0801c9c8),param_2 * 0x10 + 0x118,
                    param_3 * 0x10 + 0xc0,2);
      break;
    case 0x801c9cc:
      func_080AB68C(*(undefined4 *)((int)param_1 + _DAT_0801c9e8),param_2 * 0x10 + 0x120,
                    param_3 * 0x10 + 0xd0,8);
      break;
    case 0x801c9ec:
      func_080AB68C(*(undefined4 *)((int)param_1 + _DAT_0801ca18),param_2 * 0x10 + 0x120,
                    param_3 * 0x10 + 0xd0,6);
    }
  }
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_0801CA1C @ 0x0801CA1C
// =============================================================================
undefined8 func_0801CA1C(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  char acStack_28 [4];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  byte bStack_18;
  
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  cVar1 = func_0801C0F8(param_1,param_2,&uStack_34);
  if (cVar1 == '\0') {
    acStack_28[0] = '\0';
    bStack_18 = 1;
    func_0801D104(param_1,param_2,*(undefined1 *)(param_3 + _DAT_0801ca90),1,acStack_28);
    if (acStack_28[0] != '\0') {
      if (iStack_24 == 6) {
        func_080AB68C(*(undefined4 *)(param_1 + _DAT_0801caac),iStack_20 + 0x10,iStack_1c + 0x20,6);
      }
      else {
        if (iStack_24 != 9) {
          uVar2 = 0;
          goto LAB_0801caca;
        }
        func_080AB68C(*(undefined4 *)(param_1 + _DAT_0801cad4),iStack_20 + 0x18,iStack_1c + 0x20,9);
      }
    }
    uVar2 = bStack_18 ^ 1;
  }
  else {
    uVar2 = func_0801C874(param_1,uStack_2c,uStack_2a,*(undefined1 *)(param_3 + _DAT_0801ca5c));
    uVar2 = uVar2 & 0xff;
  }
LAB_0801caca:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0801CAD8 @ 0x0801CAD8
// =============================================================================
undefined8 func_0801CAD8(int *param_1,ushort *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 in_lr;
  ushort uStack_28;
  ushort uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  *param_3 = 0;
  cVar1 = func_0801C198(param_1,param_2,&uStack_28);
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    piVar8 = (int *)(_DAT_0801cb90 + (int)param_1);
    iVar2 = *piVar8 + _DAT_0801cb94;
    iVar3 = func_0x0809d8d4(iVar2,uStack_24,uStack_22);
    uVar7 = (uint)(iVar3 == 4);
    uVar4 = func_0809D9B4(iVar2,uStack_24,uStack_22,*piVar8);
    *param_3 = uVar4;
    uVar5 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (uVar5 == (*param_2 & 0x3ff)) {
      iVar3 = param_1[1];
      uVar4 = func_0x0809d8d4(iVar2,uStack_24,uStack_22);
      uVar6 = func_0809E0AC(iVar2,uStack_24,uStack_22);
      func_080AA540(iVar3,uStack_28,uStack_26,uVar4,uVar6);
      if (uVar7 != 0) {
        func_080AB68C(*(undefined4 *)(_DAT_0801cb98 + (int)param_1),(uint)uStack_28 * 8 + 8,
                      (uint)uStack_26 * 8 + 0x10,5);
      }
    }
  }
  return CONCAT44(in_lr,uVar7);
}

// =============================================================================
// Function: func_0801CBB0 @ 0x0801CBB0
// =============================================================================
undefined8 func_0801CBB0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_40 [16];
  byte bStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar9 = 0;
  iStack_24 = param_2;
  if (param_2 == 2) {
    puVar2 = (undefined1 *)(_DAT_0801cc14 + param_3);
    uVar8 = 0;
    do {
      uVar7 = 0;
      uVar10 = uVar8 + 1;
      iVar5 = uVar8 * 0xac;
      do {
        iVar3 = Field_PlantSeeds(*(int *)(_DAT_0801cc18 + (int)param_1) + _DAT_0801cc1c + iVar5,*puVar2
                             );
        if (iVar3 != 0) {
          uVar9 = 1;
        }
        uVar9 = (uint)(uVar9 != 0);
        iVar5 = iVar5 + 4;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x2b);
      uVar8 = uVar10;
    } while (uVar10 < 0x19);
  }
  else {
    piVar6 = (int *)(_DAT_0801ccd4 + (int)param_1);
    uVar4 = func_0800E324(*piVar6 + 0x10);
    iVar5 = *piVar6 + _DAT_0801ccd8;
    uVar8 = 0x60;
    puVar2 = (undefined1 *)(param_3 + _DAT_0801ccdc);
    do {
      cVar1 = func_080A1ED4(iVar5,uVar8,uVar4);
      if ((cVar1 != '\0') && (func_080A1CBC(auStack_50,iVar5,uVar8), iStack_4c == iStack_24)) {
        auStack_40[0] = 0;
        bStack_30 = 1;
        func_080174C8(*(int *)(_DAT_0801ccd4 + (int)param_1) + 0x14,
                      *(int *)(_DAT_0801ccd4 + (int)param_1) + _DAT_0801ccd8,uVar8,uVar4,*puVar2,1,
                      auStack_40);
        uVar9 = -uVar9 >> 0x1f | bStack_30 ^ 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x74);
  }
  if (uVar9 != 0) {
    uStack_2c = _DAT_0801cce0;
    uStack_28 = 0;
    func_0x080d3918(param_1,&uStack_2c,0,*(undefined4 *)(*param_1 + 0x140));
  }
  return CONCAT44(in_lr,uVar9);
}

// =============================================================================
// Function: func_0801CCE4 @ 0x0801CCE4
// =============================================================================
undefined8 func_0801CCE4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 in_lr;
  
  piVar10 = (int *)((int)param_1 + _DAT_0801cd5c);
  iVar9 = (param_2 + param_3 * 0x2b) * 4;
  iVar5 = *piVar10 + _DAT_0801cd60 + iVar9;
  uVar2 = func_0800A33C(iVar5,param_4);
  iVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (iVar3 == 2) {
    iVar8 = param_1[1];
    iVar6 = *piVar10 + _DAT_0801cd60;
    iVar3 = param_3 + 1;
    bVar1 = false;
    if ((((-1 < param_2) && (-1 < iVar3)) && (param_2 < 0x2b)) && (iVar3 < 0x19)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = iVar6 + (param_2 + iVar3 * 0x2b) * 4;
    }
    else {
      iVar3 = 0;
    }
    iVar7 = param_3 + -1;
    bVar1 = false;
    if (((-1 < param_2) && (-1 < iVar7)) && ((param_2 < 0x2b && (iVar7 < 0x19)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar7 = iVar6 + (param_2 + iVar7 * 0x2b) * 4;
    }
    else {
      iVar7 = 0;
    }
    uVar4 = func_0800AF5C(iVar6 + iVar9,iVar3,iVar7);
    func_080AA6D0(iVar8,param_2 * 2 + 0x22,param_3 * 2 + 0x16,iVar5,uVar4);
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0801CDBC @ 0x0801CDBC
// =============================================================================
longlong func_0801CDBC(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint in_lr;
  
  iVar3 = *(int *)((int)param_1 + _DAT_0801ce08) + _DAT_0801ce0c + (param_2 + param_3 * 0x2b) * 4;
  cVar1 = func_0800A78C(iVar3);
  if (cVar1 == '\0') {
    iVar3 = func_0801CCE4(param_1,param_2,param_3,param_4);
  }
  else {
    iVar3 = func_0801740C(iVar3);
    if (iVar3 == 1) {
      param_2 = param_2 + -1;
    }
    else if (1 < iVar3) {
      if (iVar3 == 2) {
        param_3 = param_3 + -1;
      }
      else if (iVar3 == 3) {
        param_2 = param_2 + -1;
        param_3 = param_3 + -1;
      }
    }
    iVar3 = func_0801CCE4(param_1,param_2,param_3,param_4);
    func_0801CCE4(param_1,param_2 + 1,param_3,param_4);
    func_0801CCE4(param_1,param_2,param_3 + 1,param_4);
    func_0801CCE4(param_1,param_2 + 1,param_3 + 1,param_4);
  }
  iVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (iVar2 == 2) {
    if (iVar3 == 1) {
      Farm_AddLumber(*(int *)((int)param_1 + _DAT_0801ceb4) + 0x14,1);
      func_080AB68C(*(undefined4 *)((int)param_1 + _DAT_0801ceb8),param_2 * 0x10 + 0x118,
                    param_3 * 0x10 + 0xbb,4);
    }
    else if ((1 < iVar3) && (iVar3 == 2)) {
      Farm_AddLumber(*(int *)((int)param_1 + _DAT_0801cef4) + 0x14,6);
      func_080AB68C(*(undefined4 *)((int)param_1 + _DAT_0801cef8),param_2 * 0x10 + 0x120,
                    param_3 * 0x10 + 0xd0,7);
    }
  }
  return (ulonglong)in_lr << 0x20;
}

// =============================================================================
// Function: func_0801CEFC @ 0x0801CEFC
// =============================================================================
undefined8 func_0801CEFC(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  char acStack_28 [4];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  byte bStack_18;
  
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  cVar1 = func_0801C0F8(param_1,param_2,&uStack_34);
  if (cVar1 == '\0') {
    acStack_28[0] = '\0';
    bStack_18 = 1;
    func_0801D104(param_1,param_2,*(undefined1 *)(param_3 + _DAT_0801cf70),0,acStack_28);
    if (acStack_28[0] != '\0') {
      if (iStack_24 == 4) {
        func_080AB68C(*(undefined4 *)(param_1 + _DAT_0801cfb4),iStack_20 + 8,iStack_1c + 0xb,4);
      }
      else {
        if (iStack_24 != 7) {
          uVar2 = 0;
          goto LAB_0801cfaa;
        }
        func_080AB68C(*(undefined4 *)(param_1 + _DAT_0801cf8c),iStack_20 + 0x10,iStack_1c + 0x20,7);
      }
    }
    uVar2 = bStack_18 ^ 1;
  }
  else {
    uVar2 = func_0801CDBC(param_1,uStack_2c,uStack_2a,*(undefined1 *)(param_3 + _DAT_0801cf3c));
    uVar2 = uVar2 & 0xff;
  }
LAB_0801cfaa:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0801CFB8 @ 0x0801CFB8
// =============================================================================
undefined8 func_0801CFB8(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 in_lr;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_40 [16];
  byte bStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  uVar7 = 0;
  piStack_24 = param_1;
  if (param_2 == 2) {
    param_1 = (int *)((int)param_1 + _DAT_0801d034);
    puVar8 = (undefined1 *)(param_3 + _DAT_0801d038);
    uVar6 = 0;
    do {
      uVar5 = 0;
      uVar4 = uVar6 + 1;
      do {
        iVar2 = func_0800A33C(*param_1 + _DAT_0801d03c + (uVar5 + uVar6 * 0x2b) * 4,*puVar8);
        if (iVar2 - 1U < 2) {
          Farm_AddLumber(*param_1 + 0x14,1);
        }
        if (iVar2 != 0) {
          uVar7 = 1;
        }
        uVar7 = (uint)(uVar7 != 0);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x2b);
      uVar6 = uVar4;
    } while (uVar4 < 0x19);
  }
  else {
    param_1 = (int *)((int)param_1 + _DAT_0801d0f4);
    uVar3 = func_0800E324(*param_1 + 0x10);
    iVar2 = *param_1 + _DAT_0801d0f8;
    uVar6 = 0x60;
    puVar8 = (undefined1 *)(param_3 + _DAT_0801d0fc);
    do {
      cVar1 = func_080A1ED4(iVar2,uVar6,uVar3);
      if ((cVar1 != '\0') && (func_080A1CBC(auStack_50,iVar2,uVar6), iStack_4c == param_2)) {
        auStack_40[0] = 0;
        bStack_30 = 1;
        func_080174C8(*(int *)((int)piStack_24 + _DAT_0801d0f4) + 0x14,
                      *(int *)((int)piStack_24 + _DAT_0801d0f4) + _DAT_0801d0f8,uVar6,uVar3,*puVar8,
                      0,auStack_40);
        uVar7 = -uVar7 >> 0x1f | bStack_30 ^ 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x74);
  }
  if (uVar7 != 0) {
    uStack_2c = _DAT_0801d100;
    uStack_28 = 0;
    func_0x080d3918(piStack_24,&uStack_2c,0,*(undefined4 *)(*piStack_24 + 0x140));
  }
  return CONCAT44(in_lr,uVar7);
}

// =============================================================================
// Function: func_0801D104 @ 0x0801D104
// =============================================================================
undefined8 func_0801D104(int param_1,ushort *param_2,undefined4 param_3,uint param_4,char *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  undefined1 auStack_44 [8];
  short sStack_3c;
  short sStack_3a;
  ushort uStack_34;
  ushort uStack_32;
  short sStack_30;
  short sStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  uint uStack_24;
  
  uStack_24 = param_4 & 0xff;
  piVar5 = (int *)(_DAT_0801d1d4 + param_1);
  iVar1 = *piVar5;
  iVar4 = iVar1 + _DAT_0801d1d8;
  uStack_28 = param_3;
  uVar2 = func_0800E324(iVar1 + 0x10);
  uStack_34 = (ushort)((param_2[1] & _DAT_0801d1dc) << 6) |
              (ushort)(*(byte *)((int)param_2 + 1) >> 2);
  uStack_32 = (ushort)((param_2[2] & _DAT_0801d1dc) << 6) |
              (ushort)(*(byte *)((int)param_2 + 3) >> 2);
  sStack_30 = uStack_34 + 1;
  sStack_2e = uStack_32 + 1;
  iVar1 = func_080A1D20(iVar4,*param_2 & 0x3ff,&uStack_34,uVar2);
  if (iVar1 == -1) goto LAB_0801d228;
  func_080A1CBC(auStack_44,iVar4,iVar1);
  iVar4 = *piVar5;
  func_080174C8(iVar4 + 0x14,iVar4 + _DAT_0801d1d8,iVar1,uVar2,uStack_28,(undefined1)uStack_24,
                param_5);
  if ((*param_5 != '\0') && ((*param_2 & 0x3ff) == **(uint **)(param_1 + 4))) {
    iVar1 = *(int *)(param_5 + 4);
    if (iVar1 == 6) {
      uVar2 = 4;
LAB_0801d1fa:
      uVar3 = 4;
    }
    else {
      if (6 < iVar1) {
        if (iVar1 == 7) {
          uVar2 = 4;
        }
        else {
          if (iVar1 != 9) goto LAB_0801d228;
          uVar2 = 6;
        }
        goto LAB_0801d1fa;
      }
      if (iVar1 != 4) {
LAB_0801d228:
        uVar2 = 0;
        goto LAB_0801d22a;
      }
      uVar2 = 2;
      uVar3 = 2;
    }
    iVar1 = (int)sStack_3c;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    iVar4 = (int)sStack_3a;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    uStack_2c = (undefined2)(iVar1 >> 3);
    uStack_2a = (undefined2)(iVar4 >> 3);
    func_080A5F78(*(uint **)(param_1 + 4),1,&uStack_2c,uVar2,uVar3);
  }
  uVar2 = 1;
LAB_0801d22a:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0801D23C @ 0x0801D23C
// =============================================================================
undefined8 func_0801D23C(int *param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  undefined4 uStack_44;
  ushort uStack_40;
  ushort uStack_3e;
  ushort uStack_3c;
  ushort uStack_3a;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_3a = 0;
  cVar1 = func_0801C0F8(param_1,param_2,&uStack_44);
  if (cVar1 == '\0') {
    uVar6 = 0;
    goto LAB_0801d3ec;
  }
  uStack_38 = func_0800A3C8(uStack_44);
  if (uStack_38 == 1) {
    func_0800D23C(*(int *)(_DAT_0801d33c + (int)param_1) + 0x5f0,1);
LAB_0801d29c:
    iVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (iVar2 == 2) {
      func_080AB68C(*(undefined4 *)(_DAT_0801d340 + (int)param_1),(uint)uStack_40 * 8 + 8,
                    (uint)uStack_3e * 8 + 0x10,0);
    }
    uVar6 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    uStack_24 = -uStack_38;
    if (uVar6 == (*param_2 & 0x3ff)) {
      iStack_34 = *(int *)(_DAT_0801d33c + (int)param_1) + 0x14;
      uVar6 = (uint)uStack_3c;
      uStack_30 = (uint)uStack_40;
      iStack_28 = *(int *)(_DAT_0801d33c + (int)param_1) + _DAT_0801d344;
      iVar2 = uStack_3e - 2;
      iVar12 = (uint)uStack_3a * 0x2b + uVar6 + -0x2b;
      iVar11 = uStack_3a - 1;
      iStack_2c = 2;
      do {
        bVar9 = false;
        if (((-1 < iVar11) && (uVar6 < 0x2b)) && (iVar11 < 0x19)) {
          bVar9 = true;
        }
        if (bVar9) {
          iVar10 = iStack_28 + iVar12 * 4;
        }
        else {
          iVar10 = 0;
        }
        if (iVar10 != 0) {
          iVar7 = param_1[1];
          iVar8 = iStack_34 + _DAT_0801d38c;
          iVar3 = iVar11 + 1;
          bVar9 = false;
          if (((-1 < iVar3) && (uVar6 < 0x2b)) && (iVar3 < 0x19)) {
            bVar9 = true;
          }
          if (bVar9) {
            iVar3 = iVar8 + (uVar6 + iVar3 * 0x2b) * 4;
          }
          else {
            iVar3 = 0;
          }
          iVar4 = iVar11 + -1;
          bVar9 = false;
          if (((-1 < iVar4) && (uVar6 < 0x2b)) && (iVar4 < 0x19)) {
            bVar9 = true;
          }
          if (bVar9) {
            iVar4 = iVar8 + (uVar6 + iVar4 * 0x2b) * 4;
          }
          else {
            iVar4 = 0;
          }
          uVar5 = func_0800AF5C(iVar12 * 4 + iVar8,iVar3,iVar4);
          func_080AA6D0(iVar7,uStack_30,iVar2,iVar10,uVar5);
        }
        iVar2 = iVar2 + 2;
        iVar12 = iVar12 + 0x2b;
        iVar11 = iVar11 + 1;
        iStack_2c = iStack_2c + -1;
      } while (-1 < iStack_2c);
    }
  }
  else {
    uStack_24 = -uStack_38;
    if ((1 < (int)uStack_38) && (uStack_38 == 2)) goto LAB_0801d29c;
  }
  uVar6 = (uStack_24 | uStack_38) >> 0x1f;
LAB_0801d3ec:
  return CONCAT44(in_lr,uVar6);
}

// =============================================================================
// Function: func_0801D3FC @ 0x0801D3FC
// =============================================================================
undefined8 func_0801D3FC(int *param_1,ushort *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  cVar2 = func_0801C0F8(param_1,param_2,&uStack_20);
  if (cVar2 != '\0') {
    iVar3 = func_0800A438(uStack_20);
    uVar4 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (uVar4 == (*param_2 & 0x3ff)) {
      iVar10 = param_1[1];
      iVar9 = *(int *)((int)param_1 + _DAT_0801d484) + _DAT_0801d488;
      uVar8 = (uint)uStack_18;
      uVar4 = (uint)uStack_16;
      bVar1 = false;
      if ((uVar8 < 0x2b) && (uVar4 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = iVar9 + (uVar8 + (uVar4 + 1) * 0x2b) * 4;
      }
      else {
        iVar6 = 0;
      }
      iVar7 = uVar4 - 1;
      bVar1 = false;
      if (((-1 < iVar7) && (uVar8 < 0x2b)) && (iVar7 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar7 = iVar9 + (uVar8 + iVar7 * 0x2b) * 4;
      }
      else {
        iVar7 = 0;
      }
      uVar5 = func_0800AF5C(iVar9 + (uVar8 + uVar4 * 0x2b) * 4,iVar6,iVar7);
      func_080AA6D0(iVar10,uStack_1c,uStack_1a,uStack_20,uVar5);
    }
    if (iVar3 == 1) {
      uVar5 = 1;
      goto LAB_0801d4d8;
    }
  }
  uVar5 = 0;
LAB_0801d4d8:
  return CONCAT44(in_lr,uVar5);
}

// =============================================================================
// Function: func_0801D4E0 @ 0x0801D4E0
// =============================================================================
undefined4 func_0801D4E0(int *param_1,ushort *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  cVar2 = func_0801C0F8(param_1,param_2,&uStack_1c);
  if (cVar2 != '\0') {
    func_0800A460(uStack_1c,param_3);
    uVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (uVar3 == (*param_2 & 0x3ff)) {
      iVar9 = param_1[1];
      iVar8 = *(int *)((int)param_1 + _DAT_0801d568) + _DAT_0801d56c;
      uVar7 = (uint)uStack_14;
      uVar3 = (uint)uStack_12;
      bVar1 = false;
      if ((uVar7 < 0x2b) && (uVar3 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = iVar8 + (uVar7 + (uVar3 + 1) * 0x2b) * 4;
      }
      else {
        iVar5 = 0;
      }
      iVar6 = uVar3 - 1;
      bVar1 = false;
      if (((-1 < iVar6) && (uVar7 < 0x2b)) && (iVar6 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = iVar8 + (uVar7 + iVar6 * 0x2b) * 4;
      }
      else {
        iVar6 = 0;
      }
      uVar4 = func_0800AF5C(iVar8 + (uVar7 + uVar3 * 0x2b) * 4,iVar5,iVar6);
      func_080AA6D0(iVar9,uStack_18,uStack_16,uStack_1c,uVar4);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801D5BC @ 0x0801D5BC
// =============================================================================
undefined4 func_0801D5BC(int *param_1,ushort *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  undefined4 uStack_14;
  
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_1a = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  cVar2 = func_0801C0F8(param_1,param_2,&uStack_20);
  if (cVar2 == '\0') {
    func_0801D6AC(&uStack_14,param_1,param_2);
    *param_3 = uStack_14;
  }
  else {
    Field_HarvestCrop(&uStack_14,uStack_20);
    *param_3 = uStack_14;
    uVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (uVar3 == (*param_2 & 0x3ff)) {
      iVar9 = param_1[1];
      iVar8 = *(int *)((int)param_1 + _DAT_0801d648) + _DAT_0801d64c;
      uVar7 = (uint)uStack_18;
      uVar3 = (uint)uStack_16;
      bVar1 = false;
      if ((uVar7 < 0x2b) && (uVar3 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = iVar8 + (uVar7 + (uVar3 + 1) * 0x2b) * 4;
      }
      else {
        iVar5 = 0;
      }
      iVar6 = uVar3 - 1;
      bVar1 = false;
      if (((-1 < iVar6) && (uVar7 < 0x2b)) && (iVar6 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = iVar8 + (uVar7 + iVar6 * 0x2b) * 4;
      }
      else {
        iVar6 = 0;
      }
      uVar4 = func_0800AF5C(iVar8 + (uVar7 + uVar3 * 0x2b) * 4,iVar5,iVar6);
      func_080AA6D0(iVar9,uStack_1c,uStack_1a,uStack_20,uVar4);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801D6AC @ 0x0801D6AC
// =============================================================================
undefined8 func_0801D6AC(undefined4 *param_1,int param_2,ushort *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [8];
  short sStack_34;
  short sStack_32;
  ushort uStack_2c;
  ushort uStack_2a;
  short sStack_28;
  short sStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  iVar4 = *(int *)(param_2 + _DAT_0801d7a4) + _DAT_0801d7a8;
  uVar2 = func_0800E324(*(int *)(param_2 + _DAT_0801d7a4) + 0x10);
  uStack_2c = (ushort)((param_3[1] & _DAT_0801d7ac) << 6) |
              (ushort)(*(byte *)((int)param_3 + 1) >> 2);
  uStack_2a = (ushort)((param_3[2] & _DAT_0801d7ac) << 6) |
              (ushort)(*(byte *)((int)param_3 + 3) >> 2);
  sStack_28 = uStack_2c + 1;
  sStack_26 = uStack_2a + 1;
  iVar3 = func_080A1D20(iVar4,*param_3 & 0x3ff,&uStack_2c,uVar2);
  func_0x0800efec(&uStack_44);
  if (iVar3 != -1) {
    func_080A1B38(&uStack_40,iVar4,*param_3 & 0x3ff,&uStack_2c,uVar2);
    uStack_44 = uStack_40;
    cVar1 = func_0800F06C(&uStack_44);
    if ((cVar1 == '\0') && ((*param_3 & 0x3ff) == **(uint **)(param_2 + 4))) {
      func_080A1CBC(auStack_3c,iVar4,iVar3);
      iVar3 = (int)sStack_34;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }
      iVar4 = (int)sStack_32;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      uStack_24 = (undefined2)(iVar3 >> 3);
      uStack_22 = (undefined2)(iVar4 >> 3);
      func_080A5F78(*(undefined4 *)(param_2 + 4),1,&uStack_24,2,2);
    }
  }
  *param_1 = uStack_44;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0801D7B0 @ 0x0801D7B0
// =============================================================================
undefined4 func_0801D7B0(int *param_1,ushort *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_14 = 0;
  uStack_12 = 0;
  cVar2 = func_0801C0F8(param_1,param_2,&uStack_1c);
  if (cVar2 != '\0') {
    Field_PlaceItem(uStack_1c,param_3);
    uVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (uVar3 == (*param_2 & 0x3ff)) {
      iVar9 = param_1[1];
      iVar8 = *(int *)((int)param_1 + _DAT_0801d838) + _DAT_0801d83c;
      uVar7 = (uint)uStack_14;
      uVar3 = (uint)uStack_12;
      bVar1 = false;
      if ((uVar7 < 0x2b) && (uVar3 + 1 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = iVar8 + (uVar7 + (uVar3 + 1) * 0x2b) * 4;
      }
      else {
        iVar5 = 0;
      }
      iVar6 = uVar3 - 1;
      bVar1 = false;
      if (((-1 < iVar6) && (uVar7 < 0x2b)) && (iVar6 < 0x19)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar6 = iVar8 + (uVar7 + iVar6 * 0x2b) * 4;
      }
      else {
        iVar6 = 0;
      }
      uVar4 = func_0800AF5C(iVar8 + (uVar7 + uVar3 * 0x2b) * 4,iVar5,iVar6);
      func_080AA6D0(iVar9,uStack_18,uStack_16,uStack_1c,uVar4);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801D88C @ 0x0801D88C
// =============================================================================
undefined8 func_0801D88C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  cVar1 = func_0801C0F8(param_1,param_2,&uStack_14);
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  else {
    cVar1 = Field_CanPlaceItem(uStack_14,param_3);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0801D8CC @ 0x0801D8CC
// =============================================================================
undefined4 func_0801D8CC(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + _DAT_0801d910) = 1;
  if (*(char *)(*(int *)(param_1 + _DAT_0801d914) + _DAT_0801d918) == '\0') {
    for (piVar2 = (int *)(param_1 + 8); piVar2 != (int *)(param_1 + 0x198); piVar2 = piVar2 + 1) {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        func_0x080d3910(iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x20));
      }
    }
  }
  else {
    for (piVar2 = (int *)(param_1 + 8); piVar2 != (int *)(param_1 + 0x198); piVar2 = piVar2 + 1) {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        func_0x080d3910(iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x20));
      }
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801D948 @ 0x0801D948
// =============================================================================
undefined4 func_0801D948(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + _DAT_0801d970) = 0;
  if (*(char *)(*(int *)(param_1 + _DAT_0801d974) + _DAT_0801d978) == '\0') {
    for (piVar2 = (int *)(param_1 + 8); piVar2 != (int *)(param_1 + 0x198); piVar2 = piVar2 + 1) {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        func_0x080d3910(iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x24));
      }
    }
  }
  else {
    func_0x080d3910(*(int *)(param_1 + 8),
                    *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + 0x24));
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801D9A8 @ 0x0801D9A8
// =============================================================================
undefined4 func_0801D9A8(int param_1)

{
  undefined4 in_lr;
  
  func_08012B24(*(undefined4 *)(param_1 + _DAT_0801d9b8));
  return in_lr;
}

// =============================================================================
// Function: func_0801D9BC @ 0x0801D9BC
// =============================================================================
undefined8 func_0801D9BC(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)((int)param_1 + _DAT_0801d9d4);
  if (*(int *)(iVar5 + 8) == 1) {
    uVar2 = 10;
    goto LAB_0801db3e;
  }
  if (*(int *)(iVar5 + 8) - 3U < 2) {
    uVar2 = 0xb;
    goto LAB_0801db3e;
  }
  iVar3 = func_0800C07C(iVar5 + 500);
  uVar4 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (uVar4 - 0x34 <= _DAT_0801da18) {
    uVar4 = 2;
  }
  if (uVar4 < 0x2c) {
    switch(*(uint *)(uVar4 * 4 + _DAT_0801da1c) & 0xfffffffe) {
    case 0x801dad0:
      if ((*(byte *)(iVar5 + 0x12) & 0x1f) * 0x1000000 + 0xfa000000 >> 0x18 < 0xe) {
        if ((iVar3 == 0) || (cVar1 = func_0x0800bb74(iVar3), cVar1 == '\0')) {
          iVar5 = func_0800E324(iVar5 + 0x10);
          if (iVar5 == 1) {
            uVar2 = 2;
          }
          else {
            if (1 < iVar5) {
              if (iVar5 == 2) {
                uVar2 = 3;
                goto LAB_0801db3e;
              }
              if (iVar5 == 3) {
                uVar2 = 4;
                goto LAB_0801db3e;
              }
            }
            uVar2 = 1;
          }
        }
        else {
          uVar2 = func_0800BB7C(iVar3);
        }
        goto LAB_0801db3e;
      }
      break;
    case 0x801db22:
      uVar2 = 0xc;
      goto LAB_0801db3e;
    case 0x801db26:
      goto case_0801DB26;
    }
  }
  else {
case_0801DB26:
    if ((*(byte *)(iVar5 + 0x12) & 0x1f) * 0x1000000 + 0xfa000000 >> 0x18 < 0xe) {
      uVar2 = 0xd;
      goto LAB_0801db3e;
    }
  }
  uVar2 = 0xe;
LAB_0801db3e:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0801DB44 @ 0x0801DB44
// =============================================================================
void func_0801DB44(int param_1)

{
  func_0x0801468c(*(undefined4 *)(param_1 + _DAT_0801db54));
  return;
}

// =============================================================================
// Function: func_0801DB58 @ 0x0801DB58
// =============================================================================
undefined4 func_0801DB58(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined2 uStack_18;
  undefined2 uStack_16;
  short sStack_14;
  undefined1 uStack_12;
  char cStack_11;
  undefined1 uStack_10;
  
  uStack_18 = 0x100;
  uStack_16 = 0x100;
  sStack_14 = 0;
  uStack_12 = 0;
  cStack_11 = '\0';
  uStack_10 = 0;
  iVar1 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  uVar3 = iVar1 - 0x34;
  if ((uVar3 <= _DAT_0801dba0) || (iVar1 == 0x2b)) {
    if (iVar1 == 0x2b) {
      uVar3 = 9;
    }
    else if (_DAT_0801dba4 < iVar1) {
      uVar3 = iVar1 + _DAT_0801dba8;
    }
    iVar1 = (uVar3 + 1) * (_DAT_0801dc14 - sStack_14);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    sStack_14 = sStack_14 + (short)((uint)iVar1 >> 8);
  }
  iVar1 = func_0x0800e4fc(*(int *)((int)param_1 + _DAT_0801dc18) + _DAT_0801dc1c);
  if (0x4f < iVar1) {
    cStack_11 = (char)iVar1 + -0x4f;
    uStack_10 = 3;
  }
  uVar4 = *(undefined4 *)((int)param_1 + _DAT_0801dc20);
  uVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x148));
  func_080123CC(uVar4,1,uVar2,&uStack_18);
  return in_lr;
}

// =============================================================================
// Function: func_0801DC24 @ 0x0801DC24
// =============================================================================
undefined4 func_0801DC24(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)((int)param_1 + _DAT_0801dc54);
  iVar4 = *piVar5;
  if (iVar4 == 0) {
    uVar1 = func_080005D4(0x40);
    uVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x5c));
    iVar4 = func_080A4A00(uVar1,uVar2,param_2,param_1,3,0x1b,1);
    iVar3 = *piVar5;
    if ((iVar4 != iVar3) && (iVar3 != 0)) {
      func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 0x24) + 8));
    }
    *piVar5 = iVar4;
  }
  else {
    func_0805E860(iVar4 + 0x28);
    *(undefined1 *)(iVar4 + 0x3c) = 1;
    *(undefined1 *)(iVar4 + 0x3e) = 0;
    *(undefined1 *)(iVar4 + 0x3f) = 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801DCA8 @ 0x0801DCA8
// =============================================================================
undefined4 func_0801DCA8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)(param_1 + _DAT_0801dcd0);
  iVar1 = *piVar2;
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0x24) + 8));
  }
  *piVar2 = 0;
  return in_lr;
}

// =============================================================================
// Function: func_0801DCD4 @ 0x0801DCD4
// =============================================================================
undefined4 func_0801DCD4(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar2 = (int *)((int)param_1 + _DAT_0801dd10);
  uVar1 = func_0x0800b120(*piVar2 + 0x54);
  func_0801140C(*piVar2);
  uStack_18 = _DAT_0801dd14;
  uStack_14 = uVar1;
  func_0x080d3918(param_1,&uStack_18,1,*(undefined4 *)(*param_1 + 0x140));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD18 @ 0x0801DD18
// =============================================================================
undefined4 func_0801DD18(int param_1)

{
  undefined4 in_lr;
  
  func_080A6138(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD24 @ 0x0801DD24
// =============================================================================
undefined4 func_0801DD24(int param_1)

{
  undefined4 in_lr;
  
  func_080A6194(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD30 @ 0x0801DD30
// =============================================================================
undefined4 func_0801DD30(int param_1)

{
  undefined4 in_lr;
  
  func_080A61F0(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD3C @ 0x0801DD3C
// =============================================================================
undefined4 func_0801DD3C(int param_1)

{
  undefined4 in_lr;
  
  func_080A6234(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD48 @ 0x0801DD48
// =============================================================================
undefined4 func_0801DD48(int param_1)

{
  undefined4 in_lr;
  
  func_080A6278(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD54 @ 0x0801DD54
// =============================================================================
undefined4 func_0801DD54(int param_1)

{
  undefined4 in_lr;
  
  func_080A62BC(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD60 @ 0x0801DD60
// =============================================================================
undefined4 func_0801DD60(int param_1)

{
  undefined4 in_lr;
  
  func_080A607C(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD6C @ 0x0801DD6C
// =============================================================================
undefined4 func_0801DD6C(int param_1)

{
  undefined4 in_lr;
  
  func_080A6024(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD78 @ 0x0801DD78
// =============================================================================
undefined4 func_0801DD78(int param_1)

{
  undefined4 in_lr;
  
  func_0x080a601c(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DD84 @ 0x0801DD84
// =============================================================================
void func_0801DD84(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_14 [4];
  undefined1 uStack_10;
  
  uVar1 = func_0800C07C(*(int *)(param_1 + _DAT_0801ddc8) + 500);
  func_080A6300(*(undefined4 *)(param_1 + 4));
  func_0800BBA4(auStack_14,uVar1);
  func_0801DB58(param_1);
  uStack_10 = func_0800E058(auStack_14);
  func_0x0800df54();
  return;
}

// =============================================================================
// Function: func_0801DDCC @ 0x0801DDCC
// =============================================================================
undefined4 func_0801DDCC(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  func_0809C5B4(*(int *)(param_1 + _DAT_0801ddf0) + _DAT_0801ddf4,param_2);
  func_080AA850(*(undefined4 *)(param_1 + 4),param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0801DDF8 @ 0x0801DDF8
// =============================================================================
undefined4 func_0801DDF8(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  func_0809C5D0(*(int *)(param_1 + _DAT_0801de1c) + _DAT_0801de20,param_2);
  func_080AA850(*(undefined4 *)(param_1 + 4),param_2);
  return in_lr;
}

// =============================================================================
// Function: func_0801DE24 @ 0x0801DE24
// =============================================================================
undefined4 func_0801DE24(int param_1)

{
  undefined4 in_lr;
  
  func_080A63B8(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DE30 @ 0x0801DE30
// =============================================================================
undefined4 func_0801DE30(int param_1)

{
  undefined4 in_lr;
  
  func_080AA89C(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DE3C @ 0x0801DE3C
// =============================================================================
undefined4 func_0801DE3C(int param_1)

{
  undefined4 in_lr;
  
  func_080AA8BC(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DE48 @ 0x0801DE48
// =============================================================================
undefined4 func_0801DE48(int param_1)

{
  undefined4 in_lr;
  
  func_080AA8DC(*(undefined4 *)(param_1 + 4));
  return in_lr;
}

// =============================================================================
// Function: func_0801DE54 @ 0x0801DE54
// =============================================================================
void func_0801DE54(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_1c [4];
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  uVar1 = func_0800C07C(*(int *)(param_1 + _DAT_0801deb0) + 500);
  func_080A635C(*(undefined4 *)(param_1 + 4));
  func_0x0800df50(&uStack_18,param_2);
  func_0800BBF0(auStack_1c,uVar1,&uStack_18);
  func_0801DB58(param_1);
  uStack_17 = func_0800E058(auStack_1c);
  func_0x0800df54();
  return;
}

// =============================================================================
// Function: func_0801DEB4 @ 0x0801DEB4
// =============================================================================
undefined8 func_0801DEB4(int *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 in_lr;
  int iStack_3c;
  uint uStack_38;
  int iStack_2c;
  
  iStack_3c = 0;
  uVar14 = 0;
  uStack_38 = 0;
  bVar15 = false;
  uVar10 = 0;
  do {
    uVar8 = 0;
    uVar13 = uVar10 + 1;
    iVar12 = 0x118;
    puVar5 = (uint *)(uVar10 * 0xac + *(int *)(_DAT_0801dfc8 + (int)param_1) + _DAT_0801dfcc);
    do {
      if ((((*puVar5 & 0xff) >> 2 == 0x14) && ((*puVar5 & 0xfff) >> 8 == 5)) &&
         ((iVar1 = (uVar10 * 0x10 + 0xb8) - (int)param_2[1],
          iVar1 = (iVar12 - *param_2) * (iVar12 - *param_2) + iVar1 * iVar1, !bVar15 ||
          (iVar1 < iStack_3c)))) {
        bVar15 = true;
        uVar14 = uVar8;
        iStack_3c = iVar1;
        uStack_38 = uVar10;
      }
      iVar12 = iVar12 + 0x10;
      puVar5 = puVar5 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x2b);
    uVar10 = uVar13;
  } while (uVar13 < 0x19);
  if (bVar15) {
    iVar1 = uVar14 + uStack_38 * 0x2b;
    func_0800A3C8(*(int *)(_DAT_0801dfc8 + (int)param_1) + _DAT_0801dfcc + iVar1 * 4);
    iVar12 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
    if (iVar12 == 2) {
      iVar6 = param_1[1];
      iVar12 = uStack_38 * 2 + 0x14;
      iVar1 = iVar1 + -0x2b;
      iVar11 = uStack_38 - 1;
      iStack_2c = 2;
      do {
        bVar15 = false;
        if ((((-1 < (int)uVar14) && (-1 < iVar11)) && ((int)uVar14 < 0x2b)) && (iVar11 < 0x19)) {
          bVar15 = true;
        }
        if (bVar15) {
          iVar9 = *(int *)(_DAT_0801dfc8 + (int)param_1) + _DAT_0801dfcc + iVar1 * 4;
        }
        else {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          iVar7 = *(int *)(_DAT_0801e014 + (int)param_1) + _DAT_0801e018;
          iVar2 = iVar11 + 1;
          bVar15 = false;
          if (((-1 < (int)uVar14) && (-1 < iVar2)) && (((int)uVar14 < 0x2b && (iVar2 < 0x19)))) {
            bVar15 = true;
          }
          if (bVar15) {
            iVar2 = iVar7 + (iVar2 * 0x2b + uVar14) * 4;
          }
          else {
            iVar2 = 0;
          }
          iVar3 = iVar11 + -1;
          bVar15 = false;
          if (((-1 < (int)uVar14) && (-1 < iVar3)) && (((int)uVar14 < 0x2b && (iVar3 < 0x19)))) {
            bVar15 = true;
          }
          if (bVar15) {
            iVar3 = iVar7 + (iVar3 * 0x2b + uVar14) * 4;
          }
          else {
            iVar3 = 0;
          }
          uVar4 = func_0800AF5C(iVar1 * 4 + iVar7,iVar2,iVar3);
          func_080AA6D0(iVar6,uVar14 * 2 + 0x22,iVar12,iVar9,uVar4);
        }
        iVar12 = iVar12 + 2;
        iVar1 = iVar1 + 0x2b;
        iVar11 = iVar11 + 1;
        iStack_2c = iStack_2c + -1;
      } while (-1 < iStack_2c);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_0801E084 @ 0x0801E084
// =============================================================================
undefined4 func_0801E084(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  ushort *puVar8;
  uint uVar9;
  undefined1 uVar10;
  ushort uVar11;
  undefined1 *puVar12;
  int iVar13;
  ushort uVar14;
  uint *puVar15;
  undefined4 in_lr;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  ushort uStack_5c;
  ushort uStack_5a;
  ushort uStack_58;
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [8];
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  
  piStack_2c = param_1;
  func_0801E90C();
  iStack_28 = 0;
  iStack_24 = 0;
  do {
    iVar13 = iStack_24;
    iVar4 = func_0x080d3914(piStack_2c,iStack_24,*(undefined4 *)(*piStack_2c + 0x40));
    if (iVar4 != 0) {
      bVar1 = false;
      if (0x28 < iStack_24 - 0x2bU) {
case_0801E29C:
        if (bVar1) goto LAB_0801e2a4;
        goto case_0801E630;
      }
      puVar5 = *(undefined **)(PTR_case_0801E0D4_0801e0d0 + (iStack_24 - 0x2bU) * 4);
      switch((uint)puVar5 & 0xfffffffe) {
      case 0x801e0d4:
        puVar7 = PTR_case_0801E0D4_0801e0d0;
        goto code_r0x0801e3ec;
      case 0x801e178:
        if (1 < *(int *)(*(int *)((int)piStack_2c + _DAT_0801e1c8) + 8) - 3U) goto case_0801E18A;
        break;
      case 0x801e18a:
case_0801E18A:
        uVar9 = (uint)*(ushort *)(iVar4 + 4);
        if (uVar9 != 0x234) {
          puVar15 = (uint *)piStack_2c[1];
          if (uVar9 == *puVar15) {
            iVar6 = func_0x080a4698(puVar15[1]);
            uVar11 = *(ushort *)(iVar6 + 0x20);
            uVar14 = *(ushort *)(iVar6 + 0x22);
            iVar6 = piStack_2c[1];
            func_0x080a4698(*(undefined4 *)(iVar6 + 4));
            uStack_68 = *(undefined4 *)(iVar6 + 0x2c);
            iVar6 = *(int *)(iVar4 + 0x14);
            puVar12 = auStack_54;
            uStack_60 = uVar11;
            uStack_5e = uVar14;
          }
          else {
            if (uVar9 != 2) {
              uVar14 = (ushort)_DAT_0801e2bc;
              uStack_68 = CONCAT22(uStack_68._2_2_,
                                   uVar14 & (ushort)uStack_68 |
                                   *(ushort *)(iVar4 + 4) & (ushort)_DAT_0801e2b8) & 0xffff03ff;
              uVar11 = uVar14 & uStack_68._2_2_;
              uStack_68 = CONCAT22(uVar11,(ushort)uStack_68);
              uVar2 = uStack_68;
              uStack_68._3_1_ = (undefined1)(uVar11 >> 8);
              uStack_68._0_3_ = (undefined3)uVar2;
              uStack_68 = CONCAT13(uStack_68._3_1_,(undefined3)uStack_68) & 0x3ffffff;
              uStack_64 = CONCAT22(uStack_64._2_2_,uVar14 & (ushort)uStack_64);
              func_080A56DC(puVar15,&uStack_68,3,0,0x1e);
              iStack_28 = 1;
              iVar6 = func_0x080a4698(*(undefined4 *)(piStack_2c[1] + 4));
              uVar11 = *(ushort *)(iVar6 + 0x20);
              uVar14 = *(ushort *)(iVar6 + 0x22);
              iVar6 = piStack_2c[1];
              func_0x080a4698(*(undefined4 *)(iVar6 + 4));
              uStack_68 = *(undefined4 *)(iVar6 + 0x2c);
              uStack_64 = 0;
              uStack_60 = uVar11;
              uStack_5e = uVar14;
              func_0x080d3914(auStack_44,iVar4,*(undefined4 *)(*(int *)(iVar4 + 0x14) + 0xc));
              cVar3 = func_080AC070(&uStack_68,auStack_44);
              if (cVar3 != '\0') {
                bVar1 = true;
              }
              goto case_0801E29C;
            }
            uStack_68 = *(undefined4 *)((int)piStack_2c + _DAT_0801e208);
            uStack_60 = 0x80;
            uStack_5e = 0x58;
            iVar6 = *(int *)(iVar4 + 0x14);
            puVar12 = auStack_4c;
          }
          uStack_64 = 0;
          func_0x080d3914(puVar12,iVar4,*(undefined4 *)(iVar6 + 0xc));
          cVar3 = func_080AC070(&uStack_68,puVar12);
          if (cVar3 == '\0') goto case_0801E29C;
        }
        break;
      case 0x801e29c:
        goto case_0801E29C;
      }
LAB_0801e2a4:
      if (iVar13 - 0x2bU < 0x29) {
        switch(*(uint *)((iVar13 - 0x2bU) * 4 + _DAT_0801e2c0) & 0xfffffffe) {
        case 0x801e368:
          if (iVar4 != 0) {
            puVar8 = &uStack_5c;
            uVar11 = (ushort)_DAT_0801e3ac;
            uStack_5c = uVar11 & uStack_5c & 0x3ff | 0xf802;
            uStack_5a = uVar11 & uStack_5a & 0x3ff | 0x4805;
            uVar11 = uVar11 & uStack_58 | 1;
LAB_0801e5e6:
            puVar8[2] = uVar11;
            uVar10 = 0;
LAB_0801e5ec:
            memcpy(&uStack_68,puVar8,6);
            uStack_64._0_3_ = CONCAT12(uVar10,(ushort)uStack_64);
LAB_0801e5f6:
            func_0803211C(iVar4,&uStack_68);
          }
          break;
        case 0x801e3b0:
          if (iVar4 != 0) {
            uVar11 = (ushort)_DAT_0801e3d8;
            uStack_60 = uVar11 & uStack_60 & 0x3ff | 0xc002;
            uVar14 = 0xb;
LAB_0801e5cc:
            puVar8 = &uStack_60;
            uStack_5e = uVar11 & uStack_5e & 0x3ff | uVar14 | 0x1000;
            uVar11 = uVar11 & uStack_5c | 2;
            goto LAB_0801e5e6;
          }
          break;
        case 0x801e3dc:
          if (iVar4 != 0) {
            if ((undefined *)(uint)*(ushort *)(iVar4 + 4) != &UNK_00000011) {
              puVar5 = &UNK_00000234;
              puVar7 = (undefined *)(uint)*(ushort *)(iVar4 + 4);
code_r0x0801e3ec:
              if (puVar7 != puVar5) {
                puVar8 = &uStack_60;
                uVar11 = (ushort)_DAT_0801e4b8;
                uStack_60 = uVar11 & uStack_60 & 0x3ff | 0x3c02;
                uStack_5e = uVar11 & uStack_5e & 0x3ff | 0x3002;
                uVar11 = uVar11 & uStack_5c | 8;
                goto LAB_0801e5e6;
              }
            }
            func_0800C6F0(&uStack_3c,*(int *)((int)piStack_2c + _DAT_0801e474) + 0x410,
                          iVar13 + -0x2e);
            uStack_38 = uStack_3c;
            uVar9 = uStack_38;
            uStack_38._0_2_ = (ushort)uStack_3c;
            uStack_38._2_2_ = (ushort)(uStack_3c >> 0x10);
            puVar8 = &uStack_60;
            uVar14 = (ushort)_DAT_0801e478;
            uVar11 = uVar14 & uStack_60;
            uStack_60._1_1_ = (byte)(uVar11 >> 8);
            uStack_60 = CONCAT11(uStack_60._1_1_ & 3 | (byte)((uStack_3c & 0x3f) << 2),(char)uVar11)
                        | 0x11;
            uVar11 = uVar14 & uStack_5e | (ushort)uStack_38 >> 6;
            uStack_5e._1_1_ = (byte)(uVar11 >> 8);
            uStack_5e._0_1_ = (undefined1)uVar11;
            uStack_5e = CONCAT11(uStack_5e._1_1_ & 3 | (byte)((uStack_38._2_2_ & 0x3f) << 2),
                                 (undefined1)uStack_5e);
            uStack_5c = uVar14 & uStack_5c | uStack_38._2_2_ >> 6;
            uVar10 = 1;
            uStack_38 = uVar9;
            goto LAB_0801e5ec;
          }
          break;
        case 0x801e4bc:
          if (iVar4 != 0) {
            func_0x080d3914(piStack_2c,iVar13,*(undefined4 *)(*piStack_2c + 0x3c));
            func_0800C9B8(*(int *)((int)piStack_2c + _DAT_0801e4e8) + 0x410,iVar13 + -0x4c);
          }
          break;
        case 0x801e4ec:
          if (iVar4 != 0) {
            if ((*(short *)(iVar4 + 4) != 0x25) && (*(short *)(iVar4 + 4) != 0x234)) {
              uVar11 = (ushort)_DAT_0801e600;
              uStack_60 = uVar11 & uStack_60 & 0x3ff | 0xe002;
              uVar14 = 7;
              goto LAB_0801e5cc;
            }
            func_0800D074(&uStack_34,*(int *)((int)piStack_2c + _DAT_0801e5a4) + 0x5f0,
                          iVar13 - 0x36U);
            uStack_30 = uStack_34;
            uVar9 = uStack_30;
            uStack_30._0_2_ = (ushort)uStack_34;
            uStack_30._2_2_ = (ushort)(uStack_34 >> 0x10);
            uVar14 = (ushort)_DAT_0801e5a8;
            uVar11 = uVar14 & uStack_60;
            uStack_60._1_1_ = (byte)(uVar11 >> 8);
            uStack_60 = CONCAT11(uStack_60._1_1_ & 3 | (byte)((uStack_34 & 0x3f) << 2),(char)uVar11)
                        | 0x25;
            uVar11 = uVar14 & uStack_5e | (ushort)uStack_30 >> 6;
            uStack_5e._1_1_ = (byte)(uVar11 >> 8);
            uStack_5e._0_1_ = (undefined1)uVar11;
            uStack_5e = CONCAT11(uStack_5e._1_1_ & 3 | (byte)((uStack_30._2_2_ & 0x3f) << 2),
                                 (undefined1)uStack_5e);
            uStack_5c = uVar14 & uStack_5c | uStack_30._2_2_ >> 6;
            uStack_30 = uVar9;
            memcpy(&uStack_68,&uStack_60,6);
            uStack_64 = CONCAT13(uStack_64._3_1_,
                                 CONCAT12((char)(iVar13 - 0x36U >> 2),(ushort)uStack_64)) &
                        0xff01ffff;
            goto LAB_0801e5f6;
          }
          break;
        case 0x801e604:
          func_0801FE78(iVar4,2,0xe0,0xa8);
          break;
        case 0x801e612:
          func_0x080d3914(piStack_2c,iVar13,*(undefined4 *)(*piStack_2c + 0x3c));
          func_0x0800ed2c(*(int *)((int)piStack_2c + _DAT_0801e674) + _DAT_0801e678);
        }
      }
    }
case_0801E630:
    iStack_24 = iStack_24 + 1;
    if (99 < iStack_24) {
      if (iStack_28 != 0) {
        iVar13 = *piStack_2c;
        func_0800E924(&uStack_68,*(int *)((int)piStack_2c + _DAT_0801e674) + _DAT_0801e678);
        func_0x080d3918(piStack_2c,&uStack_68,0,*(undefined4 *)(iVar13 + 0xb4));
      }
      return in_lr;
    }
  } while( true );
}

// =============================================================================
// Function: func_0801E67C @ 0x0801E67C
// =============================================================================
undefined4 func_0801E67C(int *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 in_lr;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined1 auStack_2c [8];
  undefined *puStack_24;
  
code_r0x0801e688:
  iVar4 = *(int *)(param_1[1] + 4);
  puStack_24 = _DAT_0801e6b4;
  if (iVar4 != 0x2a) {
    if (iVar4 < 0x2b) {
      if (iVar4 != 0x29) {
        return in_lr;
      }
      puStack_24 = _DAT_0801e6ac;
      uVar10 = 5;
      goto LAB_0801e6be;
    }
    puStack_24 = PTR_case_080F0730_0801e70c;
    if (iVar4 != 0x2b) {
      return in_lr;
    }
  }
  uVar10 = 6;
LAB_0801e6be:
  iVar4 = func_0x080a4698();
  uVar1 = *(undefined2 *)(iVar4 + 0x20);
  uVar2 = *(undefined2 *)(iVar4 + 0x22);
  iVar4 = param_1[1];
  func_0x080a4698(*(undefined4 *)(iVar4 + 4));
  uStack_38 = *(undefined4 *)(iVar4 + 0x2c);
  uStack_34 = 0;
  iVar4 = 0;
  uStack_30 = uVar1;
  uStack_2e = uVar2;
  do {
    uVar12 = 0x801e6ef;
    uVar13 = func_0x080d3914(param_1,iVar4,*(undefined4 *)(*param_1 + 0x40));
    iVar5 = (int)uVar13;
    if (iVar5 != 0) {
      bVar3 = false;
      puVar11 = (undefined *)((ulonglong)uVar13 >> 0x20);
      if (iVar4 - 0x2bU < 0x29) {
        piVar6 = *(int **)(PTR_case_0801E714_0801e710 + (iVar4 - 0x2bU) * 4);
        puVar11 = PTR_case_0801E714_0801e710;
        switch((uint)piVar6 & 0xfffffffe) {
        case 0x801e714:
          goto case_0801E714;
        case 0x801e7b8:
          if (*(short *)(iVar5 + 4) == 0x1d) {
            func_0x080d3914(auStack_2c,iVar5,*(undefined4 *)(*(int *)(iVar5 + 0x14) + 0xc));
            uVar12 = 0x801e7d5;
            uVar14 = func_080AC070(&uStack_38,auStack_2c);
            puVar11 = (undefined *)(uVar14 >> 0x20);
            if ((uVar14 & 0xff) != 0) {
              puVar11 = &UNK_00000001;
              bVar3 = true;
            }
          }
          break;
        case 0x80f0730:
          *(int *)(_UNK_00000074 + 0x14) = (int)piVar6 << 0xf;
          do {
          } while( true );
        }
      }
      if (bVar3) {
        uVar7 = iVar4 - 0x2b;
        if (uVar7 < 0x29) {
          uVar7 = *(uint *)(PTR_case_0801E7FC_0801e7f8 + uVar7 * 4);
          puVar11 = PTR_case_0801E7FC_0801e7f8;
          switch(uVar7 & 0xfffffffe) {
          case 0x801e7fc:
            uVar7 = 0x801e7ff;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))();
            uVar12 = 0x801e803;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e807;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e80b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e80f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e813;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e817;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e81b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e81f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e823;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e827;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e82b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e82f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e833;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e837;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e83b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e83f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e843;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e847;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e84b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e84f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e853;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e857;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e85b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e85f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e863;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e867;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e86b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e86f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e873;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e877;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e87b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar7 = 0x801e87f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x140))(uVar8,0);
            uVar12 = 0x801e883;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x18c))(uVar8,0);
            uVar7 = 0x801e887;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x18c))(uVar8,0);
            uVar12 = 0x801e88b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x18c))(uVar8,0);
            uVar7 = 0x801e88f;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x18c))(uVar8,0);
            uVar12 = 0x801e893;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x18c))(uVar8,0);
            uVar7 = 0x801e897;
            uVar8 = (*(code *)((uVar12 & 0xfffffffc) + 0x18c))(uVar8,0);
            uVar12 = 0x801e89b;
            uVar8 = (*(code *)((uVar7 & 0xfffffffc) + 0x18c))(uVar8,0);
            uVar7 = (*(code *)((uVar12 & 0xfffffffc) + 0x18c))(uVar8,0);
            puVar11 = (undefined *)0x0;
            break;
          case 0x801e8c6:
            if (iVar5 != 0) {
              func_0x080d3914(param_1,iVar4,*(undefined4 *)(*param_1 + 0x3c));
              func_0800C9B8(*(int *)((int)param_1 + _DAT_0801e908) + 0x410,iVar4 + -0x4c);
            }
            goto LAB_0801e8ea;
          }
        }
        if (iVar5 != 0) {
          uVar8 = func_0x080d11e4(uVar7,puVar11);
          iVar9 = func_0x080d0f4e(uVar8,uVar10);
          func_0801FE78(iVar5,0x1d,(int)*(short *)(puStack_24 + iVar9 * 4),
                        (int)*(short *)((int)(puStack_24 + iVar9 * 4) + 2));
        }
      }
    }
LAB_0801e8ea:
    iVar4 = iVar4 + 1;
    if (99 < iVar4) {
      return in_lr;
    }
  } while( true );
case_0801E714:
  param_1 = piVar6;
  goto code_r0x0801e688;
}

// =============================================================================
// Function: func_0801E90C @ 0x0801E90C
// =============================================================================
undefined4 func_0801E90C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int aiStack_48 [3];
  int iStack_3c;
  int aiStack_38 [3];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_2c = 0;
  iVar6 = 0;
  do {
    iVar1 = func_0x080d3914(param_1,iVar6,*(undefined4 *)(*param_1 + 0x40));
    iVar6 = iVar6 + 1;
    if ((iVar1 != 0) && (*(short *)(iVar1 + 4) == 2)) {
      func_0x080d3914(&iStack_5c,iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0xc));
      iStack_54 = iStack_5c;
      uStack_50 = uStack_58;
      uVar9 = uStack_50;
      iStack_4c = 0;
      aiStack_48[0] = ((iStack_5c << 0x10) >> 0x13) + -0x22 >> 1;
      piVar2 = &iStack_4c;
      if (0 < aiStack_48[0]) {
        piVar2 = aiStack_48;
      }
      iVar1 = *piVar2;
      aiStack_48[1] = 0x2a;
      uStack_50._0_2_ = (short)uStack_58;
      aiStack_48[2] = ((short)uStack_50 + -1 >> 3) + -0x22 >> 1;
      piVar2 = aiStack_48 + 1;
      if (aiStack_48[2] < 0x2a) {
        piVar2 = aiStack_48 + 2;
      }
      iVar11 = *piVar2;
      iStack_3c = 0;
      aiStack_38[0] = (iStack_5c >> 0x13) + -0x16 >> 1;
      piVar2 = &iStack_3c;
      if (0 < aiStack_38[0]) {
        piVar2 = aiStack_38;
      }
      aiStack_38[1] = 0x18;
      uStack_50._2_2_ = (short)((uint)uStack_58 >> 0x10);
      aiStack_38[2] = (uStack_50._2_2_ + -1 >> 3) + -0x16 >> 1;
      piVar4 = aiStack_38 + 1;
      if (aiStack_38[2] < 0x18) {
        piVar4 = aiStack_38 + 2;
      }
      iVar3 = *piVar4;
      uStack_50 = uVar9;
      if (*piVar2 <= iVar3) {
        iVar5 = iVar1 << 2;
        iVar7 = *piVar2;
        do {
          iVar10 = iVar7 + 1;
          if (iVar1 <= iVar11) {
            iVar8 = iVar5 + iVar7 * 0xac;
            iVar7 = iVar1;
            do {
              if ((*(uint *)(*(int *)(_DAT_0801ea50 + (int)param_1) + _DAT_0801ea54 + iVar8) & 0xff)
                  >> 2 == 0x15) {
                iStack_28 = iVar3;
                iStack_24 = iVar5;
                Field_HarvestCrop(auStack_60);
                iStack_2c = 1;
                iVar3 = iStack_28;
                iVar5 = iStack_24;
              }
              iVar8 = iVar8 + 4;
              iVar7 = iVar7 + 1;
            } while (iVar7 <= iVar11);
          }
          iVar7 = iVar10;
        } while (iVar10 <= iVar3);
      }
    }
  } while (iVar6 < 100);
  if (iStack_2c != 0) {
    if (*(int *)param_1[1] == 2) {
      func_0x080d391c((int *)param_1[1],*(undefined4 *)(_DAT_0801ea58 + (int)param_1),
                      (uint)*(byte *)(_DAT_0801ea5c + (int)param_1),
                      0x1e - (uint)*(byte *)(_DAT_0801ea5c + (int)param_1));
    }
    else {
      uVar9 = *(undefined4 *)(_DAT_0801ea98 + (int)param_1);
      iVar6 = *(int *)(_DAT_0801ea9c + (int)param_1);
      iVar1 = func_0800E324(iVar6 + 0x10);
      func_080171F8(uVar9,iVar6 + 0x14,iVar1 == 3);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801EAA0 @ 0x0801EAA0
// =============================================================================
undefined4 func_0801EAA0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  
  iVar4 = _DAT_0801ebb0;
  puVar14 = (undefined4 *)(&stack0xffffffe0 + _DAT_0801ebb0);
  puVar15 = (uint *)(&stack0xffffffe0 + _DAT_0801ebb0);
  piVar16 = (int *)(&stack0xffffffe0 + _DAT_0801ebb0);
  piVar17 = (int *)(&stack0xffffffe0 + _DAT_0801ebb0);
  piVar18 = (int *)(&stack0xffffffe0 + _DAT_0801ebb0);
  *(undefined4 *)(&stack0x00000310 + _DAT_0801ebb0) = param_2;
  *(int *)(&stack0x00000314 + _DAT_0801ebb0) = *(int *)((int)param_1 + _DAT_0801ebb4) + 0x12;
  bVar1 = *(byte *)((int)param_1 + _DAT_0801ebb8);
  *(uint *)(&stack0x00000318 + _DAT_0801ebb0) = (uint)bVar1;
  if (bVar1 != 0) {
    func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x128));
  }
  piVar12 = param_1 + 2;
  *(int **)(&stack0x0000031c + iVar4) = piVar12;
  *(int **)(&stack0x00000320 + iVar4) = param_1 + 0x66;
  piVar13 = piVar12;
  if (piVar12 != param_1 + 0x66) {
    do {
      iVar8 = *piVar13;
      if (iVar8 != 0) {
        func_0x080d3910(iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x14));
      }
      piVar13 = piVar13 + 1;
    } while (piVar13 != *(int **)(&stack0x00000320 + iVar4));
  }
  *puVar14 = 0;
  uVar10 = 0;
  piVar13 = _DAT_0801ebbc;
  do {
    if ((piVar12[*piVar13] != 0) && (*puVar15 < 100)) {
      if ((int *)(&stack0xffffffe4 + *puVar15 * 4 + iVar4) != (int *)0x0) {
        *(int *)(&stack0xffffffe4 + *puVar15 * 4 + iVar4) = piVar12[*piVar13];
      }
      *piVar17 = *piVar16 + 1;
    }
    piVar13 = piVar13 + 1;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 10);
  iVar8 = *piVar18;
  *(undefined4 *)(&stack0x00000174 + iVar4) = 0;
  uVar10 = 0;
  piVar13 = _DAT_0801ebc0;
  do {
    if (piVar12[*piVar13] != 0) {
      puVar11 = (uint *)(&stack0x00000174 + iVar4);
      if (*puVar11 < 100) {
        if (puVar11 + *puVar11 + 1 != (uint *)0x0) {
          puVar11[*puVar11 + 1] = piVar12[*piVar13];
        }
        *puVar11 = *puVar11 + 1;
      }
    }
    piVar13 = piVar13 + 1;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x24);
  *(int **)(&stack0x00000324 + iVar4) =
       (int *)((int)(&stack0x00000174 + iVar4) + (*(int *)(&stack0x00000174 + iVar4) + 1) * 4);
  *(undefined4 *)(&stack0x00000308 + iVar4) = 0;
  (&stack0x0000030c)[iVar4] = 0;
  piVar13 = param_1 + 0x410;
  while( true ) {
    while( true ) {
      if (*(byte *)(param_1 + 0x411) + 1 < 0x19) {
        *(char *)(param_1 + 0x411) = (char)(*(byte *)(param_1 + 0x411) + 1);
        bVar3 = false;
      }
      else {
        *(undefined1 *)(param_1 + 0x411) = 0;
        puVar11 = (uint *)*piVar13;
        uVar10 = ((*puVar11 & 0x7ffffff) >> 0x15) + 1;
        uVar2 = (ushort)_DAT_0801edec;
        *(ushort *)((int)puVar11 + 2) =
             uVar2 & *(ushort *)((int)puVar11 + 2) | (ushort)((uVar10 & 0x3f) << 5);
        if (0x3b < (uVar10 & 0x3f)) {
          *(ushort *)(*piVar13 + 2) = uVar2 & *(ushort *)(*piVar13 + 2);
          puVar11 = (uint *)*piVar13;
          uVar10 = ((*puVar11 & 0x1fffff) >> 0x10) + 1 & 0x1f;
          *(byte *)((int)puVar11 + 2) = *(byte *)((int)puVar11 + 2) & 0xe0 | (byte)uVar10;
          if (0x17 < uVar10) {
            *(byte *)(*piVar13 + 2) = *(byte *)(*piVar13 + 2) & 0xe0;
            iVar6 = *piVar13;
            bVar1 = *(byte *)(iVar6 + 1);
            uVar10 = ((bVar1 & 0x7f) >> 2) + 1;
            if (uVar10 == 0x1e) {
              bVar7 = (bVar1 & 3) + 1 & 3;
              (&stack0x00000328)[iVar4] = (&stack0x00000328)[iVar4] & 0xfc | bVar7;
              *(byte *)(iVar6 + 1) = bVar1 & 0xfc | bVar7;
              uVar10 = 0;
            }
            *(byte *)(iVar6 + 1) = *(byte *)(iVar6 + 1) & 0x83 | (byte)((uVar10 & 0x1f) << 2);
            (&stack0x0000032c)[iVar4] = (&stack0x0000032c)[iVar4] & 0x80;
            pbVar9 = (byte *)*piVar13;
            if ((pbVar9[1] & 0x7f) == 0) {
              bVar1 = *pbVar9;
              bVar7 = (bVar1 & 7) + 1;
              if (6 < bVar7) {
                bVar7 = 0;
                if (bVar1 >> 3 < 0x1d) {
                  *pbVar9 = bVar1 & 7 | ((bVar1 >> 3) + 1) * '\b';
                }
              }
              *pbVar9 = *pbVar9 & 0xf8 | bVar7 & 7;
            }
          }
        }
        bVar3 = true;
      }
      if (bVar3) break;
      for (piVar12 = (int *)(&stack0xffffffe4 + iVar4);
          piVar12 != (int *)(&stack0xffffffe4 + iVar8 * 4 + iVar4); piVar12 = piVar12 + 1) {
        func_0x080d3914(*piVar12,&stack0x00000308 + iVar4,
                        *(undefined4 *)(*(int *)(*piVar12 + 0x14) + 0x18));
      }
    }
    (&stack0x0000030c)[iVar4] = 1;
    piVar12 = (int *)(&stack0x00000178 + iVar4);
    if (piVar12 != *(int **)(&stack0x00000324 + iVar4)) {
      do {
        iVar6 = *piVar12;
        piVar12 = piVar12 + 1;
        func_0x080d3914(iVar6,&stack0x00000308 + iVar4,
                        *(undefined4 *)(*(int *)(iVar6 + 0x14) + 0x18));
      } while (piVar12 != *(int **)(&stack0x00000324 + iVar4));
    }
    if ((_DAT_0801edf0 & **(ushort **)(&stack0x00000310 + iVar4)) ==
        (_DAT_0801edf0 & **(ushort **)(&stack0x00000314 + iVar4))) break;
    (&stack0x0000030c)[iVar4] = 0;
  }
  piVar13 = *(int **)(&stack0x0000031c + iVar4);
  if (piVar13 != *(int **)(&stack0x00000320 + iVar4)) {
    do {
      iVar8 = *piVar13;
      if (iVar8 != 0) {
        func_0x080d3910(iVar8,*(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x10));
      }
      piVar13 = piVar13 + 1;
    } while (piVar13 != *(int **)(&stack0x00000320 + iVar4));
  }
  if (*(int *)(&stack0x00000318 + iVar4) != 0) {
    func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x124));
  }
  iVar8 = func_0x080a4698(*(undefined4 *)(param_1[1] + 4));
  if (*(char *)(iVar8 + 0x24) == '\0') {
    func_0801A13C(param_1,(*(uint *)param_1[0x410] & 0x1fffff) >> 0x10,
                  (*(uint *)param_1[0x410] & 0x7ffffff) >> 0x15,0);
  }
  func_0x080d3910(param_1[2],*(undefined4 *)(*(int *)(param_1[2] + 0x14) + 0xa4));
  cVar5 = func_080167CC(*(undefined4 *)((int)param_1 + _DAT_0801edf4));
  if ((cVar5 != '\0') &&
     (cVar5 = func_0x0809c5f4(*(int *)((int)param_1 + _DAT_0801edf8) + _DAT_0801edfc), cVar5 == '\0'
     )) {
    func_0801DB58(param_1);
  }
  return *(undefined4 *)(&stack0x0000034c + iVar4);
}

// =============================================================================
// Function: func_0801EE00 @ 0x0801EE00
// =============================================================================
undefined8 func_0801EE00(int *param_1,ushort *param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 in_lr;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  uint3 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined4 *puStack_24;
  
  func_0x080d3918(auStack_50,param_1,*param_2 & 0x3ff,*(undefined4 *)(*param_1 + 0x34));
  uVar5 = func_080AC5D0(auStack_50,
                        (int)(short)((ushort)((param_2[1] & _DAT_0801eec0) << 6) |
                                    (ushort)(*(byte *)((int)param_2 + 1) >> 2)),
                        (int)(short)((ushort)((param_2[2] & _DAT_0801eec0) << 6) |
                                    (ushort)(*(byte *)((int)param_2 + 3) >> 2)));
  uStack_30 = (uVar5 ^ 1) & 0xff;
  iStack_2c = 0;
  bVar2 = true;
  puStack_24 = &uStack_34;
  puStack_28 = auStack_54;
  if (uStack_30 != 0) goto LAB_0801efa8;
  piVar11 = (int *)func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14c));
  puVar12 = (undefined4 *)piVar11[1];
  for (puVar10 = (undefined4 *)*piVar11; puVar10 != puVar12; puVar10 = puVar10 + 1) {
    cVar3 = func_0x08008cd0(*puVar10);
    if (cVar3 == '\0') {
      uVar7 = *puVar10;
      goto LAB_0801eea6;
    }
  }
  uVar7 = puVar12[-1];
LAB_0801eea6:
  func_08008B6C(uVar7,0x6d);
  iVar6 = func_080A45A8(param_2);
  if (iVar6 == 2) {
    iStack_2c = _DAT_0801ef80;
  }
  else if (iVar6 < 3) {
    if ((iVar6 != 0) || (iVar6 = func_0x0800f09c(param_3), iVar6 != 0)) goto LAB_0801efa8;
    func_0800F0A4(auStack_50,param_3);
    iVar6 = func_0x0800dcb4(auStack_50);
    if (iVar6 != 2) goto LAB_0801efa8;
    iStack_2c = 0x23c;
  }
  else {
    if (iVar6 == 4) {
      iVar6 = func_0x0800f09c(param_3);
      if (iVar6 == 0) {
        func_0800F0A4(auStack_50,param_3);
        iVar6 = func_0x0800dcb4(auStack_50);
        if (iVar6 == 0xa0) {
          func_0x08011458(*(undefined4 *)(_DAT_0801eefc + (int)param_1));
        }
      }
      goto LAB_0801efa8;
    }
    if (iVar6 != 6) goto LAB_0801efa8;
    bVar1 = false;
    iVar6 = func_0x0800f09c(param_3);
    if (iVar6 == 0) {
      func_0800F0A4(auStack_50,param_3);
      iVar6 = func_0x0800dcb4(auStack_50);
      if (0xe < iVar6) {
        func_0800F0A4(auStack_4c,param_3);
        iVar6 = func_0x0800dcb4(auStack_4c);
        if (iVar6 < 0x15) {
          bVar1 = true;
        }
      }
    }
    if (!bVar1) goto LAB_0801efa8;
    iVar9 = param_1[2];
    iVar6 = *(int *)(iVar9 + 0x14);
    func_0x0800dca8(&uStack_44,0x15);
    func_0800F004(auStack_48,(uint)uStack_44);
    func_0x080d3918(iVar9,auStack_48,0,*(undefined4 *)(iVar6 + 0x5c));
  }
  bVar2 = false;
LAB_0801efa8:
  if (iStack_2c != 0) {
    iStack_40 = iStack_2c;
    uStack_3c = 0;
    func_0x080d3918(param_1,&iStack_40,0,*(undefined4 *)(*param_1 + 0x140));
  }
  if (bVar2) {
    func_0x080a1484(*(int *)(_DAT_0801f00c + (int)param_1) + _DAT_0801f010,param_2,
                    *(int *)(_DAT_0801f00c + (int)param_1) + _DAT_0801f014);
  }
  cVar3 = func_0x0800f11c(param_3);
  if (cVar3 == '\0') {
    iVar6 = func_0x0800f09c(param_3);
    if ((iVar6 == 0) || (iVar6 != 1)) {
      func_0800F0A4(auStack_50,param_3);
      uVar4 = func_0800DCE0(auStack_50);
    }
    else {
      auStack_38[0] = func_0800F0E8(param_3);
      iVar6 = func_0x0800df54(auStack_38);
      if (iVar6 == 0x1b) {
        uVar4 = 3;
        if ((*param_2 & 0x3ff) < 9) {
          uVar4 = 4;
        }
      }
      else {
        uVar4 = func_0800DF84(auStack_38);
      }
    }
  }
  else {
    uVar4 = 0x160;
  }
  uStack_34 = CONCAT22(uStack_34._2_2_,
                       (ushort)((param_2[1] & _DAT_0801f0f8) << 6) |
                       (ushort)(*(byte *)((int)param_2 + 1) >> 2));
  *(ushort *)((int)puStack_24 + 2) =
       (ushort)((param_2[2] & _DAT_0801f0f8) << 6) | (ushort)(*(byte *)((int)param_2 + 3) >> 2);
  uVar7 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 100));
  piVar11 = (int *)(_DAT_0801f0fc + (int)param_1);
  piVar11[1] = uStack_34;
  iVar6 = *piVar11;
  if ((iVar6 != 0) && (iVar6 != 0)) {
    func_0x080d3914(iVar6,3,*(undefined4 *)(*(int *)(iVar6 + 0x24) + 8));
  }
  *piVar11 = 0;
  *(undefined1 *)(piVar11 + 2) = (undefined1)uStack_30;
  if (uStack_30 == 0) {
    uVar8 = func_080005D4(0x40);
    *puStack_28 = 0;
    iVar6 = func_080A4A00(uVar8,uVar7,_DAT_0801f148,param_1,2,3);
    iVar9 = *piVar11;
    if ((iVar6 != iVar9) && (iVar9 != 0)) {
      func_0x080d3914(iVar9,3,*(undefined4 *)(*(int *)(iVar9 + 0x24) + 8));
    }
    *piVar11 = iVar6;
    uVar7 = 0;
  }
  else {
    uVar8 = func_080005D4(0x40);
    *puStack_28 = 0;
    iVar6 = func_080A4A00(uVar8,uVar7,uVar4,param_1,2,3);
    iVar9 = *piVar11;
    if ((iVar6 != iVar9) && (iVar9 != 0)) {
      func_0x080d3914(iVar9,3,*(undefined4 *)(*(int *)(iVar9 + 0x24) + 8));
    }
    *piVar11 = iVar6;
    uVar7 = 0x10;
    *(undefined1 *)((int)piVar11 + 9) = 0x10;
    *(undefined1 *)((int)piVar11 + 10) = 0;
  }
  return CONCAT44(in_lr,uVar7);
}

// =============================================================================
// Function: func_0801F14C @ 0x0801F14C
// =============================================================================
undefined4 func_0801F14C(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x418) = 0;
  piVar5 = (int *)((int)param_1 + _DAT_0801f198);
  iVar3 = *piVar5;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 0x24) + 8));
  }
  *piVar5 = 0;
  iVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (iVar3 - 10U < 0x1e) {
    switch(*(uint *)((iVar3 - 10U) * 4 + _DAT_0801f19c) & 0xfffffffe) {
    case 0x801f218:
      piVar5 = (int *)((int)param_1 + _DAT_0801f244);
      iVar3 = func_0x0800bf14(*piVar5 + 500);
      if (iVar3 != 2) {
        return in_lr;
      }
      uVar6 = func_0x0800bfc4(*piVar5 + 500);
      uVar6 = -(uVar6 & 0xff) >> 0x1f;
      break;
    case 0x801f248:
      uVar6 = (uint)(*(byte *)(*(int *)((int)param_1 + _DAT_0801f254) + 3) >> 7);
      break;
    case 0x801f258:
      uVar6 = *(byte *)(*(int *)((int)param_1 + _DAT_0801f268) + 4) & 1;
      break;
    case 0x801f26c:
      iVar3 = func_0800E324(*(int *)((int)param_1 + _DAT_0801f2d4) + 0x10);
      uVar6 = 0;
      if (iVar3 == 3) {
        uVar6 = 1;
      }
      break;
    case 0x801f2ca:
      goto case_0801F2CA;
    }
    uVar1 = func_080005D4(0x40);
    uVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x60));
    iVar3 = func_080A4A00(uVar1,uVar2,uVar6,param_1,2,0x1b,0);
    param_1 = (int *)((int)param_1 + _DAT_0801f2d8);
    iVar4 = *param_1;
    if ((iVar3 != iVar4) && (iVar4 != 0)) {
      func_0x080d3914(iVar4,3,*(undefined4 *)(*(int *)(iVar4 + 0x24) + 8));
    }
    *param_1 = iVar3;
  }
case_0801F2CA:
  return in_lr;
}

// =============================================================================
// Function: func_0801F2DC @ 0x0801F2DC
// =============================================================================
undefined4 func_0801F2DC(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  iVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (iVar2 != 0x23) {
    param_1 = (int *)((int)param_1 + _DAT_0801f3e0);
    iVar2 = *param_1;
    if ((iVar2 != 0) && (iVar2 != 0)) {
      func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + 0x24) + 8));
    }
    *param_1 = 0;
    return in_lr;
  }
  bVar1 = *(byte *)(*(int *)((int)param_1 + _DAT_0801f320) + 0x12) & 0x1f;
  if (3 < bVar1) {
    if (bVar1 < 9) {
      uVar3 = func_080005D4(0x40);
      iVar2 = (int)param_1 + _DAT_0801f324;
      uVar5 = 0;
      goto LAB_0801f38a;
    }
    if (bVar1 < 0x10) {
      uVar3 = func_080005D4(0x40);
      iVar2 = (int)param_1 + _DAT_0801f348;
      uVar5 = 1;
      goto LAB_0801f38a;
    }
    if (bVar1 < 0x13) {
      uVar3 = func_080005D4(0x40);
      iVar2 = (int)param_1 + _DAT_0801f36c;
      uVar5 = 2;
      goto LAB_0801f38a;
    }
  }
  uVar3 = func_080005D4(0x40);
  iVar2 = (int)param_1 + _DAT_0801f3b0;
  uVar5 = 3;
LAB_0801f38a:
  iVar2 = func_080A4A00(uVar3,iVar2,uVar5,param_1,5,0x1b,0);
  param_1 = (int *)((int)param_1 + _DAT_0801f3b4);
  iVar4 = *param_1;
  if ((iVar2 != iVar4) && (iVar4 != 0)) {
    func_0x080d3914(iVar4,3,*(undefined4 *)(*(int *)(iVar4 + 0x24) + 8));
  }
  *param_1 = iVar2;
  return in_lr;
}

// =============================================================================
// Function: func_0801F3E4 @ 0x0801F3E4
// =============================================================================
undefined4 func_0801F3E4(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  int iStack_38;
  ushort uStack_30;
  undefined1 auStack_28 [4];
  undefined2 *apuStack_24 [2];
  
  iVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (iVar2 == 0x1d) {
    iVar2 = func_0x0800bfa4(*(int *)((int)param_1 + _DAT_0801f488) + 500);
    if (iVar2 == 0x5f) {
      return in_lr;
    }
    func_0x0800df50(auStack_28);
    uVar1 = func_0800DF84(auStack_28);
    piVar5 = (int *)(_DAT_0801f48c + (int)param_1);
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      uVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 100));
      func_0805E824(&piStack_3c,uVar3,uVar1,0x100);
      func_0x080d3918(&uStack_5c,piStack_3c,*(undefined2 *)(iStack_38 + (uint)uStack_30 * 4),
                      *(undefined4 *)(*piStack_3c + 0x10));
      memcpy(&uStack_5c,&uStack_5c,0x20);
      *(undefined4 *)(iVar2 + 0x28) = uStack_5c;
      *(undefined4 *)(iVar2 + 0x2c) = uStack_58;
      *(undefined4 *)(iVar2 + 0x30) = uStack_54;
      *(undefined4 *)(iVar2 + 0x34) = uStack_50;
      *(undefined4 *)(iVar2 + 0x38) = uStack_4c;
      *(undefined4 *)(iVar2 + 0x3c) = uStack_48;
      *(undefined4 *)(iVar2 + 0x40) = uStack_44;
      *(undefined4 *)(iVar2 + 0x44) = uStack_40;
      *(undefined1 *)(iVar2 + 0x48) = 1;
      return in_lr;
    }
    iVar2 = func_080005D4(0x4c);
    piVar4 = (int *)func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 100));
    func_080A4740(iVar2,param_1,2,0x1b);
    *(undefined4 *)(iVar2 + 0x24) = _DAT_0801f4e4;
    iVar6 = *piVar4;
    func_0x080d3918(apuStack_24,piVar4,uVar1,*(undefined4 *)(iVar6 + 0xc));
    func_0x080d3918(iVar2 + 0x28,piVar4,*apuStack_24[0],*(undefined4 *)(iVar6 + 0x10));
    *(undefined1 *)(iVar2 + 0x48) = 1;
  }
  else {
    piVar5 = (int *)((int)param_1 + _DAT_0801f514);
    iVar2 = 0;
  }
  iVar6 = *piVar5;
  if ((iVar2 != iVar6) && (iVar6 != 0)) {
    func_0x080d3914(iVar6,3,*(undefined4 *)(*(int *)(iVar6 + 0x24) + 8));
  }
  *piVar5 = iVar2;
  return in_lr;
}

// =============================================================================
// Function: func_0801F518 @ 0x0801F518
// =============================================================================
undefined4 func_0801F518(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if (param_2 == 0x1d) {
    piVar6 = (int *)((int)param_1 + _DAT_0801f558);
    cVar1 = func_0x0800bfc4(*piVar6 + 500);
    if (cVar1 == '\0') {
      func_0800C25C(*piVar6 + 500);
    }
  }
  else if (param_2 < 0x1e) {
    if (param_2 != 0x12) {
      return in_lr;
    }
    *(byte *)(*(int *)((int)param_1 + _DAT_0801f56c) + 3) =
         *(byte *)(*(int *)((int)param_1 + _DAT_0801f56c) + 3) | 0x80;
  }
  else {
    if (param_2 != 0x27) {
      return in_lr;
    }
    *(byte *)(*(int *)((int)param_1 + _DAT_0801f5e8) + 4) =
         *(byte *)(*(int *)((int)param_1 + _DAT_0801f5e8) + 4) | 1;
  }
  iVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (iVar2 == param_2) {
    *(undefined1 *)(param_1 + 0x418) = 1;
    uVar3 = func_080005D4(0x40);
    uVar4 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x60));
    iVar2 = func_080A4A00(uVar3,uVar4,2,param_1,2,0x1b,0);
    param_1 = (int *)((int)param_1 + _DAT_0801f5ec);
    iVar5 = *param_1;
    if ((iVar2 != iVar5) && (iVar5 != 0)) {
      func_0x080d3914(iVar5,3,*(undefined4 *)(*(int *)(iVar5 + 0x24) + 8));
    }
    *param_1 = iVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801F5F0 @ 0x0801F5F0
// =============================================================================
undefined4 func_0801F5F0(int param_1)

{
  undefined4 in_lr;
  
  func_0800C1A0(*(int *)(param_1 + _DAT_0801f610) + 500);
  func_0801F3E4(param_1);
  return in_lr;
}

// =============================================================================
// Function: func_0801F614 @ 0x0801F614
// =============================================================================
undefined4 func_0801F614(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  piVar5 = (int *)((int)param_1 + _DAT_0801f6d8);
  iVar2 = *piVar5;
  if ((iVar2 != 0) && (iVar2 != 0)) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + 0x24) + 8));
  }
  *piVar5 = 0;
  piVar5 = (int *)((int)param_1 + _DAT_0801f6dc);
  iVar2 = *piVar5;
  if ((iVar2 != 0) && (iVar2 != 0)) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + 0x24) + 8));
  }
  *piVar5 = 0;
  iVar2 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (iVar2 == 0) {
    iVar2 = func_0800E324(*(int *)((int)param_1 + _DAT_0801f6e0) + 0x10);
    if (iVar2 == 3) {
      uVar1 = func_080005D4(0x40);
      iVar6 = (int)param_1 + _DAT_0801f770;
      iVar2 = func_080A4A00(uVar1,iVar6,1,param_1,3,0x1e,0);
      piVar5 = (int *)(_DAT_0801f774 + (int)param_1);
      iVar3 = *piVar5;
      if ((iVar2 != iVar3) && (iVar3 != 0)) {
        func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 0x24) + 8));
      }
      *piVar5 = iVar2;
      uVar1 = func_080005D4(0x40);
      uVar4 = 1;
    }
    else {
      uVar1 = func_080005D4(0x40);
      iVar6 = (int)param_1 + _DAT_0801f6e4;
      iVar2 = func_080A4A00(uVar1,iVar6,0,param_1,3,0x1e,0);
      piVar5 = (int *)(_DAT_0801f6d8 + (int)param_1);
      iVar3 = *piVar5;
      if ((iVar2 != iVar3) && (iVar3 != 0)) {
        func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 0x24) + 8));
      }
      *piVar5 = iVar2;
      uVar1 = func_080005D4(0x40);
      uVar4 = 0;
    }
    iVar2 = func_080A4A00(uVar1,iVar6,uVar4,param_1,3,0x1e,0);
    param_1 = (int *)((int)param_1 + _DAT_0801f778);
    iVar3 = *param_1;
    if ((iVar2 != iVar3) && (iVar3 != 0)) {
      func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 0x24) + 8));
    }
    *param_1 = iVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801F77C @ 0x0801F77C
// =============================================================================
undefined4 func_0801F77C(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)((int)param_1 + _DAT_0801f7d8);
  iVar3 = *piVar5;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 0x24) + 8));
  }
  *piVar5 = 0;
  piVar5 = (int *)((int)param_1 + _DAT_0801f7dc);
  iVar3 = *piVar5;
  if ((iVar3 != 0) && (iVar3 != 0)) {
    func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 0x24) + 8));
  }
  *piVar5 = 0;
  iVar3 = func_0x080d3910(param_1,*(undefined4 *)(*param_1 + 0x14));
  if (iVar3 == 2) {
    cVar1 = func_0x0800bfc4(*(int *)((int)param_1 + _DAT_0801f918) + 500);
    if (cVar1 == '\0') {
      return in_lr;
    }
    uVar2 = func_080005D4(0x40);
    iVar3 = (int)param_1 + _DAT_0801f91c;
  }
  else if (iVar3 < 3) {
    if (iVar3 != 0) {
      return in_lr;
    }
    if (-1 < *(char *)(*(int *)((int)param_1 + _DAT_0801f8b4) + 3)) {
      return in_lr;
    }
    uVar2 = func_080005D4(0x40);
    iVar3 = (int)param_1 + _DAT_0801f8b8;
  }
  else if (iVar3 == 3) {
    iVar3 = func_0800E324(*(int *)((int)param_1 + _DAT_0801f884) + 0x10);
    if (iVar3 != 3) {
      return in_lr;
    }
    uVar2 = func_080005D4(0x40);
    iVar3 = (int)param_1 + _DAT_0801f888;
  }
  else {
    if (iVar3 != 7) {
      return in_lr;
    }
    if ((*(byte *)(*(int *)((int)param_1 + _DAT_0801f858) + 4) & 1) != 0) {
      uVar2 = func_080005D4(0x40);
      iVar3 = func_080A4A00(uVar2,(int)param_1 + _DAT_0801f85c,2,param_1,2,0x1f,0);
      piVar5 = (int *)((int)param_1 + _DAT_0801f860);
      iVar4 = *piVar5;
      if ((iVar3 != iVar4) && (iVar4 != 0)) {
        func_0x080d3914(iVar4,3,*(undefined4 *)(*(int *)(iVar4 + 0x24) + 8));
      }
      *piVar5 = iVar3;
    }
    iVar3 = func_0800E324(*(int *)((int)param_1 + _DAT_0801f858) + 0x10);
    if (iVar3 != 3) {
      return in_lr;
    }
    uVar2 = func_080005D4(0x40);
    iVar3 = (int)param_1 + _DAT_0801f85c;
  }
  iVar3 = func_080A4A00(uVar2,iVar3,2,param_1,2,0x1f,0);
  param_1 = (int *)((int)param_1 + _DAT_0801f920);
  iVar4 = *param_1;
  if ((iVar3 != iVar4) && (iVar4 != 0)) {
    func_0x080d3914(iVar4,3,*(undefined4 *)(*(int *)(iVar4 + 0x24) + 8));
  }
  *param_1 = iVar3;
  return in_lr;
}

// =============================================================================
// Function: func_0801F924 @ 0x0801F924
// =============================================================================
undefined4 func_0801F924(int *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [2];
  undefined4 auStack_40 [2];
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  puVar7 = &uStack_50;
  iVar3 = *(int *)((int)param_1 + _DAT_0801f95c) + 0x54;
  uVar4 = func_0x0800e194(param_2);
  cVar2 = func_0800B124(iVar3,uVar4);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = func_0800B140(iVar3,uVar4);
  }
  ShippingBin_ShipItem(iVar3,param_2);
  uVar6 = func_0800B140(iVar3,uVar4);
  if (uVar6 <= uVar5) goto LAB_0801fa50;
  if (uVar6 == _DAT_0801f990) {
    puVar8 = (undefined4 *)(*param_1 + 0x140);
    puVar7 = auStack_40;
    auStack_40[0] = _DAT_0801fa00;
LAB_0801fa28:
    puVar7[1] = uVar4;
    uVar9 = *puVar8;
  }
  else {
    if (_DAT_0801f990 < uVar6) {
      if (uVar6 == _DAT_0801f9b0) {
        puVar8 = (undefined4 *)(*param_1 + 0x140);
        puVar7 = auStack_30;
        auStack_30[0] = 0x340;
      }
      else {
        if (_DAT_0801f9b0 < uVar6) {
          if (uVar6 == _DAT_0801f9c0) {
            uStack_28 = _DAT_0801fa98;
            uStack_24 = uVar4;
            func_0x080d3918(param_1,&uStack_28,1,*(undefined4 *)(*param_1 + 0x140));
          }
          goto LAB_0801fa50;
        }
        if (uVar6 != _DAT_0801f9b4) goto LAB_0801fa50;
        puVar8 = (undefined4 *)(*param_1 + 0x140);
        puVar7 = auStack_38;
        auStack_38[0] = _DAT_0801fa14;
      }
      goto LAB_0801fa28;
    }
    if (uVar6 != _DAT_0801f994) {
      if (uVar6 != _DAT_0801f998) goto LAB_0801fa50;
      puVar8 = (undefined4 *)(*param_1 + 0x140);
      puVar7 = auStack_48;
      auStack_48[0] = _DAT_0801f9ec;
      goto LAB_0801fa28;
    }
    uStack_50 = 0x33c;
    uVar9 = *(undefined4 *)(*param_1 + 0x140);
    uStack_4c = uVar4;
  }
  func_0x080d3918(param_1,puVar7,1,uVar9);
LAB_0801fa50:
  bVar1 = *(byte *)(*(int *)((int)param_1 + _DAT_0801fa9c) + _DAT_0801faa0);
  if (((bVar1 & 3) == 0) && (cVar2 = func_0800B15C(iVar3), cVar2 != '\0')) {
    uStack_20 = _DAT_0801faa4;
    uStack_1c = bVar1 & 3;
    func_0x080d3918(param_1,&uStack_20,1,*(undefined4 *)(*param_1 + 0x140));
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801FAA8 @ 0x0801FAA8
// =============================================================================
void func_0801FAA8(int *param_1,undefined4 param_2)

{
  func_0x080d3914(param_1,param_2,*(undefined4 *)(*param_1 + 0x40));
  return;
}

// =============================================================================
// Function: func_0801FAB8 @ 0x0801FAB8
// =============================================================================
void func_0801FAB8(int *param_1,undefined4 param_2)

{
  func_0x080d3914(param_1,param_2,*(undefined4 *)(*param_1 + 0x44));
  return;
}

// =============================================================================
// Function: func_0801FAC8 @ 0x0801FAC8
// =============================================================================
undefined4 func_0801FAC8(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0;
  if (param_2 == 0) {
    iVar5 = _DAT_0801fb38 + param_1;
  }
  else if (param_2 == 1) {
    iVar5 = _DAT_0801fae8 + param_1;
  }
  if (iVar5 != 0) {
    iVar4 = 0x20;
    if (**(int **)(param_1 + 4) == 2) {
      uVar3 = 0;
      for (piVar2 = (int *)(param_1 + 8); piVar2 != (int *)(param_1 + 0x198); piVar2 = piVar2 + 1) {
        if ((*piVar2 != 0) && (*(short *)(*piVar2 + 4) == 2)) {
          uVar3 = uVar3 + 1;
        }
      }
      if (10 < uVar3 + 10) {
        if (uVar3 < 0x16) {
          iVar4 = 0x20 - uVar3;
        }
        else {
          iVar4 = 10;
        }
      }
    }
    uVar1 = func_080005D4(_DAT_0801fb74);
    iVar5 = ScriptEngine_GetVariable(uVar1,param_1,iVar5,param_2,iVar4);
    piVar2 = (int *)(param_1 + _DAT_0801fb78);
    iVar4 = *piVar2;
    if ((iVar5 != iVar4) && (iVar4 != 0)) {
      func_0x0803b0a8(iVar4,3);
    }
    *piVar2 = iVar5;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801FB7C @ 0x0801FB7C
// =============================================================================
undefined8
func_0801FB7C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 auStack_20 [3];
  
  uVar1 = func_080005D4(0xbc);
  auStack_20[0] = func_080A6474(uVar1,param_2);
  uVar1 = func_080005D4(_DAT_0801fbd8);
  uVar1 = func_080175B4(uVar1,param_2,param_3,auStack_20,param_4);
  *param_1 = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0801FC78 @ 0x0801FC78
// =============================================================================
undefined4 func_0801FC78(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)(param_1 + _DAT_0801fc98);
  iVar1 = *piVar2;
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_0x0803b0a8(iVar1,3);
  }
  *piVar2 = 0;
  return in_lr;
}

// =============================================================================
// Function: func_0801FD0C @ 0x0801FD0C
// =============================================================================
undefined4 func_0801FD0C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)(param_1 + 8 + param_2 * 4);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 0x14) + 8));
    *piVar2 = 0;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801FD3C @ 0x0801FD3C
// =============================================================================
void func_0801FD3C(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_080A5A9C(*(undefined4 *)(param_1 + 4));
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_0801FDC0 @ 0x0801FDC0
// =============================================================================
undefined4 func_0801FDC0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = param_1[4];
  if ((iVar2 != 0) && (iVar2 != 0)) {
    func_0x080d3914(iVar2,3,*(undefined4 *)(*(int *)(iVar2 + 4) + 8));
  }
  param_1[4] = 0;
  uVar1 = func_0x080d3910((int *)*param_1,*(undefined4 *)(*(int *)*param_1 + 0x14));
  if (uVar1 == *(ushort *)(param_1 + 1)) {
    iVar2 = func_0x080d3910(param_1,*(undefined4 *)(param_1[5] + 0x30));
    iVar3 = param_1[4];
    if ((iVar2 != iVar3) && (iVar3 != 0)) {
      func_0x080d3914(iVar3,3,*(undefined4 *)(*(int *)(iVar3 + 4) + 8));
    }
    param_1[4] = iVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801FE20 @ 0x0801FE20
// =============================================================================
undefined4 func_0801FE20(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 != 0) && (iVar1 != 0)) {
    func_0x080d3914(iVar1,3,*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return in_lr;
}

// =============================================================================
// Function: func_0801FE48 @ 0x0801FE48
// =============================================================================
undefined4 func_0801FE48(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3914(iVar1,param_2,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x10));
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801FE60 @ 0x0801FE60
// =============================================================================
undefined4 func_0801FE60(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3910(iVar1,*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801FE78 @ 0x0801FE78
// =============================================================================
undefined4 func_0801FE78(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 in_lr;
  
  func_0x0801ff38();
  *(int *)(param_1 + 8) = param_3 << 0x10;
  *(int *)(param_1 + 0xc) = param_4 << 0x10;
  return in_lr;
}

// =============================================================================
// Function: func_0801FE94 @ 0x0801FE94
// =============================================================================
void func_0801FE94(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = *(ushort *)(param_2 + 10);
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar4 = (ushort)_DAT_0801ff1c;
  uVar3 = (ushort)_DAT_0801ff20;
  *param_1 = uVar3 & *param_1 | *(ushort *)(param_2 + 4) & uVar4;
  *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 3 | (byte)((uVar1 & 0x3f) << 2);
  param_1[1] = uVar3 & param_1[1] | uVar1 >> 6 & uVar4;
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 3 | (byte)((uVar2 & 0x3f) << 2);
  param_1[2] = uVar3 & param_1[2] | uVar2 >> 6 & uVar4;
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// =============================================================================
// Function: func_0801FF54 @ 0x0801FF54
// =============================================================================
undefined4 func_0801FF54(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    func_0x080d3910(iVar1,*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
  }
  return in_lr;
}

// =============================================================================
// Function: func_0801FF84 @ 0x0801FF84
// =============================================================================
undefined4 func_0801FF84(undefined4 param_1)

{
  undefined4 in_lr;
  
  func_0x0801ff38(param_1,0x234);
  return in_lr;
}

// =============================================================================
// Function: func_0801FF98 @ 0x0801FF98
// =============================================================================
undefined4 func_0801FF98(undefined4 param_1,ushort *param_2)

{
  undefined4 in_lr;
  
  func_0801FE78(param_1,*param_2 & 0x3ff,
                (int)(short)((ushort)((param_2[1] & _DAT_0801ffd0) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 1) >> 2)),
                (int)(short)((ushort)((param_2[2] & _DAT_0801ffd0) << 6) |
                            (ushort)(*(byte *)((int)param_2 + 3) >> 2)));
  return in_lr;
}

