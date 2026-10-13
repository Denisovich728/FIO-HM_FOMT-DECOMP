// =============================================================================
// Harvest Moon: Friends of Mineral Town (GBA) - Decompiled Source
// Module: ITEM_SYSTEM (79 functions)
// Description: Item registry, tool tier levels, seeds, minerals and inventory valuations
// =============================================================================

#include "../../include/player/item.h"

// =============================================================================
// Function: func_0800D024 @ 0x0800D024
// =============================================================================
undefined8 func_0800D024(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar2 = func_0800CE74();
  iVar4 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    param_1 = param_1 + 0x2c;
    do {
      cVar1 = func_0x0800da08(param_1);
      if (cVar1 == '\0') {
        iVar4 = iVar4 + 1;
      }
      param_1 = param_1 + 0x3c;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return CONCAT44(in_lr,iVar4);
}

// =============================================================================
// Function: func_0800D058 @ 0x0800D058
// =============================================================================
undefined8 func_0800D058(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) < '\0') {
    uVar1 = *(byte *)(param_1 + 4) & 0xf;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800D074 @ 0x0800D074
// =============================================================================
void func_0800D074(short *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = func_0800CE74(param_2);
  if (uVar1 <= param_3) {
    param_3 = func_0x080d0f4e(param_3);
  }
  sVar2 = ((ushort)param_3 & 3) * 0x28;
  if (param_3 < 8) {
    sVar2 = sVar2 + 0xd8;
  }
  else {
    sVar2 = sVar2 + 0x1c8;
  }
  sVar3 = 0x90;
  if ((param_3 & 7) < 4) {
    sVar3 = 0x68;
  }
  *param_1 = sVar2;
  param_1[1] = sVar3;
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

// =============================================================================
// Function: func_0800D158 @ 0x0800D158
// =============================================================================
undefined8 func_0800D158(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if ((((param_2 < uVar1) && (uVar1 = (uint)*(char *)(param_1 + 7 + param_2), -1 < (int)uVar1)) &&
      (uVar2 = func_0800CE74(param_1), uVar1 < uVar2)) &&
     (iVar3 = func_0800DA14(param_1 + uVar1 * 0x3c + 0x2c), iVar3 != 0)) {
    uVar4 = 0;
    uVar1 = func_0809B8D4();
    if ((0x14 < uVar1) || (uVar1 = func_0809B8BC(iVar3), 0x1d < uVar1)) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return CONCAT44(in_lr,uVar4);
}

// =============================================================================
// Function: func_0800D1B4 @ 0x0800D1B4
// =============================================================================
undefined8 func_0800D1B4(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    iVar2 = (int)*(char *)(param_1 + 7 + param_2);
  }
  else {
    iVar2 = -1;
  }
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800D1D8 @ 0x0800D1D8
// =============================================================================
undefined8 func_0800D1D8(undefined4 *param_1)

{
  undefined4 in_lr;
  undefined4 uStack_c;
  
  func_0x0800d0c0(&uStack_c);
  uStack_c = CONCAT22(uStack_c._2_2_,(short)uStack_c + 0x20);
  *param_1 = uStack_c;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800D214 @ 0x0800D214
// =============================================================================
undefined4 func_0800D214(byte *param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    *param_1 = bVar1 & 0xfe | 1U - (char)((int)((uint)bVar1 << 0x1f) >> 0x1f) & 1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D23C @ 0x0800D23C
// =============================================================================
undefined4 func_0800D23C(ushort *param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_14;
  uint uStack_10;
  
  uStack_14 = _DAT_0800d274;
  uStack_10 = ((*param_1 & 0x7ff) >> 1) + param_2;
  puVar1 = &uStack_14;
  if (uStack_10 < _DAT_0800d274) {
    puVar1 = &uStack_10;
  }
  *param_1 = (ushort)_DAT_0800d27c & *param_1 | (ushort)((*puVar1 & _DAT_0800d278) << 1);
  return in_lr;
}

// =============================================================================
// Function: func_0800D280 @ 0x0800D280
// =============================================================================
undefined4 func_0800D280(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = *param_1;
  uVar2 = (uVar1 & 0x7ff) >> 1;
  if (param_2 < uVar2) {
    *param_1 = (ushort)_DAT_0800d2b8 & uVar1 | (ushort)((uVar2 - param_2 & _DAT_0800d2b4) << 1);
  }
  else {
    *param_1 = (ushort)_DAT_0800d298 & uVar1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D2BC @ 0x0800D2BC
// =============================================================================
undefined4 func_0800D2BC(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74();
  if (param_2 < uVar1) {
    uVar1 = (*param_1 & 0x1fffffff) >> 0xd;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *param_1 = _DAT_0800d2f8 & *param_1 | ((uVar1 | uVar2) & _DAT_0800d2f4) << 0xd;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D2FC @ 0x0800D2FC
// =============================================================================
undefined4 func_0800D2FC(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74();
  if (param_2 < uVar1) {
    uVar1 = (*param_1 & 0x1fffffff) >> 0xd;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *param_1 = _DAT_0800d330 & *param_1 | (uVar1 & ~uVar2) << 0xd;
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D334 @ 0x0800D334
// =============================================================================
undefined4 func_0800D334(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    uVar1 = (*(byte *)(param_1 + 3) & 0x7f) >> 5;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) == 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x9f | (byte)((uVar1 | uVar2 & 3) << 5);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D36C @ 0x0800D36C
// =============================================================================
undefined4 func_0800D36C(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0x0800ce9c();
  if (param_2 < uVar1) {
    uVar1 = (*(byte *)(param_1 + 3) & 0x7f) >> 5;
    uVar2 = 1 << (param_2 & 0xff);
    if ((uVar1 & uVar2) != 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x9f | (byte)((uVar1 & ~uVar2) << 5);
    }
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D3A0 @ 0x0800D3A0
// =============================================================================
undefined4 func_0800D3A0(int param_1)

{
  undefined4 in_lr;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 1) * 0x10000000)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 8;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D3B8 @ 0x0800D3B8
// =============================================================================
undefined4 func_0800D3B8(int param_1)

{
  undefined4 in_lr;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 1) * 0x8000000)) {
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x10;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D3D0 @ 0x0800D3D0
// =============================================================================
undefined8 func_0800D3D0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74();
  if (param_2 < uVar1) {
    uVar2 = func_0800DA7C(param_1 + param_2 * 0x3c + 0x2c);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800D3F8 @ 0x0800D3F8
// =============================================================================
undefined8 func_0800D3F8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74();
  if (param_2 < uVar1) {
    uVar2 = func_0800DA98(param_1 + param_2 * 0x3c + 0x2c);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800D420 @ 0x0800D420
// =============================================================================
undefined8 func_0800D420(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = func_0800CE74();
  if (param_2 < uVar1) {
    uVar2 = func_0800DA64(param_1 + param_2 * 0x3c + 0x2c);
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800D448 @ 0x0800D448
// =============================================================================
undefined8 func_0800D448(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  while (iVar2 = func_0800CF88(param_1,iVar2), -1 < iVar2) {
    cVar1 = func_0800DAB4(param_1 + iVar2 * 0x3c + 0x2c,param_2);
    if (cVar1 != '\0') goto LAB_0800d47e;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_0800d47e:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800D484 @ 0x0800D484
// =============================================================================
undefined8 func_0800D484(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  while (iVar2 = func_0800CF88(param_1,iVar2), -1 < iVar2) {
    cVar1 = func_0800DAE4(param_1 + iVar2 * 0x3c + 0x2c,param_2);
    if (cVar1 != '\0') goto LAB_0800d4ba;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_0800d4ba:
  return CONCAT44(in_lr,iVar2);
}

// =============================================================================
// Function: func_0800D4C0 @ 0x0800D4C0
// =============================================================================
undefined4 func_0800D4C0(int param_1,int param_2)

{
  undefined4 in_lr;
  
  func_0800DB14(param_1 + param_2 * 0x3c + 0x2c);
  return in_lr;
}

// =============================================================================
// Function: func_0800D4D4 @ 0x0800D4D4
// =============================================================================
undefined4 func_0800D4D4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar1 = func_0800D420();
  if (iVar1 != 0) {
    uVar2 = func_0x0809b220();
    iVar3 = func_0800D3D0(param_1,param_2);
    if (iVar3 == 0) {
      if ((*(uint *)(param_1 + 4) & 0xffffff) >> 0xe < uVar2) {
        *(uint *)(param_1 + 4) =
             _DAT_0800d5ac & *(uint *)(param_1 + 4) | (uVar2 & _DAT_0800d5a8) << 0xe;
        uVar4 = func_0809B1F4(iVar1);
        uVar2 = strlen();
        if (0xc < uVar2) {
          uVar2 = 0xc;
        }
        memcpy(param_1 + 0x1c,uVar4,uVar2);
        *(undefined1 *)(param_1 + 0x1c + uVar2) = 0;
      }
    }
    else if ((*(ushort *)(param_1 + 4) & 0x3fff) >> 4 < uVar2) {
      *(ushort *)(param_1 + 4) =
           (ushort)_DAT_0800d54c & *(ushort *)(param_1 + 4) | (ushort)((uVar2 & _DAT_0800d548) << 4)
      ;
      uVar4 = func_0809B1F4(iVar1);
      uVar2 = strlen();
      if (0xc < uVar2) {
        uVar2 = 0xc;
      }
      memcpy(param_1 + 0xc,uVar4,uVar2);
      *(undefined1 *)(param_1 + 0xc + uVar2) = 0;
    }
    func_0800D4C0(param_1,param_2);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D5B0 @ 0x0800D5B0
// =============================================================================
undefined4 func_0800D5B0(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  undefined4 in_lr;
  ushort auStack_40 [3];
  undefined1 uStack_3a;
  undefined2 uStack_38;
  undefined2 uStack_36;
  ushort uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  uVar6 = _DAT_0800d790;
  uVar5 = _DAT_0800d78c;
  uVar4 = _DAT_0800d788;
  uVar3 = _DAT_0800d784;
  uVar14 = _DAT_0800d780;
  uVar12 = *param_1;
  uVar8 = ((uVar12 & 0x1fffffff) >> 0xd & _DAT_0800d780) +
          ((uVar12 & 0x1fffffff) >> 0xe & _DAT_0800d780);
  uVar8 = (uVar8 & _DAT_0800d784) + (uVar8 >> 2 & _DAT_0800d784);
  uVar8 = (uVar8 & _DAT_0800d788) + (uVar8 >> 4 & _DAT_0800d788);
  uVar8 = (uVar8 & _DAT_0800d78c) + (uVar8 >> 8 & _DAT_0800d78c);
  uVar11 = uVar8 & _DAT_0800d790;
  uVar8 = uVar8 >> 0x10 & _DAT_0800d790;
  *param_1 = uVar12 & _DAT_0800d794;
  iVar16 = uVar11 + uVar8 +
           (((*(byte *)((int)param_1 + 3) & 0x7f) >> 5 & uVar14) +
            ((*(byte *)((int)param_1 + 3) & 0x7f) >> 6 & uVar14) & uVar3 & uVar4 & uVar5 & uVar6);
  uStack_28 = func_0x0800ce9c(param_1);
  uVar14 = 0;
  if (uStack_28 != 0) {
    do {
      iVar9 = (int)*(char *)((int)param_1 + uVar14 + 7);
      if (((-1 < iVar9) && (iVar9 = func_0800DA64(param_1 + iVar9 * 0xf + 0xb), iVar9 != 0)) &&
         (cVar7 = func_0x0809b8b0(), cVar7 != '\0')) {
        if (((*(byte *)((int)param_1 + 3) & 0x7f) >> 5 & 1 << (uVar14 & 0xff)) != 0) {
          iVar16 = iVar16 + -1;
          func_0809B8F0(iVar9);
        }
        func_0x0800d0c0(&uStack_30,param_1,uVar14);
        uStack_2c = uStack_30;
        uVar3 = uStack_2c;
        uStack_2c._0_2_ = (ushort)uStack_30;
        uStack_2c._2_2_ = (ushort)(uStack_30 >> 0x10);
        uVar2 = (ushort)_DAT_0800d798;
        uVar1 = uVar2 & uStack_38;
        uStack_38._1_1_ = (byte)(uVar1 >> 8);
        uStack_38 = CONCAT11(uStack_38._1_1_ & 3 | (byte)((uStack_30 & 0x3f) << 2),(char)uVar1) |
                    0x25;
        uVar1 = uVar2 & uStack_36 | (ushort)uStack_2c >> 6 & (ushort)_DAT_0800d79c;
        uStack_36._1_1_ = (byte)(uVar1 >> 8);
        uStack_36 = CONCAT11(uStack_36._1_1_ & 3 | (byte)((uStack_2c._2_2_ & 0x3f) << 2),(char)uVar1
                            );
        uStack_34 = uVar2 & uStack_34 | uStack_2c._2_2_ >> 6 & (ushort)_DAT_0800d79c;
        uStack_2c = uVar3;
        memcpy(auStack_40,&uStack_38,6);
        uStack_3a = 3;
        func_0x0809b124(iVar9,auStack_40);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uStack_28);
  }
  *(byte *)((int)param_1 + 3) = *(byte *)((int)param_1 + 3) & 0x9f;
  uStack_24 = func_0800CE74(param_1);
  uVar14 = 0;
  if (uStack_24 != 0) {
    puVar15 = param_1 + 0xb;
    do {
      cVar7 = func_0x0800da08(puVar15);
      if (cVar7 == '\0') {
        iVar9 = func_0800DA7C(puVar15);
        iVar10 = func_0800DA98(puVar15);
        if ((iVar9 != 0) || (iVar10 != 0)) {
          iVar13 = iVar9;
          if (iVar9 == 0) {
            iVar13 = iVar10;
          }
          if ((*(char *)((int)param_1 + 3) < '\0') && (uVar14 == ((byte)param_1[1] & 0xf))) {
            func_0809B8F0(iVar13);
          }
          else {
            cVar7 = func_0x0809b4fc(iVar13);
            if ((cVar7 == '\0') &&
               (((cVar7 = func_0x0809b8b0(iVar13), cVar7 == '\0' && (iVar16 != 0)) &&
                (func_0809B114(auStack_40,iVar13), (auStack_40[0] & 0x3ff) == 0x25)))) {
              iVar16 = iVar16 + -1;
              func_0809B8F0(iVar13);
            }
          }
          if (iVar9 == 0) {
            func_0809BFB4(iVar10);
          }
          else {
            func_0809BE74(iVar9);
          }
        }
      }
      puVar15 = puVar15 + 0xf;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uStack_24);
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D80C @ 0x0800D80C
// =============================================================================
undefined4 func_0800D80C(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = func_0800CE74();
  if (uVar2 <= param_2) {
    param_2 = func_0x080d0f4e(param_2);
  }
  cVar1 = func_0x0800da08(param_1 + param_2 * 0x3c + 0x2c);
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x80;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf0 | (byte)param_2 & 0xf;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D864 @ 0x0800D864
// =============================================================================
undefined4 func_0800D864(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = func_0x0800ce9c();
  if ((((param_2 < uVar2) && (uVar2 = func_0800CE74(param_1), param_3 < uVar2)) &&
      (iVar3 = func_0800DA64(param_1 + param_3 * 0x3c + 0x2c), iVar3 != 0)) &&
     (cVar1 = func_0x0809b8b0(), cVar1 != '\0')) {
    *(char *)(param_1 + 7 + param_2) = (char)param_3;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800D8A8 @ 0x0800D8A8
// =============================================================================
void func_0800D8A8(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_70 [6];
  undefined1 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  ushort uStack_64;
  undefined1 auStack_60 [56];
  uint uStack_28;
  undefined4 uStack_24;
  
  cVar3 = func_0800D158();
  if (cVar3 != '\0') {
    pcVar4 = (char *)(param_1 + 7 + param_2);
    cVar3 = *pcVar4;
    *pcVar4 = -1;
    func_0800D1D8(&uStack_28,param_1,param_2);
    uStack_24 = uStack_28;
    uVar6 = uStack_24;
    uStack_24._0_2_ = (ushort)uStack_28;
    uStack_24._2_2_ = (ushort)(uStack_28 >> 0x10);
    uVar2 = (ushort)_DAT_0800d9a0;
    uVar1 = uVar2 & uStack_68;
    uStack_68._1_1_ = (byte)(uVar1 >> 8);
    uStack_68 = CONCAT11(uStack_68._1_1_ & 3 | (byte)((uStack_28 & 0x3f) << 2),(char)uVar1) | 0x25;
    uVar1 = uVar2 & uStack_66 | (ushort)uStack_24 >> 6;
    uStack_66._1_1_ = (byte)(uVar1 >> 8);
    uStack_66 = CONCAT11(uStack_66._1_1_ & 3 | (byte)((uStack_24._2_2_ & 0x3f) << 2),(char)uVar1);
    uStack_64 = uVar2 & uStack_64 | uStack_24._2_2_ >> 6;
    uStack_24 = uVar6;
    memcpy(auStack_70,&uStack_68,6);
    uStack_6a = 2;
    iVar8 = param_1 + cVar3 * 0x3c + 0x2c;
    iVar5 = func_0800DA7C(iVar8);
    if (iVar5 != 0) {
      func_0x0809b91c();
      func_0809BD70(auStack_60,auStack_70,0,0);
      uVar6 = func_0x0809b228(iVar5);
      if (1 < uVar6 >> 1) {
        uVar7 = func_0x080d11e4();
        uVar7 = func_0x080d0f4e(uVar7,uVar6 >> 1);
        func_0809B2A8(auStack_60,uVar7);
      }
      uVar7 = func_0800D448(param_1,auStack_60);
      goto LAB_0800d9ec;
    }
    iVar5 = func_0800DA98(iVar8);
    if (iVar5 != 0) {
      func_0x0809b91c();
      func_0809BEBC(&uStack_68,auStack_70,0,0);
      uVar6 = func_0x0809b228(iVar5);
      if (1 < uVar6 >> 1) {
        uVar7 = func_0x080d11e4();
        uVar7 = func_0x080d0f4e(uVar7,uVar6 >> 1);
        func_0809B2A8(&uStack_68,uVar7);
      }
      uVar7 = func_0800D484(param_1,&uStack_68);
      goto LAB_0800d9ec;
    }
  }
  uVar7 = 0xffffffff;
LAB_0800d9ec:
  (*UNRECOVERED_JUMPTABLE)(uVar7);
  return;
}

// =============================================================================
// Function: func_0800DA14 @ 0x0800DA14
// =============================================================================
undefined8 func_0800DA14(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*param_1 & 1) != 0) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

// =============================================================================
// Function: func_0800DA2C @ 0x0800DA2C
// =============================================================================
undefined8 func_0800DA2C(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*param_1 & 1) != 0) && ((int)((uint)*param_1 * 0x40000000) < 0)) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

// =============================================================================
// Function: func_0800DA48 @ 0x0800DA48
// =============================================================================
undefined8 func_0800DA48(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*param_1 & 1) != 0) && (-1 < (int)((uint)*param_1 * 0x40000000))) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

// =============================================================================
// Function: func_0800DA64 @ 0x0800DA64
// =============================================================================
undefined8 func_0800DA64(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if ((*param_1 & 1) != 0) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

// =============================================================================
// Function: func_0800DA7C @ 0x0800DA7C
// =============================================================================
undefined8 func_0800DA7C(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*param_1 & 1) != 0) && ((int)((uint)*param_1 * 0x40000000) < 0)) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

// =============================================================================
// Function: func_0800DA98 @ 0x0800DA98
// =============================================================================
undefined8 func_0800DA98(byte *param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)0x0;
  if (((*param_1 & 1) != 0) && (-1 < (int)((uint)*param_1 * 0x40000000))) {
    pbVar1 = param_1 + 4;
  }
  return CONCAT44(in_lr,pbVar1);
}

// =============================================================================
// Function: func_0800DAB4 @ 0x0800DAB4
// =============================================================================
undefined8 func_0800DAB4(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    if (param_1 != (byte *)0xfffffffc) {
      func_080D7BC4();
    }
    *param_1 = *param_1 | 3;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DAE4 @ 0x0800DAE4
// =============================================================================
undefined8 func_0800DAE4(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*param_1 & 1) == 0) {
    if (param_1 != (byte *)0xfffffffc) {
      func_080D7B50();
    }
    uVar1 = 1;
    *param_1 = *param_1 & 0xfd | 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DB14 @ 0x0800DB14
// =============================================================================
undefined4 func_0800DB14(byte *param_1)

{
  undefined4 in_lr;
  
  if ((*param_1 & 1) != 0) {
    *param_1 = *param_1 & 0xfe;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800DB34 @ 0x0800DB34
// =============================================================================
undefined8 func_0800DB34(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800db48;
  if (*param_1 < 0x51) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0xc + _DAT_0800db5c);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DB60 @ 0x0800DB60
// =============================================================================
undefined8 func_0800DB60(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800db74;
  if (*param_1 < 0x51) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0xc + _DAT_0800db88 + 4);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DB8C @ 0x0800DB8C
// =============================================================================
undefined8 func_0800DB8C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800dbc4;
  if ((*param_1 < 0x51) && (iVar1 = *(int *)((uint)*param_1 * 0xc + _DAT_0800dbb4 + 8), iVar1 == 0))
  {
    iVar1 = _DAT_0800dbb8;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800DBC8 @ 0x0800DBC8
// =============================================================================
undefined8 func_0800DBC8(int param_1)

{
  undefined4 in_lr;
  
  func_0x0800db2c(param_1,0x51);
  *(undefined1 *)(param_1 + 1) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800DBE0 @ 0x0800DBE0
// =============================================================================
undefined8 func_0800DBE0(undefined1 *param_1,undefined1 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = param_3;
  *param_1 = param_2;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    uStack_10 = 99;
    puVar2 = &uStack_10;
    if (param_3 < 99) {
      puVar2 = &uStack_c;
    }
    uVar1 = (undefined1)*puVar2;
  }
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800DC10 @ 0x0800DC10
// =============================================================================
undefined8 func_0800DC10(byte *param_1)

{
  undefined4 in_lr;
  byte abStack_8 [4];
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  if (param_1[1] == 0) {
    func_0x0800db2c(abStack_8,0x51);
  }
  else {
    abStack_8[0] = *param_1;
  }
  return CONCAT44(uStack_4,(uint)abStack_8[0]);
}

// =============================================================================
// Function: func_0800DC34 @ 0x0800DC34
// =============================================================================
undefined8 func_0800DC34(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(char *)(param_1 + 1) == '\0'));
}

// =============================================================================
// Function: func_0800DC48 @ 0x0800DC48
// =============================================================================
undefined8 func_0800DC48(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 1);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DC5C @ 0x0800DC5C
// =============================================================================
undefined4 func_0800DC5C(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 1) != '\0') {
    uStack_10 = 99;
    uStack_c = (uint)*(byte *)(param_1 + 1) + param_2;
    puVar1 = &uStack_10;
    if (uStack_c < 99) {
      puVar1 = &uStack_c;
    }
    *(char *)(param_1 + 1) = (char)*puVar1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800DC8C @ 0x0800DC8C
// =============================================================================
undefined4 func_0800DC8C(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 != 0) {
    if (param_2 < bVar1) {
      cVar2 = bVar1 - (char)param_2;
    }
    else {
      cVar2 = '\0';
    }
    *(char *)(param_1 + 1) = cVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800DCB8 @ 0x0800DCB8
// =============================================================================
undefined8 func_0800DCB8(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800dccc;
  if (*param_1 < 0xab) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0x10 + _DAT_0800dcdc);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DCE0 @ 0x0800DCE0
// =============================================================================
undefined8 func_0800DCE0(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0x10 + _DAT_0800dd04 + 8);
  }
  else {
    uVar1 = 0x1ac;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DD08 @ 0x0800DD08
// =============================================================================
undefined8 func_0800DD08(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)*(char *)((uint)*param_1 * 0x10 + _DAT_0800dd38 + 5) + (int)(char)param_1[1];
  }
  else {
    iVar1 = -100;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800DD3C @ 0x0800DD3C
// =============================================================================
undefined8 func_0800DD3C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)*(char *)((uint)*param_1 * 0x10 + _DAT_0800dd68 + 6) + (int)(char)param_1[2];
  }
  else {
    iVar1 = 100;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800DD6C @ 0x0800DD6C
// =============================================================================
undefined8 func_0800DD6C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[1];
  }
  else {
    iVar1 = -100;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800DD8C @ 0x0800DD8C
// =============================================================================
undefined8 func_0800DD8C(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[2];
  }
  else {
    iVar1 = 100;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800DDAC @ 0x0800DDAC
// =============================================================================
undefined8 func_0800DDAC(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    uVar1 = *(byte *)((uint)*param_1 * 0x10 + _DAT_0800ddd0 + 4) & 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DDD4 @ 0x0800DDD4
// =============================================================================
undefined8 func_0800DDD4(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800de08;
  if ((*param_1 < 0xab) &&
     (iVar1 = *(int *)((uint)*param_1 * 0x10 + _DAT_0800ddf8 + 0xc), iVar1 == 0)) {
    iVar1 = _DAT_0800ddfc;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800DE0C @ 0x0800DE0C
// =============================================================================
undefined4 func_0800DE0C(byte *param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*param_1 < 0xab) {
    iVar1 = (int)(char)param_1[1] + (int)param_2;
    iVar2 = -0x80;
    if ((-0x81 < iVar1) && (iVar2 = iVar1, 0x7f < iVar1)) {
      iVar2 = 0x7f;
    }
    param_1[1] = (byte)iVar2;
    iVar1 = (int)(char)param_1[2] + (int)param_3;
    iVar2 = -0x80;
    if ((-0x81 < iVar1) && (iVar2 = iVar1, 0x7f < iVar1)) {
      iVar2 = 0x7f;
    }
    param_1[2] = (byte)iVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800DE68 @ 0x0800DE68
// =============================================================================
undefined8 func_0800DE68(int param_1)

{
  undefined4 in_lr;
  
  func_0x0800dca8(param_1,0xab);
  *(undefined1 *)(param_1 + 3) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800DE80 @ 0x0800DE80
// =============================================================================
undefined8 func_0800DE80(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 in_lr;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  uStack_14 = param_2;
  uStack_c = param_3;
  memcpy(param_1,&uStack_14,3);
  if (uStack_c == 0) {
    uVar1 = 1;
  }
  else {
    uStack_10 = 99;
    puVar2 = &uStack_10;
    if (uStack_c < 99) {
      puVar2 = &uStack_c;
    }
    uVar1 = (undefined1)*puVar2;
  }
  *(undefined1 *)(param_1 + 3) = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800DEB8 @ 0x0800DEB8
// =============================================================================
undefined8 func_0800DEB8(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_2 + 3) == '\0') {
    func_0x0800dca8(param_1,0xab);
  }
  else {
    memcpy(param_1,param_2,3);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800DEDC @ 0x0800DEDC
// =============================================================================
undefined8 func_0800DEDC(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(char *)(param_1 + 3) == '\0'));
}

// =============================================================================
// Function: func_0800DEF0 @ 0x0800DEF0
// =============================================================================
undefined8 func_0800DEF0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 3);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DF04 @ 0x0800DF04
// =============================================================================
undefined4 func_0800DF04(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 3) != '\0') {
    uStack_10 = 99;
    uStack_c = (uint)*(byte *)(param_1 + 3) + param_2;
    puVar1 = &uStack_10;
    if (uStack_c < 99) {
      puVar1 = &uStack_c;
    }
    *(char *)(param_1 + 3) = (char)*puVar1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800DF34 @ 0x0800DF34
// =============================================================================
undefined4 func_0800DF34(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 != 0) {
    if (param_2 < bVar1) {
      cVar2 = bVar1 - (char)param_2;
    }
    else {
      cVar2 = '\0';
    }
    *(char *)(param_1 + 3) = cVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800DF58 @ 0x0800DF58
// =============================================================================
undefined8 func_0800DF58(byte *param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800df6c;
  if (*param_1 < 0x5f) {
    uVar1 = *(undefined4 *)((uint)*param_1 * 0xc + _DAT_0800df80);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DF84 @ 0x0800DF84
// =============================================================================
undefined8 func_0800DF84(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = _DAT_0800df98;
  if (*param_1 < 0x5f) {
    uVar1 = (uint)*(ushort *)((uint)*param_1 * 0xc + _DAT_0800dfac + 4);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800DFB0 @ 0x0800DFB0
// =============================================================================
undefined8 func_0800DFB0(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *param_1;
  if (bVar1 < 0x40) {
    if ((bVar1 < 0x3b) && ((0x27 < bVar1 || (bVar1 < 0x25)))) {
LAB_0800dfca:
      uVar2 = 1;
      goto LAB_0800dfd0;
    }
  }
  else if (bVar1 != 0x5e) goto LAB_0800dfca;
  uVar2 = 0;
LAB_0800dfd0:
  return CONCAT44(in_lr,uVar2);
}

// =============================================================================
// Function: func_0800DFD4 @ 0x0800DFD4
// =============================================================================
undefined8 func_0800DFD4(byte *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = _DAT_0800e00c;
  if ((*param_1 < 0x5f) && (iVar1 = *(int *)((uint)*param_1 * 0xc + _DAT_0800dffc + 8), iVar1 == 0))
  {
    iVar1 = _DAT_0800e000;
  }
  return CONCAT44(in_lr,iVar1);
}

// =============================================================================
// Function: func_0800E010 @ 0x0800E010
// =============================================================================
undefined8 func_0800E010(int param_1)

{
  undefined4 in_lr;
  
  func_0x0800df50(param_1,0x5f);
  *(undefined1 *)(param_1 + 1) = 0;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800E028 @ 0x0800E028
// =============================================================================
undefined8 func_0800E028(undefined1 *param_1,undefined1 param_2,uint param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = param_3;
  *param_1 = param_2;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    uStack_10 = 99;
    puVar2 = &uStack_10;
    if (param_3 < 99) {
      puVar2 = &uStack_c;
    }
    uVar1 = (undefined1)*puVar2;
  }
  param_1[1] = uVar1;
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800E058 @ 0x0800E058
// =============================================================================
undefined8 func_0800E058(byte *param_1)

{
  undefined4 in_lr;
  byte abStack_8 [4];
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  if (param_1[1] == 0) {
    func_0x0800df50(abStack_8,0x5f);
  }
  else {
    abStack_8[0] = *param_1;
  }
  return CONCAT44(uStack_4,(uint)abStack_8[0]);
}

// =============================================================================
// Function: func_0800E07C @ 0x0800E07C
// =============================================================================
undefined8 func_0800E07C(int param_1)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)(*(char *)(param_1 + 1) == '\0'));
}

// =============================================================================
// Function: func_0800E090 @ 0x0800E090
// =============================================================================
undefined8 func_0800E090(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 1);
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800E0A4 @ 0x0800E0A4
// =============================================================================
undefined4 func_0800E0A4(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 in_lr;
  uint uStack_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 1) != '\0') {
    uStack_10 = 99;
    uStack_c = (uint)*(byte *)(param_1 + 1) + param_2;
    puVar1 = &uStack_10;
    if (uStack_c < 99) {
      puVar1 = &uStack_c;
    }
    *(char *)(param_1 + 1) = (char)*puVar1;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800E0D4 @ 0x0800E0D4
// =============================================================================
undefined4 func_0800E0D4(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 != 0) {
    if (param_2 < bVar1) {
      cVar2 = bVar1 - (char)param_2;
    }
    else {
      cVar2 = '\0';
    }
    *(char *)(param_1 + 1) = cVar2;
  }
  return in_lr;
}

// =============================================================================
// Function: func_0800E148 @ 0x0800E148
// =============================================================================
undefined8 func_0800E148(undefined1 *param_1,undefined1 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  *param_1 = 0x67;
  auStack_c[0] = param_2;
  uVar1 = func_0x0800df54(auStack_c);
  iVar3 = 0;
  piVar2 = _DAT_0800e164;
  while ((-1 < *piVar2 * 0x10000 || (*(byte *)((int)piVar2 + 2) != uVar1))) {
    iVar3 = iVar3 + 1;
    if (0x66 < iVar3) goto LAB_0800e184;
    piVar2 = (int *)(iVar3 * 4 + _DAT_0800e190);
  }
  *param_1 = (char)iVar3;
LAB_0800e184:
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800E198 @ 0x0800E198
// =============================================================================
void func_0800E198(byte *param_1)

{
  ushort uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 < 0x67) {
    uVar1 = *(ushort *)((uint)*param_1 * 4 + _DAT_0800e1bc) & 0x7fff;
  }
  else {
    uVar1 = 0;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// =============================================================================
// Function: func_0800E1C0 @ 0x0800E1C0
// =============================================================================
undefined8 func_0800E1C0(byte *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  uVar1 = _DAT_0800e210;
  if (*param_1 < 0x67) {
    piVar2 = (int *)((uint)*param_1 * 4 + _DAT_0800e1f0);
    if (*piVar2 * 0x10000 < 0) {
      func_0x0800df50(auStack_c,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = func_0800DF58(auStack_c);
    }
    else {
      func_0x0800dca8(auStack_10,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = func_0800DCB8(auStack_10);
    }
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800E214 @ 0x0800E214
// =============================================================================
undefined8 func_0800E214(byte *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  if (*param_1 < 0x67) {
    piVar2 = (int *)((uint)*param_1 * 4 + _DAT_0800e244);
    if (*piVar2 * 0x10000 < 0) {
      func_0x0800df50(auStack_c,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = func_0800DF84(auStack_c);
    }
    else {
      func_0x0800dca8(auStack_10,*(undefined1 *)((int)piVar2 + 2));
      uVar1 = func_0800DCE0(auStack_10);
    }
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

// =============================================================================
// Function: func_0800E268 @ 0x0800E268
// =============================================================================
undefined8 func_0800E268(ushort *param_1)

{
  undefined4 in_lr;
  byte abStack_8 [4];
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  if ((*param_1 & 3) == 0) {
    func_0x0800db2c(abStack_8,*param_1 >> 2);
  }
  else {
    func_0x0800db2c(abStack_8,0x51);
  }
  return CONCAT44(uStack_4,(uint)abStack_8[0]);
}

// =============================================================================
// Function: func_0800E290 @ 0x0800E290
// =============================================================================
undefined8 func_0800E290(undefined4 param_1,ushort *param_2)

{
  undefined4 in_lr;
  
  if ((*param_2 & 3) == 1) {
    func_0x0800dca8(param_1,*param_2 >> 2);
  }
  else {
    func_0x0800dca8(param_1,0xab);
  }
  return CONCAT44(in_lr,param_1);
}

// =============================================================================
// Function: func_0800E2B8 @ 0x0800E2B8
// =============================================================================
undefined8 func_0800E2B8(ushort *param_1)

{
  undefined4 in_lr;
  byte abStack_8 [4];
  undefined4 uStack_4;
  
  uStack_4 = in_lr;
  if ((*param_1 & 3) == 2) {
    func_0x0800df50(abStack_8,*param_1 >> 2);
  }
  else {
    func_0x0800df50(abStack_8,0x5f);
  }
  return CONCAT44(uStack_4,(uint)abStack_8[0]);
}

